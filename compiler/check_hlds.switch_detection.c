/*
** Automatically generated from `switch_detection.m'
** by the Mercury compiler,
** version rotd-2014-12-18
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
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 142 "check_hlds.switch_detection.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__switch_detection__set_tree234__pti_set_tree234_1__plain_parse_tree__prog_data__type_ctor_info_cons_id_0;

#line 145 "check_hlds.switch_detection.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__switch_detection__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_cons_id_0__plain_check_hlds__switch_detection__type_ctor_info_cons_id_entry_0;

#line 148 "check_hlds.switch_detection.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__switch_detection__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_case_0;

#line 151 "check_hlds.switch_detection.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__switch_detection__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0;

#line 154 "check_hlds.switch_detection.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__switch_detection__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 157 "check_hlds.switch_detection.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__switch_detection__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_cons_id_0;

#line 160 "check_hlds.switch_detection.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__switch_detection__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 163 "check_hlds.switch_detection.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__switch_detection__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0;

#line 166 "check_hlds.switch_detection.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__switch_detection__list__ti_list_1hlds__hlds_goal__type_ctor_info_case_0;

#line 169 "check_hlds.switch_detection.c"
static const MR_PseudoTypeInfo check_hlds__switch_detection__check_hlds__switch_detection__field_types_again_0_0[3];

#line 172 "check_hlds.switch_detection.c"
static const MR_DuFunctorDesc check_hlds__switch_detection__check_hlds__switch_detection__du_functor_desc_again_0_0;

#line 175 "check_hlds.switch_detection.c"
static const MR_DuFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__du_stag_ordered_again_0_0[1];

#line 178 "check_hlds.switch_detection.c"
static const MR_DuPtagLayout check_hlds__switch_detection__check_hlds__switch_detection__du_ptag_ordered_again_0[1];

#line 181 "check_hlds.switch_detection.c"
static const MR_DuFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__du_name_ordered_again_0[1];

#line 184 "check_hlds.switch_detection.c"
static const MR_Integer check_hlds__switch_detection__check_hlds__switch_detection__functor_number_map_again_0[1];

#line 187 "check_hlds.switch_detection.c"
static const MR_EnumFunctorDesc check_hlds__switch_detection__check_hlds__switch_detection__enum_functor_desc_allow_multi_arm_0_0;

#line 190 "check_hlds.switch_detection.c"
static const MR_EnumFunctorDesc check_hlds__switch_detection__check_hlds__switch_detection__enum_functor_desc_allow_multi_arm_0_1;

#line 193 "check_hlds.switch_detection.c"
static const MR_EnumFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__enum_value_ordered_allow_multi_arm_0[2];

#line 196 "check_hlds.switch_detection.c"
static const MR_EnumFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__enum_name_ordered_allow_multi_arm_0[2];

#line 199 "check_hlds.switch_detection.c"
static const MR_Integer check_hlds__switch_detection__check_hlds__switch_detection__functor_number_map_allow_multi_arm_0[2];

#line 202 "check_hlds.switch_detection.c"
static const MR_PseudoTypeInfo check_hlds__switch_detection__check_hlds__switch_detection__field_types_case_arm_0_0[2];

#line 205 "check_hlds.switch_detection.c"
static const MR_DuFunctorDesc check_hlds__switch_detection__check_hlds__switch_detection__du_functor_desc_case_arm_0_0;

#line 208 "check_hlds.switch_detection.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__switch_detection__list__ti_list_1parse_tree__prog_data__type_ctor_info_cons_id_0;

#line 211 "check_hlds.switch_detection.c"
static const MR_PseudoTypeInfo check_hlds__switch_detection__check_hlds__switch_detection__field_types_case_arm_0_1[3];

#line 214 "check_hlds.switch_detection.c"
static const MR_DuFunctorDesc check_hlds__switch_detection__check_hlds__switch_detection__du_functor_desc_case_arm_0_1;

#line 217 "check_hlds.switch_detection.c"
static const MR_DuFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__du_stag_ordered_case_arm_0_0[1];

#line 220 "check_hlds.switch_detection.c"
static const MR_DuFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__du_stag_ordered_case_arm_0_1[1];

#line 223 "check_hlds.switch_detection.c"
static const MR_DuPtagLayout check_hlds__switch_detection__check_hlds__switch_detection__du_ptag_ordered_case_arm_0[2];

#line 226 "check_hlds.switch_detection.c"
static const MR_DuFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__du_name_ordered_case_arm_0[2];

#line 229 "check_hlds.switch_detection.c"
static const MR_Integer check_hlds__switch_detection__check_hlds__switch_detection__functor_number_map_case_arm_0[2];

#line 232 "check_hlds.switch_detection.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__switch_detection__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_cons_id_0check_hlds__switch_detection__type_ctor_info_cons_id_entry_0;

#line 235 "check_hlds.switch_detection.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__switch_detection__set_tree234__ti_set_tree234_1parse_tree__prog_data__type_ctor_info_cons_id_0;

#line 238 "check_hlds.switch_detection.c"
static const MR_PseudoTypeInfo check_hlds__switch_detection__check_hlds__switch_detection__field_types_cases_table_0_0[2];

#line 241 "check_hlds.switch_detection.c"
static const MR_ConstString check_hlds__switch_detection__check_hlds__switch_detection__field_names_cases_table_0_0[2];

#line 244 "check_hlds.switch_detection.c"
static const MR_DuFunctorDesc check_hlds__switch_detection__check_hlds__switch_detection__du_functor_desc_cases_table_0_0;

#line 247 "check_hlds.switch_detection.c"
static const MR_DuFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__du_stag_ordered_cases_table_0_0[1];

#line 250 "check_hlds.switch_detection.c"
static const MR_DuPtagLayout check_hlds__switch_detection__check_hlds__switch_detection__du_ptag_ordered_cases_table_0[1];

#line 253 "check_hlds.switch_detection.c"
static const MR_DuFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__du_name_ordered_cases_table_0[1];

#line 256 "check_hlds.switch_detection.c"
static const MR_Integer check_hlds__switch_detection__check_hlds__switch_detection__functor_number_map_cases_table_0[1];

#line 259 "check_hlds.switch_detection.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__switch_detection__cord__ti_cord_1check_hlds__switch_detection__type_ctor_info_case_arm_0;

#line 262 "check_hlds.switch_detection.c"
static const MR_PseudoTypeInfo check_hlds__switch_detection__check_hlds__switch_detection__field_types_cons_id_entry_0_0[2];

#line 265 "check_hlds.switch_detection.c"
static const MR_ConstString check_hlds__switch_detection__check_hlds__switch_detection__field_names_cons_id_entry_0_0[2];

#line 268 "check_hlds.switch_detection.c"
static const MR_DuFunctorDesc check_hlds__switch_detection__check_hlds__switch_detection__du_functor_desc_cons_id_entry_0_0;

#line 271 "check_hlds.switch_detection.c"
static const MR_DuFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__du_stag_ordered_cons_id_entry_0_0[1];

#line 274 "check_hlds.switch_detection.c"
static const MR_DuPtagLayout check_hlds__switch_detection__check_hlds__switch_detection__du_ptag_ordered_cons_id_entry_0[1];

#line 277 "check_hlds.switch_detection.c"
static const MR_DuFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__du_name_ordered_cons_id_entry_0[1];

#line 280 "check_hlds.switch_detection.c"
static const MR_Integer check_hlds__switch_detection__check_hlds__switch_detection__functor_number_map_cons_id_entry_0[1];

#line 283 "check_hlds.switch_detection.c"
static const MR_EnumFunctorDesc check_hlds__switch_detection__check_hlds__switch_detection__enum_functor_desc_cons_id_state_0_0;

#line 286 "check_hlds.switch_detection.c"
static const MR_EnumFunctorDesc check_hlds__switch_detection__check_hlds__switch_detection__enum_functor_desc_cons_id_state_0_1;

#line 289 "check_hlds.switch_detection.c"
static const MR_EnumFunctorDesc check_hlds__switch_detection__check_hlds__switch_detection__enum_functor_desc_cons_id_state_0_2;

#line 292 "check_hlds.switch_detection.c"
static const MR_EnumFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__enum_value_ordered_cons_id_state_0[3];

#line 295 "check_hlds.switch_detection.c"
static const MR_EnumFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__enum_name_ordered_cons_id_state_0[3];

#line 298 "check_hlds.switch_detection.c"
static const MR_Integer check_hlds__switch_detection__check_hlds__switch_detection__functor_number_map_cons_id_state_0[3];

#line 301 "check_hlds.switch_detection.c"
static const MR_EnumFunctorDesc check_hlds__switch_detection__check_hlds__switch_detection__enum_functor_desc_deconstruct_search_0_0;

#line 304 "check_hlds.switch_detection.c"
static const MR_EnumFunctorDesc check_hlds__switch_detection__check_hlds__switch_detection__enum_functor_desc_deconstruct_search_0_1;

#line 307 "check_hlds.switch_detection.c"
static const MR_EnumFunctorDesc check_hlds__switch_detection__check_hlds__switch_detection__enum_functor_desc_deconstruct_search_0_2;

#line 310 "check_hlds.switch_detection.c"
static const MR_EnumFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__enum_value_ordered_deconstruct_search_0[3];

#line 313 "check_hlds.switch_detection.c"
static const MR_EnumFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__enum_name_ordered_deconstruct_search_0[3];

#line 316 "check_hlds.switch_detection.c"
static const MR_Integer check_hlds__switch_detection__check_hlds__switch_detection__functor_number_map_deconstruct_search_0[3];

#line 319 "check_hlds.switch_detection.c"
static const MR_EnumFunctorDesc check_hlds__switch_detection__check_hlds__switch_detection__enum_functor_desc_found_deconstruct_0_0;

#line 322 "check_hlds.switch_detection.c"
static const MR_EnumFunctorDesc check_hlds__switch_detection__check_hlds__switch_detection__enum_functor_desc_found_deconstruct_0_1;

#line 325 "check_hlds.switch_detection.c"
static const MR_EnumFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__enum_value_ordered_found_deconstruct_0[2];

#line 328 "check_hlds.switch_detection.c"
static const MR_EnumFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__enum_name_ordered_found_deconstruct_0[2];

#line 331 "check_hlds.switch_detection.c"
static const MR_Integer check_hlds__switch_detection__check_hlds__switch_detection__functor_number_map_found_deconstruct_0[2];

#line 334 "check_hlds.switch_detection.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__switch_detection__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 337 "check_hlds.switch_detection.c"
static const MR_PseudoTypeInfo check_hlds__switch_detection__check_hlds__switch_detection__field_types_local_switch_detect_info_0_0[4];

#line 340 "check_hlds.switch_detection.c"
static const MR_ConstString check_hlds__switch_detection__check_hlds__switch_detection__field_names_local_switch_detect_info_0_0[4];

#line 343 "check_hlds.switch_detection.c"
static const MR_DuFunctorDesc check_hlds__switch_detection__check_hlds__switch_detection__du_functor_desc_local_switch_detect_info_0_0;

#line 346 "check_hlds.switch_detection.c"
static const MR_DuFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__du_stag_ordered_local_switch_detect_info_0_0[1];

#line 349 "check_hlds.switch_detection.c"
static const MR_DuPtagLayout check_hlds__switch_detection__check_hlds__switch_detection__du_ptag_ordered_local_switch_detect_info_0[1];

#line 352 "check_hlds.switch_detection.c"
static const MR_DuFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__du_name_ordered_local_switch_detect_info_0[1];

#line 355 "check_hlds.switch_detection.c"
static const MR_Integer check_hlds__switch_detection__check_hlds__switch_detection__functor_number_map_local_switch_detect_info_0[1];

#line 358 "check_hlds.switch_detection.c"
static const MR_VA_PseudoTypeInfo_Struct7 check_hlds__switch_detection____vpti_pred_7__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0__plain_list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0__pseudo_1__pseudo_1__pseudo_2__pseudo_2;

#line 361 "check_hlds.switch_detection.c"
static const MR_PseudoTypeInfo check_hlds__switch_detection__check_hlds__switch_detection__field_types_switch_detect_info_0_0[2];

#line 364 "check_hlds.switch_detection.c"
static const MR_ConstString check_hlds__switch_detection__check_hlds__switch_detection__field_names_switch_detect_info_0_0[2];

#line 367 "check_hlds.switch_detection.c"
static const MR_DuFunctorDesc check_hlds__switch_detection__check_hlds__switch_detection__du_functor_desc_switch_detect_info_0_0;

#line 370 "check_hlds.switch_detection.c"
static const MR_DuFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__du_stag_ordered_switch_detect_info_0_0[1];

#line 373 "check_hlds.switch_detection.c"
static const MR_DuPtagLayout check_hlds__switch_detection__check_hlds__switch_detection__du_ptag_ordered_switch_detect_info_0[1];

#line 376 "check_hlds.switch_detection.c"
static const MR_DuFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__du_name_ordered_switch_detect_info_0[1];

#line 379 "check_hlds.switch_detection.c"
static const MR_Integer check_hlds__switch_detection__check_hlds__switch_detection__functor_number_map_switch_detect_info_0[1];

#line 382 "check_hlds.switch_detection.c"
static MR_bool MR_CALL 
check_hlds__switch_detection____Unify____again_0_0_10001(
#line 385 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_1,
#line 387 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_2);

#line 390 "check_hlds.switch_detection.c"
static void MR_CALL 
check_hlds__switch_detection____Compare____again_0_0_10001(
#line 393 "check_hlds.switch_detection.c"
  MR_Box * check_hlds__switch_detection__wrapper_arg_1,
#line 395 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_2,
#line 397 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_3);

#line 400 "check_hlds.switch_detection.c"
static MR_bool MR_CALL 
check_hlds__switch_detection____Unify____allow_multi_arm_0_0_10001(
#line 403 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_1,
#line 405 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_2);

#line 408 "check_hlds.switch_detection.c"
static void MR_CALL 
check_hlds__switch_detection____Compare____allow_multi_arm_0_0_10001(
#line 411 "check_hlds.switch_detection.c"
  MR_Box * check_hlds__switch_detection__wrapper_arg_1,
#line 413 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_2,
#line 415 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_3);

#line 418 "check_hlds.switch_detection.c"
static MR_bool MR_CALL 
check_hlds__switch_detection____Unify____case_arm_0_0_10001(
#line 421 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_1,
#line 423 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_2);

#line 426 "check_hlds.switch_detection.c"
static void MR_CALL 
check_hlds__switch_detection____Compare____case_arm_0_0_10001(
#line 429 "check_hlds.switch_detection.c"
  MR_Box * check_hlds__switch_detection__wrapper_arg_1,
#line 431 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_2,
#line 433 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_3);

#line 436 "check_hlds.switch_detection.c"
static MR_bool MR_CALL 
check_hlds__switch_detection____Unify____cases_table_0_0_10001(
#line 439 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_1,
#line 441 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_2);

#line 444 "check_hlds.switch_detection.c"
static void MR_CALL 
check_hlds__switch_detection____Compare____cases_table_0_0_10001(
#line 447 "check_hlds.switch_detection.c"
  MR_Box * check_hlds__switch_detection__wrapper_arg_1,
#line 449 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_2,
#line 451 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_3);

#line 454 "check_hlds.switch_detection.c"
static MR_bool MR_CALL 
check_hlds__switch_detection____Unify____cons_id_entry_0_0_10001(
#line 457 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_1,
#line 459 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_2);

#line 462 "check_hlds.switch_detection.c"
static void MR_CALL 
check_hlds__switch_detection____Compare____cons_id_entry_0_0_10001(
#line 465 "check_hlds.switch_detection.c"
  MR_Box * check_hlds__switch_detection__wrapper_arg_1,
#line 467 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_2,
#line 469 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_3);

#line 472 "check_hlds.switch_detection.c"
static MR_bool MR_CALL 
check_hlds__switch_detection____Unify____cons_id_state_0_0_10001(
#line 475 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_1,
#line 477 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_2);

#line 480 "check_hlds.switch_detection.c"
static void MR_CALL 
check_hlds__switch_detection____Compare____cons_id_state_0_0_10001(
#line 483 "check_hlds.switch_detection.c"
  MR_Box * check_hlds__switch_detection__wrapper_arg_1,
#line 485 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_2,
#line 487 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_3);

#line 490 "check_hlds.switch_detection.c"
static MR_bool MR_CALL 
check_hlds__switch_detection____Unify____deconstruct_search_0_0_10001(
#line 493 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_1,
#line 495 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_2);

#line 498 "check_hlds.switch_detection.c"
static void MR_CALL 
check_hlds__switch_detection____Compare____deconstruct_search_0_0_10001(
#line 501 "check_hlds.switch_detection.c"
  MR_Box * check_hlds__switch_detection__wrapper_arg_1,
#line 503 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_2,
#line 505 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_3);

#line 508 "check_hlds.switch_detection.c"
static MR_bool MR_CALL 
check_hlds__switch_detection____Unify____found_deconstruct_0_0_10001(
#line 511 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_1,
#line 513 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_2);

#line 516 "check_hlds.switch_detection.c"
static void MR_CALL 
check_hlds__switch_detection____Compare____found_deconstruct_0_0_10001(
#line 519 "check_hlds.switch_detection.c"
  MR_Box * check_hlds__switch_detection__wrapper_arg_1,
#line 521 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_2,
#line 523 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_3);

#line 526 "check_hlds.switch_detection.c"
static MR_bool MR_CALL 
check_hlds__switch_detection____Unify____local_switch_detect_info_0_0_10001(
#line 529 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_1,
#line 531 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_2);

#line 534 "check_hlds.switch_detection.c"
static void MR_CALL 
check_hlds__switch_detection____Compare____local_switch_detect_info_0_0_10001(
#line 537 "check_hlds.switch_detection.c"
  MR_Box * check_hlds__switch_detection__wrapper_arg_1,
#line 539 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_2,
#line 541 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_3);

#line 544 "check_hlds.switch_detection.c"
static MR_bool MR_CALL 
check_hlds__switch_detection____Unify____process_unify_2_0_10001(
#line 547 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_1,
#line 549 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_2,
#line 551 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_3,
#line 553 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_4);

#line 556 "check_hlds.switch_detection.c"
static void MR_CALL 
check_hlds__switch_detection____Compare____process_unify_2_0_10001(
#line 559 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_1,
#line 561 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_2,
#line 563 "check_hlds.switch_detection.c"
  MR_Box * check_hlds__switch_detection__wrapper_arg_3,
#line 565 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_4,
#line 567 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_5);

#line 570 "check_hlds.switch_detection.c"
static MR_bool MR_CALL 
check_hlds__switch_detection____Unify____switch_detect_info_0_0_10001(
#line 573 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_1,
#line 575 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_2);

#line 578 "check_hlds.switch_detection.c"
static void MR_CALL 
check_hlds__switch_detection____Compare____switch_detect_info_0_0_10001(
#line 581 "check_hlds.switch_detection.c"
  MR_Box * check_hlds__switch_detection__wrapper_arg_1,
#line 583 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_2,
#line 585 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_3);

#line 1018 "switch_detection.m"
static void MR_CALL 
check_hlds__switch_detection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_106_95_102_105_110_100_95_98_105_110_100_95_118_97_114_95_95_91_49_44_32_50_93_95_48_11_p_0(
#line 1018 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__1_1,
#line 1018 "switch_detection.m"
  MR_Word check_hlds__switch_detection__ProcessUnify_2,
#line 1018 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__3_3,
#line 1018 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__HeadVar__4_4,
#line 1018 "switch_detection.m"
  MR_Word check_hlds__switch_detection__STATE_VARIABLE_Subst_0_5,
#line 1018 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__STATE_VARIABLE_Subst_6,
#line 1018 "switch_detection.m"
  MR_Box check_hlds__switch_detection__STATE_VARIABLE_Result_0_7,
#line 1018 "switch_detection.m"
  MR_Box * check_hlds__switch_detection__STATE_VARIABLE_Result_8,
#line 1018 "switch_detection.m"
  MR_Box check_hlds__switch_detection__STATE_VARIABLE_Info_0_9,
#line 1018 "switch_detection.m"
  MR_Box * check_hlds__switch_detection__STATE_VARIABLE_Info_10,
#line 1018 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__HeadVar__11_11);

#line 909 "switch_detection.m"
static void MR_CALL 
check_hlds__switch_detection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_98_105_110_100_95_118_97_114_95_50_95_95_91_49_44_32_50_93_95_48_11_p_0(
#line 909 "switch_detection.m"
  MR_Word check_hlds__switch_detection__Var_12,
#line 909 "switch_detection.m"
  MR_Word check_hlds__switch_detection__ProcessUnify_13,
#line 909 "switch_detection.m"
  MR_Word check_hlds__switch_detection__Goal0_14,
#line 909 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__Goal_15,
#line 909 "switch_detection.m"
  MR_Word check_hlds__switch_detection__STATE_VARIABLE_Subst_0_87,
#line 909 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__STATE_VARIABLE_Subst_88,
#line 909 "switch_detection.m"
  MR_Box check_hlds__switch_detection__STATE_VARIABLE_Result_0_89,
#line 909 "switch_detection.m"
  MR_Box * check_hlds__switch_detection__STATE_VARIABLE_Result_90,
#line 909 "switch_detection.m"
  MR_Box check_hlds__switch_detection__STATE_VARIABLE_Info_0_91,
#line 909 "switch_detection.m"
  MR_Box * check_hlds__switch_detection__STATE_VARIABLE_Info_92,
#line 909 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__FoundDeconstruct_19);

#line 853 "switch_detection.m"
static void MR_CALL 
check_hlds__switch_detection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_98_105_110_100_95_118_97_114_95_102_111_114_95_115_119_105_116_99_104_95_105_110_95_100_101_99_111_110_115_116_114_117_99_116_95_95_91_52_44_32_54_93_95_48_7_p_0(
#line 853 "switch_detection.m"
  MR_Word check_hlds__switch_detection__SwitchVar_8,
#line 853 "switch_detection.m"
  MR_Word check_hlds__switch_detection__Goal0_9,
#line 853 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__Goals_10,
#line 853 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__Result_12);

#line 1109 "switch_detection.m"
static void MR_CALL 
check_hlds__switch_detection__IntroducedFrom__pred__delete_covered_functors__1109__1_3_p_0(
#line 1109 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__1_20,
#line 1109 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__2_21,
#line 1109 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__HeadVar__3_22);

#line 491 "switch_detection.m"
static MR_bool MR_CALL 
check_hlds__switch_detection__IntroducedFrom__pred__convert_case__491__1_2_p_0(
#line 491 "switch_detection.m"
  MR_Word check_hlds__switch_detection__ConflictConsIds_9,
#line 491 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__2_90);

#line 459 "switch_detection.m"
static MR_bool MR_CALL 
check_hlds__switch_detection__IntroducedFrom__pred__convert_case__459__1_2_p_0(
#line 459 "switch_detection.m"
  MR_Word check_hlds__switch_detection__IsMember_18,
#line 459 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__2_61);

#line 468 "switch_detection.m"
static MR_bool MR_CALL 
check_hlds__switch_detection__IntroducedFrom__pred__convert_case__468__1_2_p_0(
#line 468 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__1_53,
#line 468 "switch_detection.m"
  MR_Word check_hlds__switch_detection__IsMember_65);

#line 451 "switch_detection.m"
static MR_bool MR_CALL 
check_hlds__switch_detection__IntroducedFrom__pred__convert_case__451__1_2_p_0(
#line 451 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__1_37,
#line 451 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__2_94);

#line 230 "switch_detection.m"
static void MR_CALL 
check_hlds__switch_detection____Compare____local_switch_detect_info_0_0(
#line 230 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__HeadVar__1_1,
#line 230 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__2_2,
#line 230 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__3_3);

#line 230 "switch_detection.m"
static MR_bool MR_CALL 
check_hlds__switch_detection____Unify____local_switch_detect_info_0_0(
#line 230 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__1_1,
#line 230 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__2_2);

#line 904 "switch_detection.m"
static void MR_CALL 
check_hlds__switch_detection____Compare____deconstruct_search_0_0(
#line 904 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__HeadVar__1_1,
#line 904 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__2_2,
#line 904 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__3_3);

#line 904 "switch_detection.m"
static MR_bool MR_CALL 
check_hlds__switch_detection____Unify____deconstruct_search_0_0(
#line 904 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__2_1,
#line 904 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__2_2);

#line 417 "switch_detection.m"
static void MR_CALL 
check_hlds__switch_detection____Compare____cons_id_state_0_0(
#line 417 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__HeadVar__1_1,
#line 417 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__2_2,
#line 417 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__3_3);

#line 417 "switch_detection.m"
static MR_bool MR_CALL 
check_hlds__switch_detection____Unify____cons_id_state_0_0(
#line 417 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__2_1,
#line 417 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__2_2);

#line 422 "switch_detection.m"
static void MR_CALL 
check_hlds__switch_detection____Compare____cons_id_entry_0_0(
#line 422 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__HeadVar__1_1,
#line 422 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__2_2,
#line 422 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__3_3);

#line 422 "switch_detection.m"
static MR_bool MR_CALL 
check_hlds__switch_detection____Unify____cons_id_entry_0_0(
#line 422 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__1_1,
#line 422 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__2_2);

#line 428 "switch_detection.m"
static void MR_CALL 
check_hlds__switch_detection____Compare____cases_table_0_0(
#line 428 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__HeadVar__1_1,
#line 428 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__2_2,
#line 428 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__3_3);

#line 428 "switch_detection.m"
static MR_bool MR_CALL 
check_hlds__switch_detection____Unify____cases_table_0_0(
#line 428 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__1_1,
#line 428 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__2_2);

#line 413 "switch_detection.m"
static void MR_CALL 
check_hlds__switch_detection____Compare____case_arm_0_0(
#line 413 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__HeadVar__1_1,
#line 413 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__2_2,
#line 413 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__3_3);

#line 413 "switch_detection.m"
static MR_bool MR_CALL 
check_hlds__switch_detection____Unify____case_arm_0_0(
#line 413 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__1_1,
#line 413 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__2_2);

#line 102 "switch_detection.m"
static void MR_CALL 
check_hlds__switch_detection____Compare____allow_multi_arm_0_0(
#line 102 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__HeadVar__1_1,
#line 102 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__2_2,
#line 102 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__3_3);

#line 102 "switch_detection.m"
static MR_bool MR_CALL 
check_hlds__switch_detection____Unify____allow_multi_arm_0_0(
#line 102 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__2_1,
#line 102 "switch_detection.m"
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

#line 1124 "switch_detection.m"
static MR_Integer MR_CALL 
check_hlds__switch_detection__count_covered_cons_ids_1_f_0(
#line 1124 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__1_1);

#line 1109 "switch_detection.m"
static void MR_CALL 
check_hlds__switch_detection__delete_covered_functors_3_p_0_1(
#line 1109 "switch_detection.m"
  MR_Box check_hlds__switch_detection__closure_arg,
#line 1109 "switch_detection.m"
  MR_Box check_hlds__switch_detection__wrapper_arg_1,
#line 1109 "switch_detection.m"
  MR_Box check_hlds__switch_detection__wrapper_arg_2,
#line 1109 "switch_detection.m"
  MR_Box * check_hlds__switch_detection__wrapper_arg_3);

#line 1102 "switch_detection.m"
static void MR_CALL 
check_hlds__switch_detection__delete_covered_functors_3_p_0(
#line 1102 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__1_1,
#line 1102 "switch_detection.m"
  MR_Word check_hlds__switch_detection__STATE_VARIABLE_UncoveredConsIds_0_2,
#line 1102 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__STATE_VARIABLE_UncoveredConsIds_3);

#line 1044 "switch_detection.m"
static void MR_CALL 
check_hlds__switch_detection__cases_to_switch_6_p_0(
#line 1044 "switch_detection.m"
  MR_Word check_hlds__switch_detection__Var_7,
#line 1044 "switch_detection.m"
  MR_Word check_hlds__switch_detection__Cases0_8,
#line 1044 "switch_detection.m"
  MR_Word check_hlds__switch_detection__InstMap_9,
#line 1044 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__GoalExpr_10,
#line 1044 "switch_detection.m"
  MR_Word check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_0_25,
#line 1044 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_26);

#line 853 "switch_detection.m"
static void MR_CALL 
check_hlds__switch_detection__find_bind_var_for_switch_in_deconstruct_7_p_0(
#line 853 "switch_detection.m"
  MR_Word check_hlds__switch_detection__SwitchVar_8,
#line 853 "switch_detection.m"
  MR_Word check_hlds__switch_detection__Goal0_9,
#line 853 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__Goals_10,
#line 853 "switch_detection.m"
  MR_Word check_hlds__switch_detection___Result0_11,
#line 853 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__Result_12);

#line 896 "check_hlds.switch_detection.c"
static void MR_CALL 
check_hlds__switch_detection__partition_disj_trial_6_p_0_1(
#line 899 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__closure_arg,
#line 901 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_1,
#line 903 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_2,
#line 905 "check_hlds.switch_detection.c"
  MR_Box * check_hlds__switch_detection__wrapper_arg_3,
#line 907 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_4,
#line 909 "check_hlds.switch_detection.c"
  MR_Box * check_hlds__switch_detection__wrapper_arg_5,
#line 911 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_6,
#line 913 "check_hlds.switch_detection.c"
  MR_Box * check_hlds__switch_detection__wrapper_arg_7);

#line 836 "switch_detection.m"
static void MR_CALL 
check_hlds__switch_detection__partition_disj_trial_6_p_0(
#line 836 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__1_1,
#line 836 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__2_2,
#line 836 "switch_detection.m"
  MR_Word check_hlds__switch_detection__STATE_VARIABLE_Left_0_3,
#line 836 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__STATE_VARIABLE_Left_4,
#line 836 "switch_detection.m"
  MR_Word check_hlds__switch_detection__STATE_VARIABLE_CasesTable_0_5,
#line 836 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__STATE_VARIABLE_CasesTable_6);

#line 823 "switch_detection.m"
static void MR_CALL 
check_hlds__switch_detection__create_expanded_conjunction_5_p_0(
#line 823 "switch_detection.m"
  MR_Word check_hlds__switch_detection__Unifies_6,
#line 823 "switch_detection.m"
  MR_Word check_hlds__switch_detection__LaterGoals_7,
#line 823 "switch_detection.m"
  MR_Word check_hlds__switch_detection__GoalInfo_8,
#line 823 "switch_detection.m"
  MR_Word check_hlds__switch_detection__Disjunct_9,
#line 823 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__Goal_10);

#line 812 "switch_detection.m"
static MR_bool MR_CALL 
check_hlds__switch_detection__all_disjuncts_are_switch_var_unifies_3_p_0(
#line 812 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__1_1,
#line 812 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__2_2,
#line 812 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__HeadVar__3_3);

#line 803 "switch_detection.m"
static void MR_CALL 
check_hlds__switch_detection__expand_sub_disj_process_conj_7_p_0_2(
#line 803 "switch_detection.m"
  MR_Box check_hlds__switch_detection__closure_arg,
#line 803 "switch_detection.m"
  MR_Box check_hlds__switch_detection__wrapper_arg_1,
#line 803 "switch_detection.m"
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

#line 758 "switch_detection.m"
static MR_bool MR_CALL 
check_hlds__switch_detection__expand_sub_disj_process_conj_7_p_0(
#line 758 "switch_detection.m"
  MR_Word check_hlds__switch_detection__AllowMulti_8,
#line 758 "switch_detection.m"
  MR_Word check_hlds__switch_detection__Var_9,
#line 758 "switch_detection.m"
  MR_Word check_hlds__switch_detection__ConjGoals_10,
#line 758 "switch_detection.m"
  MR_Word check_hlds__switch_detection__STATE_VARIABLE_RevUnifies_0_36,
#line 758 "switch_detection.m"
  MR_Word check_hlds__switch_detection__GoalInfo_12,
#line 758 "switch_detection.m"
  MR_Word check_hlds__switch_detection__STATE_VARIABLE_CasesTable_0_37,
#line 758 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__STATE_VARIABLE_CasesTable_38);

#line 734 "switch_detection.m"
static MR_bool MR_CALL 
check_hlds__switch_detection__expand_sub_disjs_5_p_0(
#line 734 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__1_1,
#line 734 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__2_2,
#line 734 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__3_3,
#line 734 "switch_detection.m"
  MR_Word check_hlds__switch_detection__STATE_VARIABLE_CasesTable_0_4,
#line 734 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__STATE_VARIABLE_CasesTable_5);

#line 439 "switch_detection.m"
static void MR_CALL 
check_hlds__switch_detection__partition_disj_7_p_0_2(
#line 439 "switch_detection.m"
  MR_Box check_hlds__switch_detection__closure_arg,
#line 439 "switch_detection.m"
  MR_Box check_hlds__switch_detection__wrapper_arg_1,
#line 439 "switch_detection.m"
  MR_Box check_hlds__switch_detection__wrapper_arg_2,
#line 439 "switch_detection.m"
  MR_Box * check_hlds__switch_detection__wrapper_arg_3,
#line 439 "switch_detection.m"
  MR_Box check_hlds__switch_detection__wrapper_arg_4,
#line 439 "switch_detection.m"
  MR_Box * check_hlds__switch_detection__wrapper_arg_5);

#line 439 "switch_detection.m"
static void MR_CALL 
check_hlds__switch_detection__partition_disj_7_p_0_1(
#line 439 "switch_detection.m"
  MR_Box check_hlds__switch_detection__closure_arg,
#line 439 "switch_detection.m"
  MR_Box check_hlds__switch_detection__wrapper_arg_1,
#line 439 "switch_detection.m"
  MR_Box check_hlds__switch_detection__wrapper_arg_2,
#line 439 "switch_detection.m"
  MR_Box * check_hlds__switch_detection__wrapper_arg_3,
#line 439 "switch_detection.m"
  MR_Box check_hlds__switch_detection__wrapper_arg_4,
#line 439 "switch_detection.m"
  MR_Box * check_hlds__switch_detection__wrapper_arg_5);

#line 702 "switch_detection.m"
static MR_bool MR_CALL 
check_hlds__switch_detection__partition_disj_7_p_0(
#line 702 "switch_detection.m"
  MR_Word check_hlds__switch_detection__Disjuncts0_8,
#line 702 "switch_detection.m"
  MR_Word check_hlds__switch_detection__Var_9,
#line 702 "switch_detection.m"
  MR_Word check_hlds__switch_detection__GoalInfo_10,
#line 702 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__Left_11,
#line 702 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__Cases_12,
#line 702 "switch_detection.m"
  MR_Word check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_0_21,
#line 702 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_22);

#line 670 "switch_detection.m"
static void MR_CALL 
check_hlds__switch_detection__select_best_switch_3_p_0(
#line 670 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__1_1,
#line 670 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__2_2,
#line 670 "switch_detection.m"
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

#line 461 "switch_detection.m"
static MR_Box MR_CALL 
check_hlds__switch_detection__convert_case_7_p_0_5(
#line 461 "switch_detection.m"
  MR_Box check_hlds__switch_detection__closure_arg,
#line 461 "switch_detection.m"
  MR_Box check_hlds__switch_detection__wrapper_arg_1);

#line 459 "switch_detection.m"
static MR_bool MR_CALL 
check_hlds__switch_detection__convert_case_7_p_0_4(
#line 459 "switch_detection.m"
  MR_Box check_hlds__switch_detection__closure_arg);

#line 470 "switch_detection.m"
static MR_Box MR_CALL 
check_hlds__switch_detection__convert_case_7_p_0_3(
#line 470 "switch_detection.m"
  MR_Box check_hlds__switch_detection__closure_arg,
#line 470 "switch_detection.m"
  MR_Box check_hlds__switch_detection__wrapper_arg_1);

#line 468 "switch_detection.m"
static MR_bool MR_CALL 
check_hlds__switch_detection__convert_case_7_p_0_2(
#line 468 "switch_detection.m"
  MR_Box check_hlds__switch_detection__closure_arg);

#line 451 "switch_detection.m"
static MR_bool MR_CALL 
check_hlds__switch_detection__convert_case_7_p_0_1(
#line 451 "switch_detection.m"
  MR_Box check_hlds__switch_detection__closure_arg);

#line 443 "switch_detection.m"
static void MR_CALL 
check_hlds__switch_detection__convert_case_7_p_0(
#line 443 "switch_detection.m"
  MR_Word check_hlds__switch_detection__GoalInfo_8,
#line 443 "switch_detection.m"
  MR_Word check_hlds__switch_detection__ConflictConsIds_9,
#line 443 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__3_3,
#line 443 "switch_detection.m"
  MR_Word check_hlds__switch_detection__STATE_VARIABLE_Cases_0_29,
#line 443 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__STATE_VARIABLE_Cases_30,
#line 443 "switch_detection.m"
  MR_Word check_hlds__switch_detection__STATE_VARIABLE_AlreadyHandledConsIds_0_31,
#line 443 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__STATE_VARIABLE_AlreadyHandledConsIds_32);

#line 439 "switch_detection.m"
static void MR_CALL 
check_hlds__switch_detection__convert_cases_table_2_f_0_1(
#line 439 "switch_detection.m"
  MR_Box check_hlds__switch_detection__closure_arg,
#line 439 "switch_detection.m"
  MR_Box check_hlds__switch_detection__wrapper_arg_1,
#line 439 "switch_detection.m"
  MR_Box check_hlds__switch_detection__wrapper_arg_2,
#line 439 "switch_detection.m"
  MR_Box * check_hlds__switch_detection__wrapper_arg_3,
#line 439 "switch_detection.m"
  MR_Box check_hlds__switch_detection__wrapper_arg_4,
#line 439 "switch_detection.m"
  MR_Box * check_hlds__switch_detection__wrapper_arg_5);

#line 434 "switch_detection.m"
static MR_Word MR_CALL 
check_hlds__switch_detection__convert_cases_table_2_f_0(
#line 434 "switch_detection.m"
  MR_Word check_hlds__switch_detection__GoalInfo_4,
#line 434 "switch_detection.m"
  MR_Word check_hlds__switch_detection__CasesTable_5);

#line 401 "switch_detection.m"
static void MR_CALL 
check_hlds__switch_detection__detect_switches_in_orelse_5_p_0(
#line 401 "switch_detection.m"
  MR_Word check_hlds__switch_detection__InstMap_1,
#line 401 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__2_2,
#line 401 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__HeadVar__3_3,
#line 401 "switch_detection.m"
  MR_Word check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_0_4,
#line 401 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_5);

#line 390 "switch_detection.m"
static void MR_CALL 
check_hlds__switch_detection__detect_switches_in_conj_5_p_0(
#line 390 "switch_detection.m"
  MR_Word check_hlds__switch_detection__InstMap0_1,
#line 390 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__2_2,
#line 390 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__HeadVar__3_3,
#line 390 "switch_detection.m"
  MR_Word check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_0_4,
#line 390 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_5);

#line 372 "switch_detection.m"
static void MR_CALL 
check_hlds__switch_detection__detect_switches_in_cases_6_p_0(
#line 372 "switch_detection.m"
  MR_Word check_hlds__switch_detection__Var_1,
#line 372 "switch_detection.m"
  MR_Word check_hlds__switch_detection__InstMap0_2,
#line 372 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__3_3,
#line 372 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__HeadVar__4_4,
#line 372 "switch_detection.m"
  MR_Word check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_0_5,
#line 372 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_6);

#line 362 "switch_detection.m"
static void MR_CALL 
check_hlds__switch_detection__detect_sub_switches_in_disj_5_p_0(
#line 362 "switch_detection.m"
  MR_Word check_hlds__switch_detection__InstMap_1,
#line 362 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__2_2,
#line 362 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__HeadVar__3_3,
#line 362 "switch_detection.m"
  MR_Word check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_0_4,
#line 362 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_5);

#line 265 "switch_detection.m"
static void MR_CALL 
check_hlds__switch_detection__detect_switches_in_goal_expr_6_p_0(
#line 265 "switch_detection.m"
  MR_Word check_hlds__switch_detection__InstMap0_7,
#line 265 "switch_detection.m"
  MR_Word check_hlds__switch_detection__GoalInfo_8,
#line 265 "switch_detection.m"
  MR_Word check_hlds__switch_detection__GoalExpr0_9,
#line 265 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__GoalExpr_10,
#line 265 "switch_detection.m"
  MR_Word check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_0_89,
#line 265 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_90);

#line 252 "switch_detection.m"
static void MR_CALL 
check_hlds__switch_detection__detect_switches_in_goal_update_instmap_6_p_0(
#line 252 "switch_detection.m"
  MR_Word check_hlds__switch_detection__STATE_VARIABLE_InstMap_0_14,
#line 252 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__STATE_VARIABLE_InstMap_15,
#line 252 "switch_detection.m"
  MR_Word check_hlds__switch_detection__Goal0_8,
#line 252 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__Goal_9,
#line 252 "switch_detection.m"
  MR_Word check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_0_16,
#line 252 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_17);

#line 241 "switch_detection.m"
static void MR_CALL 
check_hlds__switch_detection__detect_switches_in_goal_5_p_0(
#line 241 "switch_detection.m"
  MR_Word check_hlds__switch_detection__InstMap0_6,
#line 241 "switch_detection.m"
  MR_Word check_hlds__switch_detection__STATE_VARIABLE_Goal_0_10,
#line 241 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__STATE_VARIABLE_Goal_11,
#line 241 "switch_detection.m"
  MR_Word check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_0_12,
#line 241 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_13);

#line 189 "switch_detection.m"
static void MR_CALL 
check_hlds__switch_detection__detect_switches_in_procs_4_p_0(
#line 189 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__1_1,
#line 189 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__2_2,
#line 189 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__3_3,
#line 189 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__HeadVar__4_4);

#line 146 "switch_detection.m"
static void MR_CALL 
check_hlds__switch_detection__detect_switches_in_preds_4_p_0(
#line 146 "switch_detection.m"
  MR_Word check_hlds__switch_detection__Info_1,
#line 146 "switch_detection.m"
  MR_Word check_hlds__switch_detection__ValidPredIdSet_2,
#line 146 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__3_3,
#line 146 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__HeadVar__4_4);


static /* final */ const MR_Box check_hlds__switch_detection_scalar_common_1[8][2];

static /* final */ const MR_Box check_hlds__switch_detection_scalar_common_2[6][3];

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

static /* final */ const MR_Box check_hlds__switch_detection_scalar_common_2[6][3] = {
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
    ((MR_Box) (&check_hlds__switch_detection_scalar_common_4[2])),
    ((MR_Box) (check_hlds__switch_detection__convert_case_7_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&check_hlds__switch_detection_scalar_common_4[2])),
    ((MR_Box) (check_hlds__switch_detection__convert_case_7_p_0_5)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&check_hlds__switch_detection_scalar_common_3[1])),
    ((MR_Box) (check_hlds__switch_detection__partition_disj_trial_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
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



#line 1548 "check_hlds.switch_detection.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__switch_detection__set_tree234__pti_set_tree234_1__plain_parse_tree__prog_data__type_ctor_info_cons_id_0 = {
  &mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0
  }
};

#line 1556 "check_hlds.switch_detection.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__switch_detection__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_cons_id_0__plain_check_hlds__switch_detection__type_ctor_info_cons_id_entry_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0,
    (MR_PseudoTypeInfo) &check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_cons_id_entry_0
  }
};

#line 1565 "check_hlds.switch_detection.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__switch_detection__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_case_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0
  }
};

#line 1573 "check_hlds.switch_detection.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__switch_detection__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

#line 1581 "check_hlds.switch_detection.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__switch_detection__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1589 "check_hlds.switch_detection.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__switch_detection__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_cons_id_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0
  }
};

#line 1597 "check_hlds.switch_detection.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__switch_detection__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1605 "check_hlds.switch_detection.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__switch_detection__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

#line 1613 "check_hlds.switch_detection.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__switch_detection__list__ti_list_1hlds__hlds_goal__type_ctor_info_case_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0
  }
};

#line 1621 "check_hlds.switch_detection.c"
static const MR_PseudoTypeInfo check_hlds__switch_detection__check_hlds__switch_detection__field_types_again_0_0[3] = {
  (MR_PseudoTypeInfo) &check_hlds__switch_detection__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &check_hlds__switch_detection__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0,
  (MR_PseudoTypeInfo) &check_hlds__switch_detection__list__ti_list_1hlds__hlds_goal__type_ctor_info_case_0
};

#line 1628 "check_hlds.switch_detection.c"
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

#line 1643 "check_hlds.switch_detection.c"
static const MR_DuFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__du_stag_ordered_again_0_0[1] = {
  &check_hlds__switch_detection__check_hlds__switch_detection__du_functor_desc_again_0_0
};

#line 1648 "check_hlds.switch_detection.c"
static const MR_DuPtagLayout check_hlds__switch_detection__check_hlds__switch_detection__du_ptag_ordered_again_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__switch_detection__check_hlds__switch_detection__du_stag_ordered_again_0_0
  }
};

#line 1657 "check_hlds.switch_detection.c"
static const MR_DuFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__du_name_ordered_again_0[1] = {
  &check_hlds__switch_detection__check_hlds__switch_detection__du_functor_desc_again_0_0
};

#line 1662 "check_hlds.switch_detection.c"
static const MR_Integer check_hlds__switch_detection__check_hlds__switch_detection__functor_number_map_again_0[1] = {
  (MR_Integer) 0
};

#line 1667 "check_hlds.switch_detection.c"
const MR_TypeCtorInfo_Struct check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_again_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__switch_detection____Unify____again_0_0_10001)),
  ((MR_Box) (check_hlds__switch_detection____Compare____again_0_0_10001)),
  (MR_String) "check_hlds.switch_detection",
  (MR_String) "again",
  {
    check_hlds__switch_detection__check_hlds__switch_detection__du_name_ordered_again_0
  },
  {
    check_hlds__switch_detection__check_hlds__switch_detection__du_ptag_ordered_again_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__switch_detection__check_hlds__switch_detection__functor_number_map_again_0
};

#line 1688 "check_hlds.switch_detection.c"
static const MR_EnumFunctorDesc check_hlds__switch_detection__check_hlds__switch_detection__enum_functor_desc_allow_multi_arm_0_0 = {
  (MR_String) "allow_multi_arm",
  (MR_Integer) 0
};

#line 1694 "check_hlds.switch_detection.c"
static const MR_EnumFunctorDesc check_hlds__switch_detection__check_hlds__switch_detection__enum_functor_desc_allow_multi_arm_0_1 = {
  (MR_String) "dont_allow_multi_arm",
  (MR_Integer) 1
};

#line 1700 "check_hlds.switch_detection.c"
static const MR_EnumFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__enum_value_ordered_allow_multi_arm_0[2] = {
  &check_hlds__switch_detection__check_hlds__switch_detection__enum_functor_desc_allow_multi_arm_0_0,
  &check_hlds__switch_detection__check_hlds__switch_detection__enum_functor_desc_allow_multi_arm_0_1
};

#line 1706 "check_hlds.switch_detection.c"
static const MR_EnumFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__enum_name_ordered_allow_multi_arm_0[2] = {
  &check_hlds__switch_detection__check_hlds__switch_detection__enum_functor_desc_allow_multi_arm_0_0,
  &check_hlds__switch_detection__check_hlds__switch_detection__enum_functor_desc_allow_multi_arm_0_1
};

#line 1712 "check_hlds.switch_detection.c"
static const MR_Integer check_hlds__switch_detection__check_hlds__switch_detection__functor_number_map_allow_multi_arm_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1718 "check_hlds.switch_detection.c"
const MR_TypeCtorInfo_Struct check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_allow_multi_arm_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__switch_detection____Unify____allow_multi_arm_0_0_10001)),
  ((MR_Box) (check_hlds__switch_detection____Compare____allow_multi_arm_0_0_10001)),
  (MR_String) "check_hlds.switch_detection",
  (MR_String) "allow_multi_arm",
  {
    check_hlds__switch_detection__check_hlds__switch_detection__enum_name_ordered_allow_multi_arm_0
  },
  {
    check_hlds__switch_detection__check_hlds__switch_detection__enum_value_ordered_allow_multi_arm_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  check_hlds__switch_detection__check_hlds__switch_detection__functor_number_map_allow_multi_arm_0
};

#line 1739 "check_hlds.switch_detection.c"
static const MR_PseudoTypeInfo check_hlds__switch_detection__check_hlds__switch_detection__field_types_case_arm_0_0[2] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0,
  (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0
};

#line 1745 "check_hlds.switch_detection.c"
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

#line 1760 "check_hlds.switch_detection.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__switch_detection__list__ti_list_1parse_tree__prog_data__type_ctor_info_cons_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0
  }
};

#line 1768 "check_hlds.switch_detection.c"
static const MR_PseudoTypeInfo check_hlds__switch_detection__check_hlds__switch_detection__field_types_case_arm_0_1[3] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0,
  (MR_PseudoTypeInfo) &check_hlds__switch_detection__list__ti_list_1parse_tree__prog_data__type_ctor_info_cons_id_0,
  (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0
};

#line 1775 "check_hlds.switch_detection.c"
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

#line 1790 "check_hlds.switch_detection.c"
static const MR_DuFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__du_stag_ordered_case_arm_0_0[1] = {
  &check_hlds__switch_detection__check_hlds__switch_detection__du_functor_desc_case_arm_0_0
};

#line 1795 "check_hlds.switch_detection.c"
static const MR_DuFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__du_stag_ordered_case_arm_0_1[1] = {
  &check_hlds__switch_detection__check_hlds__switch_detection__du_functor_desc_case_arm_0_1
};

#line 1800 "check_hlds.switch_detection.c"
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

#line 1814 "check_hlds.switch_detection.c"
static const MR_DuFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__du_name_ordered_case_arm_0[2] = {
  &check_hlds__switch_detection__check_hlds__switch_detection__du_functor_desc_case_arm_0_1,
  &check_hlds__switch_detection__check_hlds__switch_detection__du_functor_desc_case_arm_0_0
};

#line 1820 "check_hlds.switch_detection.c"
static const MR_Integer check_hlds__switch_detection__check_hlds__switch_detection__functor_number_map_case_arm_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1826 "check_hlds.switch_detection.c"
const MR_TypeCtorInfo_Struct check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_case_arm_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__switch_detection____Unify____case_arm_0_0_10001)),
  ((MR_Box) (check_hlds__switch_detection____Compare____case_arm_0_0_10001)),
  (MR_String) "check_hlds.switch_detection",
  (MR_String) "case_arm",
  {
    check_hlds__switch_detection__check_hlds__switch_detection__du_name_ordered_case_arm_0
  },
  {
    check_hlds__switch_detection__check_hlds__switch_detection__du_ptag_ordered_case_arm_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  check_hlds__switch_detection__check_hlds__switch_detection__functor_number_map_case_arm_0
};

#line 1847 "check_hlds.switch_detection.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__switch_detection__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_cons_id_0check_hlds__switch_detection__type_ctor_info_cons_id_entry_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0,
    (MR_TypeInfo) &check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_cons_id_entry_0
  }
};

#line 1856 "check_hlds.switch_detection.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__switch_detection__set_tree234__ti_set_tree234_1parse_tree__prog_data__type_ctor_info_cons_id_0 = {
  &mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0
  }
};

#line 1864 "check_hlds.switch_detection.c"
static const MR_PseudoTypeInfo check_hlds__switch_detection__check_hlds__switch_detection__field_types_cases_table_0_0[2] = {
  (MR_PseudoTypeInfo) &check_hlds__switch_detection__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_cons_id_0check_hlds__switch_detection__type_ctor_info_cons_id_entry_0,
  (MR_PseudoTypeInfo) &check_hlds__switch_detection__set_tree234__ti_set_tree234_1parse_tree__prog_data__type_ctor_info_cons_id_0
};

#line 1870 "check_hlds.switch_detection.c"
static const MR_ConstString check_hlds__switch_detection__check_hlds__switch_detection__field_names_cases_table_0_0[2] = {
  (MR_String) "cases_map",
  (MR_String) "conflict_cons_ids"
};

#line 1876 "check_hlds.switch_detection.c"
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

#line 1891 "check_hlds.switch_detection.c"
static const MR_DuFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__du_stag_ordered_cases_table_0_0[1] = {
  &check_hlds__switch_detection__check_hlds__switch_detection__du_functor_desc_cases_table_0_0
};

#line 1896 "check_hlds.switch_detection.c"
static const MR_DuPtagLayout check_hlds__switch_detection__check_hlds__switch_detection__du_ptag_ordered_cases_table_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__switch_detection__check_hlds__switch_detection__du_stag_ordered_cases_table_0_0
  }
};

#line 1905 "check_hlds.switch_detection.c"
static const MR_DuFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__du_name_ordered_cases_table_0[1] = {
  &check_hlds__switch_detection__check_hlds__switch_detection__du_functor_desc_cases_table_0_0
};

#line 1910 "check_hlds.switch_detection.c"
static const MR_Integer check_hlds__switch_detection__check_hlds__switch_detection__functor_number_map_cases_table_0[1] = {
  (MR_Integer) 0
};

#line 1915 "check_hlds.switch_detection.c"
const MR_TypeCtorInfo_Struct check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_cases_table_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__switch_detection____Unify____cases_table_0_0_10001)),
  ((MR_Box) (check_hlds__switch_detection____Compare____cases_table_0_0_10001)),
  (MR_String) "check_hlds.switch_detection",
  (MR_String) "cases_table",
  {
    check_hlds__switch_detection__check_hlds__switch_detection__du_name_ordered_cases_table_0
  },
  {
    check_hlds__switch_detection__check_hlds__switch_detection__du_ptag_ordered_cases_table_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__switch_detection__check_hlds__switch_detection__functor_number_map_cases_table_0
};

#line 1936 "check_hlds.switch_detection.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__switch_detection__cord__ti_cord_1check_hlds__switch_detection__type_ctor_info_case_arm_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_TypeInfo) &check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_case_arm_0
  }
};

#line 1944 "check_hlds.switch_detection.c"
static const MR_PseudoTypeInfo check_hlds__switch_detection__check_hlds__switch_detection__field_types_cons_id_entry_0_0[2] = {
  (MR_PseudoTypeInfo) &check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_cons_id_state_0,
  (MR_PseudoTypeInfo) &check_hlds__switch_detection__cord__ti_cord_1check_hlds__switch_detection__type_ctor_info_case_arm_0
};

#line 1950 "check_hlds.switch_detection.c"
static const MR_ConstString check_hlds__switch_detection__check_hlds__switch_detection__field_names_cons_id_entry_0_0[2] = {
  (MR_String) "cons_id_state",
  (MR_String) "cons_id_arms"
};

#line 1956 "check_hlds.switch_detection.c"
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

#line 1971 "check_hlds.switch_detection.c"
static const MR_DuFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__du_stag_ordered_cons_id_entry_0_0[1] = {
  &check_hlds__switch_detection__check_hlds__switch_detection__du_functor_desc_cons_id_entry_0_0
};

#line 1976 "check_hlds.switch_detection.c"
static const MR_DuPtagLayout check_hlds__switch_detection__check_hlds__switch_detection__du_ptag_ordered_cons_id_entry_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__switch_detection__check_hlds__switch_detection__du_stag_ordered_cons_id_entry_0_0
  }
};

#line 1985 "check_hlds.switch_detection.c"
static const MR_DuFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__du_name_ordered_cons_id_entry_0[1] = {
  &check_hlds__switch_detection__check_hlds__switch_detection__du_functor_desc_cons_id_entry_0_0
};

#line 1990 "check_hlds.switch_detection.c"
static const MR_Integer check_hlds__switch_detection__check_hlds__switch_detection__functor_number_map_cons_id_entry_0[1] = {
  (MR_Integer) 0
};

#line 1995 "check_hlds.switch_detection.c"
const MR_TypeCtorInfo_Struct check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_cons_id_entry_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__switch_detection____Unify____cons_id_entry_0_0_10001)),
  ((MR_Box) (check_hlds__switch_detection____Compare____cons_id_entry_0_0_10001)),
  (MR_String) "check_hlds.switch_detection",
  (MR_String) "cons_id_entry",
  {
    check_hlds__switch_detection__check_hlds__switch_detection__du_name_ordered_cons_id_entry_0
  },
  {
    check_hlds__switch_detection__check_hlds__switch_detection__du_ptag_ordered_cons_id_entry_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__switch_detection__check_hlds__switch_detection__functor_number_map_cons_id_entry_0
};

#line 2016 "check_hlds.switch_detection.c"
static const MR_EnumFunctorDesc check_hlds__switch_detection__check_hlds__switch_detection__enum_functor_desc_cons_id_state_0_0 = {
  (MR_String) "cons_id_has_all_singles",
  (MR_Integer) 0
};

#line 2022 "check_hlds.switch_detection.c"
static const MR_EnumFunctorDesc check_hlds__switch_detection__check_hlds__switch_detection__enum_functor_desc_cons_id_state_0_1 = {
  (MR_String) "cons_id_has_one_multi",
  (MR_Integer) 1
};

#line 2028 "check_hlds.switch_detection.c"
static const MR_EnumFunctorDesc check_hlds__switch_detection__check_hlds__switch_detection__enum_functor_desc_cons_id_state_0_2 = {
  (MR_String) "cons_id_has_conflict",
  (MR_Integer) 2
};

#line 2034 "check_hlds.switch_detection.c"
static const MR_EnumFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__enum_value_ordered_cons_id_state_0[3] = {
  &check_hlds__switch_detection__check_hlds__switch_detection__enum_functor_desc_cons_id_state_0_0,
  &check_hlds__switch_detection__check_hlds__switch_detection__enum_functor_desc_cons_id_state_0_1,
  &check_hlds__switch_detection__check_hlds__switch_detection__enum_functor_desc_cons_id_state_0_2
};

#line 2041 "check_hlds.switch_detection.c"
static const MR_EnumFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__enum_name_ordered_cons_id_state_0[3] = {
  &check_hlds__switch_detection__check_hlds__switch_detection__enum_functor_desc_cons_id_state_0_0,
  &check_hlds__switch_detection__check_hlds__switch_detection__enum_functor_desc_cons_id_state_0_2,
  &check_hlds__switch_detection__check_hlds__switch_detection__enum_functor_desc_cons_id_state_0_1
};

#line 2048 "check_hlds.switch_detection.c"
static const MR_Integer check_hlds__switch_detection__check_hlds__switch_detection__functor_number_map_cons_id_state_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 1
};

#line 2055 "check_hlds.switch_detection.c"
const MR_TypeCtorInfo_Struct check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_cons_id_state_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__switch_detection____Unify____cons_id_state_0_0_10001)),
  ((MR_Box) (check_hlds__switch_detection____Compare____cons_id_state_0_0_10001)),
  (MR_String) "check_hlds.switch_detection",
  (MR_String) "cons_id_state",
  {
    check_hlds__switch_detection__check_hlds__switch_detection__enum_name_ordered_cons_id_state_0
  },
  {
    check_hlds__switch_detection__check_hlds__switch_detection__enum_value_ordered_cons_id_state_0
  },
  (MR_Integer) 3,
  (MR_Integer) 4,
  check_hlds__switch_detection__check_hlds__switch_detection__functor_number_map_cons_id_state_0
};

#line 2076 "check_hlds.switch_detection.c"
static const MR_EnumFunctorDesc check_hlds__switch_detection__check_hlds__switch_detection__enum_functor_desc_deconstruct_search_0_0 = {
  (MR_String) "before_deconstruct",
  (MR_Integer) 0
};

#line 2082 "check_hlds.switch_detection.c"
static const MR_EnumFunctorDesc check_hlds__switch_detection__check_hlds__switch_detection__enum_functor_desc_deconstruct_search_0_1 = {
  (MR_String) "found_deconstruct",
  (MR_Integer) 1
};

#line 2088 "check_hlds.switch_detection.c"
static const MR_EnumFunctorDesc check_hlds__switch_detection__check_hlds__switch_detection__enum_functor_desc_deconstruct_search_0_2 = {
  (MR_String) "given_up_search",
  (MR_Integer) 2
};

#line 2094 "check_hlds.switch_detection.c"
static const MR_EnumFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__enum_value_ordered_deconstruct_search_0[3] = {
  &check_hlds__switch_detection__check_hlds__switch_detection__enum_functor_desc_deconstruct_search_0_0,
  &check_hlds__switch_detection__check_hlds__switch_detection__enum_functor_desc_deconstruct_search_0_1,
  &check_hlds__switch_detection__check_hlds__switch_detection__enum_functor_desc_deconstruct_search_0_2
};

#line 2101 "check_hlds.switch_detection.c"
static const MR_EnumFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__enum_name_ordered_deconstruct_search_0[3] = {
  &check_hlds__switch_detection__check_hlds__switch_detection__enum_functor_desc_deconstruct_search_0_0,
  &check_hlds__switch_detection__check_hlds__switch_detection__enum_functor_desc_deconstruct_search_0_1,
  &check_hlds__switch_detection__check_hlds__switch_detection__enum_functor_desc_deconstruct_search_0_2
};

#line 2108 "check_hlds.switch_detection.c"
static const MR_Integer check_hlds__switch_detection__check_hlds__switch_detection__functor_number_map_deconstruct_search_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2
};

#line 2115 "check_hlds.switch_detection.c"
const MR_TypeCtorInfo_Struct check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_deconstruct_search_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__switch_detection____Unify____deconstruct_search_0_0_10001)),
  ((MR_Box) (check_hlds__switch_detection____Compare____deconstruct_search_0_0_10001)),
  (MR_String) "check_hlds.switch_detection",
  (MR_String) "deconstruct_search",
  {
    check_hlds__switch_detection__check_hlds__switch_detection__enum_name_ordered_deconstruct_search_0
  },
  {
    check_hlds__switch_detection__check_hlds__switch_detection__enum_value_ordered_deconstruct_search_0
  },
  (MR_Integer) 3,
  (MR_Integer) 4,
  check_hlds__switch_detection__check_hlds__switch_detection__functor_number_map_deconstruct_search_0
};

#line 2136 "check_hlds.switch_detection.c"
static const MR_EnumFunctorDesc check_hlds__switch_detection__check_hlds__switch_detection__enum_functor_desc_found_deconstruct_0_0 = {
  (MR_String) "did_find_deconstruct",
  (MR_Integer) 0
};

#line 2142 "check_hlds.switch_detection.c"
static const MR_EnumFunctorDesc check_hlds__switch_detection__check_hlds__switch_detection__enum_functor_desc_found_deconstruct_0_1 = {
  (MR_String) "did_not_find_deconstruct",
  (MR_Integer) 1
};

#line 2148 "check_hlds.switch_detection.c"
static const MR_EnumFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__enum_value_ordered_found_deconstruct_0[2] = {
  &check_hlds__switch_detection__check_hlds__switch_detection__enum_functor_desc_found_deconstruct_0_0,
  &check_hlds__switch_detection__check_hlds__switch_detection__enum_functor_desc_found_deconstruct_0_1
};

#line 2154 "check_hlds.switch_detection.c"
static const MR_EnumFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__enum_name_ordered_found_deconstruct_0[2] = {
  &check_hlds__switch_detection__check_hlds__switch_detection__enum_functor_desc_found_deconstruct_0_0,
  &check_hlds__switch_detection__check_hlds__switch_detection__enum_functor_desc_found_deconstruct_0_1
};

#line 2160 "check_hlds.switch_detection.c"
static const MR_Integer check_hlds__switch_detection__check_hlds__switch_detection__functor_number_map_found_deconstruct_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2166 "check_hlds.switch_detection.c"
const MR_TypeCtorInfo_Struct check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_found_deconstruct_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__switch_detection____Unify____found_deconstruct_0_0_10001)),
  ((MR_Box) (check_hlds__switch_detection____Compare____found_deconstruct_0_0_10001)),
  (MR_String) "check_hlds.switch_detection",
  (MR_String) "found_deconstruct",
  {
    check_hlds__switch_detection__check_hlds__switch_detection__enum_name_ordered_found_deconstruct_0
  },
  {
    check_hlds__switch_detection__check_hlds__switch_detection__enum_value_ordered_found_deconstruct_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  check_hlds__switch_detection__check_hlds__switch_detection__functor_number_map_found_deconstruct_0
};

#line 2187 "check_hlds.switch_detection.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__switch_detection__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &check_hlds__switch_detection__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 2196 "check_hlds.switch_detection.c"
static const MR_PseudoTypeInfo check_hlds__switch_detection__check_hlds__switch_detection__field_types_local_switch_detect_info_0_0[4] = {
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
  (MR_PseudoTypeInfo) &check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_allow_multi_arm_0,
  (MR_PseudoTypeInfo) &check_hlds__switch_detection__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_need_to_requantify_0
};

#line 2204 "check_hlds.switch_detection.c"
static const MR_ConstString check_hlds__switch_detection__check_hlds__switch_detection__field_names_local_switch_detect_info_0_0[4] = {
  (MR_String) "lsdi_module_info",
  (MR_String) "lsdi_allow_multi_arm",
  (MR_String) "lsdi_vartypes",
  (MR_String) "lsdi_requant"
};

#line 2212 "check_hlds.switch_detection.c"
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

#line 2227 "check_hlds.switch_detection.c"
static const MR_DuFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__du_stag_ordered_local_switch_detect_info_0_0[1] = {
  &check_hlds__switch_detection__check_hlds__switch_detection__du_functor_desc_local_switch_detect_info_0_0
};

#line 2232 "check_hlds.switch_detection.c"
static const MR_DuPtagLayout check_hlds__switch_detection__check_hlds__switch_detection__du_ptag_ordered_local_switch_detect_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__switch_detection__check_hlds__switch_detection__du_stag_ordered_local_switch_detect_info_0_0
  }
};

#line 2241 "check_hlds.switch_detection.c"
static const MR_DuFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__du_name_ordered_local_switch_detect_info_0[1] = {
  &check_hlds__switch_detection__check_hlds__switch_detection__du_functor_desc_local_switch_detect_info_0_0
};

#line 2246 "check_hlds.switch_detection.c"
static const MR_Integer check_hlds__switch_detection__check_hlds__switch_detection__functor_number_map_local_switch_detect_info_0[1] = {
  (MR_Integer) 0
};

#line 2251 "check_hlds.switch_detection.c"
const MR_TypeCtorInfo_Struct check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_local_switch_detect_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__switch_detection____Unify____local_switch_detect_info_0_0_10001)),
  ((MR_Box) (check_hlds__switch_detection____Compare____local_switch_detect_info_0_0_10001)),
  (MR_String) "check_hlds.switch_detection",
  (MR_String) "local_switch_detect_info",
  {
    check_hlds__switch_detection__check_hlds__switch_detection__du_name_ordered_local_switch_detect_info_0
  },
  {
    check_hlds__switch_detection__check_hlds__switch_detection__du_ptag_ordered_local_switch_detect_info_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__switch_detection__check_hlds__switch_detection__functor_number_map_local_switch_detect_info_0
};

#line 2272 "check_hlds.switch_detection.c"
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

#line 2287 "check_hlds.switch_detection.c"
const MR_TypeCtorInfo_Struct check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_process_unify_2 = {
  (MR_Integer) 2,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (check_hlds__switch_detection____Unify____process_unify_2_0_10001)),
  ((MR_Box) (check_hlds__switch_detection____Compare____process_unify_2_0_10001)),
  (MR_String) "check_hlds.switch_detection",
  (MR_String) "process_unify",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &check_hlds__switch_detection____vpti_pred_7__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0__plain_list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0__pseudo_1__pseudo_1__pseudo_2__pseudo_2
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2308 "check_hlds.switch_detection.c"
static const MR_PseudoTypeInfo check_hlds__switch_detection__check_hlds__switch_detection__field_types_switch_detect_info_0_0[2] = {
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
  (MR_PseudoTypeInfo) &check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_allow_multi_arm_0
};

#line 2314 "check_hlds.switch_detection.c"
static const MR_ConstString check_hlds__switch_detection__check_hlds__switch_detection__field_names_switch_detect_info_0_0[2] = {
  (MR_String) "sdi_module_info",
  (MR_String) "sdi_allow_multi_arm"
};

#line 2320 "check_hlds.switch_detection.c"
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

#line 2335 "check_hlds.switch_detection.c"
static const MR_DuFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__du_stag_ordered_switch_detect_info_0_0[1] = {
  &check_hlds__switch_detection__check_hlds__switch_detection__du_functor_desc_switch_detect_info_0_0
};

#line 2340 "check_hlds.switch_detection.c"
static const MR_DuPtagLayout check_hlds__switch_detection__check_hlds__switch_detection__du_ptag_ordered_switch_detect_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__switch_detection__check_hlds__switch_detection__du_stag_ordered_switch_detect_info_0_0
  }
};

#line 2349 "check_hlds.switch_detection.c"
static const MR_DuFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__du_name_ordered_switch_detect_info_0[1] = {
  &check_hlds__switch_detection__check_hlds__switch_detection__du_functor_desc_switch_detect_info_0_0
};

#line 2354 "check_hlds.switch_detection.c"
static const MR_Integer check_hlds__switch_detection__check_hlds__switch_detection__functor_number_map_switch_detect_info_0[1] = {
  (MR_Integer) 0
};

#line 2359 "check_hlds.switch_detection.c"
const MR_TypeCtorInfo_Struct check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_switch_detect_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__switch_detection____Unify____switch_detect_info_0_0_10001)),
  ((MR_Box) (check_hlds__switch_detection____Compare____switch_detect_info_0_0_10001)),
  (MR_String) "check_hlds.switch_detection",
  (MR_String) "switch_detect_info",
  {
    check_hlds__switch_detection__check_hlds__switch_detection__du_name_ordered_switch_detect_info_0
  },
  {
    check_hlds__switch_detection__check_hlds__switch_detection__du_ptag_ordered_switch_detect_info_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__switch_detection__check_hlds__switch_detection__functor_number_map_switch_detect_info_0
};

#line 2380 "check_hlds.switch_detection.c"
static MR_bool MR_CALL 
check_hlds__switch_detection____Unify____again_0_0_10001(
#line 2383 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_1,
#line 2385 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_2)
#line 2387 "check_hlds.switch_detection.c"
{
#line 2389 "check_hlds.switch_detection.c"
  {
#line 2391 "check_hlds.switch_detection.c"
    MR_bool check_hlds__switch_detection__succeeded;

#line 2394 "check_hlds.switch_detection.c"
    {
#line 2396 "check_hlds.switch_detection.c"
      check_hlds__switch_detection__succeeded = check_hlds__switch_detection____Unify____again_0_0(((MR_Word) check_hlds__switch_detection__wrapper_arg_1), ((MR_Word) check_hlds__switch_detection__wrapper_arg_2));
    }
#line 2399 "check_hlds.switch_detection.c"
    return check_hlds__switch_detection__succeeded;
#line 2401 "check_hlds.switch_detection.c"
  }
#line 2403 "check_hlds.switch_detection.c"
}

#line 2406 "check_hlds.switch_detection.c"
static void MR_CALL 
check_hlds__switch_detection____Compare____again_0_0_10001(
#line 2409 "check_hlds.switch_detection.c"
  MR_Box * check_hlds__switch_detection__wrapper_arg_1,
#line 2411 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_2,
#line 2413 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_3)
#line 2415 "check_hlds.switch_detection.c"
{
#line 2417 "check_hlds.switch_detection.c"
  {
#line 2419 "check_hlds.switch_detection.c"
    MR_Word check_hlds__switch_detection__conv0_HeadVar__1_1;

#line 2422 "check_hlds.switch_detection.c"
    {
#line 2424 "check_hlds.switch_detection.c"
      check_hlds__switch_detection____Compare____again_0_0(&check_hlds__switch_detection__conv0_HeadVar__1_1, ((MR_Word) check_hlds__switch_detection__wrapper_arg_2), ((MR_Word) check_hlds__switch_detection__wrapper_arg_3));
    }
#line 2427 "check_hlds.switch_detection.c"
    *check_hlds__switch_detection__wrapper_arg_1 = ((MR_Box) (check_hlds__switch_detection__conv0_HeadVar__1_1));
#line 2429 "check_hlds.switch_detection.c"
  }
#line 2431 "check_hlds.switch_detection.c"
}

#line 2434 "check_hlds.switch_detection.c"
static MR_bool MR_CALL 
check_hlds__switch_detection____Unify____allow_multi_arm_0_0_10001(
#line 2437 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_1,
#line 2439 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_2)
#line 2441 "check_hlds.switch_detection.c"
{
#line 2443 "check_hlds.switch_detection.c"
  {
#line 2445 "check_hlds.switch_detection.c"
    MR_bool check_hlds__switch_detection__succeeded;

#line 2448 "check_hlds.switch_detection.c"
    {
#line 2450 "check_hlds.switch_detection.c"
      check_hlds__switch_detection__succeeded = check_hlds__switch_detection____Unify____allow_multi_arm_0_0(((MR_Word) check_hlds__switch_detection__wrapper_arg_1), ((MR_Word) check_hlds__switch_detection__wrapper_arg_2));
    }
#line 2453 "check_hlds.switch_detection.c"
    return check_hlds__switch_detection__succeeded;
#line 2455 "check_hlds.switch_detection.c"
  }
#line 2457 "check_hlds.switch_detection.c"
}

#line 2460 "check_hlds.switch_detection.c"
static void MR_CALL 
check_hlds__switch_detection____Compare____allow_multi_arm_0_0_10001(
#line 2463 "check_hlds.switch_detection.c"
  MR_Box * check_hlds__switch_detection__wrapper_arg_1,
#line 2465 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_2,
#line 2467 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_3)
#line 2469 "check_hlds.switch_detection.c"
{
#line 2471 "check_hlds.switch_detection.c"
  {
#line 2473 "check_hlds.switch_detection.c"
    MR_Word check_hlds__switch_detection__conv0_HeadVar__1_1;

#line 2476 "check_hlds.switch_detection.c"
    {
#line 2478 "check_hlds.switch_detection.c"
      check_hlds__switch_detection____Compare____allow_multi_arm_0_0(&check_hlds__switch_detection__conv0_HeadVar__1_1, ((MR_Word) check_hlds__switch_detection__wrapper_arg_2), ((MR_Word) check_hlds__switch_detection__wrapper_arg_3));
    }
#line 2481 "check_hlds.switch_detection.c"
    *check_hlds__switch_detection__wrapper_arg_1 = ((MR_Box) (check_hlds__switch_detection__conv0_HeadVar__1_1));
#line 2483 "check_hlds.switch_detection.c"
  }
#line 2485 "check_hlds.switch_detection.c"
}

#line 2488 "check_hlds.switch_detection.c"
static MR_bool MR_CALL 
check_hlds__switch_detection____Unify____case_arm_0_0_10001(
#line 2491 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_1,
#line 2493 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_2)
#line 2495 "check_hlds.switch_detection.c"
{
#line 2497 "check_hlds.switch_detection.c"
  {
#line 2499 "check_hlds.switch_detection.c"
    MR_bool check_hlds__switch_detection__succeeded;

#line 2502 "check_hlds.switch_detection.c"
    {
#line 2504 "check_hlds.switch_detection.c"
      check_hlds__switch_detection__succeeded = check_hlds__switch_detection____Unify____case_arm_0_0(((MR_Word) check_hlds__switch_detection__wrapper_arg_1), ((MR_Word) check_hlds__switch_detection__wrapper_arg_2));
    }
#line 2507 "check_hlds.switch_detection.c"
    return check_hlds__switch_detection__succeeded;
#line 2509 "check_hlds.switch_detection.c"
  }
#line 2511 "check_hlds.switch_detection.c"
}

#line 2514 "check_hlds.switch_detection.c"
static void MR_CALL 
check_hlds__switch_detection____Compare____case_arm_0_0_10001(
#line 2517 "check_hlds.switch_detection.c"
  MR_Box * check_hlds__switch_detection__wrapper_arg_1,
#line 2519 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_2,
#line 2521 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_3)
#line 2523 "check_hlds.switch_detection.c"
{
#line 2525 "check_hlds.switch_detection.c"
  {
#line 2527 "check_hlds.switch_detection.c"
    MR_Word check_hlds__switch_detection__conv0_HeadVar__1_1;

#line 2530 "check_hlds.switch_detection.c"
    {
#line 2532 "check_hlds.switch_detection.c"
      check_hlds__switch_detection____Compare____case_arm_0_0(&check_hlds__switch_detection__conv0_HeadVar__1_1, ((MR_Word) check_hlds__switch_detection__wrapper_arg_2), ((MR_Word) check_hlds__switch_detection__wrapper_arg_3));
    }
#line 2535 "check_hlds.switch_detection.c"
    *check_hlds__switch_detection__wrapper_arg_1 = ((MR_Box) (check_hlds__switch_detection__conv0_HeadVar__1_1));
#line 2537 "check_hlds.switch_detection.c"
  }
#line 2539 "check_hlds.switch_detection.c"
}

#line 2542 "check_hlds.switch_detection.c"
static MR_bool MR_CALL 
check_hlds__switch_detection____Unify____cases_table_0_0_10001(
#line 2545 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_1,
#line 2547 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_2)
#line 2549 "check_hlds.switch_detection.c"
{
#line 2551 "check_hlds.switch_detection.c"
  {
#line 2553 "check_hlds.switch_detection.c"
    MR_bool check_hlds__switch_detection__succeeded;

#line 2556 "check_hlds.switch_detection.c"
    {
#line 2558 "check_hlds.switch_detection.c"
      check_hlds__switch_detection__succeeded = check_hlds__switch_detection____Unify____cases_table_0_0(((MR_Word) check_hlds__switch_detection__wrapper_arg_1), ((MR_Word) check_hlds__switch_detection__wrapper_arg_2));
    }
#line 2561 "check_hlds.switch_detection.c"
    return check_hlds__switch_detection__succeeded;
#line 2563 "check_hlds.switch_detection.c"
  }
#line 2565 "check_hlds.switch_detection.c"
}

#line 2568 "check_hlds.switch_detection.c"
static void MR_CALL 
check_hlds__switch_detection____Compare____cases_table_0_0_10001(
#line 2571 "check_hlds.switch_detection.c"
  MR_Box * check_hlds__switch_detection__wrapper_arg_1,
#line 2573 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_2,
#line 2575 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_3)
#line 2577 "check_hlds.switch_detection.c"
{
#line 2579 "check_hlds.switch_detection.c"
  {
#line 2581 "check_hlds.switch_detection.c"
    MR_Word check_hlds__switch_detection__conv0_HeadVar__1_1;

#line 2584 "check_hlds.switch_detection.c"
    {
#line 2586 "check_hlds.switch_detection.c"
      check_hlds__switch_detection____Compare____cases_table_0_0(&check_hlds__switch_detection__conv0_HeadVar__1_1, ((MR_Word) check_hlds__switch_detection__wrapper_arg_2), ((MR_Word) check_hlds__switch_detection__wrapper_arg_3));
    }
#line 2589 "check_hlds.switch_detection.c"
    *check_hlds__switch_detection__wrapper_arg_1 = ((MR_Box) (check_hlds__switch_detection__conv0_HeadVar__1_1));
#line 2591 "check_hlds.switch_detection.c"
  }
#line 2593 "check_hlds.switch_detection.c"
}

#line 2596 "check_hlds.switch_detection.c"
static MR_bool MR_CALL 
check_hlds__switch_detection____Unify____cons_id_entry_0_0_10001(
#line 2599 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_1,
#line 2601 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_2)
#line 2603 "check_hlds.switch_detection.c"
{
#line 2605 "check_hlds.switch_detection.c"
  {
#line 2607 "check_hlds.switch_detection.c"
    MR_bool check_hlds__switch_detection__succeeded;

#line 2610 "check_hlds.switch_detection.c"
    {
#line 2612 "check_hlds.switch_detection.c"
      check_hlds__switch_detection__succeeded = check_hlds__switch_detection____Unify____cons_id_entry_0_0(((MR_Word) check_hlds__switch_detection__wrapper_arg_1), ((MR_Word) check_hlds__switch_detection__wrapper_arg_2));
    }
#line 2615 "check_hlds.switch_detection.c"
    return check_hlds__switch_detection__succeeded;
#line 2617 "check_hlds.switch_detection.c"
  }
#line 2619 "check_hlds.switch_detection.c"
}

#line 2622 "check_hlds.switch_detection.c"
static void MR_CALL 
check_hlds__switch_detection____Compare____cons_id_entry_0_0_10001(
#line 2625 "check_hlds.switch_detection.c"
  MR_Box * check_hlds__switch_detection__wrapper_arg_1,
#line 2627 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_2,
#line 2629 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_3)
#line 2631 "check_hlds.switch_detection.c"
{
#line 2633 "check_hlds.switch_detection.c"
  {
#line 2635 "check_hlds.switch_detection.c"
    MR_Word check_hlds__switch_detection__conv0_HeadVar__1_1;

#line 2638 "check_hlds.switch_detection.c"
    {
#line 2640 "check_hlds.switch_detection.c"
      check_hlds__switch_detection____Compare____cons_id_entry_0_0(&check_hlds__switch_detection__conv0_HeadVar__1_1, ((MR_Word) check_hlds__switch_detection__wrapper_arg_2), ((MR_Word) check_hlds__switch_detection__wrapper_arg_3));
    }
#line 2643 "check_hlds.switch_detection.c"
    *check_hlds__switch_detection__wrapper_arg_1 = ((MR_Box) (check_hlds__switch_detection__conv0_HeadVar__1_1));
#line 2645 "check_hlds.switch_detection.c"
  }
#line 2647 "check_hlds.switch_detection.c"
}

#line 2650 "check_hlds.switch_detection.c"
static MR_bool MR_CALL 
check_hlds__switch_detection____Unify____cons_id_state_0_0_10001(
#line 2653 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_1,
#line 2655 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_2)
#line 2657 "check_hlds.switch_detection.c"
{
#line 2659 "check_hlds.switch_detection.c"
  {
#line 2661 "check_hlds.switch_detection.c"
    MR_bool check_hlds__switch_detection__succeeded;

#line 2664 "check_hlds.switch_detection.c"
    {
#line 2666 "check_hlds.switch_detection.c"
      check_hlds__switch_detection__succeeded = check_hlds__switch_detection____Unify____cons_id_state_0_0(((MR_Word) check_hlds__switch_detection__wrapper_arg_1), ((MR_Word) check_hlds__switch_detection__wrapper_arg_2));
    }
#line 2669 "check_hlds.switch_detection.c"
    return check_hlds__switch_detection__succeeded;
#line 2671 "check_hlds.switch_detection.c"
  }
#line 2673 "check_hlds.switch_detection.c"
}

#line 2676 "check_hlds.switch_detection.c"
static void MR_CALL 
check_hlds__switch_detection____Compare____cons_id_state_0_0_10001(
#line 2679 "check_hlds.switch_detection.c"
  MR_Box * check_hlds__switch_detection__wrapper_arg_1,
#line 2681 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_2,
#line 2683 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_3)
#line 2685 "check_hlds.switch_detection.c"
{
#line 2687 "check_hlds.switch_detection.c"
  {
#line 2689 "check_hlds.switch_detection.c"
    MR_Word check_hlds__switch_detection__conv0_HeadVar__1_1;

#line 2692 "check_hlds.switch_detection.c"
    {
#line 2694 "check_hlds.switch_detection.c"
      check_hlds__switch_detection____Compare____cons_id_state_0_0(&check_hlds__switch_detection__conv0_HeadVar__1_1, ((MR_Word) check_hlds__switch_detection__wrapper_arg_2), ((MR_Word) check_hlds__switch_detection__wrapper_arg_3));
    }
#line 2697 "check_hlds.switch_detection.c"
    *check_hlds__switch_detection__wrapper_arg_1 = ((MR_Box) (check_hlds__switch_detection__conv0_HeadVar__1_1));
#line 2699 "check_hlds.switch_detection.c"
  }
#line 2701 "check_hlds.switch_detection.c"
}

#line 2704 "check_hlds.switch_detection.c"
static MR_bool MR_CALL 
check_hlds__switch_detection____Unify____deconstruct_search_0_0_10001(
#line 2707 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_1,
#line 2709 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_2)
#line 2711 "check_hlds.switch_detection.c"
{
#line 2713 "check_hlds.switch_detection.c"
  {
#line 2715 "check_hlds.switch_detection.c"
    MR_bool check_hlds__switch_detection__succeeded;

#line 2718 "check_hlds.switch_detection.c"
    {
#line 2720 "check_hlds.switch_detection.c"
      check_hlds__switch_detection__succeeded = check_hlds__switch_detection____Unify____deconstruct_search_0_0(((MR_Word) check_hlds__switch_detection__wrapper_arg_1), ((MR_Word) check_hlds__switch_detection__wrapper_arg_2));
    }
#line 2723 "check_hlds.switch_detection.c"
    return check_hlds__switch_detection__succeeded;
#line 2725 "check_hlds.switch_detection.c"
  }
#line 2727 "check_hlds.switch_detection.c"
}

#line 2730 "check_hlds.switch_detection.c"
static void MR_CALL 
check_hlds__switch_detection____Compare____deconstruct_search_0_0_10001(
#line 2733 "check_hlds.switch_detection.c"
  MR_Box * check_hlds__switch_detection__wrapper_arg_1,
#line 2735 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_2,
#line 2737 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_3)
#line 2739 "check_hlds.switch_detection.c"
{
#line 2741 "check_hlds.switch_detection.c"
  {
#line 2743 "check_hlds.switch_detection.c"
    MR_Word check_hlds__switch_detection__conv0_HeadVar__1_1;

#line 2746 "check_hlds.switch_detection.c"
    {
#line 2748 "check_hlds.switch_detection.c"
      check_hlds__switch_detection____Compare____deconstruct_search_0_0(&check_hlds__switch_detection__conv0_HeadVar__1_1, ((MR_Word) check_hlds__switch_detection__wrapper_arg_2), ((MR_Word) check_hlds__switch_detection__wrapper_arg_3));
    }
#line 2751 "check_hlds.switch_detection.c"
    *check_hlds__switch_detection__wrapper_arg_1 = ((MR_Box) (check_hlds__switch_detection__conv0_HeadVar__1_1));
#line 2753 "check_hlds.switch_detection.c"
  }
#line 2755 "check_hlds.switch_detection.c"
}

#line 2758 "check_hlds.switch_detection.c"
static MR_bool MR_CALL 
check_hlds__switch_detection____Unify____found_deconstruct_0_0_10001(
#line 2761 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_1,
#line 2763 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_2)
#line 2765 "check_hlds.switch_detection.c"
{
#line 2767 "check_hlds.switch_detection.c"
  {
#line 2769 "check_hlds.switch_detection.c"
    MR_bool check_hlds__switch_detection__succeeded;

#line 2772 "check_hlds.switch_detection.c"
    {
#line 2774 "check_hlds.switch_detection.c"
      check_hlds__switch_detection__succeeded = check_hlds__switch_detection____Unify____found_deconstruct_0_0(((MR_Word) check_hlds__switch_detection__wrapper_arg_1), ((MR_Word) check_hlds__switch_detection__wrapper_arg_2));
    }
#line 2777 "check_hlds.switch_detection.c"
    return check_hlds__switch_detection__succeeded;
#line 2779 "check_hlds.switch_detection.c"
  }
#line 2781 "check_hlds.switch_detection.c"
}

#line 2784 "check_hlds.switch_detection.c"
static void MR_CALL 
check_hlds__switch_detection____Compare____found_deconstruct_0_0_10001(
#line 2787 "check_hlds.switch_detection.c"
  MR_Box * check_hlds__switch_detection__wrapper_arg_1,
#line 2789 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_2,
#line 2791 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_3)
#line 2793 "check_hlds.switch_detection.c"
{
#line 2795 "check_hlds.switch_detection.c"
  {
#line 2797 "check_hlds.switch_detection.c"
    MR_Word check_hlds__switch_detection__conv0_HeadVar__1_1;

#line 2800 "check_hlds.switch_detection.c"
    {
#line 2802 "check_hlds.switch_detection.c"
      check_hlds__switch_detection____Compare____found_deconstruct_0_0(&check_hlds__switch_detection__conv0_HeadVar__1_1, ((MR_Word) check_hlds__switch_detection__wrapper_arg_2), ((MR_Word) check_hlds__switch_detection__wrapper_arg_3));
    }
#line 2805 "check_hlds.switch_detection.c"
    *check_hlds__switch_detection__wrapper_arg_1 = ((MR_Box) (check_hlds__switch_detection__conv0_HeadVar__1_1));
#line 2807 "check_hlds.switch_detection.c"
  }
#line 2809 "check_hlds.switch_detection.c"
}

#line 2812 "check_hlds.switch_detection.c"
static MR_bool MR_CALL 
check_hlds__switch_detection____Unify____local_switch_detect_info_0_0_10001(
#line 2815 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_1,
#line 2817 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_2)
#line 2819 "check_hlds.switch_detection.c"
{
#line 2821 "check_hlds.switch_detection.c"
  {
#line 2823 "check_hlds.switch_detection.c"
    MR_bool check_hlds__switch_detection__succeeded;

#line 2826 "check_hlds.switch_detection.c"
    {
#line 2828 "check_hlds.switch_detection.c"
      check_hlds__switch_detection__succeeded = check_hlds__switch_detection____Unify____local_switch_detect_info_0_0(((MR_Word) check_hlds__switch_detection__wrapper_arg_1), ((MR_Word) check_hlds__switch_detection__wrapper_arg_2));
    }
#line 2831 "check_hlds.switch_detection.c"
    return check_hlds__switch_detection__succeeded;
#line 2833 "check_hlds.switch_detection.c"
  }
#line 2835 "check_hlds.switch_detection.c"
}

#line 2838 "check_hlds.switch_detection.c"
static void MR_CALL 
check_hlds__switch_detection____Compare____local_switch_detect_info_0_0_10001(
#line 2841 "check_hlds.switch_detection.c"
  MR_Box * check_hlds__switch_detection__wrapper_arg_1,
#line 2843 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_2,
#line 2845 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_3)
#line 2847 "check_hlds.switch_detection.c"
{
#line 2849 "check_hlds.switch_detection.c"
  {
#line 2851 "check_hlds.switch_detection.c"
    MR_Word check_hlds__switch_detection__conv0_HeadVar__1_1;

#line 2854 "check_hlds.switch_detection.c"
    {
#line 2856 "check_hlds.switch_detection.c"
      check_hlds__switch_detection____Compare____local_switch_detect_info_0_0(&check_hlds__switch_detection__conv0_HeadVar__1_1, ((MR_Word) check_hlds__switch_detection__wrapper_arg_2), ((MR_Word) check_hlds__switch_detection__wrapper_arg_3));
    }
#line 2859 "check_hlds.switch_detection.c"
    *check_hlds__switch_detection__wrapper_arg_1 = ((MR_Box) (check_hlds__switch_detection__conv0_HeadVar__1_1));
#line 2861 "check_hlds.switch_detection.c"
  }
#line 2863 "check_hlds.switch_detection.c"
}

#line 2866 "check_hlds.switch_detection.c"
static MR_bool MR_CALL 
check_hlds__switch_detection____Unify____process_unify_2_0_10001(
#line 2869 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_1,
#line 2871 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_2,
#line 2873 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_3,
#line 2875 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_4)
#line 2877 "check_hlds.switch_detection.c"
{
#line 2879 "check_hlds.switch_detection.c"
  {
#line 2881 "check_hlds.switch_detection.c"
    MR_bool check_hlds__switch_detection__succeeded;

#line 2884 "check_hlds.switch_detection.c"
    {
#line 2886 "check_hlds.switch_detection.c"
      check_hlds__switch_detection__succeeded = check_hlds__switch_detection____Unify____process_unify_2_0(((MR_Word) check_hlds__switch_detection__wrapper_arg_1), ((MR_Word) check_hlds__switch_detection__wrapper_arg_2), ((MR_Word) check_hlds__switch_detection__wrapper_arg_3), ((MR_Word) check_hlds__switch_detection__wrapper_arg_4));
    }
#line 2889 "check_hlds.switch_detection.c"
    return check_hlds__switch_detection__succeeded;
#line 2891 "check_hlds.switch_detection.c"
  }
#line 2893 "check_hlds.switch_detection.c"
}

#line 2896 "check_hlds.switch_detection.c"
static void MR_CALL 
check_hlds__switch_detection____Compare____process_unify_2_0_10001(
#line 2899 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_1,
#line 2901 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_2,
#line 2903 "check_hlds.switch_detection.c"
  MR_Box * check_hlds__switch_detection__wrapper_arg_3,
#line 2905 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_4,
#line 2907 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_5)
#line 2909 "check_hlds.switch_detection.c"
{
#line 2911 "check_hlds.switch_detection.c"
  {
#line 2913 "check_hlds.switch_detection.c"
    MR_Word check_hlds__switch_detection__conv0_HeadVar__1_1;

#line 2916 "check_hlds.switch_detection.c"
    {
#line 2918 "check_hlds.switch_detection.c"
      check_hlds__switch_detection____Compare____process_unify_2_0(((MR_Word) check_hlds__switch_detection__wrapper_arg_1), ((MR_Word) check_hlds__switch_detection__wrapper_arg_2), &check_hlds__switch_detection__conv0_HeadVar__1_1, ((MR_Word) check_hlds__switch_detection__wrapper_arg_4), ((MR_Word) check_hlds__switch_detection__wrapper_arg_5));
    }
#line 2921 "check_hlds.switch_detection.c"
    *check_hlds__switch_detection__wrapper_arg_3 = ((MR_Box) (check_hlds__switch_detection__conv0_HeadVar__1_1));
#line 2923 "check_hlds.switch_detection.c"
  }
#line 2925 "check_hlds.switch_detection.c"
}

#line 2928 "check_hlds.switch_detection.c"
static MR_bool MR_CALL 
check_hlds__switch_detection____Unify____switch_detect_info_0_0_10001(
#line 2931 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_1,
#line 2933 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_2)
#line 2935 "check_hlds.switch_detection.c"
{
#line 2937 "check_hlds.switch_detection.c"
  {
#line 2939 "check_hlds.switch_detection.c"
    MR_bool check_hlds__switch_detection__succeeded;

#line 2942 "check_hlds.switch_detection.c"
    {
#line 2944 "check_hlds.switch_detection.c"
      check_hlds__switch_detection__succeeded = check_hlds__switch_detection____Unify____switch_detect_info_0_0(((MR_Word) check_hlds__switch_detection__wrapper_arg_1), ((MR_Word) check_hlds__switch_detection__wrapper_arg_2));
    }
#line 2947 "check_hlds.switch_detection.c"
    return check_hlds__switch_detection__succeeded;
#line 2949 "check_hlds.switch_detection.c"
  }
#line 2951 "check_hlds.switch_detection.c"
}

#line 2954 "check_hlds.switch_detection.c"
static void MR_CALL 
check_hlds__switch_detection____Compare____switch_detect_info_0_0_10001(
#line 2957 "check_hlds.switch_detection.c"
  MR_Box * check_hlds__switch_detection__wrapper_arg_1,
#line 2959 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_2,
#line 2961 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_3)
#line 2963 "check_hlds.switch_detection.c"
{
#line 2965 "check_hlds.switch_detection.c"
  {
#line 2967 "check_hlds.switch_detection.c"
    MR_Word check_hlds__switch_detection__conv0_HeadVar__1_1;

#line 2970 "check_hlds.switch_detection.c"
    {
#line 2972 "check_hlds.switch_detection.c"
      check_hlds__switch_detection____Compare____switch_detect_info_0_0(&check_hlds__switch_detection__conv0_HeadVar__1_1, ((MR_Word) check_hlds__switch_detection__wrapper_arg_2), ((MR_Word) check_hlds__switch_detection__wrapper_arg_3));
    }
#line 2975 "check_hlds.switch_detection.c"
    *check_hlds__switch_detection__wrapper_arg_1 = ((MR_Box) (check_hlds__switch_detection__conv0_HeadVar__1_1));
#line 2977 "check_hlds.switch_detection.c"
  }
#line 2979 "check_hlds.switch_detection.c"
}

#line 1018 "switch_detection.m"
static void MR_CALL 
check_hlds__switch_detection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_106_95_102_105_110_100_95_98_105_110_100_95_118_97_114_95_95_91_49_44_32_50_93_95_48_11_p_0(
#line 1018 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__1_1,
#line 1018 "switch_detection.m"
  MR_Word check_hlds__switch_detection__ProcessUnify_2,
#line 1018 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__3_3,
#line 1018 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__HeadVar__4_4,
#line 1018 "switch_detection.m"
  MR_Word check_hlds__switch_detection__STATE_VARIABLE_Subst_0_5,
#line 1018 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__STATE_VARIABLE_Subst_6,
#line 1018 "switch_detection.m"
  MR_Box check_hlds__switch_detection__STATE_VARIABLE_Result_0_7,
#line 1018 "switch_detection.m"
  MR_Box * check_hlds__switch_detection__STATE_VARIABLE_Result_8,
#line 1018 "switch_detection.m"
  MR_Box check_hlds__switch_detection__STATE_VARIABLE_Info_0_9,
#line 1018 "switch_detection.m"
  MR_Box * check_hlds__switch_detection__STATE_VARIABLE_Info_10,
#line 1018 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__HeadVar__11_11)
#line 1018 "switch_detection.m"
{
#line 1024 "switch_detection.m"
  {
#line 1024 "switch_detection.m"
    MR_bool check_hlds__switch_detection__succeeded;

#line 1024 "switch_detection.m"
    if ((check_hlds__switch_detection__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1024 "switch_detection.m"
      {
#line 1024 "switch_detection.m"
        *check_hlds__switch_detection__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1025 "switch_detection.m"
        *check_hlds__switch_detection__HeadVar__11_11 = (MR_Integer) 0;
#line 1024 "switch_detection.m"
        *check_hlds__switch_detection__STATE_VARIABLE_Info_10 = check_hlds__switch_detection__STATE_VARIABLE_Info_0_9;
#line 1024 "switch_detection.m"
        *check_hlds__switch_detection__STATE_VARIABLE_Result_8 = check_hlds__switch_detection__STATE_VARIABLE_Result_0_7;
#line 1024 "switch_detection.m"
        *check_hlds__switch_detection__STATE_VARIABLE_Subst_6 = check_hlds__switch_detection__STATE_VARIABLE_Subst_0_5;
#line 1024 "switch_detection.m"
      }
#line 1024 "switch_detection.m"
    else
#line 1027 "switch_detection.m"
      {
#line 1027 "switch_detection.m"
        MR_Word check_hlds__switch_detection__Goal0_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__HeadVar__3_3, (MR_Integer) 0)));
#line 1027 "switch_detection.m"
        MR_Word check_hlds__switch_detection__Goals0_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__HeadVar__3_3, (MR_Integer) 1)));
#line 1027 "switch_detection.m"
        MR_Word check_hlds__switch_detection__Goal_27;
#line 1027 "switch_detection.m"
        MR_Word check_hlds__switch_detection__Goals_28;
#line 1027 "switch_detection.m"
        MR_Word check_hlds__switch_detection__FoundDeconstruct1_33;
#line 1027 "switch_detection.m"
        MR_Word check_hlds__switch_detection__STATE_VARIABLE_Subst_40_40;
#line 1027 "switch_detection.m"
        MR_Box check_hlds__switch_detection__STATE_VARIABLE_Result_41_41;
#line 1027 "switch_detection.m"
        MR_Box check_hlds__switch_detection__STATE_VARIABLE_Info_42_42;

#line 1028 "switch_detection.m"
        {
#line 1028 "switch_detection.m"
          check_hlds__switch_detection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_98_105_110_100_95_118_97_114_95_50_95_95_91_49_44_32_50_93_95_48_11_p_0(check_hlds__switch_detection__HeadVar__1_1, check_hlds__switch_detection__ProcessUnify_2, check_hlds__switch_detection__Goal0_25, &check_hlds__switch_detection__Goal_27, check_hlds__switch_detection__STATE_VARIABLE_Subst_0_5, &check_hlds__switch_detection__STATE_VARIABLE_Subst_40_40, check_hlds__switch_detection__STATE_VARIABLE_Result_0_7, &check_hlds__switch_detection__STATE_VARIABLE_Result_41_41, check_hlds__switch_detection__STATE_VARIABLE_Info_0_9, &check_hlds__switch_detection__STATE_VARIABLE_Info_42_42, &check_hlds__switch_detection__FoundDeconstruct1_33);
        }
#line 1034 "switch_detection.m"
        if ((check_hlds__switch_detection__FoundDeconstruct1_33 == (MR_Integer) 0))
#line 1032 "switch_detection.m"
          {
#line 1032 "switch_detection.m"
            check_hlds__switch_detection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_106_95_102_105_110_100_95_98_105_110_100_95_118_97_114_95_95_91_49_44_32_50_93_95_48_11_p_0(check_hlds__switch_detection__HeadVar__1_1, check_hlds__switch_detection__ProcessUnify_2, check_hlds__switch_detection__Goals0_26, &check_hlds__switch_detection__Goals_28, check_hlds__switch_detection__STATE_VARIABLE_Subst_40_40, check_hlds__switch_detection__STATE_VARIABLE_Subst_6, check_hlds__switch_detection__STATE_VARIABLE_Result_41_41, check_hlds__switch_detection__STATE_VARIABLE_Result_8, check_hlds__switch_detection__STATE_VARIABLE_Info_42_42, check_hlds__switch_detection__STATE_VARIABLE_Info_10, check_hlds__switch_detection__HeadVar__11_11);
          }
#line 1034 "switch_detection.m"
        else
#line 1037 "switch_detection.m"
          {
#line 1038 "switch_detection.m"
            *check_hlds__switch_detection__HeadVar__11_11 = check_hlds__switch_detection__FoundDeconstruct1_33;
#line 1039 "switch_detection.m"
            check_hlds__switch_detection__Goals_28 = check_hlds__switch_detection__Goals0_26;
#line 1039 "switch_detection.m"
            *check_hlds__switch_detection__STATE_VARIABLE_Subst_6 = check_hlds__switch_detection__STATE_VARIABLE_Subst_40_40;
#line 1039 "switch_detection.m"
            *check_hlds__switch_detection__STATE_VARIABLE_Result_8 = check_hlds__switch_detection__STATE_VARIABLE_Result_41_41;
#line 1039 "switch_detection.m"
            *check_hlds__switch_detection__STATE_VARIABLE_Info_10 = check_hlds__switch_detection__STATE_VARIABLE_Info_42_42;
#line 1037 "switch_detection.m"
          }
#line 1026 "switch_detection.m"
        {
#line 1026 "switch_detection.m"
          MR_Word base;
#line 1026 "switch_detection.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1026 "switch_detection.m"
          *check_hlds__switch_detection__HeadVar__4_4 = base;
#line 1026 "switch_detection.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__switch_detection__Goal_27));
#line 1026 "switch_detection.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__switch_detection__Goals_28));
#line 1026 "switch_detection.m"
        }
#line 1027 "switch_detection.m"
      }
#line 1024 "switch_detection.m"
  }
#line 1018 "switch_detection.m"
}

#line 909 "switch_detection.m"
static void MR_CALL 
check_hlds__switch_detection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_98_105_110_100_95_118_97_114_95_50_95_95_91_49_44_32_50_93_95_48_11_p_0(
#line 909 "switch_detection.m"
  MR_Word check_hlds__switch_detection__Var_12,
#line 909 "switch_detection.m"
  MR_Word check_hlds__switch_detection__ProcessUnify_13,
#line 909 "switch_detection.m"
  MR_Word check_hlds__switch_detection__Goal0_14,
#line 909 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__Goal_15,
#line 909 "switch_detection.m"
  MR_Word check_hlds__switch_detection__STATE_VARIABLE_Subst_0_87,
#line 909 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__STATE_VARIABLE_Subst_88,
#line 909 "switch_detection.m"
  MR_Box check_hlds__switch_detection__STATE_VARIABLE_Result_0_89,
#line 909 "switch_detection.m"
  MR_Box * check_hlds__switch_detection__STATE_VARIABLE_Result_90,
#line 909 "switch_detection.m"
  MR_Box check_hlds__switch_detection__STATE_VARIABLE_Info_0_91,
#line 909 "switch_detection.m"
  MR_Box * check_hlds__switch_detection__STATE_VARIABLE_Info_92,
#line 909 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__FoundDeconstruct_19)
#line 909 "switch_detection.m"
{
#line 916 "switch_detection.m"
  {
#line 916 "switch_detection.m"
    MR_bool check_hlds__switch_detection__succeeded;
#line 916 "switch_detection.m"
    MR_Word check_hlds__switch_detection__GoalExpr0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__Goal0_14, (MR_Integer) 0)));
#line 916 "switch_detection.m"
    MR_Word check_hlds__switch_detection__GoalInfo_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__Goal0_14, (MR_Integer) 1)));

#line 942 "switch_detection.m"
    if (((MR_tag((MR_Word) check_hlds__switch_detection__GoalExpr0_20)) == (MR_mktag((MR_Integer) 1))))
#line 962 "switch_detection.m"
      {
#line 962 "switch_detection.m"
        MR_Word check_hlds__switch_detection__LHS_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__GoalExpr0_20, (MR_Integer) 0)));
#line 962 "switch_detection.m"
        MR_Word check_hlds__switch_detection__RHS_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__GoalExpr0_20, (MR_Integer) 1)));
#line 962 "switch_detection.m"
        MR_Word check_hlds__switch_detection__UnifyInfo0_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__GoalExpr0_20, (MR_Integer) 3)));
#line 962 "switch_detection.m"
        MR_Word check_hlds__switch_detection__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__GoalExpr0_20, (MR_Integer) 2)));
#line 962 "switch_detection.m"
        MR_Word check_hlds__switch_detection__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__GoalExpr0_20, (MR_Integer) 4)));
#line 966 "switch_detection.m"
        MR_Word check_hlds__switch_detection__TypeCtorInfo_120_120;
#line 966 "switch_detection.m"
        MR_Word check_hlds__switch_detection__TypeInfo_125_125;
#line 966 "switch_detection.m"
        MR_Word check_hlds__switch_detection__UnifyVar_37;
#line 966 "switch_detection.m"
        MR_Word check_hlds__switch_detection__SubstVar_43;
#line 966 "switch_detection.m"
        MR_Word check_hlds__switch_detection__SubstUnifyVar_44;
#line 966 "switch_detection.m"
        MR_Word check_hlds__switch_detection__V_97_97;
#line 966 "switch_detection.m"
        MR_Word check_hlds__switch_detection__V_98_98;
#line 966 "switch_detection.m"
        MR_Word check_hlds__switch_detection__V_99_99;
#line 966 "switch_detection.m"
        MR_Word check_hlds__switch_detection__V_100_100;
#line 966 "switch_detection.m"
        MR_Word check_hlds__switch_detection__V_101_101;
#line 966 "switch_detection.m"
        MR_Word check_hlds__switch_detection__V_102_102;
#line 966 "switch_detection.m"
        MR_Word check_hlds__switch_detection__V_103_103;
#line 966 "switch_detection.m"
        MR_Word check_hlds__switch_detection__V_104_104;
#line 966 "switch_detection.m"
        MR_Word check_hlds__switch_detection__V_121_121;
#line 966 "switch_detection.m"
        MR_Word check_hlds__switch_detection__V_122_122;
#line 966 "switch_detection.m"
        MR_Word check_hlds__switch_detection__V_38_38;
#line 966 "switch_detection.m"
        MR_Word check_hlds__switch_detection__V_39_39;
#line 966 "switch_detection.m"
        MR_Word check_hlds__switch_detection__V_40_40;
#line 966 "switch_detection.m"
        MR_Word check_hlds__switch_detection__V_41_41;
#line 966 "switch_detection.m"
        MR_Word check_hlds__switch_detection__V_42_42;

#line 966 "switch_detection.m"
        check_hlds__switch_detection__succeeded = ((MR_tag((MR_Word) check_hlds__switch_detection__UnifyInfo0_35)) == (MR_mktag((MR_Integer) 1)));
#line 966 "switch_detection.m"
        if (check_hlds__switch_detection__succeeded)
#line 966 "switch_detection.m"
          {
#line 966 "switch_detection.m"
            check_hlds__switch_detection__UnifyVar_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__UnifyInfo0_35, (MR_Integer) 0)));
#line 966 "switch_detection.m"
            check_hlds__switch_detection__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__UnifyInfo0_35, (MR_Integer) 1)));
#line 966 "switch_detection.m"
            check_hlds__switch_detection__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__UnifyInfo0_35, (MR_Integer) 2)));
#line 966 "switch_detection.m"
            check_hlds__switch_detection__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__UnifyInfo0_35, (MR_Integer) 3)));
#line 966 "switch_detection.m"
            check_hlds__switch_detection__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__UnifyInfo0_35, (MR_Integer) 4)));
#line 966 "switch_detection.m"
            check_hlds__switch_detection__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__UnifyInfo0_35, (MR_Integer) 5)));
#line 967 "switch_detection.m"
            {
#line 967 "switch_detection.m"
              check_hlds__switch_detection__V_99_99 = mercury__term__context_init_0_f_0();
            }
#line 967 "switch_detection.m"
            {
#line 967 "switch_detection.m"
              check_hlds__switch_detection__V_97_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 967 "switch_detection.m"
              MR_hl_field(MR_mktag(1), check_hlds__switch_detection__V_97_97, 0) = ((MR_Box) (check_hlds__switch_detection__Var_12));
#line 967 "switch_detection.m"
              MR_hl_field(MR_mktag(1), check_hlds__switch_detection__V_97_97, 1) = ((MR_Box) (check_hlds__switch_detection__V_99_99));
#line 967 "switch_detection.m"
            }
#line 968 "switch_detection.m"
            {
#line 968 "switch_detection.m"
              check_hlds__switch_detection__V_100_100 = mercury__term__context_init_0_f_0();
            }
#line 3229 "check_hlds.switch_detection.c"
            check_hlds__switch_detection__TypeCtorInfo_120_120 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 967 "switch_detection.m"
            {
#line 967 "switch_detection.m"
              mercury__term__apply_rec_substitution_3_p_0(check_hlds__switch_detection__TypeCtorInfo_120_120, check_hlds__switch_detection__V_97_97, check_hlds__switch_detection__STATE_VARIABLE_Subst_0_87, &check_hlds__switch_detection__V_98_98);
            }
#line 968 "switch_detection.m"
            check_hlds__switch_detection__succeeded = ((MR_tag((MR_Word) check_hlds__switch_detection__V_98_98)) == (MR_mktag((MR_Integer) 1)));
#line 968 "switch_detection.m"
            if (check_hlds__switch_detection__succeeded)
#line 968 "switch_detection.m"
              {
#line 968 "switch_detection.m"
                check_hlds__switch_detection__SubstVar_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__V_98_98, (MR_Integer) 0)));
#line 968 "switch_detection.m"
                check_hlds__switch_detection__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__V_98_98, (MR_Integer) 1)));
#line 968 "switch_detection.m"
                {
#line 968 "switch_detection.m"
                  check_hlds__switch_detection__succeeded = mercury__term____Unify____context_0_0(check_hlds__switch_detection__V_100_100, check_hlds__switch_detection__V_121_121);
                }
#line 966 "switch_detection.m"
                if (check_hlds__switch_detection__succeeded)
#line 966 "switch_detection.m"
                  {
#line 969 "switch_detection.m"
                    {
#line 969 "switch_detection.m"
                      check_hlds__switch_detection__V_103_103 = mercury__term__context_init_0_f_0();
                    }
#line 969 "switch_detection.m"
                    {
#line 969 "switch_detection.m"
                      check_hlds__switch_detection__V_101_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 969 "switch_detection.m"
                      MR_hl_field(MR_mktag(1), check_hlds__switch_detection__V_101_101, 0) = ((MR_Box) (check_hlds__switch_detection__UnifyVar_37));
#line 969 "switch_detection.m"
                      MR_hl_field(MR_mktag(1), check_hlds__switch_detection__V_101_101, 1) = ((MR_Box) (check_hlds__switch_detection__V_103_103));
#line 969 "switch_detection.m"
                    }
#line 970 "switch_detection.m"
                    {
#line 970 "switch_detection.m"
                      check_hlds__switch_detection__V_104_104 = mercury__term__context_init_0_f_0();
                    }
#line 969 "switch_detection.m"
                    {
#line 969 "switch_detection.m"
                      mercury__term__apply_rec_substitution_3_p_0(check_hlds__switch_detection__TypeCtorInfo_120_120, check_hlds__switch_detection__V_101_101, check_hlds__switch_detection__STATE_VARIABLE_Subst_0_87, &check_hlds__switch_detection__V_102_102);
                    }
#line 970 "switch_detection.m"
                    check_hlds__switch_detection__succeeded = ((MR_tag((MR_Word) check_hlds__switch_detection__V_102_102)) == (MR_mktag((MR_Integer) 1)));
#line 970 "switch_detection.m"
                    if (check_hlds__switch_detection__succeeded)
#line 970 "switch_detection.m"
                      {
#line 970 "switch_detection.m"
                        check_hlds__switch_detection__SubstUnifyVar_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__V_102_102, (MR_Integer) 0)));
#line 970 "switch_detection.m"
                        check_hlds__switch_detection__V_122_122 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__V_102_102, (MR_Integer) 1)));
#line 970 "switch_detection.m"
                        {
#line 970 "switch_detection.m"
                          check_hlds__switch_detection__succeeded = mercury__term____Unify____context_0_0(check_hlds__switch_detection__V_104_104, check_hlds__switch_detection__V_122_122);
                        }
#line 966 "switch_detection.m"
                        if (check_hlds__switch_detection__succeeded)
#line 966 "switch_detection.m"
                          {
#line 3299 "check_hlds.switch_detection.c"
                            check_hlds__switch_detection__TypeInfo_125_125 = (MR_Word) &check_hlds__switch_detection_scalar_common_1[0];
#line 971 "switch_detection.m"
                            {
#line 971 "switch_detection.m"
                              check_hlds__switch_detection__succeeded = mercury__builtin__unify_2_p_0(check_hlds__switch_detection__TypeInfo_125_125, ((MR_Box) (check_hlds__switch_detection__SubstVar_43)), ((MR_Box) (check_hlds__switch_detection__SubstUnifyVar_44)));
                            }
#line 966 "switch_detection.m"
                          }
#line 970 "switch_detection.m"
                      }
#line 966 "switch_detection.m"
                  }
#line 968 "switch_detection.m"
              }
#line 966 "switch_detection.m"
          }
#line 976 "switch_detection.m"
        if (check_hlds__switch_detection__succeeded)
#line 973 "switch_detection.m"
          {
#line 973 "switch_detection.m"
            MR_Word check_hlds__switch_detection__Goals_45;
#line 973 "switch_detection.m"
            void MR_CALL (* check_hlds__switch_detection__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__ProcessUnify_13, (MR_Integer) 1)));
#line 973 "switch_detection.m"
            MR_Box check_hlds__switch_detection__conv1_Goals_45;

#line 973 "switch_detection.m"
            {
#line 973 "switch_detection.m"
              check_hlds__switch_detection__func_0(((MR_Box) check_hlds__switch_detection__ProcessUnify_13), ((MR_Box) (check_hlds__switch_detection__Var_12)), ((MR_Box) (check_hlds__switch_detection__Goal0_14)), &check_hlds__switch_detection__conv1_Goals_45, check_hlds__switch_detection__STATE_VARIABLE_Result_0_89, check_hlds__switch_detection__STATE_VARIABLE_Result_90, check_hlds__switch_detection__STATE_VARIABLE_Info_0_91, check_hlds__switch_detection__STATE_VARIABLE_Info_92);
            }
#line 973 "switch_detection.m"
            check_hlds__switch_detection__Goals_45 = ((MR_Word) check_hlds__switch_detection__conv1_Goals_45);
#line 974 "switch_detection.m"
            {
#line 974 "switch_detection.m"
              hlds__hlds_goal__conj_list_to_goal_3_p_0(check_hlds__switch_detection__Goals_45, check_hlds__switch_detection__GoalInfo_21, check_hlds__switch_detection__Goal_15);
            }
#line 975 "switch_detection.m"
            *check_hlds__switch_detection__FoundDeconstruct_19 = (MR_Integer) 1;
#line 975 "switch_detection.m"
            *check_hlds__switch_detection__STATE_VARIABLE_Subst_88 = check_hlds__switch_detection__STATE_VARIABLE_Subst_0_87;
#line 973 "switch_detection.m"
          }
#line 976 "switch_detection.m"
        else
#line 977 "switch_detection.m"
          {
#line 982 "switch_detection.m"
            MR_Word check_hlds__switch_detection__NewSubst_46;

#line 977 "switch_detection.m"
            *check_hlds__switch_detection__Goal_15 = check_hlds__switch_detection__Goal0_14;
#line 978 "switch_detection.m"
            *check_hlds__switch_detection__FoundDeconstruct_19 = (MR_Integer) 0;
#line 980 "switch_detection.m"
            {
#line 980 "switch_detection.m"
              check_hlds__switch_detection__succeeded = check_hlds__det_util__interpret_unify_4_p_0(check_hlds__switch_detection__LHS_32, check_hlds__switch_detection__RHS_33, check_hlds__switch_detection__STATE_VARIABLE_Subst_0_87, &check_hlds__switch_detection__NewSubst_46);
            }
#line 982 "switch_detection.m"
            if (check_hlds__switch_detection__succeeded)
#line 981 "switch_detection.m"
              *check_hlds__switch_detection__STATE_VARIABLE_Subst_88 = check_hlds__switch_detection__NewSubst_46;
#line 982 "switch_detection.m"
            else
#line 981 "switch_detection.m"
              *check_hlds__switch_detection__STATE_VARIABLE_Subst_88 = check_hlds__switch_detection__STATE_VARIABLE_Subst_0_87;
#line 981 "switch_detection.m"
            *check_hlds__switch_detection__STATE_VARIABLE_Info_92 = check_hlds__switch_detection__STATE_VARIABLE_Info_0_91;
#line 981 "switch_detection.m"
            *check_hlds__switch_detection__STATE_VARIABLE_Result_90 = check_hlds__switch_detection__STATE_VARIABLE_Result_0_89;
#line 977 "switch_detection.m"
          }
#line 962 "switch_detection.m"
      }
#line 942 "switch_detection.m"
    else
#line 942 "switch_detection.m"
      if (((((MR_tag((MR_Word) check_hlds__switch_detection__GoalExpr0_20)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__switch_detection__GoalExpr0_20, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 943 "switch_detection.m"
        {
#line 943 "switch_detection.m"
          MR_Word check_hlds__switch_detection__ConjType_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__switch_detection__GoalExpr0_20, (MR_Integer) 1)));
#line 943 "switch_detection.m"
          MR_Word check_hlds__switch_detection__SubGoals0_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__switch_detection__GoalExpr0_20, (MR_Integer) 2)));

#line 956 "switch_detection.m"
          if ((check_hlds__switch_detection__ConjType_27 == (MR_Integer) 1))
#line 957 "switch_detection.m"
            {
#line 958 "switch_detection.m"
              *check_hlds__switch_detection__Goal_15 = check_hlds__switch_detection__Goal0_14;
#line 959 "switch_detection.m"
              *check_hlds__switch_detection__FoundDeconstruct_19 = (MR_Integer) 2;
#line 959 "switch_detection.m"
              *check_hlds__switch_detection__STATE_VARIABLE_Subst_88 = check_hlds__switch_detection__STATE_VARIABLE_Subst_0_87;
#line 959 "switch_detection.m"
              *check_hlds__switch_detection__STATE_VARIABLE_Result_90 = check_hlds__switch_detection__STATE_VARIABLE_Result_0_89;
#line 959 "switch_detection.m"
              *check_hlds__switch_detection__STATE_VARIABLE_Info_92 = check_hlds__switch_detection__STATE_VARIABLE_Info_0_91;
#line 957 "switch_detection.m"
            }
#line 956 "switch_detection.m"
          else
#line 950 "switch_detection.m"
            if ((check_hlds__switch_detection__SubGoals0_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 947 "switch_detection.m"
              {
#line 948 "switch_detection.m"
                *check_hlds__switch_detection__Goal_15 = check_hlds__switch_detection__Goal0_14;
#line 949 "switch_detection.m"
                *check_hlds__switch_detection__FoundDeconstruct_19 = (MR_Integer) 0;
#line 949 "switch_detection.m"
                *check_hlds__switch_detection__STATE_VARIABLE_Subst_88 = check_hlds__switch_detection__STATE_VARIABLE_Subst_0_87;
#line 949 "switch_detection.m"
                *check_hlds__switch_detection__STATE_VARIABLE_Result_90 = check_hlds__switch_detection__STATE_VARIABLE_Result_0_89;
#line 949 "switch_detection.m"
                *check_hlds__switch_detection__STATE_VARIABLE_Info_92 = check_hlds__switch_detection__STATE_VARIABLE_Info_0_91;
#line 947 "switch_detection.m"
              }
#line 950 "switch_detection.m"
            else
#line 951 "switch_detection.m"
              {
#line 951 "switch_detection.m"
                MR_Word check_hlds__switch_detection__SubGoals_31;
#line 951 "switch_detection.m"
                MR_Word check_hlds__switch_detection__V_111_111;

#line 952 "switch_detection.m"
                {
#line 952 "switch_detection.m"
                  check_hlds__switch_detection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_106_95_102_105_110_100_95_98_105_110_100_95_118_97_114_95_95_91_49_44_32_50_93_95_48_11_p_0(check_hlds__switch_detection__Var_12, check_hlds__switch_detection__ProcessUnify_13, check_hlds__switch_detection__SubGoals0_28, &check_hlds__switch_detection__SubGoals_31, check_hlds__switch_detection__STATE_VARIABLE_Subst_0_87, check_hlds__switch_detection__STATE_VARIABLE_Subst_88, check_hlds__switch_detection__STATE_VARIABLE_Result_0_89, check_hlds__switch_detection__STATE_VARIABLE_Result_90, check_hlds__switch_detection__STATE_VARIABLE_Info_0_91, check_hlds__switch_detection__STATE_VARIABLE_Info_92, check_hlds__switch_detection__FoundDeconstruct_19);
                }
#line 954 "switch_detection.m"
                {
#line 954 "switch_detection.m"
                  check_hlds__switch_detection__V_111_111 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 954 "switch_detection.m"
                  MR_hl_field(MR_mktag(3), check_hlds__switch_detection__V_111_111, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 954 "switch_detection.m"
                  MR_hl_field(MR_mktag(3), check_hlds__switch_detection__V_111_111, 1) = ((MR_Box) (check_hlds__switch_detection__ConjType_27));
#line 954 "switch_detection.m"
                  MR_hl_field(MR_mktag(3), check_hlds__switch_detection__V_111_111, 2) = ((MR_Box) (check_hlds__switch_detection__SubGoals_31));
#line 954 "switch_detection.m"
                }
#line 954 "switch_detection.m"
                {
#line 954 "switch_detection.m"
                  MR_Word base;
#line 954 "switch_detection.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 954 "switch_detection.m"
                  *check_hlds__switch_detection__Goal_15 = base;
#line 954 "switch_detection.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__switch_detection__V_111_111));
#line 954 "switch_detection.m"
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__switch_detection__GoalInfo_21));
#line 954 "switch_detection.m"
                }
#line 951 "switch_detection.m"
              }
#line 943 "switch_detection.m"
        }
#line 942 "switch_detection.m"
      else
#line 942 "switch_detection.m"
        if (((((MR_tag((MR_Word) check_hlds__switch_detection__GoalExpr0_20)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__switch_detection__GoalExpr0_20, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 919 "switch_detection.m"
          {
#line 919 "switch_detection.m"
            MR_Word check_hlds__switch_detection__Reason0_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__switch_detection__GoalExpr0_20, (MR_Integer) 1)));
#line 919 "switch_detection.m"
            MR_Word check_hlds__switch_detection__SubGoal0_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__switch_detection__GoalExpr0_20, (MR_Integer) 2)));
#line 920 "switch_detection.m"
            MR_Word check_hlds__switch_detection__V_112_112;
#line 920 "switch_detection.m"
            MR_Word check_hlds__switch_detection__V_24_24;

#line 920 "switch_detection.m"
            check_hlds__switch_detection__succeeded = ((((MR_tag((MR_Word) check_hlds__switch_detection__Reason0_22)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__switch_detection__Reason0_22, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 920 "switch_detection.m"
            if (check_hlds__switch_detection__succeeded)
#line 920 "switch_detection.m"
              {
#line 920 "switch_detection.m"
                check_hlds__switch_detection__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__switch_detection__Reason0_22, (MR_Integer) 1)));
#line 920 "switch_detection.m"
                check_hlds__switch_detection__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__switch_detection__Reason0_22, (MR_Integer) 2)));
#line 920 "switch_detection.m"
                check_hlds__switch_detection__succeeded = (check_hlds__switch_detection__V_112_112 == (MR_Integer) 1);
#line 920 "switch_detection.m"
              }
#line 928 "switch_detection.m"
            if (check_hlds__switch_detection__succeeded)
#line 922 "switch_detection.m"
              {
#line 922 "switch_detection.m"
                *check_hlds__switch_detection__Goal_15 = check_hlds__switch_detection__Goal0_14;
#line 927 "switch_detection.m"
                *check_hlds__switch_detection__FoundDeconstruct_19 = (MR_Integer) 0;
#line 927 "switch_detection.m"
                *check_hlds__switch_detection__STATE_VARIABLE_Info_92 = check_hlds__switch_detection__STATE_VARIABLE_Info_0_91;
#line 927 "switch_detection.m"
                *check_hlds__switch_detection__STATE_VARIABLE_Result_90 = check_hlds__switch_detection__STATE_VARIABLE_Result_0_89;
#line 927 "switch_detection.m"
                *check_hlds__switch_detection__STATE_VARIABLE_Subst_88 = check_hlds__switch_detection__STATE_VARIABLE_Subst_0_87;
#line 922 "switch_detection.m"
              }
#line 928 "switch_detection.m"
            else
#line 930 "switch_detection.m"
              {
#line 930 "switch_detection.m"
                MR_Word check_hlds__switch_detection__SubGoal_25;
#line 932 "switch_detection.m"
                MR_Word check_hlds__switch_detection__V_116_116;
#line 933 "switch_detection.m"
                MR_Word check_hlds__switch_detection__V_26_26;

#line 929 "switch_detection.m"
                {
#line 929 "switch_detection.m"
                  check_hlds__switch_detection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_98_105_110_100_95_118_97_114_95_50_95_95_91_49_44_32_50_93_95_48_11_p_0(check_hlds__switch_detection__Var_12, check_hlds__switch_detection__ProcessUnify_13, check_hlds__switch_detection__SubGoal0_23, &check_hlds__switch_detection__SubGoal_25, check_hlds__switch_detection__STATE_VARIABLE_Subst_0_87, check_hlds__switch_detection__STATE_VARIABLE_Subst_88, check_hlds__switch_detection__STATE_VARIABLE_Result_0_89, check_hlds__switch_detection__STATE_VARIABLE_Result_90, check_hlds__switch_detection__STATE_VARIABLE_Info_0_91, check_hlds__switch_detection__STATE_VARIABLE_Info_92, check_hlds__switch_detection__FoundDeconstruct_19);
                }
#line 932 "switch_detection.m"
                check_hlds__switch_detection__succeeded = (*check_hlds__switch_detection__FoundDeconstruct_19 == (MR_Integer) 1);
#line 932 "switch_detection.m"
                if (check_hlds__switch_detection__succeeded)
#line 932 "switch_detection.m"
                  {
#line 933 "switch_detection.m"
                    check_hlds__switch_detection__succeeded = ((((MR_tag((MR_Word) check_hlds__switch_detection__Reason0_22)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__switch_detection__Reason0_22, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 933 "switch_detection.m"
                    if (check_hlds__switch_detection__succeeded)
#line 933 "switch_detection.m"
                      {
#line 933 "switch_detection.m"
                        check_hlds__switch_detection__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__switch_detection__Reason0_22, (MR_Integer) 1)));
#line 933 "switch_detection.m"
                        check_hlds__switch_detection__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__switch_detection__Reason0_22, (MR_Integer) 2)));
#line 933 "switch_detection.m"
                        check_hlds__switch_detection__succeeded = (check_hlds__switch_detection__V_116_116 == (MR_Integer) 2);
#line 933 "switch_detection.m"
                      }
#line 932 "switch_detection.m"
                  }
#line 938 "switch_detection.m"
                if (check_hlds__switch_detection__succeeded)
#line 937 "switch_detection.m"
                  *check_hlds__switch_detection__Goal_15 = check_hlds__switch_detection__SubGoal_25;
#line 938 "switch_detection.m"
                else
#line 939 "switch_detection.m"
                  {
#line 939 "switch_detection.m"
                    MR_Word check_hlds__switch_detection__V_117_117;

#line 939 "switch_detection.m"
                    {
#line 939 "switch_detection.m"
                      check_hlds__switch_detection__V_117_117 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 939 "switch_detection.m"
                      MR_hl_field(MR_mktag(3), check_hlds__switch_detection__V_117_117, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 939 "switch_detection.m"
                      MR_hl_field(MR_mktag(3), check_hlds__switch_detection__V_117_117, 1) = ((MR_Box) (check_hlds__switch_detection__Reason0_22));
#line 939 "switch_detection.m"
                      MR_hl_field(MR_mktag(3), check_hlds__switch_detection__V_117_117, 2) = ((MR_Box) (check_hlds__switch_detection__SubGoal_25));
#line 939 "switch_detection.m"
                    }
#line 939 "switch_detection.m"
                    {
#line 939 "switch_detection.m"
                      MR_Word base;
#line 939 "switch_detection.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 939 "switch_detection.m"
                      *check_hlds__switch_detection__Goal_15 = base;
#line 939 "switch_detection.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__switch_detection__V_117_117));
#line 939 "switch_detection.m"
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__switch_detection__GoalInfo_21));
#line 939 "switch_detection.m"
                    }
#line 939 "switch_detection.m"
                  }
#line 930 "switch_detection.m"
              }
#line 919 "switch_detection.m"
          }
#line 942 "switch_detection.m"
        else
#line 942 "switch_detection.m"
          if (((((MR_tag((MR_Word) check_hlds__switch_detection__GoalExpr0_20)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__switch_detection__GoalExpr0_20, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 1003 "switch_detection.m"
            {
#line 1003 "switch_detection.m"
              MR_Word check_hlds__switch_detection__ShortHand0_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__switch_detection__GoalExpr0_20, (MR_Integer) 1)));

#line 1008 "switch_detection.m"
              if (((MR_tag((MR_Word) check_hlds__switch_detection__ShortHand0_74)) == (MR_mktag((MR_Integer) 1))))
#line 1005 "switch_detection.m"
                {
#line 1006 "switch_detection.m"
                  *check_hlds__switch_detection__Goal_15 = check_hlds__switch_detection__Goal0_14;
#line 1007 "switch_detection.m"
                  *check_hlds__switch_detection__FoundDeconstruct_19 = (MR_Integer) 2;
#line 1005 "switch_detection.m"
                }
#line 1008 "switch_detection.m"
              else
#line 1008 "switch_detection.m"
                if (((MR_tag((MR_Word) check_hlds__switch_detection__ShortHand0_74)) == (MR_mktag((MR_Integer) 0))))
#line 1013 "switch_detection.m"
                  {
#line 1014 "switch_detection.m"
                    {
#line 1014 "switch_detection.m"
                      mercury__require__unexpected_3_p_0((MR_String) "check_hlds.switch_detection", (MR_String) "predicate \140check_hlds.switch_detection.find_bind_var_2\'/11", (MR_String) "bi_implication");
#line 1014 "switch_detection.m"
                      return;
                    }
#line 1013 "switch_detection.m"
                  }
#line 1008 "switch_detection.m"
                else
#line 1009 "switch_detection.m"
                  {
#line 1010 "switch_detection.m"
                    *check_hlds__switch_detection__Goal_15 = check_hlds__switch_detection__Goal0_14;
#line 1011 "switch_detection.m"
                    *check_hlds__switch_detection__FoundDeconstruct_19 = (MR_Integer) 2;
#line 1009 "switch_detection.m"
                  }
#line 1014 "switch_detection.m"
              *check_hlds__switch_detection__STATE_VARIABLE_Subst_88 = check_hlds__switch_detection__STATE_VARIABLE_Subst_0_87;
#line 1014 "switch_detection.m"
              *check_hlds__switch_detection__STATE_VARIABLE_Result_90 = check_hlds__switch_detection__STATE_VARIABLE_Result_0_89;
#line 1014 "switch_detection.m"
              *check_hlds__switch_detection__STATE_VARIABLE_Info_92 = check_hlds__switch_detection__STATE_VARIABLE_Info_0_91;
#line 1003 "switch_detection.m"
            }
#line 942 "switch_detection.m"
          else
#line 995 "switch_detection.m"
            {
#line 996 "switch_detection.m"
              *check_hlds__switch_detection__Goal_15 = check_hlds__switch_detection__Goal0_14;
#line 997 "switch_detection.m"
              {
#line 997 "switch_detection.m"
                check_hlds__switch_detection__succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(check_hlds__switch_detection__GoalInfo_21, (MR_Integer) 1);
              }
#line 999 "switch_detection.m"
              if (check_hlds__switch_detection__succeeded)
#line 998 "switch_detection.m"
                *check_hlds__switch_detection__FoundDeconstruct_19 = (MR_Integer) 0;
#line 999 "switch_detection.m"
              else
#line 1000 "switch_detection.m"
                *check_hlds__switch_detection__FoundDeconstruct_19 = (MR_Integer) 2;
#line 1000 "switch_detection.m"
              *check_hlds__switch_detection__STATE_VARIABLE_Subst_88 = check_hlds__switch_detection__STATE_VARIABLE_Subst_0_87;
#line 1000 "switch_detection.m"
              *check_hlds__switch_detection__STATE_VARIABLE_Result_90 = check_hlds__switch_detection__STATE_VARIABLE_Result_0_89;
#line 1000 "switch_detection.m"
              *check_hlds__switch_detection__STATE_VARIABLE_Info_92 = check_hlds__switch_detection__STATE_VARIABLE_Info_0_91;
#line 995 "switch_detection.m"
            }
#line 916 "switch_detection.m"
  }
#line 909 "switch_detection.m"
}

#line 853 "switch_detection.m"
static void MR_CALL 
check_hlds__switch_detection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_98_105_110_100_95_118_97_114_95_102_111_114_95_115_119_105_116_99_104_95_105_110_95_100_101_99_111_110_115_116_114_117_99_116_95_95_91_52_44_32_54_93_95_48_7_p_0(
#line 853 "switch_detection.m"
  MR_Word check_hlds__switch_detection__SwitchVar_8,
#line 853 "switch_detection.m"
  MR_Word check_hlds__switch_detection__Goal0_9,
#line 853 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__Goals_10,
#line 853 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__Result_12)
#line 853 "switch_detection.m"
{
#line 858 "switch_detection.m"
  {
#line 858 "switch_detection.m"
    MR_bool check_hlds__switch_detection__succeeded;
#line 883 "switch_detection.m"
    MR_Word check_hlds__switch_detection__GoalExpr0_14;
#line 883 "switch_detection.m"
    MR_Word check_hlds__switch_detection__GoalInfo_15;
#line 883 "switch_detection.m"
    MR_Word check_hlds__switch_detection__UnifyInfo0_16;
#line 883 "switch_detection.m"
    MR_Word check_hlds__switch_detection__UnifyVar_17;
#line 883 "switch_detection.m"
    MR_Word check_hlds__switch_detection__Functor_18;
#line 883 "switch_detection.m"
    MR_Word check_hlds__switch_detection__ArgVars_19;
#line 861 "switch_detection.m"
    MR_Word check_hlds__switch_detection__V_31_31;
#line 861 "switch_detection.m"
    MR_Word check_hlds__switch_detection__V_32_32;
#line 861 "switch_detection.m"
    MR_Word check_hlds__switch_detection__V_33_33;
#line 861 "switch_detection.m"
    MR_Word check_hlds__switch_detection__V_34_34;
#line 862 "switch_detection.m"
    MR_Word check_hlds__switch_detection__V_20_20;
#line 862 "switch_detection.m"
    MR_Word check_hlds__switch_detection__V_21_21;
#line 862 "switch_detection.m"
    MR_Word check_hlds__switch_detection__V_22_22;

#line 858 "switch_detection.m"
    mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 860 "switch_detection.m"
    check_hlds__switch_detection__GoalExpr0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__Goal0_9, (MR_Integer) 0)));
#line 860 "switch_detection.m"
    check_hlds__switch_detection__GoalInfo_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__Goal0_9, (MR_Integer) 1)));
#line 861 "switch_detection.m"
    check_hlds__switch_detection__succeeded = ((MR_tag((MR_Word) check_hlds__switch_detection__GoalExpr0_14)) == (MR_mktag((MR_Integer) 1)));
#line 861 "switch_detection.m"
    if (check_hlds__switch_detection__succeeded)
#line 861 "switch_detection.m"
      {
#line 861 "switch_detection.m"
        check_hlds__switch_detection__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__GoalExpr0_14, (MR_Integer) 0)));
#line 861 "switch_detection.m"
        check_hlds__switch_detection__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__GoalExpr0_14, (MR_Integer) 1)));
#line 861 "switch_detection.m"
        check_hlds__switch_detection__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__GoalExpr0_14, (MR_Integer) 2)));
#line 861 "switch_detection.m"
        check_hlds__switch_detection__UnifyInfo0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__GoalExpr0_14, (MR_Integer) 3)));
#line 861 "switch_detection.m"
        check_hlds__switch_detection__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__GoalExpr0_14, (MR_Integer) 4)));
#line 862 "switch_detection.m"
        check_hlds__switch_detection__succeeded = ((MR_tag((MR_Word) check_hlds__switch_detection__UnifyInfo0_16)) == (MR_mktag((MR_Integer) 1)));
#line 862 "switch_detection.m"
        if (check_hlds__switch_detection__succeeded)
#line 862 "switch_detection.m"
          {
#line 862 "switch_detection.m"
            check_hlds__switch_detection__UnifyVar_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__UnifyInfo0_16, (MR_Integer) 0)));
#line 862 "switch_detection.m"
            check_hlds__switch_detection__Functor_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__UnifyInfo0_16, (MR_Integer) 1)));
#line 862 "switch_detection.m"
            check_hlds__switch_detection__ArgVars_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__UnifyInfo0_16, (MR_Integer) 2)));
#line 862 "switch_detection.m"
            check_hlds__switch_detection__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__UnifyInfo0_16, (MR_Integer) 3)));
#line 862 "switch_detection.m"
            check_hlds__switch_detection__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__UnifyInfo0_16, (MR_Integer) 4)));
#line 862 "switch_detection.m"
            check_hlds__switch_detection__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__UnifyInfo0_16, (MR_Integer) 5)));
#line 862 "switch_detection.m"
          }
#line 861 "switch_detection.m"
      }
#line 883 "switch_detection.m"
    if (check_hlds__switch_detection__succeeded)
#line 864 "switch_detection.m"
      {
#line 866 "switch_detection.m"
        MR_Word check_hlds__switch_detection__TypeInfo_46_46;

#line 864 "switch_detection.m"
        {
#line 864 "switch_detection.m"
          MR_Word base;
#line 864 "switch_detection.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 864 "switch_detection.m"
          *check_hlds__switch_detection__Result_12 = base;
#line 864 "switch_detection.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__switch_detection__Functor_18));
#line 864 "switch_detection.m"
        }
#line 866 "switch_detection.m"
        check_hlds__switch_detection__succeeded = (check_hlds__switch_detection__ArgVars_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 866 "switch_detection.m"
        if (check_hlds__switch_detection__succeeded)
#line 866 "switch_detection.m"
          {
#line 3789 "check_hlds.switch_detection.c"
            check_hlds__switch_detection__TypeInfo_46_46 = (MR_Word) &check_hlds__switch_detection_scalar_common_1[0];
#line 867 "switch_detection.m"
            {
#line 867 "switch_detection.m"
              check_hlds__switch_detection__succeeded = mercury__builtin__unify_2_p_0(check_hlds__switch_detection__TypeInfo_46_46, ((MR_Box) (check_hlds__switch_detection__SwitchVar_8)), ((MR_Box) (check_hlds__switch_detection__UnifyVar_17)));
            }
#line 866 "switch_detection.m"
          }
#line 875 "switch_detection.m"
        if (check_hlds__switch_detection__succeeded)
#line 874 "switch_detection.m"
          *check_hlds__switch_detection__Goals_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 875 "switch_detection.m"
        else
#line 878 "switch_detection.m"
          {
#line 878 "switch_detection.m"
            MR_Word check_hlds__switch_detection__UnifyInfo_23;
#line 878 "switch_detection.m"
            MR_Word check_hlds__switch_detection__GoalExpr_24;
#line 878 "switch_detection.m"
            MR_Word check_hlds__switch_detection__Goal_25;
#line 878 "switch_detection.m"
            MR_Word check_hlds__switch_detection__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__UnifyInfo0_16, (MR_Integer) 0)));
#line 878 "switch_detection.m"
            MR_Word check_hlds__switch_detection__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__UnifyInfo0_16, (MR_Integer) 1)));
#line 878 "switch_detection.m"
            MR_Word check_hlds__switch_detection__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__UnifyInfo0_16, (MR_Integer) 2)));
#line 878 "switch_detection.m"
            MR_Word check_hlds__switch_detection__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__UnifyInfo0_16, (MR_Integer) 3)));
#line 878 "switch_detection.m"
            MR_Word check_hlds__switch_detection__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__UnifyInfo0_16, (MR_Integer) 5)));
#line 878 "switch_detection.m"
            MR_Word check_hlds__switch_detection__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__UnifyInfo0_16, (MR_Integer) 4)));
#line 879 "switch_detection.m"
            MR_Word check_hlds__switch_detection__V_41_41;
#line 879 "switch_detection.m"
            MR_Word check_hlds__switch_detection__V_42_42;
#line 879 "switch_detection.m"
            MR_Word check_hlds__switch_detection__V_43_43;
#line 879 "switch_detection.m"
            MR_Word check_hlds__switch_detection__V_45_45;
#line 879 "switch_detection.m"
            MR_Word check_hlds__switch_detection__V_44_44;

#line 878 "switch_detection.m"
            {
#line 878 "switch_detection.m"
              check_hlds__switch_detection__UnifyInfo_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 878 "switch_detection.m"
              MR_hl_field(MR_mktag(1), check_hlds__switch_detection__UnifyInfo_23, 0) = ((MR_Box) (check_hlds__switch_detection__V_35_35));
#line 878 "switch_detection.m"
              MR_hl_field(MR_mktag(1), check_hlds__switch_detection__UnifyInfo_23, 1) = ((MR_Box) (check_hlds__switch_detection__V_36_36));
#line 878 "switch_detection.m"
              MR_hl_field(MR_mktag(1), check_hlds__switch_detection__UnifyInfo_23, 2) = ((MR_Box) (check_hlds__switch_detection__V_37_37));
#line 878 "switch_detection.m"
              MR_hl_field(MR_mktag(1), check_hlds__switch_detection__UnifyInfo_23, 3) = ((MR_Box) (check_hlds__switch_detection__V_38_38));
#line 878 "switch_detection.m"
              MR_hl_field(MR_mktag(1), check_hlds__switch_detection__UnifyInfo_23, 4) = ((MR_Box) ((MR_Integer) 1));
#line 878 "switch_detection.m"
              MR_hl_field(MR_mktag(1), check_hlds__switch_detection__UnifyInfo_23, 5) = ((MR_Box) (check_hlds__switch_detection__V_40_40));
#line 878 "switch_detection.m"
            }
#line 879 "switch_detection.m"
            check_hlds__switch_detection__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__GoalExpr0_14, (MR_Integer) 0)));
#line 879 "switch_detection.m"
            check_hlds__switch_detection__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__GoalExpr0_14, (MR_Integer) 1)));
#line 879 "switch_detection.m"
            check_hlds__switch_detection__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__GoalExpr0_14, (MR_Integer) 2)));
#line 879 "switch_detection.m"
            check_hlds__switch_detection__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__GoalExpr0_14, (MR_Integer) 3)));
#line 879 "switch_detection.m"
            check_hlds__switch_detection__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__GoalExpr0_14, (MR_Integer) 4)));
#line 879 "switch_detection.m"
            {
#line 879 "switch_detection.m"
              check_hlds__switch_detection__GoalExpr_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 879 "switch_detection.m"
              MR_hl_field(MR_mktag(1), check_hlds__switch_detection__GoalExpr_24, 0) = ((MR_Box) (check_hlds__switch_detection__V_41_41));
#line 879 "switch_detection.m"
              MR_hl_field(MR_mktag(1), check_hlds__switch_detection__GoalExpr_24, 1) = ((MR_Box) (check_hlds__switch_detection__V_42_42));
#line 879 "switch_detection.m"
              MR_hl_field(MR_mktag(1), check_hlds__switch_detection__GoalExpr_24, 2) = ((MR_Box) (check_hlds__switch_detection__V_43_43));
#line 879 "switch_detection.m"
              MR_hl_field(MR_mktag(1), check_hlds__switch_detection__GoalExpr_24, 3) = ((MR_Box) (check_hlds__switch_detection__UnifyInfo_23));
#line 879 "switch_detection.m"
              MR_hl_field(MR_mktag(1), check_hlds__switch_detection__GoalExpr_24, 4) = ((MR_Box) (check_hlds__switch_detection__V_45_45));
#line 879 "switch_detection.m"
            }
#line 880 "switch_detection.m"
            {
#line 880 "switch_detection.m"
              check_hlds__switch_detection__Goal_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 880 "switch_detection.m"
              MR_hl_field(MR_mktag(0), check_hlds__switch_detection__Goal_25, 0) = ((MR_Box) (check_hlds__switch_detection__GoalExpr_24));
#line 880 "switch_detection.m"
              MR_hl_field(MR_mktag(0), check_hlds__switch_detection__Goal_25, 1) = ((MR_Box) (check_hlds__switch_detection__GoalInfo_15));
#line 880 "switch_detection.m"
            }
#line 881 "switch_detection.m"
            {
#line 881 "switch_detection.m"
              MR_Word base;
#line 881 "switch_detection.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 881 "switch_detection.m"
              *check_hlds__switch_detection__Goals_10 = base;
#line 881 "switch_detection.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__switch_detection__Goal_25));
#line 881 "switch_detection.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 881 "switch_detection.m"
            }
#line 878 "switch_detection.m"
          }
#line 864 "switch_detection.m"
      }
#line 883 "switch_detection.m"
    else
#line 884 "switch_detection.m"
      {
#line 884 "switch_detection.m"
        {
#line 884 "switch_detection.m"
          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.switch_detection", (MR_String) "predicate \140check_hlds.switch_detection.find_bind_var_for_switch_in_deconstruct\'/7", (MR_String) "condition failed");
#line 884 "switch_detection.m"
          return;
        }
#line 884 "switch_detection.m"
      }
#line 858 "switch_detection.m"
  }
#line 853 "switch_detection.m"
}

#line 1109 "switch_detection.m"
static void MR_CALL 
check_hlds__switch_detection__IntroducedFrom__pred__delete_covered_functors__1109__1_3_p_0(
#line 1109 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__1_20,
#line 1109 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__2_21,
#line 1109 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__HeadVar__3_22)
#line 1109 "switch_detection.m"
{
#line 1109 "switch_detection.m"
  {
#line 1109 "switch_detection.m"
    MR_bool check_hlds__switch_detection__succeeded;

#line 1109 "switch_detection.m"
    {
#line 1109 "switch_detection.m"
      mercury__set_tree234__delete_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, ((MR_Box) (check_hlds__switch_detection__HeadVar__1_20)), check_hlds__switch_detection__HeadVar__2_21, check_hlds__switch_detection__HeadVar__3_22);
#line 1109 "switch_detection.m"
      return;
    }
#line 1109 "switch_detection.m"
  }
#line 1109 "switch_detection.m"
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

#line 459 "switch_detection.m"
static MR_bool MR_CALL 
check_hlds__switch_detection__IntroducedFrom__pred__convert_case__459__1_2_p_0(
#line 459 "switch_detection.m"
  MR_Word check_hlds__switch_detection__IsMember_18,
#line 459 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__2_61)
#line 459 "switch_detection.m"
{
#line 459 "switch_detection.m"
  {
#line 459 "switch_detection.m"
    MR_bool check_hlds__switch_detection__succeeded = (check_hlds__switch_detection__IsMember_18 == check_hlds__switch_detection__HeadVar__2_61);

#line 459 "switch_detection.m"
    return check_hlds__switch_detection__succeeded;
#line 459 "switch_detection.m"
  }
#line 459 "switch_detection.m"
}

#line 468 "switch_detection.m"
static MR_bool MR_CALL 
check_hlds__switch_detection__IntroducedFrom__pred__convert_case__468__1_2_p_0(
#line 468 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__1_53,
#line 468 "switch_detection.m"
  MR_Word check_hlds__switch_detection__IsMember_65)
#line 468 "switch_detection.m"
{
#line 468 "switch_detection.m"
  {
#line 468 "switch_detection.m"
    MR_bool check_hlds__switch_detection__succeeded = (check_hlds__switch_detection__IsMember_65 == check_hlds__switch_detection__HeadVar__1_53);

#line 468 "switch_detection.m"
    return check_hlds__switch_detection__succeeded;
#line 468 "switch_detection.m"
  }
#line 468 "switch_detection.m"
}

#line 451 "switch_detection.m"
static MR_bool MR_CALL 
check_hlds__switch_detection__IntroducedFrom__pred__convert_case__451__1_2_p_0(
#line 451 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__1_37,
#line 451 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__2_94)
#line 451 "switch_detection.m"
{
#line 451 "switch_detection.m"
  {
#line 451 "switch_detection.m"
    MR_bool check_hlds__switch_detection__succeeded = (check_hlds__switch_detection__HeadVar__2_94 == check_hlds__switch_detection__HeadVar__1_37);

#line 451 "switch_detection.m"
    return check_hlds__switch_detection__succeeded;
#line 451 "switch_detection.m"
  }
#line 451 "switch_detection.m"
}

#line 106 "switch_detection.m"
void MR_CALL 
check_hlds__switch_detection____Compare____switch_detect_info_0_0(
#line 106 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__HeadVar__1_1,
#line 106 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__2_2,
#line 106 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__3_3)
#line 106 "switch_detection.m"
{
#line 106 "switch_detection.m"
  {
#line 106 "switch_detection.m"
    MR_bool check_hlds__switch_detection__succeeded;
#line 106 "switch_detection.m"
    MR_Integer check_hlds__switch_detection__CastX_9 = (MR_Integer) check_hlds__switch_detection__HeadVar__2_2;
#line 106 "switch_detection.m"
    MR_Integer check_hlds__switch_detection__CastY_10 = (MR_Integer) check_hlds__switch_detection__HeadVar__3_3;

#line 106 "switch_detection.m"
    check_hlds__switch_detection__succeeded = (check_hlds__switch_detection__CastX_9 == check_hlds__switch_detection__CastY_10);
#line 106 "switch_detection.m"
    if (check_hlds__switch_detection__succeeded)
#line 4066 "check_hlds.switch_detection.c"
      *check_hlds__switch_detection__HeadVar__1_1 = (MR_Integer) 0;
#line 106 "switch_detection.m"
    else
#line 106 "switch_detection.m"
      {
#line 106 "switch_detection.m"
        MR_Word check_hlds__switch_detection__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__HeadVar__2_2, (MR_Integer) 0)));
#line 106 "switch_detection.m"
        MR_Word check_hlds__switch_detection__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__HeadVar__2_2, (MR_Integer) 1)));
#line 106 "switch_detection.m"
        MR_Word check_hlds__switch_detection__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__HeadVar__3_3, (MR_Integer) 0)));
#line 106 "switch_detection.m"
        MR_Word check_hlds__switch_detection__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__HeadVar__3_3, (MR_Integer) 1)));
#line 106 "switch_detection.m"
        MR_Word check_hlds__switch_detection__V_8_8;

#line 106 "switch_detection.m"
        {
#line 106 "switch_detection.m"
          hlds__hlds_module____Compare____module_info_0_0(&check_hlds__switch_detection__V_8_8, check_hlds__switch_detection__V_4_4, check_hlds__switch_detection__V_6_6);
        }
#line 4088 "check_hlds.switch_detection.c"
        check_hlds__switch_detection__succeeded = (check_hlds__switch_detection__V_8_8 == (MR_Integer) 0);
#line 106 "switch_detection.m"
        check_hlds__switch_detection__succeeded = !(check_hlds__switch_detection__succeeded);
#line 106 "switch_detection.m"
        if (check_hlds__switch_detection__succeeded)
#line 106 "switch_detection.m"
          *check_hlds__switch_detection__HeadVar__1_1 = check_hlds__switch_detection__V_8_8;
#line 106 "switch_detection.m"
        else
#line 106 "switch_detection.m"
          {
#line 106 "switch_detection.m"
            MR_Integer check_hlds__switch_detection__V_13_13 = (MR_Integer) check_hlds__switch_detection__V_5_5;
#line 106 "switch_detection.m"
            MR_Integer check_hlds__switch_detection__V_14_14 = (MR_Integer) check_hlds__switch_detection__V_7_7;

#line 106 "switch_detection.m"
            {
#line 106 "switch_detection.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__switch_detection__HeadVar__1_1, check_hlds__switch_detection__V_13_13, check_hlds__switch_detection__V_14_14);
#line 106 "switch_detection.m"
              return;
            }
#line 106 "switch_detection.m"
          }
#line 106 "switch_detection.m"
      }
#line 106 "switch_detection.m"
  }
#line 106 "switch_detection.m"
}

#line 106 "switch_detection.m"
MR_bool MR_CALL 
check_hlds__switch_detection____Unify____switch_detect_info_0_0(
#line 106 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__1_1,
#line 106 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__2_2)
#line 106 "switch_detection.m"
{
#line 106 "switch_detection.m"
  {
#line 106 "switch_detection.m"
    MR_bool check_hlds__switch_detection__succeeded;
#line 106 "switch_detection.m"
    MR_Integer check_hlds__switch_detection__CastX_7 = (MR_Integer) check_hlds__switch_detection__HeadVar__1_1;
#line 106 "switch_detection.m"
    MR_Integer check_hlds__switch_detection__CastY_8 = (MR_Integer) check_hlds__switch_detection__HeadVar__2_2;

#line 106 "switch_detection.m"
    check_hlds__switch_detection__succeeded = (check_hlds__switch_detection__CastX_7 == check_hlds__switch_detection__CastY_8);
#line 106 "switch_detection.m"
    if (check_hlds__switch_detection__succeeded)
#line 106 "switch_detection.m"
      check_hlds__switch_detection__succeeded = MR_TRUE;
#line 106 "switch_detection.m"
    else
#line 106 "switch_detection.m"
      {
#line 106 "switch_detection.m"
        MR_Word check_hlds__switch_detection__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__HeadVar__1_1, (MR_Integer) 0)));
#line 106 "switch_detection.m"
        MR_Word check_hlds__switch_detection__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__HeadVar__1_1, (MR_Integer) 1)));
#line 106 "switch_detection.m"
        MR_Word check_hlds__switch_detection__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__HeadVar__2_2, (MR_Integer) 0)));
#line 106 "switch_detection.m"
        MR_Word check_hlds__switch_detection__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__HeadVar__2_2, (MR_Integer) 1)));

#line 4158 "check_hlds.switch_detection.c"
        {
#line 4160 "check_hlds.switch_detection.c"
          check_hlds__switch_detection__succeeded = hlds__hlds_module____Unify____module_info_0_0(check_hlds__switch_detection__V_3_3, check_hlds__switch_detection__V_5_5);
        }
#line 106 "switch_detection.m"
        if (check_hlds__switch_detection__succeeded)
#line 4165 "check_hlds.switch_detection.c"
          check_hlds__switch_detection__succeeded = (check_hlds__switch_detection__V_4_4 == check_hlds__switch_detection__V_6_6);
#line 106 "switch_detection.m"
      }
#line 106 "switch_detection.m"
    return check_hlds__switch_detection__succeeded;
#line 106 "switch_detection.m"
  }
#line 106 "switch_detection.m"
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

#line 230 "switch_detection.m"
static void MR_CALL 
check_hlds__switch_detection____Compare____local_switch_detect_info_0_0(
#line 230 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__HeadVar__1_1,
#line 230 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__2_2,
#line 230 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__3_3)
#line 230 "switch_detection.m"
{
#line 230 "switch_detection.m"
  {
#line 230 "switch_detection.m"
    MR_bool check_hlds__switch_detection__succeeded;
#line 230 "switch_detection.m"
    MR_Integer check_hlds__switch_detection__CastX_15 = (MR_Integer) check_hlds__switch_detection__HeadVar__2_2;
#line 230 "switch_detection.m"
    MR_Integer check_hlds__switch_detection__CastY_16 = (MR_Integer) check_hlds__switch_detection__HeadVar__3_3;

#line 230 "switch_detection.m"
    check_hlds__switch_detection__succeeded = (check_hlds__switch_detection__CastX_15 == check_hlds__switch_detection__CastY_16);
#line 230 "switch_detection.m"
    if (check_hlds__switch_detection__succeeded)
#line 4270 "check_hlds.switch_detection.c"
      *check_hlds__switch_detection__HeadVar__1_1 = (MR_Integer) 0;
#line 230 "switch_detection.m"
    else
#line 230 "switch_detection.m"
      {
#line 230 "switch_detection.m"
        MR_Word check_hlds__switch_detection__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__HeadVar__2_2, (MR_Integer) 0)));
#line 230 "switch_detection.m"
        MR_Word check_hlds__switch_detection__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__HeadVar__2_2, (MR_Integer) 1)));
#line 230 "switch_detection.m"
        MR_Word check_hlds__switch_detection__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__HeadVar__2_2, (MR_Integer) 2)));
#line 230 "switch_detection.m"
        MR_Word check_hlds__switch_detection__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__HeadVar__2_2, (MR_Integer) 3)));
#line 230 "switch_detection.m"
        MR_Word check_hlds__switch_detection__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__HeadVar__3_3, (MR_Integer) 0)));
#line 230 "switch_detection.m"
        MR_Word check_hlds__switch_detection__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__HeadVar__3_3, (MR_Integer) 1)));
#line 230 "switch_detection.m"
        MR_Word check_hlds__switch_detection__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__HeadVar__3_3, (MR_Integer) 2)));
#line 230 "switch_detection.m"
        MR_Word check_hlds__switch_detection__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__HeadVar__3_3, (MR_Integer) 3)));
#line 230 "switch_detection.m"
        MR_Word check_hlds__switch_detection__V_12_12;

#line 230 "switch_detection.m"
        {
#line 230 "switch_detection.m"
          hlds__hlds_module____Compare____module_info_0_0(&check_hlds__switch_detection__V_12_12, check_hlds__switch_detection__V_4_4, check_hlds__switch_detection__V_8_8);
        }
#line 4300 "check_hlds.switch_detection.c"
        check_hlds__switch_detection__succeeded = (check_hlds__switch_detection__V_12_12 == (MR_Integer) 0);
#line 230 "switch_detection.m"
        check_hlds__switch_detection__succeeded = !(check_hlds__switch_detection__succeeded);
#line 230 "switch_detection.m"
        if (check_hlds__switch_detection__succeeded)
#line 230 "switch_detection.m"
          *check_hlds__switch_detection__HeadVar__1_1 = check_hlds__switch_detection__V_12_12;
#line 230 "switch_detection.m"
        else
#line 230 "switch_detection.m"
          {
#line 230 "switch_detection.m"
            MR_Word check_hlds__switch_detection__V_13_13;
#line 230 "switch_detection.m"
            MR_Integer check_hlds__switch_detection__V_21_21 = (MR_Integer) check_hlds__switch_detection__V_5_5;
#line 230 "switch_detection.m"
            MR_Integer check_hlds__switch_detection__V_22_22 = (MR_Integer) check_hlds__switch_detection__V_9_9;

#line 230 "switch_detection.m"
            {
#line 230 "switch_detection.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__switch_detection__V_13_13, check_hlds__switch_detection__V_21_21, check_hlds__switch_detection__V_22_22);
            }
#line 4324 "check_hlds.switch_detection.c"
            check_hlds__switch_detection__succeeded = (check_hlds__switch_detection__V_13_13 == (MR_Integer) 0);
#line 230 "switch_detection.m"
            check_hlds__switch_detection__succeeded = !(check_hlds__switch_detection__succeeded);
#line 230 "switch_detection.m"
            if (check_hlds__switch_detection__succeeded)
#line 230 "switch_detection.m"
              *check_hlds__switch_detection__HeadVar__1_1 = check_hlds__switch_detection__V_13_13;
#line 230 "switch_detection.m"
            else
#line 230 "switch_detection.m"
              {
#line 230 "switch_detection.m"
                MR_Word check_hlds__switch_detection__V_14_14;

#line 230 "switch_detection.m"
                {
#line 230 "switch_detection.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_vartypes_0, &check_hlds__switch_detection__V_14_14, ((MR_Box) (check_hlds__switch_detection__V_6_6)), ((MR_Box) (check_hlds__switch_detection__V_10_10)));
                }
#line 4344 "check_hlds.switch_detection.c"
                check_hlds__switch_detection__succeeded = (check_hlds__switch_detection__V_14_14 == (MR_Integer) 0);
#line 230 "switch_detection.m"
                check_hlds__switch_detection__succeeded = !(check_hlds__switch_detection__succeeded);
#line 230 "switch_detection.m"
                if (check_hlds__switch_detection__succeeded)
#line 230 "switch_detection.m"
                  *check_hlds__switch_detection__HeadVar__1_1 = check_hlds__switch_detection__V_14_14;
#line 230 "switch_detection.m"
                else
#line 230 "switch_detection.m"
                  {
#line 230 "switch_detection.m"
                    MR_Integer check_hlds__switch_detection__V_23_23 = (MR_Integer) check_hlds__switch_detection__V_7_7;
#line 230 "switch_detection.m"
                    MR_Integer check_hlds__switch_detection__V_24_24 = (MR_Integer) check_hlds__switch_detection__V_11_11;

#line 230 "switch_detection.m"
                    {
#line 230 "switch_detection.m"
                      mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__switch_detection__HeadVar__1_1, check_hlds__switch_detection__V_23_23, check_hlds__switch_detection__V_24_24);
#line 230 "switch_detection.m"
                      return;
                    }
#line 230 "switch_detection.m"
                  }
#line 230 "switch_detection.m"
              }
#line 230 "switch_detection.m"
          }
#line 230 "switch_detection.m"
      }
#line 230 "switch_detection.m"
  }
#line 230 "switch_detection.m"
}

#line 230 "switch_detection.m"
static MR_bool MR_CALL 
check_hlds__switch_detection____Unify____local_switch_detect_info_0_0(
#line 230 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__1_1,
#line 230 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__2_2)
#line 230 "switch_detection.m"
{
#line 230 "switch_detection.m"
  {
#line 230 "switch_detection.m"
    MR_bool check_hlds__switch_detection__succeeded;
#line 230 "switch_detection.m"
    MR_Integer check_hlds__switch_detection__CastX_11 = (MR_Integer) check_hlds__switch_detection__HeadVar__1_1;
#line 230 "switch_detection.m"
    MR_Integer check_hlds__switch_detection__CastY_12 = (MR_Integer) check_hlds__switch_detection__HeadVar__2_2;

#line 230 "switch_detection.m"
    check_hlds__switch_detection__succeeded = (check_hlds__switch_detection__CastX_11 == check_hlds__switch_detection__CastY_12);
#line 230 "switch_detection.m"
    if (check_hlds__switch_detection__succeeded)
#line 230 "switch_detection.m"
      check_hlds__switch_detection__succeeded = MR_TRUE;
#line 230 "switch_detection.m"
    else
#line 230 "switch_detection.m"
      {
#line 230 "switch_detection.m"
        MR_Word check_hlds__switch_detection__TypeCtorInfo_14_14;
#line 230 "switch_detection.m"
        MR_Word check_hlds__switch_detection__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__HeadVar__1_1, (MR_Integer) 0)));
#line 230 "switch_detection.m"
        MR_Word check_hlds__switch_detection__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__HeadVar__1_1, (MR_Integer) 1)));
#line 230 "switch_detection.m"
        MR_Word check_hlds__switch_detection__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__HeadVar__1_1, (MR_Integer) 2)));
#line 230 "switch_detection.m"
        MR_Word check_hlds__switch_detection__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__HeadVar__1_1, (MR_Integer) 3)));
#line 230 "switch_detection.m"
        MR_Word check_hlds__switch_detection__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__HeadVar__2_2, (MR_Integer) 0)));
#line 230 "switch_detection.m"
        MR_Word check_hlds__switch_detection__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__HeadVar__2_2, (MR_Integer) 1)));
#line 230 "switch_detection.m"
        MR_Word check_hlds__switch_detection__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__HeadVar__2_2, (MR_Integer) 2)));
#line 230 "switch_detection.m"
        MR_Word check_hlds__switch_detection__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__HeadVar__2_2, (MR_Integer) 3)));

#line 4428 "check_hlds.switch_detection.c"
        {
#line 4430 "check_hlds.switch_detection.c"
          check_hlds__switch_detection__succeeded = hlds__hlds_module____Unify____module_info_0_0(check_hlds__switch_detection__V_3_3, check_hlds__switch_detection__V_7_7);
        }
#line 230 "switch_detection.m"
        if (check_hlds__switch_detection__succeeded)
#line 230 "switch_detection.m"
          {
#line 4437 "check_hlds.switch_detection.c"
            check_hlds__switch_detection__succeeded = (check_hlds__switch_detection__V_4_4 == check_hlds__switch_detection__V_8_8);
#line 230 "switch_detection.m"
            if (check_hlds__switch_detection__succeeded)
#line 230 "switch_detection.m"
              {
#line 4443 "check_hlds.switch_detection.c"
                check_hlds__switch_detection__TypeCtorInfo_14_14 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_vartypes_0;
#line 4445 "check_hlds.switch_detection.c"
                {
#line 4447 "check_hlds.switch_detection.c"
                  check_hlds__switch_detection__succeeded = mercury__builtin__unify_2_p_0(check_hlds__switch_detection__TypeCtorInfo_14_14, ((MR_Box) (check_hlds__switch_detection__V_5_5)), ((MR_Box) (check_hlds__switch_detection__V_9_9)));
                }
#line 230 "switch_detection.m"
                if (check_hlds__switch_detection__succeeded)
#line 4452 "check_hlds.switch_detection.c"
                  check_hlds__switch_detection__succeeded = (check_hlds__switch_detection__V_6_6 == check_hlds__switch_detection__V_10_10);
#line 230 "switch_detection.m"
              }
#line 230 "switch_detection.m"
          }
#line 230 "switch_detection.m"
      }
#line 230 "switch_detection.m"
    return check_hlds__switch_detection__succeeded;
#line 230 "switch_detection.m"
  }
#line 230 "switch_detection.m"
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
#line 4508 "check_hlds.switch_detection.c"
  {
#line 4510 "check_hlds.switch_detection.c"
    MR_bool check_hlds__switch_detection__succeeded = (check_hlds__switch_detection__HeadVar__2_1 == check_hlds__switch_detection__HeadVar__2_2);

#line 4513 "check_hlds.switch_detection.c"
    return check_hlds__switch_detection__succeeded;
#line 4515 "check_hlds.switch_detection.c"
  }
#line 41 "switch_detection.m"
}

#line 904 "switch_detection.m"
static void MR_CALL 
check_hlds__switch_detection____Compare____deconstruct_search_0_0(
#line 904 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__HeadVar__1_1,
#line 904 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__2_2,
#line 904 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__3_3)
#line 904 "switch_detection.m"
{
#line 904 "switch_detection.m"
  {
#line 904 "switch_detection.m"
    MR_bool check_hlds__switch_detection__succeeded;
#line 904 "switch_detection.m"
    MR_Integer check_hlds__switch_detection__Cast_HeadVar1_4 = (MR_Integer) check_hlds__switch_detection__HeadVar__2_2;
#line 904 "switch_detection.m"
    MR_Integer check_hlds__switch_detection__Cast_HeadVar2_5 = (MR_Integer) check_hlds__switch_detection__HeadVar__3_3;

#line 904 "switch_detection.m"
    {
#line 904 "switch_detection.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__switch_detection__HeadVar__1_1, check_hlds__switch_detection__Cast_HeadVar1_4, check_hlds__switch_detection__Cast_HeadVar2_5);
#line 904 "switch_detection.m"
      return;
    }
#line 904 "switch_detection.m"
  }
#line 904 "switch_detection.m"
}

#line 904 "switch_detection.m"
static MR_bool MR_CALL 
check_hlds__switch_detection____Unify____deconstruct_search_0_0(
#line 904 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__2_1,
#line 904 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__2_2)
#line 904 "switch_detection.m"
{
#line 4561 "check_hlds.switch_detection.c"
  {
#line 4563 "check_hlds.switch_detection.c"
    MR_bool check_hlds__switch_detection__succeeded = (check_hlds__switch_detection__HeadVar__2_1 == check_hlds__switch_detection__HeadVar__2_2);

#line 4566 "check_hlds.switch_detection.c"
    return check_hlds__switch_detection__succeeded;
#line 4568 "check_hlds.switch_detection.c"
  }
#line 904 "switch_detection.m"
}

#line 417 "switch_detection.m"
static void MR_CALL 
check_hlds__switch_detection____Compare____cons_id_state_0_0(
#line 417 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__HeadVar__1_1,
#line 417 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__2_2,
#line 417 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__3_3)
#line 417 "switch_detection.m"
{
#line 417 "switch_detection.m"
  {
#line 417 "switch_detection.m"
    MR_bool check_hlds__switch_detection__succeeded;
#line 417 "switch_detection.m"
    MR_Integer check_hlds__switch_detection__Cast_HeadVar1_4 = (MR_Integer) check_hlds__switch_detection__HeadVar__2_2;
#line 417 "switch_detection.m"
    MR_Integer check_hlds__switch_detection__Cast_HeadVar2_5 = (MR_Integer) check_hlds__switch_detection__HeadVar__3_3;

#line 417 "switch_detection.m"
    {
#line 417 "switch_detection.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__switch_detection__HeadVar__1_1, check_hlds__switch_detection__Cast_HeadVar1_4, check_hlds__switch_detection__Cast_HeadVar2_5);
#line 417 "switch_detection.m"
      return;
    }
#line 417 "switch_detection.m"
  }
#line 417 "switch_detection.m"
}

#line 417 "switch_detection.m"
static MR_bool MR_CALL 
check_hlds__switch_detection____Unify____cons_id_state_0_0(
#line 417 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__2_1,
#line 417 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__2_2)
#line 417 "switch_detection.m"
{
#line 4614 "check_hlds.switch_detection.c"
  {
#line 4616 "check_hlds.switch_detection.c"
    MR_bool check_hlds__switch_detection__succeeded = (check_hlds__switch_detection__HeadVar__2_1 == check_hlds__switch_detection__HeadVar__2_2);

#line 4619 "check_hlds.switch_detection.c"
    return check_hlds__switch_detection__succeeded;
#line 4621 "check_hlds.switch_detection.c"
  }
#line 417 "switch_detection.m"
}

#line 422 "switch_detection.m"
static void MR_CALL 
check_hlds__switch_detection____Compare____cons_id_entry_0_0(
#line 422 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__HeadVar__1_1,
#line 422 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__2_2,
#line 422 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__3_3)
#line 422 "switch_detection.m"
{
#line 422 "switch_detection.m"
  {
#line 422 "switch_detection.m"
    MR_bool check_hlds__switch_detection__succeeded;
#line 422 "switch_detection.m"
    MR_Integer check_hlds__switch_detection__CastX_9 = (MR_Integer) check_hlds__switch_detection__HeadVar__2_2;
#line 422 "switch_detection.m"
    MR_Integer check_hlds__switch_detection__CastY_10 = (MR_Integer) check_hlds__switch_detection__HeadVar__3_3;

#line 422 "switch_detection.m"
    check_hlds__switch_detection__succeeded = (check_hlds__switch_detection__CastX_9 == check_hlds__switch_detection__CastY_10);
#line 422 "switch_detection.m"
    if (check_hlds__switch_detection__succeeded)
#line 4650 "check_hlds.switch_detection.c"
      *check_hlds__switch_detection__HeadVar__1_1 = (MR_Integer) 0;
#line 422 "switch_detection.m"
    else
#line 422 "switch_detection.m"
      {
#line 422 "switch_detection.m"
        MR_Word check_hlds__switch_detection__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__HeadVar__2_2, (MR_Integer) 0)));
#line 422 "switch_detection.m"
        MR_Word check_hlds__switch_detection__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__HeadVar__2_2, (MR_Integer) 1)));
#line 422 "switch_detection.m"
        MR_Word check_hlds__switch_detection__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__HeadVar__3_3, (MR_Integer) 0)));
#line 422 "switch_detection.m"
        MR_Word check_hlds__switch_detection__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__HeadVar__3_3, (MR_Integer) 1)));
#line 422 "switch_detection.m"
        MR_Word check_hlds__switch_detection__V_8_8;
#line 422 "switch_detection.m"
        MR_Integer check_hlds__switch_detection__V_13_13 = (MR_Integer) check_hlds__switch_detection__V_4_4;
#line 422 "switch_detection.m"
        MR_Integer check_hlds__switch_detection__V_14_14 = (MR_Integer) check_hlds__switch_detection__V_6_6;

#line 422 "switch_detection.m"
        {
#line 422 "switch_detection.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__switch_detection__V_8_8, check_hlds__switch_detection__V_13_13, check_hlds__switch_detection__V_14_14);
        }
#line 4676 "check_hlds.switch_detection.c"
        check_hlds__switch_detection__succeeded = (check_hlds__switch_detection__V_8_8 == (MR_Integer) 0);
#line 422 "switch_detection.m"
        check_hlds__switch_detection__succeeded = !(check_hlds__switch_detection__succeeded);
#line 422 "switch_detection.m"
        if (check_hlds__switch_detection__succeeded)
#line 422 "switch_detection.m"
          *check_hlds__switch_detection__HeadVar__1_1 = check_hlds__switch_detection__V_8_8;
#line 422 "switch_detection.m"
        else
#line 422 "switch_detection.m"
          {
#line 422 "switch_detection.m"
            {
#line 422 "switch_detection.m"
              mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__switch_detection_scalar_common_1[6], check_hlds__switch_detection__HeadVar__1_1, ((MR_Box) (check_hlds__switch_detection__V_5_5)), ((MR_Box) (check_hlds__switch_detection__V_7_7)));
#line 422 "switch_detection.m"
              return;
            }
#line 422 "switch_detection.m"
          }
#line 422 "switch_detection.m"
      }
#line 422 "switch_detection.m"
  }
#line 422 "switch_detection.m"
}

#line 422 "switch_detection.m"
static MR_bool MR_CALL 
check_hlds__switch_detection____Unify____cons_id_entry_0_0(
#line 422 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__1_1,
#line 422 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__2_2)
#line 422 "switch_detection.m"
{
#line 422 "switch_detection.m"
  {
#line 422 "switch_detection.m"
    MR_bool check_hlds__switch_detection__succeeded;
#line 422 "switch_detection.m"
    MR_Integer check_hlds__switch_detection__CastX_7 = (MR_Integer) check_hlds__switch_detection__HeadVar__1_1;
#line 422 "switch_detection.m"
    MR_Integer check_hlds__switch_detection__CastY_8 = (MR_Integer) check_hlds__switch_detection__HeadVar__2_2;

#line 422 "switch_detection.m"
    check_hlds__switch_detection__succeeded = (check_hlds__switch_detection__CastX_7 == check_hlds__switch_detection__CastY_8);
#line 422 "switch_detection.m"
    if (check_hlds__switch_detection__succeeded)
#line 422 "switch_detection.m"
      check_hlds__switch_detection__succeeded = MR_TRUE;
#line 422 "switch_detection.m"
    else
#line 422 "switch_detection.m"
      {
#line 422 "switch_detection.m"
        MR_Word check_hlds__switch_detection__TypeInfo_9_9;
#line 422 "switch_detection.m"
        MR_Word check_hlds__switch_detection__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__HeadVar__1_1, (MR_Integer) 0)));
#line 422 "switch_detection.m"
        MR_Word check_hlds__switch_detection__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__HeadVar__1_1, (MR_Integer) 1)));
#line 422 "switch_detection.m"
        MR_Word check_hlds__switch_detection__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__HeadVar__2_2, (MR_Integer) 0)));
#line 422 "switch_detection.m"
        MR_Word check_hlds__switch_detection__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__HeadVar__2_2, (MR_Integer) 1)));

#line 4743 "check_hlds.switch_detection.c"
        check_hlds__switch_detection__succeeded = (check_hlds__switch_detection__V_3_3 == check_hlds__switch_detection__V_5_5);
#line 422 "switch_detection.m"
        if (check_hlds__switch_detection__succeeded)
#line 422 "switch_detection.m"
          {
#line 4749 "check_hlds.switch_detection.c"
            check_hlds__switch_detection__TypeInfo_9_9 = (MR_Word) &check_hlds__switch_detection_scalar_common_1[6];
#line 4751 "check_hlds.switch_detection.c"
            {
#line 4753 "check_hlds.switch_detection.c"
              return check_hlds__switch_detection__succeeded = mercury__builtin__unify_2_p_0(check_hlds__switch_detection__TypeInfo_9_9, ((MR_Box) (check_hlds__switch_detection__V_4_4)), ((MR_Box) (check_hlds__switch_detection__V_6_6)));
            }
#line 422 "switch_detection.m"
          }
#line 422 "switch_detection.m"
      }
#line 422 "switch_detection.m"
    return check_hlds__switch_detection__succeeded;
#line 422 "switch_detection.m"
  }
#line 422 "switch_detection.m"
}

#line 428 "switch_detection.m"
static void MR_CALL 
check_hlds__switch_detection____Compare____cases_table_0_0(
#line 428 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__HeadVar__1_1,
#line 428 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__2_2,
#line 428 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__3_3)
#line 428 "switch_detection.m"
{
#line 428 "switch_detection.m"
  {
#line 428 "switch_detection.m"
    MR_bool check_hlds__switch_detection__succeeded;
#line 428 "switch_detection.m"
    MR_Integer check_hlds__switch_detection__CastX_9 = (MR_Integer) check_hlds__switch_detection__HeadVar__2_2;
#line 428 "switch_detection.m"
    MR_Integer check_hlds__switch_detection__CastY_10 = (MR_Integer) check_hlds__switch_detection__HeadVar__3_3;

#line 428 "switch_detection.m"
    check_hlds__switch_detection__succeeded = (check_hlds__switch_detection__CastX_9 == check_hlds__switch_detection__CastY_10);
#line 428 "switch_detection.m"
    if (check_hlds__switch_detection__succeeded)
#line 4791 "check_hlds.switch_detection.c"
      *check_hlds__switch_detection__HeadVar__1_1 = (MR_Integer) 0;
#line 428 "switch_detection.m"
    else
#line 428 "switch_detection.m"
      {
#line 428 "switch_detection.m"
        MR_Word check_hlds__switch_detection__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__HeadVar__2_2, (MR_Integer) 0)));
#line 428 "switch_detection.m"
        MR_Word check_hlds__switch_detection__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__HeadVar__2_2, (MR_Integer) 1)));
#line 428 "switch_detection.m"
        MR_Word check_hlds__switch_detection__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__HeadVar__3_3, (MR_Integer) 0)));
#line 428 "switch_detection.m"
        MR_Word check_hlds__switch_detection__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__HeadVar__3_3, (MR_Integer) 1)));
#line 428 "switch_detection.m"
        MR_Word check_hlds__switch_detection__V_8_8;

#line 428 "switch_detection.m"
        {
#line 428 "switch_detection.m"
          mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__switch_detection_scalar_common_2[1], &check_hlds__switch_detection__V_8_8, ((MR_Box) (check_hlds__switch_detection__V_4_4)), ((MR_Box) (check_hlds__switch_detection__V_6_6)));
        }
#line 4813 "check_hlds.switch_detection.c"
        check_hlds__switch_detection__succeeded = (check_hlds__switch_detection__V_8_8 == (MR_Integer) 0);
#line 428 "switch_detection.m"
        check_hlds__switch_detection__succeeded = !(check_hlds__switch_detection__succeeded);
#line 428 "switch_detection.m"
        if (check_hlds__switch_detection__succeeded)
#line 428 "switch_detection.m"
          *check_hlds__switch_detection__HeadVar__1_1 = check_hlds__switch_detection__V_8_8;
#line 428 "switch_detection.m"
        else
#line 428 "switch_detection.m"
          {
#line 428 "switch_detection.m"
            {
#line 428 "switch_detection.m"
              mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__switch_detection_scalar_common_1[3], check_hlds__switch_detection__HeadVar__1_1, ((MR_Box) (check_hlds__switch_detection__V_5_5)), ((MR_Box) (check_hlds__switch_detection__V_7_7)));
#line 428 "switch_detection.m"
              return;
            }
#line 428 "switch_detection.m"
          }
#line 428 "switch_detection.m"
      }
#line 428 "switch_detection.m"
  }
#line 428 "switch_detection.m"
}

#line 428 "switch_detection.m"
static MR_bool MR_CALL 
check_hlds__switch_detection____Unify____cases_table_0_0(
#line 428 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__1_1,
#line 428 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__2_2)
#line 428 "switch_detection.m"
{
#line 428 "switch_detection.m"
  {
#line 428 "switch_detection.m"
    MR_bool check_hlds__switch_detection__succeeded;
#line 428 "switch_detection.m"
    MR_Integer check_hlds__switch_detection__CastX_7 = (MR_Integer) check_hlds__switch_detection__HeadVar__1_1;
#line 428 "switch_detection.m"
    MR_Integer check_hlds__switch_detection__CastY_8 = (MR_Integer) check_hlds__switch_detection__HeadVar__2_2;

#line 428 "switch_detection.m"
    check_hlds__switch_detection__succeeded = (check_hlds__switch_detection__CastX_7 == check_hlds__switch_detection__CastY_8);
#line 428 "switch_detection.m"
    if (check_hlds__switch_detection__succeeded)
#line 428 "switch_detection.m"
      check_hlds__switch_detection__succeeded = MR_TRUE;
#line 428 "switch_detection.m"
    else
#line 428 "switch_detection.m"
      {
#line 428 "switch_detection.m"
        MR_Word check_hlds__switch_detection__TypeInfo_10_10;
#line 428 "switch_detection.m"
        MR_Word check_hlds__switch_detection__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__HeadVar__1_1, (MR_Integer) 0)));
#line 428 "switch_detection.m"
        MR_Word check_hlds__switch_detection__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__HeadVar__1_1, (MR_Integer) 1)));
#line 428 "switch_detection.m"
        MR_Word check_hlds__switch_detection__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__HeadVar__2_2, (MR_Integer) 0)));
#line 428 "switch_detection.m"
        MR_Word check_hlds__switch_detection__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__HeadVar__2_2, (MR_Integer) 1)));

#line 4880 "check_hlds.switch_detection.c"
        {
#line 4882 "check_hlds.switch_detection.c"
          check_hlds__switch_detection__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__switch_detection_scalar_common_2[1], ((MR_Box) (check_hlds__switch_detection__V_3_3)), ((MR_Box) (check_hlds__switch_detection__V_5_5)));
        }
#line 428 "switch_detection.m"
        if (check_hlds__switch_detection__succeeded)
#line 428 "switch_detection.m"
          {
#line 4889 "check_hlds.switch_detection.c"
            check_hlds__switch_detection__TypeInfo_10_10 = (MR_Word) &check_hlds__switch_detection_scalar_common_1[3];
#line 4891 "check_hlds.switch_detection.c"
            {
#line 4893 "check_hlds.switch_detection.c"
              return check_hlds__switch_detection__succeeded = mercury__builtin__unify_2_p_0(check_hlds__switch_detection__TypeInfo_10_10, ((MR_Box) (check_hlds__switch_detection__V_4_4)), ((MR_Box) (check_hlds__switch_detection__V_6_6)));
            }
#line 428 "switch_detection.m"
          }
#line 428 "switch_detection.m"
      }
#line 428 "switch_detection.m"
    return check_hlds__switch_detection__succeeded;
#line 428 "switch_detection.m"
  }
#line 428 "switch_detection.m"
}

#line 413 "switch_detection.m"
static void MR_CALL 
check_hlds__switch_detection____Compare____case_arm_0_0(
#line 413 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__HeadVar__1_1,
#line 413 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__2_2,
#line 413 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__3_3)
#line 413 "switch_detection.m"
{
#line 413 "switch_detection.m"
  {
#line 413 "switch_detection.m"
    MR_bool check_hlds__switch_detection__succeeded;
#line 413 "switch_detection.m"
    MR_Integer check_hlds__switch_detection__CastX_27 = (MR_Integer) check_hlds__switch_detection__HeadVar__2_2;
#line 413 "switch_detection.m"
    MR_Integer check_hlds__switch_detection__CastY_28 = (MR_Integer) check_hlds__switch_detection__HeadVar__3_3;

#line 413 "switch_detection.m"
    check_hlds__switch_detection__succeeded = (check_hlds__switch_detection__CastX_27 == check_hlds__switch_detection__CastY_28);
#line 413 "switch_detection.m"
    if (check_hlds__switch_detection__succeeded)
#line 4931 "check_hlds.switch_detection.c"
      *check_hlds__switch_detection__HeadVar__1_1 = (MR_Integer) 0;
#line 413 "switch_detection.m"
    else
#line 413 "switch_detection.m"
      if (((MR_tag((MR_Word) check_hlds__switch_detection__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 413 "switch_detection.m"
        {
#line 413 "switch_detection.m"
          MR_Word check_hlds__switch_detection__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__HeadVar__2_2, (MR_Integer) 2)));
#line 413 "switch_detection.m"
          MR_Word check_hlds__switch_detection__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__HeadVar__2_2, (MR_Integer) 1)));
#line 413 "switch_detection.m"
          MR_Word check_hlds__switch_detection__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__HeadVar__2_2, (MR_Integer) 0)));

#line 413 "switch_detection.m"
          if (((MR_tag((MR_Word) check_hlds__switch_detection__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 413 "switch_detection.m"
            {
#line 413 "switch_detection.m"
              MR_Word check_hlds__switch_detection__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__HeadVar__3_3, (MR_Integer) 0)));
#line 413 "switch_detection.m"
              MR_Word check_hlds__switch_detection__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__HeadVar__3_3, (MR_Integer) 1)));
#line 413 "switch_detection.m"
              MR_Word check_hlds__switch_detection__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__HeadVar__3_3, (MR_Integer) 2)));
#line 413 "switch_detection.m"
              MR_Word check_hlds__switch_detection__V_25_25;

#line 413 "switch_detection.m"
              {
#line 413 "switch_detection.m"
                parse_tree__prog_data____Compare____cons_id_0_0(&check_hlds__switch_detection__V_25_25, check_hlds__switch_detection__V_36_36, check_hlds__switch_detection__V_22_22);
              }
#line 4964 "check_hlds.switch_detection.c"
              check_hlds__switch_detection__succeeded = (check_hlds__switch_detection__V_25_25 == (MR_Integer) 0);
#line 413 "switch_detection.m"
              check_hlds__switch_detection__succeeded = !(check_hlds__switch_detection__succeeded);
#line 413 "switch_detection.m"
              if (check_hlds__switch_detection__succeeded)
#line 413 "switch_detection.m"
                *check_hlds__switch_detection__HeadVar__1_1 = check_hlds__switch_detection__V_25_25;
#line 413 "switch_detection.m"
              else
#line 413 "switch_detection.m"
                {
#line 413 "switch_detection.m"
                  MR_Word check_hlds__switch_detection__V_26_26;

#line 413 "switch_detection.m"
                  {
#line 413 "switch_detection.m"
                    mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__switch_detection_scalar_common_1[5], &check_hlds__switch_detection__V_26_26, ((MR_Box) (check_hlds__switch_detection__V_35_35)), ((MR_Box) (check_hlds__switch_detection__V_23_23)));
                  }
#line 4984 "check_hlds.switch_detection.c"
                  check_hlds__switch_detection__succeeded = (check_hlds__switch_detection__V_26_26 == (MR_Integer) 0);
#line 413 "switch_detection.m"
                  check_hlds__switch_detection__succeeded = !(check_hlds__switch_detection__succeeded);
#line 413 "switch_detection.m"
                  if (check_hlds__switch_detection__succeeded)
#line 413 "switch_detection.m"
                    *check_hlds__switch_detection__HeadVar__1_1 = check_hlds__switch_detection__V_26_26;
#line 413 "switch_detection.m"
                  else
#line 413 "switch_detection.m"
                    {
#line 413 "switch_detection.m"
                      hlds__hlds_goal____Compare____hlds_goal_0_0(check_hlds__switch_detection__HeadVar__1_1, check_hlds__switch_detection__V_34_34, check_hlds__switch_detection__V_24_24);
#line 413 "switch_detection.m"
                      return;
                    }
#line 413 "switch_detection.m"
                }
#line 413 "switch_detection.m"
            }
#line 413 "switch_detection.m"
          else
#line 5007 "check_hlds.switch_detection.c"
            *check_hlds__switch_detection__HeadVar__1_1 = (MR_Integer) 2;
#line 413 "switch_detection.m"
        }
#line 413 "switch_detection.m"
      else
#line 413 "switch_detection.m"
        {
#line 413 "switch_detection.m"
          MR_Word check_hlds__switch_detection__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__HeadVar__2_2, (MR_Integer) 1)));
#line 413 "switch_detection.m"
          MR_Word check_hlds__switch_detection__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__HeadVar__2_2, (MR_Integer) 0)));

#line 413 "switch_detection.m"
          if (((MR_tag((MR_Word) check_hlds__switch_detection__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 5022 "check_hlds.switch_detection.c"
            *check_hlds__switch_detection__HeadVar__1_1 = (MR_Integer) 1;
#line 413 "switch_detection.m"
          else
#line 413 "switch_detection.m"
            {
#line 413 "switch_detection.m"
              MR_Word check_hlds__switch_detection__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__HeadVar__3_3, (MR_Integer) 0)));
#line 413 "switch_detection.m"
              MR_Word check_hlds__switch_detection__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__HeadVar__3_3, (MR_Integer) 1)));
#line 413 "switch_detection.m"
              MR_Word check_hlds__switch_detection__V_8_8;

#line 413 "switch_detection.m"
              {
#line 413 "switch_detection.m"
                parse_tree__prog_data____Compare____cons_id_0_0(&check_hlds__switch_detection__V_8_8, check_hlds__switch_detection__V_38_38, check_hlds__switch_detection__V_6_6);
              }
#line 5040 "check_hlds.switch_detection.c"
              check_hlds__switch_detection__succeeded = (check_hlds__switch_detection__V_8_8 == (MR_Integer) 0);
#line 413 "switch_detection.m"
              check_hlds__switch_detection__succeeded = !(check_hlds__switch_detection__succeeded);
#line 413 "switch_detection.m"
              if (check_hlds__switch_detection__succeeded)
#line 413 "switch_detection.m"
                *check_hlds__switch_detection__HeadVar__1_1 = check_hlds__switch_detection__V_8_8;
#line 413 "switch_detection.m"
              else
#line 413 "switch_detection.m"
                {
#line 413 "switch_detection.m"
                  hlds__hlds_goal____Compare____hlds_goal_0_0(check_hlds__switch_detection__HeadVar__1_1, check_hlds__switch_detection__V_37_37, check_hlds__switch_detection__V_7_7);
#line 413 "switch_detection.m"
                  return;
                }
#line 413 "switch_detection.m"
            }
#line 413 "switch_detection.m"
        }
#line 413 "switch_detection.m"
  }
#line 413 "switch_detection.m"
}

#line 413 "switch_detection.m"
static MR_bool MR_CALL 
check_hlds__switch_detection____Unify____case_arm_0_0(
#line 413 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__1_1,
#line 413 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__2_2)
#line 413 "switch_detection.m"
{
#line 413 "switch_detection.m"
  {
#line 413 "switch_detection.m"
    MR_bool check_hlds__switch_detection__succeeded;
#line 413 "switch_detection.m"
    MR_Integer check_hlds__switch_detection__CastX_13 = (MR_Integer) check_hlds__switch_detection__HeadVar__1_1;
#line 413 "switch_detection.m"
    MR_Integer check_hlds__switch_detection__CastY_14 = (MR_Integer) check_hlds__switch_detection__HeadVar__2_2;

#line 413 "switch_detection.m"
    check_hlds__switch_detection__succeeded = (check_hlds__switch_detection__CastX_13 == check_hlds__switch_detection__CastY_14);
#line 413 "switch_detection.m"
    if (check_hlds__switch_detection__succeeded)
#line 413 "switch_detection.m"
      check_hlds__switch_detection__succeeded = MR_TRUE;
#line 413 "switch_detection.m"
    else
#line 413 "switch_detection.m"
      if (((MR_tag((MR_Word) check_hlds__switch_detection__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 413 "switch_detection.m"
        {
#line 413 "switch_detection.m"
          MR_Word check_hlds__switch_detection__TypeInfo_16_16;
#line 413 "switch_detection.m"
          MR_Word check_hlds__switch_detection__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__HeadVar__1_1, (MR_Integer) 0)));
#line 413 "switch_detection.m"
          MR_Word check_hlds__switch_detection__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__HeadVar__1_1, (MR_Integer) 1)));
#line 413 "switch_detection.m"
          MR_Word check_hlds__switch_detection__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__HeadVar__1_1, (MR_Integer) 2)));
#line 413 "switch_detection.m"
          MR_Word check_hlds__switch_detection__V_10_10;
#line 413 "switch_detection.m"
          MR_Word check_hlds__switch_detection__V_11_11;
#line 413 "switch_detection.m"
          MR_Word check_hlds__switch_detection__V_12_12;

#line 413 "switch_detection.m"
          check_hlds__switch_detection__succeeded = ((MR_tag((MR_Word) check_hlds__switch_detection__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 413 "switch_detection.m"
          if (check_hlds__switch_detection__succeeded)
#line 413 "switch_detection.m"
            {
#line 413 "switch_detection.m"
              check_hlds__switch_detection__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__HeadVar__2_2, (MR_Integer) 0)));
#line 413 "switch_detection.m"
              check_hlds__switch_detection__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__HeadVar__2_2, (MR_Integer) 1)));
#line 413 "switch_detection.m"
              check_hlds__switch_detection__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__HeadVar__2_2, (MR_Integer) 2)));
#line 5123 "check_hlds.switch_detection.c"
              {
#line 5125 "check_hlds.switch_detection.c"
                check_hlds__switch_detection__succeeded = parse_tree__prog_data____Unify____cons_id_0_0(check_hlds__switch_detection__V_7_7, check_hlds__switch_detection__V_10_10);
              }
#line 413 "switch_detection.m"
              if (check_hlds__switch_detection__succeeded)
#line 413 "switch_detection.m"
                {
#line 5132 "check_hlds.switch_detection.c"
                  check_hlds__switch_detection__TypeInfo_16_16 = (MR_Word) &check_hlds__switch_detection_scalar_common_1[5];
#line 5134 "check_hlds.switch_detection.c"
                  {
#line 5136 "check_hlds.switch_detection.c"
                    check_hlds__switch_detection__succeeded = mercury__builtin__unify_2_p_0(check_hlds__switch_detection__TypeInfo_16_16, ((MR_Box) (check_hlds__switch_detection__V_8_8)), ((MR_Box) (check_hlds__switch_detection__V_11_11)));
                  }
#line 413 "switch_detection.m"
                  if (check_hlds__switch_detection__succeeded)
#line 5141 "check_hlds.switch_detection.c"
                    {
#line 5143 "check_hlds.switch_detection.c"
                      return check_hlds__switch_detection__succeeded = hlds__hlds_goal____Unify____hlds_goal_0_0(check_hlds__switch_detection__V_9_9, check_hlds__switch_detection__V_12_12);
                    }
#line 413 "switch_detection.m"
                }
#line 413 "switch_detection.m"
            }
#line 413 "switch_detection.m"
        }
#line 413 "switch_detection.m"
      else
#line 413 "switch_detection.m"
        {
#line 413 "switch_detection.m"
          MR_Word check_hlds__switch_detection__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__HeadVar__1_1, (MR_Integer) 0)));
#line 413 "switch_detection.m"
          MR_Word check_hlds__switch_detection__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__HeadVar__1_1, (MR_Integer) 1)));
#line 413 "switch_detection.m"
          MR_Word check_hlds__switch_detection__V_5_5;
#line 413 "switch_detection.m"
          MR_Word check_hlds__switch_detection__V_6_6;

#line 413 "switch_detection.m"
          check_hlds__switch_detection__succeeded = ((MR_tag((MR_Word) check_hlds__switch_detection__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 413 "switch_detection.m"
          if (check_hlds__switch_detection__succeeded)
#line 413 "switch_detection.m"
            {
#line 413 "switch_detection.m"
              check_hlds__switch_detection__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__HeadVar__2_2, (MR_Integer) 0)));
#line 413 "switch_detection.m"
              check_hlds__switch_detection__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__HeadVar__2_2, (MR_Integer) 1)));
#line 5175 "check_hlds.switch_detection.c"
              {
#line 5177 "check_hlds.switch_detection.c"
                check_hlds__switch_detection__succeeded = parse_tree__prog_data____Unify____cons_id_0_0(check_hlds__switch_detection__V_3_3, check_hlds__switch_detection__V_5_5);
              }
#line 413 "switch_detection.m"
              if (check_hlds__switch_detection__succeeded)
#line 5182 "check_hlds.switch_detection.c"
                {
#line 5184 "check_hlds.switch_detection.c"
                  return check_hlds__switch_detection__succeeded = hlds__hlds_goal____Unify____hlds_goal_0_0(check_hlds__switch_detection__V_4_4, check_hlds__switch_detection__V_6_6);
                }
#line 413 "switch_detection.m"
            }
#line 413 "switch_detection.m"
        }
#line 413 "switch_detection.m"
    return check_hlds__switch_detection__succeeded;
#line 413 "switch_detection.m"
  }
#line 413 "switch_detection.m"
}

#line 102 "switch_detection.m"
static void MR_CALL 
check_hlds__switch_detection____Compare____allow_multi_arm_0_0(
#line 102 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__HeadVar__1_1,
#line 102 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__2_2,
#line 102 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__3_3)
#line 102 "switch_detection.m"
{
#line 102 "switch_detection.m"
  {
#line 102 "switch_detection.m"
    MR_bool check_hlds__switch_detection__succeeded;
#line 102 "switch_detection.m"
    MR_Integer check_hlds__switch_detection__Cast_HeadVar1_4 = (MR_Integer) check_hlds__switch_detection__HeadVar__2_2;
#line 102 "switch_detection.m"
    MR_Integer check_hlds__switch_detection__Cast_HeadVar2_5 = (MR_Integer) check_hlds__switch_detection__HeadVar__3_3;

#line 102 "switch_detection.m"
    {
#line 102 "switch_detection.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__switch_detection__HeadVar__1_1, check_hlds__switch_detection__Cast_HeadVar1_4, check_hlds__switch_detection__Cast_HeadVar2_5);
#line 102 "switch_detection.m"
      return;
    }
#line 102 "switch_detection.m"
  }
#line 102 "switch_detection.m"
}

#line 102 "switch_detection.m"
static MR_bool MR_CALL 
check_hlds__switch_detection____Unify____allow_multi_arm_0_0(
#line 102 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__2_1,
#line 102 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__2_2)
#line 102 "switch_detection.m"
{
#line 5239 "check_hlds.switch_detection.c"
  {
#line 5241 "check_hlds.switch_detection.c"
    MR_bool check_hlds__switch_detection__succeeded = (check_hlds__switch_detection__HeadVar__2_1 == check_hlds__switch_detection__HeadVar__2_2);

#line 5244 "check_hlds.switch_detection.c"
    return check_hlds__switch_detection__succeeded;
#line 5246 "check_hlds.switch_detection.c"
  }
#line 102 "switch_detection.m"
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
#line 5275 "check_hlds.switch_detection.c"
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
#line 5301 "check_hlds.switch_detection.c"
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
#line 5321 "check_hlds.switch_detection.c"
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

#line 5396 "check_hlds.switch_detection.c"
        {
#line 5398 "check_hlds.switch_detection.c"
          check_hlds__switch_detection__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__switch_detection_scalar_common_1[0], ((MR_Box) (check_hlds__switch_detection__V_3_3)), ((MR_Box) (check_hlds__switch_detection__V_6_6)));
        }
#line 596 "switch_detection.m"
        if (check_hlds__switch_detection__succeeded)
#line 596 "switch_detection.m"
          {
#line 5405 "check_hlds.switch_detection.c"
            check_hlds__switch_detection__TypeInfo_12_12 = (MR_Word) &check_hlds__switch_detection_scalar_common_1[4];
#line 5407 "check_hlds.switch_detection.c"
            {
#line 5409 "check_hlds.switch_detection.c"
              check_hlds__switch_detection__succeeded = mercury__builtin__unify_2_p_0(check_hlds__switch_detection__TypeInfo_12_12, ((MR_Box) (check_hlds__switch_detection__V_4_4)), ((MR_Box) (check_hlds__switch_detection__V_7_7)));
            }
#line 596 "switch_detection.m"
            if (check_hlds__switch_detection__succeeded)
#line 596 "switch_detection.m"
              {
#line 5416 "check_hlds.switch_detection.c"
                check_hlds__switch_detection__TypeInfo_13_13 = (MR_Word) &check_hlds__switch_detection_scalar_common_1[2];
#line 5418 "check_hlds.switch_detection.c"
                {
#line 5420 "check_hlds.switch_detection.c"
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

#line 1124 "switch_detection.m"
static MR_Integer MR_CALL 
check_hlds__switch_detection__count_covered_cons_ids_1_f_0(
#line 1124 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__1_1)
#line 1124 "switch_detection.m"
{
#line 1126 "switch_detection.m"
  {
#line 1126 "switch_detection.m"
    MR_bool check_hlds__switch_detection__succeeded;
#line 1126 "switch_detection.m"
    MR_Integer check_hlds__switch_detection__HeadVar__2_2;

#line 1126 "switch_detection.m"
    if ((check_hlds__switch_detection__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1126 "switch_detection.m"
      check_hlds__switch_detection__HeadVar__2_2 = (MR_Integer) 0;
#line 1126 "switch_detection.m"
    else
#line 1127 "switch_detection.m"
      {
#line 1127 "switch_detection.m"
        MR_Word check_hlds__switch_detection__Case_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__HeadVar__1_1, (MR_Integer) 0)));
#line 1127 "switch_detection.m"
        MR_Word check_hlds__switch_detection__Cases_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__HeadVar__1_1, (MR_Integer) 1)));
#line 1127 "switch_detection.m"
        MR_Integer check_hlds__switch_detection__CaseCount_5;
#line 1127 "switch_detection.m"
        MR_Integer check_hlds__switch_detection__CasesCount_6;
#line 1127 "switch_detection.m"
        MR_Word check_hlds__switch_detection__OtherConsIds_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__Case_3, (MR_Integer) 1)));
#line 1127 "switch_detection.m"
        MR_Integer check_hlds__switch_detection__V_11_11;
#line 1128 "switch_detection.m"
        MR_Word check_hlds__switch_detection___MainConsId_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__Case_3, (MR_Integer) 0)));
#line 1128 "switch_detection.m"
        MR_Word check_hlds__switch_detection___Goal_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__Case_3, (MR_Integer) 2)));

#line 1129 "switch_detection.m"
        {
#line 1129 "switch_detection.m"
          check_hlds__switch_detection__V_11_11 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, check_hlds__switch_detection__OtherConsIds_8);
        }
#line 1129 "switch_detection.m"
        check_hlds__switch_detection__CaseCount_5 = ((MR_Integer) 1 + check_hlds__switch_detection__V_11_11);
#line 1130 "switch_detection.m"
        {
#line 1130 "switch_detection.m"
          check_hlds__switch_detection__CasesCount_6 = check_hlds__switch_detection__count_covered_cons_ids_1_f_0(check_hlds__switch_detection__Cases_4);
        }
#line 1127 "switch_detection.m"
        check_hlds__switch_detection__HeadVar__2_2 = (check_hlds__switch_detection__CaseCount_5 + check_hlds__switch_detection__CasesCount_6);
#line 1127 "switch_detection.m"
      }
#line 1126 "switch_detection.m"
    return check_hlds__switch_detection__HeadVar__2_2;
#line 1126 "switch_detection.m"
  }
#line 1124 "switch_detection.m"
}

#line 1109 "switch_detection.m"
static void MR_CALL 
check_hlds__switch_detection__delete_covered_functors_3_p_0_1(
#line 1109 "switch_detection.m"
  MR_Box check_hlds__switch_detection__closure_arg,
#line 1109 "switch_detection.m"
  MR_Box check_hlds__switch_detection__wrapper_arg_1,
#line 1109 "switch_detection.m"
  MR_Box check_hlds__switch_detection__wrapper_arg_2,
#line 1109 "switch_detection.m"
  MR_Box * check_hlds__switch_detection__wrapper_arg_3)
#line 1109 "switch_detection.m"
{
#line 1109 "switch_detection.m"
  {
#line 1109 "switch_detection.m"
    MR_Box check_hlds__switch_detection__closure = check_hlds__switch_detection__closure_arg;
#line 1109 "switch_detection.m"
    MR_Word check_hlds__switch_detection__conv0_HeadVar__3_22;

#line 1109 "switch_detection.m"
    {
#line 1109 "switch_detection.m"
      check_hlds__switch_detection__IntroducedFrom__pred__delete_covered_functors__1109__1_3_p_0(((MR_Word) check_hlds__switch_detection__wrapper_arg_1), ((MR_Word) check_hlds__switch_detection__wrapper_arg_2), &check_hlds__switch_detection__conv0_HeadVar__3_22);
    }
#line 1109 "switch_detection.m"
    *check_hlds__switch_detection__wrapper_arg_3 = ((MR_Box) (check_hlds__switch_detection__conv0_HeadVar__3_22));
#line 1109 "switch_detection.m"
  }
#line 1109 "switch_detection.m"
}

#line 1102 "switch_detection.m"
static void MR_CALL 
check_hlds__switch_detection__delete_covered_functors_3_p_0(
#line 1102 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__1_1,
#line 1102 "switch_detection.m"
  MR_Word check_hlds__switch_detection__STATE_VARIABLE_UncoveredConsIds_0_2,
#line 1102 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__STATE_VARIABLE_UncoveredConsIds_3)
#line 1102 "switch_detection.m"
{
#line 1105 "switch_detection.m"
  while (MR_TRUE)
#line 1105 "switch_detection.m"
    {
#line 1105 "switch_detection.m"
      /* tailcall optimized into a loop */
#line 1105 "switch_detection.m"
      {
#line 1105 "switch_detection.m"
        MR_bool check_hlds__switch_detection__succeeded;

#line 1105 "switch_detection.m"
        if ((check_hlds__switch_detection__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1105 "switch_detection.m"
          *check_hlds__switch_detection__STATE_VARIABLE_UncoveredConsIds_3 = check_hlds__switch_detection__STATE_VARIABLE_UncoveredConsIds_0_2;
#line 1105 "switch_detection.m"
        else
#line 1106 "switch_detection.m"
          {
#line 1106 "switch_detection.m"
            MR_Word check_hlds__switch_detection__TypeCtorInfo_19_19 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0;
#line 1106 "switch_detection.m"
            MR_Word check_hlds__switch_detection__Case_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__HeadVar__1_1, (MR_Integer) 0)));
#line 1106 "switch_detection.m"
            MR_Word check_hlds__switch_detection__Cases_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__HeadVar__1_1, (MR_Integer) 1)));
#line 1106 "switch_detection.m"
            MR_Word check_hlds__switch_detection__MainConsId_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__Case_7, (MR_Integer) 0)));
#line 1106 "switch_detection.m"
            MR_Word check_hlds__switch_detection__OtherConsIds_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__Case_7, (MR_Integer) 1)));
#line 1106 "switch_detection.m"
            MR_Word check_hlds__switch_detection__STATE_VARIABLE_UncoveredConsIds_15_15;
#line 1106 "switch_detection.m"
            MR_Word check_hlds__switch_detection__STATE_VARIABLE_UncoveredConsIds_17_17;
#line 1107 "switch_detection.m"
            MR_Word check_hlds__switch_detection___Goal_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__Case_7, (MR_Integer) 2)));
#line 1109 "switch_detection.m"
            MR_Box check_hlds__switch_detection__conv1_STATE_VARIABLE_UncoveredConsIds_17_17;

#line 1108 "switch_detection.m"
            {
#line 1108 "switch_detection.m"
              mercury__set_tree234__delete_3_p_0(check_hlds__switch_detection__TypeCtorInfo_19_19, ((MR_Box) (check_hlds__switch_detection__MainConsId_10)), check_hlds__switch_detection__STATE_VARIABLE_UncoveredConsIds_0_2, &check_hlds__switch_detection__STATE_VARIABLE_UncoveredConsIds_15_15);
            }
#line 1109 "switch_detection.m"
            {
#line 1109 "switch_detection.m"
              mercury__list__foldl_4_p_0(check_hlds__switch_detection__TypeCtorInfo_19_19, (MR_Word) &check_hlds__switch_detection_scalar_common_1[3], (MR_Word) &check_hlds__switch_detection_scalar_common_2[5], check_hlds__switch_detection__OtherConsIds_11, ((MR_Box) (check_hlds__switch_detection__STATE_VARIABLE_UncoveredConsIds_15_15)), &check_hlds__switch_detection__conv1_STATE_VARIABLE_UncoveredConsIds_17_17);
            }
#line 1109 "switch_detection.m"
            check_hlds__switch_detection__STATE_VARIABLE_UncoveredConsIds_17_17 = ((MR_Word) check_hlds__switch_detection__conv1_STATE_VARIABLE_UncoveredConsIds_17_17);
#line 1110 "switch_detection.m"
            /* direct tailcall eliminated */
#line 1110 "switch_detection.m"
            {
#line 1110 "switch_detection.m"
              MR_Word check_hlds__switch_detection__HeadVar__1__tmp_copy_1 = check_hlds__switch_detection__Cases_8;
#line 1110 "switch_detection.m"
              MR_Word check_hlds__switch_detection__STATE_VARIABLE_UncoveredConsIds_0__tmp_copy_2 = check_hlds__switch_detection__STATE_VARIABLE_UncoveredConsIds_17_17;

#line 1110 "switch_detection.m"
              check_hlds__switch_detection__STATE_VARIABLE_UncoveredConsIds_0_2 = check_hlds__switch_detection__STATE_VARIABLE_UncoveredConsIds_0__tmp_copy_2;
#line 1110 "switch_detection.m"
              check_hlds__switch_detection__HeadVar__1_1 = check_hlds__switch_detection__HeadVar__1__tmp_copy_1;
#line 1110 "switch_detection.m"
            }
#line 1110 "switch_detection.m"
            continue;
#line 1106 "switch_detection.m"
          }
#line 1105 "switch_detection.m"
      }
#line 1105 "switch_detection.m"
      break;
#line 1105 "switch_detection.m"
    }
#line 1102 "switch_detection.m"
}

#line 1044 "switch_detection.m"
static void MR_CALL 
check_hlds__switch_detection__cases_to_switch_6_p_0(
#line 1044 "switch_detection.m"
  MR_Word check_hlds__switch_detection__Var_7,
#line 1044 "switch_detection.m"
  MR_Word check_hlds__switch_detection__Cases0_8,
#line 1044 "switch_detection.m"
  MR_Word check_hlds__switch_detection__InstMap_9,
#line 1044 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__GoalExpr_10,
#line 1044 "switch_detection.m"
  MR_Word check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_0_25,
#line 1044 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_26)
#line 1044 "switch_detection.m"
{
#line 1048 "switch_detection.m"
  {
#line 1048 "switch_detection.m"
    MR_bool check_hlds__switch_detection__succeeded;
#line 1048 "switch_detection.m"
    MR_Word check_hlds__switch_detection__ModuleInfo_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_0_25, (MR_Integer) 0)));
#line 1048 "switch_detection.m"
    MR_Word check_hlds__switch_detection__VarTypes_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_0_25, (MR_Integer) 2)));
#line 1048 "switch_detection.m"
    MR_Word check_hlds__switch_detection__VarInst_14;
#line 1048 "switch_detection.m"
    MR_Word check_hlds__switch_detection__Type_15;
#line 1048 "switch_detection.m"
    MR_Word check_hlds__switch_detection__Cases1_19;
#line 1048 "switch_detection.m"
    MR_Word check_hlds__switch_detection__CanFail_20;
#line 1048 "switch_detection.m"
    MR_Word check_hlds__switch_detection__Cases_22;
#line 1049 "switch_detection.m"
    MR_Word check_hlds__switch_detection__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_0_25, (MR_Integer) 1)));
#line 1049 "switch_detection.m"
    MR_Word check_hlds__switch_detection__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_0_25, (MR_Integer) 3)));
#line 1058 "switch_detection.m"
    MR_Word check_hlds__switch_detection__Functors_16;

#line 1051 "switch_detection.m"
    {
#line 1051 "switch_detection.m"
      hlds__instmap__instmap_lookup_var_3_p_0(check_hlds__switch_detection__InstMap_9, check_hlds__switch_detection__Var_7, &check_hlds__switch_detection__VarInst_14);
    }
#line 1052 "switch_detection.m"
    {
#line 1052 "switch_detection.m"
      parse_tree__prog_data__lookup_var_type_3_p_0(check_hlds__switch_detection__VarTypes_13, check_hlds__switch_detection__Var_7, &check_hlds__switch_detection__Type_15);
    }
#line 1053 "switch_detection.m"
    {
#line 1053 "switch_detection.m"
      check_hlds__switch_detection__succeeded = check_hlds__inst_match__inst_is_bound_to_functors_3_p_0(check_hlds__switch_detection__ModuleInfo_12, check_hlds__switch_detection__VarInst_14, &check_hlds__switch_detection__Functors_16);
    }
#line 1058 "switch_detection.m"
    if (check_hlds__switch_detection__succeeded)
#line 1054 "switch_detection.m"
      {
#line 1054 "switch_detection.m"
        MR_Word check_hlds__switch_detection__TypeCtorInfo_9_40;
#line 1054 "switch_detection.m"
        MR_Word check_hlds__switch_detection__TypeCtor_17;
#line 1054 "switch_detection.m"
        MR_Word check_hlds__switch_detection__ConsIds_18;
#line 1054 "switch_detection.m"
        MR_Word check_hlds__switch_detection__UncoveredFunctors0_38;
#line 1054 "switch_detection.m"
        MR_Word check_hlds__switch_detection__UncoveredFunctors_39;

#line 1054 "switch_detection.m"
        {
#line 1054 "switch_detection.m"
          parse_tree__prog_type__type_to_ctor_det_2_p_0(check_hlds__switch_detection__Type_15, &check_hlds__switch_detection__TypeCtor_17);
        }
#line 1055 "switch_detection.m"
        {
#line 1055 "switch_detection.m"
          parse_tree__prog_mode__bound_insts_to_cons_ids_3_p_0(check_hlds__switch_detection__TypeCtor_17, check_hlds__switch_detection__Functors_16, &check_hlds__switch_detection__ConsIds_18);
        }
#line 1056 "switch_detection.m"
        {
#line 1056 "switch_detection.m"
          check_hlds__det_util__delete_unreachable_cases_3_p_0(check_hlds__switch_detection__Cases0_8, check_hlds__switch_detection__ConsIds_18, &check_hlds__switch_detection__Cases1_19);
        }
#line 5706 "check_hlds.switch_detection.c"
        check_hlds__switch_detection__TypeCtorInfo_9_40 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0;
#line 1092 "switch_detection.m"
        {
#line 1092 "switch_detection.m"
          check_hlds__switch_detection__UncoveredFunctors0_38 = mercury__set_tree234__list_to_set_1_f_0(check_hlds__switch_detection__TypeCtorInfo_9_40, check_hlds__switch_detection__ConsIds_18);
        }
#line 1093 "switch_detection.m"
        {
#line 1093 "switch_detection.m"
          check_hlds__switch_detection__delete_covered_functors_3_p_0(check_hlds__switch_detection__Cases1_19, check_hlds__switch_detection__UncoveredFunctors0_38, &check_hlds__switch_detection__UncoveredFunctors_39);
        }
#line 1094 "switch_detection.m"
        {
#line 1094 "switch_detection.m"
          check_hlds__switch_detection__succeeded = mercury__set_tree234__empty_1_p_0(check_hlds__switch_detection__TypeCtorInfo_9_40, check_hlds__switch_detection__UncoveredFunctors_39);
        }
#line 1096 "switch_detection.m"
        if (check_hlds__switch_detection__succeeded)
#line 1095 "switch_detection.m"
          check_hlds__switch_detection__CanFail_20 = (MR_Integer) 1;
#line 1096 "switch_detection.m"
        else
#line 1097 "switch_detection.m"
          check_hlds__switch_detection__CanFail_20 = (MR_Integer) 0;
#line 1054 "switch_detection.m"
      }
#line 1058 "switch_detection.m"
    else
#line 1059 "switch_detection.m"
      {
#line 1067 "switch_detection.m"
        MR_Integer check_hlds__switch_detection__NumFunctors_21;

#line 1059 "switch_detection.m"
        check_hlds__switch_detection__Cases1_19 = check_hlds__switch_detection__Cases0_8;
#line 1060 "switch_detection.m"
        {
#line 1060 "switch_detection.m"
          check_hlds__switch_detection__succeeded = check_hlds__type_util__switch_type_num_functors_3_p_0(check_hlds__switch_detection__ModuleInfo_12, check_hlds__switch_detection__Type_15, &check_hlds__switch_detection__NumFunctors_21);
        }
#line 1067 "switch_detection.m"
        if (check_hlds__switch_detection__succeeded)
#line 1116 "switch_detection.m"
          {
#line 1116 "switch_detection.m"
            MR_Integer check_hlds__switch_detection__NumCoveredConsIds_44;

#line 1117 "switch_detection.m"
            {
#line 1117 "switch_detection.m"
              check_hlds__switch_detection__NumCoveredConsIds_44 = check_hlds__switch_detection__count_covered_cons_ids_1_f_0(check_hlds__switch_detection__Cases1_19);
            }
#line 1118 "switch_detection.m"
            check_hlds__switch_detection__succeeded = (check_hlds__switch_detection__NumCoveredConsIds_44 == check_hlds__switch_detection__NumFunctors_21);
#line 1120 "switch_detection.m"
            if (check_hlds__switch_detection__succeeded)
#line 1119 "switch_detection.m"
              check_hlds__switch_detection__CanFail_20 = (MR_Integer) 1;
#line 1120 "switch_detection.m"
            else
#line 1121 "switch_detection.m"
              check_hlds__switch_detection__CanFail_20 = (MR_Integer) 0;
#line 1116 "switch_detection.m"
          }
#line 1067 "switch_detection.m"
        else
#line 1070 "switch_detection.m"
          check_hlds__switch_detection__CanFail_20 = (MR_Integer) 0;
#line 1059 "switch_detection.m"
      }
#line 1073 "switch_detection.m"
    {
#line 1073 "switch_detection.m"
      check_hlds__switch_detection__detect_switches_in_cases_6_p_0(check_hlds__switch_detection__Var_7, check_hlds__switch_detection__InstMap_9, check_hlds__switch_detection__Cases1_19, &check_hlds__switch_detection__Cases_22, check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_0_25, check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_26);
    }
#line 1084 "switch_detection.m"
    if ((check_hlds__switch_detection__Cases_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1082 "switch_detection.m"
      {
#line 1083 "switch_detection.m"
        *check_hlds__switch_detection__GoalExpr_10 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__switch_detection_scalar_common_1[7]);
#line 1082 "switch_detection.m"
      }
#line 1084 "switch_detection.m"
    else
#line 1086 "switch_detection.m"
      {
#line 1086 "switch_detection.m"
        MR_Word base;
#line 1086 "switch_detection.m"
        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1086 "switch_detection.m"
        *check_hlds__switch_detection__GoalExpr_10 = base;
#line 1086 "switch_detection.m"
        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1086 "switch_detection.m"
        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__switch_detection__Var_7));
#line 1086 "switch_detection.m"
        MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__switch_detection__CanFail_20));
#line 1086 "switch_detection.m"
        MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__switch_detection__Cases_22));
#line 1086 "switch_detection.m"
      }
#line 1048 "switch_detection.m"
  }
#line 1044 "switch_detection.m"
}

#line 853 "switch_detection.m"
static void MR_CALL 
check_hlds__switch_detection__find_bind_var_for_switch_in_deconstruct_7_p_0(
#line 853 "switch_detection.m"
  MR_Word check_hlds__switch_detection__SwitchVar_8,
#line 853 "switch_detection.m"
  MR_Word check_hlds__switch_detection__Goal0_9,
#line 853 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__Goals_10,
#line 853 "switch_detection.m"
  MR_Word check_hlds__switch_detection___Result0_11,
#line 853 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__Result_12)
#line 853 "switch_detection.m"
{
#line 858 "switch_detection.m"
  {
#line 858 "switch_detection.m"
    MR_bool check_hlds__switch_detection__succeeded;

#line 858 "switch_detection.m"
    {
#line 858 "switch_detection.m"
      check_hlds__switch_detection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_98_105_110_100_95_118_97_114_95_102_111_114_95_115_119_105_116_99_104_95_105_110_95_100_101_99_111_110_115_116_114_117_99_116_95_95_91_52_44_32_54_93_95_48_7_p_0(check_hlds__switch_detection__SwitchVar_8, check_hlds__switch_detection__Goal0_9, check_hlds__switch_detection__Goals_10, check_hlds__switch_detection__Result_12);
#line 858 "switch_detection.m"
      return;
    }
#line 858 "switch_detection.m"
  }
#line 853 "switch_detection.m"
}

#line 5847 "check_hlds.switch_detection.c"
static void MR_CALL 
check_hlds__switch_detection__partition_disj_trial_6_p_0_1(
#line 5850 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__closure_arg,
#line 5852 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_1,
#line 5854 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_2,
#line 5856 "check_hlds.switch_detection.c"
  MR_Box * check_hlds__switch_detection__wrapper_arg_3,
#line 5858 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_4,
#line 5860 "check_hlds.switch_detection.c"
  MR_Box * check_hlds__switch_detection__wrapper_arg_5,
#line 5862 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_6,
#line 5864 "check_hlds.switch_detection.c"
  MR_Box * check_hlds__switch_detection__wrapper_arg_7)
#line 5866 "check_hlds.switch_detection.c"
{
#line 5868 "check_hlds.switch_detection.c"
  {
#line 5870 "check_hlds.switch_detection.c"
    MR_Box check_hlds__switch_detection__closure = check_hlds__switch_detection__closure_arg;
#line 5872 "check_hlds.switch_detection.c"
    MR_Word check_hlds__switch_detection__conv1_Goals_10;
#line 5874 "check_hlds.switch_detection.c"
    MR_Word check_hlds__switch_detection__conv0_Result_12;

#line 5877 "check_hlds.switch_detection.c"
    {
#line 5879 "check_hlds.switch_detection.c"
      check_hlds__switch_detection__find_bind_var_for_switch_in_deconstruct_7_p_0(((MR_Word) check_hlds__switch_detection__wrapper_arg_1), ((MR_Word) check_hlds__switch_detection__wrapper_arg_2), &check_hlds__switch_detection__conv1_Goals_10, ((MR_Word) check_hlds__switch_detection__wrapper_arg_4), &check_hlds__switch_detection__conv0_Result_12);
    }
#line 5882 "check_hlds.switch_detection.c"
    *check_hlds__switch_detection__wrapper_arg_3 = ((MR_Box) (check_hlds__switch_detection__conv1_Goals_10));
#line 5884 "check_hlds.switch_detection.c"
    *check_hlds__switch_detection__wrapper_arg_5 = ((MR_Box) (check_hlds__switch_detection__conv0_Result_12));
#line 5886 "check_hlds.switch_detection.c"
  }
#line 5888 "check_hlds.switch_detection.c"
}

#line 836 "switch_detection.m"
static void MR_CALL 
check_hlds__switch_detection__partition_disj_trial_6_p_0(
#line 836 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__1_1,
#line 836 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__2_2,
#line 836 "switch_detection.m"
  MR_Word check_hlds__switch_detection__STATE_VARIABLE_Left_0_3,
#line 836 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__STATE_VARIABLE_Left_4,
#line 836 "switch_detection.m"
  MR_Word check_hlds__switch_detection__STATE_VARIABLE_CasesTable_0_5,
#line 836 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__STATE_VARIABLE_CasesTable_6)
#line 836 "switch_detection.m"
{
#line 840 "switch_detection.m"
  while (MR_TRUE)
#line 840 "switch_detection.m"
    {
#line 840 "switch_detection.m"
      /* tailcall optimized into a loop */
#line 840 "switch_detection.m"
      {
#line 840 "switch_detection.m"
        MR_bool check_hlds__switch_detection__succeeded;

#line 840 "switch_detection.m"
        if ((check_hlds__switch_detection__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 840 "switch_detection.m"
          {
#line 840 "switch_detection.m"
            *check_hlds__switch_detection__STATE_VARIABLE_CasesTable_6 = check_hlds__switch_detection__STATE_VARIABLE_CasesTable_0_5;
#line 840 "switch_detection.m"
            *check_hlds__switch_detection__STATE_VARIABLE_Left_4 = check_hlds__switch_detection__STATE_VARIABLE_Left_0_3;
#line 840 "switch_detection.m"
          }
#line 840 "switch_detection.m"
        else
#line 841 "switch_detection.m"
          {
#line 841 "switch_detection.m"
            MR_Word check_hlds__switch_detection__Disjunct0_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__HeadVar__1_1, (MR_Integer) 0)));
#line 841 "switch_detection.m"
            MR_Word check_hlds__switch_detection__Disjuncts0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__HeadVar__1_1, (MR_Integer) 1)));
#line 841 "switch_detection.m"
            MR_Word check_hlds__switch_detection__Disjunct_19;
#line 841 "switch_detection.m"
            MR_Word check_hlds__switch_detection__MaybeConsId_20;
#line 841 "switch_detection.m"
            MR_Word check_hlds__switch_detection__STATE_VARIABLE_Left_31_31;
#line 841 "switch_detection.m"
            MR_Word check_hlds__switch_detection__STATE_VARIABLE_CasesTable_32_32;
#line 841 "switch_detection.m"
            MR_Word check_hlds__switch_detection__Subst_57;
#line 891 "switch_detection.m"
            MR_Word check_hlds__switch_detection__V_58_58;
#line 891 "switch_detection.m"
            MR_Word check_hlds__switch_detection__DeconstructSearch_59;
#line 891 "switch_detection.m"
            MR_Box check_hlds__switch_detection__conv3_MaybeConsId_20;
#line 891 "switch_detection.m"
            MR_Box check_hlds__switch_detection__conv2_V_21_21;

#line 843 "switch_detection.m"
            mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 890 "switch_detection.m"
            {
#line 890 "switch_detection.m"
              mercury__map__init_1_p_0((MR_Word) &check_hlds__switch_detection_scalar_common_1[0], (MR_Word) &check_hlds__switch_detection_scalar_common_1[1], &check_hlds__switch_detection__Subst_57);
            }
#line 891 "switch_detection.m"
            {
#line 891 "switch_detection.m"
              check_hlds__switch_detection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_98_105_110_100_95_118_97_114_95_50_95_95_91_49_44_32_50_93_95_48_11_p_0(check_hlds__switch_detection__HeadVar__2_2, (MR_Word) &check_hlds__switch_detection_scalar_common_2[4], check_hlds__switch_detection__Disjunct0_14, &check_hlds__switch_detection__Disjunct_19, check_hlds__switch_detection__Subst_57, &check_hlds__switch_detection__V_58_58, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &check_hlds__switch_detection__conv3_MaybeConsId_20, ((MR_Box) ((MR_Integer) 0)), &check_hlds__switch_detection__conv2_V_21_21, &check_hlds__switch_detection__DeconstructSearch_59);
            }
#line 891 "switch_detection.m"
            check_hlds__switch_detection__MaybeConsId_20 = ((MR_Word) check_hlds__switch_detection__conv3_MaybeConsId_20);
#line 847 "switch_detection.m"
            if ((check_hlds__switch_detection__MaybeConsId_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 848 "switch_detection.m"
              {
#line 849 "switch_detection.m"
                {
#line 849 "switch_detection.m"
                  check_hlds__switch_detection__STATE_VARIABLE_Left_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 849 "switch_detection.m"
                  MR_hl_field(MR_mktag(1), check_hlds__switch_detection__STATE_VARIABLE_Left_31_31, 0) = ((MR_Box) (check_hlds__switch_detection__Disjunct0_14));
#line 849 "switch_detection.m"
                  MR_hl_field(MR_mktag(1), check_hlds__switch_detection__STATE_VARIABLE_Left_31_31, 1) = ((MR_Box) (check_hlds__switch_detection__STATE_VARIABLE_Left_0_3));
#line 849 "switch_detection.m"
                }
#line 849 "switch_detection.m"
                check_hlds__switch_detection__STATE_VARIABLE_CasesTable_32_32 = check_hlds__switch_detection__STATE_VARIABLE_CasesTable_0_5;
#line 848 "switch_detection.m"
              }
#line 847 "switch_detection.m"
            else
#line 845 "switch_detection.m"
              {
#line 845 "switch_detection.m"
                MR_Word check_hlds__switch_detection__ConsId_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__MaybeConsId_20, (MR_Integer) 0)));
#line 845 "switch_detection.m"
                MR_Word check_hlds__switch_detection__CasesMap0_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__STATE_VARIABLE_CasesTable_0_5, (MR_Integer) 0)));
#line 845 "switch_detection.m"
                MR_Word check_hlds__switch_detection__ConflictConsIds0_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__STATE_VARIABLE_CasesTable_0_5, (MR_Integer) 1)));
#line 845 "switch_detection.m"
                MR_Word check_hlds__switch_detection__Arm_73;
#line 845 "switch_detection.m"
                MR_Word check_hlds__switch_detection__ConflictConsIds_78;
#line 845 "switch_detection.m"
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
                    if ((check_hlds__switch_detection__State0_75 == (MR_Integer) 0))
#line 535 "switch_detection.m"
                      {
#line 536 "switch_detection.m"
                        check_hlds__switch_detection__State_77 = (MR_Integer) 0;
#line 537 "switch_detection.m"
                        check_hlds__switch_detection__ConflictConsIds_78 = check_hlds__switch_detection__ConflictConsIds0_72;
#line 535 "switch_detection.m"
                      }
#line 538 "switch_detection.m"
                    else
#line 538 "switch_detection.m"
                      if ((check_hlds__switch_detection__State0_75 == (MR_Integer) 2))
#line 543 "switch_detection.m"
                        {
#line 544 "switch_detection.m"
                          check_hlds__switch_detection__State_77 = (MR_Integer) 2;
#line 545 "switch_detection.m"
                          check_hlds__switch_detection__ConflictConsIds_78 = check_hlds__switch_detection__ConflictConsIds0_72;
#line 543 "switch_detection.m"
                        }
#line 538 "switch_detection.m"
                      else
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
#line 846 "switch_detection.m"
                check_hlds__switch_detection__STATE_VARIABLE_Left_31_31 = check_hlds__switch_detection__STATE_VARIABLE_Left_0_3;
#line 845 "switch_detection.m"
              }
#line 851 "switch_detection.m"
            /* direct tailcall eliminated */
#line 851 "switch_detection.m"
            {
#line 851 "switch_detection.m"
              MR_Word check_hlds__switch_detection__HeadVar__1__tmp_copy_1 = check_hlds__switch_detection__Disjuncts0_15;
#line 851 "switch_detection.m"
              MR_Word check_hlds__switch_detection__STATE_VARIABLE_Left_0__tmp_copy_3 = check_hlds__switch_detection__STATE_VARIABLE_Left_31_31;
#line 851 "switch_detection.m"
              MR_Word check_hlds__switch_detection__STATE_VARIABLE_CasesTable_0__tmp_copy_5 = check_hlds__switch_detection__STATE_VARIABLE_CasesTable_32_32;

#line 851 "switch_detection.m"
              check_hlds__switch_detection__STATE_VARIABLE_CasesTable_0_5 = check_hlds__switch_detection__STATE_VARIABLE_CasesTable_0__tmp_copy_5;
#line 851 "switch_detection.m"
              check_hlds__switch_detection__STATE_VARIABLE_Left_0_3 = check_hlds__switch_detection__STATE_VARIABLE_Left_0__tmp_copy_3;
#line 851 "switch_detection.m"
              check_hlds__switch_detection__HeadVar__1_1 = check_hlds__switch_detection__HeadVar__1__tmp_copy_1;
#line 851 "switch_detection.m"
            }
#line 851 "switch_detection.m"
            continue;
#line 841 "switch_detection.m"
          }
#line 840 "switch_detection.m"
      }
#line 840 "switch_detection.m"
      break;
#line 840 "switch_detection.m"
    }
#line 836 "switch_detection.m"
}

#line 823 "switch_detection.m"
static void MR_CALL 
check_hlds__switch_detection__create_expanded_conjunction_5_p_0(
#line 823 "switch_detection.m"
  MR_Word check_hlds__switch_detection__Unifies_6,
#line 823 "switch_detection.m"
  MR_Word check_hlds__switch_detection__LaterGoals_7,
#line 823 "switch_detection.m"
  MR_Word check_hlds__switch_detection__GoalInfo_8,
#line 823 "switch_detection.m"
  MR_Word check_hlds__switch_detection__Disjunct_9,
#line 823 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__Goal_10)
#line 823 "switch_detection.m"
{
#line 826 "switch_detection.m"
  {
#line 826 "switch_detection.m"
    MR_bool check_hlds__switch_detection__succeeded;
#line 826 "switch_detection.m"
    MR_Word check_hlds__switch_detection__Conjuncts_13;
#line 826 "switch_detection.m"
    MR_Word check_hlds__switch_detection__V_20_20;
#line 829 "switch_detection.m"
    MR_Word check_hlds__switch_detection__DisjunctGoals_11;
#line 827 "switch_detection.m"
    MR_Word check_hlds__switch_detection__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__Disjunct_9, (MR_Integer) 0)));
#line 827 "switch_detection.m"
    MR_Word check_hlds__switch_detection__V_15_15;
#line 827 "switch_detection.m"
    MR_Word check_hlds__switch_detection__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__Disjunct_9, (MR_Integer) 1)));

#line 827 "switch_detection.m"
    check_hlds__switch_detection__succeeded = ((((MR_tag((MR_Word) check_hlds__switch_detection__V_14_14)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__switch_detection__V_14_14, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 827 "switch_detection.m"
    if (check_hlds__switch_detection__succeeded)
#line 827 "switch_detection.m"
      {
#line 827 "switch_detection.m"
        check_hlds__switch_detection__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__switch_detection__V_14_14, (MR_Integer) 1)));
#line 827 "switch_detection.m"
        check_hlds__switch_detection__DisjunctGoals_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__switch_detection__V_14_14, (MR_Integer) 2)));
#line 827 "switch_detection.m"
        check_hlds__switch_detection__succeeded = (check_hlds__switch_detection__V_15_15 == (MR_Integer) 0);
#line 827 "switch_detection.m"
      }
#line 829 "switch_detection.m"
    if (check_hlds__switch_detection__succeeded)
#line 828 "switch_detection.m"
      {
#line 828 "switch_detection.m"
        MR_Word check_hlds__switch_detection__TypeCtorInfo_22_22 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 828 "switch_detection.m"
        MR_Word check_hlds__switch_detection__V_16_16;

#line 828 "switch_detection.m"
        {
#line 828 "switch_detection.m"
          check_hlds__switch_detection__V_16_16 = mercury__list__f_43_43_2_f_0(check_hlds__switch_detection__TypeCtorInfo_22_22, check_hlds__switch_detection__DisjunctGoals_11, check_hlds__switch_detection__LaterGoals_7);
        }
#line 828 "switch_detection.m"
        {
#line 828 "switch_detection.m"
          check_hlds__switch_detection__Conjuncts_13 = mercury__list__f_43_43_2_f_0(check_hlds__switch_detection__TypeCtorInfo_22_22, check_hlds__switch_detection__Unifies_6, check_hlds__switch_detection__V_16_16);
        }
#line 828 "switch_detection.m"
      }
#line 829 "switch_detection.m"
    else
#line 830 "switch_detection.m"
      {
#line 830 "switch_detection.m"
        MR_Word check_hlds__switch_detection__TypeCtorInfo_23_23 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 830 "switch_detection.m"
        MR_Word check_hlds__switch_detection__V_17_17;
#line 830 "switch_detection.m"
        MR_Word check_hlds__switch_detection__V_18_18;

#line 830 "switch_detection.m"
        {
#line 830 "switch_detection.m"
          check_hlds__switch_detection__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 830 "switch_detection.m"
          MR_hl_field(MR_mktag(1), check_hlds__switch_detection__V_18_18, 0) = ((MR_Box) (check_hlds__switch_detection__Disjunct_9));
#line 830 "switch_detection.m"
          MR_hl_field(MR_mktag(1), check_hlds__switch_detection__V_18_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 830 "switch_detection.m"
        }
#line 830 "switch_detection.m"
        {
#line 830 "switch_detection.m"
          check_hlds__switch_detection__V_17_17 = mercury__list__f_43_43_2_f_0(check_hlds__switch_detection__TypeCtorInfo_23_23, check_hlds__switch_detection__V_18_18, check_hlds__switch_detection__LaterGoals_7);
        }
#line 830 "switch_detection.m"
        {
#line 830 "switch_detection.m"
          check_hlds__switch_detection__Conjuncts_13 = mercury__list__f_43_43_2_f_0(check_hlds__switch_detection__TypeCtorInfo_23_23, check_hlds__switch_detection__Unifies_6, check_hlds__switch_detection__V_17_17);
        }
#line 830 "switch_detection.m"
      }
#line 832 "switch_detection.m"
    {
#line 832 "switch_detection.m"
      check_hlds__switch_detection__V_20_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 832 "switch_detection.m"
      MR_hl_field(MR_mktag(3), check_hlds__switch_detection__V_20_20, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 832 "switch_detection.m"
      MR_hl_field(MR_mktag(3), check_hlds__switch_detection__V_20_20, 1) = ((MR_Box) ((MR_Integer) 0));
#line 832 "switch_detection.m"
      MR_hl_field(MR_mktag(3), check_hlds__switch_detection__V_20_20, 2) = ((MR_Box) (check_hlds__switch_detection__Conjuncts_13));
#line 832 "switch_detection.m"
    }
#line 832 "switch_detection.m"
    {
#line 832 "switch_detection.m"
      MR_Word base;
#line 832 "switch_detection.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 832 "switch_detection.m"
      *check_hlds__switch_detection__Goal_10 = base;
#line 832 "switch_detection.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__switch_detection__V_20_20));
#line 832 "switch_detection.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__switch_detection__GoalInfo_8));
#line 832 "switch_detection.m"
    }
#line 826 "switch_detection.m"
  }
#line 823 "switch_detection.m"
}

#line 812 "switch_detection.m"
static MR_bool MR_CALL 
check_hlds__switch_detection__all_disjuncts_are_switch_var_unifies_3_p_0(
#line 812 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__1_1,
#line 812 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__2_2,
#line 812 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__HeadVar__3_3)
#line 812 "switch_detection.m"
{
#line 815 "switch_detection.m"
  {
#line 815 "switch_detection.m"
    MR_bool check_hlds__switch_detection__succeeded;

#line 815 "switch_detection.m"
    if ((check_hlds__switch_detection__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 815 "switch_detection.m"
      {
#line 815 "switch_detection.m"
        *check_hlds__switch_detection__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 815 "switch_detection.m"
        check_hlds__switch_detection__succeeded = MR_TRUE;
#line 815 "switch_detection.m"
      }
#line 815 "switch_detection.m"
    else
#line 817 "switch_detection.m"
      {
#line 817 "switch_detection.m"
        MR_Word check_hlds__switch_detection__TypeInfo_22_22;
#line 817 "switch_detection.m"
        MR_Word check_hlds__switch_detection__Goal_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__HeadVar__2_2, (MR_Integer) 0)));
#line 817 "switch_detection.m"
        MR_Word check_hlds__switch_detection__Goals_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__HeadVar__2_2, (MR_Integer) 1)));
#line 817 "switch_detection.m"
        MR_Word check_hlds__switch_detection__ConsId_8;
#line 817 "switch_detection.m"
        MR_Word check_hlds__switch_detection__ConsIds_9;
#line 817 "switch_detection.m"
        MR_Word check_hlds__switch_detection__GoalExpr_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__Goal_6, (MR_Integer) 0)));
#line 817 "switch_detection.m"
        MR_Word check_hlds__switch_detection__UnifyInfo0_15;
#line 817 "switch_detection.m"
        MR_Word check_hlds__switch_detection__V_21_21;
#line 818 "switch_detection.m"
        MR_Word check_hlds__switch_detection___GoalInfo_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__Goal_6, (MR_Integer) 1)));
#line 819 "switch_detection.m"
        MR_Word check_hlds__switch_detection___LHS_12;
#line 819 "switch_detection.m"
        MR_Word check_hlds__switch_detection___RHS_13;
#line 819 "switch_detection.m"
        MR_Word check_hlds__switch_detection__V_14_14;
#line 819 "switch_detection.m"
        MR_Word check_hlds__switch_detection__V_16_16;
#line 820 "switch_detection.m"
        MR_Word check_hlds__switch_detection__V_17_17;
#line 820 "switch_detection.m"
        MR_Word check_hlds__switch_detection__V_18_18;
#line 820 "switch_detection.m"
        MR_Word check_hlds__switch_detection__V_19_19;
#line 820 "switch_detection.m"
        MR_Word check_hlds__switch_detection__V_20_20;

#line 819 "switch_detection.m"
        check_hlds__switch_detection__succeeded = ((MR_tag((MR_Word) check_hlds__switch_detection__GoalExpr_10)) == (MR_mktag((MR_Integer) 1)));
#line 819 "switch_detection.m"
        if (check_hlds__switch_detection__succeeded)
#line 819 "switch_detection.m"
          {
#line 819 "switch_detection.m"
            check_hlds__switch_detection___LHS_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__GoalExpr_10, (MR_Integer) 0)));
#line 819 "switch_detection.m"
            check_hlds__switch_detection___RHS_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__GoalExpr_10, (MR_Integer) 1)));
#line 819 "switch_detection.m"
            check_hlds__switch_detection__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__GoalExpr_10, (MR_Integer) 2)));
#line 819 "switch_detection.m"
            check_hlds__switch_detection__UnifyInfo0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__GoalExpr_10, (MR_Integer) 3)));
#line 819 "switch_detection.m"
            check_hlds__switch_detection__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__GoalExpr_10, (MR_Integer) 4)));
#line 820 "switch_detection.m"
            check_hlds__switch_detection__succeeded = ((MR_tag((MR_Word) check_hlds__switch_detection__UnifyInfo0_15)) == (MR_mktag((MR_Integer) 1)));
#line 820 "switch_detection.m"
            if (check_hlds__switch_detection__succeeded)
#line 820 "switch_detection.m"
              {
#line 820 "switch_detection.m"
                check_hlds__switch_detection__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__UnifyInfo0_15, (MR_Integer) 0)));
#line 820 "switch_detection.m"
                check_hlds__switch_detection__ConsId_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__UnifyInfo0_15, (MR_Integer) 1)));
#line 820 "switch_detection.m"
                check_hlds__switch_detection__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__UnifyInfo0_15, (MR_Integer) 2)));
#line 820 "switch_detection.m"
                check_hlds__switch_detection__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__UnifyInfo0_15, (MR_Integer) 3)));
#line 820 "switch_detection.m"
                check_hlds__switch_detection__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__UnifyInfo0_15, (MR_Integer) 4)));
#line 820 "switch_detection.m"
                check_hlds__switch_detection__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__UnifyInfo0_15, (MR_Integer) 5)));
#line 6415 "check_hlds.switch_detection.c"
                check_hlds__switch_detection__TypeInfo_22_22 = (MR_Word) &check_hlds__switch_detection_scalar_common_1[0];
#line 820 "switch_detection.m"
                {
#line 820 "switch_detection.m"
                  check_hlds__switch_detection__succeeded = mercury__builtin__unify_2_p_0(check_hlds__switch_detection__TypeInfo_22_22, ((MR_Box) (check_hlds__switch_detection__HeadVar__1_1)), ((MR_Box) (check_hlds__switch_detection__V_21_21)));
                }
#line 817 "switch_detection.m"
                if (check_hlds__switch_detection__succeeded)
#line 817 "switch_detection.m"
                  {
#line 821 "switch_detection.m"
                    {
#line 821 "switch_detection.m"
                      check_hlds__switch_detection__succeeded = check_hlds__switch_detection__all_disjuncts_are_switch_var_unifies_3_p_0(check_hlds__switch_detection__HeadVar__1_1, check_hlds__switch_detection__Goals_7, &check_hlds__switch_detection__ConsIds_9);
                    }
#line 817 "switch_detection.m"
                    if (check_hlds__switch_detection__succeeded)
#line 817 "switch_detection.m"
                      {
#line 817 "switch_detection.m"
                        {
#line 817 "switch_detection.m"
                          MR_Word base;
#line 817 "switch_detection.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 817 "switch_detection.m"
                          *check_hlds__switch_detection__HeadVar__3_3 = base;
#line 817 "switch_detection.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__switch_detection__ConsId_8));
#line 817 "switch_detection.m"
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__switch_detection__ConsIds_9));
#line 817 "switch_detection.m"
                        }
#line 817 "switch_detection.m"
                        check_hlds__switch_detection__succeeded = MR_TRUE;
#line 817 "switch_detection.m"
                      }
#line 817 "switch_detection.m"
                  }
#line 820 "switch_detection.m"
              }
#line 819 "switch_detection.m"
          }
#line 817 "switch_detection.m"
      }
#line 815 "switch_detection.m"
    return check_hlds__switch_detection__succeeded;
#line 815 "switch_detection.m"
  }
#line 812 "switch_detection.m"
}

#line 803 "switch_detection.m"
static void MR_CALL 
check_hlds__switch_detection__expand_sub_disj_process_conj_7_p_0_2(
#line 803 "switch_detection.m"
  MR_Box check_hlds__switch_detection__closure_arg,
#line 803 "switch_detection.m"
  MR_Box check_hlds__switch_detection__wrapper_arg_1,
#line 803 "switch_detection.m"
  MR_Box * check_hlds__switch_detection__wrapper_arg_2)
#line 803 "switch_detection.m"
{
#line 803 "switch_detection.m"
  {
#line 803 "switch_detection.m"
    MR_Box check_hlds__switch_detection__closure = check_hlds__switch_detection__closure_arg;
#line 803 "switch_detection.m"
    MR_Word check_hlds__switch_detection__conv2_Goal_10;

#line 803 "switch_detection.m"
    {
#line 803 "switch_detection.m"
      check_hlds__switch_detection__create_expanded_conjunction_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__closure, (MR_Integer) 5))), ((MR_Word) check_hlds__switch_detection__wrapper_arg_1), &check_hlds__switch_detection__conv2_Goal_10);
    }
#line 803 "switch_detection.m"
    *check_hlds__switch_detection__wrapper_arg_2 = ((MR_Box) (check_hlds__switch_detection__conv2_Goal_10));
#line 803 "switch_detection.m"
  }
#line 803 "switch_detection.m"
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

#line 758 "switch_detection.m"
static MR_bool MR_CALL 
check_hlds__switch_detection__expand_sub_disj_process_conj_7_p_0(
#line 758 "switch_detection.m"
  MR_Word check_hlds__switch_detection__AllowMulti_8,
#line 758 "switch_detection.m"
  MR_Word check_hlds__switch_detection__Var_9,
#line 758 "switch_detection.m"
  MR_Word check_hlds__switch_detection__ConjGoals_10,
#line 758 "switch_detection.m"
  MR_Word check_hlds__switch_detection__STATE_VARIABLE_RevUnifies_0_36,
#line 758 "switch_detection.m"
  MR_Word check_hlds__switch_detection__GoalInfo_12,
#line 758 "switch_detection.m"
  MR_Word check_hlds__switch_detection__STATE_VARIABLE_CasesTable_0_37,
#line 758 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__STATE_VARIABLE_CasesTable_38)
#line 758 "switch_detection.m"
{
#line 6549 "check_hlds.switch_detection.c"
  while (MR_TRUE)
#line 6551 "check_hlds.switch_detection.c"
    {
#line 6553 "check_hlds.switch_detection.c"
      /* tailcall optimized into a loop */
#line 6555 "check_hlds.switch_detection.c"
      {
#line 6557 "check_hlds.switch_detection.c"
        MR_bool check_hlds__switch_detection__succeeded = ((MR_tag((MR_Word) check_hlds__switch_detection__ConjGoals_10)) == (MR_mktag((MR_Integer) 1)));
#line 6559 "check_hlds.switch_detection.c"
        MR_Word check_hlds__switch_detection__FirstGoal_14;
#line 6561 "check_hlds.switch_detection.c"
        MR_Word check_hlds__switch_detection__LaterGoals_15;
#line 6563 "check_hlds.switch_detection.c"
        MR_Word check_hlds__switch_detection__FirstGoalExpr_16;
#line 6565 "check_hlds.switch_detection.c"
        MR_Word check_hlds__switch_detection__FirstGoalInfo_17;

#line 6568 "check_hlds.switch_detection.c"
        if (check_hlds__switch_detection__succeeded)
#line 6570 "check_hlds.switch_detection.c"
          {
#line 6572 "check_hlds.switch_detection.c"
            check_hlds__switch_detection__FirstGoal_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__ConjGoals_10, (MR_Integer) 0)));
#line 6574 "check_hlds.switch_detection.c"
            check_hlds__switch_detection__LaterGoals_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__ConjGoals_10, (MR_Integer) 1)));
#line 769 "switch_detection.m"
            check_hlds__switch_detection__FirstGoalExpr_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__FirstGoal_14, (MR_Integer) 0)));
#line 769 "switch_detection.m"
            check_hlds__switch_detection__FirstGoalInfo_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__FirstGoal_14, (MR_Integer) 1)));
#line 775 "switch_detection.m"
            if (((MR_tag((MR_Word) check_hlds__switch_detection__FirstGoalExpr_16)) == (MR_mktag((MR_Integer) 1))))
#line 771 "switch_detection.m"
              {
#line 771 "switch_detection.m"
                MR_Word check_hlds__switch_detection__STATE_VARIABLE_RevUnifies_45_47;

#line 772 "switch_detection.m"
                {
#line 772 "switch_detection.m"
                  check_hlds__switch_detection__STATE_VARIABLE_RevUnifies_45_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 772 "switch_detection.m"
                  MR_hl_field(MR_mktag(1), check_hlds__switch_detection__STATE_VARIABLE_RevUnifies_45_47, 0) = ((MR_Box) (check_hlds__switch_detection__FirstGoal_14));
#line 772 "switch_detection.m"
                  MR_hl_field(MR_mktag(1), check_hlds__switch_detection__STATE_VARIABLE_RevUnifies_45_47, 1) = ((MR_Box) (check_hlds__switch_detection__STATE_VARIABLE_RevUnifies_0_36));
#line 772 "switch_detection.m"
                }
#line 773 "switch_detection.m"
                /* direct tailcall eliminated */
#line 773 "switch_detection.m"
                {
#line 773 "switch_detection.m"
                  MR_Word check_hlds__switch_detection__ConjGoals__tmp_copy_10 = check_hlds__switch_detection__LaterGoals_15;
#line 773 "switch_detection.m"
                  MR_Word check_hlds__switch_detection__STATE_VARIABLE_RevUnifies_0__tmp_copy_36 = check_hlds__switch_detection__STATE_VARIABLE_RevUnifies_45_47;

#line 773 "switch_detection.m"
                  check_hlds__switch_detection__STATE_VARIABLE_RevUnifies_0_36 = check_hlds__switch_detection__STATE_VARIABLE_RevUnifies_0__tmp_copy_36;
#line 773 "switch_detection.m"
                  check_hlds__switch_detection__ConjGoals_10 = check_hlds__switch_detection__ConjGoals__tmp_copy_10;
#line 773 "switch_detection.m"
                }
#line 773 "switch_detection.m"
                continue;
#line 771 "switch_detection.m"
              }
#line 775 "switch_detection.m"
            else
#line 775 "switch_detection.m"
              if (((((MR_tag((MR_Word) check_hlds__switch_detection__FirstGoalExpr_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__switch_detection__FirstGoalExpr_16, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 776 "switch_detection.m"
                {
#line 776 "switch_detection.m"
                  MR_Word check_hlds__switch_detection__Disjuncts_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__switch_detection__FirstGoalExpr_16, (MR_Integer) 1)));
#line 777 "switch_detection.m"
                  MR_Word check_hlds__switch_detection__V_24_24;
#line 777 "switch_detection.m"
                  MR_Word check_hlds__switch_detection__V_25_25;
#line 800 "switch_detection.m"
                  MR_Word check_hlds__switch_detection__SortedDisjConsIds_29;
#line 800 "switch_detection.m"
                  MR_Word check_hlds__switch_detection__MainConsId_30;
#line 800 "switch_detection.m"
                  MR_Word check_hlds__switch_detection__OtherConsIds_31;
#line 779 "switch_detection.m"
                  MR_Word check_hlds__switch_detection__TypeCtorInfo_52_52;
#line 779 "switch_detection.m"
                  MR_Word check_hlds__switch_detection__TypeCtorInfo_53_53;
#line 779 "switch_detection.m"
                  MR_Word check_hlds__switch_detection__TypeInfo_22_90;
#line 779 "switch_detection.m"
                  MR_Word check_hlds__switch_detection__NonLocals_26;
#line 779 "switch_detection.m"
                  MR_Word check_hlds__switch_detection__OtherNonLocals_27;
#line 779 "switch_detection.m"
                  MR_Word check_hlds__switch_detection__DisjConsIds_28;
#line 779 "switch_detection.m"
                  MR_Word check_hlds__switch_detection__Goal_74;
#line 779 "switch_detection.m"
                  MR_Word check_hlds__switch_detection__Goals_75;
#line 779 "switch_detection.m"
                  MR_Word check_hlds__switch_detection__ConsId_76;
#line 779 "switch_detection.m"
                  MR_Word check_hlds__switch_detection__ConsIds_77;
#line 779 "switch_detection.m"
                  MR_Word check_hlds__switch_detection__GoalExpr_78;
#line 779 "switch_detection.m"
                  MR_Word check_hlds__switch_detection__UnifyInfo0_83;
#line 779 "switch_detection.m"
                  MR_Word check_hlds__switch_detection__V_89_89;
#line 818 "switch_detection.m"
                  MR_Word check_hlds__switch_detection___GoalInfo_79;
#line 819 "switch_detection.m"
                  MR_Word check_hlds__switch_detection___LHS_80;
#line 819 "switch_detection.m"
                  MR_Word check_hlds__switch_detection___RHS_81;
#line 819 "switch_detection.m"
                  MR_Word check_hlds__switch_detection__V_82_82;
#line 819 "switch_detection.m"
                  MR_Word check_hlds__switch_detection__V_84_84;
#line 820 "switch_detection.m"
                  MR_Word check_hlds__switch_detection__V_85_85;
#line 820 "switch_detection.m"
                  MR_Word check_hlds__switch_detection__V_86_86;
#line 820 "switch_detection.m"
                  MR_Word check_hlds__switch_detection__V_87_87;
#line 820 "switch_detection.m"
                  MR_Word check_hlds__switch_detection__V_88_88;

#line 777 "switch_detection.m"
                  check_hlds__switch_detection__succeeded = ((MR_tag((MR_Word) check_hlds__switch_detection__Disjuncts_23)) == (MR_mktag((MR_Integer) 1)));
#line 777 "switch_detection.m"
                  if (check_hlds__switch_detection__succeeded)
#line 777 "switch_detection.m"
                    {
#line 777 "switch_detection.m"
                      check_hlds__switch_detection__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__Disjuncts_23, (MR_Integer) 0)));
#line 777 "switch_detection.m"
                      check_hlds__switch_detection__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__Disjuncts_23, (MR_Integer) 1)));
#line 779 "switch_detection.m"
                      check_hlds__switch_detection__succeeded = (check_hlds__switch_detection__AllowMulti_8 == (MR_Integer) 0);
#line 779 "switch_detection.m"
                      if (check_hlds__switch_detection__succeeded)
#line 779 "switch_detection.m"
                        {
#line 780 "switch_detection.m"
                          check_hlds__switch_detection__succeeded = (check_hlds__switch_detection__STATE_VARIABLE_RevUnifies_0_36 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 779 "switch_detection.m"
                          if (check_hlds__switch_detection__succeeded)
#line 779 "switch_detection.m"
                            {
#line 788 "switch_detection.m"
                              {
#line 788 "switch_detection.m"
                                check_hlds__switch_detection__NonLocals_26 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__switch_detection__FirstGoalInfo_17);
                              }
#line 6706 "check_hlds.switch_detection.c"
                              check_hlds__switch_detection__TypeCtorInfo_52_52 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 789 "switch_detection.m"
                              {
#line 789 "switch_detection.m"
                                parse_tree__set_of_var__delete_3_p_0(check_hlds__switch_detection__TypeCtorInfo_52_52, check_hlds__switch_detection__Var_9, check_hlds__switch_detection__NonLocals_26, &check_hlds__switch_detection__OtherNonLocals_27);
                              }
#line 790 "switch_detection.m"
                              {
#line 790 "switch_detection.m"
                                check_hlds__switch_detection__succeeded = parse_tree__set_of_var__is_empty_1_p_0(check_hlds__switch_detection__TypeCtorInfo_52_52, check_hlds__switch_detection__OtherNonLocals_27);
                              }
#line 779 "switch_detection.m"
                              if (check_hlds__switch_detection__succeeded)
#line 779 "switch_detection.m"
                                {
#line 816 "switch_detection.m"
                                  check_hlds__switch_detection__Goal_74 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__Disjuncts_23, (MR_Integer) 0)));
#line 816 "switch_detection.m"
                                  check_hlds__switch_detection__Goals_75 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__Disjuncts_23, (MR_Integer) 1)));
#line 818 "switch_detection.m"
                                  check_hlds__switch_detection__GoalExpr_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__Goal_74, (MR_Integer) 0)));
#line 818 "switch_detection.m"
                                  check_hlds__switch_detection___GoalInfo_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__Goal_74, (MR_Integer) 1)));
#line 819 "switch_detection.m"
                                  check_hlds__switch_detection__succeeded = ((MR_tag((MR_Word) check_hlds__switch_detection__GoalExpr_78)) == (MR_mktag((MR_Integer) 1)));
#line 819 "switch_detection.m"
                                  if (check_hlds__switch_detection__succeeded)
#line 819 "switch_detection.m"
                                    {
#line 819 "switch_detection.m"
                                      check_hlds__switch_detection___LHS_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__GoalExpr_78, (MR_Integer) 0)));
#line 819 "switch_detection.m"
                                      check_hlds__switch_detection___RHS_81 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__GoalExpr_78, (MR_Integer) 1)));
#line 819 "switch_detection.m"
                                      check_hlds__switch_detection__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__GoalExpr_78, (MR_Integer) 2)));
#line 819 "switch_detection.m"
                                      check_hlds__switch_detection__UnifyInfo0_83 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__GoalExpr_78, (MR_Integer) 3)));
#line 819 "switch_detection.m"
                                      check_hlds__switch_detection__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__GoalExpr_78, (MR_Integer) 4)));
#line 820 "switch_detection.m"
                                      check_hlds__switch_detection__succeeded = ((MR_tag((MR_Word) check_hlds__switch_detection__UnifyInfo0_83)) == (MR_mktag((MR_Integer) 1)));
#line 820 "switch_detection.m"
                                      if (check_hlds__switch_detection__succeeded)
#line 820 "switch_detection.m"
                                        {
#line 820 "switch_detection.m"
                                          check_hlds__switch_detection__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__UnifyInfo0_83, (MR_Integer) 0)));
#line 820 "switch_detection.m"
                                          check_hlds__switch_detection__ConsId_76 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__UnifyInfo0_83, (MR_Integer) 1)));
#line 820 "switch_detection.m"
                                          check_hlds__switch_detection__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__UnifyInfo0_83, (MR_Integer) 2)));
#line 820 "switch_detection.m"
                                          check_hlds__switch_detection__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__UnifyInfo0_83, (MR_Integer) 3)));
#line 820 "switch_detection.m"
                                          check_hlds__switch_detection__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__UnifyInfo0_83, (MR_Integer) 4)));
#line 820 "switch_detection.m"
                                          check_hlds__switch_detection__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__UnifyInfo0_83, (MR_Integer) 5)));
#line 6764 "check_hlds.switch_detection.c"
                                          check_hlds__switch_detection__TypeInfo_22_90 = (MR_Word) &check_hlds__switch_detection_scalar_common_1[0];
#line 820 "switch_detection.m"
                                          {
#line 820 "switch_detection.m"
                                            check_hlds__switch_detection__succeeded = mercury__builtin__unify_2_p_0(check_hlds__switch_detection__TypeInfo_22_90, ((MR_Box) (check_hlds__switch_detection__Var_9)), ((MR_Box) (check_hlds__switch_detection__V_89_89)));
                                          }
#line 779 "switch_detection.m"
                                          if (check_hlds__switch_detection__succeeded)
#line 779 "switch_detection.m"
                                            {
#line 821 "switch_detection.m"
                                              {
#line 821 "switch_detection.m"
                                                check_hlds__switch_detection__succeeded = check_hlds__switch_detection__all_disjuncts_are_switch_var_unifies_3_p_0(check_hlds__switch_detection__Var_9, check_hlds__switch_detection__Goals_75, &check_hlds__switch_detection__ConsIds_77);
                                              }
#line 779 "switch_detection.m"
                                              if (check_hlds__switch_detection__succeeded)
#line 779 "switch_detection.m"
                                                {
#line 6784 "check_hlds.switch_detection.c"
                                                  check_hlds__switch_detection__TypeCtorInfo_53_53 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0;
#line 817 "switch_detection.m"
                                                  {
#line 817 "switch_detection.m"
                                                    check_hlds__switch_detection__DisjConsIds_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 817 "switch_detection.m"
                                                    MR_hl_field(MR_mktag(1), check_hlds__switch_detection__DisjConsIds_28, 0) = ((MR_Box) (check_hlds__switch_detection__ConsId_76));
#line 817 "switch_detection.m"
                                                    MR_hl_field(MR_mktag(1), check_hlds__switch_detection__DisjConsIds_28, 1) = ((MR_Box) (check_hlds__switch_detection__ConsIds_77));
#line 817 "switch_detection.m"
                                                  }
#line 794 "switch_detection.m"
                                                  {
#line 794 "switch_detection.m"
                                                    mercury__list__sort_2_p_0(check_hlds__switch_detection__TypeCtorInfo_53_53, check_hlds__switch_detection__DisjConsIds_28, &check_hlds__switch_detection__SortedDisjConsIds_29);
                                                  }
#line 795 "switch_detection.m"
                                                  check_hlds__switch_detection__succeeded = ((MR_tag((MR_Word) check_hlds__switch_detection__SortedDisjConsIds_29)) == (MR_mktag((MR_Integer) 1)));
#line 795 "switch_detection.m"
                                                  if (check_hlds__switch_detection__succeeded)
#line 795 "switch_detection.m"
                                                    {
#line 795 "switch_detection.m"
                                                      check_hlds__switch_detection__MainConsId_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__SortedDisjConsIds_29, (MR_Integer) 0)));
#line 795 "switch_detection.m"
                                                      check_hlds__switch_detection__OtherConsIds_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__SortedDisjConsIds_29, (MR_Integer) 1)));
#line 795 "switch_detection.m"
                                                    }
#line 779 "switch_detection.m"
                                                }
#line 779 "switch_detection.m"
                                            }
#line 820 "switch_detection.m"
                                        }
#line 819 "switch_detection.m"
                                    }
#line 779 "switch_detection.m"
                                }
#line 779 "switch_detection.m"
                            }
#line 779 "switch_detection.m"
                        }
#line 800 "switch_detection.m"
                      if (check_hlds__switch_detection__succeeded)
#line 797 "switch_detection.m"
                        {
#line 797 "switch_detection.m"
                          MR_Word check_hlds__switch_detection__SharedGoal_32;
#line 797 "switch_detection.m"
                          MR_Word check_hlds__switch_detection__V_39_39;
#line 797 "switch_detection.m"
                          MR_Word check_hlds__switch_detection__Arm_64;
#line 797 "switch_detection.m"
                          MR_Word check_hlds__switch_detection__V_65_65;
#line 564 "switch_detection.m"
                          MR_Box check_hlds__switch_detection__conv1_STATE_VARIABLE_CasesTable_38;

#line 797 "switch_detection.m"
                          {
#line 797 "switch_detection.m"
                            check_hlds__switch_detection__V_39_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 797 "switch_detection.m"
                            MR_hl_field(MR_mktag(3), check_hlds__switch_detection__V_39_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 797 "switch_detection.m"
                            MR_hl_field(MR_mktag(3), check_hlds__switch_detection__V_39_39, 1) = ((MR_Box) ((MR_Integer) 0));
#line 797 "switch_detection.m"
                            MR_hl_field(MR_mktag(3), check_hlds__switch_detection__V_39_39, 2) = ((MR_Box) (check_hlds__switch_detection__LaterGoals_15));
#line 797 "switch_detection.m"
                          }
#line 797 "switch_detection.m"
                          {
#line 797 "switch_detection.m"
                            check_hlds__switch_detection__SharedGoal_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 797 "switch_detection.m"
                            MR_hl_field(MR_mktag(0), check_hlds__switch_detection__SharedGoal_32, 0) = ((MR_Box) (check_hlds__switch_detection__V_39_39));
#line 797 "switch_detection.m"
                            MR_hl_field(MR_mktag(0), check_hlds__switch_detection__SharedGoal_32, 1) = ((MR_Box) (check_hlds__switch_detection__GoalInfo_12));
#line 797 "switch_detection.m"
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
#line 797 "switch_detection.m"
                          check_hlds__switch_detection__succeeded = MR_TRUE;
#line 797 "switch_detection.m"
                        }
#line 800 "switch_detection.m"
                      else
#line 801 "switch_detection.m"
                        {
#line 801 "switch_detection.m"
                          MR_Word check_hlds__switch_detection__TypeCtorInfo_54_54 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 801 "switch_detection.m"
                          MR_Word check_hlds__switch_detection__Unifies_33;
#line 801 "switch_detection.m"
                          MR_Word check_hlds__switch_detection__ExpandedConjunctions_34;
#line 801 "switch_detection.m"
                          MR_Word check_hlds__switch_detection__Left_35;
#line 801 "switch_detection.m"
                          MR_Word check_hlds__switch_detection__V_42_42;

#line 801 "switch_detection.m"
                          {
#line 801 "switch_detection.m"
                            mercury__list__reverse_2_p_0(check_hlds__switch_detection__TypeCtorInfo_54_54, check_hlds__switch_detection__STATE_VARIABLE_RevUnifies_0_36, &check_hlds__switch_detection__Unifies_33);
                          }
#line 803 "switch_detection.m"
                          {
#line 803 "switch_detection.m"
                            check_hlds__switch_detection__V_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 803 "switch_detection.m"
                            MR_hl_field(MR_mktag(0), check_hlds__switch_detection__V_42_42, 0) = ((MR_Box) (&check_hlds__switch_detection_scalar_common_6[0]));
#line 803 "switch_detection.m"
                            MR_hl_field(MR_mktag(0), check_hlds__switch_detection__V_42_42, 1) = ((MR_Box) (check_hlds__switch_detection__expand_sub_disj_process_conj_7_p_0_2));
#line 803 "switch_detection.m"
                            MR_hl_field(MR_mktag(0), check_hlds__switch_detection__V_42_42, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 803 "switch_detection.m"
                            MR_hl_field(MR_mktag(0), check_hlds__switch_detection__V_42_42, 3) = ((MR_Box) (check_hlds__switch_detection__Unifies_33));
#line 803 "switch_detection.m"
                            MR_hl_field(MR_mktag(0), check_hlds__switch_detection__V_42_42, 4) = ((MR_Box) (check_hlds__switch_detection__LaterGoals_15));
#line 803 "switch_detection.m"
                            MR_hl_field(MR_mktag(0), check_hlds__switch_detection__V_42_42, 5) = ((MR_Box) (check_hlds__switch_detection__GoalInfo_12));
#line 803 "switch_detection.m"
                          }
#line 802 "switch_detection.m"
                          {
#line 802 "switch_detection.m"
                            mercury__list__map_3_p_0(check_hlds__switch_detection__TypeCtorInfo_54_54, check_hlds__switch_detection__TypeCtorInfo_54_54, check_hlds__switch_detection__V_42_42, check_hlds__switch_detection__Disjuncts_23, &check_hlds__switch_detection__ExpandedConjunctions_34);
                          }
#line 805 "switch_detection.m"
                          {
#line 805 "switch_detection.m"
                            check_hlds__switch_detection__partition_disj_trial_6_p_0(check_hlds__switch_detection__ExpandedConjunctions_34, check_hlds__switch_detection__Var_9, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__switch_detection__Left_35, check_hlds__switch_detection__STATE_VARIABLE_CasesTable_0_37, check_hlds__switch_detection__STATE_VARIABLE_CasesTable_38);
                          }
#line 807 "switch_detection.m"
                          check_hlds__switch_detection__succeeded = (check_hlds__switch_detection__Left_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 801 "switch_detection.m"
                        }
#line 777 "switch_detection.m"
                    }
#line 776 "switch_detection.m"
                }
#line 775 "switch_detection.m"
              else
#line 775 "switch_detection.m"
                check_hlds__switch_detection__succeeded = MR_FALSE;
#line 6961 "check_hlds.switch_detection.c"
          }
#line 6963 "check_hlds.switch_detection.c"
        return check_hlds__switch_detection__succeeded;
#line 6965 "check_hlds.switch_detection.c"
      }
#line 6967 "check_hlds.switch_detection.c"
      break;
#line 6969 "check_hlds.switch_detection.c"
    }
#line 758 "switch_detection.m"
}

#line 734 "switch_detection.m"
static MR_bool MR_CALL 
check_hlds__switch_detection__expand_sub_disjs_5_p_0(
#line 734 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__1_1,
#line 734 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__2_2,
#line 734 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__3_3,
#line 734 "switch_detection.m"
  MR_Word check_hlds__switch_detection__STATE_VARIABLE_CasesTable_0_4,
#line 734 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__STATE_VARIABLE_CasesTable_5)
#line 734 "switch_detection.m"
{
#line 737 "switch_detection.m"
  while (MR_TRUE)
#line 737 "switch_detection.m"
    {
#line 737 "switch_detection.m"
      /* tailcall optimized into a loop */
#line 737 "switch_detection.m"
      {
#line 737 "switch_detection.m"
        MR_bool check_hlds__switch_detection__succeeded;

#line 737 "switch_detection.m"
        if ((check_hlds__switch_detection__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 737 "switch_detection.m"
          {
#line 737 "switch_detection.m"
            *check_hlds__switch_detection__STATE_VARIABLE_CasesTable_5 = check_hlds__switch_detection__STATE_VARIABLE_CasesTable_0_4;
#line 737 "switch_detection.m"
            check_hlds__switch_detection__succeeded = MR_TRUE;
#line 737 "switch_detection.m"
          }
#line 737 "switch_detection.m"
        else
#line 738 "switch_detection.m"
          {
#line 738 "switch_detection.m"
            MR_Word check_hlds__switch_detection__LeftGoal_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__HeadVar__3_3, (MR_Integer) 0)));
#line 738 "switch_detection.m"
            MR_Word check_hlds__switch_detection__LeftGoals_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__HeadVar__3_3, (MR_Integer) 1)));
#line 738 "switch_detection.m"
            MR_Word check_hlds__switch_detection__STATE_VARIABLE_CasesTable_18_18;
#line 738 "switch_detection.m"
            MR_Word check_hlds__switch_detection__GoalExpr_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__LeftGoal_13, (MR_Integer) 0)));
#line 738 "switch_detection.m"
            MR_Word check_hlds__switch_detection__GoalInfo0_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__LeftGoal_13, (MR_Integer) 1)));
#line 738 "switch_detection.m"
            MR_Word check_hlds__switch_detection__GoalInfo_28;
#line 751 "switch_detection.m"
            MR_Word check_hlds__switch_detection__SubGoals_29;
#line 748 "switch_detection.m"
            MR_Word check_hlds__switch_detection__V_32_32;

#line 747 "switch_detection.m"
            {
#line 747 "switch_detection.m"
              hlds__hlds_goal__goal_info_add_feature_3_p_0((MR_Integer) 13, check_hlds__switch_detection__GoalInfo0_27, &check_hlds__switch_detection__GoalInfo_28);
            }
#line 748 "switch_detection.m"
            check_hlds__switch_detection__succeeded = ((((MR_tag((MR_Word) check_hlds__switch_detection__GoalExpr_26)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__switch_detection__GoalExpr_26, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 748 "switch_detection.m"
            if (check_hlds__switch_detection__succeeded)
#line 748 "switch_detection.m"
              {
#line 748 "switch_detection.m"
                check_hlds__switch_detection__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__switch_detection__GoalExpr_26, (MR_Integer) 1)));
#line 748 "switch_detection.m"
                check_hlds__switch_detection__SubGoals_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__switch_detection__GoalExpr_26, (MR_Integer) 2)));
#line 748 "switch_detection.m"
                check_hlds__switch_detection__succeeded = (check_hlds__switch_detection__V_32_32 == (MR_Integer) 0);
#line 748 "switch_detection.m"
              }
#line 751 "switch_detection.m"
            if (check_hlds__switch_detection__succeeded)
#line 749 "switch_detection.m"
              {
#line 749 "switch_detection.m"
                {
#line 749 "switch_detection.m"
                  check_hlds__switch_detection__succeeded = check_hlds__switch_detection__expand_sub_disj_process_conj_7_p_0(check_hlds__switch_detection__HeadVar__1_1, check_hlds__switch_detection__HeadVar__2_2, check_hlds__switch_detection__SubGoals_29, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__switch_detection__GoalInfo_28, check_hlds__switch_detection__STATE_VARIABLE_CasesTable_0_4, &check_hlds__switch_detection__STATE_VARIABLE_CasesTable_18_18);
                }
#line 749 "switch_detection.m"
              }
#line 751 "switch_detection.m"
            else
#line 754 "switch_detection.m"
              {
#line 754 "switch_detection.m"
                MR_Word check_hlds__switch_detection__V_35_35;
#line 754 "switch_detection.m"
                MR_Word check_hlds__switch_detection__V_36_36;
#line 754 "switch_detection.m"
                MR_Word check_hlds__switch_detection__V_38_38;
#line 751 "switch_detection.m"
                MR_Word check_hlds__switch_detection__V_30_30;

#line 751 "switch_detection.m"
                check_hlds__switch_detection__succeeded = ((((MR_tag((MR_Word) check_hlds__switch_detection__GoalExpr_26)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__switch_detection__GoalExpr_26, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 751 "switch_detection.m"
                if (check_hlds__switch_detection__succeeded)
#line 751 "switch_detection.m"
                  {
#line 751 "switch_detection.m"
                    check_hlds__switch_detection__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__switch_detection__GoalExpr_26, (MR_Integer) 1)));
#line 752 "switch_detection.m"
                    check_hlds__switch_detection__V_38_38 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 752 "switch_detection.m"
                    check_hlds__switch_detection__V_36_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 752 "switch_detection.m"
                    {
#line 752 "switch_detection.m"
                      check_hlds__switch_detection__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 752 "switch_detection.m"
                      MR_hl_field(MR_mktag(1), check_hlds__switch_detection__V_35_35, 0) = ((MR_Box) (check_hlds__switch_detection__LeftGoal_13));
#line 752 "switch_detection.m"
                      MR_hl_field(MR_mktag(1), check_hlds__switch_detection__V_35_35, 1) = ((MR_Box) (check_hlds__switch_detection__V_38_38));
#line 752 "switch_detection.m"
                    }
#line 752 "switch_detection.m"
                    {
#line 752 "switch_detection.m"
                      check_hlds__switch_detection__succeeded = check_hlds__switch_detection__expand_sub_disj_process_conj_7_p_0(check_hlds__switch_detection__HeadVar__1_1, check_hlds__switch_detection__HeadVar__2_2, check_hlds__switch_detection__V_35_35, check_hlds__switch_detection__V_36_36, check_hlds__switch_detection__GoalInfo_28, check_hlds__switch_detection__STATE_VARIABLE_CasesTable_0_4, &check_hlds__switch_detection__STATE_VARIABLE_CasesTable_18_18);
                    }
#line 751 "switch_detection.m"
                  }
#line 754 "switch_detection.m"
              }
#line 738 "switch_detection.m"
            if (check_hlds__switch_detection__succeeded)
#line 740 "switch_detection.m"
              {
#line 740 "switch_detection.m"
                /* direct tailcall eliminated */
#line 740 "switch_detection.m"
                {
#line 740 "switch_detection.m"
                  MR_Word check_hlds__switch_detection__HeadVar__3__tmp_copy_3 = check_hlds__switch_detection__LeftGoals_14;
#line 740 "switch_detection.m"
                  MR_Word check_hlds__switch_detection__STATE_VARIABLE_CasesTable_0__tmp_copy_4 = check_hlds__switch_detection__STATE_VARIABLE_CasesTable_18_18;

#line 740 "switch_detection.m"
                  check_hlds__switch_detection__STATE_VARIABLE_CasesTable_0_4 = check_hlds__switch_detection__STATE_VARIABLE_CasesTable_0__tmp_copy_4;
#line 740 "switch_detection.m"
                  check_hlds__switch_detection__HeadVar__3_3 = check_hlds__switch_detection__HeadVar__3__tmp_copy_3;
#line 740 "switch_detection.m"
                }
#line 740 "switch_detection.m"
                continue;
#line 740 "switch_detection.m"
              }
#line 738 "switch_detection.m"
          }
#line 737 "switch_detection.m"
        return check_hlds__switch_detection__succeeded;
#line 737 "switch_detection.m"
      }
#line 737 "switch_detection.m"
      break;
#line 737 "switch_detection.m"
    }
#line 734 "switch_detection.m"
}

#line 439 "switch_detection.m"
static void MR_CALL 
check_hlds__switch_detection__partition_disj_7_p_0_2(
#line 439 "switch_detection.m"
  MR_Box check_hlds__switch_detection__closure_arg,
#line 439 "switch_detection.m"
  MR_Box check_hlds__switch_detection__wrapper_arg_1,
#line 439 "switch_detection.m"
  MR_Box check_hlds__switch_detection__wrapper_arg_2,
#line 439 "switch_detection.m"
  MR_Box * check_hlds__switch_detection__wrapper_arg_3,
#line 439 "switch_detection.m"
  MR_Box check_hlds__switch_detection__wrapper_arg_4,
#line 439 "switch_detection.m"
  MR_Box * check_hlds__switch_detection__wrapper_arg_5)
#line 439 "switch_detection.m"
{
#line 439 "switch_detection.m"
  {
#line 439 "switch_detection.m"
    MR_Box check_hlds__switch_detection__closure = check_hlds__switch_detection__closure_arg;
#line 439 "switch_detection.m"
    MR_Word check_hlds__switch_detection__conv5_STATE_VARIABLE_Cases_30;
#line 439 "switch_detection.m"
    MR_Word check_hlds__switch_detection__conv4_STATE_VARIABLE_AlreadyHandledConsIds_32;

#line 439 "switch_detection.m"
    {
#line 439 "switch_detection.m"
      check_hlds__switch_detection__convert_case_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__switch_detection__wrapper_arg_1), ((MR_Word) check_hlds__switch_detection__wrapper_arg_2), &check_hlds__switch_detection__conv5_STATE_VARIABLE_Cases_30, ((MR_Word) check_hlds__switch_detection__wrapper_arg_4), &check_hlds__switch_detection__conv4_STATE_VARIABLE_AlreadyHandledConsIds_32);
    }
#line 439 "switch_detection.m"
    *check_hlds__switch_detection__wrapper_arg_3 = ((MR_Box) (check_hlds__switch_detection__conv5_STATE_VARIABLE_Cases_30));
#line 439 "switch_detection.m"
    *check_hlds__switch_detection__wrapper_arg_5 = ((MR_Box) (check_hlds__switch_detection__conv4_STATE_VARIABLE_AlreadyHandledConsIds_32));
#line 439 "switch_detection.m"
  }
#line 439 "switch_detection.m"
}

#line 439 "switch_detection.m"
static void MR_CALL 
check_hlds__switch_detection__partition_disj_7_p_0_1(
#line 439 "switch_detection.m"
  MR_Box check_hlds__switch_detection__closure_arg,
#line 439 "switch_detection.m"
  MR_Box check_hlds__switch_detection__wrapper_arg_1,
#line 439 "switch_detection.m"
  MR_Box check_hlds__switch_detection__wrapper_arg_2,
#line 439 "switch_detection.m"
  MR_Box * check_hlds__switch_detection__wrapper_arg_3,
#line 439 "switch_detection.m"
  MR_Box check_hlds__switch_detection__wrapper_arg_4,
#line 439 "switch_detection.m"
  MR_Box * check_hlds__switch_detection__wrapper_arg_5)
#line 439 "switch_detection.m"
{
#line 439 "switch_detection.m"
  {
#line 439 "switch_detection.m"
    MR_Box check_hlds__switch_detection__closure = check_hlds__switch_detection__closure_arg;
#line 439 "switch_detection.m"
    MR_Word check_hlds__switch_detection__conv1_STATE_VARIABLE_Cases_30;
#line 439 "switch_detection.m"
    MR_Word check_hlds__switch_detection__conv0_STATE_VARIABLE_AlreadyHandledConsIds_32;

#line 439 "switch_detection.m"
    {
#line 439 "switch_detection.m"
      check_hlds__switch_detection__convert_case_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__switch_detection__wrapper_arg_1), ((MR_Word) check_hlds__switch_detection__wrapper_arg_2), &check_hlds__switch_detection__conv1_STATE_VARIABLE_Cases_30, ((MR_Word) check_hlds__switch_detection__wrapper_arg_4), &check_hlds__switch_detection__conv0_STATE_VARIABLE_AlreadyHandledConsIds_32);
    }
#line 439 "switch_detection.m"
    *check_hlds__switch_detection__wrapper_arg_3 = ((MR_Box) (check_hlds__switch_detection__conv1_STATE_VARIABLE_Cases_30));
#line 439 "switch_detection.m"
    *check_hlds__switch_detection__wrapper_arg_5 = ((MR_Box) (check_hlds__switch_detection__conv0_STATE_VARIABLE_AlreadyHandledConsIds_32));
#line 439 "switch_detection.m"
  }
#line 439 "switch_detection.m"
}

#line 702 "switch_detection.m"
static MR_bool MR_CALL 
check_hlds__switch_detection__partition_disj_7_p_0(
#line 702 "switch_detection.m"
  MR_Word check_hlds__switch_detection__Disjuncts0_8,
#line 702 "switch_detection.m"
  MR_Word check_hlds__switch_detection__Var_9,
#line 702 "switch_detection.m"
  MR_Word check_hlds__switch_detection__GoalInfo_10,
#line 702 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__Left_11,
#line 702 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__Cases_12,
#line 702 "switch_detection.m"
  MR_Word check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_0_21,
#line 702 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_22)
#line 702 "switch_detection.m"
{
#line 706 "switch_detection.m"
  {
#line 706 "switch_detection.m"
    MR_bool check_hlds__switch_detection__succeeded;
#line 706 "switch_detection.m"
    MR_Word check_hlds__switch_detection__TypeCtorInfo_39_39 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0;
#line 706 "switch_detection.m"
    MR_Word check_hlds__switch_detection__CasesTable0_14;
#line 706 "switch_detection.m"
    MR_Word check_hlds__switch_detection__Left1_15;
#line 706 "switch_detection.m"
    MR_Word check_hlds__switch_detection__CasesTable1_16;
#line 706 "switch_detection.m"
    MR_Word check_hlds__switch_detection__V_23_23;
#line 706 "switch_detection.m"
    MR_Word check_hlds__switch_detection__V_24_24;

#line 707 "switch_detection.m"
    {
#line 707 "switch_detection.m"
      check_hlds__switch_detection__V_23_23 = mercury__map__init_0_f_0(check_hlds__switch_detection__TypeCtorInfo_39_39, (MR_Word) &check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_cons_id_entry_0);
    }
#line 707 "switch_detection.m"
    {
#line 707 "switch_detection.m"
      check_hlds__switch_detection__V_24_24 = mercury__set_tree234__init_0_f_0(check_hlds__switch_detection__TypeCtorInfo_39_39);
    }
#line 707 "switch_detection.m"
    {
#line 707 "switch_detection.m"
      check_hlds__switch_detection__CasesTable0_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 707 "switch_detection.m"
      MR_hl_field(MR_mktag(0), check_hlds__switch_detection__CasesTable0_14, 0) = ((MR_Box) (check_hlds__switch_detection__V_23_23));
#line 707 "switch_detection.m"
      MR_hl_field(MR_mktag(0), check_hlds__switch_detection__CasesTable0_14, 1) = ((MR_Box) (check_hlds__switch_detection__V_24_24));
#line 707 "switch_detection.m"
    }
#line 708 "switch_detection.m"
    {
#line 708 "switch_detection.m"
      check_hlds__switch_detection__partition_disj_trial_6_p_0(check_hlds__switch_detection__Disjuncts0_8, check_hlds__switch_detection__Var_9, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__switch_detection__Left1_15, check_hlds__switch_detection__CasesTable0_14, &check_hlds__switch_detection__CasesTable1_16);
    }
#line 715 "switch_detection.m"
    if ((check_hlds__switch_detection__Left1_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 710 "switch_detection.m"
      {
#line 710 "switch_detection.m"
        MR_Word check_hlds__switch_detection__TypeCtorInfo_15_56;
#line 710 "switch_detection.m"
        MR_Word check_hlds__switch_detection__TypeCtorInfo_16_57;
#line 710 "switch_detection.m"
        MR_Word check_hlds__switch_detection__TypeInfo_22_63;
#line 710 "switch_detection.m"
        MR_Word check_hlds__switch_detection__TypeInfo_23_64;
#line 710 "switch_detection.m"
        MR_Word check_hlds__switch_detection__TypeInfo_24_65;
#line 710 "switch_detection.m"
        MR_Word check_hlds__switch_detection__TypeCtorInfo_25_66;
#line 710 "switch_detection.m"
        MR_Integer check_hlds__switch_detection__V_30_30;
#line 710 "switch_detection.m"
        MR_Word check_hlds__switch_detection__CasesMap_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__CasesTable1_16, (MR_Integer) 0)));
#line 710 "switch_detection.m"
        MR_Word check_hlds__switch_detection__CasesMap_48;
#line 710 "switch_detection.m"
        MR_Word check_hlds__switch_detection__ConflictIds_49;
#line 710 "switch_detection.m"
        MR_Word check_hlds__switch_detection__CasesAssocList_50;
#line 710 "switch_detection.m"
        MR_Word check_hlds__switch_detection__Cases_51;
#line 710 "switch_detection.m"
        MR_Word check_hlds__switch_detection__V_53_53;
#line 710 "switch_detection.m"
        MR_Word check_hlds__switch_detection__V_54_54;
#line 710 "switch_detection.m"
        MR_Word check_hlds__switch_detection__V_55_55;
#line 524 "switch_detection.m"
        MR_Word check_hlds__switch_detection__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__CasesTable1_16, (MR_Integer) 1)));
#line 439 "switch_detection.m"
        MR_Word check_hlds__switch_detection___AlreadyHandledConsIds_52;
#line 439 "switch_detection.m"
        MR_Box check_hlds__switch_detection__conv3_Cases_51;
#line 439 "switch_detection.m"
        MR_Box check_hlds__switch_detection__conv2__AlreadyHandledConsIds_52;

#line 524 "switch_detection.m"
        {
#line 524 "switch_detection.m"
          check_hlds__switch_detection__V_30_30 = mercury__map__count_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_cons_id_entry_0, check_hlds__switch_detection__CasesMap_41);
        }
#line 712 "switch_detection.m"
        check_hlds__switch_detection__succeeded = (check_hlds__switch_detection__V_30_30 >= (MR_Integer) 1);
#line 710 "switch_detection.m"
        if (check_hlds__switch_detection__succeeded)
#line 710 "switch_detection.m"
          {
#line 713 "switch_detection.m"
            *check_hlds__switch_detection__Left_11 = check_hlds__switch_detection__Left1_15;
#line 437 "switch_detection.m"
            check_hlds__switch_detection__CasesMap_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__CasesTable1_16, (MR_Integer) 0)));
#line 437 "switch_detection.m"
            check_hlds__switch_detection__ConflictIds_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__CasesTable1_16, (MR_Integer) 1)));
#line 7342 "check_hlds.switch_detection.c"
            check_hlds__switch_detection__TypeCtorInfo_15_56 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0;
#line 7344 "check_hlds.switch_detection.c"
            check_hlds__switch_detection__TypeCtorInfo_16_57 = (MR_Word) &check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_cons_id_entry_0;
#line 438 "switch_detection.m"
            {
#line 438 "switch_detection.m"
              mercury__map__to_assoc_list_2_p_0(check_hlds__switch_detection__TypeCtorInfo_15_56, check_hlds__switch_detection__TypeCtorInfo_16_57, check_hlds__switch_detection__CasesMap_48, &check_hlds__switch_detection__CasesAssocList_50);
            }
#line 439 "switch_detection.m"
            check_hlds__switch_detection__V_54_54 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 439 "switch_detection.m"
            {
#line 439 "switch_detection.m"
              check_hlds__switch_detection__V_53_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 439 "switch_detection.m"
              MR_hl_field(MR_mktag(0), check_hlds__switch_detection__V_53_53, 0) = ((MR_Box) (&check_hlds__switch_detection_scalar_common_3[0]));
#line 439 "switch_detection.m"
              MR_hl_field(MR_mktag(0), check_hlds__switch_detection__V_53_53, 1) = ((MR_Box) (check_hlds__switch_detection__partition_disj_7_p_0_1));
#line 439 "switch_detection.m"
              MR_hl_field(MR_mktag(0), check_hlds__switch_detection__V_53_53, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 439 "switch_detection.m"
              MR_hl_field(MR_mktag(0), check_hlds__switch_detection__V_53_53, 3) = ((MR_Box) (check_hlds__switch_detection__GoalInfo_10));
#line 439 "switch_detection.m"
              MR_hl_field(MR_mktag(0), check_hlds__switch_detection__V_53_53, 4) = ((MR_Box) (check_hlds__switch_detection__ConflictIds_49));
#line 439 "switch_detection.m"
            }
#line 440 "switch_detection.m"
            {
#line 440 "switch_detection.m"
              check_hlds__switch_detection__V_55_55 = mercury__set_tree234__init_0_f_0(check_hlds__switch_detection__TypeCtorInfo_15_56);
            }
#line 7374 "check_hlds.switch_detection.c"
            check_hlds__switch_detection__TypeInfo_22_63 = (MR_Word) &check_hlds__switch_detection_scalar_common_2[0];
#line 7376 "check_hlds.switch_detection.c"
            check_hlds__switch_detection__TypeInfo_23_64 = (MR_Word) &check_hlds__switch_detection_scalar_common_1[2];
#line 7378 "check_hlds.switch_detection.c"
            check_hlds__switch_detection__TypeInfo_24_65 = (MR_Word) &check_hlds__switch_detection_scalar_common_1[3];
#line 439 "switch_detection.m"
            {
#line 439 "switch_detection.m"
              mercury__list__foldl2_6_p_0(check_hlds__switch_detection__TypeInfo_22_63, check_hlds__switch_detection__TypeInfo_23_64, check_hlds__switch_detection__TypeInfo_24_65, check_hlds__switch_detection__V_53_53, check_hlds__switch_detection__CasesAssocList_50, ((MR_Box) (check_hlds__switch_detection__V_54_54)), &check_hlds__switch_detection__conv3_Cases_51, ((MR_Box) (check_hlds__switch_detection__V_55_55)), &check_hlds__switch_detection__conv2__AlreadyHandledConsIds_52);
            }
#line 439 "switch_detection.m"
            check_hlds__switch_detection__Cases_51 = ((MR_Word) check_hlds__switch_detection__conv3_Cases_51);
#line 439 "switch_detection.m"
            check_hlds__switch_detection___AlreadyHandledConsIds_52 = ((MR_Word) check_hlds__switch_detection__conv2__AlreadyHandledConsIds_52);
#line 7389 "check_hlds.switch_detection.c"
            check_hlds__switch_detection__TypeCtorInfo_25_66 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0;
#line 441 "switch_detection.m"
            {
#line 441 "switch_detection.m"
              mercury__list__sort_2_p_0(check_hlds__switch_detection__TypeCtorInfo_25_66, check_hlds__switch_detection__Cases_51, check_hlds__switch_detection__Cases_12);
            }
#line 714 "switch_detection.m"
            *check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_22 = check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_0_21;
#line 714 "switch_detection.m"
            check_hlds__switch_detection__succeeded = MR_TRUE;
#line 710 "switch_detection.m"
          }
#line 710 "switch_detection.m"
      }
#line 715 "switch_detection.m"
    else
#line 716 "switch_detection.m"
      {
#line 716 "switch_detection.m"
        MR_Word check_hlds__switch_detection__AllowMulti_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_0_21, (MR_Integer) 1)));
#line 720 "switch_detection.m"
        MR_Word check_hlds__switch_detection__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_0_21, (MR_Integer) 0)));
#line 720 "switch_detection.m"
        MR_Word check_hlds__switch_detection__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_0_21, (MR_Integer) 2)));
#line 720 "switch_detection.m"
        MR_Word check_hlds__switch_detection__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_0_21, (MR_Integer) 3)));
#line 726 "switch_detection.m"
        MR_Word check_hlds__switch_detection__CasesTable_20;

#line 721 "switch_detection.m"
        {
#line 721 "switch_detection.m"
          check_hlds__switch_detection__succeeded = check_hlds__switch_detection__expand_sub_disjs_5_p_0(check_hlds__switch_detection__AllowMulti_19, check_hlds__switch_detection__Var_9, check_hlds__switch_detection__Left1_15, check_hlds__switch_detection__CasesTable1_16, &check_hlds__switch_detection__CasesTable_20);
        }
#line 726 "switch_detection.m"
        if (check_hlds__switch_detection__succeeded)
#line 722 "switch_detection.m"
          {
#line 722 "switch_detection.m"
            MR_Word check_hlds__switch_detection__TypeCtorInfo_15_82;
#line 722 "switch_detection.m"
            MR_Word check_hlds__switch_detection__TypeCtorInfo_16_83;
#line 722 "switch_detection.m"
            MR_Word check_hlds__switch_detection__TypeInfo_22_89;
#line 722 "switch_detection.m"
            MR_Word check_hlds__switch_detection__TypeInfo_23_90;
#line 722 "switch_detection.m"
            MR_Word check_hlds__switch_detection__TypeInfo_24_91;
#line 722 "switch_detection.m"
            MR_Word check_hlds__switch_detection__TypeCtorInfo_25_92;
#line 722 "switch_detection.m"
            MR_Integer check_hlds__switch_detection__V_26_26;
#line 722 "switch_detection.m"
            MR_Word check_hlds__switch_detection__V_29_29;
#line 722 "switch_detection.m"
            MR_Word check_hlds__switch_detection__CasesMap_67;
#line 722 "switch_detection.m"
            MR_Word check_hlds__switch_detection__CasesMap_74;
#line 722 "switch_detection.m"
            MR_Word check_hlds__switch_detection__ConflictIds_75;
#line 722 "switch_detection.m"
            MR_Word check_hlds__switch_detection__CasesAssocList_76;
#line 722 "switch_detection.m"
            MR_Word check_hlds__switch_detection__Cases_77;
#line 722 "switch_detection.m"
            MR_Word check_hlds__switch_detection__V_79_79;
#line 722 "switch_detection.m"
            MR_Word check_hlds__switch_detection__V_80_80;
#line 722 "switch_detection.m"
            MR_Word check_hlds__switch_detection__V_81_81;
#line 524 "switch_detection.m"
            MR_Word check_hlds__switch_detection__V_68_68;
#line 439 "switch_detection.m"
            MR_Word check_hlds__switch_detection___AlreadyHandledConsIds_78;
#line 439 "switch_detection.m"
            MR_Box check_hlds__switch_detection__conv7_Cases_77;
#line 439 "switch_detection.m"
            MR_Box check_hlds__switch_detection__conv6__AlreadyHandledConsIds_78;
#line 725 "switch_detection.m"
            MR_Word check_hlds__switch_detection__V_35_35;
#line 725 "switch_detection.m"
            MR_Word check_hlds__switch_detection__V_36_36;
#line 725 "switch_detection.m"
            MR_Word check_hlds__switch_detection__V_37_37;
#line 725 "switch_detection.m"
            MR_Word check_hlds__switch_detection__V_38_38;

#line 722 "switch_detection.m"
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
#line 723 "switch_detection.m"
            check_hlds__switch_detection__succeeded = (check_hlds__switch_detection__V_26_26 >= (MR_Integer) 1);
#line 722 "switch_detection.m"
            if (check_hlds__switch_detection__succeeded)
#line 722 "switch_detection.m"
              {
#line 437 "switch_detection.m"
                check_hlds__switch_detection__CasesMap_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__CasesTable_20, (MR_Integer) 0)));
#line 437 "switch_detection.m"
                check_hlds__switch_detection__ConflictIds_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__CasesTable_20, (MR_Integer) 1)));
#line 7498 "check_hlds.switch_detection.c"
                check_hlds__switch_detection__TypeCtorInfo_15_82 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0;
#line 7500 "check_hlds.switch_detection.c"
                check_hlds__switch_detection__TypeCtorInfo_16_83 = (MR_Word) &check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_cons_id_entry_0;
#line 438 "switch_detection.m"
                {
#line 438 "switch_detection.m"
                  mercury__map__to_assoc_list_2_p_0(check_hlds__switch_detection__TypeCtorInfo_15_82, check_hlds__switch_detection__TypeCtorInfo_16_83, check_hlds__switch_detection__CasesMap_74, &check_hlds__switch_detection__CasesAssocList_76);
                }
#line 439 "switch_detection.m"
                check_hlds__switch_detection__V_80_80 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 439 "switch_detection.m"
                {
#line 439 "switch_detection.m"
                  check_hlds__switch_detection__V_79_79 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 439 "switch_detection.m"
                  MR_hl_field(MR_mktag(0), check_hlds__switch_detection__V_79_79, 0) = ((MR_Box) (&check_hlds__switch_detection_scalar_common_3[0]));
#line 439 "switch_detection.m"
                  MR_hl_field(MR_mktag(0), check_hlds__switch_detection__V_79_79, 1) = ((MR_Box) (check_hlds__switch_detection__partition_disj_7_p_0_2));
#line 439 "switch_detection.m"
                  MR_hl_field(MR_mktag(0), check_hlds__switch_detection__V_79_79, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 439 "switch_detection.m"
                  MR_hl_field(MR_mktag(0), check_hlds__switch_detection__V_79_79, 3) = ((MR_Box) (check_hlds__switch_detection__GoalInfo_10));
#line 439 "switch_detection.m"
                  MR_hl_field(MR_mktag(0), check_hlds__switch_detection__V_79_79, 4) = ((MR_Box) (check_hlds__switch_detection__ConflictIds_75));
#line 439 "switch_detection.m"
                }
#line 440 "switch_detection.m"
                {
#line 440 "switch_detection.m"
                  check_hlds__switch_detection__V_81_81 = mercury__set_tree234__init_0_f_0(check_hlds__switch_detection__TypeCtorInfo_15_82);
                }
#line 7530 "check_hlds.switch_detection.c"
                check_hlds__switch_detection__TypeInfo_22_89 = (MR_Word) &check_hlds__switch_detection_scalar_common_2[0];
#line 7532 "check_hlds.switch_detection.c"
                check_hlds__switch_detection__TypeInfo_23_90 = (MR_Word) &check_hlds__switch_detection_scalar_common_1[2];
#line 7534 "check_hlds.switch_detection.c"
                check_hlds__switch_detection__TypeInfo_24_91 = (MR_Word) &check_hlds__switch_detection_scalar_common_1[3];
#line 439 "switch_detection.m"
                {
#line 439 "switch_detection.m"
                  mercury__list__foldl2_6_p_0(check_hlds__switch_detection__TypeInfo_22_89, check_hlds__switch_detection__TypeInfo_23_90, check_hlds__switch_detection__TypeInfo_24_91, check_hlds__switch_detection__V_79_79, check_hlds__switch_detection__CasesAssocList_76, ((MR_Box) (check_hlds__switch_detection__V_80_80)), &check_hlds__switch_detection__conv7_Cases_77, ((MR_Box) (check_hlds__switch_detection__V_81_81)), &check_hlds__switch_detection__conv6__AlreadyHandledConsIds_78);
                }
#line 439 "switch_detection.m"
                check_hlds__switch_detection__Cases_77 = ((MR_Word) check_hlds__switch_detection__conv7_Cases_77);
#line 439 "switch_detection.m"
                check_hlds__switch_detection___AlreadyHandledConsIds_78 = ((MR_Word) check_hlds__switch_detection__conv6__AlreadyHandledConsIds_78);
#line 7545 "check_hlds.switch_detection.c"
                check_hlds__switch_detection__TypeCtorInfo_25_92 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0;
#line 441 "switch_detection.m"
                {
#line 441 "switch_detection.m"
                  mercury__list__sort_2_p_0(check_hlds__switch_detection__TypeCtorInfo_25_92, check_hlds__switch_detection__Cases_77, check_hlds__switch_detection__Cases_12);
                }
#line 725 "switch_detection.m"
                check_hlds__switch_detection__V_29_29 = (MR_Integer) 0;
#line 725 "switch_detection.m"
                check_hlds__switch_detection__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_0_21, (MR_Integer) 0)));
#line 725 "switch_detection.m"
                check_hlds__switch_detection__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_0_21, (MR_Integer) 1)));
#line 725 "switch_detection.m"
                check_hlds__switch_detection__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_0_21, (MR_Integer) 2)));
#line 725 "switch_detection.m"
                check_hlds__switch_detection__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_0_21, (MR_Integer) 3)));
#line 725 "switch_detection.m"
                {
#line 725 "switch_detection.m"
                  MR_Word base;
#line 725 "switch_detection.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 725 "switch_detection.m"
                  *check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_22 = base;
#line 725 "switch_detection.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__switch_detection__V_35_35));
#line 725 "switch_detection.m"
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__switch_detection__V_36_36));
#line 725 "switch_detection.m"
                  MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__switch_detection__V_37_37));
#line 725 "switch_detection.m"
                  MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__switch_detection__V_29_29));
#line 725 "switch_detection.m"
                }
#line 725 "switch_detection.m"
                check_hlds__switch_detection__succeeded = MR_TRUE;
#line 722 "switch_detection.m"
              }
#line 722 "switch_detection.m"
          }
#line 726 "switch_detection.m"
        else
#line 727 "switch_detection.m"
          {
#line 727 "switch_detection.m"
            *check_hlds__switch_detection__Left_11 = check_hlds__switch_detection__Left1_15;
#line 728 "switch_detection.m"
            {
#line 728 "switch_detection.m"
              *check_hlds__switch_detection__Cases_12 = check_hlds__switch_detection__convert_cases_table_2_f_0(check_hlds__switch_detection__GoalInfo_10, check_hlds__switch_detection__CasesTable1_16);
            }
#line 728 "switch_detection.m"
            *check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_22 = check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_0_21;
#line 727 "switch_detection.m"
            check_hlds__switch_detection__succeeded = MR_TRUE;
#line 727 "switch_detection.m"
          }
#line 716 "switch_detection.m"
      }
#line 706 "switch_detection.m"
    return check_hlds__switch_detection__succeeded;
#line 706 "switch_detection.m"
  }
#line 702 "switch_detection.m"
}

#line 670 "switch_detection.m"
static void MR_CALL 
check_hlds__switch_detection__select_best_switch_3_p_0(
#line 670 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__1_1,
#line 670 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__2_2,
#line 670 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__BestAgain_3)
#line 670 "switch_detection.m"
{
#line 672 "switch_detection.m"
  while (MR_TRUE)
#line 672 "switch_detection.m"
    {
#line 672 "switch_detection.m"
      /* tailcall optimized into a loop */
#line 672 "switch_detection.m"
      {
#line 672 "switch_detection.m"
        MR_bool check_hlds__switch_detection__succeeded;

#line 672 "switch_detection.m"
        if ((check_hlds__switch_detection__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 672 "switch_detection.m"
          *check_hlds__switch_detection__BestAgain_3 = check_hlds__switch_detection__HeadVar__2_2;
#line 672 "switch_detection.m"
        else
#line 673 "switch_detection.m"
          {
#line 673 "switch_detection.m"
            MR_Word check_hlds__switch_detection__Again_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__HeadVar__1_1, (MR_Integer) 0)));
#line 673 "switch_detection.m"
            MR_Word check_hlds__switch_detection__AgainList_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__HeadVar__1_1, (MR_Integer) 1)));
#line 673 "switch_detection.m"
            MR_Word check_hlds__switch_detection__BestAgain1_17;
#line 675 "switch_detection.m"
            MR_Word check_hlds__switch_detection__TypeCtorInfo_18_18 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0;
#line 675 "switch_detection.m"
            MR_Word check_hlds__switch_detection__CasesList_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__Again_5, (MR_Integer) 2)));
#line 675 "switch_detection.m"
            MR_Word check_hlds__switch_detection__BestCasesList_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__HeadVar__2_2, (MR_Integer) 2)));
#line 675 "switch_detection.m"
            MR_Integer check_hlds__switch_detection__Length_15;
#line 675 "switch_detection.m"
            MR_Integer check_hlds__switch_detection__BestLength_16;
#line 675 "switch_detection.m"
            MR_Word check_hlds__switch_detection__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__Again_5, (MR_Integer) 0)));
#line 675 "switch_detection.m"
            MR_Word check_hlds__switch_detection__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__Again_5, (MR_Integer) 1)));
#line 676 "switch_detection.m"
            MR_Word check_hlds__switch_detection__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__HeadVar__2_2, (MR_Integer) 0)));
#line 676 "switch_detection.m"
            MR_Word check_hlds__switch_detection__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__HeadVar__2_2, (MR_Integer) 1)));

#line 677 "switch_detection.m"
            {
#line 677 "switch_detection.m"
              mercury__list__length_2_p_0(check_hlds__switch_detection__TypeCtorInfo_18_18, check_hlds__switch_detection__CasesList_11, &check_hlds__switch_detection__Length_15);
            }
#line 678 "switch_detection.m"
            {
#line 678 "switch_detection.m"
              mercury__list__length_2_p_0(check_hlds__switch_detection__TypeCtorInfo_18_18, check_hlds__switch_detection__BestCasesList_14, &check_hlds__switch_detection__BestLength_16);
            }
#line 679 "switch_detection.m"
            check_hlds__switch_detection__succeeded = (check_hlds__switch_detection__Length_15 < check_hlds__switch_detection__BestLength_16);
#line 682 "switch_detection.m"
            if (check_hlds__switch_detection__succeeded)
#line 681 "switch_detection.m"
              check_hlds__switch_detection__BestAgain1_17 = check_hlds__switch_detection__HeadVar__2_2;
#line 682 "switch_detection.m"
            else
#line 683 "switch_detection.m"
              check_hlds__switch_detection__BestAgain1_17 = check_hlds__switch_detection__Again_5;
#line 685 "switch_detection.m"
            /* direct tailcall eliminated */
#line 685 "switch_detection.m"
            {
#line 685 "switch_detection.m"
              MR_Word check_hlds__switch_detection__HeadVar__1__tmp_copy_1 = check_hlds__switch_detection__AgainList_6;
#line 685 "switch_detection.m"
              MR_Word check_hlds__switch_detection__HeadVar__2__tmp_copy_2 = check_hlds__switch_detection__BestAgain1_17;

#line 685 "switch_detection.m"
              check_hlds__switch_detection__HeadVar__2_2 = check_hlds__switch_detection__HeadVar__2__tmp_copy_2;
#line 685 "switch_detection.m"
              check_hlds__switch_detection__HeadVar__1_1 = check_hlds__switch_detection__HeadVar__1__tmp_copy_1;
#line 685 "switch_detection.m"
            }
#line 685 "switch_detection.m"
            continue;
#line 673 "switch_detection.m"
          }
#line 672 "switch_detection.m"
      }
#line 672 "switch_detection.m"
      break;
#line 672 "switch_detection.m"
    }
#line 670 "switch_detection.m"
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
#line 655 "switch_detection.m"
          {
#line 655 "switch_detection.m"
            MR_Word check_hlds__switch_detection__Disjuncts_48;

#line 659 "switch_detection.m"
            if ((check_hlds__switch_detection__AgainList0_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 658 "switch_detection.m"
              {
#line 658 "switch_detection.m"
                check_hlds__switch_detection__detect_sub_switches_in_disj_5_p_0(check_hlds__switch_detection__InstMap_5, check_hlds__switch_detection__Disjuncts0_3, &check_hlds__switch_detection__Disjuncts_48, check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_0_8, check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_9);
              }
#line 659 "switch_detection.m"
            else
#line 660 "switch_detection.m"
              {
#line 660 "switch_detection.m"
                MR_Word check_hlds__switch_detection__Again_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__AgainList0_6, (MR_Integer) 0)));
#line 660 "switch_detection.m"
                MR_Word check_hlds__switch_detection__AgainList1_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__AgainList0_6, (MR_Integer) 1)));
#line 660 "switch_detection.m"
                MR_Word check_hlds__switch_detection__BestAgain_52;
#line 660 "switch_detection.m"
                MR_Word check_hlds__switch_detection__Var_53;
#line 660 "switch_detection.m"
                MR_Word check_hlds__switch_detection__Left0_54;
#line 660 "switch_detection.m"
                MR_Word check_hlds__switch_detection__CasesList_55;
#line 660 "switch_detection.m"
                MR_Word check_hlds__switch_detection__SwitchGoalExpr_56;
#line 660 "switch_detection.m"
                MR_Word check_hlds__switch_detection__Left_57;
#line 660 "switch_detection.m"
                MR_Word check_hlds__switch_detection__LeftList_58;
#line 660 "switch_detection.m"
                MR_Word check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_61_61;
#line 660 "switch_detection.m"
                MR_Word check_hlds__switch_detection__V_65_65;
#line 660 "switch_detection.m"
                MR_Word check_hlds__switch_detection__V_66_66;

#line 661 "switch_detection.m"
                {
#line 661 "switch_detection.m"
                  check_hlds__switch_detection__select_best_switch_3_p_0(check_hlds__switch_detection__AgainList1_51, check_hlds__switch_detection__Again_50, &check_hlds__switch_detection__BestAgain_52);
                }
#line 662 "switch_detection.m"
                check_hlds__switch_detection__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__BestAgain_52, (MR_Integer) 0)));
#line 662 "switch_detection.m"
                check_hlds__switch_detection__Left0_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__BestAgain_52, (MR_Integer) 1)));
#line 662 "switch_detection.m"
                check_hlds__switch_detection__CasesList_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__BestAgain_52, (MR_Integer) 2)));
#line 663 "switch_detection.m"
                {
#line 663 "switch_detection.m"
                  check_hlds__switch_detection__cases_to_switch_6_p_0(check_hlds__switch_detection__Var_53, check_hlds__switch_detection__CasesList_55, check_hlds__switch_detection__InstMap_5, &check_hlds__switch_detection__SwitchGoalExpr_56, check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_0_8, &check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_61_61);
                }
#line 664 "switch_detection.m"
                {
#line 664 "switch_detection.m"
                  check_hlds__switch_detection__detect_switches_in_disj_9_p_0(check_hlds__switch_detection__GoalInfo_1, check_hlds__switch_detection__AllVars_2, check_hlds__switch_detection__Left0_54, check_hlds__switch_detection__AllVars_2, check_hlds__switch_detection__InstMap_5, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__switch_detection__Left_57, check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_61_61, check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_9);
                }
#line 666 "switch_detection.m"
                {
#line 666 "switch_detection.m"
                  check_hlds__switch_detection__V_65_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 666 "switch_detection.m"
                  MR_hl_field(MR_mktag(0), check_hlds__switch_detection__V_65_65, 0) = ((MR_Box) (check_hlds__switch_detection__Left_57));
#line 666 "switch_detection.m"
                  MR_hl_field(MR_mktag(0), check_hlds__switch_detection__V_65_65, 1) = ((MR_Box) (check_hlds__switch_detection__GoalInfo_1));
#line 666 "switch_detection.m"
                }
#line 666 "switch_detection.m"
                {
#line 666 "switch_detection.m"
                  hlds__hlds_goal__goal_to_disj_list_2_p_0(check_hlds__switch_detection__V_65_65, &check_hlds__switch_detection__LeftList_58);
                }
#line 667 "switch_detection.m"
                {
#line 667 "switch_detection.m"
                  check_hlds__switch_detection__V_66_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 667 "switch_detection.m"
                  MR_hl_field(MR_mktag(0), check_hlds__switch_detection__V_66_66, 0) = ((MR_Box) (check_hlds__switch_detection__SwitchGoalExpr_56));
#line 667 "switch_detection.m"
                  MR_hl_field(MR_mktag(0), check_hlds__switch_detection__V_66_66, 1) = ((MR_Box) (check_hlds__switch_detection__GoalInfo_1));
#line 667 "switch_detection.m"
                }
#line 667 "switch_detection.m"
                {
#line 667 "switch_detection.m"
                  check_hlds__switch_detection__Disjuncts_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 667 "switch_detection.m"
                  MR_hl_field(MR_mktag(1), check_hlds__switch_detection__Disjuncts_48, 0) = ((MR_Box) (check_hlds__switch_detection__V_66_66));
#line 667 "switch_detection.m"
                  MR_hl_field(MR_mktag(1), check_hlds__switch_detection__Disjuncts_48, 1) = ((MR_Box) (check_hlds__switch_detection__LeftList_58));
#line 667 "switch_detection.m"
                }
#line 660 "switch_detection.m"
              }
#line 655 "switch_detection.m"
            {
#line 655 "switch_detection.m"
              MR_Word base;
#line 655 "switch_detection.m"
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 655 "switch_detection.m"
              *check_hlds__switch_detection__HeadVar__7_7 = base;
#line 655 "switch_detection.m"
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 655 "switch_detection.m"
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__switch_detection__Disjuncts_48));
#line 655 "switch_detection.m"
            }
#line 655 "switch_detection.m"
          }
#line 611 "switch_detection.m"
        else
#line 611 "switch_detection.m"
          {
#line 611 "switch_detection.m"
            MR_Word check_hlds__switch_detection__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__HeadVar__4_4, (MR_Integer) 0)));
#line 611 "switch_detection.m"
            MR_Word check_hlds__switch_detection__Vars_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__HeadVar__4_4, (MR_Integer) 1)));
#line 650 "switch_detection.m"
            MR_Word check_hlds__switch_detection__Left_21;
#line 650 "switch_detection.m"
            MR_Word check_hlds__switch_detection__CasesList_22;
#line 650 "switch_detection.m"
            MR_Word check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_35_35;
#line 614 "switch_detection.m"
            MR_Word check_hlds__switch_detection__VarInst0_19;
#line 614 "switch_detection.m"
            MR_Word check_hlds__switch_detection__ModuleInfo_20;
#line 615 "switch_detection.m"
            MR_Word check_hlds__switch_detection__V_68_68;
#line 615 "switch_detection.m"
            MR_Word check_hlds__switch_detection__V_69_69;
#line 615 "switch_detection.m"
            MR_Word check_hlds__switch_detection__V_70_70;

#line 614 "switch_detection.m"
            {
#line 614 "switch_detection.m"
              hlds__instmap__instmap_lookup_var_3_p_0(check_hlds__switch_detection__InstMap_5, check_hlds__switch_detection__Var_13, &check_hlds__switch_detection__VarInst0_19);
            }
#line 615 "switch_detection.m"
            check_hlds__switch_detection__ModuleInfo_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_0_8, (MR_Integer) 0)));
#line 615 "switch_detection.m"
            check_hlds__switch_detection__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_0_8, (MR_Integer) 1)));
#line 615 "switch_detection.m"
            check_hlds__switch_detection__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_0_8, (MR_Integer) 2)));
#line 615 "switch_detection.m"
            check_hlds__switch_detection__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_0_8, (MR_Integer) 3)));
#line 616 "switch_detection.m"
            {
#line 616 "switch_detection.m"
              check_hlds__switch_detection__succeeded = check_hlds__inst_match__inst_is_bound_2_p_0(check_hlds__switch_detection__ModuleInfo_20, check_hlds__switch_detection__VarInst0_19);
            }
#line 614 "switch_detection.m"
            if (check_hlds__switch_detection__succeeded)
#line 617 "switch_detection.m"
              {
#line 617 "switch_detection.m"
                check_hlds__switch_detection__succeeded = check_hlds__switch_detection__partition_disj_7_p_0(check_hlds__switch_detection__Disjuncts0_3, check_hlds__switch_detection__Var_13, check_hlds__switch_detection__GoalInfo_1, &check_hlds__switch_detection__Left_21, &check_hlds__switch_detection__CasesList_22, check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_0_8, &check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_35_35);
              }
#line 650 "switch_detection.m"
            if (check_hlds__switch_detection__succeeded)
#line 636 "switch_detection.m"
              if ((check_hlds__switch_detection__Left_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 631 "switch_detection.m"
                {
#line 629 "switch_detection.m"
                  MR_Word check_hlds__switch_detection__V_39_39;
#line 629 "switch_detection.m"
                  MR_Word check_hlds__switch_detection__V_23_23;
#line 629 "switch_detection.m"
                  MR_Word check_hlds__switch_detection__V_24_24;
#line 629 "switch_detection.m"
                  MR_Word check_hlds__switch_detection__V_25_25;

#line 629 "switch_detection.m"
                  check_hlds__switch_detection__succeeded = ((MR_tag((MR_Word) check_hlds__switch_detection__CasesList_22)) == (MR_mktag((MR_Integer) 1)));
#line 629 "switch_detection.m"
                  if (check_hlds__switch_detection__succeeded)
#line 629 "switch_detection.m"
                    {
#line 629 "switch_detection.m"
                      check_hlds__switch_detection__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__CasesList_22, (MR_Integer) 0)));
#line 629 "switch_detection.m"
                      check_hlds__switch_detection__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__CasesList_22, (MR_Integer) 1)));
#line 629 "switch_detection.m"
                      check_hlds__switch_detection__succeeded = ((MR_tag((MR_Word) check_hlds__switch_detection__V_39_39)) == (MR_mktag((MR_Integer) 1)));
#line 629 "switch_detection.m"
                      if (check_hlds__switch_detection__succeeded)
#line 629 "switch_detection.m"
                        {
#line 629 "switch_detection.m"
                          check_hlds__switch_detection__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__V_39_39, (MR_Integer) 0)));
#line 629 "switch_detection.m"
                          check_hlds__switch_detection__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__V_39_39, (MR_Integer) 1)));
#line 629 "switch_detection.m"
                        }
#line 629 "switch_detection.m"
                    }
#line 631 "switch_detection.m"
                  if (check_hlds__switch_detection__succeeded)
#line 630 "switch_detection.m"
                    {
#line 630 "switch_detection.m"
                      check_hlds__switch_detection__cases_to_switch_6_p_0(check_hlds__switch_detection__Var_13, check_hlds__switch_detection__CasesList_22, check_hlds__switch_detection__InstMap_5, check_hlds__switch_detection__HeadVar__7_7, check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_35_35, check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_9);
#line 630 "switch_detection.m"
                      return;
                    }
#line 631 "switch_detection.m"
                  else
#line 633 "switch_detection.m"
                    {
#line 633 "switch_detection.m"
                      MR_Word check_hlds__switch_detection__Disjuncts_26;

#line 632 "switch_detection.m"
                      {
#line 632 "switch_detection.m"
                        check_hlds__switch_detection__detect_sub_switches_in_disj_5_p_0(check_hlds__switch_detection__InstMap_5, check_hlds__switch_detection__Disjuncts0_3, &check_hlds__switch_detection__Disjuncts_26, check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_35_35, check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_9);
                      }
#line 634 "switch_detection.m"
                      {
#line 634 "switch_detection.m"
                        MR_Word base;
#line 634 "switch_detection.m"
                        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 634 "switch_detection.m"
                        *check_hlds__switch_detection__HeadVar__7_7 = base;
#line 634 "switch_detection.m"
                        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 634 "switch_detection.m"
                        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__switch_detection__Disjuncts_26));
#line 634 "switch_detection.m"
                      }
#line 633 "switch_detection.m"
                    }
#line 631 "switch_detection.m"
                }
#line 636 "switch_detection.m"
              else
#line 638 "switch_detection.m"
                {
#line 638 "switch_detection.m"
                  MR_Word check_hlds__switch_detection__AgainList1_32;
#line 641 "switch_detection.m"
                  MR_Word check_hlds__switch_detection__V_36_36;
#line 641 "switch_detection.m"
                  MR_Word check_hlds__switch_detection__V_29_29;
#line 641 "switch_detection.m"
                  MR_Word check_hlds__switch_detection__V_30_30;
#line 641 "switch_detection.m"
                  MR_Word check_hlds__switch_detection__V_31_31;

#line 641 "switch_detection.m"
                  check_hlds__switch_detection__succeeded = ((MR_tag((MR_Word) check_hlds__switch_detection__CasesList_22)) == (MR_mktag((MR_Integer) 1)));
#line 641 "switch_detection.m"
                  if (check_hlds__switch_detection__succeeded)
#line 641 "switch_detection.m"
                    {
#line 641 "switch_detection.m"
                      check_hlds__switch_detection__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__CasesList_22, (MR_Integer) 0)));
#line 641 "switch_detection.m"
                      check_hlds__switch_detection__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__CasesList_22, (MR_Integer) 1)));
#line 641 "switch_detection.m"
                      check_hlds__switch_detection__succeeded = ((MR_tag((MR_Word) check_hlds__switch_detection__V_36_36)) == (MR_mktag((MR_Integer) 1)));
#line 641 "switch_detection.m"
                      if (check_hlds__switch_detection__succeeded)
#line 641 "switch_detection.m"
                        {
#line 641 "switch_detection.m"
                          check_hlds__switch_detection__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__V_36_36, (MR_Integer) 0)));
#line 641 "switch_detection.m"
                          check_hlds__switch_detection__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__V_36_36, (MR_Integer) 1)));
#line 641 "switch_detection.m"
                        }
#line 641 "switch_detection.m"
                    }
#line 643 "switch_detection.m"
                  if (check_hlds__switch_detection__succeeded)
#line 642 "switch_detection.m"
                    {
#line 642 "switch_detection.m"
                      MR_Word check_hlds__switch_detection__V_37_37;

#line 642 "switch_detection.m"
                      {
#line 642 "switch_detection.m"
                        check_hlds__switch_detection__V_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 642 "switch_detection.m"
                        MR_hl_field(MR_mktag(0), check_hlds__switch_detection__V_37_37, 0) = ((MR_Box) (check_hlds__switch_detection__Var_13));
#line 642 "switch_detection.m"
                        MR_hl_field(MR_mktag(0), check_hlds__switch_detection__V_37_37, 1) = ((MR_Box) (check_hlds__switch_detection__Left_21));
#line 642 "switch_detection.m"
                        MR_hl_field(MR_mktag(0), check_hlds__switch_detection__V_37_37, 2) = ((MR_Box) (check_hlds__switch_detection__CasesList_22));
#line 642 "switch_detection.m"
                      }
#line 642 "switch_detection.m"
                      {
#line 642 "switch_detection.m"
                        check_hlds__switch_detection__AgainList1_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 642 "switch_detection.m"
                        MR_hl_field(MR_mktag(1), check_hlds__switch_detection__AgainList1_32, 0) = ((MR_Box) (check_hlds__switch_detection__V_37_37));
#line 642 "switch_detection.m"
                        MR_hl_field(MR_mktag(1), check_hlds__switch_detection__AgainList1_32, 1) = ((MR_Box) (check_hlds__switch_detection__AgainList0_6));
#line 642 "switch_detection.m"
                      }
#line 642 "switch_detection.m"
                    }
#line 643 "switch_detection.m"
                  else
#line 644 "switch_detection.m"
                    check_hlds__switch_detection__AgainList1_32 = check_hlds__switch_detection__AgainList0_6;
#line 647 "switch_detection.m"
                  /* direct tailcall eliminated */
#line 647 "switch_detection.m"
                  {
#line 647 "switch_detection.m"
                    MR_Word check_hlds__switch_detection__HeadVar__4__tmp_copy_4 = check_hlds__switch_detection__Vars_14;
#line 647 "switch_detection.m"
                    MR_Word check_hlds__switch_detection__AgainList0__tmp_copy_6 = check_hlds__switch_detection__AgainList1_32;
#line 647 "switch_detection.m"
                    MR_Word check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_0__tmp_copy_8 = check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_35_35;

#line 647 "switch_detection.m"
                    check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_0_8 = check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_0__tmp_copy_8;
#line 647 "switch_detection.m"
                    check_hlds__switch_detection__AgainList0_6 = check_hlds__switch_detection__AgainList0__tmp_copy_6;
#line 647 "switch_detection.m"
                    check_hlds__switch_detection__HeadVar__4_4 = check_hlds__switch_detection__HeadVar__4__tmp_copy_4;
#line 647 "switch_detection.m"
                  }
#line 647 "switch_detection.m"
                  continue;
#line 638 "switch_detection.m"
                }
#line 650 "switch_detection.m"
            else
#line 651 "switch_detection.m"
              {
#line 651 "switch_detection.m"
                /* direct tailcall eliminated */
#line 651 "switch_detection.m"
                {
#line 651 "switch_detection.m"
                  MR_Word check_hlds__switch_detection__HeadVar__4__tmp_copy_4 = check_hlds__switch_detection__Vars_14;

#line 651 "switch_detection.m"
                  check_hlds__switch_detection__HeadVar__4_4 = check_hlds__switch_detection__HeadVar__4__tmp_copy_4;
#line 651 "switch_detection.m"
                }
#line 651 "switch_detection.m"
                continue;
#line 651 "switch_detection.m"
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
        if ((check_hlds__switch_detection__State0_12 == (MR_Integer) 2))
#line 581 "switch_detection.m"
          check_hlds__switch_detection__ConflictConsIds_14 = check_hlds__switch_detection__ConflictConsIds0_10;
#line 579 "switch_detection.m"
        else
#line 577 "switch_detection.m"
          {
#line 578 "switch_detection.m"
            {
#line 578 "switch_detection.m"
              mercury__set_tree234__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, ((MR_Box) (check_hlds__switch_detection__ConsId_6)), check_hlds__switch_detection__ConflictConsIds0_10, &check_hlds__switch_detection__ConflictConsIds_14);
            }
#line 577 "switch_detection.m"
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

#line 461 "switch_detection.m"
static MR_Box MR_CALL 
check_hlds__switch_detection__convert_case_7_p_0_5(
#line 461 "switch_detection.m"
  MR_Box check_hlds__switch_detection__closure_arg,
#line 461 "switch_detection.m"
  MR_Box check_hlds__switch_detection__wrapper_arg_1)
#line 461 "switch_detection.m"
{
#line 461 "switch_detection.m"
  {
#line 461 "switch_detection.m"
    MR_Box check_hlds__switch_detection__wrapper_arg_2;
#line 461 "switch_detection.m"
    MR_Box check_hlds__switch_detection__closure = check_hlds__switch_detection__closure_arg;
#line 461 "switch_detection.m"
    MR_Word check_hlds__switch_detection__conv1_Goal_2;

#line 461 "switch_detection.m"
    {
#line 461 "switch_detection.m"
      check_hlds__switch_detection__conv1_Goal_2 = check_hlds__switch_detection__project_arm_goal_1_f_0(((MR_Word) check_hlds__switch_detection__wrapper_arg_1));
    }
#line 461 "switch_detection.m"
    check_hlds__switch_detection__wrapper_arg_2 = ((MR_Box) (check_hlds__switch_detection__conv1_Goal_2));
#line 461 "switch_detection.m"
    return check_hlds__switch_detection__wrapper_arg_2;
#line 461 "switch_detection.m"
  }
#line 461 "switch_detection.m"
}

#line 459 "switch_detection.m"
static MR_bool MR_CALL 
check_hlds__switch_detection__convert_case_7_p_0_4(
#line 459 "switch_detection.m"
  MR_Box check_hlds__switch_detection__closure_arg)
#line 459 "switch_detection.m"
{
#line 459 "switch_detection.m"
  {
#line 459 "switch_detection.m"
    MR_bool check_hlds__switch_detection__succeeded;
#line 459 "switch_detection.m"
    MR_Box check_hlds__switch_detection__closure = check_hlds__switch_detection__closure_arg;

#line 459 "switch_detection.m"
    {
#line 459 "switch_detection.m"
      return check_hlds__switch_detection__succeeded = check_hlds__switch_detection__IntroducedFrom__pred__convert_case__459__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__closure, (MR_Integer) 4))));
    }
#line 459 "switch_detection.m"
    return check_hlds__switch_detection__succeeded;
#line 459 "switch_detection.m"
  }
#line 459 "switch_detection.m"
}

#line 470 "switch_detection.m"
static MR_Box MR_CALL 
check_hlds__switch_detection__convert_case_7_p_0_3(
#line 470 "switch_detection.m"
  MR_Box check_hlds__switch_detection__closure_arg,
#line 470 "switch_detection.m"
  MR_Box check_hlds__switch_detection__wrapper_arg_1)
#line 470 "switch_detection.m"
{
#line 470 "switch_detection.m"
  {
#line 470 "switch_detection.m"
    MR_Box check_hlds__switch_detection__wrapper_arg_2;
#line 470 "switch_detection.m"
    MR_Box check_hlds__switch_detection__closure = check_hlds__switch_detection__closure_arg;
#line 470 "switch_detection.m"
    MR_Word check_hlds__switch_detection__conv0_Goal_2;

#line 470 "switch_detection.m"
    {
#line 470 "switch_detection.m"
      check_hlds__switch_detection__conv0_Goal_2 = check_hlds__switch_detection__project_single_arm_goal_1_f_0(((MR_Word) check_hlds__switch_detection__wrapper_arg_1));
    }
#line 470 "switch_detection.m"
    check_hlds__switch_detection__wrapper_arg_2 = ((MR_Box) (check_hlds__switch_detection__conv0_Goal_2));
#line 470 "switch_detection.m"
    return check_hlds__switch_detection__wrapper_arg_2;
#line 470 "switch_detection.m"
  }
#line 470 "switch_detection.m"
}

#line 468 "switch_detection.m"
static MR_bool MR_CALL 
check_hlds__switch_detection__convert_case_7_p_0_2(
#line 468 "switch_detection.m"
  MR_Box check_hlds__switch_detection__closure_arg)
#line 468 "switch_detection.m"
{
#line 468 "switch_detection.m"
  {
#line 468 "switch_detection.m"
    MR_bool check_hlds__switch_detection__succeeded;
#line 468 "switch_detection.m"
    MR_Box check_hlds__switch_detection__closure = check_hlds__switch_detection__closure_arg;

#line 468 "switch_detection.m"
    {
#line 468 "switch_detection.m"
      return check_hlds__switch_detection__succeeded = check_hlds__switch_detection__IntroducedFrom__pred__convert_case__468__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__closure, (MR_Integer) 4))));
    }
#line 468 "switch_detection.m"
    return check_hlds__switch_detection__succeeded;
#line 468 "switch_detection.m"
  }
#line 468 "switch_detection.m"
}

#line 451 "switch_detection.m"
static MR_bool MR_CALL 
check_hlds__switch_detection__convert_case_7_p_0_1(
#line 451 "switch_detection.m"
  MR_Box check_hlds__switch_detection__closure_arg)
#line 451 "switch_detection.m"
{
#line 451 "switch_detection.m"
  {
#line 451 "switch_detection.m"
    MR_bool check_hlds__switch_detection__succeeded;
#line 451 "switch_detection.m"
    MR_Box check_hlds__switch_detection__closure = check_hlds__switch_detection__closure_arg;

#line 451 "switch_detection.m"
    {
#line 451 "switch_detection.m"
      return check_hlds__switch_detection__succeeded = check_hlds__switch_detection__IntroducedFrom__pred__convert_case__451__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__closure, (MR_Integer) 4))));
    }
#line 451 "switch_detection.m"
    return check_hlds__switch_detection__succeeded;
#line 451 "switch_detection.m"
  }
#line 451 "switch_detection.m"
}

#line 443 "switch_detection.m"
static void MR_CALL 
check_hlds__switch_detection__convert_case_7_p_0(
#line 443 "switch_detection.m"
  MR_Word check_hlds__switch_detection__GoalInfo_8,
#line 443 "switch_detection.m"
  MR_Word check_hlds__switch_detection__ConflictConsIds_9,
#line 443 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__3_3,
#line 443 "switch_detection.m"
  MR_Word check_hlds__switch_detection__STATE_VARIABLE_Cases_0_29,
#line 443 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__STATE_VARIABLE_Cases_30,
#line 443 "switch_detection.m"
  MR_Word check_hlds__switch_detection__STATE_VARIABLE_AlreadyHandledConsIds_0_31,
#line 443 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__STATE_VARIABLE_AlreadyHandledConsIds_32)
#line 443 "switch_detection.m"
{
#line 448 "switch_detection.m"
  {
#line 448 "switch_detection.m"
    MR_bool check_hlds__switch_detection__succeeded;
#line 448 "switch_detection.m"
    MR_Word check_hlds__switch_detection__ConsId_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__HeadVar__3_3, (MR_Integer) 0)));
#line 448 "switch_detection.m"
    MR_Word check_hlds__switch_detection__Entry_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__HeadVar__3_3, (MR_Integer) 1)));
#line 448 "switch_detection.m"
    MR_Word check_hlds__switch_detection__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__Entry_11, (MR_Integer) 1)));
#line 448 "switch_detection.m"
    MR_Word check_hlds__switch_detection__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__Entry_11, (MR_Integer) 0)));

#line 449 "switch_detection.m"
    {
#line 449 "switch_detection.m"
      check_hlds__switch_detection__succeeded = mercury__set_tree234__contains_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, check_hlds__switch_detection__STATE_VARIABLE_AlreadyHandledConsIds_0_31, ((MR_Box) (check_hlds__switch_detection__ConsId_10)));
    }
#line 453 "switch_detection.m"
    if (check_hlds__switch_detection__succeeded)
#line 450 "switch_detection.m"
      {
#line 450 "switch_detection.m"
        MR_Word check_hlds__switch_detection__V_33_33;

#line 451 "switch_detection.m"
        {
#line 451 "switch_detection.m"
          check_hlds__switch_detection__V_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 451 "switch_detection.m"
          MR_hl_field(MR_mktag(0), check_hlds__switch_detection__V_33_33, 0) = ((MR_Box) (&check_hlds__switch_detection_scalar_common_4[0]));
#line 451 "switch_detection.m"
          MR_hl_field(MR_mktag(0), check_hlds__switch_detection__V_33_33, 1) = ((MR_Box) (check_hlds__switch_detection__convert_case_7_p_0_1));
#line 451 "switch_detection.m"
          MR_hl_field(MR_mktag(0), check_hlds__switch_detection__V_33_33, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 451 "switch_detection.m"
          MR_hl_field(MR_mktag(0), check_hlds__switch_detection__V_33_33, 3) = ((MR_Box) ((MR_Integer) 1));
#line 451 "switch_detection.m"
          MR_hl_field(MR_mktag(0), check_hlds__switch_detection__V_33_33, 4) = ((MR_Box) (check_hlds__switch_detection__V_94_94));
#line 451 "switch_detection.m"
        }
#line 451 "switch_detection.m"
        {
#line 451 "switch_detection.m"
          mercury__require__expect_4_p_0(check_hlds__switch_detection__V_33_33, (MR_String) "check_hlds.switch_detection", (MR_String) "predicate \140check_hlds.switch_detection.convert_case\'/7", (MR_String) "already handled but not cons_id_has_one_multi");
        }
#line 451 "switch_detection.m"
        *check_hlds__switch_detection__STATE_VARIABLE_AlreadyHandledConsIds_32 = check_hlds__switch_detection__STATE_VARIABLE_AlreadyHandledConsIds_0_31;
#line 451 "switch_detection.m"
        *check_hlds__switch_detection__STATE_VARIABLE_Cases_30 = check_hlds__switch_detection__STATE_VARIABLE_Cases_0_29;
#line 450 "switch_detection.m"
      }
#line 453 "switch_detection.m"
    else
#line 454 "switch_detection.m"
      {
#line 454 "switch_detection.m"
        MR_Word check_hlds__switch_detection__TypeCtorInfo_79_79 = (MR_Word) &check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_case_arm_0;
#line 454 "switch_detection.m"
        MR_Word check_hlds__switch_detection__Arms_17;

#line 455 "switch_detection.m"
        {
#line 455 "switch_detection.m"
          check_hlds__switch_detection__Arms_17 = mercury__cord__list_1_f_0(check_hlds__switch_detection__TypeCtorInfo_79_79, check_hlds__switch_detection__V_93_93);
        }
#line 465 "switch_detection.m"
        if ((check_hlds__switch_detection__V_94_94 == (MR_Integer) 0))
#line 466 "switch_detection.m"
          {
#line 466 "switch_detection.m"
            MR_Word check_hlds__switch_detection__V_49_49;
#line 466 "switch_detection.m"
            MR_Word check_hlds__switch_detection__IsMember_65;
#line 466 "switch_detection.m"
            MR_Word check_hlds__switch_detection__Disjuncts_66;
#line 466 "switch_detection.m"
            MR_Word check_hlds__switch_detection__Goal_67;
#line 466 "switch_detection.m"
            MR_Word check_hlds__switch_detection__Case_68;

#line 467 "switch_detection.m"
            {
#line 467 "switch_detection.m"
              mercury__set_tree234__is_member_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, check_hlds__switch_detection__ConflictConsIds_9, ((MR_Box) (check_hlds__switch_detection__ConsId_10)), &check_hlds__switch_detection__IsMember_65);
            }
#line 468 "switch_detection.m"
            {
#line 468 "switch_detection.m"
              check_hlds__switch_detection__V_49_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 468 "switch_detection.m"
              MR_hl_field(MR_mktag(0), check_hlds__switch_detection__V_49_49, 0) = ((MR_Box) (&check_hlds__switch_detection_scalar_common_4[1]));
#line 468 "switch_detection.m"
              MR_hl_field(MR_mktag(0), check_hlds__switch_detection__V_49_49, 1) = ((MR_Box) (check_hlds__switch_detection__convert_case_7_p_0_2));
#line 468 "switch_detection.m"
              MR_hl_field(MR_mktag(0), check_hlds__switch_detection__V_49_49, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 468 "switch_detection.m"
              MR_hl_field(MR_mktag(0), check_hlds__switch_detection__V_49_49, 3) = ((MR_Box) ((MR_Integer) 0));
#line 468 "switch_detection.m"
              MR_hl_field(MR_mktag(0), check_hlds__switch_detection__V_49_49, 4) = ((MR_Box) (check_hlds__switch_detection__IsMember_65));
#line 468 "switch_detection.m"
            }
#line 468 "switch_detection.m"
            {
#line 468 "switch_detection.m"
              mercury__require__expect_4_p_0(check_hlds__switch_detection__V_49_49, (MR_String) "check_hlds.switch_detection", (MR_String) "predicate \140check_hlds.switch_detection.convert_case\'/7", (MR_String) "singles status but in ConflictConsIds");
            }
#line 470 "switch_detection.m"
            {
#line 470 "switch_detection.m"
              check_hlds__switch_detection__Disjuncts_66 = mercury__list__map_2_f_0(check_hlds__switch_detection__TypeCtorInfo_79_79, (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &check_hlds__switch_detection_scalar_common_2[2], check_hlds__switch_detection__Arms_17);
            }
#line 471 "switch_detection.m"
            {
#line 471 "switch_detection.m"
              hlds__hlds_goal__disj_list_to_goal_3_p_0(check_hlds__switch_detection__Disjuncts_66, check_hlds__switch_detection__GoalInfo_8, &check_hlds__switch_detection__Goal_67);
            }
#line 472 "switch_detection.m"
            {
#line 472 "switch_detection.m"
              check_hlds__switch_detection__Case_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 472 "switch_detection.m"
              MR_hl_field(MR_mktag(0), check_hlds__switch_detection__Case_68, 0) = ((MR_Box) (check_hlds__switch_detection__ConsId_10));
#line 472 "switch_detection.m"
              MR_hl_field(MR_mktag(0), check_hlds__switch_detection__Case_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 472 "switch_detection.m"
              MR_hl_field(MR_mktag(0), check_hlds__switch_detection__Case_68, 2) = ((MR_Box) (check_hlds__switch_detection__Goal_67));
#line 472 "switch_detection.m"
            }
#line 473 "switch_detection.m"
            {
#line 473 "switch_detection.m"
              MR_Word base;
#line 473 "switch_detection.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 473 "switch_detection.m"
              *check_hlds__switch_detection__STATE_VARIABLE_Cases_30 = base;
#line 473 "switch_detection.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__switch_detection__Case_68));
#line 473 "switch_detection.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__switch_detection__STATE_VARIABLE_Cases_0_29));
#line 473 "switch_detection.m"
            }
#line 473 "switch_detection.m"
            *check_hlds__switch_detection__STATE_VARIABLE_AlreadyHandledConsIds_32 = check_hlds__switch_detection__STATE_VARIABLE_AlreadyHandledConsIds_0_31;
#line 466 "switch_detection.m"
          }
#line 465 "switch_detection.m"
        else
#line 465 "switch_detection.m"
          if ((check_hlds__switch_detection__V_94_94 == (MR_Integer) 2))
#line 457 "switch_detection.m"
            {
#line 457 "switch_detection.m"
              MR_Word check_hlds__switch_detection__IsMember_18;
#line 457 "switch_detection.m"
              MR_Word check_hlds__switch_detection__Disjuncts_19;
#line 457 "switch_detection.m"
              MR_Word check_hlds__switch_detection__Goal_20;
#line 457 "switch_detection.m"
              MR_Word check_hlds__switch_detection__Case_21;
#line 457 "switch_detection.m"
              MR_Word check_hlds__switch_detection__V_57_57;

#line 458 "switch_detection.m"
              {
#line 458 "switch_detection.m"
                mercury__set_tree234__is_member_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, check_hlds__switch_detection__ConflictConsIds_9, ((MR_Box) (check_hlds__switch_detection__ConsId_10)), &check_hlds__switch_detection__IsMember_18);
              }
#line 459 "switch_detection.m"
              {
#line 459 "switch_detection.m"
                check_hlds__switch_detection__V_57_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 459 "switch_detection.m"
                MR_hl_field(MR_mktag(0), check_hlds__switch_detection__V_57_57, 0) = ((MR_Box) (&check_hlds__switch_detection_scalar_common_4[1]));
#line 459 "switch_detection.m"
                MR_hl_field(MR_mktag(0), check_hlds__switch_detection__V_57_57, 1) = ((MR_Box) (check_hlds__switch_detection__convert_case_7_p_0_4));
#line 459 "switch_detection.m"
                MR_hl_field(MR_mktag(0), check_hlds__switch_detection__V_57_57, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 459 "switch_detection.m"
                MR_hl_field(MR_mktag(0), check_hlds__switch_detection__V_57_57, 3) = ((MR_Box) (check_hlds__switch_detection__IsMember_18));
#line 459 "switch_detection.m"
                MR_hl_field(MR_mktag(0), check_hlds__switch_detection__V_57_57, 4) = ((MR_Box) ((MR_Integer) 1));
#line 459 "switch_detection.m"
              }
#line 459 "switch_detection.m"
              {
#line 459 "switch_detection.m"
                mercury__require__expect_4_p_0(check_hlds__switch_detection__V_57_57, (MR_String) "check_hlds.switch_detection", (MR_String) "predicate \140check_hlds.switch_detection.convert_case\'/7", (MR_String) "conflict status but not in ConflictConsIds");
              }
#line 461 "switch_detection.m"
              {
#line 461 "switch_detection.m"
                check_hlds__switch_detection__Disjuncts_19 = mercury__list__map_2_f_0(check_hlds__switch_detection__TypeCtorInfo_79_79, (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &check_hlds__switch_detection_scalar_common_2[3], check_hlds__switch_detection__Arms_17);
              }
#line 462 "switch_detection.m"
              {
#line 462 "switch_detection.m"
                hlds__hlds_goal__disj_list_to_goal_3_p_0(check_hlds__switch_detection__Disjuncts_19, check_hlds__switch_detection__GoalInfo_8, &check_hlds__switch_detection__Goal_20);
              }
#line 463 "switch_detection.m"
              {
#line 463 "switch_detection.m"
                check_hlds__switch_detection__Case_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 463 "switch_detection.m"
                MR_hl_field(MR_mktag(0), check_hlds__switch_detection__Case_21, 0) = ((MR_Box) (check_hlds__switch_detection__ConsId_10));
#line 463 "switch_detection.m"
                MR_hl_field(MR_mktag(0), check_hlds__switch_detection__Case_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 463 "switch_detection.m"
                MR_hl_field(MR_mktag(0), check_hlds__switch_detection__Case_21, 2) = ((MR_Box) (check_hlds__switch_detection__Goal_20));
#line 463 "switch_detection.m"
              }
#line 464 "switch_detection.m"
              {
#line 464 "switch_detection.m"
                MR_Word base;
#line 464 "switch_detection.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 464 "switch_detection.m"
                *check_hlds__switch_detection__STATE_VARIABLE_Cases_30 = base;
#line 464 "switch_detection.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__switch_detection__Case_21));
#line 464 "switch_detection.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__switch_detection__STATE_VARIABLE_Cases_0_29));
#line 464 "switch_detection.m"
              }
#line 464 "switch_detection.m"
              *check_hlds__switch_detection__STATE_VARIABLE_AlreadyHandledConsIds_32 = check_hlds__switch_detection__STATE_VARIABLE_AlreadyHandledConsIds_0_31;
#line 457 "switch_detection.m"
            }
#line 465 "switch_detection.m"
          else
#line 475 "switch_detection.m"
            {
#line 475 "switch_detection.m"
              MR_Word check_hlds__switch_detection__MainConsId0_22;
#line 475 "switch_detection.m"
              MR_Word check_hlds__switch_detection__OtherConsIds0_23;
#line 475 "switch_detection.m"
              MR_Word check_hlds__switch_detection__Goal_72;
#line 476 "switch_detection.m"
              MR_Word check_hlds__switch_detection__V_38_38;
#line 476 "switch_detection.m"
              MR_Word check_hlds__switch_detection__V_39_39;

#line 476 "switch_detection.m"
              check_hlds__switch_detection__succeeded = ((MR_tag((MR_Word) check_hlds__switch_detection__Arms_17)) == (MR_mktag((MR_Integer) 1)));
#line 476 "switch_detection.m"
              if (check_hlds__switch_detection__succeeded)
#line 476 "switch_detection.m"
                {
#line 476 "switch_detection.m"
                  check_hlds__switch_detection__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__Arms_17, (MR_Integer) 0)));
#line 476 "switch_detection.m"
                  check_hlds__switch_detection__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__Arms_17, (MR_Integer) 1)));
#line 476 "switch_detection.m"
                  check_hlds__switch_detection__succeeded = (check_hlds__switch_detection__V_39_39 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 476 "switch_detection.m"
                  if (check_hlds__switch_detection__succeeded)
#line 476 "switch_detection.m"
                    {
#line 476 "switch_detection.m"
                      check_hlds__switch_detection__succeeded = ((MR_tag((MR_Word) check_hlds__switch_detection__V_38_38)) == (MR_mktag((MR_Integer) 1)));
#line 476 "switch_detection.m"
                      if (check_hlds__switch_detection__succeeded)
#line 476 "switch_detection.m"
                        {
#line 476 "switch_detection.m"
                          check_hlds__switch_detection__MainConsId0_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__V_38_38, (MR_Integer) 0)));
#line 476 "switch_detection.m"
                          check_hlds__switch_detection__OtherConsIds0_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__V_38_38, (MR_Integer) 1)));
#line 476 "switch_detection.m"
                          check_hlds__switch_detection__Goal_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__V_38_38, (MR_Integer) 2)));
#line 476 "switch_detection.m"
                        }
#line 476 "switch_detection.m"
                    }
#line 476 "switch_detection.m"
                }
#line 475 "switch_detection.m"
              if (check_hlds__switch_detection__succeeded)
#line 489 "switch_detection.m"
                {
#line 489 "switch_detection.m"
                  MR_Word check_hlds__switch_detection__TypeCtorInfo_92_92;
#line 489 "switch_detection.m"
                  MR_Word check_hlds__switch_detection__AllConsIds0_24;
#line 489 "switch_detection.m"
                  MR_Word check_hlds__switch_detection__AllConsIds_26;
#line 489 "switch_detection.m"
                  MR_Word check_hlds__switch_detection__V_40_40;
#line 491 "switch_detection.m"
                  MR_Word check_hlds__switch_detection__V_25_25;

#line 489 "switch_detection.m"
                  {
#line 489 "switch_detection.m"
                    check_hlds__switch_detection__AllConsIds0_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 489 "switch_detection.m"
                    MR_hl_field(MR_mktag(1), check_hlds__switch_detection__AllConsIds0_24, 0) = ((MR_Box) (check_hlds__switch_detection__MainConsId0_22));
#line 489 "switch_detection.m"
                    MR_hl_field(MR_mktag(1), check_hlds__switch_detection__AllConsIds0_24, 1) = ((MR_Box) (check_hlds__switch_detection__OtherConsIds0_23));
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
#line 8863 "check_hlds.switch_detection.c"
                  check_hlds__switch_detection__TypeCtorInfo_92_92 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0;
#line 491 "switch_detection.m"
                  {
#line 491 "switch_detection.m"
                    mercury__list__filter_4_p_0(check_hlds__switch_detection__TypeCtorInfo_92_92, check_hlds__switch_detection__V_40_40, check_hlds__switch_detection__AllConsIds0_24, &check_hlds__switch_detection__V_25_25, &check_hlds__switch_detection__AllConsIds_26);
                  }
#line 499 "switch_detection.m"
                  if ((check_hlds__switch_detection__AllConsIds_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
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
                      MR_Word check_hlds__switch_detection__MainConsId_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__AllConsIds_26, (MR_Integer) 0)));
#line 494 "switch_detection.m"
                      MR_Word check_hlds__switch_detection__OtherConsIds_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__AllConsIds_26, (MR_Integer) 1)));
#line 494 "switch_detection.m"
                      MR_Word check_hlds__switch_detection__Case_69;

#line 495 "switch_detection.m"
                      {
#line 495 "switch_detection.m"
                        check_hlds__switch_detection__Case_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 495 "switch_detection.m"
                        MR_hl_field(MR_mktag(0), check_hlds__switch_detection__Case_69, 0) = ((MR_Box) (check_hlds__switch_detection__MainConsId_27));
#line 495 "switch_detection.m"
                        MR_hl_field(MR_mktag(0), check_hlds__switch_detection__Case_69, 1) = ((MR_Box) (check_hlds__switch_detection__OtherConsIds_28));
#line 495 "switch_detection.m"
                        MR_hl_field(MR_mktag(0), check_hlds__switch_detection__Case_69, 2) = ((MR_Box) (check_hlds__switch_detection__Goal_72));
#line 495 "switch_detection.m"
                      }
#line 496 "switch_detection.m"
                      {
#line 496 "switch_detection.m"
                        mercury__set_tree234__insert_list_3_p_0(check_hlds__switch_detection__TypeCtorInfo_92_92, check_hlds__switch_detection__OtherConsIds_28, check_hlds__switch_detection__STATE_VARIABLE_AlreadyHandledConsIds_0_31, check_hlds__switch_detection__STATE_VARIABLE_AlreadyHandledConsIds_32);
                      }
#line 498 "switch_detection.m"
                      {
#line 498 "switch_detection.m"
                        MR_Word base;
#line 498 "switch_detection.m"
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 498 "switch_detection.m"
                        *check_hlds__switch_detection__STATE_VARIABLE_Cases_30 = base;
#line 498 "switch_detection.m"
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__switch_detection__Case_69));
#line 498 "switch_detection.m"
                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__switch_detection__STATE_VARIABLE_Cases_0_29));
#line 498 "switch_detection.m"
                      }
#line 494 "switch_detection.m"
                    }
#line 489 "switch_detection.m"
                }
#line 475 "switch_detection.m"
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
#line 475 "switch_detection.m"
            }
#line 454 "switch_detection.m"
      }
#line 448 "switch_detection.m"
  }
#line 443 "switch_detection.m"
}

#line 439 "switch_detection.m"
static void MR_CALL 
check_hlds__switch_detection__convert_cases_table_2_f_0_1(
#line 439 "switch_detection.m"
  MR_Box check_hlds__switch_detection__closure_arg,
#line 439 "switch_detection.m"
  MR_Box check_hlds__switch_detection__wrapper_arg_1,
#line 439 "switch_detection.m"
  MR_Box check_hlds__switch_detection__wrapper_arg_2,
#line 439 "switch_detection.m"
  MR_Box * check_hlds__switch_detection__wrapper_arg_3,
#line 439 "switch_detection.m"
  MR_Box check_hlds__switch_detection__wrapper_arg_4,
#line 439 "switch_detection.m"
  MR_Box * check_hlds__switch_detection__wrapper_arg_5)
#line 439 "switch_detection.m"
{
#line 439 "switch_detection.m"
  {
#line 439 "switch_detection.m"
    MR_Box check_hlds__switch_detection__closure = check_hlds__switch_detection__closure_arg;
#line 439 "switch_detection.m"
    MR_Word check_hlds__switch_detection__conv1_STATE_VARIABLE_Cases_30;
#line 439 "switch_detection.m"
    MR_Word check_hlds__switch_detection__conv0_STATE_VARIABLE_AlreadyHandledConsIds_32;

#line 439 "switch_detection.m"
    {
#line 439 "switch_detection.m"
      check_hlds__switch_detection__convert_case_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__switch_detection__wrapper_arg_1), ((MR_Word) check_hlds__switch_detection__wrapper_arg_2), &check_hlds__switch_detection__conv1_STATE_VARIABLE_Cases_30, ((MR_Word) check_hlds__switch_detection__wrapper_arg_4), &check_hlds__switch_detection__conv0_STATE_VARIABLE_AlreadyHandledConsIds_32);
    }
#line 439 "switch_detection.m"
    *check_hlds__switch_detection__wrapper_arg_3 = ((MR_Box) (check_hlds__switch_detection__conv1_STATE_VARIABLE_Cases_30));
#line 439 "switch_detection.m"
    *check_hlds__switch_detection__wrapper_arg_5 = ((MR_Box) (check_hlds__switch_detection__conv0_STATE_VARIABLE_AlreadyHandledConsIds_32));
#line 439 "switch_detection.m"
  }
#line 439 "switch_detection.m"
}

#line 434 "switch_detection.m"
static MR_Word MR_CALL 
check_hlds__switch_detection__convert_cases_table_2_f_0(
#line 434 "switch_detection.m"
  MR_Word check_hlds__switch_detection__GoalInfo_4,
#line 434 "switch_detection.m"
  MR_Word check_hlds__switch_detection__CasesTable_5)
#line 434 "switch_detection.m"
{
#line 436 "switch_detection.m"
  {
#line 436 "switch_detection.m"
    MR_bool check_hlds__switch_detection__succeeded;
#line 436 "switch_detection.m"
    MR_Word check_hlds__switch_detection__SortedCases_6;
#line 436 "switch_detection.m"
    MR_Word check_hlds__switch_detection__TypeCtorInfo_15_15 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0;
#line 436 "switch_detection.m"
    MR_Word check_hlds__switch_detection__CasesMap_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__CasesTable_5, (MR_Integer) 0)));
#line 436 "switch_detection.m"
    MR_Word check_hlds__switch_detection__ConflictIds_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__CasesTable_5, (MR_Integer) 1)));
#line 436 "switch_detection.m"
    MR_Word check_hlds__switch_detection__CasesAssocList_9;
#line 436 "switch_detection.m"
    MR_Word check_hlds__switch_detection__Cases_10;
#line 436 "switch_detection.m"
    MR_Word check_hlds__switch_detection__V_12_12;
#line 436 "switch_detection.m"
    MR_Word check_hlds__switch_detection__V_14_14;
#line 439 "switch_detection.m"
    MR_Word check_hlds__switch_detection___AlreadyHandledConsIds_11;
#line 439 "switch_detection.m"
    MR_Box check_hlds__switch_detection__conv3_Cases_10;
#line 439 "switch_detection.m"
    MR_Box check_hlds__switch_detection__conv2__AlreadyHandledConsIds_11;

#line 438 "switch_detection.m"
    {
#line 438 "switch_detection.m"
      mercury__map__to_assoc_list_2_p_0(check_hlds__switch_detection__TypeCtorInfo_15_15, (MR_Word) &check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_cons_id_entry_0, check_hlds__switch_detection__CasesMap_7, &check_hlds__switch_detection__CasesAssocList_9);
    }
#line 439 "switch_detection.m"
    {
#line 439 "switch_detection.m"
      check_hlds__switch_detection__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 439 "switch_detection.m"
      MR_hl_field(MR_mktag(0), check_hlds__switch_detection__V_12_12, 0) = ((MR_Box) (&check_hlds__switch_detection_scalar_common_3[0]));
#line 439 "switch_detection.m"
      MR_hl_field(MR_mktag(0), check_hlds__switch_detection__V_12_12, 1) = ((MR_Box) (check_hlds__switch_detection__convert_cases_table_2_f_0_1));
#line 439 "switch_detection.m"
      MR_hl_field(MR_mktag(0), check_hlds__switch_detection__V_12_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 439 "switch_detection.m"
      MR_hl_field(MR_mktag(0), check_hlds__switch_detection__V_12_12, 3) = ((MR_Box) (check_hlds__switch_detection__GoalInfo_4));
#line 439 "switch_detection.m"
      MR_hl_field(MR_mktag(0), check_hlds__switch_detection__V_12_12, 4) = ((MR_Box) (check_hlds__switch_detection__ConflictIds_8));
#line 439 "switch_detection.m"
    }
#line 440 "switch_detection.m"
    {
#line 440 "switch_detection.m"
      check_hlds__switch_detection__V_14_14 = mercury__set_tree234__init_0_f_0(check_hlds__switch_detection__TypeCtorInfo_15_15);
    }
#line 439 "switch_detection.m"
    {
#line 439 "switch_detection.m"
      mercury__list__foldl2_6_p_0((MR_Word) &check_hlds__switch_detection_scalar_common_2[0], (MR_Word) &check_hlds__switch_detection_scalar_common_1[2], (MR_Word) &check_hlds__switch_detection_scalar_common_1[3], check_hlds__switch_detection__V_12_12, check_hlds__switch_detection__CasesAssocList_9, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &check_hlds__switch_detection__conv3_Cases_10, ((MR_Box) (check_hlds__switch_detection__V_14_14)), &check_hlds__switch_detection__conv2__AlreadyHandledConsIds_11);
    }
#line 439 "switch_detection.m"
    check_hlds__switch_detection__Cases_10 = ((MR_Word) check_hlds__switch_detection__conv3_Cases_10);
#line 439 "switch_detection.m"
    check_hlds__switch_detection___AlreadyHandledConsIds_11 = ((MR_Word) check_hlds__switch_detection__conv2__AlreadyHandledConsIds_11);
#line 441 "switch_detection.m"
    {
#line 441 "switch_detection.m"
      mercury__list__sort_2_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0, check_hlds__switch_detection__Cases_10, &check_hlds__switch_detection__SortedCases_6);
    }
#line 436 "switch_detection.m"
    return check_hlds__switch_detection__SortedCases_6;
#line 436 "switch_detection.m"
  }
#line 434 "switch_detection.m"
}

#line 401 "switch_detection.m"
static void MR_CALL 
check_hlds__switch_detection__detect_switches_in_orelse_5_p_0(
#line 401 "switch_detection.m"
  MR_Word check_hlds__switch_detection__InstMap_1,
#line 401 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__2_2,
#line 401 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__HeadVar__3_3,
#line 401 "switch_detection.m"
  MR_Word check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_0_4,
#line 401 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_5)
#line 401 "switch_detection.m"
{
#line 405 "switch_detection.m"
  {
#line 405 "switch_detection.m"
    MR_bool check_hlds__switch_detection__succeeded;

#line 405 "switch_detection.m"
    if ((check_hlds__switch_detection__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 405 "switch_detection.m"
      {
#line 405 "switch_detection.m"
        *check_hlds__switch_detection__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 405 "switch_detection.m"
        *check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_5 = check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_0_4;
#line 405 "switch_detection.m"
      }
#line 405 "switch_detection.m"
    else
#line 407 "switch_detection.m"
      {
#line 407 "switch_detection.m"
        MR_Word check_hlds__switch_detection__Goal0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__HeadVar__2_2, (MR_Integer) 0)));
#line 407 "switch_detection.m"
        MR_Word check_hlds__switch_detection__Goals0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__HeadVar__2_2, (MR_Integer) 1)));
#line 407 "switch_detection.m"
        MR_Word check_hlds__switch_detection__Goal_13;
#line 407 "switch_detection.m"
        MR_Word check_hlds__switch_detection__Goals_14;
#line 407 "switch_detection.m"
        MR_Word check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_18_18;
#line 245 "switch_detection.m"
        MR_Word check_hlds__switch_detection___InstMap_27;

#line 245 "switch_detection.m"
        {
#line 245 "switch_detection.m"
          check_hlds__switch_detection__detect_switches_in_goal_update_instmap_6_p_0(check_hlds__switch_detection__InstMap_1, &check_hlds__switch_detection___InstMap_27, check_hlds__switch_detection__Goal0_11, &check_hlds__switch_detection__Goal_13, check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_0_4, &check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_18_18);
        }
#line 409 "switch_detection.m"
        {
#line 409 "switch_detection.m"
          check_hlds__switch_detection__detect_switches_in_orelse_5_p_0(check_hlds__switch_detection__InstMap_1, check_hlds__switch_detection__Goals0_12, &check_hlds__switch_detection__Goals_14, check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_18_18, check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_5);
        }
#line 406 "switch_detection.m"
        {
#line 406 "switch_detection.m"
          MR_Word base;
#line 406 "switch_detection.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 406 "switch_detection.m"
          *check_hlds__switch_detection__HeadVar__3_3 = base;
#line 406 "switch_detection.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__switch_detection__Goal_13));
#line 406 "switch_detection.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__switch_detection__Goals_14));
#line 406 "switch_detection.m"
        }
#line 407 "switch_detection.m"
      }
#line 405 "switch_detection.m"
  }
#line 401 "switch_detection.m"
}

#line 390 "switch_detection.m"
static void MR_CALL 
check_hlds__switch_detection__detect_switches_in_conj_5_p_0(
#line 390 "switch_detection.m"
  MR_Word check_hlds__switch_detection__InstMap0_1,
#line 390 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__2_2,
#line 390 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__HeadVar__3_3,
#line 390 "switch_detection.m"
  MR_Word check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_0_4,
#line 390 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_5)
#line 390 "switch_detection.m"
{
#line 394 "switch_detection.m"
  {
#line 394 "switch_detection.m"
    MR_bool check_hlds__switch_detection__succeeded;

#line 394 "switch_detection.m"
    if ((check_hlds__switch_detection__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 394 "switch_detection.m"
      {
#line 394 "switch_detection.m"
        *check_hlds__switch_detection__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 394 "switch_detection.m"
        *check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_5 = check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_0_4;
#line 394 "switch_detection.m"
      }
#line 394 "switch_detection.m"
    else
#line 396 "switch_detection.m"
      {
#line 396 "switch_detection.m"
        MR_Word check_hlds__switch_detection__Goal0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__HeadVar__2_2, (MR_Integer) 0)));
#line 396 "switch_detection.m"
        MR_Word check_hlds__switch_detection__Goals0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__HeadVar__2_2, (MR_Integer) 1)));
#line 396 "switch_detection.m"
        MR_Word check_hlds__switch_detection__Goal_13;
#line 396 "switch_detection.m"
        MR_Word check_hlds__switch_detection__Goals_14;
#line 396 "switch_detection.m"
        MR_Word check_hlds__switch_detection__InstMap1_16;
#line 396 "switch_detection.m"
        MR_Word check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_19_19;
#line 396 "switch_detection.m"
        MR_Word check_hlds__switch_detection__GoalExpr0_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__Goal0_11, (MR_Integer) 0)));
#line 396 "switch_detection.m"
        MR_Word check_hlds__switch_detection__GoalInfo_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__Goal0_11, (MR_Integer) 1)));
#line 396 "switch_detection.m"
        MR_Word check_hlds__switch_detection__GoalExpr_31;

#line 258 "switch_detection.m"
        {
#line 258 "switch_detection.m"
          check_hlds__switch_detection__detect_switches_in_goal_expr_6_p_0(check_hlds__switch_detection__InstMap0_1, check_hlds__switch_detection__GoalInfo_30, check_hlds__switch_detection__GoalExpr0_29, &check_hlds__switch_detection__GoalExpr_31, check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_0_4, &check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_19_19);
        }
#line 260 "switch_detection.m"
        {
#line 260 "switch_detection.m"
          check_hlds__switch_detection__Goal_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 260 "switch_detection.m"
          MR_hl_field(MR_mktag(0), check_hlds__switch_detection__Goal_13, 0) = ((MR_Box) (check_hlds__switch_detection__GoalExpr_31));
#line 260 "switch_detection.m"
          MR_hl_field(MR_mktag(0), check_hlds__switch_detection__Goal_13, 1) = ((MR_Box) (check_hlds__switch_detection__GoalInfo_30));
#line 260 "switch_detection.m"
        }
#line 261 "switch_detection.m"
        {
#line 261 "switch_detection.m"
          hlds__goal_util__update_instmap_3_p_0(check_hlds__switch_detection__Goal0_11, check_hlds__switch_detection__InstMap0_1, &check_hlds__switch_detection__InstMap1_16);
        }
#line 399 "switch_detection.m"
        {
#line 399 "switch_detection.m"
          check_hlds__switch_detection__detect_switches_in_conj_5_p_0(check_hlds__switch_detection__InstMap1_16, check_hlds__switch_detection__Goals0_12, &check_hlds__switch_detection__Goals_14, check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_19_19, check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_5);
        }
#line 396 "switch_detection.m"
        {
#line 396 "switch_detection.m"
          MR_Word base;
#line 396 "switch_detection.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 396 "switch_detection.m"
          *check_hlds__switch_detection__HeadVar__3_3 = base;
#line 396 "switch_detection.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__switch_detection__Goal_13));
#line 396 "switch_detection.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__switch_detection__Goals_14));
#line 396 "switch_detection.m"
        }
#line 396 "switch_detection.m"
      }
#line 394 "switch_detection.m"
  }
#line 390 "switch_detection.m"
}

#line 372 "switch_detection.m"
static void MR_CALL 
check_hlds__switch_detection__detect_switches_in_cases_6_p_0(
#line 372 "switch_detection.m"
  MR_Word check_hlds__switch_detection__Var_1,
#line 372 "switch_detection.m"
  MR_Word check_hlds__switch_detection__InstMap0_2,
#line 372 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__3_3,
#line 372 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__HeadVar__4_4,
#line 372 "switch_detection.m"
  MR_Word check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_0_5,
#line 372 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_6)
#line 372 "switch_detection.m"
{
#line 376 "switch_detection.m"
  {
#line 376 "switch_detection.m"
    MR_bool check_hlds__switch_detection__succeeded;

#line 376 "switch_detection.m"
    if ((check_hlds__switch_detection__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 376 "switch_detection.m"
      {
#line 376 "switch_detection.m"
        *check_hlds__switch_detection__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 376 "switch_detection.m"
        *check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_6 = check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_0_5;
#line 376 "switch_detection.m"
      }
#line 376 "switch_detection.m"
    else
#line 378 "switch_detection.m"
      {
#line 378 "switch_detection.m"
        MR_Word check_hlds__switch_detection__Case0_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__HeadVar__3_3, (MR_Integer) 0)));
#line 378 "switch_detection.m"
        MR_Word check_hlds__switch_detection__Cases0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__HeadVar__3_3, (MR_Integer) 1)));
#line 378 "switch_detection.m"
        MR_Word check_hlds__switch_detection__Case_16;
#line 378 "switch_detection.m"
        MR_Word check_hlds__switch_detection__Cases_17;
#line 378 "switch_detection.m"
        MR_Word check_hlds__switch_detection__MainConsId_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__Case0_14, (MR_Integer) 0)));
#line 378 "switch_detection.m"
        MR_Word check_hlds__switch_detection__OtherConsIds_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__Case0_14, (MR_Integer) 1)));
#line 378 "switch_detection.m"
        MR_Word check_hlds__switch_detection__Goal0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__Case0_14, (MR_Integer) 2)));
#line 378 "switch_detection.m"
        MR_Word check_hlds__switch_detection__VarTypes_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_0_5, (MR_Integer) 2)));
#line 378 "switch_detection.m"
        MR_Word check_hlds__switch_detection__ModuleInfo0_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_0_5, (MR_Integer) 0)));
#line 378 "switch_detection.m"
        MR_Word check_hlds__switch_detection__VarType_24;
#line 378 "switch_detection.m"
        MR_Word check_hlds__switch_detection__InstMap1_25;
#line 378 "switch_detection.m"
        MR_Word check_hlds__switch_detection__ModuleInfo_26;
#line 378 "switch_detection.m"
        MR_Word check_hlds__switch_detection__Goal_27;
#line 378 "switch_detection.m"
        MR_Word check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_30_30;
#line 378 "switch_detection.m"
        MR_Word check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_31_31;
#line 380 "switch_detection.m"
        MR_Word check_hlds__switch_detection__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_0_5, (MR_Integer) 1)));
#line 380 "switch_detection.m"
        MR_Word check_hlds__switch_detection__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_0_5, (MR_Integer) 3)));
#line 385 "switch_detection.m"
        MR_Word check_hlds__switch_detection__V_40_40;
#line 385 "switch_detection.m"
        MR_Word check_hlds__switch_detection__V_41_41;
#line 385 "switch_detection.m"
        MR_Word check_hlds__switch_detection__V_42_42;
#line 385 "switch_detection.m"
        MR_Word check_hlds__switch_detection__V_39_39;
#line 245 "switch_detection.m"
        MR_Word check_hlds__switch_detection___InstMap_50;

#line 382 "switch_detection.m"
        {
#line 382 "switch_detection.m"
          parse_tree__prog_data__lookup_var_type_3_p_0(check_hlds__switch_detection__VarTypes_22, check_hlds__switch_detection__Var_1, &check_hlds__switch_detection__VarType_24);
        }
#line 383 "switch_detection.m"
        {
#line 383 "switch_detection.m"
          hlds__instmap__bind_var_to_functors_8_p_0(check_hlds__switch_detection__Var_1, check_hlds__switch_detection__VarType_24, check_hlds__switch_detection__MainConsId_19, check_hlds__switch_detection__OtherConsIds_20, check_hlds__switch_detection__InstMap0_2, &check_hlds__switch_detection__InstMap1_25, check_hlds__switch_detection__ModuleInfo0_23, &check_hlds__switch_detection__ModuleInfo_26);
        }
#line 385 "switch_detection.m"
        check_hlds__switch_detection__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_0_5, (MR_Integer) 0)));
#line 385 "switch_detection.m"
        check_hlds__switch_detection__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_0_5, (MR_Integer) 1)));
#line 385 "switch_detection.m"
        check_hlds__switch_detection__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_0_5, (MR_Integer) 2)));
#line 385 "switch_detection.m"
        check_hlds__switch_detection__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_0_5, (MR_Integer) 3)));
#line 385 "switch_detection.m"
        {
#line 385 "switch_detection.m"
          check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 385 "switch_detection.m"
          MR_hl_field(MR_mktag(0), check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_30_30, 0) = ((MR_Box) (check_hlds__switch_detection__ModuleInfo_26));
#line 385 "switch_detection.m"
          MR_hl_field(MR_mktag(0), check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_30_30, 1) = ((MR_Box) (check_hlds__switch_detection__V_40_40));
#line 385 "switch_detection.m"
          MR_hl_field(MR_mktag(0), check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_30_30, 2) = ((MR_Box) (check_hlds__switch_detection__V_41_41));
#line 385 "switch_detection.m"
          MR_hl_field(MR_mktag(0), check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_30_30, 3) = ((MR_Box) (check_hlds__switch_detection__V_42_42));
#line 385 "switch_detection.m"
        }
#line 245 "switch_detection.m"
        {
#line 245 "switch_detection.m"
          check_hlds__switch_detection__detect_switches_in_goal_update_instmap_6_p_0(check_hlds__switch_detection__InstMap1_25, &check_hlds__switch_detection___InstMap_50, check_hlds__switch_detection__Goal0_21, &check_hlds__switch_detection__Goal_27, check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_30_30, &check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_31_31);
        }
#line 387 "switch_detection.m"
        {
#line 387 "switch_detection.m"
          check_hlds__switch_detection__Case_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 387 "switch_detection.m"
          MR_hl_field(MR_mktag(0), check_hlds__switch_detection__Case_16, 0) = ((MR_Box) (check_hlds__switch_detection__MainConsId_19));
#line 387 "switch_detection.m"
          MR_hl_field(MR_mktag(0), check_hlds__switch_detection__Case_16, 1) = ((MR_Box) (check_hlds__switch_detection__OtherConsIds_20));
#line 387 "switch_detection.m"
          MR_hl_field(MR_mktag(0), check_hlds__switch_detection__Case_16, 2) = ((MR_Box) (check_hlds__switch_detection__Goal_27));
#line 387 "switch_detection.m"
        }
#line 388 "switch_detection.m"
        {
#line 388 "switch_detection.m"
          check_hlds__switch_detection__detect_switches_in_cases_6_p_0(check_hlds__switch_detection__Var_1, check_hlds__switch_detection__InstMap0_2, check_hlds__switch_detection__Cases0_15, &check_hlds__switch_detection__Cases_17, check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_31_31, check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_6);
        }
#line 377 "switch_detection.m"
        {
#line 377 "switch_detection.m"
          MR_Word base;
#line 377 "switch_detection.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 377 "switch_detection.m"
          *check_hlds__switch_detection__HeadVar__4_4 = base;
#line 377 "switch_detection.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__switch_detection__Case_16));
#line 377 "switch_detection.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__switch_detection__Cases_17));
#line 377 "switch_detection.m"
        }
#line 378 "switch_detection.m"
      }
#line 376 "switch_detection.m"
  }
#line 372 "switch_detection.m"
}

#line 362 "switch_detection.m"
static void MR_CALL 
check_hlds__switch_detection__detect_sub_switches_in_disj_5_p_0(
#line 362 "switch_detection.m"
  MR_Word check_hlds__switch_detection__InstMap_1,
#line 362 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__2_2,
#line 362 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__HeadVar__3_3,
#line 362 "switch_detection.m"
  MR_Word check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_0_4,
#line 362 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_5)
#line 362 "switch_detection.m"
{
#line 366 "switch_detection.m"
  {
#line 366 "switch_detection.m"
    MR_bool check_hlds__switch_detection__succeeded;

#line 366 "switch_detection.m"
    if ((check_hlds__switch_detection__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 366 "switch_detection.m"
      {
#line 366 "switch_detection.m"
        *check_hlds__switch_detection__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 366 "switch_detection.m"
        *check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_5 = check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_0_4;
#line 366 "switch_detection.m"
      }
#line 366 "switch_detection.m"
    else
#line 368 "switch_detection.m"
      {
#line 368 "switch_detection.m"
        MR_Word check_hlds__switch_detection__Goal0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__HeadVar__2_2, (MR_Integer) 0)));
#line 368 "switch_detection.m"
        MR_Word check_hlds__switch_detection__Goals0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__HeadVar__2_2, (MR_Integer) 1)));
#line 368 "switch_detection.m"
        MR_Word check_hlds__switch_detection__Goal_13;
#line 368 "switch_detection.m"
        MR_Word check_hlds__switch_detection__Goals_14;
#line 368 "switch_detection.m"
        MR_Word check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_18_18;
#line 245 "switch_detection.m"
        MR_Word check_hlds__switch_detection___InstMap_27;

#line 245 "switch_detection.m"
        {
#line 245 "switch_detection.m"
          check_hlds__switch_detection__detect_switches_in_goal_update_instmap_6_p_0(check_hlds__switch_detection__InstMap_1, &check_hlds__switch_detection___InstMap_27, check_hlds__switch_detection__Goal0_11, &check_hlds__switch_detection__Goal_13, check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_0_4, &check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_18_18);
        }
#line 370 "switch_detection.m"
        {
#line 370 "switch_detection.m"
          check_hlds__switch_detection__detect_sub_switches_in_disj_5_p_0(check_hlds__switch_detection__InstMap_1, check_hlds__switch_detection__Goals0_12, &check_hlds__switch_detection__Goals_14, check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_18_18, check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_5);
        }
#line 367 "switch_detection.m"
        {
#line 367 "switch_detection.m"
          MR_Word base;
#line 367 "switch_detection.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 367 "switch_detection.m"
          *check_hlds__switch_detection__HeadVar__3_3 = base;
#line 367 "switch_detection.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__switch_detection__Goal_13));
#line 367 "switch_detection.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__switch_detection__Goals_14));
#line 367 "switch_detection.m"
        }
#line 368 "switch_detection.m"
      }
#line 366 "switch_detection.m"
  }
#line 362 "switch_detection.m"
}

#line 265 "switch_detection.m"
static void MR_CALL 
check_hlds__switch_detection__detect_switches_in_goal_expr_6_p_0(
#line 265 "switch_detection.m"
  MR_Word check_hlds__switch_detection__InstMap0_7,
#line 265 "switch_detection.m"
  MR_Word check_hlds__switch_detection__GoalInfo_8,
#line 265 "switch_detection.m"
  MR_Word check_hlds__switch_detection__GoalExpr0_9,
#line 265 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__GoalExpr_10,
#line 265 "switch_detection.m"
  MR_Word check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_0_89,
#line 265 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_90)
#line 265 "switch_detection.m"
{
#line 272 "switch_detection.m"
  {
#line 272 "switch_detection.m"
    MR_bool check_hlds__switch_detection__succeeded;

#line 272 "switch_detection.m"
    if (((MR_tag((MR_Word) check_hlds__switch_detection__GoalExpr0_9)) == (MR_mktag((MR_Integer) 0))))
#line 288 "switch_detection.m"
      {
#line 288 "switch_detection.m"
        MR_Word check_hlds__switch_detection__SubGoal0_20 = (MR_Word) MR_body(((MR_Word) check_hlds__switch_detection__GoalExpr0_9), (MR_Integer) 0);
#line 288 "switch_detection.m"
        MR_Word check_hlds__switch_detection__SubGoal_21;

#line 289 "switch_detection.m"
        {
#line 289 "switch_detection.m"
          check_hlds__switch_detection__detect_switches_in_goal_5_p_0(check_hlds__switch_detection__InstMap0_7, check_hlds__switch_detection__SubGoal0_20, &check_hlds__switch_detection__SubGoal_21, check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_0_89, check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_90);
        }
#line 290 "switch_detection.m"
        *check_hlds__switch_detection__GoalExpr_10 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) check_hlds__switch_detection__SubGoal_21);
#line 288 "switch_detection.m"
      }
#line 272 "switch_detection.m"
    else
#line 272 "switch_detection.m"
      if (((MR_tag((MR_Word) check_hlds__switch_detection__GoalExpr0_9)) == (MR_mktag((MR_Integer) 1))))
#line 316 "switch_detection.m"
        {
#line 316 "switch_detection.m"
          MR_Word check_hlds__switch_detection__RHS0_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__GoalExpr0_9, (MR_Integer) 1)));
#line 316 "switch_detection.m"
          MR_Word check_hlds__switch_detection__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__GoalExpr0_9, (MR_Integer) 0)));
#line 316 "switch_detection.m"
          MR_Word check_hlds__switch_detection__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__GoalExpr0_9, (MR_Integer) 2)));
#line 316 "switch_detection.m"
          MR_Word check_hlds__switch_detection__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__GoalExpr0_9, (MR_Integer) 3)));
#line 316 "switch_detection.m"
          MR_Word check_hlds__switch_detection__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__GoalExpr0_9, (MR_Integer) 4)));

#line 328 "switch_detection.m"
          if (((MR_tag((MR_Word) check_hlds__switch_detection__RHS0_37)) == (MR_mktag((MR_Integer) 2))))
#line 318 "switch_detection.m"
            {
#line 318 "switch_detection.m"
              MR_Word check_hlds__switch_detection__Modes_46 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__switch_detection__RHS0_37, (MR_Integer) 4)));
#line 318 "switch_detection.m"
              MR_Word check_hlds__switch_detection__LambdaGoal0_48 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__switch_detection__RHS0_37, (MR_Integer) 6)));
#line 318 "switch_detection.m"
              MR_Word check_hlds__switch_detection__ModuleInfo_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_0_89, (MR_Integer) 0)));
#line 318 "switch_detection.m"
              MR_Word check_hlds__switch_detection__LambdaGoal_50;
#line 318 "switch_detection.m"
              MR_Word check_hlds__switch_detection__RHS_51;
#line 318 "switch_detection.m"
              MR_Word check_hlds__switch_detection__Vars_112 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__switch_detection__RHS0_37, (MR_Integer) 3)));
#line 318 "switch_detection.m"
              MR_Word check_hlds__switch_detection__InstMap1_113;
#line 318 "switch_detection.m"
              MR_Word check_hlds__switch_detection__V_41_41 = ((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__switch_detection__RHS0_37, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 318 "switch_detection.m"
              MR_Word check_hlds__switch_detection__V_42_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__switch_detection__RHS0_37, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 318 "switch_detection.m"
              MR_Word check_hlds__switch_detection__V_43_43 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__switch_detection__RHS0_37, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 318 "switch_detection.m"
              MR_Word check_hlds__switch_detection__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__switch_detection__RHS0_37, (MR_Integer) 2)));
#line 318 "switch_detection.m"
              MR_Word check_hlds__switch_detection__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__switch_detection__RHS0_37, (MR_Integer) 5)));
#line 321 "switch_detection.m"
              MR_Word check_hlds__switch_detection__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_0_89, (MR_Integer) 1)));
#line 321 "switch_detection.m"
              MR_Word check_hlds__switch_detection__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_0_89, (MR_Integer) 2)));
#line 321 "switch_detection.m"
              MR_Word check_hlds__switch_detection__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_0_89, (MR_Integer) 3)));
#line 326 "switch_detection.m"
              MR_Word check_hlds__switch_detection__V_127_127;
#line 326 "switch_detection.m"
              MR_Word check_hlds__switch_detection__V_128_128;
#line 326 "switch_detection.m"
              MR_Word check_hlds__switch_detection__V_129_129;
#line 326 "switch_detection.m"
              MR_Word check_hlds__switch_detection__V_131_131;
#line 326 "switch_detection.m"
              MR_Word check_hlds__switch_detection__V_132_132;
#line 326 "switch_detection.m"
              MR_Word check_hlds__switch_detection__V_133_133;
#line 326 "switch_detection.m"
              MR_Word check_hlds__switch_detection__V_134_134;
#line 326 "switch_detection.m"
              MR_Word check_hlds__switch_detection__V_135_135;
#line 327 "switch_detection.m"
              MR_Word check_hlds__switch_detection__V_136_136;
#line 327 "switch_detection.m"
              MR_Word check_hlds__switch_detection__V_138_138;
#line 327 "switch_detection.m"
              MR_Word check_hlds__switch_detection__V_139_139;
#line 327 "switch_detection.m"
              MR_Word check_hlds__switch_detection__V_140_140;
#line 327 "switch_detection.m"
              MR_Word check_hlds__switch_detection__V_137_137;

#line 322 "switch_detection.m"
              {
#line 322 "switch_detection.m"
                hlds__instmap__pre_lambda_update_5_p_0(check_hlds__switch_detection__ModuleInfo_49, check_hlds__switch_detection__Vars_112, check_hlds__switch_detection__Modes_46, check_hlds__switch_detection__InstMap0_7, &check_hlds__switch_detection__InstMap1_113);
              }
#line 324 "switch_detection.m"
              {
#line 324 "switch_detection.m"
                check_hlds__switch_detection__detect_switches_in_goal_5_p_0(check_hlds__switch_detection__InstMap1_113, check_hlds__switch_detection__LambdaGoal0_48, &check_hlds__switch_detection__LambdaGoal_50, check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_0_89, check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_90);
              }
#line 326 "switch_detection.m"
              check_hlds__switch_detection__V_127_127 = ((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__switch_detection__RHS0_37, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 326 "switch_detection.m"
              check_hlds__switch_detection__V_128_128 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__switch_detection__RHS0_37, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 326 "switch_detection.m"
              check_hlds__switch_detection__V_129_129 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__switch_detection__RHS0_37, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 326 "switch_detection.m"
              check_hlds__switch_detection__V_131_131 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__switch_detection__RHS0_37, (MR_Integer) 2)));
#line 326 "switch_detection.m"
              check_hlds__switch_detection__V_132_132 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__switch_detection__RHS0_37, (MR_Integer) 3)));
#line 326 "switch_detection.m"
              check_hlds__switch_detection__V_133_133 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__switch_detection__RHS0_37, (MR_Integer) 4)));
#line 326 "switch_detection.m"
              check_hlds__switch_detection__V_134_134 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__switch_detection__RHS0_37, (MR_Integer) 5)));
#line 326 "switch_detection.m"
              check_hlds__switch_detection__V_135_135 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__switch_detection__RHS0_37, (MR_Integer) 6)));
#line 326 "switch_detection.m"
              {
#line 326 "switch_detection.m"
                check_hlds__switch_detection__RHS_51 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 326 "switch_detection.m"
                MR_hl_field(MR_mktag(2), check_hlds__switch_detection__RHS_51, 0) = ((MR_Box) ((check_hlds__switch_detection__V_127_127 | ((((check_hlds__switch_detection__V_128_128 << (MR_Integer) 2)) | ((check_hlds__switch_detection__V_129_129 << (MR_Integer) 3)))))));
#line 326 "switch_detection.m"
                MR_hl_field(MR_mktag(2), check_hlds__switch_detection__RHS_51, 1) = (MR_Integer) 0;
#line 326 "switch_detection.m"
                MR_hl_field(MR_mktag(2), check_hlds__switch_detection__RHS_51, 2) = ((MR_Box) (check_hlds__switch_detection__V_131_131));
#line 326 "switch_detection.m"
                MR_hl_field(MR_mktag(2), check_hlds__switch_detection__RHS_51, 3) = ((MR_Box) (check_hlds__switch_detection__V_132_132));
#line 326 "switch_detection.m"
                MR_hl_field(MR_mktag(2), check_hlds__switch_detection__RHS_51, 4) = ((MR_Box) (check_hlds__switch_detection__V_133_133));
#line 326 "switch_detection.m"
                MR_hl_field(MR_mktag(2), check_hlds__switch_detection__RHS_51, 5) = ((MR_Box) (check_hlds__switch_detection__V_134_134));
#line 326 "switch_detection.m"
                MR_hl_field(MR_mktag(2), check_hlds__switch_detection__RHS_51, 6) = ((MR_Box) (check_hlds__switch_detection__LambdaGoal_50));
#line 326 "switch_detection.m"
              }
#line 327 "switch_detection.m"
              check_hlds__switch_detection__V_136_136 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__GoalExpr0_9, (MR_Integer) 0)));
#line 327 "switch_detection.m"
              check_hlds__switch_detection__V_137_137 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__GoalExpr0_9, (MR_Integer) 1)));
#line 327 "switch_detection.m"
              check_hlds__switch_detection__V_138_138 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__GoalExpr0_9, (MR_Integer) 2)));
#line 327 "switch_detection.m"
              check_hlds__switch_detection__V_139_139 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__GoalExpr0_9, (MR_Integer) 3)));
#line 327 "switch_detection.m"
              check_hlds__switch_detection__V_140_140 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__GoalExpr0_9, (MR_Integer) 4)));
#line 327 "switch_detection.m"
              {
#line 327 "switch_detection.m"
                MR_Word base;
#line 327 "switch_detection.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 327 "switch_detection.m"
                *check_hlds__switch_detection__GoalExpr_10 = base;
#line 327 "switch_detection.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__switch_detection__V_136_136));
#line 327 "switch_detection.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__switch_detection__RHS_51));
#line 327 "switch_detection.m"
                MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (check_hlds__switch_detection__V_138_138));
#line 327 "switch_detection.m"
                MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (check_hlds__switch_detection__V_139_139));
#line 327 "switch_detection.m"
                MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (check_hlds__switch_detection__V_140_140));
#line 327 "switch_detection.m"
              }
#line 318 "switch_detection.m"
            }
#line 328 "switch_detection.m"
          else
#line 331 "switch_detection.m"
            {
#line 332 "switch_detection.m"
              *check_hlds__switch_detection__GoalExpr_10 = check_hlds__switch_detection__GoalExpr0_9;
#line 332 "switch_detection.m"
              *check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_90 = check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_0_89;
#line 331 "switch_detection.m"
            }
#line 316 "switch_detection.m"
        }
#line 272 "switch_detection.m"
      else
#line 272 "switch_detection.m"
        if (((((MR_tag((MR_Word) check_hlds__switch_detection__GoalExpr0_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__switch_detection__GoalExpr0_9, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 284 "switch_detection.m"
          {
#line 284 "switch_detection.m"
            MR_Word check_hlds__switch_detection__ConjType_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__switch_detection__GoalExpr0_9, (MR_Integer) 1)));
#line 284 "switch_detection.m"
            MR_Word check_hlds__switch_detection__Goals0_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__switch_detection__GoalExpr0_9, (MR_Integer) 2)));
#line 284 "switch_detection.m"
            MR_Word check_hlds__switch_detection__Goals_19;

#line 285 "switch_detection.m"
            {
#line 285 "switch_detection.m"
              check_hlds__switch_detection__detect_switches_in_conj_5_p_0(check_hlds__switch_detection__InstMap0_7, check_hlds__switch_detection__Goals0_18, &check_hlds__switch_detection__Goals_19, check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_0_89, check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_90);
            }
#line 286 "switch_detection.m"
            {
#line 286 "switch_detection.m"
              MR_Word base;
#line 286 "switch_detection.m"
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 286 "switch_detection.m"
              *check_hlds__switch_detection__GoalExpr_10 = base;
#line 286 "switch_detection.m"
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 286 "switch_detection.m"
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__switch_detection__ConjType_17));
#line 286 "switch_detection.m"
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__switch_detection__Goals_19));
#line 286 "switch_detection.m"
            }
#line 284 "switch_detection.m"
          }
#line 272 "switch_detection.m"
        else
#line 272 "switch_detection.m"
          if (((((MR_tag((MR_Word) check_hlds__switch_detection__GoalExpr0_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__switch_detection__GoalExpr0_9, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 272 "switch_detection.m"
            {
#line 272 "switch_detection.m"
              MR_Word check_hlds__switch_detection__Disjuncts0_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__switch_detection__GoalExpr0_9, (MR_Integer) 1)));

#line 276 "switch_detection.m"
              if ((check_hlds__switch_detection__Disjuncts0_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 274 "switch_detection.m"
                {
#line 275 "switch_detection.m"
                  *check_hlds__switch_detection__GoalExpr_10 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__switch_detection_scalar_common_1[7]);
#line 275 "switch_detection.m"
                  *check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_90 = check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_0_89;
#line 274 "switch_detection.m"
                }
#line 276 "switch_detection.m"
              else
#line 277 "switch_detection.m"
                {
#line 277 "switch_detection.m"
                  MR_Word check_hlds__switch_detection__NonLocals_15;
#line 277 "switch_detection.m"
                  MR_Word check_hlds__switch_detection__NonLocalsList_16;

#line 278 "switch_detection.m"
                  {
#line 278 "switch_detection.m"
                    check_hlds__switch_detection__NonLocals_15 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__switch_detection__GoalInfo_8);
                  }
#line 279 "switch_detection.m"
                  {
#line 279 "switch_detection.m"
                    parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__switch_detection__NonLocals_15, &check_hlds__switch_detection__NonLocalsList_16);
                  }
#line 280 "switch_detection.m"
                  {
#line 280 "switch_detection.m"
                    check_hlds__switch_detection__detect_switches_in_disj_9_p_0(check_hlds__switch_detection__GoalInfo_8, check_hlds__switch_detection__NonLocalsList_16, check_hlds__switch_detection__Disjuncts0_12, check_hlds__switch_detection__NonLocalsList_16, check_hlds__switch_detection__InstMap0_7, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__switch_detection__GoalExpr_10, check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_0_89, check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_90);
#line 280 "switch_detection.m"
                    return;
                  }
#line 277 "switch_detection.m"
                }
#line 272 "switch_detection.m"
            }
#line 272 "switch_detection.m"
          else
#line 272 "switch_detection.m"
            if (((((MR_tag((MR_Word) check_hlds__switch_detection__GoalExpr0_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__switch_detection__GoalExpr0_9, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 292 "switch_detection.m"
              {
#line 292 "switch_detection.m"
                MR_Word check_hlds__switch_detection__Vars_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__switch_detection__GoalExpr0_9, (MR_Integer) 1)));
#line 292 "switch_detection.m"
                MR_Word check_hlds__switch_detection__Cond0_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__switch_detection__GoalExpr0_9, (MR_Integer) 2)));
#line 292 "switch_detection.m"
                MR_Word check_hlds__switch_detection__Then0_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__switch_detection__GoalExpr0_9, (MR_Integer) 3)));
#line 292 "switch_detection.m"
                MR_Word check_hlds__switch_detection__Else0_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__switch_detection__GoalExpr0_9, (MR_Integer) 4)));
#line 292 "switch_detection.m"
                MR_Word check_hlds__switch_detection__InstMap1_26;
#line 292 "switch_detection.m"
                MR_Word check_hlds__switch_detection__Cond_27;
#line 292 "switch_detection.m"
                MR_Word check_hlds__switch_detection__Then_28;
#line 292 "switch_detection.m"
                MR_Word check_hlds__switch_detection__Else_29;
#line 292 "switch_detection.m"
                MR_Word check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_101_101;
#line 292 "switch_detection.m"
                MR_Word check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_102_102;

#line 293 "switch_detection.m"
                {
#line 293 "switch_detection.m"
                  check_hlds__switch_detection__detect_switches_in_goal_update_instmap_6_p_0(check_hlds__switch_detection__InstMap0_7, &check_hlds__switch_detection__InstMap1_26, check_hlds__switch_detection__Cond0_23, &check_hlds__switch_detection__Cond_27, check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_0_89, &check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_101_101);
                }
#line 295 "switch_detection.m"
                {
#line 295 "switch_detection.m"
                  check_hlds__switch_detection__detect_switches_in_goal_5_p_0(check_hlds__switch_detection__InstMap1_26, check_hlds__switch_detection__Then0_24, &check_hlds__switch_detection__Then_28, check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_101_101, &check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_102_102);
                }
#line 296 "switch_detection.m"
                {
#line 296 "switch_detection.m"
                  check_hlds__switch_detection__detect_switches_in_goal_5_p_0(check_hlds__switch_detection__InstMap0_7, check_hlds__switch_detection__Else0_25, &check_hlds__switch_detection__Else_29, check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_102_102, check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_90);
                }
#line 297 "switch_detection.m"
                {
#line 297 "switch_detection.m"
                  MR_Word base;
#line 297 "switch_detection.m"
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 297 "switch_detection.m"
                  *check_hlds__switch_detection__GoalExpr_10 = base;
#line 297 "switch_detection.m"
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 297 "switch_detection.m"
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__switch_detection__Vars_22));
#line 297 "switch_detection.m"
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__switch_detection__Cond_27));
#line 297 "switch_detection.m"
                  MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__switch_detection__Then_28));
#line 297 "switch_detection.m"
                  MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (check_hlds__switch_detection__Else_29));
#line 297 "switch_detection.m"
                }
#line 292 "switch_detection.m"
              }
#line 272 "switch_detection.m"
            else
#line 272 "switch_detection.m"
              if (((((MR_tag((MR_Word) check_hlds__switch_detection__GoalExpr0_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__switch_detection__GoalExpr0_9, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 303 "switch_detection.m"
                {
#line 303 "switch_detection.m"
                  MR_Word check_hlds__switch_detection__Reason_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__switch_detection__GoalExpr0_9, (MR_Integer) 1)));
#line 303 "switch_detection.m"
                  MR_Word check_hlds__switch_detection__SubGoal0_110 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__switch_detection__GoalExpr0_9, (MR_Integer) 2)));
#line 303 "switch_detection.m"
                  MR_Word check_hlds__switch_detection__SubGoal_111;
#line 304 "switch_detection.m"
                  MR_Word check_hlds__switch_detection__V_98_98;
#line 304 "switch_detection.m"
                  MR_Word check_hlds__switch_detection__V_35_35;

#line 304 "switch_detection.m"
                  check_hlds__switch_detection__succeeded = ((((MR_tag((MR_Word) check_hlds__switch_detection__Reason_34)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__switch_detection__Reason_34, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 304 "switch_detection.m"
                  if (check_hlds__switch_detection__succeeded)
#line 304 "switch_detection.m"
                    {
#line 304 "switch_detection.m"
                      check_hlds__switch_detection__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__switch_detection__Reason_34, (MR_Integer) 1)));
#line 304 "switch_detection.m"
                      check_hlds__switch_detection__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__switch_detection__Reason_34, (MR_Integer) 2)));
#line 304 "switch_detection.m"
                      check_hlds__switch_detection__succeeded = (check_hlds__switch_detection__V_98_98 == (MR_Integer) 1);
#line 304 "switch_detection.m"
                    }
#line 308 "switch_detection.m"
                  if (check_hlds__switch_detection__succeeded)
#line 307 "switch_detection.m"
                    {
#line 307 "switch_detection.m"
                      check_hlds__switch_detection__SubGoal_111 = check_hlds__switch_detection__SubGoal0_110;
#line 307 "switch_detection.m"
                      *check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_90 = check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_0_89;
#line 307 "switch_detection.m"
                    }
#line 308 "switch_detection.m"
                  else
#line 312 "switch_detection.m"
                    {
#line 312 "switch_detection.m"
                      check_hlds__switch_detection__detect_switches_in_goal_5_p_0(check_hlds__switch_detection__InstMap0_7, check_hlds__switch_detection__SubGoal0_110, &check_hlds__switch_detection__SubGoal_111, check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_0_89, check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_90);
                    }
#line 314 "switch_detection.m"
                  {
#line 314 "switch_detection.m"
                    MR_Word base;
#line 314 "switch_detection.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 314 "switch_detection.m"
                    *check_hlds__switch_detection__GoalExpr_10 = base;
#line 314 "switch_detection.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 314 "switch_detection.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__switch_detection__Reason_34));
#line 314 "switch_detection.m"
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__switch_detection__SubGoal_111));
#line 314 "switch_detection.m"
                  }
#line 303 "switch_detection.m"
                }
#line 272 "switch_detection.m"
              else
#line 272 "switch_detection.m"
                if (((((MR_tag((MR_Word) check_hlds__switch_detection__GoalExpr0_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__switch_detection__GoalExpr0_9, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 341 "switch_detection.m"
                  {
#line 341 "switch_detection.m"
                    MR_Word check_hlds__switch_detection__ShortHand0_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__switch_detection__GoalExpr0_9, (MR_Integer) 1)));
#line 341 "switch_detection.m"
                    MR_Word check_hlds__switch_detection__ShortHand_84;

#line 350 "switch_detection.m"
                    if (((MR_tag((MR_Word) check_hlds__switch_detection__ShortHand0_74)) == (MR_mktag((MR_Integer) 1))))
#line 344 "switch_detection.m"
                      {
#line 344 "switch_detection.m"
                        MR_Word check_hlds__switch_detection__GoalType_75 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__ShortHand0_74, (MR_Integer) 0)));
#line 344 "switch_detection.m"
                        MR_Word check_hlds__switch_detection__Outer_76 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__ShortHand0_74, (MR_Integer) 1)));
#line 344 "switch_detection.m"
                        MR_Word check_hlds__switch_detection__Inner_77 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__ShortHand0_74, (MR_Integer) 2)));
#line 344 "switch_detection.m"
                        MR_Word check_hlds__switch_detection__MaybeOutputVars_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__ShortHand0_74, (MR_Integer) 3)));
#line 344 "switch_detection.m"
                        MR_Word check_hlds__switch_detection__MainGoal0_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__ShortHand0_74, (MR_Integer) 4)));
#line 344 "switch_detection.m"
                        MR_Word check_hlds__switch_detection__OrElseGoals0_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__ShortHand0_74, (MR_Integer) 5)));
#line 344 "switch_detection.m"
                        MR_Word check_hlds__switch_detection__OrElseInners_81 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__ShortHand0_74, (MR_Integer) 6)));
#line 344 "switch_detection.m"
                        MR_Word check_hlds__switch_detection__MainGoal_82;
#line 344 "switch_detection.m"
                        MR_Word check_hlds__switch_detection__OrElseGoals_83;
#line 344 "switch_detection.m"
                        MR_Word check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_95_95;

#line 345 "switch_detection.m"
                        {
#line 345 "switch_detection.m"
                          check_hlds__switch_detection__detect_switches_in_goal_5_p_0(check_hlds__switch_detection__InstMap0_7, check_hlds__switch_detection__MainGoal0_79, &check_hlds__switch_detection__MainGoal_82, check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_0_89, &check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_95_95);
                        }
#line 346 "switch_detection.m"
                        {
#line 346 "switch_detection.m"
                          check_hlds__switch_detection__detect_switches_in_orelse_5_p_0(check_hlds__switch_detection__InstMap0_7, check_hlds__switch_detection__OrElseGoals0_80, &check_hlds__switch_detection__OrElseGoals_83, check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_95_95, check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_90);
                        }
#line 348 "switch_detection.m"
                        {
#line 348 "switch_detection.m"
                          check_hlds__switch_detection__ShortHand_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 348 "switch_detection.m"
                          MR_hl_field(MR_mktag(1), check_hlds__switch_detection__ShortHand_84, 0) = ((MR_Box) (check_hlds__switch_detection__GoalType_75));
#line 348 "switch_detection.m"
                          MR_hl_field(MR_mktag(1), check_hlds__switch_detection__ShortHand_84, 1) = ((MR_Box) (check_hlds__switch_detection__Outer_76));
#line 348 "switch_detection.m"
                          MR_hl_field(MR_mktag(1), check_hlds__switch_detection__ShortHand_84, 2) = ((MR_Box) (check_hlds__switch_detection__Inner_77));
#line 348 "switch_detection.m"
                          MR_hl_field(MR_mktag(1), check_hlds__switch_detection__ShortHand_84, 3) = ((MR_Box) (check_hlds__switch_detection__MaybeOutputVars_78));
#line 348 "switch_detection.m"
                          MR_hl_field(MR_mktag(1), check_hlds__switch_detection__ShortHand_84, 4) = ((MR_Box) (check_hlds__switch_detection__MainGoal_82));
#line 348 "switch_detection.m"
                          MR_hl_field(MR_mktag(1), check_hlds__switch_detection__ShortHand_84, 5) = ((MR_Box) (check_hlds__switch_detection__OrElseGoals_83));
#line 348 "switch_detection.m"
                          MR_hl_field(MR_mktag(1), check_hlds__switch_detection__ShortHand_84, 6) = ((MR_Box) (check_hlds__switch_detection__OrElseInners_81));
#line 348 "switch_detection.m"
                        }
#line 344 "switch_detection.m"
                      }
#line 350 "switch_detection.m"
                    else
#line 350 "switch_detection.m"
                      if (((MR_tag((MR_Word) check_hlds__switch_detection__ShortHand0_74)) == (MR_mktag((MR_Integer) 0))))
#line 355 "switch_detection.m"
                        {
#line 357 "switch_detection.m"
                          {
#line 357 "switch_detection.m"
                            mercury__require__unexpected_3_p_0((MR_String) "check_hlds.switch_detection", (MR_String) "predicate \140check_hlds.switch_detection.detect_switches_in_goal_expr\'/6", (MR_String) "bi_implication");
#line 357 "switch_detection.m"
                            return;
                          }
#line 355 "switch_detection.m"
                        }
#line 350 "switch_detection.m"
                      else
#line 351 "switch_detection.m"
                        {
#line 351 "switch_detection.m"
                          MR_Word check_hlds__switch_detection__MaybeIO_85 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__switch_detection__ShortHand0_74, (MR_Integer) 0)));
#line 351 "switch_detection.m"
                          MR_Word check_hlds__switch_detection__ResultVar_86 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__switch_detection__ShortHand0_74, (MR_Integer) 1)));
#line 351 "switch_detection.m"
                          MR_Word check_hlds__switch_detection__SubGoal0_118 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__switch_detection__ShortHand0_74, (MR_Integer) 2)));
#line 351 "switch_detection.m"
                          MR_Word check_hlds__switch_detection__SubGoal_119;

#line 352 "switch_detection.m"
                          {
#line 352 "switch_detection.m"
                            check_hlds__switch_detection__detect_switches_in_goal_5_p_0(check_hlds__switch_detection__InstMap0_7, check_hlds__switch_detection__SubGoal0_118, &check_hlds__switch_detection__SubGoal_119, check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_0_89, check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_90);
                          }
#line 353 "switch_detection.m"
                          {
#line 353 "switch_detection.m"
                            check_hlds__switch_detection__ShortHand_84 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 353 "switch_detection.m"
                            MR_hl_field(MR_mktag(2), check_hlds__switch_detection__ShortHand_84, 0) = ((MR_Box) (check_hlds__switch_detection__MaybeIO_85));
#line 353 "switch_detection.m"
                            MR_hl_field(MR_mktag(2), check_hlds__switch_detection__ShortHand_84, 1) = ((MR_Box) (check_hlds__switch_detection__ResultVar_86));
#line 353 "switch_detection.m"
                            MR_hl_field(MR_mktag(2), check_hlds__switch_detection__ShortHand_84, 2) = ((MR_Box) (check_hlds__switch_detection__SubGoal_119));
#line 353 "switch_detection.m"
                          }
#line 351 "switch_detection.m"
                        }
#line 359 "switch_detection.m"
                    {
#line 359 "switch_detection.m"
                      MR_Word base;
#line 359 "switch_detection.m"
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 359 "switch_detection.m"
                      *check_hlds__switch_detection__GoalExpr_10 = base;
#line 359 "switch_detection.m"
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 359 "switch_detection.m"
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__switch_detection__ShortHand_84));
#line 359 "switch_detection.m"
                    }
#line 341 "switch_detection.m"
                  }
#line 272 "switch_detection.m"
                else
#line 272 "switch_detection.m"
                  if (((((MR_tag((MR_Word) check_hlds__switch_detection__GoalExpr0_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__switch_detection__GoalExpr0_9, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 299 "switch_detection.m"
                    {
#line 299 "switch_detection.m"
                      MR_Word check_hlds__switch_detection__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__switch_detection__GoalExpr0_9, (MR_Integer) 1)));
#line 299 "switch_detection.m"
                      MR_Word check_hlds__switch_detection__CanFail_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__switch_detection__GoalExpr0_9, (MR_Integer) 2)));
#line 299 "switch_detection.m"
                      MR_Word check_hlds__switch_detection__Cases0_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__switch_detection__GoalExpr0_9, (MR_Integer) 3)));
#line 299 "switch_detection.m"
                      MR_Word check_hlds__switch_detection__Cases_33;

#line 300 "switch_detection.m"
                      {
#line 300 "switch_detection.m"
                        check_hlds__switch_detection__detect_switches_in_cases_6_p_0(check_hlds__switch_detection__Var_30, check_hlds__switch_detection__InstMap0_7, check_hlds__switch_detection__Cases0_32, &check_hlds__switch_detection__Cases_33, check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_0_89, check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_90);
                      }
#line 301 "switch_detection.m"
                      {
#line 301 "switch_detection.m"
                        MR_Word base;
#line 301 "switch_detection.m"
                        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 301 "switch_detection.m"
                        *check_hlds__switch_detection__GoalExpr_10 = base;
#line 301 "switch_detection.m"
                        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 301 "switch_detection.m"
                        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__switch_detection__Var_30));
#line 301 "switch_detection.m"
                        MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__switch_detection__CanFail_31));
#line 301 "switch_detection.m"
                        MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__switch_detection__Cases_33));
#line 301 "switch_detection.m"
                      }
#line 299 "switch_detection.m"
                    }
#line 272 "switch_detection.m"
                  else
#line 338 "switch_detection.m"
                    {
#line 339 "switch_detection.m"
                      *check_hlds__switch_detection__GoalExpr_10 = check_hlds__switch_detection__GoalExpr0_9;
#line 339 "switch_detection.m"
                      *check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_90 = check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_0_89;
#line 338 "switch_detection.m"
                    }
#line 272 "switch_detection.m"
  }
#line 265 "switch_detection.m"
}

#line 252 "switch_detection.m"
static void MR_CALL 
check_hlds__switch_detection__detect_switches_in_goal_update_instmap_6_p_0(
#line 252 "switch_detection.m"
  MR_Word check_hlds__switch_detection__STATE_VARIABLE_InstMap_0_14,
#line 252 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__STATE_VARIABLE_InstMap_15,
#line 252 "switch_detection.m"
  MR_Word check_hlds__switch_detection__Goal0_8,
#line 252 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__Goal_9,
#line 252 "switch_detection.m"
  MR_Word check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_0_16,
#line 252 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_17)
#line 252 "switch_detection.m"
{
#line 256 "switch_detection.m"
  {
#line 256 "switch_detection.m"
    MR_bool check_hlds__switch_detection__succeeded;
#line 256 "switch_detection.m"
    MR_Word check_hlds__switch_detection__GoalExpr0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__Goal0_8, (MR_Integer) 0)));
#line 256 "switch_detection.m"
    MR_Word check_hlds__switch_detection__GoalInfo_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__Goal0_8, (MR_Integer) 1)));
#line 256 "switch_detection.m"
    MR_Word check_hlds__switch_detection__GoalExpr_13;

#line 258 "switch_detection.m"
    {
#line 258 "switch_detection.m"
      check_hlds__switch_detection__detect_switches_in_goal_expr_6_p_0(check_hlds__switch_detection__STATE_VARIABLE_InstMap_0_14, check_hlds__switch_detection__GoalInfo_12, check_hlds__switch_detection__GoalExpr0_11, &check_hlds__switch_detection__GoalExpr_13, check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_0_16, check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_17);
    }
#line 260 "switch_detection.m"
    {
#line 260 "switch_detection.m"
      MR_Word base;
#line 260 "switch_detection.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 260 "switch_detection.m"
      *check_hlds__switch_detection__Goal_9 = base;
#line 260 "switch_detection.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__switch_detection__GoalExpr_13));
#line 260 "switch_detection.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__switch_detection__GoalInfo_12));
#line 260 "switch_detection.m"
    }
#line 261 "switch_detection.m"
    {
#line 261 "switch_detection.m"
      hlds__goal_util__update_instmap_3_p_0(check_hlds__switch_detection__Goal0_8, check_hlds__switch_detection__STATE_VARIABLE_InstMap_0_14, check_hlds__switch_detection__STATE_VARIABLE_InstMap_15);
#line 261 "switch_detection.m"
      return;
    }
#line 256 "switch_detection.m"
  }
#line 252 "switch_detection.m"
}

#line 241 "switch_detection.m"
static void MR_CALL 
check_hlds__switch_detection__detect_switches_in_goal_5_p_0(
#line 241 "switch_detection.m"
  MR_Word check_hlds__switch_detection__InstMap0_6,
#line 241 "switch_detection.m"
  MR_Word check_hlds__switch_detection__STATE_VARIABLE_Goal_0_10,
#line 241 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__STATE_VARIABLE_Goal_11,
#line 241 "switch_detection.m"
  MR_Word check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_0_12,
#line 241 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_13)
#line 241 "switch_detection.m"
{
#line 245 "switch_detection.m"
  {
#line 245 "switch_detection.m"
    MR_bool check_hlds__switch_detection__succeeded;
#line 245 "switch_detection.m"
    MR_Word check_hlds__switch_detection___InstMap_9;

#line 245 "switch_detection.m"
    {
#line 245 "switch_detection.m"
      check_hlds__switch_detection__detect_switches_in_goal_update_instmap_6_p_0(check_hlds__switch_detection__InstMap0_6, &check_hlds__switch_detection___InstMap_9, check_hlds__switch_detection__STATE_VARIABLE_Goal_0_10, check_hlds__switch_detection__STATE_VARIABLE_Goal_11, check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_0_12, check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_13);
    }
#line 245 "switch_detection.m"
  }
#line 241 "switch_detection.m"
}

#line 189 "switch_detection.m"
static void MR_CALL 
check_hlds__switch_detection__detect_switches_in_procs_4_p_0(
#line 189 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__1_1,
#line 189 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__2_2,
#line 189 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__3_3,
#line 189 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__HeadVar__4_4)
#line 189 "switch_detection.m"
{
#line 193 "switch_detection.m"
  {
#line 193 "switch_detection.m"
    MR_bool check_hlds__switch_detection__succeeded;

#line 193 "switch_detection.m"
    if ((check_hlds__switch_detection__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 193 "switch_detection.m"
      *check_hlds__switch_detection__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 193 "switch_detection.m"
    else
#line 195 "switch_detection.m"
      {
#line 195 "switch_detection.m"
        MR_Word check_hlds__switch_detection__ProcIdInfo0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__HeadVar__3_3, (MR_Integer) 0)));
#line 195 "switch_detection.m"
        MR_Word check_hlds__switch_detection__ProcIdsInfos0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__HeadVar__3_3, (MR_Integer) 1)));
#line 195 "switch_detection.m"
        MR_Word check_hlds__switch_detection__ProcIdInfo_11;
#line 195 "switch_detection.m"
        MR_Word check_hlds__switch_detection__ProcIdsInfos_12;
#line 195 "switch_detection.m"
        MR_Integer check_hlds__switch_detection__ProcId_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__ProcIdInfo0_9, (MR_Integer) 0)));
#line 195 "switch_detection.m"
        MR_Word check_hlds__switch_detection__ProcInfo0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__ProcIdInfo0_9, (MR_Integer) 1)));

#line 197 "switch_detection.m"
        {
#line 197 "switch_detection.m"
          check_hlds__switch_detection__succeeded = mercury__list__member_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0, ((MR_Box) (check_hlds__switch_detection__ProcId_13)), check_hlds__switch_detection__HeadVar__2_2);
        }
#line 200 "switch_detection.m"
        if (check_hlds__switch_detection__succeeded)
#line 198 "switch_detection.m"
          {
#line 198 "switch_detection.m"
            MR_Word check_hlds__switch_detection__ProcInfo_15;

#line 198 "switch_detection.m"
            {
#line 198 "switch_detection.m"
              check_hlds__switch_detection__detect_switches_in_proc_3_p_0(check_hlds__switch_detection__HeadVar__1_1, check_hlds__switch_detection__ProcInfo0_14, &check_hlds__switch_detection__ProcInfo_15);
            }
#line 199 "switch_detection.m"
            {
#line 199 "switch_detection.m"
              check_hlds__switch_detection__ProcIdInfo_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 199 "switch_detection.m"
              MR_hl_field(MR_mktag(0), check_hlds__switch_detection__ProcIdInfo_11, 0) = ((MR_Box) (check_hlds__switch_detection__ProcId_13));
#line 199 "switch_detection.m"
              MR_hl_field(MR_mktag(0), check_hlds__switch_detection__ProcIdInfo_11, 1) = ((MR_Box) (check_hlds__switch_detection__ProcInfo_15));
#line 199 "switch_detection.m"
            }
#line 198 "switch_detection.m"
          }
#line 200 "switch_detection.m"
        else
#line 201 "switch_detection.m"
          check_hlds__switch_detection__ProcIdInfo_11 = check_hlds__switch_detection__ProcIdInfo0_9;
#line 203 "switch_detection.m"
        {
#line 203 "switch_detection.m"
          check_hlds__switch_detection__detect_switches_in_procs_4_p_0(check_hlds__switch_detection__HeadVar__1_1, check_hlds__switch_detection__HeadVar__2_2, check_hlds__switch_detection__ProcIdsInfos0_10, &check_hlds__switch_detection__ProcIdsInfos_12);
        }
#line 195 "switch_detection.m"
        {
#line 195 "switch_detection.m"
          MR_Word base;
#line 195 "switch_detection.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 195 "switch_detection.m"
          *check_hlds__switch_detection__HeadVar__4_4 = base;
#line 195 "switch_detection.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__switch_detection__ProcIdInfo_11));
#line 195 "switch_detection.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__switch_detection__ProcIdsInfos_12));
#line 195 "switch_detection.m"
        }
#line 195 "switch_detection.m"
      }
#line 193 "switch_detection.m"
  }
#line 189 "switch_detection.m"
}

#line 146 "switch_detection.m"
static void MR_CALL 
check_hlds__switch_detection__detect_switches_in_preds_4_p_0(
#line 146 "switch_detection.m"
  MR_Word check_hlds__switch_detection__Info_1,
#line 146 "switch_detection.m"
  MR_Word check_hlds__switch_detection__ValidPredIdSet_2,
#line 146 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__3_3,
#line 146 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__HeadVar__4_4)
#line 146 "switch_detection.m"
{
#line 151 "switch_detection.m"
  {
#line 151 "switch_detection.m"
    MR_bool check_hlds__switch_detection__succeeded;

#line 151 "switch_detection.m"
    if ((check_hlds__switch_detection__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 151 "switch_detection.m"
      *check_hlds__switch_detection__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 151 "switch_detection.m"
    else
#line 153 "switch_detection.m"
      {
#line 153 "switch_detection.m"
        MR_Word check_hlds__switch_detection__PredIdInfo0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__HeadVar__3_3, (MR_Integer) 0)));
#line 153 "switch_detection.m"
        MR_Word check_hlds__switch_detection__PredIdsInfos0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__HeadVar__3_3, (MR_Integer) 1)));
#line 153 "switch_detection.m"
        MR_Word check_hlds__switch_detection__PredIdInfo_11;
#line 153 "switch_detection.m"
        MR_Word check_hlds__switch_detection__PredIdsInfos_12;
#line 153 "switch_detection.m"
        MR_Word check_hlds__switch_detection__PredId_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__PredIdInfo0_9, (MR_Integer) 0)));
#line 153 "switch_detection.m"
        MR_Word check_hlds__switch_detection__PredInfo0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__PredIdInfo0_9, (MR_Integer) 1)));

#line 155 "switch_detection.m"
        {
#line 155 "switch_detection.m"
          check_hlds__switch_detection__succeeded = mercury__set_tree234__contains_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, check_hlds__switch_detection__ValidPredIdSet_2, ((MR_Box) (check_hlds__switch_detection__PredId_13)));
        }
#line 158 "switch_detection.m"
        if (check_hlds__switch_detection__succeeded)
#line 156 "switch_detection.m"
          {
#line 156 "switch_detection.m"
            MR_Word check_hlds__switch_detection__PredInfo_15;
#line 156 "switch_detection.m"
            MR_Word check_hlds__switch_detection__NonImportedProcIds_22;

#line 168 "switch_detection.m"
            {
#line 168 "switch_detection.m"
              check_hlds__switch_detection__NonImportedProcIds_22 = hlds__hlds_pred__pred_info_non_imported_procids_1_f_0(check_hlds__switch_detection__PredInfo0_14);
            }
#line 185 "switch_detection.m"
            if ((check_hlds__switch_detection__NonImportedProcIds_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 186 "switch_detection.m"
              check_hlds__switch_detection__PredInfo_15 = check_hlds__switch_detection__PredInfo0_14;
#line 185 "switch_detection.m"
            else
#line 170 "switch_detection.m"
              {
#line 170 "switch_detection.m"
                MR_Word check_hlds__switch_detection__TypeCtorInfo_24_36;
#line 170 "switch_detection.m"
                MR_Word check_hlds__switch_detection__TypeCtorInfo_25_37;
#line 170 "switch_detection.m"
                MR_Word check_hlds__switch_detection__ProcTable0_27;
#line 170 "switch_detection.m"
                MR_Word check_hlds__switch_detection__ProcList0_28;
#line 170 "switch_detection.m"
                MR_Word check_hlds__switch_detection__ProcList_29;
#line 170 "switch_detection.m"
                MR_Word check_hlds__switch_detection__ProcTable_30;
#line 171 "switch_detection.m"
                MR_Word check_hlds__switch_detection__ModuleInfo_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__Info_1, (MR_Integer) 0)));
#line 172 "switch_detection.m"
                MR_Word check_hlds__switch_detection__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__Info_1, (MR_Integer) 1)));

#line 173 "switch_detection.m"
                {
#line 173 "switch_detection.m"
                  hlds__passes_aux__write_pred_progress_message_5_p_0((MR_String) "% Detecting switches in ", check_hlds__switch_detection__PredId_13, check_hlds__switch_detection__ModuleInfo_26);
                }
#line 176 "switch_detection.m"
                {
#line 176 "switch_detection.m"
                  hlds__hlds_pred__pred_info_get_proc_table_2_p_0(check_hlds__switch_detection__PredInfo0_14, &check_hlds__switch_detection__ProcTable0_27);
                }
#line 10376 "check_hlds.switch_detection.c"
                check_hlds__switch_detection__TypeCtorInfo_24_36 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0;
#line 10378 "check_hlds.switch_detection.c"
                check_hlds__switch_detection__TypeCtorInfo_25_37 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 177 "switch_detection.m"
                {
#line 177 "switch_detection.m"
                  mercury__map__to_assoc_list_2_p_0(check_hlds__switch_detection__TypeCtorInfo_24_36, check_hlds__switch_detection__TypeCtorInfo_25_37, check_hlds__switch_detection__ProcTable0_27, &check_hlds__switch_detection__ProcList0_28);
                }
#line 178 "switch_detection.m"
                {
#line 178 "switch_detection.m"
                  check_hlds__switch_detection__detect_switches_in_procs_4_p_0(check_hlds__switch_detection__Info_1, check_hlds__switch_detection__NonImportedProcIds_22, check_hlds__switch_detection__ProcList0_28, &check_hlds__switch_detection__ProcList_29);
                }
#line 180 "switch_detection.m"
                {
#line 180 "switch_detection.m"
                  mercury__map__from_sorted_assoc_list_2_p_0(check_hlds__switch_detection__TypeCtorInfo_24_36, check_hlds__switch_detection__TypeCtorInfo_25_37, check_hlds__switch_detection__ProcList_29, &check_hlds__switch_detection__ProcTable_30);
                }
#line 181 "switch_detection.m"
                {
#line 181 "switch_detection.m"
                  hlds__hlds_pred__pred_info_set_proc_table_3_p_0(check_hlds__switch_detection__ProcTable_30, check_hlds__switch_detection__PredInfo0_14, &check_hlds__switch_detection__PredInfo_15);
                }
#line 170 "switch_detection.m"
              }
#line 157 "switch_detection.m"
            {
#line 157 "switch_detection.m"
              check_hlds__switch_detection__PredIdInfo_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 157 "switch_detection.m"
              MR_hl_field(MR_mktag(0), check_hlds__switch_detection__PredIdInfo_11, 0) = ((MR_Box) (check_hlds__switch_detection__PredId_13));
#line 157 "switch_detection.m"
              MR_hl_field(MR_mktag(0), check_hlds__switch_detection__PredIdInfo_11, 1) = ((MR_Box) (check_hlds__switch_detection__PredInfo_15));
#line 157 "switch_detection.m"
            }
#line 156 "switch_detection.m"
          }
#line 158 "switch_detection.m"
        else
#line 159 "switch_detection.m"
          check_hlds__switch_detection__PredIdInfo_11 = check_hlds__switch_detection__PredIdInfo0_9;
#line 161 "switch_detection.m"
        {
#line 161 "switch_detection.m"
          check_hlds__switch_detection__detect_switches_in_preds_4_p_0(check_hlds__switch_detection__Info_1, check_hlds__switch_detection__ValidPredIdSet_2, check_hlds__switch_detection__PredIdsInfos0_10, &check_hlds__switch_detection__PredIdsInfos_12);
        }
#line 153 "switch_detection.m"
        {
#line 153 "switch_detection.m"
          MR_Word base;
#line 153 "switch_detection.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 153 "switch_detection.m"
          *check_hlds__switch_detection__HeadVar__4_4 = base;
#line 153 "switch_detection.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__switch_detection__PredIdInfo_11));
#line 153 "switch_detection.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__switch_detection__PredIdsInfos_12));
#line 153 "switch_detection.m"
        }
#line 153 "switch_detection.m"
      }
#line 151 "switch_detection.m"
  }
#line 146 "switch_detection.m"
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
#line 889 "switch_detection.m"
  {
#line 889 "switch_detection.m"
    MR_bool check_hlds__switch_detection__succeeded;
#line 889 "switch_detection.m"
    MR_Word check_hlds__switch_detection__Subst_16;
#line 889 "switch_detection.m"
    MR_Word check_hlds__switch_detection__DeconstructSearch_18;
#line 891 "switch_detection.m"
    MR_Word check_hlds__switch_detection__V_17_17;

#line 890 "switch_detection.m"
    {
#line 890 "switch_detection.m"
      mercury__map__init_1_p_0((MR_Word) &check_hlds__switch_detection_scalar_common_1[0], (MR_Word) &check_hlds__switch_detection_scalar_common_1[1], &check_hlds__switch_detection__Subst_16);
    }
#line 891 "switch_detection.m"
    {
#line 891 "switch_detection.m"
      check_hlds__switch_detection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_98_105_110_100_95_118_97_114_95_50_95_95_91_49_44_32_50_93_95_48_11_p_0(check_hlds__switch_detection__Var_10, check_hlds__switch_detection__ProcessUnify_11, check_hlds__switch_detection__STATE_VARIABLE_Goal_0_19, check_hlds__switch_detection__STATE_VARIABLE_Goal_20, check_hlds__switch_detection__Subst_16, &check_hlds__switch_detection__V_17_17, check_hlds__switch_detection__STATE_VARIABLE_Result_0_21, check_hlds__switch_detection__STATE_VARIABLE_Result_22, check_hlds__switch_detection__STATE_VARIABLE_Info_0_23, check_hlds__switch_detection__STATE_VARIABLE_Info_24, &check_hlds__switch_detection__DeconstructSearch_18);
    }
#line 896 "switch_detection.m"
    if ((check_hlds__switch_detection__DeconstructSearch_18 == (MR_Integer) 0))
#line 895 "switch_detection.m"
      *check_hlds__switch_detection__FoundDeconstruct_15 = (MR_Integer) 1;
#line 896 "switch_detection.m"
    else
#line 896 "switch_detection.m"
      if ((check_hlds__switch_detection__DeconstructSearch_18 == (MR_Integer) 1))
#line 898 "switch_detection.m"
        *check_hlds__switch_detection__FoundDeconstruct_15 = (MR_Integer) 0;
#line 896 "switch_detection.m"
      else
#line 901 "switch_detection.m"
        *check_hlds__switch_detection__FoundDeconstruct_15 = (MR_Integer) 1;
#line 889 "switch_detection.m"
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
#line 206 "switch_detection.m"
  {
#line 206 "switch_detection.m"
    MR_bool check_hlds__switch_detection__succeeded;
#line 206 "switch_detection.m"
    MR_Word check_hlds__switch_detection__ModuleInfo_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__Info_4, (MR_Integer) 0)));
#line 206 "switch_detection.m"
    MR_Word check_hlds__switch_detection__AllowMulti_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__Info_4, (MR_Integer) 1)));
#line 206 "switch_detection.m"
    MR_Word check_hlds__switch_detection__VarTypes_8;
#line 206 "switch_detection.m"
    MR_Word check_hlds__switch_detection__LocalInfo0_9;
#line 206 "switch_detection.m"
    MR_Word check_hlds__switch_detection__Goal0_10;
#line 206 "switch_detection.m"
    MR_Word check_hlds__switch_detection__InstMap0_11;
#line 206 "switch_detection.m"
    MR_Word check_hlds__switch_detection__Goal_12;
#line 206 "switch_detection.m"
    MR_Word check_hlds__switch_detection__LocalInfo_13;
#line 206 "switch_detection.m"
    MR_Word check_hlds__switch_detection__Requant_14;
#line 206 "switch_detection.m"
    MR_Word check_hlds__switch_detection__STATE_VARIABLE_ProcInfo_18_18;
#line 245 "switch_detection.m"
    MR_Word check_hlds__switch_detection___InstMap_31;
#line 220 "switch_detection.m"
    MR_Word check_hlds__switch_detection__V_21_21;
#line 220 "switch_detection.m"
    MR_Word check_hlds__switch_detection__V_22_22;
#line 220 "switch_detection.m"
    MR_Word check_hlds__switch_detection__V_23_23;

#line 211 "switch_detection.m"
    {
#line 211 "switch_detection.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(check_hlds__switch_detection__STATE_VARIABLE_ProcInfo_0_15, &check_hlds__switch_detection__VarTypes_8);
    }
#line 212 "switch_detection.m"
    {
#line 212 "switch_detection.m"
      check_hlds__switch_detection__LocalInfo0_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 212 "switch_detection.m"
      MR_hl_field(MR_mktag(0), check_hlds__switch_detection__LocalInfo0_9, 0) = ((MR_Box) (check_hlds__switch_detection__ModuleInfo_6));
#line 212 "switch_detection.m"
      MR_hl_field(MR_mktag(0), check_hlds__switch_detection__LocalInfo0_9, 1) = ((MR_Box) (check_hlds__switch_detection__AllowMulti_7));
#line 212 "switch_detection.m"
      MR_hl_field(MR_mktag(0), check_hlds__switch_detection__LocalInfo0_9, 2) = ((MR_Box) (check_hlds__switch_detection__VarTypes_8));
#line 212 "switch_detection.m"
      MR_hl_field(MR_mktag(0), check_hlds__switch_detection__LocalInfo0_9, 3) = ((MR_Box) ((MR_Integer) 1));
#line 212 "switch_detection.m"
    }
#line 215 "switch_detection.m"
    {
#line 215 "switch_detection.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(check_hlds__switch_detection__STATE_VARIABLE_ProcInfo_0_15, &check_hlds__switch_detection__Goal0_10);
    }
#line 216 "switch_detection.m"
    {
#line 216 "switch_detection.m"
      hlds__hlds_pred__proc_info_get_initial_instmap_3_p_0(check_hlds__switch_detection__STATE_VARIABLE_ProcInfo_0_15, check_hlds__switch_detection__ModuleInfo_6, &check_hlds__switch_detection__InstMap0_11);
    }
#line 245 "switch_detection.m"
    {
#line 245 "switch_detection.m"
      check_hlds__switch_detection__detect_switches_in_goal_update_instmap_6_p_0(check_hlds__switch_detection__InstMap0_11, &check_hlds__switch_detection___InstMap_31, check_hlds__switch_detection__Goal0_10, &check_hlds__switch_detection__Goal_12, check_hlds__switch_detection__LocalInfo0_9, &check_hlds__switch_detection__LocalInfo_13);
    }
#line 219 "switch_detection.m"
    {
#line 219 "switch_detection.m"
      hlds__hlds_pred__proc_info_set_goal_3_p_0(check_hlds__switch_detection__Goal_12, check_hlds__switch_detection__STATE_VARIABLE_ProcInfo_0_15, &check_hlds__switch_detection__STATE_VARIABLE_ProcInfo_18_18);
    }
#line 220 "switch_detection.m"
    check_hlds__switch_detection__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__LocalInfo_13, (MR_Integer) 0)));
#line 220 "switch_detection.m"
    check_hlds__switch_detection__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__LocalInfo_13, (MR_Integer) 1)));
#line 220 "switch_detection.m"
    check_hlds__switch_detection__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__LocalInfo_13, (MR_Integer) 2)));
#line 220 "switch_detection.m"
    check_hlds__switch_detection__Requant_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__LocalInfo_13, (MR_Integer) 3)));
#line 224 "switch_detection.m"
    if ((check_hlds__switch_detection__Requant_14 == (MR_Integer) 1))
#line 225 "switch_detection.m"
      *check_hlds__switch_detection__STATE_VARIABLE_ProcInfo_16 = check_hlds__switch_detection__STATE_VARIABLE_ProcInfo_18_18;
#line 224 "switch_detection.m"
    else
#line 222 "switch_detection.m"
      {
#line 223 "switch_detection.m"
        {
#line 223 "switch_detection.m"
          hlds__quantification__requantify_proc_general_3_p_0((MR_Integer) 0, check_hlds__switch_detection__STATE_VARIABLE_ProcInfo_18_18, check_hlds__switch_detection__STATE_VARIABLE_ProcInfo_16);
#line 223 "switch_detection.m"
          return;
        }
#line 222 "switch_detection.m"
      }
#line 206 "switch_detection.m"
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
#line 125 "switch_detection.m"
  {
#line 125 "switch_detection.m"
    MR_bool check_hlds__switch_detection__succeeded;
#line 125 "switch_detection.m"
    MR_Word check_hlds__switch_detection__Info_4;
#line 125 "switch_detection.m"
    MR_Word check_hlds__switch_detection__AllowMulti_5;
#line 125 "switch_detection.m"
    MR_Word check_hlds__switch_detection__Globals_8;
#line 125 "switch_detection.m"
    MR_Word check_hlds__switch_detection__Allow_9;

#line 115 "switch_detection.m"
    {
#line 115 "switch_detection.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__switch_detection__ModuleInfo_3, &check_hlds__switch_detection__Globals_8);
    }
#line 116 "switch_detection.m"
    {
#line 116 "switch_detection.m"
      libs__globals__lookup_bool_option_3_p_0(check_hlds__switch_detection__Globals_8, (MR_Integer) 297, &check_hlds__switch_detection__Allow_9);
    }
#line 120 "switch_detection.m"
    if ((check_hlds__switch_detection__Allow_9 == (MR_Integer) 0))
#line 122 "switch_detection.m"
      check_hlds__switch_detection__AllowMulti_5 = (MR_Integer) 1;
#line 120 "switch_detection.m"
    else
#line 119 "switch_detection.m"
      check_hlds__switch_detection__AllowMulti_5 = (MR_Integer) 0;
#line 127 "switch_detection.m"
    {
#line 127 "switch_detection.m"
      check_hlds__switch_detection__Info_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 127 "switch_detection.m"
      MR_hl_field(MR_mktag(0), check_hlds__switch_detection__Info_4, 0) = ((MR_Box) (check_hlds__switch_detection__ModuleInfo_3));
#line 127 "switch_detection.m"
      MR_hl_field(MR_mktag(0), check_hlds__switch_detection__Info_4, 1) = ((MR_Box) (check_hlds__switch_detection__AllowMulti_5));
#line 127 "switch_detection.m"
    }
#line 125 "switch_detection.m"
    return check_hlds__switch_detection__Info_4;
#line 125 "switch_detection.m"
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
#line 131 "switch_detection.m"
  {
#line 131 "switch_detection.m"
    MR_bool check_hlds__switch_detection__succeeded;
#line 131 "switch_detection.m"
    MR_Word check_hlds__switch_detection__TypeCtorInfo_15_15;
#line 131 "switch_detection.m"
    MR_Word check_hlds__switch_detection__TypeCtorInfo_16_16;
#line 131 "switch_detection.m"
    MR_Word check_hlds__switch_detection__Info_4;
#line 131 "switch_detection.m"
    MR_Word check_hlds__switch_detection__ValidPredIds_5;
#line 131 "switch_detection.m"
    MR_Word check_hlds__switch_detection__ValidPredIdSet_6;
#line 131 "switch_detection.m"
    MR_Word check_hlds__switch_detection__PredMap0_7;
#line 131 "switch_detection.m"
    MR_Word check_hlds__switch_detection__PredIdsInfos0_8;
#line 131 "switch_detection.m"
    MR_Word check_hlds__switch_detection__PredIdsInfos_9;
#line 131 "switch_detection.m"
    MR_Word check_hlds__switch_detection__PredMap_10;
#line 131 "switch_detection.m"
    MR_Word check_hlds__switch_detection__STATE_VARIABLE_ModuleInfo_13_13;
#line 131 "switch_detection.m"
    MR_Word check_hlds__switch_detection__AllowMulti_19;
#line 131 "switch_detection.m"
    MR_Word check_hlds__switch_detection__Globals_22;
#line 131 "switch_detection.m"
    MR_Word check_hlds__switch_detection__Allow_23;

#line 115 "switch_detection.m"
    {
#line 115 "switch_detection.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__switch_detection__STATE_VARIABLE_ModuleInfo_0_11, &check_hlds__switch_detection__Globals_22);
    }
#line 116 "switch_detection.m"
    {
#line 116 "switch_detection.m"
      libs__globals__lookup_bool_option_3_p_0(check_hlds__switch_detection__Globals_22, (MR_Integer) 297, &check_hlds__switch_detection__Allow_23);
    }
#line 120 "switch_detection.m"
    if ((check_hlds__switch_detection__Allow_23 == (MR_Integer) 0))
#line 122 "switch_detection.m"
      check_hlds__switch_detection__AllowMulti_19 = (MR_Integer) 1;
#line 120 "switch_detection.m"
    else
#line 119 "switch_detection.m"
      check_hlds__switch_detection__AllowMulti_19 = (MR_Integer) 0;
#line 127 "switch_detection.m"
    {
#line 127 "switch_detection.m"
      check_hlds__switch_detection__Info_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 127 "switch_detection.m"
      MR_hl_field(MR_mktag(0), check_hlds__switch_detection__Info_4, 0) = ((MR_Box) (check_hlds__switch_detection__STATE_VARIABLE_ModuleInfo_0_11));
#line 127 "switch_detection.m"
      MR_hl_field(MR_mktag(0), check_hlds__switch_detection__Info_4, 1) = ((MR_Box) (check_hlds__switch_detection__AllowMulti_19));
#line 127 "switch_detection.m"
    }
#line 135 "switch_detection.m"
    {
#line 135 "switch_detection.m"
      hlds__hlds_module__module_info_get_valid_predids_3_p_0(&check_hlds__switch_detection__ValidPredIds_5, check_hlds__switch_detection__STATE_VARIABLE_ModuleInfo_0_11, &check_hlds__switch_detection__STATE_VARIABLE_ModuleInfo_13_13);
    }
#line 10752 "check_hlds.switch_detection.c"
    check_hlds__switch_detection__TypeCtorInfo_15_15 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 136 "switch_detection.m"
    {
#line 136 "switch_detection.m"
      check_hlds__switch_detection__ValidPredIdSet_6 = mercury__set_tree234__list_to_set_1_f_0(check_hlds__switch_detection__TypeCtorInfo_15_15, check_hlds__switch_detection__ValidPredIds_5);
    }
#line 138 "switch_detection.m"
    {
#line 138 "switch_detection.m"
      hlds__hlds_module__module_info_get_preds_2_p_0(check_hlds__switch_detection__STATE_VARIABLE_ModuleInfo_13_13, &check_hlds__switch_detection__PredMap0_7);
    }
#line 10764 "check_hlds.switch_detection.c"
    check_hlds__switch_detection__TypeCtorInfo_16_16 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
#line 139 "switch_detection.m"
    {
#line 139 "switch_detection.m"
      mercury__map__to_assoc_list_2_p_0(check_hlds__switch_detection__TypeCtorInfo_15_15, check_hlds__switch_detection__TypeCtorInfo_16_16, check_hlds__switch_detection__PredMap0_7, &check_hlds__switch_detection__PredIdsInfos0_8);
    }
#line 141 "switch_detection.m"
    {
#line 141 "switch_detection.m"
      check_hlds__switch_detection__detect_switches_in_preds_4_p_0(check_hlds__switch_detection__Info_4, check_hlds__switch_detection__ValidPredIdSet_6, check_hlds__switch_detection__PredIdsInfos0_8, &check_hlds__switch_detection__PredIdsInfos_9);
    }
#line 143 "switch_detection.m"
    {
#line 143 "switch_detection.m"
      mercury__map__from_sorted_assoc_list_2_p_0(check_hlds__switch_detection__TypeCtorInfo_15_15, check_hlds__switch_detection__TypeCtorInfo_16_16, check_hlds__switch_detection__PredIdsInfos_9, &check_hlds__switch_detection__PredMap_10);
    }
#line 144 "switch_detection.m"
    {
#line 144 "switch_detection.m"
      hlds__hlds_module__module_info_set_preds_3_p_0(check_hlds__switch_detection__PredMap_10, check_hlds__switch_detection__STATE_VARIABLE_ModuleInfo_13_13, check_hlds__switch_detection__STATE_VARIABLE_ModuleInfo_12);
#line 144 "switch_detection.m"
      return;
    }
#line 131 "switch_detection.m"
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
