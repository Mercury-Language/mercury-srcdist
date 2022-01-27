/*
** Automatically generated from `analysis.m'
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


/* :- module analysis. */
/* :- implementation. */

/*
INIT mercury__analysis__init
REQUIRED_INIT mercury__analysis__required_init
ENDINIT
*/

#include "analysis.mih"
#include "analysis.mh"


#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
#include "analysis.file.mih"
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
#include "libs.file_util.mih"
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
#include "parse_tree.module_cmds.mih"
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




#line 144 "analysis.c"
static const MR_FA_PseudoTypeInfo_Struct2 analysis__analysis__pti_analysis_result_2__pseudo_2__pseudo_3;

#line 147 "analysis.c"
static const MR_FA_PseudoTypeInfo_Struct2 analysis__analysis__pti_analysis_result_2__pseudo_1__pseudo_2;

#line 150 "analysis.c"
static const MR_FA_TypeInfo_Struct1 analysis__list__ti_list_1analysis__type_ctor_info_some_analysis_result_0;

#line 153 "analysis.c"
static const MR_FA_PseudoTypeInfo_Struct2 analysis__tree234__pti_tree234_2__plain_analysis__type_ctor_info_func_id_0__plain_list__ti_list_1analysis__type_ctor_info_some_analysis_result_0;

#line 156 "analysis.c"
static const MR_FA_PseudoTypeInfo_Struct1 analysis__list__pti_list_1__plain_analysis__type_ctor_info_some_analysis_result_0;

#line 159 "analysis.c"
static const MR_FA_TypeInfo_Struct1 analysis__list__ti_list_1analysis__type_ctor_info_imdg_arc_0;

#line 162 "analysis.c"
static const MR_FA_PseudoTypeInfo_Struct2 analysis__tree234__pti_tree234_2__plain_analysis__type_ctor_info_func_id_0__plain_list__ti_list_1analysis__type_ctor_info_imdg_arc_0;

#line 165 "analysis.c"
static const MR_FA_PseudoTypeInfo_Struct1 analysis__list__pti_list_1__plain_analysis__type_ctor_info_imdg_arc_0;

#line 168 "analysis.c"
static const MR_FA_TypeInfo_Struct1 analysis__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0;

#line 171 "analysis.c"
static const MR_FA_TypeInfo_Struct1 analysis__list__ti_list_1analysis__type_ctor_info_analysis_request_0;

#line 174 "analysis.c"
static const MR_FA_TypeInfo_Struct2 analysis__tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_analysis_request_0;

#line 177 "analysis.c"
static const MR_FA_TypeInfo_Struct2 analysis__tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_analysis_request_0;

#line 180 "analysis.c"
static const MR_FA_TypeInfo_Struct2 analysis__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_analysis_request_0;

#line 183 "analysis.c"
static const MR_FA_TypeInfo_Struct2 analysis__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0analysis__type_ctor_info_analysis_status_0;

#line 186 "analysis.c"
static const MR_FA_TypeInfo_Struct2 analysis__tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_some_analysis_result_0;

#line 189 "analysis.c"
static const MR_FA_TypeInfo_Struct2 analysis__tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_some_analysis_result_0;

#line 192 "analysis.c"
static const MR_FA_TypeInfo_Struct2 analysis__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_some_analysis_result_0;

#line 195 "analysis.c"
static const MR_FA_TypeInfo_Struct2 analysis__tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_imdg_arc_0;

#line 198 "analysis.c"
static const MR_FA_TypeInfo_Struct2 analysis__tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_imdg_arc_0;

#line 201 "analysis.c"
static const MR_FA_TypeInfo_Struct2 analysis__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_imdg_arc_0;

#line 204 "analysis.c"
static const MR_PseudoTypeInfo analysis__analysis__field_types_analysis_info_0_0[10];

#line 207 "analysis.c"
static const MR_ConstString analysis__analysis__field_names_analysis_info_0_0[10];

#line 210 "analysis.c"
static const MR_TypeClassConstraint_1Struct analysis__analysis__exist_tc_constr_analysis_info_0_0_1;

#line 213 "analysis.c"
static const MR_TypeClassConstraint analysis__analysis__exist_tc_constrs_analysis_info_0_0[1];

#line 216 "analysis.c"
static const MR_DuExistLocn analysis__analysis__exist_locns_analysis_info_0_0[1];

#line 219 "analysis.c"
static const MR_DuExistInfo analysis__analysis__exist_info_analysis_info_0_0;

#line 222 "analysis.c"
static const MR_DuFunctorDesc analysis__analysis__du_functor_desc_analysis_info_0_0;

#line 225 "analysis.c"
static const MR_DuFunctorDescPtr analysis__analysis__du_stag_ordered_analysis_info_0_0[1];

#line 228 "analysis.c"
static const MR_DuPtagLayout analysis__analysis__du_ptag_ordered_analysis_info_0[1];

#line 231 "analysis.c"
static const MR_DuFunctorDescPtr analysis__analysis__du_name_ordered_analysis_info_0[1];

#line 234 "analysis.c"
static const MR_Integer analysis__analysis__functor_number_map_analysis_info_0[1];

#line 237 "analysis.c"
static const MR_FA_PseudoTypeInfo_Struct1 analysis__list__pti_list_1__pseudo_1;

#line 240 "analysis.c"
static const MR_FA_PseudoTypeInfo_Struct2 analysis__tree234__pti_tree234_2__plain_analysis__type_ctor_info_func_id_0__pseudo_list__pti_list_1__pseudo_1;

#line 243 "analysis.c"
static const MR_FA_PseudoTypeInfo_Struct2 analysis__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__pseudo_tree234__pti_tree234_2__plain_analysis__type_ctor_info_func_id_0__pseudo_list__pti_list_1__pseudo_1;

#line 246 "analysis.c"
static const MR_FA_PseudoTypeInfo_Struct2 analysis__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__pseudo_tree234__pti_tree234_2__plain_analysis__type_ctor_info_func_id_0__pseudo_list__pti_list_1__pseudo_1;

#line 249 "analysis.c"
static const MR_PseudoTypeInfo analysis__analysis__field_types_analysis_request_0_0[2];

#line 252 "analysis.c"
static const MR_ConstString analysis__analysis__field_names_analysis_request_0_0[2];

#line 255 "analysis.c"
static const MR_TypeClassConstraint_2Struct analysis__analysis__exist_tc_constr_analysis_request_0_0_1;

#line 258 "analysis.c"
static const MR_TypeClassConstraint analysis__analysis__exist_tc_constrs_analysis_request_0_0[1];

#line 261 "analysis.c"
static const MR_DuExistLocn analysis__analysis__exist_locns_analysis_request_0_0[2];

#line 264 "analysis.c"
static const MR_DuExistInfo analysis__analysis__exist_info_analysis_request_0_0;

#line 267 "analysis.c"
static const MR_DuFunctorDesc analysis__analysis__du_functor_desc_analysis_request_0_0;

#line 270 "analysis.c"
static const MR_DuFunctorDescPtr analysis__analysis__du_stag_ordered_analysis_request_0_0[1];

#line 273 "analysis.c"
static const MR_DuPtagLayout analysis__analysis__du_ptag_ordered_analysis_request_0[1];

#line 276 "analysis.c"
static const MR_DuFunctorDescPtr analysis__analysis__du_name_ordered_analysis_request_0[1];

#line 279 "analysis.c"
static const MR_Integer analysis__analysis__functor_number_map_analysis_request_0[1];

#line 282 "analysis.c"
static const MR_PseudoTypeInfo analysis__analysis__field_types_analysis_result_2_0[3];

#line 285 "analysis.c"
static const MR_ConstString analysis__analysis__field_names_analysis_result_2_0[3];

#line 288 "analysis.c"
static const MR_DuFunctorDesc analysis__analysis__du_functor_desc_analysis_result_2_0;

#line 291 "analysis.c"
static const MR_DuFunctorDescPtr analysis__analysis__du_stag_ordered_analysis_result_2_0[1];

#line 294 "analysis.c"
static const MR_DuPtagLayout analysis__analysis__du_ptag_ordered_analysis_result_2[1];

#line 297 "analysis.c"
static const MR_DuFunctorDescPtr analysis__analysis__du_name_ordered_analysis_result_2[1];

#line 300 "analysis.c"
static const MR_Integer analysis__analysis__functor_number_map_analysis_result_2[1];

#line 303 "analysis.c"
static const MR_EnumFunctorDesc analysis__analysis__enum_functor_desc_analysis_status_0_0;

#line 306 "analysis.c"
static const MR_EnumFunctorDesc analysis__analysis__enum_functor_desc_analysis_status_0_1;

#line 309 "analysis.c"
static const MR_EnumFunctorDesc analysis__analysis__enum_functor_desc_analysis_status_0_2;

#line 312 "analysis.c"
static const MR_EnumFunctorDescPtr analysis__analysis__enum_value_ordered_analysis_status_0[3];

#line 315 "analysis.c"
static const MR_EnumFunctorDescPtr analysis__analysis__enum_name_ordered_analysis_status_0[3];

#line 318 "analysis.c"
static const MR_Integer analysis__analysis__functor_number_map_analysis_status_0[3];

#line 321 "analysis.c"
static const MR_FA_PseudoTypeInfo_Struct1 analysis__unit__pti_unit_1__pseudo_514;

#line 324 "analysis.c"
static const MR_FA_PseudoTypeInfo_Struct1 analysis__unit__pti_unit_1__pseudo_515;

#line 327 "analysis.c"
static const MR_PseudoTypeInfo analysis__analysis__field_types_analysis_type_0_0[2];

#line 330 "analysis.c"
static const MR_TypeClassConstraint_3Struct analysis__analysis__exist_tc_constr_analysis_type_0_0_1;

#line 333 "analysis.c"
static const MR_TypeClassConstraint analysis__analysis__exist_tc_constrs_analysis_type_0_0[1];

#line 336 "analysis.c"
static const MR_DuExistLocn analysis__analysis__exist_locns_analysis_type_0_0[3];

#line 339 "analysis.c"
static const MR_DuExistInfo analysis__analysis__exist_info_analysis_type_0_0;

#line 342 "analysis.c"
static const MR_DuFunctorDesc analysis__analysis__du_functor_desc_analysis_type_0_0;

#line 345 "analysis.c"
static const MR_DuFunctorDescPtr analysis__analysis__du_stag_ordered_analysis_type_0_0[1];

#line 348 "analysis.c"
static const MR_DuPtagLayout analysis__analysis__du_ptag_ordered_analysis_type_0[1];

#line 351 "analysis.c"
static const MR_DuFunctorDescPtr analysis__analysis__du_name_ordered_analysis_type_0[1];

#line 354 "analysis.c"
static const MR_Integer analysis__analysis__functor_number_map_analysis_type_0[1];

#line 357 "analysis.c"
static const MR_EnumFunctorDesc analysis__analysis__enum_functor_desc_any_call_0_0;

#line 360 "analysis.c"
static const MR_EnumFunctorDescPtr analysis__analysis__enum_value_ordered_any_call_0[1];

#line 363 "analysis.c"
static const MR_EnumFunctorDescPtr analysis__analysis__enum_name_ordered_any_call_0[1];

#line 366 "analysis.c"
static const MR_Integer analysis__analysis__functor_number_map_any_call_0[1];

#line 369 "analysis.c"
static const MR_EnumFunctorDesc analysis__analysis__enum_functor_desc_fixpoint_type_0_0;

#line 372 "analysis.c"
static const MR_EnumFunctorDesc analysis__analysis__enum_functor_desc_fixpoint_type_0_1;

#line 375 "analysis.c"
static const MR_EnumFunctorDescPtr analysis__analysis__enum_value_ordered_fixpoint_type_0[2];

#line 378 "analysis.c"
static const MR_EnumFunctorDescPtr analysis__analysis__enum_name_ordered_fixpoint_type_0[2];

#line 381 "analysis.c"
static const MR_Integer analysis__analysis__functor_number_map_fixpoint_type_0[2];

#line 384 "analysis.c"
static const MR_PseudoTypeInfo analysis__analysis__field_types_func_id_0_0[4];

#line 387 "analysis.c"
static const MR_ConstString analysis__analysis__field_names_func_id_0_0[4];

#line 390 "analysis.c"
static const MR_DuFunctorDesc analysis__analysis__du_functor_desc_func_id_0_0;

#line 393 "analysis.c"
static const MR_DuFunctorDescPtr analysis__analysis__du_stag_ordered_func_id_0_0[1];

#line 396 "analysis.c"
static const MR_DuPtagLayout analysis__analysis__du_ptag_ordered_func_id_0[1];

#line 399 "analysis.c"
static const MR_DuFunctorDescPtr analysis__analysis__du_name_ordered_func_id_0[1];

#line 402 "analysis.c"
static const MR_Integer analysis__analysis__functor_number_map_func_id_0[1];

#line 405 "analysis.c"
static const MR_PseudoTypeInfo analysis__analysis__field_types_imdg_arc_0_0[2];

#line 408 "analysis.c"
static const MR_ConstString analysis__analysis__field_names_imdg_arc_0_0[2];

#line 411 "analysis.c"
static const MR_TypeClassConstraint_2Struct analysis__analysis__exist_tc_constr_imdg_arc_0_0_1;

#line 414 "analysis.c"
static const MR_TypeClassConstraint analysis__analysis__exist_tc_constrs_imdg_arc_0_0[1];

#line 417 "analysis.c"
static const MR_DuExistLocn analysis__analysis__exist_locns_imdg_arc_0_0[2];

#line 420 "analysis.c"
static const MR_DuExistInfo analysis__analysis__exist_info_imdg_arc_0_0;

#line 423 "analysis.c"
static const MR_DuFunctorDesc analysis__analysis__du_functor_desc_imdg_arc_0_0;

#line 426 "analysis.c"
static const MR_DuFunctorDescPtr analysis__analysis__du_stag_ordered_imdg_arc_0_0[1];

#line 429 "analysis.c"
static const MR_DuPtagLayout analysis__analysis__du_ptag_ordered_imdg_arc_0[1];

#line 432 "analysis.c"
static const MR_DuFunctorDescPtr analysis__analysis__du_name_ordered_imdg_arc_0[1];

#line 435 "analysis.c"
static const MR_Integer analysis__analysis__functor_number_map_imdg_arc_0[1];

#line 438 "analysis.c"
static const MR_EnumFunctorDesc analysis__analysis__enum_functor_desc_make_analysis_registry_0_0;

#line 441 "analysis.c"
static const MR_EnumFunctorDesc analysis__analysis__enum_functor_desc_make_analysis_registry_0_1;

#line 444 "analysis.c"
static const MR_EnumFunctorDescPtr analysis__analysis__enum_value_ordered_make_analysis_registry_0[2];

#line 447 "analysis.c"
static const MR_EnumFunctorDescPtr analysis__analysis__enum_name_ordered_make_analysis_registry_0[2];

#line 450 "analysis.c"
static const MR_Integer analysis__analysis__functor_number_map_make_analysis_registry_0[2];

#line 453 "analysis.c"
static const MR_EnumFunctorDesc analysis__analysis__enum_functor_desc_no_func_info_0_0;

#line 456 "analysis.c"
static const MR_EnumFunctorDescPtr analysis__analysis__enum_value_ordered_no_func_info_0[1];

#line 459 "analysis.c"
static const MR_EnumFunctorDescPtr analysis__analysis__enum_name_ordered_no_func_info_0[1];

#line 462 "analysis.c"
static const MR_Integer analysis__analysis__functor_number_map_no_func_info_0[1];

#line 465 "analysis.c"
static const MR_PseudoTypeInfo analysis__analysis__field_types_some_analysis_result_0_0[3];

#line 468 "analysis.c"
static const MR_ConstString analysis__analysis__field_names_some_analysis_result_0_0[3];

#line 471 "analysis.c"
static const MR_TypeClassConstraint_3Struct analysis__analysis__exist_tc_constr_some_analysis_result_0_0_1;

#line 474 "analysis.c"
static const MR_TypeClassConstraint analysis__analysis__exist_tc_constrs_some_analysis_result_0_0[1];

#line 477 "analysis.c"
static const MR_DuExistLocn analysis__analysis__exist_locns_some_analysis_result_0_0[3];

#line 480 "analysis.c"
static const MR_DuExistInfo analysis__analysis__exist_info_some_analysis_result_0_0;

#line 483 "analysis.c"
static const MR_DuFunctorDesc analysis__analysis__du_functor_desc_some_analysis_result_0_0;

#line 486 "analysis.c"
static const MR_DuFunctorDescPtr analysis__analysis__du_stag_ordered_some_analysis_result_0_0[1];

#line 489 "analysis.c"
static const MR_DuPtagLayout analysis__analysis__du_ptag_ordered_some_analysis_result_0[1];

#line 492 "analysis.c"
static const MR_DuFunctorDescPtr analysis__analysis__du_name_ordered_some_analysis_result_0[1];

#line 495 "analysis.c"
static const MR_Integer analysis__analysis__functor_number_map_some_analysis_result_0[1];

#line 498 "analysis.c"
static const MR_ConstString analysis__analysis__type_class_id_var_names_to_term_1[1];

#line 501 "analysis.c"
static const MR_TypeClassMethod analysis__analysis__type_class_id_method_ids_to_term_1[2];

#line 504 "analysis.c"
static const MR_TypeClassId analysis__analysis__type_class_id_to_term_1;

#line 507 "analysis.c"
static const MR_ConstString analysis__analysis__type_class_id_var_names_partial_order_2[2];

#line 510 "analysis.c"
static const MR_TypeClassMethod analysis__analysis__type_class_id_method_ids_partial_order_2[2];

#line 513 "analysis.c"
static const MR_TypeClassId analysis__analysis__type_class_id_partial_order_2;

#line 516 "analysis.c"
static const MR_ConstString analysis__analysis__type_class_id_var_names_compiler_1[1];

#line 519 "analysis.c"
static const MR_TypeClassMethod analysis__analysis__type_class_id_method_ids_compiler_1[4];

#line 522 "analysis.c"
static const MR_TypeClassId analysis__analysis__type_class_id_compiler_1;

#line 525 "analysis.c"
static const MR_ConstString analysis__analysis__type_class_id_var_names_call_pattern_2[2];

#line 528 "analysis.c"
static const MR_TypeClassId analysis__analysis__type_class_id_call_pattern_2;

#line 531 "analysis.c"
static const MR_TypeClassConstraint_2Struct analysis__analysis__type_class_decl_super_call_pattern_2_1;

#line 534 "analysis.c"
static const MR_TypeClassConstraint_1Struct analysis__analysis__type_class_decl_super_call_pattern_2_2;

#line 537 "analysis.c"
static const MR_TypeClassConstraint analysis__analysis__type_class_decl_supers_call_pattern_2[2];

#line 540 "analysis.c"
static const MR_ConstString analysis__analysis__type_class_id_var_names_answer_pattern_2[2];

#line 543 "analysis.c"
static const MR_TypeClassId analysis__analysis__type_class_id_answer_pattern_2;

#line 546 "analysis.c"
static const MR_TypeClassConstraint_2Struct analysis__analysis__type_class_decl_super_answer_pattern_2_1;

#line 549 "analysis.c"
static const MR_TypeClassConstraint_1Struct analysis__analysis__type_class_decl_super_answer_pattern_2_2;

#line 552 "analysis.c"
static const MR_TypeClassConstraint analysis__analysis__type_class_decl_supers_answer_pattern_2[2];

#line 555 "analysis.c"
static const MR_ConstString analysis__analysis__type_class_id_var_names_analysis_3[3];

#line 558 "analysis.c"
static const MR_TypeClassMethod analysis__analysis__type_class_id_method_ids_analysis_3[6];

#line 561 "analysis.c"
static const MR_TypeClassId analysis__analysis__type_class_id_analysis_3;

#line 564 "analysis.c"
static const MR_TypeClassConstraint_2Struct analysis__analysis__type_class_decl_super_analysis_3_1;

#line 567 "analysis.c"
static const MR_TypeClassConstraint_2Struct analysis__analysis__type_class_decl_super_analysis_3_2;

#line 570 "analysis.c"
static const MR_TypeClassConstraint analysis__analysis__type_class_decl_supers_analysis_3[2];

#line 573 "analysis.c"
static MR_bool MR_CALL 
analysis____Unify____analysis_info_0_0_10001(
#line 576 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 578 "analysis.c"
  MR_Box analysis__wrapper_arg_2);

#line 581 "analysis.c"
static void MR_CALL 
analysis____Compare____analysis_info_0_0_10001(
#line 584 "analysis.c"
  MR_Box * analysis__wrapper_arg_1,
#line 586 "analysis.c"
  MR_Box analysis__wrapper_arg_2,
#line 588 "analysis.c"
  MR_Box analysis__wrapper_arg_3);

#line 591 "analysis.c"
static MR_bool MR_CALL 
analysis____Unify____analysis_map_1_0_10001(
#line 594 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 596 "analysis.c"
  MR_Box analysis__wrapper_arg_2,
#line 598 "analysis.c"
  MR_Box analysis__wrapper_arg_3);

#line 601 "analysis.c"
static void MR_CALL 
analysis____Compare____analysis_map_1_0_10001(
#line 604 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 606 "analysis.c"
  MR_Box * analysis__wrapper_arg_2,
#line 608 "analysis.c"
  MR_Box analysis__wrapper_arg_3,
#line 610 "analysis.c"
  MR_Box analysis__wrapper_arg_4);

#line 613 "analysis.c"
static MR_bool MR_CALL 
analysis____Unify____analysis_name_0_0_10001(
#line 616 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 618 "analysis.c"
  MR_Box analysis__wrapper_arg_2);

#line 621 "analysis.c"
static void MR_CALL 
analysis____Compare____analysis_name_0_0_10001(
#line 624 "analysis.c"
  MR_Box * analysis__wrapper_arg_1,
#line 626 "analysis.c"
  MR_Box analysis__wrapper_arg_2,
#line 628 "analysis.c"
  MR_Box analysis__wrapper_arg_3);

#line 631 "analysis.c"
static MR_bool MR_CALL 
analysis____Unify____analysis_request_0_0_10001(
#line 634 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 636 "analysis.c"
  MR_Box analysis__wrapper_arg_2);

#line 639 "analysis.c"
static void MR_CALL 
analysis____Compare____analysis_request_0_0_10001(
#line 642 "analysis.c"
  MR_Box * analysis__wrapper_arg_1,
#line 644 "analysis.c"
  MR_Box analysis__wrapper_arg_2,
#line 646 "analysis.c"
  MR_Box analysis__wrapper_arg_3);

#line 649 "analysis.c"
static MR_bool MR_CALL 
analysis____Unify____analysis_result_2_0_10001(
#line 652 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 654 "analysis.c"
  MR_Box analysis__wrapper_arg_2,
#line 656 "analysis.c"
  MR_Box analysis__wrapper_arg_3,
#line 658 "analysis.c"
  MR_Box analysis__wrapper_arg_4);

#line 661 "analysis.c"
static void MR_CALL 
analysis____Compare____analysis_result_2_0_10001(
#line 664 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 666 "analysis.c"
  MR_Box analysis__wrapper_arg_2,
#line 668 "analysis.c"
  MR_Box * analysis__wrapper_arg_3,
#line 670 "analysis.c"
  MR_Box analysis__wrapper_arg_4,
#line 672 "analysis.c"
  MR_Box analysis__wrapper_arg_5);

#line 675 "analysis.c"
static MR_bool MR_CALL 
analysis____Unify____analysis_status_0_0_10001(
#line 678 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 680 "analysis.c"
  MR_Box analysis__wrapper_arg_2);

#line 683 "analysis.c"
static void MR_CALL 
analysis____Compare____analysis_status_0_0_10001(
#line 686 "analysis.c"
  MR_Box * analysis__wrapper_arg_1,
#line 688 "analysis.c"
  MR_Box analysis__wrapper_arg_2,
#line 690 "analysis.c"
  MR_Box analysis__wrapper_arg_3);

#line 693 "analysis.c"
static MR_bool MR_CALL 
analysis____Unify____analysis_type_0_0_10001(
#line 696 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 698 "analysis.c"
  MR_Box analysis__wrapper_arg_2);

#line 701 "analysis.c"
static void MR_CALL 
analysis____Compare____analysis_type_0_0_10001(
#line 704 "analysis.c"
  MR_Box * analysis__wrapper_arg_1,
#line 706 "analysis.c"
  MR_Box analysis__wrapper_arg_2,
#line 708 "analysis.c"
  MR_Box analysis__wrapper_arg_3);

#line 711 "analysis.c"
static MR_bool MR_CALL 
analysis____Unify____any_call_0_0_10001(
#line 714 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 716 "analysis.c"
  MR_Box analysis__wrapper_arg_2);

#line 719 "analysis.c"
static void MR_CALL 
analysis____Compare____any_call_0_0_10001(
#line 722 "analysis.c"
  MR_Box * analysis__wrapper_arg_1,
#line 724 "analysis.c"
  MR_Box analysis__wrapper_arg_2,
#line 726 "analysis.c"
  MR_Box analysis__wrapper_arg_3);

#line 729 "analysis.c"
static MR_bool MR_CALL 
analysis____Unify____fixpoint_type_0_0_10001(
#line 732 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 734 "analysis.c"
  MR_Box analysis__wrapper_arg_2);

#line 737 "analysis.c"
static void MR_CALL 
analysis____Compare____fixpoint_type_0_0_10001(
#line 740 "analysis.c"
  MR_Box * analysis__wrapper_arg_1,
#line 742 "analysis.c"
  MR_Box analysis__wrapper_arg_2,
#line 744 "analysis.c"
  MR_Box analysis__wrapper_arg_3);

#line 747 "analysis.c"
static MR_bool MR_CALL 
analysis____Unify____func_analysis_map_1_0_10001(
#line 750 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 752 "analysis.c"
  MR_Box analysis__wrapper_arg_2,
#line 754 "analysis.c"
  MR_Box analysis__wrapper_arg_3);

#line 757 "analysis.c"
static void MR_CALL 
analysis____Compare____func_analysis_map_1_0_10001(
#line 760 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 762 "analysis.c"
  MR_Box * analysis__wrapper_arg_2,
#line 764 "analysis.c"
  MR_Box analysis__wrapper_arg_3,
#line 766 "analysis.c"
  MR_Box analysis__wrapper_arg_4);

#line 769 "analysis.c"
static MR_bool MR_CALL 
analysis____Unify____func_id_0_0_10001(
#line 772 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 774 "analysis.c"
  MR_Box analysis__wrapper_arg_2);

#line 777 "analysis.c"
static void MR_CALL 
analysis____Compare____func_id_0_0_10001(
#line 780 "analysis.c"
  MR_Box * analysis__wrapper_arg_1,
#line 782 "analysis.c"
  MR_Box analysis__wrapper_arg_2,
#line 784 "analysis.c"
  MR_Box analysis__wrapper_arg_3);

#line 787 "analysis.c"
static MR_bool MR_CALL 
analysis____Unify____imdg_arc_0_0_10001(
#line 790 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 792 "analysis.c"
  MR_Box analysis__wrapper_arg_2);

#line 795 "analysis.c"
static void MR_CALL 
analysis____Compare____imdg_arc_0_0_10001(
#line 798 "analysis.c"
  MR_Box * analysis__wrapper_arg_1,
#line 800 "analysis.c"
  MR_Box analysis__wrapper_arg_2,
#line 802 "analysis.c"
  MR_Box analysis__wrapper_arg_3);

#line 805 "analysis.c"
static MR_bool MR_CALL 
analysis____Unify____make_analysis_registry_0_0_10001(
#line 808 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 810 "analysis.c"
  MR_Box analysis__wrapper_arg_2);

#line 813 "analysis.c"
static void MR_CALL 
analysis____Compare____make_analysis_registry_0_0_10001(
#line 816 "analysis.c"
  MR_Box * analysis__wrapper_arg_1,
#line 818 "analysis.c"
  MR_Box analysis__wrapper_arg_2,
#line 820 "analysis.c"
  MR_Box analysis__wrapper_arg_3);

#line 823 "analysis.c"
static MR_bool MR_CALL 
analysis____Unify____module_analysis_map_1_0_10001(
#line 826 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 828 "analysis.c"
  MR_Box analysis__wrapper_arg_2,
#line 830 "analysis.c"
  MR_Box analysis__wrapper_arg_3);

#line 833 "analysis.c"
static void MR_CALL 
analysis____Compare____module_analysis_map_1_0_10001(
#line 836 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 838 "analysis.c"
  MR_Box * analysis__wrapper_arg_2,
#line 840 "analysis.c"
  MR_Box analysis__wrapper_arg_3,
#line 842 "analysis.c"
  MR_Box analysis__wrapper_arg_4);

#line 845 "analysis.c"
static MR_bool MR_CALL 
analysis____Unify____no_func_info_0_0_10001(
#line 848 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 850 "analysis.c"
  MR_Box analysis__wrapper_arg_2);

#line 853 "analysis.c"
static void MR_CALL 
analysis____Compare____no_func_info_0_0_10001(
#line 856 "analysis.c"
  MR_Box * analysis__wrapper_arg_1,
#line 858 "analysis.c"
  MR_Box analysis__wrapper_arg_2,
#line 860 "analysis.c"
  MR_Box analysis__wrapper_arg_3);

#line 863 "analysis.c"
static MR_bool MR_CALL 
analysis____Unify____some_analysis_result_0_0_10001(
#line 866 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 868 "analysis.c"
  MR_Box analysis__wrapper_arg_2);

#line 871 "analysis.c"
static void MR_CALL 
analysis____Compare____some_analysis_result_0_0_10001(
#line 874 "analysis.c"
  MR_Box * analysis__wrapper_arg_1,
#line 876 "analysis.c"
  MR_Box analysis__wrapper_arg_2,
#line 878 "analysis.c"
  MR_Box analysis__wrapper_arg_3);

#line 881 "analysis.c"
static MR_Box MR_CALL 
analysis__ClassMethod_for_analysis__to_term____analysis__any_call__arity0______analysis__to_term_1_1_f_0_10001(
#line 884 "analysis.c"
  MR_Box analysis__closure_arg,
#line 886 "analysis.c"
  MR_Box analysis__wrapper_arg_1);

#line 889 "analysis.c"
static MR_bool MR_CALL 
analysis__ClassMethod_for_analysis__to_term____analysis__any_call__arity0______analysis__from_term_2_2_p_0_10001(
#line 892 "analysis.c"
  MR_Box analysis__closure_arg,
#line 894 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 896 "analysis.c"
  MR_Box * analysis__wrapper_arg_2);

#line 899 "analysis.c"
static MR_bool MR_CALL 
analysis__ClassMethod_for_analysis__partial_order____analysis__no_func_info__arity0__analysis__any_call__arity0______analysis__more_precise_than_3_3_p_0_10001(
#line 902 "analysis.c"
  MR_Box analysis__closure_arg,
#line 904 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 906 "analysis.c"
  MR_Box analysis__wrapper_arg_2,
#line 908 "analysis.c"
  MR_Box analysis__wrapper_arg_3);

#line 911 "analysis.c"
static MR_bool MR_CALL 
analysis__ClassMethod_for_analysis__partial_order____analysis__no_func_info__arity0__analysis__any_call__arity0______analysis__equivalent_3_3_p_0_10001(
#line 914 "analysis.c"
  MR_Box analysis__closure_arg,
#line 916 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 918 "analysis.c"
  MR_Box analysis__wrapper_arg_2,
#line 920 "analysis.c"
  MR_Box analysis__wrapper_arg_3);

#line 1392 "analysis.m"
static void MR_CALL 
analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_109_115_103_95_95_104_111_54_95_95_91_51_93_95_48_3_p_0(
#line 1392 "analysis.m"
  MR_Word analysis__V_11_11,
#line 1392 "analysis.m"
  MR_Word analysis__V_12_12);

#line 1392 "analysis.m"
static void MR_CALL 
analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_109_115_103_95_95_104_111_52_95_95_91_54_93_95_48_3_p_0(
#line 1392 "analysis.m"
  MR_Word analysis__V_11_11,
#line 1392 "analysis.m"
  MR_Word analysis__V_12_12,
#line 1392 "analysis.m"
  MR_Word analysis__V_13_13,
#line 1392 "analysis.m"
  MR_Box analysis__V_14_14,
#line 1392 "analysis.m"
  MR_Box analysis__V_15_15);

#line 1392 "analysis.m"
static void MR_CALL 
analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_109_115_103_95_95_104_111_51_95_95_91_54_93_95_48_3_p_0(
#line 1392 "analysis.m"
  MR_Word analysis__V_11_11,
#line 1392 "analysis.m"
  MR_Box analysis__V_12_12,
#line 1392 "analysis.m"
  MR_Box analysis__V_13_13,
#line 1392 "analysis.m"
  MR_Word analysis__V_14_14,
#line 1392 "analysis.m"
  MR_Word analysis__V_15_15);

#line 1392 "analysis.m"
static void MR_CALL 
analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_109_115_103_95_95_104_111_49_95_95_91_51_93_95_48_3_p_0(
#line 1392 "analysis.m"
  MR_Word analysis__V_11_11,
#line 1392 "analysis.m"
  MR_Word analysis__V_12_12);

#line 1378 "analysis.m"
static MR_Box MR_CALL 
analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_108_117_98_95_114_101_115_117_108_116_95_115_116_97_116_117_115_101_115_95_51_95_95_91_49_93_95_48_3_f_0_1(
#line 1378 "analysis.m"
  MR_Box analysis__closure_arg,
#line 1378 "analysis.m"
  MR_Box analysis__wrapper_arg_1,
#line 1378 "analysis.m"
  MR_Box analysis__wrapper_arg_2);

#line 1372 "analysis.m"
static MR_Box MR_CALL 
analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_108_117_98_95_114_101_115_117_108_116_95_115_116_97_116_117_115_101_115_95_50_95_95_91_49_93_95_48_3_f_0_1(
#line 1372 "analysis.m"
  MR_Box analysis__closure_arg,
#line 1372 "analysis.m"
  MR_Box analysis__wrapper_arg_1,
#line 1372 "analysis.m"
  MR_Box analysis__wrapper_arg_2,
#line 1372 "analysis.m"
  MR_Box analysis__wrapper_arg_3);

#line 1178 "analysis.m"
static MR_bool MR_CALL 
analysis__IntroducedFrom__pred__clear_imdg_entries_pointing_at_3__1178__1_2_p_0(
#line 1178 "analysis.m"
  MR_Word analysis__ModuleName_4,
#line 1178 "analysis.m"
  MR_Word analysis__LambdaHeadVar__1_9);

#line 959 "analysis.m"
static MR_bool MR_CALL 
analysis__IntroducedFrom__func__update_analysis_registry_5__959__1_1_f_0(
#line 959 "analysis.m"
  MR_Word analysis__LambdaHeadVar__1_60,
#line 959 "analysis.m"
  MR_Word * analysis__LambdaHeadVar__2_61);

#line 926 "analysis.m"
static void MR_CALL 
analysis__IntroducedFrom__pred__update_analysis_registry_5__926__1_7_p_0(
#line 926 "analysis.m"
  MR_Word analysis__TypeClassInfo_for_analysis_148,
#line 926 "analysis.m"
  MR_Box analysis__NewAnswer_18,
#line 926 "analysis.m"
  MR_Box analysis__OldAnswer_25,
#line 926 "analysis.m"
  MR_Word analysis__Status_29,
#line 926 "analysis.m"
  MR_Word analysis__DepModules_31);

#line 897 "analysis.m"
static void MR_CALL 
analysis__IntroducedFrom__pred__update_analysis_registry_5__897__1_7_p_0(
#line 897 "analysis.m"
  MR_Word analysis__TypeClassInfo_for_analysis_148,
#line 897 "analysis.m"
  MR_Word analysis__ModuleName_11,
#line 897 "analysis.m"
  MR_Word analysis__FuncId_13,
#line 897 "analysis.m"
  MR_Box analysis__Call_17,
#line 897 "analysis.m"
  MR_Box analysis__NewAnswer_18);

#line 606 "analysis.m"
static MR_bool MR_CALL 
analysis__IntroducedFrom__pred__lookup_exactly_matching_result_even_from_invalid_modules__606__1_4_p_0(
#line 606 "analysis.m"
  MR_Word analysis__TypeClassInfo_for_analysis_32,
#line 606 "analysis.m"
  MR_Box analysis__FuncInfo_10,
#line 606 "analysis.m"
  MR_Box analysis__Call_11,
#line 606 "analysis.m"
  MR_Word analysis__LambdaHeadVar__1_22);

#line 538 "analysis.m"
static MR_Word MR_CALL 
analysis__IntroducedFrom__func__lookup_results_2__538__1_2_f_0(
#line 538 "analysis.m"
  MR_Word analysis__TypeClassInfo_for_analysis_29,
#line 538 "analysis.m"
  MR_Word analysis__LambdaHeadVar__1_24);

#line 516 "analysis.m"
static void MR_CALL 
analysis__IntroducedFrom__pred__lookup_results_1__516__1_4_p_0(
#line 516 "analysis.m"
  MR_Word analysis__TypeClassInfo_for_analysis_62,
#line 516 "analysis.m"
  MR_Word analysis__ResultList_10);

#line 498 "analysis.m"
static void MR_CALL 
analysis__IntroducedFrom__pred__lookup_results_1__498__1_4_p_0(
#line 498 "analysis.m"
  MR_Word analysis__ModuleName_7,
#line 498 "analysis.m"
  MR_Word analysis__FuncId_8);

#line 681 "analysis.m"
static MR_bool MR_CALL 
analysis__IntroducedFrom__func__lookup_requests__681__1_2_f_0(
#line 681 "analysis.m"
  MR_Word analysis__TypeClassInfo_for_call_pattern_47,
#line 681 "analysis.m"
  MR_Word analysis__LambdaHeadVar__1_23,
#line 681 "analysis.m"
  MR_Box * analysis__LambdaHeadVar__2_24);

#line 562 "analysis.m"
static void MR_CALL 
analysis__IntroducedFrom__pred__lookup_best_result__562__1_4_p_0(
#line 562 "analysis.m"
  MR_Word analysis__ModuleName_8,
#line 562 "analysis.m"
  MR_Word analysis__FuncId_9);

#line 551 "analysis.m"
static MR_bool MR_CALL 
analysis__IntroducedFrom__pred__lookup_matching_results__551__1_4_p_0(
#line 551 "analysis.m"
  MR_Word analysis__TypeClassInfo_for_analysis_21,
#line 551 "analysis.m"
  MR_Box analysis__FuncInfo_10,
#line 551 "analysis.m"
  MR_Box analysis__Call_11,
#line 551 "analysis.m"
  MR_Word analysis__LambdaHeadVar__1_17);

#line 478 "analysis.m"
static MR_Box MR_CALL 
analysis__IntroducedFrom__func__lookup_existing_call_patterns__478__1_2_f_0(
#line 478 "analysis.m"
  MR_Word analysis__TypeClassInfo_for_call_pattern_46,
#line 478 "analysis.m"
  MR_Word analysis__LambdaHeadVar__1_24);

#line 1365 "analysis.m"
static MR_Box MR_CALL 
analysis__lub_result_statuses_1_f_0_1(
#line 1365 "analysis.m"
  MR_Box analysis__closure_arg,
#line 1365 "analysis.m"
  MR_Box analysis__wrapper_arg_1,
#line 1365 "analysis.m"
  MR_Box analysis__wrapper_arg_2,
#line 1365 "analysis.m"
  MR_Box analysis__wrapper_arg_3);

#line 1185 "analysis.m"
static void MR_CALL 
analysis__combine_func_imdg_3_p_0_1(
#line 1185 "analysis.m"
  MR_Box analysis__closure_arg,
#line 1185 "analysis.m"
  MR_Box analysis__wrapper_arg_1,
#line 1185 "analysis.m"
  MR_Box analysis__wrapper_arg_2,
#line 1185 "analysis.m"
  MR_Box * analysis__wrapper_arg_3);

#line 1178 "analysis.m"
static MR_bool MR_CALL 
analysis__clear_imdg_entries_pointing_at_3_3_p_0_1(
#line 1178 "analysis.m"
  MR_Box analysis__closure_arg,
#line 1178 "analysis.m"
  MR_Box analysis__wrapper_arg_1);

#line 1171 "analysis.m"
static void MR_CALL 
analysis__clear_imdg_entries_pointing_at_2_3_p_0_1(
#line 1171 "analysis.m"
  MR_Box analysis__closure_arg,
#line 1171 "analysis.m"
  MR_Box analysis__wrapper_arg_1,
#line 1171 "analysis.m"
  MR_Box * analysis__wrapper_arg_2);

#line 1163 "analysis.m"
static void MR_CALL 
analysis__clear_imdg_entries_pointing_at_3_p_0_1(
#line 1163 "analysis.m"
  MR_Box analysis__closure_arg,
#line 1163 "analysis.m"
  MR_Box analysis__wrapper_arg_1,
#line 1163 "analysis.m"
  MR_Box * analysis__wrapper_arg_2);

#line 1141 "analysis.m"
static void MR_CALL 
analysis__update_intermodule_dependencies_2_4_p_0_1(
#line 1141 "analysis.m"
  MR_Box analysis__closure_arg,
#line 1141 "analysis.m"
  MR_Box analysis__wrapper_arg_1,
#line 1141 "analysis.m"
  MR_Box analysis__wrapper_arg_2,
#line 1141 "analysis.m"
  MR_Box * analysis__wrapper_arg_3);

#line 1126 "analysis.m"
static void MR_CALL 
analysis__update_intermodule_dependencies_4_p_0_1(
#line 1126 "analysis.m"
  MR_Box analysis__closure_arg,
#line 1126 "analysis.m"
  MR_Box analysis__wrapper_arg_1,
#line 1126 "analysis.m"
  MR_Box analysis__wrapper_arg_2,
#line 1126 "analysis.m"
  MR_Box * analysis__wrapper_arg_3);

#line 1023 "analysis.m"
static MR_bool MR_CALL 
analysis__imdg_dependent_modules_5_f_0_1(
#line 1023 "analysis.m"
  MR_Box analysis__closure_arg,
#line 1023 "analysis.m"
  MR_Box analysis__wrapper_arg_1,
#line 1023 "analysis.m"
  MR_Box * analysis__wrapper_arg_2);

#line 964 "analysis.m"
static void MR_CALL 
analysis__update_analysis_registry_5_9_p_0_3(
#line 964 "analysis.m"
  MR_Box analysis__closure_arg,
#line 964 "analysis.m"
  MR_Box analysis__wrapper_arg_1,
#line 964 "analysis.m"
  MR_Box analysis__wrapper_arg_2,
#line 964 "analysis.m"
  MR_Box * analysis__wrapper_arg_3,
#line 964 "analysis.m"
  MR_Box analysis__wrapper_arg_4,
#line 964 "analysis.m"
  MR_Box * analysis__wrapper_arg_5);

#line 959 "analysis.m"
static MR_bool MR_CALL 
analysis__update_analysis_registry_5_9_p_0_2(
#line 959 "analysis.m"
  MR_Box analysis__closure_arg,
#line 959 "analysis.m"
  MR_Box analysis__wrapper_arg_1,
#line 959 "analysis.m"
  MR_Box * analysis__wrapper_arg_2);

#line 928 "analysis.m"
static void MR_CALL 
analysis__update_analysis_registry_5_9_p_0_1(
#line 928 "analysis.m"
  MR_Box analysis__closure_arg,
#line 928 "analysis.m"
  MR_Box analysis__wrapper_arg_1,
#line 928 "analysis.m"
  MR_Box analysis__wrapper_arg_2,
#line 928 "analysis.m"
  MR_Box * analysis__wrapper_arg_3,
#line 928 "analysis.m"
  MR_Box analysis__wrapper_arg_4,
#line 928 "analysis.m"
  MR_Box * analysis__wrapper_arg_5);

#line 876 "analysis.m"
static void MR_CALL 
analysis__update_analysis_registry_4_9_p_0_1(
#line 876 "analysis.m"
  MR_Box analysis__closure_arg,
#line 876 "analysis.m"
  MR_Box analysis__wrapper_arg_1,
#line 876 "analysis.m"
  MR_Box analysis__wrapper_arg_2,
#line 876 "analysis.m"
  MR_Box * analysis__wrapper_arg_3,
#line 876 "analysis.m"
  MR_Box analysis__wrapper_arg_4,
#line 876 "analysis.m"
  MR_Box * analysis__wrapper_arg_5);

#line 864 "analysis.m"
static void MR_CALL 
analysis__update_analysis_registry_3_8_p_0_1(
#line 864 "analysis.m"
  MR_Box analysis__closure_arg,
#line 864 "analysis.m"
  MR_Box analysis__wrapper_arg_1,
#line 864 "analysis.m"
  MR_Box analysis__wrapper_arg_2,
#line 864 "analysis.m"
  MR_Box analysis__wrapper_arg_3,
#line 864 "analysis.m"
  MR_Box * analysis__wrapper_arg_4,
#line 864 "analysis.m"
  MR_Box analysis__wrapper_arg_5,
#line 864 "analysis.m"
  MR_Box * analysis__wrapper_arg_6);

#line 854 "analysis.m"
static void MR_CALL 
analysis__update_analysis_registry_2_7_p_0_1(
#line 854 "analysis.m"
  MR_Box analysis__closure_arg,
#line 854 "analysis.m"
  MR_Box analysis__wrapper_arg_1,
#line 854 "analysis.m"
  MR_Box analysis__wrapper_arg_2,
#line 854 "analysis.m"
  MR_Box analysis__wrapper_arg_3,
#line 854 "analysis.m"
  MR_Box * analysis__wrapper_arg_4,
#line 854 "analysis.m"
  MR_Box analysis__wrapper_arg_5,
#line 854 "analysis.m"
  MR_Box * analysis__wrapper_arg_6);

#line 854 "analysis.m"
static void MR_CALL 
analysis__update_analysis_registry_5_p_0_1(
#line 854 "analysis.m"
  MR_Box analysis__closure_arg,
#line 854 "analysis.m"
  MR_Box analysis__wrapper_arg_1,
#line 854 "analysis.m"
  MR_Box analysis__wrapper_arg_2,
#line 854 "analysis.m"
  MR_Box analysis__wrapper_arg_3,
#line 854 "analysis.m"
  MR_Box * analysis__wrapper_arg_4,
#line 854 "analysis.m"
  MR_Box analysis__wrapper_arg_5,
#line 854 "analysis.m"
  MR_Box * analysis__wrapper_arg_6);

#line 606 "analysis.m"
static MR_bool MR_CALL 
analysis__lookup_exactly_matching_result_even_from_invalid_modules_6_p_0_1(
#line 606 "analysis.m"
  MR_Box analysis__closure_arg,
#line 606 "analysis.m"
  MR_Box analysis__wrapper_arg_1);

#line 538 "analysis.m"
static MR_Box MR_CALL 
analysis__lookup_results_2_4_p_0_1(
#line 538 "analysis.m"
  MR_Box analysis__closure_arg,
#line 538 "analysis.m"
  MR_Box analysis__wrapper_arg_1);

#line 1287 "analysis.m"
static void MR_CALL 
analysis__write_analysis_files_7_p_0_4(
#line 1287 "analysis.m"
  MR_Box analysis__closure_arg,
#line 1287 "analysis.m"
  MR_Box analysis__wrapper_arg_1,
#line 1287 "analysis.m"
  MR_Box analysis__wrapper_arg_2,
#line 1287 "analysis.m"
  MR_Box * analysis__wrapper_arg_3);

#line 1279 "analysis.m"
static void MR_CALL 
analysis__write_analysis_files_7_p_0_3(
#line 1279 "analysis.m"
  MR_Box analysis__closure_arg,
#line 1279 "analysis.m"
  MR_Box analysis__wrapper_arg_1,
#line 1279 "analysis.m"
  MR_Box analysis__wrapper_arg_2,
#line 1279 "analysis.m"
  MR_Box * analysis__wrapper_arg_3);

#line 1270 "analysis.m"
static void MR_CALL 
analysis__write_analysis_files_7_p_0_2(
#line 1270 "analysis.m"
  MR_Box analysis__closure_arg,
#line 1270 "analysis.m"
  MR_Box analysis__wrapper_arg_1,
#line 1270 "analysis.m"
  MR_Box analysis__wrapper_arg_2,
#line 1270 "analysis.m"
  MR_Box * analysis__wrapper_arg_3);

#line 1252 "analysis.m"
static void MR_CALL 
analysis__write_analysis_files_7_p_0_1(
#line 1252 "analysis.m"
  MR_Box analysis__closure_arg,
#line 1252 "analysis.m"
  MR_Box analysis__wrapper_arg_1,
#line 1252 "analysis.m"
  MR_Box analysis__wrapper_arg_2,
#line 1252 "analysis.m"
  MR_Box * analysis__wrapper_arg_3,
#line 1252 "analysis.m"
  MR_Box analysis__wrapper_arg_4,
#line 1252 "analysis.m"
  MR_Box * analysis__wrapper_arg_5);

#line 1202 "analysis.m"
static void MR_CALL 
analysis__prepare_intermodule_analysis_7_p_0_1(
#line 1202 "analysis.m"
  MR_Box analysis__closure_arg,
#line 1202 "analysis.m"
  MR_Box analysis__wrapper_arg_1,
#line 1202 "analysis.m"
  MR_Box analysis__wrapper_arg_2,
#line 1202 "analysis.m"
  MR_Box * analysis__wrapper_arg_3,
#line 1202 "analysis.m"
  MR_Box analysis__wrapper_arg_4,
#line 1202 "analysis.m"
  MR_Box * analysis__wrapper_arg_5);

#line 681 "analysis.m"
static MR_bool MR_CALL 
analysis__lookup_requests_5_p_0_1(
#line 681 "analysis.m"
  MR_Box analysis__closure_arg,
#line 681 "analysis.m"
  MR_Box analysis__wrapper_arg_1,
#line 681 "analysis.m"
  MR_Box * analysis__wrapper_arg_2);

#line 578 "analysis.m"
static void MR_CALL 
analysis__lookup_best_result_6_p_0_1(
#line 578 "analysis.m"
  MR_Box analysis__closure_arg,
#line 578 "analysis.m"
  MR_Box analysis__wrapper_arg_1,
#line 578 "analysis.m"
  MR_Box analysis__wrapper_arg_2,
#line 578 "analysis.m"
  MR_Box * analysis__wrapper_arg_3);

#line 551 "analysis.m"
static MR_bool MR_CALL 
analysis__lookup_matching_results_6_p_0_1(
#line 551 "analysis.m"
  MR_Box analysis__closure_arg,
#line 551 "analysis.m"
  MR_Box analysis__wrapper_arg_1);

#line 478 "analysis.m"
static MR_Box MR_CALL 
analysis__lookup_existing_call_patterns_5_p_0_1(
#line 478 "analysis.m"
  MR_Box analysis__closure_arg,
#line 478 "analysis.m"
  MR_Box analysis__wrapper_arg_1);


static /* final */ const MR_Box analysis_scalar_common_1[4][2];

static /* final */ const MR_Box analysis_scalar_common_2[16][3];

static /* final */ const MR_Integer analysis_scalar_common_3[1][2];

static /* final */ const MR_Box analysis_scalar_common_4[8][6];

static /* final */ const MR_Integer analysis_scalar_common_5[1][4];

static /* final */ const MR_Box analysis_scalar_common_6[4][7];

static /* final */ const MR_Box analysis_scalar_common_7[3][8];

static /* final */ const MR_Box analysis_scalar_common_8[1][9];

static /* final */ const MR_Integer analysis_scalar_common_9[2][3];

static /* final */ const MR_Box analysis_scalar_common_10[1][11];

static /* final */ const MR_Box analysis_scalar_common_11[2][12];

static /* final */ const MR_Box analysis_scalar_common_12[1][10];

static /* final */ const MR_Box analysis_scalar_common_13[2][5];

static /* final */ const MR_Box analysis_scalar_common_14[1][1];




static /* final */ const MR_Box analysis_scalar_common_1[4][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_analysis_request_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_some_analysis_result_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_imdg_arc_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
};

static /* final */ const MR_Box analysis_scalar_common_2[16][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_func_id_0)),
    ((MR_Box) (&analysis_scalar_common_1[0]))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&analysis_scalar_common_2[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_func_id_0)),
    ((MR_Box) (&analysis_scalar_common_1[1]))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&analysis_scalar_common_2[2]))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_func_id_0)),
    ((MR_Box) (&analysis_scalar_common_1[2]))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&analysis_scalar_common_2[4]))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&analysis_scalar_common_2[1]))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_analysis_status_0))
  },
  /* row 8 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&analysis_scalar_common_2[3]))
  },
  /* row 9 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&analysis_scalar_common_2[5]))
  },
  /* row 10 */
  {
    ((MR_Box) (&analysis_scalar_common_13[0])),
    ((MR_Box) (analysis__update_analysis_registry_5_9_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&analysis_scalar_common_4[3])),
    ((MR_Box) (analysis__update_intermodule_dependencies_2_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&analysis_scalar_common_4[6])),
    ((MR_Box) (analysis__combine_func_imdg_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (&analysis_scalar_common_6[2])),
    ((MR_Box) (analysis__lub_result_statuses_1_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 14 */
  {
    ((MR_Box) (&analysis_scalar_common_6[3])),
    ((MR_Box) (analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_108_117_98_95_114_101_115_117_108_116_95_115_116_97_116_117_115_101_115_95_50_95_95_91_49_93_95_48_3_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 15 */
  {
    ((MR_Box) (&analysis_scalar_common_4[7])),
    ((MR_Box) (analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_108_117_98_95_114_101_115_117_108_116_95_115_116_97_116_117_115_101_115_95_51_95_95_91_49_93_95_48_3_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Integer analysis_scalar_common_3[1][2] = {
  /* row 0 */
  {
    (MR_Integer) 1,
    (MR_Integer) 67727
  },
};

static /* final */ const MR_Box analysis_scalar_common_4[8][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (&analysis_scalar_common_3[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_some_analysis_result_0)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (&analysis_scalar_common_3[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_analysis_request_0)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (&analysis_scalar_common_9[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_some_analysis_result_0)),
    ((MR_Box) (&analysis__analysis__pti_analysis_result_2__pseudo_1__pseudo_2))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&analysis__tree234__pti_tree234_2__plain_analysis__type_ctor_info_func_id_0__plain_list__ti_list_1analysis__type_ctor_info_imdg_arc_0)),
    ((MR_Box) (&analysis__tree234__pti_tree234_2__plain_analysis__type_ctor_info_func_id_0__plain_list__ti_list_1analysis__type_ctor_info_imdg_arc_0)),
    ((MR_Box) (&analysis__tree234__pti_tree234_2__plain_analysis__type_ctor_info_func_id_0__plain_list__ti_list_1analysis__type_ctor_info_imdg_arc_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&analysis__tree234__pti_tree234_2__plain_analysis__type_ctor_info_func_id_0__plain_list__ti_list_1analysis__type_ctor_info_imdg_arc_0)),
    ((MR_Box) (&analysis__tree234__pti_tree234_2__plain_analysis__type_ctor_info_func_id_0__plain_list__ti_list_1analysis__type_ctor_info_imdg_arc_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&analysis__list__pti_list_1__plain_analysis__type_ctor_info_imdg_arc_0)),
    ((MR_Box) (&analysis__list__pti_list_1__plain_analysis__type_ctor_info_imdg_arc_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&analysis__list__pti_list_1__plain_analysis__type_ctor_info_imdg_arc_0)),
    ((MR_Box) (&analysis__list__pti_list_1__plain_analysis__type_ctor_info_imdg_arc_0)),
    ((MR_Box) (&analysis__list__pti_list_1__plain_analysis__type_ctor_info_imdg_arc_0))
  },
  /* row 7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_some_analysis_result_0)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_analysis_status_0)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_analysis_status_0))
  },
};

static /* final */ const MR_Integer analysis_scalar_common_5[1][4] = {
  /* row 0 */
  {
    (MR_Integer) 3,
    (MR_Integer) 67695,
    (MR_Integer) 67727,
    (MR_Integer) 67759
  },
};

static /* final */ const MR_Box analysis_scalar_common_6[4][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (&analysis_scalar_common_5[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&analysis__analysis__pti_analysis_result_2__pseudo_2__pseudo_3))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_analysis_info_0)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_analysis_info_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&analysis__tree234__pti_tree234_2__plain_analysis__type_ctor_info_func_id_0__plain_list__ti_list_1analysis__type_ctor_info_some_analysis_result_0)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_analysis_status_0)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_analysis_status_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_func_id_0)),
    ((MR_Box) (&analysis__list__pti_list_1__plain_analysis__type_ctor_info_some_analysis_result_0)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_analysis_status_0)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_analysis_status_0))
  },
};

static /* final */ const MR_Box analysis_scalar_common_7[3][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (&analysis_scalar_common_5[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&analysis__analysis__pti_analysis_result_2__pseudo_2__pseudo_3)),
    ((MR_Box) (&analysis__analysis__pti_analysis_result_2__pseudo_2__pseudo_3)),
    ((MR_Box) (&analysis__analysis__pti_analysis_result_2__pseudo_2__pseudo_3))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_analysis_info_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (&analysis_scalar_common_9[1])),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_imdg_arc_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
};

static /* final */ const MR_Box analysis_scalar_common_8[1][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_analysis_info_0)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_analysis_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Integer analysis_scalar_common_9[2][3] = {
  /* row 0 */
  {
    (MR_Integer) 2,
    (MR_Integer) 67727,
    (MR_Integer) 67759
  },
  /* row 1 */
  {
    (MR_Integer) 2,
    (MR_Integer) 67695,
    (MR_Integer) 67727
  },
};

static /* final */ const MR_Box analysis_scalar_common_10[1][11] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&analysis__tree234__pti_tree234_2__plain_analysis__type_ctor_info_func_id_0__plain_list__ti_list_1analysis__type_ctor_info_some_analysis_result_0)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_analysis_info_0)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_analysis_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box analysis_scalar_common_11[2][12] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 9)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_func_id_0)),
    ((MR_Box) (&analysis__list__pti_list_1__plain_analysis__type_ctor_info_some_analysis_result_0)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_analysis_info_0)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_analysis_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 9)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_func_id_0)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_some_analysis_result_0)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_analysis_info_0)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_analysis_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box analysis_scalar_common_12[1][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_analysis_status_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_analysis_info_0)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_analysis_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box analysis_scalar_common_13[2][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_analysis_request_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_imdg_arc_0))
  },
};

static /* final */ const MR_Box analysis_scalar_common_14[1][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "any"))
  },
};



#include "analysis.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"
#line 1387 "analysis.m"
MR_Word analysis__mutable_variable_debug_analysis;
#ifdef MR_THREAD_SAFE
    MercuryLock analysis__mutable_variable_debug_analysis_lock;
#endif

#line 1387 "analysis.m"
void 
analysis__user_init_pred_0(void)
#line 1387 "analysis.m"
{
#line 1387 "analysis.m"
	analysis__initialise_mutable_debug_analysis_0_p_0();
}


#line 1898 "analysis.c"
static const MR_FA_PseudoTypeInfo_Struct2 analysis__analysis__pti_analysis_result_2__pseudo_2__pseudo_3 = {
  &analysis__analysis__type_ctor_info_analysis_result_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 2,
    (MR_PseudoTypeInfo) (MR_Integer) 3
  }
};

#line 1907 "analysis.c"
static const MR_FA_PseudoTypeInfo_Struct2 analysis__analysis__pti_analysis_result_2__pseudo_1__pseudo_2 = {
  &analysis__analysis__type_ctor_info_analysis_result_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

#line 1916 "analysis.c"
static const MR_FA_TypeInfo_Struct1 analysis__list__ti_list_1analysis__type_ctor_info_some_analysis_result_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &analysis__analysis__type_ctor_info_some_analysis_result_0
  }
};

#line 1924 "analysis.c"
static const MR_FA_PseudoTypeInfo_Struct2 analysis__tree234__pti_tree234_2__plain_analysis__type_ctor_info_func_id_0__plain_list__ti_list_1analysis__type_ctor_info_some_analysis_result_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &analysis__analysis__type_ctor_info_func_id_0,
    (MR_PseudoTypeInfo) &analysis__list__ti_list_1analysis__type_ctor_info_some_analysis_result_0
  }
};

#line 1933 "analysis.c"
static const MR_FA_PseudoTypeInfo_Struct1 analysis__list__pti_list_1__plain_analysis__type_ctor_info_some_analysis_result_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &analysis__analysis__type_ctor_info_some_analysis_result_0
  }
};

#line 1941 "analysis.c"
static const MR_FA_TypeInfo_Struct1 analysis__list__ti_list_1analysis__type_ctor_info_imdg_arc_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &analysis__analysis__type_ctor_info_imdg_arc_0
  }
};

#line 1949 "analysis.c"
static const MR_FA_PseudoTypeInfo_Struct2 analysis__tree234__pti_tree234_2__plain_analysis__type_ctor_info_func_id_0__plain_list__ti_list_1analysis__type_ctor_info_imdg_arc_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &analysis__analysis__type_ctor_info_func_id_0,
    (MR_PseudoTypeInfo) &analysis__list__ti_list_1analysis__type_ctor_info_imdg_arc_0
  }
};

#line 1958 "analysis.c"
static const MR_FA_PseudoTypeInfo_Struct1 analysis__list__pti_list_1__plain_analysis__type_ctor_info_imdg_arc_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &analysis__analysis__type_ctor_info_imdg_arc_0
  }
};

#line 1966 "analysis.c"
static const MR_FA_TypeInfo_Struct1 analysis__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
  }
};

#line 1974 "analysis.c"
static const MR_FA_TypeInfo_Struct1 analysis__list__ti_list_1analysis__type_ctor_info_analysis_request_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &analysis__analysis__type_ctor_info_analysis_request_0
  }
};

#line 1982 "analysis.c"
static const MR_FA_TypeInfo_Struct2 analysis__tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_analysis_request_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &analysis__analysis__type_ctor_info_func_id_0,
    (MR_TypeInfo) &analysis__list__ti_list_1analysis__type_ctor_info_analysis_request_0
  }
};

#line 1991 "analysis.c"
static const MR_FA_TypeInfo_Struct2 analysis__tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_analysis_request_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_TypeInfo) &analysis__tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_analysis_request_0
  }
};

#line 2000 "analysis.c"
static const MR_FA_TypeInfo_Struct2 analysis__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_analysis_request_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_TypeInfo) &analysis__tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_analysis_request_0
  }
};

#line 2009 "analysis.c"
static const MR_FA_TypeInfo_Struct2 analysis__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0analysis__type_ctor_info_analysis_status_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_TypeInfo) &analysis__analysis__type_ctor_info_analysis_status_0
  }
};

#line 2018 "analysis.c"
static const MR_FA_TypeInfo_Struct2 analysis__tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_some_analysis_result_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &analysis__analysis__type_ctor_info_func_id_0,
    (MR_TypeInfo) &analysis__list__ti_list_1analysis__type_ctor_info_some_analysis_result_0
  }
};

#line 2027 "analysis.c"
static const MR_FA_TypeInfo_Struct2 analysis__tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_some_analysis_result_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_TypeInfo) &analysis__tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_some_analysis_result_0
  }
};

#line 2036 "analysis.c"
static const MR_FA_TypeInfo_Struct2 analysis__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_some_analysis_result_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_TypeInfo) &analysis__tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_some_analysis_result_0
  }
};

#line 2045 "analysis.c"
static const MR_FA_TypeInfo_Struct2 analysis__tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_imdg_arc_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &analysis__analysis__type_ctor_info_func_id_0,
    (MR_TypeInfo) &analysis__list__ti_list_1analysis__type_ctor_info_imdg_arc_0
  }
};

#line 2054 "analysis.c"
static const MR_FA_TypeInfo_Struct2 analysis__tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_imdg_arc_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_TypeInfo) &analysis__tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_imdg_arc_0
  }
};

#line 2063 "analysis.c"
static const MR_FA_TypeInfo_Struct2 analysis__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_imdg_arc_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_TypeInfo) &analysis__tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_imdg_arc_0
  }
};

#line 2072 "analysis.c"
static const MR_PseudoTypeInfo analysis__analysis__field_types_analysis_info_0_0[10] = {
  (MR_PseudoTypeInfo) (MR_Integer) 513,
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &analysis__analysis__type_ctor_info_make_analysis_registry_0,
  (MR_PseudoTypeInfo) &analysis__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &analysis__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_analysis_request_0,
  (MR_PseudoTypeInfo) &analysis__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0analysis__type_ctor_info_analysis_status_0,
  (MR_PseudoTypeInfo) &analysis__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_some_analysis_result_0,
  (MR_PseudoTypeInfo) &analysis__tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_some_analysis_result_0,
  (MR_PseudoTypeInfo) &analysis__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_imdg_arc_0,
  (MR_PseudoTypeInfo) &analysis__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_imdg_arc_0
};

#line 2086 "analysis.c"
static const MR_ConstString analysis__analysis__field_names_analysis_info_0_0[10] = {
  (MR_String) "compiler",
  (MR_String) "this_module",
  (MR_String) "make_analysis_registry",
  (MR_String) "local_module_names",
  (MR_String) "analysis_requests",
  (MR_String) "module_statuses",
  (MR_String) "old_analysis_results",
  (MR_String) "new_analysis_results",
  (MR_String) "old_imdg",
  (MR_String) "new_imdg"
};

#line 2100 "analysis.c"
static const MR_TypeClassConstraint_1Struct analysis__analysis__exist_tc_constr_analysis_info_0_0_1 = {
  &analysis__analysis__type_class_decl_compiler_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 2108 "analysis.c"
static const MR_TypeClassConstraint analysis__analysis__exist_tc_constrs_analysis_info_0_0[1] = {
  (MR_TypeClassConstraint) &analysis__analysis__exist_tc_constr_analysis_info_0_0_1
};

#line 2113 "analysis.c"
static const MR_DuExistLocn analysis__analysis__exist_locns_analysis_info_0_0[1] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

#line 2121 "analysis.c"
static const MR_DuExistInfo analysis__analysis__exist_info_analysis_info_0_0 = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 1,
  analysis__analysis__exist_locns_analysis_info_0_0,
  analysis__analysis__exist_tc_constrs_analysis_info_0_0
};

#line 2130 "analysis.c"
static const MR_DuFunctorDesc analysis__analysis__du_functor_desc_analysis_info_0_0 = {
  (MR_String) "analysis_info",
  (MR_Integer) 10,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  analysis__analysis__field_types_analysis_info_0_0,
  analysis__analysis__field_names_analysis_info_0_0,
  NULL,
  &analysis__analysis__exist_info_analysis_info_0_0
};

#line 2145 "analysis.c"
static const MR_DuFunctorDescPtr analysis__analysis__du_stag_ordered_analysis_info_0_0[1] = {
  &analysis__analysis__du_functor_desc_analysis_info_0_0
};

#line 2150 "analysis.c"
static const MR_DuPtagLayout analysis__analysis__du_ptag_ordered_analysis_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    analysis__analysis__du_stag_ordered_analysis_info_0_0
  }
};

#line 2159 "analysis.c"
static const MR_DuFunctorDescPtr analysis__analysis__du_name_ordered_analysis_info_0[1] = {
  &analysis__analysis__du_functor_desc_analysis_info_0_0
};

#line 2164 "analysis.c"
static const MR_Integer analysis__analysis__functor_number_map_analysis_info_0[1] = {
  (MR_Integer) 0
};

#line 2169 "analysis.c"
const MR_TypeCtorInfo_Struct analysis__analysis__type_ctor_info_analysis_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (analysis____Unify____analysis_info_0_0_10001)),
  ((MR_Box) (analysis____Compare____analysis_info_0_0_10001)),
  (MR_String) "analysis",
  (MR_String) "analysis_info",
  {     analysis__analysis__du_name_ordered_analysis_info_0 },
  {     analysis__analysis__du_ptag_ordered_analysis_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  analysis__analysis__functor_number_map_analysis_info_0
};

#line 2186 "analysis.c"
static const MR_FA_PseudoTypeInfo_Struct1 analysis__list__pti_list_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 2194 "analysis.c"
static const MR_FA_PseudoTypeInfo_Struct2 analysis__tree234__pti_tree234_2__plain_analysis__type_ctor_info_func_id_0__pseudo_list__pti_list_1__pseudo_1 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &analysis__analysis__type_ctor_info_func_id_0,
    (MR_PseudoTypeInfo) &analysis__list__pti_list_1__pseudo_1
  }
};

#line 2203 "analysis.c"
static const MR_FA_PseudoTypeInfo_Struct2 analysis__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__pseudo_tree234__pti_tree234_2__plain_analysis__type_ctor_info_func_id_0__pseudo_list__pti_list_1__pseudo_1 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &analysis__tree234__pti_tree234_2__plain_analysis__type_ctor_info_func_id_0__pseudo_list__pti_list_1__pseudo_1
  }
};

#line 2212 "analysis.c"
static const MR_FA_PseudoTypeInfo_Struct2 analysis__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__pseudo_tree234__pti_tree234_2__plain_analysis__type_ctor_info_func_id_0__pseudo_list__pti_list_1__pseudo_1 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_PseudoTypeInfo) &analysis__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__pseudo_tree234__pti_tree234_2__plain_analysis__type_ctor_info_func_id_0__pseudo_list__pti_list_1__pseudo_1
  }
};

#line 2221 "analysis.c"
const MR_TypeCtorInfo_Struct analysis__analysis__type_ctor_info_analysis_map_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (analysis____Unify____analysis_map_1_0_10001)),
  ((MR_Box) (analysis____Compare____analysis_map_1_0_10001)),
  (MR_String) "analysis",
  (MR_String) "analysis_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &analysis__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__pseudo_tree234__pti_tree234_2__plain_analysis__type_ctor_info_func_id_0__pseudo_list__pti_list_1__pseudo_1 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2238 "analysis.c"
const MR_TypeCtorInfo_Struct analysis__analysis__type_ctor_info_analysis_name_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (analysis____Unify____analysis_name_0_0_10001)),
  ((MR_Box) (analysis____Compare____analysis_name_0_0_10001)),
  (MR_String) "analysis",
  (MR_String) "analysis_name",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2255 "analysis.c"
static const MR_PseudoTypeInfo analysis__analysis__field_types_analysis_request_0_0[2] = {
  (MR_PseudoTypeInfo) (MR_Integer) 514,
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
};

#line 2261 "analysis.c"
static const MR_ConstString analysis__analysis__field_names_analysis_request_0_0[2] = {
  (MR_String) "req_call",
  (MR_String) "req_caller"
};

#line 2267 "analysis.c"
static const MR_TypeClassConstraint_2Struct analysis__analysis__exist_tc_constr_analysis_request_0_0_1 = {
  &analysis__analysis__type_class_decl_call_pattern_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

#line 2276 "analysis.c"
static const MR_TypeClassConstraint analysis__analysis__exist_tc_constrs_analysis_request_0_0[1] = {
  (MR_TypeClassConstraint) &analysis__analysis__exist_tc_constr_analysis_request_0_0_1
};

#line 2281 "analysis.c"
static const MR_DuExistLocn analysis__analysis__exist_locns_analysis_request_0_0[2] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 3
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 4
  }
};

#line 2293 "analysis.c"
static const MR_DuExistInfo analysis__analysis__exist_info_analysis_request_0_0 = {
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 1,
  analysis__analysis__exist_locns_analysis_request_0_0,
  analysis__analysis__exist_tc_constrs_analysis_request_0_0
};

#line 2302 "analysis.c"
static const MR_DuFunctorDesc analysis__analysis__du_functor_desc_analysis_request_0_0 = {
  (MR_String) "analysis_request",
  (MR_Integer) 2,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  analysis__analysis__field_types_analysis_request_0_0,
  analysis__analysis__field_names_analysis_request_0_0,
  NULL,
  &analysis__analysis__exist_info_analysis_request_0_0
};

#line 2317 "analysis.c"
static const MR_DuFunctorDescPtr analysis__analysis__du_stag_ordered_analysis_request_0_0[1] = {
  &analysis__analysis__du_functor_desc_analysis_request_0_0
};

#line 2322 "analysis.c"
static const MR_DuPtagLayout analysis__analysis__du_ptag_ordered_analysis_request_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    analysis__analysis__du_stag_ordered_analysis_request_0_0
  }
};

#line 2331 "analysis.c"
static const MR_DuFunctorDescPtr analysis__analysis__du_name_ordered_analysis_request_0[1] = {
  &analysis__analysis__du_functor_desc_analysis_request_0_0
};

#line 2336 "analysis.c"
static const MR_Integer analysis__analysis__functor_number_map_analysis_request_0[1] = {
  (MR_Integer) 0
};

#line 2341 "analysis.c"
const MR_TypeCtorInfo_Struct analysis__analysis__type_ctor_info_analysis_request_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (analysis____Unify____analysis_request_0_0_10001)),
  ((MR_Box) (analysis____Compare____analysis_request_0_0_10001)),
  (MR_String) "analysis",
  (MR_String) "analysis_request",
  {     analysis__analysis__du_name_ordered_analysis_request_0 },
  {     analysis__analysis__du_ptag_ordered_analysis_request_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  analysis__analysis__functor_number_map_analysis_request_0
};

#line 2358 "analysis.c"
static const MR_PseudoTypeInfo analysis__analysis__field_types_analysis_result_2_0[3] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) (MR_Integer) 2,
  (MR_PseudoTypeInfo) &analysis__analysis__type_ctor_info_analysis_status_0
};

#line 2365 "analysis.c"
static const MR_ConstString analysis__analysis__field_names_analysis_result_2_0[3] = {
  (MR_String) "ar_call",
  (MR_String) "ar_answer",
  (MR_String) "ar_status"
};

#line 2372 "analysis.c"
static const MR_DuFunctorDesc analysis__analysis__du_functor_desc_analysis_result_2_0 = {
  (MR_String) "analysis_result",
  (MR_Integer) 3,
  (MR_Integer) 3,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  analysis__analysis__field_types_analysis_result_2_0,
  analysis__analysis__field_names_analysis_result_2_0,
  NULL,
  NULL
};

#line 2387 "analysis.c"
static const MR_DuFunctorDescPtr analysis__analysis__du_stag_ordered_analysis_result_2_0[1] = {
  &analysis__analysis__du_functor_desc_analysis_result_2_0
};

#line 2392 "analysis.c"
static const MR_DuPtagLayout analysis__analysis__du_ptag_ordered_analysis_result_2[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    analysis__analysis__du_stag_ordered_analysis_result_2_0
  }
};

#line 2401 "analysis.c"
static const MR_DuFunctorDescPtr analysis__analysis__du_name_ordered_analysis_result_2[1] = {
  &analysis__analysis__du_functor_desc_analysis_result_2_0
};

#line 2406 "analysis.c"
static const MR_Integer analysis__analysis__functor_number_map_analysis_result_2[1] = {
  (MR_Integer) 0
};

#line 2411 "analysis.c"
const MR_TypeCtorInfo_Struct analysis__analysis__type_ctor_info_analysis_result_2 = {
  (MR_Integer) 2,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (analysis____Unify____analysis_result_2_0_10001)),
  ((MR_Box) (analysis____Compare____analysis_result_2_0_10001)),
  (MR_String) "analysis",
  (MR_String) "analysis_result",
  {     analysis__analysis__du_name_ordered_analysis_result_2 },
  {     analysis__analysis__du_ptag_ordered_analysis_result_2 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  analysis__analysis__functor_number_map_analysis_result_2
};

#line 2428 "analysis.c"
static const MR_EnumFunctorDesc analysis__analysis__enum_functor_desc_analysis_status_0_0 = {
  (MR_String) "invalid",
  (MR_Integer) 0
};

#line 2434 "analysis.c"
static const MR_EnumFunctorDesc analysis__analysis__enum_functor_desc_analysis_status_0_1 = {
  (MR_String) "suboptimal",
  (MR_Integer) 1
};

#line 2440 "analysis.c"
static const MR_EnumFunctorDesc analysis__analysis__enum_functor_desc_analysis_status_0_2 = {
  (MR_String) "optimal",
  (MR_Integer) 2
};

#line 2446 "analysis.c"
static const MR_EnumFunctorDescPtr analysis__analysis__enum_value_ordered_analysis_status_0[3] = {
  &analysis__analysis__enum_functor_desc_analysis_status_0_0,
  &analysis__analysis__enum_functor_desc_analysis_status_0_1,
  &analysis__analysis__enum_functor_desc_analysis_status_0_2
};

#line 2453 "analysis.c"
static const MR_EnumFunctorDescPtr analysis__analysis__enum_name_ordered_analysis_status_0[3] = {
  &analysis__analysis__enum_functor_desc_analysis_status_0_0,
  &analysis__analysis__enum_functor_desc_analysis_status_0_2,
  &analysis__analysis__enum_functor_desc_analysis_status_0_1
};

#line 2460 "analysis.c"
static const MR_Integer analysis__analysis__functor_number_map_analysis_status_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 1
};

#line 2467 "analysis.c"
const MR_TypeCtorInfo_Struct analysis__analysis__type_ctor_info_analysis_status_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (analysis____Unify____analysis_status_0_0_10001)),
  ((MR_Box) (analysis____Compare____analysis_status_0_0_10001)),
  (MR_String) "analysis",
  (MR_String) "analysis_status",
  {     analysis__analysis__enum_name_ordered_analysis_status_0 },
  {     analysis__analysis__enum_value_ordered_analysis_status_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  analysis__analysis__functor_number_map_analysis_status_0
};

#line 2484 "analysis.c"
static const MR_FA_PseudoTypeInfo_Struct1 analysis__unit__pti_unit_1__pseudo_514 = {
  &mercury__unit__unit__type_ctor_info_unit_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 514
  }
};

#line 2492 "analysis.c"
static const MR_FA_PseudoTypeInfo_Struct1 analysis__unit__pti_unit_1__pseudo_515 = {
  &mercury__unit__unit__type_ctor_info_unit_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 515
  }
};

#line 2500 "analysis.c"
static const MR_PseudoTypeInfo analysis__analysis__field_types_analysis_type_0_0[2] = {
  (MR_PseudoTypeInfo) &analysis__unit__pti_unit_1__pseudo_514,
  (MR_PseudoTypeInfo) &analysis__unit__pti_unit_1__pseudo_515
};

#line 2506 "analysis.c"
static const MR_TypeClassConstraint_3Struct analysis__analysis__exist_tc_constr_analysis_type_0_0_1 = {
  &analysis__analysis__type_class_decl_analysis_3,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 2,
    (MR_PseudoTypeInfo) (MR_Integer) 3
  }
};

#line 2516 "analysis.c"
static const MR_TypeClassConstraint analysis__analysis__exist_tc_constrs_analysis_type_0_0[1] = {
  (MR_TypeClassConstraint) &analysis__analysis__exist_tc_constr_analysis_type_0_0_1
};

#line 2521 "analysis.c"
static const MR_DuExistLocn analysis__analysis__exist_locns_analysis_type_0_0[3] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 3
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 4
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 5
  }
};

#line 2537 "analysis.c"
static const MR_DuExistInfo analysis__analysis__exist_info_analysis_type_0_0 = {
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 1,
  analysis__analysis__exist_locns_analysis_type_0_0,
  analysis__analysis__exist_tc_constrs_analysis_type_0_0
};

#line 2546 "analysis.c"
static const MR_DuFunctorDesc analysis__analysis__du_functor_desc_analysis_type_0_0 = {
  (MR_String) "analysis_type",
  (MR_Integer) 2,
  (MR_Integer) 3,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  analysis__analysis__field_types_analysis_type_0_0,
  NULL,
  NULL,
  &analysis__analysis__exist_info_analysis_type_0_0
};

#line 2561 "analysis.c"
static const MR_DuFunctorDescPtr analysis__analysis__du_stag_ordered_analysis_type_0_0[1] = {
  &analysis__analysis__du_functor_desc_analysis_type_0_0
};

#line 2566 "analysis.c"
static const MR_DuPtagLayout analysis__analysis__du_ptag_ordered_analysis_type_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    analysis__analysis__du_stag_ordered_analysis_type_0_0
  }
};

#line 2575 "analysis.c"
static const MR_DuFunctorDescPtr analysis__analysis__du_name_ordered_analysis_type_0[1] = {
  &analysis__analysis__du_functor_desc_analysis_type_0_0
};

#line 2580 "analysis.c"
static const MR_Integer analysis__analysis__functor_number_map_analysis_type_0[1] = {
  (MR_Integer) 0
};

#line 2585 "analysis.c"
const MR_TypeCtorInfo_Struct analysis__analysis__type_ctor_info_analysis_type_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (analysis____Unify____analysis_type_0_0_10001)),
  ((MR_Box) (analysis____Compare____analysis_type_0_0_10001)),
  (MR_String) "analysis",
  (MR_String) "analysis_type",
  {     analysis__analysis__du_name_ordered_analysis_type_0 },
  {     analysis__analysis__du_ptag_ordered_analysis_type_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  analysis__analysis__functor_number_map_analysis_type_0
};

#line 2602 "analysis.c"
static const MR_EnumFunctorDesc analysis__analysis__enum_functor_desc_any_call_0_0 = {
  (MR_String) "any_call",
  (MR_Integer) 0
};

#line 2608 "analysis.c"
static const MR_EnumFunctorDescPtr analysis__analysis__enum_value_ordered_any_call_0[1] = {
  &analysis__analysis__enum_functor_desc_any_call_0_0
};

#line 2613 "analysis.c"
static const MR_EnumFunctorDescPtr analysis__analysis__enum_name_ordered_any_call_0[1] = {
  &analysis__analysis__enum_functor_desc_any_call_0_0
};

#line 2618 "analysis.c"
static const MR_Integer analysis__analysis__functor_number_map_any_call_0[1] = {
  (MR_Integer) 0
};

#line 2623 "analysis.c"
const MR_TypeCtorInfo_Struct analysis__analysis__type_ctor_info_any_call_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_DUMMY,
  ((MR_Box) (analysis____Unify____any_call_0_0_10001)),
  ((MR_Box) (analysis____Compare____any_call_0_0_10001)),
  (MR_String) "analysis",
  (MR_String) "any_call",
  {     analysis__analysis__enum_name_ordered_any_call_0 },
  {     analysis__analysis__enum_value_ordered_any_call_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  analysis__analysis__functor_number_map_any_call_0
};

#line 2640 "analysis.c"
static const MR_EnumFunctorDesc analysis__analysis__enum_functor_desc_fixpoint_type_0_0 = {
  (MR_String) "least_fixpoint",
  (MR_Integer) 0
};

#line 2646 "analysis.c"
static const MR_EnumFunctorDesc analysis__analysis__enum_functor_desc_fixpoint_type_0_1 = {
  (MR_String) "greatest_fixpoint",
  (MR_Integer) 1
};

#line 2652 "analysis.c"
static const MR_EnumFunctorDescPtr analysis__analysis__enum_value_ordered_fixpoint_type_0[2] = {
  &analysis__analysis__enum_functor_desc_fixpoint_type_0_0,
  &analysis__analysis__enum_functor_desc_fixpoint_type_0_1
};

#line 2658 "analysis.c"
static const MR_EnumFunctorDescPtr analysis__analysis__enum_name_ordered_fixpoint_type_0[2] = {
  &analysis__analysis__enum_functor_desc_fixpoint_type_0_1,
  &analysis__analysis__enum_functor_desc_fixpoint_type_0_0
};

#line 2664 "analysis.c"
static const MR_Integer analysis__analysis__functor_number_map_fixpoint_type_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 2670 "analysis.c"
const MR_TypeCtorInfo_Struct analysis__analysis__type_ctor_info_fixpoint_type_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (analysis____Unify____fixpoint_type_0_0_10001)),
  ((MR_Box) (analysis____Compare____fixpoint_type_0_0_10001)),
  (MR_String) "analysis",
  (MR_String) "fixpoint_type",
  {     analysis__analysis__enum_name_ordered_fixpoint_type_0 },
  {     analysis__analysis__enum_value_ordered_fixpoint_type_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  analysis__analysis__functor_number_map_fixpoint_type_0
};

#line 2687 "analysis.c"
const MR_TypeCtorInfo_Struct analysis__analysis__type_ctor_info_func_analysis_map_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (analysis____Unify____func_analysis_map_1_0_10001)),
  ((MR_Box) (analysis____Compare____func_analysis_map_1_0_10001)),
  (MR_String) "analysis",
  (MR_String) "func_analysis_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &analysis__tree234__pti_tree234_2__plain_analysis__type_ctor_info_func_id_0__pseudo_list__pti_list_1__pseudo_1 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2704 "analysis.c"
static const MR_PseudoTypeInfo analysis__analysis__field_types_func_id_0_0[4] = {
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2712 "analysis.c"
static const MR_ConstString analysis__analysis__field_names_func_id_0_0[4] = {
  (MR_String) "fid_pf",
  (MR_String) "fid_name",
  (MR_String) "fid_arity",
  (MR_String) "fid_mode"
};

#line 2720 "analysis.c"
static const MR_DuFunctorDesc analysis__analysis__du_functor_desc_func_id_0_0 = {
  (MR_String) "func_id",
  (MR_Integer) 4,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  analysis__analysis__field_types_func_id_0_0,
  analysis__analysis__field_names_func_id_0_0,
  NULL,
  NULL
};

#line 2735 "analysis.c"
static const MR_DuFunctorDescPtr analysis__analysis__du_stag_ordered_func_id_0_0[1] = {
  &analysis__analysis__du_functor_desc_func_id_0_0
};

#line 2740 "analysis.c"
static const MR_DuPtagLayout analysis__analysis__du_ptag_ordered_func_id_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    analysis__analysis__du_stag_ordered_func_id_0_0
  }
};

#line 2749 "analysis.c"
static const MR_DuFunctorDescPtr analysis__analysis__du_name_ordered_func_id_0[1] = {
  &analysis__analysis__du_functor_desc_func_id_0_0
};

#line 2754 "analysis.c"
static const MR_Integer analysis__analysis__functor_number_map_func_id_0[1] = {
  (MR_Integer) 0
};

#line 2759 "analysis.c"
const MR_TypeCtorInfo_Struct analysis__analysis__type_ctor_info_func_id_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (analysis____Unify____func_id_0_0_10001)),
  ((MR_Box) (analysis____Compare____func_id_0_0_10001)),
  (MR_String) "analysis",
  (MR_String) "func_id",
  {     analysis__analysis__du_name_ordered_func_id_0 },
  {     analysis__analysis__du_ptag_ordered_func_id_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  analysis__analysis__functor_number_map_func_id_0
};

#line 2776 "analysis.c"
static const MR_PseudoTypeInfo analysis__analysis__field_types_imdg_arc_0_0[2] = {
  (MR_PseudoTypeInfo) (MR_Integer) 514,
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
};

#line 2782 "analysis.c"
static const MR_ConstString analysis__analysis__field_names_imdg_arc_0_0[2] = {
  (MR_String) "imdg_call",
  (MR_String) "imdg_caller"
};

#line 2788 "analysis.c"
static const MR_TypeClassConstraint_2Struct analysis__analysis__exist_tc_constr_imdg_arc_0_0_1 = {
  &analysis__analysis__type_class_decl_call_pattern_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

#line 2797 "analysis.c"
static const MR_TypeClassConstraint analysis__analysis__exist_tc_constrs_imdg_arc_0_0[1] = {
  (MR_TypeClassConstraint) &analysis__analysis__exist_tc_constr_imdg_arc_0_0_1
};

#line 2802 "analysis.c"
static const MR_DuExistLocn analysis__analysis__exist_locns_imdg_arc_0_0[2] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 3
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 4
  }
};

#line 2814 "analysis.c"
static const MR_DuExistInfo analysis__analysis__exist_info_imdg_arc_0_0 = {
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 1,
  analysis__analysis__exist_locns_imdg_arc_0_0,
  analysis__analysis__exist_tc_constrs_imdg_arc_0_0
};

#line 2823 "analysis.c"
static const MR_DuFunctorDesc analysis__analysis__du_functor_desc_imdg_arc_0_0 = {
  (MR_String) "imdg_arc",
  (MR_Integer) 2,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  analysis__analysis__field_types_imdg_arc_0_0,
  analysis__analysis__field_names_imdg_arc_0_0,
  NULL,
  &analysis__analysis__exist_info_imdg_arc_0_0
};

#line 2838 "analysis.c"
static const MR_DuFunctorDescPtr analysis__analysis__du_stag_ordered_imdg_arc_0_0[1] = {
  &analysis__analysis__du_functor_desc_imdg_arc_0_0
};

#line 2843 "analysis.c"
static const MR_DuPtagLayout analysis__analysis__du_ptag_ordered_imdg_arc_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    analysis__analysis__du_stag_ordered_imdg_arc_0_0
  }
};

#line 2852 "analysis.c"
static const MR_DuFunctorDescPtr analysis__analysis__du_name_ordered_imdg_arc_0[1] = {
  &analysis__analysis__du_functor_desc_imdg_arc_0_0
};

#line 2857 "analysis.c"
static const MR_Integer analysis__analysis__functor_number_map_imdg_arc_0[1] = {
  (MR_Integer) 0
};

#line 2862 "analysis.c"
const MR_TypeCtorInfo_Struct analysis__analysis__type_ctor_info_imdg_arc_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (analysis____Unify____imdg_arc_0_0_10001)),
  ((MR_Box) (analysis____Compare____imdg_arc_0_0_10001)),
  (MR_String) "analysis",
  (MR_String) "imdg_arc",
  {     analysis__analysis__du_name_ordered_imdg_arc_0 },
  {     analysis__analysis__du_ptag_ordered_imdg_arc_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  analysis__analysis__functor_number_map_imdg_arc_0
};

#line 2879 "analysis.c"
static const MR_EnumFunctorDesc analysis__analysis__enum_functor_desc_make_analysis_registry_0_0 = {
  (MR_String) "make_analysis_registry",
  (MR_Integer) 0
};

#line 2885 "analysis.c"
static const MR_EnumFunctorDesc analysis__analysis__enum_functor_desc_make_analysis_registry_0_1 = {
  (MR_String) "use_analysis_registry_only",
  (MR_Integer) 1
};

#line 2891 "analysis.c"
static const MR_EnumFunctorDescPtr analysis__analysis__enum_value_ordered_make_analysis_registry_0[2] = {
  &analysis__analysis__enum_functor_desc_make_analysis_registry_0_0,
  &analysis__analysis__enum_functor_desc_make_analysis_registry_0_1
};

#line 2897 "analysis.c"
static const MR_EnumFunctorDescPtr analysis__analysis__enum_name_ordered_make_analysis_registry_0[2] = {
  &analysis__analysis__enum_functor_desc_make_analysis_registry_0_0,
  &analysis__analysis__enum_functor_desc_make_analysis_registry_0_1
};

#line 2903 "analysis.c"
static const MR_Integer analysis__analysis__functor_number_map_make_analysis_registry_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2909 "analysis.c"
const MR_TypeCtorInfo_Struct analysis__analysis__type_ctor_info_make_analysis_registry_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (analysis____Unify____make_analysis_registry_0_0_10001)),
  ((MR_Box) (analysis____Compare____make_analysis_registry_0_0_10001)),
  (MR_String) "analysis",
  (MR_String) "make_analysis_registry",
  {     analysis__analysis__enum_name_ordered_make_analysis_registry_0 },
  {     analysis__analysis__enum_value_ordered_make_analysis_registry_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  analysis__analysis__functor_number_map_make_analysis_registry_0
};

#line 2926 "analysis.c"
const MR_TypeCtorInfo_Struct analysis__analysis__type_ctor_info_module_analysis_map_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (analysis____Unify____module_analysis_map_1_0_10001)),
  ((MR_Box) (analysis____Compare____module_analysis_map_1_0_10001)),
  (MR_String) "analysis",
  (MR_String) "module_analysis_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &analysis__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__pseudo_tree234__pti_tree234_2__plain_analysis__type_ctor_info_func_id_0__pseudo_list__pti_list_1__pseudo_1 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2943 "analysis.c"
static const MR_EnumFunctorDesc analysis__analysis__enum_functor_desc_no_func_info_0_0 = {
  (MR_String) "no_func_info",
  (MR_Integer) 0
};

#line 2949 "analysis.c"
static const MR_EnumFunctorDescPtr analysis__analysis__enum_value_ordered_no_func_info_0[1] = {
  &analysis__analysis__enum_functor_desc_no_func_info_0_0
};

#line 2954 "analysis.c"
static const MR_EnumFunctorDescPtr analysis__analysis__enum_name_ordered_no_func_info_0[1] = {
  &analysis__analysis__enum_functor_desc_no_func_info_0_0
};

#line 2959 "analysis.c"
static const MR_Integer analysis__analysis__functor_number_map_no_func_info_0[1] = {
  (MR_Integer) 0
};

#line 2964 "analysis.c"
const MR_TypeCtorInfo_Struct analysis__analysis__type_ctor_info_no_func_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_DUMMY,
  ((MR_Box) (analysis____Unify____no_func_info_0_0_10001)),
  ((MR_Box) (analysis____Compare____no_func_info_0_0_10001)),
  (MR_String) "analysis",
  (MR_String) "no_func_info",
  {     analysis__analysis__enum_name_ordered_no_func_info_0 },
  {     analysis__analysis__enum_value_ordered_no_func_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  analysis__analysis__functor_number_map_no_func_info_0
};

#line 2981 "analysis.c"
static const MR_PseudoTypeInfo analysis__analysis__field_types_some_analysis_result_0_0[3] = {
  (MR_PseudoTypeInfo) (MR_Integer) 514,
  (MR_PseudoTypeInfo) (MR_Integer) 515,
  (MR_PseudoTypeInfo) &analysis__analysis__type_ctor_info_analysis_status_0
};

#line 2988 "analysis.c"
static const MR_ConstString analysis__analysis__field_names_some_analysis_result_0_0[3] = {
  (MR_String) "some_ar_call",
  (MR_String) "some_ar_answer",
  (MR_String) "some_ar_status"
};

#line 2995 "analysis.c"
static const MR_TypeClassConstraint_3Struct analysis__analysis__exist_tc_constr_some_analysis_result_0_0_1 = {
  &analysis__analysis__type_class_decl_analysis_3,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 2,
    (MR_PseudoTypeInfo) (MR_Integer) 3
  }
};

#line 3005 "analysis.c"
static const MR_TypeClassConstraint analysis__analysis__exist_tc_constrs_some_analysis_result_0_0[1] = {
  (MR_TypeClassConstraint) &analysis__analysis__exist_tc_constr_some_analysis_result_0_0_1
};

#line 3010 "analysis.c"
static const MR_DuExistLocn analysis__analysis__exist_locns_some_analysis_result_0_0[3] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 3
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 4
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 5
  }
};

#line 3026 "analysis.c"
static const MR_DuExistInfo analysis__analysis__exist_info_some_analysis_result_0_0 = {
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 1,
  analysis__analysis__exist_locns_some_analysis_result_0_0,
  analysis__analysis__exist_tc_constrs_some_analysis_result_0_0
};

#line 3035 "analysis.c"
static const MR_DuFunctorDesc analysis__analysis__du_functor_desc_some_analysis_result_0_0 = {
  (MR_String) "some_analysis_result",
  (MR_Integer) 3,
  (MR_Integer) 3,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  analysis__analysis__field_types_some_analysis_result_0_0,
  analysis__analysis__field_names_some_analysis_result_0_0,
  NULL,
  &analysis__analysis__exist_info_some_analysis_result_0_0
};

#line 3050 "analysis.c"
static const MR_DuFunctorDescPtr analysis__analysis__du_stag_ordered_some_analysis_result_0_0[1] = {
  &analysis__analysis__du_functor_desc_some_analysis_result_0_0
};

#line 3055 "analysis.c"
static const MR_DuPtagLayout analysis__analysis__du_ptag_ordered_some_analysis_result_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    analysis__analysis__du_stag_ordered_some_analysis_result_0_0
  }
};

#line 3064 "analysis.c"
static const MR_DuFunctorDescPtr analysis__analysis__du_name_ordered_some_analysis_result_0[1] = {
  &analysis__analysis__du_functor_desc_some_analysis_result_0_0
};

#line 3069 "analysis.c"
static const MR_Integer analysis__analysis__functor_number_map_some_analysis_result_0[1] = {
  (MR_Integer) 0
};

#line 3074 "analysis.c"
const MR_TypeCtorInfo_Struct analysis__analysis__type_ctor_info_some_analysis_result_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (analysis____Unify____some_analysis_result_0_0_10001)),
  ((MR_Box) (analysis____Compare____some_analysis_result_0_0_10001)),
  (MR_String) "analysis",
  (MR_String) "some_analysis_result",
  {     analysis__analysis__du_name_ordered_some_analysis_result_0 },
  {     analysis__analysis__du_ptag_ordered_some_analysis_result_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  analysis__analysis__functor_number_map_some_analysis_result_0
};

#line 3091 "analysis.c"
const MR_BaseTypeclassInfo base_typeclass_info_analysis__to_term__arity1__analysis__any_call__arity0__[7] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (MR_Word) ((MR_Integer) 2)),
  ((MR_Box) (analysis__ClassMethod_for_analysis__to_term____analysis__any_call__arity0______analysis__to_term_1_1_f_0_10001)),
  ((MR_Box) (analysis__ClassMethod_for_analysis__to_term____analysis__any_call__arity0______analysis__from_term_2_2_p_0_10001))
};

#line 3102 "analysis.c"
const MR_BaseTypeclassInfo base_typeclass_info_analysis__partial_order__arity2__analysis__no_func_info__arity0__analysis__any_call__arity0__[7] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 2)),
  ((MR_Box) (MR_Word) ((MR_Integer) 2)),
  ((MR_Box) (analysis__ClassMethod_for_analysis__partial_order____analysis__no_func_info__arity0__analysis__any_call__arity0______analysis__more_precise_than_3_3_p_0_10001)),
  ((MR_Box) (analysis__ClassMethod_for_analysis__partial_order____analysis__no_func_info__arity0__analysis__any_call__arity0______analysis__equivalent_3_3_p_0_10001))
};

#line 3113 "analysis.c"
const MR_BaseTypeclassInfo base_typeclass_info_analysis__call_pattern__arity2__analysis__no_func_info__arity0__analysis__any_call__arity0__[5] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 2)),
  ((MR_Box) (MR_Word) ((MR_Integer) 2)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0))
};

#line 3122 "analysis.c"
static const MR_ConstString analysis__analysis__type_class_id_var_names_to_term_1[1] = {
  (MR_String) "S"
};

#line 3127 "analysis.c"
static const MR_TypeClassMethod analysis__analysis__type_class_id_method_ids_to_term_1[2] = {
  {
    (MR_String) "to_term",
    (MR_Integer) 2,
    mercury__private_builtin__MR_FUNCTION
  },
  {
    (MR_String) "from_term",
    (MR_Integer) 2,
    mercury__private_builtin__MR_PREDICATE
  }
};

#line 3141 "analysis.c"
static const MR_TypeClassId analysis__analysis__type_class_id_to_term_1 = {
  (MR_String) "analysis",
  (MR_String) "to_term",
  (MR_Integer) 1,
  (MR_Integer) 1,
  (MR_Integer) 2,
  analysis__analysis__type_class_id_var_names_to_term_1,
  analysis__analysis__type_class_id_method_ids_to_term_1
};

#line 3152 "analysis.c"
const MR_TypeClassDeclStruct analysis__analysis__type_class_decl_to_term_1 = {
  &analysis__analysis__type_class_id_to_term_1,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL
};

#line 3160 "analysis.c"
static const MR_ConstString analysis__analysis__type_class_id_var_names_partial_order_2[2] = {
  (MR_String) "FuncInfo",
  (MR_String) "T"
};

#line 3166 "analysis.c"
static const MR_TypeClassMethod analysis__analysis__type_class_id_method_ids_partial_order_2[2] = {
  {
    (MR_String) "more_precise_than",
    (MR_Integer) 3,
    mercury__private_builtin__MR_PREDICATE
  },
  {
    (MR_String) "equivalent",
    (MR_Integer) 3,
    mercury__private_builtin__MR_PREDICATE
  }
};

#line 3180 "analysis.c"
static const MR_TypeClassId analysis__analysis__type_class_id_partial_order_2 = {
  (MR_String) "analysis",
  (MR_String) "partial_order",
  (MR_Integer) 2,
  (MR_Integer) 2,
  (MR_Integer) 2,
  analysis__analysis__type_class_id_var_names_partial_order_2,
  analysis__analysis__type_class_id_method_ids_partial_order_2
};

#line 3191 "analysis.c"
const MR_TypeClassDeclStruct analysis__analysis__type_class_decl_partial_order_2 = {
  &analysis__analysis__type_class_id_partial_order_2,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL
};

#line 3199 "analysis.c"
static const MR_ConstString analysis__analysis__type_class_id_var_names_compiler_1[1] = {
  (MR_String) "Compiler"
};

#line 3204 "analysis.c"
static const MR_TypeClassMethod analysis__analysis__type_class_id_method_ids_compiler_1[4] = {
  {
    (MR_String) "compiler_name",
    (MR_Integer) 2,
    mercury__private_builtin__MR_FUNCTION
  },
  {
    (MR_String) "analyses",
    (MR_Integer) 3,
    mercury__private_builtin__MR_FUNCTION
  },
  {
    (MR_String) "module_name_to_read_file_name",
    (MR_Integer) 7,
    mercury__private_builtin__MR_PREDICATE
  },
  {
    (MR_String) "module_name_to_write_file_name",
    (MR_Integer) 7,
    mercury__private_builtin__MR_PREDICATE
  }
};

#line 3228 "analysis.c"
static const MR_TypeClassId analysis__analysis__type_class_id_compiler_1 = {
  (MR_String) "analysis",
  (MR_String) "compiler",
  (MR_Integer) 1,
  (MR_Integer) 1,
  (MR_Integer) 4,
  analysis__analysis__type_class_id_var_names_compiler_1,
  analysis__analysis__type_class_id_method_ids_compiler_1
};

#line 3239 "analysis.c"
const MR_TypeClassDeclStruct analysis__analysis__type_class_decl_compiler_1 = {
  &analysis__analysis__type_class_id_compiler_1,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL
};

#line 3247 "analysis.c"
static const MR_ConstString analysis__analysis__type_class_id_var_names_call_pattern_2[2] = {
  (MR_String) "FuncInfo",
  (MR_String) "Call"
};

#line 3253 "analysis.c"
static const MR_TypeClassId analysis__analysis__type_class_id_call_pattern_2 = {
  (MR_String) "analysis",
  (MR_String) "call_pattern",
  (MR_Integer) 2,
  (MR_Integer) 2,
  (MR_Integer) 0,
  analysis__analysis__type_class_id_var_names_call_pattern_2,
  NULL
};

#line 3264 "analysis.c"
static const MR_TypeClassConstraint_2Struct analysis__analysis__type_class_decl_super_call_pattern_2_1 = {
  &analysis__analysis__type_class_decl_partial_order_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

#line 3273 "analysis.c"
static const MR_TypeClassConstraint_1Struct analysis__analysis__type_class_decl_super_call_pattern_2_2 = {
  &analysis__analysis__type_class_decl_to_term_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

#line 3281 "analysis.c"
static const MR_TypeClassConstraint analysis__analysis__type_class_decl_supers_call_pattern_2[2] = {
  (MR_TypeClassConstraint) &analysis__analysis__type_class_decl_super_call_pattern_2_1,
  (MR_TypeClassConstraint) &analysis__analysis__type_class_decl_super_call_pattern_2_2
};

#line 3287 "analysis.c"
const MR_TypeClassDeclStruct analysis__analysis__type_class_decl_call_pattern_2 = {
  &analysis__analysis__type_class_id_call_pattern_2,
  (MR_Integer) 0,
  (MR_Integer) 2,
  NULL
};

#line 3295 "analysis.c"
static const MR_ConstString analysis__analysis__type_class_id_var_names_answer_pattern_2[2] = {
  (MR_String) "FuncInfo",
  (MR_String) "Answer"
};

#line 3301 "analysis.c"
static const MR_TypeClassId analysis__analysis__type_class_id_answer_pattern_2 = {
  (MR_String) "analysis",
  (MR_String) "answer_pattern",
  (MR_Integer) 2,
  (MR_Integer) 2,
  (MR_Integer) 0,
  analysis__analysis__type_class_id_var_names_answer_pattern_2,
  NULL
};

#line 3312 "analysis.c"
static const MR_TypeClassConstraint_2Struct analysis__analysis__type_class_decl_super_answer_pattern_2_1 = {
  &analysis__analysis__type_class_decl_partial_order_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

#line 3321 "analysis.c"
static const MR_TypeClassConstraint_1Struct analysis__analysis__type_class_decl_super_answer_pattern_2_2 = {
  &analysis__analysis__type_class_decl_to_term_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

#line 3329 "analysis.c"
static const MR_TypeClassConstraint analysis__analysis__type_class_decl_supers_answer_pattern_2[2] = {
  (MR_TypeClassConstraint) &analysis__analysis__type_class_decl_super_answer_pattern_2_1,
  (MR_TypeClassConstraint) &analysis__analysis__type_class_decl_super_answer_pattern_2_2
};

#line 3335 "analysis.c"
const MR_TypeClassDeclStruct analysis__analysis__type_class_decl_answer_pattern_2 = {
  &analysis__analysis__type_class_id_answer_pattern_2,
  (MR_Integer) 0,
  (MR_Integer) 2,
  NULL
};

#line 3343 "analysis.c"
static const MR_ConstString analysis__analysis__type_class_id_var_names_analysis_3[3] = {
  (MR_String) "FuncInfo",
  (MR_String) "Call",
  (MR_String) "Answer"
};

#line 3350 "analysis.c"
static const MR_TypeClassMethod analysis__analysis__type_class_id_method_ids_analysis_3[6] = {
  {
    (MR_String) "analysis_name",
    (MR_Integer) 3,
    mercury__private_builtin__MR_FUNCTION
  },
  {
    (MR_String) "analysis_version_number",
    (MR_Integer) 3,
    mercury__private_builtin__MR_FUNCTION
  },
  {
    (MR_String) "preferred_fixpoint_type",
    (MR_Integer) 3,
    mercury__private_builtin__MR_FUNCTION
  },
  {
    (MR_String) "bottom",
    (MR_Integer) 3,
    mercury__private_builtin__MR_FUNCTION
  },
  {
    (MR_String) "top",
    (MR_Integer) 3,
    mercury__private_builtin__MR_FUNCTION
  },
  {
    (MR_String) "get_func_info",
    (MR_Integer) 6,
    mercury__private_builtin__MR_PREDICATE
  }
};

#line 3384 "analysis.c"
static const MR_TypeClassId analysis__analysis__type_class_id_analysis_3 = {
  (MR_String) "analysis",
  (MR_String) "analysis",
  (MR_Integer) 3,
  (MR_Integer) 3,
  (MR_Integer) 6,
  analysis__analysis__type_class_id_var_names_analysis_3,
  analysis__analysis__type_class_id_method_ids_analysis_3
};

#line 3395 "analysis.c"
static const MR_TypeClassConstraint_2Struct analysis__analysis__type_class_decl_super_analysis_3_1 = {
  &analysis__analysis__type_class_decl_call_pattern_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

#line 3404 "analysis.c"
static const MR_TypeClassConstraint_2Struct analysis__analysis__type_class_decl_super_analysis_3_2 = {
  &analysis__analysis__type_class_decl_answer_pattern_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 3
  }
};

#line 3413 "analysis.c"
static const MR_TypeClassConstraint analysis__analysis__type_class_decl_supers_analysis_3[2] = {
  (MR_TypeClassConstraint) &analysis__analysis__type_class_decl_super_analysis_3_1,
  (MR_TypeClassConstraint) &analysis__analysis__type_class_decl_super_analysis_3_2
};

#line 3419 "analysis.c"
const MR_TypeClassDeclStruct analysis__analysis__type_class_decl_analysis_3 = {
  &analysis__analysis__type_class_id_analysis_3,
  (MR_Integer) 0,
  (MR_Integer) 2,
  NULL
};

#line 3427 "analysis.c"
static MR_bool MR_CALL 
analysis____Unify____analysis_info_0_0_10001(
#line 3430 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 3432 "analysis.c"
  MR_Box analysis__wrapper_arg_2)
#line 3434 "analysis.c"
{
#line 3436 "analysis.c"
  {
#line 3438 "analysis.c"
    MR_bool analysis__succeeded;

#line 3441 "analysis.c"
    {
#line 3443 "analysis.c"
      analysis__succeeded = analysis____Unify____analysis_info_0_0(((MR_Word) analysis__wrapper_arg_1), ((MR_Word) analysis__wrapper_arg_2));
    }
#line 3446 "analysis.c"
    return analysis__succeeded;
#line 3448 "analysis.c"
  }
#line 3450 "analysis.c"
}

#line 3453 "analysis.c"
static void MR_CALL 
analysis____Compare____analysis_info_0_0_10001(
#line 3456 "analysis.c"
  MR_Box * analysis__wrapper_arg_1,
#line 3458 "analysis.c"
  MR_Box analysis__wrapper_arg_2,
#line 3460 "analysis.c"
  MR_Box analysis__wrapper_arg_3)
#line 3462 "analysis.c"
{
#line 3464 "analysis.c"
  {
#line 3466 "analysis.c"
    MR_Word analysis__conv0_HeadVar__1_1;

#line 3469 "analysis.c"
    {
#line 3471 "analysis.c"
      analysis____Compare____analysis_info_0_0(&analysis__conv0_HeadVar__1_1, ((MR_Word) analysis__wrapper_arg_2), ((MR_Word) analysis__wrapper_arg_3));
    }
#line 3474 "analysis.c"
    *analysis__wrapper_arg_1 = ((MR_Box) (analysis__conv0_HeadVar__1_1));
#line 3476 "analysis.c"
  }
#line 3478 "analysis.c"
}

#line 3481 "analysis.c"
static MR_bool MR_CALL 
analysis____Unify____analysis_map_1_0_10001(
#line 3484 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 3486 "analysis.c"
  MR_Box analysis__wrapper_arg_2,
#line 3488 "analysis.c"
  MR_Box analysis__wrapper_arg_3)
#line 3490 "analysis.c"
{
#line 3492 "analysis.c"
  {
#line 3494 "analysis.c"
    MR_bool analysis__succeeded;

#line 3497 "analysis.c"
    {
#line 3499 "analysis.c"
      analysis__succeeded = analysis____Unify____analysis_map_1_0(((MR_Word) analysis__wrapper_arg_1), ((MR_Word) analysis__wrapper_arg_2), ((MR_Word) analysis__wrapper_arg_3));
    }
#line 3502 "analysis.c"
    return analysis__succeeded;
#line 3504 "analysis.c"
  }
#line 3506 "analysis.c"
}

#line 3509 "analysis.c"
static void MR_CALL 
analysis____Compare____analysis_map_1_0_10001(
#line 3512 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 3514 "analysis.c"
  MR_Box * analysis__wrapper_arg_2,
#line 3516 "analysis.c"
  MR_Box analysis__wrapper_arg_3,
#line 3518 "analysis.c"
  MR_Box analysis__wrapper_arg_4)
#line 3520 "analysis.c"
{
#line 3522 "analysis.c"
  {
#line 3524 "analysis.c"
    MR_Word analysis__conv0_HeadVar__1_1;

#line 3527 "analysis.c"
    {
#line 3529 "analysis.c"
      analysis____Compare____analysis_map_1_0(((MR_Word) analysis__wrapper_arg_1), &analysis__conv0_HeadVar__1_1, ((MR_Word) analysis__wrapper_arg_3), ((MR_Word) analysis__wrapper_arg_4));
    }
#line 3532 "analysis.c"
    *analysis__wrapper_arg_2 = ((MR_Box) (analysis__conv0_HeadVar__1_1));
#line 3534 "analysis.c"
  }
#line 3536 "analysis.c"
}

#line 3539 "analysis.c"
static MR_bool MR_CALL 
analysis____Unify____analysis_name_0_0_10001(
#line 3542 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 3544 "analysis.c"
  MR_Box analysis__wrapper_arg_2)
#line 3546 "analysis.c"
{
#line 3548 "analysis.c"
  {
#line 3550 "analysis.c"
    MR_bool analysis__succeeded;

#line 3553 "analysis.c"
    {
#line 3555 "analysis.c"
      analysis__succeeded = analysis____Unify____analysis_name_0_0(((MR_String) analysis__wrapper_arg_1), ((MR_String) analysis__wrapper_arg_2));
    }
#line 3558 "analysis.c"
    return analysis__succeeded;
#line 3560 "analysis.c"
  }
#line 3562 "analysis.c"
}

#line 3565 "analysis.c"
static void MR_CALL 
analysis____Compare____analysis_name_0_0_10001(
#line 3568 "analysis.c"
  MR_Box * analysis__wrapper_arg_1,
#line 3570 "analysis.c"
  MR_Box analysis__wrapper_arg_2,
#line 3572 "analysis.c"
  MR_Box analysis__wrapper_arg_3)
#line 3574 "analysis.c"
{
#line 3576 "analysis.c"
  {
#line 3578 "analysis.c"
    MR_Word analysis__conv0_HeadVar__1_1;

#line 3581 "analysis.c"
    {
#line 3583 "analysis.c"
      analysis____Compare____analysis_name_0_0(&analysis__conv0_HeadVar__1_1, ((MR_String) analysis__wrapper_arg_2), ((MR_String) analysis__wrapper_arg_3));
    }
#line 3586 "analysis.c"
    *analysis__wrapper_arg_1 = ((MR_Box) (analysis__conv0_HeadVar__1_1));
#line 3588 "analysis.c"
  }
#line 3590 "analysis.c"
}

#line 3593 "analysis.c"
static MR_bool MR_CALL 
analysis____Unify____analysis_request_0_0_10001(
#line 3596 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 3598 "analysis.c"
  MR_Box analysis__wrapper_arg_2)
#line 3600 "analysis.c"
{
#line 3602 "analysis.c"
  {
#line 3604 "analysis.c"
    MR_bool analysis__succeeded;

#line 3607 "analysis.c"
    {
#line 3609 "analysis.c"
      analysis__succeeded = analysis____Unify____analysis_request_0_0(((MR_Word) analysis__wrapper_arg_1), ((MR_Word) analysis__wrapper_arg_2));
    }
#line 3612 "analysis.c"
    return analysis__succeeded;
#line 3614 "analysis.c"
  }
#line 3616 "analysis.c"
}

#line 3619 "analysis.c"
static void MR_CALL 
analysis____Compare____analysis_request_0_0_10001(
#line 3622 "analysis.c"
  MR_Box * analysis__wrapper_arg_1,
#line 3624 "analysis.c"
  MR_Box analysis__wrapper_arg_2,
#line 3626 "analysis.c"
  MR_Box analysis__wrapper_arg_3)
#line 3628 "analysis.c"
{
#line 3630 "analysis.c"
  {
#line 3632 "analysis.c"
    MR_Word analysis__conv0_HeadVar__1_1;

#line 3635 "analysis.c"
    {
#line 3637 "analysis.c"
      analysis____Compare____analysis_request_0_0(&analysis__conv0_HeadVar__1_1, ((MR_Word) analysis__wrapper_arg_2), ((MR_Word) analysis__wrapper_arg_3));
    }
#line 3640 "analysis.c"
    *analysis__wrapper_arg_1 = ((MR_Box) (analysis__conv0_HeadVar__1_1));
#line 3642 "analysis.c"
  }
#line 3644 "analysis.c"
}

#line 3647 "analysis.c"
static MR_bool MR_CALL 
analysis____Unify____analysis_result_2_0_10001(
#line 3650 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 3652 "analysis.c"
  MR_Box analysis__wrapper_arg_2,
#line 3654 "analysis.c"
  MR_Box analysis__wrapper_arg_3,
#line 3656 "analysis.c"
  MR_Box analysis__wrapper_arg_4)
#line 3658 "analysis.c"
{
#line 3660 "analysis.c"
  {
#line 3662 "analysis.c"
    MR_bool analysis__succeeded;

#line 3665 "analysis.c"
    {
#line 3667 "analysis.c"
      analysis__succeeded = analysis____Unify____analysis_result_2_0(((MR_Word) analysis__wrapper_arg_1), ((MR_Word) analysis__wrapper_arg_2), ((MR_Word) analysis__wrapper_arg_3), ((MR_Word) analysis__wrapper_arg_4));
    }
#line 3670 "analysis.c"
    return analysis__succeeded;
#line 3672 "analysis.c"
  }
#line 3674 "analysis.c"
}

#line 3677 "analysis.c"
static void MR_CALL 
analysis____Compare____analysis_result_2_0_10001(
#line 3680 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 3682 "analysis.c"
  MR_Box analysis__wrapper_arg_2,
#line 3684 "analysis.c"
  MR_Box * analysis__wrapper_arg_3,
#line 3686 "analysis.c"
  MR_Box analysis__wrapper_arg_4,
#line 3688 "analysis.c"
  MR_Box analysis__wrapper_arg_5)
#line 3690 "analysis.c"
{
#line 3692 "analysis.c"
  {
#line 3694 "analysis.c"
    MR_Word analysis__conv0_HeadVar__1_1;

#line 3697 "analysis.c"
    {
#line 3699 "analysis.c"
      analysis____Compare____analysis_result_2_0(((MR_Word) analysis__wrapper_arg_1), ((MR_Word) analysis__wrapper_arg_2), &analysis__conv0_HeadVar__1_1, ((MR_Word) analysis__wrapper_arg_4), ((MR_Word) analysis__wrapper_arg_5));
    }
#line 3702 "analysis.c"
    *analysis__wrapper_arg_3 = ((MR_Box) (analysis__conv0_HeadVar__1_1));
#line 3704 "analysis.c"
  }
#line 3706 "analysis.c"
}

#line 3709 "analysis.c"
static MR_bool MR_CALL 
analysis____Unify____analysis_status_0_0_10001(
#line 3712 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 3714 "analysis.c"
  MR_Box analysis__wrapper_arg_2)
#line 3716 "analysis.c"
{
#line 3718 "analysis.c"
  {
#line 3720 "analysis.c"
    MR_bool analysis__succeeded;

#line 3723 "analysis.c"
    {
#line 3725 "analysis.c"
      analysis__succeeded = analysis____Unify____analysis_status_0_0(((MR_Word) analysis__wrapper_arg_1), ((MR_Word) analysis__wrapper_arg_2));
    }
#line 3728 "analysis.c"
    return analysis__succeeded;
#line 3730 "analysis.c"
  }
#line 3732 "analysis.c"
}

#line 3735 "analysis.c"
static void MR_CALL 
analysis____Compare____analysis_status_0_0_10001(
#line 3738 "analysis.c"
  MR_Box * analysis__wrapper_arg_1,
#line 3740 "analysis.c"
  MR_Box analysis__wrapper_arg_2,
#line 3742 "analysis.c"
  MR_Box analysis__wrapper_arg_3)
#line 3744 "analysis.c"
{
#line 3746 "analysis.c"
  {
#line 3748 "analysis.c"
    MR_Word analysis__conv0_HeadVar__1_1;

#line 3751 "analysis.c"
    {
#line 3753 "analysis.c"
      analysis____Compare____analysis_status_0_0(&analysis__conv0_HeadVar__1_1, ((MR_Word) analysis__wrapper_arg_2), ((MR_Word) analysis__wrapper_arg_3));
    }
#line 3756 "analysis.c"
    *analysis__wrapper_arg_1 = ((MR_Box) (analysis__conv0_HeadVar__1_1));
#line 3758 "analysis.c"
  }
#line 3760 "analysis.c"
}

#line 3763 "analysis.c"
static MR_bool MR_CALL 
analysis____Unify____analysis_type_0_0_10001(
#line 3766 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 3768 "analysis.c"
  MR_Box analysis__wrapper_arg_2)
#line 3770 "analysis.c"
{
#line 3772 "analysis.c"
  {
#line 3774 "analysis.c"
    MR_bool analysis__succeeded;

#line 3777 "analysis.c"
    {
#line 3779 "analysis.c"
      analysis__succeeded = analysis____Unify____analysis_type_0_0(((MR_Word) analysis__wrapper_arg_1), ((MR_Word) analysis__wrapper_arg_2));
    }
#line 3782 "analysis.c"
    return analysis__succeeded;
#line 3784 "analysis.c"
  }
#line 3786 "analysis.c"
}

#line 3789 "analysis.c"
static void MR_CALL 
analysis____Compare____analysis_type_0_0_10001(
#line 3792 "analysis.c"
  MR_Box * analysis__wrapper_arg_1,
#line 3794 "analysis.c"
  MR_Box analysis__wrapper_arg_2,
#line 3796 "analysis.c"
  MR_Box analysis__wrapper_arg_3)
#line 3798 "analysis.c"
{
#line 3800 "analysis.c"
  {
#line 3802 "analysis.c"
    MR_Word analysis__conv0_HeadVar__1_1;

#line 3805 "analysis.c"
    {
#line 3807 "analysis.c"
      analysis____Compare____analysis_type_0_0(&analysis__conv0_HeadVar__1_1, ((MR_Word) analysis__wrapper_arg_2), ((MR_Word) analysis__wrapper_arg_3));
    }
#line 3810 "analysis.c"
    *analysis__wrapper_arg_1 = ((MR_Box) (analysis__conv0_HeadVar__1_1));
#line 3812 "analysis.c"
  }
#line 3814 "analysis.c"
}

#line 3817 "analysis.c"
static MR_bool MR_CALL 
analysis____Unify____any_call_0_0_10001(
#line 3820 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 3822 "analysis.c"
  MR_Box analysis__wrapper_arg_2)
#line 3824 "analysis.c"
{
#line 3826 "analysis.c"
  {
#line 3828 "analysis.c"
    MR_bool analysis__succeeded;

#line 3831 "analysis.c"
    {
#line 3833 "analysis.c"
      analysis__succeeded = analysis____Unify____any_call_0_0();
    }
#line 3836 "analysis.c"
    return analysis__succeeded;
#line 3838 "analysis.c"
  }
#line 3840 "analysis.c"
}

#line 3843 "analysis.c"
static void MR_CALL 
analysis____Compare____any_call_0_0_10001(
#line 3846 "analysis.c"
  MR_Box * analysis__wrapper_arg_1,
#line 3848 "analysis.c"
  MR_Box analysis__wrapper_arg_2,
#line 3850 "analysis.c"
  MR_Box analysis__wrapper_arg_3)
#line 3852 "analysis.c"
{
#line 3854 "analysis.c"
  {
#line 3856 "analysis.c"
    MR_Word analysis__conv0_HeadVar__1_1;

#line 3859 "analysis.c"
    {
#line 3861 "analysis.c"
      analysis____Compare____any_call_0_0(&analysis__conv0_HeadVar__1_1);
    }
#line 3864 "analysis.c"
    *analysis__wrapper_arg_1 = ((MR_Box) (analysis__conv0_HeadVar__1_1));
#line 3866 "analysis.c"
  }
#line 3868 "analysis.c"
}

#line 3871 "analysis.c"
static MR_bool MR_CALL 
analysis____Unify____fixpoint_type_0_0_10001(
#line 3874 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 3876 "analysis.c"
  MR_Box analysis__wrapper_arg_2)
#line 3878 "analysis.c"
{
#line 3880 "analysis.c"
  {
#line 3882 "analysis.c"
    MR_bool analysis__succeeded;

#line 3885 "analysis.c"
    {
#line 3887 "analysis.c"
      analysis__succeeded = analysis____Unify____fixpoint_type_0_0(((MR_Word) analysis__wrapper_arg_1), ((MR_Word) analysis__wrapper_arg_2));
    }
#line 3890 "analysis.c"
    return analysis__succeeded;
#line 3892 "analysis.c"
  }
#line 3894 "analysis.c"
}

#line 3897 "analysis.c"
static void MR_CALL 
analysis____Compare____fixpoint_type_0_0_10001(
#line 3900 "analysis.c"
  MR_Box * analysis__wrapper_arg_1,
#line 3902 "analysis.c"
  MR_Box analysis__wrapper_arg_2,
#line 3904 "analysis.c"
  MR_Box analysis__wrapper_arg_3)
#line 3906 "analysis.c"
{
#line 3908 "analysis.c"
  {
#line 3910 "analysis.c"
    MR_Word analysis__conv0_HeadVar__1_1;

#line 3913 "analysis.c"
    {
#line 3915 "analysis.c"
      analysis____Compare____fixpoint_type_0_0(&analysis__conv0_HeadVar__1_1, ((MR_Word) analysis__wrapper_arg_2), ((MR_Word) analysis__wrapper_arg_3));
    }
#line 3918 "analysis.c"
    *analysis__wrapper_arg_1 = ((MR_Box) (analysis__conv0_HeadVar__1_1));
#line 3920 "analysis.c"
  }
#line 3922 "analysis.c"
}

#line 3925 "analysis.c"
static MR_bool MR_CALL 
analysis____Unify____func_analysis_map_1_0_10001(
#line 3928 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 3930 "analysis.c"
  MR_Box analysis__wrapper_arg_2,
#line 3932 "analysis.c"
  MR_Box analysis__wrapper_arg_3)
#line 3934 "analysis.c"
{
#line 3936 "analysis.c"
  {
#line 3938 "analysis.c"
    MR_bool analysis__succeeded;

#line 3941 "analysis.c"
    {
#line 3943 "analysis.c"
      analysis__succeeded = analysis____Unify____func_analysis_map_1_0(((MR_Word) analysis__wrapper_arg_1), ((MR_Word) analysis__wrapper_arg_2), ((MR_Word) analysis__wrapper_arg_3));
    }
#line 3946 "analysis.c"
    return analysis__succeeded;
#line 3948 "analysis.c"
  }
#line 3950 "analysis.c"
}

#line 3953 "analysis.c"
static void MR_CALL 
analysis____Compare____func_analysis_map_1_0_10001(
#line 3956 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 3958 "analysis.c"
  MR_Box * analysis__wrapper_arg_2,
#line 3960 "analysis.c"
  MR_Box analysis__wrapper_arg_3,
#line 3962 "analysis.c"
  MR_Box analysis__wrapper_arg_4)
#line 3964 "analysis.c"
{
#line 3966 "analysis.c"
  {
#line 3968 "analysis.c"
    MR_Word analysis__conv0_HeadVar__1_1;

#line 3971 "analysis.c"
    {
#line 3973 "analysis.c"
      analysis____Compare____func_analysis_map_1_0(((MR_Word) analysis__wrapper_arg_1), &analysis__conv0_HeadVar__1_1, ((MR_Word) analysis__wrapper_arg_3), ((MR_Word) analysis__wrapper_arg_4));
    }
#line 3976 "analysis.c"
    *analysis__wrapper_arg_2 = ((MR_Box) (analysis__conv0_HeadVar__1_1));
#line 3978 "analysis.c"
  }
#line 3980 "analysis.c"
}

#line 3983 "analysis.c"
static MR_bool MR_CALL 
analysis____Unify____func_id_0_0_10001(
#line 3986 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 3988 "analysis.c"
  MR_Box analysis__wrapper_arg_2)
#line 3990 "analysis.c"
{
#line 3992 "analysis.c"
  {
#line 3994 "analysis.c"
    MR_bool analysis__succeeded;

#line 3997 "analysis.c"
    {
#line 3999 "analysis.c"
      analysis__succeeded = analysis____Unify____func_id_0_0(((MR_Word) analysis__wrapper_arg_1), ((MR_Word) analysis__wrapper_arg_2));
    }
#line 4002 "analysis.c"
    return analysis__succeeded;
#line 4004 "analysis.c"
  }
#line 4006 "analysis.c"
}

#line 4009 "analysis.c"
static void MR_CALL 
analysis____Compare____func_id_0_0_10001(
#line 4012 "analysis.c"
  MR_Box * analysis__wrapper_arg_1,
#line 4014 "analysis.c"
  MR_Box analysis__wrapper_arg_2,
#line 4016 "analysis.c"
  MR_Box analysis__wrapper_arg_3)
#line 4018 "analysis.c"
{
#line 4020 "analysis.c"
  {
#line 4022 "analysis.c"
    MR_Word analysis__conv0_HeadVar__1_1;

#line 4025 "analysis.c"
    {
#line 4027 "analysis.c"
      analysis____Compare____func_id_0_0(&analysis__conv0_HeadVar__1_1, ((MR_Word) analysis__wrapper_arg_2), ((MR_Word) analysis__wrapper_arg_3));
    }
#line 4030 "analysis.c"
    *analysis__wrapper_arg_1 = ((MR_Box) (analysis__conv0_HeadVar__1_1));
#line 4032 "analysis.c"
  }
#line 4034 "analysis.c"
}

#line 4037 "analysis.c"
static MR_bool MR_CALL 
analysis____Unify____imdg_arc_0_0_10001(
#line 4040 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 4042 "analysis.c"
  MR_Box analysis__wrapper_arg_2)
#line 4044 "analysis.c"
{
#line 4046 "analysis.c"
  {
#line 4048 "analysis.c"
    MR_bool analysis__succeeded;

#line 4051 "analysis.c"
    {
#line 4053 "analysis.c"
      analysis__succeeded = analysis____Unify____imdg_arc_0_0(((MR_Word) analysis__wrapper_arg_1), ((MR_Word) analysis__wrapper_arg_2));
    }
#line 4056 "analysis.c"
    return analysis__succeeded;
#line 4058 "analysis.c"
  }
#line 4060 "analysis.c"
}

#line 4063 "analysis.c"
static void MR_CALL 
analysis____Compare____imdg_arc_0_0_10001(
#line 4066 "analysis.c"
  MR_Box * analysis__wrapper_arg_1,
#line 4068 "analysis.c"
  MR_Box analysis__wrapper_arg_2,
#line 4070 "analysis.c"
  MR_Box analysis__wrapper_arg_3)
#line 4072 "analysis.c"
{
#line 4074 "analysis.c"
  {
#line 4076 "analysis.c"
    MR_Word analysis__conv0_HeadVar__1_1;

#line 4079 "analysis.c"
    {
#line 4081 "analysis.c"
      analysis____Compare____imdg_arc_0_0(&analysis__conv0_HeadVar__1_1, ((MR_Word) analysis__wrapper_arg_2), ((MR_Word) analysis__wrapper_arg_3));
    }
#line 4084 "analysis.c"
    *analysis__wrapper_arg_1 = ((MR_Box) (analysis__conv0_HeadVar__1_1));
#line 4086 "analysis.c"
  }
#line 4088 "analysis.c"
}

#line 4091 "analysis.c"
static MR_bool MR_CALL 
analysis____Unify____make_analysis_registry_0_0_10001(
#line 4094 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 4096 "analysis.c"
  MR_Box analysis__wrapper_arg_2)
#line 4098 "analysis.c"
{
#line 4100 "analysis.c"
  {
#line 4102 "analysis.c"
    MR_bool analysis__succeeded;

#line 4105 "analysis.c"
    {
#line 4107 "analysis.c"
      analysis__succeeded = analysis____Unify____make_analysis_registry_0_0(((MR_Word) analysis__wrapper_arg_1), ((MR_Word) analysis__wrapper_arg_2));
    }
#line 4110 "analysis.c"
    return analysis__succeeded;
#line 4112 "analysis.c"
  }
#line 4114 "analysis.c"
}

#line 4117 "analysis.c"
static void MR_CALL 
analysis____Compare____make_analysis_registry_0_0_10001(
#line 4120 "analysis.c"
  MR_Box * analysis__wrapper_arg_1,
#line 4122 "analysis.c"
  MR_Box analysis__wrapper_arg_2,
#line 4124 "analysis.c"
  MR_Box analysis__wrapper_arg_3)
#line 4126 "analysis.c"
{
#line 4128 "analysis.c"
  {
#line 4130 "analysis.c"
    MR_Word analysis__conv0_HeadVar__1_1;

#line 4133 "analysis.c"
    {
#line 4135 "analysis.c"
      analysis____Compare____make_analysis_registry_0_0(&analysis__conv0_HeadVar__1_1, ((MR_Word) analysis__wrapper_arg_2), ((MR_Word) analysis__wrapper_arg_3));
    }
#line 4138 "analysis.c"
    *analysis__wrapper_arg_1 = ((MR_Box) (analysis__conv0_HeadVar__1_1));
#line 4140 "analysis.c"
  }
#line 4142 "analysis.c"
}

#line 4145 "analysis.c"
static MR_bool MR_CALL 
analysis____Unify____module_analysis_map_1_0_10001(
#line 4148 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 4150 "analysis.c"
  MR_Box analysis__wrapper_arg_2,
#line 4152 "analysis.c"
  MR_Box analysis__wrapper_arg_3)
#line 4154 "analysis.c"
{
#line 4156 "analysis.c"
  {
#line 4158 "analysis.c"
    MR_bool analysis__succeeded;

#line 4161 "analysis.c"
    {
#line 4163 "analysis.c"
      analysis__succeeded = analysis____Unify____module_analysis_map_1_0(((MR_Word) analysis__wrapper_arg_1), ((MR_Word) analysis__wrapper_arg_2), ((MR_Word) analysis__wrapper_arg_3));
    }
#line 4166 "analysis.c"
    return analysis__succeeded;
#line 4168 "analysis.c"
  }
#line 4170 "analysis.c"
}

#line 4173 "analysis.c"
static void MR_CALL 
analysis____Compare____module_analysis_map_1_0_10001(
#line 4176 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 4178 "analysis.c"
  MR_Box * analysis__wrapper_arg_2,
#line 4180 "analysis.c"
  MR_Box analysis__wrapper_arg_3,
#line 4182 "analysis.c"
  MR_Box analysis__wrapper_arg_4)
#line 4184 "analysis.c"
{
#line 4186 "analysis.c"
  {
#line 4188 "analysis.c"
    MR_Word analysis__conv0_HeadVar__1_1;

#line 4191 "analysis.c"
    {
#line 4193 "analysis.c"
      analysis____Compare____module_analysis_map_1_0(((MR_Word) analysis__wrapper_arg_1), &analysis__conv0_HeadVar__1_1, ((MR_Word) analysis__wrapper_arg_3), ((MR_Word) analysis__wrapper_arg_4));
    }
#line 4196 "analysis.c"
    *analysis__wrapper_arg_2 = ((MR_Box) (analysis__conv0_HeadVar__1_1));
#line 4198 "analysis.c"
  }
#line 4200 "analysis.c"
}

#line 4203 "analysis.c"
static MR_bool MR_CALL 
analysis____Unify____no_func_info_0_0_10001(
#line 4206 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 4208 "analysis.c"
  MR_Box analysis__wrapper_arg_2)
#line 4210 "analysis.c"
{
#line 4212 "analysis.c"
  {
#line 4214 "analysis.c"
    MR_bool analysis__succeeded;

#line 4217 "analysis.c"
    {
#line 4219 "analysis.c"
      analysis__succeeded = analysis____Unify____no_func_info_0_0();
    }
#line 4222 "analysis.c"
    return analysis__succeeded;
#line 4224 "analysis.c"
  }
#line 4226 "analysis.c"
}

#line 4229 "analysis.c"
static void MR_CALL 
analysis____Compare____no_func_info_0_0_10001(
#line 4232 "analysis.c"
  MR_Box * analysis__wrapper_arg_1,
#line 4234 "analysis.c"
  MR_Box analysis__wrapper_arg_2,
#line 4236 "analysis.c"
  MR_Box analysis__wrapper_arg_3)
#line 4238 "analysis.c"
{
#line 4240 "analysis.c"
  {
#line 4242 "analysis.c"
    MR_Word analysis__conv0_HeadVar__1_1;

#line 4245 "analysis.c"
    {
#line 4247 "analysis.c"
      analysis____Compare____no_func_info_0_0(&analysis__conv0_HeadVar__1_1);
    }
#line 4250 "analysis.c"
    *analysis__wrapper_arg_1 = ((MR_Box) (analysis__conv0_HeadVar__1_1));
#line 4252 "analysis.c"
  }
#line 4254 "analysis.c"
}

#line 4257 "analysis.c"
static MR_bool MR_CALL 
analysis____Unify____some_analysis_result_0_0_10001(
#line 4260 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 4262 "analysis.c"
  MR_Box analysis__wrapper_arg_2)
#line 4264 "analysis.c"
{
#line 4266 "analysis.c"
  {
#line 4268 "analysis.c"
    MR_bool analysis__succeeded;

#line 4271 "analysis.c"
    {
#line 4273 "analysis.c"
      analysis__succeeded = analysis____Unify____some_analysis_result_0_0(((MR_Word) analysis__wrapper_arg_1), ((MR_Word) analysis__wrapper_arg_2));
    }
#line 4276 "analysis.c"
    return analysis__succeeded;
#line 4278 "analysis.c"
  }
#line 4280 "analysis.c"
}

#line 4283 "analysis.c"
static void MR_CALL 
analysis____Compare____some_analysis_result_0_0_10001(
#line 4286 "analysis.c"
  MR_Box * analysis__wrapper_arg_1,
#line 4288 "analysis.c"
  MR_Box analysis__wrapper_arg_2,
#line 4290 "analysis.c"
  MR_Box analysis__wrapper_arg_3)
#line 4292 "analysis.c"
{
#line 4294 "analysis.c"
  {
#line 4296 "analysis.c"
    MR_Word analysis__conv0_HeadVar__1_1;

#line 4299 "analysis.c"
    {
#line 4301 "analysis.c"
      analysis____Compare____some_analysis_result_0_0(&analysis__conv0_HeadVar__1_1, ((MR_Word) analysis__wrapper_arg_2), ((MR_Word) analysis__wrapper_arg_3));
    }
#line 4304 "analysis.c"
    *analysis__wrapper_arg_1 = ((MR_Box) (analysis__conv0_HeadVar__1_1));
#line 4306 "analysis.c"
  }
#line 4308 "analysis.c"
}

#line 4311 "analysis.c"
static MR_Box MR_CALL 
analysis__ClassMethod_for_analysis__to_term____analysis__any_call__arity0______analysis__to_term_1_1_f_0_10001(
#line 4314 "analysis.c"
  MR_Box analysis__closure_arg,
#line 4316 "analysis.c"
  MR_Box analysis__wrapper_arg_1)
#line 4318 "analysis.c"
{
#line 4320 "analysis.c"
  {
#line 4322 "analysis.c"
    MR_Box analysis__wrapper_arg_2;
#line 4324 "analysis.c"
    MR_Box analysis__closure;
#line 4326 "analysis.c"
    MR_Word analysis__conv0_Term_3;

#line 4329 "analysis.c"
    analysis__closure = analysis__closure_arg;
#line 4331 "analysis.c"
    {
#line 4333 "analysis.c"
      analysis__conv0_Term_3 = analysis__ClassMethod_for_analysis__to_term____analysis__any_call__arity0______analysis__to_term_1_1_f_0();
    }
#line 4336 "analysis.c"
    analysis__wrapper_arg_2 = ((MR_Box) (analysis__conv0_Term_3));
#line 4338 "analysis.c"
    return analysis__wrapper_arg_2;
#line 4340 "analysis.c"
  }
#line 4342 "analysis.c"
}

#line 4345 "analysis.c"
static MR_bool MR_CALL 
analysis__ClassMethod_for_analysis__to_term____analysis__any_call__arity0______analysis__from_term_2_2_p_0_10001(
#line 4348 "analysis.c"
  MR_Box analysis__closure_arg,
#line 4350 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 4352 "analysis.c"
  MR_Box * analysis__wrapper_arg_2)
#line 4354 "analysis.c"
{
#line 4356 "analysis.c"
  {
#line 4358 "analysis.c"
    MR_bool analysis__succeeded;
#line 4360 "analysis.c"
    MR_Box analysis__closure;

#line 4363 "analysis.c"
    analysis__closure = analysis__closure_arg;
#line 4365 "analysis.c"
    {
#line 4367 "analysis.c"
      analysis__succeeded = analysis__ClassMethod_for_analysis__to_term____analysis__any_call__arity0______analysis__from_term_2_2_p_0(((MR_Word) analysis__wrapper_arg_1));
    }
#line 4370 "analysis.c"
    return analysis__succeeded;
#line 4372 "analysis.c"
  }
#line 4374 "analysis.c"
}

#line 4377 "analysis.c"
static MR_bool MR_CALL 
analysis__ClassMethod_for_analysis__partial_order____analysis__no_func_info__arity0__analysis__any_call__arity0______analysis__more_precise_than_3_3_p_0_10001(
#line 4380 "analysis.c"
  MR_Box analysis__closure_arg,
#line 4382 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 4384 "analysis.c"
  MR_Box analysis__wrapper_arg_2,
#line 4386 "analysis.c"
  MR_Box analysis__wrapper_arg_3)
#line 4388 "analysis.c"
{
#line 4390 "analysis.c"
  {
#line 4392 "analysis.c"
    MR_bool analysis__succeeded;
#line 4394 "analysis.c"
    MR_Box analysis__closure;

#line 4397 "analysis.c"
    analysis__closure = analysis__closure_arg;
#line 4399 "analysis.c"
    {
#line 4401 "analysis.c"
      analysis__succeeded = analysis__ClassMethod_for_analysis__partial_order____analysis__no_func_info__arity0__analysis__any_call__arity0______analysis__more_precise_than_3_3_p_0();
    }
#line 4404 "analysis.c"
    return analysis__succeeded;
#line 4406 "analysis.c"
  }
#line 4408 "analysis.c"
}

#line 4411 "analysis.c"
static MR_bool MR_CALL 
analysis__ClassMethod_for_analysis__partial_order____analysis__no_func_info__arity0__analysis__any_call__arity0______analysis__equivalent_3_3_p_0_10001(
#line 4414 "analysis.c"
  MR_Box analysis__closure_arg,
#line 4416 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 4418 "analysis.c"
  MR_Box analysis__wrapper_arg_2,
#line 4420 "analysis.c"
  MR_Box analysis__wrapper_arg_3)
#line 4422 "analysis.c"
{
#line 4424 "analysis.c"
  {
#line 4426 "analysis.c"
    MR_bool analysis__succeeded;
#line 4428 "analysis.c"
    MR_Box analysis__closure;

#line 4431 "analysis.c"
    analysis__closure = analysis__closure_arg;
#line 4433 "analysis.c"
    {
#line 4435 "analysis.c"
      analysis__succeeded = analysis__ClassMethod_for_analysis__partial_order____analysis__no_func_info__arity0__analysis__any_call__arity0______analysis__equivalent_3_3_p_0();
    }
#line 4438 "analysis.c"
    return analysis__succeeded;
#line 4440 "analysis.c"
  }
#line 4442 "analysis.c"
}

#line 1392 "analysis.m"
static void MR_CALL 
analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_109_115_103_95_95_104_111_54_95_95_91_51_93_95_48_3_p_0(
#line 1392 "analysis.m"
  MR_Word analysis__V_11_11,
#line 1392 "analysis.m"
  MR_Word analysis__V_12_12)
#line 1392 "analysis.m"
{
#line 1395 "analysis.m"
  {
#line 1395 "analysis.m"
    MR_bool analysis__succeeded;
#line 1395 "analysis.m"
    MR_Word analysis__Debug_6;

#line 1387 "analysis.m"
{
#define MR_PROC_LABEL analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_109_115_103_95_95_104_111_54_95_95_91_51_93_95_48_3_p_0


		{
#line 1387 "analysis.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&analysis__mutable_variable_debug_analysis_lock,
                    "analysis__mutable_variable_debug_analysis_lock");
#endif

#line 4473 "analysis.c"

		;}
#undef MR_PROC_LABEL
#line 1387 "analysis.m"
}
#line 1387 "analysis.m"
{
#define MR_PROC_LABEL analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_109_115_103_95_95_104_111_54_95_95_91_51_93_95_48_3_p_0

	MR_Word X;

		{
#line 1387 "analysis.m"
X = analysis__mutable_variable_debug_analysis;

#line 4489 "analysis.c"

		;}
#undef MR_PROC_LABEL
	 analysis__Debug_6  = X;
#line 1387 "analysis.m"
}
#line 1387 "analysis.m"
{
#define MR_PROC_LABEL analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_109_115_103_95_95_104_111_54_95_95_91_51_93_95_48_3_p_0


		{
#line 1387 "analysis.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&analysis__mutable_variable_debug_analysis_lock,
                    "analysis__mutable_variable_debug_analysis_lock");
#endif

#line 4508 "analysis.c"

		;}
#undef MR_PROC_LABEL
#line 1387 "analysis.m"
}
#line 1400 "analysis.m"
#line 1400 "analysis.m"
    switch (analysis__Debug_6) {
#line 1400 "analysis.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1400 "analysis.m"
      case (MR_Integer) 0:
#line 1401 "analysis.m"
        {
#line 1401 "analysis.m"
        }
#line 1400 "analysis.m"
        break;
#line 1400 "analysis.m"
      case (MR_Integer) 1:
#line 1399 "analysis.m"
        {
#line 1399 "analysis.m"
          analysis__IntroducedFrom__pred__lookup_results_1__516__1_4_p_0(analysis__V_11_11, analysis__V_12_12);
        }
#line 1400 "analysis.m"
        break;
#line 1400 "analysis.m"
    }
#line 1395 "analysis.m"
  }
#line 1392 "analysis.m"
}

#line 1392 "analysis.m"
static void MR_CALL 
analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_109_115_103_95_95_104_111_52_95_95_91_54_93_95_48_3_p_0(
#line 1392 "analysis.m"
  MR_Word analysis__V_11_11,
#line 1392 "analysis.m"
  MR_Word analysis__V_12_12,
#line 1392 "analysis.m"
  MR_Word analysis__V_13_13,
#line 1392 "analysis.m"
  MR_Box analysis__V_14_14,
#line 1392 "analysis.m"
  MR_Box analysis__V_15_15)
#line 1392 "analysis.m"
{
#line 1395 "analysis.m"
  {
#line 1395 "analysis.m"
    MR_bool analysis__succeeded;
#line 1395 "analysis.m"
    MR_Word analysis__Debug_6;

#line 1387 "analysis.m"
{
#define MR_PROC_LABEL analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_109_115_103_95_95_104_111_52_95_95_91_54_93_95_48_3_p_0


		{
#line 1387 "analysis.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&analysis__mutable_variable_debug_analysis_lock,
                    "analysis__mutable_variable_debug_analysis_lock");
#endif

#line 4577 "analysis.c"

		;}
#undef MR_PROC_LABEL
#line 1387 "analysis.m"
}
#line 1387 "analysis.m"
{
#define MR_PROC_LABEL analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_109_115_103_95_95_104_111_52_95_95_91_54_93_95_48_3_p_0

	MR_Word X;

		{
#line 1387 "analysis.m"
X = analysis__mutable_variable_debug_analysis;

#line 4593 "analysis.c"

		;}
#undef MR_PROC_LABEL
	 analysis__Debug_6  = X;
#line 1387 "analysis.m"
}
#line 1387 "analysis.m"
{
#define MR_PROC_LABEL analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_109_115_103_95_95_104_111_52_95_95_91_54_93_95_48_3_p_0


		{
#line 1387 "analysis.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&analysis__mutable_variable_debug_analysis_lock,
                    "analysis__mutable_variable_debug_analysis_lock");
#endif

#line 4612 "analysis.c"

		;}
#undef MR_PROC_LABEL
#line 1387 "analysis.m"
}
#line 1400 "analysis.m"
#line 1400 "analysis.m"
    switch (analysis__Debug_6) {
#line 1400 "analysis.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1400 "analysis.m"
      case (MR_Integer) 0:
#line 1401 "analysis.m"
        {
#line 1401 "analysis.m"
        }
#line 1400 "analysis.m"
        break;
#line 1400 "analysis.m"
      case (MR_Integer) 1:
#line 1399 "analysis.m"
        {
#line 1399 "analysis.m"
          analysis__IntroducedFrom__pred__update_analysis_registry_5__897__1_7_p_0(analysis__V_11_11, analysis__V_12_12, analysis__V_13_13, analysis__V_14_14, analysis__V_15_15);
        }
#line 1400 "analysis.m"
        break;
#line 1400 "analysis.m"
    }
#line 1395 "analysis.m"
  }
#line 1392 "analysis.m"
}

#line 1392 "analysis.m"
static void MR_CALL 
analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_109_115_103_95_95_104_111_51_95_95_91_54_93_95_48_3_p_0(
#line 1392 "analysis.m"
  MR_Word analysis__V_11_11,
#line 1392 "analysis.m"
  MR_Box analysis__V_12_12,
#line 1392 "analysis.m"
  MR_Box analysis__V_13_13,
#line 1392 "analysis.m"
  MR_Word analysis__V_14_14,
#line 1392 "analysis.m"
  MR_Word analysis__V_15_15)
#line 1392 "analysis.m"
{
#line 1395 "analysis.m"
  {
#line 1395 "analysis.m"
    MR_bool analysis__succeeded;
#line 1395 "analysis.m"
    MR_Word analysis__Debug_6;

#line 1387 "analysis.m"
{
#define MR_PROC_LABEL analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_109_115_103_95_95_104_111_51_95_95_91_54_93_95_48_3_p_0


		{
#line 1387 "analysis.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&analysis__mutable_variable_debug_analysis_lock,
                    "analysis__mutable_variable_debug_analysis_lock");
#endif

#line 4681 "analysis.c"

		;}
#undef MR_PROC_LABEL
#line 1387 "analysis.m"
}
#line 1387 "analysis.m"
{
#define MR_PROC_LABEL analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_109_115_103_95_95_104_111_51_95_95_91_54_93_95_48_3_p_0

	MR_Word X;

		{
#line 1387 "analysis.m"
X = analysis__mutable_variable_debug_analysis;

#line 4697 "analysis.c"

		;}
#undef MR_PROC_LABEL
	 analysis__Debug_6  = X;
#line 1387 "analysis.m"
}
#line 1387 "analysis.m"
{
#define MR_PROC_LABEL analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_109_115_103_95_95_104_111_51_95_95_91_54_93_95_48_3_p_0


		{
#line 1387 "analysis.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&analysis__mutable_variable_debug_analysis_lock,
                    "analysis__mutable_variable_debug_analysis_lock");
#endif

#line 4716 "analysis.c"

		;}
#undef MR_PROC_LABEL
#line 1387 "analysis.m"
}
#line 1400 "analysis.m"
#line 1400 "analysis.m"
    switch (analysis__Debug_6) {
#line 1400 "analysis.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1400 "analysis.m"
      case (MR_Integer) 0:
#line 1401 "analysis.m"
        {
#line 1401 "analysis.m"
        }
#line 1400 "analysis.m"
        break;
#line 1400 "analysis.m"
      case (MR_Integer) 1:
#line 1399 "analysis.m"
        {
#line 1399 "analysis.m"
          analysis__IntroducedFrom__pred__update_analysis_registry_5__926__1_7_p_0(analysis__V_11_11, analysis__V_12_12, analysis__V_13_13, analysis__V_14_14, analysis__V_15_15);
        }
#line 1400 "analysis.m"
        break;
#line 1400 "analysis.m"
    }
#line 1395 "analysis.m"
  }
#line 1392 "analysis.m"
}

#line 1392 "analysis.m"
static void MR_CALL 
analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_109_115_103_95_95_104_111_49_95_95_91_51_93_95_48_3_p_0(
#line 1392 "analysis.m"
  MR_Word analysis__V_11_11,
#line 1392 "analysis.m"
  MR_Word analysis__V_12_12)
#line 1392 "analysis.m"
{
#line 1395 "analysis.m"
  {
#line 1395 "analysis.m"
    MR_bool analysis__succeeded;
#line 1395 "analysis.m"
    MR_Word analysis__Debug_6;

#line 1387 "analysis.m"
{
#define MR_PROC_LABEL analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_109_115_103_95_95_104_111_49_95_95_91_51_93_95_48_3_p_0


		{
#line 1387 "analysis.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&analysis__mutable_variable_debug_analysis_lock,
                    "analysis__mutable_variable_debug_analysis_lock");
#endif

#line 4779 "analysis.c"

		;}
#undef MR_PROC_LABEL
#line 1387 "analysis.m"
}
#line 1387 "analysis.m"
{
#define MR_PROC_LABEL analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_109_115_103_95_95_104_111_49_95_95_91_51_93_95_48_3_p_0

	MR_Word X;

		{
#line 1387 "analysis.m"
X = analysis__mutable_variable_debug_analysis;

#line 4795 "analysis.c"

		;}
#undef MR_PROC_LABEL
	 analysis__Debug_6  = X;
#line 1387 "analysis.m"
}
#line 1387 "analysis.m"
{
#define MR_PROC_LABEL analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_109_115_103_95_95_104_111_49_95_95_91_51_93_95_48_3_p_0


		{
#line 1387 "analysis.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&analysis__mutable_variable_debug_analysis_lock,
                    "analysis__mutable_variable_debug_analysis_lock");
#endif

#line 4814 "analysis.c"

		;}
#undef MR_PROC_LABEL
#line 1387 "analysis.m"
}
#line 1400 "analysis.m"
#line 1400 "analysis.m"
    switch (analysis__Debug_6) {
#line 1400 "analysis.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1400 "analysis.m"
      case (MR_Integer) 0:
#line 1401 "analysis.m"
        {
#line 1401 "analysis.m"
        }
#line 1400 "analysis.m"
        break;
#line 1400 "analysis.m"
      case (MR_Integer) 1:
#line 1399 "analysis.m"
        {
#line 1399 "analysis.m"
          analysis__write_clearing_entries_4_p_0(analysis__V_11_11, analysis__V_12_12);
        }
#line 1400 "analysis.m"
        break;
#line 1400 "analysis.m"
    }
#line 1395 "analysis.m"
  }
#line 1392 "analysis.m"
}

#line 443 "analysis.m"
MR_Word MR_CALL 
analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_116_111_95_116_101_114_109_95_95_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_116_111_95_116_101_114_109_95_49_95_95_91_49_93_95_48_1_f_0(void)
#line 443 "analysis.m"
{
#line 443 "analysis.m"
  {
#line 443 "analysis.m"
    MR_bool analysis__succeeded;
#line 443 "analysis.m"
    MR_Word analysis__Term_3;
#line 443 "analysis.m"
    MR_Word analysis__V_8_8;

#line 444 "analysis.m"
    {
#line 444 "analysis.m"
      analysis__V_8_8 = mercury__term__context_init_0_f_0();
    }
#line 444 "analysis.m"
    {
#line 444 "analysis.m"
      analysis__Term_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 444 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__Term_3, 0) = ((MR_Box) (&analysis_scalar_common_14[0]));
#line 444 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__Term_3, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 444 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__Term_3, 2) = ((MR_Box) (analysis__V_8_8));
#line 444 "analysis.m"
    }
#line 443 "analysis.m"
    return analysis__Term_3;
#line 443 "analysis.m"
  }
#line 443 "analysis.m"
}

#line 438 "analysis.m"
MR_bool MR_CALL 
analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_112_97_114_116_105_97_108_95_111_114_100_101_114_95_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_101_113_117_105_118_97_108_101_110_116_95_51_95_95_91_49_44_32_50_44_32_51_93_95_48_3_p_0(void)
#line 438 "analysis.m"
{
#line 439 "analysis.m"
  {
#line 439 "analysis.m"
    MR_bool analysis__succeeded;

#line 439 "analysis.m"
    {
#line 439 "analysis.m"
      analysis__succeeded = mercury__builtin__semidet_succeed_0_p_0();
    }
#line 439 "analysis.m"
    return analysis__succeeded;
#line 439 "analysis.m"
  }
#line 438 "analysis.m"
}

#line 435 "analysis.m"
MR_bool MR_CALL 
analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_112_97_114_116_105_97_108_95_111_114_100_101_114_95_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_109_111_114_101_95_112_114_101_99_105_115_101_95_116_104_97_110_95_51_95_95_91_49_44_32_50_44_32_51_93_95_48_3_p_0(void)
#line 435 "analysis.m"
{
#line 436 "analysis.m"
  {
#line 436 "analysis.m"
    MR_bool analysis__succeeded;

#line 436 "analysis.m"
    {
#line 436 "analysis.m"
      analysis__succeeded = mercury__builtin__semidet_fail_0_p_0();
    }
#line 436 "analysis.m"
    return analysis__succeeded;
#line 436 "analysis.m"
  }
#line 435 "analysis.m"
}

#line 143 "analysis.m"
void MR_CALL 
analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(
#line 143 "analysis.m"
  MR_Word * analysis__HeadVar__1_1)
#line 143 "analysis.m"
{
#line 143 "analysis.m"
  {
#line 143 "analysis.m"
    MR_bool analysis__succeeded;

#line 143 "analysis.m"
    *analysis__HeadVar__1_1 = (MR_Integer) 0;
#line 143 "analysis.m"
  }
#line 143 "analysis.m"
}

#line 143 "analysis.m"
MR_bool MR_CALL 
analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_48_95_95_91_49_44_32_50_93_95_48_2_p_0(void)
#line 143 "analysis.m"
{
#line 143 "analysis.m"
  {
#line 143 "analysis.m"
    return MR_TRUE;
#line 143 "analysis.m"
  }
#line 143 "analysis.m"
}

#line 149 "analysis.m"
void MR_CALL 
analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(
#line 149 "analysis.m"
  MR_Word * analysis__HeadVar__1_1)
#line 149 "analysis.m"
{
#line 149 "analysis.m"
  {
#line 149 "analysis.m"
    MR_bool analysis__succeeded;

#line 149 "analysis.m"
    *analysis__HeadVar__1_1 = (MR_Integer) 0;
#line 149 "analysis.m"
  }
#line 149 "analysis.m"
}

#line 149 "analysis.m"
MR_bool MR_CALL 
analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_48_95_95_91_49_44_32_50_93_95_48_2_p_0(void)
#line 149 "analysis.m"
{
#line 149 "analysis.m"
  {
#line 149 "analysis.m"
    return MR_TRUE;
#line 149 "analysis.m"
  }
#line 149 "analysis.m"
}

#line 1378 "analysis.m"
static MR_Box MR_CALL 
analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_108_117_98_95_114_101_115_117_108_116_95_115_116_97_116_117_115_101_115_95_51_95_95_91_49_93_95_48_3_f_0_1(
#line 1378 "analysis.m"
  MR_Box analysis__closure_arg,
#line 1378 "analysis.m"
  MR_Box analysis__wrapper_arg_1,
#line 1378 "analysis.m"
  MR_Box analysis__wrapper_arg_2)
#line 1378 "analysis.m"
{
#line 1378 "analysis.m"
  {
#line 1378 "analysis.m"
    MR_Box analysis__wrapper_arg_3;
#line 1378 "analysis.m"
    MR_Box analysis__closure = analysis__closure_arg;
#line 1378 "analysis.m"
    MR_Word analysis__conv0_HeadVar__3_3;

#line 1378 "analysis.m"
    {
#line 1378 "analysis.m"
      analysis__conv0_HeadVar__3_3 = analysis__lub_result_statuses_4_2_f_0(((MR_Word) analysis__wrapper_arg_1), ((MR_Word) analysis__wrapper_arg_2));
    }
#line 1378 "analysis.m"
    analysis__wrapper_arg_3 = ((MR_Box) (analysis__conv0_HeadVar__3_3));
#line 1378 "analysis.m"
    return analysis__wrapper_arg_3;
#line 1378 "analysis.m"
  }
#line 1378 "analysis.m"
}

#line 1374 "analysis.m"
MR_Word MR_CALL 
analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_108_117_98_95_114_101_115_117_108_116_95_115_116_97_116_117_115_101_115_95_51_95_95_91_49_93_95_48_3_f_0(
#line 1374 "analysis.m"
  MR_Word analysis__Results_6,
#line 1374 "analysis.m"
  MR_Word analysis__Acc_7)
#line 1374 "analysis.m"
{
#line 1377 "analysis.m"
  {
#line 1377 "analysis.m"
    MR_bool analysis__succeeded;
#line 1377 "analysis.m"
    MR_Word analysis__HeadVar__4_4;
#line 1378 "analysis.m"
    MR_Box analysis__conv1_HeadVar__4_4;

#line 1378 "analysis.m"
    {
#line 1378 "analysis.m"
      analysis__conv1_HeadVar__4_4 = mercury__list__foldl_3_f_0((MR_Word) &analysis__analysis__type_ctor_info_some_analysis_result_0, (MR_Word) &analysis__analysis__type_ctor_info_analysis_status_0, (MR_Word) &analysis_scalar_common_2[15], analysis__Results_6, ((MR_Box) (analysis__Acc_7)));
    }
#line 1378 "analysis.m"
    analysis__HeadVar__4_4 = ((MR_Word) analysis__conv1_HeadVar__4_4);
#line 1377 "analysis.m"
    return analysis__HeadVar__4_4;
#line 1377 "analysis.m"
  }
#line 1374 "analysis.m"
}

#line 1372 "analysis.m"
static MR_Box MR_CALL 
analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_108_117_98_95_114_101_115_117_108_116_95_115_116_97_116_117_115_101_115_95_50_95_95_91_49_93_95_48_3_f_0_1(
#line 1372 "analysis.m"
  MR_Box analysis__closure_arg,
#line 1372 "analysis.m"
  MR_Box analysis__wrapper_arg_1,
#line 1372 "analysis.m"
  MR_Box analysis__wrapper_arg_2,
#line 1372 "analysis.m"
  MR_Box analysis__wrapper_arg_3)
#line 1372 "analysis.m"
{
#line 1372 "analysis.m"
  {
#line 1372 "analysis.m"
    MR_Box analysis__wrapper_arg_4;
#line 1372 "analysis.m"
    MR_Box analysis__closure = analysis__closure_arg;
#line 1372 "analysis.m"
    MR_Word analysis__conv0_HeadVar__4_4;

#line 1372 "analysis.m"
    {
#line 1372 "analysis.m"
      analysis__conv0_HeadVar__4_4 = analysis__lub_result_statuses_3_3_f_0(((MR_Word) analysis__wrapper_arg_1), ((MR_Word) analysis__wrapper_arg_2), ((MR_Word) analysis__wrapper_arg_3));
    }
#line 1372 "analysis.m"
    analysis__wrapper_arg_4 = ((MR_Box) (analysis__conv0_HeadVar__4_4));
#line 1372 "analysis.m"
    return analysis__wrapper_arg_4;
#line 1372 "analysis.m"
  }
#line 1372 "analysis.m"
}

#line 1367 "analysis.m"
MR_Word MR_CALL 
analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_108_117_98_95_114_101_115_117_108_116_95_115_116_97_116_117_115_101_115_95_50_95_95_91_49_93_95_48_3_f_0(
#line 1367 "analysis.m"
  MR_Word analysis__FuncMap_6,
#line 1367 "analysis.m"
  MR_Word analysis__Acc_7)
#line 1367 "analysis.m"
{
#line 1371 "analysis.m"
  {
#line 1371 "analysis.m"
    MR_bool analysis__succeeded;
#line 1371 "analysis.m"
    MR_Word analysis__HeadVar__4_4;
#line 1372 "analysis.m"
    MR_Box analysis__conv1_HeadVar__4_4;

#line 1372 "analysis.m"
    {
#line 1372 "analysis.m"
      analysis__conv1_HeadVar__4_4 = mercury__map__foldl_3_f_0((MR_Word) &analysis__analysis__type_ctor_info_func_id_0, (MR_Word) &analysis_scalar_common_1[1], (MR_Word) &analysis__analysis__type_ctor_info_analysis_status_0, (MR_Word) &analysis_scalar_common_2[14], analysis__FuncMap_6, ((MR_Box) (analysis__Acc_7)));
    }
#line 1372 "analysis.m"
    analysis__HeadVar__4_4 = ((MR_Word) analysis__conv1_HeadVar__4_4);
#line 1371 "analysis.m"
    return analysis__HeadVar__4_4;
#line 1371 "analysis.m"
  }
#line 1367 "analysis.m"
}

#line 1178 "analysis.m"
static MR_bool MR_CALL 
analysis__IntroducedFrom__pred__clear_imdg_entries_pointing_at_3__1178__1_2_p_0(
#line 1178 "analysis.m"
  MR_Word analysis__ModuleName_4,
#line 1178 "analysis.m"
  MR_Word analysis__LambdaHeadVar__1_9)
#line 1178 "analysis.m"
{
#line 1178 "analysis.m"
  {
#line 1178 "analysis.m"
    MR_bool analysis__succeeded;
#line 1178 "analysis.m"
    MR_Word analysis__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__LambdaHeadVar__1_9, (MR_Integer) 2)));
#line 1178 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_call_pattern_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__LambdaHeadVar__1_9, (MR_Integer) 0)));
#line 1178 "analysis.m"
    MR_Box analysis__V_11_11 = (MR_hl_field(MR_mktag(0), analysis__LambdaHeadVar__1_9, (MR_Integer) 1));

#line 1178 "analysis.m"
    {
#line 1178 "analysis.m"
      analysis__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(analysis__ModuleName_4, analysis__V_14_14);
    }
#line 1178 "analysis.m"
    analysis__succeeded = !(analysis__succeeded);
#line 1178 "analysis.m"
    return analysis__succeeded;
#line 1178 "analysis.m"
  }
#line 1178 "analysis.m"
}

#line 959 "analysis.m"
static MR_bool MR_CALL 
analysis__IntroducedFrom__func__update_analysis_registry_5__959__1_1_f_0(
#line 959 "analysis.m"
  MR_Word analysis__LambdaHeadVar__1_60,
#line 959 "analysis.m"
  MR_Word * analysis__LambdaHeadVar__2_61)
#line 959 "analysis.m"
{
#line 959 "analysis.m"
  {
#line 959 "analysis.m"
    MR_bool analysis__succeeded;
#line 959 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_call_pattern_196 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__LambdaHeadVar__1_60, (MR_Integer) 0)));
#line 959 "analysis.m"
    MR_Word analysis__TypeInfo_198_198;
#line 959 "analysis.m"
    MR_Word analysis__TypeInfo_199_199;
#line 959 "analysis.m"
    MR_Word analysis__V_62_62;
#line 959 "analysis.m"
    MR_Box analysis__Call0_71 = (MR_hl_field(MR_mktag(0), analysis__LambdaHeadVar__1_60, (MR_Integer) 1));
#line 959 "analysis.m"
    MR_Word analysis__V_209_209;

#line 960 "analysis.m"
    *analysis__LambdaHeadVar__2_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__LambdaHeadVar__1_60, (MR_Integer) 2)));
#line 961 "analysis.m"
    {
#line 961 "analysis.m"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_call_pattern_196, (MR_Integer) 4, &analysis__TypeInfo_198_198);
    }
#line 961 "analysis.m"
    {
#line 961 "analysis.m"
      analysis__V_62_62 = mercury__univ__univ_1_f_0(analysis__TypeInfo_198_198, analysis__Call0_71);
    }
#line 961 "analysis.m"
    {
#line 961 "analysis.m"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_call_pattern_196, (MR_Integer) 4, &analysis__TypeInfo_199_199);
    }
#line 961 "analysis.m"
    {
#line 961 "analysis.m"
      analysis__V_209_209 = mercury__univ__univ_1_f_0(analysis__TypeInfo_199_199, analysis__Call0_71);
    }
#line 961 "analysis.m"
    {
#line 961 "analysis.m"
      analysis__succeeded = mercury__univ____Unify____univ_0_0(analysis__V_62_62, analysis__V_209_209);
    }
#line 959 "analysis.m"
    return analysis__succeeded;
#line 959 "analysis.m"
  }
#line 959 "analysis.m"
}

#line 926 "analysis.m"
static void MR_CALL 
analysis__IntroducedFrom__pred__update_analysis_registry_5__926__1_7_p_0(
#line 926 "analysis.m"
  MR_Word analysis__TypeClassInfo_for_analysis_148,
#line 926 "analysis.m"
  MR_Box analysis__NewAnswer_18,
#line 926 "analysis.m"
  MR_Box analysis__OldAnswer_25,
#line 926 "analysis.m"
  MR_Word analysis__Status_29,
#line 926 "analysis.m"
  MR_Word analysis__DepModules_31)
#line 926 "analysis.m"
{
#line 926 "analysis.m"
  {
#line 926 "analysis.m"
    MR_bool analysis__succeeded;
#line 926 "analysis.m"
    MR_Word analysis__TypeInfo_175_175;

#line 926 "analysis.m"
    {
#line 926 "analysis.m"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_148, (MR_Integer) 5, &analysis__TypeInfo_175_175);
    }
#line 926 "analysis.m"
    {
#line 926 "analysis.m"
      analysis__write_changed_answer_6_p_0(analysis__TypeInfo_175_175, analysis__OldAnswer_25, analysis__NewAnswer_18, analysis__Status_29, analysis__DepModules_31);
    }
#line 926 "analysis.m"
  }
#line 926 "analysis.m"
}

#line 897 "analysis.m"
static void MR_CALL 
analysis__IntroducedFrom__pred__update_analysis_registry_5__897__1_7_p_0(
#line 897 "analysis.m"
  MR_Word analysis__TypeClassInfo_for_analysis_148,
#line 897 "analysis.m"
  MR_Word analysis__ModuleName_11,
#line 897 "analysis.m"
  MR_Word analysis__FuncId_13,
#line 897 "analysis.m"
  MR_Box analysis__Call_17,
#line 897 "analysis.m"
  MR_Box analysis__NewAnswer_18)
#line 897 "analysis.m"
{
#line 897 "analysis.m"
  {
#line 897 "analysis.m"
    MR_bool analysis__succeeded;
#line 897 "analysis.m"
    MR_Word analysis__TypeInfo_156_156;
#line 897 "analysis.m"
    MR_Word analysis__TypeInfo_158_158;

#line 897 "analysis.m"
    {
#line 897 "analysis.m"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_148, (MR_Integer) 4, &analysis__TypeInfo_156_156);
    }
#line 897 "analysis.m"
    {
#line 897 "analysis.m"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_148, (MR_Integer) 5, &analysis__TypeInfo_158_158);
    }
#line 897 "analysis.m"
    {
#line 897 "analysis.m"
      analysis__write_no_change_in_result_6_p_0(analysis__TypeInfo_156_156, analysis__TypeInfo_158_158, analysis__ModuleName_11, analysis__FuncId_13, analysis__Call_17, analysis__NewAnswer_18);
    }
#line 897 "analysis.m"
  }
#line 897 "analysis.m"
}

#line 606 "analysis.m"
static MR_bool MR_CALL 
analysis__IntroducedFrom__pred__lookup_exactly_matching_result_even_from_invalid_modules__606__1_4_p_0(
#line 606 "analysis.m"
  MR_Word analysis__TypeClassInfo_for_analysis_32,
#line 606 "analysis.m"
  MR_Box analysis__FuncInfo_10,
#line 606 "analysis.m"
  MR_Box analysis__Call_11,
#line 606 "analysis.m"
  MR_Word analysis__LambdaHeadVar__1_22)
#line 606 "analysis.m"
{
#line 606 "analysis.m"
  {
#line 606 "analysis.m"
    MR_bool analysis__succeeded;
#line 606 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_call_pattern_39;
#line 606 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_partial_order_41;
#line 606 "analysis.m"
    MR_Box analysis__V_23_23 = (MR_hl_field(MR_mktag(0), analysis__LambdaHeadVar__1_22, (MR_Integer) 0));
#line 608 "analysis.m"
    MR_Box analysis__V_30_30 = (MR_hl_field(MR_mktag(0), analysis__LambdaHeadVar__1_22, (MR_Integer) 1));
#line 608 "analysis.m"
    MR_Word analysis__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__LambdaHeadVar__1_22, (MR_Integer) 2)));
#line 135 "analysis.m"
    MR_bool MR_CALL (* analysis__func_0)(MR_Box, MR_Box, MR_Box, MR_Box);

#line 5336 "analysis.c"
    {
#line 5338 "analysis.c"
      mercury__private_builtin__superclass_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_32, (MR_Integer) 1, &analysis__TypeClassInfo_for_call_pattern_39);
    }
#line 5341 "analysis.c"
    {
#line 5343 "analysis.c"
      mercury__private_builtin__superclass_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_call_pattern_39, (MR_Integer) 1, &analysis__TypeClassInfo_for_partial_order_41);
    }
#line 135 "analysis.m"
    analysis__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), analysis__TypeClassInfo_for_partial_order_41, (MR_Integer) 0)), (MR_Integer) 6)));
#line 135 "analysis.m"
    {
#line 135 "analysis.m"
      analysis__succeeded = analysis__func_0(((MR_Box) analysis__TypeClassInfo_for_partial_order_41), analysis__FuncInfo_10, analysis__Call_11, analysis__V_23_23);
    }
#line 606 "analysis.m"
    return analysis__succeeded;
#line 606 "analysis.m"
  }
#line 606 "analysis.m"
}

#line 538 "analysis.m"
static MR_Word MR_CALL 
analysis__IntroducedFrom__func__lookup_results_2__538__1_2_f_0(
#line 538 "analysis.m"
  MR_Word analysis__TypeClassInfo_for_analysis_29,
#line 538 "analysis.m"
  MR_Word analysis__LambdaHeadVar__1_24)
#line 538 "analysis.m"
{
#line 538 "analysis.m"
  {
#line 538 "analysis.m"
    MR_bool analysis__succeeded;
#line 538 "analysis.m"
    MR_Word analysis__LambdaHeadVar__2_25;
#line 538 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_analysis_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__LambdaHeadVar__1_24, (MR_Integer) 0)));
#line 538 "analysis.m"
    MR_Word analysis__TypeInfo_45_45;
#line 538 "analysis.m"
    MR_Word analysis__TypeInfo_46_46;
#line 538 "analysis.m"
    MR_Word analysis__TypeInfo_48_48;
#line 538 "analysis.m"
    MR_Word analysis__TypeInfo_49_49;
#line 538 "analysis.m"
    MR_Box analysis__Call_11;
#line 538 "analysis.m"
    MR_Box analysis__Answer_13;
#line 538 "analysis.m"
    MR_Word analysis__Status_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__LambdaHeadVar__1_24, (MR_Integer) 3)));
#line 538 "analysis.m"
    MR_Box analysis__Call0_19 = (MR_hl_field(MR_mktag(0), analysis__LambdaHeadVar__1_24, (MR_Integer) 1));
#line 538 "analysis.m"
    MR_Box analysis__Answer0_20 = (MR_hl_field(MR_mktag(0), analysis__LambdaHeadVar__1_24, (MR_Integer) 2));
#line 538 "analysis.m"
    MR_Word analysis__V_26_26;
#line 538 "analysis.m"
    MR_Word analysis__V_27_27;

#line 541 "analysis.m"
    {
#line 541 "analysis.m"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_43, (MR_Integer) 4, &analysis__TypeInfo_45_45);
    }
#line 541 "analysis.m"
    {
#line 541 "analysis.m"
      analysis__V_26_26 = mercury__univ__univ_1_f_0(analysis__TypeInfo_45_45, analysis__Call0_19);
    }
#line 541 "analysis.m"
    {
#line 541 "analysis.m"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_29, (MR_Integer) 4, &analysis__TypeInfo_46_46);
    }
#line 541 "analysis.m"
    {
#line 541 "analysis.m"
      mercury__univ__det_univ_to_type_2_p_0(analysis__TypeInfo_46_46, analysis__V_26_26, &analysis__Call_11);
    }
#line 542 "analysis.m"
    {
#line 542 "analysis.m"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_43, (MR_Integer) 5, &analysis__TypeInfo_48_48);
    }
#line 542 "analysis.m"
    {
#line 542 "analysis.m"
      analysis__V_27_27 = mercury__univ__univ_1_f_0(analysis__TypeInfo_48_48, analysis__Answer0_20);
    }
#line 542 "analysis.m"
    {
#line 542 "analysis.m"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_29, (MR_Integer) 5, &analysis__TypeInfo_49_49);
    }
#line 542 "analysis.m"
    {
#line 542 "analysis.m"
      mercury__univ__det_univ_to_type_2_p_0(analysis__TypeInfo_49_49, analysis__V_27_27, &analysis__Answer_13);
    }
#line 539 "analysis.m"
    {
#line 539 "analysis.m"
      analysis__LambdaHeadVar__2_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 539 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__LambdaHeadVar__2_25, 0) = analysis__Call_11;
#line 539 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__LambdaHeadVar__2_25, 1) = analysis__Answer_13;
#line 539 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__LambdaHeadVar__2_25, 2) = ((MR_Box) (analysis__Status_18));
#line 539 "analysis.m"
    }
#line 538 "analysis.m"
    return analysis__LambdaHeadVar__2_25;
#line 538 "analysis.m"
  }
#line 538 "analysis.m"
}

#line 516 "analysis.m"
static void MR_CALL 
analysis__IntroducedFrom__pred__lookup_results_1__516__1_4_p_0(
#line 516 "analysis.m"
  MR_Word analysis__TypeClassInfo_for_analysis_62,
#line 516 "analysis.m"
  MR_Word analysis__ResultList_10)
#line 516 "analysis.m"
{
#line 516 "analysis.m"
  {
#line 516 "analysis.m"
    MR_bool analysis__succeeded;
#line 516 "analysis.m"
    MR_Word analysis__TypeInfo_70_70;
#line 516 "analysis.m"
    MR_Word analysis__TypeInfo_72_72;
#line 516 "analysis.m"
    MR_Word analysis__TypeInfo_74_74;
#line 516 "analysis.m"
    MR_Word analysis__TypeInfo_76_76;

#line 518 "analysis.m"
    {
#line 518 "analysis.m"
      mercury__io__write_string_3_p_0((MR_String) "% Found these results: ");
    }
#line 519 "analysis.m"
    {
#line 519 "analysis.m"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_62, (MR_Integer) 4, &analysis__TypeInfo_70_70);
    }
#line 519 "analysis.m"
    {
#line 519 "analysis.m"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_62, (MR_Integer) 5, &analysis__TypeInfo_72_72);
    }
#line 5496 "analysis.c"
    {
#line 5498 "analysis.c"
      analysis__TypeInfo_74_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 5500 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_74_74, 0) = ((MR_Box) (&analysis__analysis__type_ctor_info_analysis_result_2));
#line 5502 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_74_74, 1) = ((MR_Box) (analysis__TypeInfo_70_70));
#line 5504 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_74_74, 2) = ((MR_Box) (analysis__TypeInfo_72_72));
#line 5506 "analysis.c"
    }
#line 5508 "analysis.c"
    {
#line 5510 "analysis.c"
      analysis__TypeInfo_76_76 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 5512 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_76_76, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
#line 5514 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_76_76, 1) = ((MR_Box) (analysis__TypeInfo_74_74));
#line 5516 "analysis.c"
    }
#line 519 "analysis.m"
    {
#line 519 "analysis.m"
      mercury__io__print_3_p_0(analysis__TypeInfo_76_76, ((MR_Box) (analysis__ResultList_10)));
    }
#line 520 "analysis.m"
    {
#line 520 "analysis.m"
      mercury__io__nl_2_p_0();
    }
#line 516 "analysis.m"
  }
#line 516 "analysis.m"
}

#line 498 "analysis.m"
static void MR_CALL 
analysis__IntroducedFrom__pred__lookup_results_1__498__1_4_p_0(
#line 498 "analysis.m"
  MR_Word analysis__ModuleName_7,
#line 498 "analysis.m"
  MR_Word analysis__FuncId_8)
#line 498 "analysis.m"
{
#line 498 "analysis.m"
  {
#line 498 "analysis.m"
    MR_bool analysis__succeeded;

#line 500 "analysis.m"
    {
#line 500 "analysis.m"
      mercury__io__write_string_3_p_0((MR_String) "% Looking up analysis results for ");
    }
#line 501 "analysis.m"
    {
#line 501 "analysis.m"
      mercury__io__write_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (analysis__ModuleName_7)));
    }
#line 502 "analysis.m"
    {
#line 502 "analysis.m"
      mercury__io__write_string_3_p_0((MR_String) ".");
    }
#line 503 "analysis.m"
    {
#line 503 "analysis.m"
      mercury__io__write_3_p_0((MR_Word) &analysis__analysis__type_ctor_info_func_id_0, ((MR_Box) (analysis__FuncId_8)));
    }
#line 504 "analysis.m"
    {
#line 504 "analysis.m"
      mercury__io__nl_2_p_0();
    }
#line 498 "analysis.m"
  }
#line 498 "analysis.m"
}

#line 681 "analysis.m"
static MR_bool MR_CALL 
analysis__IntroducedFrom__func__lookup_requests__681__1_2_f_0(
#line 681 "analysis.m"
  MR_Word analysis__TypeClassInfo_for_call_pattern_47,
#line 681 "analysis.m"
  MR_Word analysis__LambdaHeadVar__1_23,
#line 681 "analysis.m"
  MR_Box * analysis__LambdaHeadVar__2_24)
#line 681 "analysis.m"
{
#line 681 "analysis.m"
  {
#line 681 "analysis.m"
    MR_bool analysis__succeeded;
#line 681 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_call_pattern_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__LambdaHeadVar__1_23, (MR_Integer) 0)));
#line 681 "analysis.m"
    MR_Word analysis__TypeInfo_61_61;
#line 681 "analysis.m"
    MR_Word analysis__TypeInfo_62_62;
#line 681 "analysis.m"
    MR_Word analysis__V_25_25;
#line 681 "analysis.m"
    MR_Box analysis__Call0_27 = (MR_hl_field(MR_mktag(0), analysis__LambdaHeadVar__1_23, (MR_Integer) 1));
#line 682 "analysis.m"
    MR_Word analysis__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__LambdaHeadVar__1_23, (MR_Integer) 2)));

#line 683 "analysis.m"
    {
#line 683 "analysis.m"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_call_pattern_47, (MR_Integer) 4, &analysis__TypeInfo_61_61);
    }
#line 683 "analysis.m"
    {
#line 683 "analysis.m"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_call_pattern_59, (MR_Integer) 4, &analysis__TypeInfo_62_62);
    }
#line 683 "analysis.m"
    {
#line 683 "analysis.m"
      analysis__V_25_25 = mercury__univ__univ_1_f_0(analysis__TypeInfo_62_62, analysis__Call0_27);
    }
#line 683 "analysis.m"
    {
#line 683 "analysis.m"
      analysis__succeeded = mercury__univ__univ_1_f_2(analysis__TypeInfo_61_61, analysis__LambdaHeadVar__2_24, analysis__V_25_25);
    }
#line 681 "analysis.m"
    return analysis__succeeded;
#line 681 "analysis.m"
  }
#line 681 "analysis.m"
}

#line 562 "analysis.m"
static void MR_CALL 
analysis__IntroducedFrom__pred__lookup_best_result__562__1_4_p_0(
#line 562 "analysis.m"
  MR_Word analysis__ModuleName_8,
#line 562 "analysis.m"
  MR_Word analysis__FuncId_9)
#line 562 "analysis.m"
{
#line 562 "analysis.m"
  {
#line 562 "analysis.m"
    MR_bool analysis__succeeded;

#line 564 "analysis.m"
    {
#line 564 "analysis.m"
      mercury__io__write_string_3_p_0((MR_String) "% Looking up best analysis result for ");
    }
#line 565 "analysis.m"
    {
#line 565 "analysis.m"
      mercury__io__write_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (analysis__ModuleName_8)));
    }
#line 566 "analysis.m"
    {
#line 566 "analysis.m"
      mercury__io__write_string_3_p_0((MR_String) ".");
    }
#line 567 "analysis.m"
    {
#line 567 "analysis.m"
      mercury__io__write_3_p_0((MR_Word) &analysis__analysis__type_ctor_info_func_id_0, ((MR_Box) (analysis__FuncId_9)));
    }
#line 568 "analysis.m"
    {
#line 568 "analysis.m"
      mercury__io__nl_2_p_0();
    }
#line 562 "analysis.m"
  }
#line 562 "analysis.m"
}

#line 551 "analysis.m"
static MR_bool MR_CALL 
analysis__IntroducedFrom__pred__lookup_matching_results__551__1_4_p_0(
#line 551 "analysis.m"
  MR_Word analysis__TypeClassInfo_for_analysis_21,
#line 551 "analysis.m"
  MR_Box analysis__FuncInfo_10,
#line 551 "analysis.m"
  MR_Box analysis__Call_11,
#line 551 "analysis.m"
  MR_Word analysis__LambdaHeadVar__1_17)
#line 551 "analysis.m"
{
#line 551 "analysis.m"
  {
#line 551 "analysis.m"
    MR_bool analysis__succeeded;
#line 551 "analysis.m"
    MR_Box analysis__ResultCall_15 = (MR_hl_field(MR_mktag(0), analysis__LambdaHeadVar__1_17, (MR_Integer) 0));
#line 553 "analysis.m"
    MR_Box analysis__V_19_19 = (MR_hl_field(MR_mktag(0), analysis__LambdaHeadVar__1_17, (MR_Integer) 1));
#line 553 "analysis.m"
    MR_Word analysis__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__LambdaHeadVar__1_17, (MR_Integer) 2)));

#line 554 "analysis.m"
    {
#line 554 "analysis.m"
      MR_Word analysis__TypeClassInfo_for_call_pattern_28;
#line 554 "analysis.m"
      MR_Word analysis__TypeClassInfo_for_partial_order_30;
#line 134 "analysis.m"
      MR_bool MR_CALL (* analysis__func_0)(MR_Box, MR_Box, MR_Box, MR_Box);

#line 5709 "analysis.c"
      {
#line 5711 "analysis.c"
        mercury__private_builtin__superclass_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_21, (MR_Integer) 1, &analysis__TypeClassInfo_for_call_pattern_28);
      }
#line 5714 "analysis.c"
      {
#line 5716 "analysis.c"
        mercury__private_builtin__superclass_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_call_pattern_28, (MR_Integer) 1, &analysis__TypeClassInfo_for_partial_order_30);
      }
#line 134 "analysis.m"
      analysis__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), analysis__TypeClassInfo_for_partial_order_30, (MR_Integer) 0)), (MR_Integer) 5)));
#line 134 "analysis.m"
      {
#line 134 "analysis.m"
        analysis__succeeded = analysis__func_0(((MR_Box) analysis__TypeClassInfo_for_partial_order_30), analysis__FuncInfo_10, analysis__Call_11, analysis__ResultCall_15);
      }
#line 554 "analysis.m"
    }
#line 555 "analysis.m"
    if (!(analysis__succeeded))
#line 555 "analysis.m"
      {
#line 555 "analysis.m"
        MR_Word analysis__TypeClassInfo_for_call_pattern_31;
#line 555 "analysis.m"
        MR_Word analysis__TypeClassInfo_for_partial_order_33;
#line 135 "analysis.m"
        MR_bool MR_CALL (* analysis__func_1)(MR_Box, MR_Box, MR_Box, MR_Box);

#line 5739 "analysis.c"
        {
#line 5741 "analysis.c"
          mercury__private_builtin__superclass_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_21, (MR_Integer) 1, &analysis__TypeClassInfo_for_call_pattern_31);
        }
#line 5744 "analysis.c"
        {
#line 5746 "analysis.c"
          mercury__private_builtin__superclass_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_call_pattern_31, (MR_Integer) 1, &analysis__TypeClassInfo_for_partial_order_33);
        }
#line 135 "analysis.m"
        analysis__func_1 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), analysis__TypeClassInfo_for_partial_order_33, (MR_Integer) 0)), (MR_Integer) 6)));
#line 135 "analysis.m"
        {
#line 135 "analysis.m"
          analysis__succeeded = analysis__func_1(((MR_Box) analysis__TypeClassInfo_for_partial_order_33), analysis__FuncInfo_10, analysis__Call_11, analysis__ResultCall_15);
        }
#line 555 "analysis.m"
      }
#line 551 "analysis.m"
    return analysis__succeeded;
#line 551 "analysis.m"
  }
#line 551 "analysis.m"
}

#line 478 "analysis.m"
static MR_Box MR_CALL 
analysis__IntroducedFrom__func__lookup_existing_call_patterns__478__1_2_f_0(
#line 478 "analysis.m"
  MR_Word analysis__TypeClassInfo_for_call_pattern_46,
#line 478 "analysis.m"
  MR_Word analysis__LambdaHeadVar__1_24)
#line 478 "analysis.m"
{
#line 478 "analysis.m"
  {
#line 478 "analysis.m"
    MR_bool analysis__succeeded;
#line 478 "analysis.m"
    MR_Box analysis__LambdaHeadVar__2_25;
#line 478 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_analysis_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__LambdaHeadVar__1_24, (MR_Integer) 0)));
#line 478 "analysis.m"
    MR_Word analysis__TypeInfo_60_60;
#line 478 "analysis.m"
    MR_Word analysis__TypeInfo_61_61;
#line 478 "analysis.m"
    MR_Box analysis__Call0_17 = (MR_hl_field(MR_mktag(0), analysis__LambdaHeadVar__1_24, (MR_Integer) 1));
#line 478 "analysis.m"
    MR_Word analysis__V_26_26;
#line 480 "analysis.m"
    MR_Box analysis___Answer_18 = (MR_hl_field(MR_mktag(0), analysis__LambdaHeadVar__1_24, (MR_Integer) 2));
#line 480 "analysis.m"
    MR_Word analysis___Status_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__LambdaHeadVar__1_24, (MR_Integer) 3)));

#line 481 "analysis.m"
    {
#line 481 "analysis.m"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_58, (MR_Integer) 4, &analysis__TypeInfo_60_60);
    }
#line 481 "analysis.m"
    {
#line 481 "analysis.m"
      analysis__V_26_26 = mercury__univ__univ_1_f_0(analysis__TypeInfo_60_60, analysis__Call0_17);
    }
#line 481 "analysis.m"
    {
#line 481 "analysis.m"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_call_pattern_46, (MR_Integer) 4, &analysis__TypeInfo_61_61);
    }
#line 481 "analysis.m"
    {
#line 481 "analysis.m"
      mercury__univ__det_univ_to_type_2_p_0(analysis__TypeInfo_61_61, analysis__V_26_26, &analysis__LambdaHeadVar__2_25);
    }
#line 478 "analysis.m"
    return analysis__LambdaHeadVar__2_25;
#line 478 "analysis.m"
  }
#line 478 "analysis.m"
}

#line 446 "analysis.m"
MR_bool MR_CALL 
analysis__ClassMethod_for_analysis__to_term____analysis__any_call__arity0______analysis__from_term_2_2_p_0(
#line 446 "analysis.m"
  MR_Word analysis__Term_3)
#line 446 "analysis.m"
{
#line 446 "analysis.m"
  {
#line 446 "analysis.m"
    MR_bool analysis__succeeded;
#line 446 "analysis.m"
    MR_Word analysis__V_5_5;
#line 446 "analysis.m"
    MR_String analysis__V_6_6;
#line 446 "analysis.m"
    MR_Word analysis__V_7_7;
#line 447 "analysis.m"
    MR_Word analysis__V_4_4;

#line 446 "analysis.m"
    mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 447 "analysis.m"
    analysis__succeeded = ((MR_tag((MR_Word) analysis__Term_3)) == (MR_mktag((MR_Integer) 0)));
#line 447 "analysis.m"
    if (analysis__succeeded)
#line 447 "analysis.m"
      {
#line 447 "analysis.m"
        analysis__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Term_3, (MR_Integer) 0)));
#line 447 "analysis.m"
        analysis__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Term_3, (MR_Integer) 1)));
#line 447 "analysis.m"
        analysis__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Term_3, (MR_Integer) 2)));
#line 447 "analysis.m"
        analysis__succeeded = (analysis__V_7_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 446 "analysis.m"
        if (analysis__succeeded)
#line 446 "analysis.m"
          {
#line 447 "analysis.m"
            analysis__succeeded = ((MR_tag((MR_Word) analysis__V_5_5)) == (MR_mktag((MR_Integer) 0)));
#line 447 "analysis.m"
            if (analysis__succeeded)
#line 447 "analysis.m"
              {
#line 447 "analysis.m"
                analysis__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), analysis__V_5_5, (MR_Integer) 0)));
#line 447 "analysis.m"
                analysis__succeeded = (strcmp(analysis__V_6_6, (MR_String) "any") == 0);
#line 447 "analysis.m"
              }
#line 446 "analysis.m"
          }
#line 447 "analysis.m"
      }
#line 446 "analysis.m"
    return analysis__succeeded;
#line 446 "analysis.m"
  }
#line 446 "analysis.m"
}

#line 443 "analysis.m"
MR_Word MR_CALL 
analysis__ClassMethod_for_analysis__to_term____analysis__any_call__arity0______analysis__to_term_1_1_f_0(void)
#line 443 "analysis.m"
{
#line 443 "analysis.m"
  {
#line 443 "analysis.m"
    MR_bool analysis__succeeded;
#line 443 "analysis.m"
    MR_Word analysis__Term_3;

#line 443 "analysis.m"
    {
#line 443 "analysis.m"
      analysis__Term_3 = analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_116_111_95_116_101_114_109_95_95_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_116_111_95_116_101_114_109_95_49_95_95_91_49_93_95_48_1_f_0();
    }
#line 443 "analysis.m"
    return analysis__Term_3;
#line 443 "analysis.m"
  }
#line 443 "analysis.m"
}

#line 438 "analysis.m"
MR_bool MR_CALL 
analysis__ClassMethod_for_analysis__partial_order____analysis__no_func_info__arity0__analysis__any_call__arity0______analysis__equivalent_3_3_p_0(void)
#line 438 "analysis.m"
{
#line 439 "analysis.m"
  {
#line 439 "analysis.m"
    MR_bool analysis__succeeded;

#line 439 "analysis.m"
    {
#line 439 "analysis.m"
      analysis__succeeded = analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_112_97_114_116_105_97_108_95_111_114_100_101_114_95_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_101_113_117_105_118_97_108_101_110_116_95_51_95_95_91_49_44_32_50_44_32_51_93_95_48_3_p_0();
    }
#line 439 "analysis.m"
    return analysis__succeeded;
#line 439 "analysis.m"
  }
#line 438 "analysis.m"
}

#line 435 "analysis.m"
MR_bool MR_CALL 
analysis__ClassMethod_for_analysis__partial_order____analysis__no_func_info__arity0__analysis__any_call__arity0______analysis__more_precise_than_3_3_p_0(void)
#line 435 "analysis.m"
{
#line 436 "analysis.m"
  {
#line 436 "analysis.m"
    MR_bool analysis__succeeded;

#line 436 "analysis.m"
    {
#line 436 "analysis.m"
      analysis__succeeded = analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_112_97_114_116_105_97_108_95_111_114_100_101_114_95_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_109_111_114_101_95_112_114_101_99_105_115_101_95_116_104_97_110_95_51_95_95_91_49_44_32_50_44_32_51_93_95_48_3_p_0();
    }
#line 436 "analysis.m"
    return analysis__succeeded;
#line 436 "analysis.m"
  }
#line 435 "analysis.m"
}

#line 396 "analysis.m"
void MR_CALL 
analysis____Compare____some_analysis_result_0_0(
#line 396 "analysis.m"
  MR_Word * analysis__HeadVar__1_1,
#line 396 "analysis.m"
  MR_Word analysis__HeadVar__2_2,
#line 396 "analysis.m"
  MR_Word analysis__HeadVar__3_3)
#line 396 "analysis.m"
{
#line 396 "analysis.m"
  {
#line 396 "analysis.m"
    MR_bool analysis__succeeded;
#line 396 "analysis.m"
    MR_Integer analysis__CastX_12 = (MR_Integer) analysis__HeadVar__2_2;
#line 396 "analysis.m"
    MR_Integer analysis__CastY_13 = (MR_Integer) analysis__HeadVar__3_3;

#line 396 "analysis.m"
    analysis__succeeded = (analysis__CastX_12 == analysis__CastY_13);
#line 396 "analysis.m"
    if (analysis__succeeded)
#line 396 "analysis.m"
      *analysis__HeadVar__1_1 = (MR_Integer) 0;
#line 396 "analysis.m"
    else
#line 396 "analysis.m"
      {
#line 396 "analysis.m"
        MR_Word analysis__TypeClassInfo_for_analysis_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 0)));
#line 396 "analysis.m"
        MR_Word analysis__TypeClassInfo_for_analysis_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__3_3, (MR_Integer) 0)));
#line 396 "analysis.m"
        MR_Box analysis__V_4_4 = (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 1));
#line 396 "analysis.m"
        MR_Box analysis__V_5_5 = (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 2));
#line 396 "analysis.m"
        MR_Word analysis__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 3)));
#line 396 "analysis.m"
        MR_Box analysis__V_7_7 = (MR_hl_field(MR_mktag(0), analysis__HeadVar__3_3, (MR_Integer) 1));
#line 396 "analysis.m"
        MR_Box analysis__V_8_8 = (MR_hl_field(MR_mktag(0), analysis__HeadVar__3_3, (MR_Integer) 2));
#line 396 "analysis.m"
        MR_Word analysis__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__3_3, (MR_Integer) 3)));
#line 396 "analysis.m"
        MR_Word analysis__V_10_10;
#line 396 "analysis.m"
        MR_Word analysis__TypeInfo_17_17;
#line 396 "analysis.m"
        MR_Word analysis__TypeInfo_18_18;

#line 396 "analysis.m"
        {
#line 396 "analysis.m"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_14, (MR_Integer) 4, &analysis__TypeInfo_17_17);
        }
#line 396 "analysis.m"
        {
#line 396 "analysis.m"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_15, (MR_Integer) 4, &analysis__TypeInfo_18_18);
        }
#line 396 "analysis.m"
        {
#line 396 "analysis.m"
          mercury__private_builtin__typed_compare_3_p_0(analysis__TypeInfo_17_17, analysis__TypeInfo_18_18, &analysis__V_10_10, analysis__V_4_4, analysis__V_7_7);
        }
#line 396 "analysis.m"
        analysis__succeeded = (analysis__V_10_10 == (MR_Integer) 0);
#line 396 "analysis.m"
        analysis__succeeded = !(analysis__succeeded);
#line 396 "analysis.m"
        if (analysis__succeeded)
#line 396 "analysis.m"
          *analysis__HeadVar__1_1 = analysis__V_10_10;
#line 396 "analysis.m"
        else
#line 396 "analysis.m"
          {
#line 396 "analysis.m"
            MR_Word analysis__V_11_11;
#line 396 "analysis.m"
            MR_Word analysis__TypeInfo_20_20;
#line 396 "analysis.m"
            MR_Word analysis__TypeInfo_21_21;

#line 396 "analysis.m"
            {
#line 396 "analysis.m"
              mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_14, (MR_Integer) 5, &analysis__TypeInfo_20_20);
            }
#line 396 "analysis.m"
            {
#line 396 "analysis.m"
              mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_15, (MR_Integer) 5, &analysis__TypeInfo_21_21);
            }
#line 396 "analysis.m"
            {
#line 396 "analysis.m"
              mercury__private_builtin__typed_compare_3_p_0(analysis__TypeInfo_20_20, analysis__TypeInfo_21_21, &analysis__V_11_11, analysis__V_5_5, analysis__V_8_8);
            }
#line 396 "analysis.m"
            analysis__succeeded = (analysis__V_11_11 == (MR_Integer) 0);
#line 396 "analysis.m"
            analysis__succeeded = !(analysis__succeeded);
#line 396 "analysis.m"
            if (analysis__succeeded)
#line 396 "analysis.m"
              *analysis__HeadVar__1_1 = analysis__V_11_11;
#line 396 "analysis.m"
            else
#line 396 "analysis.m"
              {
#line 396 "analysis.m"
                MR_Integer analysis__V_23_23 = (MR_Integer) analysis__V_6_6;
#line 396 "analysis.m"
                MR_Integer analysis__V_24_24 = (MR_Integer) analysis__V_9_9;

#line 396 "analysis.m"
                {
#line 396 "analysis.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(analysis__HeadVar__1_1, analysis__V_23_23, analysis__V_24_24);
                }
#line 396 "analysis.m"
              }
#line 396 "analysis.m"
          }
#line 396 "analysis.m"
      }
#line 396 "analysis.m"
  }
#line 396 "analysis.m"
}

#line 396 "analysis.m"
MR_bool MR_CALL 
analysis____Unify____some_analysis_result_0_0(
#line 396 "analysis.m"
  MR_Word analysis__HeadVar__1_1,
#line 396 "analysis.m"
  MR_Word analysis__HeadVar__2_2)
#line 396 "analysis.m"
{
#line 396 "analysis.m"
  {
#line 396 "analysis.m"
    MR_bool analysis__succeeded;
#line 396 "analysis.m"
    MR_Integer analysis__CastX_9 = (MR_Integer) analysis__HeadVar__1_1;
#line 396 "analysis.m"
    MR_Integer analysis__CastY_10 = (MR_Integer) analysis__HeadVar__2_2;

#line 396 "analysis.m"
    analysis__succeeded = (analysis__CastX_9 == analysis__CastY_10);
#line 396 "analysis.m"
    if (analysis__succeeded)
#line 396 "analysis.m"
      analysis__succeeded = MR_TRUE;
#line 396 "analysis.m"
    else
#line 396 "analysis.m"
      {
#line 396 "analysis.m"
        MR_Word analysis__TypeClassInfo_for_analysis_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__1_1, (MR_Integer) 0)));
#line 396 "analysis.m"
        MR_Word analysis__TypeClassInfo_for_analysis_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 0)));
#line 396 "analysis.m"
        MR_Word analysis__TypeInfo_14_14;
#line 396 "analysis.m"
        MR_Word analysis__TypeInfo_15_15;
#line 396 "analysis.m"
        MR_Word analysis__TypeInfo_17_17;
#line 396 "analysis.m"
        MR_Word analysis__TypeInfo_18_18;
#line 396 "analysis.m"
        MR_Box analysis__V_3_3 = (MR_hl_field(MR_mktag(0), analysis__HeadVar__1_1, (MR_Integer) 1));
#line 396 "analysis.m"
        MR_Box analysis__V_4_4 = (MR_hl_field(MR_mktag(0), analysis__HeadVar__1_1, (MR_Integer) 2));
#line 396 "analysis.m"
        MR_Word analysis__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__1_1, (MR_Integer) 3)));
#line 396 "analysis.m"
        MR_Box analysis__V_6_6 = (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 1));
#line 396 "analysis.m"
        MR_Box analysis__V_7_7 = (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 2));
#line 396 "analysis.m"
        MR_Word analysis__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 3)));
#line 396 "analysis.m"
        MR_Integer analysis__PolyConst5_16;

#line 396 "analysis.m"
        {
#line 396 "analysis.m"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_11, (MR_Integer) 4, &analysis__TypeInfo_14_14);
        }
#line 396 "analysis.m"
        {
#line 396 "analysis.m"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_12, (MR_Integer) 4, &analysis__TypeInfo_15_15);
        }
#line 396 "analysis.m"
        {
#line 396 "analysis.m"
          analysis__succeeded = mercury__private_builtin__typed_unify_2_p_0(analysis__TypeInfo_14_14, analysis__TypeInfo_15_15, analysis__V_3_3, analysis__V_6_6);
        }
#line 396 "analysis.m"
        if (analysis__succeeded)
#line 396 "analysis.m"
          {
#line 6162 "analysis.c"
            analysis__PolyConst5_16 = (MR_Integer) 5;
#line 396 "analysis.m"
            {
#line 396 "analysis.m"
              mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_11, analysis__PolyConst5_16, &analysis__TypeInfo_17_17);
            }
#line 396 "analysis.m"
            {
#line 396 "analysis.m"
              mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_12, analysis__PolyConst5_16, &analysis__TypeInfo_18_18);
            }
#line 396 "analysis.m"
            {
#line 396 "analysis.m"
              analysis__succeeded = mercury__private_builtin__typed_unify_2_p_0(analysis__TypeInfo_17_17, analysis__TypeInfo_18_18, analysis__V_4_4, analysis__V_7_7);
            }
#line 396 "analysis.m"
            if (analysis__succeeded)
#line 396 "analysis.m"
              analysis__succeeded = (analysis__V_5_5 == analysis__V_8_8);
#line 396 "analysis.m"
          }
#line 396 "analysis.m"
      }
#line 396 "analysis.m"
    return analysis__succeeded;
#line 396 "analysis.m"
  }
#line 396 "analysis.m"
}

#line 143 "analysis.m"
void MR_CALL 
analysis____Compare____no_func_info_0_0(
#line 143 "analysis.m"
  MR_Word * analysis__HeadVar__1_1)
#line 143 "analysis.m"
{
#line 143 "analysis.m"
  {
#line 143 "analysis.m"
    MR_bool analysis__succeeded;

#line 143 "analysis.m"
    {
#line 143 "analysis.m"
      analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(analysis__HeadVar__1_1);
    }
#line 143 "analysis.m"
  }
#line 143 "analysis.m"
}

#line 143 "analysis.m"
MR_bool MR_CALL 
analysis____Unify____no_func_info_0_0(void)
#line 143 "analysis.m"
{
#line 143 "analysis.m"
  {
#line 143 "analysis.m"
    MR_bool analysis__succeeded;

#line 143 "analysis.m"
    {
#line 143 "analysis.m"
      analysis__succeeded = analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_48_95_95_91_49_44_32_50_93_95_48_2_p_0();
    }
#line 143 "analysis.m"
    return analysis__succeeded;
#line 143 "analysis.m"
  }
#line 143 "analysis.m"
}

#line 425 "analysis.m"
void MR_CALL 
analysis____Compare____module_analysis_map_1_0(
#line 425 "analysis.m"
  MR_Word analysis__TypeInfo_for_T_6,
#line 425 "analysis.m"
  MR_Word * analysis__HeadVar__1_1,
#line 425 "analysis.m"
  MR_Word analysis__HeadVar__2_2,
#line 425 "analysis.m"
  MR_Word analysis__HeadVar__3_3)
#line 425 "analysis.m"
{
#line 425 "analysis.m"
  {
#line 425 "analysis.m"
    MR_bool analysis__succeeded;
#line 425 "analysis.m"
    MR_Word analysis__TypeInfo_10_10;
#line 425 "analysis.m"
    MR_Word analysis__TypeInfo_12_12;
#line 425 "analysis.m"
    MR_Word analysis__Cast_HeadVar1_4 = analysis__HeadVar__2_2;
#line 425 "analysis.m"
    MR_Word analysis__Cast_HeadVar2_5 = analysis__HeadVar__3_3;

#line 6264 "analysis.c"
    {
#line 6266 "analysis.c"
      analysis__TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6268 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_10_10, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
#line 6270 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_10_10, 1) = ((MR_Box) (analysis__TypeInfo_for_T_6));
#line 6272 "analysis.c"
    }
#line 6274 "analysis.c"
    {
#line 6276 "analysis.c"
      analysis__TypeInfo_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 6278 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_12_12, 0) = ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2));
#line 6280 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_12_12, 1) = ((MR_Box) (&analysis__analysis__type_ctor_info_func_id_0));
#line 6282 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_12_12, 2) = ((MR_Box) (analysis__TypeInfo_10_10));
#line 6284 "analysis.c"
    }
#line 425 "analysis.m"
    {
#line 425 "analysis.m"
      mercury__tree234____Compare____tree234_2_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, analysis__TypeInfo_12_12, analysis__HeadVar__1_1, analysis__Cast_HeadVar1_4, analysis__Cast_HeadVar2_5);
    }
#line 425 "analysis.m"
  }
#line 425 "analysis.m"
}

#line 425 "analysis.m"
MR_bool MR_CALL 
analysis____Unify____module_analysis_map_1_0(
#line 425 "analysis.m"
  MR_Word analysis__TypeInfo_for_T_5,
#line 425 "analysis.m"
  MR_Word analysis__HeadVar__1_1,
#line 425 "analysis.m"
  MR_Word analysis__HeadVar__2_2)
#line 425 "analysis.m"
{
#line 425 "analysis.m"
  {
#line 425 "analysis.m"
    MR_bool analysis__succeeded;
#line 425 "analysis.m"
    MR_Word analysis__TypeInfo_9_9;
#line 425 "analysis.m"
    MR_Word analysis__TypeInfo_11_11;
#line 425 "analysis.m"
    MR_Word analysis__Cast_HeadVar1_3 = analysis__HeadVar__1_1;
#line 425 "analysis.m"
    MR_Word analysis__Cast_HeadVar2_4 = analysis__HeadVar__2_2;

#line 6320 "analysis.c"
    {
#line 6322 "analysis.c"
      analysis__TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6324 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_9_9, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
#line 6326 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_9_9, 1) = ((MR_Box) (analysis__TypeInfo_for_T_5));
#line 6328 "analysis.c"
    }
#line 6330 "analysis.c"
    {
#line 6332 "analysis.c"
      analysis__TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 6334 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_11_11, 0) = ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2));
#line 6336 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_11_11, 1) = ((MR_Box) (&analysis__analysis__type_ctor_info_func_id_0));
#line 6338 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_11_11, 2) = ((MR_Box) (analysis__TypeInfo_9_9));
#line 6340 "analysis.c"
    }
#line 425 "analysis.m"
    {
#line 425 "analysis.m"
      analysis__succeeded = mercury__tree234____Unify____tree234_2_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, analysis__TypeInfo_11_11, analysis__Cast_HeadVar1_3, analysis__Cast_HeadVar2_4);
    }
#line 425 "analysis.m"
    return analysis__succeeded;
#line 425 "analysis.m"
  }
#line 425 "analysis.m"
}

#line 389 "analysis.m"
void MR_CALL 
analysis____Compare____make_analysis_registry_0_0(
#line 389 "analysis.m"
  MR_Word * analysis__HeadVar__1_1,
#line 389 "analysis.m"
  MR_Word analysis__HeadVar__2_2,
#line 389 "analysis.m"
  MR_Word analysis__HeadVar__3_3)
#line 389 "analysis.m"
{
#line 389 "analysis.m"
  {
#line 389 "analysis.m"
    MR_bool analysis__succeeded;
#line 389 "analysis.m"
    MR_Integer analysis__Cast_HeadVar1_4 = (MR_Integer) analysis__HeadVar__2_2;
#line 389 "analysis.m"
    MR_Integer analysis__Cast_HeadVar2_5 = (MR_Integer) analysis__HeadVar__3_3;

#line 389 "analysis.m"
    {
#line 389 "analysis.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(analysis__HeadVar__1_1, analysis__Cast_HeadVar1_4, analysis__Cast_HeadVar2_5);
    }
#line 389 "analysis.m"
  }
#line 389 "analysis.m"
}

#line 389 "analysis.m"
MR_bool MR_CALL 
analysis____Unify____make_analysis_registry_0_0(
#line 389 "analysis.m"
  MR_Word analysis__HeadVar__2_1,
#line 389 "analysis.m"
  MR_Word analysis__HeadVar__2_2)
#line 389 "analysis.m"
{
#line 6393 "analysis.c"
  {
#line 6395 "analysis.c"
    MR_bool analysis__succeeded = (analysis__HeadVar__2_1 == analysis__HeadVar__2_2);

#line 6398 "analysis.c"
    return analysis__succeeded;
#line 6400 "analysis.c"
  }
#line 389 "analysis.m"
}

#line 413 "analysis.m"
void MR_CALL 
analysis____Compare____imdg_arc_0_0(
#line 413 "analysis.m"
  MR_Word * analysis__HeadVar__1_1,
#line 413 "analysis.m"
  MR_Word analysis__HeadVar__2_2,
#line 413 "analysis.m"
  MR_Word analysis__HeadVar__3_3)
#line 413 "analysis.m"
{
#line 413 "analysis.m"
  {
#line 413 "analysis.m"
    MR_bool analysis__succeeded;
#line 413 "analysis.m"
    MR_Integer analysis__CastX_9 = (MR_Integer) analysis__HeadVar__2_2;
#line 413 "analysis.m"
    MR_Integer analysis__CastY_10 = (MR_Integer) analysis__HeadVar__3_3;

#line 413 "analysis.m"
    analysis__succeeded = (analysis__CastX_9 == analysis__CastY_10);
#line 413 "analysis.m"
    if (analysis__succeeded)
#line 413 "analysis.m"
      *analysis__HeadVar__1_1 = (MR_Integer) 0;
#line 413 "analysis.m"
    else
#line 413 "analysis.m"
      {
#line 413 "analysis.m"
        MR_Word analysis__TypeClassInfo_for_call_pattern_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 0)));
#line 413 "analysis.m"
        MR_Word analysis__TypeClassInfo_for_call_pattern_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__3_3, (MR_Integer) 0)));
#line 413 "analysis.m"
        MR_Box analysis__V_4_4 = (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 1));
#line 413 "analysis.m"
        MR_Word analysis__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 2)));
#line 413 "analysis.m"
        MR_Box analysis__V_6_6 = (MR_hl_field(MR_mktag(0), analysis__HeadVar__3_3, (MR_Integer) 1));
#line 413 "analysis.m"
        MR_Word analysis__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__3_3, (MR_Integer) 2)));
#line 413 "analysis.m"
        MR_Word analysis__V_8_8;
#line 413 "analysis.m"
        MR_Word analysis__TypeInfo_14_14;
#line 413 "analysis.m"
        MR_Word analysis__TypeInfo_15_15;

#line 413 "analysis.m"
        {
#line 413 "analysis.m"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_call_pattern_11, (MR_Integer) 4, &analysis__TypeInfo_14_14);
        }
#line 413 "analysis.m"
        {
#line 413 "analysis.m"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_call_pattern_12, (MR_Integer) 4, &analysis__TypeInfo_15_15);
        }
#line 413 "analysis.m"
        {
#line 413 "analysis.m"
          mercury__private_builtin__typed_compare_3_p_0(analysis__TypeInfo_14_14, analysis__TypeInfo_15_15, &analysis__V_8_8, analysis__V_4_4, analysis__V_6_6);
        }
#line 413 "analysis.m"
        analysis__succeeded = (analysis__V_8_8 == (MR_Integer) 0);
#line 413 "analysis.m"
        analysis__succeeded = !(analysis__succeeded);
#line 413 "analysis.m"
        if (analysis__succeeded)
#line 413 "analysis.m"
          *analysis__HeadVar__1_1 = analysis__V_8_8;
#line 413 "analysis.m"
        else
#line 413 "analysis.m"
          {
#line 413 "analysis.m"
            mdbcomp__sym_name____Compare____sym_name_0_0(analysis__HeadVar__1_1, analysis__V_5_5, analysis__V_7_7);
          }
#line 413 "analysis.m"
      }
#line 413 "analysis.m"
  }
#line 413 "analysis.m"
}

#line 413 "analysis.m"
MR_bool MR_CALL 
analysis____Unify____imdg_arc_0_0(
#line 413 "analysis.m"
  MR_Word analysis__HeadVar__1_1,
#line 413 "analysis.m"
  MR_Word analysis__HeadVar__2_2)
#line 413 "analysis.m"
{
#line 413 "analysis.m"
  {
#line 413 "analysis.m"
    MR_bool analysis__succeeded;
#line 413 "analysis.m"
    MR_Integer analysis__CastX_7 = (MR_Integer) analysis__HeadVar__1_1;
#line 413 "analysis.m"
    MR_Integer analysis__CastY_8 = (MR_Integer) analysis__HeadVar__2_2;

#line 413 "analysis.m"
    analysis__succeeded = (analysis__CastX_7 == analysis__CastY_8);
#line 413 "analysis.m"
    if (analysis__succeeded)
#line 413 "analysis.m"
      analysis__succeeded = MR_TRUE;
#line 413 "analysis.m"
    else
#line 413 "analysis.m"
      {
#line 413 "analysis.m"
        MR_Word analysis__TypeClassInfo_for_call_pattern_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__1_1, (MR_Integer) 0)));
#line 413 "analysis.m"
        MR_Word analysis__TypeClassInfo_for_call_pattern_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 0)));
#line 413 "analysis.m"
        MR_Word analysis__TypeInfo_12_12;
#line 413 "analysis.m"
        MR_Word analysis__TypeInfo_13_13;
#line 413 "analysis.m"
        MR_Box analysis__V_3_3 = (MR_hl_field(MR_mktag(0), analysis__HeadVar__1_1, (MR_Integer) 1));
#line 413 "analysis.m"
        MR_Word analysis__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__1_1, (MR_Integer) 2)));
#line 413 "analysis.m"
        MR_Box analysis__V_5_5 = (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 1));
#line 413 "analysis.m"
        MR_Word analysis__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 2)));

#line 413 "analysis.m"
        {
#line 413 "analysis.m"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_call_pattern_9, (MR_Integer) 4, &analysis__TypeInfo_12_12);
        }
#line 413 "analysis.m"
        {
#line 413 "analysis.m"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_call_pattern_10, (MR_Integer) 4, &analysis__TypeInfo_13_13);
        }
#line 413 "analysis.m"
        {
#line 413 "analysis.m"
          analysis__succeeded = mercury__private_builtin__typed_unify_2_p_0(analysis__TypeInfo_12_12, analysis__TypeInfo_13_13, analysis__V_3_3, analysis__V_5_5);
        }
#line 413 "analysis.m"
        if (analysis__succeeded)
#line 413 "analysis.m"
          {
#line 413 "analysis.m"
            analysis__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(analysis__V_4_4, analysis__V_6_6);
          }
#line 413 "analysis.m"
      }
#line 413 "analysis.m"
    return analysis__succeeded;
#line 413 "analysis.m"
  }
#line 413 "analysis.m"
}

#line 169 "analysis.m"
void MR_CALL 
analysis____Compare____func_id_0_0(
#line 169 "analysis.m"
  MR_Word * analysis__HeadVar__1_1,
#line 169 "analysis.m"
  MR_Word analysis__HeadVar__2_2,
#line 169 "analysis.m"
  MR_Word analysis__HeadVar__3_3)
#line 169 "analysis.m"
{
#line 169 "analysis.m"
  {
#line 169 "analysis.m"
    MR_bool analysis__succeeded;
#line 169 "analysis.m"
    MR_Integer analysis__CastX_15 = (MR_Integer) analysis__HeadVar__2_2;
#line 169 "analysis.m"
    MR_Integer analysis__CastY_16 = (MR_Integer) analysis__HeadVar__3_3;

#line 169 "analysis.m"
    analysis__succeeded = (analysis__CastX_15 == analysis__CastY_16);
#line 169 "analysis.m"
    if (analysis__succeeded)
#line 6591 "analysis.c"
      *analysis__HeadVar__1_1 = (MR_Integer) 0;
#line 169 "analysis.m"
    else
#line 169 "analysis.m"
      {
#line 169 "analysis.m"
        MR_Word analysis__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 0)));
#line 169 "analysis.m"
        MR_String analysis__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 1)));
#line 169 "analysis.m"
        MR_Integer analysis__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 2)));
#line 169 "analysis.m"
        MR_Integer analysis__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 3)));
#line 169 "analysis.m"
        MR_Word analysis__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__3_3, (MR_Integer) 0)));
#line 169 "analysis.m"
        MR_String analysis__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(0), analysis__HeadVar__3_3, (MR_Integer) 1)));
#line 169 "analysis.m"
        MR_Integer analysis__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), analysis__HeadVar__3_3, (MR_Integer) 2)));
#line 169 "analysis.m"
        MR_Integer analysis__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), analysis__HeadVar__3_3, (MR_Integer) 3)));
#line 169 "analysis.m"
        MR_Word analysis__V_12_12;
#line 169 "analysis.m"
        MR_Integer analysis__V_21_21 = (MR_Integer) analysis__V_4_4;
#line 169 "analysis.m"
        MR_Integer analysis__V_22_22 = (MR_Integer) analysis__V_8_8;

#line 169 "analysis.m"
        {
#line 169 "analysis.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&analysis__V_12_12, analysis__V_21_21, analysis__V_22_22);
        }
#line 6625 "analysis.c"
        analysis__succeeded = (analysis__V_12_12 == (MR_Integer) 0);
#line 169 "analysis.m"
        analysis__succeeded = !(analysis__succeeded);
#line 169 "analysis.m"
        if (analysis__succeeded)
#line 169 "analysis.m"
          *analysis__HeadVar__1_1 = analysis__V_12_12;
#line 169 "analysis.m"
        else
#line 169 "analysis.m"
          {
#line 169 "analysis.m"
            MR_Word analysis__V_13_13;

#line 169 "analysis.m"
            {
#line 169 "analysis.m"
              mercury__private_builtin__builtin_compare_string_3_p_0(&analysis__V_13_13, analysis__V_5_5, analysis__V_9_9);
            }
#line 6645 "analysis.c"
            analysis__succeeded = (analysis__V_13_13 == (MR_Integer) 0);
#line 169 "analysis.m"
            analysis__succeeded = !(analysis__succeeded);
#line 169 "analysis.m"
            if (analysis__succeeded)
#line 169 "analysis.m"
              *analysis__HeadVar__1_1 = analysis__V_13_13;
#line 169 "analysis.m"
            else
#line 169 "analysis.m"
              {
#line 169 "analysis.m"
                MR_Word analysis__V_14_14;

#line 169 "analysis.m"
                {
#line 169 "analysis.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(&analysis__V_14_14, analysis__V_6_6, analysis__V_10_10);
                }
#line 6665 "analysis.c"
                analysis__succeeded = (analysis__V_14_14 == (MR_Integer) 0);
#line 169 "analysis.m"
                analysis__succeeded = !(analysis__succeeded);
#line 169 "analysis.m"
                if (analysis__succeeded)
#line 169 "analysis.m"
                  *analysis__HeadVar__1_1 = analysis__V_14_14;
#line 169 "analysis.m"
                else
#line 169 "analysis.m"
                  {
#line 169 "analysis.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(analysis__HeadVar__1_1, analysis__V_7_7, analysis__V_11_11);
                  }
#line 169 "analysis.m"
              }
#line 169 "analysis.m"
          }
#line 169 "analysis.m"
      }
#line 169 "analysis.m"
  }
#line 169 "analysis.m"
}

#line 169 "analysis.m"
MR_bool MR_CALL 
analysis____Unify____func_id_0_0(
#line 169 "analysis.m"
  MR_Word analysis__HeadVar__1_1,
#line 169 "analysis.m"
  MR_Word analysis__HeadVar__2_2)
#line 169 "analysis.m"
{
#line 169 "analysis.m"
  {
#line 169 "analysis.m"
    MR_bool analysis__succeeded;
#line 169 "analysis.m"
    MR_Integer analysis__CastX_11 = (MR_Integer) analysis__HeadVar__1_1;
#line 169 "analysis.m"
    MR_Integer analysis__CastY_12 = (MR_Integer) analysis__HeadVar__2_2;

#line 169 "analysis.m"
    analysis__succeeded = (analysis__CastX_11 == analysis__CastY_12);
#line 169 "analysis.m"
    if (analysis__succeeded)
#line 169 "analysis.m"
      analysis__succeeded = MR_TRUE;
#line 169 "analysis.m"
    else
#line 169 "analysis.m"
      {
#line 169 "analysis.m"
        MR_Word analysis__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__1_1, (MR_Integer) 0)));
#line 169 "analysis.m"
        MR_String analysis__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), analysis__HeadVar__1_1, (MR_Integer) 1)));
#line 169 "analysis.m"
        MR_Integer analysis__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), analysis__HeadVar__1_1, (MR_Integer) 2)));
#line 169 "analysis.m"
        MR_Integer analysis__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), analysis__HeadVar__1_1, (MR_Integer) 3)));
#line 169 "analysis.m"
        MR_Word analysis__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 0)));
#line 169 "analysis.m"
        MR_String analysis__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 1)));
#line 169 "analysis.m"
        MR_Integer analysis__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 2)));
#line 169 "analysis.m"
        MR_Integer analysis__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 3)));

#line 6736 "analysis.c"
        analysis__succeeded = (analysis__V_3_3 == analysis__V_7_7);
#line 169 "analysis.m"
        if (analysis__succeeded)
#line 169 "analysis.m"
          {
#line 6742 "analysis.c"
            analysis__succeeded = (strcmp(analysis__V_4_4, analysis__V_8_8) == 0);
#line 169 "analysis.m"
            if (analysis__succeeded)
#line 169 "analysis.m"
              {
#line 6748 "analysis.c"
                analysis__succeeded = (analysis__V_5_5 == analysis__V_9_9);
#line 169 "analysis.m"
                if (analysis__succeeded)
#line 6752 "analysis.c"
                  analysis__succeeded = (analysis__V_6_6 == analysis__V_10_10);
#line 169 "analysis.m"
              }
#line 169 "analysis.m"
          }
#line 169 "analysis.m"
      }
#line 169 "analysis.m"
    return analysis__succeeded;
#line 169 "analysis.m"
  }
#line 169 "analysis.m"
}

#line 426 "analysis.m"
void MR_CALL 
analysis____Compare____func_analysis_map_1_0(
#line 426 "analysis.m"
  MR_Word analysis__TypeInfo_for_T_6,
#line 426 "analysis.m"
  MR_Word * analysis__HeadVar__1_1,
#line 426 "analysis.m"
  MR_Word analysis__HeadVar__2_2,
#line 426 "analysis.m"
  MR_Word analysis__HeadVar__3_3)
#line 426 "analysis.m"
{
#line 426 "analysis.m"
  {
#line 426 "analysis.m"
    MR_bool analysis__succeeded;
#line 426 "analysis.m"
    MR_Word analysis__TypeInfo_9_9;
#line 426 "analysis.m"
    MR_Word analysis__Cast_HeadVar1_4 = analysis__HeadVar__2_2;
#line 426 "analysis.m"
    MR_Word analysis__Cast_HeadVar2_5 = analysis__HeadVar__3_3;

#line 6791 "analysis.c"
    {
#line 6793 "analysis.c"
      analysis__TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6795 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_9_9, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
#line 6797 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_9_9, 1) = ((MR_Box) (analysis__TypeInfo_for_T_6));
#line 6799 "analysis.c"
    }
#line 426 "analysis.m"
    {
#line 426 "analysis.m"
      mercury__tree234____Compare____tree234_2_0((MR_Word) &analysis__analysis__type_ctor_info_func_id_0, analysis__TypeInfo_9_9, analysis__HeadVar__1_1, analysis__Cast_HeadVar1_4, analysis__Cast_HeadVar2_5);
    }
#line 426 "analysis.m"
  }
#line 426 "analysis.m"
}

#line 426 "analysis.m"
MR_bool MR_CALL 
analysis____Unify____func_analysis_map_1_0(
#line 426 "analysis.m"
  MR_Word analysis__TypeInfo_for_T_5,
#line 426 "analysis.m"
  MR_Word analysis__HeadVar__1_1,
#line 426 "analysis.m"
  MR_Word analysis__HeadVar__2_2)
#line 426 "analysis.m"
{
#line 426 "analysis.m"
  {
#line 426 "analysis.m"
    MR_bool analysis__succeeded;
#line 426 "analysis.m"
    MR_Word analysis__TypeInfo_8_8;
#line 426 "analysis.m"
    MR_Word analysis__Cast_HeadVar1_3 = analysis__HeadVar__1_1;
#line 426 "analysis.m"
    MR_Word analysis__Cast_HeadVar2_4 = analysis__HeadVar__2_2;

#line 6833 "analysis.c"
    {
#line 6835 "analysis.c"
      analysis__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6837 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_8_8, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
#line 6839 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_8_8, 1) = ((MR_Box) (analysis__TypeInfo_for_T_5));
#line 6841 "analysis.c"
    }
#line 426 "analysis.m"
    {
#line 426 "analysis.m"
      analysis__succeeded = mercury__tree234____Unify____tree234_2_0((MR_Word) &analysis__analysis__type_ctor_info_func_id_0, analysis__TypeInfo_8_8, analysis__Cast_HeadVar1_3, analysis__Cast_HeadVar2_4);
    }
#line 426 "analysis.m"
    return analysis__succeeded;
#line 426 "analysis.m"
  }
#line 426 "analysis.m"
}

#line 106 "analysis.m"
void MR_CALL 
analysis____Compare____fixpoint_type_0_0(
#line 106 "analysis.m"
  MR_Word * analysis__HeadVar__1_1,
#line 106 "analysis.m"
  MR_Word analysis__HeadVar__2_2,
#line 106 "analysis.m"
  MR_Word analysis__HeadVar__3_3)
#line 106 "analysis.m"
{
#line 106 "analysis.m"
  {
#line 106 "analysis.m"
    MR_bool analysis__succeeded;
#line 106 "analysis.m"
    MR_Integer analysis__Cast_HeadVar1_4 = (MR_Integer) analysis__HeadVar__2_2;
#line 106 "analysis.m"
    MR_Integer analysis__Cast_HeadVar2_5 = (MR_Integer) analysis__HeadVar__3_3;

#line 106 "analysis.m"
    {
#line 106 "analysis.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(analysis__HeadVar__1_1, analysis__Cast_HeadVar1_4, analysis__Cast_HeadVar2_5);
    }
#line 106 "analysis.m"
  }
#line 106 "analysis.m"
}

#line 106 "analysis.m"
MR_bool MR_CALL 
analysis____Unify____fixpoint_type_0_0(
#line 106 "analysis.m"
  MR_Word analysis__HeadVar__2_1,
#line 106 "analysis.m"
  MR_Word analysis__HeadVar__2_2)
#line 106 "analysis.m"
{
#line 6894 "analysis.c"
  {
#line 6896 "analysis.c"
    MR_bool analysis__succeeded = (analysis__HeadVar__2_1 == analysis__HeadVar__2_2);

#line 6899 "analysis.c"
    return analysis__succeeded;
#line 6901 "analysis.c"
  }
#line 106 "analysis.m"
}

#line 149 "analysis.m"
void MR_CALL 
analysis____Compare____any_call_0_0(
#line 149 "analysis.m"
  MR_Word * analysis__HeadVar__1_1)
#line 149 "analysis.m"
{
#line 149 "analysis.m"
  {
#line 149 "analysis.m"
    MR_bool analysis__succeeded;

#line 149 "analysis.m"
    {
#line 149 "analysis.m"
      analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(analysis__HeadVar__1_1);
    }
#line 149 "analysis.m"
  }
#line 149 "analysis.m"
}

#line 149 "analysis.m"
MR_bool MR_CALL 
analysis____Unify____any_call_0_0(void)
#line 149 "analysis.m"
{
#line 149 "analysis.m"
  {
#line 149 "analysis.m"
    MR_bool analysis__succeeded;

#line 149 "analysis.m"
    {
#line 149 "analysis.m"
      analysis__succeeded = analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_48_95_95_91_49_44_32_50_93_95_48_2_p_0();
    }
#line 149 "analysis.m"
    return analysis__succeeded;
#line 149 "analysis.m"
  }
#line 149 "analysis.m"
}

#line 69 "analysis.m"
void MR_CALL 
analysis____Compare____analysis_type_0_0(
#line 69 "analysis.m"
  MR_Word * analysis__HeadVar__1_1,
#line 69 "analysis.m"
  MR_Word analysis__HeadVar__2_2,
#line 69 "analysis.m"
  MR_Word analysis__HeadVar__3_3)
#line 69 "analysis.m"
{
#line 69 "analysis.m"
  {
#line 69 "analysis.m"
    MR_bool analysis__succeeded;
#line 69 "analysis.m"
    MR_Integer analysis__CastX_8 = (MR_Integer) analysis__HeadVar__2_2;
#line 69 "analysis.m"
    MR_Integer analysis__CastY_9 = (MR_Integer) analysis__HeadVar__3_3;

#line 69 "analysis.m"
    analysis__succeeded = (analysis__CastX_8 == analysis__CastY_9);
#line 69 "analysis.m"
    if (analysis__succeeded)
#line 69 "analysis.m"
      *analysis__HeadVar__1_1 = (MR_Integer) 0;
#line 69 "analysis.m"
    else
#line 69 "analysis.m"
      *analysis__HeadVar__1_1 = (MR_Integer) 0;
#line 69 "analysis.m"
  }
#line 69 "analysis.m"
}

#line 69 "analysis.m"
MR_bool MR_CALL 
analysis____Unify____analysis_type_0_0(
#line 69 "analysis.m"
  MR_Word analysis__HeadVar__1_1,
#line 69 "analysis.m"
  MR_Word analysis__HeadVar__2_2)
#line 69 "analysis.m"
{
#line 69 "analysis.m"
  {
#line 69 "analysis.m"
    MR_bool analysis__succeeded;
#line 69 "analysis.m"
    MR_Integer analysis__CastX_7 = (MR_Integer) analysis__HeadVar__1_1;
#line 69 "analysis.m"
    MR_Integer analysis__CastY_8 = (MR_Integer) analysis__HeadVar__2_2;

#line 69 "analysis.m"
    analysis__succeeded = (analysis__CastX_7 == analysis__CastY_8);
#line 69 "analysis.m"
    if (analysis__succeeded)
#line 69 "analysis.m"
      {
#line 69 "analysis.m"
      }
#line 69 "analysis.m"
    else
#line 69 "analysis.m"
      {
#line 69 "analysis.m"
      }
#line 69 "analysis.m"
    analysis__succeeded = MR_TRUE;
#line 69 "analysis.m"
    return analysis__succeeded;
#line 69 "analysis.m"
  }
#line 69 "analysis.m"
}

#line 158 "analysis.m"
void MR_CALL 
analysis____Compare____analysis_status_0_0(
#line 158 "analysis.m"
  MR_Word * analysis__HeadVar__1_1,
#line 158 "analysis.m"
  MR_Word analysis__HeadVar__2_2,
#line 158 "analysis.m"
  MR_Word analysis__HeadVar__3_3)
#line 158 "analysis.m"
{
#line 158 "analysis.m"
  {
#line 158 "analysis.m"
    MR_bool analysis__succeeded;
#line 158 "analysis.m"
    MR_Integer analysis__Cast_HeadVar1_4 = (MR_Integer) analysis__HeadVar__2_2;
#line 158 "analysis.m"
    MR_Integer analysis__Cast_HeadVar2_5 = (MR_Integer) analysis__HeadVar__3_3;

#line 158 "analysis.m"
    {
#line 158 "analysis.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(analysis__HeadVar__1_1, analysis__Cast_HeadVar1_4, analysis__Cast_HeadVar2_5);
    }
#line 158 "analysis.m"
  }
#line 158 "analysis.m"
}

#line 158 "analysis.m"
MR_bool MR_CALL 
analysis____Unify____analysis_status_0_0(
#line 158 "analysis.m"
  MR_Word analysis__HeadVar__2_1,
#line 158 "analysis.m"
  MR_Word analysis__HeadVar__2_2)
#line 158 "analysis.m"
{
#line 7065 "analysis.c"
  {
#line 7067 "analysis.c"
    MR_bool analysis__succeeded = (analysis__HeadVar__2_1 == analysis__HeadVar__2_2);

#line 7070 "analysis.c"
    return analysis__succeeded;
#line 7072 "analysis.c"
  }
#line 158 "analysis.m"
}

#line 125 "analysis.m"
void MR_CALL 
analysis____Compare____analysis_result_2_0(
#line 125 "analysis.m"
  MR_Word analysis__TypeInfo_for_Call_14,
#line 125 "analysis.m"
  MR_Word analysis__TypeInfo_for_Answer_15,
#line 125 "analysis.m"
  MR_Word * analysis__HeadVar__1_1,
#line 125 "analysis.m"
  MR_Word analysis__HeadVar__2_2,
#line 125 "analysis.m"
  MR_Word analysis__HeadVar__3_3)
#line 125 "analysis.m"
{
#line 125 "analysis.m"
  {
#line 125 "analysis.m"
    MR_bool analysis__succeeded;
#line 125 "analysis.m"
    MR_Integer analysis__CastX_12 = (MR_Integer) analysis__HeadVar__2_2;
#line 125 "analysis.m"
    MR_Integer analysis__CastY_13 = (MR_Integer) analysis__HeadVar__3_3;

#line 125 "analysis.m"
    analysis__succeeded = (analysis__CastX_12 == analysis__CastY_13);
#line 125 "analysis.m"
    if (analysis__succeeded)
#line 7105 "analysis.c"
      *analysis__HeadVar__1_1 = (MR_Integer) 0;
#line 125 "analysis.m"
    else
#line 125 "analysis.m"
      {
#line 125 "analysis.m"
        MR_Box analysis__V_4_4 = (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 0));
#line 125 "analysis.m"
        MR_Box analysis__V_5_5 = (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 1));
#line 125 "analysis.m"
        MR_Word analysis__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 2)));
#line 125 "analysis.m"
        MR_Box analysis__V_7_7 = (MR_hl_field(MR_mktag(0), analysis__HeadVar__3_3, (MR_Integer) 0));
#line 125 "analysis.m"
        MR_Box analysis__V_8_8 = (MR_hl_field(MR_mktag(0), analysis__HeadVar__3_3, (MR_Integer) 1));
#line 125 "analysis.m"
        MR_Word analysis__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__3_3, (MR_Integer) 2)));
#line 125 "analysis.m"
        MR_Word analysis__V_10_10;

#line 125 "analysis.m"
        {
#line 125 "analysis.m"
          mercury__builtin__compare_3_p_0(analysis__TypeInfo_for_Call_14, &analysis__V_10_10, analysis__V_4_4, analysis__V_7_7);
        }
#line 7131 "analysis.c"
        analysis__succeeded = (analysis__V_10_10 == (MR_Integer) 0);
#line 125 "analysis.m"
        analysis__succeeded = !(analysis__succeeded);
#line 125 "analysis.m"
        if (analysis__succeeded)
#line 125 "analysis.m"
          *analysis__HeadVar__1_1 = analysis__V_10_10;
#line 125 "analysis.m"
        else
#line 125 "analysis.m"
          {
#line 125 "analysis.m"
            MR_Word analysis__V_11_11;

#line 125 "analysis.m"
            {
#line 125 "analysis.m"
              mercury__builtin__compare_3_p_0(analysis__TypeInfo_for_Answer_15, &analysis__V_11_11, analysis__V_5_5, analysis__V_8_8);
            }
#line 7151 "analysis.c"
            analysis__succeeded = (analysis__V_11_11 == (MR_Integer) 0);
#line 125 "analysis.m"
            analysis__succeeded = !(analysis__succeeded);
#line 125 "analysis.m"
            if (analysis__succeeded)
#line 125 "analysis.m"
              *analysis__HeadVar__1_1 = analysis__V_11_11;
#line 125 "analysis.m"
            else
#line 125 "analysis.m"
              {
#line 125 "analysis.m"
                MR_Integer analysis__V_17_17 = (MR_Integer) analysis__V_6_6;
#line 125 "analysis.m"
                MR_Integer analysis__V_18_18 = (MR_Integer) analysis__V_9_9;

#line 125 "analysis.m"
                {
#line 125 "analysis.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(analysis__HeadVar__1_1, analysis__V_17_17, analysis__V_18_18);
                }
#line 125 "analysis.m"
              }
#line 125 "analysis.m"
          }
#line 125 "analysis.m"
      }
#line 125 "analysis.m"
  }
#line 125 "analysis.m"
}

#line 125 "analysis.m"
MR_bool MR_CALL 
analysis____Unify____analysis_result_2_0(
#line 125 "analysis.m"
  MR_Word analysis__TypeInfo_for_Call_11,
#line 125 "analysis.m"
  MR_Word analysis__TypeInfo_for_Answer_12,
#line 125 "analysis.m"
  MR_Word analysis__HeadVar__1_1,
#line 125 "analysis.m"
  MR_Word analysis__HeadVar__2_2)
#line 125 "analysis.m"
{
#line 125 "analysis.m"
  {
#line 125 "analysis.m"
    MR_bool analysis__succeeded;
#line 125 "analysis.m"
    MR_Integer analysis__CastX_9 = (MR_Integer) analysis__HeadVar__1_1;
#line 125 "analysis.m"
    MR_Integer analysis__CastY_10 = (MR_Integer) analysis__HeadVar__2_2;

#line 125 "analysis.m"
    analysis__succeeded = (analysis__CastX_9 == analysis__CastY_10);
#line 125 "analysis.m"
    if (analysis__succeeded)
#line 125 "analysis.m"
      analysis__succeeded = MR_TRUE;
#line 125 "analysis.m"
    else
#line 125 "analysis.m"
      {
#line 125 "analysis.m"
        MR_Box analysis__V_3_3 = (MR_hl_field(MR_mktag(0), analysis__HeadVar__1_1, (MR_Integer) 0));
#line 125 "analysis.m"
        MR_Box analysis__V_4_4 = (MR_hl_field(MR_mktag(0), analysis__HeadVar__1_1, (MR_Integer) 1));
#line 125 "analysis.m"
        MR_Word analysis__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__1_1, (MR_Integer) 2)));
#line 125 "analysis.m"
        MR_Box analysis__V_6_6 = (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 0));
#line 125 "analysis.m"
        MR_Box analysis__V_7_7 = (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 1));
#line 125 "analysis.m"
        MR_Word analysis__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 2)));

#line 7229 "analysis.c"
        {
#line 7231 "analysis.c"
          analysis__succeeded = mercury__builtin__unify_2_p_0(analysis__TypeInfo_for_Call_11, analysis__V_3_3, analysis__V_6_6);
        }
#line 125 "analysis.m"
        if (analysis__succeeded)
#line 125 "analysis.m"
          {
#line 7238 "analysis.c"
            {
#line 7240 "analysis.c"
              analysis__succeeded = mercury__builtin__unify_2_p_0(analysis__TypeInfo_for_Answer_12, analysis__V_4_4, analysis__V_7_7);
            }
#line 125 "analysis.m"
            if (analysis__succeeded)
#line 7245 "analysis.c"
              analysis__succeeded = (analysis__V_5_5 == analysis__V_8_8);
#line 125 "analysis.m"
          }
#line 125 "analysis.m"
      }
#line 125 "analysis.m"
    return analysis__succeeded;
#line 125 "analysis.m"
  }
#line 125 "analysis.m"
}

#line 405 "analysis.m"
void MR_CALL 
analysis____Compare____analysis_request_0_0(
#line 405 "analysis.m"
  MR_Word * analysis__HeadVar__1_1,
#line 405 "analysis.m"
  MR_Word analysis__HeadVar__2_2,
#line 405 "analysis.m"
  MR_Word analysis__HeadVar__3_3)
#line 405 "analysis.m"
{
#line 405 "analysis.m"
  {
#line 405 "analysis.m"
    MR_bool analysis__succeeded;
#line 405 "analysis.m"
    MR_Integer analysis__CastX_9 = (MR_Integer) analysis__HeadVar__2_2;
#line 405 "analysis.m"
    MR_Integer analysis__CastY_10 = (MR_Integer) analysis__HeadVar__3_3;

#line 405 "analysis.m"
    analysis__succeeded = (analysis__CastX_9 == analysis__CastY_10);
#line 405 "analysis.m"
    if (analysis__succeeded)
#line 405 "analysis.m"
      *analysis__HeadVar__1_1 = (MR_Integer) 0;
#line 405 "analysis.m"
    else
#line 405 "analysis.m"
      {
#line 405 "analysis.m"
        MR_Word analysis__TypeClassInfo_for_call_pattern_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 0)));
#line 405 "analysis.m"
        MR_Word analysis__TypeClassInfo_for_call_pattern_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__3_3, (MR_Integer) 0)));
#line 405 "analysis.m"
        MR_Box analysis__V_4_4 = (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 1));
#line 405 "analysis.m"
        MR_Word analysis__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 2)));
#line 405 "analysis.m"
        MR_Box analysis__V_6_6 = (MR_hl_field(MR_mktag(0), analysis__HeadVar__3_3, (MR_Integer) 1));
#line 405 "analysis.m"
        MR_Word analysis__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__3_3, (MR_Integer) 2)));
#line 405 "analysis.m"
        MR_Word analysis__V_8_8;
#line 405 "analysis.m"
        MR_Word analysis__TypeInfo_14_14;
#line 405 "analysis.m"
        MR_Word analysis__TypeInfo_15_15;

#line 405 "analysis.m"
        {
#line 405 "analysis.m"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_call_pattern_11, (MR_Integer) 4, &analysis__TypeInfo_14_14);
        }
#line 405 "analysis.m"
        {
#line 405 "analysis.m"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_call_pattern_12, (MR_Integer) 4, &analysis__TypeInfo_15_15);
        }
#line 405 "analysis.m"
        {
#line 405 "analysis.m"
          mercury__private_builtin__typed_compare_3_p_0(analysis__TypeInfo_14_14, analysis__TypeInfo_15_15, &analysis__V_8_8, analysis__V_4_4, analysis__V_6_6);
        }
#line 405 "analysis.m"
        analysis__succeeded = (analysis__V_8_8 == (MR_Integer) 0);
#line 405 "analysis.m"
        analysis__succeeded = !(analysis__succeeded);
#line 405 "analysis.m"
        if (analysis__succeeded)
#line 405 "analysis.m"
          *analysis__HeadVar__1_1 = analysis__V_8_8;
#line 405 "analysis.m"
        else
#line 405 "analysis.m"
          {
#line 405 "analysis.m"
            mdbcomp__sym_name____Compare____sym_name_0_0(analysis__HeadVar__1_1, analysis__V_5_5, analysis__V_7_7);
          }
#line 405 "analysis.m"
      }
#line 405 "analysis.m"
  }
#line 405 "analysis.m"
}

#line 405 "analysis.m"
MR_bool MR_CALL 
analysis____Unify____analysis_request_0_0(
#line 405 "analysis.m"
  MR_Word analysis__HeadVar__1_1,
#line 405 "analysis.m"
  MR_Word analysis__HeadVar__2_2)
#line 405 "analysis.m"
{
#line 405 "analysis.m"
  {
#line 405 "analysis.m"
    MR_bool analysis__succeeded;
#line 405 "analysis.m"
    MR_Integer analysis__CastX_7 = (MR_Integer) analysis__HeadVar__1_1;
#line 405 "analysis.m"
    MR_Integer analysis__CastY_8 = (MR_Integer) analysis__HeadVar__2_2;

#line 405 "analysis.m"
    analysis__succeeded = (analysis__CastX_7 == analysis__CastY_8);
#line 405 "analysis.m"
    if (analysis__succeeded)
#line 405 "analysis.m"
      analysis__succeeded = MR_TRUE;
#line 405 "analysis.m"
    else
#line 405 "analysis.m"
      {
#line 405 "analysis.m"
        MR_Word analysis__TypeClassInfo_for_call_pattern_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__1_1, (MR_Integer) 0)));
#line 405 "analysis.m"
        MR_Word analysis__TypeClassInfo_for_call_pattern_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 0)));
#line 405 "analysis.m"
        MR_Word analysis__TypeInfo_12_12;
#line 405 "analysis.m"
        MR_Word analysis__TypeInfo_13_13;
#line 405 "analysis.m"
        MR_Box analysis__V_3_3 = (MR_hl_field(MR_mktag(0), analysis__HeadVar__1_1, (MR_Integer) 1));
#line 405 "analysis.m"
        MR_Word analysis__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__1_1, (MR_Integer) 2)));
#line 405 "analysis.m"
        MR_Box analysis__V_5_5 = (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 1));
#line 405 "analysis.m"
        MR_Word analysis__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 2)));

#line 405 "analysis.m"
        {
#line 405 "analysis.m"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_call_pattern_9, (MR_Integer) 4, &analysis__TypeInfo_12_12);
        }
#line 405 "analysis.m"
        {
#line 405 "analysis.m"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_call_pattern_10, (MR_Integer) 4, &analysis__TypeInfo_13_13);
        }
#line 405 "analysis.m"
        {
#line 405 "analysis.m"
          analysis__succeeded = mercury__private_builtin__typed_unify_2_p_0(analysis__TypeInfo_12_12, analysis__TypeInfo_13_13, analysis__V_3_3, analysis__V_5_5);
        }
#line 405 "analysis.m"
        if (analysis__succeeded)
#line 405 "analysis.m"
          {
#line 405 "analysis.m"
            analysis__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(analysis__V_4_4, analysis__V_6_6);
          }
#line 405 "analysis.m"
      }
#line 405 "analysis.m"
    return analysis__succeeded;
#line 405 "analysis.m"
  }
#line 405 "analysis.m"
}

#line 67 "analysis.m"
void MR_CALL 
analysis____Compare____analysis_name_0_0(
#line 67 "analysis.m"
  MR_Word * analysis__HeadVar__1_1,
#line 67 "analysis.m"
  MR_String analysis__HeadVar__2_2,
#line 67 "analysis.m"
  MR_String analysis__HeadVar__3_3)
#line 67 "analysis.m"
{
#line 67 "analysis.m"
  {
#line 67 "analysis.m"
    MR_bool analysis__succeeded;
#line 67 "analysis.m"
    MR_String analysis__Cast_HeadVar1_4 = analysis__HeadVar__2_2;
#line 67 "analysis.m"
    MR_String analysis__Cast_HeadVar2_5 = analysis__HeadVar__3_3;

#line 67 "analysis.m"
    {
#line 67 "analysis.m"
      mercury__private_builtin__builtin_compare_string_3_p_0(analysis__HeadVar__1_1, analysis__Cast_HeadVar1_4, analysis__Cast_HeadVar2_5);
    }
#line 67 "analysis.m"
  }
#line 67 "analysis.m"
}

#line 67 "analysis.m"
MR_bool MR_CALL 
analysis____Unify____analysis_name_0_0(
#line 67 "analysis.m"
  MR_String analysis__HeadVar__1_1,
#line 67 "analysis.m"
  MR_String analysis__HeadVar__2_2)
#line 67 "analysis.m"
{
#line 67 "analysis.m"
  {
#line 67 "analysis.m"
    MR_bool analysis__succeeded;
#line 67 "analysis.m"
    MR_String analysis__Cast_HeadVar1_3 = analysis__HeadVar__1_1;
#line 67 "analysis.m"
    MR_String analysis__Cast_HeadVar2_4 = analysis__HeadVar__2_2;

#line 67 "analysis.m"
    analysis__succeeded = (strcmp(analysis__Cast_HeadVar1_3, analysis__Cast_HeadVar2_4) == 0);
#line 67 "analysis.m"
    return analysis__succeeded;
#line 67 "analysis.m"
  }
#line 67 "analysis.m"
}

#line 424 "analysis.m"
void MR_CALL 
analysis____Compare____analysis_map_1_0(
#line 424 "analysis.m"
  MR_Word analysis__TypeInfo_for_T_6,
#line 424 "analysis.m"
  MR_Word * analysis__HeadVar__1_1,
#line 424 "analysis.m"
  MR_Word analysis__HeadVar__2_2,
#line 424 "analysis.m"
  MR_Word analysis__HeadVar__3_3)
#line 424 "analysis.m"
{
#line 424 "analysis.m"
  {
#line 424 "analysis.m"
    MR_bool analysis__succeeded;
#line 424 "analysis.m"
    MR_Word analysis__TypeInfo_11_11;
#line 424 "analysis.m"
    MR_Word analysis__TypeCtorInfo_12_12 = (MR_Word) &mercury__tree234__tree234__type_ctor_info_tree234_2;
#line 424 "analysis.m"
    MR_Word analysis__TypeInfo_13_13;
#line 424 "analysis.m"
    MR_Word analysis__TypeInfo_14_14;
#line 424 "analysis.m"
    MR_Word analysis__Cast_HeadVar1_4 = analysis__HeadVar__2_2;
#line 424 "analysis.m"
    MR_Word analysis__Cast_HeadVar2_5 = analysis__HeadVar__3_3;

#line 7507 "analysis.c"
    {
#line 7509 "analysis.c"
      analysis__TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7511 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_11_11, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
#line 7513 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_11_11, 1) = ((MR_Box) (analysis__TypeInfo_for_T_6));
#line 7515 "analysis.c"
    }
#line 7517 "analysis.c"
    {
#line 7519 "analysis.c"
      analysis__TypeInfo_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 7521 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_13_13, 0) = ((MR_Box) (analysis__TypeCtorInfo_12_12));
#line 7523 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_13_13, 1) = ((MR_Box) (&analysis__analysis__type_ctor_info_func_id_0));
#line 7525 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_13_13, 2) = ((MR_Box) (analysis__TypeInfo_11_11));
#line 7527 "analysis.c"
    }
#line 7529 "analysis.c"
    {
#line 7531 "analysis.c"
      analysis__TypeInfo_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 7533 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_14_14, 0) = ((MR_Box) (analysis__TypeCtorInfo_12_12));
#line 7535 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_14_14, 1) = ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0));
#line 7537 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_14_14, 2) = ((MR_Box) (analysis__TypeInfo_13_13));
#line 7539 "analysis.c"
    }
#line 424 "analysis.m"
    {
#line 424 "analysis.m"
      mercury__tree234____Compare____tree234_2_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, analysis__TypeInfo_14_14, analysis__HeadVar__1_1, analysis__Cast_HeadVar1_4, analysis__Cast_HeadVar2_5);
    }
#line 424 "analysis.m"
  }
#line 424 "analysis.m"
}

#line 424 "analysis.m"
MR_bool MR_CALL 
analysis____Unify____analysis_map_1_0(
#line 424 "analysis.m"
  MR_Word analysis__TypeInfo_for_T_5,
#line 424 "analysis.m"
  MR_Word analysis__HeadVar__1_1,
#line 424 "analysis.m"
  MR_Word analysis__HeadVar__2_2)
#line 424 "analysis.m"
{
#line 424 "analysis.m"
  {
#line 424 "analysis.m"
    MR_bool analysis__succeeded;
#line 424 "analysis.m"
    MR_Word analysis__TypeInfo_10_10;
#line 424 "analysis.m"
    MR_Word analysis__TypeCtorInfo_11_11 = (MR_Word) &mercury__tree234__tree234__type_ctor_info_tree234_2;
#line 424 "analysis.m"
    MR_Word analysis__TypeInfo_12_12;
#line 424 "analysis.m"
    MR_Word analysis__TypeInfo_13_13;
#line 424 "analysis.m"
    MR_Word analysis__Cast_HeadVar1_3 = analysis__HeadVar__1_1;
#line 424 "analysis.m"
    MR_Word analysis__Cast_HeadVar2_4 = analysis__HeadVar__2_2;

#line 7579 "analysis.c"
    {
#line 7581 "analysis.c"
      analysis__TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7583 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_10_10, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
#line 7585 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_10_10, 1) = ((MR_Box) (analysis__TypeInfo_for_T_5));
#line 7587 "analysis.c"
    }
#line 7589 "analysis.c"
    {
#line 7591 "analysis.c"
      analysis__TypeInfo_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 7593 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_12_12, 0) = ((MR_Box) (analysis__TypeCtorInfo_11_11));
#line 7595 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_12_12, 1) = ((MR_Box) (&analysis__analysis__type_ctor_info_func_id_0));
#line 7597 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_12_12, 2) = ((MR_Box) (analysis__TypeInfo_10_10));
#line 7599 "analysis.c"
    }
#line 7601 "analysis.c"
    {
#line 7603 "analysis.c"
      analysis__TypeInfo_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 7605 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_13_13, 0) = ((MR_Box) (analysis__TypeCtorInfo_11_11));
#line 7607 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_13_13, 1) = ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0));
#line 7609 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_13_13, 2) = ((MR_Box) (analysis__TypeInfo_12_12));
#line 7611 "analysis.c"
    }
#line 424 "analysis.m"
    {
#line 424 "analysis.m"
      analysis__succeeded = mercury__tree234____Unify____tree234_2_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, analysis__TypeInfo_13_13, analysis__Cast_HeadVar1_3, analysis__Cast_HeadVar2_4);
    }
#line 424 "analysis.m"
    return analysis__succeeded;
#line 424 "analysis.m"
  }
#line 424 "analysis.m"
}

#line 330 "analysis.m"
void MR_CALL 
analysis____Compare____analysis_info_0_0(
#line 330 "analysis.m"
  MR_Word * analysis__HeadVar__1_1,
#line 330 "analysis.m"
  MR_Word analysis__HeadVar__2_2,
#line 330 "analysis.m"
  MR_Word analysis__HeadVar__3_3)
#line 330 "analysis.m"
{
#line 330 "analysis.m"
  {
#line 330 "analysis.m"
    MR_bool analysis__succeeded;
#line 330 "analysis.m"
    MR_Integer analysis__CastX_33 = (MR_Integer) analysis__HeadVar__2_2;
#line 330 "analysis.m"
    MR_Integer analysis__CastY_34 = (MR_Integer) analysis__HeadVar__3_3;

#line 330 "analysis.m"
    analysis__succeeded = (analysis__CastX_33 == analysis__CastY_34);
#line 330 "analysis.m"
    if (analysis__succeeded)
#line 330 "analysis.m"
      *analysis__HeadVar__1_1 = (MR_Integer) 0;
#line 330 "analysis.m"
    else
#line 330 "analysis.m"
      {
#line 330 "analysis.m"
        MR_Word analysis__TypeClassInfo_for_compiler_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 0)));
#line 330 "analysis.m"
        MR_Word analysis__TypeClassInfo_for_compiler_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__3_3, (MR_Integer) 0)));
#line 330 "analysis.m"
        MR_Box analysis__V_4_4 = (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 1));
#line 330 "analysis.m"
        MR_Word analysis__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 2)));
#line 330 "analysis.m"
        MR_Word analysis__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 3)));
#line 330 "analysis.m"
        MR_Word analysis__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 4)));
#line 330 "analysis.m"
        MR_Word analysis__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 5)));
#line 330 "analysis.m"
        MR_Word analysis__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 6)));
#line 330 "analysis.m"
        MR_Word analysis__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 7)));
#line 330 "analysis.m"
        MR_Word analysis__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 8)));
#line 330 "analysis.m"
        MR_Word analysis__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 9)));
#line 330 "analysis.m"
        MR_Word analysis__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 10)));
#line 330 "analysis.m"
        MR_Box analysis__V_14_14 = (MR_hl_field(MR_mktag(0), analysis__HeadVar__3_3, (MR_Integer) 1));
#line 330 "analysis.m"
        MR_Word analysis__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__3_3, (MR_Integer) 2)));
#line 330 "analysis.m"
        MR_Word analysis__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__3_3, (MR_Integer) 3)));
#line 330 "analysis.m"
        MR_Word analysis__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__3_3, (MR_Integer) 4)));
#line 330 "analysis.m"
        MR_Word analysis__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__3_3, (MR_Integer) 5)));
#line 330 "analysis.m"
        MR_Word analysis__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__3_3, (MR_Integer) 6)));
#line 330 "analysis.m"
        MR_Word analysis__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__3_3, (MR_Integer) 7)));
#line 330 "analysis.m"
        MR_Word analysis__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__3_3, (MR_Integer) 8)));
#line 330 "analysis.m"
        MR_Word analysis__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__3_3, (MR_Integer) 9)));
#line 330 "analysis.m"
        MR_Word analysis__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__3_3, (MR_Integer) 10)));
#line 330 "analysis.m"
        MR_Word analysis__V_24_24;
#line 330 "analysis.m"
        MR_Word analysis__TypeInfo_38_38;
#line 330 "analysis.m"
        MR_Word analysis__TypeInfo_39_39;

#line 330 "analysis.m"
        {
#line 330 "analysis.m"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_compiler_35, (MR_Integer) 1, &analysis__TypeInfo_38_38);
        }
#line 330 "analysis.m"
        {
#line 330 "analysis.m"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_compiler_36, (MR_Integer) 1, &analysis__TypeInfo_39_39);
        }
#line 330 "analysis.m"
        {
#line 330 "analysis.m"
          mercury__private_builtin__typed_compare_3_p_0(analysis__TypeInfo_38_38, analysis__TypeInfo_39_39, &analysis__V_24_24, analysis__V_4_4, analysis__V_14_14);
        }
#line 330 "analysis.m"
        analysis__succeeded = (analysis__V_24_24 == (MR_Integer) 0);
#line 330 "analysis.m"
        analysis__succeeded = !(analysis__succeeded);
#line 330 "analysis.m"
        if (analysis__succeeded)
#line 330 "analysis.m"
          *analysis__HeadVar__1_1 = analysis__V_24_24;
#line 330 "analysis.m"
        else
#line 330 "analysis.m"
          {
#line 330 "analysis.m"
            MR_Word analysis__V_25_25;

#line 330 "analysis.m"
            {
#line 330 "analysis.m"
              mdbcomp__sym_name____Compare____sym_name_0_0(&analysis__V_25_25, analysis__V_5_5, analysis__V_15_15);
            }
#line 330 "analysis.m"
            analysis__succeeded = (analysis__V_25_25 == (MR_Integer) 0);
#line 330 "analysis.m"
            analysis__succeeded = !(analysis__succeeded);
#line 330 "analysis.m"
            if (analysis__succeeded)
#line 330 "analysis.m"
              *analysis__HeadVar__1_1 = analysis__V_25_25;
#line 330 "analysis.m"
            else
#line 330 "analysis.m"
              {
#line 330 "analysis.m"
                MR_Word analysis__V_26_26;
#line 330 "analysis.m"
                MR_Integer analysis__V_49_49 = (MR_Integer) analysis__V_6_6;
#line 330 "analysis.m"
                MR_Integer analysis__V_50_50 = (MR_Integer) analysis__V_16_16;

#line 330 "analysis.m"
                {
#line 330 "analysis.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(&analysis__V_26_26, analysis__V_49_49, analysis__V_50_50);
                }
#line 330 "analysis.m"
                analysis__succeeded = (analysis__V_26_26 == (MR_Integer) 0);
#line 330 "analysis.m"
                analysis__succeeded = !(analysis__succeeded);
#line 330 "analysis.m"
                if (analysis__succeeded)
#line 330 "analysis.m"
                  *analysis__HeadVar__1_1 = analysis__V_26_26;
#line 330 "analysis.m"
                else
#line 330 "analysis.m"
                  {
#line 330 "analysis.m"
                    MR_Word analysis__V_27_27;

#line 330 "analysis.m"
                    {
#line 330 "analysis.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &analysis_scalar_common_1[3], &analysis__V_27_27, ((MR_Box) (analysis__V_7_7)), ((MR_Box) (analysis__V_17_17)));
                    }
#line 330 "analysis.m"
                    analysis__succeeded = (analysis__V_27_27 == (MR_Integer) 0);
#line 330 "analysis.m"
                    analysis__succeeded = !(analysis__succeeded);
#line 330 "analysis.m"
                    if (analysis__succeeded)
#line 330 "analysis.m"
                      *analysis__HeadVar__1_1 = analysis__V_27_27;
#line 330 "analysis.m"
                    else
#line 330 "analysis.m"
                      {
#line 330 "analysis.m"
                        MR_Word analysis__V_28_28;

#line 330 "analysis.m"
                        {
#line 330 "analysis.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &analysis_scalar_common_2[6], &analysis__V_28_28, ((MR_Box) (analysis__V_8_8)), ((MR_Box) (analysis__V_18_18)));
                        }
#line 330 "analysis.m"
                        analysis__succeeded = (analysis__V_28_28 == (MR_Integer) 0);
#line 330 "analysis.m"
                        analysis__succeeded = !(analysis__succeeded);
#line 330 "analysis.m"
                        if (analysis__succeeded)
#line 330 "analysis.m"
                          *analysis__HeadVar__1_1 = analysis__V_28_28;
#line 330 "analysis.m"
                        else
#line 330 "analysis.m"
                          {
#line 330 "analysis.m"
                            MR_Word analysis__V_29_29;

#line 330 "analysis.m"
                            {
#line 330 "analysis.m"
                              mercury__builtin__compare_3_p_0((MR_Word) &analysis_scalar_common_2[7], &analysis__V_29_29, ((MR_Box) (analysis__V_9_9)), ((MR_Box) (analysis__V_19_19)));
                            }
#line 330 "analysis.m"
                            analysis__succeeded = (analysis__V_29_29 == (MR_Integer) 0);
#line 330 "analysis.m"
                            analysis__succeeded = !(analysis__succeeded);
#line 330 "analysis.m"
                            if (analysis__succeeded)
#line 330 "analysis.m"
                              *analysis__HeadVar__1_1 = analysis__V_29_29;
#line 330 "analysis.m"
                            else
#line 330 "analysis.m"
                              {
#line 330 "analysis.m"
                                MR_Word analysis__V_30_30;

#line 330 "analysis.m"
                                {
#line 330 "analysis.m"
                                  mercury__builtin__compare_3_p_0((MR_Word) &analysis_scalar_common_2[8], &analysis__V_30_30, ((MR_Box) (analysis__V_10_10)), ((MR_Box) (analysis__V_20_20)));
                                }
#line 330 "analysis.m"
                                analysis__succeeded = (analysis__V_30_30 == (MR_Integer) 0);
#line 330 "analysis.m"
                                analysis__succeeded = !(analysis__succeeded);
#line 330 "analysis.m"
                                if (analysis__succeeded)
#line 330 "analysis.m"
                                  *analysis__HeadVar__1_1 = analysis__V_30_30;
#line 330 "analysis.m"
                                else
#line 330 "analysis.m"
                                  {
#line 330 "analysis.m"
                                    MR_Word analysis__V_31_31;

#line 330 "analysis.m"
                                    {
#line 330 "analysis.m"
                                      mercury__builtin__compare_3_p_0((MR_Word) &analysis_scalar_common_2[3], &analysis__V_31_31, ((MR_Box) (analysis__V_11_11)), ((MR_Box) (analysis__V_21_21)));
                                    }
#line 330 "analysis.m"
                                    analysis__succeeded = (analysis__V_31_31 == (MR_Integer) 0);
#line 330 "analysis.m"
                                    analysis__succeeded = !(analysis__succeeded);
#line 330 "analysis.m"
                                    if (analysis__succeeded)
#line 330 "analysis.m"
                                      *analysis__HeadVar__1_1 = analysis__V_31_31;
#line 330 "analysis.m"
                                    else
#line 330 "analysis.m"
                                      {
#line 330 "analysis.m"
                                        MR_Word analysis__V_32_32;

#line 330 "analysis.m"
                                        {
#line 330 "analysis.m"
                                          mercury__builtin__compare_3_p_0((MR_Word) &analysis_scalar_common_2[9], &analysis__V_32_32, ((MR_Box) (analysis__V_12_12)), ((MR_Box) (analysis__V_22_22)));
                                        }
#line 330 "analysis.m"
                                        analysis__succeeded = (analysis__V_32_32 == (MR_Integer) 0);
#line 330 "analysis.m"
                                        analysis__succeeded = !(analysis__succeeded);
#line 330 "analysis.m"
                                        if (analysis__succeeded)
#line 330 "analysis.m"
                                          *analysis__HeadVar__1_1 = analysis__V_32_32;
#line 330 "analysis.m"
                                        else
#line 330 "analysis.m"
                                          {
#line 330 "analysis.m"
                                            {
#line 330 "analysis.m"
                                              mercury__builtin__compare_3_p_0((MR_Word) &analysis_scalar_common_2[9], analysis__HeadVar__1_1, ((MR_Box) (analysis__V_13_13)), ((MR_Box) (analysis__V_23_23)));
                                            }
#line 330 "analysis.m"
                                          }
#line 330 "analysis.m"
                                      }
#line 330 "analysis.m"
                                  }
#line 330 "analysis.m"
                              }
#line 330 "analysis.m"
                          }
#line 330 "analysis.m"
                      }
#line 330 "analysis.m"
                  }
#line 330 "analysis.m"
              }
#line 330 "analysis.m"
          }
#line 330 "analysis.m"
      }
#line 330 "analysis.m"
  }
#line 330 "analysis.m"
}

#line 330 "analysis.m"
MR_bool MR_CALL 
analysis____Unify____analysis_info_0_0(
#line 330 "analysis.m"
  MR_Word analysis__HeadVar__1_1,
#line 330 "analysis.m"
  MR_Word analysis__HeadVar__2_2)
#line 330 "analysis.m"
{
#line 330 "analysis.m"
  {
#line 330 "analysis.m"
    MR_bool analysis__succeeded;
#line 330 "analysis.m"
    MR_Integer analysis__CastX_23 = (MR_Integer) analysis__HeadVar__1_1;
#line 330 "analysis.m"
    MR_Integer analysis__CastY_24 = (MR_Integer) analysis__HeadVar__2_2;

#line 330 "analysis.m"
    analysis__succeeded = (analysis__CastX_23 == analysis__CastY_24);
#line 330 "analysis.m"
    if (analysis__succeeded)
#line 330 "analysis.m"
      analysis__succeeded = MR_TRUE;
#line 330 "analysis.m"
    else
#line 330 "analysis.m"
      {
#line 330 "analysis.m"
        MR_Word analysis__TypeClassInfo_for_compiler_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__1_1, (MR_Integer) 0)));
#line 330 "analysis.m"
        MR_Word analysis__TypeClassInfo_for_compiler_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 0)));
#line 330 "analysis.m"
        MR_Word analysis__TypeInfo_28_28;
#line 330 "analysis.m"
        MR_Word analysis__TypeInfo_29_29;
#line 330 "analysis.m"
        MR_Word analysis__TypeInfo_31_31;
#line 330 "analysis.m"
        MR_Word analysis__TypeInfo_32_32;
#line 330 "analysis.m"
        MR_Word analysis__TypeInfo_33_33;
#line 330 "analysis.m"
        MR_Word analysis__TypeInfo_34_34;
#line 330 "analysis.m"
        MR_Word analysis__TypeInfo_35_35;
#line 330 "analysis.m"
        MR_Word analysis__TypeInfo_36_36;
#line 330 "analysis.m"
        MR_Word analysis__TypeInfo_37_37;
#line 330 "analysis.m"
        MR_Box analysis__V_3_3 = (MR_hl_field(MR_mktag(0), analysis__HeadVar__1_1, (MR_Integer) 1));
#line 330 "analysis.m"
        MR_Word analysis__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__1_1, (MR_Integer) 2)));
#line 330 "analysis.m"
        MR_Word analysis__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__1_1, (MR_Integer) 3)));
#line 330 "analysis.m"
        MR_Word analysis__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__1_1, (MR_Integer) 4)));
#line 330 "analysis.m"
        MR_Word analysis__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__1_1, (MR_Integer) 5)));
#line 330 "analysis.m"
        MR_Word analysis__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__1_1, (MR_Integer) 6)));
#line 330 "analysis.m"
        MR_Word analysis__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__1_1, (MR_Integer) 7)));
#line 330 "analysis.m"
        MR_Word analysis__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__1_1, (MR_Integer) 8)));
#line 330 "analysis.m"
        MR_Word analysis__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__1_1, (MR_Integer) 9)));
#line 330 "analysis.m"
        MR_Word analysis__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__1_1, (MR_Integer) 10)));
#line 330 "analysis.m"
        MR_Box analysis__V_13_13 = (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 1));
#line 330 "analysis.m"
        MR_Word analysis__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 2)));
#line 330 "analysis.m"
        MR_Word analysis__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 3)));
#line 330 "analysis.m"
        MR_Word analysis__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 4)));
#line 330 "analysis.m"
        MR_Word analysis__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 5)));
#line 330 "analysis.m"
        MR_Word analysis__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 6)));
#line 330 "analysis.m"
        MR_Word analysis__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 7)));
#line 330 "analysis.m"
        MR_Word analysis__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 8)));
#line 330 "analysis.m"
        MR_Word analysis__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 9)));
#line 330 "analysis.m"
        MR_Word analysis__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 10)));

#line 330 "analysis.m"
        {
#line 330 "analysis.m"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_compiler_25, (MR_Integer) 1, &analysis__TypeInfo_28_28);
        }
#line 330 "analysis.m"
        {
#line 330 "analysis.m"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_compiler_26, (MR_Integer) 1, &analysis__TypeInfo_29_29);
        }
#line 330 "analysis.m"
        {
#line 330 "analysis.m"
          analysis__succeeded = mercury__private_builtin__typed_unify_2_p_0(analysis__TypeInfo_28_28, analysis__TypeInfo_29_29, analysis__V_3_3, analysis__V_13_13);
        }
#line 330 "analysis.m"
        if (analysis__succeeded)
#line 330 "analysis.m"
          {
#line 330 "analysis.m"
            {
#line 330 "analysis.m"
              analysis__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(analysis__V_4_4, analysis__V_14_14);
            }
#line 330 "analysis.m"
            if (analysis__succeeded)
#line 330 "analysis.m"
              {
#line 330 "analysis.m"
                analysis__succeeded = (analysis__V_5_5 == analysis__V_15_15);
#line 330 "analysis.m"
                if (analysis__succeeded)
#line 330 "analysis.m"
                  {
#line 8052 "analysis.c"
                    analysis__TypeInfo_31_31 = (MR_Word) &analysis_scalar_common_1[3];
#line 330 "analysis.m"
                    {
#line 330 "analysis.m"
                      analysis__succeeded = mercury__builtin__unify_2_p_0(analysis__TypeInfo_31_31, ((MR_Box) (analysis__V_6_6)), ((MR_Box) (analysis__V_16_16)));
                    }
#line 330 "analysis.m"
                    if (analysis__succeeded)
#line 330 "analysis.m"
                      {
#line 8063 "analysis.c"
                        analysis__TypeInfo_32_32 = (MR_Word) &analysis_scalar_common_2[6];
#line 330 "analysis.m"
                        {
#line 330 "analysis.m"
                          analysis__succeeded = mercury__builtin__unify_2_p_0(analysis__TypeInfo_32_32, ((MR_Box) (analysis__V_7_7)), ((MR_Box) (analysis__V_17_17)));
                        }
#line 330 "analysis.m"
                        if (analysis__succeeded)
#line 330 "analysis.m"
                          {
#line 8074 "analysis.c"
                            analysis__TypeInfo_33_33 = (MR_Word) &analysis_scalar_common_2[7];
#line 330 "analysis.m"
                            {
#line 330 "analysis.m"
                              analysis__succeeded = mercury__builtin__unify_2_p_0(analysis__TypeInfo_33_33, ((MR_Box) (analysis__V_8_8)), ((MR_Box) (analysis__V_18_18)));
                            }
#line 330 "analysis.m"
                            if (analysis__succeeded)
#line 330 "analysis.m"
                              {
#line 8085 "analysis.c"
                                analysis__TypeInfo_34_34 = (MR_Word) &analysis_scalar_common_2[8];
#line 330 "analysis.m"
                                {
#line 330 "analysis.m"
                                  analysis__succeeded = mercury__builtin__unify_2_p_0(analysis__TypeInfo_34_34, ((MR_Box) (analysis__V_9_9)), ((MR_Box) (analysis__V_19_19)));
                                }
#line 330 "analysis.m"
                                if (analysis__succeeded)
#line 330 "analysis.m"
                                  {
#line 8096 "analysis.c"
                                    analysis__TypeInfo_35_35 = (MR_Word) &analysis_scalar_common_2[3];
#line 330 "analysis.m"
                                    {
#line 330 "analysis.m"
                                      analysis__succeeded = mercury__builtin__unify_2_p_0(analysis__TypeInfo_35_35, ((MR_Box) (analysis__V_10_10)), ((MR_Box) (analysis__V_20_20)));
                                    }
#line 330 "analysis.m"
                                    if (analysis__succeeded)
#line 330 "analysis.m"
                                      {
#line 8107 "analysis.c"
                                        analysis__TypeInfo_36_36 = (MR_Word) &analysis_scalar_common_2[9];
#line 330 "analysis.m"
                                        {
#line 330 "analysis.m"
                                          analysis__succeeded = mercury__builtin__unify_2_p_0(analysis__TypeInfo_36_36, ((MR_Box) (analysis__V_11_11)), ((MR_Box) (analysis__V_21_21)));
                                        }
#line 330 "analysis.m"
                                        if (analysis__succeeded)
#line 330 "analysis.m"
                                          {
#line 8118 "analysis.c"
                                            analysis__TypeInfo_37_37 = (MR_Word) &analysis_scalar_common_2[9];
#line 330 "analysis.m"
                                            {
#line 330 "analysis.m"
                                              analysis__succeeded = mercury__builtin__unify_2_p_0(analysis__TypeInfo_37_37, ((MR_Box) (analysis__V_12_12)), ((MR_Box) (analysis__V_22_22)));
                                            }
#line 330 "analysis.m"
                                          }
#line 330 "analysis.m"
                                      }
#line 330 "analysis.m"
                                  }
#line 330 "analysis.m"
                              }
#line 330 "analysis.m"
                          }
#line 330 "analysis.m"
                      }
#line 330 "analysis.m"
                  }
#line 330 "analysis.m"
              }
#line 330 "analysis.m"
          }
#line 330 "analysis.m"
      }
#line 330 "analysis.m"
    return analysis__succeeded;
#line 330 "analysis.m"
  }
#line 330 "analysis.m"
}

#line 140 "analysis.m"
MR_bool MR_CALL 
analysis__from_term_2_p_0(
#line 140 "analysis.m"
  MR_Word analysis__TypeClassInfo_for_to_term_3,
#line 140 "analysis.m"
  MR_Word analysis__HeadVar__1_1,
#line 140 "analysis.m"
  MR_Box * analysis__HeadVar__2_2)
#line 140 "analysis.m"
{
#line 140 "analysis.m"
  {
#line 140 "analysis.m"
    MR_bool analysis__succeeded;
#line 140 "analysis.m"
    MR_bool MR_CALL (* analysis__func_0)(MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), analysis__TypeClassInfo_for_to_term_3, (MR_Integer) 0)), (MR_Integer) 6)));

#line 140 "analysis.m"
    {
#line 140 "analysis.m"
      analysis__succeeded = analysis__func_0(((MR_Box) analysis__TypeClassInfo_for_to_term_3), ((MR_Box) (analysis__HeadVar__1_1)), analysis__HeadVar__2_2);
    }
#line 140 "analysis.m"
    return analysis__succeeded;
#line 140 "analysis.m"
  }
#line 140 "analysis.m"
}

#line 139 "analysis.m"
MR_Word MR_CALL 
analysis__to_term_1_f_0(
#line 139 "analysis.m"
  MR_Word analysis__TypeClassInfo_for_to_term_3,
#line 139 "analysis.m"
  MR_Box analysis__HeadVar__1_1)
#line 139 "analysis.m"
{
#line 139 "analysis.m"
  {
#line 139 "analysis.m"
    MR_bool analysis__succeeded;
#line 139 "analysis.m"
    MR_Word analysis__HeadVar__2_2;
#line 139 "analysis.m"
    MR_Box MR_CALL (* analysis__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), analysis__TypeClassInfo_for_to_term_3, (MR_Integer) 0)), (MR_Integer) 5)));
#line 139 "analysis.m"
    MR_Box analysis__conv1_HeadVar__2_2;

#line 139 "analysis.m"
    {
#line 139 "analysis.m"
      analysis__conv1_HeadVar__2_2 = analysis__func_0(((MR_Box) analysis__TypeClassInfo_for_to_term_3), analysis__HeadVar__1_1);
    }
#line 139 "analysis.m"
    analysis__HeadVar__2_2 = ((MR_Word) analysis__conv1_HeadVar__2_2);
#line 139 "analysis.m"
    return analysis__HeadVar__2_2;
#line 139 "analysis.m"
  }
#line 139 "analysis.m"
}

#line 135 "analysis.m"
MR_bool MR_CALL 
analysis__equivalent_3_p_0(
#line 135 "analysis.m"
  MR_Word analysis__TypeClassInfo_for_partial_order_4,
#line 135 "analysis.m"
  MR_Box analysis__HeadVar__1_1,
#line 135 "analysis.m"
  MR_Box analysis__HeadVar__2_2,
#line 135 "analysis.m"
  MR_Box analysis__HeadVar__3_3)
#line 135 "analysis.m"
{
#line 135 "analysis.m"
  {
#line 135 "analysis.m"
    MR_bool analysis__succeeded;
#line 135 "analysis.m"
    MR_bool MR_CALL (* analysis__func_0)(MR_Box, MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), analysis__TypeClassInfo_for_partial_order_4, (MR_Integer) 0)), (MR_Integer) 6)));

#line 135 "analysis.m"
    {
#line 135 "analysis.m"
      analysis__succeeded = analysis__func_0(((MR_Box) analysis__TypeClassInfo_for_partial_order_4), analysis__HeadVar__1_1, analysis__HeadVar__2_2, analysis__HeadVar__3_3);
    }
#line 135 "analysis.m"
    return analysis__succeeded;
#line 135 "analysis.m"
  }
#line 135 "analysis.m"
}

#line 134 "analysis.m"
MR_bool MR_CALL 
analysis__more_precise_than_3_p_0(
#line 134 "analysis.m"
  MR_Word analysis__TypeClassInfo_for_partial_order_4,
#line 134 "analysis.m"
  MR_Box analysis__HeadVar__1_1,
#line 134 "analysis.m"
  MR_Box analysis__HeadVar__2_2,
#line 134 "analysis.m"
  MR_Box analysis__HeadVar__3_3)
#line 134 "analysis.m"
{
#line 134 "analysis.m"
  {
#line 134 "analysis.m"
    MR_bool analysis__succeeded;
#line 134 "analysis.m"
    MR_bool MR_CALL (* analysis__func_0)(MR_Box, MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), analysis__TypeClassInfo_for_partial_order_4, (MR_Integer) 0)), (MR_Integer) 5)));

#line 134 "analysis.m"
    {
#line 134 "analysis.m"
      analysis__succeeded = analysis__func_0(((MR_Box) analysis__TypeClassInfo_for_partial_order_4), analysis__HeadVar__1_1, analysis__HeadVar__2_2, analysis__HeadVar__3_3);
    }
#line 134 "analysis.m"
    return analysis__succeeded;
#line 134 "analysis.m"
  }
#line 134 "analysis.m"
}

#line 102 "analysis.m"
void MR_CALL 
analysis__get_func_info_6_p_0(
#line 102 "analysis.m"
  MR_Word analysis__TypeClassInfo_for_analysis_7,
#line 102 "analysis.m"
  MR_Word analysis__HeadVar__1_1,
#line 102 "analysis.m"
  MR_Word analysis__HeadVar__2_2,
#line 102 "analysis.m"
  MR_Word analysis__HeadVar__3_3,
#line 102 "analysis.m"
  MR_Box * analysis__HeadVar__6_6)
#line 102 "analysis.m"
{
#line 102 "analysis.m"
  {
#line 102 "analysis.m"
    MR_bool analysis__succeeded;
#line 102 "analysis.m"
    void MR_CALL (* analysis__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), analysis__TypeClassInfo_for_analysis_7, (MR_Integer) 0)), (MR_Integer) 10)));

#line 102 "analysis.m"
    {
#line 102 "analysis.m"
      analysis__func_0(((MR_Box) analysis__TypeClassInfo_for_analysis_7), ((MR_Box) (analysis__HeadVar__1_1)), ((MR_Box) (analysis__HeadVar__2_2)), ((MR_Box) (analysis__HeadVar__3_3)), analysis__HeadVar__6_6);
    }
#line 102 "analysis.m"
  }
#line 102 "analysis.m"
}

#line 100 "analysis.m"
MR_Box MR_CALL 
analysis__top_2_f_0(
#line 100 "analysis.m"
  MR_Word analysis__TypeClassInfo_for_analysis_4,
#line 100 "analysis.m"
  MR_Box analysis__HeadVar__1_1)
#line 100 "analysis.m"
{
#line 100 "analysis.m"
  {
#line 100 "analysis.m"
    MR_bool analysis__succeeded;
#line 100 "analysis.m"
    MR_Box analysis__HeadVar__3_3;
#line 100 "analysis.m"
    MR_Box MR_CALL (* analysis__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), analysis__TypeClassInfo_for_analysis_4, (MR_Integer) 0)), (MR_Integer) 9)));

#line 100 "analysis.m"
    {
#line 100 "analysis.m"
      analysis__HeadVar__3_3 = analysis__func_0(((MR_Box) analysis__TypeClassInfo_for_analysis_4), analysis__HeadVar__1_1);
    }
#line 100 "analysis.m"
    return analysis__HeadVar__3_3;
#line 100 "analysis.m"
  }
#line 100 "analysis.m"
}

#line 99 "analysis.m"
MR_Box MR_CALL 
analysis__bottom_2_f_0(
#line 99 "analysis.m"
  MR_Word analysis__TypeClassInfo_for_analysis_4,
#line 99 "analysis.m"
  MR_Box analysis__HeadVar__1_1)
#line 99 "analysis.m"
{
#line 99 "analysis.m"
  {
#line 99 "analysis.m"
    MR_bool analysis__succeeded;
#line 99 "analysis.m"
    MR_Box analysis__HeadVar__3_3;
#line 99 "analysis.m"
    MR_Box MR_CALL (* analysis__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), analysis__TypeClassInfo_for_analysis_4, (MR_Integer) 0)), (MR_Integer) 8)));

#line 99 "analysis.m"
    {
#line 99 "analysis.m"
      analysis__HeadVar__3_3 = analysis__func_0(((MR_Box) analysis__TypeClassInfo_for_analysis_4), analysis__HeadVar__1_1);
    }
#line 99 "analysis.m"
    return analysis__HeadVar__3_3;
#line 99 "analysis.m"
  }
#line 99 "analysis.m"
}

#line 96 "analysis.m"
MR_Word MR_CALL 
analysis__preferred_fixpoint_type_2_f_0(
#line 96 "analysis.m"
  MR_Word analysis__TypeClassInfo_for_analysis_4)
#line 96 "analysis.m"
{
#line 96 "analysis.m"
  {
#line 96 "analysis.m"
    MR_bool analysis__succeeded;
#line 96 "analysis.m"
    MR_Word analysis__HeadVar__3_3;
#line 96 "analysis.m"
    MR_Box MR_CALL (* analysis__func_0)(MR_Box) = ((MR_Box MR_CALL (*)(MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), analysis__TypeClassInfo_for_analysis_4, (MR_Integer) 0)), (MR_Integer) 7)));
#line 96 "analysis.m"
    MR_Box analysis__conv1_HeadVar__3_3;

#line 96 "analysis.m"
    {
#line 96 "analysis.m"
      analysis__conv1_HeadVar__3_3 = analysis__func_0(((MR_Box) analysis__TypeClassInfo_for_analysis_4));
    }
#line 96 "analysis.m"
    analysis__HeadVar__3_3 = ((MR_Word) analysis__conv1_HeadVar__3_3);
#line 96 "analysis.m"
    return analysis__HeadVar__3_3;
#line 96 "analysis.m"
  }
#line 96 "analysis.m"
}

#line 93 "analysis.m"
MR_Integer MR_CALL 
analysis__analysis_version_number_2_f_0(
#line 93 "analysis.m"
  MR_Word analysis__TypeClassInfo_for_analysis_4)
#line 93 "analysis.m"
{
#line 93 "analysis.m"
  {
#line 93 "analysis.m"
    MR_bool analysis__succeeded;
#line 93 "analysis.m"
    MR_Integer analysis__HeadVar__3_3;
#line 93 "analysis.m"
    MR_Box MR_CALL (* analysis__func_0)(MR_Box) = ((MR_Box MR_CALL (*)(MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), analysis__TypeClassInfo_for_analysis_4, (MR_Integer) 0)), (MR_Integer) 6)));
#line 93 "analysis.m"
    MR_Box analysis__conv1_HeadVar__3_3;

#line 93 "analysis.m"
    {
#line 93 "analysis.m"
      analysis__conv1_HeadVar__3_3 = analysis__func_0(((MR_Box) analysis__TypeClassInfo_for_analysis_4));
    }
#line 93 "analysis.m"
    analysis__HeadVar__3_3 = ((MR_Integer) analysis__conv1_HeadVar__3_3);
#line 93 "analysis.m"
    return analysis__HeadVar__3_3;
#line 93 "analysis.m"
  }
#line 93 "analysis.m"
}

#line 86 "analysis.m"
MR_String MR_CALL 
analysis__analysis_name_2_f_0(
#line 86 "analysis.m"
  MR_Word analysis__TypeClassInfo_for_analysis_4)
#line 86 "analysis.m"
{
#line 86 "analysis.m"
  {
#line 86 "analysis.m"
    MR_bool analysis__succeeded;
#line 86 "analysis.m"
    MR_String analysis__HeadVar__3_3;
#line 86 "analysis.m"
    MR_Box MR_CALL (* analysis__func_0)(MR_Box) = ((MR_Box MR_CALL (*)(MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), analysis__TypeClassInfo_for_analysis_4, (MR_Integer) 0)), (MR_Integer) 5)));
#line 86 "analysis.m"
    MR_Box analysis__conv1_HeadVar__3_3;

#line 86 "analysis.m"
    {
#line 86 "analysis.m"
      analysis__conv1_HeadVar__3_3 = analysis__func_0(((MR_Box) analysis__TypeClassInfo_for_analysis_4));
    }
#line 86 "analysis.m"
    analysis__HeadVar__3_3 = ((MR_String) analysis__conv1_HeadVar__3_3);
#line 86 "analysis.m"
    return analysis__HeadVar__3_3;
#line 86 "analysis.m"
  }
#line 86 "analysis.m"
}

#line 63 "analysis.m"
void MR_CALL 
analysis__module_name_to_write_file_name_7_p_0(
#line 63 "analysis.m"
  MR_Word analysis__TypeClassInfo_for_compiler_8,
#line 63 "analysis.m"
  MR_Box analysis__HeadVar__1_1,
#line 63 "analysis.m"
  MR_Word analysis__HeadVar__2_2,
#line 63 "analysis.m"
  MR_Word analysis__HeadVar__3_3,
#line 63 "analysis.m"
  MR_String analysis__HeadVar__4_4,
#line 63 "analysis.m"
  MR_String * analysis__HeadVar__5_5)
#line 63 "analysis.m"
{
#line 63 "analysis.m"
  {
#line 63 "analysis.m"
    MR_bool analysis__succeeded;
#line 63 "analysis.m"
    void MR_CALL (* analysis__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), analysis__TypeClassInfo_for_compiler_8, (MR_Integer) 0)), (MR_Integer) 8)));
#line 63 "analysis.m"
    MR_Box analysis__conv2_HeadVar__5_5;
#line 63 "analysis.m"
    MR_Box analysis__conv1_HeadVar__7_7;

#line 63 "analysis.m"
    {
#line 63 "analysis.m"
      analysis__func_0(((MR_Box) analysis__TypeClassInfo_for_compiler_8), analysis__HeadVar__1_1, ((MR_Box) (analysis__HeadVar__2_2)), ((MR_Box) (analysis__HeadVar__3_3)), ((MR_Box) (analysis__HeadVar__4_4)), &analysis__conv2_HeadVar__5_5, ((MR_Box) ((MR_Integer) 0)), &analysis__conv1_HeadVar__7_7);
    }
#line 63 "analysis.m"
    *analysis__HeadVar__5_5 = ((MR_String) analysis__conv2_HeadVar__5_5);
#line 63 "analysis.m"
  }
#line 63 "analysis.m"
}

#line 56 "analysis.m"
void MR_CALL 
analysis__module_name_to_read_file_name_7_p_0(
#line 56 "analysis.m"
  MR_Word analysis__TypeClassInfo_for_compiler_8,
#line 56 "analysis.m"
  MR_Box analysis__HeadVar__1_1,
#line 56 "analysis.m"
  MR_Word analysis__HeadVar__2_2,
#line 56 "analysis.m"
  MR_Word analysis__HeadVar__3_3,
#line 56 "analysis.m"
  MR_String analysis__HeadVar__4_4,
#line 56 "analysis.m"
  MR_Word * analysis__HeadVar__5_5)
#line 56 "analysis.m"
{
#line 56 "analysis.m"
  {
#line 56 "analysis.m"
    MR_bool analysis__succeeded;
#line 56 "analysis.m"
    void MR_CALL (* analysis__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), analysis__TypeClassInfo_for_compiler_8, (MR_Integer) 0)), (MR_Integer) 7)));
#line 56 "analysis.m"
    MR_Box analysis__conv2_HeadVar__5_5;
#line 56 "analysis.m"
    MR_Box analysis__conv1_HeadVar__7_7;

#line 56 "analysis.m"
    {
#line 56 "analysis.m"
      analysis__func_0(((MR_Box) analysis__TypeClassInfo_for_compiler_8), analysis__HeadVar__1_1, ((MR_Box) (analysis__HeadVar__2_2)), ((MR_Box) (analysis__HeadVar__3_3)), ((MR_Box) (analysis__HeadVar__4_4)), &analysis__conv2_HeadVar__5_5, ((MR_Box) ((MR_Integer) 0)), &analysis__conv1_HeadVar__7_7);
    }
#line 56 "analysis.m"
    *analysis__HeadVar__5_5 = ((MR_Word) analysis__conv2_HeadVar__5_5);
#line 56 "analysis.m"
  }
#line 56 "analysis.m"
}

#line 51 "analysis.m"
MR_bool MR_CALL 
analysis__analyses_2_f_0(
#line 51 "analysis.m"
  MR_Word analysis__TypeClassInfo_for_compiler_4,
#line 51 "analysis.m"
  MR_Box analysis__HeadVar__1_1,
#line 51 "analysis.m"
  MR_String analysis__HeadVar__2_2,
#line 51 "analysis.m"
  MR_Word * analysis__HeadVar__3_3)
#line 51 "analysis.m"
{
#line 51 "analysis.m"
  {
#line 51 "analysis.m"
    MR_bool analysis__succeeded;
#line 51 "analysis.m"
    MR_bool MR_CALL (* analysis__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), analysis__TypeClassInfo_for_compiler_4, (MR_Integer) 0)), (MR_Integer) 6)));
#line 51 "analysis.m"
    MR_Box analysis__conv1_HeadVar__3_3;

#line 51 "analysis.m"
    {
#line 51 "analysis.m"
      analysis__succeeded = analysis__func_0(((MR_Box) analysis__TypeClassInfo_for_compiler_4), analysis__HeadVar__1_1, ((MR_Box) (analysis__HeadVar__2_2)), &analysis__conv1_HeadVar__3_3);
    }
#line 51 "analysis.m"
    if (analysis__succeeded)
#line 51 "analysis.m"
      {
#line 51 "analysis.m"
        *analysis__HeadVar__3_3 = ((MR_Word) analysis__conv1_HeadVar__3_3);
#line 51 "analysis.m"
        analysis__succeeded = MR_TRUE;
#line 51 "analysis.m"
      }
#line 51 "analysis.m"
    return analysis__succeeded;
#line 51 "analysis.m"
  }
#line 51 "analysis.m"
}

#line 47 "analysis.m"
MR_String MR_CALL 
analysis__compiler_name_1_f_0(
#line 47 "analysis.m"
  MR_Word analysis__TypeClassInfo_for_compiler_3,
#line 47 "analysis.m"
  MR_Box analysis__HeadVar__1_1)
#line 47 "analysis.m"
{
#line 47 "analysis.m"
  {
#line 47 "analysis.m"
    MR_bool analysis__succeeded;
#line 47 "analysis.m"
    MR_String analysis__HeadVar__2_2;
#line 47 "analysis.m"
    MR_Box MR_CALL (* analysis__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), analysis__TypeClassInfo_for_compiler_3, (MR_Integer) 0)), (MR_Integer) 5)));
#line 47 "analysis.m"
    MR_Box analysis__conv1_HeadVar__2_2;

#line 47 "analysis.m"
    {
#line 47 "analysis.m"
      analysis__conv1_HeadVar__2_2 = analysis__func_0(((MR_Box) analysis__TypeClassInfo_for_compiler_3), analysis__HeadVar__1_1);
    }
#line 47 "analysis.m"
    analysis__HeadVar__2_2 = ((MR_String) analysis__conv1_HeadVar__2_2);
#line 47 "analysis.m"
    return analysis__HeadVar__2_2;
#line 47 "analysis.m"
  }
#line 47 "analysis.m"
}

#line 1387 "analysis.m"
void MR_CALL 
analysis__set_debug_analysis_3_p_0(
#line 1387 "analysis.m"
  MR_Word analysis__X_4)
#line 1387 "analysis.m"
{
#line 1387 "analysis.m"
  {
#line 1387 "analysis.m"
    MR_bool analysis__succeeded;

#line 1387 "analysis.m"
{
#define MR_PROC_LABEL analysis__set_debug_analysis_3_p_0


		{
#line 1387 "analysis.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&analysis__mutable_variable_debug_analysis_lock,
                    "analysis__mutable_variable_debug_analysis_lock");
#endif

#line 8650 "analysis.c"

		;}
#undef MR_PROC_LABEL
#line 1387 "analysis.m"
}
#line 1387 "analysis.m"
{
#define MR_PROC_LABEL analysis__set_debug_analysis_3_p_0

	MR_Word X;

	X =  analysis__X_4 ;
		{
#line 1387 "analysis.m"
analysis__mutable_variable_debug_analysis = X;

#line 8667 "analysis.c"

		;}
#undef MR_PROC_LABEL
#line 1387 "analysis.m"
}
#line 1387 "analysis.m"
{
#define MR_PROC_LABEL analysis__set_debug_analysis_3_p_0


		{
#line 1387 "analysis.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&analysis__mutable_variable_debug_analysis_lock,
                    "analysis__mutable_variable_debug_analysis_lock");
#endif

#line 8685 "analysis.c"

		;}
#undef MR_PROC_LABEL
#line 1387 "analysis.m"
}
#line 1387 "analysis.m"
  }
#line 1387 "analysis.m"
}

#line 1387 "analysis.m"
void MR_CALL 
analysis__get_debug_analysis_3_p_0(
#line 1387 "analysis.m"
  MR_Word * analysis__X_4)
#line 1387 "analysis.m"
{
#line 1387 "analysis.m"
  {
#line 1387 "analysis.m"
    MR_bool analysis__succeeded;

#line 1387 "analysis.m"
{
#define MR_PROC_LABEL analysis__get_debug_analysis_3_p_0


		{
#line 1387 "analysis.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&analysis__mutable_variable_debug_analysis_lock,
                    "analysis__mutable_variable_debug_analysis_lock");
#endif

#line 8720 "analysis.c"

		;}
#undef MR_PROC_LABEL
#line 1387 "analysis.m"
}
#line 1387 "analysis.m"
{
#define MR_PROC_LABEL analysis__get_debug_analysis_3_p_0

	MR_Word X;

		{
#line 1387 "analysis.m"
X = analysis__mutable_variable_debug_analysis;

#line 8736 "analysis.c"

		;}
#undef MR_PROC_LABEL
	 *analysis__X_4  = X;
#line 1387 "analysis.m"
}
#line 1387 "analysis.m"
{
#define MR_PROC_LABEL analysis__get_debug_analysis_3_p_0


		{
#line 1387 "analysis.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&analysis__mutable_variable_debug_analysis_lock,
                    "analysis__mutable_variable_debug_analysis_lock");
#endif

#line 8755 "analysis.c"

		;}
#undef MR_PROC_LABEL
#line 1387 "analysis.m"
}
#line 1387 "analysis.m"
  }
#line 1387 "analysis.m"
}

#line 1387 "analysis.m"
void MR_CALL 
analysis__set_debug_analysis_1_p_0(
#line 1387 "analysis.m"
  MR_Word analysis__X_2)
#line 1387 "analysis.m"
{
#line 1387 "analysis.m"
  {
#line 1387 "analysis.m"
    MR_bool analysis__succeeded;

#line 1387 "analysis.m"
{
#define MR_PROC_LABEL analysis__set_debug_analysis_1_p_0


		{
#line 1387 "analysis.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&analysis__mutable_variable_debug_analysis_lock,
                    "analysis__mutable_variable_debug_analysis_lock");
#endif

#line 8790 "analysis.c"

		;}
#undef MR_PROC_LABEL
#line 1387 "analysis.m"
}
#line 1387 "analysis.m"
{
#define MR_PROC_LABEL analysis__set_debug_analysis_1_p_0

	MR_Word X;

	X =  analysis__X_2 ;
		{
#line 1387 "analysis.m"
analysis__mutable_variable_debug_analysis = X;

#line 8807 "analysis.c"

		;}
#undef MR_PROC_LABEL
#line 1387 "analysis.m"
}
#line 1387 "analysis.m"
{
#define MR_PROC_LABEL analysis__set_debug_analysis_1_p_0


		{
#line 1387 "analysis.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&analysis__mutable_variable_debug_analysis_lock,
                    "analysis__mutable_variable_debug_analysis_lock");
#endif

#line 8825 "analysis.c"

		;}
#undef MR_PROC_LABEL
#line 1387 "analysis.m"
}
#line 1387 "analysis.m"
  }
#line 1387 "analysis.m"
}

#line 1387 "analysis.m"
void MR_CALL 
analysis__get_debug_analysis_1_p_0(
#line 1387 "analysis.m"
  MR_Word * analysis__X_2)
#line 1387 "analysis.m"
{
#line 1387 "analysis.m"
  {
#line 1387 "analysis.m"
    MR_bool analysis__succeeded;

#line 1387 "analysis.m"
{
#define MR_PROC_LABEL analysis__get_debug_analysis_1_p_0


		{
#line 1387 "analysis.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&analysis__mutable_variable_debug_analysis_lock,
                    "analysis__mutable_variable_debug_analysis_lock");
#endif

#line 8860 "analysis.c"

		;}
#undef MR_PROC_LABEL
#line 1387 "analysis.m"
}
#line 1387 "analysis.m"
{
#define MR_PROC_LABEL analysis__get_debug_analysis_1_p_0

	MR_Word X;

		{
#line 1387 "analysis.m"
X = analysis__mutable_variable_debug_analysis;

#line 8876 "analysis.c"

		;}
#undef MR_PROC_LABEL
	 *analysis__X_2  = X;
#line 1387 "analysis.m"
}
#line 1387 "analysis.m"
{
#define MR_PROC_LABEL analysis__get_debug_analysis_1_p_0


		{
#line 1387 "analysis.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&analysis__mutable_variable_debug_analysis_lock,
                    "analysis__mutable_variable_debug_analysis_lock");
#endif

#line 8895 "analysis.c"

		;}
#undef MR_PROC_LABEL
#line 1387 "analysis.m"
}
#line 1387 "analysis.m"
  }
#line 1387 "analysis.m"
}

#line 1387 "analysis.m"
void MR_CALL 
analysis__unsafe_set_debug_analysis_1_p_0(
#line 1387 "analysis.m"
  MR_Word analysis__X_1)
#line 1387 "analysis.m"
{
#line 1387 "analysis.m"
  {
#line 1387 "analysis.m"
    MR_bool analysis__succeeded;

#line 1387 "analysis.m"
{
#define MR_PROC_LABEL analysis__unsafe_set_debug_analysis_1_p_0

	MR_Word X;

	X =  analysis__X_1 ;
		{
#line 1387 "analysis.m"
analysis__mutable_variable_debug_analysis = X;

#line 8929 "analysis.c"

		;}
#undef MR_PROC_LABEL
#line 1387 "analysis.m"
}
#line 1387 "analysis.m"
  }
#line 1387 "analysis.m"
}

#line 1387 "analysis.m"
void MR_CALL 
analysis__unsafe_get_debug_analysis_1_p_0(
#line 1387 "analysis.m"
  MR_Word * analysis__X_1)
#line 1387 "analysis.m"
{
#line 1387 "analysis.m"
  {
#line 1387 "analysis.m"
    MR_bool analysis__succeeded;

#line 1387 "analysis.m"
{
#define MR_PROC_LABEL analysis__unsafe_get_debug_analysis_1_p_0

	MR_Word X;

		{
#line 1387 "analysis.m"
X = analysis__mutable_variable_debug_analysis;

#line 8962 "analysis.c"

		;}
#undef MR_PROC_LABEL
	 *analysis__X_1  = X;
#line 1387 "analysis.m"
}
#line 1387 "analysis.m"
  }
#line 1387 "analysis.m"
}

#line 1387 "analysis.m"
void MR_CALL 
analysis__unlock_debug_analysis_0_p_0(void)
#line 1387 "analysis.m"
{
#line 1387 "analysis.m"
  {
#line 1387 "analysis.m"
    MR_bool analysis__succeeded;

#line 1387 "analysis.m"
{
#define MR_PROC_LABEL analysis__unlock_debug_analysis_0_p_0


		{
#line 1387 "analysis.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&analysis__mutable_variable_debug_analysis_lock,
                    "analysis__mutable_variable_debug_analysis_lock");
#endif

#line 8996 "analysis.c"

		;}
#undef MR_PROC_LABEL
#line 1387 "analysis.m"
}
#line 1387 "analysis.m"
  }
#line 1387 "analysis.m"
}

#line 1387 "analysis.m"
void MR_CALL 
analysis__lock_debug_analysis_0_p_0(void)
#line 1387 "analysis.m"
{
#line 1387 "analysis.m"
  {
#line 1387 "analysis.m"
    MR_bool analysis__succeeded;

#line 1387 "analysis.m"
{
#define MR_PROC_LABEL analysis__lock_debug_analysis_0_p_0


		{
#line 1387 "analysis.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&analysis__mutable_variable_debug_analysis_lock,
                    "analysis__mutable_variable_debug_analysis_lock");
#endif

#line 9029 "analysis.c"

		;}
#undef MR_PROC_LABEL
#line 1387 "analysis.m"
}
#line 1387 "analysis.m"
  }
#line 1387 "analysis.m"
}

#line 1387 "analysis.m"
void MR_CALL 
analysis__initialise_mutable_debug_analysis_0_p_0(void)
#line 1387 "analysis.m"
{
#line 1387 "analysis.m"
  {
#line 1387 "analysis.m"
    MR_bool analysis__succeeded;

#line 1387 "analysis.m"
{
#define MR_PROC_LABEL analysis__initialise_mutable_debug_analysis_0_p_0


		{
#line 1387 "analysis.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&analysis__mutable_variable_debug_analysis_lock, MR_MUTEX_ATTR);
#endif

#line 9061 "analysis.c"

		;}
#undef MR_PROC_LABEL
#line 1387 "analysis.m"
}
#line 1387 "analysis.m"
{
#define MR_PROC_LABEL analysis__initialise_mutable_debug_analysis_0_p_0


		{
#line 1387 "analysis.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&analysis__mutable_variable_debug_analysis_lock,
                    "analysis__mutable_variable_debug_analysis_lock");
#endif

#line 9079 "analysis.c"

		;}
#undef MR_PROC_LABEL
#line 1387 "analysis.m"
}
#line 1387 "analysis.m"
{
#define MR_PROC_LABEL analysis__initialise_mutable_debug_analysis_0_p_0

	MR_Word X;

	X =  (MR_Integer) 0 ;
		{
#line 1387 "analysis.m"
analysis__mutable_variable_debug_analysis = X;

#line 9096 "analysis.c"

		;}
#undef MR_PROC_LABEL
#line 1387 "analysis.m"
}
#line 1387 "analysis.m"
{
#define MR_PROC_LABEL analysis__initialise_mutable_debug_analysis_0_p_0


		{
#line 1387 "analysis.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&analysis__mutable_variable_debug_analysis_lock,
                    "analysis__mutable_variable_debug_analysis_lock");
#endif

#line 9114 "analysis.c"

		;}
#undef MR_PROC_LABEL
#line 1387 "analysis.m"
}
#line 1387 "analysis.m"
  }
#line 1387 "analysis.m"
}

#line 1387 "analysis.m"
void MR_CALL 
analysis__pre_initialise_mutable_debug_analysis_0_p_0(void)
#line 1387 "analysis.m"
{
#line 1387 "analysis.m"
  {
#line 1387 "analysis.m"
    MR_bool analysis__succeeded;

#line 1387 "analysis.m"
{
#define MR_PROC_LABEL analysis__pre_initialise_mutable_debug_analysis_0_p_0


		{
#line 1387 "analysis.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&analysis__mutable_variable_debug_analysis_lock, MR_MUTEX_ATTR);
#endif

#line 9146 "analysis.c"

		;}
#undef MR_PROC_LABEL
#line 1387 "analysis.m"
}
#line 1387 "analysis.m"
  }
#line 1387 "analysis.m"
}

#line 1392 "analysis.m"
void MR_CALL 
analysis__debug_msg_3_p_0(
#line 1392 "analysis.m"
  MR_Word analysis__P_4)
#line 1392 "analysis.m"
{
#line 1395 "analysis.m"
  {
#line 1395 "analysis.m"
    MR_bool analysis__succeeded;
#line 1395 "analysis.m"
    MR_Word analysis__Debug_6;

#line 1387 "analysis.m"
{
#define MR_PROC_LABEL analysis__debug_msg_3_p_0


		{
#line 1387 "analysis.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&analysis__mutable_variable_debug_analysis_lock,
                    "analysis__mutable_variable_debug_analysis_lock");
#endif

#line 9183 "analysis.c"

		;}
#undef MR_PROC_LABEL
#line 1387 "analysis.m"
}
#line 1387 "analysis.m"
{
#define MR_PROC_LABEL analysis__debug_msg_3_p_0

	MR_Word X;

		{
#line 1387 "analysis.m"
X = analysis__mutable_variable_debug_analysis;

#line 9199 "analysis.c"

		;}
#undef MR_PROC_LABEL
	 analysis__Debug_6  = X;
#line 1387 "analysis.m"
}
#line 1387 "analysis.m"
{
#define MR_PROC_LABEL analysis__debug_msg_3_p_0


		{
#line 1387 "analysis.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&analysis__mutable_variable_debug_analysis_lock,
                    "analysis__mutable_variable_debug_analysis_lock");
#endif

#line 9218 "analysis.c"

		;}
#undef MR_PROC_LABEL
#line 1387 "analysis.m"
}
#line 1400 "analysis.m"
#line 1400 "analysis.m"
    switch (analysis__Debug_6) {
#line 1400 "analysis.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1400 "analysis.m"
      case (MR_Integer) 0:
#line 1401 "analysis.m"
        {
#line 1401 "analysis.m"
        }
#line 1400 "analysis.m"
        break;
#line 1400 "analysis.m"
      case (MR_Integer) 1:
#line 1399 "analysis.m"
        {
#line 1399 "analysis.m"
          void MR_CALL (* analysis__func_0)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), analysis__P_4, (MR_Integer) 1)));
#line 1399 "analysis.m"
          MR_Box analysis__conv1_STATE_VARIABLE_IO_8;

#line 1399 "analysis.m"
          {
#line 1399 "analysis.m"
            analysis__func_0(((MR_Box) analysis__P_4), ((MR_Box) ((MR_Integer) 0)), &analysis__conv1_STATE_VARIABLE_IO_8);
          }
#line 1399 "analysis.m"
        }
#line 1400 "analysis.m"
        break;
#line 1400 "analysis.m"
    }
#line 1395 "analysis.m"
  }
#line 1392 "analysis.m"
}

#line 1380 "analysis.m"
MR_Word MR_CALL 
analysis__lub_result_statuses_4_2_f_0(
#line 1380 "analysis.m"
  MR_Word analysis__Result_4,
#line 1380 "analysis.m"
  MR_Word analysis__Acc_5)
#line 1380 "analysis.m"
{
#line 1383 "analysis.m"
  {
#line 1383 "analysis.m"
    MR_bool analysis__succeeded;
#line 1383 "analysis.m"
    MR_Word analysis__HeadVar__3_3;
#line 1383 "analysis.m"
    MR_Word analysis__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Result_4, (MR_Integer) 3)));
#line 1383 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_analysis_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Result_4, (MR_Integer) 0)));
#line 1383 "analysis.m"
    MR_Box analysis__V_7_7 = (MR_hl_field(MR_mktag(0), analysis__Result_4, (MR_Integer) 1));
#line 1383 "analysis.m"
    MR_Box analysis__V_8_8 = (MR_hl_field(MR_mktag(0), analysis__Result_4, (MR_Integer) 2));

#line 1383 "analysis.m"
    {
#line 1383 "analysis.m"
      analysis__HeadVar__3_3 = analysis__lub_2_f_0(analysis__V_6_6, analysis__Acc_5);
    }
#line 1383 "analysis.m"
    return analysis__HeadVar__3_3;
#line 1383 "analysis.m"
  }
#line 1380 "analysis.m"
}

#line 1374 "analysis.m"
MR_Word MR_CALL 
analysis__lub_result_statuses_3_3_f_0(
#line 1374 "analysis.m"
  MR_Word analysis___FuncId_5,
#line 1374 "analysis.m"
  MR_Word analysis__Results_6,
#line 1374 "analysis.m"
  MR_Word analysis__Acc_7)
#line 1374 "analysis.m"
{
#line 1377 "analysis.m"
  {
#line 1377 "analysis.m"
    MR_bool analysis__succeeded;
#line 1377 "analysis.m"
    MR_Word analysis__HeadVar__4_4;

#line 1377 "analysis.m"
    {
#line 1377 "analysis.m"
      analysis__HeadVar__4_4 = analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_108_117_98_95_114_101_115_117_108_116_95_115_116_97_116_117_115_101_115_95_51_95_95_91_49_93_95_48_3_f_0(analysis__Results_6, analysis__Acc_7);
    }
#line 1377 "analysis.m"
    return analysis__HeadVar__4_4;
#line 1377 "analysis.m"
  }
#line 1374 "analysis.m"
}

#line 1367 "analysis.m"
MR_Word MR_CALL 
analysis__lub_result_statuses_2_3_f_0(
#line 1367 "analysis.m"
  MR_String analysis___AnalysisName_5,
#line 1367 "analysis.m"
  MR_Word analysis__FuncMap_6,
#line 1367 "analysis.m"
  MR_Word analysis__Acc_7)
#line 1367 "analysis.m"
{
#line 1371 "analysis.m"
  {
#line 1371 "analysis.m"
    MR_bool analysis__succeeded;
#line 1371 "analysis.m"
    MR_Word analysis__HeadVar__4_4;

#line 1371 "analysis.m"
    {
#line 1371 "analysis.m"
      analysis__HeadVar__4_4 = analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_108_117_98_95_114_101_115_117_108_116_95_115_116_97_116_117_115_101_115_95_50_95_95_91_49_93_95_48_3_f_0(analysis__FuncMap_6, analysis__Acc_7);
    }
#line 1371 "analysis.m"
    return analysis__HeadVar__4_4;
#line 1371 "analysis.m"
  }
#line 1367 "analysis.m"
}

#line 1365 "analysis.m"
static MR_Box MR_CALL 
analysis__lub_result_statuses_1_f_0_1(
#line 1365 "analysis.m"
  MR_Box analysis__closure_arg,
#line 1365 "analysis.m"
  MR_Box analysis__wrapper_arg_1,
#line 1365 "analysis.m"
  MR_Box analysis__wrapper_arg_2,
#line 1365 "analysis.m"
  MR_Box analysis__wrapper_arg_3)
#line 1365 "analysis.m"
{
#line 1365 "analysis.m"
  {
#line 1365 "analysis.m"
    MR_Box analysis__wrapper_arg_4;
#line 1365 "analysis.m"
    MR_Box analysis__closure = analysis__closure_arg;
#line 1365 "analysis.m"
    MR_Word analysis__conv0_HeadVar__4_4;

#line 1365 "analysis.m"
    {
#line 1365 "analysis.m"
      analysis__conv0_HeadVar__4_4 = analysis__lub_result_statuses_2_3_f_0(((MR_String) analysis__wrapper_arg_1), ((MR_Word) analysis__wrapper_arg_2), ((MR_Word) analysis__wrapper_arg_3));
    }
#line 1365 "analysis.m"
    analysis__wrapper_arg_4 = ((MR_Box) (analysis__conv0_HeadVar__4_4));
#line 1365 "analysis.m"
    return analysis__wrapper_arg_4;
#line 1365 "analysis.m"
  }
#line 1365 "analysis.m"
}

#line 1361 "analysis.m"
MR_Word MR_CALL 
analysis__lub_result_statuses_1_f_0(
#line 1361 "analysis.m"
  MR_Word analysis__ModuleMap_3)
#line 1361 "analysis.m"
{
#line 1364 "analysis.m"
  {
#line 1364 "analysis.m"
    MR_bool analysis__succeeded;
#line 1364 "analysis.m"
    MR_Word analysis__HeadVar__2_2;
#line 1365 "analysis.m"
    MR_Box analysis__conv1_HeadVar__2_2;

#line 1365 "analysis.m"
    {
#line 1365 "analysis.m"
      analysis__conv1_HeadVar__2_2 = mercury__map__foldl_3_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &analysis_scalar_common_2[2], (MR_Word) &analysis__analysis__type_ctor_info_analysis_status_0, (MR_Word) &analysis_scalar_common_2[13], analysis__ModuleMap_3, ((MR_Box) ((MR_Integer) 2)));
    }
#line 1365 "analysis.m"
    analysis__HeadVar__2_2 = ((MR_Word) analysis__conv1_HeadVar__2_2);
#line 1364 "analysis.m"
    return analysis__HeadVar__2_2;
#line 1364 "analysis.m"
  }
#line 1361 "analysis.m"
}

#line 1328 "analysis.m"
void MR_CALL 
analysis__maybe_write_module_imdg_5_p_0(
#line 1328 "analysis.m"
  MR_Word analysis__Info_6,
#line 1328 "analysis.m"
  MR_Word analysis__Globals_7,
#line 1328 "analysis.m"
  MR_Word analysis__ModuleName_8)
#line 1328 "analysis.m"
{
#line 1332 "analysis.m"
  {
#line 1332 "analysis.m"
    MR_bool analysis__succeeded;
#line 1332 "analysis.m"
    MR_Word analysis__ModuleEntries_10;
#line 1332 "analysis.m"
    MR_Word analysis__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 9)));
#line 1332 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_compiler_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 0)));
#line 1332 "analysis.m"
    MR_Box analysis__V_15_15 = (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 1));
#line 1332 "analysis.m"
    MR_Word analysis__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 2)));
#line 1332 "analysis.m"
    MR_Word analysis__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 3)));
#line 1332 "analysis.m"
    MR_Word analysis__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 4)));
#line 1332 "analysis.m"
    MR_Word analysis__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 5)));
#line 1332 "analysis.m"
    MR_Word analysis__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 6)));
#line 1332 "analysis.m"
    MR_Word analysis__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 7)));
#line 1332 "analysis.m"
    MR_Word analysis__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 8)));
#line 1332 "analysis.m"
    MR_Word analysis__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 10)));
#line 1332 "analysis.m"
    MR_Box analysis__conv0_ModuleEntries_10;

#line 1332 "analysis.m"
    {
#line 1332 "analysis.m"
      analysis__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &analysis_scalar_common_2[5], analysis__V_13_13, ((MR_Box) (analysis__ModuleName_8)), &analysis__conv0_ModuleEntries_10);
    }
#line 1332 "analysis.m"
    if (analysis__succeeded)
#line 1332 "analysis.m"
      {
#line 1332 "analysis.m"
        analysis__ModuleEntries_10 = ((MR_Word) analysis__conv0_ModuleEntries_10);
#line 1332 "analysis.m"
        analysis__succeeded = MR_TRUE;
#line 1332 "analysis.m"
      }
#line 1332 "analysis.m"
    if (analysis__succeeded)
#line 1333 "analysis.m"
      {
#line 1333 "analysis.m"
        analysis__file__write_module_imdg_6_p_0(analysis__Info_6, analysis__Globals_7, analysis__ModuleName_8, analysis__ModuleEntries_10);
      }
#line 1332 "analysis.m"
    else
#line 1332 "analysis.m"
      {
#line 1332 "analysis.m"
      }
#line 1332 "analysis.m"
  }
#line 1328 "analysis.m"
}

#line 1317 "analysis.m"
void MR_CALL 
analysis__maybe_write_module_requests_5_p_0(
#line 1317 "analysis.m"
  MR_Word analysis__Info_6,
#line 1317 "analysis.m"
  MR_Word analysis__Globals_7,
#line 1317 "analysis.m"
  MR_Word analysis__ModuleName_8)
#line 1317 "analysis.m"
{
#line 1321 "analysis.m"
  {
#line 1321 "analysis.m"
    MR_bool analysis__succeeded;
#line 1321 "analysis.m"
    MR_Word analysis__Requests_10;
#line 1321 "analysis.m"
    MR_Word analysis__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 5)));
#line 1321 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_compiler_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 0)));
#line 1321 "analysis.m"
    MR_Box analysis__V_15_15 = (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 1));
#line 1321 "analysis.m"
    MR_Word analysis__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 2)));
#line 1321 "analysis.m"
    MR_Word analysis__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 3)));
#line 1321 "analysis.m"
    MR_Word analysis__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 4)));
#line 1321 "analysis.m"
    MR_Word analysis__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 6)));
#line 1321 "analysis.m"
    MR_Word analysis__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 7)));
#line 1321 "analysis.m"
    MR_Word analysis__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 8)));
#line 1321 "analysis.m"
    MR_Word analysis__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 9)));
#line 1321 "analysis.m"
    MR_Word analysis__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 10)));
#line 1321 "analysis.m"
    MR_Box analysis__conv0_Requests_10;

#line 1321 "analysis.m"
    {
#line 1321 "analysis.m"
      analysis__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &analysis_scalar_common_2[1], analysis__V_13_13, ((MR_Box) (analysis__ModuleName_8)), &analysis__conv0_Requests_10);
    }
#line 1321 "analysis.m"
    if (analysis__succeeded)
#line 1321 "analysis.m"
      {
#line 1321 "analysis.m"
        analysis__Requests_10 = ((MR_Word) analysis__conv0_Requests_10);
#line 1321 "analysis.m"
        analysis__succeeded = MR_TRUE;
#line 1321 "analysis.m"
      }
#line 1321 "analysis.m"
    if (analysis__succeeded)
#line 1322 "analysis.m"
      {
#line 1322 "analysis.m"
        analysis__file__write_module_analysis_requests_6_p_0(analysis__Info_6, analysis__Globals_7, analysis__ModuleName_8, analysis__Requests_10);
      }
#line 1321 "analysis.m"
    else
#line 1321 "analysis.m"
      {
#line 1321 "analysis.m"
      }
#line 1321 "analysis.m"
  }
#line 1317 "analysis.m"
}

#line 1305 "analysis.m"
void MR_CALL 
analysis__maybe_write_module_overall_status_5_p_0(
#line 1305 "analysis.m"
  MR_Word analysis__Info_6,
#line 1305 "analysis.m"
  MR_Word analysis__Globals_7,
#line 1305 "analysis.m"
  MR_Word analysis__ModuleName_8)
#line 1305 "analysis.m"
{
#line 1309 "analysis.m"
  {
#line 1309 "analysis.m"
    MR_bool analysis__succeeded;
#line 1309 "analysis.m"
    MR_Word analysis__Status_10;
#line 1309 "analysis.m"
    MR_Word analysis__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 6)));
#line 1309 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_compiler_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 0)));
#line 1309 "analysis.m"
    MR_Box analysis__V_15_15 = (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 1));
#line 1309 "analysis.m"
    MR_Word analysis__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 2)));
#line 1309 "analysis.m"
    MR_Word analysis__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 3)));
#line 1309 "analysis.m"
    MR_Word analysis__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 4)));
#line 1309 "analysis.m"
    MR_Word analysis__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 5)));
#line 1309 "analysis.m"
    MR_Word analysis__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 7)));
#line 1309 "analysis.m"
    MR_Word analysis__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 8)));
#line 1309 "analysis.m"
    MR_Word analysis__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 9)));
#line 1309 "analysis.m"
    MR_Word analysis__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 10)));
#line 1309 "analysis.m"
    MR_Box analysis__conv0_Status_10;

#line 1309 "analysis.m"
    {
#line 1309 "analysis.m"
      analysis__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &analysis__analysis__type_ctor_info_analysis_status_0, analysis__V_13_13, ((MR_Box) (analysis__ModuleName_8)), &analysis__conv0_Status_10);
    }
#line 1309 "analysis.m"
    if (analysis__succeeded)
#line 1309 "analysis.m"
      {
#line 1309 "analysis.m"
        analysis__Status_10 = ((MR_Word) analysis__conv0_Status_10);
#line 1309 "analysis.m"
        analysis__succeeded = MR_TRUE;
#line 1309 "analysis.m"
      }
#line 1309 "analysis.m"
    if (analysis__succeeded)
#line 1310 "analysis.m"
      {
#line 1310 "analysis.m"
        analysis__file__write_module_overall_status_6_p_0(analysis__Info_6, analysis__Globals_7, analysis__ModuleName_8, analysis__Status_10);
      }
#line 1309 "analysis.m"
    else
#line 1309 "analysis.m"
      {
#line 1309 "analysis.m"
      }
#line 1309 "analysis.m"
  }
#line 1305 "analysis.m"
}

#line 1296 "analysis.m"
void MR_CALL 
analysis__load_module_imdg_6_p_0(
#line 1296 "analysis.m"
  MR_Word analysis__Globals_7,
#line 1296 "analysis.m"
  MR_Word analysis__ModuleName_8,
#line 1296 "analysis.m"
  MR_Word analysis__STATE_VARIABLE_Info_0_14,
#line 1296 "analysis.m"
  MR_Word * analysis__STATE_VARIABLE_Info_15)
#line 1296 "analysis.m"
{
#line 1299 "analysis.m"
  {
#line 1299 "analysis.m"
    MR_bool analysis__succeeded;
#line 1299 "analysis.m"
    MR_Word analysis__IMDG_11;
#line 1299 "analysis.m"
    MR_Word analysis__Map0_12;
#line 1299 "analysis.m"
    MR_Word analysis__Map_13;
#line 1301 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_compiler_39;
#line 1301 "analysis.m"
    MR_Box analysis__V_20_20;
#line 1301 "analysis.m"
    MR_Word analysis__V_21_21;
#line 1301 "analysis.m"
    MR_Word analysis__V_22_22;
#line 1301 "analysis.m"
    MR_Word analysis__V_23_23;
#line 1301 "analysis.m"
    MR_Word analysis__V_24_24;
#line 1301 "analysis.m"
    MR_Word analysis__V_25_25;
#line 1301 "analysis.m"
    MR_Word analysis__V_26_26;
#line 1301 "analysis.m"
    MR_Word analysis__V_27_27;
#line 1301 "analysis.m"
    MR_Word analysis__V_28_28;
#line 1303 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_compiler_42;
#line 1303 "analysis.m"
    MR_Box analysis__V_29_29;
#line 1303 "analysis.m"
    MR_Word analysis__V_30_30;
#line 1303 "analysis.m"
    MR_Word analysis__V_31_31;
#line 1303 "analysis.m"
    MR_Word analysis__V_32_32;
#line 1303 "analysis.m"
    MR_Word analysis__V_33_33;
#line 1303 "analysis.m"
    MR_Word analysis__V_34_34;
#line 1303 "analysis.m"
    MR_Word analysis__V_35_35;
#line 1303 "analysis.m"
    MR_Word analysis__V_36_36;
#line 1303 "analysis.m"
    MR_Word analysis__V_38_38;
#line 1303 "analysis.m"
    MR_Word analysis__V_37_37;

#line 1300 "analysis.m"
    {
#line 1300 "analysis.m"
      analysis__file__read_module_imdg_6_p_0(analysis__STATE_VARIABLE_Info_0_14, analysis__Globals_7, analysis__ModuleName_8, &analysis__IMDG_11);
    }
#line 1301 "analysis.m"
    analysis__TypeClassInfo_for_compiler_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_14, (MR_Integer) 0)));
#line 1301 "analysis.m"
    analysis__V_20_20 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_14, (MR_Integer) 1));
#line 1301 "analysis.m"
    analysis__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_14, (MR_Integer) 2)));
#line 1301 "analysis.m"
    analysis__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_14, (MR_Integer) 3)));
#line 1301 "analysis.m"
    analysis__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_14, (MR_Integer) 4)));
#line 1301 "analysis.m"
    analysis__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_14, (MR_Integer) 5)));
#line 1301 "analysis.m"
    analysis__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_14, (MR_Integer) 6)));
#line 1301 "analysis.m"
    analysis__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_14, (MR_Integer) 7)));
#line 1301 "analysis.m"
    analysis__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_14, (MR_Integer) 8)));
#line 1301 "analysis.m"
    analysis__Map0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_14, (MR_Integer) 9)));
#line 1301 "analysis.m"
    analysis__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_14, (MR_Integer) 10)));
#line 1302 "analysis.m"
    {
#line 1302 "analysis.m"
      mercury__map__det_insert_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &analysis_scalar_common_2[5], ((MR_Box) (analysis__ModuleName_8)), ((MR_Box) (analysis__IMDG_11)), analysis__Map0_12, &analysis__Map_13);
    }
#line 1303 "analysis.m"
    analysis__TypeClassInfo_for_compiler_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_14, (MR_Integer) 0)));
#line 1303 "analysis.m"
    analysis__V_29_29 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_14, (MR_Integer) 1));
#line 1303 "analysis.m"
    analysis__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_14, (MR_Integer) 2)));
#line 1303 "analysis.m"
    analysis__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_14, (MR_Integer) 3)));
#line 1303 "analysis.m"
    analysis__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_14, (MR_Integer) 4)));
#line 1303 "analysis.m"
    analysis__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_14, (MR_Integer) 5)));
#line 1303 "analysis.m"
    analysis__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_14, (MR_Integer) 6)));
#line 1303 "analysis.m"
    analysis__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_14, (MR_Integer) 7)));
#line 1303 "analysis.m"
    analysis__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_14, (MR_Integer) 8)));
#line 1303 "analysis.m"
    analysis__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_14, (MR_Integer) 9)));
#line 1303 "analysis.m"
    analysis__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_14, (MR_Integer) 10)));
#line 1303 "analysis.m"
    {
#line 1303 "analysis.m"
      MR_Word base;
#line 1303 "analysis.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 1303 "analysis.m"
      *analysis__STATE_VARIABLE_Info_15 = base;
#line 1303 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (analysis__TypeClassInfo_for_compiler_42));
#line 1303 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 1) = analysis__V_29_29;
#line 1303 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (analysis__V_30_30));
#line 1303 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (analysis__V_31_31));
#line 1303 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (analysis__V_32_32));
#line 1303 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (analysis__V_33_33));
#line 1303 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (analysis__V_34_34));
#line 1303 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (analysis__V_35_35));
#line 1303 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (analysis__V_36_36));
#line 1303 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (analysis__Map_13));
#line 1303 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (analysis__V_38_38));
#line 1303 "analysis.m"
    }
#line 1299 "analysis.m"
  }
#line 1296 "analysis.m"
}

#line 1211 "analysis.m"
void MR_CALL 
analysis__load_module_analysis_results_6_p_0(
#line 1211 "analysis.m"
  MR_Word analysis__Globals_7,
#line 1211 "analysis.m"
  MR_Word analysis__ModuleName_8,
#line 1211 "analysis.m"
  MR_Word analysis__STATE_VARIABLE_Info_0_13,
#line 1211 "analysis.m"
  MR_Word * analysis__STATE_VARIABLE_Info_14)
#line 1211 "analysis.m"
{
#line 1215 "analysis.m"
  {
#line 1215 "analysis.m"
    MR_bool analysis__succeeded;
#line 1217 "analysis.m"
    MR_Word analysis__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 7)));
#line 1217 "analysis.m"
    MR_Word analysis__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 6)));
#line 1216 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_compiler_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 0)));
#line 1216 "analysis.m"
    MR_Word analysis__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 10)));
#line 1216 "analysis.m"
    MR_Word analysis__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 9)));
#line 1216 "analysis.m"
    MR_Word analysis__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 8)));
#line 1216 "analysis.m"
    MR_Word analysis__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 5)));
#line 1216 "analysis.m"
    MR_Word analysis__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 4)));
#line 1216 "analysis.m"
    MR_Word analysis__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 3)));
#line 1216 "analysis.m"
    MR_Word analysis__V_118_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 2)));
#line 1216 "analysis.m"
    MR_Box analysis__V_119_119 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 1));

#line 1216 "analysis.m"
    {
#line 1216 "analysis.m"
      analysis__succeeded = mercury__map__contains_2_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &analysis_scalar_common_2[3], analysis__V_113_113, ((MR_Box) (analysis__ModuleName_8)));
    }
#line 1217 "analysis.m"
    if (!(analysis__succeeded))
#line 1217 "analysis.m"
      {
#line 1217 "analysis.m"
        {
#line 1217 "analysis.m"
          analysis__succeeded = mercury__map__contains_2_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &analysis__analysis__type_ctor_info_analysis_status_0, analysis__V_114_114, ((MR_Box) (analysis__ModuleName_8)));
        }
#line 1217 "analysis.m"
      }
#line 1215 "analysis.m"
    if (analysis__succeeded)
#line 1220 "analysis.m"
      {
#line 1220 "analysis.m"
        {
#line 1220 "analysis.m"
          mercury__require__unexpected_3_p_0((MR_String) "analysis", (MR_String) "predicate \140analysis.load_module_analysis_results\'/6", (MR_String) "ensure_old_module_analysis_results_loaded");
#line 1220 "analysis.m"
          return;
        }
#line 1220 "analysis.m"
      }
#line 1215 "analysis.m"
    else
#line 1223 "analysis.m"
      {
#line 1223 "analysis.m"
        MR_Word analysis__TypeClassInfo_for_compiler_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 0)));
#line 1223 "analysis.m"
        MR_Word analysis__TypeCtorInfo_104_104;
#line 1223 "analysis.m"
        MR_Word analysis__ModuleStatus_11;
#line 1223 "analysis.m"
        MR_Word analysis__ModuleResults_12;
#line 1223 "analysis.m"
        MR_Box analysis__V_22_22 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 1));
#line 1223 "analysis.m"
        MR_Word analysis__STATE_VARIABLE_Info_25_25;
#line 1223 "analysis.m"
        MR_Word analysis__V_26_26;
#line 1223 "analysis.m"
        MR_Word analysis__V_27_27;
#line 1223 "analysis.m"
        MR_Word analysis__V_29_29;
#line 1223 "analysis.m"
        MR_Word analysis__V_30_30;
#line 1222 "analysis.m"
        MR_Word analysis__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 2)));
#line 1222 "analysis.m"
        MR_Word analysis__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 3)));
#line 1222 "analysis.m"
        MR_Word analysis__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 4)));
#line 1222 "analysis.m"
        MR_Word analysis__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 5)));
#line 1222 "analysis.m"
        MR_Word analysis__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 6)));
#line 1222 "analysis.m"
        MR_Word analysis__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 7)));
#line 1222 "analysis.m"
        MR_Word analysis__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 8)));
#line 1222 "analysis.m"
        MR_Word analysis__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 9)));
#line 1222 "analysis.m"
        MR_Word analysis__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 10)));
#line 1226 "analysis.m"
        MR_Word analysis__TypeClassInfo_for_compiler_103;
#line 1226 "analysis.m"
        MR_Box analysis__V_58_58;
#line 1226 "analysis.m"
        MR_Word analysis__V_59_59;
#line 1226 "analysis.m"
        MR_Word analysis__V_60_60;
#line 1226 "analysis.m"
        MR_Word analysis__V_61_61;
#line 1226 "analysis.m"
        MR_Word analysis__V_62_62;
#line 1226 "analysis.m"
        MR_Word analysis__V_63_63;
#line 1226 "analysis.m"
        MR_Word analysis__V_64_64;
#line 1226 "analysis.m"
        MR_Word analysis__V_65_65;
#line 1226 "analysis.m"
        MR_Word analysis__V_66_66;
#line 1226 "analysis.m"
        MR_Word analysis__TypeClassInfo_for_compiler_106;
#line 1226 "analysis.m"
        MR_Box analysis__V_67_67;
#line 1226 "analysis.m"
        MR_Word analysis__V_68_68;
#line 1226 "analysis.m"
        MR_Word analysis__V_69_69;
#line 1226 "analysis.m"
        MR_Word analysis__V_70_70;
#line 1226 "analysis.m"
        MR_Word analysis__V_71_71;
#line 1226 "analysis.m"
        MR_Word analysis__V_73_73;
#line 1226 "analysis.m"
        MR_Word analysis__V_74_74;
#line 1226 "analysis.m"
        MR_Word analysis__V_75_75;
#line 1226 "analysis.m"
        MR_Word analysis__V_76_76;
#line 1226 "analysis.m"
        MR_Word analysis__V_72_72;
#line 1227 "analysis.m"
        MR_Word analysis__TypeClassInfo_for_compiler_107;
#line 1227 "analysis.m"
        MR_Box analysis__V_77_77;
#line 1227 "analysis.m"
        MR_Word analysis__V_78_78;
#line 1227 "analysis.m"
        MR_Word analysis__V_79_79;
#line 1227 "analysis.m"
        MR_Word analysis__V_80_80;
#line 1227 "analysis.m"
        MR_Word analysis__V_81_81;
#line 1227 "analysis.m"
        MR_Word analysis__V_82_82;
#line 1227 "analysis.m"
        MR_Word analysis__V_83_83;
#line 1227 "analysis.m"
        MR_Word analysis__V_84_84;
#line 1227 "analysis.m"
        MR_Word analysis__V_85_85;
#line 1227 "analysis.m"
        MR_Word analysis__TypeClassInfo_for_compiler_109;
#line 1227 "analysis.m"
        MR_Box analysis__V_86_86;
#line 1227 "analysis.m"
        MR_Word analysis__V_87_87;
#line 1227 "analysis.m"
        MR_Word analysis__V_88_88;
#line 1227 "analysis.m"
        MR_Word analysis__V_89_89;
#line 1227 "analysis.m"
        MR_Word analysis__V_90_90;
#line 1227 "analysis.m"
        MR_Word analysis__V_91_91;
#line 1227 "analysis.m"
        MR_Word analysis__V_93_93;
#line 1227 "analysis.m"
        MR_Word analysis__V_94_94;
#line 1227 "analysis.m"
        MR_Word analysis__V_95_95;
#line 1227 "analysis.m"
        MR_Word analysis__V_92_92;

#line 1222 "analysis.m"
        {
#line 1222 "analysis.m"
          analysis__do_read_module_overall_status_6_p_0(analysis__TypeClassInfo_for_compiler_102, analysis__V_22_22, analysis__Globals_7, analysis__ModuleName_8, &analysis__ModuleStatus_11);
        }
#line 1224 "analysis.m"
        {
#line 1224 "analysis.m"
          analysis__file__read_module_analysis_results_6_p_0(analysis__STATE_VARIABLE_Info_0_13, analysis__Globals_7, analysis__ModuleName_8, &analysis__ModuleResults_12);
        }
#line 1226 "analysis.m"
        analysis__TypeClassInfo_for_compiler_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 0)));
#line 1226 "analysis.m"
        analysis__V_58_58 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 1));
#line 1226 "analysis.m"
        analysis__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 2)));
#line 1226 "analysis.m"
        analysis__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 3)));
#line 1226 "analysis.m"
        analysis__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 4)));
#line 1226 "analysis.m"
        analysis__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 5)));
#line 1226 "analysis.m"
        analysis__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 6)));
#line 1226 "analysis.m"
        analysis__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 7)));
#line 1226 "analysis.m"
        analysis__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 8)));
#line 1226 "analysis.m"
        analysis__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 9)));
#line 1226 "analysis.m"
        analysis__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 10)));
#line 10034 "analysis.c"
        analysis__TypeCtorInfo_104_104 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 1226 "analysis.m"
        {
#line 1226 "analysis.m"
          analysis__V_27_27 = mercury__map__f_101_108_101_109_32_58_61_3_f_0(analysis__TypeCtorInfo_104_104, (MR_Word) &analysis__analysis__type_ctor_info_analysis_status_0, ((MR_Box) (analysis__ModuleName_8)), analysis__V_26_26, ((MR_Box) (analysis__ModuleStatus_11)));
        }
#line 1226 "analysis.m"
        analysis__TypeClassInfo_for_compiler_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 0)));
#line 1226 "analysis.m"
        analysis__V_67_67 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 1));
#line 1226 "analysis.m"
        analysis__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 2)));
#line 1226 "analysis.m"
        analysis__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 3)));
#line 1226 "analysis.m"
        analysis__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 4)));
#line 1226 "analysis.m"
        analysis__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 5)));
#line 1226 "analysis.m"
        analysis__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 6)));
#line 1226 "analysis.m"
        analysis__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 7)));
#line 1226 "analysis.m"
        analysis__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 8)));
#line 1226 "analysis.m"
        analysis__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 9)));
#line 1226 "analysis.m"
        analysis__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 10)));
#line 1226 "analysis.m"
        {
#line 1226 "analysis.m"
          analysis__STATE_VARIABLE_Info_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 1226 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_25_25, 0) = ((MR_Box) (analysis__TypeClassInfo_for_compiler_106));
#line 1226 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_25_25, 1) = analysis__V_67_67;
#line 1226 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_25_25, 2) = ((MR_Box) (analysis__V_68_68));
#line 1226 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_25_25, 3) = ((MR_Box) (analysis__V_69_69));
#line 1226 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_25_25, 4) = ((MR_Box) (analysis__V_70_70));
#line 1226 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_25_25, 5) = ((MR_Box) (analysis__V_71_71));
#line 1226 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_25_25, 6) = ((MR_Box) (analysis__V_27_27));
#line 1226 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_25_25, 7) = ((MR_Box) (analysis__V_73_73));
#line 1226 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_25_25, 8) = ((MR_Box) (analysis__V_74_74));
#line 1226 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_25_25, 9) = ((MR_Box) (analysis__V_75_75));
#line 1226 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_25_25, 10) = ((MR_Box) (analysis__V_76_76));
#line 1226 "analysis.m"
        }
#line 1227 "analysis.m"
        analysis__TypeClassInfo_for_compiler_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_25_25, (MR_Integer) 0)));
#line 1227 "analysis.m"
        analysis__V_77_77 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_25_25, (MR_Integer) 1));
#line 1227 "analysis.m"
        analysis__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_25_25, (MR_Integer) 2)));
#line 1227 "analysis.m"
        analysis__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_25_25, (MR_Integer) 3)));
#line 1227 "analysis.m"
        analysis__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_25_25, (MR_Integer) 4)));
#line 1227 "analysis.m"
        analysis__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_25_25, (MR_Integer) 5)));
#line 1227 "analysis.m"
        analysis__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_25_25, (MR_Integer) 6)));
#line 1227 "analysis.m"
        analysis__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_25_25, (MR_Integer) 7)));
#line 1227 "analysis.m"
        analysis__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_25_25, (MR_Integer) 8)));
#line 1227 "analysis.m"
        analysis__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_25_25, (MR_Integer) 9)));
#line 1227 "analysis.m"
        analysis__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_25_25, (MR_Integer) 10)));
#line 1227 "analysis.m"
        {
#line 1227 "analysis.m"
          analysis__V_30_30 = mercury__map__f_101_108_101_109_32_58_61_3_f_0(analysis__TypeCtorInfo_104_104, (MR_Word) &analysis_scalar_common_2[3], ((MR_Box) (analysis__ModuleName_8)), analysis__V_29_29, ((MR_Box) (analysis__ModuleResults_12)));
        }
#line 1227 "analysis.m"
        analysis__TypeClassInfo_for_compiler_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_25_25, (MR_Integer) 0)));
#line 1227 "analysis.m"
        analysis__V_86_86 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_25_25, (MR_Integer) 1));
#line 1227 "analysis.m"
        analysis__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_25_25, (MR_Integer) 2)));
#line 1227 "analysis.m"
        analysis__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_25_25, (MR_Integer) 3)));
#line 1227 "analysis.m"
        analysis__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_25_25, (MR_Integer) 4)));
#line 1227 "analysis.m"
        analysis__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_25_25, (MR_Integer) 5)));
#line 1227 "analysis.m"
        analysis__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_25_25, (MR_Integer) 6)));
#line 1227 "analysis.m"
        analysis__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_25_25, (MR_Integer) 7)));
#line 1227 "analysis.m"
        analysis__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_25_25, (MR_Integer) 8)));
#line 1227 "analysis.m"
        analysis__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_25_25, (MR_Integer) 9)));
#line 1227 "analysis.m"
        analysis__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_25_25, (MR_Integer) 10)));
#line 1227 "analysis.m"
        {
#line 1227 "analysis.m"
          MR_Word base;
#line 1227 "analysis.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 1227 "analysis.m"
          *analysis__STATE_VARIABLE_Info_14 = base;
#line 1227 "analysis.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (analysis__TypeClassInfo_for_compiler_109));
#line 1227 "analysis.m"
          MR_hl_field(MR_mktag(0), base, 1) = analysis__V_86_86;
#line 1227 "analysis.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (analysis__V_87_87));
#line 1227 "analysis.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (analysis__V_88_88));
#line 1227 "analysis.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (analysis__V_89_89));
#line 1227 "analysis.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (analysis__V_90_90));
#line 1227 "analysis.m"
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (analysis__V_91_91));
#line 1227 "analysis.m"
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (analysis__V_30_30));
#line 1227 "analysis.m"
          MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (analysis__V_93_93));
#line 1227 "analysis.m"
          MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (analysis__V_94_94));
#line 1227 "analysis.m"
          MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (analysis__V_95_95));
#line 1227 "analysis.m"
        }
#line 1223 "analysis.m"
      }
#line 1215 "analysis.m"
  }
#line 1211 "analysis.m"
}

#line 1187 "analysis.m"
void MR_CALL 
analysis__combine_imdg_lists_3_p_0(
#line 1187 "analysis.m"
  MR_Word analysis__ArcsA_4,
#line 1187 "analysis.m"
  MR_Word analysis__ArcsB_5,
#line 1187 "analysis.m"
  MR_Word * analysis__HeadVar__3_3)
#line 1187 "analysis.m"
{
#line 1190 "analysis.m"
  {
#line 1190 "analysis.m"
    MR_bool analysis__succeeded;

#line 1190 "analysis.m"
    {
#line 1190 "analysis.m"
      *analysis__HeadVar__3_3 = mercury__list__f_43_43_2_f_0((MR_Word) &analysis__analysis__type_ctor_info_imdg_arc_0, analysis__ArcsA_4, analysis__ArcsB_5);
    }
#line 1190 "analysis.m"
  }
#line 1187 "analysis.m"
}

#line 1185 "analysis.m"
static void MR_CALL 
analysis__combine_func_imdg_3_p_0_1(
#line 1185 "analysis.m"
  MR_Box analysis__closure_arg,
#line 1185 "analysis.m"
  MR_Box analysis__wrapper_arg_1,
#line 1185 "analysis.m"
  MR_Box analysis__wrapper_arg_2,
#line 1185 "analysis.m"
  MR_Box * analysis__wrapper_arg_3)
#line 1185 "analysis.m"
{
#line 1185 "analysis.m"
  {
#line 1185 "analysis.m"
    MR_Box analysis__closure = analysis__closure_arg;
#line 1185 "analysis.m"
    MR_Word analysis__conv0_HeadVar__3_3;

#line 1185 "analysis.m"
    {
#line 1185 "analysis.m"
      analysis__combine_imdg_lists_3_p_0(((MR_Word) analysis__wrapper_arg_1), ((MR_Word) analysis__wrapper_arg_2), &analysis__conv0_HeadVar__3_3);
    }
#line 1185 "analysis.m"
    *analysis__wrapper_arg_3 = ((MR_Box) (analysis__conv0_HeadVar__3_3));
#line 1185 "analysis.m"
  }
#line 1185 "analysis.m"
}

#line 1181 "analysis.m"
void MR_CALL 
analysis__combine_func_imdg_3_p_0(
#line 1181 "analysis.m"
  MR_Word analysis__FuncImdgA_4,
#line 1181 "analysis.m"
  MR_Word analysis__FuncImdgB_5,
#line 1181 "analysis.m"
  MR_Word * analysis__FuncImdg_6)
#line 1181 "analysis.m"
{
#line 1184 "analysis.m"
  {
#line 1184 "analysis.m"
    MR_bool analysis__succeeded;

#line 1185 "analysis.m"
    {
#line 1185 "analysis.m"
      mercury__map__union_4_p_1((MR_Word) &analysis_scalar_common_1[2], (MR_Word) &analysis__analysis__type_ctor_info_func_id_0, (MR_Word) &analysis_scalar_common_2[12], analysis__FuncImdgA_4, analysis__FuncImdgB_5, analysis__FuncImdg_6);
    }
#line 1184 "analysis.m"
  }
#line 1181 "analysis.m"
}

#line 1178 "analysis.m"
static MR_bool MR_CALL 
analysis__clear_imdg_entries_pointing_at_3_3_p_0_1(
#line 1178 "analysis.m"
  MR_Box analysis__closure_arg,
#line 1178 "analysis.m"
  MR_Box analysis__wrapper_arg_1)
#line 1178 "analysis.m"
{
#line 1178 "analysis.m"
  {
#line 1178 "analysis.m"
    MR_bool analysis__succeeded;
#line 1178 "analysis.m"
    MR_Box analysis__closure = analysis__closure_arg;

#line 1178 "analysis.m"
    {
#line 1178 "analysis.m"
      analysis__succeeded = analysis__IntroducedFrom__pred__clear_imdg_entries_pointing_at_3__1178__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 3))), ((MR_Word) analysis__wrapper_arg_1));
    }
#line 1178 "analysis.m"
    return analysis__succeeded;
#line 1178 "analysis.m"
  }
#line 1178 "analysis.m"
}

#line 1174 "analysis.m"
void MR_CALL 
analysis__clear_imdg_entries_pointing_at_3_3_p_0(
#line 1174 "analysis.m"
  MR_Word analysis__ModuleName_4,
#line 1174 "analysis.m"
  MR_Word analysis__Arcs0_5,
#line 1174 "analysis.m"
  MR_Word * analysis__Arcs_6)
#line 1174 "analysis.m"
{
#line 1177 "analysis.m"
  {
#line 1177 "analysis.m"
    MR_bool analysis__succeeded;
#line 1177 "analysis.m"
    MR_Word analysis__V_8_8;

#line 1178 "analysis.m"
    {
#line 1178 "analysis.m"
      analysis__V_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1178 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_8_8, 0) = ((MR_Box) (&analysis_scalar_common_13[1]));
#line 1178 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_8_8, 1) = ((MR_Box) (analysis__clear_imdg_entries_pointing_at_3_3_p_0_1));
#line 1178 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_8_8, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1178 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_8_8, 3) = ((MR_Box) (analysis__ModuleName_4));
#line 1178 "analysis.m"
    }
#line 1178 "analysis.m"
    {
#line 1178 "analysis.m"
      mercury__list__filter_3_p_0((MR_Word) &analysis__analysis__type_ctor_info_imdg_arc_0, analysis__V_8_8, analysis__Arcs0_5, analysis__Arcs_6);
    }
#line 1177 "analysis.m"
  }
#line 1174 "analysis.m"
}

#line 1171 "analysis.m"
static void MR_CALL 
analysis__clear_imdg_entries_pointing_at_2_3_p_0_1(
#line 1171 "analysis.m"
  MR_Box analysis__closure_arg,
#line 1171 "analysis.m"
  MR_Box analysis__wrapper_arg_1,
#line 1171 "analysis.m"
  MR_Box * analysis__wrapper_arg_2)
#line 1171 "analysis.m"
{
#line 1171 "analysis.m"
  {
#line 1171 "analysis.m"
    MR_Box analysis__closure = analysis__closure_arg;
#line 1171 "analysis.m"
    MR_Word analysis__conv0_Arcs_6;

#line 1171 "analysis.m"
    {
#line 1171 "analysis.m"
      analysis__clear_imdg_entries_pointing_at_3_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 3))), ((MR_Word) analysis__wrapper_arg_1), &analysis__conv0_Arcs_6);
    }
#line 1171 "analysis.m"
    *analysis__wrapper_arg_2 = ((MR_Box) (analysis__conv0_Arcs_6));
#line 1171 "analysis.m"
  }
#line 1171 "analysis.m"
}

#line 1166 "analysis.m"
void MR_CALL 
analysis__clear_imdg_entries_pointing_at_2_3_p_0(
#line 1166 "analysis.m"
  MR_Word analysis__ModuleName_4,
#line 1166 "analysis.m"
  MR_Word analysis__FuncMap0_5,
#line 1166 "analysis.m"
  MR_Word * analysis__FuncMap_6)
#line 1166 "analysis.m"
{
#line 1170 "analysis.m"
  {
#line 1170 "analysis.m"
    MR_bool analysis__succeeded;
#line 1170 "analysis.m"
    MR_Word analysis__TypeInfo_10_10;
#line 1170 "analysis.m"
    MR_Word analysis__V_7_7;

#line 1171 "analysis.m"
    {
#line 1171 "analysis.m"
      analysis__V_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1171 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_7_7, 0) = ((MR_Box) (&analysis_scalar_common_4[5]));
#line 1171 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_7_7, 1) = ((MR_Box) (analysis__clear_imdg_entries_pointing_at_2_3_p_0_1));
#line 1171 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_7_7, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1171 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_7_7, 3) = ((MR_Box) (analysis__ModuleName_4));
#line 1171 "analysis.m"
    }
#line 10397 "analysis.c"
    analysis__TypeInfo_10_10 = (MR_Word) &analysis_scalar_common_1[2];
#line 1171 "analysis.m"
    {
#line 1171 "analysis.m"
      mercury__map__map_values_only_3_p_0(analysis__TypeInfo_10_10, analysis__TypeInfo_10_10, (MR_Word) &analysis__analysis__type_ctor_info_func_id_0, analysis__V_7_7, analysis__FuncMap0_5, analysis__FuncMap_6);
    }
#line 1170 "analysis.m"
  }
#line 1166 "analysis.m"
}

#line 1163 "analysis.m"
static void MR_CALL 
analysis__clear_imdg_entries_pointing_at_3_p_0_1(
#line 1163 "analysis.m"
  MR_Box analysis__closure_arg,
#line 1163 "analysis.m"
  MR_Box analysis__wrapper_arg_1,
#line 1163 "analysis.m"
  MR_Box * analysis__wrapper_arg_2)
#line 1163 "analysis.m"
{
#line 1163 "analysis.m"
  {
#line 1163 "analysis.m"
    MR_Box analysis__closure = analysis__closure_arg;
#line 1163 "analysis.m"
    MR_Word analysis__conv0_FuncMap_6;

#line 1163 "analysis.m"
    {
#line 1163 "analysis.m"
      analysis__clear_imdg_entries_pointing_at_2_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 3))), ((MR_Word) analysis__wrapper_arg_1), &analysis__conv0_FuncMap_6);
    }
#line 1163 "analysis.m"
    *analysis__wrapper_arg_2 = ((MR_Box) (analysis__conv0_FuncMap_6));
#line 1163 "analysis.m"
  }
#line 1163 "analysis.m"
}

#line 1158 "analysis.m"
void MR_CALL 
analysis__clear_imdg_entries_pointing_at_3_p_0(
#line 1158 "analysis.m"
  MR_Word analysis__ModuleName_4,
#line 1158 "analysis.m"
  MR_Word analysis__Map0_5,
#line 1158 "analysis.m"
  MR_Word * analysis__Map_6)
#line 1158 "analysis.m"
{
#line 1162 "analysis.m"
  {
#line 1162 "analysis.m"
    MR_bool analysis__succeeded;
#line 1162 "analysis.m"
    MR_Word analysis__TypeInfo_10_10;
#line 1162 "analysis.m"
    MR_Word analysis__V_7_7;

#line 1163 "analysis.m"
    {
#line 1163 "analysis.m"
      analysis__V_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1163 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_7_7, 0) = ((MR_Box) (&analysis_scalar_common_4[4]));
#line 1163 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_7_7, 1) = ((MR_Box) (analysis__clear_imdg_entries_pointing_at_3_p_0_1));
#line 1163 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_7_7, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1163 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_7_7, 3) = ((MR_Box) (analysis__ModuleName_4));
#line 1163 "analysis.m"
    }
#line 10473 "analysis.c"
    analysis__TypeInfo_10_10 = (MR_Word) &analysis_scalar_common_2[4];
#line 1163 "analysis.m"
    {
#line 1163 "analysis.m"
      mercury__map__map_values_only_3_p_0(analysis__TypeInfo_10_10, analysis__TypeInfo_10_10, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, analysis__V_7_7, analysis__Map0_5, analysis__Map_6);
    }
#line 1162 "analysis.m"
  }
#line 1158 "analysis.m"
}

#line 1148 "analysis.m"
void MR_CALL 
analysis__write_clearing_entries_4_p_0(
#line 1148 "analysis.m"
  MR_Word analysis__ModuleName_5,
#line 1148 "analysis.m"
  MR_Word analysis__ImportedModuleName_6)
#line 1148 "analysis.m"
{
#line 1151 "analysis.m"
  {
#line 1151 "analysis.m"
    MR_bool analysis__succeeded;
#line 1151 "analysis.m"
    MR_Word analysis__TypeCtorInfo_18_18;

#line 1152 "analysis.m"
    {
#line 1152 "analysis.m"
      mercury__io__write_string_3_p_0((MR_String) "% Clearing entries involving ");
    }
#line 10506 "analysis.c"
    analysis__TypeCtorInfo_18_18 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 1153 "analysis.m"
    {
#line 1153 "analysis.m"
      mercury__io__write_3_p_0(analysis__TypeCtorInfo_18_18, ((MR_Box) (analysis__ModuleName_5)));
    }
#line 1154 "analysis.m"
    {
#line 1154 "analysis.m"
      mercury__io__write_string_3_p_0((MR_String) " from ");
    }
#line 1155 "analysis.m"
    {
#line 1155 "analysis.m"
      mercury__io__write_3_p_0(analysis__TypeCtorInfo_18_18, ((MR_Box) (analysis__ImportedModuleName_6)));
    }
#line 1156 "analysis.m"
    {
#line 1156 "analysis.m"
      mercury__io__write_string_3_p_0((MR_String) "\'s IMDG.\n");
    }
#line 1151 "analysis.m"
  }
#line 1148 "analysis.m"
}

#line 1141 "analysis.m"
static void MR_CALL 
analysis__update_intermodule_dependencies_2_4_p_0_1(
#line 1141 "analysis.m"
  MR_Box analysis__closure_arg,
#line 1141 "analysis.m"
  MR_Box analysis__wrapper_arg_1,
#line 1141 "analysis.m"
  MR_Box analysis__wrapper_arg_2,
#line 1141 "analysis.m"
  MR_Box * analysis__wrapper_arg_3)
#line 1141 "analysis.m"
{
#line 1141 "analysis.m"
  {
#line 1141 "analysis.m"
    MR_Box analysis__closure = analysis__closure_arg;
#line 1141 "analysis.m"
    MR_Word analysis__conv2_FuncImdg_6;

#line 1141 "analysis.m"
    {
#line 1141 "analysis.m"
      analysis__combine_func_imdg_3_p_0(((MR_Word) analysis__wrapper_arg_1), ((MR_Word) analysis__wrapper_arg_2), &analysis__conv2_FuncImdg_6);
    }
#line 1141 "analysis.m"
    *analysis__wrapper_arg_3 = ((MR_Box) (analysis__conv2_FuncImdg_6));
#line 1141 "analysis.m"
  }
#line 1141 "analysis.m"
}

#line 1129 "analysis.m"
void MR_CALL 
analysis__update_intermodule_dependencies_2_4_p_0(
#line 1129 "analysis.m"
  MR_Word analysis__ModuleName_5,
#line 1129 "analysis.m"
  MR_Word analysis__ImportedModuleName_6,
#line 1129 "analysis.m"
  MR_Word analysis__STATE_VARIABLE_Info_0_13,
#line 1129 "analysis.m"
  MR_Word * analysis__STATE_VARIABLE_Info_14)
#line 1129 "analysis.m"
{
#line 1132 "analysis.m"
  {
#line 1132 "analysis.m"
    MR_bool analysis__succeeded;
#line 1132 "analysis.m"
    MR_Word analysis__TypeCtorInfo_84_84 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 1132 "analysis.m"
    MR_Word analysis__TypeInfo_85_85 = (MR_Word) &analysis_scalar_common_2[5];
#line 1132 "analysis.m"
    MR_Word analysis__IMDG0_8;
#line 1132 "analysis.m"
    MR_Word analysis__IMDG1_10;
#line 1132 "analysis.m"
    MR_Word analysis__IMDG_12;
#line 1132 "analysis.m"
    MR_Word analysis__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 9)));
#line 1132 "analysis.m"
    MR_Word analysis__STATE_VARIABLE_Info_21_21;
#line 1132 "analysis.m"
    MR_Word analysis__V_22_22;
#line 1132 "analysis.m"
    MR_Word analysis__V_23_23;
#line 1132 "analysis.m"
    MR_Word analysis__V_25_25;
#line 1132 "analysis.m"
    MR_Word analysis__V_26_26;
#line 1133 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_compiler_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 0)));
#line 1133 "analysis.m"
    MR_Box analysis__V_27_27 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 1));
#line 1133 "analysis.m"
    MR_Word analysis__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 2)));
#line 1133 "analysis.m"
    MR_Word analysis__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 3)));
#line 1133 "analysis.m"
    MR_Word analysis__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 4)));
#line 1133 "analysis.m"
    MR_Word analysis__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 5)));
#line 1133 "analysis.m"
    MR_Word analysis__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 6)));
#line 1133 "analysis.m"
    MR_Word analysis__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 7)));
#line 1133 "analysis.m"
    MR_Word analysis__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 8)));
#line 1133 "analysis.m"
    MR_Word analysis__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 10)));
#line 1133 "analysis.m"
    MR_Box analysis__conv0_IMDG0_8;
#line 1140 "analysis.m"
    MR_Word analysis__NewArcs_11;
#line 1140 "analysis.m"
    MR_Word analysis__V_19_19;
#line 1140 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_compiler_88;
#line 1140 "analysis.m"
    MR_Box analysis__V_36_36;
#line 1140 "analysis.m"
    MR_Word analysis__V_37_37;
#line 1140 "analysis.m"
    MR_Word analysis__V_38_38;
#line 1140 "analysis.m"
    MR_Word analysis__V_39_39;
#line 1140 "analysis.m"
    MR_Word analysis__V_40_40;
#line 1140 "analysis.m"
    MR_Word analysis__V_41_41;
#line 1140 "analysis.m"
    MR_Word analysis__V_42_42;
#line 1140 "analysis.m"
    MR_Word analysis__V_43_43;
#line 1140 "analysis.m"
    MR_Word analysis__V_44_44;
#line 1140 "analysis.m"
    MR_Box analysis__conv1_NewArcs_11;
#line 1145 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_compiler_94;
#line 1145 "analysis.m"
    MR_Box analysis__V_45_45;
#line 1145 "analysis.m"
    MR_Word analysis__V_46_46;
#line 1145 "analysis.m"
    MR_Word analysis__V_47_47;
#line 1145 "analysis.m"
    MR_Word analysis__V_48_48;
#line 1145 "analysis.m"
    MR_Word analysis__V_49_49;
#line 1145 "analysis.m"
    MR_Word analysis__V_50_50;
#line 1145 "analysis.m"
    MR_Word analysis__V_51_51;
#line 1145 "analysis.m"
    MR_Word analysis__V_52_52;
#line 1145 "analysis.m"
    MR_Word analysis__V_53_53;
#line 1145 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_compiler_95;
#line 1145 "analysis.m"
    MR_Box analysis__V_54_54;
#line 1145 "analysis.m"
    MR_Word analysis__V_55_55;
#line 1145 "analysis.m"
    MR_Word analysis__V_56_56;
#line 1145 "analysis.m"
    MR_Word analysis__V_57_57;
#line 1145 "analysis.m"
    MR_Word analysis__V_58_58;
#line 1145 "analysis.m"
    MR_Word analysis__V_59_59;
#line 1145 "analysis.m"
    MR_Word analysis__V_60_60;
#line 1145 "analysis.m"
    MR_Word analysis__V_61_61;
#line 1145 "analysis.m"
    MR_Word analysis__V_63_63;
#line 1145 "analysis.m"
    MR_Word analysis__V_62_62;
#line 1146 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_compiler_96;
#line 1146 "analysis.m"
    MR_Box analysis__V_64_64;
#line 1146 "analysis.m"
    MR_Word analysis__V_65_65;
#line 1146 "analysis.m"
    MR_Word analysis__V_66_66;
#line 1146 "analysis.m"
    MR_Word analysis__V_67_67;
#line 1146 "analysis.m"
    MR_Word analysis__V_68_68;
#line 1146 "analysis.m"
    MR_Word analysis__V_69_69;
#line 1146 "analysis.m"
    MR_Word analysis__V_70_70;
#line 1146 "analysis.m"
    MR_Word analysis__V_71_71;
#line 1146 "analysis.m"
    MR_Word analysis__V_72_72;
#line 1146 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_compiler_97;
#line 1146 "analysis.m"
    MR_Box analysis__V_73_73;
#line 1146 "analysis.m"
    MR_Word analysis__V_74_74;
#line 1146 "analysis.m"
    MR_Word analysis__V_75_75;
#line 1146 "analysis.m"
    MR_Word analysis__V_76_76;
#line 1146 "analysis.m"
    MR_Word analysis__V_77_77;
#line 1146 "analysis.m"
    MR_Word analysis__V_78_78;
#line 1146 "analysis.m"
    MR_Word analysis__V_79_79;
#line 1146 "analysis.m"
    MR_Word analysis__V_80_80;
#line 1146 "analysis.m"
    MR_Word analysis__V_81_81;
#line 1146 "analysis.m"
    MR_Word analysis__V_82_82;

#line 1133 "analysis.m"
    {
#line 1133 "analysis.m"
      mercury__map__lookup_3_p_0(analysis__TypeCtorInfo_84_84, analysis__TypeInfo_85_85, analysis__V_15_15, ((MR_Box) (analysis__ImportedModuleName_6)), &analysis__conv0_IMDG0_8);
    }
#line 1133 "analysis.m"
    analysis__IMDG0_8 = ((MR_Word) analysis__conv0_IMDG0_8);
#line 1135 "analysis.m"
    {
#line 1135 "analysis.m"
      analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_109_115_103_95_95_104_111_49_95_95_91_51_93_95_48_3_p_0(analysis__ModuleName_5, analysis__ImportedModuleName_6);
    }
#line 1138 "analysis.m"
    {
#line 1138 "analysis.m"
      analysis__clear_imdg_entries_pointing_at_3_p_0(analysis__ModuleName_5, analysis__IMDG0_8, &analysis__IMDG1_10);
    }
#line 1140 "analysis.m"
    analysis__TypeClassInfo_for_compiler_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 0)));
#line 1140 "analysis.m"
    analysis__V_36_36 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 1));
#line 1140 "analysis.m"
    analysis__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 2)));
#line 1140 "analysis.m"
    analysis__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 3)));
#line 1140 "analysis.m"
    analysis__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 4)));
#line 1140 "analysis.m"
    analysis__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 5)));
#line 1140 "analysis.m"
    analysis__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 6)));
#line 1140 "analysis.m"
    analysis__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 7)));
#line 1140 "analysis.m"
    analysis__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 8)));
#line 1140 "analysis.m"
    analysis__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 9)));
#line 1140 "analysis.m"
    analysis__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 10)));
#line 1140 "analysis.m"
    {
#line 1140 "analysis.m"
      analysis__succeeded = mercury__map__elem_2_f_0(analysis__TypeCtorInfo_84_84, analysis__TypeInfo_85_85, ((MR_Box) (analysis__ImportedModuleName_6)), analysis__V_19_19, &analysis__conv1_NewArcs_11);
    }
#line 1140 "analysis.m"
    if (analysis__succeeded)
#line 1140 "analysis.m"
      {
#line 1140 "analysis.m"
        analysis__NewArcs_11 = ((MR_Word) analysis__conv1_NewArcs_11);
#line 1140 "analysis.m"
        analysis__succeeded = MR_TRUE;
#line 1140 "analysis.m"
      }
#line 1140 "analysis.m"
    if (analysis__succeeded)
#line 1141 "analysis.m"
      {
#line 1141 "analysis.m"
        {
#line 1141 "analysis.m"
          mercury__map__union_4_p_1((MR_Word) &analysis_scalar_common_2[4], (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &analysis_scalar_common_2[11], analysis__IMDG1_10, analysis__NewArcs_11, &analysis__IMDG_12);
        }
#line 1141 "analysis.m"
      }
#line 1140 "analysis.m"
    else
#line 1143 "analysis.m"
      analysis__IMDG_12 = analysis__IMDG1_10;
#line 1145 "analysis.m"
    analysis__TypeClassInfo_for_compiler_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 0)));
#line 1145 "analysis.m"
    analysis__V_45_45 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 1));
#line 1145 "analysis.m"
    analysis__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 2)));
#line 1145 "analysis.m"
    analysis__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 3)));
#line 1145 "analysis.m"
    analysis__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 4)));
#line 1145 "analysis.m"
    analysis__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 5)));
#line 1145 "analysis.m"
    analysis__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 6)));
#line 1145 "analysis.m"
    analysis__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 7)));
#line 1145 "analysis.m"
    analysis__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 8)));
#line 1145 "analysis.m"
    analysis__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 9)));
#line 1145 "analysis.m"
    analysis__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 10)));
#line 1145 "analysis.m"
    {
#line 1145 "analysis.m"
      analysis__V_23_23 = mercury__map__f_101_108_101_109_32_58_61_3_f_0(analysis__TypeCtorInfo_84_84, analysis__TypeInfo_85_85, ((MR_Box) (analysis__ImportedModuleName_6)), analysis__V_22_22, ((MR_Box) (analysis__IMDG_12)));
    }
#line 1145 "analysis.m"
    analysis__TypeClassInfo_for_compiler_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 0)));
#line 1145 "analysis.m"
    analysis__V_54_54 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 1));
#line 1145 "analysis.m"
    analysis__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 2)));
#line 1145 "analysis.m"
    analysis__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 3)));
#line 1145 "analysis.m"
    analysis__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 4)));
#line 1145 "analysis.m"
    analysis__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 5)));
#line 1145 "analysis.m"
    analysis__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 6)));
#line 1145 "analysis.m"
    analysis__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 7)));
#line 1145 "analysis.m"
    analysis__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 8)));
#line 1145 "analysis.m"
    analysis__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 9)));
#line 1145 "analysis.m"
    analysis__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 10)));
#line 1145 "analysis.m"
    {
#line 1145 "analysis.m"
      analysis__STATE_VARIABLE_Info_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 1145 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_21_21, 0) = ((MR_Box) (analysis__TypeClassInfo_for_compiler_95));
#line 1145 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_21_21, 1) = analysis__V_54_54;
#line 1145 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_21_21, 2) = ((MR_Box) (analysis__V_55_55));
#line 1145 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_21_21, 3) = ((MR_Box) (analysis__V_56_56));
#line 1145 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_21_21, 4) = ((MR_Box) (analysis__V_57_57));
#line 1145 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_21_21, 5) = ((MR_Box) (analysis__V_58_58));
#line 1145 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_21_21, 6) = ((MR_Box) (analysis__V_59_59));
#line 1145 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_21_21, 7) = ((MR_Box) (analysis__V_60_60));
#line 1145 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_21_21, 8) = ((MR_Box) (analysis__V_61_61));
#line 1145 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_21_21, 9) = ((MR_Box) (analysis__V_23_23));
#line 1145 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_21_21, 10) = ((MR_Box) (analysis__V_63_63));
#line 1145 "analysis.m"
    }
#line 1146 "analysis.m"
    analysis__TypeClassInfo_for_compiler_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_21_21, (MR_Integer) 0)));
#line 1146 "analysis.m"
    analysis__V_64_64 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_21_21, (MR_Integer) 1));
#line 1146 "analysis.m"
    analysis__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_21_21, (MR_Integer) 2)));
#line 1146 "analysis.m"
    analysis__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_21_21, (MR_Integer) 3)));
#line 1146 "analysis.m"
    analysis__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_21_21, (MR_Integer) 4)));
#line 1146 "analysis.m"
    analysis__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_21_21, (MR_Integer) 5)));
#line 1146 "analysis.m"
    analysis__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_21_21, (MR_Integer) 6)));
#line 1146 "analysis.m"
    analysis__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_21_21, (MR_Integer) 7)));
#line 1146 "analysis.m"
    analysis__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_21_21, (MR_Integer) 8)));
#line 1146 "analysis.m"
    analysis__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_21_21, (MR_Integer) 9)));
#line 1146 "analysis.m"
    analysis__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_21_21, (MR_Integer) 10)));
#line 1146 "analysis.m"
    {
#line 1146 "analysis.m"
      analysis__V_25_25 = mercury__map__delete_2_f_0(analysis__TypeCtorInfo_84_84, analysis__TypeInfo_85_85, analysis__V_26_26, ((MR_Box) (analysis__ImportedModuleName_6)));
    }
#line 1146 "analysis.m"
    analysis__TypeClassInfo_for_compiler_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_21_21, (MR_Integer) 0)));
#line 1146 "analysis.m"
    analysis__V_73_73 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_21_21, (MR_Integer) 1));
#line 1146 "analysis.m"
    analysis__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_21_21, (MR_Integer) 2)));
#line 1146 "analysis.m"
    analysis__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_21_21, (MR_Integer) 3)));
#line 1146 "analysis.m"
    analysis__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_21_21, (MR_Integer) 4)));
#line 1146 "analysis.m"
    analysis__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_21_21, (MR_Integer) 5)));
#line 1146 "analysis.m"
    analysis__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_21_21, (MR_Integer) 6)));
#line 1146 "analysis.m"
    analysis__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_21_21, (MR_Integer) 7)));
#line 1146 "analysis.m"
    analysis__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_21_21, (MR_Integer) 8)));
#line 1146 "analysis.m"
    analysis__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_21_21, (MR_Integer) 9)));
#line 1146 "analysis.m"
    analysis__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_21_21, (MR_Integer) 10)));
#line 1146 "analysis.m"
    {
#line 1146 "analysis.m"
      MR_Word base;
#line 1146 "analysis.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 1146 "analysis.m"
      *analysis__STATE_VARIABLE_Info_14 = base;
#line 1146 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (analysis__TypeClassInfo_for_compiler_97));
#line 1146 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 1) = analysis__V_73_73;
#line 1146 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (analysis__V_74_74));
#line 1146 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (analysis__V_75_75));
#line 1146 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (analysis__V_76_76));
#line 1146 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (analysis__V_77_77));
#line 1146 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (analysis__V_78_78));
#line 1146 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (analysis__V_79_79));
#line 1146 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (analysis__V_80_80));
#line 1146 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (analysis__V_81_81));
#line 1146 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (analysis__V_25_25));
#line 1146 "analysis.m"
    }
#line 1132 "analysis.m"
  }
#line 1129 "analysis.m"
}

#line 1126 "analysis.m"
static void MR_CALL 
analysis__update_intermodule_dependencies_4_p_0_1(
#line 1126 "analysis.m"
  MR_Box analysis__closure_arg,
#line 1126 "analysis.m"
  MR_Box analysis__wrapper_arg_1,
#line 1126 "analysis.m"
  MR_Box analysis__wrapper_arg_2,
#line 1126 "analysis.m"
  MR_Box * analysis__wrapper_arg_3)
#line 1126 "analysis.m"
{
#line 1126 "analysis.m"
  {
#line 1126 "analysis.m"
    MR_Box analysis__closure = analysis__closure_arg;
#line 1126 "analysis.m"
    MR_Word analysis__conv0_STATE_VARIABLE_Info_14;

#line 1126 "analysis.m"
    {
#line 1126 "analysis.m"
      analysis__update_intermodule_dependencies_2_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 3))), ((MR_Word) analysis__wrapper_arg_1), ((MR_Word) analysis__wrapper_arg_2), &analysis__conv0_STATE_VARIABLE_Info_14);
    }
#line 1126 "analysis.m"
    *analysis__wrapper_arg_3 = ((MR_Box) (analysis__conv0_STATE_VARIABLE_Info_14));
#line 1126 "analysis.m"
  }
#line 1126 "analysis.m"
}

#line 1122 "analysis.m"
void MR_CALL 
analysis__update_intermodule_dependencies_4_p_0(
#line 1122 "analysis.m"
  MR_Word analysis__ModuleName_5,
#line 1122 "analysis.m"
  MR_Word analysis__LocalImportedModules_6,
#line 1122 "analysis.m"
  MR_Word analysis__STATE_VARIABLE_Info_0_8,
#line 1122 "analysis.m"
  MR_Word * analysis__STATE_VARIABLE_Info_9)
#line 1122 "analysis.m"
{
#line 1125 "analysis.m"
  {
#line 1125 "analysis.m"
    MR_bool analysis__succeeded;
#line 1125 "analysis.m"
    MR_Word analysis__V_10_10;
#line 1126 "analysis.m"
    MR_Box analysis__conv1_STATE_VARIABLE_Info_9;

#line 1126 "analysis.m"
    {
#line 1126 "analysis.m"
      analysis__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1126 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_10_10, 0) = ((MR_Box) (&analysis_scalar_common_6[1]));
#line 1126 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_10_10, 1) = ((MR_Box) (analysis__update_intermodule_dependencies_4_p_0_1));
#line 1126 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_10_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1126 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_10_10, 3) = ((MR_Box) (analysis__ModuleName_5));
#line 1126 "analysis.m"
    }
#line 1126 "analysis.m"
    {
#line 1126 "analysis.m"
      mercury__set__fold_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &analysis__analysis__type_ctor_info_analysis_info_0, analysis__V_10_10, analysis__LocalImportedModules_6, ((MR_Box) (analysis__STATE_VARIABLE_Info_0_8)), &analysis__conv1_STATE_VARIABLE_Info_9);
    }
#line 1126 "analysis.m"
    *analysis__STATE_VARIABLE_Info_9 = ((MR_Word) analysis__conv1_STATE_VARIABLE_Info_9);
#line 1125 "analysis.m"
  }
#line 1122 "analysis.m"
}

#line 1104 "analysis.m"
void MR_CALL 
analysis__write_tainting_module_4_p_0(
#line 1104 "analysis.m"
  MR_Word analysis__ModuleName_5,
#line 1104 "analysis.m"
  MR_Word analysis__ModuleStatus_6)
#line 1104 "analysis.m"
{
#line 1107 "analysis.m"
  {
#line 1107 "analysis.m"
    MR_bool analysis__succeeded;
#line 1107 "analysis.m"
    MR_Word analysis__TypeCtorInfo_17_17 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;

#line 1108 "analysis.m"
    {
#line 1108 "analysis.m"
      mercury__io__print_3_p_0(analysis__TypeCtorInfo_17_17, ((MR_Box) ((MR_String) "% Tainting the overall module status of ")));
    }
#line 1109 "analysis.m"
    {
#line 1109 "analysis.m"
      mercury__io__print_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (analysis__ModuleName_5)));
    }
#line 1110 "analysis.m"
    {
#line 1110 "analysis.m"
      mercury__io__print_3_p_0(analysis__TypeCtorInfo_17_17, ((MR_Box) ((MR_String) " with ")));
    }
#line 1111 "analysis.m"
    {
#line 1111 "analysis.m"
      mercury__io__print_3_p_0((MR_Word) &analysis__analysis__type_ctor_info_analysis_status_0, ((MR_Box) (analysis__ModuleStatus_6)));
    }
#line 1112 "analysis.m"
    {
#line 1112 "analysis.m"
      mercury__io__nl_2_p_0();
    }
#line 1107 "analysis.m"
  }
#line 1104 "analysis.m"
}

#line 1088 "analysis.m"
void MR_CALL 
analysis__write_changed_answer_6_p_0(
#line 1088 "analysis.m"
  MR_Word analysis__TypeInfo_for_Answer_29,
#line 1088 "analysis.m"
  MR_Box analysis__OldAnswer_7,
#line 1088 "analysis.m"
  MR_Box analysis__NewAnswer_8,
#line 1088 "analysis.m"
  MR_Word analysis__Status_9,
#line 1088 "analysis.m"
  MR_Word analysis__DepModules_10)
#line 1088 "analysis.m"
{
#line 1091 "analysis.m"
  {
#line 1091 "analysis.m"
    MR_bool analysis__succeeded;

#line 1092 "analysis.m"
    {
#line 1092 "analysis.m"
      mercury__io__write_string_3_p_0((MR_String) "% ");
    }
#line 1093 "analysis.m"
    {
#line 1093 "analysis.m"
      mercury__io__write_3_p_0(analysis__TypeInfo_for_Answer_29, analysis__OldAnswer_7);
    }
#line 1094 "analysis.m"
    {
#line 1094 "analysis.m"
      mercury__io__write_string_3_p_0((MR_String) " changed to ");
    }
#line 1095 "analysis.m"
    {
#line 1095 "analysis.m"
      mercury__io__write_3_p_0(analysis__TypeInfo_for_Answer_29, analysis__NewAnswer_8);
    }
#line 1096 "analysis.m"
    {
#line 1096 "analysis.m"
      mercury__io__nl_2_p_0();
    }
#line 1097 "analysis.m"
    {
#line 1097 "analysis.m"
      mercury__io__write_string_3_p_0((MR_String) "Mark dependent modules as ");
    }
#line 1098 "analysis.m"
    {
#line 1098 "analysis.m"
      mercury__io__write_3_p_0((MR_Word) &analysis__analysis__type_ctor_info_analysis_status_0, ((MR_Box) (analysis__Status_9)));
    }
#line 1099 "analysis.m"
    {
#line 1099 "analysis.m"
      mercury__io__nl_2_p_0();
    }
#line 1100 "analysis.m"
    {
#line 1100 "analysis.m"
      mercury__io__write_string_3_p_0((MR_String) "The modules to mark are: ");
    }
#line 1101 "analysis.m"
    {
#line 1101 "analysis.m"
      mercury__io__write_3_p_0((MR_Word) &analysis_scalar_common_1[3], ((MR_Box) (analysis__DepModules_10)));
    }
#line 1102 "analysis.m"
    {
#line 1102 "analysis.m"
      mercury__io__nl_2_p_0();
    }
#line 1091 "analysis.m"
  }
#line 1088 "analysis.m"
}

#line 1074 "analysis.m"
void MR_CALL 
analysis__write_no_change_in_result_6_p_0(
#line 1074 "analysis.m"
  MR_Word analysis__TypeInfo_for_Call_27,
#line 1074 "analysis.m"
  MR_Word analysis__TypeInfo_for_Answer_28,
#line 1074 "analysis.m"
  MR_Word analysis__ModuleName_7,
#line 1074 "analysis.m"
  MR_Word analysis__FuncId_8,
#line 1074 "analysis.m"
  MR_Box analysis__Call_9,
#line 1074 "analysis.m"
  MR_Box analysis__NewAnswer_10)
#line 1074 "analysis.m"
{
#line 1077 "analysis.m"
  {
#line 1077 "analysis.m"
    MR_bool analysis__succeeded;

#line 1078 "analysis.m"
    {
#line 1078 "analysis.m"
      mercury__io__write_string_3_p_0((MR_String) "% No change in the result ");
    }
#line 1079 "analysis.m"
    {
#line 1079 "analysis.m"
      mercury__io__write_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (analysis__ModuleName_7)));
    }
#line 1080 "analysis.m"
    {
#line 1080 "analysis.m"
      mercury__io__write_string_3_p_0((MR_String) ".");
    }
#line 1081 "analysis.m"
    {
#line 1081 "analysis.m"
      mercury__io__write_3_p_0((MR_Word) &analysis__analysis__type_ctor_info_func_id_0, ((MR_Box) (analysis__FuncId_8)));
    }
#line 1082 "analysis.m"
    {
#line 1082 "analysis.m"
      mercury__io__write_string_3_p_0((MR_String) ":");
    }
#line 1083 "analysis.m"
    {
#line 1083 "analysis.m"
      mercury__io__write_3_p_0(analysis__TypeInfo_for_Call_27, analysis__Call_9);
    }
#line 1084 "analysis.m"
    {
#line 1084 "analysis.m"
      mercury__io__write_string_3_p_0((MR_String) " --> ");
    }
#line 1085 "analysis.m"
    {
#line 1085 "analysis.m"
      mercury__io__write_3_p_0(analysis__TypeInfo_for_Answer_28, analysis__NewAnswer_10);
    }
#line 1086 "analysis.m"
    {
#line 1086 "analysis.m"
      mercury__io__nl_2_p_0();
    }
#line 1077 "analysis.m"
  }
#line 1074 "analysis.m"
}

#line 1062 "analysis.m"
void MR_CALL 
analysis__ensure_module_status_loaded_6_p_0(
#line 1062 "analysis.m"
  MR_Word analysis__Globals_7,
#line 1062 "analysis.m"
  MR_Word analysis__ModuleName_8,
#line 1062 "analysis.m"
  MR_Word analysis__STATE_VARIABLE_Info_0_12,
#line 1062 "analysis.m"
  MR_Word * analysis__STATE_VARIABLE_Info_13)
#line 1062 "analysis.m"
{
#line 1066 "analysis.m"
  {
#line 1066 "analysis.m"
    MR_bool analysis__succeeded;
#line 1066 "analysis.m"
    MR_Word analysis__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 6)));
#line 1066 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_compiler_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 0)));
#line 1066 "analysis.m"
    MR_Box analysis__V_22_22 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 1));
#line 1066 "analysis.m"
    MR_Word analysis__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 2)));
#line 1066 "analysis.m"
    MR_Word analysis__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 3)));
#line 1066 "analysis.m"
    MR_Word analysis__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 4)));
#line 1066 "analysis.m"
    MR_Word analysis__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 5)));
#line 1066 "analysis.m"
    MR_Word analysis__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 7)));
#line 1066 "analysis.m"
    MR_Word analysis__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 8)));
#line 1066 "analysis.m"
    MR_Word analysis__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 9)));
#line 1066 "analysis.m"
    MR_Word analysis__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 10)));

#line 1066 "analysis.m"
    {
#line 1066 "analysis.m"
      analysis__succeeded = mercury__map__contains_2_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &analysis__analysis__type_ctor_info_analysis_status_0, analysis__V_16_16, ((MR_Box) (analysis__ModuleName_8)));
    }
#line 1066 "analysis.m"
    if (analysis__succeeded)
#line 1067 "analysis.m"
      *analysis__STATE_VARIABLE_Info_13 = analysis__STATE_VARIABLE_Info_0_12;
#line 1066 "analysis.m"
    else
#line 1070 "analysis.m"
      {
#line 1070 "analysis.m"
        MR_Word analysis__TypeClassInfo_for_compiler_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 0)));
#line 1070 "analysis.m"
        MR_Word analysis__ModuleStatus_11;
#line 1070 "analysis.m"
        MR_Box analysis__V_17_17 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 1));
#line 1070 "analysis.m"
        MR_Word analysis__V_20_20;
#line 1070 "analysis.m"
        MR_Word analysis__V_21_21;
#line 1069 "analysis.m"
        MR_Word analysis__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 2)));
#line 1069 "analysis.m"
        MR_Word analysis__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 3)));
#line 1069 "analysis.m"
        MR_Word analysis__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 4)));
#line 1069 "analysis.m"
        MR_Word analysis__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 5)));
#line 1069 "analysis.m"
        MR_Word analysis__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 6)));
#line 1069 "analysis.m"
        MR_Word analysis__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 7)));
#line 1069 "analysis.m"
        MR_Word analysis__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 8)));
#line 1069 "analysis.m"
        MR_Word analysis__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 9)));
#line 1069 "analysis.m"
        MR_Word analysis__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 10)));
#line 1071 "analysis.m"
        MR_Word analysis__TypeClassInfo_for_compiler_63;
#line 1071 "analysis.m"
        MR_Box analysis__V_40_40;
#line 1071 "analysis.m"
        MR_Word analysis__V_41_41;
#line 1071 "analysis.m"
        MR_Word analysis__V_42_42;
#line 1071 "analysis.m"
        MR_Word analysis__V_43_43;
#line 1071 "analysis.m"
        MR_Word analysis__V_44_44;
#line 1071 "analysis.m"
        MR_Word analysis__V_45_45;
#line 1071 "analysis.m"
        MR_Word analysis__V_46_46;
#line 1071 "analysis.m"
        MR_Word analysis__V_47_47;
#line 1071 "analysis.m"
        MR_Word analysis__V_48_48;
#line 1071 "analysis.m"
        MR_Word analysis__TypeClassInfo_for_compiler_66;
#line 1071 "analysis.m"
        MR_Box analysis__V_49_49;
#line 1071 "analysis.m"
        MR_Word analysis__V_50_50;
#line 1071 "analysis.m"
        MR_Word analysis__V_51_51;
#line 1071 "analysis.m"
        MR_Word analysis__V_52_52;
#line 1071 "analysis.m"
        MR_Word analysis__V_53_53;
#line 1071 "analysis.m"
        MR_Word analysis__V_55_55;
#line 1071 "analysis.m"
        MR_Word analysis__V_56_56;
#line 1071 "analysis.m"
        MR_Word analysis__V_57_57;
#line 1071 "analysis.m"
        MR_Word analysis__V_58_58;
#line 1071 "analysis.m"
        MR_Word analysis__V_54_54;

#line 1342 "analysis.m"
        {
#line 1342 "analysis.m"
          analysis__file__read_module_overall_status_6_p_0(analysis__TypeClassInfo_for_compiler_62, analysis__V_17_17, analysis__Globals_7, analysis__ModuleName_8, &analysis__ModuleStatus_11);
        }
#line 1071 "analysis.m"
        analysis__TypeClassInfo_for_compiler_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 0)));
#line 1071 "analysis.m"
        analysis__V_40_40 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 1));
#line 1071 "analysis.m"
        analysis__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 2)));
#line 1071 "analysis.m"
        analysis__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 3)));
#line 1071 "analysis.m"
        analysis__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 4)));
#line 1071 "analysis.m"
        analysis__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 5)));
#line 1071 "analysis.m"
        analysis__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 6)));
#line 1071 "analysis.m"
        analysis__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 7)));
#line 1071 "analysis.m"
        analysis__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 8)));
#line 1071 "analysis.m"
        analysis__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 9)));
#line 1071 "analysis.m"
        analysis__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 10)));
#line 1071 "analysis.m"
        {
#line 1071 "analysis.m"
          analysis__V_21_21 = mercury__map__f_101_108_101_109_32_58_61_3_f_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &analysis__analysis__type_ctor_info_analysis_status_0, ((MR_Box) (analysis__ModuleName_8)), analysis__V_20_20, ((MR_Box) (analysis__ModuleStatus_11)));
        }
#line 1071 "analysis.m"
        analysis__TypeClassInfo_for_compiler_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 0)));
#line 1071 "analysis.m"
        analysis__V_49_49 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 1));
#line 1071 "analysis.m"
        analysis__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 2)));
#line 1071 "analysis.m"
        analysis__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 3)));
#line 1071 "analysis.m"
        analysis__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 4)));
#line 1071 "analysis.m"
        analysis__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 5)));
#line 1071 "analysis.m"
        analysis__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 6)));
#line 1071 "analysis.m"
        analysis__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 7)));
#line 1071 "analysis.m"
        analysis__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 8)));
#line 1071 "analysis.m"
        analysis__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 9)));
#line 1071 "analysis.m"
        analysis__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 10)));
#line 1071 "analysis.m"
        {
#line 1071 "analysis.m"
          MR_Word base;
#line 1071 "analysis.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 1071 "analysis.m"
          *analysis__STATE_VARIABLE_Info_13 = base;
#line 1071 "analysis.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (analysis__TypeClassInfo_for_compiler_66));
#line 1071 "analysis.m"
          MR_hl_field(MR_mktag(0), base, 1) = analysis__V_49_49;
#line 1071 "analysis.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (analysis__V_50_50));
#line 1071 "analysis.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (analysis__V_51_51));
#line 1071 "analysis.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (analysis__V_52_52));
#line 1071 "analysis.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (analysis__V_53_53));
#line 1071 "analysis.m"
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (analysis__V_21_21));
#line 1071 "analysis.m"
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (analysis__V_55_55));
#line 1071 "analysis.m"
          MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (analysis__V_56_56));
#line 1071 "analysis.m"
          MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (analysis__V_57_57));
#line 1071 "analysis.m"
          MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (analysis__V_58_58));
#line 1071 "analysis.m"
        }
#line 1070 "analysis.m"
      }
#line 1066 "analysis.m"
  }
#line 1062 "analysis.m"
}

#line 1038 "analysis.m"
void MR_CALL 
analysis__taint_module_overall_status_7_p_0(
#line 1038 "analysis.m"
  MR_Word analysis__Globals_8,
#line 1038 "analysis.m"
  MR_Word analysis__Status_9,
#line 1038 "analysis.m"
  MR_Word analysis__ModuleName_10,
#line 1038 "analysis.m"
  MR_Word analysis__STATE_VARIABLE_Info_0_15,
#line 1038 "analysis.m"
  MR_Word * analysis__STATE_VARIABLE_Info_16)
#line 1038 "analysis.m"
{
#line 1044 "analysis.m"
  {
#line 1044 "analysis.m"
    MR_bool analysis__succeeded;

#line 1044 "analysis.m"
#line 1044 "analysis.m"
    switch (analysis__Status_9) {
#line 1044 "analysis.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1044 "analysis.m"
      case (MR_Integer) 0:
#line 1044 "analysis.m"
      case (MR_Integer) 1:
#line 1048 "analysis.m"
        {
#line 1048 "analysis.m"
          MR_Word analysis__TypeCtorInfo_56_56;
#line 1048 "analysis.m"
          MR_Word analysis__TypeCtorInfo_57_57;
#line 1048 "analysis.m"
          MR_Word analysis__ModuleStatus0_13;
#line 1048 "analysis.m"
          MR_Word analysis__ModuleStatus_14;
#line 1048 "analysis.m"
          MR_Word analysis__STATE_VARIABLE_Info_19_19;
#line 1048 "analysis.m"
          MR_Word analysis__V_21_21;
#line 1048 "analysis.m"
          MR_Word analysis__V_25_25;
#line 1048 "analysis.m"
          MR_Word analysis__V_26_26;
#line 1048 "analysis.m"
          MR_Word analysis__Debug_66;
#line 1056 "analysis.m"
          MR_Word analysis__TypeClassInfo_for_compiler_55;
#line 1056 "analysis.m"
          MR_Box analysis__V_27_27;
#line 1056 "analysis.m"
          MR_Word analysis__V_28_28;
#line 1056 "analysis.m"
          MR_Word analysis__V_29_29;
#line 1056 "analysis.m"
          MR_Word analysis__V_30_30;
#line 1056 "analysis.m"
          MR_Word analysis__V_31_31;
#line 1056 "analysis.m"
          MR_Word analysis__V_32_32;
#line 1056 "analysis.m"
          MR_Word analysis__V_33_33;
#line 1056 "analysis.m"
          MR_Word analysis__V_34_34;
#line 1056 "analysis.m"
          MR_Word analysis__V_35_35;
#line 1056 "analysis.m"
          MR_Box analysis__conv0_ModuleStatus0_13;
#line 1059 "analysis.m"
          MR_Word analysis__TypeClassInfo_for_compiler_60;
#line 1059 "analysis.m"
          MR_Box analysis__V_36_36;
#line 1059 "analysis.m"
          MR_Word analysis__V_37_37;
#line 1059 "analysis.m"
          MR_Word analysis__V_38_38;
#line 1059 "analysis.m"
          MR_Word analysis__V_39_39;
#line 1059 "analysis.m"
          MR_Word analysis__V_40_40;
#line 1059 "analysis.m"
          MR_Word analysis__V_41_41;
#line 1059 "analysis.m"
          MR_Word analysis__V_42_42;
#line 1059 "analysis.m"
          MR_Word analysis__V_43_43;
#line 1059 "analysis.m"
          MR_Word analysis__V_44_44;
#line 1059 "analysis.m"
          MR_Word analysis__TypeClassInfo_for_compiler_61;
#line 1059 "analysis.m"
          MR_Box analysis__V_45_45;
#line 1059 "analysis.m"
          MR_Word analysis__V_46_46;
#line 1059 "analysis.m"
          MR_Word analysis__V_47_47;
#line 1059 "analysis.m"
          MR_Word analysis__V_48_48;
#line 1059 "analysis.m"
          MR_Word analysis__V_49_49;
#line 1059 "analysis.m"
          MR_Word analysis__V_51_51;
#line 1059 "analysis.m"
          MR_Word analysis__V_52_52;
#line 1059 "analysis.m"
          MR_Word analysis__V_53_53;
#line 1059 "analysis.m"
          MR_Word analysis__V_54_54;
#line 1059 "analysis.m"
          MR_Word analysis__V_50_50;

#line 1054 "analysis.m"
          {
#line 1054 "analysis.m"
            analysis__ensure_module_status_loaded_6_p_0(analysis__Globals_8, analysis__ModuleName_10, analysis__STATE_VARIABLE_Info_0_15, &analysis__STATE_VARIABLE_Info_19_19);
          }
#line 1056 "analysis.m"
          analysis__TypeClassInfo_for_compiler_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_19_19, (MR_Integer) 0)));
#line 1056 "analysis.m"
          analysis__V_27_27 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_19_19, (MR_Integer) 1));
#line 1056 "analysis.m"
          analysis__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_19_19, (MR_Integer) 2)));
#line 1056 "analysis.m"
          analysis__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_19_19, (MR_Integer) 3)));
#line 1056 "analysis.m"
          analysis__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_19_19, (MR_Integer) 4)));
#line 1056 "analysis.m"
          analysis__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_19_19, (MR_Integer) 5)));
#line 1056 "analysis.m"
          analysis__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_19_19, (MR_Integer) 6)));
#line 1056 "analysis.m"
          analysis__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_19_19, (MR_Integer) 7)));
#line 1056 "analysis.m"
          analysis__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_19_19, (MR_Integer) 8)));
#line 1056 "analysis.m"
          analysis__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_19_19, (MR_Integer) 9)));
#line 1056 "analysis.m"
          analysis__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_19_19, (MR_Integer) 10)));
#line 11605 "analysis.c"
          analysis__TypeCtorInfo_56_56 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 11607 "analysis.c"
          analysis__TypeCtorInfo_57_57 = (MR_Word) &analysis__analysis__type_ctor_info_analysis_status_0;
#line 1056 "analysis.m"
          {
#line 1056 "analysis.m"
            analysis__conv0_ModuleStatus0_13 = mercury__map__det_elem_2_f_0(analysis__TypeCtorInfo_56_56, analysis__TypeCtorInfo_57_57, ((MR_Box) (analysis__ModuleName_10)), analysis__V_21_21);
          }
#line 1056 "analysis.m"
          analysis__ModuleStatus0_13 = ((MR_Word) analysis__conv0_ModuleStatus0_13);
#line 1057 "analysis.m"
          {
#line 1057 "analysis.m"
            analysis__ModuleStatus_14 = analysis__lub_2_f_0(analysis__ModuleStatus0_13, analysis__Status_9);
          }
#line 1387 "analysis.m"
{
#define MR_PROC_LABEL analysis__taint_module_overall_status_7_p_0


		{
#line 1387 "analysis.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&analysis__mutable_variable_debug_analysis_lock,
                    "analysis__mutable_variable_debug_analysis_lock");
#endif

#line 11633 "analysis.c"

		;}
#undef MR_PROC_LABEL
#line 1387 "analysis.m"
}
#line 1387 "analysis.m"
{
#define MR_PROC_LABEL analysis__taint_module_overall_status_7_p_0

	MR_Word X;

		{
#line 1387 "analysis.m"
X = analysis__mutable_variable_debug_analysis;

#line 11649 "analysis.c"

		;}
#undef MR_PROC_LABEL
	 analysis__Debug_66  = X;
#line 1387 "analysis.m"
}
#line 1387 "analysis.m"
{
#define MR_PROC_LABEL analysis__taint_module_overall_status_7_p_0


		{
#line 1387 "analysis.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&analysis__mutable_variable_debug_analysis_lock,
                    "analysis__mutable_variable_debug_analysis_lock");
#endif

#line 11668 "analysis.c"

		;}
#undef MR_PROC_LABEL
#line 1387 "analysis.m"
}
#line 1400 "analysis.m"
#line 1400 "analysis.m"
          switch (analysis__Debug_66) {
#line 1400 "analysis.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1400 "analysis.m"
            case (MR_Integer) 0:
#line 1401 "analysis.m"
              {
#line 1401 "analysis.m"
              }
#line 1400 "analysis.m"
              break;
#line 1400 "analysis.m"
            case (MR_Integer) 1:
#line 1399 "analysis.m"
              {
#line 1399 "analysis.m"
                analysis__write_tainting_module_4_p_0(analysis__ModuleName_10, analysis__ModuleStatus_14);
              }
#line 1400 "analysis.m"
              break;
#line 1400 "analysis.m"
          }
#line 1059 "analysis.m"
          analysis__TypeClassInfo_for_compiler_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_19_19, (MR_Integer) 0)));
#line 1059 "analysis.m"
          analysis__V_36_36 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_19_19, (MR_Integer) 1));
#line 1059 "analysis.m"
          analysis__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_19_19, (MR_Integer) 2)));
#line 1059 "analysis.m"
          analysis__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_19_19, (MR_Integer) 3)));
#line 1059 "analysis.m"
          analysis__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_19_19, (MR_Integer) 4)));
#line 1059 "analysis.m"
          analysis__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_19_19, (MR_Integer) 5)));
#line 1059 "analysis.m"
          analysis__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_19_19, (MR_Integer) 6)));
#line 1059 "analysis.m"
          analysis__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_19_19, (MR_Integer) 7)));
#line 1059 "analysis.m"
          analysis__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_19_19, (MR_Integer) 8)));
#line 1059 "analysis.m"
          analysis__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_19_19, (MR_Integer) 9)));
#line 1059 "analysis.m"
          analysis__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_19_19, (MR_Integer) 10)));
#line 1059 "analysis.m"
          {
#line 1059 "analysis.m"
            analysis__V_26_26 = mercury__map__f_101_108_101_109_32_58_61_3_f_0(analysis__TypeCtorInfo_56_56, analysis__TypeCtorInfo_57_57, ((MR_Box) (analysis__ModuleName_10)), analysis__V_25_25, ((MR_Box) (analysis__ModuleStatus_14)));
          }
#line 1059 "analysis.m"
          analysis__TypeClassInfo_for_compiler_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_19_19, (MR_Integer) 0)));
#line 1059 "analysis.m"
          analysis__V_45_45 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_19_19, (MR_Integer) 1));
#line 1059 "analysis.m"
          analysis__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_19_19, (MR_Integer) 2)));
#line 1059 "analysis.m"
          analysis__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_19_19, (MR_Integer) 3)));
#line 1059 "analysis.m"
          analysis__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_19_19, (MR_Integer) 4)));
#line 1059 "analysis.m"
          analysis__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_19_19, (MR_Integer) 5)));
#line 1059 "analysis.m"
          analysis__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_19_19, (MR_Integer) 6)));
#line 1059 "analysis.m"
          analysis__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_19_19, (MR_Integer) 7)));
#line 1059 "analysis.m"
          analysis__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_19_19, (MR_Integer) 8)));
#line 1059 "analysis.m"
          analysis__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_19_19, (MR_Integer) 9)));
#line 1059 "analysis.m"
          analysis__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_19_19, (MR_Integer) 10)));
#line 1059 "analysis.m"
          {
#line 1059 "analysis.m"
            MR_Word base;
#line 1059 "analysis.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 1059 "analysis.m"
            *analysis__STATE_VARIABLE_Info_16 = base;
#line 1059 "analysis.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (analysis__TypeClassInfo_for_compiler_61));
#line 1059 "analysis.m"
            MR_hl_field(MR_mktag(0), base, 1) = analysis__V_45_45;
#line 1059 "analysis.m"
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (analysis__V_46_46));
#line 1059 "analysis.m"
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (analysis__V_47_47));
#line 1059 "analysis.m"
            MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (analysis__V_48_48));
#line 1059 "analysis.m"
            MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (analysis__V_49_49));
#line 1059 "analysis.m"
            MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (analysis__V_26_26));
#line 1059 "analysis.m"
            MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (analysis__V_51_51));
#line 1059 "analysis.m"
            MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (analysis__V_52_52));
#line 1059 "analysis.m"
            MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (analysis__V_53_53));
#line 1059 "analysis.m"
            MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (analysis__V_54_54));
#line 1059 "analysis.m"
          }
#line 1048 "analysis.m"
        }
#line 1044 "analysis.m"
        break;
#line 1044 "analysis.m"
      case (MR_Integer) 2:
#line 1044 "analysis.m"
        *analysis__STATE_VARIABLE_Info_16 = analysis__STATE_VARIABLE_Info_0_15;
#line 1044 "analysis.m"
        break;
#line 1044 "analysis.m"
    }
#line 1044 "analysis.m"
  }
#line 1038 "analysis.m"
}

#line 1030 "analysis.m"
MR_bool MR_CALL 
analysis__arc_module_name_3_f_0(
#line 1030 "analysis.m"
  MR_Word analysis__TypeClassInfo_for_call_pattern_11,
#line 1030 "analysis.m"
  MR_Box analysis__FuncInfo_5,
#line 1030 "analysis.m"
  MR_Box analysis__CallA_6,
#line 1030 "analysis.m"
  MR_Word analysis__HeadVar__3_3,
#line 1030 "analysis.m"
  MR_Word * analysis__ModuleName_8)
#line 1030 "analysis.m"
{
#line 1034 "analysis.m"
  {
#line 1034 "analysis.m"
    MR_bool analysis__succeeded;
#line 1034 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_call_pattern_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__3_3, (MR_Integer) 0)));
#line 1034 "analysis.m"
    MR_Word analysis__TypeInfo_14_14;
#line 1034 "analysis.m"
    MR_Word analysis__TypeInfo_15_15;
#line 1034 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_partial_order_16;
#line 1034 "analysis.m"
    MR_Box analysis__CallB0_7 = (MR_hl_field(MR_mktag(0), analysis__HeadVar__3_3, (MR_Integer) 1));
#line 1034 "analysis.m"
    MR_Box analysis__CallB_9;
#line 1034 "analysis.m"
    MR_Word analysis__V_10_10;
#line 135 "analysis.m"
    MR_bool MR_CALL (* analysis__func_0)(MR_Box, MR_Box, MR_Box, MR_Box);

#line 1034 "analysis.m"
    *analysis__ModuleName_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__3_3, (MR_Integer) 2)));
#line 1035 "analysis.m"
    {
#line 1035 "analysis.m"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_call_pattern_12, (MR_Integer) 4, &analysis__TypeInfo_14_14);
    }
#line 1035 "analysis.m"
    {
#line 1035 "analysis.m"
      analysis__V_10_10 = mercury__univ__univ_1_f_0(analysis__TypeInfo_14_14, analysis__CallB0_7);
    }
#line 1035 "analysis.m"
    {
#line 1035 "analysis.m"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_call_pattern_11, (MR_Integer) 4, &analysis__TypeInfo_15_15);
    }
#line 1035 "analysis.m"
    {
#line 1035 "analysis.m"
      mercury__univ__det_univ_to_type_2_p_0(analysis__TypeInfo_15_15, analysis__V_10_10, &analysis__CallB_9);
    }
#line 11854 "analysis.c"
    {
#line 11856 "analysis.c"
      mercury__private_builtin__superclass_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_call_pattern_11, (MR_Integer) 1, &analysis__TypeClassInfo_for_partial_order_16);
    }
#line 135 "analysis.m"
    analysis__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), analysis__TypeClassInfo_for_partial_order_16, (MR_Integer) 0)), (MR_Integer) 6)));
#line 135 "analysis.m"
    {
#line 135 "analysis.m"
      analysis__succeeded = analysis__func_0(((MR_Box) analysis__TypeClassInfo_for_partial_order_16), analysis__FuncInfo_5, analysis__CallA_6, analysis__CallB_9);
    }
#line 1034 "analysis.m"
    return analysis__succeeded;
#line 1034 "analysis.m"
  }
#line 1030 "analysis.m"
}

#line 1023 "analysis.m"
static MR_bool MR_CALL 
analysis__imdg_dependent_modules_5_f_0_1(
#line 1023 "analysis.m"
  MR_Box analysis__closure_arg,
#line 1023 "analysis.m"
  MR_Box analysis__wrapper_arg_1,
#line 1023 "analysis.m"
  MR_Box * analysis__wrapper_arg_2)
#line 1023 "analysis.m"
{
#line 1023 "analysis.m"
  {
#line 1023 "analysis.m"
    MR_bool analysis__succeeded;
#line 1023 "analysis.m"
    MR_Box analysis__closure = analysis__closure_arg;
#line 1023 "analysis.m"
    MR_Word analysis__conv2_ModuleName_8;

#line 1023 "analysis.m"
    {
#line 1023 "analysis.m"
      analysis__succeeded = analysis__arc_module_name_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 3))), (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 4)), (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 5)), ((MR_Word) analysis__wrapper_arg_1), &analysis__conv2_ModuleName_8);
    }
#line 1023 "analysis.m"
    if (analysis__succeeded)
#line 1023 "analysis.m"
      {
#line 1023 "analysis.m"
        *analysis__wrapper_arg_2 = ((MR_Box) (analysis__conv2_ModuleName_8));
#line 1023 "analysis.m"
        analysis__succeeded = MR_TRUE;
#line 1023 "analysis.m"
      }
#line 1023 "analysis.m"
    return analysis__succeeded;
#line 1023 "analysis.m"
  }
#line 1023 "analysis.m"
}

#line 1014 "analysis.m"
MR_Word MR_CALL 
analysis__imdg_dependent_modules_5_f_0(
#line 1014 "analysis.m"
  MR_Word analysis__TypeClassInfo_for_call_pattern_16,
#line 1014 "analysis.m"
  MR_Word analysis__ModuleMap_7,
#line 1014 "analysis.m"
  MR_String analysis__AnalysisName_8,
#line 1014 "analysis.m"
  MR_Word analysis__FuncId_9,
#line 1014 "analysis.m"
  MR_Box analysis__FuncInfo_10,
#line 1014 "analysis.m"
  MR_Box analysis__Call_11)
#line 1014 "analysis.m"
{
#line 1018 "analysis.m"
  {
#line 1018 "analysis.m"
    MR_bool analysis__succeeded;
#line 1018 "analysis.m"
    MR_Word analysis__HeadVar__6_6;
#line 1018 "analysis.m"
    MR_Word analysis__IMDGEntries_13;
#line 1020 "analysis.m"
    MR_Word analysis__TypeCtorInfo_19_19;
#line 1020 "analysis.m"
    MR_Word analysis__TypeInfo_20_20;
#line 1020 "analysis.m"
    MR_Word analysis__FuncAnalysisMap_12;
#line 1020 "analysis.m"
    MR_Box analysis__conv0_FuncAnalysisMap_12;
#line 1021 "analysis.m"
    MR_Box analysis__conv1_IMDGEntries_13;

#line 1020 "analysis.m"
    {
#line 1020 "analysis.m"
      analysis__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &analysis_scalar_common_2[4], analysis__ModuleMap_7, ((MR_Box) (analysis__AnalysisName_8)), &analysis__conv0_FuncAnalysisMap_12);
    }
#line 1020 "analysis.m"
    if (analysis__succeeded)
#line 1020 "analysis.m"
      {
#line 1020 "analysis.m"
        analysis__FuncAnalysisMap_12 = ((MR_Word) analysis__conv0_FuncAnalysisMap_12);
#line 1020 "analysis.m"
        analysis__succeeded = MR_TRUE;
#line 1020 "analysis.m"
      }
#line 1020 "analysis.m"
    if (analysis__succeeded)
#line 1020 "analysis.m"
      {
#line 11970 "analysis.c"
        analysis__TypeCtorInfo_19_19 = (MR_Word) &analysis__analysis__type_ctor_info_func_id_0;
#line 11972 "analysis.c"
        analysis__TypeInfo_20_20 = (MR_Word) &analysis_scalar_common_1[2];
#line 1021 "analysis.m"
        {
#line 1021 "analysis.m"
          analysis__succeeded = mercury__map__search_3_p_0(analysis__TypeCtorInfo_19_19, analysis__TypeInfo_20_20, analysis__FuncAnalysisMap_12, ((MR_Box) (analysis__FuncId_9)), &analysis__conv1_IMDGEntries_13);
        }
#line 1021 "analysis.m"
        if (analysis__succeeded)
#line 1021 "analysis.m"
          {
#line 1021 "analysis.m"
            analysis__IMDGEntries_13 = ((MR_Word) analysis__conv1_IMDGEntries_13);
#line 1021 "analysis.m"
            analysis__succeeded = MR_TRUE;
#line 1021 "analysis.m"
          }
#line 1020 "analysis.m"
      }
#line 1018 "analysis.m"
    if (analysis__succeeded)
#line 1023 "analysis.m"
      {
#line 1023 "analysis.m"
        MR_Word analysis__TypeCtorInfo_21_21 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 1023 "analysis.m"
        MR_Word analysis__V_14_14;
#line 1023 "analysis.m"
        MR_Word analysis__V_15_15;

#line 1023 "analysis.m"
        {
#line 1023 "analysis.m"
          analysis__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1023 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__V_15_15, 0) = ((MR_Box) (&analysis_scalar_common_7[2]));
#line 1023 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__V_15_15, 1) = ((MR_Box) (analysis__imdg_dependent_modules_5_f_0_1));
#line 1023 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__V_15_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1023 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__V_15_15, 3) = ((MR_Box) (analysis__TypeClassInfo_for_call_pattern_16));
#line 1023 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__V_15_15, 4) = analysis__FuncInfo_10;
#line 1023 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__V_15_15, 5) = analysis__Call_11;
#line 1023 "analysis.m"
        }
#line 1023 "analysis.m"
        {
#line 1023 "analysis.m"
          analysis__V_14_14 = mercury__list__filter_map_2_f_0((MR_Word) &analysis__analysis__type_ctor_info_imdg_arc_0, analysis__TypeCtorInfo_21_21, analysis__V_15_15, analysis__IMDGEntries_13);
        }
#line 1023 "analysis.m"
        {
#line 1023 "analysis.m"
          analysis__HeadVar__6_6 = mercury__set__from_list_1_f_0(analysis__TypeCtorInfo_21_21, analysis__V_14_14);
        }
#line 1023 "analysis.m"
      }
#line 1018 "analysis.m"
    else
#line 1026 "analysis.m"
      {
#line 1026 "analysis.m"
        {
#line 1026 "analysis.m"
          analysis__HeadVar__6_6 = mercury__set__init_0_f_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0);
        }
#line 1026 "analysis.m"
      }
#line 1018 "analysis.m"
    return analysis__HeadVar__6_6;
#line 1018 "analysis.m"
  }
#line 1014 "analysis.m"
}

#line 992 "analysis.m"
void MR_CALL 
analysis__replace_result_in_list_6_p_0(
#line 992 "analysis.m"
  MR_Word analysis__TypeClassInfo_for_analysis_25,
#line 992 "analysis.m"
  MR_Box analysis__FuncInfo_7,
#line 992 "analysis.m"
  MR_Box analysis__Call_8,
#line 992 "analysis.m"
  MR_Box analysis__Answer_9,
#line 992 "analysis.m"
  MR_Word analysis__Status_10,
#line 992 "analysis.m"
  MR_Word analysis__Results0_11,
#line 992 "analysis.m"
  MR_Word * analysis__Results_12)
#line 992 "analysis.m"
{
#line 999 "analysis.m"
  {
#line 999 "analysis.m"
    MR_bool analysis__succeeded;

#line 999 "analysis.m"
    if ((analysis__Results0_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 999 "analysis.m"
      {
#line 1000 "analysis.m"
        {
#line 1000 "analysis.m"
          mercury__require__unexpected_3_p_0((MR_String) "analysis", (MR_String) "predicate \140analysis.replace_result_in_list\'/6", (MR_String) "found no result to replace");
#line 1000 "analysis.m"
          return;
        }
#line 999 "analysis.m"
      }
#line 999 "analysis.m"
    else
#line 1002 "analysis.m"
      {
#line 1002 "analysis.m"
        MR_Word analysis__TypeInfo_26_26;
#line 1002 "analysis.m"
        MR_Word analysis__TypeClassInfo_for_analysis_27;
#line 1002 "analysis.m"
        MR_Word analysis__TypeInfo_30_30;
#line 1002 "analysis.m"
        MR_Word analysis__H0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), analysis__Results0_11, (MR_Integer) 0)));
#line 1002 "analysis.m"
        MR_Word analysis__T0_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), analysis__Results0_11, (MR_Integer) 1)));
#line 1002 "analysis.m"
        MR_Box analysis__HCall_15;
#line 1002 "analysis.m"
        MR_Word analysis__H_16;
#line 1002 "analysis.m"
        MR_Word analysis__T_17;
#line 1002 "analysis.m"
        MR_Word analysis__V_18_18;
#line 1002 "analysis.m"
        MR_Box analysis__V_19_19;
#line 1003 "analysis.m"
        MR_Box analysis__V_23_23;
#line 1003 "analysis.m"
        MR_Word analysis__V_24_24;
#line 1004 "analysis.m"
        MR_Word analysis__TypeClassInfo_for_call_pattern_31;
#line 1004 "analysis.m"
        MR_Word analysis__TypeClassInfo_for_partial_order_33;
#line 135 "analysis.m"
        MR_bool MR_CALL (* analysis__func_0)(MR_Box, MR_Box, MR_Box, MR_Box);

#line 1003 "analysis.m"
        analysis__TypeClassInfo_for_analysis_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__H0_13, (MR_Integer) 0)));
#line 1003 "analysis.m"
        analysis__V_19_19 = (MR_hl_field(MR_mktag(0), analysis__H0_13, (MR_Integer) 1));
#line 1003 "analysis.m"
        analysis__V_23_23 = (MR_hl_field(MR_mktag(0), analysis__H0_13, (MR_Integer) 2));
#line 1003 "analysis.m"
        analysis__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__H0_13, (MR_Integer) 3)));
#line 1003 "analysis.m"
        {
#line 1003 "analysis.m"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_27, (MR_Integer) 4, &analysis__TypeInfo_26_26);
        }
#line 1003 "analysis.m"
        {
#line 1003 "analysis.m"
          analysis__V_18_18 = mercury__univ__univ_1_f_0(analysis__TypeInfo_26_26, analysis__V_19_19);
        }
#line 1003 "analysis.m"
        {
#line 1003 "analysis.m"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_25, (MR_Integer) 4, &analysis__TypeInfo_30_30);
        }
#line 1003 "analysis.m"
        {
#line 1003 "analysis.m"
          mercury__univ__det_univ_to_type_2_p_0(analysis__TypeInfo_30_30, analysis__V_18_18, &analysis__HCall_15);
        }
#line 12150 "analysis.c"
        {
#line 12152 "analysis.c"
          mercury__private_builtin__superclass_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_25, (MR_Integer) 1, &analysis__TypeClassInfo_for_call_pattern_31);
        }
#line 12155 "analysis.c"
        {
#line 12157 "analysis.c"
          mercury__private_builtin__superclass_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_call_pattern_31, (MR_Integer) 1, &analysis__TypeClassInfo_for_partial_order_33);
        }
#line 135 "analysis.m"
        analysis__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), analysis__TypeClassInfo_for_partial_order_33, (MR_Integer) 0)), (MR_Integer) 6)));
#line 135 "analysis.m"
        {
#line 135 "analysis.m"
          analysis__succeeded = analysis__func_0(((MR_Box) analysis__TypeClassInfo_for_partial_order_33), analysis__FuncInfo_7, analysis__Call_8, analysis__HCall_15);
        }
#line 1004 "analysis.m"
        if (analysis__succeeded)
#line 1005 "analysis.m"
          {
#line 1005 "analysis.m"
            {
#line 1005 "analysis.m"
              analysis__H_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1005 "analysis.m"
              MR_hl_field(MR_mktag(0), analysis__H_16, 0) = ((MR_Box) (analysis__TypeClassInfo_for_analysis_25));
#line 1005 "analysis.m"
              MR_hl_field(MR_mktag(0), analysis__H_16, 1) = analysis__Call_8;
#line 1005 "analysis.m"
              MR_hl_field(MR_mktag(0), analysis__H_16, 2) = analysis__Answer_9;
#line 1005 "analysis.m"
              MR_hl_field(MR_mktag(0), analysis__H_16, 3) = ((MR_Box) (analysis__Status_10));
#line 1005 "analysis.m"
            }
#line 1006 "analysis.m"
            analysis__T_17 = analysis__T0_14;
#line 1005 "analysis.m"
          }
#line 1004 "analysis.m"
        else
#line 1008 "analysis.m"
          {
#line 1008 "analysis.m"
            analysis__H_16 = analysis__H0_13;
#line 1009 "analysis.m"
            {
#line 1009 "analysis.m"
              analysis__replace_result_in_list_6_p_0(analysis__TypeClassInfo_for_analysis_25, analysis__FuncInfo_7, analysis__Call_8, analysis__Answer_9, analysis__Status_10, analysis__T0_14, &analysis__T_17);
            }
#line 1008 "analysis.m"
          }
#line 1011 "analysis.m"
        {
#line 1011 "analysis.m"
          MR_Word base;
#line 1011 "analysis.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1011 "analysis.m"
          *analysis__Results_12 = base;
#line 1011 "analysis.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (analysis__H_16));
#line 1011 "analysis.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (analysis__T_17));
#line 1011 "analysis.m"
        }
#line 1002 "analysis.m"
      }
#line 999 "analysis.m"
  }
#line 992 "analysis.m"
}

#line 974 "analysis.m"
void MR_CALL 
analysis__replace_result_in_analysis_map_8_p_0(
#line 974 "analysis.m"
  MR_Word analysis__TypeClassInfo_for_analysis_24,
#line 974 "analysis.m"
  MR_Word analysis__ModuleName_9,
#line 974 "analysis.m"
  MR_Word analysis__FuncId_10,
#line 974 "analysis.m"
  MR_Box analysis__FuncInfo_11,
#line 974 "analysis.m"
  MR_Box analysis__CallPattern_12,
#line 974 "analysis.m"
  MR_Box analysis__AnswerPattern_13,
#line 974 "analysis.m"
  MR_Word analysis__Status_14,
#line 974 "analysis.m"
  MR_Word analysis__Map0_15,
#line 974 "analysis.m"
  MR_Word * analysis__Map_16)
#line 974 "analysis.m"
{
#line 981 "analysis.m"
  {
#line 981 "analysis.m"
    MR_bool analysis__succeeded;
#line 981 "analysis.m"
    MR_Word analysis__TypeCtorInfo_25_25;
#line 981 "analysis.m"
    MR_Word analysis__TypeInfo_26_26;
#line 981 "analysis.m"
    MR_Word analysis__TypeCtorInfo_27_27;
#line 981 "analysis.m"
    MR_Word analysis__TypeInfo_28_28;
#line 981 "analysis.m"
    MR_Word analysis__TypeCtorInfo_29_29;
#line 981 "analysis.m"
    MR_Word analysis__TypeInfo_30_30;
#line 981 "analysis.m"
    MR_String analysis__AnalysisName_17;
#line 981 "analysis.m"
    MR_Word analysis__ModuleResults0_18;
#line 981 "analysis.m"
    MR_Word analysis__AnalysisResults0_19;
#line 981 "analysis.m"
    MR_Word analysis__FuncResults0_20;
#line 981 "analysis.m"
    MR_Word analysis__FuncResults_21;
#line 981 "analysis.m"
    MR_Word analysis__V_22_22;
#line 981 "analysis.m"
    MR_Word analysis__V_23_23;
#line 86 "analysis.m"
    MR_Box analysis__V_31_31;
#line 86 "analysis.m"
    MR_Box analysis__V_32_32;
#line 86 "analysis.m"
    MR_Box MR_CALL (* analysis__func_0)(MR_Box) = ((MR_Box MR_CALL (*)(MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), analysis__TypeClassInfo_for_analysis_24, (MR_Integer) 0)), (MR_Integer) 5)));
#line 86 "analysis.m"
    MR_Box analysis__conv1_AnalysisName_17;
#line 983 "analysis.m"
    MR_Box analysis__conv2_ModuleResults0_18;
#line 984 "analysis.m"
    MR_Box analysis__conv3_AnalysisResults0_19;
#line 985 "analysis.m"
    MR_Box analysis__conv4_FuncResults0_20;

#line 86 "analysis.m"
    {
#line 86 "analysis.m"
      analysis__conv1_AnalysisName_17 = analysis__func_0(((MR_Box) analysis__TypeClassInfo_for_analysis_24));
    }
#line 86 "analysis.m"
    analysis__AnalysisName_17 = ((MR_String) analysis__conv1_AnalysisName_17);
#line 12298 "analysis.c"
    analysis__TypeCtorInfo_25_25 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 12300 "analysis.c"
    analysis__TypeInfo_26_26 = (MR_Word) &analysis_scalar_common_2[3];
#line 983 "analysis.m"
    {
#line 983 "analysis.m"
      analysis__conv2_ModuleResults0_18 = mercury__map__lookup_2_f_0(analysis__TypeCtorInfo_25_25, analysis__TypeInfo_26_26, analysis__Map0_15, ((MR_Box) (analysis__ModuleName_9)));
    }
#line 983 "analysis.m"
    analysis__ModuleResults0_18 = ((MR_Word) analysis__conv2_ModuleResults0_18);
#line 12309 "analysis.c"
    analysis__TypeCtorInfo_27_27 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 12311 "analysis.c"
    analysis__TypeInfo_28_28 = (MR_Word) &analysis_scalar_common_2[2];
#line 984 "analysis.m"
    {
#line 984 "analysis.m"
      analysis__conv3_AnalysisResults0_19 = mercury__map__lookup_2_f_0(analysis__TypeCtorInfo_27_27, analysis__TypeInfo_28_28, analysis__ModuleResults0_18, ((MR_Box) (analysis__AnalysisName_17)));
    }
#line 984 "analysis.m"
    analysis__AnalysisResults0_19 = ((MR_Word) analysis__conv3_AnalysisResults0_19);
#line 12320 "analysis.c"
    analysis__TypeCtorInfo_29_29 = (MR_Word) &analysis__analysis__type_ctor_info_func_id_0;
#line 12322 "analysis.c"
    analysis__TypeInfo_30_30 = (MR_Word) &analysis_scalar_common_1[1];
#line 985 "analysis.m"
    {
#line 985 "analysis.m"
      analysis__conv4_FuncResults0_20 = mercury__map__lookup_2_f_0(analysis__TypeCtorInfo_29_29, analysis__TypeInfo_30_30, analysis__AnalysisResults0_19, ((MR_Box) (analysis__FuncId_10)));
    }
#line 985 "analysis.m"
    analysis__FuncResults0_20 = ((MR_Word) analysis__conv4_FuncResults0_20);
#line 986 "analysis.m"
    {
#line 986 "analysis.m"
      analysis__replace_result_in_list_6_p_0(analysis__TypeClassInfo_for_analysis_24, analysis__FuncInfo_11, analysis__CallPattern_12, analysis__AnswerPattern_13, analysis__Status_14, analysis__FuncResults0_20, &analysis__FuncResults_21);
    }
#line 990 "analysis.m"
    {
#line 990 "analysis.m"
      analysis__V_23_23 = mercury__map__det_update_3_f_0(analysis__TypeCtorInfo_29_29, analysis__TypeInfo_30_30, analysis__AnalysisResults0_19, ((MR_Box) (analysis__FuncId_10)), ((MR_Box) (analysis__FuncResults_21)));
    }
#line 989 "analysis.m"
    {
#line 989 "analysis.m"
      analysis__V_22_22 = mercury__map__det_update_3_f_0(analysis__TypeCtorInfo_27_27, analysis__TypeInfo_28_28, analysis__ModuleResults0_18, ((MR_Box) (analysis__AnalysisName_17)), ((MR_Box) (analysis__V_23_23)));
    }
#line 988 "analysis.m"
    {
#line 988 "analysis.m"
      *analysis__Map_16 = mercury__map__det_update_3_f_0(analysis__TypeCtorInfo_25_25, analysis__TypeInfo_26_26, analysis__Map0_15, ((MR_Box) (analysis__ModuleName_9)), ((MR_Box) (analysis__V_22_22)));
    }
#line 981 "analysis.m"
  }
#line 974 "analysis.m"
}

#line 964 "analysis.m"
static void MR_CALL 
analysis__update_analysis_registry_5_9_p_0_3(
#line 964 "analysis.m"
  MR_Box analysis__closure_arg,
#line 964 "analysis.m"
  MR_Box analysis__wrapper_arg_1,
#line 964 "analysis.m"
  MR_Box analysis__wrapper_arg_2,
#line 964 "analysis.m"
  MR_Box * analysis__wrapper_arg_3,
#line 964 "analysis.m"
  MR_Box analysis__wrapper_arg_4,
#line 964 "analysis.m"
  MR_Box * analysis__wrapper_arg_5)
#line 964 "analysis.m"
{
#line 964 "analysis.m"
  {
#line 964 "analysis.m"
    MR_Box analysis__closure = analysis__closure_arg;
#line 964 "analysis.m"
    MR_Word analysis__conv9_STATE_VARIABLE_Info_16;

#line 964 "analysis.m"
    {
#line 964 "analysis.m"
      analysis__taint_module_overall_status_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 4))), ((MR_Word) analysis__wrapper_arg_1), ((MR_Word) analysis__wrapper_arg_2), &analysis__conv9_STATE_VARIABLE_Info_16);
    }
#line 964 "analysis.m"
    *analysis__wrapper_arg_3 = ((MR_Box) (analysis__conv9_STATE_VARIABLE_Info_16));
#line 964 "analysis.m"
  }
#line 964 "analysis.m"
}

#line 959 "analysis.m"
static MR_bool MR_CALL 
analysis__update_analysis_registry_5_9_p_0_2(
#line 959 "analysis.m"
  MR_Box analysis__closure_arg,
#line 959 "analysis.m"
  MR_Box analysis__wrapper_arg_1,
#line 959 "analysis.m"
  MR_Box * analysis__wrapper_arg_2)
#line 959 "analysis.m"
{
#line 959 "analysis.m"
  {
#line 959 "analysis.m"
    MR_bool analysis__succeeded;
#line 959 "analysis.m"
    MR_Box analysis__closure = analysis__closure_arg;
#line 959 "analysis.m"
    MR_Word analysis__conv8_LambdaHeadVar__2_61;

#line 959 "analysis.m"
    {
#line 959 "analysis.m"
      analysis__succeeded = analysis__IntroducedFrom__func__update_analysis_registry_5__959__1_1_f_0(((MR_Word) analysis__wrapper_arg_1), &analysis__conv8_LambdaHeadVar__2_61);
    }
#line 959 "analysis.m"
    if (analysis__succeeded)
#line 959 "analysis.m"
      {
#line 959 "analysis.m"
        *analysis__wrapper_arg_2 = ((MR_Box) (analysis__conv8_LambdaHeadVar__2_61));
#line 959 "analysis.m"
        analysis__succeeded = MR_TRUE;
#line 959 "analysis.m"
      }
#line 959 "analysis.m"
    return analysis__succeeded;
#line 959 "analysis.m"
  }
#line 959 "analysis.m"
}

#line 928 "analysis.m"
static void MR_CALL 
analysis__update_analysis_registry_5_9_p_0_1(
#line 928 "analysis.m"
  MR_Box analysis__closure_arg,
#line 928 "analysis.m"
  MR_Box analysis__wrapper_arg_1,
#line 928 "analysis.m"
  MR_Box analysis__wrapper_arg_2,
#line 928 "analysis.m"
  MR_Box * analysis__wrapper_arg_3,
#line 928 "analysis.m"
  MR_Box analysis__wrapper_arg_4,
#line 928 "analysis.m"
  MR_Box * analysis__wrapper_arg_5)
#line 928 "analysis.m"
{
#line 928 "analysis.m"
  {
#line 928 "analysis.m"
    MR_Box analysis__closure = analysis__closure_arg;
#line 928 "analysis.m"
    MR_Word analysis__conv2_STATE_VARIABLE_Info_16;

#line 928 "analysis.m"
    {
#line 928 "analysis.m"
      analysis__taint_module_overall_status_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 4))), ((MR_Word) analysis__wrapper_arg_1), ((MR_Word) analysis__wrapper_arg_2), &analysis__conv2_STATE_VARIABLE_Info_16);
    }
#line 928 "analysis.m"
    *analysis__wrapper_arg_3 = ((MR_Box) (analysis__conv2_STATE_VARIABLE_Info_16));
#line 928 "analysis.m"
  }
#line 928 "analysis.m"
}

#line 880 "analysis.m"
void MR_CALL 
analysis__update_analysis_registry_5_9_p_0(
#line 880 "analysis.m"
  MR_Word analysis__ModuleInfo_10,
#line 880 "analysis.m"
  MR_Word analysis__ModuleName_11,
#line 880 "analysis.m"
  MR_String analysis__AnalysisName_12,
#line 880 "analysis.m"
  MR_Word analysis__FuncId_13,
#line 880 "analysis.m"
  MR_Word analysis__NewResult_14,
#line 880 "analysis.m"
  MR_Word analysis__STATE_VARIABLE_Info_0_42,
#line 880 "analysis.m"
  MR_Word * analysis__STATE_VARIABLE_Info_43)
#line 880 "analysis.m"
{
#line 885 "analysis.m"
  {
#line 885 "analysis.m"
    MR_bool analysis__succeeded;
#line 885 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_analysis_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__NewResult_14, (MR_Integer) 0)));
#line 885 "analysis.m"
    MR_Box analysis__Call_17 = (MR_hl_field(MR_mktag(0), analysis__NewResult_14, (MR_Integer) 1));
#line 885 "analysis.m"
    MR_Box analysis__NewAnswer_18 = (MR_hl_field(MR_mktag(0), analysis__NewResult_14, (MR_Integer) 2));
#line 885 "analysis.m"
    MR_Word analysis__NewStatus_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__NewResult_14, (MR_Integer) 3)));
#line 885 "analysis.m"
    MR_Box analysis__FuncInfo_20;
#line 885 "analysis.m"
    MR_Word analysis__MaybeResult_21;
#line 885 "analysis.m"
    MR_Word analysis__Globals_22;
#line 885 "analysis.m"
    MR_Word analysis__STATE_VARIABLE_Info_49_49;
#line 887 "analysis.m"
    MR_Box analysis__V_207_207;
#line 887 "analysis.m"
    MR_Box analysis__V_208_208;
#line 954 "analysis.m"
    MR_Word analysis__Requests_35;
#line 955 "analysis.m"
    MR_Word analysis__TypeCtorInfo_190_190;
#line 955 "analysis.m"
    MR_Word analysis__TypeInfo_191_191;
#line 955 "analysis.m"
    MR_Word analysis__TypeCtorInfo_192_192;
#line 955 "analysis.m"
    MR_Word analysis__TypeInfo_193_193;
#line 955 "analysis.m"
    MR_Word analysis__ModuleRequests_34;
#line 955 "analysis.m"
    MR_Word analysis__V_57_57;
#line 955 "analysis.m"
    MR_Word analysis__V_58_58;
#line 955 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_compiler_187;
#line 955 "analysis.m"
    MR_Box analysis__V_139_139;
#line 955 "analysis.m"
    MR_Word analysis__V_140_140;
#line 955 "analysis.m"
    MR_Word analysis__V_141_141;
#line 955 "analysis.m"
    MR_Word analysis__V_142_142;
#line 955 "analysis.m"
    MR_Word analysis__V_143_143;
#line 955 "analysis.m"
    MR_Word analysis__V_144_144;
#line 955 "analysis.m"
    MR_Word analysis__V_145_145;
#line 955 "analysis.m"
    MR_Word analysis__V_146_146;
#line 955 "analysis.m"
    MR_Word analysis__V_147_147;
#line 955 "analysis.m"
    MR_Box analysis__conv5_ModuleRequests_34;
#line 956 "analysis.m"
    MR_Box analysis__conv6_V_58_58;
#line 956 "analysis.m"
    MR_Box analysis__conv7_Requests_35;
#line 957 "analysis.m"
    MR_Word analysis__V_36_36;
#line 957 "analysis.m"
    MR_Word analysis__V_37_37;

#line 887 "analysis.m"
    {
#line 887 "analysis.m"
      analysis__get_func_info_6_p_0(analysis__TypeClassInfo_for_analysis_148, analysis__ModuleInfo_10, analysis__ModuleName_11, analysis__FuncId_13, &analysis__FuncInfo_20);
    }
#line 888 "analysis.m"
    {
#line 888 "analysis.m"
      analysis__lookup_exactly_matching_result_even_from_invalid_modules_6_p_0(analysis__TypeClassInfo_for_analysis_148, analysis__STATE_VARIABLE_Info_0_42, analysis__ModuleName_11, analysis__FuncId_13, analysis__FuncInfo_20, analysis__Call_17, &analysis__MaybeResult_21);
    }
#line 890 "analysis.m"
    {
#line 890 "analysis.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(analysis__ModuleInfo_10, &analysis__Globals_22);
    }
#line 931 "analysis.m"
    if ((analysis__MaybeResult_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 932 "analysis.m"
      {
#line 932 "analysis.m"
        MR_Word analysis__TypeCtorInfo_184_184 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 932 "analysis.m"
        MR_Word analysis__TypeInfo_185_185 = (MR_Word) &analysis_scalar_common_2[3];
#line 932 "analysis.m"
        MR_Word analysis__OldAnalysisResults0_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_42, (MR_Integer) 7)));
#line 932 "analysis.m"
        MR_Word analysis__OldAnalysisResults_33;
#line 932 "analysis.m"
        MR_Word analysis__OldMap0_69;
#line 932 "analysis.m"
        MR_Word analysis__OldMap_70;
#line 936 "analysis.m"
        MR_Word analysis__TypeClassInfo_for_compiler_183 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_42, (MR_Integer) 0)));
#line 936 "analysis.m"
        MR_Box analysis__V_120_120 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_42, (MR_Integer) 1));
#line 936 "analysis.m"
        MR_Word analysis__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_42, (MR_Integer) 2)));
#line 936 "analysis.m"
        MR_Word analysis__V_122_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_42, (MR_Integer) 3)));
#line 936 "analysis.m"
        MR_Word analysis__V_123_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_42, (MR_Integer) 4)));
#line 936 "analysis.m"
        MR_Word analysis__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_42, (MR_Integer) 5)));
#line 936 "analysis.m"
        MR_Word analysis__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_42, (MR_Integer) 6)));
#line 936 "analysis.m"
        MR_Word analysis__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_42, (MR_Integer) 8)));
#line 936 "analysis.m"
        MR_Word analysis__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_42, (MR_Integer) 9)));
#line 936 "analysis.m"
        MR_Word analysis__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_42, (MR_Integer) 10)));
#line 937 "analysis.m"
        MR_Box analysis__conv0_OldMap0_69;
#line 942 "analysis.m"
        MR_Word analysis__TypeClassInfo_for_compiler_186;
#line 942 "analysis.m"
        MR_Box analysis__V_129_129;
#line 942 "analysis.m"
        MR_Word analysis__V_130_130;
#line 942 "analysis.m"
        MR_Word analysis__V_131_131;
#line 942 "analysis.m"
        MR_Word analysis__V_132_132;
#line 942 "analysis.m"
        MR_Word analysis__V_133_133;
#line 942 "analysis.m"
        MR_Word analysis__V_134_134;
#line 942 "analysis.m"
        MR_Word analysis__V_136_136;
#line 942 "analysis.m"
        MR_Word analysis__V_137_137;
#line 942 "analysis.m"
        MR_Word analysis__V_138_138;
#line 942 "analysis.m"
        MR_Word analysis__V_135_135;

#line 937 "analysis.m"
        {
#line 937 "analysis.m"
          mercury__map__lookup_3_p_0(analysis__TypeCtorInfo_184_184, analysis__TypeInfo_185_185, analysis__OldAnalysisResults0_32, ((MR_Box) (analysis__ModuleName_11)), &analysis__conv0_OldMap0_69);
        }
#line 937 "analysis.m"
        analysis__OldMap0_69 = ((MR_Word) analysis__conv0_OldMap0_69);
#line 938 "analysis.m"
        {
#line 938 "analysis.m"
          analysis__record_result_in_analysis_map_6_p_0(analysis__TypeClassInfo_for_analysis_148, analysis__FuncId_13, analysis__Call_17, analysis__NewAnswer_18, analysis__NewStatus_19, analysis__OldMap0_69, &analysis__OldMap_70);
        }
#line 940 "analysis.m"
        {
#line 940 "analysis.m"
          mercury__map__det_update_4_p_0(analysis__TypeCtorInfo_184_184, analysis__TypeInfo_185_185, ((MR_Box) (analysis__ModuleName_11)), ((MR_Box) (analysis__OldMap_70)), analysis__OldAnalysisResults0_32, &analysis__OldAnalysisResults_33);
        }
#line 942 "analysis.m"
        analysis__TypeClassInfo_for_compiler_186 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_42, (MR_Integer) 0)));
#line 942 "analysis.m"
        analysis__V_129_129 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_42, (MR_Integer) 1));
#line 942 "analysis.m"
        analysis__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_42, (MR_Integer) 2)));
#line 942 "analysis.m"
        analysis__V_131_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_42, (MR_Integer) 3)));
#line 942 "analysis.m"
        analysis__V_132_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_42, (MR_Integer) 4)));
#line 942 "analysis.m"
        analysis__V_133_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_42, (MR_Integer) 5)));
#line 942 "analysis.m"
        analysis__V_134_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_42, (MR_Integer) 6)));
#line 942 "analysis.m"
        analysis__V_135_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_42, (MR_Integer) 7)));
#line 942 "analysis.m"
        analysis__V_136_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_42, (MR_Integer) 8)));
#line 942 "analysis.m"
        analysis__V_137_137 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_42, (MR_Integer) 9)));
#line 942 "analysis.m"
        analysis__V_138_138 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_42, (MR_Integer) 10)));
#line 942 "analysis.m"
        {
#line 942 "analysis.m"
          analysis__STATE_VARIABLE_Info_49_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 942 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_49_49, 0) = ((MR_Box) (analysis__TypeClassInfo_for_compiler_186));
#line 942 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_49_49, 1) = analysis__V_129_129;
#line 942 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_49_49, 2) = ((MR_Box) (analysis__V_130_130));
#line 942 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_49_49, 3) = ((MR_Box) (analysis__V_131_131));
#line 942 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_49_49, 4) = ((MR_Box) (analysis__V_132_132));
#line 942 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_49_49, 5) = ((MR_Box) (analysis__V_133_133));
#line 942 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_49_49, 6) = ((MR_Box) (analysis__V_134_134));
#line 942 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_49_49, 7) = ((MR_Box) (analysis__OldAnalysisResults_33));
#line 942 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_49_49, 8) = ((MR_Box) (analysis__V_136_136));
#line 942 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_49_49, 9) = ((MR_Box) (analysis__V_137_137));
#line 942 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_49_49, 10) = ((MR_Box) (analysis__V_138_138));
#line 942 "analysis.m"
        }
#line 932 "analysis.m"
      }
#line 931 "analysis.m"
    else
#line 892 "analysis.m"
      {
#line 892 "analysis.m"
        MR_Word analysis__OldResult_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), analysis__MaybeResult_21, (MR_Integer) 0)));
#line 892 "analysis.m"
        MR_Box analysis__OldAnswer_25 = (MR_hl_field(MR_mktag(0), analysis__OldResult_23, (MR_Integer) 1));
#line 892 "analysis.m"
        MR_Word analysis__OldStatus_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__OldResult_23, (MR_Integer) 2)));
#line 895 "analysis.m"
        MR_Box analysis___OldCall_24 = (MR_hl_field(MR_mktag(0), analysis__OldResult_23, (MR_Integer) 0));
#line 896 "analysis.m"
        MR_Word analysis__TypeClassInfo_for_answer_pattern_149;
#line 896 "analysis.m"
        MR_Word analysis__TypeClassInfo_for_partial_order_151;

#line 12722 "analysis.c"
        {
#line 12724 "analysis.c"
          mercury__private_builtin__superclass_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_148, (MR_Integer) 2, &analysis__TypeClassInfo_for_answer_pattern_149);
        }
#line 12727 "analysis.c"
        {
#line 12729 "analysis.c"
          mercury__private_builtin__superclass_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_answer_pattern_149, (MR_Integer) 1, &analysis__TypeClassInfo_for_partial_order_151);
        }
#line 896 "analysis.m"
        {
#line 896 "analysis.m"
          analysis__succeeded = analysis__equivalent_3_p_0(analysis__TypeClassInfo_for_partial_order_151, analysis__FuncInfo_20, analysis__NewAnswer_18, analysis__OldAnswer_25);
        }
#line 896 "analysis.m"
        if (analysis__succeeded)
#line 898 "analysis.m"
          {
#line 897 "analysis.m"
            {
#line 897 "analysis.m"
              analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_109_115_103_95_95_104_111_52_95_95_91_54_93_95_48_3_p_0(analysis__TypeClassInfo_for_analysis_148, analysis__ModuleName_11, analysis__FuncId_13, analysis__Call_17, analysis__NewAnswer_18);
            }
#line 899 "analysis.m"
            analysis__succeeded = (analysis__NewStatus_19 == analysis__OldStatus_26);
#line 899 "analysis.m"
            if (analysis__succeeded)
#line 899 "analysis.m"
              analysis__STATE_VARIABLE_Info_49_49 = analysis__STATE_VARIABLE_Info_0_42;
#line 899 "analysis.m"
            else
#line 902 "analysis.m"
              {
#line 902 "analysis.m"
                MR_Word analysis__OldMap0_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_42, (MR_Integer) 7)));
#line 902 "analysis.m"
                MR_Word analysis__OldMap_28;
#line 902 "analysis.m"
                MR_Word analysis__TypeClassInfo_for_compiler_159 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_42, (MR_Integer) 0)));
#line 902 "analysis.m"
                MR_Box analysis__V_73_73 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_42, (MR_Integer) 1));
#line 902 "analysis.m"
                MR_Word analysis__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_42, (MR_Integer) 2)));
#line 902 "analysis.m"
                MR_Word analysis__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_42, (MR_Integer) 3)));
#line 902 "analysis.m"
                MR_Word analysis__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_42, (MR_Integer) 4)));
#line 902 "analysis.m"
                MR_Word analysis__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_42, (MR_Integer) 5)));
#line 902 "analysis.m"
                MR_Word analysis__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_42, (MR_Integer) 6)));
#line 902 "analysis.m"
                MR_Word analysis__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_42, (MR_Integer) 8)));
#line 902 "analysis.m"
                MR_Word analysis__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_42, (MR_Integer) 9)));
#line 902 "analysis.m"
                MR_Word analysis__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_42, (MR_Integer) 10)));
#line 905 "analysis.m"
                MR_Word analysis__TypeClassInfo_for_compiler_160;
#line 905 "analysis.m"
                MR_Box analysis__V_82_82;
#line 905 "analysis.m"
                MR_Word analysis__V_83_83;
#line 905 "analysis.m"
                MR_Word analysis__V_84_84;
#line 905 "analysis.m"
                MR_Word analysis__V_85_85;
#line 905 "analysis.m"
                MR_Word analysis__V_86_86;
#line 905 "analysis.m"
                MR_Word analysis__V_87_87;
#line 905 "analysis.m"
                MR_Word analysis__V_89_89;
#line 905 "analysis.m"
                MR_Word analysis__V_90_90;
#line 905 "analysis.m"
                MR_Word analysis__V_91_91;
#line 905 "analysis.m"
                MR_Word analysis__V_88_88;

#line 903 "analysis.m"
                {
#line 903 "analysis.m"
                  analysis__replace_result_in_analysis_map_8_p_0(analysis__TypeClassInfo_for_analysis_148, analysis__ModuleName_11, analysis__FuncId_13, analysis__FuncInfo_20, analysis__Call_17, analysis__NewAnswer_18, analysis__NewStatus_19, analysis__OldMap0_27, &analysis__OldMap_28);
                }
#line 905 "analysis.m"
                analysis__TypeClassInfo_for_compiler_160 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_42, (MR_Integer) 0)));
#line 905 "analysis.m"
                analysis__V_82_82 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_42, (MR_Integer) 1));
#line 905 "analysis.m"
                analysis__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_42, (MR_Integer) 2)));
#line 905 "analysis.m"
                analysis__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_42, (MR_Integer) 3)));
#line 905 "analysis.m"
                analysis__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_42, (MR_Integer) 4)));
#line 905 "analysis.m"
                analysis__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_42, (MR_Integer) 5)));
#line 905 "analysis.m"
                analysis__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_42, (MR_Integer) 6)));
#line 905 "analysis.m"
                analysis__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_42, (MR_Integer) 7)));
#line 905 "analysis.m"
                analysis__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_42, (MR_Integer) 8)));
#line 905 "analysis.m"
                analysis__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_42, (MR_Integer) 9)));
#line 905 "analysis.m"
                analysis__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_42, (MR_Integer) 10)));
#line 905 "analysis.m"
                {
#line 905 "analysis.m"
                  analysis__STATE_VARIABLE_Info_49_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 905 "analysis.m"
                  MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_49_49, 0) = ((MR_Box) (analysis__TypeClassInfo_for_compiler_160));
#line 905 "analysis.m"
                  MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_49_49, 1) = analysis__V_82_82;
#line 905 "analysis.m"
                  MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_49_49, 2) = ((MR_Box) (analysis__V_83_83));
#line 905 "analysis.m"
                  MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_49_49, 3) = ((MR_Box) (analysis__V_84_84));
#line 905 "analysis.m"
                  MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_49_49, 4) = ((MR_Box) (analysis__V_85_85));
#line 905 "analysis.m"
                  MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_49_49, 5) = ((MR_Box) (analysis__V_86_86));
#line 905 "analysis.m"
                  MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_49_49, 6) = ((MR_Box) (analysis__V_87_87));
#line 905 "analysis.m"
                  MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_49_49, 7) = ((MR_Box) (analysis__OldMap_28));
#line 905 "analysis.m"
                  MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_49_49, 8) = ((MR_Box) (analysis__V_89_89));
#line 905 "analysis.m"
                  MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_49_49, 9) = ((MR_Box) (analysis__V_90_90));
#line 905 "analysis.m"
                  MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_49_49, 10) = ((MR_Box) (analysis__V_91_91));
#line 905 "analysis.m"
                }
#line 902 "analysis.m"
              }
#line 898 "analysis.m"
          }
#line 896 "analysis.m"
        else
#line 910 "analysis.m"
          {
#line 910 "analysis.m"
            MR_Word analysis__TypeCtorInfo_168_168;
#line 910 "analysis.m"
            MR_Word analysis__TypeClassInfo_for_call_pattern_170;
#line 910 "analysis.m"
            MR_Word analysis__Status_29;
#line 910 "analysis.m"
            MR_Word analysis__OldArcs_30;
#line 910 "analysis.m"
            MR_Word analysis__DepModules_31;
#line 910 "analysis.m"
            MR_Word analysis__STATE_VARIABLE_Info_50_50;
#line 910 "analysis.m"
            MR_Word analysis__V_51_51;
#line 910 "analysis.m"
            MR_Word analysis__V_54_54;
#line 910 "analysis.m"
            MR_Word analysis__OldMap0_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_42, (MR_Integer) 7)));
#line 910 "analysis.m"
            MR_Word analysis__OldMap_68;
#line 910 "analysis.m"
            MR_Word analysis__TypeClassInfo_for_compiler_161 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_42, (MR_Integer) 0)));
#line 910 "analysis.m"
            MR_Box analysis__V_92_92 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_42, (MR_Integer) 1));
#line 910 "analysis.m"
            MR_Word analysis__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_42, (MR_Integer) 2)));
#line 910 "analysis.m"
            MR_Word analysis__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_42, (MR_Integer) 3)));
#line 910 "analysis.m"
            MR_Word analysis__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_42, (MR_Integer) 4)));
#line 910 "analysis.m"
            MR_Word analysis__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_42, (MR_Integer) 5)));
#line 910 "analysis.m"
            MR_Word analysis__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_42, (MR_Integer) 6)));
#line 910 "analysis.m"
            MR_Word analysis__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_42, (MR_Integer) 8)));
#line 910 "analysis.m"
            MR_Word analysis__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_42, (MR_Integer) 9)));
#line 910 "analysis.m"
            MR_Word analysis__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_42, (MR_Integer) 10)));
#line 913 "analysis.m"
            MR_Word analysis__TypeClassInfo_for_compiler_162;
#line 913 "analysis.m"
            MR_Box analysis__V_101_101;
#line 913 "analysis.m"
            MR_Word analysis__V_102_102;
#line 913 "analysis.m"
            MR_Word analysis__V_103_103;
#line 913 "analysis.m"
            MR_Word analysis__V_104_104;
#line 913 "analysis.m"
            MR_Word analysis__V_105_105;
#line 913 "analysis.m"
            MR_Word analysis__V_106_106;
#line 913 "analysis.m"
            MR_Word analysis__V_108_108;
#line 913 "analysis.m"
            MR_Word analysis__V_109_109;
#line 913 "analysis.m"
            MR_Word analysis__V_110_110;
#line 913 "analysis.m"
            MR_Word analysis__V_107_107;
#line 918 "analysis.m"
            MR_Word analysis__TypeClassInfo_for_answer_pattern_163;
#line 918 "analysis.m"
            MR_Word analysis__TypeClassInfo_for_partial_order_165;
#line 923 "analysis.m"
            MR_Word analysis__TypeClassInfo_for_compiler_167;
#line 923 "analysis.m"
            MR_Box analysis__V_111_111;
#line 923 "analysis.m"
            MR_Word analysis__V_112_112;
#line 923 "analysis.m"
            MR_Word analysis__V_113_113;
#line 923 "analysis.m"
            MR_Word analysis__V_114_114;
#line 923 "analysis.m"
            MR_Word analysis__V_115_115;
#line 923 "analysis.m"
            MR_Word analysis__V_116_116;
#line 923 "analysis.m"
            MR_Word analysis__V_117_117;
#line 923 "analysis.m"
            MR_Word analysis__V_118_118;
#line 923 "analysis.m"
            MR_Word analysis__V_119_119;
#line 923 "analysis.m"
            MR_Box analysis__conv1_OldArcs_30;
#line 928 "analysis.m"
            MR_Box analysis__conv4_STATE_VARIABLE_Info_49_49;
#line 928 "analysis.m"
            MR_Box analysis__conv3_STATE_VARIABLE_IO_48_48;

#line 911 "analysis.m"
            {
#line 911 "analysis.m"
              analysis__replace_result_in_analysis_map_8_p_0(analysis__TypeClassInfo_for_analysis_148, analysis__ModuleName_11, analysis__FuncId_13, analysis__FuncInfo_20, analysis__Call_17, analysis__NewAnswer_18, analysis__NewStatus_19, analysis__OldMap0_67, &analysis__OldMap_68);
            }
#line 913 "analysis.m"
            analysis__TypeClassInfo_for_compiler_162 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_42, (MR_Integer) 0)));
#line 913 "analysis.m"
            analysis__V_101_101 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_42, (MR_Integer) 1));
#line 913 "analysis.m"
            analysis__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_42, (MR_Integer) 2)));
#line 913 "analysis.m"
            analysis__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_42, (MR_Integer) 3)));
#line 913 "analysis.m"
            analysis__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_42, (MR_Integer) 4)));
#line 913 "analysis.m"
            analysis__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_42, (MR_Integer) 5)));
#line 913 "analysis.m"
            analysis__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_42, (MR_Integer) 6)));
#line 913 "analysis.m"
            analysis__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_42, (MR_Integer) 7)));
#line 913 "analysis.m"
            analysis__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_42, (MR_Integer) 8)));
#line 913 "analysis.m"
            analysis__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_42, (MR_Integer) 9)));
#line 913 "analysis.m"
            analysis__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_42, (MR_Integer) 10)));
#line 913 "analysis.m"
            {
#line 913 "analysis.m"
              analysis__STATE_VARIABLE_Info_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 913 "analysis.m"
              MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_50_50, 0) = ((MR_Box) (analysis__TypeClassInfo_for_compiler_162));
#line 913 "analysis.m"
              MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_50_50, 1) = analysis__V_101_101;
#line 913 "analysis.m"
              MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_50_50, 2) = ((MR_Box) (analysis__V_102_102));
#line 913 "analysis.m"
              MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_50_50, 3) = ((MR_Box) (analysis__V_103_103));
#line 913 "analysis.m"
              MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_50_50, 4) = ((MR_Box) (analysis__V_104_104));
#line 913 "analysis.m"
              MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_50_50, 5) = ((MR_Box) (analysis__V_105_105));
#line 913 "analysis.m"
              MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_50_50, 6) = ((MR_Box) (analysis__V_106_106));
#line 913 "analysis.m"
              MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_50_50, 7) = ((MR_Box) (analysis__OldMap_68));
#line 913 "analysis.m"
              MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_50_50, 8) = ((MR_Box) (analysis__V_108_108));
#line 913 "analysis.m"
              MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_50_50, 9) = ((MR_Box) (analysis__V_109_109));
#line 913 "analysis.m"
              MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_50_50, 10) = ((MR_Box) (analysis__V_110_110));
#line 913 "analysis.m"
            }
#line 13014 "analysis.c"
            {
#line 13016 "analysis.c"
              mercury__private_builtin__superclass_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_148, (MR_Integer) 2, &analysis__TypeClassInfo_for_answer_pattern_163);
            }
#line 13019 "analysis.c"
            {
#line 13021 "analysis.c"
              mercury__private_builtin__superclass_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_answer_pattern_163, (MR_Integer) 1, &analysis__TypeClassInfo_for_partial_order_165);
            }
#line 918 "analysis.m"
            {
#line 918 "analysis.m"
              analysis__succeeded = analysis__more_precise_than_3_p_0(analysis__TypeClassInfo_for_partial_order_165, analysis__FuncInfo_20, analysis__NewAnswer_18, analysis__OldAnswer_25);
            }
#line 918 "analysis.m"
            if (analysis__succeeded)
#line 919 "analysis.m"
              analysis__Status_29 = (MR_Integer) 1;
#line 918 "analysis.m"
            else
#line 921 "analysis.m"
              analysis__Status_29 = (MR_Integer) 0;
#line 923 "analysis.m"
            analysis__TypeClassInfo_for_compiler_167 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_50_50, (MR_Integer) 0)));
#line 923 "analysis.m"
            analysis__V_111_111 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_50_50, (MR_Integer) 1));
#line 923 "analysis.m"
            analysis__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_50_50, (MR_Integer) 2)));
#line 923 "analysis.m"
            analysis__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_50_50, (MR_Integer) 3)));
#line 923 "analysis.m"
            analysis__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_50_50, (MR_Integer) 4)));
#line 923 "analysis.m"
            analysis__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_50_50, (MR_Integer) 5)));
#line 923 "analysis.m"
            analysis__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_50_50, (MR_Integer) 6)));
#line 923 "analysis.m"
            analysis__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_50_50, (MR_Integer) 7)));
#line 923 "analysis.m"
            analysis__V_118_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_50_50, (MR_Integer) 8)));
#line 923 "analysis.m"
            analysis__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_50_50, (MR_Integer) 9)));
#line 923 "analysis.m"
            analysis__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_50_50, (MR_Integer) 10)));
#line 13059 "analysis.c"
            analysis__TypeCtorInfo_168_168 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 923 "analysis.m"
            {
#line 923 "analysis.m"
              mercury__map__lookup_3_p_0(analysis__TypeCtorInfo_168_168, (MR_Word) &analysis_scalar_common_2[5], analysis__V_51_51, ((MR_Box) (analysis__ModuleName_11)), &analysis__conv1_OldArcs_30);
            }
#line 923 "analysis.m"
            analysis__OldArcs_30 = ((MR_Word) analysis__conv1_OldArcs_30);
#line 13068 "analysis.c"
            {
#line 13070 "analysis.c"
              mercury__private_builtin__superclass_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_148, (MR_Integer) 1, &analysis__TypeClassInfo_for_call_pattern_170);
            }
#line 924 "analysis.m"
            {
#line 924 "analysis.m"
              analysis__DepModules_31 = analysis__imdg_dependent_modules_5_f_0(analysis__TypeClassInfo_for_call_pattern_170, analysis__OldArcs_30, analysis__AnalysisName_12, analysis__FuncId_13, analysis__FuncInfo_20, analysis__Call_17);
            }
#line 926 "analysis.m"
            {
#line 926 "analysis.m"
              analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_109_115_103_95_95_104_111_51_95_95_91_54_93_95_48_3_p_0(analysis__TypeClassInfo_for_analysis_148, analysis__NewAnswer_18, analysis__OldAnswer_25, analysis__Status_29, analysis__DepModules_31);
            }
#line 928 "analysis.m"
            {
#line 928 "analysis.m"
              analysis__V_54_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 928 "analysis.m"
              MR_hl_field(MR_mktag(0), analysis__V_54_54, 0) = ((MR_Box) (&analysis_scalar_common_12[0]));
#line 928 "analysis.m"
              MR_hl_field(MR_mktag(0), analysis__V_54_54, 1) = ((MR_Box) (analysis__update_analysis_registry_5_9_p_0_1));
#line 928 "analysis.m"
              MR_hl_field(MR_mktag(0), analysis__V_54_54, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 928 "analysis.m"
              MR_hl_field(MR_mktag(0), analysis__V_54_54, 3) = ((MR_Box) (analysis__Globals_22));
#line 928 "analysis.m"
              MR_hl_field(MR_mktag(0), analysis__V_54_54, 4) = ((MR_Box) (analysis__Status_29));
#line 928 "analysis.m"
            }
#line 928 "analysis.m"
            {
#line 928 "analysis.m"
              mercury__set__fold2_6_p_2(analysis__TypeCtorInfo_168_168, (MR_Word) &analysis__analysis__type_ctor_info_analysis_info_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, analysis__V_54_54, analysis__DepModules_31, ((MR_Box) (analysis__STATE_VARIABLE_Info_50_50)), &analysis__conv4_STATE_VARIABLE_Info_49_49, ((MR_Box) ((MR_Integer) 0)), &analysis__conv3_STATE_VARIABLE_IO_48_48);
            }
#line 928 "analysis.m"
            analysis__STATE_VARIABLE_Info_49_49 = ((MR_Word) analysis__conv4_STATE_VARIABLE_Info_49_49);
#line 910 "analysis.m"
          }
#line 892 "analysis.m"
      }
#line 955 "analysis.m"
    analysis__TypeClassInfo_for_compiler_187 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_49_49, (MR_Integer) 0)));
#line 955 "analysis.m"
    analysis__V_139_139 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_49_49, (MR_Integer) 1));
#line 955 "analysis.m"
    analysis__V_140_140 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_49_49, (MR_Integer) 2)));
#line 955 "analysis.m"
    analysis__V_141_141 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_49_49, (MR_Integer) 3)));
#line 955 "analysis.m"
    analysis__V_142_142 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_49_49, (MR_Integer) 4)));
#line 955 "analysis.m"
    analysis__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_49_49, (MR_Integer) 5)));
#line 955 "analysis.m"
    analysis__V_143_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_49_49, (MR_Integer) 6)));
#line 955 "analysis.m"
    analysis__V_144_144 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_49_49, (MR_Integer) 7)));
#line 955 "analysis.m"
    analysis__V_145_145 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_49_49, (MR_Integer) 8)));
#line 955 "analysis.m"
    analysis__V_146_146 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_49_49, (MR_Integer) 9)));
#line 955 "analysis.m"
    analysis__V_147_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_49_49, (MR_Integer) 10)));
#line 955 "analysis.m"
    {
#line 955 "analysis.m"
      analysis__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &analysis_scalar_common_2[1], analysis__V_57_57, ((MR_Box) (analysis__ModuleName_11)), &analysis__conv5_ModuleRequests_34);
    }
#line 955 "analysis.m"
    if (analysis__succeeded)
#line 955 "analysis.m"
      {
#line 955 "analysis.m"
        analysis__ModuleRequests_34 = ((MR_Word) analysis__conv5_ModuleRequests_34);
#line 955 "analysis.m"
        analysis__succeeded = MR_TRUE;
#line 955 "analysis.m"
      }
#line 955 "analysis.m"
    if (analysis__succeeded)
#line 955 "analysis.m"
      {
#line 13151 "analysis.c"
        analysis__TypeCtorInfo_190_190 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 13153 "analysis.c"
        analysis__TypeInfo_191_191 = (MR_Word) &analysis_scalar_common_2[0];
#line 956 "analysis.m"
        {
#line 956 "analysis.m"
          analysis__succeeded = mercury__map__elem_2_f_0(analysis__TypeCtorInfo_190_190, analysis__TypeInfo_191_191, ((MR_Box) (analysis__AnalysisName_12)), analysis__ModuleRequests_34, &analysis__conv6_V_58_58);
        }
#line 956 "analysis.m"
        if (analysis__succeeded)
#line 956 "analysis.m"
          {
#line 956 "analysis.m"
            analysis__V_58_58 = ((MR_Word) analysis__conv6_V_58_58);
#line 956 "analysis.m"
            analysis__succeeded = MR_TRUE;
#line 956 "analysis.m"
          }
#line 955 "analysis.m"
        if (analysis__succeeded)
#line 955 "analysis.m"
          {
#line 13174 "analysis.c"
            analysis__TypeCtorInfo_192_192 = (MR_Word) &analysis__analysis__type_ctor_info_func_id_0;
#line 13176 "analysis.c"
            analysis__TypeInfo_193_193 = (MR_Word) &analysis_scalar_common_1[0];
#line 956 "analysis.m"
            {
#line 956 "analysis.m"
              analysis__succeeded = mercury__map__elem_2_f_0(analysis__TypeCtorInfo_192_192, analysis__TypeInfo_193_193, ((MR_Box) (analysis__FuncId_13)), analysis__V_58_58, &analysis__conv7_Requests_35);
            }
#line 956 "analysis.m"
            if (analysis__succeeded)
#line 956 "analysis.m"
              {
#line 956 "analysis.m"
                analysis__Requests_35 = ((MR_Word) analysis__conv7_Requests_35);
#line 956 "analysis.m"
                analysis__succeeded = MR_TRUE;
#line 956 "analysis.m"
              }
#line 955 "analysis.m"
            if (analysis__succeeded)
#line 955 "analysis.m"
              {
#line 957 "analysis.m"
                analysis__succeeded = ((MR_tag((MR_Word) analysis__Requests_35)) == (MR_mktag((MR_Integer) 1)));
#line 957 "analysis.m"
                if (analysis__succeeded)
#line 957 "analysis.m"
                  {
#line 957 "analysis.m"
                    analysis__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), analysis__Requests_35, (MR_Integer) 0)));
#line 957 "analysis.m"
                    analysis__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), analysis__Requests_35, (MR_Integer) 1)));
#line 957 "analysis.m"
                  }
#line 955 "analysis.m"
              }
#line 955 "analysis.m"
          }
#line 955 "analysis.m"
      }
#line 954 "analysis.m"
    if (analysis__succeeded)
#line 962 "analysis.m"
      {
#line 962 "analysis.m"
        MR_Word analysis__TypeCtorInfo_195_195 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 962 "analysis.m"
        MR_Word analysis__Callers0_38;
#line 962 "analysis.m"
        MR_Word analysis__Callers_41;
#line 962 "analysis.m"
        MR_Word analysis__V_63_63;
#line 964 "analysis.m"
        MR_Box analysis__conv11_STATE_VARIABLE_Info_43;
#line 964 "analysis.m"
        MR_Box analysis__conv10_STATE_VARIABLE_IO_45;

#line 959 "analysis.m"
        {
#line 959 "analysis.m"
          analysis__Callers0_38 = mercury__list__filter_map_2_f_0((MR_Word) &analysis__analysis__type_ctor_info_analysis_request_0, analysis__TypeCtorInfo_195_195, (MR_Word) &analysis_scalar_common_2[10], analysis__Requests_35);
        }
#line 963 "analysis.m"
        {
#line 963 "analysis.m"
          mercury__list__sort_and_remove_dups_2_p_0(analysis__TypeCtorInfo_195_195, analysis__Callers0_38, &analysis__Callers_41);
        }
#line 964 "analysis.m"
        {
#line 964 "analysis.m"
          analysis__V_63_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 964 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__V_63_63, 0) = ((MR_Box) (&analysis_scalar_common_12[0]));
#line 964 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__V_63_63, 1) = ((MR_Box) (analysis__update_analysis_registry_5_9_p_0_3));
#line 964 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__V_63_63, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 964 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__V_63_63, 3) = ((MR_Box) (analysis__Globals_22));
#line 964 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__V_63_63, 4) = ((MR_Box) ((MR_Integer) 1));
#line 964 "analysis.m"
        }
#line 964 "analysis.m"
        {
#line 964 "analysis.m"
          mercury__list__foldl2_6_p_2(analysis__TypeCtorInfo_195_195, (MR_Word) &analysis__analysis__type_ctor_info_analysis_info_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, analysis__V_63_63, analysis__Callers_41, ((MR_Box) (analysis__STATE_VARIABLE_Info_49_49)), &analysis__conv11_STATE_VARIABLE_Info_43, ((MR_Box) ((MR_Integer) 0)), &analysis__conv10_STATE_VARIABLE_IO_45);
        }
#line 964 "analysis.m"
        *analysis__STATE_VARIABLE_Info_43 = ((MR_Word) analysis__conv11_STATE_VARIABLE_Info_43);
#line 962 "analysis.m"
      }
#line 954 "analysis.m"
    else
#line 967 "analysis.m"
      *analysis__STATE_VARIABLE_Info_43 = analysis__STATE_VARIABLE_Info_49_49;
#line 885 "analysis.m"
  }
#line 880 "analysis.m"
}

#line 876 "analysis.m"
static void MR_CALL 
analysis__update_analysis_registry_4_9_p_0_1(
#line 876 "analysis.m"
  MR_Box analysis__closure_arg,
#line 876 "analysis.m"
  MR_Box analysis__wrapper_arg_1,
#line 876 "analysis.m"
  MR_Box analysis__wrapper_arg_2,
#line 876 "analysis.m"
  MR_Box * analysis__wrapper_arg_3,
#line 876 "analysis.m"
  MR_Box analysis__wrapper_arg_4,
#line 876 "analysis.m"
  MR_Box * analysis__wrapper_arg_5)
#line 876 "analysis.m"
{
#line 876 "analysis.m"
  {
#line 876 "analysis.m"
    MR_Box analysis__closure = analysis__closure_arg;
#line 876 "analysis.m"
    MR_Word analysis__conv0_STATE_VARIABLE_Info_43;

#line 876 "analysis.m"
    {
#line 876 "analysis.m"
      analysis__update_analysis_registry_5_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 4))), ((MR_String) (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 6))), ((MR_Word) analysis__wrapper_arg_1), ((MR_Word) analysis__wrapper_arg_2), &analysis__conv0_STATE_VARIABLE_Info_43);
    }
#line 876 "analysis.m"
    *analysis__wrapper_arg_3 = ((MR_Box) (analysis__conv0_STATE_VARIABLE_Info_43));
#line 876 "analysis.m"
  }
#line 876 "analysis.m"
}

#line 867 "analysis.m"
void MR_CALL 
analysis__update_analysis_registry_4_9_p_0(
#line 867 "analysis.m"
  MR_Word analysis__ModuleInfo_10,
#line 867 "analysis.m"
  MR_Word analysis__ModuleName_11,
#line 867 "analysis.m"
  MR_String analysis__AnalysisName_12,
#line 867 "analysis.m"
  MR_Word analysis__FuncId_13,
#line 867 "analysis.m"
  MR_Word analysis__NewResults_14,
#line 867 "analysis.m"
  MR_Word analysis__STATE_VARIABLE_Info_0_17,
#line 867 "analysis.m"
  MR_Word * analysis__STATE_VARIABLE_Info_18)
#line 867 "analysis.m"
{
#line 872 "analysis.m"
  {
#line 872 "analysis.m"
    MR_bool analysis__succeeded;
#line 872 "analysis.m"
    MR_Word analysis__V_21_21;
#line 875 "analysis.m"
    MR_Box analysis__conv2_STATE_VARIABLE_Info_18;
#line 875 "analysis.m"
    MR_Box analysis__conv1_STATE_VARIABLE_IO_20;

#line 876 "analysis.m"
    {
#line 876 "analysis.m"
      analysis__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 876 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_21_21, 0) = ((MR_Box) (&analysis_scalar_common_11[1]));
#line 876 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_21_21, 1) = ((MR_Box) (analysis__update_analysis_registry_4_9_p_0_1));
#line 876 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_21_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 876 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_21_21, 3) = ((MR_Box) (analysis__ModuleInfo_10));
#line 876 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_21_21, 4) = ((MR_Box) (analysis__ModuleName_11));
#line 876 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_21_21, 5) = ((MR_Box) (analysis__AnalysisName_12));
#line 876 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_21_21, 6) = ((MR_Box) (analysis__FuncId_13));
#line 876 "analysis.m"
    }
#line 875 "analysis.m"
    {
#line 875 "analysis.m"
      mercury__list__foldl2_6_p_2((MR_Word) &analysis__analysis__type_ctor_info_some_analysis_result_0, (MR_Word) &analysis__analysis__type_ctor_info_analysis_info_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, analysis__V_21_21, analysis__NewResults_14, ((MR_Box) (analysis__STATE_VARIABLE_Info_0_17)), &analysis__conv2_STATE_VARIABLE_Info_18, ((MR_Box) ((MR_Integer) 0)), &analysis__conv1_STATE_VARIABLE_IO_20);
    }
#line 875 "analysis.m"
    *analysis__STATE_VARIABLE_Info_18 = ((MR_Word) analysis__conv2_STATE_VARIABLE_Info_18);
#line 872 "analysis.m"
  }
#line 867 "analysis.m"
}

#line 864 "analysis.m"
static void MR_CALL 
analysis__update_analysis_registry_3_8_p_0_1(
#line 864 "analysis.m"
  MR_Box analysis__closure_arg,
#line 864 "analysis.m"
  MR_Box analysis__wrapper_arg_1,
#line 864 "analysis.m"
  MR_Box analysis__wrapper_arg_2,
#line 864 "analysis.m"
  MR_Box analysis__wrapper_arg_3,
#line 864 "analysis.m"
  MR_Box * analysis__wrapper_arg_4,
#line 864 "analysis.m"
  MR_Box analysis__wrapper_arg_5,
#line 864 "analysis.m"
  MR_Box * analysis__wrapper_arg_6)
#line 864 "analysis.m"
{
#line 864 "analysis.m"
  {
#line 864 "analysis.m"
    MR_Box analysis__closure = analysis__closure_arg;
#line 864 "analysis.m"
    MR_Word analysis__conv0_STATE_VARIABLE_Info_18;

#line 864 "analysis.m"
    {
#line 864 "analysis.m"
      analysis__update_analysis_registry_4_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 4))), ((MR_String) (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 5))), ((MR_Word) analysis__wrapper_arg_1), ((MR_Word) analysis__wrapper_arg_2), ((MR_Word) analysis__wrapper_arg_3), &analysis__conv0_STATE_VARIABLE_Info_18);
    }
#line 864 "analysis.m"
    *analysis__wrapper_arg_4 = ((MR_Box) (analysis__conv0_STATE_VARIABLE_Info_18));
#line 864 "analysis.m"
  }
#line 864 "analysis.m"
}

#line 857 "analysis.m"
void MR_CALL 
analysis__update_analysis_registry_3_8_p_0(
#line 857 "analysis.m"
  MR_Word analysis__ModuleInfo_9,
#line 857 "analysis.m"
  MR_Word analysis__ModuleName_10,
#line 857 "analysis.m"
  MR_String analysis__AnalysisName_11,
#line 857 "analysis.m"
  MR_Word analysis__FuncMap_12,
#line 857 "analysis.m"
  MR_Word analysis__STATE_VARIABLE_Info_0_15,
#line 857 "analysis.m"
  MR_Word * analysis__STATE_VARIABLE_Info_16)
#line 857 "analysis.m"
{
#line 862 "analysis.m"
  {
#line 862 "analysis.m"
    MR_bool analysis__succeeded;
#line 862 "analysis.m"
    MR_Word analysis__V_19_19;
#line 863 "analysis.m"
    MR_Box analysis__conv2_STATE_VARIABLE_Info_16;
#line 863 "analysis.m"
    MR_Box analysis__conv1_STATE_VARIABLE_IO_18;

#line 864 "analysis.m"
    {
#line 864 "analysis.m"
      analysis__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 864 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_19_19, 0) = ((MR_Box) (&analysis_scalar_common_11[0]));
#line 864 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_19_19, 1) = ((MR_Box) (analysis__update_analysis_registry_3_8_p_0_1));
#line 864 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_19_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 864 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_19_19, 3) = ((MR_Box) (analysis__ModuleInfo_9));
#line 864 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_19_19, 4) = ((MR_Box) (analysis__ModuleName_10));
#line 864 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_19_19, 5) = ((MR_Box) (analysis__AnalysisName_11));
#line 864 "analysis.m"
    }
#line 863 "analysis.m"
    {
#line 863 "analysis.m"
      mercury__map__foldl2_6_p_2((MR_Word) &analysis__analysis__type_ctor_info_func_id_0, (MR_Word) &analysis_scalar_common_1[1], (MR_Word) &analysis__analysis__type_ctor_info_analysis_info_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, analysis__V_19_19, analysis__FuncMap_12, ((MR_Box) (analysis__STATE_VARIABLE_Info_0_15)), &analysis__conv2_STATE_VARIABLE_Info_16, ((MR_Box) ((MR_Integer) 0)), &analysis__conv1_STATE_VARIABLE_IO_18);
    }
#line 863 "analysis.m"
    *analysis__STATE_VARIABLE_Info_16 = ((MR_Word) analysis__conv2_STATE_VARIABLE_Info_16);
#line 862 "analysis.m"
  }
#line 857 "analysis.m"
}

#line 854 "analysis.m"
static void MR_CALL 
analysis__update_analysis_registry_2_7_p_0_1(
#line 854 "analysis.m"
  MR_Box analysis__closure_arg,
#line 854 "analysis.m"
  MR_Box analysis__wrapper_arg_1,
#line 854 "analysis.m"
  MR_Box analysis__wrapper_arg_2,
#line 854 "analysis.m"
  MR_Box analysis__wrapper_arg_3,
#line 854 "analysis.m"
  MR_Box * analysis__wrapper_arg_4,
#line 854 "analysis.m"
  MR_Box analysis__wrapper_arg_5,
#line 854 "analysis.m"
  MR_Box * analysis__wrapper_arg_6)
#line 854 "analysis.m"
{
#line 854 "analysis.m"
  {
#line 854 "analysis.m"
    MR_Box analysis__closure = analysis__closure_arg;
#line 854 "analysis.m"
    MR_Word analysis__conv0_STATE_VARIABLE_Info_16;

#line 854 "analysis.m"
    {
#line 854 "analysis.m"
      analysis__update_analysis_registry_3_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 4))), ((MR_String) analysis__wrapper_arg_1), ((MR_Word) analysis__wrapper_arg_2), ((MR_Word) analysis__wrapper_arg_3), &analysis__conv0_STATE_VARIABLE_Info_16);
    }
#line 854 "analysis.m"
    *analysis__wrapper_arg_4 = ((MR_Box) (analysis__conv0_STATE_VARIABLE_Info_16));
#line 854 "analysis.m"
  }
#line 854 "analysis.m"
}

#line 849 "analysis.m"
void MR_CALL 
analysis__update_analysis_registry_2_7_p_0(
#line 849 "analysis.m"
  MR_Word analysis__ModuleInfo_8,
#line 849 "analysis.m"
  MR_Word analysis__ModuleName_9,
#line 849 "analysis.m"
  MR_Word analysis__ModuleMap_10,
#line 849 "analysis.m"
  MR_Word analysis__STATE_VARIABLE_Info_0_13,
#line 849 "analysis.m"
  MR_Word * analysis__STATE_VARIABLE_Info_14)
#line 849 "analysis.m"
{
#line 853 "analysis.m"
  {
#line 853 "analysis.m"
    MR_bool analysis__succeeded;
#line 853 "analysis.m"
    MR_Word analysis__V_17_17;
#line 854 "analysis.m"
    MR_Box analysis__conv2_STATE_VARIABLE_Info_14;
#line 854 "analysis.m"
    MR_Box analysis__conv1_STATE_VARIABLE_IO_16;

#line 854 "analysis.m"
    {
#line 854 "analysis.m"
      analysis__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 854 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_17_17, 0) = ((MR_Box) (&analysis_scalar_common_10[0]));
#line 854 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_17_17, 1) = ((MR_Box) (analysis__update_analysis_registry_2_7_p_0_1));
#line 854 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_17_17, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 854 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_17_17, 3) = ((MR_Box) (analysis__ModuleInfo_8));
#line 854 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_17_17, 4) = ((MR_Box) (analysis__ModuleName_9));
#line 854 "analysis.m"
    }
#line 854 "analysis.m"
    {
#line 854 "analysis.m"
      mercury__map__foldl2_6_p_2((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &analysis_scalar_common_2[2], (MR_Word) &analysis__analysis__type_ctor_info_analysis_info_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, analysis__V_17_17, analysis__ModuleMap_10, ((MR_Box) (analysis__STATE_VARIABLE_Info_0_13)), &analysis__conv2_STATE_VARIABLE_Info_14, ((MR_Box) ((MR_Integer) 0)), &analysis__conv1_STATE_VARIABLE_IO_16);
    }
#line 854 "analysis.m"
    *analysis__STATE_VARIABLE_Info_14 = ((MR_Word) analysis__conv2_STATE_VARIABLE_Info_14);
#line 853 "analysis.m"
  }
#line 849 "analysis.m"
}

#line 854 "analysis.m"
static void MR_CALL 
analysis__update_analysis_registry_5_p_0_1(
#line 854 "analysis.m"
  MR_Box analysis__closure_arg,
#line 854 "analysis.m"
  MR_Box analysis__wrapper_arg_1,
#line 854 "analysis.m"
  MR_Box analysis__wrapper_arg_2,
#line 854 "analysis.m"
  MR_Box analysis__wrapper_arg_3,
#line 854 "analysis.m"
  MR_Box * analysis__wrapper_arg_4,
#line 854 "analysis.m"
  MR_Box analysis__wrapper_arg_5,
#line 854 "analysis.m"
  MR_Box * analysis__wrapper_arg_6)
#line 854 "analysis.m"
{
#line 854 "analysis.m"
  {
#line 854 "analysis.m"
    MR_Box analysis__closure = analysis__closure_arg;
#line 854 "analysis.m"
    MR_Word analysis__conv0_STATE_VARIABLE_Info_16;

#line 854 "analysis.m"
    {
#line 854 "analysis.m"
      analysis__update_analysis_registry_3_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 4))), ((MR_String) analysis__wrapper_arg_1), ((MR_Word) analysis__wrapper_arg_2), ((MR_Word) analysis__wrapper_arg_3), &analysis__conv0_STATE_VARIABLE_Info_16);
    }
#line 854 "analysis.m"
    *analysis__wrapper_arg_4 = ((MR_Box) (analysis__conv0_STATE_VARIABLE_Info_16));
#line 854 "analysis.m"
  }
#line 854 "analysis.m"
}

#line 839 "analysis.m"
void MR_CALL 
analysis__update_analysis_registry_5_p_0(
#line 839 "analysis.m"
  MR_Word analysis__ModuleInfo_6,
#line 839 "analysis.m"
  MR_Word analysis__STATE_VARIABLE_Info_0_10,
#line 839 "analysis.m"
  MR_Word * analysis__STATE_VARIABLE_Info_11)
#line 839 "analysis.m"
{
#line 842 "analysis.m"
  {
#line 842 "analysis.m"
    MR_bool analysis__succeeded;
#line 842 "analysis.m"
    MR_Word analysis__NewResults_9;
#line 842 "analysis.m"
    MR_Word analysis__V_17_17;
#line 842 "analysis.m"
    MR_Word analysis__STATE_VARIABLE_Info_18_18;
#line 842 "analysis.m"
    MR_Word analysis__V_21_21;
#line 842 "analysis.m"
    MR_Word analysis__Debug_61;
#line 842 "analysis.m"
    MR_Word analysis__V_76_76;
#line 844 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_compiler_52;
#line 844 "analysis.m"
    MR_Box analysis__V_22_22;
#line 844 "analysis.m"
    MR_Word analysis__V_23_23;
#line 844 "analysis.m"
    MR_Word analysis__V_24_24;
#line 844 "analysis.m"
    MR_Word analysis__V_25_25;
#line 844 "analysis.m"
    MR_Word analysis__V_26_26;
#line 844 "analysis.m"
    MR_Word analysis__V_27_27;
#line 844 "analysis.m"
    MR_Word analysis__V_28_28;
#line 844 "analysis.m"
    MR_Word analysis__V_29_29;
#line 844 "analysis.m"
    MR_Word analysis__V_30_30;
#line 845 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_compiler_53;
#line 845 "analysis.m"
    MR_Box analysis__V_31_31;
#line 845 "analysis.m"
    MR_Word analysis__V_32_32;
#line 845 "analysis.m"
    MR_Word analysis__V_33_33;
#line 845 "analysis.m"
    MR_Word analysis__V_34_34;
#line 845 "analysis.m"
    MR_Word analysis__V_35_35;
#line 845 "analysis.m"
    MR_Word analysis__V_36_36;
#line 845 "analysis.m"
    MR_Word analysis__V_37_37;
#line 845 "analysis.m"
    MR_Word analysis__V_38_38;
#line 845 "analysis.m"
    MR_Word analysis__V_39_39;
#line 854 "analysis.m"
    MR_Box analysis__conv2_STATE_VARIABLE_Info_18_18;
#line 854 "analysis.m"
    MR_Box analysis__conv1_STATE_VARIABLE_IO_13;
#line 847 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_compiler_56;
#line 847 "analysis.m"
    MR_Box analysis__V_40_40;
#line 847 "analysis.m"
    MR_Word analysis__V_41_41;
#line 847 "analysis.m"
    MR_Word analysis__V_42_42;
#line 847 "analysis.m"
    MR_Word analysis__V_43_43;
#line 847 "analysis.m"
    MR_Word analysis__V_44_44;
#line 847 "analysis.m"
    MR_Word analysis__V_45_45;
#line 847 "analysis.m"
    MR_Word analysis__V_46_46;
#line 847 "analysis.m"
    MR_Word analysis__V_48_48;
#line 847 "analysis.m"
    MR_Word analysis__V_49_49;
#line 847 "analysis.m"
    MR_Word analysis__V_47_47;

#line 1387 "analysis.m"
{
#define MR_PROC_LABEL analysis__update_analysis_registry_5_p_0


		{
#line 1387 "analysis.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&analysis__mutable_variable_debug_analysis_lock,
                    "analysis__mutable_variable_debug_analysis_lock");
#endif

#line 13706 "analysis.c"

		;}
#undef MR_PROC_LABEL
#line 1387 "analysis.m"
}
#line 1387 "analysis.m"
{
#define MR_PROC_LABEL analysis__update_analysis_registry_5_p_0

	MR_Word X;

		{
#line 1387 "analysis.m"
X = analysis__mutable_variable_debug_analysis;

#line 13722 "analysis.c"

		;}
#undef MR_PROC_LABEL
	 analysis__Debug_61  = X;
#line 1387 "analysis.m"
}
#line 1387 "analysis.m"
{
#define MR_PROC_LABEL analysis__update_analysis_registry_5_p_0


		{
#line 1387 "analysis.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&analysis__mutable_variable_debug_analysis_lock,
                    "analysis__mutable_variable_debug_analysis_lock");
#endif

#line 13741 "analysis.c"

		;}
#undef MR_PROC_LABEL
#line 1387 "analysis.m"
}
#line 1400 "analysis.m"
#line 1400 "analysis.m"
    switch (analysis__Debug_61) {
#line 1400 "analysis.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1400 "analysis.m"
      case (MR_Integer) 0:
#line 1401 "analysis.m"
        {
#line 1401 "analysis.m"
        }
#line 1400 "analysis.m"
        break;
#line 1400 "analysis.m"
      case (MR_Integer) 1:
#line 1399 "analysis.m"
        {
#line 1399 "analysis.m"
          mercury__io__write_string_3_p_0((MR_String) "% Updating analysis registry.\n");
        }
#line 1400 "analysis.m"
        break;
#line 1400 "analysis.m"
    }
#line 844 "analysis.m"
    analysis__TypeClassInfo_for_compiler_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_10, (MR_Integer) 0)));
#line 844 "analysis.m"
    analysis__V_22_22 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_10, (MR_Integer) 1));
#line 844 "analysis.m"
    analysis__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_10, (MR_Integer) 2)));
#line 844 "analysis.m"
    analysis__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_10, (MR_Integer) 3)));
#line 844 "analysis.m"
    analysis__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_10, (MR_Integer) 4)));
#line 844 "analysis.m"
    analysis__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_10, (MR_Integer) 5)));
#line 844 "analysis.m"
    analysis__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_10, (MR_Integer) 6)));
#line 844 "analysis.m"
    analysis__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_10, (MR_Integer) 7)));
#line 844 "analysis.m"
    analysis__NewResults_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_10, (MR_Integer) 8)));
#line 844 "analysis.m"
    analysis__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_10, (MR_Integer) 9)));
#line 844 "analysis.m"
    analysis__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_10, (MR_Integer) 10)));
#line 845 "analysis.m"
    analysis__TypeClassInfo_for_compiler_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_10, (MR_Integer) 0)));
#line 845 "analysis.m"
    analysis__V_31_31 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_10, (MR_Integer) 1));
#line 845 "analysis.m"
    analysis__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_10, (MR_Integer) 2)));
#line 845 "analysis.m"
    analysis__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_10, (MR_Integer) 3)));
#line 845 "analysis.m"
    analysis__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_10, (MR_Integer) 4)));
#line 845 "analysis.m"
    analysis__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_10, (MR_Integer) 5)));
#line 845 "analysis.m"
    analysis__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_10, (MR_Integer) 6)));
#line 845 "analysis.m"
    analysis__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_10, (MR_Integer) 7)));
#line 845 "analysis.m"
    analysis__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_10, (MR_Integer) 8)));
#line 845 "analysis.m"
    analysis__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_10, (MR_Integer) 9)));
#line 845 "analysis.m"
    analysis__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_10, (MR_Integer) 10)));
#line 854 "analysis.m"
    {
#line 854 "analysis.m"
      analysis__V_76_76 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 854 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_76_76, 0) = ((MR_Box) (&analysis_scalar_common_10[0]));
#line 854 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_76_76, 1) = ((MR_Box) (analysis__update_analysis_registry_5_p_0_1));
#line 854 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_76_76, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 854 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_76_76, 3) = ((MR_Box) (analysis__ModuleInfo_6));
#line 854 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_76_76, 4) = ((MR_Box) (analysis__V_17_17));
#line 854 "analysis.m"
    }
#line 854 "analysis.m"
    {
#line 854 "analysis.m"
      mercury__map__foldl2_6_p_2((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &analysis_scalar_common_2[2], (MR_Word) &analysis__analysis__type_ctor_info_analysis_info_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, analysis__V_76_76, analysis__NewResults_9, ((MR_Box) (analysis__STATE_VARIABLE_Info_0_10)), &analysis__conv2_STATE_VARIABLE_Info_18_18, ((MR_Box) ((MR_Integer) 0)), &analysis__conv1_STATE_VARIABLE_IO_13);
    }
#line 854 "analysis.m"
    analysis__STATE_VARIABLE_Info_18_18 = ((MR_Word) analysis__conv2_STATE_VARIABLE_Info_18_18);
#line 847 "analysis.m"
    {
#line 847 "analysis.m"
      analysis__V_21_21 = mercury__map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &analysis_scalar_common_2[2]);
    }
#line 847 "analysis.m"
    analysis__TypeClassInfo_for_compiler_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_18_18, (MR_Integer) 0)));
#line 847 "analysis.m"
    analysis__V_40_40 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_18_18, (MR_Integer) 1));
#line 847 "analysis.m"
    analysis__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_18_18, (MR_Integer) 2)));
#line 847 "analysis.m"
    analysis__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_18_18, (MR_Integer) 3)));
#line 847 "analysis.m"
    analysis__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_18_18, (MR_Integer) 4)));
#line 847 "analysis.m"
    analysis__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_18_18, (MR_Integer) 5)));
#line 847 "analysis.m"
    analysis__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_18_18, (MR_Integer) 6)));
#line 847 "analysis.m"
    analysis__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_18_18, (MR_Integer) 7)));
#line 847 "analysis.m"
    analysis__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_18_18, (MR_Integer) 8)));
#line 847 "analysis.m"
    analysis__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_18_18, (MR_Integer) 9)));
#line 847 "analysis.m"
    analysis__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_18_18, (MR_Integer) 10)));
#line 847 "analysis.m"
    {
#line 847 "analysis.m"
      MR_Word base;
#line 847 "analysis.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 847 "analysis.m"
      *analysis__STATE_VARIABLE_Info_11 = base;
#line 847 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (analysis__TypeClassInfo_for_compiler_56));
#line 847 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 1) = analysis__V_40_40;
#line 847 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (analysis__V_41_41));
#line 847 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (analysis__V_42_42));
#line 847 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (analysis__V_43_43));
#line 847 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (analysis__V_44_44));
#line 847 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (analysis__V_45_45));
#line 847 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (analysis__V_46_46));
#line 847 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (analysis__V_21_21));
#line 847 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (analysis__V_48_48));
#line 847 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (analysis__V_49_49));
#line 847 "analysis.m"
    }
#line 842 "analysis.m"
  }
#line 839 "analysis.m"
}

#line 776 "analysis.m"
void MR_CALL 
analysis__record_dependency_2_7_p_0(
#line 776 "analysis.m"
  MR_Word analysis__TypeClassInfo_for_call_pattern_58,
#line 776 "analysis.m"
  MR_Word analysis__CallerModuleName_8,
#line 776 "analysis.m"
  MR_String analysis__AnalysisName_9,
#line 776 "analysis.m"
  MR_Word analysis__CalleeModuleName_10,
#line 776 "analysis.m"
  MR_Word analysis__FuncId_11,
#line 776 "analysis.m"
  MR_Box analysis__Call_12,
#line 776 "analysis.m"
  MR_Word analysis__STATE_VARIABLE_Info_0_22,
#line 776 "analysis.m"
  MR_Word * analysis__STATE_VARIABLE_Info_23)
#line 776 "analysis.m"
{
#line 782 "analysis.m"
  {
#line 782 "analysis.m"
    MR_bool analysis__succeeded;
#line 782 "analysis.m"
    MR_Word analysis__Analyses1_15;
#line 782 "analysis.m"
    MR_Word analysis__Funcs1_17;
#line 782 "analysis.m"
    MR_Word analysis__FuncArcs1_19;
#line 782 "analysis.m"
    MR_Word analysis__Dep_20;
#line 783 "analysis.m"
    MR_Word analysis__Analyses0_14;
#line 783 "analysis.m"
    MR_Word analysis__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 10)));
#line 783 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_compiler_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 0)));
#line 783 "analysis.m"
    MR_Box analysis__V_30_30 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 1));
#line 783 "analysis.m"
    MR_Word analysis__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 2)));
#line 783 "analysis.m"
    MR_Word analysis__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 3)));
#line 783 "analysis.m"
    MR_Word analysis__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 4)));
#line 783 "analysis.m"
    MR_Word analysis__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 5)));
#line 783 "analysis.m"
    MR_Word analysis__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 6)));
#line 783 "analysis.m"
    MR_Word analysis__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 7)));
#line 783 "analysis.m"
    MR_Word analysis__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 8)));
#line 783 "analysis.m"
    MR_Word analysis__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 9)));
#line 783 "analysis.m"
    MR_Box analysis__conv0_Analyses0_14;
#line 788 "analysis.m"
    MR_Word analysis__Funcs0_16;
#line 788 "analysis.m"
    MR_Box analysis__conv1_Funcs0_16;
#line 793 "analysis.m"
    MR_Word analysis__FuncArcs0_18;
#line 793 "analysis.m"
    MR_Box analysis__conv2_FuncArcs0_18;

#line 783 "analysis.m"
    {
#line 783 "analysis.m"
      analysis__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &analysis_scalar_common_2[5], analysis__V_24_24, ((MR_Box) (analysis__CalleeModuleName_10)), &analysis__conv0_Analyses0_14);
    }
#line 783 "analysis.m"
    if (analysis__succeeded)
#line 783 "analysis.m"
      {
#line 783 "analysis.m"
        analysis__Analyses0_14 = ((MR_Word) analysis__conv0_Analyses0_14);
#line 783 "analysis.m"
        analysis__succeeded = MR_TRUE;
#line 783 "analysis.m"
      }
#line 783 "analysis.m"
    if (analysis__succeeded)
#line 784 "analysis.m"
      analysis__Analyses1_15 = analysis__Analyses0_14;
#line 783 "analysis.m"
    else
#line 786 "analysis.m"
      {
#line 786 "analysis.m"
        {
#line 786 "analysis.m"
          analysis__Analyses1_15 = mercury__map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &analysis_scalar_common_2[4]);
        }
#line 786 "analysis.m"
      }
#line 788 "analysis.m"
    {
#line 788 "analysis.m"
      analysis__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &analysis_scalar_common_2[4], analysis__Analyses1_15, ((MR_Box) (analysis__AnalysisName_9)), &analysis__conv1_Funcs0_16);
    }
#line 788 "analysis.m"
    if (analysis__succeeded)
#line 788 "analysis.m"
      {
#line 788 "analysis.m"
        analysis__Funcs0_16 = ((MR_Word) analysis__conv1_Funcs0_16);
#line 788 "analysis.m"
        analysis__succeeded = MR_TRUE;
#line 788 "analysis.m"
      }
#line 788 "analysis.m"
    if (analysis__succeeded)
#line 789 "analysis.m"
      analysis__Funcs1_17 = analysis__Funcs0_16;
#line 788 "analysis.m"
    else
#line 791 "analysis.m"
      {
#line 791 "analysis.m"
        {
#line 791 "analysis.m"
          analysis__Funcs1_17 = mercury__map__init_0_f_0((MR_Word) &analysis__analysis__type_ctor_info_func_id_0, (MR_Word) &analysis_scalar_common_1[2]);
        }
#line 791 "analysis.m"
      }
#line 793 "analysis.m"
    {
#line 793 "analysis.m"
      analysis__succeeded = mercury__map__search_3_p_0((MR_Word) &analysis__analysis__type_ctor_info_func_id_0, (MR_Word) &analysis_scalar_common_1[2], analysis__Funcs1_17, ((MR_Box) (analysis__FuncId_11)), &analysis__conv2_FuncArcs0_18);
    }
#line 793 "analysis.m"
    if (analysis__succeeded)
#line 793 "analysis.m"
      {
#line 793 "analysis.m"
        analysis__FuncArcs0_18 = ((MR_Word) analysis__conv2_FuncArcs0_18);
#line 793 "analysis.m"
        analysis__succeeded = MR_TRUE;
#line 793 "analysis.m"
      }
#line 793 "analysis.m"
    if (analysis__succeeded)
#line 794 "analysis.m"
      analysis__FuncArcs1_19 = analysis__FuncArcs0_18;
#line 793 "analysis.m"
    else
#line 796 "analysis.m"
      analysis__FuncArcs1_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 798 "analysis.m"
    {
#line 798 "analysis.m"
      analysis__Dep_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 798 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__Dep_20, 0) = ((MR_Box) (analysis__TypeClassInfo_for_call_pattern_58));
#line 798 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__Dep_20, 1) = analysis__Call_12;
#line 798 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__Dep_20, 2) = ((MR_Box) (analysis__CallerModuleName_8));
#line 798 "analysis.m"
    }
#line 800 "analysis.m"
    {
#line 800 "analysis.m"
      analysis__succeeded = mercury__list__member_2_p_0((MR_Word) &analysis__analysis__type_ctor_info_imdg_arc_0, ((MR_Box) (analysis__Dep_20)), analysis__FuncArcs1_19);
    }
#line 800 "analysis.m"
    if (analysis__succeeded)
#line 800 "analysis.m"
      *analysis__STATE_VARIABLE_Info_23 = analysis__STATE_VARIABLE_Info_0_22;
#line 800 "analysis.m"
    else
#line 803 "analysis.m"
      {
#line 803 "analysis.m"
        MR_Word analysis__FuncArcs_21;
#line 803 "analysis.m"
        MR_Word analysis__V_26_26;
#line 803 "analysis.m"
        MR_Word analysis__V_27_27;
#line 803 "analysis.m"
        MR_Word analysis__V_28_28;
#line 803 "analysis.m"
        MR_Word analysis__V_29_29;
#line 805 "analysis.m"
        MR_Word analysis__TypeClassInfo_for_compiler_73;
#line 805 "analysis.m"
        MR_Box analysis__V_39_39;
#line 805 "analysis.m"
        MR_Word analysis__V_40_40;
#line 805 "analysis.m"
        MR_Word analysis__V_41_41;
#line 805 "analysis.m"
        MR_Word analysis__V_42_42;
#line 805 "analysis.m"
        MR_Word analysis__V_43_43;
#line 805 "analysis.m"
        MR_Word analysis__V_44_44;
#line 805 "analysis.m"
        MR_Word analysis__V_45_45;
#line 805 "analysis.m"
        MR_Word analysis__V_46_46;
#line 805 "analysis.m"
        MR_Word analysis__V_47_47;
#line 804 "analysis.m"
        MR_Word analysis__TypeClassInfo_for_compiler_78;
#line 804 "analysis.m"
        MR_Box analysis__V_48_48;
#line 804 "analysis.m"
        MR_Word analysis__V_49_49;
#line 804 "analysis.m"
        MR_Word analysis__V_50_50;
#line 804 "analysis.m"
        MR_Word analysis__V_51_51;
#line 804 "analysis.m"
        MR_Word analysis__V_52_52;
#line 804 "analysis.m"
        MR_Word analysis__V_53_53;
#line 804 "analysis.m"
        MR_Word analysis__V_54_54;
#line 804 "analysis.m"
        MR_Word analysis__V_55_55;
#line 804 "analysis.m"
        MR_Word analysis__V_56_56;
#line 804 "analysis.m"
        MR_Word analysis__V_57_57;

#line 803 "analysis.m"
        {
#line 803 "analysis.m"
          analysis__FuncArcs_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 803 "analysis.m"
          MR_hl_field(MR_mktag(1), analysis__FuncArcs_21, 0) = ((MR_Box) (analysis__Dep_20));
#line 803 "analysis.m"
          MR_hl_field(MR_mktag(1), analysis__FuncArcs_21, 1) = ((MR_Box) (analysis__FuncArcs1_19));
#line 803 "analysis.m"
        }
#line 805 "analysis.m"
        analysis__TypeClassInfo_for_compiler_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 0)));
#line 805 "analysis.m"
        analysis__V_39_39 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 1));
#line 805 "analysis.m"
        analysis__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 2)));
#line 805 "analysis.m"
        analysis__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 3)));
#line 805 "analysis.m"
        analysis__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 4)));
#line 805 "analysis.m"
        analysis__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 5)));
#line 805 "analysis.m"
        analysis__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 6)));
#line 805 "analysis.m"
        analysis__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 7)));
#line 805 "analysis.m"
        analysis__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 8)));
#line 805 "analysis.m"
        analysis__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 9)));
#line 805 "analysis.m"
        analysis__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 10)));
#line 807 "analysis.m"
        {
#line 807 "analysis.m"
          analysis__V_29_29 = mercury__map__set_3_f_0((MR_Word) &analysis__analysis__type_ctor_info_func_id_0, (MR_Word) &analysis_scalar_common_1[2], analysis__Funcs1_17, ((MR_Box) (analysis__FuncId_11)), ((MR_Box) (analysis__FuncArcs_21)));
        }
#line 806 "analysis.m"
        {
#line 806 "analysis.m"
          analysis__V_28_28 = mercury__map__set_3_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &analysis_scalar_common_2[4], analysis__Analyses1_15, ((MR_Box) (analysis__AnalysisName_9)), ((MR_Box) (analysis__V_29_29)));
        }
#line 805 "analysis.m"
        {
#line 805 "analysis.m"
          analysis__V_26_26 = mercury__map__set_3_f_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &analysis_scalar_common_2[5], analysis__V_27_27, ((MR_Box) (analysis__CalleeModuleName_10)), ((MR_Box) (analysis__V_28_28)));
        }
#line 804 "analysis.m"
        analysis__TypeClassInfo_for_compiler_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 0)));
#line 804 "analysis.m"
        analysis__V_48_48 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 1));
#line 804 "analysis.m"
        analysis__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 2)));
#line 804 "analysis.m"
        analysis__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 3)));
#line 804 "analysis.m"
        analysis__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 4)));
#line 804 "analysis.m"
        analysis__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 5)));
#line 804 "analysis.m"
        analysis__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 6)));
#line 804 "analysis.m"
        analysis__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 7)));
#line 804 "analysis.m"
        analysis__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 8)));
#line 804 "analysis.m"
        analysis__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 9)));
#line 804 "analysis.m"
        analysis__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 10)));
#line 804 "analysis.m"
        {
#line 804 "analysis.m"
          MR_Word base;
#line 804 "analysis.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 804 "analysis.m"
          *analysis__STATE_VARIABLE_Info_23 = base;
#line 804 "analysis.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (analysis__TypeClassInfo_for_compiler_78));
#line 804 "analysis.m"
          MR_hl_field(MR_mktag(0), base, 1) = analysis__V_48_48;
#line 804 "analysis.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (analysis__V_49_49));
#line 804 "analysis.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (analysis__V_50_50));
#line 804 "analysis.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (analysis__V_51_51));
#line 804 "analysis.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (analysis__V_52_52));
#line 804 "analysis.m"
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (analysis__V_53_53));
#line 804 "analysis.m"
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (analysis__V_54_54));
#line 804 "analysis.m"
          MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (analysis__V_55_55));
#line 804 "analysis.m"
          MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (analysis__V_56_56));
#line 804 "analysis.m"
          MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (analysis__V_26_26));
#line 804 "analysis.m"
        }
#line 803 "analysis.m"
      }
#line 782 "analysis.m"
  }
#line 776 "analysis.m"
}

#line 712 "analysis.m"
void MR_CALL 
analysis__record_request_2_7_p_0(
#line 712 "analysis.m"
  MR_Word analysis__TypeClassInfo_for_call_pattern_58,
#line 712 "analysis.m"
  MR_Word analysis__CallerModule_8,
#line 712 "analysis.m"
  MR_String analysis__AnalysisName_9,
#line 712 "analysis.m"
  MR_Word analysis__ModuleName_10,
#line 712 "analysis.m"
  MR_Word analysis__FuncId_11,
#line 712 "analysis.m"
  MR_Box analysis__CallPattern_12,
#line 712 "analysis.m"
  MR_Word analysis__STATE_VARIABLE_Info_0_22,
#line 712 "analysis.m"
  MR_Word * analysis__STATE_VARIABLE_Info_23)
#line 712 "analysis.m"
{
#line 717 "analysis.m"
  {
#line 717 "analysis.m"
    MR_bool analysis__succeeded;
#line 717 "analysis.m"
    MR_Word analysis__ModuleResults1_15;
#line 717 "analysis.m"
    MR_Word analysis__AnalysisResults1_17;
#line 717 "analysis.m"
    MR_Word analysis__FuncResults1_19;
#line 717 "analysis.m"
    MR_Word analysis__Request_20;
#line 717 "analysis.m"
    MR_Word analysis__FuncResults_21;
#line 717 "analysis.m"
    MR_Word analysis__V_26_26;
#line 717 "analysis.m"
    MR_Word analysis__V_27_27;
#line 717 "analysis.m"
    MR_Word analysis__V_28_28;
#line 717 "analysis.m"
    MR_Word analysis__V_29_29;
#line 718 "analysis.m"
    MR_Word analysis__ModuleResults0_14;
#line 718 "analysis.m"
    MR_Word analysis__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 5)));
#line 718 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_compiler_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 0)));
#line 718 "analysis.m"
    MR_Box analysis__V_30_30 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 1));
#line 718 "analysis.m"
    MR_Word analysis__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 2)));
#line 718 "analysis.m"
    MR_Word analysis__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 3)));
#line 718 "analysis.m"
    MR_Word analysis__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 4)));
#line 718 "analysis.m"
    MR_Word analysis__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 6)));
#line 718 "analysis.m"
    MR_Word analysis__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 7)));
#line 718 "analysis.m"
    MR_Word analysis__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 8)));
#line 718 "analysis.m"
    MR_Word analysis__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 9)));
#line 718 "analysis.m"
    MR_Word analysis__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 10)));
#line 718 "analysis.m"
    MR_Box analysis__conv0_ModuleResults0_14;
#line 723 "analysis.m"
    MR_Word analysis__AnalysisResults0_16;
#line 723 "analysis.m"
    MR_Box analysis__conv1_AnalysisResults0_16;
#line 728 "analysis.m"
    MR_Word analysis__FuncResults0_18;
#line 728 "analysis.m"
    MR_Box analysis__conv2_FuncResults0_18;
#line 736 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_compiler_72;
#line 736 "analysis.m"
    MR_Box analysis__V_39_39;
#line 736 "analysis.m"
    MR_Word analysis__V_40_40;
#line 736 "analysis.m"
    MR_Word analysis__V_41_41;
#line 736 "analysis.m"
    MR_Word analysis__V_42_42;
#line 736 "analysis.m"
    MR_Word analysis__V_43_43;
#line 736 "analysis.m"
    MR_Word analysis__V_44_44;
#line 736 "analysis.m"
    MR_Word analysis__V_45_45;
#line 736 "analysis.m"
    MR_Word analysis__V_46_46;
#line 736 "analysis.m"
    MR_Word analysis__V_47_47;
#line 735 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_compiler_77;
#line 735 "analysis.m"
    MR_Box analysis__V_48_48;
#line 735 "analysis.m"
    MR_Word analysis__V_49_49;
#line 735 "analysis.m"
    MR_Word analysis__V_50_50;
#line 735 "analysis.m"
    MR_Word analysis__V_51_51;
#line 735 "analysis.m"
    MR_Word analysis__V_53_53;
#line 735 "analysis.m"
    MR_Word analysis__V_54_54;
#line 735 "analysis.m"
    MR_Word analysis__V_55_55;
#line 735 "analysis.m"
    MR_Word analysis__V_56_56;
#line 735 "analysis.m"
    MR_Word analysis__V_57_57;
#line 735 "analysis.m"
    MR_Word analysis__V_52_52;

#line 718 "analysis.m"
    {
#line 718 "analysis.m"
      analysis__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &analysis_scalar_common_2[1], analysis__V_24_24, ((MR_Box) (analysis__ModuleName_10)), &analysis__conv0_ModuleResults0_14);
    }
#line 718 "analysis.m"
    if (analysis__succeeded)
#line 718 "analysis.m"
      {
#line 718 "analysis.m"
        analysis__ModuleResults0_14 = ((MR_Word) analysis__conv0_ModuleResults0_14);
#line 718 "analysis.m"
        analysis__succeeded = MR_TRUE;
#line 718 "analysis.m"
      }
#line 718 "analysis.m"
    if (analysis__succeeded)
#line 719 "analysis.m"
      analysis__ModuleResults1_15 = analysis__ModuleResults0_14;
#line 718 "analysis.m"
    else
#line 721 "analysis.m"
      {
#line 721 "analysis.m"
        {
#line 721 "analysis.m"
          analysis__ModuleResults1_15 = mercury__map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &analysis_scalar_common_2[0]);
        }
#line 721 "analysis.m"
      }
#line 723 "analysis.m"
    {
#line 723 "analysis.m"
      analysis__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &analysis_scalar_common_2[0], analysis__ModuleResults1_15, ((MR_Box) (analysis__AnalysisName_9)), &analysis__conv1_AnalysisResults0_16);
    }
#line 723 "analysis.m"
    if (analysis__succeeded)
#line 723 "analysis.m"
      {
#line 723 "analysis.m"
        analysis__AnalysisResults0_16 = ((MR_Word) analysis__conv1_AnalysisResults0_16);
#line 723 "analysis.m"
        analysis__succeeded = MR_TRUE;
#line 723 "analysis.m"
      }
#line 723 "analysis.m"
    if (analysis__succeeded)
#line 724 "analysis.m"
      analysis__AnalysisResults1_17 = analysis__AnalysisResults0_16;
#line 723 "analysis.m"
    else
#line 726 "analysis.m"
      {
#line 726 "analysis.m"
        {
#line 726 "analysis.m"
          analysis__AnalysisResults1_17 = mercury__map__init_0_f_0((MR_Word) &analysis__analysis__type_ctor_info_func_id_0, (MR_Word) &analysis_scalar_common_1[0]);
        }
#line 726 "analysis.m"
      }
#line 728 "analysis.m"
    {
#line 728 "analysis.m"
      analysis__succeeded = mercury__map__search_3_p_0((MR_Word) &analysis__analysis__type_ctor_info_func_id_0, (MR_Word) &analysis_scalar_common_1[0], analysis__AnalysisResults1_17, ((MR_Box) (analysis__FuncId_11)), &analysis__conv2_FuncResults0_18);
    }
#line 728 "analysis.m"
    if (analysis__succeeded)
#line 728 "analysis.m"
      {
#line 728 "analysis.m"
        analysis__FuncResults0_18 = ((MR_Word) analysis__conv2_FuncResults0_18);
#line 728 "analysis.m"
        analysis__succeeded = MR_TRUE;
#line 728 "analysis.m"
      }
#line 728 "analysis.m"
    if (analysis__succeeded)
#line 729 "analysis.m"
      analysis__FuncResults1_19 = analysis__FuncResults0_18;
#line 728 "analysis.m"
    else
#line 731 "analysis.m"
      analysis__FuncResults1_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 733 "analysis.m"
    {
#line 733 "analysis.m"
      analysis__Request_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 733 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__Request_20, 0) = ((MR_Box) (analysis__TypeClassInfo_for_call_pattern_58));
#line 733 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__Request_20, 1) = analysis__CallPattern_12;
#line 733 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__Request_20, 2) = ((MR_Box) (analysis__CallerModule_8));
#line 733 "analysis.m"
    }
#line 734 "analysis.m"
    {
#line 734 "analysis.m"
      analysis__FuncResults_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 734 "analysis.m"
      MR_hl_field(MR_mktag(1), analysis__FuncResults_21, 0) = ((MR_Box) (analysis__Request_20));
#line 734 "analysis.m"
      MR_hl_field(MR_mktag(1), analysis__FuncResults_21, 1) = ((MR_Box) (analysis__FuncResults1_19));
#line 734 "analysis.m"
    }
#line 736 "analysis.m"
    analysis__TypeClassInfo_for_compiler_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 0)));
#line 736 "analysis.m"
    analysis__V_39_39 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 1));
#line 736 "analysis.m"
    analysis__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 2)));
#line 736 "analysis.m"
    analysis__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 3)));
#line 736 "analysis.m"
    analysis__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 4)));
#line 736 "analysis.m"
    analysis__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 5)));
#line 736 "analysis.m"
    analysis__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 6)));
#line 736 "analysis.m"
    analysis__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 7)));
#line 736 "analysis.m"
    analysis__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 8)));
#line 736 "analysis.m"
    analysis__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 9)));
#line 736 "analysis.m"
    analysis__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 10)));
#line 738 "analysis.m"
    {
#line 738 "analysis.m"
      analysis__V_29_29 = mercury__map__set_3_f_0((MR_Word) &analysis__analysis__type_ctor_info_func_id_0, (MR_Word) &analysis_scalar_common_1[0], analysis__AnalysisResults1_17, ((MR_Box) (analysis__FuncId_11)), ((MR_Box) (analysis__FuncResults_21)));
    }
#line 737 "analysis.m"
    {
#line 737 "analysis.m"
      analysis__V_28_28 = mercury__map__set_3_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &analysis_scalar_common_2[0], analysis__ModuleResults1_15, ((MR_Box) (analysis__AnalysisName_9)), ((MR_Box) (analysis__V_29_29)));
    }
#line 736 "analysis.m"
    {
#line 736 "analysis.m"
      analysis__V_26_26 = mercury__map__set_3_f_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &analysis_scalar_common_2[1], analysis__V_27_27, ((MR_Box) (analysis__ModuleName_10)), ((MR_Box) (analysis__V_28_28)));
    }
#line 735 "analysis.m"
    analysis__TypeClassInfo_for_compiler_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 0)));
#line 735 "analysis.m"
    analysis__V_48_48 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 1));
#line 735 "analysis.m"
    analysis__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 2)));
#line 735 "analysis.m"
    analysis__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 3)));
#line 735 "analysis.m"
    analysis__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 4)));
#line 735 "analysis.m"
    analysis__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 5)));
#line 735 "analysis.m"
    analysis__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 6)));
#line 735 "analysis.m"
    analysis__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 7)));
#line 735 "analysis.m"
    analysis__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 8)));
#line 735 "analysis.m"
    analysis__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 9)));
#line 735 "analysis.m"
    analysis__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 10)));
#line 735 "analysis.m"
    {
#line 735 "analysis.m"
      MR_Word base;
#line 735 "analysis.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 735 "analysis.m"
      *analysis__STATE_VARIABLE_Info_23 = base;
#line 735 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (analysis__TypeClassInfo_for_compiler_77));
#line 735 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 1) = analysis__V_48_48;
#line 735 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (analysis__V_49_49));
#line 735 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (analysis__V_50_50));
#line 735 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (analysis__V_51_51));
#line 735 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (analysis__V_26_26));
#line 735 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (analysis__V_53_53));
#line 735 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (analysis__V_54_54));
#line 735 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (analysis__V_55_55));
#line 735 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (analysis__V_56_56));
#line 735 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (analysis__V_57_57));
#line 735 "analysis.m"
    }
#line 717 "analysis.m"
  }
#line 712 "analysis.m"
}

#line 643 "analysis.m"
void MR_CALL 
analysis__record_result_in_analysis_map_6_p_0(
#line 643 "analysis.m"
  MR_Word analysis__TypeClassInfo_for_analysis_21,
#line 643 "analysis.m"
  MR_Word analysis__FuncId_7,
#line 643 "analysis.m"
  MR_Box analysis__CallPattern_8,
#line 643 "analysis.m"
  MR_Box analysis__AnswerPattern_9,
#line 643 "analysis.m"
  MR_Word analysis__Status_10,
#line 643 "analysis.m"
  MR_Word analysis__ModuleResults0_11,
#line 643 "analysis.m"
  MR_Word * analysis__ModuleResults_12)
#line 643 "analysis.m"
{
#line 650 "analysis.m"
  {
#line 650 "analysis.m"
    MR_bool analysis__succeeded;
#line 650 "analysis.m"
    MR_String analysis__AnalysisName_13;
#line 650 "analysis.m"
    MR_Word analysis__AnalysisResults1_15;
#line 650 "analysis.m"
    MR_Word analysis__FuncResults1_17;
#line 650 "analysis.m"
    MR_Word analysis__Result_18;
#line 650 "analysis.m"
    MR_Word analysis__FuncResults_19;
#line 650 "analysis.m"
    MR_Word analysis__V_20_20;
#line 86 "analysis.m"
    MR_Box analysis__V_32_32;
#line 86 "analysis.m"
    MR_Box analysis__V_33_33;
#line 86 "analysis.m"
    MR_Box MR_CALL (* analysis__func_0)(MR_Box) = ((MR_Box MR_CALL (*)(MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), analysis__TypeClassInfo_for_analysis_21, (MR_Integer) 0)), (MR_Integer) 5)));
#line 86 "analysis.m"
    MR_Box analysis__conv1_AnalysisName_13;
#line 652 "analysis.m"
    MR_Word analysis__AnalysisResults0_14;
#line 652 "analysis.m"
    MR_Box analysis__conv2_AnalysisResults0_14;
#line 657 "analysis.m"
    MR_Word analysis__FuncResults0_16;
#line 657 "analysis.m"
    MR_Box analysis__conv3_FuncResults0_16;

#line 86 "analysis.m"
    {
#line 86 "analysis.m"
      analysis__conv1_AnalysisName_13 = analysis__func_0(((MR_Box) analysis__TypeClassInfo_for_analysis_21));
    }
#line 86 "analysis.m"
    analysis__AnalysisName_13 = ((MR_String) analysis__conv1_AnalysisName_13);
#line 652 "analysis.m"
    {
#line 652 "analysis.m"
      analysis__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &analysis_scalar_common_2[2], analysis__ModuleResults0_11, ((MR_Box) (analysis__AnalysisName_13)), &analysis__conv2_AnalysisResults0_14);
    }
#line 652 "analysis.m"
    if (analysis__succeeded)
#line 652 "analysis.m"
      {
#line 652 "analysis.m"
        analysis__AnalysisResults0_14 = ((MR_Word) analysis__conv2_AnalysisResults0_14);
#line 652 "analysis.m"
        analysis__succeeded = MR_TRUE;
#line 652 "analysis.m"
      }
#line 652 "analysis.m"
    if (analysis__succeeded)
#line 653 "analysis.m"
      analysis__AnalysisResults1_15 = analysis__AnalysisResults0_14;
#line 652 "analysis.m"
    else
#line 655 "analysis.m"
      {
#line 655 "analysis.m"
        {
#line 655 "analysis.m"
          analysis__AnalysisResults1_15 = mercury__map__init_0_f_0((MR_Word) &analysis__analysis__type_ctor_info_func_id_0, (MR_Word) &analysis_scalar_common_1[1]);
        }
#line 655 "analysis.m"
      }
#line 657 "analysis.m"
    {
#line 657 "analysis.m"
      analysis__succeeded = mercury__map__search_3_p_0((MR_Word) &analysis__analysis__type_ctor_info_func_id_0, (MR_Word) &analysis_scalar_common_1[1], analysis__AnalysisResults1_15, ((MR_Box) (analysis__FuncId_7)), &analysis__conv3_FuncResults0_16);
    }
#line 657 "analysis.m"
    if (analysis__succeeded)
#line 657 "analysis.m"
      {
#line 657 "analysis.m"
        analysis__FuncResults0_16 = ((MR_Word) analysis__conv3_FuncResults0_16);
#line 657 "analysis.m"
        analysis__succeeded = MR_TRUE;
#line 657 "analysis.m"
      }
#line 657 "analysis.m"
    if (analysis__succeeded)
#line 658 "analysis.m"
      analysis__FuncResults1_17 = analysis__FuncResults0_16;
#line 657 "analysis.m"
    else
#line 660 "analysis.m"
      analysis__FuncResults1_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 662 "analysis.m"
    {
#line 662 "analysis.m"
      analysis__Result_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 662 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__Result_18, 0) = ((MR_Box) (analysis__TypeClassInfo_for_analysis_21));
#line 662 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__Result_18, 1) = analysis__CallPattern_8;
#line 662 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__Result_18, 2) = analysis__AnswerPattern_9;
#line 662 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__Result_18, 3) = ((MR_Box) (analysis__Status_10));
#line 662 "analysis.m"
    }
#line 663 "analysis.m"
    {
#line 663 "analysis.m"
      analysis__FuncResults_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 663 "analysis.m"
      MR_hl_field(MR_mktag(1), analysis__FuncResults_19, 0) = ((MR_Box) (analysis__Result_18));
#line 663 "analysis.m"
      MR_hl_field(MR_mktag(1), analysis__FuncResults_19, 1) = ((MR_Box) (analysis__FuncResults1_17));
#line 663 "analysis.m"
    }
#line 666 "analysis.m"
    {
#line 666 "analysis.m"
      analysis__V_20_20 = mercury__map__set_3_f_0((MR_Word) &analysis__analysis__type_ctor_info_func_id_0, (MR_Word) &analysis_scalar_common_1[1], analysis__AnalysisResults1_15, ((MR_Box) (analysis__FuncId_7)), ((MR_Box) (analysis__FuncResults_19)));
    }
#line 665 "analysis.m"
    {
#line 665 "analysis.m"
      *analysis__ModuleResults_12 = mercury__map__set_3_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &analysis_scalar_common_2[2], analysis__ModuleResults0_11, ((MR_Box) (analysis__AnalysisName_13)), ((MR_Box) (analysis__V_20_20)));
    }
#line 650 "analysis.m"
  }
#line 643 "analysis.m"
}

#line 606 "analysis.m"
static MR_bool MR_CALL 
analysis__lookup_exactly_matching_result_even_from_invalid_modules_6_p_0_1(
#line 606 "analysis.m"
  MR_Box analysis__closure_arg,
#line 606 "analysis.m"
  MR_Box analysis__wrapper_arg_1)
#line 606 "analysis.m"
{
#line 606 "analysis.m"
  {
#line 606 "analysis.m"
    MR_bool analysis__succeeded;
#line 606 "analysis.m"
    MR_Box analysis__closure = analysis__closure_arg;

#line 606 "analysis.m"
    {
#line 606 "analysis.m"
      analysis__succeeded = analysis__IntroducedFrom__pred__lookup_exactly_matching_result_even_from_invalid_modules__606__1_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 3))), (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 4)), (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 5)), ((MR_Word) analysis__wrapper_arg_1));
    }
#line 606 "analysis.m"
    return analysis__succeeded;
#line 606 "analysis.m"
  }
#line 606 "analysis.m"
}

#line 596 "analysis.m"
void MR_CALL 
analysis__lookup_exactly_matching_result_even_from_invalid_modules_6_p_0(
#line 596 "analysis.m"
  MR_Word analysis__TypeClassInfo_for_analysis_32,
#line 596 "analysis.m"
  MR_Word analysis__Info_7,
#line 596 "analysis.m"
  MR_Word analysis__ModuleName_8,
#line 596 "analysis.m"
  MR_Word analysis__FuncId_9,
#line 596 "analysis.m"
  MR_Box analysis__FuncInfo_10,
#line 596 "analysis.m"
  MR_Box analysis__Call_11,
#line 596 "analysis.m"
  MR_Word * analysis__MaybeResult_12)
#line 596 "analysis.m"
{
#line 602 "analysis.m"
  {
#line 602 "analysis.m"
    MR_bool analysis__succeeded;
#line 602 "analysis.m"
    MR_Word analysis__TypeInfo_34_34;
#line 602 "analysis.m"
    MR_Word analysis__TypeInfo_36_36;
#line 602 "analysis.m"
    MR_Word analysis__TypeInfo_38_38;
#line 602 "analysis.m"
    MR_Word analysis__AllResultsList_14;
#line 602 "analysis.m"
    MR_Word analysis__ResultList_15;
#line 602 "analysis.m"
    MR_Word analysis__V_21_21;

#line 604 "analysis.m"
    {
#line 604 "analysis.m"
      analysis__lookup_results_1_5_p_0(analysis__TypeClassInfo_for_analysis_32, analysis__Info_7, analysis__ModuleName_8, analysis__FuncId_9, (MR_Integer) 1, &analysis__AllResultsList_14);
    }
#line 606 "analysis.m"
    {
#line 606 "analysis.m"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_32, (MR_Integer) 4, &analysis__TypeInfo_34_34);
    }
#line 606 "analysis.m"
    {
#line 606 "analysis.m"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_32, (MR_Integer) 5, &analysis__TypeInfo_36_36);
    }
#line 14790 "analysis.c"
    {
#line 14792 "analysis.c"
      analysis__TypeInfo_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 14794 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_38_38, 0) = ((MR_Box) (&analysis__analysis__type_ctor_info_analysis_result_2));
#line 14796 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_38_38, 1) = ((MR_Box) (analysis__TypeInfo_34_34));
#line 14798 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_38_38, 2) = ((MR_Box) (analysis__TypeInfo_36_36));
#line 14800 "analysis.c"
    }
#line 606 "analysis.m"
    {
#line 606 "analysis.m"
      analysis__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 606 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_21_21, 0) = ((MR_Box) (&analysis_scalar_common_6[0]));
#line 606 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_21_21, 1) = ((MR_Box) (analysis__lookup_exactly_matching_result_even_from_invalid_modules_6_p_0_1));
#line 606 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_21_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 606 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_21_21, 3) = ((MR_Box) (analysis__TypeClassInfo_for_analysis_32));
#line 606 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_21_21, 4) = analysis__FuncInfo_10;
#line 606 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_21_21, 5) = analysis__Call_11;
#line 606 "analysis.m"
    }
#line 606 "analysis.m"
    {
#line 606 "analysis.m"
      analysis__ResultList_15 = mercury__list__filter_2_f_0(analysis__TypeInfo_38_38, analysis__V_21_21, analysis__AllResultsList_14);
    }
#line 613 "analysis.m"
    if ((analysis__ResultList_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 611 "analysis.m"
      *analysis__MaybeResult_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 613 "analysis.m"
    else
#line 613 "analysis.m"
      {
#line 613 "analysis.m"
        MR_Word analysis__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), analysis__ResultList_15, (MR_Integer) 1)));
#line 613 "analysis.m"
        MR_Word analysis__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), analysis__ResultList_15, (MR_Integer) 0)));

#line 613 "analysis.m"
        if ((analysis__V_42_42 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 615 "analysis.m"
          {
#line 615 "analysis.m"
            MR_Word base;
#line 615 "analysis.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 615 "analysis.m"
            *analysis__MaybeResult_12 = base;
#line 615 "analysis.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (analysis__V_43_43));
#line 615 "analysis.m"
          }
#line 613 "analysis.m"
        else
#line 617 "analysis.m"
          {
#line 618 "analysis.m"
            {
#line 618 "analysis.m"
              mercury__require__unexpected_3_p_0((MR_String) "analysis", (MR_String) "predicate \140analysis.lookup_exactly_matching_result_even_from_invalid_modules\'/6", (MR_String) "zero or one exactly matching results expected");
#line 618 "analysis.m"
              return;
            }
#line 617 "analysis.m"
          }
#line 613 "analysis.m"
      }
#line 602 "analysis.m"
  }
#line 596 "analysis.m"
}

#line 582 "analysis.m"
void MR_CALL 
analysis__more_precise_answer_4_p_0(
#line 582 "analysis.m"
  MR_Word analysis__TypeClassInfo_for_analysis_15,
#line 582 "analysis.m"
  MR_Box analysis__FuncInfo_5,
#line 582 "analysis.m"
  MR_Word analysis__Result_6,
#line 582 "analysis.m"
  MR_Word analysis__Best0_7,
#line 582 "analysis.m"
  MR_Word * analysis__Best_8)
#line 582 "analysis.m"
{
#line 587 "analysis.m"
  {
#line 587 "analysis.m"
    MR_bool analysis__succeeded;
#line 587 "analysis.m"
    MR_Box analysis__ResultAnswer_9 = (MR_hl_field(MR_mktag(0), analysis__Result_6, (MR_Integer) 1));
#line 587 "analysis.m"
    MR_Box analysis__BestAnswer0_10 = (MR_hl_field(MR_mktag(0), analysis__Best0_7, (MR_Integer) 1));
#line 588 "analysis.m"
    MR_Box analysis__V_11_11 = (MR_hl_field(MR_mktag(0), analysis__Result_6, (MR_Integer) 0));
#line 588 "analysis.m"
    MR_Word analysis__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Result_6, (MR_Integer) 2)));
#line 589 "analysis.m"
    MR_Box analysis__V_13_13 = (MR_hl_field(MR_mktag(0), analysis__Best0_7, (MR_Integer) 0));
#line 589 "analysis.m"
    MR_Word analysis__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Best0_7, (MR_Integer) 2)));
#line 590 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_answer_pattern_16;
#line 590 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_partial_order_18;
#line 134 "analysis.m"
    MR_bool MR_CALL (* analysis__func_0)(MR_Box, MR_Box, MR_Box, MR_Box);

#line 14910 "analysis.c"
    {
#line 14912 "analysis.c"
      mercury__private_builtin__superclass_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_15, (MR_Integer) 2, &analysis__TypeClassInfo_for_answer_pattern_16);
    }
#line 14915 "analysis.c"
    {
#line 14917 "analysis.c"
      mercury__private_builtin__superclass_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_answer_pattern_16, (MR_Integer) 1, &analysis__TypeClassInfo_for_partial_order_18);
    }
#line 134 "analysis.m"
    analysis__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), analysis__TypeClassInfo_for_partial_order_18, (MR_Integer) 0)), (MR_Integer) 5)));
#line 134 "analysis.m"
    {
#line 134 "analysis.m"
      analysis__succeeded = analysis__func_0(((MR_Box) analysis__TypeClassInfo_for_partial_order_18), analysis__FuncInfo_5, analysis__ResultAnswer_9, analysis__BestAnswer0_10);
    }
#line 590 "analysis.m"
    if (analysis__succeeded)
#line 591 "analysis.m"
      *analysis__Best_8 = analysis__Result_6;
#line 590 "analysis.m"
    else
#line 593 "analysis.m"
      *analysis__Best_8 = analysis__Best0_7;
#line 587 "analysis.m"
  }
#line 582 "analysis.m"
}

#line 538 "analysis.m"
static MR_Box MR_CALL 
analysis__lookup_results_2_4_p_0_1(
#line 538 "analysis.m"
  MR_Box analysis__closure_arg,
#line 538 "analysis.m"
  MR_Box analysis__wrapper_arg_1)
#line 538 "analysis.m"
{
#line 538 "analysis.m"
  {
#line 538 "analysis.m"
    MR_Box analysis__wrapper_arg_2;
#line 538 "analysis.m"
    MR_Box analysis__closure = analysis__closure_arg;
#line 538 "analysis.m"
    MR_Word analysis__conv5_LambdaHeadVar__2_25;

#line 538 "analysis.m"
    {
#line 538 "analysis.m"
      analysis__conv5_LambdaHeadVar__2_25 = analysis__IntroducedFrom__func__lookup_results_2__538__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 3))), ((MR_Word) analysis__wrapper_arg_1));
    }
#line 538 "analysis.m"
    analysis__wrapper_arg_2 = ((MR_Box) (analysis__conv5_LambdaHeadVar__2_25));
#line 538 "analysis.m"
    return analysis__wrapper_arg_2;
#line 538 "analysis.m"
  }
#line 538 "analysis.m"
}

#line 525 "analysis.m"
void MR_CALL 
analysis__lookup_results_2_4_p_0(
#line 525 "analysis.m"
  MR_Word analysis__TypeClassInfo_for_analysis_29,
#line 525 "analysis.m"
  MR_Word analysis__Map_5,
#line 525 "analysis.m"
  MR_Word analysis__ModuleName_6,
#line 525 "analysis.m"
  MR_Word analysis__FuncId_7,
#line 525 "analysis.m"
  MR_Word * analysis__ResultList_8)
#line 525 "analysis.m"
{
#line 529 "analysis.m"
  {
#line 529 "analysis.m"
    MR_bool analysis__succeeded;
#line 529 "analysis.m"
    MR_String analysis__AnalysisName_9;
#line 86 "analysis.m"
    MR_Box analysis__V_21_21;
#line 86 "analysis.m"
    MR_Box analysis__V_22_22;
#line 86 "analysis.m"
    MR_Box MR_CALL (* analysis__func_0)(MR_Box) = ((MR_Box MR_CALL (*)(MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), analysis__TypeClassInfo_for_analysis_29, (MR_Integer) 0)), (MR_Integer) 5)));
#line 86 "analysis.m"
    MR_Box analysis__conv1_AnalysisName_9;
#line 531 "analysis.m"
    MR_Word analysis__Results_16;
#line 532 "analysis.m"
    MR_Word analysis__TypeCtorInfo_32_32;
#line 532 "analysis.m"
    MR_Word analysis__TypeInfo_33_33;
#line 532 "analysis.m"
    MR_Word analysis__TypeCtorInfo_34_34;
#line 532 "analysis.m"
    MR_Word analysis__TypeInfo_35_35;
#line 532 "analysis.m"
    MR_Word analysis__ModuleResults_14;
#line 532 "analysis.m"
    MR_Word analysis__AnalysisResults_15;
#line 532 "analysis.m"
    MR_Box analysis__conv2_ModuleResults_14;
#line 533 "analysis.m"
    MR_Box analysis__conv3_AnalysisResults_15;
#line 534 "analysis.m"
    MR_Box analysis__conv4_Results_16;

#line 86 "analysis.m"
    {
#line 86 "analysis.m"
      analysis__conv1_AnalysisName_9 = analysis__func_0(((MR_Box) analysis__TypeClassInfo_for_analysis_29));
    }
#line 86 "analysis.m"
    analysis__AnalysisName_9 = ((MR_String) analysis__conv1_AnalysisName_9);
#line 532 "analysis.m"
    {
#line 532 "analysis.m"
      analysis__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &analysis_scalar_common_2[3], analysis__Map_5, ((MR_Box) (analysis__ModuleName_6)), &analysis__conv2_ModuleResults_14);
    }
#line 532 "analysis.m"
    if (analysis__succeeded)
#line 532 "analysis.m"
      {
#line 532 "analysis.m"
        analysis__ModuleResults_14 = ((MR_Word) analysis__conv2_ModuleResults_14);
#line 532 "analysis.m"
        analysis__succeeded = MR_TRUE;
#line 532 "analysis.m"
      }
#line 532 "analysis.m"
    if (analysis__succeeded)
#line 532 "analysis.m"
      {
#line 15048 "analysis.c"
        analysis__TypeCtorInfo_32_32 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 15050 "analysis.c"
        analysis__TypeInfo_33_33 = (MR_Word) &analysis_scalar_common_2[2];
#line 533 "analysis.m"
        {
#line 533 "analysis.m"
          analysis__succeeded = mercury__map__search_3_p_0(analysis__TypeCtorInfo_32_32, analysis__TypeInfo_33_33, analysis__ModuleResults_14, ((MR_Box) (analysis__AnalysisName_9)), &analysis__conv3_AnalysisResults_15);
        }
#line 533 "analysis.m"
        if (analysis__succeeded)
#line 533 "analysis.m"
          {
#line 533 "analysis.m"
            analysis__AnalysisResults_15 = ((MR_Word) analysis__conv3_AnalysisResults_15);
#line 533 "analysis.m"
            analysis__succeeded = MR_TRUE;
#line 533 "analysis.m"
          }
#line 532 "analysis.m"
        if (analysis__succeeded)
#line 532 "analysis.m"
          {
#line 15071 "analysis.c"
            analysis__TypeCtorInfo_34_34 = (MR_Word) &analysis__analysis__type_ctor_info_func_id_0;
#line 15073 "analysis.c"
            analysis__TypeInfo_35_35 = (MR_Word) &analysis_scalar_common_1[1];
#line 534 "analysis.m"
            {
#line 534 "analysis.m"
              analysis__succeeded = mercury__map__search_3_p_0(analysis__TypeCtorInfo_34_34, analysis__TypeInfo_35_35, analysis__AnalysisResults_15, ((MR_Box) (analysis__FuncId_7)), &analysis__conv4_Results_16);
            }
#line 534 "analysis.m"
            if (analysis__succeeded)
#line 534 "analysis.m"
              {
#line 534 "analysis.m"
                analysis__Results_16 = ((MR_Word) analysis__conv4_Results_16);
#line 534 "analysis.m"
                analysis__succeeded = MR_TRUE;
#line 534 "analysis.m"
              }
#line 532 "analysis.m"
          }
#line 532 "analysis.m"
      }
#line 531 "analysis.m"
    if (analysis__succeeded)
#line 538 "analysis.m"
      {
#line 538 "analysis.m"
        MR_Word analysis__TypeInfo_38_38;
#line 538 "analysis.m"
        MR_Word analysis__TypeInfo_40_40;
#line 538 "analysis.m"
        MR_Word analysis__TypeInfo_42_42;
#line 538 "analysis.m"
        MR_Word analysis__V_23_23;
#line 538 "analysis.m"
        MR_Word analysis__conv6_ResultList_8;

#line 538 "analysis.m"
        {
#line 538 "analysis.m"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_29, (MR_Integer) 4, &analysis__TypeInfo_38_38);
        }
#line 538 "analysis.m"
        {
#line 538 "analysis.m"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_29, (MR_Integer) 5, &analysis__TypeInfo_40_40);
        }
#line 15119 "analysis.c"
        {
#line 15121 "analysis.c"
          analysis__TypeInfo_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 15123 "analysis.c"
          MR_hl_field(MR_mktag(0), analysis__TypeInfo_42_42, 0) = ((MR_Box) (&analysis__analysis__type_ctor_info_analysis_result_2));
#line 15125 "analysis.c"
          MR_hl_field(MR_mktag(0), analysis__TypeInfo_42_42, 1) = ((MR_Box) (analysis__TypeInfo_38_38));
#line 15127 "analysis.c"
          MR_hl_field(MR_mktag(0), analysis__TypeInfo_42_42, 2) = ((MR_Box) (analysis__TypeInfo_40_40));
#line 15129 "analysis.c"
        }
#line 538 "analysis.m"
        {
#line 538 "analysis.m"
          analysis__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 538 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__V_23_23, 0) = ((MR_Box) (&analysis_scalar_common_4[2]));
#line 538 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__V_23_23, 1) = ((MR_Box) (analysis__lookup_results_2_4_p_0_1));
#line 538 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__V_23_23, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 538 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__V_23_23, 3) = ((MR_Box) (analysis__TypeClassInfo_for_analysis_29));
#line 538 "analysis.m"
        }
#line 538 "analysis.m"
        {
#line 538 "analysis.m"
          analysis__conv6_ResultList_8 = mercury__list__map_2_f_0((MR_Word) &analysis__analysis__type_ctor_info_some_analysis_result_0, analysis__TypeInfo_42_42, (MR_Word) analysis__V_23_23, analysis__Results_16);
        }
#line 538 "analysis.m"
        *analysis__ResultList_8 = (MR_Word) analysis__conv6_ResultList_8;
#line 538 "analysis.m"
      }
#line 531 "analysis.m"
    else
#line 545 "analysis.m"
      *analysis__ResultList_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 529 "analysis.m"
  }
#line 525 "analysis.m"
}

#line 492 "analysis.m"
void MR_CALL 
analysis__lookup_results_1_5_p_0(
#line 492 "analysis.m"
  MR_Word analysis__TypeClassInfo_for_analysis_62,
#line 492 "analysis.m"
  MR_Word analysis__Info_6,
#line 492 "analysis.m"
  MR_Word analysis__ModuleName_7,
#line 492 "analysis.m"
  MR_Word analysis__FuncId_8,
#line 492 "analysis.m"
  MR_Word analysis__AllowInvalidModules_9,
#line 492 "analysis.m"
  MR_Word * analysis__ResultList_10)
#line 492 "analysis.m"
{
#line 496 "analysis.m"
  {
#line 496 "analysis.m"
    MR_bool analysis__succeeded;
#line 497 "analysis.m"
    MR_Word analysis__Debug_82;
#line 508 "analysis.m"
    MR_Word analysis__TypeCtorInfo_66_66;
#line 508 "analysis.m"
    MR_Word analysis__TypeCtorInfo_67_67;
#line 508 "analysis.m"
    MR_Word analysis__V_26_26;
#line 508 "analysis.m"
    MR_Word analysis__V_27_27;
#line 508 "analysis.m"
    MR_Word analysis__V_77_77;
#line 509 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_compiler_65;
#line 509 "analysis.m"
    MR_Box analysis__V_44_44;
#line 509 "analysis.m"
    MR_Word analysis__V_45_45;
#line 509 "analysis.m"
    MR_Word analysis__V_46_46;
#line 509 "analysis.m"
    MR_Word analysis__V_47_47;
#line 509 "analysis.m"
    MR_Word analysis__V_48_48;
#line 509 "analysis.m"
    MR_Word analysis__V_49_49;
#line 509 "analysis.m"
    MR_Word analysis__V_50_50;
#line 509 "analysis.m"
    MR_Word analysis__V_51_51;
#line 509 "analysis.m"
    MR_Word analysis__V_52_52;
#line 509 "analysis.m"
    MR_Box analysis__conv0_V_77_77;

#line 1387 "analysis.m"
{
#define MR_PROC_LABEL analysis__lookup_results_1_5_p_0


		{
#line 1387 "analysis.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&analysis__mutable_variable_debug_analysis_lock,
                    "analysis__mutable_variable_debug_analysis_lock");
#endif

#line 15231 "analysis.c"

		;}
#undef MR_PROC_LABEL
#line 1387 "analysis.m"
}
#line 1387 "analysis.m"
{
#define MR_PROC_LABEL analysis__lookup_results_1_5_p_0

	MR_Word X;

		{
#line 1387 "analysis.m"
X = analysis__mutable_variable_debug_analysis;

#line 15247 "analysis.c"

		;}
#undef MR_PROC_LABEL
	 analysis__Debug_82  = X;
#line 1387 "analysis.m"
}
#line 1387 "analysis.m"
{
#define MR_PROC_LABEL analysis__lookup_results_1_5_p_0


		{
#line 1387 "analysis.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&analysis__mutable_variable_debug_analysis_lock,
                    "analysis__mutable_variable_debug_analysis_lock");
#endif

#line 15266 "analysis.c"

		;}
#undef MR_PROC_LABEL
#line 1387 "analysis.m"
}
#line 1400 "analysis.m"
#line 1400 "analysis.m"
    switch (analysis__Debug_82) {
#line 1400 "analysis.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1400 "analysis.m"
      case (MR_Integer) 0:
#line 1401 "analysis.m"
        {
#line 1401 "analysis.m"
        }
#line 1400 "analysis.m"
        break;
#line 1400 "analysis.m"
      case (MR_Integer) 1:
#line 1399 "analysis.m"
        {
#line 1399 "analysis.m"
          analysis__IntroducedFrom__pred__lookup_results_1__498__1_4_p_0(analysis__ModuleName_7, analysis__FuncId_8);
        }
#line 1400 "analysis.m"
        break;
#line 1400 "analysis.m"
    }
#line 508 "analysis.m"
    analysis__succeeded = (analysis__AllowInvalidModules_9 == (MR_Integer) 0);
#line 508 "analysis.m"
    if (analysis__succeeded)
#line 508 "analysis.m"
      {
#line 509 "analysis.m"
        analysis__TypeClassInfo_for_compiler_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 0)));
#line 509 "analysis.m"
        analysis__V_44_44 = (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 1));
#line 509 "analysis.m"
        analysis__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 2)));
#line 509 "analysis.m"
        analysis__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 3)));
#line 509 "analysis.m"
        analysis__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 4)));
#line 509 "analysis.m"
        analysis__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 5)));
#line 509 "analysis.m"
        analysis__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 6)));
#line 509 "analysis.m"
        analysis__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 7)));
#line 509 "analysis.m"
        analysis__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 8)));
#line 509 "analysis.m"
        analysis__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 9)));
#line 509 "analysis.m"
        analysis__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 10)));
#line 509 "analysis.m"
        analysis__V_27_27 = (MR_Integer) 0;
#line 15326 "analysis.c"
        analysis__TypeCtorInfo_66_66 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 15328 "analysis.c"
        analysis__TypeCtorInfo_67_67 = (MR_Word) &analysis__analysis__type_ctor_info_analysis_status_0;
#line 509 "analysis.m"
        {
#line 509 "analysis.m"
          analysis__succeeded = mercury__map__search_3_p_0(analysis__TypeCtorInfo_66_66, analysis__TypeCtorInfo_67_67, analysis__V_26_26, ((MR_Box) (analysis__ModuleName_7)), &analysis__conv0_V_77_77);
        }
#line 509 "analysis.m"
        if (analysis__succeeded)
#line 509 "analysis.m"
          {
#line 509 "analysis.m"
            analysis__V_77_77 = ((MR_Word) analysis__conv0_V_77_77);
#line 509 "analysis.m"
            analysis__succeeded = MR_TRUE;
#line 509 "analysis.m"
          }
#line 508 "analysis.m"
        if (analysis__succeeded)
#line 509 "analysis.m"
          analysis__succeeded = (analysis__V_27_27 == analysis__V_77_77);
#line 508 "analysis.m"
      }
#line 507 "analysis.m"
    if (analysis__succeeded)
#line 511 "analysis.m"
      *analysis__ResultList_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 507 "analysis.m"
    else
#line 514 "analysis.m"
      {
#line 514 "analysis.m"
        MR_Word analysis__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 7)));
#line 513 "analysis.m"
        MR_Word analysis__TypeClassInfo_for_compiler_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 0)));
#line 513 "analysis.m"
        MR_Box analysis__V_53_53 = (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 1));
#line 513 "analysis.m"
        MR_Word analysis__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 2)));
#line 513 "analysis.m"
        MR_Word analysis__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 3)));
#line 513 "analysis.m"
        MR_Word analysis__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 4)));
#line 513 "analysis.m"
        MR_Word analysis__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 5)));
#line 513 "analysis.m"
        MR_Word analysis__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 6)));
#line 513 "analysis.m"
        MR_Word analysis__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 8)));
#line 513 "analysis.m"
        MR_Word analysis__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 9)));
#line 513 "analysis.m"
        MR_Word analysis__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 10)));

#line 513 "analysis.m"
        {
#line 513 "analysis.m"
          analysis__lookup_results_2_4_p_0(analysis__TypeClassInfo_for_analysis_62, analysis__V_28_28, analysis__ModuleName_7, analysis__FuncId_8, analysis__ResultList_10);
        }
#line 516 "analysis.m"
        {
#line 516 "analysis.m"
          analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_109_115_103_95_95_104_111_54_95_95_91_51_93_95_48_3_p_0(analysis__TypeClassInfo_for_analysis_62, *analysis__ResultList_10);
        }
#line 514 "analysis.m"
      }
#line 496 "analysis.m"
  }
#line 492 "analysis.m"
}

#line 310 "analysis.m"
void MR_CALL 
analysis__enable_debug_messages_3_p_0(
#line 310 "analysis.m"
  MR_Word analysis__Debug_4)
#line 310 "analysis.m"
{
#line 1387 "analysis.m"
  {
#line 1387 "analysis.m"
    MR_bool analysis__succeeded;

#line 1387 "analysis.m"
{
#define MR_PROC_LABEL analysis__enable_debug_messages_3_p_0


		{
#line 1387 "analysis.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&analysis__mutable_variable_debug_analysis_lock,
                    "analysis__mutable_variable_debug_analysis_lock");
#endif

#line 15423 "analysis.c"

		;}
#undef MR_PROC_LABEL
#line 1387 "analysis.m"
}
#line 1387 "analysis.m"
{
#define MR_PROC_LABEL analysis__enable_debug_messages_3_p_0

	MR_Word X;

	X =  analysis__Debug_4 ;
		{
#line 1387 "analysis.m"
analysis__mutable_variable_debug_analysis = X;

#line 15440 "analysis.c"

		;}
#undef MR_PROC_LABEL
#line 1387 "analysis.m"
}
#line 1387 "analysis.m"
{
#define MR_PROC_LABEL analysis__enable_debug_messages_3_p_0


		{
#line 1387 "analysis.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&analysis__mutable_variable_debug_analysis_lock,
                    "analysis__mutable_variable_debug_analysis_lock");
#endif

#line 15458 "analysis.c"

		;}
#undef MR_PROC_LABEL
#line 1387 "analysis.m"
}
#line 1387 "analysis.m"
  }
#line 310 "analysis.m"
}

#line 306 "analysis.m"
void MR_CALL 
analysis__do_read_module_overall_status_6_p_0(
#line 306 "analysis.m"
  MR_Word analysis__TypeClassInfo_for_compiler_15,
#line 306 "analysis.m"
  MR_Box analysis__Compiler_7,
#line 306 "analysis.m"
  MR_Word analysis__Globals_8,
#line 306 "analysis.m"
  MR_Word analysis__ModuleName_9,
#line 306 "analysis.m"
  MR_Word * analysis__ModuleStatus_10)
#line 306 "analysis.m"
{
#line 1342 "analysis.m"
  {
#line 1342 "analysis.m"
    MR_bool analysis__succeeded;

#line 1342 "analysis.m"
    {
#line 1342 "analysis.m"
      analysis__file__read_module_overall_status_6_p_0(analysis__TypeClassInfo_for_compiler_15, analysis__Compiler_7, analysis__Globals_8, analysis__ModuleName_9, analysis__ModuleStatus_10);
    }
#line 1342 "analysis.m"
  }
#line 306 "analysis.m"
}

#line 1287 "analysis.m"
static void MR_CALL 
analysis__write_analysis_files_7_p_0_4(
#line 1287 "analysis.m"
  MR_Box analysis__closure_arg,
#line 1287 "analysis.m"
  MR_Box analysis__wrapper_arg_1,
#line 1287 "analysis.m"
  MR_Box analysis__wrapper_arg_2,
#line 1287 "analysis.m"
  MR_Box * analysis__wrapper_arg_3)
#line 1287 "analysis.m"
{
#line 1287 "analysis.m"
  {
#line 1287 "analysis.m"
    MR_Box analysis__closure = analysis__closure_arg;

#line 1287 "analysis.m"
    {
#line 1287 "analysis.m"
      analysis__maybe_write_module_imdg_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 4))), ((MR_Word) analysis__wrapper_arg_1));
    }
#line 1287 "analysis.m"
  }
#line 1287 "analysis.m"
}

#line 1279 "analysis.m"
static void MR_CALL 
analysis__write_analysis_files_7_p_0_3(
#line 1279 "analysis.m"
  MR_Box analysis__closure_arg,
#line 1279 "analysis.m"
  MR_Box analysis__wrapper_arg_1,
#line 1279 "analysis.m"
  MR_Box analysis__wrapper_arg_2,
#line 1279 "analysis.m"
  MR_Box * analysis__wrapper_arg_3)
#line 1279 "analysis.m"
{
#line 1279 "analysis.m"
  {
#line 1279 "analysis.m"
    MR_Box analysis__closure = analysis__closure_arg;

#line 1279 "analysis.m"
    {
#line 1279 "analysis.m"
      analysis__maybe_write_module_requests_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 4))), ((MR_Word) analysis__wrapper_arg_1));
    }
#line 1279 "analysis.m"
  }
#line 1279 "analysis.m"
}

#line 1270 "analysis.m"
static void MR_CALL 
analysis__write_analysis_files_7_p_0_2(
#line 1270 "analysis.m"
  MR_Box analysis__closure_arg,
#line 1270 "analysis.m"
  MR_Box analysis__wrapper_arg_1,
#line 1270 "analysis.m"
  MR_Box analysis__wrapper_arg_2,
#line 1270 "analysis.m"
  MR_Box * analysis__wrapper_arg_3)
#line 1270 "analysis.m"
{
#line 1270 "analysis.m"
  {
#line 1270 "analysis.m"
    MR_Box analysis__closure = analysis__closure_arg;

#line 1270 "analysis.m"
    {
#line 1270 "analysis.m"
      analysis__maybe_write_module_overall_status_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 4))), ((MR_Word) analysis__wrapper_arg_1));
    }
#line 1270 "analysis.m"
  }
#line 1270 "analysis.m"
}

#line 1252 "analysis.m"
static void MR_CALL 
analysis__write_analysis_files_7_p_0_1(
#line 1252 "analysis.m"
  MR_Box analysis__closure_arg,
#line 1252 "analysis.m"
  MR_Box analysis__wrapper_arg_1,
#line 1252 "analysis.m"
  MR_Box analysis__wrapper_arg_2,
#line 1252 "analysis.m"
  MR_Box * analysis__wrapper_arg_3,
#line 1252 "analysis.m"
  MR_Box analysis__wrapper_arg_4,
#line 1252 "analysis.m"
  MR_Box * analysis__wrapper_arg_5)
#line 1252 "analysis.m"
{
#line 1252 "analysis.m"
  {
#line 1252 "analysis.m"
    MR_Box analysis__closure = analysis__closure_arg;
#line 1252 "analysis.m"
    MR_Word analysis__conv0_STATE_VARIABLE_Info_15;

#line 1252 "analysis.m"
    {
#line 1252 "analysis.m"
      analysis__load_module_imdg_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 3))), ((MR_Word) analysis__wrapper_arg_1), ((MR_Word) analysis__wrapper_arg_2), &analysis__conv0_STATE_VARIABLE_Info_15);
    }
#line 1252 "analysis.m"
    *analysis__wrapper_arg_3 = ((MR_Box) (analysis__conv0_STATE_VARIABLE_Info_15));
#line 1252 "analysis.m"
  }
#line 1252 "analysis.m"
}

#line 294 "analysis.m"
void MR_CALL 
analysis__write_analysis_files_7_p_0(
#line 294 "analysis.m"
  MR_Word analysis__TypeClassInfo_for_compiler_115,
#line 294 "analysis.m"
  MR_Box analysis__Compiler_8,
#line 294 "analysis.m"
  MR_Word analysis__ModuleInfo_9,
#line 294 "analysis.m"
  MR_Word analysis__ImportedModule0_10,
#line 294 "analysis.m"
  MR_Word analysis__STATE_VARIABLE_Info_0_21,
#line 294 "analysis.m"
  MR_Word * analysis__STATE_VARIABLE_Info_22)
#line 294 "analysis.m"
{
#line 1243 "analysis.m"
  {
#line 1243 "analysis.m"
    MR_bool analysis__succeeded;
#line 1243 "analysis.m"
    MR_Word analysis__TypeCtorInfo_117_117 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 1243 "analysis.m"
    MR_Word analysis__TypeCtorInfo_125_125;
#line 1243 "analysis.m"
    MR_Word analysis__ThisModule_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 2)));
#line 1243 "analysis.m"
    MR_Word analysis__ImportedModules_14;
#line 1243 "analysis.m"
    MR_Word analysis__LocalModules_15;
#line 1243 "analysis.m"
    MR_Word analysis__LocalImportedModules_16;
#line 1243 "analysis.m"
    MR_Word analysis__Globals_17;
#line 1243 "analysis.m"
    MR_Word analysis__ModuleStatus_18;
#line 1243 "analysis.m"
    MR_Word analysis__ModuleResults_19;
#line 1243 "analysis.m"
    MR_String analysis__TimestampFileName_20;
#line 1243 "analysis.m"
    MR_Word analysis__V_25_25;
#line 1243 "analysis.m"
    MR_Word analysis__STATE_VARIABLE_Info_26_26;
#line 1243 "analysis.m"
    MR_Word analysis__STATE_VARIABLE_Info_28_28;
#line 1243 "analysis.m"
    MR_Word analysis__V_30_30;
#line 1243 "analysis.m"
    MR_Word analysis__STATE_VARIABLE_Info_31_31;
#line 1243 "analysis.m"
    MR_Word analysis__V_32_32;
#line 1243 "analysis.m"
    MR_Word analysis__V_33_33;
#line 1243 "analysis.m"
    MR_Word analysis__V_39_39;
#line 1243 "analysis.m"
    MR_Word analysis__V_41_41;
#line 1243 "analysis.m"
    MR_Word analysis__V_43_43;
#line 1243 "analysis.m"
    MR_Word analysis__V_46_46;
#line 1244 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_compiler_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 0)));
#line 1244 "analysis.m"
    MR_Box analysis__V_51_51 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 1));
#line 1244 "analysis.m"
    MR_Word analysis__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 3)));
#line 1244 "analysis.m"
    MR_Word analysis__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 4)));
#line 1244 "analysis.m"
    MR_Word analysis__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 5)));
#line 1244 "analysis.m"
    MR_Word analysis__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 6)));
#line 1244 "analysis.m"
    MR_Word analysis__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 7)));
#line 1244 "analysis.m"
    MR_Word analysis__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 8)));
#line 1244 "analysis.m"
    MR_Word analysis__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 9)));
#line 1244 "analysis.m"
    MR_Word analysis__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 10)));
#line 1247 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_compiler_118;
#line 1247 "analysis.m"
    MR_Box analysis__V_60_60;
#line 1247 "analysis.m"
    MR_Word analysis__V_61_61;
#line 1247 "analysis.m"
    MR_Word analysis__V_62_62;
#line 1247 "analysis.m"
    MR_Word analysis__V_63_63;
#line 1247 "analysis.m"
    MR_Word analysis__V_64_64;
#line 1247 "analysis.m"
    MR_Word analysis__V_65_65;
#line 1247 "analysis.m"
    MR_Word analysis__V_66_66;
#line 1247 "analysis.m"
    MR_Word analysis__V_67_67;
#line 1247 "analysis.m"
    MR_Word analysis__V_68_68;
#line 1252 "analysis.m"
    MR_Box analysis__conv2_STATE_VARIABLE_Info_26_26;
#line 1252 "analysis.m"
    MR_Box analysis__conv1_STATE_VARIABLE_IO_27_27;
#line 1258 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_compiler_126;
#line 1258 "analysis.m"
    MR_Box analysis__V_69_69;
#line 1258 "analysis.m"
    MR_Word analysis__V_70_70;
#line 1258 "analysis.m"
    MR_Word analysis__V_71_71;
#line 1258 "analysis.m"
    MR_Word analysis__V_72_72;
#line 1258 "analysis.m"
    MR_Word analysis__V_73_73;
#line 1258 "analysis.m"
    MR_Word analysis__V_74_74;
#line 1258 "analysis.m"
    MR_Word analysis__V_75_75;
#line 1258 "analysis.m"
    MR_Word analysis__V_76_76;
#line 1258 "analysis.m"
    MR_Word analysis__V_77_77;
#line 1259 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_compiler_127;
#line 1259 "analysis.m"
    MR_Box analysis__V_78_78;
#line 1259 "analysis.m"
    MR_Word analysis__V_79_79;
#line 1259 "analysis.m"
    MR_Word analysis__V_80_80;
#line 1259 "analysis.m"
    MR_Word analysis__V_81_81;
#line 1259 "analysis.m"
    MR_Word analysis__V_82_82;
#line 1259 "analysis.m"
    MR_Word analysis__V_83_83;
#line 1259 "analysis.m"
    MR_Word analysis__V_84_84;
#line 1259 "analysis.m"
    MR_Word analysis__V_85_85;
#line 1259 "analysis.m"
    MR_Word analysis__V_86_86;
#line 1259 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_compiler_129;
#line 1259 "analysis.m"
    MR_Box analysis__V_87_87;
#line 1259 "analysis.m"
    MR_Word analysis__V_88_88;
#line 1259 "analysis.m"
    MR_Word analysis__V_89_89;
#line 1259 "analysis.m"
    MR_Word analysis__V_90_90;
#line 1259 "analysis.m"
    MR_Word analysis__V_91_91;
#line 1259 "analysis.m"
    MR_Word analysis__V_93_93;
#line 1259 "analysis.m"
    MR_Word analysis__V_94_94;
#line 1259 "analysis.m"
    MR_Word analysis__V_95_95;
#line 1259 "analysis.m"
    MR_Word analysis__V_96_96;
#line 1259 "analysis.m"
    MR_Word analysis__V_92_92;
#line 1262 "analysis.m"
    MR_Word analysis__V_35_35;
#line 1262 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_compiler_130;
#line 1262 "analysis.m"
    MR_Box analysis__V_97_97;
#line 1262 "analysis.m"
    MR_Word analysis__V_98_98;
#line 1262 "analysis.m"
    MR_Word analysis__V_99_99;
#line 1262 "analysis.m"
    MR_Word analysis__V_100_100;
#line 1262 "analysis.m"
    MR_Word analysis__V_101_101;
#line 1262 "analysis.m"
    MR_Word analysis__V_102_102;
#line 1262 "analysis.m"
    MR_Word analysis__V_103_103;
#line 1262 "analysis.m"
    MR_Word analysis__V_104_104;
#line 1262 "analysis.m"
    MR_Word analysis__V_105_105;
#line 1270 "analysis.m"
    MR_Box analysis__conv3_STATE_VARIABLE_IO_40_40;
#line 1274 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_compiler_136;
#line 1274 "analysis.m"
    MR_Box analysis__V_106_106;
#line 1274 "analysis.m"
    MR_Word analysis__V_107_107;
#line 1274 "analysis.m"
    MR_Word analysis__V_108_108;
#line 1274 "analysis.m"
    MR_Word analysis__V_109_109;
#line 1274 "analysis.m"
    MR_Word analysis__V_110_110;
#line 1274 "analysis.m"
    MR_Word analysis__V_111_111;
#line 1274 "analysis.m"
    MR_Word analysis__V_112_112;
#line 1274 "analysis.m"
    MR_Word analysis__V_113_113;
#line 1274 "analysis.m"
    MR_Word analysis__V_114_114;
#line 1274 "analysis.m"
    MR_Box analysis__conv4_ModuleResults_19;
#line 1279 "analysis.m"
    MR_Box analysis__conv5_STATE_VARIABLE_IO_44_44;
#line 1287 "analysis.m"
    MR_Box analysis__conv6_STATE_VARIABLE_IO_47_47;

#line 1245 "analysis.m"
    {
#line 1245 "analysis.m"
      analysis__ImportedModules_14 = mercury__set__delete_2_f_0(analysis__TypeCtorInfo_117_117, analysis__ImportedModule0_10, ((MR_Box) (analysis__ThisModule_13)));
    }
#line 1247 "analysis.m"
    analysis__TypeClassInfo_for_compiler_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 0)));
#line 1247 "analysis.m"
    analysis__V_60_60 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 1));
#line 1247 "analysis.m"
    analysis__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 2)));
#line 1247 "analysis.m"
    analysis__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 3)));
#line 1247 "analysis.m"
    analysis__LocalModules_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 4)));
#line 1247 "analysis.m"
    analysis__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 5)));
#line 1247 "analysis.m"
    analysis__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 6)));
#line 1247 "analysis.m"
    analysis__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 7)));
#line 1247 "analysis.m"
    analysis__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 8)));
#line 1247 "analysis.m"
    analysis__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 9)));
#line 1247 "analysis.m"
    analysis__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 10)));
#line 1248 "analysis.m"
    {
#line 1248 "analysis.m"
      analysis__LocalImportedModules_16 = mercury__set__intersect_2_f_0(analysis__TypeCtorInfo_117_117, analysis__LocalModules_15, analysis__ImportedModules_14);
    }
#line 1251 "analysis.m"
    {
#line 1251 "analysis.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(analysis__ModuleInfo_9, &analysis__Globals_17);
    }
#line 1252 "analysis.m"
    {
#line 1252 "analysis.m"
      analysis__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1252 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_25_25, 0) = ((MR_Box) (&analysis_scalar_common_8[0]));
#line 1252 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_25_25, 1) = ((MR_Box) (analysis__write_analysis_files_7_p_0_1));
#line 1252 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_25_25, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1252 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_25_25, 3) = ((MR_Box) (analysis__Globals_17));
#line 1252 "analysis.m"
    }
#line 15890 "analysis.c"
    analysis__TypeCtorInfo_125_125 = (MR_Word) &mercury__io__io__type_ctor_info_state_0;
#line 1252 "analysis.m"
    {
#line 1252 "analysis.m"
      mercury__set__fold2_6_p_2(analysis__TypeCtorInfo_117_117, (MR_Word) &analysis__analysis__type_ctor_info_analysis_info_0, analysis__TypeCtorInfo_125_125, analysis__V_25_25, analysis__LocalModules_15, ((MR_Box) (analysis__STATE_VARIABLE_Info_0_21)), &analysis__conv2_STATE_VARIABLE_Info_26_26, ((MR_Box) ((MR_Integer) 0)), &analysis__conv1_STATE_VARIABLE_IO_27_27);
    }
#line 1252 "analysis.m"
    analysis__STATE_VARIABLE_Info_26_26 = ((MR_Word) analysis__conv2_STATE_VARIABLE_Info_26_26);
#line 1254 "analysis.m"
    {
#line 1254 "analysis.m"
      analysis__update_analysis_registry_5_p_0(analysis__ModuleInfo_9, analysis__STATE_VARIABLE_Info_26_26, &analysis__STATE_VARIABLE_Info_28_28);
    }
#line 1258 "analysis.m"
    analysis__TypeClassInfo_for_compiler_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_28_28, (MR_Integer) 0)));
#line 1258 "analysis.m"
    analysis__V_69_69 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_28_28, (MR_Integer) 1));
#line 1258 "analysis.m"
    analysis__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_28_28, (MR_Integer) 2)));
#line 1258 "analysis.m"
    analysis__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_28_28, (MR_Integer) 3)));
#line 1258 "analysis.m"
    analysis__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_28_28, (MR_Integer) 4)));
#line 1258 "analysis.m"
    analysis__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_28_28, (MR_Integer) 5)));
#line 1258 "analysis.m"
    analysis__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_28_28, (MR_Integer) 6)));
#line 1258 "analysis.m"
    analysis__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_28_28, (MR_Integer) 7)));
#line 1258 "analysis.m"
    analysis__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_28_28, (MR_Integer) 8)));
#line 1258 "analysis.m"
    analysis__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_28_28, (MR_Integer) 9)));
#line 1258 "analysis.m"
    analysis__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_28_28, (MR_Integer) 10)));
#line 1258 "analysis.m"
    {
#line 1258 "analysis.m"
      analysis__ModuleStatus_18 = analysis__lub_result_statuses_1_f_0(analysis__V_30_30);
    }
#line 1259 "analysis.m"
    analysis__TypeClassInfo_for_compiler_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_28_28, (MR_Integer) 0)));
#line 1259 "analysis.m"
    analysis__V_78_78 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_28_28, (MR_Integer) 1));
#line 1259 "analysis.m"
    analysis__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_28_28, (MR_Integer) 2)));
#line 1259 "analysis.m"
    analysis__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_28_28, (MR_Integer) 3)));
#line 1259 "analysis.m"
    analysis__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_28_28, (MR_Integer) 4)));
#line 1259 "analysis.m"
    analysis__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_28_28, (MR_Integer) 5)));
#line 1259 "analysis.m"
    analysis__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_28_28, (MR_Integer) 6)));
#line 1259 "analysis.m"
    analysis__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_28_28, (MR_Integer) 7)));
#line 1259 "analysis.m"
    analysis__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_28_28, (MR_Integer) 8)));
#line 1259 "analysis.m"
    analysis__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_28_28, (MR_Integer) 9)));
#line 1259 "analysis.m"
    analysis__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_28_28, (MR_Integer) 10)));
#line 1259 "analysis.m"
    {
#line 1259 "analysis.m"
      analysis__V_33_33 = mercury__map__f_101_108_101_109_32_58_61_3_f_0(analysis__TypeCtorInfo_117_117, (MR_Word) &analysis__analysis__type_ctor_info_analysis_status_0, ((MR_Box) (analysis__ThisModule_13)), analysis__V_32_32, ((MR_Box) (analysis__ModuleStatus_18)));
    }
#line 1259 "analysis.m"
    analysis__TypeClassInfo_for_compiler_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_28_28, (MR_Integer) 0)));
#line 1259 "analysis.m"
    analysis__V_87_87 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_28_28, (MR_Integer) 1));
#line 1259 "analysis.m"
    analysis__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_28_28, (MR_Integer) 2)));
#line 1259 "analysis.m"
    analysis__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_28_28, (MR_Integer) 3)));
#line 1259 "analysis.m"
    analysis__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_28_28, (MR_Integer) 4)));
#line 1259 "analysis.m"
    analysis__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_28_28, (MR_Integer) 5)));
#line 1259 "analysis.m"
    analysis__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_28_28, (MR_Integer) 6)));
#line 1259 "analysis.m"
    analysis__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_28_28, (MR_Integer) 7)));
#line 1259 "analysis.m"
    analysis__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_28_28, (MR_Integer) 8)));
#line 1259 "analysis.m"
    analysis__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_28_28, (MR_Integer) 9)));
#line 1259 "analysis.m"
    analysis__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_28_28, (MR_Integer) 10)));
#line 1259 "analysis.m"
    {
#line 1259 "analysis.m"
      analysis__STATE_VARIABLE_Info_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 1259 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_31_31, 0) = ((MR_Box) (analysis__TypeClassInfo_for_compiler_129));
#line 1259 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_31_31, 1) = analysis__V_87_87;
#line 1259 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_31_31, 2) = ((MR_Box) (analysis__V_88_88));
#line 1259 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_31_31, 3) = ((MR_Box) (analysis__V_89_89));
#line 1259 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_31_31, 4) = ((MR_Box) (analysis__V_90_90));
#line 1259 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_31_31, 5) = ((MR_Box) (analysis__V_91_91));
#line 1259 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_31_31, 6) = ((MR_Box) (analysis__V_33_33));
#line 1259 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_31_31, 7) = ((MR_Box) (analysis__V_93_93));
#line 1259 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_31_31, 8) = ((MR_Box) (analysis__V_94_94));
#line 1259 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_31_31, 9) = ((MR_Box) (analysis__V_95_95));
#line 1259 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_31_31, 10) = ((MR_Box) (analysis__V_96_96));
#line 1259 "analysis.m"
    }
#line 1261 "analysis.m"
    {
#line 1261 "analysis.m"
      analysis__update_intermodule_dependencies_4_p_0(analysis__ThisModule_13, analysis__LocalImportedModules_16, analysis__STATE_VARIABLE_Info_31_31, analysis__STATE_VARIABLE_Info_22);
    }
#line 1262 "analysis.m"
    analysis__TypeClassInfo_for_compiler_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), *analysis__STATE_VARIABLE_Info_22, (MR_Integer) 0)));
#line 1262 "analysis.m"
    analysis__V_97_97 = (MR_hl_field(MR_mktag(0), *analysis__STATE_VARIABLE_Info_22, (MR_Integer) 1));
#line 1262 "analysis.m"
    analysis__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), *analysis__STATE_VARIABLE_Info_22, (MR_Integer) 2)));
#line 1262 "analysis.m"
    analysis__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), *analysis__STATE_VARIABLE_Info_22, (MR_Integer) 3)));
#line 1262 "analysis.m"
    analysis__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), *analysis__STATE_VARIABLE_Info_22, (MR_Integer) 4)));
#line 1262 "analysis.m"
    analysis__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), *analysis__STATE_VARIABLE_Info_22, (MR_Integer) 5)));
#line 1262 "analysis.m"
    analysis__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), *analysis__STATE_VARIABLE_Info_22, (MR_Integer) 6)));
#line 1262 "analysis.m"
    analysis__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), *analysis__STATE_VARIABLE_Info_22, (MR_Integer) 7)));
#line 1262 "analysis.m"
    analysis__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), *analysis__STATE_VARIABLE_Info_22, (MR_Integer) 8)));
#line 1262 "analysis.m"
    analysis__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), *analysis__STATE_VARIABLE_Info_22, (MR_Integer) 9)));
#line 1262 "analysis.m"
    analysis__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), *analysis__STATE_VARIABLE_Info_22, (MR_Integer) 10)));
#line 1262 "analysis.m"
    {
#line 1262 "analysis.m"
      analysis__succeeded = mercury__map__is_empty_1_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &analysis_scalar_common_2[2], analysis__V_35_35);
    }
#line 1262 "analysis.m"
    if (analysis__succeeded)
#line 1263 "analysis.m"
      {
#line 1263 "analysis.m"
      }
#line 1262 "analysis.m"
    else
#line 1265 "analysis.m"
      {
#line 1265 "analysis.m"
        {
#line 1265 "analysis.m"
          mercury__require__unexpected_3_p_0((MR_String) "analysis", (MR_String) "predicate \140analysis.write_analysis_files\'/7", (MR_String) "new_analysis_results is not empty");
#line 1265 "analysis.m"
          return;
        }
#line 1265 "analysis.m"
      }
#line 1270 "analysis.m"
    {
#line 1270 "analysis.m"
      analysis__V_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1270 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_39_39, 0) = ((MR_Box) (&analysis_scalar_common_7[1]));
#line 1270 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_39_39, 1) = ((MR_Box) (analysis__write_analysis_files_7_p_0_2));
#line 1270 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_39_39, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1270 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_39_39, 3) = ((MR_Box) (*analysis__STATE_VARIABLE_Info_22));
#line 1270 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_39_39, 4) = ((MR_Box) (analysis__Globals_17));
#line 1270 "analysis.m"
    }
#line 1270 "analysis.m"
    {
#line 1270 "analysis.m"
      mercury__set__fold_4_p_2(analysis__TypeCtorInfo_117_117, analysis__TypeCtorInfo_125_125, analysis__V_39_39, analysis__LocalModules_15, ((MR_Box) ((MR_Integer) 0)), &analysis__conv3_STATE_VARIABLE_IO_40_40);
    }
#line 1274 "analysis.m"
    analysis__TypeClassInfo_for_compiler_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), *analysis__STATE_VARIABLE_Info_22, (MR_Integer) 0)));
#line 1274 "analysis.m"
    analysis__V_106_106 = (MR_hl_field(MR_mktag(0), *analysis__STATE_VARIABLE_Info_22, (MR_Integer) 1));
#line 1274 "analysis.m"
    analysis__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), *analysis__STATE_VARIABLE_Info_22, (MR_Integer) 2)));
#line 1274 "analysis.m"
    analysis__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), *analysis__STATE_VARIABLE_Info_22, (MR_Integer) 3)));
#line 1274 "analysis.m"
    analysis__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), *analysis__STATE_VARIABLE_Info_22, (MR_Integer) 4)));
#line 1274 "analysis.m"
    analysis__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), *analysis__STATE_VARIABLE_Info_22, (MR_Integer) 5)));
#line 1274 "analysis.m"
    analysis__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), *analysis__STATE_VARIABLE_Info_22, (MR_Integer) 6)));
#line 1274 "analysis.m"
    analysis__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), *analysis__STATE_VARIABLE_Info_22, (MR_Integer) 7)));
#line 1274 "analysis.m"
    analysis__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), *analysis__STATE_VARIABLE_Info_22, (MR_Integer) 8)));
#line 1274 "analysis.m"
    analysis__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), *analysis__STATE_VARIABLE_Info_22, (MR_Integer) 9)));
#line 1274 "analysis.m"
    analysis__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), *analysis__STATE_VARIABLE_Info_22, (MR_Integer) 10)));
#line 1274 "analysis.m"
    {
#line 1274 "analysis.m"
      analysis__conv4_ModuleResults_19 = mercury__map__det_elem_2_f_0(analysis__TypeCtorInfo_117_117, (MR_Word) &analysis_scalar_common_2[3], ((MR_Box) (analysis__ThisModule_13)), analysis__V_41_41);
    }
#line 1274 "analysis.m"
    analysis__ModuleResults_19 = ((MR_Word) analysis__conv4_ModuleResults_19);
#line 1275 "analysis.m"
    {
#line 1275 "analysis.m"
      analysis__file__write_module_analysis_results_6_p_0(*analysis__STATE_VARIABLE_Info_22, analysis__Globals_17, analysis__ThisModule_13, analysis__ModuleResults_19);
    }
#line 1279 "analysis.m"
    {
#line 1279 "analysis.m"
      analysis__V_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1279 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_43_43, 0) = ((MR_Box) (&analysis_scalar_common_7[1]));
#line 1279 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_43_43, 1) = ((MR_Box) (analysis__write_analysis_files_7_p_0_3));
#line 1279 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_43_43, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1279 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_43_43, 3) = ((MR_Box) (*analysis__STATE_VARIABLE_Info_22));
#line 1279 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_43_43, 4) = ((MR_Box) (analysis__Globals_17));
#line 1279 "analysis.m"
    }
#line 1279 "analysis.m"
    {
#line 1279 "analysis.m"
      mercury__set__fold_4_p_2(analysis__TypeCtorInfo_117_117, analysis__TypeCtorInfo_125_125, analysis__V_43_43, analysis__LocalImportedModules_16, ((MR_Box) ((MR_Integer) 0)), &analysis__conv5_STATE_VARIABLE_IO_44_44);
    }
#line 1284 "analysis.m"
    {
#line 1284 "analysis.m"
      analysis__file__empty_request_file_5_p_0(*analysis__STATE_VARIABLE_Info_22, analysis__Globals_17, analysis__ThisModule_13);
    }
#line 1287 "analysis.m"
    {
#line 1287 "analysis.m"
      analysis__V_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1287 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_46_46, 0) = ((MR_Box) (&analysis_scalar_common_7[1]));
#line 1287 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_46_46, 1) = ((MR_Box) (analysis__write_analysis_files_7_p_0_4));
#line 1287 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_46_46, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1287 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_46_46, 3) = ((MR_Box) (*analysis__STATE_VARIABLE_Info_22));
#line 1287 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_46_46, 4) = ((MR_Box) (analysis__Globals_17));
#line 1287 "analysis.m"
    }
#line 1287 "analysis.m"
    {
#line 1287 "analysis.m"
      mercury__set__fold_4_p_2(analysis__TypeCtorInfo_117_117, analysis__TypeCtorInfo_125_125, analysis__V_46_46, analysis__LocalImportedModules_16, ((MR_Box) ((MR_Integer) 0)), &analysis__conv6_STATE_VARIABLE_IO_47_47);
    }
#line 1292 "analysis.m"
    {
#line 1292 "analysis.m"
      analysis__module_name_to_write_file_name_7_p_0(analysis__TypeClassInfo_for_compiler_115, analysis__Compiler_8, analysis__Globals_17, analysis__ThisModule_13, (MR_String) ".analysis_date", &analysis__TimestampFileName_20);
    }
#line 1294 "analysis.m"
    {
#line 1294 "analysis.m"
      parse_tree__module_cmds__touch_datestamp_4_p_0(analysis__Globals_17, analysis__TimestampFileName_20);
    }
#line 1243 "analysis.m"
  }
#line 294 "analysis.m"
}

#line 288 "analysis.m"
void MR_CALL 
analysis__module_is_local_3_p_0(
#line 288 "analysis.m"
  MR_Word analysis__Info_4,
#line 288 "analysis.m"
  MR_Word analysis__ModuleName_5,
#line 288 "analysis.m"
  MR_Word * analysis__IsLocal_6)
#line 288 "analysis.m"
{
#line 1231 "analysis.m"
  {
#line 1231 "analysis.m"
    MR_bool analysis__succeeded;
#line 1231 "analysis.m"
    MR_Word analysis__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_4, (MR_Integer) 4)));
#line 1231 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_compiler_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_4, (MR_Integer) 0)));
#line 1231 "analysis.m"
    MR_Box analysis__V_8_8 = (MR_hl_field(MR_mktag(0), analysis__Info_4, (MR_Integer) 1));
#line 1231 "analysis.m"
    MR_Word analysis__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_4, (MR_Integer) 2)));
#line 1231 "analysis.m"
    MR_Word analysis__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_4, (MR_Integer) 3)));
#line 1231 "analysis.m"
    MR_Word analysis__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_4, (MR_Integer) 5)));
#line 1231 "analysis.m"
    MR_Word analysis__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_4, (MR_Integer) 6)));
#line 1231 "analysis.m"
    MR_Word analysis__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_4, (MR_Integer) 7)));
#line 1231 "analysis.m"
    MR_Word analysis__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_4, (MR_Integer) 8)));
#line 1231 "analysis.m"
    MR_Word analysis__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_4, (MR_Integer) 9)));
#line 1231 "analysis.m"
    MR_Word analysis__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_4, (MR_Integer) 10)));

#line 1231 "analysis.m"
    {
#line 1231 "analysis.m"
      analysis__succeeded = mercury__set__contains_2_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, analysis__V_7_7, ((MR_Box) (analysis__ModuleName_5)));
    }
#line 1231 "analysis.m"
    if (analysis__succeeded)
#line 1232 "analysis.m"
      *analysis__IsLocal_6 = (MR_Integer) 1;
#line 1231 "analysis.m"
    else
#line 1234 "analysis.m"
      *analysis__IsLocal_6 = (MR_Integer) 0;
#line 1231 "analysis.m"
  }
#line 288 "analysis.m"
}

#line 1202 "analysis.m"
static void MR_CALL 
analysis__prepare_intermodule_analysis_7_p_0_1(
#line 1202 "analysis.m"
  MR_Box analysis__closure_arg,
#line 1202 "analysis.m"
  MR_Box analysis__wrapper_arg_1,
#line 1202 "analysis.m"
  MR_Box analysis__wrapper_arg_2,
#line 1202 "analysis.m"
  MR_Box * analysis__wrapper_arg_3,
#line 1202 "analysis.m"
  MR_Box analysis__wrapper_arg_4,
#line 1202 "analysis.m"
  MR_Box * analysis__wrapper_arg_5)
#line 1202 "analysis.m"
{
#line 1202 "analysis.m"
  {
#line 1202 "analysis.m"
    MR_Box analysis__closure = analysis__closure_arg;
#line 1202 "analysis.m"
    MR_Word analysis__conv0_STATE_VARIABLE_Info_14;

#line 1202 "analysis.m"
    {
#line 1202 "analysis.m"
      analysis__load_module_analysis_results_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 3))), ((MR_Word) analysis__wrapper_arg_1), ((MR_Word) analysis__wrapper_arg_2), &analysis__conv0_STATE_VARIABLE_Info_14);
    }
#line 1202 "analysis.m"
    *analysis__wrapper_arg_3 = ((MR_Box) (analysis__conv0_STATE_VARIABLE_Info_14));
#line 1202 "analysis.m"
  }
#line 1202 "analysis.m"
}

#line 278 "analysis.m"
void MR_CALL 
analysis__prepare_intermodule_analysis_7_p_0(
#line 278 "analysis.m"
  MR_Word analysis__Globals_8,
#line 278 "analysis.m"
  MR_Word analysis__ImportedModuleNames0_9,
#line 278 "analysis.m"
  MR_Word analysis__LocalModuleNames_10,
#line 278 "analysis.m"
  MR_Word analysis__STATE_VARIABLE_Info_0_16,
#line 278 "analysis.m"
  MR_Word * analysis__STATE_VARIABLE_Info_17)
#line 278 "analysis.m"
{
#line 1195 "analysis.m"
  {
#line 1195 "analysis.m"
    MR_bool analysis__succeeded;
#line 1195 "analysis.m"
    MR_Word analysis__TypeCtorInfo_69_69 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 1195 "analysis.m"
    MR_Word analysis__ThisModule_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_16, (MR_Integer) 2)));
#line 1195 "analysis.m"
    MR_Word analysis__ImportedModuleNames_14;
#line 1195 "analysis.m"
    MR_Word analysis__ThisModuleRequests_15;
#line 1195 "analysis.m"
    MR_Word analysis__STATE_VARIABLE_Info_20_20;
#line 1195 "analysis.m"
    MR_Word analysis__V_21_21;
#line 1195 "analysis.m"
    MR_Word analysis__STATE_VARIABLE_Info_22_22;
#line 1195 "analysis.m"
    MR_Word analysis__STATE_VARIABLE_Info_24_24;
#line 1195 "analysis.m"
    MR_Word analysis__V_28_28;
#line 1195 "analysis.m"
    MR_Word analysis__V_29_29;
#line 1196 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_compiler_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_16, (MR_Integer) 0)));
#line 1196 "analysis.m"
    MR_Box analysis__V_30_30 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_16, (MR_Integer) 1));
#line 1196 "analysis.m"
    MR_Word analysis__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_16, (MR_Integer) 3)));
#line 1196 "analysis.m"
    MR_Word analysis__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_16, (MR_Integer) 4)));
#line 1196 "analysis.m"
    MR_Word analysis__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_16, (MR_Integer) 5)));
#line 1196 "analysis.m"
    MR_Word analysis__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_16, (MR_Integer) 6)));
#line 1196 "analysis.m"
    MR_Word analysis__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_16, (MR_Integer) 7)));
#line 1196 "analysis.m"
    MR_Word analysis__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_16, (MR_Integer) 8)));
#line 1196 "analysis.m"
    MR_Word analysis__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_16, (MR_Integer) 9)));
#line 1196 "analysis.m"
    MR_Word analysis__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_16, (MR_Integer) 10)));
#line 1199 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_compiler_70;
#line 1199 "analysis.m"
    MR_Box analysis__V_39_39;
#line 1199 "analysis.m"
    MR_Word analysis__V_40_40;
#line 1199 "analysis.m"
    MR_Word analysis__V_41_41;
#line 1199 "analysis.m"
    MR_Word analysis__V_43_43;
#line 1199 "analysis.m"
    MR_Word analysis__V_44_44;
#line 1199 "analysis.m"
    MR_Word analysis__V_45_45;
#line 1199 "analysis.m"
    MR_Word analysis__V_46_46;
#line 1199 "analysis.m"
    MR_Word analysis__V_47_47;
#line 1199 "analysis.m"
    MR_Word analysis__V_48_48;
#line 1199 "analysis.m"
    MR_Word analysis__V_42_42;
#line 1202 "analysis.m"
    MR_Box analysis__conv2_STATE_VARIABLE_Info_22_22;
#line 1202 "analysis.m"
    MR_Box analysis__conv1_STATE_VARIABLE_IO_23_23;
#line 1209 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_compiler_78;
#line 1209 "analysis.m"
    MR_Box analysis__V_49_49;
#line 1209 "analysis.m"
    MR_Word analysis__V_50_50;
#line 1209 "analysis.m"
    MR_Word analysis__V_51_51;
#line 1209 "analysis.m"
    MR_Word analysis__V_52_52;
#line 1209 "analysis.m"
    MR_Word analysis__V_53_53;
#line 1209 "analysis.m"
    MR_Word analysis__V_54_54;
#line 1209 "analysis.m"
    MR_Word analysis__V_55_55;
#line 1209 "analysis.m"
    MR_Word analysis__V_56_56;
#line 1209 "analysis.m"
    MR_Word analysis__V_57_57;
#line 1209 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_compiler_80;
#line 1209 "analysis.m"
    MR_Box analysis__V_58_58;
#line 1209 "analysis.m"
    MR_Word analysis__V_59_59;
#line 1209 "analysis.m"
    MR_Word analysis__V_60_60;
#line 1209 "analysis.m"
    MR_Word analysis__V_61_61;
#line 1209 "analysis.m"
    MR_Word analysis__V_63_63;
#line 1209 "analysis.m"
    MR_Word analysis__V_64_64;
#line 1209 "analysis.m"
    MR_Word analysis__V_65_65;
#line 1209 "analysis.m"
    MR_Word analysis__V_66_66;
#line 1209 "analysis.m"
    MR_Word analysis__V_67_67;
#line 1209 "analysis.m"
    MR_Word analysis__V_62_62;

#line 1197 "analysis.m"
    {
#line 1197 "analysis.m"
      analysis__ImportedModuleNames_14 = mercury__set__delete_2_f_0(analysis__TypeCtorInfo_69_69, analysis__ImportedModuleNames0_9, ((MR_Box) (analysis__ThisModule_13)));
    }
#line 1199 "analysis.m"
    analysis__TypeClassInfo_for_compiler_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_16, (MR_Integer) 0)));
#line 1199 "analysis.m"
    analysis__V_39_39 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_16, (MR_Integer) 1));
#line 1199 "analysis.m"
    analysis__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_16, (MR_Integer) 2)));
#line 1199 "analysis.m"
    analysis__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_16, (MR_Integer) 3)));
#line 1199 "analysis.m"
    analysis__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_16, (MR_Integer) 4)));
#line 1199 "analysis.m"
    analysis__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_16, (MR_Integer) 5)));
#line 1199 "analysis.m"
    analysis__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_16, (MR_Integer) 6)));
#line 1199 "analysis.m"
    analysis__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_16, (MR_Integer) 7)));
#line 1199 "analysis.m"
    analysis__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_16, (MR_Integer) 8)));
#line 1199 "analysis.m"
    analysis__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_16, (MR_Integer) 9)));
#line 1199 "analysis.m"
    analysis__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_16, (MR_Integer) 10)));
#line 1199 "analysis.m"
    {
#line 1199 "analysis.m"
      analysis__STATE_VARIABLE_Info_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 1199 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_20_20, 0) = ((MR_Box) (analysis__TypeClassInfo_for_compiler_70));
#line 1199 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_20_20, 1) = analysis__V_39_39;
#line 1199 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_20_20, 2) = ((MR_Box) (analysis__V_40_40));
#line 1199 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_20_20, 3) = ((MR_Box) (analysis__V_41_41));
#line 1199 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_20_20, 4) = ((MR_Box) (analysis__LocalModuleNames_10));
#line 1199 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_20_20, 5) = ((MR_Box) (analysis__V_43_43));
#line 1199 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_20_20, 6) = ((MR_Box) (analysis__V_44_44));
#line 1199 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_20_20, 7) = ((MR_Box) (analysis__V_45_45));
#line 1199 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_20_20, 8) = ((MR_Box) (analysis__V_46_46));
#line 1199 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_20_20, 9) = ((MR_Box) (analysis__V_47_47));
#line 1199 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_20_20, 10) = ((MR_Box) (analysis__V_48_48));
#line 1199 "analysis.m"
    }
#line 1202 "analysis.m"
    {
#line 1202 "analysis.m"
      analysis__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1202 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_21_21, 0) = ((MR_Box) (&analysis_scalar_common_8[0]));
#line 1202 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_21_21, 1) = ((MR_Box) (analysis__prepare_intermodule_analysis_7_p_0_1));
#line 1202 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_21_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1202 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_21_21, 3) = ((MR_Box) (analysis__Globals_8));
#line 1202 "analysis.m"
    }
#line 1202 "analysis.m"
    {
#line 1202 "analysis.m"
      mercury__set__fold2_6_p_2(analysis__TypeCtorInfo_69_69, (MR_Word) &analysis__analysis__type_ctor_info_analysis_info_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, analysis__V_21_21, analysis__ImportedModuleNames_14, ((MR_Box) (analysis__STATE_VARIABLE_Info_20_20)), &analysis__conv2_STATE_VARIABLE_Info_22_22, ((MR_Box) ((MR_Integer) 0)), &analysis__conv1_STATE_VARIABLE_IO_23_23);
    }
#line 1202 "analysis.m"
    analysis__STATE_VARIABLE_Info_22_22 = ((MR_Word) analysis__conv2_STATE_VARIABLE_Info_22_22);
#line 1206 "analysis.m"
    {
#line 1206 "analysis.m"
      analysis__load_module_analysis_results_6_p_0(analysis__Globals_8, analysis__ThisModule_13, analysis__STATE_VARIABLE_Info_22_22, &analysis__STATE_VARIABLE_Info_24_24);
    }
#line 1207 "analysis.m"
    {
#line 1207 "analysis.m"
      analysis__file__read_module_analysis_requests_6_p_0(analysis__STATE_VARIABLE_Info_24_24, analysis__Globals_8, analysis__ThisModule_13, &analysis__ThisModuleRequests_15);
    }
#line 1209 "analysis.m"
    analysis__TypeClassInfo_for_compiler_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_24_24, (MR_Integer) 0)));
#line 1209 "analysis.m"
    analysis__V_49_49 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_24_24, (MR_Integer) 1));
#line 1209 "analysis.m"
    analysis__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_24_24, (MR_Integer) 2)));
#line 1209 "analysis.m"
    analysis__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_24_24, (MR_Integer) 3)));
#line 1209 "analysis.m"
    analysis__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_24_24, (MR_Integer) 4)));
#line 1209 "analysis.m"
    analysis__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_24_24, (MR_Integer) 5)));
#line 1209 "analysis.m"
    analysis__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_24_24, (MR_Integer) 6)));
#line 1209 "analysis.m"
    analysis__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_24_24, (MR_Integer) 7)));
#line 1209 "analysis.m"
    analysis__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_24_24, (MR_Integer) 8)));
#line 1209 "analysis.m"
    analysis__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_24_24, (MR_Integer) 9)));
#line 1209 "analysis.m"
    analysis__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_24_24, (MR_Integer) 10)));
#line 1209 "analysis.m"
    {
#line 1209 "analysis.m"
      analysis__V_29_29 = mercury__map__f_101_108_101_109_32_58_61_3_f_0(analysis__TypeCtorInfo_69_69, (MR_Word) &analysis_scalar_common_2[1], ((MR_Box) (analysis__ThisModule_13)), analysis__V_28_28, ((MR_Box) (analysis__ThisModuleRequests_15)));
    }
#line 1209 "analysis.m"
    analysis__TypeClassInfo_for_compiler_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_24_24, (MR_Integer) 0)));
#line 1209 "analysis.m"
    analysis__V_58_58 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_24_24, (MR_Integer) 1));
#line 1209 "analysis.m"
    analysis__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_24_24, (MR_Integer) 2)));
#line 1209 "analysis.m"
    analysis__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_24_24, (MR_Integer) 3)));
#line 1209 "analysis.m"
    analysis__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_24_24, (MR_Integer) 4)));
#line 1209 "analysis.m"
    analysis__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_24_24, (MR_Integer) 5)));
#line 1209 "analysis.m"
    analysis__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_24_24, (MR_Integer) 6)));
#line 1209 "analysis.m"
    analysis__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_24_24, (MR_Integer) 7)));
#line 1209 "analysis.m"
    analysis__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_24_24, (MR_Integer) 8)));
#line 1209 "analysis.m"
    analysis__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_24_24, (MR_Integer) 9)));
#line 1209 "analysis.m"
    analysis__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_24_24, (MR_Integer) 10)));
#line 1209 "analysis.m"
    {
#line 1209 "analysis.m"
      MR_Word base;
#line 1209 "analysis.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 1209 "analysis.m"
      *analysis__STATE_VARIABLE_Info_17 = base;
#line 1209 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (analysis__TypeClassInfo_for_compiler_80));
#line 1209 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 1) = analysis__V_58_58;
#line 1209 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (analysis__V_59_59));
#line 1209 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (analysis__V_60_60));
#line 1209 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (analysis__V_61_61));
#line 1209 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (analysis__V_29_29));
#line 1209 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (analysis__V_63_63));
#line 1209 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (analysis__V_64_64));
#line 1209 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (analysis__V_65_65));
#line 1209 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (analysis__V_66_66));
#line 1209 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (analysis__V_67_67));
#line 1209 "analysis.m"
    }
#line 1195 "analysis.m"
  }
#line 278 "analysis.m"
}

#line 262 "analysis.m"
void MR_CALL 
analysis__record_request_6_p_0(
#line 262 "analysis.m"
  MR_Word analysis__TypeClassInfo_for_call_pattern_39,
#line 262 "analysis.m"
  MR_String analysis__AnalysisName_7,
#line 262 "analysis.m"
  MR_Word analysis__ModuleName_8,
#line 262 "analysis.m"
  MR_Word analysis__FuncId_9,
#line 262 "analysis.m"
  MR_Box analysis__CallPattern_10,
#line 262 "analysis.m"
  MR_Word analysis__STATE_VARIABLE_Info_0_15,
#line 262 "analysis.m"
  MR_Word * analysis__STATE_VARIABLE_Info_16)
#line 262 "analysis.m"
{
#line 692 "analysis.m"
  {
#line 692 "analysis.m"
    MR_bool analysis__succeeded;
#line 692 "analysis.m"
    MR_Word analysis__ThisModule_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_15, (MR_Integer) 2)));
#line 692 "analysis.m"
    MR_Word analysis__MakeAnalysisReg_13;
#line 692 "analysis.m"
    MR_Word analysis__IsLocal_14;
#line 693 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_compiler_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_15, (MR_Integer) 0)));
#line 693 "analysis.m"
    MR_Box analysis__V_21_21 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_15, (MR_Integer) 1));
#line 693 "analysis.m"
    MR_Word analysis__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_15, (MR_Integer) 3)));
#line 693 "analysis.m"
    MR_Word analysis__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_15, (MR_Integer) 4)));
#line 693 "analysis.m"
    MR_Word analysis__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_15, (MR_Integer) 5)));
#line 693 "analysis.m"
    MR_Word analysis__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_15, (MR_Integer) 6)));
#line 693 "analysis.m"
    MR_Word analysis__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_15, (MR_Integer) 7)));
#line 693 "analysis.m"
    MR_Word analysis__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_15, (MR_Integer) 8)));
#line 693 "analysis.m"
    MR_Word analysis__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_15, (MR_Integer) 9)));
#line 693 "analysis.m"
    MR_Word analysis__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_15, (MR_Integer) 10)));
#line 700 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_compiler_41;
#line 700 "analysis.m"
    MR_Box analysis__V_30_30;
#line 700 "analysis.m"
    MR_Word analysis__V_31_31;
#line 700 "analysis.m"
    MR_Word analysis__V_32_32;
#line 700 "analysis.m"
    MR_Word analysis__V_33_33;
#line 700 "analysis.m"
    MR_Word analysis__V_34_34;
#line 700 "analysis.m"
    MR_Word analysis__V_35_35;
#line 700 "analysis.m"
    MR_Word analysis__V_36_36;
#line 700 "analysis.m"
    MR_Word analysis__V_37_37;
#line 700 "analysis.m"
    MR_Word analysis__V_38_38;
#line 1231 "analysis.m"
    MR_Word analysis__V_46_46;
#line 1231 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_compiler_56;
#line 1231 "analysis.m"
    MR_Box analysis__V_47_47;
#line 1231 "analysis.m"
    MR_Word analysis__V_48_48;
#line 1231 "analysis.m"
    MR_Word analysis__V_49_49;
#line 1231 "analysis.m"
    MR_Word analysis__V_50_50;
#line 1231 "analysis.m"
    MR_Word analysis__V_51_51;
#line 1231 "analysis.m"
    MR_Word analysis__V_52_52;
#line 1231 "analysis.m"
    MR_Word analysis__V_53_53;
#line 1231 "analysis.m"
    MR_Word analysis__V_54_54;
#line 1231 "analysis.m"
    MR_Word analysis__V_55_55;

#line 694 "analysis.m"
    {
#line 694 "analysis.m"
      analysis__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(analysis__ThisModule_12, analysis__ModuleName_8);
    }
#line 694 "analysis.m"
    if (analysis__succeeded)
#line 695 "analysis.m"
      {
#line 695 "analysis.m"
        {
#line 695 "analysis.m"
          mercury__require__unexpected_3_p_0((MR_String) "analysis", (MR_String) "predicate \140analysis.record_request\'/6", (MR_String) "request on self");
#line 695 "analysis.m"
          return;
        }
#line 695 "analysis.m"
      }
#line 694 "analysis.m"
    else
#line 697 "analysis.m"
      {
#line 697 "analysis.m"
      }
#line 700 "analysis.m"
    analysis__TypeClassInfo_for_compiler_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_15, (MR_Integer) 0)));
#line 700 "analysis.m"
    analysis__V_30_30 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_15, (MR_Integer) 1));
#line 700 "analysis.m"
    analysis__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_15, (MR_Integer) 2)));
#line 700 "analysis.m"
    analysis__MakeAnalysisReg_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_15, (MR_Integer) 3)));
#line 700 "analysis.m"
    analysis__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_15, (MR_Integer) 4)));
#line 700 "analysis.m"
    analysis__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_15, (MR_Integer) 5)));
#line 700 "analysis.m"
    analysis__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_15, (MR_Integer) 6)));
#line 700 "analysis.m"
    analysis__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_15, (MR_Integer) 7)));
#line 700 "analysis.m"
    analysis__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_15, (MR_Integer) 8)));
#line 700 "analysis.m"
    analysis__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_15, (MR_Integer) 9)));
#line 700 "analysis.m"
    analysis__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_15, (MR_Integer) 10)));
#line 1231 "analysis.m"
    analysis__TypeClassInfo_for_compiler_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_15, (MR_Integer) 0)));
#line 1231 "analysis.m"
    analysis__V_47_47 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_15, (MR_Integer) 1));
#line 1231 "analysis.m"
    analysis__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_15, (MR_Integer) 2)));
#line 1231 "analysis.m"
    analysis__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_15, (MR_Integer) 3)));
#line 1231 "analysis.m"
    analysis__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_15, (MR_Integer) 4)));
#line 1231 "analysis.m"
    analysis__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_15, (MR_Integer) 5)));
#line 1231 "analysis.m"
    analysis__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_15, (MR_Integer) 6)));
#line 1231 "analysis.m"
    analysis__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_15, (MR_Integer) 7)));
#line 1231 "analysis.m"
    analysis__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_15, (MR_Integer) 8)));
#line 1231 "analysis.m"
    analysis__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_15, (MR_Integer) 9)));
#line 1231 "analysis.m"
    analysis__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_15, (MR_Integer) 10)));
#line 1231 "analysis.m"
    {
#line 1231 "analysis.m"
      analysis__succeeded = mercury__set__contains_2_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, analysis__V_46_46, ((MR_Box) (analysis__ModuleName_8)));
    }
#line 1231 "analysis.m"
    if (analysis__succeeded)
#line 1232 "analysis.m"
      analysis__IsLocal_14 = (MR_Integer) 1;
#line 1231 "analysis.m"
    else
#line 1234 "analysis.m"
      analysis__IsLocal_14 = (MR_Integer) 0;
#line 703 "analysis.m"
    analysis__succeeded = (analysis__MakeAnalysisReg_13 == (MR_Integer) 0);
#line 703 "analysis.m"
    if (analysis__succeeded)
#line 704 "analysis.m"
      analysis__succeeded = (analysis__IsLocal_14 == (MR_Integer) 1);
#line 702 "analysis.m"
    if (analysis__succeeded)
#line 706 "analysis.m"
      {
#line 706 "analysis.m"
        analysis__record_request_2_7_p_0(analysis__TypeClassInfo_for_call_pattern_39, analysis__ThisModule_12, analysis__AnalysisName_7, analysis__ModuleName_8, analysis__FuncId_9, analysis__CallPattern_10, analysis__STATE_VARIABLE_Info_0_15, analysis__STATE_VARIABLE_Info_16);
      }
#line 702 "analysis.m"
    else
#line 702 "analysis.m"
      *analysis__STATE_VARIABLE_Info_16 = analysis__STATE_VARIABLE_Info_0_15;
#line 692 "analysis.m"
  }
#line 262 "analysis.m"
}

#line 681 "analysis.m"
static MR_bool MR_CALL 
analysis__lookup_requests_5_p_0_1(
#line 681 "analysis.m"
  MR_Box analysis__closure_arg,
#line 681 "analysis.m"
  MR_Box analysis__wrapper_arg_1,
#line 681 "analysis.m"
  MR_Box * analysis__wrapper_arg_2)
#line 681 "analysis.m"
{
#line 681 "analysis.m"
  {
#line 681 "analysis.m"
    MR_bool analysis__succeeded;
#line 681 "analysis.m"
    MR_Box analysis__closure = analysis__closure_arg;

#line 681 "analysis.m"
    {
#line 681 "analysis.m"
      analysis__succeeded = analysis__IntroducedFrom__func__lookup_requests__681__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 3))), ((MR_Word) analysis__wrapper_arg_1), analysis__wrapper_arg_2);
    }
#line 681 "analysis.m"
    return analysis__succeeded;
#line 681 "analysis.m"
  }
#line 681 "analysis.m"
}

#line 253 "analysis.m"
void MR_CALL 
analysis__lookup_requests_5_p_0(
#line 253 "analysis.m"
  MR_Word analysis__TypeClassInfo_for_call_pattern_47,
#line 253 "analysis.m"
  MR_Word analysis__Info_6,
#line 253 "analysis.m"
  MR_String analysis__AnalysisName_7,
#line 253 "analysis.m"
  MR_Word analysis__ModuleName_8,
#line 253 "analysis.m"
  MR_Word analysis__FuncId_9,
#line 253 "analysis.m"
  MR_Word * analysis__CallPatterns_10)
#line 253 "analysis.m"
{
#line 670 "analysis.m"
  {
#line 670 "analysis.m"
    MR_bool analysis__succeeded;
#line 671 "analysis.m"
    MR_Word analysis__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 2)));
#line 671 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_compiler_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 0)));
#line 671 "analysis.m"
    MR_Box analysis__V_29_29 = (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 1));
#line 671 "analysis.m"
    MR_Word analysis__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 3)));
#line 671 "analysis.m"
    MR_Word analysis__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 4)));
#line 671 "analysis.m"
    MR_Word analysis__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 5)));
#line 671 "analysis.m"
    MR_Word analysis__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 6)));
#line 671 "analysis.m"
    MR_Word analysis__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 7)));
#line 671 "analysis.m"
    MR_Word analysis__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 8)));
#line 671 "analysis.m"
    MR_Word analysis__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 9)));
#line 671 "analysis.m"
    MR_Word analysis__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 10)));
#line 676 "analysis.m"
    MR_Word analysis__CallPatterns0_13;
#line 677 "analysis.m"
    MR_Word analysis__TypeCtorInfo_52_52;
#line 677 "analysis.m"
    MR_Word analysis__TypeInfo_53_53;
#line 677 "analysis.m"
    MR_Word analysis__TypeCtorInfo_54_54;
#line 677 "analysis.m"
    MR_Word analysis__TypeInfo_55_55;
#line 677 "analysis.m"
    MR_Word analysis__ModuleRequests_11;
#line 677 "analysis.m"
    MR_Word analysis__AnalysisRequests_12;
#line 677 "analysis.m"
    MR_Word analysis__V_21_21;
#line 677 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_compiler_49;
#line 677 "analysis.m"
    MR_Box analysis__V_38_38;
#line 677 "analysis.m"
    MR_Word analysis__V_39_39;
#line 677 "analysis.m"
    MR_Word analysis__V_40_40;
#line 677 "analysis.m"
    MR_Word analysis__V_41_41;
#line 677 "analysis.m"
    MR_Word analysis__V_42_42;
#line 677 "analysis.m"
    MR_Word analysis__V_43_43;
#line 677 "analysis.m"
    MR_Word analysis__V_44_44;
#line 677 "analysis.m"
    MR_Word analysis__V_45_45;
#line 677 "analysis.m"
    MR_Word analysis__V_46_46;
#line 677 "analysis.m"
    MR_Box analysis__conv0_ModuleRequests_11;
#line 678 "analysis.m"
    MR_Box analysis__conv1_AnalysisRequests_12;
#line 679 "analysis.m"
    MR_Box analysis__conv2_CallPatterns0_13;

#line 671 "analysis.m"
    {
#line 671 "analysis.m"
      analysis__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(analysis__ModuleName_8, analysis__V_64_64);
    }
#line 671 "analysis.m"
    if (analysis__succeeded)
#line 672 "analysis.m"
      {
#line 672 "analysis.m"
      }
#line 671 "analysis.m"
    else
#line 674 "analysis.m"
      {
#line 674 "analysis.m"
        {
#line 674 "analysis.m"
          mercury__require__unexpected_3_p_0((MR_String) "analysis", (MR_String) "predicate \140analysis.lookup_requests\'/5", (MR_String) "not this_module");
#line 674 "analysis.m"
          return;
        }
#line 674 "analysis.m"
      }
#line 677 "analysis.m"
    analysis__TypeClassInfo_for_compiler_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 0)));
#line 677 "analysis.m"
    analysis__V_38_38 = (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 1));
#line 677 "analysis.m"
    analysis__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 2)));
#line 677 "analysis.m"
    analysis__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 3)));
#line 677 "analysis.m"
    analysis__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 4)));
#line 677 "analysis.m"
    analysis__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 5)));
#line 677 "analysis.m"
    analysis__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 6)));
#line 677 "analysis.m"
    analysis__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 7)));
#line 677 "analysis.m"
    analysis__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 8)));
#line 677 "analysis.m"
    analysis__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 9)));
#line 677 "analysis.m"
    analysis__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 10)));
#line 677 "analysis.m"
    {
#line 677 "analysis.m"
      analysis__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &analysis_scalar_common_2[1], analysis__V_21_21, ((MR_Box) (analysis__ModuleName_8)), &analysis__conv0_ModuleRequests_11);
    }
#line 677 "analysis.m"
    if (analysis__succeeded)
#line 677 "analysis.m"
      {
#line 677 "analysis.m"
        analysis__ModuleRequests_11 = ((MR_Word) analysis__conv0_ModuleRequests_11);
#line 677 "analysis.m"
        analysis__succeeded = MR_TRUE;
#line 677 "analysis.m"
      }
#line 677 "analysis.m"
    if (analysis__succeeded)
#line 677 "analysis.m"
      {
#line 16944 "analysis.c"
        analysis__TypeCtorInfo_52_52 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 16946 "analysis.c"
        analysis__TypeInfo_53_53 = (MR_Word) &analysis_scalar_common_2[0];
#line 678 "analysis.m"
        {
#line 678 "analysis.m"
          analysis__succeeded = mercury__map__search_3_p_0(analysis__TypeCtorInfo_52_52, analysis__TypeInfo_53_53, analysis__ModuleRequests_11, ((MR_Box) (analysis__AnalysisName_7)), &analysis__conv1_AnalysisRequests_12);
        }
#line 678 "analysis.m"
        if (analysis__succeeded)
#line 678 "analysis.m"
          {
#line 678 "analysis.m"
            analysis__AnalysisRequests_12 = ((MR_Word) analysis__conv1_AnalysisRequests_12);
#line 678 "analysis.m"
            analysis__succeeded = MR_TRUE;
#line 678 "analysis.m"
          }
#line 677 "analysis.m"
        if (analysis__succeeded)
#line 677 "analysis.m"
          {
#line 16967 "analysis.c"
            analysis__TypeCtorInfo_54_54 = (MR_Word) &analysis__analysis__type_ctor_info_func_id_0;
#line 16969 "analysis.c"
            analysis__TypeInfo_55_55 = (MR_Word) &analysis_scalar_common_1[0];
#line 679 "analysis.m"
            {
#line 679 "analysis.m"
              analysis__succeeded = mercury__map__search_3_p_0(analysis__TypeCtorInfo_54_54, analysis__TypeInfo_55_55, analysis__AnalysisRequests_12, ((MR_Box) (analysis__FuncId_9)), &analysis__conv2_CallPatterns0_13);
            }
#line 679 "analysis.m"
            if (analysis__succeeded)
#line 679 "analysis.m"
              {
#line 679 "analysis.m"
                analysis__CallPatterns0_13 = ((MR_Word) analysis__conv2_CallPatterns0_13);
#line 679 "analysis.m"
                analysis__succeeded = MR_TRUE;
#line 679 "analysis.m"
              }
#line 677 "analysis.m"
          }
#line 677 "analysis.m"
      }
#line 676 "analysis.m"
    if (analysis__succeeded)
#line 684 "analysis.m"
      {
#line 684 "analysis.m"
        MR_Word analysis__TypeInfo_58_58;
#line 684 "analysis.m"
        MR_Word analysis__TypeInfo_63_63;
#line 684 "analysis.m"
        MR_Word analysis__CallPatterns1_14;
#line 684 "analysis.m"
        MR_Word analysis__V_22_22;

#line 681 "analysis.m"
        {
#line 681 "analysis.m"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_call_pattern_47, (MR_Integer) 4, &analysis__TypeInfo_58_58);
        }
#line 681 "analysis.m"
        {
#line 681 "analysis.m"
          analysis__V_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 681 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__V_22_22, 0) = ((MR_Box) (&analysis_scalar_common_4[1]));
#line 681 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__V_22_22, 1) = ((MR_Box) (analysis__lookup_requests_5_p_0_1));
#line 681 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__V_22_22, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 681 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__V_22_22, 3) = ((MR_Box) (analysis__TypeClassInfo_for_call_pattern_47));
#line 681 "analysis.m"
        }
#line 681 "analysis.m"
        {
#line 681 "analysis.m"
          analysis__CallPatterns1_14 = mercury__list__filter_map_2_f_0((MR_Word) &analysis__analysis__type_ctor_info_analysis_request_0, analysis__TypeInfo_58_58, analysis__V_22_22, analysis__CallPatterns0_13);
        }
#line 687 "analysis.m"
        {
#line 687 "analysis.m"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_call_pattern_47, (MR_Integer) 4, &analysis__TypeInfo_63_63);
        }
#line 687 "analysis.m"
        {
#line 687 "analysis.m"
          mercury__list__sort_and_remove_dups_2_p_0(analysis__TypeInfo_63_63, analysis__CallPatterns1_14, analysis__CallPatterns_10);
        }
#line 684 "analysis.m"
      }
#line 676 "analysis.m"
    else
#line 689 "analysis.m"
      *analysis__CallPatterns_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 670 "analysis.m"
  }
#line 253 "analysis.m"
}

#line 246 "analysis.m"
void MR_CALL 
analysis__record_dependency_7_p_0(
#line 246 "analysis.m"
  MR_Word analysis__TypeClassInfo_for_analysis_47,
#line 246 "analysis.m"
  MR_Word analysis__CalleeModuleName_8,
#line 246 "analysis.m"
  MR_Word analysis__FuncId_9,
#line 246 "analysis.m"
  MR_Box analysis__FuncInfo_10,
#line 246 "analysis.m"
  MR_Box analysis__Call_11,
#line 246 "analysis.m"
  MR_Word analysis__STATE_VARIABLE_Info_0_21,
#line 246 "analysis.m"
  MR_Word * analysis__STATE_VARIABLE_Info_22)
#line 246 "analysis.m"
{
#line 743 "analysis.m"
  {
#line 743 "analysis.m"
    MR_bool analysis__succeeded;
#line 743 "analysis.m"
    MR_Word analysis__ThisModule_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 2)));
#line 743 "analysis.m"
    MR_Word analysis__MakeAnalysisReg_15;
#line 743 "analysis.m"
    MR_Word analysis__IsLocal_16;
#line 744 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_compiler_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 0)));
#line 744 "analysis.m"
    MR_Box analysis__V_29_29 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 1));
#line 744 "analysis.m"
    MR_Word analysis__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 3)));
#line 744 "analysis.m"
    MR_Word analysis__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 4)));
#line 744 "analysis.m"
    MR_Word analysis__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 5)));
#line 744 "analysis.m"
    MR_Word analysis__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 6)));
#line 744 "analysis.m"
    MR_Word analysis__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 7)));
#line 744 "analysis.m"
    MR_Word analysis__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 8)));
#line 744 "analysis.m"
    MR_Word analysis__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 9)));
#line 744 "analysis.m"
    MR_Word analysis__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 10)));
#line 751 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_compiler_49;
#line 751 "analysis.m"
    MR_Box analysis__V_38_38;
#line 751 "analysis.m"
    MR_Word analysis__V_39_39;
#line 751 "analysis.m"
    MR_Word analysis__V_40_40;
#line 751 "analysis.m"
    MR_Word analysis__V_41_41;
#line 751 "analysis.m"
    MR_Word analysis__V_42_42;
#line 751 "analysis.m"
    MR_Word analysis__V_43_43;
#line 751 "analysis.m"
    MR_Word analysis__V_44_44;
#line 751 "analysis.m"
    MR_Word analysis__V_45_45;
#line 751 "analysis.m"
    MR_Word analysis__V_46_46;
#line 1231 "analysis.m"
    MR_Word analysis__V_65_65;
#line 1231 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_compiler_75;
#line 1231 "analysis.m"
    MR_Box analysis__V_66_66;
#line 1231 "analysis.m"
    MR_Word analysis__V_67_67;
#line 1231 "analysis.m"
    MR_Word analysis__V_68_68;
#line 1231 "analysis.m"
    MR_Word analysis__V_69_69;
#line 1231 "analysis.m"
    MR_Word analysis__V_70_70;
#line 1231 "analysis.m"
    MR_Word analysis__V_71_71;
#line 1231 "analysis.m"
    MR_Word analysis__V_72_72;
#line 1231 "analysis.m"
    MR_Word analysis__V_73_73;
#line 1231 "analysis.m"
    MR_Word analysis__V_74_74;

#line 745 "analysis.m"
    {
#line 745 "analysis.m"
      analysis__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(analysis__ThisModule_14, analysis__CalleeModuleName_8);
    }
#line 745 "analysis.m"
    if (analysis__succeeded)
#line 746 "analysis.m"
      {
#line 746 "analysis.m"
        {
#line 746 "analysis.m"
          mercury__require__unexpected_3_p_0((MR_String) "analysis", (MR_String) "predicate \140analysis.record_dependency\'/7", (MR_String) "dependency on self");
#line 746 "analysis.m"
          return;
        }
#line 746 "analysis.m"
      }
#line 745 "analysis.m"
    else
#line 748 "analysis.m"
      {
#line 748 "analysis.m"
      }
#line 751 "analysis.m"
    analysis__TypeClassInfo_for_compiler_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 0)));
#line 751 "analysis.m"
    analysis__V_38_38 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 1));
#line 751 "analysis.m"
    analysis__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 2)));
#line 751 "analysis.m"
    analysis__MakeAnalysisReg_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 3)));
#line 751 "analysis.m"
    analysis__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 4)));
#line 751 "analysis.m"
    analysis__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 5)));
#line 751 "analysis.m"
    analysis__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 6)));
#line 751 "analysis.m"
    analysis__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 7)));
#line 751 "analysis.m"
    analysis__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 8)));
#line 751 "analysis.m"
    analysis__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 9)));
#line 751 "analysis.m"
    analysis__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 10)));
#line 1231 "analysis.m"
    analysis__TypeClassInfo_for_compiler_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 0)));
#line 1231 "analysis.m"
    analysis__V_66_66 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 1));
#line 1231 "analysis.m"
    analysis__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 2)));
#line 1231 "analysis.m"
    analysis__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 3)));
#line 1231 "analysis.m"
    analysis__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 4)));
#line 1231 "analysis.m"
    analysis__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 5)));
#line 1231 "analysis.m"
    analysis__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 6)));
#line 1231 "analysis.m"
    analysis__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 7)));
#line 1231 "analysis.m"
    analysis__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 8)));
#line 1231 "analysis.m"
    analysis__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 9)));
#line 1231 "analysis.m"
    analysis__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 10)));
#line 1231 "analysis.m"
    {
#line 1231 "analysis.m"
      analysis__succeeded = mercury__set__contains_2_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, analysis__V_65_65, ((MR_Box) (analysis__CalleeModuleName_8)));
    }
#line 1231 "analysis.m"
    if (analysis__succeeded)
#line 1232 "analysis.m"
      analysis__IsLocal_16 = (MR_Integer) 1;
#line 1231 "analysis.m"
    else
#line 1234 "analysis.m"
      analysis__IsLocal_16 = (MR_Integer) 0;
#line 754 "analysis.m"
    analysis__succeeded = (analysis__MakeAnalysisReg_15 == (MR_Integer) 0);
#line 754 "analysis.m"
    if (analysis__succeeded)
#line 755 "analysis.m"
      analysis__succeeded = (analysis__IsLocal_16 == (MR_Integer) 1);
#line 753 "analysis.m"
    if (analysis__succeeded)
#line 757 "analysis.m"
      {
#line 757 "analysis.m"
        MR_Word analysis__TypeClassInfo_for_call_pattern_50;
#line 757 "analysis.m"
        MR_String analysis__AnalysisName_17;
#line 757 "analysis.m"
        MR_Word analysis__MaybeResult_18;
#line 757 "analysis.m"
        MR_Word analysis__STATE_VARIABLE_Info_26_26;
#line 86 "analysis.m"
        MR_Box analysis__V_59_59;
#line 86 "analysis.m"
        MR_Box MR_CALL (* analysis__func_0)(MR_Box) = ((MR_Box MR_CALL (*)(MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), analysis__TypeClassInfo_for_analysis_47, (MR_Integer) 0)), (MR_Integer) 5)));
#line 86 "analysis.m"
        MR_Box analysis__conv1_AnalysisName_17;

#line 86 "analysis.m"
        {
#line 86 "analysis.m"
          analysis__conv1_AnalysisName_17 = analysis__func_0(((MR_Box) analysis__TypeClassInfo_for_analysis_47));
        }
#line 86 "analysis.m"
        analysis__AnalysisName_17 = ((MR_String) analysis__conv1_AnalysisName_17);
#line 17253 "analysis.c"
        {
#line 17255 "analysis.c"
          mercury__private_builtin__superclass_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_47, (MR_Integer) 1, &analysis__TypeClassInfo_for_call_pattern_50);
        }
#line 758 "analysis.m"
        {
#line 758 "analysis.m"
          analysis__record_dependency_2_7_p_0(analysis__TypeClassInfo_for_call_pattern_50, analysis__ThisModule_14, analysis__AnalysisName_17, analysis__CalleeModuleName_8, analysis__FuncId_9, analysis__Call_11, analysis__STATE_VARIABLE_Info_0_21, &analysis__STATE_VARIABLE_Info_26_26);
        }
#line 763 "analysis.m"
        {
#line 763 "analysis.m"
          analysis__lookup_exactly_matching_result_even_from_invalid_modules_6_p_0(analysis__TypeClassInfo_for_analysis_47, analysis__STATE_VARIABLE_Info_26_26, analysis__CalleeModuleName_8, analysis__FuncId_9, analysis__FuncInfo_10, analysis__Call_11, &analysis__MaybeResult_18);
        }
#line 768 "analysis.m"
        if ((analysis__MaybeResult_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 766 "analysis.m"
          {
#line 766 "analysis.m"
            MR_Word analysis__TypeClassInfo_for_call_pattern_52;

#line 17275 "analysis.c"
            {
#line 17277 "analysis.c"
              mercury__private_builtin__superclass_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_47, (MR_Integer) 1, &analysis__TypeClassInfo_for_call_pattern_52);
            }
#line 767 "analysis.m"
            {
#line 767 "analysis.m"
              analysis__record_request_6_p_0(analysis__TypeClassInfo_for_call_pattern_52, analysis__AnalysisName_17, analysis__CalleeModuleName_8, analysis__FuncId_9, analysis__Call_11, analysis__STATE_VARIABLE_Info_26_26, analysis__STATE_VARIABLE_Info_22);
            }
#line 766 "analysis.m"
          }
#line 768 "analysis.m"
        else
#line 769 "analysis.m"
          {
#line 769 "analysis.m"
            MR_Word analysis__TypeInfo_54_54;
#line 769 "analysis.m"
            MR_Word analysis__TypeInfo_56_56;
#line 769 "analysis.m"
            MR_Word analysis__TypeInfo_58_58;
#line 770 "analysis.m"
            MR_Word analysis__V_27_27;
#line 770 "analysis.m"
            MR_Word analysis__V_60_60;

#line 770 "analysis.m"
            {
#line 770 "analysis.m"
              mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_47, (MR_Integer) 4, &analysis__TypeInfo_54_54);
            }
#line 770 "analysis.m"
            {
#line 770 "analysis.m"
              mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_47, (MR_Integer) 5, &analysis__TypeInfo_56_56);
            }
#line 17312 "analysis.c"
            {
#line 17314 "analysis.c"
              analysis__TypeInfo_58_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 17316 "analysis.c"
              MR_hl_field(MR_mktag(0), analysis__TypeInfo_58_58, 0) = ((MR_Box) (&analysis__analysis__type_ctor_info_analysis_result_2));
#line 17318 "analysis.c"
              MR_hl_field(MR_mktag(0), analysis__TypeInfo_58_58, 1) = ((MR_Box) (analysis__TypeInfo_54_54));
#line 17320 "analysis.c"
              MR_hl_field(MR_mktag(0), analysis__TypeInfo_58_58, 2) = ((MR_Box) (analysis__TypeInfo_56_56));
#line 17322 "analysis.c"
            }
#line 770 "analysis.m"
            {
#line 770 "analysis.m"
              mercury__type_desc__same_type_2_p_0(analysis__TypeInfo_58_58);
            }
#line 769 "analysis.m"
            *analysis__STATE_VARIABLE_Info_22 = analysis__STATE_VARIABLE_Info_26_26;
#line 769 "analysis.m"
          }
#line 757 "analysis.m"
      }
#line 753 "analysis.m"
    else
#line 753 "analysis.m"
      *analysis__STATE_VARIABLE_Info_22 = analysis__STATE_VARIABLE_Info_0_21;
#line 743 "analysis.m"
  }
#line 246 "analysis.m"
}

#line 235 "analysis.m"
void MR_CALL 
analysis__record_result_7_p_0(
#line 235 "analysis.m"
  MR_Word analysis__TypeClassInfo_for_analysis_60,
#line 235 "analysis.m"
  MR_Word analysis__ModuleName_8,
#line 235 "analysis.m"
  MR_Word analysis__FuncId_9,
#line 235 "analysis.m"
  MR_Box analysis__CallPattern_10,
#line 235 "analysis.m"
  MR_Box analysis__AnswerPattern_11,
#line 235 "analysis.m"
  MR_Word analysis__Status_12,
#line 235 "analysis.m"
  MR_Word analysis__STATE_VARIABLE_Info_0_17,
#line 235 "analysis.m"
  MR_Word * analysis__STATE_VARIABLE_Info_18)
#line 235 "analysis.m"
{
#line 624 "analysis.m"
  {
#line 624 "analysis.m"
    MR_bool analysis__succeeded;
#line 624 "analysis.m"
    MR_Word analysis__MakeAnalysisReg_14;
#line 625 "analysis.m"
    MR_Word analysis__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 2)));
#line 625 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_compiler_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 0)));
#line 625 "analysis.m"
    MR_Box analysis__V_23_23 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 1));
#line 625 "analysis.m"
    MR_Word analysis__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 3)));
#line 625 "analysis.m"
    MR_Word analysis__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 4)));
#line 625 "analysis.m"
    MR_Word analysis__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 5)));
#line 625 "analysis.m"
    MR_Word analysis__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 6)));
#line 625 "analysis.m"
    MR_Word analysis__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 7)));
#line 625 "analysis.m"
    MR_Word analysis__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 8)));
#line 625 "analysis.m"
    MR_Word analysis__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 9)));
#line 625 "analysis.m"
    MR_Word analysis__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 10)));
#line 632 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_compiler_62;
#line 632 "analysis.m"
    MR_Box analysis__V_32_32;
#line 632 "analysis.m"
    MR_Word analysis__V_33_33;
#line 632 "analysis.m"
    MR_Word analysis__V_34_34;
#line 632 "analysis.m"
    MR_Word analysis__V_35_35;
#line 632 "analysis.m"
    MR_Word analysis__V_36_36;
#line 632 "analysis.m"
    MR_Word analysis__V_37_37;
#line 632 "analysis.m"
    MR_Word analysis__V_38_38;
#line 632 "analysis.m"
    MR_Word analysis__V_39_39;
#line 632 "analysis.m"
    MR_Word analysis__V_40_40;

#line 625 "analysis.m"
    {
#line 625 "analysis.m"
      analysis__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(analysis__ModuleName_8, analysis__V_65_65);
    }
#line 625 "analysis.m"
    if (analysis__succeeded)
#line 626 "analysis.m"
      {
#line 626 "analysis.m"
      }
#line 625 "analysis.m"
    else
#line 628 "analysis.m"
      {
#line 628 "analysis.m"
        {
#line 628 "analysis.m"
          mercury__require__unexpected_3_p_0((MR_String) "analysis", (MR_String) "predicate \140analysis.record_result\'/7", (MR_String) "recording result for procedure defined in another module");
#line 628 "analysis.m"
          return;
        }
#line 628 "analysis.m"
      }
#line 632 "analysis.m"
    analysis__TypeClassInfo_for_compiler_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 0)));
#line 632 "analysis.m"
    analysis__V_32_32 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 1));
#line 632 "analysis.m"
    analysis__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 2)));
#line 632 "analysis.m"
    analysis__MakeAnalysisReg_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 3)));
#line 632 "analysis.m"
    analysis__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 4)));
#line 632 "analysis.m"
    analysis__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 5)));
#line 632 "analysis.m"
    analysis__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 6)));
#line 632 "analysis.m"
    analysis__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 7)));
#line 632 "analysis.m"
    analysis__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 8)));
#line 632 "analysis.m"
    analysis__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 9)));
#line 632 "analysis.m"
    analysis__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 10)));
#line 639 "analysis.m"
#line 639 "analysis.m"
    switch (analysis__MakeAnalysisReg_14) {
#line 639 "analysis.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 639 "analysis.m"
      case (MR_Integer) 0:
#line 634 "analysis.m"
        {
#line 634 "analysis.m"
          MR_Word analysis__Map0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 8)));
#line 634 "analysis.m"
          MR_Word analysis__Map_16;
#line 635 "analysis.m"
          MR_Word analysis__TypeClassInfo_for_compiler_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 0)));
#line 635 "analysis.m"
          MR_Box analysis__V_41_41 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 1));
#line 635 "analysis.m"
          MR_Word analysis__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 2)));
#line 635 "analysis.m"
          MR_Word analysis__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 3)));
#line 635 "analysis.m"
          MR_Word analysis__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 4)));
#line 635 "analysis.m"
          MR_Word analysis__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 5)));
#line 635 "analysis.m"
          MR_Word analysis__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 6)));
#line 635 "analysis.m"
          MR_Word analysis__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 7)));
#line 635 "analysis.m"
          MR_Word analysis__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 9)));
#line 635 "analysis.m"
          MR_Word analysis__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 10)));
#line 638 "analysis.m"
          MR_Word analysis__TypeClassInfo_for_compiler_64;
#line 638 "analysis.m"
          MR_Box analysis__V_50_50;
#line 638 "analysis.m"
          MR_Word analysis__V_51_51;
#line 638 "analysis.m"
          MR_Word analysis__V_52_52;
#line 638 "analysis.m"
          MR_Word analysis__V_53_53;
#line 638 "analysis.m"
          MR_Word analysis__V_54_54;
#line 638 "analysis.m"
          MR_Word analysis__V_55_55;
#line 638 "analysis.m"
          MR_Word analysis__V_56_56;
#line 638 "analysis.m"
          MR_Word analysis__V_58_58;
#line 638 "analysis.m"
          MR_Word analysis__V_59_59;
#line 638 "analysis.m"
          MR_Word analysis__V_57_57;

#line 636 "analysis.m"
          {
#line 636 "analysis.m"
            analysis__record_result_in_analysis_map_6_p_0(analysis__TypeClassInfo_for_analysis_60, analysis__FuncId_9, analysis__CallPattern_10, analysis__AnswerPattern_11, analysis__Status_12, analysis__Map0_15, &analysis__Map_16);
          }
#line 638 "analysis.m"
          analysis__TypeClassInfo_for_compiler_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 0)));
#line 638 "analysis.m"
          analysis__V_50_50 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 1));
#line 638 "analysis.m"
          analysis__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 2)));
#line 638 "analysis.m"
          analysis__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 3)));
#line 638 "analysis.m"
          analysis__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 4)));
#line 638 "analysis.m"
          analysis__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 5)));
#line 638 "analysis.m"
          analysis__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 6)));
#line 638 "analysis.m"
          analysis__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 7)));
#line 638 "analysis.m"
          analysis__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 8)));
#line 638 "analysis.m"
          analysis__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 9)));
#line 638 "analysis.m"
          analysis__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 10)));
#line 638 "analysis.m"
          {
#line 638 "analysis.m"
            MR_Word base;
#line 638 "analysis.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 638 "analysis.m"
            *analysis__STATE_VARIABLE_Info_18 = base;
#line 638 "analysis.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (analysis__TypeClassInfo_for_compiler_64));
#line 638 "analysis.m"
            MR_hl_field(MR_mktag(0), base, 1) = analysis__V_50_50;
#line 638 "analysis.m"
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (analysis__V_51_51));
#line 638 "analysis.m"
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (analysis__V_52_52));
#line 638 "analysis.m"
            MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (analysis__V_53_53));
#line 638 "analysis.m"
            MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (analysis__V_54_54));
#line 638 "analysis.m"
            MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (analysis__V_55_55));
#line 638 "analysis.m"
            MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (analysis__V_56_56));
#line 638 "analysis.m"
            MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (analysis__Map_16));
#line 638 "analysis.m"
            MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (analysis__V_58_58));
#line 638 "analysis.m"
            MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (analysis__V_59_59));
#line 638 "analysis.m"
          }
#line 634 "analysis.m"
        }
#line 639 "analysis.m"
        break;
#line 639 "analysis.m"
      case (MR_Integer) 1:
#line 640 "analysis.m"
        *analysis__STATE_VARIABLE_Info_18 = analysis__STATE_VARIABLE_Info_0_17;
#line 639 "analysis.m"
        break;
#line 639 "analysis.m"
    }
#line 624 "analysis.m"
  }
#line 235 "analysis.m"
}

#line 578 "analysis.m"
static void MR_CALL 
analysis__lookup_best_result_6_p_0_1(
#line 578 "analysis.m"
  MR_Box analysis__closure_arg,
#line 578 "analysis.m"
  MR_Box analysis__wrapper_arg_1,
#line 578 "analysis.m"
  MR_Box analysis__wrapper_arg_2,
#line 578 "analysis.m"
  MR_Box * analysis__wrapper_arg_3)
#line 578 "analysis.m"
{
#line 578 "analysis.m"
  {
#line 578 "analysis.m"
    MR_Box analysis__closure = analysis__closure_arg;
#line 578 "analysis.m"
    MR_Word analysis__conv0_Best_8;

#line 578 "analysis.m"
    {
#line 578 "analysis.m"
      analysis__more_precise_answer_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 3))), (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 4)), ((MR_Word) analysis__wrapper_arg_1), ((MR_Word) analysis__wrapper_arg_2), &analysis__conv0_Best_8);
    }
#line 578 "analysis.m"
    *analysis__wrapper_arg_3 = ((MR_Box) (analysis__conv0_Best_8));
#line 578 "analysis.m"
  }
#line 578 "analysis.m"
}

#line 227 "analysis.m"
void MR_CALL 
analysis__lookup_best_result_6_p_0(
#line 227 "analysis.m"
  MR_Word analysis__TypeClassInfo_for_analysis_35,
#line 227 "analysis.m"
  MR_Word analysis__Info_7,
#line 227 "analysis.m"
  MR_Word analysis__ModuleName_8,
#line 227 "analysis.m"
  MR_Word analysis__FuncId_9,
#line 227 "analysis.m"
  MR_Box analysis__FuncInfo_10,
#line 227 "analysis.m"
  MR_Box analysis__Call_11,
#line 227 "analysis.m"
  MR_Word * analysis__MaybeBestResult_12)
#line 227 "analysis.m"
{
#line 560 "analysis.m"
  {
#line 560 "analysis.m"
    MR_bool analysis__succeeded;
#line 560 "analysis.m"
    MR_Word analysis__MatchingResults_14;
#line 561 "analysis.m"
    MR_Word analysis__Debug_51;

#line 1387 "analysis.m"
{
#define MR_PROC_LABEL analysis__lookup_best_result_6_p_0


		{
#line 1387 "analysis.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&analysis__mutable_variable_debug_analysis_lock,
                    "analysis__mutable_variable_debug_analysis_lock");
#endif

#line 17664 "analysis.c"

		;}
#undef MR_PROC_LABEL
#line 1387 "analysis.m"
}
#line 1387 "analysis.m"
{
#define MR_PROC_LABEL analysis__lookup_best_result_6_p_0

	MR_Word X;

		{
#line 1387 "analysis.m"
X = analysis__mutable_variable_debug_analysis;

#line 17680 "analysis.c"

		;}
#undef MR_PROC_LABEL
	 analysis__Debug_51  = X;
#line 1387 "analysis.m"
}
#line 1387 "analysis.m"
{
#define MR_PROC_LABEL analysis__lookup_best_result_6_p_0


		{
#line 1387 "analysis.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&analysis__mutable_variable_debug_analysis_lock,
                    "analysis__mutable_variable_debug_analysis_lock");
#endif

#line 17699 "analysis.c"

		;}
#undef MR_PROC_LABEL
#line 1387 "analysis.m"
}
#line 1400 "analysis.m"
#line 1400 "analysis.m"
    switch (analysis__Debug_51) {
#line 1400 "analysis.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1400 "analysis.m"
      case (MR_Integer) 0:
#line 1401 "analysis.m"
        {
#line 1401 "analysis.m"
        }
#line 1400 "analysis.m"
        break;
#line 1400 "analysis.m"
      case (MR_Integer) 1:
#line 1399 "analysis.m"
        {
#line 1399 "analysis.m"
          analysis__IntroducedFrom__pred__lookup_best_result__562__1_4_p_0(analysis__ModuleName_8, analysis__FuncId_9);
        }
#line 1400 "analysis.m"
        break;
#line 1400 "analysis.m"
    }
#line 571 "analysis.m"
    {
#line 571 "analysis.m"
      analysis__lookup_matching_results_6_p_0(analysis__TypeClassInfo_for_analysis_35, analysis__Info_7, analysis__ModuleName_8, analysis__FuncId_9, analysis__FuncInfo_10, analysis__Call_11, &analysis__MatchingResults_14);
    }
#line 576 "analysis.m"
    if ((analysis__MatchingResults_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 575 "analysis.m"
      *analysis__MaybeBestResult_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 576 "analysis.m"
    else
#line 577 "analysis.m"
      {
#line 577 "analysis.m"
        MR_Word analysis__TypeInfo_42_42;
#line 577 "analysis.m"
        MR_Word analysis__TypeInfo_44_44;
#line 577 "analysis.m"
        MR_Word analysis__TypeInfo_46_46;
#line 577 "analysis.m"
        MR_Word analysis__Result_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), analysis__MatchingResults_14, (MR_Integer) 0)));
#line 577 "analysis.m"
        MR_Word analysis__Results_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), analysis__MatchingResults_14, (MR_Integer) 1)));
#line 577 "analysis.m"
        MR_Word analysis__BestResult_17;
#line 577 "analysis.m"
        MR_Word analysis__V_32_32;
#line 578 "analysis.m"
        MR_Box analysis__conv1_BestResult_17;

#line 578 "analysis.m"
        {
#line 578 "analysis.m"
          analysis__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 578 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__V_32_32, 0) = ((MR_Box) (&analysis_scalar_common_7[0]));
#line 578 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__V_32_32, 1) = ((MR_Box) (analysis__lookup_best_result_6_p_0_1));
#line 578 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__V_32_32, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 578 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__V_32_32, 3) = ((MR_Box) (analysis__TypeClassInfo_for_analysis_35));
#line 578 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__V_32_32, 4) = analysis__FuncInfo_10;
#line 578 "analysis.m"
        }
#line 578 "analysis.m"
        {
#line 578 "analysis.m"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_35, (MR_Integer) 4, &analysis__TypeInfo_42_42);
        }
#line 578 "analysis.m"
        {
#line 578 "analysis.m"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_35, (MR_Integer) 5, &analysis__TypeInfo_44_44);
        }
#line 17785 "analysis.c"
        {
#line 17787 "analysis.c"
          analysis__TypeInfo_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 17789 "analysis.c"
          MR_hl_field(MR_mktag(0), analysis__TypeInfo_46_46, 0) = ((MR_Box) (&analysis__analysis__type_ctor_info_analysis_result_2));
#line 17791 "analysis.c"
          MR_hl_field(MR_mktag(0), analysis__TypeInfo_46_46, 1) = ((MR_Box) (analysis__TypeInfo_42_42));
#line 17793 "analysis.c"
          MR_hl_field(MR_mktag(0), analysis__TypeInfo_46_46, 2) = ((MR_Box) (analysis__TypeInfo_44_44));
#line 17795 "analysis.c"
        }
#line 578 "analysis.m"
        {
#line 578 "analysis.m"
          mercury__list__foldl_4_p_0(analysis__TypeInfo_46_46, analysis__TypeInfo_46_46, (MR_Word) analysis__V_32_32, analysis__Results_16, ((MR_Box) (analysis__Result_15)), &analysis__conv1_BestResult_17);
        }
#line 578 "analysis.m"
        analysis__BestResult_17 = ((MR_Word) analysis__conv1_BestResult_17);
#line 579 "analysis.m"
        {
#line 579 "analysis.m"
          MR_Word base;
#line 579 "analysis.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 579 "analysis.m"
          *analysis__MaybeBestResult_12 = base;
#line 579 "analysis.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (analysis__BestResult_17));
#line 579 "analysis.m"
        }
#line 577 "analysis.m"
      }
#line 560 "analysis.m"
  }
#line 227 "analysis.m"
}

#line 551 "analysis.m"
static MR_bool MR_CALL 
analysis__lookup_matching_results_6_p_0_1(
#line 551 "analysis.m"
  MR_Box analysis__closure_arg,
#line 551 "analysis.m"
  MR_Box analysis__wrapper_arg_1)
#line 551 "analysis.m"
{
#line 551 "analysis.m"
  {
#line 551 "analysis.m"
    MR_bool analysis__succeeded;
#line 551 "analysis.m"
    MR_Box analysis__closure = analysis__closure_arg;

#line 551 "analysis.m"
    {
#line 551 "analysis.m"
      analysis__succeeded = analysis__IntroducedFrom__pred__lookup_matching_results__551__1_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 3))), (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 4)), (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 5)), ((MR_Word) analysis__wrapper_arg_1));
    }
#line 551 "analysis.m"
    return analysis__succeeded;
#line 551 "analysis.m"
  }
#line 551 "analysis.m"
}

#line 212 "analysis.m"
void MR_CALL 
analysis__lookup_matching_results_6_p_0(
#line 212 "analysis.m"
  MR_Word analysis__TypeClassInfo_for_analysis_21,
#line 212 "analysis.m"
  MR_Word analysis__Info_7,
#line 212 "analysis.m"
  MR_Word analysis__ModuleName_8,
#line 212 "analysis.m"
  MR_Word analysis__FuncId_9,
#line 212 "analysis.m"
  MR_Box analysis__FuncInfo_10,
#line 212 "analysis.m"
  MR_Box analysis__Call_11,
#line 212 "analysis.m"
  MR_Word * analysis__ResultList_12)
#line 212 "analysis.m"
{
#line 549 "analysis.m"
  {
#line 549 "analysis.m"
    MR_bool analysis__succeeded;
#line 549 "analysis.m"
    MR_Word analysis__TypeInfo_23_23;
#line 549 "analysis.m"
    MR_Word analysis__TypeInfo_25_25;
#line 549 "analysis.m"
    MR_Word analysis__TypeInfo_27_27;
#line 549 "analysis.m"
    MR_Word analysis__AllResultsList_13;
#line 549 "analysis.m"
    MR_Word analysis__V_16_16;

#line 489 "analysis.m"
    {
#line 489 "analysis.m"
      analysis__lookup_results_1_5_p_0(analysis__TypeClassInfo_for_analysis_21, analysis__Info_7, analysis__ModuleName_8, analysis__FuncId_9, (MR_Integer) 0, &analysis__AllResultsList_13);
    }
#line 551 "analysis.m"
    {
#line 551 "analysis.m"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_21, (MR_Integer) 4, &analysis__TypeInfo_23_23);
    }
#line 551 "analysis.m"
    {
#line 551 "analysis.m"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_21, (MR_Integer) 5, &analysis__TypeInfo_25_25);
    }
#line 17900 "analysis.c"
    {
#line 17902 "analysis.c"
      analysis__TypeInfo_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 17904 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_27_27, 0) = ((MR_Box) (&analysis__analysis__type_ctor_info_analysis_result_2));
#line 17906 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_27_27, 1) = ((MR_Box) (analysis__TypeInfo_23_23));
#line 17908 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_27_27, 2) = ((MR_Box) (analysis__TypeInfo_25_25));
#line 17910 "analysis.c"
    }
#line 551 "analysis.m"
    {
#line 551 "analysis.m"
      analysis__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 551 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_16_16, 0) = ((MR_Box) (&analysis_scalar_common_6[0]));
#line 551 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_16_16, 1) = ((MR_Box) (analysis__lookup_matching_results_6_p_0_1));
#line 551 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_16_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 551 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_16_16, 3) = ((MR_Box) (analysis__TypeClassInfo_for_analysis_21));
#line 551 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_16_16, 4) = analysis__FuncInfo_10;
#line 551 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_16_16, 5) = analysis__Call_11;
#line 551 "analysis.m"
    }
#line 551 "analysis.m"
    {
#line 551 "analysis.m"
      *analysis__ResultList_12 = mercury__list__filter_2_f_0(analysis__TypeInfo_27_27, analysis__V_16_16, analysis__AllResultsList_13);
    }
#line 549 "analysis.m"
  }
#line 212 "analysis.m"
}

#line 201 "analysis.m"
void MR_CALL 
analysis__lookup_results_4_p_0(
#line 201 "analysis.m"
  MR_Word analysis__TypeClassInfo_for_analysis_10,
#line 201 "analysis.m"
  MR_Word analysis__Info_5,
#line 201 "analysis.m"
  MR_Word analysis__ModuleName_6,
#line 201 "analysis.m"
  MR_Word analysis__FuncId_7,
#line 201 "analysis.m"
  MR_Word * analysis__ResultList_8)
#line 201 "analysis.m"
{
#line 487 "analysis.m"
  {
#line 487 "analysis.m"
    MR_bool analysis__succeeded;

#line 489 "analysis.m"
    {
#line 489 "analysis.m"
      analysis__lookup_results_1_5_p_0(analysis__TypeClassInfo_for_analysis_10, analysis__Info_5, analysis__ModuleName_6, analysis__FuncId_7, (MR_Integer) 0, analysis__ResultList_8);
    }
#line 487 "analysis.m"
  }
#line 201 "analysis.m"
}

#line 478 "analysis.m"
static MR_Box MR_CALL 
analysis__lookup_existing_call_patterns_5_p_0_1(
#line 478 "analysis.m"
  MR_Box analysis__closure_arg,
#line 478 "analysis.m"
  MR_Box analysis__wrapper_arg_1)
#line 478 "analysis.m"
{
#line 478 "analysis.m"
  {
#line 478 "analysis.m"
    MR_Box analysis__wrapper_arg_2;
#line 478 "analysis.m"
    MR_Box analysis__closure = analysis__closure_arg;

#line 478 "analysis.m"
    {
#line 478 "analysis.m"
      analysis__wrapper_arg_2 = analysis__IntroducedFrom__func__lookup_existing_call_patterns__478__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 3))), ((MR_Word) analysis__wrapper_arg_1));
    }
#line 478 "analysis.m"
    return analysis__wrapper_arg_2;
#line 478 "analysis.m"
  }
#line 478 "analysis.m"
}

#line 191 "analysis.m"
void MR_CALL 
analysis__lookup_existing_call_patterns_5_p_0(
#line 191 "analysis.m"
  MR_Word analysis__TypeClassInfo_for_call_pattern_46,
#line 191 "analysis.m"
  MR_Word analysis__Info_6,
#line 191 "analysis.m"
  MR_String analysis__AnalysisName_7,
#line 191 "analysis.m"
  MR_Word analysis__ModuleName_8,
#line 191 "analysis.m"
  MR_Word analysis__FuncId_9,
#line 191 "analysis.m"
  MR_Word * analysis__Calls_10)
#line 191 "analysis.m"
{
#line 466 "analysis.m"
  {
#line 466 "analysis.m"
    MR_bool analysis__succeeded;
#line 466 "analysis.m"
    MR_Word analysis__Map_11;
#line 467 "analysis.m"
    MR_Word analysis__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 2)));
#line 467 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_compiler_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 0)));
#line 467 "analysis.m"
    MR_Box analysis__V_28_28 = (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 1));
#line 467 "analysis.m"
    MR_Word analysis__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 3)));
#line 467 "analysis.m"
    MR_Word analysis__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 4)));
#line 467 "analysis.m"
    MR_Word analysis__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 5)));
#line 467 "analysis.m"
    MR_Word analysis__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 6)));
#line 467 "analysis.m"
    MR_Word analysis__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 7)));
#line 467 "analysis.m"
    MR_Word analysis__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 8)));
#line 467 "analysis.m"
    MR_Word analysis__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 9)));
#line 467 "analysis.m"
    MR_Word analysis__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 10)));
#line 472 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_compiler_48;
#line 472 "analysis.m"
    MR_Box analysis__V_37_37;
#line 472 "analysis.m"
    MR_Word analysis__V_38_38;
#line 472 "analysis.m"
    MR_Word analysis__V_39_39;
#line 472 "analysis.m"
    MR_Word analysis__V_40_40;
#line 472 "analysis.m"
    MR_Word analysis__V_41_41;
#line 472 "analysis.m"
    MR_Word analysis__V_42_42;
#line 472 "analysis.m"
    MR_Word analysis__V_43_43;
#line 472 "analysis.m"
    MR_Word analysis__V_44_44;
#line 472 "analysis.m"
    MR_Word analysis__V_45_45;
#line 473 "analysis.m"
    MR_Word analysis__Results_14;
#line 474 "analysis.m"
    MR_Word analysis__TypeCtorInfo_51_51;
#line 474 "analysis.m"
    MR_Word analysis__TypeInfo_52_52;
#line 474 "analysis.m"
    MR_Word analysis__TypeCtorInfo_53_53;
#line 474 "analysis.m"
    MR_Word analysis__TypeInfo_54_54;
#line 474 "analysis.m"
    MR_Word analysis__ModuleResults_12;
#line 474 "analysis.m"
    MR_Word analysis__AnalysisResults_13;
#line 474 "analysis.m"
    MR_Box analysis__conv0_ModuleResults_12;
#line 475 "analysis.m"
    MR_Box analysis__conv1_AnalysisResults_13;
#line 476 "analysis.m"
    MR_Box analysis__conv2_Results_14;

#line 467 "analysis.m"
    {
#line 467 "analysis.m"
      analysis__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(analysis__ModuleName_8, analysis__V_62_62);
    }
#line 467 "analysis.m"
    if (analysis__succeeded)
#line 468 "analysis.m"
      {
#line 468 "analysis.m"
      }
#line 467 "analysis.m"
    else
#line 470 "analysis.m"
      {
#line 470 "analysis.m"
        {
#line 470 "analysis.m"
          mercury__require__unexpected_3_p_0((MR_String) "analysis", (MR_String) "predicate \140analysis.lookup_existing_call_patterns\'/5", (MR_String) "not this_module");
#line 470 "analysis.m"
          return;
        }
#line 470 "analysis.m"
      }
#line 472 "analysis.m"
    analysis__TypeClassInfo_for_compiler_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 0)));
#line 472 "analysis.m"
    analysis__V_37_37 = (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 1));
#line 472 "analysis.m"
    analysis__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 2)));
#line 472 "analysis.m"
    analysis__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 3)));
#line 472 "analysis.m"
    analysis__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 4)));
#line 472 "analysis.m"
    analysis__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 5)));
#line 472 "analysis.m"
    analysis__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 6)));
#line 472 "analysis.m"
    analysis__Map_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 7)));
#line 472 "analysis.m"
    analysis__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 8)));
#line 472 "analysis.m"
    analysis__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 9)));
#line 472 "analysis.m"
    analysis__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 10)));
#line 474 "analysis.m"
    {
#line 474 "analysis.m"
      analysis__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &analysis_scalar_common_2[3], analysis__Map_11, ((MR_Box) (analysis__ModuleName_8)), &analysis__conv0_ModuleResults_12);
    }
#line 474 "analysis.m"
    if (analysis__succeeded)
#line 474 "analysis.m"
      {
#line 474 "analysis.m"
        analysis__ModuleResults_12 = ((MR_Word) analysis__conv0_ModuleResults_12);
#line 474 "analysis.m"
        analysis__succeeded = MR_TRUE;
#line 474 "analysis.m"
      }
#line 474 "analysis.m"
    if (analysis__succeeded)
#line 474 "analysis.m"
      {
#line 18149 "analysis.c"
        analysis__TypeCtorInfo_51_51 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 18151 "analysis.c"
        analysis__TypeInfo_52_52 = (MR_Word) &analysis_scalar_common_2[2];
#line 475 "analysis.m"
        {
#line 475 "analysis.m"
          analysis__succeeded = mercury__map__search_3_p_0(analysis__TypeCtorInfo_51_51, analysis__TypeInfo_52_52, analysis__ModuleResults_12, ((MR_Box) (analysis__AnalysisName_7)), &analysis__conv1_AnalysisResults_13);
        }
#line 475 "analysis.m"
        if (analysis__succeeded)
#line 475 "analysis.m"
          {
#line 475 "analysis.m"
            analysis__AnalysisResults_13 = ((MR_Word) analysis__conv1_AnalysisResults_13);
#line 475 "analysis.m"
            analysis__succeeded = MR_TRUE;
#line 475 "analysis.m"
          }
#line 474 "analysis.m"
        if (analysis__succeeded)
#line 474 "analysis.m"
          {
#line 18172 "analysis.c"
            analysis__TypeCtorInfo_53_53 = (MR_Word) &analysis__analysis__type_ctor_info_func_id_0;
#line 18174 "analysis.c"
            analysis__TypeInfo_54_54 = (MR_Word) &analysis_scalar_common_1[1];
#line 476 "analysis.m"
            {
#line 476 "analysis.m"
              analysis__succeeded = mercury__map__search_3_p_0(analysis__TypeCtorInfo_53_53, analysis__TypeInfo_54_54, analysis__AnalysisResults_13, ((MR_Box) (analysis__FuncId_9)), &analysis__conv2_Results_14);
            }
#line 476 "analysis.m"
            if (analysis__succeeded)
#line 476 "analysis.m"
              {
#line 476 "analysis.m"
                analysis__Results_14 = ((MR_Word) analysis__conv2_Results_14);
#line 476 "analysis.m"
                analysis__succeeded = MR_TRUE;
#line 476 "analysis.m"
              }
#line 474 "analysis.m"
          }
#line 474 "analysis.m"
      }
#line 473 "analysis.m"
    if (analysis__succeeded)
#line 478 "analysis.m"
      {
#line 478 "analysis.m"
        MR_Word analysis__TypeInfo_57_57;
#line 478 "analysis.m"
        MR_Word analysis__V_23_23;

#line 478 "analysis.m"
        {
#line 478 "analysis.m"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_call_pattern_46, (MR_Integer) 4, &analysis__TypeInfo_57_57);
        }
#line 478 "analysis.m"
        {
#line 478 "analysis.m"
          analysis__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 478 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__V_23_23, 0) = ((MR_Box) (&analysis_scalar_common_4[0]));
#line 478 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__V_23_23, 1) = ((MR_Box) (analysis__lookup_existing_call_patterns_5_p_0_1));
#line 478 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__V_23_23, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 478 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__V_23_23, 3) = ((MR_Box) (analysis__TypeClassInfo_for_call_pattern_46));
#line 478 "analysis.m"
        }
#line 478 "analysis.m"
        {
#line 478 "analysis.m"
          *analysis__Calls_10 = mercury__list__map_2_f_0((MR_Word) &analysis__analysis__type_ctor_info_some_analysis_result_0, analysis__TypeInfo_57_57, analysis__V_23_23, analysis__Results_14);
        }
#line 478 "analysis.m"
      }
#line 473 "analysis.m"
    else
#line 484 "analysis.m"
      *analysis__Calls_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 466 "analysis.m"
  }
#line 191 "analysis.m"
}

#line 179 "analysis.m"
MR_Word MR_CALL 
analysis__init_analysis_info_3_f_0(
#line 179 "analysis.m"
  MR_Word analysis__TypeClassInfo_for_compiler_17,
#line 179 "analysis.m"
  MR_Box analysis__Compiler_5,
#line 179 "analysis.m"
  MR_Word analysis__ThisModuleName_6,
#line 179 "analysis.m"
  MR_Word analysis__MakeAnalysisRegBool_7)
#line 179 "analysis.m"
{
#line 453 "analysis.m"
  {
#line 453 "analysis.m"
    MR_bool analysis__succeeded;
#line 453 "analysis.m"
    MR_Word analysis__Info_8;
#line 453 "analysis.m"
    MR_Word analysis__TypeCtorInfo_18_18;
#line 453 "analysis.m"
    MR_Word analysis__TypeInfo_24_24;
#line 453 "analysis.m"
    MR_Word analysis__MakeAnalysisReg_9;
#line 453 "analysis.m"
    MR_Word analysis__V_10_10;
#line 453 "analysis.m"
    MR_Word analysis__V_11_11;
#line 453 "analysis.m"
    MR_Word analysis__V_12_12;
#line 453 "analysis.m"
    MR_Word analysis__V_13_13;
#line 453 "analysis.m"
    MR_Word analysis__V_14_14;
#line 453 "analysis.m"
    MR_Word analysis__V_15_15;
#line 453 "analysis.m"
    MR_Word analysis__V_16_16;

#line 457 "analysis.m"
#line 457 "analysis.m"
    switch (analysis__MakeAnalysisRegBool_7) {
#line 457 "analysis.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 457 "analysis.m"
      case (MR_Integer) 0:
#line 459 "analysis.m"
        analysis__MakeAnalysisReg_9 = (MR_Integer) 1;
#line 457 "analysis.m"
        break;
#line 457 "analysis.m"
      case (MR_Integer) 1:
#line 456 "analysis.m"
        analysis__MakeAnalysisReg_9 = (MR_Integer) 0;
#line 457 "analysis.m"
        break;
#line 457 "analysis.m"
    }
#line 18298 "analysis.c"
    analysis__TypeCtorInfo_18_18 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 462 "analysis.m"
    {
#line 462 "analysis.m"
      analysis__V_10_10 = mercury__set__init_0_f_0(analysis__TypeCtorInfo_18_18);
    }
#line 462 "analysis.m"
    {
#line 462 "analysis.m"
      analysis__V_11_11 = mercury__map__init_0_f_0(analysis__TypeCtorInfo_18_18, (MR_Word) &analysis_scalar_common_2[1]);
    }
#line 462 "analysis.m"
    {
#line 462 "analysis.m"
      analysis__V_12_12 = mercury__map__init_0_f_0(analysis__TypeCtorInfo_18_18, (MR_Word) &analysis__analysis__type_ctor_info_analysis_status_0);
    }
#line 462 "analysis.m"
    {
#line 462 "analysis.m"
      analysis__V_13_13 = mercury__map__init_0_f_0(analysis__TypeCtorInfo_18_18, (MR_Word) &analysis_scalar_common_2[3]);
    }
#line 462 "analysis.m"
    {
#line 462 "analysis.m"
      analysis__V_14_14 = mercury__map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &analysis_scalar_common_2[2]);
    }
#line 18325 "analysis.c"
    analysis__TypeInfo_24_24 = (MR_Word) &analysis_scalar_common_2[5];
#line 462 "analysis.m"
    {
#line 462 "analysis.m"
      analysis__V_15_15 = mercury__map__init_0_f_0(analysis__TypeCtorInfo_18_18, analysis__TypeInfo_24_24);
    }
#line 462 "analysis.m"
    {
#line 462 "analysis.m"
      analysis__V_16_16 = mercury__map__init_0_f_0(analysis__TypeCtorInfo_18_18, analysis__TypeInfo_24_24);
    }
#line 461 "analysis.m"
    {
#line 461 "analysis.m"
      analysis__Info_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 461 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__Info_8, 0) = ((MR_Box) (analysis__TypeClassInfo_for_compiler_17));
#line 461 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__Info_8, 1) = analysis__Compiler_5;
#line 461 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__Info_8, 2) = ((MR_Box) (analysis__ThisModuleName_6));
#line 461 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__Info_8, 3) = ((MR_Box) (analysis__MakeAnalysisReg_9));
#line 461 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__Info_8, 4) = ((MR_Box) (analysis__V_10_10));
#line 461 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__Info_8, 5) = ((MR_Box) (analysis__V_11_11));
#line 461 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__Info_8, 6) = ((MR_Box) (analysis__V_12_12));
#line 461 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__Info_8, 7) = ((MR_Box) (analysis__V_13_13));
#line 461 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__Info_8, 8) = ((MR_Box) (analysis__V_14_14));
#line 461 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__Info_8, 9) = ((MR_Box) (analysis__V_15_15));
#line 461 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__Info_8, 10) = ((MR_Box) (analysis__V_16_16));
#line 461 "analysis.m"
    }
#line 453 "analysis.m"
    return analysis__Info_8;
#line 453 "analysis.m"
  }
#line 179 "analysis.m"
}

#line 165 "analysis.m"
MR_Word MR_CALL 
analysis__lub_2_f_0(
#line 165 "analysis.m"
  MR_Word analysis__StatusA_4,
#line 165 "analysis.m"
  MR_Word analysis__StatusB_5)
#line 165 "analysis.m"
{
#line 1348 "analysis.m"
  {
#line 1348 "analysis.m"
    MR_bool analysis__succeeded;
#line 1348 "analysis.m"
    MR_Word analysis__Status_6;
#line 1348 "analysis.m"
    MR_Word analysis__Cmp_7;
#line 1348 "analysis.m"
    MR_Integer analysis__V_9_9 = (MR_Integer) analysis__StatusA_4;
#line 1348 "analysis.m"
    MR_Integer analysis__V_10_10 = (MR_Integer) analysis__StatusB_5;

#line 1349 "analysis.m"
    {
#line 1349 "analysis.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(&analysis__Cmp_7, analysis__V_9_9, analysis__V_10_10);
    }
#line 1353 "analysis.m"
#line 1353 "analysis.m"
    switch (analysis__Cmp_7) {
#line 1353 "analysis.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1353 "analysis.m"
      case (MR_Integer) 1:
#line 1355 "analysis.m"
        analysis__Status_6 = analysis__StatusA_4;
#line 1353 "analysis.m"
        break;
#line 1353 "analysis.m"
      case (MR_Integer) 0:
#line 1352 "analysis.m"
        analysis__Status_6 = analysis__StatusA_4;
#line 1353 "analysis.m"
        break;
#line 1353 "analysis.m"
      case (MR_Integer) 2:
#line 1358 "analysis.m"
        analysis__Status_6 = analysis__StatusB_5;
#line 1353 "analysis.m"
        break;
#line 1353 "analysis.m"
    }
#line 1348 "analysis.m"
    return analysis__Status_6;
#line 1348 "analysis.m"
  }
#line 165 "analysis.m"
}

void mercury__analysis__init(void)
{
}

void mercury__analysis__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&analysis__analysis__type_ctor_info_analysis_info_0);
	MR_register_type_ctor_info(&analysis__analysis__type_ctor_info_analysis_map_1);
	MR_register_type_ctor_info(&analysis__analysis__type_ctor_info_analysis_name_0);
	MR_register_type_ctor_info(&analysis__analysis__type_ctor_info_analysis_request_0);
	MR_register_type_ctor_info(&analysis__analysis__type_ctor_info_analysis_result_2);
	MR_register_type_ctor_info(&analysis__analysis__type_ctor_info_analysis_status_0);
	MR_register_type_ctor_info(&analysis__analysis__type_ctor_info_analysis_type_0);
	MR_register_type_ctor_info(&analysis__analysis__type_ctor_info_any_call_0);
	MR_register_type_ctor_info(&analysis__analysis__type_ctor_info_fixpoint_type_0);
	MR_register_type_ctor_info(&analysis__analysis__type_ctor_info_func_analysis_map_1);
	MR_register_type_ctor_info(&analysis__analysis__type_ctor_info_func_id_0);
	MR_register_type_ctor_info(&analysis__analysis__type_ctor_info_imdg_arc_0);
	MR_register_type_ctor_info(&analysis__analysis__type_ctor_info_make_analysis_registry_0);
	MR_register_type_ctor_info(&analysis__analysis__type_ctor_info_module_analysis_map_1);
	MR_register_type_ctor_info(&analysis__analysis__type_ctor_info_no_func_info_0);
	MR_register_type_ctor_info(&analysis__analysis__type_ctor_info_some_analysis_result_0);
}

void mercury__analysis__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

void mercury__analysis__required_init(void)
{
	analysis__user_init_pred_0();
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module analysis. */
