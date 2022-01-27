/*
** Automatically generated from `analysis.m'
** by the Mercury compiler,
** version rotd-2015-06-22
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
#include "libs.file_util.mih"
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
#include "parse_tree.module_cmds.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 137 "analysis.c"
static const MR_FA_PseudoTypeInfo_Struct2 analysis__analysis__pti_analysis_result_2__pseudo_2__pseudo_3;

#line 140 "analysis.c"
static const MR_FA_PseudoTypeInfo_Struct2 analysis__analysis__pti_analysis_result_2__pseudo_1__pseudo_2;

#line 143 "analysis.c"
static const MR_FA_TypeInfo_Struct1 analysis__list__ti_list_1analysis__type_ctor_info_some_analysis_result_0;

#line 146 "analysis.c"
static const MR_FA_PseudoTypeInfo_Struct2 analysis__tree234__pti_tree234_2__plain_analysis__type_ctor_info_func_id_0__plain_list__ti_list_1analysis__type_ctor_info_some_analysis_result_0;

#line 149 "analysis.c"
static const MR_FA_PseudoTypeInfo_Struct1 analysis__list__pti_list_1__plain_analysis__type_ctor_info_some_analysis_result_0;

#line 152 "analysis.c"
static const MR_FA_TypeInfo_Struct1 analysis__list__ti_list_1analysis__type_ctor_info_imdg_arc_0;

#line 155 "analysis.c"
static const MR_FA_PseudoTypeInfo_Struct2 analysis__tree234__pti_tree234_2__plain_analysis__type_ctor_info_func_id_0__plain_list__ti_list_1analysis__type_ctor_info_imdg_arc_0;

#line 158 "analysis.c"
static const MR_FA_PseudoTypeInfo_Struct1 analysis__list__pti_list_1__plain_analysis__type_ctor_info_imdg_arc_0;

#line 161 "analysis.c"
static const MR_FA_TypeInfo_Struct1 analysis__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0;

#line 164 "analysis.c"
static const MR_FA_TypeInfo_Struct1 analysis__list__ti_list_1analysis__type_ctor_info_analysis_request_0;

#line 167 "analysis.c"
static const MR_FA_TypeInfo_Struct2 analysis__tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_analysis_request_0;

#line 170 "analysis.c"
static const MR_FA_TypeInfo_Struct2 analysis__tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_analysis_request_0;

#line 173 "analysis.c"
static const MR_FA_TypeInfo_Struct2 analysis__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_analysis_request_0;

#line 176 "analysis.c"
static const MR_FA_TypeInfo_Struct2 analysis__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0analysis__type_ctor_info_analysis_status_0;

#line 179 "analysis.c"
static const MR_FA_TypeInfo_Struct2 analysis__tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_some_analysis_result_0;

#line 182 "analysis.c"
static const MR_FA_TypeInfo_Struct2 analysis__tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_some_analysis_result_0;

#line 185 "analysis.c"
static const MR_FA_TypeInfo_Struct2 analysis__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_some_analysis_result_0;

#line 188 "analysis.c"
static const MR_FA_TypeInfo_Struct2 analysis__tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_imdg_arc_0;

#line 191 "analysis.c"
static const MR_FA_TypeInfo_Struct2 analysis__tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_imdg_arc_0;

#line 194 "analysis.c"
static const MR_FA_TypeInfo_Struct2 analysis__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_imdg_arc_0;

#line 197 "analysis.c"
static const MR_PseudoTypeInfo analysis__analysis__field_types_analysis_info_0_0[10];

#line 200 "analysis.c"
static const MR_ConstString analysis__analysis__field_names_analysis_info_0_0[10];

#line 203 "analysis.c"
static const MR_TypeClassConstraint_1Struct analysis__analysis__exist_tc_constr_analysis_info_0_0_1;

#line 206 "analysis.c"
static const MR_TypeClassConstraint analysis__analysis__exist_tc_constrs_analysis_info_0_0[1];

#line 209 "analysis.c"
static const MR_DuExistLocn analysis__analysis__exist_locns_analysis_info_0_0[1];

#line 212 "analysis.c"
static const MR_DuExistInfo analysis__analysis__exist_info_analysis_info_0_0;

#line 215 "analysis.c"
static const MR_DuFunctorDesc analysis__analysis__du_functor_desc_analysis_info_0_0;

#line 218 "analysis.c"
static const MR_DuFunctorDescPtr analysis__analysis__du_stag_ordered_analysis_info_0_0[1];

#line 221 "analysis.c"
static const MR_DuPtagLayout analysis__analysis__du_ptag_ordered_analysis_info_0[1];

#line 224 "analysis.c"
static const MR_DuFunctorDescPtr analysis__analysis__du_name_ordered_analysis_info_0[1];

#line 227 "analysis.c"
static const MR_Integer analysis__analysis__functor_number_map_analysis_info_0[1];

#line 230 "analysis.c"
static const MR_FA_PseudoTypeInfo_Struct1 analysis__list__pti_list_1__pseudo_1;

#line 233 "analysis.c"
static const MR_FA_PseudoTypeInfo_Struct2 analysis__tree234__pti_tree234_2__plain_analysis__type_ctor_info_func_id_0__pseudo_list__pti_list_1__pseudo_1;

#line 236 "analysis.c"
static const MR_FA_PseudoTypeInfo_Struct2 analysis__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__pseudo_tree234__pti_tree234_2__plain_analysis__type_ctor_info_func_id_0__pseudo_list__pti_list_1__pseudo_1;

#line 239 "analysis.c"
static const MR_FA_PseudoTypeInfo_Struct2 analysis__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__pseudo_tree234__pti_tree234_2__plain_analysis__type_ctor_info_func_id_0__pseudo_list__pti_list_1__pseudo_1;

#line 242 "analysis.c"
static const MR_PseudoTypeInfo analysis__analysis__field_types_analysis_request_0_0[2];

#line 245 "analysis.c"
static const MR_ConstString analysis__analysis__field_names_analysis_request_0_0[2];

#line 248 "analysis.c"
static const MR_TypeClassConstraint_2Struct analysis__analysis__exist_tc_constr_analysis_request_0_0_1;

#line 251 "analysis.c"
static const MR_TypeClassConstraint analysis__analysis__exist_tc_constrs_analysis_request_0_0[1];

#line 254 "analysis.c"
static const MR_DuExistLocn analysis__analysis__exist_locns_analysis_request_0_0[2];

#line 257 "analysis.c"
static const MR_DuExistInfo analysis__analysis__exist_info_analysis_request_0_0;

#line 260 "analysis.c"
static const MR_DuFunctorDesc analysis__analysis__du_functor_desc_analysis_request_0_0;

#line 263 "analysis.c"
static const MR_DuFunctorDescPtr analysis__analysis__du_stag_ordered_analysis_request_0_0[1];

#line 266 "analysis.c"
static const MR_DuPtagLayout analysis__analysis__du_ptag_ordered_analysis_request_0[1];

#line 269 "analysis.c"
static const MR_DuFunctorDescPtr analysis__analysis__du_name_ordered_analysis_request_0[1];

#line 272 "analysis.c"
static const MR_Integer analysis__analysis__functor_number_map_analysis_request_0[1];

#line 275 "analysis.c"
static const MR_PseudoTypeInfo analysis__analysis__field_types_analysis_result_2_0[3];

#line 278 "analysis.c"
static const MR_ConstString analysis__analysis__field_names_analysis_result_2_0[3];

#line 281 "analysis.c"
static const MR_DuFunctorDesc analysis__analysis__du_functor_desc_analysis_result_2_0;

#line 284 "analysis.c"
static const MR_DuFunctorDescPtr analysis__analysis__du_stag_ordered_analysis_result_2_0[1];

#line 287 "analysis.c"
static const MR_DuPtagLayout analysis__analysis__du_ptag_ordered_analysis_result_2[1];

#line 290 "analysis.c"
static const MR_DuFunctorDescPtr analysis__analysis__du_name_ordered_analysis_result_2[1];

#line 293 "analysis.c"
static const MR_Integer analysis__analysis__functor_number_map_analysis_result_2[1];

#line 296 "analysis.c"
static const MR_EnumFunctorDesc analysis__analysis__enum_functor_desc_analysis_status_0_0;

#line 299 "analysis.c"
static const MR_EnumFunctorDesc analysis__analysis__enum_functor_desc_analysis_status_0_1;

#line 302 "analysis.c"
static const MR_EnumFunctorDesc analysis__analysis__enum_functor_desc_analysis_status_0_2;

#line 305 "analysis.c"
static const MR_EnumFunctorDescPtr analysis__analysis__enum_value_ordered_analysis_status_0[3];

#line 308 "analysis.c"
static const MR_EnumFunctorDescPtr analysis__analysis__enum_name_ordered_analysis_status_0[3];

#line 311 "analysis.c"
static const MR_Integer analysis__analysis__functor_number_map_analysis_status_0[3];

#line 314 "analysis.c"
static const MR_FA_PseudoTypeInfo_Struct1 analysis__unit__pti_unit_1__pseudo_514;

#line 317 "analysis.c"
static const MR_FA_PseudoTypeInfo_Struct1 analysis__unit__pti_unit_1__pseudo_515;

#line 320 "analysis.c"
static const MR_PseudoTypeInfo analysis__analysis__field_types_analysis_type_0_0[2];

#line 323 "analysis.c"
static const MR_TypeClassConstraint_3Struct analysis__analysis__exist_tc_constr_analysis_type_0_0_1;

#line 326 "analysis.c"
static const MR_TypeClassConstraint analysis__analysis__exist_tc_constrs_analysis_type_0_0[1];

#line 329 "analysis.c"
static const MR_DuExistLocn analysis__analysis__exist_locns_analysis_type_0_0[3];

#line 332 "analysis.c"
static const MR_DuExistInfo analysis__analysis__exist_info_analysis_type_0_0;

#line 335 "analysis.c"
static const MR_DuFunctorDesc analysis__analysis__du_functor_desc_analysis_type_0_0;

#line 338 "analysis.c"
static const MR_DuFunctorDescPtr analysis__analysis__du_stag_ordered_analysis_type_0_0[1];

#line 341 "analysis.c"
static const MR_DuPtagLayout analysis__analysis__du_ptag_ordered_analysis_type_0[1];

#line 344 "analysis.c"
static const MR_DuFunctorDescPtr analysis__analysis__du_name_ordered_analysis_type_0[1];

#line 347 "analysis.c"
static const MR_Integer analysis__analysis__functor_number_map_analysis_type_0[1];

#line 350 "analysis.c"
static const MR_EnumFunctorDesc analysis__analysis__enum_functor_desc_any_call_0_0;

#line 353 "analysis.c"
static const MR_EnumFunctorDescPtr analysis__analysis__enum_value_ordered_any_call_0[1];

#line 356 "analysis.c"
static const MR_EnumFunctorDescPtr analysis__analysis__enum_name_ordered_any_call_0[1];

#line 359 "analysis.c"
static const MR_Integer analysis__analysis__functor_number_map_any_call_0[1];

#line 362 "analysis.c"
static const MR_EnumFunctorDesc analysis__analysis__enum_functor_desc_fixpoint_type_0_0;

#line 365 "analysis.c"
static const MR_EnumFunctorDesc analysis__analysis__enum_functor_desc_fixpoint_type_0_1;

#line 368 "analysis.c"
static const MR_EnumFunctorDescPtr analysis__analysis__enum_value_ordered_fixpoint_type_0[2];

#line 371 "analysis.c"
static const MR_EnumFunctorDescPtr analysis__analysis__enum_name_ordered_fixpoint_type_0[2];

#line 374 "analysis.c"
static const MR_Integer analysis__analysis__functor_number_map_fixpoint_type_0[2];

#line 377 "analysis.c"
static const MR_PseudoTypeInfo analysis__analysis__field_types_func_id_0_0[4];

#line 380 "analysis.c"
static const MR_ConstString analysis__analysis__field_names_func_id_0_0[4];

#line 383 "analysis.c"
static const MR_DuFunctorDesc analysis__analysis__du_functor_desc_func_id_0_0;

#line 386 "analysis.c"
static const MR_DuFunctorDescPtr analysis__analysis__du_stag_ordered_func_id_0_0[1];

#line 389 "analysis.c"
static const MR_DuPtagLayout analysis__analysis__du_ptag_ordered_func_id_0[1];

#line 392 "analysis.c"
static const MR_DuFunctorDescPtr analysis__analysis__du_name_ordered_func_id_0[1];

#line 395 "analysis.c"
static const MR_Integer analysis__analysis__functor_number_map_func_id_0[1];

#line 398 "analysis.c"
static const MR_PseudoTypeInfo analysis__analysis__field_types_imdg_arc_0_0[2];

#line 401 "analysis.c"
static const MR_ConstString analysis__analysis__field_names_imdg_arc_0_0[2];

#line 404 "analysis.c"
static const MR_TypeClassConstraint_2Struct analysis__analysis__exist_tc_constr_imdg_arc_0_0_1;

#line 407 "analysis.c"
static const MR_TypeClassConstraint analysis__analysis__exist_tc_constrs_imdg_arc_0_0[1];

#line 410 "analysis.c"
static const MR_DuExistLocn analysis__analysis__exist_locns_imdg_arc_0_0[2];

#line 413 "analysis.c"
static const MR_DuExistInfo analysis__analysis__exist_info_imdg_arc_0_0;

#line 416 "analysis.c"
static const MR_DuFunctorDesc analysis__analysis__du_functor_desc_imdg_arc_0_0;

#line 419 "analysis.c"
static const MR_DuFunctorDescPtr analysis__analysis__du_stag_ordered_imdg_arc_0_0[1];

#line 422 "analysis.c"
static const MR_DuPtagLayout analysis__analysis__du_ptag_ordered_imdg_arc_0[1];

#line 425 "analysis.c"
static const MR_DuFunctorDescPtr analysis__analysis__du_name_ordered_imdg_arc_0[1];

#line 428 "analysis.c"
static const MR_Integer analysis__analysis__functor_number_map_imdg_arc_0[1];

#line 431 "analysis.c"
static const MR_EnumFunctorDesc analysis__analysis__enum_functor_desc_make_analysis_registry_0_0;

#line 434 "analysis.c"
static const MR_EnumFunctorDesc analysis__analysis__enum_functor_desc_make_analysis_registry_0_1;

#line 437 "analysis.c"
static const MR_EnumFunctorDescPtr analysis__analysis__enum_value_ordered_make_analysis_registry_0[2];

#line 440 "analysis.c"
static const MR_EnumFunctorDescPtr analysis__analysis__enum_name_ordered_make_analysis_registry_0[2];

#line 443 "analysis.c"
static const MR_Integer analysis__analysis__functor_number_map_make_analysis_registry_0[2];

#line 446 "analysis.c"
static const MR_EnumFunctorDesc analysis__analysis__enum_functor_desc_no_func_info_0_0;

#line 449 "analysis.c"
static const MR_EnumFunctorDescPtr analysis__analysis__enum_value_ordered_no_func_info_0[1];

#line 452 "analysis.c"
static const MR_EnumFunctorDescPtr analysis__analysis__enum_name_ordered_no_func_info_0[1];

#line 455 "analysis.c"
static const MR_Integer analysis__analysis__functor_number_map_no_func_info_0[1];

#line 458 "analysis.c"
static const MR_PseudoTypeInfo analysis__analysis__field_types_some_analysis_result_0_0[3];

#line 461 "analysis.c"
static const MR_ConstString analysis__analysis__field_names_some_analysis_result_0_0[3];

#line 464 "analysis.c"
static const MR_TypeClassConstraint_3Struct analysis__analysis__exist_tc_constr_some_analysis_result_0_0_1;

#line 467 "analysis.c"
static const MR_TypeClassConstraint analysis__analysis__exist_tc_constrs_some_analysis_result_0_0[1];

#line 470 "analysis.c"
static const MR_DuExistLocn analysis__analysis__exist_locns_some_analysis_result_0_0[3];

#line 473 "analysis.c"
static const MR_DuExistInfo analysis__analysis__exist_info_some_analysis_result_0_0;

#line 476 "analysis.c"
static const MR_DuFunctorDesc analysis__analysis__du_functor_desc_some_analysis_result_0_0;

#line 479 "analysis.c"
static const MR_DuFunctorDescPtr analysis__analysis__du_stag_ordered_some_analysis_result_0_0[1];

#line 482 "analysis.c"
static const MR_DuPtagLayout analysis__analysis__du_ptag_ordered_some_analysis_result_0[1];

#line 485 "analysis.c"
static const MR_DuFunctorDescPtr analysis__analysis__du_name_ordered_some_analysis_result_0[1];

#line 488 "analysis.c"
static const MR_Integer analysis__analysis__functor_number_map_some_analysis_result_0[1];

#line 491 "analysis.c"
static const MR_ConstString analysis__analysis__type_class_id_var_names_to_term_1[1];

#line 494 "analysis.c"
static const MR_TypeClassMethod analysis__analysis__type_class_id_method_ids_to_term_1[2];

#line 497 "analysis.c"
static const MR_TypeClassId analysis__analysis__type_class_id_to_term_1;

#line 500 "analysis.c"
static const MR_ConstString analysis__analysis__type_class_id_var_names_partial_order_2[2];

#line 503 "analysis.c"
static const MR_TypeClassMethod analysis__analysis__type_class_id_method_ids_partial_order_2[2];

#line 506 "analysis.c"
static const MR_TypeClassId analysis__analysis__type_class_id_partial_order_2;

#line 509 "analysis.c"
static const MR_ConstString analysis__analysis__type_class_id_var_names_compiler_1[1];

#line 512 "analysis.c"
static const MR_TypeClassMethod analysis__analysis__type_class_id_method_ids_compiler_1[4];

#line 515 "analysis.c"
static const MR_TypeClassId analysis__analysis__type_class_id_compiler_1;

#line 518 "analysis.c"
static const MR_ConstString analysis__analysis__type_class_id_var_names_call_pattern_2[2];

#line 521 "analysis.c"
static const MR_TypeClassId analysis__analysis__type_class_id_call_pattern_2;

#line 524 "analysis.c"
static const MR_TypeClassConstraint_2Struct analysis__analysis__type_class_decl_super_call_pattern_2_1;

#line 527 "analysis.c"
static const MR_TypeClassConstraint_1Struct analysis__analysis__type_class_decl_super_call_pattern_2_2;

#line 530 "analysis.c"
static const MR_TypeClassConstraint analysis__analysis__type_class_decl_supers_call_pattern_2[2];

#line 533 "analysis.c"
static const MR_ConstString analysis__analysis__type_class_id_var_names_answer_pattern_2[2];

#line 536 "analysis.c"
static const MR_TypeClassId analysis__analysis__type_class_id_answer_pattern_2;

#line 539 "analysis.c"
static const MR_TypeClassConstraint_2Struct analysis__analysis__type_class_decl_super_answer_pattern_2_1;

#line 542 "analysis.c"
static const MR_TypeClassConstraint_1Struct analysis__analysis__type_class_decl_super_answer_pattern_2_2;

#line 545 "analysis.c"
static const MR_TypeClassConstraint analysis__analysis__type_class_decl_supers_answer_pattern_2[2];

#line 548 "analysis.c"
static const MR_ConstString analysis__analysis__type_class_id_var_names_analysis_3[3];

#line 551 "analysis.c"
static const MR_TypeClassMethod analysis__analysis__type_class_id_method_ids_analysis_3[6];

#line 554 "analysis.c"
static const MR_TypeClassId analysis__analysis__type_class_id_analysis_3;

#line 557 "analysis.c"
static const MR_TypeClassConstraint_2Struct analysis__analysis__type_class_decl_super_analysis_3_1;

#line 560 "analysis.c"
static const MR_TypeClassConstraint_2Struct analysis__analysis__type_class_decl_super_analysis_3_2;

#line 563 "analysis.c"
static const MR_TypeClassConstraint analysis__analysis__type_class_decl_supers_analysis_3[2];

#line 566 "analysis.c"
static MR_bool MR_CALL 
analysis____Unify____analysis_info_0_0_10001(
#line 569 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 571 "analysis.c"
  MR_Box analysis__wrapper_arg_2);

#line 574 "analysis.c"
static void MR_CALL 
analysis____Compare____analysis_info_0_0_10001(
#line 577 "analysis.c"
  MR_Box * analysis__wrapper_arg_1,
#line 579 "analysis.c"
  MR_Box analysis__wrapper_arg_2,
#line 581 "analysis.c"
  MR_Box analysis__wrapper_arg_3);

#line 584 "analysis.c"
static MR_bool MR_CALL 
analysis____Unify____analysis_map_1_0_10001(
#line 587 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 589 "analysis.c"
  MR_Box analysis__wrapper_arg_2,
#line 591 "analysis.c"
  MR_Box analysis__wrapper_arg_3);

#line 594 "analysis.c"
static void MR_CALL 
analysis____Compare____analysis_map_1_0_10001(
#line 597 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 599 "analysis.c"
  MR_Box * analysis__wrapper_arg_2,
#line 601 "analysis.c"
  MR_Box analysis__wrapper_arg_3,
#line 603 "analysis.c"
  MR_Box analysis__wrapper_arg_4);

#line 606 "analysis.c"
static MR_bool MR_CALL 
analysis____Unify____analysis_name_0_0_10001(
#line 609 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 611 "analysis.c"
  MR_Box analysis__wrapper_arg_2);

#line 614 "analysis.c"
static void MR_CALL 
analysis____Compare____analysis_name_0_0_10001(
#line 617 "analysis.c"
  MR_Box * analysis__wrapper_arg_1,
#line 619 "analysis.c"
  MR_Box analysis__wrapper_arg_2,
#line 621 "analysis.c"
  MR_Box analysis__wrapper_arg_3);

#line 624 "analysis.c"
static MR_bool MR_CALL 
analysis____Unify____analysis_request_0_0_10001(
#line 627 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 629 "analysis.c"
  MR_Box analysis__wrapper_arg_2);

#line 632 "analysis.c"
static void MR_CALL 
analysis____Compare____analysis_request_0_0_10001(
#line 635 "analysis.c"
  MR_Box * analysis__wrapper_arg_1,
#line 637 "analysis.c"
  MR_Box analysis__wrapper_arg_2,
#line 639 "analysis.c"
  MR_Box analysis__wrapper_arg_3);

#line 642 "analysis.c"
static MR_bool MR_CALL 
analysis____Unify____analysis_result_2_0_10001(
#line 645 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 647 "analysis.c"
  MR_Box analysis__wrapper_arg_2,
#line 649 "analysis.c"
  MR_Box analysis__wrapper_arg_3,
#line 651 "analysis.c"
  MR_Box analysis__wrapper_arg_4);

#line 654 "analysis.c"
static void MR_CALL 
analysis____Compare____analysis_result_2_0_10001(
#line 657 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 659 "analysis.c"
  MR_Box analysis__wrapper_arg_2,
#line 661 "analysis.c"
  MR_Box * analysis__wrapper_arg_3,
#line 663 "analysis.c"
  MR_Box analysis__wrapper_arg_4,
#line 665 "analysis.c"
  MR_Box analysis__wrapper_arg_5);

#line 668 "analysis.c"
static MR_bool MR_CALL 
analysis____Unify____analysis_status_0_0_10001(
#line 671 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 673 "analysis.c"
  MR_Box analysis__wrapper_arg_2);

#line 676 "analysis.c"
static void MR_CALL 
analysis____Compare____analysis_status_0_0_10001(
#line 679 "analysis.c"
  MR_Box * analysis__wrapper_arg_1,
#line 681 "analysis.c"
  MR_Box analysis__wrapper_arg_2,
#line 683 "analysis.c"
  MR_Box analysis__wrapper_arg_3);

#line 686 "analysis.c"
static MR_bool MR_CALL 
analysis____Unify____analysis_type_0_0_10001(
#line 689 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 691 "analysis.c"
  MR_Box analysis__wrapper_arg_2);

#line 694 "analysis.c"
static void MR_CALL 
analysis____Compare____analysis_type_0_0_10001(
#line 697 "analysis.c"
  MR_Box * analysis__wrapper_arg_1,
#line 699 "analysis.c"
  MR_Box analysis__wrapper_arg_2,
#line 701 "analysis.c"
  MR_Box analysis__wrapper_arg_3);

#line 704 "analysis.c"
static MR_bool MR_CALL 
analysis____Unify____any_call_0_0_10001(
#line 707 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 709 "analysis.c"
  MR_Box analysis__wrapper_arg_2);

#line 712 "analysis.c"
static void MR_CALL 
analysis____Compare____any_call_0_0_10001(
#line 715 "analysis.c"
  MR_Box * analysis__wrapper_arg_1,
#line 717 "analysis.c"
  MR_Box analysis__wrapper_arg_2,
#line 719 "analysis.c"
  MR_Box analysis__wrapper_arg_3);

#line 722 "analysis.c"
static MR_bool MR_CALL 
analysis____Unify____fixpoint_type_0_0_10001(
#line 725 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 727 "analysis.c"
  MR_Box analysis__wrapper_arg_2);

#line 730 "analysis.c"
static void MR_CALL 
analysis____Compare____fixpoint_type_0_0_10001(
#line 733 "analysis.c"
  MR_Box * analysis__wrapper_arg_1,
#line 735 "analysis.c"
  MR_Box analysis__wrapper_arg_2,
#line 737 "analysis.c"
  MR_Box analysis__wrapper_arg_3);

#line 740 "analysis.c"
static MR_bool MR_CALL 
analysis____Unify____func_analysis_map_1_0_10001(
#line 743 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 745 "analysis.c"
  MR_Box analysis__wrapper_arg_2,
#line 747 "analysis.c"
  MR_Box analysis__wrapper_arg_3);

#line 750 "analysis.c"
static void MR_CALL 
analysis____Compare____func_analysis_map_1_0_10001(
#line 753 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 755 "analysis.c"
  MR_Box * analysis__wrapper_arg_2,
#line 757 "analysis.c"
  MR_Box analysis__wrapper_arg_3,
#line 759 "analysis.c"
  MR_Box analysis__wrapper_arg_4);

#line 762 "analysis.c"
static MR_bool MR_CALL 
analysis____Unify____func_id_0_0_10001(
#line 765 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 767 "analysis.c"
  MR_Box analysis__wrapper_arg_2);

#line 770 "analysis.c"
static void MR_CALL 
analysis____Compare____func_id_0_0_10001(
#line 773 "analysis.c"
  MR_Box * analysis__wrapper_arg_1,
#line 775 "analysis.c"
  MR_Box analysis__wrapper_arg_2,
#line 777 "analysis.c"
  MR_Box analysis__wrapper_arg_3);

#line 780 "analysis.c"
static MR_bool MR_CALL 
analysis____Unify____imdg_arc_0_0_10001(
#line 783 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 785 "analysis.c"
  MR_Box analysis__wrapper_arg_2);

#line 788 "analysis.c"
static void MR_CALL 
analysis____Compare____imdg_arc_0_0_10001(
#line 791 "analysis.c"
  MR_Box * analysis__wrapper_arg_1,
#line 793 "analysis.c"
  MR_Box analysis__wrapper_arg_2,
#line 795 "analysis.c"
  MR_Box analysis__wrapper_arg_3);

#line 798 "analysis.c"
static MR_bool MR_CALL 
analysis____Unify____make_analysis_registry_0_0_10001(
#line 801 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 803 "analysis.c"
  MR_Box analysis__wrapper_arg_2);

#line 806 "analysis.c"
static void MR_CALL 
analysis____Compare____make_analysis_registry_0_0_10001(
#line 809 "analysis.c"
  MR_Box * analysis__wrapper_arg_1,
#line 811 "analysis.c"
  MR_Box analysis__wrapper_arg_2,
#line 813 "analysis.c"
  MR_Box analysis__wrapper_arg_3);

#line 816 "analysis.c"
static MR_bool MR_CALL 
analysis____Unify____module_analysis_map_1_0_10001(
#line 819 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 821 "analysis.c"
  MR_Box analysis__wrapper_arg_2,
#line 823 "analysis.c"
  MR_Box analysis__wrapper_arg_3);

#line 826 "analysis.c"
static void MR_CALL 
analysis____Compare____module_analysis_map_1_0_10001(
#line 829 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 831 "analysis.c"
  MR_Box * analysis__wrapper_arg_2,
#line 833 "analysis.c"
  MR_Box analysis__wrapper_arg_3,
#line 835 "analysis.c"
  MR_Box analysis__wrapper_arg_4);

#line 838 "analysis.c"
static MR_bool MR_CALL 
analysis____Unify____no_func_info_0_0_10001(
#line 841 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 843 "analysis.c"
  MR_Box analysis__wrapper_arg_2);

#line 846 "analysis.c"
static void MR_CALL 
analysis____Compare____no_func_info_0_0_10001(
#line 849 "analysis.c"
  MR_Box * analysis__wrapper_arg_1,
#line 851 "analysis.c"
  MR_Box analysis__wrapper_arg_2,
#line 853 "analysis.c"
  MR_Box analysis__wrapper_arg_3);

#line 856 "analysis.c"
static MR_bool MR_CALL 
analysis____Unify____some_analysis_result_0_0_10001(
#line 859 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 861 "analysis.c"
  MR_Box analysis__wrapper_arg_2);

#line 864 "analysis.c"
static void MR_CALL 
analysis____Compare____some_analysis_result_0_0_10001(
#line 867 "analysis.c"
  MR_Box * analysis__wrapper_arg_1,
#line 869 "analysis.c"
  MR_Box analysis__wrapper_arg_2,
#line 871 "analysis.c"
  MR_Box analysis__wrapper_arg_3);

#line 874 "analysis.c"
static MR_Box MR_CALL 
analysis__ClassMethod_for_analysis__to_term____analysis__any_call__arity0______analysis__to_term_1_1_f_0_10001(
#line 877 "analysis.c"
  MR_Box analysis__closure_arg,
#line 879 "analysis.c"
  MR_Box analysis__wrapper_arg_1);

#line 882 "analysis.c"
static MR_bool MR_CALL 
analysis__ClassMethod_for_analysis__to_term____analysis__any_call__arity0______analysis__from_term_2_2_p_0_10001(
#line 885 "analysis.c"
  MR_Box analysis__closure_arg,
#line 887 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 889 "analysis.c"
  MR_Box * analysis__wrapper_arg_2);

#line 892 "analysis.c"
static MR_bool MR_CALL 
analysis__ClassMethod_for_analysis__partial_order____analysis__no_func_info__arity0__analysis__any_call__arity0______analysis__more_precise_than_3_3_p_0_10001(
#line 895 "analysis.c"
  MR_Box analysis__closure_arg,
#line 897 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 899 "analysis.c"
  MR_Box analysis__wrapper_arg_2,
#line 901 "analysis.c"
  MR_Box analysis__wrapper_arg_3);

#line 904 "analysis.c"
static MR_bool MR_CALL 
analysis__ClassMethod_for_analysis__partial_order____analysis__no_func_info__arity0__analysis__any_call__arity0______analysis__equivalent_3_3_p_0_10001(
#line 907 "analysis.c"
  MR_Box analysis__closure_arg,
#line 909 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 911 "analysis.c"
  MR_Box analysis__wrapper_arg_2,
#line 913 "analysis.c"
  MR_Box analysis__wrapper_arg_3);

#line 1387 "analysis.m"
static void MR_CALL 
analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_109_115_103_95_95_104_111_54_95_95_91_51_93_95_48_3_p_0(
#line 1387 "analysis.m"
  MR_Word analysis__V_11_11,
#line 1387 "analysis.m"
  MR_Word analysis__V_12_12);

#line 1387 "analysis.m"
static void MR_CALL 
analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_109_115_103_95_95_104_111_52_95_95_91_54_93_95_48_3_p_0(
#line 1387 "analysis.m"
  MR_Word analysis__V_11_11,
#line 1387 "analysis.m"
  MR_Word analysis__V_12_12,
#line 1387 "analysis.m"
  MR_Word analysis__V_13_13,
#line 1387 "analysis.m"
  MR_Box analysis__V_14_14,
#line 1387 "analysis.m"
  MR_Box analysis__V_15_15);

#line 1387 "analysis.m"
static void MR_CALL 
analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_109_115_103_95_95_104_111_51_95_95_91_54_93_95_48_3_p_0(
#line 1387 "analysis.m"
  MR_Word analysis__V_11_11,
#line 1387 "analysis.m"
  MR_Box analysis__V_12_12,
#line 1387 "analysis.m"
  MR_Box analysis__V_13_13,
#line 1387 "analysis.m"
  MR_Word analysis__V_14_14,
#line 1387 "analysis.m"
  MR_Word analysis__V_15_15);

#line 1387 "analysis.m"
static void MR_CALL 
analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_109_115_103_95_95_104_111_49_95_95_91_51_93_95_48_3_p_0(
#line 1387 "analysis.m"
  MR_Word analysis__V_11_11,
#line 1387 "analysis.m"
  MR_Word analysis__V_12_12);

#line 1373 "analysis.m"
static MR_Box MR_CALL 
analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_108_117_98_95_114_101_115_117_108_116_95_115_116_97_116_117_115_101_115_95_51_95_95_91_49_93_95_48_3_f_0_1(
#line 1373 "analysis.m"
  MR_Box analysis__closure_arg,
#line 1373 "analysis.m"
  MR_Box analysis__wrapper_arg_1,
#line 1373 "analysis.m"
  MR_Box analysis__wrapper_arg_2);

#line 1367 "analysis.m"
static MR_Box MR_CALL 
analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_108_117_98_95_114_101_115_117_108_116_95_115_116_97_116_117_115_101_115_95_50_95_95_91_49_93_95_48_3_f_0_1(
#line 1367 "analysis.m"
  MR_Box analysis__closure_arg,
#line 1367 "analysis.m"
  MR_Box analysis__wrapper_arg_1,
#line 1367 "analysis.m"
  MR_Box analysis__wrapper_arg_2,
#line 1367 "analysis.m"
  MR_Box analysis__wrapper_arg_3);

#line 1173 "analysis.m"
static MR_bool MR_CALL 
analysis__IntroducedFrom__pred__clear_imdg_entries_pointing_at_3__1173__1_2_p_0(
#line 1173 "analysis.m"
  MR_Word analysis__ModuleName_4,
#line 1173 "analysis.m"
  MR_Word analysis__HeadVar__2_9);

#line 954 "analysis.m"
static MR_bool MR_CALL 
analysis__IntroducedFrom__func__update_analysis_registry_5__954__1_1_f_0(
#line 954 "analysis.m"
  MR_Word analysis__HeadVar__1_61,
#line 954 "analysis.m"
  MR_Word * analysis__HeadVar__2_62);

#line 925 "analysis.m"
static void MR_CALL 
analysis__IntroducedFrom__pred__update_analysis_registry_5__925__1_7_p_0(
#line 925 "analysis.m"
  MR_Word analysis__TypeClassInfo_for_analysis_158,
#line 925 "analysis.m"
  MR_Box analysis__NewAnswer_18,
#line 925 "analysis.m"
  MR_Box analysis__OldAnswer_25,
#line 925 "analysis.m"
  MR_Word analysis__Status_29,
#line 925 "analysis.m"
  MR_Word analysis__DepModules_31);

#line 896 "analysis.m"
static void MR_CALL 
analysis__IntroducedFrom__pred__update_analysis_registry_5__896__1_7_p_0(
#line 896 "analysis.m"
  MR_Word analysis__TypeClassInfo_for_analysis_158,
#line 896 "analysis.m"
  MR_Word analysis__ModuleName_11,
#line 896 "analysis.m"
  MR_Word analysis__FuncId_13,
#line 896 "analysis.m"
  MR_Box analysis__Call_17,
#line 896 "analysis.m"
  MR_Box analysis__NewAnswer_18);

#line 605 "analysis.m"
static MR_bool MR_CALL 
analysis__IntroducedFrom__pred__lookup_exactly_matching_result_even_from_invalid_modules__605__1_4_p_0(
#line 605 "analysis.m"
  MR_Word analysis__TypeClassInfo_for_analysis_32,
#line 605 "analysis.m"
  MR_Box analysis__FuncInfo_10,
#line 605 "analysis.m"
  MR_Box analysis__Call_11,
#line 605 "analysis.m"
  MR_Word analysis__HeadVar__4_22);

#line 538 "analysis.m"
static MR_Word MR_CALL 
analysis__IntroducedFrom__func__lookup_results_2__538__1_2_f_0(
#line 538 "analysis.m"
  MR_Word analysis__TypeClassInfo_for_analysis_29,
#line 538 "analysis.m"
  MR_Word analysis__HeadVar__2_24);

#line 518 "analysis.m"
static void MR_CALL 
analysis__IntroducedFrom__pred__lookup_results_1__518__1_4_p_0(
#line 518 "analysis.m"
  MR_Word analysis__TypeClassInfo_for_analysis_62,
#line 518 "analysis.m"
  MR_Word analysis__ResultList_10);

#line 501 "analysis.m"
static void MR_CALL 
analysis__IntroducedFrom__pred__lookup_results_1__501__1_4_p_0(
#line 501 "analysis.m"
  MR_Word analysis__ModuleName_7,
#line 501 "analysis.m"
  MR_Word analysis__FuncId_8);

#line 679 "analysis.m"
static MR_bool MR_CALL 
analysis__IntroducedFrom__func__lookup_requests__679__1_2_f_0(
#line 679 "analysis.m"
  MR_Word analysis__TypeClassInfo_for_call_pattern_47,
#line 679 "analysis.m"
  MR_Word analysis__HeadVar__2_23,
#line 679 "analysis.m"
  MR_Box * analysis__HeadVar__3_24);

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
  MR_Word analysis__HeadVar__4_17);

#line 481 "analysis.m"
static MR_Box MR_CALL 
analysis__IntroducedFrom__func__lookup_existing_call_patterns__481__1_2_f_0(
#line 481 "analysis.m"
  MR_Word analysis__TypeClassInfo_for_call_pattern_46,
#line 481 "analysis.m"
  MR_Word analysis__HeadVar__2_24);

#line 1360 "analysis.m"
static MR_Box MR_CALL 
analysis__lub_result_statuses_1_f_0_1(
#line 1360 "analysis.m"
  MR_Box analysis__closure_arg,
#line 1360 "analysis.m"
  MR_Box analysis__wrapper_arg_1,
#line 1360 "analysis.m"
  MR_Box analysis__wrapper_arg_2,
#line 1360 "analysis.m"
  MR_Box analysis__wrapper_arg_3);

#line 1180 "analysis.m"
static void MR_CALL 
analysis__combine_func_imdg_3_p_0_1(
#line 1180 "analysis.m"
  MR_Box analysis__closure_arg,
#line 1180 "analysis.m"
  MR_Box analysis__wrapper_arg_1,
#line 1180 "analysis.m"
  MR_Box analysis__wrapper_arg_2,
#line 1180 "analysis.m"
  MR_Box * analysis__wrapper_arg_3);

#line 1173 "analysis.m"
static MR_bool MR_CALL 
analysis__clear_imdg_entries_pointing_at_3_3_p_0_1(
#line 1173 "analysis.m"
  MR_Box analysis__closure_arg,
#line 1173 "analysis.m"
  MR_Box analysis__wrapper_arg_1);

#line 1166 "analysis.m"
static void MR_CALL 
analysis__clear_imdg_entries_pointing_at_2_3_p_0_1(
#line 1166 "analysis.m"
  MR_Box analysis__closure_arg,
#line 1166 "analysis.m"
  MR_Box analysis__wrapper_arg_1,
#line 1166 "analysis.m"
  MR_Box * analysis__wrapper_arg_2);

#line 1158 "analysis.m"
static void MR_CALL 
analysis__clear_imdg_entries_pointing_at_3_p_0_1(
#line 1158 "analysis.m"
  MR_Box analysis__closure_arg,
#line 1158 "analysis.m"
  MR_Box analysis__wrapper_arg_1,
#line 1158 "analysis.m"
  MR_Box * analysis__wrapper_arg_2);

#line 1136 "analysis.m"
static void MR_CALL 
analysis__update_intermodule_dependencies_2_4_p_0_1(
#line 1136 "analysis.m"
  MR_Box analysis__closure_arg,
#line 1136 "analysis.m"
  MR_Box analysis__wrapper_arg_1,
#line 1136 "analysis.m"
  MR_Box analysis__wrapper_arg_2,
#line 1136 "analysis.m"
  MR_Box * analysis__wrapper_arg_3);

#line 1121 "analysis.m"
static void MR_CALL 
analysis__update_intermodule_dependencies_4_p_0_1(
#line 1121 "analysis.m"
  MR_Box analysis__closure_arg,
#line 1121 "analysis.m"
  MR_Box analysis__wrapper_arg_1,
#line 1121 "analysis.m"
  MR_Box analysis__wrapper_arg_2,
#line 1121 "analysis.m"
  MR_Box * analysis__wrapper_arg_3);

#line 1018 "analysis.m"
static MR_bool MR_CALL 
analysis__imdg_dependent_modules_5_f_0_1(
#line 1018 "analysis.m"
  MR_Box analysis__closure_arg,
#line 1018 "analysis.m"
  MR_Box analysis__wrapper_arg_1,
#line 1018 "analysis.m"
  MR_Box * analysis__wrapper_arg_2);

#line 959 "analysis.m"
static void MR_CALL 
analysis__update_analysis_registry_5_9_p_0_3(
#line 959 "analysis.m"
  MR_Box analysis__closure_arg,
#line 959 "analysis.m"
  MR_Box analysis__wrapper_arg_1,
#line 959 "analysis.m"
  MR_Box analysis__wrapper_arg_2,
#line 959 "analysis.m"
  MR_Box * analysis__wrapper_arg_3,
#line 959 "analysis.m"
  MR_Box analysis__wrapper_arg_4,
#line 959 "analysis.m"
  MR_Box * analysis__wrapper_arg_5);

#line 954 "analysis.m"
static MR_bool MR_CALL 
analysis__update_analysis_registry_5_9_p_0_2(
#line 954 "analysis.m"
  MR_Box analysis__closure_arg,
#line 954 "analysis.m"
  MR_Box analysis__wrapper_arg_1,
#line 954 "analysis.m"
  MR_Box * analysis__wrapper_arg_2);

#line 927 "analysis.m"
static void MR_CALL 
analysis__update_analysis_registry_5_9_p_0_1(
#line 927 "analysis.m"
  MR_Box analysis__closure_arg,
#line 927 "analysis.m"
  MR_Box analysis__wrapper_arg_1,
#line 927 "analysis.m"
  MR_Box analysis__wrapper_arg_2,
#line 927 "analysis.m"
  MR_Box * analysis__wrapper_arg_3,
#line 927 "analysis.m"
  MR_Box analysis__wrapper_arg_4,
#line 927 "analysis.m"
  MR_Box * analysis__wrapper_arg_5);

#line 875 "analysis.m"
static void MR_CALL 
analysis__update_analysis_registry_4_9_p_0_1(
#line 875 "analysis.m"
  MR_Box analysis__closure_arg,
#line 875 "analysis.m"
  MR_Box analysis__wrapper_arg_1,
#line 875 "analysis.m"
  MR_Box analysis__wrapper_arg_2,
#line 875 "analysis.m"
  MR_Box * analysis__wrapper_arg_3,
#line 875 "analysis.m"
  MR_Box analysis__wrapper_arg_4,
#line 875 "analysis.m"
  MR_Box * analysis__wrapper_arg_5);

#line 863 "analysis.m"
static void MR_CALL 
analysis__update_analysis_registry_3_8_p_0_1(
#line 863 "analysis.m"
  MR_Box analysis__closure_arg,
#line 863 "analysis.m"
  MR_Box analysis__wrapper_arg_1,
#line 863 "analysis.m"
  MR_Box analysis__wrapper_arg_2,
#line 863 "analysis.m"
  MR_Box analysis__wrapper_arg_3,
#line 863 "analysis.m"
  MR_Box * analysis__wrapper_arg_4,
#line 863 "analysis.m"
  MR_Box analysis__wrapper_arg_5,
#line 863 "analysis.m"
  MR_Box * analysis__wrapper_arg_6);

#line 853 "analysis.m"
static void MR_CALL 
analysis__update_analysis_registry_2_7_p_0_1(
#line 853 "analysis.m"
  MR_Box analysis__closure_arg,
#line 853 "analysis.m"
  MR_Box analysis__wrapper_arg_1,
#line 853 "analysis.m"
  MR_Box analysis__wrapper_arg_2,
#line 853 "analysis.m"
  MR_Box analysis__wrapper_arg_3,
#line 853 "analysis.m"
  MR_Box * analysis__wrapper_arg_4,
#line 853 "analysis.m"
  MR_Box analysis__wrapper_arg_5,
#line 853 "analysis.m"
  MR_Box * analysis__wrapper_arg_6);

#line 853 "analysis.m"
static void MR_CALL 
analysis__update_analysis_registry_5_p_0_1(
#line 853 "analysis.m"
  MR_Box analysis__closure_arg,
#line 853 "analysis.m"
  MR_Box analysis__wrapper_arg_1,
#line 853 "analysis.m"
  MR_Box analysis__wrapper_arg_2,
#line 853 "analysis.m"
  MR_Box analysis__wrapper_arg_3,
#line 853 "analysis.m"
  MR_Box * analysis__wrapper_arg_4,
#line 853 "analysis.m"
  MR_Box analysis__wrapper_arg_5,
#line 853 "analysis.m"
  MR_Box * analysis__wrapper_arg_6);

#line 605 "analysis.m"
static MR_bool MR_CALL 
analysis__lookup_exactly_matching_result_even_from_invalid_modules_6_p_0_1(
#line 605 "analysis.m"
  MR_Box analysis__closure_arg,
#line 605 "analysis.m"
  MR_Box analysis__wrapper_arg_1);

#line 538 "analysis.m"
static MR_Box MR_CALL 
analysis__lookup_results_2_4_p_0_1(
#line 538 "analysis.m"
  MR_Box analysis__closure_arg,
#line 538 "analysis.m"
  MR_Box analysis__wrapper_arg_1);

#line 1282 "analysis.m"
static void MR_CALL 
analysis__write_analysis_files_7_p_0_4(
#line 1282 "analysis.m"
  MR_Box analysis__closure_arg,
#line 1282 "analysis.m"
  MR_Box analysis__wrapper_arg_1,
#line 1282 "analysis.m"
  MR_Box analysis__wrapper_arg_2,
#line 1282 "analysis.m"
  MR_Box * analysis__wrapper_arg_3);

#line 1274 "analysis.m"
static void MR_CALL 
analysis__write_analysis_files_7_p_0_3(
#line 1274 "analysis.m"
  MR_Box analysis__closure_arg,
#line 1274 "analysis.m"
  MR_Box analysis__wrapper_arg_1,
#line 1274 "analysis.m"
  MR_Box analysis__wrapper_arg_2,
#line 1274 "analysis.m"
  MR_Box * analysis__wrapper_arg_3);

#line 1265 "analysis.m"
static void MR_CALL 
analysis__write_analysis_files_7_p_0_2(
#line 1265 "analysis.m"
  MR_Box analysis__closure_arg,
#line 1265 "analysis.m"
  MR_Box analysis__wrapper_arg_1,
#line 1265 "analysis.m"
  MR_Box analysis__wrapper_arg_2,
#line 1265 "analysis.m"
  MR_Box * analysis__wrapper_arg_3);

#line 1247 "analysis.m"
static void MR_CALL 
analysis__write_analysis_files_7_p_0_1(
#line 1247 "analysis.m"
  MR_Box analysis__closure_arg,
#line 1247 "analysis.m"
  MR_Box analysis__wrapper_arg_1,
#line 1247 "analysis.m"
  MR_Box analysis__wrapper_arg_2,
#line 1247 "analysis.m"
  MR_Box * analysis__wrapper_arg_3,
#line 1247 "analysis.m"
  MR_Box analysis__wrapper_arg_4,
#line 1247 "analysis.m"
  MR_Box * analysis__wrapper_arg_5);

#line 1197 "analysis.m"
static void MR_CALL 
analysis__prepare_intermodule_analysis_7_p_0_1(
#line 1197 "analysis.m"
  MR_Box analysis__closure_arg,
#line 1197 "analysis.m"
  MR_Box analysis__wrapper_arg_1,
#line 1197 "analysis.m"
  MR_Box analysis__wrapper_arg_2,
#line 1197 "analysis.m"
  MR_Box * analysis__wrapper_arg_3,
#line 1197 "analysis.m"
  MR_Box analysis__wrapper_arg_4,
#line 1197 "analysis.m"
  MR_Box * analysis__wrapper_arg_5);

#line 679 "analysis.m"
static MR_bool MR_CALL 
analysis__lookup_requests_5_p_0_1(
#line 679 "analysis.m"
  MR_Box analysis__closure_arg,
#line 679 "analysis.m"
  MR_Box analysis__wrapper_arg_1,
#line 679 "analysis.m"
  MR_Box * analysis__wrapper_arg_2);

#line 577 "analysis.m"
static void MR_CALL 
analysis__lookup_best_result_6_p_0_1(
#line 577 "analysis.m"
  MR_Box analysis__closure_arg,
#line 577 "analysis.m"
  MR_Box analysis__wrapper_arg_1,
#line 577 "analysis.m"
  MR_Box analysis__wrapper_arg_2,
#line 577 "analysis.m"
  MR_Box * analysis__wrapper_arg_3);

#line 551 "analysis.m"
static MR_bool MR_CALL 
analysis__lookup_matching_results_6_p_0_1(
#line 551 "analysis.m"
  MR_Box analysis__closure_arg,
#line 551 "analysis.m"
  MR_Box analysis__wrapper_arg_1);

#line 481 "analysis.m"
static MR_Box MR_CALL 
analysis__lookup_existing_call_patterns_5_p_0_1(
#line 481 "analysis.m"
  MR_Box analysis__closure_arg,
#line 481 "analysis.m"
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
#line 1382 "analysis.m"
MR_Word analysis__mutable_variable_debug_analysis;
#ifdef MR_THREAD_SAFE
    MercuryLock analysis__mutable_variable_debug_analysis_lock;
#endif

#line 1382 "analysis.m"
void 
analysis__user_init_pred_0(void)
#line 1382 "analysis.m"
{
#line 1382 "analysis.m"
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

#line 1387 "analysis.m"
static void MR_CALL 
analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_109_115_103_95_95_104_111_54_95_95_91_51_93_95_48_3_p_0(
#line 1387 "analysis.m"
  MR_Word analysis__V_11_11,
#line 1387 "analysis.m"
  MR_Word analysis__V_12_12)
#line 1387 "analysis.m"
{
#line 1390 "analysis.m"
  {
#line 1390 "analysis.m"
    MR_bool analysis__succeeded;
#line 1390 "analysis.m"
    MR_Word analysis__Debug_6;

#line 1382 "analysis.m"
{
#define MR_PROC_LABEL analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_109_115_103_95_95_104_111_54_95_95_91_51_93_95_48_3_p_0


		{
#line 1382 "analysis.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&analysis__mutable_variable_debug_analysis_lock,
                    "analysis__mutable_variable_debug_analysis_lock");
#endif

#line 4473 "analysis.c"

		;}
#undef MR_PROC_LABEL
#line 1382 "analysis.m"
}
#line 1382 "analysis.m"
{
#define MR_PROC_LABEL analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_109_115_103_95_95_104_111_54_95_95_91_51_93_95_48_3_p_0

	MR_Word X;

		{
#line 1382 "analysis.m"
X = analysis__mutable_variable_debug_analysis;

#line 4489 "analysis.c"

		;}
#undef MR_PROC_LABEL
	 analysis__Debug_6  = X;
#line 1382 "analysis.m"
}
#line 1382 "analysis.m"
{
#define MR_PROC_LABEL analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_109_115_103_95_95_104_111_54_95_95_91_51_93_95_48_3_p_0


		{
#line 1382 "analysis.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&analysis__mutable_variable_debug_analysis_lock,
                    "analysis__mutable_variable_debug_analysis_lock");
#endif

#line 4508 "analysis.c"

		;}
#undef MR_PROC_LABEL
#line 1382 "analysis.m"
}
#line 1395 "analysis.m"
#line 1395 "analysis.m"
    switch (analysis__Debug_6) {
#line 1395 "analysis.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1395 "analysis.m"
      case (MR_Integer) 0:
#line 1396 "analysis.m"
        {
#line 1396 "analysis.m"
        }
#line 1395 "analysis.m"
        break;
#line 1395 "analysis.m"
      case (MR_Integer) 1:
#line 1394 "analysis.m"
        {
#line 1394 "analysis.m"
          analysis__IntroducedFrom__pred__lookup_results_1__518__1_4_p_0(analysis__V_11_11, analysis__V_12_12);
#line 1394 "analysis.m"
          return;
        }
#line 1395 "analysis.m"
        break;
#line 1395 "analysis.m"
    }
#line 1390 "analysis.m"
  }
#line 1387 "analysis.m"
}

#line 1387 "analysis.m"
static void MR_CALL 
analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_109_115_103_95_95_104_111_52_95_95_91_54_93_95_48_3_p_0(
#line 1387 "analysis.m"
  MR_Word analysis__V_11_11,
#line 1387 "analysis.m"
  MR_Word analysis__V_12_12,
#line 1387 "analysis.m"
  MR_Word analysis__V_13_13,
#line 1387 "analysis.m"
  MR_Box analysis__V_14_14,
#line 1387 "analysis.m"
  MR_Box analysis__V_15_15)
#line 1387 "analysis.m"
{
#line 1390 "analysis.m"
  {
#line 1390 "analysis.m"
    MR_bool analysis__succeeded;
#line 1390 "analysis.m"
    MR_Word analysis__Debug_6;

#line 1382 "analysis.m"
{
#define MR_PROC_LABEL analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_109_115_103_95_95_104_111_52_95_95_91_54_93_95_48_3_p_0


		{
#line 1382 "analysis.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&analysis__mutable_variable_debug_analysis_lock,
                    "analysis__mutable_variable_debug_analysis_lock");
#endif

#line 4579 "analysis.c"

		;}
#undef MR_PROC_LABEL
#line 1382 "analysis.m"
}
#line 1382 "analysis.m"
{
#define MR_PROC_LABEL analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_109_115_103_95_95_104_111_52_95_95_91_54_93_95_48_3_p_0

	MR_Word X;

		{
#line 1382 "analysis.m"
X = analysis__mutable_variable_debug_analysis;

#line 4595 "analysis.c"

		;}
#undef MR_PROC_LABEL
	 analysis__Debug_6  = X;
#line 1382 "analysis.m"
}
#line 1382 "analysis.m"
{
#define MR_PROC_LABEL analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_109_115_103_95_95_104_111_52_95_95_91_54_93_95_48_3_p_0


		{
#line 1382 "analysis.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&analysis__mutable_variable_debug_analysis_lock,
                    "analysis__mutable_variable_debug_analysis_lock");
#endif

#line 4614 "analysis.c"

		;}
#undef MR_PROC_LABEL
#line 1382 "analysis.m"
}
#line 1395 "analysis.m"
#line 1395 "analysis.m"
    switch (analysis__Debug_6) {
#line 1395 "analysis.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1395 "analysis.m"
      case (MR_Integer) 0:
#line 1396 "analysis.m"
        {
#line 1396 "analysis.m"
        }
#line 1395 "analysis.m"
        break;
#line 1395 "analysis.m"
      case (MR_Integer) 1:
#line 1394 "analysis.m"
        {
#line 1394 "analysis.m"
          analysis__IntroducedFrom__pred__update_analysis_registry_5__896__1_7_p_0(analysis__V_11_11, analysis__V_12_12, analysis__V_13_13, analysis__V_14_14, analysis__V_15_15);
#line 1394 "analysis.m"
          return;
        }
#line 1395 "analysis.m"
        break;
#line 1395 "analysis.m"
    }
#line 1390 "analysis.m"
  }
#line 1387 "analysis.m"
}

#line 1387 "analysis.m"
static void MR_CALL 
analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_109_115_103_95_95_104_111_51_95_95_91_54_93_95_48_3_p_0(
#line 1387 "analysis.m"
  MR_Word analysis__V_11_11,
#line 1387 "analysis.m"
  MR_Box analysis__V_12_12,
#line 1387 "analysis.m"
  MR_Box analysis__V_13_13,
#line 1387 "analysis.m"
  MR_Word analysis__V_14_14,
#line 1387 "analysis.m"
  MR_Word analysis__V_15_15)
#line 1387 "analysis.m"
{
#line 1390 "analysis.m"
  {
#line 1390 "analysis.m"
    MR_bool analysis__succeeded;
#line 1390 "analysis.m"
    MR_Word analysis__Debug_6;

#line 1382 "analysis.m"
{
#define MR_PROC_LABEL analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_109_115_103_95_95_104_111_51_95_95_91_54_93_95_48_3_p_0


		{
#line 1382 "analysis.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&analysis__mutable_variable_debug_analysis_lock,
                    "analysis__mutable_variable_debug_analysis_lock");
#endif

#line 4685 "analysis.c"

		;}
#undef MR_PROC_LABEL
#line 1382 "analysis.m"
}
#line 1382 "analysis.m"
{
#define MR_PROC_LABEL analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_109_115_103_95_95_104_111_51_95_95_91_54_93_95_48_3_p_0

	MR_Word X;

		{
#line 1382 "analysis.m"
X = analysis__mutable_variable_debug_analysis;

#line 4701 "analysis.c"

		;}
#undef MR_PROC_LABEL
	 analysis__Debug_6  = X;
#line 1382 "analysis.m"
}
#line 1382 "analysis.m"
{
#define MR_PROC_LABEL analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_109_115_103_95_95_104_111_51_95_95_91_54_93_95_48_3_p_0


		{
#line 1382 "analysis.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&analysis__mutable_variable_debug_analysis_lock,
                    "analysis__mutable_variable_debug_analysis_lock");
#endif

#line 4720 "analysis.c"

		;}
#undef MR_PROC_LABEL
#line 1382 "analysis.m"
}
#line 1395 "analysis.m"
#line 1395 "analysis.m"
    switch (analysis__Debug_6) {
#line 1395 "analysis.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1395 "analysis.m"
      case (MR_Integer) 0:
#line 1396 "analysis.m"
        {
#line 1396 "analysis.m"
        }
#line 1395 "analysis.m"
        break;
#line 1395 "analysis.m"
      case (MR_Integer) 1:
#line 1394 "analysis.m"
        {
#line 1394 "analysis.m"
          analysis__IntroducedFrom__pred__update_analysis_registry_5__925__1_7_p_0(analysis__V_11_11, analysis__V_12_12, analysis__V_13_13, analysis__V_14_14, analysis__V_15_15);
#line 1394 "analysis.m"
          return;
        }
#line 1395 "analysis.m"
        break;
#line 1395 "analysis.m"
    }
#line 1390 "analysis.m"
  }
#line 1387 "analysis.m"
}

#line 1387 "analysis.m"
static void MR_CALL 
analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_109_115_103_95_95_104_111_49_95_95_91_51_93_95_48_3_p_0(
#line 1387 "analysis.m"
  MR_Word analysis__V_11_11,
#line 1387 "analysis.m"
  MR_Word analysis__V_12_12)
#line 1387 "analysis.m"
{
#line 1390 "analysis.m"
  {
#line 1390 "analysis.m"
    MR_bool analysis__succeeded;
#line 1390 "analysis.m"
    MR_Word analysis__Debug_6;

#line 1382 "analysis.m"
{
#define MR_PROC_LABEL analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_109_115_103_95_95_104_111_49_95_95_91_51_93_95_48_3_p_0


		{
#line 1382 "analysis.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&analysis__mutable_variable_debug_analysis_lock,
                    "analysis__mutable_variable_debug_analysis_lock");
#endif

#line 4785 "analysis.c"

		;}
#undef MR_PROC_LABEL
#line 1382 "analysis.m"
}
#line 1382 "analysis.m"
{
#define MR_PROC_LABEL analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_109_115_103_95_95_104_111_49_95_95_91_51_93_95_48_3_p_0

	MR_Word X;

		{
#line 1382 "analysis.m"
X = analysis__mutable_variable_debug_analysis;

#line 4801 "analysis.c"

		;}
#undef MR_PROC_LABEL
	 analysis__Debug_6  = X;
#line 1382 "analysis.m"
}
#line 1382 "analysis.m"
{
#define MR_PROC_LABEL analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_109_115_103_95_95_104_111_49_95_95_91_51_93_95_48_3_p_0


		{
#line 1382 "analysis.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&analysis__mutable_variable_debug_analysis_lock,
                    "analysis__mutable_variable_debug_analysis_lock");
#endif

#line 4820 "analysis.c"

		;}
#undef MR_PROC_LABEL
#line 1382 "analysis.m"
}
#line 1395 "analysis.m"
#line 1395 "analysis.m"
    switch (analysis__Debug_6) {
#line 1395 "analysis.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1395 "analysis.m"
      case (MR_Integer) 0:
#line 1396 "analysis.m"
        {
#line 1396 "analysis.m"
        }
#line 1395 "analysis.m"
        break;
#line 1395 "analysis.m"
      case (MR_Integer) 1:
#line 1394 "analysis.m"
        {
#line 1394 "analysis.m"
          analysis__write_clearing_entries_4_p_0(analysis__V_11_11, analysis__V_12_12);
#line 1394 "analysis.m"
          return;
        }
#line 1395 "analysis.m"
        break;
#line 1395 "analysis.m"
    }
#line 1390 "analysis.m"
  }
#line 1387 "analysis.m"
}

#line 447 "analysis.m"
MR_Word MR_CALL 
analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_116_111_95_116_101_114_109_95_95_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_116_111_95_116_101_114_109_95_49_95_95_91_49_93_95_48_1_f_0(void)
#line 447 "analysis.m"
{
#line 447 "analysis.m"
  {
#line 447 "analysis.m"
    MR_bool analysis__succeeded;
#line 447 "analysis.m"
    MR_Word analysis__Term_3;
#line 447 "analysis.m"
    MR_Word analysis__V_8_8;

#line 448 "analysis.m"
    {
#line 448 "analysis.m"
      analysis__V_8_8 = mercury__term__context_init_0_f_0();
    }
#line 448 "analysis.m"
    {
#line 448 "analysis.m"
      analysis__Term_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 448 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__Term_3, 0) = ((MR_Box) (&analysis_scalar_common_14[0]));
#line 448 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__Term_3, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 448 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__Term_3, 2) = ((MR_Box) (analysis__V_8_8));
#line 448 "analysis.m"
    }
#line 447 "analysis.m"
    return analysis__Term_3;
#line 447 "analysis.m"
  }
#line 447 "analysis.m"
}

#line 442 "analysis.m"
MR_bool MR_CALL 
analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_112_97_114_116_105_97_108_95_111_114_100_101_114_95_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_101_113_117_105_118_97_108_101_110_116_95_51_95_95_91_49_44_32_50_44_32_51_93_95_48_3_p_0(void)
#line 442 "analysis.m"
{
#line 443 "analysis.m"
  {
#line 443 "analysis.m"
    MR_bool analysis__succeeded;

#line 443 "analysis.m"
    {
#line 443 "analysis.m"
      return analysis__succeeded = mercury__builtin__semidet_succeed_0_p_0();
    }
#line 443 "analysis.m"
    return analysis__succeeded;
#line 443 "analysis.m"
  }
#line 442 "analysis.m"
}

#line 439 "analysis.m"
MR_bool MR_CALL 
analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_112_97_114_116_105_97_108_95_111_114_100_101_114_95_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_109_111_114_101_95_112_114_101_99_105_115_101_95_116_104_97_110_95_51_95_95_91_49_44_32_50_44_32_51_93_95_48_3_p_0(void)
#line 439 "analysis.m"
{
#line 440 "analysis.m"
  {
#line 440 "analysis.m"
    MR_bool analysis__succeeded;

#line 440 "analysis.m"
    {
#line 440 "analysis.m"
      return analysis__succeeded = mercury__builtin__semidet_fail_0_p_0();
    }
#line 440 "analysis.m"
    return analysis__succeeded;
#line 440 "analysis.m"
  }
#line 439 "analysis.m"
}

#line 145 "analysis.m"
void MR_CALL 
analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(
#line 145 "analysis.m"
  MR_Word * analysis__HeadVar__1_1)
#line 145 "analysis.m"
{
#line 145 "analysis.m"
  {
#line 145 "analysis.m"
    MR_bool analysis__succeeded;

#line 145 "analysis.m"
    *analysis__HeadVar__1_1 = (MR_Integer) 0;
#line 145 "analysis.m"
  }
#line 145 "analysis.m"
}

#line 145 "analysis.m"
MR_bool MR_CALL 
analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_48_95_95_91_49_44_32_50_93_95_48_2_p_0(void)
#line 145 "analysis.m"
{
#line 145 "analysis.m"
  {
#line 145 "analysis.m"
    return MR_TRUE;
#line 145 "analysis.m"
  }
#line 145 "analysis.m"
}

#line 151 "analysis.m"
void MR_CALL 
analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(
#line 151 "analysis.m"
  MR_Word * analysis__HeadVar__1_1)
#line 151 "analysis.m"
{
#line 151 "analysis.m"
  {
#line 151 "analysis.m"
    MR_bool analysis__succeeded;

#line 151 "analysis.m"
    *analysis__HeadVar__1_1 = (MR_Integer) 0;
#line 151 "analysis.m"
  }
#line 151 "analysis.m"
}

#line 151 "analysis.m"
MR_bool MR_CALL 
analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_48_95_95_91_49_44_32_50_93_95_48_2_p_0(void)
#line 151 "analysis.m"
{
#line 151 "analysis.m"
  {
#line 151 "analysis.m"
    return MR_TRUE;
#line 151 "analysis.m"
  }
#line 151 "analysis.m"
}

#line 1373 "analysis.m"
static MR_Box MR_CALL 
analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_108_117_98_95_114_101_115_117_108_116_95_115_116_97_116_117_115_101_115_95_51_95_95_91_49_93_95_48_3_f_0_1(
#line 1373 "analysis.m"
  MR_Box analysis__closure_arg,
#line 1373 "analysis.m"
  MR_Box analysis__wrapper_arg_1,
#line 1373 "analysis.m"
  MR_Box analysis__wrapper_arg_2)
#line 1373 "analysis.m"
{
#line 1373 "analysis.m"
  {
#line 1373 "analysis.m"
    MR_Box analysis__wrapper_arg_3;
#line 1373 "analysis.m"
    MR_Box analysis__closure = analysis__closure_arg;
#line 1373 "analysis.m"
    MR_Word analysis__conv0_HeadVar__3_3;

#line 1373 "analysis.m"
    {
#line 1373 "analysis.m"
      analysis__conv0_HeadVar__3_3 = analysis__lub_result_statuses_4_2_f_0(((MR_Word) analysis__wrapper_arg_1), ((MR_Word) analysis__wrapper_arg_2));
    }
#line 1373 "analysis.m"
    analysis__wrapper_arg_3 = ((MR_Box) (analysis__conv0_HeadVar__3_3));
#line 1373 "analysis.m"
    return analysis__wrapper_arg_3;
#line 1373 "analysis.m"
  }
#line 1373 "analysis.m"
}

#line 1369 "analysis.m"
MR_Word MR_CALL 
analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_108_117_98_95_114_101_115_117_108_116_95_115_116_97_116_117_115_101_115_95_51_95_95_91_49_93_95_48_3_f_0(
#line 1369 "analysis.m"
  MR_Word analysis__Results_6,
#line 1369 "analysis.m"
  MR_Word analysis__Acc_7)
#line 1369 "analysis.m"
{
#line 1372 "analysis.m"
  {
#line 1372 "analysis.m"
    MR_bool analysis__succeeded;
#line 1372 "analysis.m"
    MR_Word analysis__HeadVar__4_4;
#line 1373 "analysis.m"
    MR_Box analysis__conv1_HeadVar__4_4;

#line 1373 "analysis.m"
    {
#line 1373 "analysis.m"
      analysis__conv1_HeadVar__4_4 = mercury__list__foldl_3_f_0((MR_Word) &analysis__analysis__type_ctor_info_some_analysis_result_0, (MR_Word) &analysis__analysis__type_ctor_info_analysis_status_0, (MR_Word) &analysis_scalar_common_2[15], analysis__Results_6, ((MR_Box) (analysis__Acc_7)));
    }
#line 1373 "analysis.m"
    analysis__HeadVar__4_4 = ((MR_Word) analysis__conv1_HeadVar__4_4);
#line 1372 "analysis.m"
    return analysis__HeadVar__4_4;
#line 1372 "analysis.m"
  }
#line 1369 "analysis.m"
}

#line 1367 "analysis.m"
static MR_Box MR_CALL 
analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_108_117_98_95_114_101_115_117_108_116_95_115_116_97_116_117_115_101_115_95_50_95_95_91_49_93_95_48_3_f_0_1(
#line 1367 "analysis.m"
  MR_Box analysis__closure_arg,
#line 1367 "analysis.m"
  MR_Box analysis__wrapper_arg_1,
#line 1367 "analysis.m"
  MR_Box analysis__wrapper_arg_2,
#line 1367 "analysis.m"
  MR_Box analysis__wrapper_arg_3)
#line 1367 "analysis.m"
{
#line 1367 "analysis.m"
  {
#line 1367 "analysis.m"
    MR_Box analysis__wrapper_arg_4;
#line 1367 "analysis.m"
    MR_Box analysis__closure = analysis__closure_arg;
#line 1367 "analysis.m"
    MR_Word analysis__conv0_HeadVar__4_4;

#line 1367 "analysis.m"
    {
#line 1367 "analysis.m"
      analysis__conv0_HeadVar__4_4 = analysis__lub_result_statuses_3_3_f_0(((MR_Word) analysis__wrapper_arg_1), ((MR_Word) analysis__wrapper_arg_2), ((MR_Word) analysis__wrapper_arg_3));
    }
#line 1367 "analysis.m"
    analysis__wrapper_arg_4 = ((MR_Box) (analysis__conv0_HeadVar__4_4));
#line 1367 "analysis.m"
    return analysis__wrapper_arg_4;
#line 1367 "analysis.m"
  }
#line 1367 "analysis.m"
}

#line 1362 "analysis.m"
MR_Word MR_CALL 
analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_108_117_98_95_114_101_115_117_108_116_95_115_116_97_116_117_115_101_115_95_50_95_95_91_49_93_95_48_3_f_0(
#line 1362 "analysis.m"
  MR_Word analysis__FuncMap_6,
#line 1362 "analysis.m"
  MR_Word analysis__Acc_7)
#line 1362 "analysis.m"
{
#line 1366 "analysis.m"
  {
#line 1366 "analysis.m"
    MR_bool analysis__succeeded;
#line 1366 "analysis.m"
    MR_Word analysis__HeadVar__4_4;
#line 1367 "analysis.m"
    MR_Box analysis__conv1_HeadVar__4_4;

#line 1367 "analysis.m"
    {
#line 1367 "analysis.m"
      analysis__conv1_HeadVar__4_4 = mercury__map__foldl_3_f_0((MR_Word) &analysis__analysis__type_ctor_info_func_id_0, (MR_Word) &analysis_scalar_common_1[1], (MR_Word) &analysis__analysis__type_ctor_info_analysis_status_0, (MR_Word) &analysis_scalar_common_2[14], analysis__FuncMap_6, ((MR_Box) (analysis__Acc_7)));
    }
#line 1367 "analysis.m"
    analysis__HeadVar__4_4 = ((MR_Word) analysis__conv1_HeadVar__4_4);
#line 1366 "analysis.m"
    return analysis__HeadVar__4_4;
#line 1366 "analysis.m"
  }
#line 1362 "analysis.m"
}

#line 1173 "analysis.m"
static MR_bool MR_CALL 
analysis__IntroducedFrom__pred__clear_imdg_entries_pointing_at_3__1173__1_2_p_0(
#line 1173 "analysis.m"
  MR_Word analysis__ModuleName_4,
#line 1173 "analysis.m"
  MR_Word analysis__HeadVar__2_9)
#line 1173 "analysis.m"
{
#line 1173 "analysis.m"
  {
#line 1173 "analysis.m"
    MR_bool analysis__succeeded;
#line 1173 "analysis.m"
    MR_Word analysis__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_9, (MR_Integer) 2)));
#line 1173 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_call_pattern_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_9, (MR_Integer) 0)));
#line 1173 "analysis.m"
    MR_Box analysis__V_11_11 = (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_9, (MR_Integer) 1));

#line 1173 "analysis.m"
    {
#line 1173 "analysis.m"
      analysis__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(analysis__ModuleName_4, analysis__V_14_14);
    }
#line 1173 "analysis.m"
    analysis__succeeded = !(analysis__succeeded);
#line 1173 "analysis.m"
    return analysis__succeeded;
#line 1173 "analysis.m"
  }
#line 1173 "analysis.m"
}

#line 954 "analysis.m"
static MR_bool MR_CALL 
analysis__IntroducedFrom__func__update_analysis_registry_5__954__1_1_f_0(
#line 954 "analysis.m"
  MR_Word analysis__HeadVar__1_61,
#line 954 "analysis.m"
  MR_Word * analysis__HeadVar__2_62)
#line 954 "analysis.m"
{
#line 954 "analysis.m"
  {
#line 954 "analysis.m"
    MR_bool analysis__succeeded;
#line 954 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_call_pattern_207 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__1_61, (MR_Integer) 0)));
#line 954 "analysis.m"
    MR_Word analysis__TypeInfo_209_209;
#line 954 "analysis.m"
    MR_Word analysis__TypeInfo_210_210;
#line 954 "analysis.m"
    MR_Word analysis__V_63_63;
#line 954 "analysis.m"
    MR_Box analysis__Call0_72 = (MR_hl_field(MR_mktag(0), analysis__HeadVar__1_61, (MR_Integer) 1));
#line 954 "analysis.m"
    MR_Word analysis__V_220_220;

#line 955 "analysis.m"
    *analysis__HeadVar__2_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__1_61, (MR_Integer) 2)));
#line 5201 "analysis.c"
    {
#line 5203 "analysis.c"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_call_pattern_207, (MR_Integer) 4, &analysis__TypeInfo_209_209);
    }
#line 956 "analysis.m"
    {
#line 956 "analysis.m"
      analysis__V_63_63 = mercury__univ__univ_1_f_0(analysis__TypeInfo_209_209, analysis__Call0_72);
    }
#line 5211 "analysis.c"
    {
#line 5213 "analysis.c"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_call_pattern_207, (MR_Integer) 4, &analysis__TypeInfo_210_210);
    }
#line 956 "analysis.m"
    {
#line 956 "analysis.m"
      analysis__V_220_220 = mercury__univ__univ_1_f_0(analysis__TypeInfo_210_210, analysis__Call0_72);
    }
#line 956 "analysis.m"
    {
#line 956 "analysis.m"
      return analysis__succeeded = mercury__univ____Unify____univ_0_0(analysis__V_63_63, analysis__V_220_220);
    }
#line 954 "analysis.m"
    return analysis__succeeded;
#line 954 "analysis.m"
  }
#line 954 "analysis.m"
}

#line 925 "analysis.m"
static void MR_CALL 
analysis__IntroducedFrom__pred__update_analysis_registry_5__925__1_7_p_0(
#line 925 "analysis.m"
  MR_Word analysis__TypeClassInfo_for_analysis_158,
#line 925 "analysis.m"
  MR_Box analysis__NewAnswer_18,
#line 925 "analysis.m"
  MR_Box analysis__OldAnswer_25,
#line 925 "analysis.m"
  MR_Word analysis__Status_29,
#line 925 "analysis.m"
  MR_Word analysis__DepModules_31)
#line 925 "analysis.m"
{
#line 925 "analysis.m"
  {
#line 925 "analysis.m"
    MR_bool analysis__succeeded;
#line 925 "analysis.m"
    MR_Word analysis__TypeInfo_185_185;

#line 5255 "analysis.c"
    {
#line 5257 "analysis.c"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_158, (MR_Integer) 5, &analysis__TypeInfo_185_185);
    }
#line 925 "analysis.m"
    {
#line 925 "analysis.m"
      analysis__write_changed_answer_6_p_0(analysis__TypeInfo_185_185, analysis__OldAnswer_25, analysis__NewAnswer_18, analysis__Status_29, analysis__DepModules_31);
#line 925 "analysis.m"
      return;
    }
#line 925 "analysis.m"
  }
#line 925 "analysis.m"
}

#line 896 "analysis.m"
static void MR_CALL 
analysis__IntroducedFrom__pred__update_analysis_registry_5__896__1_7_p_0(
#line 896 "analysis.m"
  MR_Word analysis__TypeClassInfo_for_analysis_158,
#line 896 "analysis.m"
  MR_Word analysis__ModuleName_11,
#line 896 "analysis.m"
  MR_Word analysis__FuncId_13,
#line 896 "analysis.m"
  MR_Box analysis__Call_17,
#line 896 "analysis.m"
  MR_Box analysis__NewAnswer_18)
#line 896 "analysis.m"
{
#line 896 "analysis.m"
  {
#line 896 "analysis.m"
    MR_bool analysis__succeeded;
#line 896 "analysis.m"
    MR_Word analysis__TypeInfo_166_166;
#line 896 "analysis.m"
    MR_Word analysis__TypeInfo_168_168;

#line 5296 "analysis.c"
    {
#line 5298 "analysis.c"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_158, (MR_Integer) 4, &analysis__TypeInfo_166_166);
    }
#line 5301 "analysis.c"
    {
#line 5303 "analysis.c"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_158, (MR_Integer) 5, &analysis__TypeInfo_168_168);
    }
#line 896 "analysis.m"
    {
#line 896 "analysis.m"
      analysis__write_no_change_in_result_6_p_0(analysis__TypeInfo_166_166, analysis__TypeInfo_168_168, analysis__ModuleName_11, analysis__FuncId_13, analysis__Call_17, analysis__NewAnswer_18);
#line 896 "analysis.m"
      return;
    }
#line 896 "analysis.m"
  }
#line 896 "analysis.m"
}

#line 605 "analysis.m"
static MR_bool MR_CALL 
analysis__IntroducedFrom__pred__lookup_exactly_matching_result_even_from_invalid_modules__605__1_4_p_0(
#line 605 "analysis.m"
  MR_Word analysis__TypeClassInfo_for_analysis_32,
#line 605 "analysis.m"
  MR_Box analysis__FuncInfo_10,
#line 605 "analysis.m"
  MR_Box analysis__Call_11,
#line 605 "analysis.m"
  MR_Word analysis__HeadVar__4_22)
#line 605 "analysis.m"
{
#line 605 "analysis.m"
  {
#line 605 "analysis.m"
    MR_bool analysis__succeeded;
#line 605 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_call_pattern_39;
#line 605 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_partial_order_41;
#line 605 "analysis.m"
    MR_Box analysis__V_23_23 = (MR_hl_field(MR_mktag(0), analysis__HeadVar__4_22, (MR_Integer) 0));
#line 607 "analysis.m"
    MR_Box analysis__V_30_30 = (MR_hl_field(MR_mktag(0), analysis__HeadVar__4_22, (MR_Integer) 1));
#line 607 "analysis.m"
    MR_Word analysis__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__4_22, (MR_Integer) 2)));
#line 5345 "analysis.c"
    MR_bool MR_CALL (* analysis__func_0)(MR_Box, MR_Box, MR_Box, MR_Box);

#line 5348 "analysis.c"
    {
#line 5350 "analysis.c"
      mercury__private_builtin__superclass_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_32, (MR_Integer) 1, &analysis__TypeClassInfo_for_call_pattern_39);
    }
#line 5353 "analysis.c"
    {
#line 5355 "analysis.c"
      mercury__private_builtin__superclass_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_call_pattern_39, (MR_Integer) 1, &analysis__TypeClassInfo_for_partial_order_41);
    }
#line 5358 "analysis.c"
    analysis__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), analysis__TypeClassInfo_for_partial_order_41, (MR_Integer) 0)), (MR_Integer) 6)));
#line 5360 "analysis.c"
    {
#line 5362 "analysis.c"
      return analysis__succeeded = analysis__func_0(((MR_Box) analysis__TypeClassInfo_for_partial_order_41), analysis__FuncInfo_10, analysis__Call_11, analysis__V_23_23);
    }
#line 605 "analysis.m"
    return analysis__succeeded;
#line 605 "analysis.m"
  }
#line 605 "analysis.m"
}

#line 538 "analysis.m"
static MR_Word MR_CALL 
analysis__IntroducedFrom__func__lookup_results_2__538__1_2_f_0(
#line 538 "analysis.m"
  MR_Word analysis__TypeClassInfo_for_analysis_29,
#line 538 "analysis.m"
  MR_Word analysis__HeadVar__2_24)
#line 538 "analysis.m"
{
#line 538 "analysis.m"
  {
#line 538 "analysis.m"
    MR_bool analysis__succeeded;
#line 538 "analysis.m"
    MR_Word analysis__HeadVar__3_25;
#line 538 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_analysis_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_24, (MR_Integer) 0)));
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
    MR_Word analysis__Status_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_24, (MR_Integer) 3)));
#line 538 "analysis.m"
    MR_Box analysis__Call0_18 = (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_24, (MR_Integer) 1));
#line 538 "analysis.m"
    MR_Box analysis__Answer0_19 = (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_24, (MR_Integer) 2));
#line 538 "analysis.m"
    MR_Word analysis__V_26_26;
#line 538 "analysis.m"
    MR_Word analysis__V_27_27;

#line 5412 "analysis.c"
    {
#line 5414 "analysis.c"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_43, (MR_Integer) 4, &analysis__TypeInfo_45_45);
    }
#line 541 "analysis.m"
    {
#line 541 "analysis.m"
      analysis__V_26_26 = mercury__univ__univ_1_f_0(analysis__TypeInfo_45_45, analysis__Call0_18);
    }
#line 5422 "analysis.c"
    {
#line 5424 "analysis.c"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_29, (MR_Integer) 4, &analysis__TypeInfo_46_46);
    }
#line 541 "analysis.m"
    {
#line 541 "analysis.m"
      mercury__univ__det_univ_to_type_2_p_0(analysis__TypeInfo_46_46, analysis__V_26_26, &analysis__Call_11);
    }
#line 5432 "analysis.c"
    {
#line 5434 "analysis.c"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_43, (MR_Integer) 5, &analysis__TypeInfo_48_48);
    }
#line 542 "analysis.m"
    {
#line 542 "analysis.m"
      analysis__V_27_27 = mercury__univ__univ_1_f_0(analysis__TypeInfo_48_48, analysis__Answer0_19);
    }
#line 5442 "analysis.c"
    {
#line 5444 "analysis.c"
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
      analysis__HeadVar__3_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 539 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__HeadVar__3_25, 0) = analysis__Call_11;
#line 539 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__HeadVar__3_25, 1) = analysis__Answer_13;
#line 539 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__HeadVar__3_25, 2) = ((MR_Box) (analysis__Status_17));
#line 539 "analysis.m"
    }
#line 538 "analysis.m"
    return analysis__HeadVar__3_25;
#line 538 "analysis.m"
  }
#line 538 "analysis.m"
}

#line 518 "analysis.m"
static void MR_CALL 
analysis__IntroducedFrom__pred__lookup_results_1__518__1_4_p_0(
#line 518 "analysis.m"
  MR_Word analysis__TypeClassInfo_for_analysis_62,
#line 518 "analysis.m"
  MR_Word analysis__ResultList_10)
#line 518 "analysis.m"
{
#line 518 "analysis.m"
  {
#line 518 "analysis.m"
    MR_bool analysis__succeeded;
#line 518 "analysis.m"
    MR_Word analysis__TypeInfo_70_70;
#line 518 "analysis.m"
    MR_Word analysis__TypeInfo_72_72;
#line 518 "analysis.m"
    MR_Word analysis__TypeInfo_74_74;
#line 518 "analysis.m"
    MR_Word analysis__TypeInfo_76_76;

#line 519 "analysis.m"
    {
#line 519 "analysis.m"
      mercury__io__write_string_3_p_0((MR_String) "% Found these results: ");
    }
#line 5498 "analysis.c"
    {
#line 5500 "analysis.c"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_62, (MR_Integer) 4, &analysis__TypeInfo_70_70);
    }
#line 5503 "analysis.c"
    {
#line 5505 "analysis.c"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_62, (MR_Integer) 5, &analysis__TypeInfo_72_72);
    }
#line 5508 "analysis.c"
    {
#line 5510 "analysis.c"
      analysis__TypeInfo_74_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 5512 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_74_74, 0) = ((MR_Box) (&analysis__analysis__type_ctor_info_analysis_result_2));
#line 5514 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_74_74, 1) = ((MR_Box) (analysis__TypeInfo_70_70));
#line 5516 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_74_74, 2) = ((MR_Box) (analysis__TypeInfo_72_72));
#line 5518 "analysis.c"
    }
#line 5520 "analysis.c"
    {
#line 5522 "analysis.c"
      analysis__TypeInfo_76_76 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 5524 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_76_76, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
#line 5526 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_76_76, 1) = ((MR_Box) (analysis__TypeInfo_74_74));
#line 5528 "analysis.c"
    }
#line 520 "analysis.m"
    {
#line 520 "analysis.m"
      mercury__io__print_3_p_0(analysis__TypeInfo_76_76, ((MR_Box) (analysis__ResultList_10)));
    }
#line 521 "analysis.m"
    {
#line 521 "analysis.m"
      mercury__io__nl_2_p_0();
#line 521 "analysis.m"
      return;
    }
#line 518 "analysis.m"
  }
#line 518 "analysis.m"
}

#line 501 "analysis.m"
static void MR_CALL 
analysis__IntroducedFrom__pred__lookup_results_1__501__1_4_p_0(
#line 501 "analysis.m"
  MR_Word analysis__ModuleName_7,
#line 501 "analysis.m"
  MR_Word analysis__FuncId_8)
#line 501 "analysis.m"
{
#line 501 "analysis.m"
  {
#line 501 "analysis.m"
    MR_bool analysis__succeeded;

#line 502 "analysis.m"
    {
#line 502 "analysis.m"
      mercury__io__write_string_3_p_0((MR_String) "% Looking up analysis results for ");
    }
#line 503 "analysis.m"
    {
#line 503 "analysis.m"
      mercury__io__write_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (analysis__ModuleName_7)));
    }
#line 504 "analysis.m"
    {
#line 504 "analysis.m"
      mercury__io__write_string_3_p_0((MR_String) ".");
    }
#line 505 "analysis.m"
    {
#line 505 "analysis.m"
      mercury__io__write_3_p_0((MR_Word) &analysis__analysis__type_ctor_info_func_id_0, ((MR_Box) (analysis__FuncId_8)));
    }
#line 506 "analysis.m"
    {
#line 506 "analysis.m"
      mercury__io__nl_2_p_0();
#line 506 "analysis.m"
      return;
    }
#line 501 "analysis.m"
  }
#line 501 "analysis.m"
}

#line 679 "analysis.m"
static MR_bool MR_CALL 
analysis__IntroducedFrom__func__lookup_requests__679__1_2_f_0(
#line 679 "analysis.m"
  MR_Word analysis__TypeClassInfo_for_call_pattern_47,
#line 679 "analysis.m"
  MR_Word analysis__HeadVar__2_23,
#line 679 "analysis.m"
  MR_Box * analysis__HeadVar__3_24)
#line 679 "analysis.m"
{
#line 679 "analysis.m"
  {
#line 679 "analysis.m"
    MR_bool analysis__succeeded;
#line 679 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_call_pattern_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_23, (MR_Integer) 0)));
#line 679 "analysis.m"
    MR_Word analysis__TypeInfo_61_61;
#line 679 "analysis.m"
    MR_Word analysis__TypeInfo_62_62;
#line 679 "analysis.m"
    MR_Word analysis__V_25_25;
#line 679 "analysis.m"
    MR_Box analysis__Call0_27 = (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_23, (MR_Integer) 1));
#line 680 "analysis.m"
    MR_Word analysis__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_23, (MR_Integer) 2)));

#line 5621 "analysis.c"
    {
#line 5623 "analysis.c"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_call_pattern_47, (MR_Integer) 4, &analysis__TypeInfo_61_61);
    }
#line 5626 "analysis.c"
    {
#line 5628 "analysis.c"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_call_pattern_59, (MR_Integer) 4, &analysis__TypeInfo_62_62);
    }
#line 681 "analysis.m"
    {
#line 681 "analysis.m"
      analysis__V_25_25 = mercury__univ__univ_1_f_0(analysis__TypeInfo_62_62, analysis__Call0_27);
    }
#line 681 "analysis.m"
    {
#line 681 "analysis.m"
      return analysis__succeeded = mercury__univ__univ_1_f_2(analysis__TypeInfo_61_61, analysis__HeadVar__3_24, analysis__V_25_25);
    }
#line 679 "analysis.m"
    return analysis__succeeded;
#line 679 "analysis.m"
  }
#line 679 "analysis.m"
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

#line 563 "analysis.m"
    {
#line 563 "analysis.m"
      mercury__io__write_string_3_p_0((MR_String) "% Looking up best analysis result for ");
    }
#line 564 "analysis.m"
    {
#line 564 "analysis.m"
      mercury__io__write_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (analysis__ModuleName_8)));
    }
#line 565 "analysis.m"
    {
#line 565 "analysis.m"
      mercury__io__write_string_3_p_0((MR_String) ".");
    }
#line 566 "analysis.m"
    {
#line 566 "analysis.m"
      mercury__io__write_3_p_0((MR_Word) &analysis__analysis__type_ctor_info_func_id_0, ((MR_Box) (analysis__FuncId_9)));
    }
#line 567 "analysis.m"
    {
#line 567 "analysis.m"
      mercury__io__nl_2_p_0();
#line 567 "analysis.m"
      return;
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
  MR_Word analysis__HeadVar__4_17)
#line 551 "analysis.m"
{
#line 551 "analysis.m"
  {
#line 551 "analysis.m"
    MR_bool analysis__succeeded;
#line 551 "analysis.m"
    MR_Box analysis__ResultCall_15 = (MR_hl_field(MR_mktag(0), analysis__HeadVar__4_17, (MR_Integer) 0));
#line 553 "analysis.m"
    MR_Box analysis__V_19_19 = (MR_hl_field(MR_mktag(0), analysis__HeadVar__4_17, (MR_Integer) 1));
#line 553 "analysis.m"
    MR_Word analysis__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__4_17, (MR_Integer) 2)));

#line 554 "analysis.m"
    {
#line 554 "analysis.m"
      MR_Word analysis__TypeClassInfo_for_call_pattern_28;
#line 554 "analysis.m"
      MR_Word analysis__TypeClassInfo_for_partial_order_30;
#line 5724 "analysis.c"
      MR_bool MR_CALL (* analysis__func_0)(MR_Box, MR_Box, MR_Box, MR_Box);

#line 5727 "analysis.c"
      {
#line 5729 "analysis.c"
        mercury__private_builtin__superclass_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_21, (MR_Integer) 1, &analysis__TypeClassInfo_for_call_pattern_28);
      }
#line 5732 "analysis.c"
      {
#line 5734 "analysis.c"
        mercury__private_builtin__superclass_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_call_pattern_28, (MR_Integer) 1, &analysis__TypeClassInfo_for_partial_order_30);
      }
#line 5737 "analysis.c"
      analysis__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), analysis__TypeClassInfo_for_partial_order_30, (MR_Integer) 0)), (MR_Integer) 5)));
#line 5739 "analysis.c"
      {
#line 5741 "analysis.c"
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
#line 5754 "analysis.c"
        MR_bool MR_CALL (* analysis__func_1)(MR_Box, MR_Box, MR_Box, MR_Box);

#line 5757 "analysis.c"
        {
#line 5759 "analysis.c"
          mercury__private_builtin__superclass_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_21, (MR_Integer) 1, &analysis__TypeClassInfo_for_call_pattern_31);
        }
#line 5762 "analysis.c"
        {
#line 5764 "analysis.c"
          mercury__private_builtin__superclass_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_call_pattern_31, (MR_Integer) 1, &analysis__TypeClassInfo_for_partial_order_33);
        }
#line 5767 "analysis.c"
        analysis__func_1 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), analysis__TypeClassInfo_for_partial_order_33, (MR_Integer) 0)), (MR_Integer) 6)));
#line 5769 "analysis.c"
        {
#line 5771 "analysis.c"
          return analysis__succeeded = analysis__func_1(((MR_Box) analysis__TypeClassInfo_for_partial_order_33), analysis__FuncInfo_10, analysis__Call_11, analysis__ResultCall_15);
        }
#line 555 "analysis.m"
      }
#line 551 "analysis.m"
    return analysis__succeeded;
#line 551 "analysis.m"
  }
#line 551 "analysis.m"
}

#line 481 "analysis.m"
static MR_Box MR_CALL 
analysis__IntroducedFrom__func__lookup_existing_call_patterns__481__1_2_f_0(
#line 481 "analysis.m"
  MR_Word analysis__TypeClassInfo_for_call_pattern_46,
#line 481 "analysis.m"
  MR_Word analysis__HeadVar__2_24)
#line 481 "analysis.m"
{
#line 481 "analysis.m"
  {
#line 481 "analysis.m"
    MR_bool analysis__succeeded;
#line 481 "analysis.m"
    MR_Box analysis__HeadVar__3_25;
#line 481 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_analysis_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_24, (MR_Integer) 0)));
#line 481 "analysis.m"
    MR_Word analysis__TypeInfo_60_60;
#line 481 "analysis.m"
    MR_Word analysis__TypeInfo_61_61;
#line 481 "analysis.m"
    MR_Box analysis__Call0_16 = (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_24, (MR_Integer) 1));
#line 481 "analysis.m"
    MR_Word analysis__V_26_26;
#line 483 "analysis.m"
    MR_Box analysis___Answer_17 = (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_24, (MR_Integer) 2));
#line 483 "analysis.m"
    MR_Word analysis___Status_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_24, (MR_Integer) 3)));

#line 5813 "analysis.c"
    {
#line 5815 "analysis.c"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_58, (MR_Integer) 4, &analysis__TypeInfo_60_60);
    }
#line 484 "analysis.m"
    {
#line 484 "analysis.m"
      analysis__V_26_26 = mercury__univ__univ_1_f_0(analysis__TypeInfo_60_60, analysis__Call0_16);
    }
#line 5823 "analysis.c"
    {
#line 5825 "analysis.c"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_call_pattern_46, (MR_Integer) 4, &analysis__TypeInfo_61_61);
    }
#line 484 "analysis.m"
    {
#line 484 "analysis.m"
      mercury__univ__det_univ_to_type_2_p_0(analysis__TypeInfo_61_61, analysis__V_26_26, &analysis__HeadVar__3_25);
    }
#line 481 "analysis.m"
    return analysis__HeadVar__3_25;
#line 481 "analysis.m"
  }
#line 481 "analysis.m"
}

#line 450 "analysis.m"
MR_bool MR_CALL 
analysis__ClassMethod_for_analysis__to_term____analysis__any_call__arity0______analysis__from_term_2_2_p_0(
#line 450 "analysis.m"
  MR_Word analysis__Term_3)
#line 450 "analysis.m"
{
#line 450 "analysis.m"
  {
#line 450 "analysis.m"
    MR_bool analysis__succeeded;
#line 450 "analysis.m"
    MR_Word analysis__V_5_5;
#line 450 "analysis.m"
    MR_String analysis__V_6_6;
#line 450 "analysis.m"
    MR_Word analysis__V_7_7;
#line 451 "analysis.m"
    MR_Word analysis__V_4_4;

#line 450 "analysis.m"
    mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 451 "analysis.m"
    analysis__succeeded = ((MR_tag((MR_Word) analysis__Term_3)) == (MR_mktag((MR_Integer) 0)));
#line 451 "analysis.m"
    if (analysis__succeeded)
#line 451 "analysis.m"
      {
#line 451 "analysis.m"
        analysis__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Term_3, (MR_Integer) 0)));
#line 451 "analysis.m"
        analysis__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Term_3, (MR_Integer) 1)));
#line 451 "analysis.m"
        analysis__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Term_3, (MR_Integer) 2)));
#line 451 "analysis.m"
        analysis__succeeded = (analysis__V_7_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 450 "analysis.m"
        if (analysis__succeeded)
#line 450 "analysis.m"
          {
#line 451 "analysis.m"
            analysis__succeeded = ((MR_tag((MR_Word) analysis__V_5_5)) == (MR_mktag((MR_Integer) 0)));
#line 451 "analysis.m"
            if (analysis__succeeded)
#line 451 "analysis.m"
              {
#line 451 "analysis.m"
                analysis__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), analysis__V_5_5, (MR_Integer) 0)));
#line 451 "analysis.m"
                analysis__succeeded = (strcmp(analysis__V_6_6, (MR_String) "any") == 0);
#line 451 "analysis.m"
              }
#line 450 "analysis.m"
          }
#line 451 "analysis.m"
      }
#line 450 "analysis.m"
    return analysis__succeeded;
#line 450 "analysis.m"
  }
#line 450 "analysis.m"
}

#line 447 "analysis.m"
MR_Word MR_CALL 
analysis__ClassMethod_for_analysis__to_term____analysis__any_call__arity0______analysis__to_term_1_1_f_0(void)
#line 447 "analysis.m"
{
#line 447 "analysis.m"
  {
#line 447 "analysis.m"
    MR_bool analysis__succeeded;
#line 447 "analysis.m"
    MR_Word analysis__Term_3;

#line 447 "analysis.m"
    {
#line 447 "analysis.m"
      return analysis__Term_3 = analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_116_111_95_116_101_114_109_95_95_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_116_111_95_116_101_114_109_95_49_95_95_91_49_93_95_48_1_f_0();
    }
#line 447 "analysis.m"
    return analysis__Term_3;
#line 447 "analysis.m"
  }
#line 447 "analysis.m"
}

#line 442 "analysis.m"
MR_bool MR_CALL 
analysis__ClassMethod_for_analysis__partial_order____analysis__no_func_info__arity0__analysis__any_call__arity0______analysis__equivalent_3_3_p_0(void)
#line 442 "analysis.m"
{
#line 443 "analysis.m"
  {
#line 443 "analysis.m"
    MR_bool analysis__succeeded;

#line 443 "analysis.m"
    {
#line 443 "analysis.m"
      return analysis__succeeded = analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_112_97_114_116_105_97_108_95_111_114_100_101_114_95_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_101_113_117_105_118_97_108_101_110_116_95_51_95_95_91_49_44_32_50_44_32_51_93_95_48_3_p_0();
    }
#line 443 "analysis.m"
    return analysis__succeeded;
#line 443 "analysis.m"
  }
#line 442 "analysis.m"
}

#line 439 "analysis.m"
MR_bool MR_CALL 
analysis__ClassMethod_for_analysis__partial_order____analysis__no_func_info__arity0__analysis__any_call__arity0______analysis__more_precise_than_3_3_p_0(void)
#line 439 "analysis.m"
{
#line 440 "analysis.m"
  {
#line 440 "analysis.m"
    MR_bool analysis__succeeded;

#line 440 "analysis.m"
    {
#line 440 "analysis.m"
      return analysis__succeeded = analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_112_97_114_116_105_97_108_95_111_114_100_101_114_95_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_109_111_114_101_95_112_114_101_99_105_115_101_95_116_104_97_110_95_51_95_95_91_49_44_32_50_44_32_51_93_95_48_3_p_0();
    }
#line 440 "analysis.m"
    return analysis__succeeded;
#line 440 "analysis.m"
  }
#line 439 "analysis.m"
}

#line 400 "analysis.m"
void MR_CALL 
analysis____Compare____some_analysis_result_0_0(
#line 400 "analysis.m"
  MR_Word * analysis__HeadVar__1_1,
#line 400 "analysis.m"
  MR_Word analysis__HeadVar__2_2,
#line 400 "analysis.m"
  MR_Word analysis__HeadVar__3_3)
#line 400 "analysis.m"
{
#line 400 "analysis.m"
  {
#line 400 "analysis.m"
    MR_bool analysis__succeeded;
#line 400 "analysis.m"
    MR_Integer analysis__CastX_12 = (MR_Integer) analysis__HeadVar__2_2;
#line 400 "analysis.m"
    MR_Integer analysis__CastY_13 = (MR_Integer) analysis__HeadVar__3_3;

#line 400 "analysis.m"
    analysis__succeeded = (analysis__CastX_12 == analysis__CastY_13);
#line 400 "analysis.m"
    if (analysis__succeeded)
#line 400 "analysis.m"
      *analysis__HeadVar__1_1 = (MR_Integer) 0;
#line 400 "analysis.m"
    else
#line 400 "analysis.m"
      {
#line 400 "analysis.m"
        MR_Word analysis__TypeClassInfo_for_analysis_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 0)));
#line 400 "analysis.m"
        MR_Word analysis__TypeClassInfo_for_analysis_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__3_3, (MR_Integer) 0)));
#line 400 "analysis.m"
        MR_Box analysis__V_4_4 = (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 1));
#line 400 "analysis.m"
        MR_Box analysis__V_5_5 = (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 2));
#line 400 "analysis.m"
        MR_Word analysis__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 3)));
#line 400 "analysis.m"
        MR_Box analysis__V_7_7 = (MR_hl_field(MR_mktag(0), analysis__HeadVar__3_3, (MR_Integer) 1));
#line 400 "analysis.m"
        MR_Box analysis__V_8_8 = (MR_hl_field(MR_mktag(0), analysis__HeadVar__3_3, (MR_Integer) 2));
#line 400 "analysis.m"
        MR_Word analysis__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__3_3, (MR_Integer) 3)));
#line 400 "analysis.m"
        MR_Word analysis__V_10_10;
#line 400 "analysis.m"
        MR_Word analysis__TypeInfo_17_17;
#line 400 "analysis.m"
        MR_Word analysis__TypeInfo_18_18;

#line 6024 "analysis.c"
        {
#line 6026 "analysis.c"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_14, (MR_Integer) 4, &analysis__TypeInfo_17_17);
        }
#line 6029 "analysis.c"
        {
#line 6031 "analysis.c"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_15, (MR_Integer) 4, &analysis__TypeInfo_18_18);
        }
#line 400 "analysis.m"
        {
#line 400 "analysis.m"
          mercury__private_builtin__typed_compare_3_p_0(analysis__TypeInfo_17_17, analysis__TypeInfo_18_18, &analysis__V_10_10, analysis__V_4_4, analysis__V_7_7);
        }
#line 400 "analysis.m"
        analysis__succeeded = (analysis__V_10_10 == (MR_Integer) 0);
#line 400 "analysis.m"
        analysis__succeeded = !(analysis__succeeded);
#line 400 "analysis.m"
        if (analysis__succeeded)
#line 400 "analysis.m"
          *analysis__HeadVar__1_1 = analysis__V_10_10;
#line 400 "analysis.m"
        else
#line 400 "analysis.m"
          {
#line 400 "analysis.m"
            MR_Word analysis__V_11_11;
#line 400 "analysis.m"
            MR_Word analysis__TypeInfo_20_20;
#line 400 "analysis.m"
            MR_Word analysis__TypeInfo_21_21;

#line 6058 "analysis.c"
            {
#line 6060 "analysis.c"
              mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_14, (MR_Integer) 5, &analysis__TypeInfo_20_20);
            }
#line 6063 "analysis.c"
            {
#line 6065 "analysis.c"
              mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_15, (MR_Integer) 5, &analysis__TypeInfo_21_21);
            }
#line 400 "analysis.m"
            {
#line 400 "analysis.m"
              mercury__private_builtin__typed_compare_3_p_0(analysis__TypeInfo_20_20, analysis__TypeInfo_21_21, &analysis__V_11_11, analysis__V_5_5, analysis__V_8_8);
            }
#line 400 "analysis.m"
            analysis__succeeded = (analysis__V_11_11 == (MR_Integer) 0);
#line 400 "analysis.m"
            analysis__succeeded = !(analysis__succeeded);
#line 400 "analysis.m"
            if (analysis__succeeded)
#line 400 "analysis.m"
              *analysis__HeadVar__1_1 = analysis__V_11_11;
#line 400 "analysis.m"
            else
#line 400 "analysis.m"
              {
#line 400 "analysis.m"
                MR_Integer analysis__V_23_23 = (MR_Integer) analysis__V_6_6;
#line 400 "analysis.m"
                MR_Integer analysis__V_24_24 = (MR_Integer) analysis__V_9_9;

#line 400 "analysis.m"
                {
#line 400 "analysis.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(analysis__HeadVar__1_1, analysis__V_23_23, analysis__V_24_24);
#line 400 "analysis.m"
                  return;
                }
#line 400 "analysis.m"
              }
#line 400 "analysis.m"
          }
#line 400 "analysis.m"
      }
#line 400 "analysis.m"
  }
#line 400 "analysis.m"
}

#line 400 "analysis.m"
MR_bool MR_CALL 
analysis____Unify____some_analysis_result_0_0(
#line 400 "analysis.m"
  MR_Word analysis__HeadVar__1_1,
#line 400 "analysis.m"
  MR_Word analysis__HeadVar__2_2)
#line 400 "analysis.m"
{
#line 400 "analysis.m"
  {
#line 400 "analysis.m"
    MR_bool analysis__succeeded;
#line 400 "analysis.m"
    MR_Integer analysis__CastX_9 = (MR_Integer) analysis__HeadVar__1_1;
#line 400 "analysis.m"
    MR_Integer analysis__CastY_10 = (MR_Integer) analysis__HeadVar__2_2;

#line 400 "analysis.m"
    analysis__succeeded = (analysis__CastX_9 == analysis__CastY_10);
#line 400 "analysis.m"
    if (analysis__succeeded)
#line 400 "analysis.m"
      analysis__succeeded = MR_TRUE;
#line 400 "analysis.m"
    else
#line 400 "analysis.m"
      {
#line 400 "analysis.m"
        MR_Word analysis__TypeClassInfo_for_analysis_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__1_1, (MR_Integer) 0)));
#line 400 "analysis.m"
        MR_Word analysis__TypeClassInfo_for_analysis_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 0)));
#line 400 "analysis.m"
        MR_Word analysis__TypeInfo_14_14;
#line 400 "analysis.m"
        MR_Word analysis__TypeInfo_15_15;
#line 400 "analysis.m"
        MR_Word analysis__TypeInfo_17_17;
#line 400 "analysis.m"
        MR_Word analysis__TypeInfo_18_18;
#line 400 "analysis.m"
        MR_Box analysis__V_3_3 = (MR_hl_field(MR_mktag(0), analysis__HeadVar__1_1, (MR_Integer) 1));
#line 400 "analysis.m"
        MR_Box analysis__V_4_4 = (MR_hl_field(MR_mktag(0), analysis__HeadVar__1_1, (MR_Integer) 2));
#line 400 "analysis.m"
        MR_Word analysis__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__1_1, (MR_Integer) 3)));
#line 400 "analysis.m"
        MR_Box analysis__V_6_6 = (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 1));
#line 400 "analysis.m"
        MR_Box analysis__V_7_7 = (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 2));
#line 400 "analysis.m"
        MR_Word analysis__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 3)));
#line 400 "analysis.m"
        MR_Integer analysis__PolyConst5_16;

#line 6163 "analysis.c"
        {
#line 6165 "analysis.c"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_11, (MR_Integer) 4, &analysis__TypeInfo_14_14);
        }
#line 6168 "analysis.c"
        {
#line 6170 "analysis.c"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_12, (MR_Integer) 4, &analysis__TypeInfo_15_15);
        }
#line 400 "analysis.m"
        {
#line 400 "analysis.m"
          analysis__succeeded = mercury__private_builtin__typed_unify_2_p_0(analysis__TypeInfo_14_14, analysis__TypeInfo_15_15, analysis__V_3_3, analysis__V_6_6);
        }
#line 400 "analysis.m"
        if (analysis__succeeded)
#line 400 "analysis.m"
          {
#line 6182 "analysis.c"
            analysis__PolyConst5_16 = (MR_Integer) 5;
#line 6184 "analysis.c"
            {
#line 6186 "analysis.c"
              mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_11, analysis__PolyConst5_16, &analysis__TypeInfo_17_17);
            }
#line 6189 "analysis.c"
            {
#line 6191 "analysis.c"
              mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_12, analysis__PolyConst5_16, &analysis__TypeInfo_18_18);
            }
#line 400 "analysis.m"
            {
#line 400 "analysis.m"
              analysis__succeeded = mercury__private_builtin__typed_unify_2_p_0(analysis__TypeInfo_17_17, analysis__TypeInfo_18_18, analysis__V_4_4, analysis__V_7_7);
            }
#line 400 "analysis.m"
            if (analysis__succeeded)
#line 400 "analysis.m"
              analysis__succeeded = (analysis__V_5_5 == analysis__V_8_8);
#line 400 "analysis.m"
          }
#line 400 "analysis.m"
      }
#line 400 "analysis.m"
    return analysis__succeeded;
#line 400 "analysis.m"
  }
#line 400 "analysis.m"
}

#line 145 "analysis.m"
void MR_CALL 
analysis____Compare____no_func_info_0_0(
#line 145 "analysis.m"
  MR_Word * analysis__HeadVar__1_1)
#line 145 "analysis.m"
{
#line 145 "analysis.m"
  {
#line 145 "analysis.m"
    MR_bool analysis__succeeded;

#line 145 "analysis.m"
    {
#line 145 "analysis.m"
      analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(analysis__HeadVar__1_1);
#line 145 "analysis.m"
      return;
    }
#line 145 "analysis.m"
  }
#line 145 "analysis.m"
}

#line 145 "analysis.m"
MR_bool MR_CALL 
analysis____Unify____no_func_info_0_0(void)
#line 145 "analysis.m"
{
#line 145 "analysis.m"
  {
#line 145 "analysis.m"
    MR_bool analysis__succeeded;

#line 145 "analysis.m"
    {
#line 145 "analysis.m"
      return analysis__succeeded = analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_48_95_95_91_49_44_32_50_93_95_48_2_p_0();
    }
#line 145 "analysis.m"
    return analysis__succeeded;
#line 145 "analysis.m"
  }
#line 145 "analysis.m"
}

#line 429 "analysis.m"
void MR_CALL 
analysis____Compare____module_analysis_map_1_0(
#line 429 "analysis.m"
  MR_Word analysis__TypeInfo_for_T_6,
#line 429 "analysis.m"
  MR_Word * analysis__HeadVar__1_1,
#line 429 "analysis.m"
  MR_Word analysis__HeadVar__2_2,
#line 429 "analysis.m"
  MR_Word analysis__HeadVar__3_3)
#line 429 "analysis.m"
{
#line 429 "analysis.m"
  {
#line 429 "analysis.m"
    MR_bool analysis__succeeded;
#line 429 "analysis.m"
    MR_Word analysis__TypeInfo_10_10;
#line 429 "analysis.m"
    MR_Word analysis__TypeInfo_12_12;
#line 429 "analysis.m"
    MR_Word analysis__Cast_HeadVar1_4 = analysis__HeadVar__2_2;
#line 429 "analysis.m"
    MR_Word analysis__Cast_HeadVar2_5 = analysis__HeadVar__3_3;

#line 6286 "analysis.c"
    {
#line 6288 "analysis.c"
      analysis__TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6290 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_10_10, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
#line 6292 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_10_10, 1) = ((MR_Box) (analysis__TypeInfo_for_T_6));
#line 6294 "analysis.c"
    }
#line 6296 "analysis.c"
    {
#line 6298 "analysis.c"
      analysis__TypeInfo_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 6300 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_12_12, 0) = ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2));
#line 6302 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_12_12, 1) = ((MR_Box) (&analysis__analysis__type_ctor_info_func_id_0));
#line 6304 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_12_12, 2) = ((MR_Box) (analysis__TypeInfo_10_10));
#line 6306 "analysis.c"
    }
#line 429 "analysis.m"
    {
#line 429 "analysis.m"
      mercury__tree234____Compare____tree234_2_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, analysis__TypeInfo_12_12, analysis__HeadVar__1_1, analysis__Cast_HeadVar1_4, analysis__Cast_HeadVar2_5);
#line 429 "analysis.m"
      return;
    }
#line 429 "analysis.m"
  }
#line 429 "analysis.m"
}

#line 429 "analysis.m"
MR_bool MR_CALL 
analysis____Unify____module_analysis_map_1_0(
#line 429 "analysis.m"
  MR_Word analysis__TypeInfo_for_T_5,
#line 429 "analysis.m"
  MR_Word analysis__HeadVar__1_1,
#line 429 "analysis.m"
  MR_Word analysis__HeadVar__2_2)
#line 429 "analysis.m"
{
#line 429 "analysis.m"
  {
#line 429 "analysis.m"
    MR_bool analysis__succeeded;
#line 429 "analysis.m"
    MR_Word analysis__TypeInfo_9_9;
#line 429 "analysis.m"
    MR_Word analysis__TypeInfo_11_11;
#line 429 "analysis.m"
    MR_Word analysis__Cast_HeadVar1_3 = analysis__HeadVar__1_1;
#line 429 "analysis.m"
    MR_Word analysis__Cast_HeadVar2_4 = analysis__HeadVar__2_2;

#line 6344 "analysis.c"
    {
#line 6346 "analysis.c"
      analysis__TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6348 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_9_9, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
#line 6350 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_9_9, 1) = ((MR_Box) (analysis__TypeInfo_for_T_5));
#line 6352 "analysis.c"
    }
#line 6354 "analysis.c"
    {
#line 6356 "analysis.c"
      analysis__TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 6358 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_11_11, 0) = ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2));
#line 6360 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_11_11, 1) = ((MR_Box) (&analysis__analysis__type_ctor_info_func_id_0));
#line 6362 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_11_11, 2) = ((MR_Box) (analysis__TypeInfo_9_9));
#line 6364 "analysis.c"
    }
#line 429 "analysis.m"
    {
#line 429 "analysis.m"
      return analysis__succeeded = mercury__tree234____Unify____tree234_2_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, analysis__TypeInfo_11_11, analysis__Cast_HeadVar1_3, analysis__Cast_HeadVar2_4);
    }
#line 429 "analysis.m"
    return analysis__succeeded;
#line 429 "analysis.m"
  }
#line 429 "analysis.m"
}

#line 393 "analysis.m"
void MR_CALL 
analysis____Compare____make_analysis_registry_0_0(
#line 393 "analysis.m"
  MR_Word * analysis__HeadVar__1_1,
#line 393 "analysis.m"
  MR_Word analysis__HeadVar__2_2,
#line 393 "analysis.m"
  MR_Word analysis__HeadVar__3_3)
#line 393 "analysis.m"
{
#line 393 "analysis.m"
  {
#line 393 "analysis.m"
    MR_bool analysis__succeeded;
#line 393 "analysis.m"
    MR_Integer analysis__Cast_HeadVar1_4 = (MR_Integer) analysis__HeadVar__2_2;
#line 393 "analysis.m"
    MR_Integer analysis__Cast_HeadVar2_5 = (MR_Integer) analysis__HeadVar__3_3;

#line 393 "analysis.m"
    {
#line 393 "analysis.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(analysis__HeadVar__1_1, analysis__Cast_HeadVar1_4, analysis__Cast_HeadVar2_5);
#line 393 "analysis.m"
      return;
    }
#line 393 "analysis.m"
  }
#line 393 "analysis.m"
}

#line 393 "analysis.m"
MR_bool MR_CALL 
analysis____Unify____make_analysis_registry_0_0(
#line 393 "analysis.m"
  MR_Word analysis__HeadVar__2_1,
#line 393 "analysis.m"
  MR_Word analysis__HeadVar__2_2)
#line 393 "analysis.m"
{
#line 6419 "analysis.c"
  {
#line 6421 "analysis.c"
    MR_bool analysis__succeeded = (analysis__HeadVar__2_1 == analysis__HeadVar__2_2);

#line 6424 "analysis.c"
    return analysis__succeeded;
#line 6426 "analysis.c"
  }
#line 393 "analysis.m"
}

#line 417 "analysis.m"
void MR_CALL 
analysis____Compare____imdg_arc_0_0(
#line 417 "analysis.m"
  MR_Word * analysis__HeadVar__1_1,
#line 417 "analysis.m"
  MR_Word analysis__HeadVar__2_2,
#line 417 "analysis.m"
  MR_Word analysis__HeadVar__3_3)
#line 417 "analysis.m"
{
#line 417 "analysis.m"
  {
#line 417 "analysis.m"
    MR_bool analysis__succeeded;
#line 417 "analysis.m"
    MR_Integer analysis__CastX_9 = (MR_Integer) analysis__HeadVar__2_2;
#line 417 "analysis.m"
    MR_Integer analysis__CastY_10 = (MR_Integer) analysis__HeadVar__3_3;

#line 417 "analysis.m"
    analysis__succeeded = (analysis__CastX_9 == analysis__CastY_10);
#line 417 "analysis.m"
    if (analysis__succeeded)
#line 417 "analysis.m"
      *analysis__HeadVar__1_1 = (MR_Integer) 0;
#line 417 "analysis.m"
    else
#line 417 "analysis.m"
      {
#line 417 "analysis.m"
        MR_Word analysis__TypeClassInfo_for_call_pattern_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 0)));
#line 417 "analysis.m"
        MR_Word analysis__TypeClassInfo_for_call_pattern_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__3_3, (MR_Integer) 0)));
#line 417 "analysis.m"
        MR_Box analysis__V_4_4 = (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 1));
#line 417 "analysis.m"
        MR_Word analysis__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 2)));
#line 417 "analysis.m"
        MR_Box analysis__V_6_6 = (MR_hl_field(MR_mktag(0), analysis__HeadVar__3_3, (MR_Integer) 1));
#line 417 "analysis.m"
        MR_Word analysis__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__3_3, (MR_Integer) 2)));
#line 417 "analysis.m"
        MR_Word analysis__V_8_8;
#line 417 "analysis.m"
        MR_Word analysis__TypeInfo_14_14;
#line 417 "analysis.m"
        MR_Word analysis__TypeInfo_15_15;

#line 6480 "analysis.c"
        {
#line 6482 "analysis.c"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_call_pattern_11, (MR_Integer) 4, &analysis__TypeInfo_14_14);
        }
#line 6485 "analysis.c"
        {
#line 6487 "analysis.c"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_call_pattern_12, (MR_Integer) 4, &analysis__TypeInfo_15_15);
        }
#line 417 "analysis.m"
        {
#line 417 "analysis.m"
          mercury__private_builtin__typed_compare_3_p_0(analysis__TypeInfo_14_14, analysis__TypeInfo_15_15, &analysis__V_8_8, analysis__V_4_4, analysis__V_6_6);
        }
#line 417 "analysis.m"
        analysis__succeeded = (analysis__V_8_8 == (MR_Integer) 0);
#line 417 "analysis.m"
        analysis__succeeded = !(analysis__succeeded);
#line 417 "analysis.m"
        if (analysis__succeeded)
#line 417 "analysis.m"
          *analysis__HeadVar__1_1 = analysis__V_8_8;
#line 417 "analysis.m"
        else
#line 417 "analysis.m"
          {
#line 417 "analysis.m"
            mdbcomp__sym_name____Compare____sym_name_0_0(analysis__HeadVar__1_1, analysis__V_5_5, analysis__V_7_7);
#line 417 "analysis.m"
            return;
          }
#line 417 "analysis.m"
      }
#line 417 "analysis.m"
  }
#line 417 "analysis.m"
}

#line 417 "analysis.m"
MR_bool MR_CALL 
analysis____Unify____imdg_arc_0_0(
#line 417 "analysis.m"
  MR_Word analysis__HeadVar__1_1,
#line 417 "analysis.m"
  MR_Word analysis__HeadVar__2_2)
#line 417 "analysis.m"
{
#line 417 "analysis.m"
  {
#line 417 "analysis.m"
    MR_bool analysis__succeeded;
#line 417 "analysis.m"
    MR_Integer analysis__CastX_7 = (MR_Integer) analysis__HeadVar__1_1;
#line 417 "analysis.m"
    MR_Integer analysis__CastY_8 = (MR_Integer) analysis__HeadVar__2_2;

#line 417 "analysis.m"
    analysis__succeeded = (analysis__CastX_7 == analysis__CastY_8);
#line 417 "analysis.m"
    if (analysis__succeeded)
#line 417 "analysis.m"
      analysis__succeeded = MR_TRUE;
#line 417 "analysis.m"
    else
#line 417 "analysis.m"
      {
#line 417 "analysis.m"
        MR_Word analysis__TypeClassInfo_for_call_pattern_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__1_1, (MR_Integer) 0)));
#line 417 "analysis.m"
        MR_Word analysis__TypeClassInfo_for_call_pattern_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 0)));
#line 417 "analysis.m"
        MR_Word analysis__TypeInfo_12_12;
#line 417 "analysis.m"
        MR_Word analysis__TypeInfo_13_13;
#line 417 "analysis.m"
        MR_Box analysis__V_3_3 = (MR_hl_field(MR_mktag(0), analysis__HeadVar__1_1, (MR_Integer) 1));
#line 417 "analysis.m"
        MR_Word analysis__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__1_1, (MR_Integer) 2)));
#line 417 "analysis.m"
        MR_Box analysis__V_5_5 = (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 1));
#line 417 "analysis.m"
        MR_Word analysis__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 2)));

#line 6564 "analysis.c"
        {
#line 6566 "analysis.c"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_call_pattern_9, (MR_Integer) 4, &analysis__TypeInfo_12_12);
        }
#line 6569 "analysis.c"
        {
#line 6571 "analysis.c"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_call_pattern_10, (MR_Integer) 4, &analysis__TypeInfo_13_13);
        }
#line 417 "analysis.m"
        {
#line 417 "analysis.m"
          analysis__succeeded = mercury__private_builtin__typed_unify_2_p_0(analysis__TypeInfo_12_12, analysis__TypeInfo_13_13, analysis__V_3_3, analysis__V_5_5);
        }
#line 417 "analysis.m"
        if (analysis__succeeded)
#line 417 "analysis.m"
          {
#line 417 "analysis.m"
            return analysis__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(analysis__V_4_4, analysis__V_6_6);
          }
#line 417 "analysis.m"
      }
#line 417 "analysis.m"
    return analysis__succeeded;
#line 417 "analysis.m"
  }
#line 417 "analysis.m"
}

#line 171 "analysis.m"
void MR_CALL 
analysis____Compare____func_id_0_0(
#line 171 "analysis.m"
  MR_Word * analysis__HeadVar__1_1,
#line 171 "analysis.m"
  MR_Word analysis__HeadVar__2_2,
#line 171 "analysis.m"
  MR_Word analysis__HeadVar__3_3)
#line 171 "analysis.m"
{
#line 171 "analysis.m"
  {
#line 171 "analysis.m"
    MR_bool analysis__succeeded;
#line 171 "analysis.m"
    MR_Integer analysis__CastX_15 = (MR_Integer) analysis__HeadVar__2_2;
#line 171 "analysis.m"
    MR_Integer analysis__CastY_16 = (MR_Integer) analysis__HeadVar__3_3;

#line 171 "analysis.m"
    analysis__succeeded = (analysis__CastX_15 == analysis__CastY_16);
#line 171 "analysis.m"
    if (analysis__succeeded)
#line 6619 "analysis.c"
      *analysis__HeadVar__1_1 = (MR_Integer) 0;
#line 171 "analysis.m"
    else
#line 171 "analysis.m"
      {
#line 171 "analysis.m"
        MR_Word analysis__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 0)));
#line 171 "analysis.m"
        MR_String analysis__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 1)));
#line 171 "analysis.m"
        MR_Integer analysis__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 2)));
#line 171 "analysis.m"
        MR_Integer analysis__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 3)));
#line 171 "analysis.m"
        MR_Word analysis__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__3_3, (MR_Integer) 0)));
#line 171 "analysis.m"
        MR_String analysis__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(0), analysis__HeadVar__3_3, (MR_Integer) 1)));
#line 171 "analysis.m"
        MR_Integer analysis__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), analysis__HeadVar__3_3, (MR_Integer) 2)));
#line 171 "analysis.m"
        MR_Integer analysis__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), analysis__HeadVar__3_3, (MR_Integer) 3)));
#line 171 "analysis.m"
        MR_Word analysis__V_12_12;
#line 171 "analysis.m"
        MR_Integer analysis__V_21_21 = (MR_Integer) analysis__V_4_4;
#line 171 "analysis.m"
        MR_Integer analysis__V_22_22 = (MR_Integer) analysis__V_8_8;

#line 171 "analysis.m"
        {
#line 171 "analysis.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&analysis__V_12_12, analysis__V_21_21, analysis__V_22_22);
        }
#line 6653 "analysis.c"
        analysis__succeeded = (analysis__V_12_12 == (MR_Integer) 0);
#line 171 "analysis.m"
        analysis__succeeded = !(analysis__succeeded);
#line 171 "analysis.m"
        if (analysis__succeeded)
#line 171 "analysis.m"
          *analysis__HeadVar__1_1 = analysis__V_12_12;
#line 171 "analysis.m"
        else
#line 171 "analysis.m"
          {
#line 171 "analysis.m"
            MR_Word analysis__V_13_13;

#line 171 "analysis.m"
            {
#line 171 "analysis.m"
              mercury__private_builtin__builtin_compare_string_3_p_0(&analysis__V_13_13, analysis__V_5_5, analysis__V_9_9);
            }
#line 6673 "analysis.c"
            analysis__succeeded = (analysis__V_13_13 == (MR_Integer) 0);
#line 171 "analysis.m"
            analysis__succeeded = !(analysis__succeeded);
#line 171 "analysis.m"
            if (analysis__succeeded)
#line 171 "analysis.m"
              *analysis__HeadVar__1_1 = analysis__V_13_13;
#line 171 "analysis.m"
            else
#line 171 "analysis.m"
              {
#line 171 "analysis.m"
                MR_Word analysis__V_14_14;

#line 171 "analysis.m"
                {
#line 171 "analysis.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(&analysis__V_14_14, analysis__V_6_6, analysis__V_10_10);
                }
#line 6693 "analysis.c"
                analysis__succeeded = (analysis__V_14_14 == (MR_Integer) 0);
#line 171 "analysis.m"
                analysis__succeeded = !(analysis__succeeded);
#line 171 "analysis.m"
                if (analysis__succeeded)
#line 171 "analysis.m"
                  *analysis__HeadVar__1_1 = analysis__V_14_14;
#line 171 "analysis.m"
                else
#line 171 "analysis.m"
                  {
#line 171 "analysis.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(analysis__HeadVar__1_1, analysis__V_7_7, analysis__V_11_11);
#line 171 "analysis.m"
                    return;
                  }
#line 171 "analysis.m"
              }
#line 171 "analysis.m"
          }
#line 171 "analysis.m"
      }
#line 171 "analysis.m"
  }
#line 171 "analysis.m"
}

#line 171 "analysis.m"
MR_bool MR_CALL 
analysis____Unify____func_id_0_0(
#line 171 "analysis.m"
  MR_Word analysis__HeadVar__1_1,
#line 171 "analysis.m"
  MR_Word analysis__HeadVar__2_2)
#line 171 "analysis.m"
{
#line 171 "analysis.m"
  {
#line 171 "analysis.m"
    MR_bool analysis__succeeded;
#line 171 "analysis.m"
    MR_Integer analysis__CastX_11 = (MR_Integer) analysis__HeadVar__1_1;
#line 171 "analysis.m"
    MR_Integer analysis__CastY_12 = (MR_Integer) analysis__HeadVar__2_2;

#line 171 "analysis.m"
    analysis__succeeded = (analysis__CastX_11 == analysis__CastY_12);
#line 171 "analysis.m"
    if (analysis__succeeded)
#line 171 "analysis.m"
      analysis__succeeded = MR_TRUE;
#line 171 "analysis.m"
    else
#line 171 "analysis.m"
      {
#line 171 "analysis.m"
        MR_Word analysis__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__1_1, (MR_Integer) 0)));
#line 171 "analysis.m"
        MR_String analysis__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), analysis__HeadVar__1_1, (MR_Integer) 1)));
#line 171 "analysis.m"
        MR_Integer analysis__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), analysis__HeadVar__1_1, (MR_Integer) 2)));
#line 171 "analysis.m"
        MR_Integer analysis__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), analysis__HeadVar__1_1, (MR_Integer) 3)));
#line 171 "analysis.m"
        MR_Word analysis__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 0)));
#line 171 "analysis.m"
        MR_String analysis__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 1)));
#line 171 "analysis.m"
        MR_Integer analysis__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 2)));
#line 171 "analysis.m"
        MR_Integer analysis__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 3)));

#line 6766 "analysis.c"
        analysis__succeeded = (analysis__V_3_3 == analysis__V_7_7);
#line 171 "analysis.m"
        if (analysis__succeeded)
#line 171 "analysis.m"
          {
#line 6772 "analysis.c"
            analysis__succeeded = (strcmp(analysis__V_4_4, analysis__V_8_8) == 0);
#line 171 "analysis.m"
            if (analysis__succeeded)
#line 171 "analysis.m"
              {
#line 6778 "analysis.c"
                analysis__succeeded = (analysis__V_5_5 == analysis__V_9_9);
#line 171 "analysis.m"
                if (analysis__succeeded)
#line 6782 "analysis.c"
                  analysis__succeeded = (analysis__V_6_6 == analysis__V_10_10);
#line 171 "analysis.m"
              }
#line 171 "analysis.m"
          }
#line 171 "analysis.m"
      }
#line 171 "analysis.m"
    return analysis__succeeded;
#line 171 "analysis.m"
  }
#line 171 "analysis.m"
}

#line 430 "analysis.m"
void MR_CALL 
analysis____Compare____func_analysis_map_1_0(
#line 430 "analysis.m"
  MR_Word analysis__TypeInfo_for_T_6,
#line 430 "analysis.m"
  MR_Word * analysis__HeadVar__1_1,
#line 430 "analysis.m"
  MR_Word analysis__HeadVar__2_2,
#line 430 "analysis.m"
  MR_Word analysis__HeadVar__3_3)
#line 430 "analysis.m"
{
#line 430 "analysis.m"
  {
#line 430 "analysis.m"
    MR_bool analysis__succeeded;
#line 430 "analysis.m"
    MR_Word analysis__TypeInfo_9_9;
#line 430 "analysis.m"
    MR_Word analysis__Cast_HeadVar1_4 = analysis__HeadVar__2_2;
#line 430 "analysis.m"
    MR_Word analysis__Cast_HeadVar2_5 = analysis__HeadVar__3_3;

#line 6821 "analysis.c"
    {
#line 6823 "analysis.c"
      analysis__TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6825 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_9_9, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
#line 6827 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_9_9, 1) = ((MR_Box) (analysis__TypeInfo_for_T_6));
#line 6829 "analysis.c"
    }
#line 430 "analysis.m"
    {
#line 430 "analysis.m"
      mercury__tree234____Compare____tree234_2_0((MR_Word) &analysis__analysis__type_ctor_info_func_id_0, analysis__TypeInfo_9_9, analysis__HeadVar__1_1, analysis__Cast_HeadVar1_4, analysis__Cast_HeadVar2_5);
#line 430 "analysis.m"
      return;
    }
#line 430 "analysis.m"
  }
#line 430 "analysis.m"
}

#line 430 "analysis.m"
MR_bool MR_CALL 
analysis____Unify____func_analysis_map_1_0(
#line 430 "analysis.m"
  MR_Word analysis__TypeInfo_for_T_5,
#line 430 "analysis.m"
  MR_Word analysis__HeadVar__1_1,
#line 430 "analysis.m"
  MR_Word analysis__HeadVar__2_2)
#line 430 "analysis.m"
{
#line 430 "analysis.m"
  {
#line 430 "analysis.m"
    MR_bool analysis__succeeded;
#line 430 "analysis.m"
    MR_Word analysis__TypeInfo_8_8;
#line 430 "analysis.m"
    MR_Word analysis__Cast_HeadVar1_3 = analysis__HeadVar__1_1;
#line 430 "analysis.m"
    MR_Word analysis__Cast_HeadVar2_4 = analysis__HeadVar__2_2;

#line 6865 "analysis.c"
    {
#line 6867 "analysis.c"
      analysis__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6869 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_8_8, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
#line 6871 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_8_8, 1) = ((MR_Box) (analysis__TypeInfo_for_T_5));
#line 6873 "analysis.c"
    }
#line 430 "analysis.m"
    {
#line 430 "analysis.m"
      return analysis__succeeded = mercury__tree234____Unify____tree234_2_0((MR_Word) &analysis__analysis__type_ctor_info_func_id_0, analysis__TypeInfo_8_8, analysis__Cast_HeadVar1_3, analysis__Cast_HeadVar2_4);
    }
#line 430 "analysis.m"
    return analysis__succeeded;
#line 430 "analysis.m"
  }
#line 430 "analysis.m"
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
#line 106 "analysis.m"
      return;
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
#line 6928 "analysis.c"
  {
#line 6930 "analysis.c"
    MR_bool analysis__succeeded = (analysis__HeadVar__2_1 == analysis__HeadVar__2_2);

#line 6933 "analysis.c"
    return analysis__succeeded;
#line 6935 "analysis.c"
  }
#line 106 "analysis.m"
}

#line 151 "analysis.m"
void MR_CALL 
analysis____Compare____any_call_0_0(
#line 151 "analysis.m"
  MR_Word * analysis__HeadVar__1_1)
#line 151 "analysis.m"
{
#line 151 "analysis.m"
  {
#line 151 "analysis.m"
    MR_bool analysis__succeeded;

#line 151 "analysis.m"
    {
#line 151 "analysis.m"
      analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(analysis__HeadVar__1_1);
#line 151 "analysis.m"
      return;
    }
#line 151 "analysis.m"
  }
#line 151 "analysis.m"
}

#line 151 "analysis.m"
MR_bool MR_CALL 
analysis____Unify____any_call_0_0(void)
#line 151 "analysis.m"
{
#line 151 "analysis.m"
  {
#line 151 "analysis.m"
    MR_bool analysis__succeeded;

#line 151 "analysis.m"
    {
#line 151 "analysis.m"
      return analysis__succeeded = analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_48_95_95_91_49_44_32_50_93_95_48_2_p_0();
    }
#line 151 "analysis.m"
    return analysis__succeeded;
#line 151 "analysis.m"
  }
#line 151 "analysis.m"
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

#line 160 "analysis.m"
void MR_CALL 
analysis____Compare____analysis_status_0_0(
#line 160 "analysis.m"
  MR_Word * analysis__HeadVar__1_1,
#line 160 "analysis.m"
  MR_Word analysis__HeadVar__2_2,
#line 160 "analysis.m"
  MR_Word analysis__HeadVar__3_3)
#line 160 "analysis.m"
{
#line 160 "analysis.m"
  {
#line 160 "analysis.m"
    MR_bool analysis__succeeded;
#line 160 "analysis.m"
    MR_Integer analysis__Cast_HeadVar1_4 = (MR_Integer) analysis__HeadVar__2_2;
#line 160 "analysis.m"
    MR_Integer analysis__Cast_HeadVar2_5 = (MR_Integer) analysis__HeadVar__3_3;

#line 160 "analysis.m"
    {
#line 160 "analysis.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(analysis__HeadVar__1_1, analysis__Cast_HeadVar1_4, analysis__Cast_HeadVar2_5);
#line 160 "analysis.m"
      return;
    }
#line 160 "analysis.m"
  }
#line 160 "analysis.m"
}

#line 160 "analysis.m"
MR_bool MR_CALL 
analysis____Unify____analysis_status_0_0(
#line 160 "analysis.m"
  MR_Word analysis__HeadVar__2_1,
#line 160 "analysis.m"
  MR_Word analysis__HeadVar__2_2)
#line 160 "analysis.m"
{
#line 7103 "analysis.c"
  {
#line 7105 "analysis.c"
    MR_bool analysis__succeeded = (analysis__HeadVar__2_1 == analysis__HeadVar__2_2);

#line 7108 "analysis.c"
    return analysis__succeeded;
#line 7110 "analysis.c"
  }
#line 160 "analysis.m"
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
#line 7143 "analysis.c"
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
#line 7169 "analysis.c"
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
#line 7189 "analysis.c"
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
#line 125 "analysis.m"
                  return;
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

#line 7269 "analysis.c"
        {
#line 7271 "analysis.c"
          analysis__succeeded = mercury__builtin__unify_2_p_0(analysis__TypeInfo_for_Call_11, analysis__V_3_3, analysis__V_6_6);
        }
#line 125 "analysis.m"
        if (analysis__succeeded)
#line 125 "analysis.m"
          {
#line 7278 "analysis.c"
            {
#line 7280 "analysis.c"
              analysis__succeeded = mercury__builtin__unify_2_p_0(analysis__TypeInfo_for_Answer_12, analysis__V_4_4, analysis__V_7_7);
            }
#line 125 "analysis.m"
            if (analysis__succeeded)
#line 7285 "analysis.c"
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

#line 409 "analysis.m"
void MR_CALL 
analysis____Compare____analysis_request_0_0(
#line 409 "analysis.m"
  MR_Word * analysis__HeadVar__1_1,
#line 409 "analysis.m"
  MR_Word analysis__HeadVar__2_2,
#line 409 "analysis.m"
  MR_Word analysis__HeadVar__3_3)
#line 409 "analysis.m"
{
#line 409 "analysis.m"
  {
#line 409 "analysis.m"
    MR_bool analysis__succeeded;
#line 409 "analysis.m"
    MR_Integer analysis__CastX_9 = (MR_Integer) analysis__HeadVar__2_2;
#line 409 "analysis.m"
    MR_Integer analysis__CastY_10 = (MR_Integer) analysis__HeadVar__3_3;

#line 409 "analysis.m"
    analysis__succeeded = (analysis__CastX_9 == analysis__CastY_10);
#line 409 "analysis.m"
    if (analysis__succeeded)
#line 409 "analysis.m"
      *analysis__HeadVar__1_1 = (MR_Integer) 0;
#line 409 "analysis.m"
    else
#line 409 "analysis.m"
      {
#line 409 "analysis.m"
        MR_Word analysis__TypeClassInfo_for_call_pattern_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 0)));
#line 409 "analysis.m"
        MR_Word analysis__TypeClassInfo_for_call_pattern_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__3_3, (MR_Integer) 0)));
#line 409 "analysis.m"
        MR_Box analysis__V_4_4 = (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 1));
#line 409 "analysis.m"
        MR_Word analysis__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 2)));
#line 409 "analysis.m"
        MR_Box analysis__V_6_6 = (MR_hl_field(MR_mktag(0), analysis__HeadVar__3_3, (MR_Integer) 1));
#line 409 "analysis.m"
        MR_Word analysis__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__3_3, (MR_Integer) 2)));
#line 409 "analysis.m"
        MR_Word analysis__V_8_8;
#line 409 "analysis.m"
        MR_Word analysis__TypeInfo_14_14;
#line 409 "analysis.m"
        MR_Word analysis__TypeInfo_15_15;

#line 7347 "analysis.c"
        {
#line 7349 "analysis.c"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_call_pattern_11, (MR_Integer) 4, &analysis__TypeInfo_14_14);
        }
#line 7352 "analysis.c"
        {
#line 7354 "analysis.c"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_call_pattern_12, (MR_Integer) 4, &analysis__TypeInfo_15_15);
        }
#line 409 "analysis.m"
        {
#line 409 "analysis.m"
          mercury__private_builtin__typed_compare_3_p_0(analysis__TypeInfo_14_14, analysis__TypeInfo_15_15, &analysis__V_8_8, analysis__V_4_4, analysis__V_6_6);
        }
#line 409 "analysis.m"
        analysis__succeeded = (analysis__V_8_8 == (MR_Integer) 0);
#line 409 "analysis.m"
        analysis__succeeded = !(analysis__succeeded);
#line 409 "analysis.m"
        if (analysis__succeeded)
#line 409 "analysis.m"
          *analysis__HeadVar__1_1 = analysis__V_8_8;
#line 409 "analysis.m"
        else
#line 409 "analysis.m"
          {
#line 409 "analysis.m"
            mdbcomp__sym_name____Compare____sym_name_0_0(analysis__HeadVar__1_1, analysis__V_5_5, analysis__V_7_7);
#line 409 "analysis.m"
            return;
          }
#line 409 "analysis.m"
      }
#line 409 "analysis.m"
  }
#line 409 "analysis.m"
}

#line 409 "analysis.m"
MR_bool MR_CALL 
analysis____Unify____analysis_request_0_0(
#line 409 "analysis.m"
  MR_Word analysis__HeadVar__1_1,
#line 409 "analysis.m"
  MR_Word analysis__HeadVar__2_2)
#line 409 "analysis.m"
{
#line 409 "analysis.m"
  {
#line 409 "analysis.m"
    MR_bool analysis__succeeded;
#line 409 "analysis.m"
    MR_Integer analysis__CastX_7 = (MR_Integer) analysis__HeadVar__1_1;
#line 409 "analysis.m"
    MR_Integer analysis__CastY_8 = (MR_Integer) analysis__HeadVar__2_2;

#line 409 "analysis.m"
    analysis__succeeded = (analysis__CastX_7 == analysis__CastY_8);
#line 409 "analysis.m"
    if (analysis__succeeded)
#line 409 "analysis.m"
      analysis__succeeded = MR_TRUE;
#line 409 "analysis.m"
    else
#line 409 "analysis.m"
      {
#line 409 "analysis.m"
        MR_Word analysis__TypeClassInfo_for_call_pattern_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__1_1, (MR_Integer) 0)));
#line 409 "analysis.m"
        MR_Word analysis__TypeClassInfo_for_call_pattern_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 0)));
#line 409 "analysis.m"
        MR_Word analysis__TypeInfo_12_12;
#line 409 "analysis.m"
        MR_Word analysis__TypeInfo_13_13;
#line 409 "analysis.m"
        MR_Box analysis__V_3_3 = (MR_hl_field(MR_mktag(0), analysis__HeadVar__1_1, (MR_Integer) 1));
#line 409 "analysis.m"
        MR_Word analysis__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__1_1, (MR_Integer) 2)));
#line 409 "analysis.m"
        MR_Box analysis__V_5_5 = (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 1));
#line 409 "analysis.m"
        MR_Word analysis__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 2)));

#line 7431 "analysis.c"
        {
#line 7433 "analysis.c"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_call_pattern_9, (MR_Integer) 4, &analysis__TypeInfo_12_12);
        }
#line 7436 "analysis.c"
        {
#line 7438 "analysis.c"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_call_pattern_10, (MR_Integer) 4, &analysis__TypeInfo_13_13);
        }
#line 409 "analysis.m"
        {
#line 409 "analysis.m"
          analysis__succeeded = mercury__private_builtin__typed_unify_2_p_0(analysis__TypeInfo_12_12, analysis__TypeInfo_13_13, analysis__V_3_3, analysis__V_5_5);
        }
#line 409 "analysis.m"
        if (analysis__succeeded)
#line 409 "analysis.m"
          {
#line 409 "analysis.m"
            return analysis__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(analysis__V_4_4, analysis__V_6_6);
          }
#line 409 "analysis.m"
      }
#line 409 "analysis.m"
    return analysis__succeeded;
#line 409 "analysis.m"
  }
#line 409 "analysis.m"
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
#line 67 "analysis.m"
      return;
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

#line 428 "analysis.m"
void MR_CALL 
analysis____Compare____analysis_map_1_0(
#line 428 "analysis.m"
  MR_Word analysis__TypeInfo_for_T_6,
#line 428 "analysis.m"
  MR_Word * analysis__HeadVar__1_1,
#line 428 "analysis.m"
  MR_Word analysis__HeadVar__2_2,
#line 428 "analysis.m"
  MR_Word analysis__HeadVar__3_3)
#line 428 "analysis.m"
{
#line 428 "analysis.m"
  {
#line 428 "analysis.m"
    MR_bool analysis__succeeded;
#line 428 "analysis.m"
    MR_Word analysis__TypeInfo_11_11;
#line 428 "analysis.m"
    MR_Word analysis__TypeCtorInfo_12_12 = (MR_Word) &mercury__tree234__tree234__type_ctor_info_tree234_2;
#line 428 "analysis.m"
    MR_Word analysis__TypeInfo_13_13;
#line 428 "analysis.m"
    MR_Word analysis__TypeInfo_14_14;
#line 428 "analysis.m"
    MR_Word analysis__Cast_HeadVar1_4 = analysis__HeadVar__2_2;
#line 428 "analysis.m"
    MR_Word analysis__Cast_HeadVar2_5 = analysis__HeadVar__3_3;

#line 7551 "analysis.c"
    {
#line 7553 "analysis.c"
      analysis__TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7555 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_11_11, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
#line 7557 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_11_11, 1) = ((MR_Box) (analysis__TypeInfo_for_T_6));
#line 7559 "analysis.c"
    }
#line 7561 "analysis.c"
    {
#line 7563 "analysis.c"
      analysis__TypeInfo_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 7565 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_13_13, 0) = ((MR_Box) (analysis__TypeCtorInfo_12_12));
#line 7567 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_13_13, 1) = ((MR_Box) (&analysis__analysis__type_ctor_info_func_id_0));
#line 7569 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_13_13, 2) = ((MR_Box) (analysis__TypeInfo_11_11));
#line 7571 "analysis.c"
    }
#line 7573 "analysis.c"
    {
#line 7575 "analysis.c"
      analysis__TypeInfo_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 7577 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_14_14, 0) = ((MR_Box) (analysis__TypeCtorInfo_12_12));
#line 7579 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_14_14, 1) = ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0));
#line 7581 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_14_14, 2) = ((MR_Box) (analysis__TypeInfo_13_13));
#line 7583 "analysis.c"
    }
#line 428 "analysis.m"
    {
#line 428 "analysis.m"
      mercury__tree234____Compare____tree234_2_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, analysis__TypeInfo_14_14, analysis__HeadVar__1_1, analysis__Cast_HeadVar1_4, analysis__Cast_HeadVar2_5);
#line 428 "analysis.m"
      return;
    }
#line 428 "analysis.m"
  }
#line 428 "analysis.m"
}

#line 428 "analysis.m"
MR_bool MR_CALL 
analysis____Unify____analysis_map_1_0(
#line 428 "analysis.m"
  MR_Word analysis__TypeInfo_for_T_5,
#line 428 "analysis.m"
  MR_Word analysis__HeadVar__1_1,
#line 428 "analysis.m"
  MR_Word analysis__HeadVar__2_2)
#line 428 "analysis.m"
{
#line 428 "analysis.m"
  {
#line 428 "analysis.m"
    MR_bool analysis__succeeded;
#line 428 "analysis.m"
    MR_Word analysis__TypeInfo_10_10;
#line 428 "analysis.m"
    MR_Word analysis__TypeCtorInfo_11_11 = (MR_Word) &mercury__tree234__tree234__type_ctor_info_tree234_2;
#line 428 "analysis.m"
    MR_Word analysis__TypeInfo_12_12;
#line 428 "analysis.m"
    MR_Word analysis__TypeInfo_13_13;
#line 428 "analysis.m"
    MR_Word analysis__Cast_HeadVar1_3 = analysis__HeadVar__1_1;
#line 428 "analysis.m"
    MR_Word analysis__Cast_HeadVar2_4 = analysis__HeadVar__2_2;

#line 7625 "analysis.c"
    {
#line 7627 "analysis.c"
      analysis__TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7629 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_10_10, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
#line 7631 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_10_10, 1) = ((MR_Box) (analysis__TypeInfo_for_T_5));
#line 7633 "analysis.c"
    }
#line 7635 "analysis.c"
    {
#line 7637 "analysis.c"
      analysis__TypeInfo_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 7639 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_12_12, 0) = ((MR_Box) (analysis__TypeCtorInfo_11_11));
#line 7641 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_12_12, 1) = ((MR_Box) (&analysis__analysis__type_ctor_info_func_id_0));
#line 7643 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_12_12, 2) = ((MR_Box) (analysis__TypeInfo_10_10));
#line 7645 "analysis.c"
    }
#line 7647 "analysis.c"
    {
#line 7649 "analysis.c"
      analysis__TypeInfo_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 7651 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_13_13, 0) = ((MR_Box) (analysis__TypeCtorInfo_11_11));
#line 7653 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_13_13, 1) = ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0));
#line 7655 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_13_13, 2) = ((MR_Box) (analysis__TypeInfo_12_12));
#line 7657 "analysis.c"
    }
#line 428 "analysis.m"
    {
#line 428 "analysis.m"
      return analysis__succeeded = mercury__tree234____Unify____tree234_2_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, analysis__TypeInfo_13_13, analysis__Cast_HeadVar1_3, analysis__Cast_HeadVar2_4);
    }
#line 428 "analysis.m"
    return analysis__succeeded;
#line 428 "analysis.m"
  }
#line 428 "analysis.m"
}

#line 334 "analysis.m"
void MR_CALL 
analysis____Compare____analysis_info_0_0(
#line 334 "analysis.m"
  MR_Word * analysis__HeadVar__1_1,
#line 334 "analysis.m"
  MR_Word analysis__HeadVar__2_2,
#line 334 "analysis.m"
  MR_Word analysis__HeadVar__3_3)
#line 334 "analysis.m"
{
#line 334 "analysis.m"
  {
#line 334 "analysis.m"
    MR_bool analysis__succeeded;
#line 334 "analysis.m"
    MR_Integer analysis__CastX_33 = (MR_Integer) analysis__HeadVar__2_2;
#line 334 "analysis.m"
    MR_Integer analysis__CastY_34 = (MR_Integer) analysis__HeadVar__3_3;

#line 334 "analysis.m"
    analysis__succeeded = (analysis__CastX_33 == analysis__CastY_34);
#line 334 "analysis.m"
    if (analysis__succeeded)
#line 334 "analysis.m"
      *analysis__HeadVar__1_1 = (MR_Integer) 0;
#line 334 "analysis.m"
    else
#line 334 "analysis.m"
      {
#line 334 "analysis.m"
        MR_Word analysis__TypeClassInfo_for_compiler_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 0)));
#line 334 "analysis.m"
        MR_Word analysis__TypeClassInfo_for_compiler_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__3_3, (MR_Integer) 0)));
#line 334 "analysis.m"
        MR_Box analysis__V_4_4 = (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 1));
#line 334 "analysis.m"
        MR_Word analysis__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 2)));
#line 334 "analysis.m"
        MR_Word analysis__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 3)));
#line 334 "analysis.m"
        MR_Word analysis__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 4)));
#line 334 "analysis.m"
        MR_Word analysis__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 5)));
#line 334 "analysis.m"
        MR_Word analysis__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 6)));
#line 334 "analysis.m"
        MR_Word analysis__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 7)));
#line 334 "analysis.m"
        MR_Word analysis__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 8)));
#line 334 "analysis.m"
        MR_Word analysis__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 9)));
#line 334 "analysis.m"
        MR_Word analysis__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 10)));
#line 334 "analysis.m"
        MR_Box analysis__V_14_14 = (MR_hl_field(MR_mktag(0), analysis__HeadVar__3_3, (MR_Integer) 1));
#line 334 "analysis.m"
        MR_Word analysis__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__3_3, (MR_Integer) 2)));
#line 334 "analysis.m"
        MR_Word analysis__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__3_3, (MR_Integer) 3)));
#line 334 "analysis.m"
        MR_Word analysis__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__3_3, (MR_Integer) 4)));
#line 334 "analysis.m"
        MR_Word analysis__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__3_3, (MR_Integer) 5)));
#line 334 "analysis.m"
        MR_Word analysis__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__3_3, (MR_Integer) 6)));
#line 334 "analysis.m"
        MR_Word analysis__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__3_3, (MR_Integer) 7)));
#line 334 "analysis.m"
        MR_Word analysis__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__3_3, (MR_Integer) 8)));
#line 334 "analysis.m"
        MR_Word analysis__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__3_3, (MR_Integer) 9)));
#line 334 "analysis.m"
        MR_Word analysis__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__3_3, (MR_Integer) 10)));
#line 334 "analysis.m"
        MR_Word analysis__V_24_24;
#line 334 "analysis.m"
        MR_Word analysis__TypeInfo_38_38;
#line 334 "analysis.m"
        MR_Word analysis__TypeInfo_39_39;

#line 7752 "analysis.c"
        {
#line 7754 "analysis.c"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_compiler_35, (MR_Integer) 1, &analysis__TypeInfo_38_38);
        }
#line 7757 "analysis.c"
        {
#line 7759 "analysis.c"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_compiler_36, (MR_Integer) 1, &analysis__TypeInfo_39_39);
        }
#line 334 "analysis.m"
        {
#line 334 "analysis.m"
          mercury__private_builtin__typed_compare_3_p_0(analysis__TypeInfo_38_38, analysis__TypeInfo_39_39, &analysis__V_24_24, analysis__V_4_4, analysis__V_14_14);
        }
#line 334 "analysis.m"
        analysis__succeeded = (analysis__V_24_24 == (MR_Integer) 0);
#line 334 "analysis.m"
        analysis__succeeded = !(analysis__succeeded);
#line 334 "analysis.m"
        if (analysis__succeeded)
#line 334 "analysis.m"
          *analysis__HeadVar__1_1 = analysis__V_24_24;
#line 334 "analysis.m"
        else
#line 334 "analysis.m"
          {
#line 334 "analysis.m"
            MR_Word analysis__V_25_25;

#line 334 "analysis.m"
            {
#line 334 "analysis.m"
              mdbcomp__sym_name____Compare____sym_name_0_0(&analysis__V_25_25, analysis__V_5_5, analysis__V_15_15);
            }
#line 334 "analysis.m"
            analysis__succeeded = (analysis__V_25_25 == (MR_Integer) 0);
#line 334 "analysis.m"
            analysis__succeeded = !(analysis__succeeded);
#line 334 "analysis.m"
            if (analysis__succeeded)
#line 334 "analysis.m"
              *analysis__HeadVar__1_1 = analysis__V_25_25;
#line 334 "analysis.m"
            else
#line 334 "analysis.m"
              {
#line 334 "analysis.m"
                MR_Word analysis__V_26_26;
#line 334 "analysis.m"
                MR_Integer analysis__V_49_49 = (MR_Integer) analysis__V_6_6;
#line 334 "analysis.m"
                MR_Integer analysis__V_50_50 = (MR_Integer) analysis__V_16_16;

#line 334 "analysis.m"
                {
#line 334 "analysis.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(&analysis__V_26_26, analysis__V_49_49, analysis__V_50_50);
                }
#line 334 "analysis.m"
                analysis__succeeded = (analysis__V_26_26 == (MR_Integer) 0);
#line 334 "analysis.m"
                analysis__succeeded = !(analysis__succeeded);
#line 334 "analysis.m"
                if (analysis__succeeded)
#line 334 "analysis.m"
                  *analysis__HeadVar__1_1 = analysis__V_26_26;
#line 334 "analysis.m"
                else
#line 334 "analysis.m"
                  {
#line 334 "analysis.m"
                    MR_Word analysis__V_27_27;

#line 334 "analysis.m"
                    {
#line 334 "analysis.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &analysis_scalar_common_1[3], &analysis__V_27_27, ((MR_Box) (analysis__V_7_7)), ((MR_Box) (analysis__V_17_17)));
                    }
#line 334 "analysis.m"
                    analysis__succeeded = (analysis__V_27_27 == (MR_Integer) 0);
#line 334 "analysis.m"
                    analysis__succeeded = !(analysis__succeeded);
#line 334 "analysis.m"
                    if (analysis__succeeded)
#line 334 "analysis.m"
                      *analysis__HeadVar__1_1 = analysis__V_27_27;
#line 334 "analysis.m"
                    else
#line 334 "analysis.m"
                      {
#line 334 "analysis.m"
                        MR_Word analysis__V_28_28;

#line 334 "analysis.m"
                        {
#line 334 "analysis.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &analysis_scalar_common_2[6], &analysis__V_28_28, ((MR_Box) (analysis__V_8_8)), ((MR_Box) (analysis__V_18_18)));
                        }
#line 334 "analysis.m"
                        analysis__succeeded = (analysis__V_28_28 == (MR_Integer) 0);
#line 334 "analysis.m"
                        analysis__succeeded = !(analysis__succeeded);
#line 334 "analysis.m"
                        if (analysis__succeeded)
#line 334 "analysis.m"
                          *analysis__HeadVar__1_1 = analysis__V_28_28;
#line 334 "analysis.m"
                        else
#line 334 "analysis.m"
                          {
#line 334 "analysis.m"
                            MR_Word analysis__V_29_29;

#line 334 "analysis.m"
                            {
#line 334 "analysis.m"
                              mercury__builtin__compare_3_p_0((MR_Word) &analysis_scalar_common_2[7], &analysis__V_29_29, ((MR_Box) (analysis__V_9_9)), ((MR_Box) (analysis__V_19_19)));
                            }
#line 334 "analysis.m"
                            analysis__succeeded = (analysis__V_29_29 == (MR_Integer) 0);
#line 334 "analysis.m"
                            analysis__succeeded = !(analysis__succeeded);
#line 334 "analysis.m"
                            if (analysis__succeeded)
#line 334 "analysis.m"
                              *analysis__HeadVar__1_1 = analysis__V_29_29;
#line 334 "analysis.m"
                            else
#line 334 "analysis.m"
                              {
#line 334 "analysis.m"
                                MR_Word analysis__V_30_30;

#line 334 "analysis.m"
                                {
#line 334 "analysis.m"
                                  mercury__builtin__compare_3_p_0((MR_Word) &analysis_scalar_common_2[8], &analysis__V_30_30, ((MR_Box) (analysis__V_10_10)), ((MR_Box) (analysis__V_20_20)));
                                }
#line 334 "analysis.m"
                                analysis__succeeded = (analysis__V_30_30 == (MR_Integer) 0);
#line 334 "analysis.m"
                                analysis__succeeded = !(analysis__succeeded);
#line 334 "analysis.m"
                                if (analysis__succeeded)
#line 334 "analysis.m"
                                  *analysis__HeadVar__1_1 = analysis__V_30_30;
#line 334 "analysis.m"
                                else
#line 334 "analysis.m"
                                  {
#line 334 "analysis.m"
                                    MR_Word analysis__V_31_31;

#line 334 "analysis.m"
                                    {
#line 334 "analysis.m"
                                      mercury__builtin__compare_3_p_0((MR_Word) &analysis_scalar_common_2[3], &analysis__V_31_31, ((MR_Box) (analysis__V_11_11)), ((MR_Box) (analysis__V_21_21)));
                                    }
#line 334 "analysis.m"
                                    analysis__succeeded = (analysis__V_31_31 == (MR_Integer) 0);
#line 334 "analysis.m"
                                    analysis__succeeded = !(analysis__succeeded);
#line 334 "analysis.m"
                                    if (analysis__succeeded)
#line 334 "analysis.m"
                                      *analysis__HeadVar__1_1 = analysis__V_31_31;
#line 334 "analysis.m"
                                    else
#line 334 "analysis.m"
                                      {
#line 334 "analysis.m"
                                        MR_Word analysis__V_32_32;

#line 334 "analysis.m"
                                        {
#line 334 "analysis.m"
                                          mercury__builtin__compare_3_p_0((MR_Word) &analysis_scalar_common_2[9], &analysis__V_32_32, ((MR_Box) (analysis__V_12_12)), ((MR_Box) (analysis__V_22_22)));
                                        }
#line 334 "analysis.m"
                                        analysis__succeeded = (analysis__V_32_32 == (MR_Integer) 0);
#line 334 "analysis.m"
                                        analysis__succeeded = !(analysis__succeeded);
#line 334 "analysis.m"
                                        if (analysis__succeeded)
#line 334 "analysis.m"
                                          *analysis__HeadVar__1_1 = analysis__V_32_32;
#line 334 "analysis.m"
                                        else
#line 334 "analysis.m"
                                          {
#line 334 "analysis.m"
                                            {
#line 334 "analysis.m"
                                              mercury__builtin__compare_3_p_0((MR_Word) &analysis_scalar_common_2[9], analysis__HeadVar__1_1, ((MR_Box) (analysis__V_13_13)), ((MR_Box) (analysis__V_23_23)));
#line 334 "analysis.m"
                                              return;
                                            }
#line 334 "analysis.m"
                                          }
#line 334 "analysis.m"
                                      }
#line 334 "analysis.m"
                                  }
#line 334 "analysis.m"
                              }
#line 334 "analysis.m"
                          }
#line 334 "analysis.m"
                      }
#line 334 "analysis.m"
                  }
#line 334 "analysis.m"
              }
#line 334 "analysis.m"
          }
#line 334 "analysis.m"
      }
#line 334 "analysis.m"
  }
#line 334 "analysis.m"
}

#line 334 "analysis.m"
MR_bool MR_CALL 
analysis____Unify____analysis_info_0_0(
#line 334 "analysis.m"
  MR_Word analysis__HeadVar__1_1,
#line 334 "analysis.m"
  MR_Word analysis__HeadVar__2_2)
#line 334 "analysis.m"
{
#line 334 "analysis.m"
  {
#line 334 "analysis.m"
    MR_bool analysis__succeeded;
#line 334 "analysis.m"
    MR_Integer analysis__CastX_23 = (MR_Integer) analysis__HeadVar__1_1;
#line 334 "analysis.m"
    MR_Integer analysis__CastY_24 = (MR_Integer) analysis__HeadVar__2_2;

#line 334 "analysis.m"
    analysis__succeeded = (analysis__CastX_23 == analysis__CastY_24);
#line 334 "analysis.m"
    if (analysis__succeeded)
#line 334 "analysis.m"
      analysis__succeeded = MR_TRUE;
#line 334 "analysis.m"
    else
#line 334 "analysis.m"
      {
#line 334 "analysis.m"
        MR_Word analysis__TypeClassInfo_for_compiler_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__1_1, (MR_Integer) 0)));
#line 334 "analysis.m"
        MR_Word analysis__TypeClassInfo_for_compiler_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 0)));
#line 334 "analysis.m"
        MR_Word analysis__TypeInfo_28_28;
#line 334 "analysis.m"
        MR_Word analysis__TypeInfo_29_29;
#line 334 "analysis.m"
        MR_Word analysis__TypeInfo_31_31;
#line 334 "analysis.m"
        MR_Word analysis__TypeInfo_32_32;
#line 334 "analysis.m"
        MR_Word analysis__TypeInfo_33_33;
#line 334 "analysis.m"
        MR_Word analysis__TypeInfo_34_34;
#line 334 "analysis.m"
        MR_Word analysis__TypeInfo_35_35;
#line 334 "analysis.m"
        MR_Word analysis__TypeInfo_36_36;
#line 334 "analysis.m"
        MR_Word analysis__TypeInfo_37_37;
#line 334 "analysis.m"
        MR_Box analysis__V_3_3 = (MR_hl_field(MR_mktag(0), analysis__HeadVar__1_1, (MR_Integer) 1));
#line 334 "analysis.m"
        MR_Word analysis__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__1_1, (MR_Integer) 2)));
#line 334 "analysis.m"
        MR_Word analysis__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__1_1, (MR_Integer) 3)));
#line 334 "analysis.m"
        MR_Word analysis__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__1_1, (MR_Integer) 4)));
#line 334 "analysis.m"
        MR_Word analysis__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__1_1, (MR_Integer) 5)));
#line 334 "analysis.m"
        MR_Word analysis__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__1_1, (MR_Integer) 6)));
#line 334 "analysis.m"
        MR_Word analysis__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__1_1, (MR_Integer) 7)));
#line 334 "analysis.m"
        MR_Word analysis__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__1_1, (MR_Integer) 8)));
#line 334 "analysis.m"
        MR_Word analysis__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__1_1, (MR_Integer) 9)));
#line 334 "analysis.m"
        MR_Word analysis__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__1_1, (MR_Integer) 10)));
#line 334 "analysis.m"
        MR_Box analysis__V_13_13 = (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 1));
#line 334 "analysis.m"
        MR_Word analysis__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 2)));
#line 334 "analysis.m"
        MR_Word analysis__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 3)));
#line 334 "analysis.m"
        MR_Word analysis__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 4)));
#line 334 "analysis.m"
        MR_Word analysis__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 5)));
#line 334 "analysis.m"
        MR_Word analysis__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 6)));
#line 334 "analysis.m"
        MR_Word analysis__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 7)));
#line 334 "analysis.m"
        MR_Word analysis__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 8)));
#line 334 "analysis.m"
        MR_Word analysis__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 9)));
#line 334 "analysis.m"
        MR_Word analysis__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 10)));

#line 8066 "analysis.c"
        {
#line 8068 "analysis.c"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_compiler_25, (MR_Integer) 1, &analysis__TypeInfo_28_28);
        }
#line 8071 "analysis.c"
        {
#line 8073 "analysis.c"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_compiler_26, (MR_Integer) 1, &analysis__TypeInfo_29_29);
        }
#line 334 "analysis.m"
        {
#line 334 "analysis.m"
          analysis__succeeded = mercury__private_builtin__typed_unify_2_p_0(analysis__TypeInfo_28_28, analysis__TypeInfo_29_29, analysis__V_3_3, analysis__V_13_13);
        }
#line 334 "analysis.m"
        if (analysis__succeeded)
#line 334 "analysis.m"
          {
#line 334 "analysis.m"
            {
#line 334 "analysis.m"
              analysis__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(analysis__V_4_4, analysis__V_14_14);
            }
#line 334 "analysis.m"
            if (analysis__succeeded)
#line 334 "analysis.m"
              {
#line 334 "analysis.m"
                analysis__succeeded = (analysis__V_5_5 == analysis__V_15_15);
#line 334 "analysis.m"
                if (analysis__succeeded)
#line 334 "analysis.m"
                  {
#line 8100 "analysis.c"
                    analysis__TypeInfo_31_31 = (MR_Word) &analysis_scalar_common_1[3];
#line 334 "analysis.m"
                    {
#line 334 "analysis.m"
                      analysis__succeeded = mercury__builtin__unify_2_p_0(analysis__TypeInfo_31_31, ((MR_Box) (analysis__V_6_6)), ((MR_Box) (analysis__V_16_16)));
                    }
#line 334 "analysis.m"
                    if (analysis__succeeded)
#line 334 "analysis.m"
                      {
#line 8111 "analysis.c"
                        analysis__TypeInfo_32_32 = (MR_Word) &analysis_scalar_common_2[6];
#line 334 "analysis.m"
                        {
#line 334 "analysis.m"
                          analysis__succeeded = mercury__builtin__unify_2_p_0(analysis__TypeInfo_32_32, ((MR_Box) (analysis__V_7_7)), ((MR_Box) (analysis__V_17_17)));
                        }
#line 334 "analysis.m"
                        if (analysis__succeeded)
#line 334 "analysis.m"
                          {
#line 8122 "analysis.c"
                            analysis__TypeInfo_33_33 = (MR_Word) &analysis_scalar_common_2[7];
#line 334 "analysis.m"
                            {
#line 334 "analysis.m"
                              analysis__succeeded = mercury__builtin__unify_2_p_0(analysis__TypeInfo_33_33, ((MR_Box) (analysis__V_8_8)), ((MR_Box) (analysis__V_18_18)));
                            }
#line 334 "analysis.m"
                            if (analysis__succeeded)
#line 334 "analysis.m"
                              {
#line 8133 "analysis.c"
                                analysis__TypeInfo_34_34 = (MR_Word) &analysis_scalar_common_2[8];
#line 334 "analysis.m"
                                {
#line 334 "analysis.m"
                                  analysis__succeeded = mercury__builtin__unify_2_p_0(analysis__TypeInfo_34_34, ((MR_Box) (analysis__V_9_9)), ((MR_Box) (analysis__V_19_19)));
                                }
#line 334 "analysis.m"
                                if (analysis__succeeded)
#line 334 "analysis.m"
                                  {
#line 8144 "analysis.c"
                                    analysis__TypeInfo_35_35 = (MR_Word) &analysis_scalar_common_2[3];
#line 334 "analysis.m"
                                    {
#line 334 "analysis.m"
                                      analysis__succeeded = mercury__builtin__unify_2_p_0(analysis__TypeInfo_35_35, ((MR_Box) (analysis__V_10_10)), ((MR_Box) (analysis__V_20_20)));
                                    }
#line 334 "analysis.m"
                                    if (analysis__succeeded)
#line 334 "analysis.m"
                                      {
#line 8155 "analysis.c"
                                        analysis__TypeInfo_36_36 = (MR_Word) &analysis_scalar_common_2[9];
#line 334 "analysis.m"
                                        {
#line 334 "analysis.m"
                                          analysis__succeeded = mercury__builtin__unify_2_p_0(analysis__TypeInfo_36_36, ((MR_Box) (analysis__V_11_11)), ((MR_Box) (analysis__V_21_21)));
                                        }
#line 334 "analysis.m"
                                        if (analysis__succeeded)
#line 334 "analysis.m"
                                          {
#line 8166 "analysis.c"
                                            analysis__TypeInfo_37_37 = (MR_Word) &analysis_scalar_common_2[9];
#line 334 "analysis.m"
                                            {
#line 334 "analysis.m"
                                              return analysis__succeeded = mercury__builtin__unify_2_p_0(analysis__TypeInfo_37_37, ((MR_Box) (analysis__V_12_12)), ((MR_Box) (analysis__V_22_22)));
                                            }
#line 334 "analysis.m"
                                          }
#line 334 "analysis.m"
                                      }
#line 334 "analysis.m"
                                  }
#line 334 "analysis.m"
                              }
#line 334 "analysis.m"
                          }
#line 334 "analysis.m"
                      }
#line 334 "analysis.m"
                  }
#line 334 "analysis.m"
              }
#line 334 "analysis.m"
          }
#line 334 "analysis.m"
      }
#line 334 "analysis.m"
    return analysis__succeeded;
#line 334 "analysis.m"
  }
#line 334 "analysis.m"
}

#line 1387 "analysis.m"
void MR_CALL 
analysis__debug_msg_3_p_0(
#line 1387 "analysis.m"
  MR_Word analysis__P_4)
#line 1387 "analysis.m"
{
#line 1390 "analysis.m"
  {
#line 1390 "analysis.m"
    MR_bool analysis__succeeded;
#line 1390 "analysis.m"
    MR_Word analysis__Debug_6;

#line 1382 "analysis.m"
{
#define MR_PROC_LABEL analysis__debug_msg_3_p_0


		{
#line 1382 "analysis.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&analysis__mutable_variable_debug_analysis_lock,
                    "analysis__mutable_variable_debug_analysis_lock");
#endif

#line 8226 "analysis.c"

		;}
#undef MR_PROC_LABEL
#line 1382 "analysis.m"
}
#line 1382 "analysis.m"
{
#define MR_PROC_LABEL analysis__debug_msg_3_p_0

	MR_Word X;

		{
#line 1382 "analysis.m"
X = analysis__mutable_variable_debug_analysis;

#line 8242 "analysis.c"

		;}
#undef MR_PROC_LABEL
	 analysis__Debug_6  = X;
#line 1382 "analysis.m"
}
#line 1382 "analysis.m"
{
#define MR_PROC_LABEL analysis__debug_msg_3_p_0


		{
#line 1382 "analysis.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&analysis__mutable_variable_debug_analysis_lock,
                    "analysis__mutable_variable_debug_analysis_lock");
#endif

#line 8261 "analysis.c"

		;}
#undef MR_PROC_LABEL
#line 1382 "analysis.m"
}
#line 1395 "analysis.m"
#line 1395 "analysis.m"
    switch (analysis__Debug_6) {
#line 1395 "analysis.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1395 "analysis.m"
      case (MR_Integer) 0:
#line 1396 "analysis.m"
        {
#line 1396 "analysis.m"
        }
#line 1395 "analysis.m"
        break;
#line 1395 "analysis.m"
      case (MR_Integer) 1:
#line 1394 "analysis.m"
        {
#line 1394 "analysis.m"
          void MR_CALL (* analysis__func_0)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), analysis__P_4, (MR_Integer) 1)));
#line 1394 "analysis.m"
          MR_Box analysis__conv1_STATE_VARIABLE_IO_8;

#line 1394 "analysis.m"
          {
#line 1394 "analysis.m"
            analysis__func_0(((MR_Box) analysis__P_4), ((MR_Box) ((MR_Integer) 0)), &analysis__conv1_STATE_VARIABLE_IO_8);
          }
#line 1394 "analysis.m"
        }
#line 1395 "analysis.m"
        break;
#line 1395 "analysis.m"
    }
#line 1390 "analysis.m"
  }
#line 1387 "analysis.m"
}

#line 1382 "analysis.m"
void MR_CALL 
analysis__set_debug_analysis_3_p_0(
#line 1382 "analysis.m"
  MR_Word analysis__X_4)
#line 1382 "analysis.m"
{
#line 1382 "analysis.m"
  {
#line 1382 "analysis.m"
    MR_bool analysis__succeeded;

#line 1382 "analysis.m"
{
#define MR_PROC_LABEL analysis__set_debug_analysis_3_p_0


		{
#line 1382 "analysis.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&analysis__mutable_variable_debug_analysis_lock,
                    "analysis__mutable_variable_debug_analysis_lock");
#endif

#line 8329 "analysis.c"

		;}
#undef MR_PROC_LABEL
#line 1382 "analysis.m"
}
#line 1382 "analysis.m"
{
#define MR_PROC_LABEL analysis__set_debug_analysis_3_p_0

	MR_Word X;

	X =  analysis__X_4 ;
		{
#line 1382 "analysis.m"
analysis__mutable_variable_debug_analysis = X;

#line 8346 "analysis.c"

		;}
#undef MR_PROC_LABEL
#line 1382 "analysis.m"
}
#line 1382 "analysis.m"
{
#define MR_PROC_LABEL analysis__set_debug_analysis_3_p_0


		{
#line 1382 "analysis.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&analysis__mutable_variable_debug_analysis_lock,
                    "analysis__mutable_variable_debug_analysis_lock");
#endif

#line 8364 "analysis.c"

		;}
#undef MR_PROC_LABEL
#line 1382 "analysis.m"
}
#line 1382 "analysis.m"
  }
#line 1382 "analysis.m"
}

#line 1382 "analysis.m"
void MR_CALL 
analysis__get_debug_analysis_3_p_0(
#line 1382 "analysis.m"
  MR_Word * analysis__X_4)
#line 1382 "analysis.m"
{
#line 1382 "analysis.m"
  {
#line 1382 "analysis.m"
    MR_bool analysis__succeeded;

#line 1382 "analysis.m"
{
#define MR_PROC_LABEL analysis__get_debug_analysis_3_p_0


		{
#line 1382 "analysis.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&analysis__mutable_variable_debug_analysis_lock,
                    "analysis__mutable_variable_debug_analysis_lock");
#endif

#line 8399 "analysis.c"

		;}
#undef MR_PROC_LABEL
#line 1382 "analysis.m"
}
#line 1382 "analysis.m"
{
#define MR_PROC_LABEL analysis__get_debug_analysis_3_p_0

	MR_Word X;

		{
#line 1382 "analysis.m"
X = analysis__mutable_variable_debug_analysis;

#line 8415 "analysis.c"

		;}
#undef MR_PROC_LABEL
	 *analysis__X_4  = X;
#line 1382 "analysis.m"
}
#line 1382 "analysis.m"
{
#define MR_PROC_LABEL analysis__get_debug_analysis_3_p_0


		{
#line 1382 "analysis.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&analysis__mutable_variable_debug_analysis_lock,
                    "analysis__mutable_variable_debug_analysis_lock");
#endif

#line 8434 "analysis.c"

		;}
#undef MR_PROC_LABEL
#line 1382 "analysis.m"
}
#line 1382 "analysis.m"
  }
#line 1382 "analysis.m"
}

#line 1382 "analysis.m"
void MR_CALL 
analysis__set_debug_analysis_1_p_0(
#line 1382 "analysis.m"
  MR_Word analysis__X_2)
#line 1382 "analysis.m"
{
#line 1382 "analysis.m"
  {
#line 1382 "analysis.m"
    MR_bool analysis__succeeded;

#line 1382 "analysis.m"
{
#define MR_PROC_LABEL analysis__set_debug_analysis_1_p_0


		{
#line 1382 "analysis.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&analysis__mutable_variable_debug_analysis_lock,
                    "analysis__mutable_variable_debug_analysis_lock");
#endif

#line 8469 "analysis.c"

		;}
#undef MR_PROC_LABEL
#line 1382 "analysis.m"
}
#line 1382 "analysis.m"
{
#define MR_PROC_LABEL analysis__set_debug_analysis_1_p_0

	MR_Word X;

	X =  analysis__X_2 ;
		{
#line 1382 "analysis.m"
analysis__mutable_variable_debug_analysis = X;

#line 8486 "analysis.c"

		;}
#undef MR_PROC_LABEL
#line 1382 "analysis.m"
}
#line 1382 "analysis.m"
{
#define MR_PROC_LABEL analysis__set_debug_analysis_1_p_0


		{
#line 1382 "analysis.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&analysis__mutable_variable_debug_analysis_lock,
                    "analysis__mutable_variable_debug_analysis_lock");
#endif

#line 8504 "analysis.c"

		;}
#undef MR_PROC_LABEL
#line 1382 "analysis.m"
}
#line 1382 "analysis.m"
  }
#line 1382 "analysis.m"
}

#line 1382 "analysis.m"
void MR_CALL 
analysis__get_debug_analysis_1_p_0(
#line 1382 "analysis.m"
  MR_Word * analysis__X_2)
#line 1382 "analysis.m"
{
#line 1382 "analysis.m"
  {
#line 1382 "analysis.m"
    MR_bool analysis__succeeded;

#line 1382 "analysis.m"
{
#define MR_PROC_LABEL analysis__get_debug_analysis_1_p_0


		{
#line 1382 "analysis.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&analysis__mutable_variable_debug_analysis_lock,
                    "analysis__mutable_variable_debug_analysis_lock");
#endif

#line 8539 "analysis.c"

		;}
#undef MR_PROC_LABEL
#line 1382 "analysis.m"
}
#line 1382 "analysis.m"
{
#define MR_PROC_LABEL analysis__get_debug_analysis_1_p_0

	MR_Word X;

		{
#line 1382 "analysis.m"
X = analysis__mutable_variable_debug_analysis;

#line 8555 "analysis.c"

		;}
#undef MR_PROC_LABEL
	 *analysis__X_2  = X;
#line 1382 "analysis.m"
}
#line 1382 "analysis.m"
{
#define MR_PROC_LABEL analysis__get_debug_analysis_1_p_0


		{
#line 1382 "analysis.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&analysis__mutable_variable_debug_analysis_lock,
                    "analysis__mutable_variable_debug_analysis_lock");
#endif

#line 8574 "analysis.c"

		;}
#undef MR_PROC_LABEL
#line 1382 "analysis.m"
}
#line 1382 "analysis.m"
  }
#line 1382 "analysis.m"
}

#line 1382 "analysis.m"
void MR_CALL 
analysis__unsafe_set_debug_analysis_1_p_0(
#line 1382 "analysis.m"
  MR_Word analysis__X_1)
#line 1382 "analysis.m"
{
#line 1382 "analysis.m"
  {
#line 1382 "analysis.m"
    MR_bool analysis__succeeded;

#line 1382 "analysis.m"
{
#define MR_PROC_LABEL analysis__unsafe_set_debug_analysis_1_p_0

	MR_Word X;

	X =  analysis__X_1 ;
		{
#line 1382 "analysis.m"
analysis__mutable_variable_debug_analysis = X;

#line 8608 "analysis.c"

		;}
#undef MR_PROC_LABEL
#line 1382 "analysis.m"
}
#line 1382 "analysis.m"
  }
#line 1382 "analysis.m"
}

#line 1382 "analysis.m"
void MR_CALL 
analysis__unsafe_get_debug_analysis_1_p_0(
#line 1382 "analysis.m"
  MR_Word * analysis__X_1)
#line 1382 "analysis.m"
{
#line 1382 "analysis.m"
  {
#line 1382 "analysis.m"
    MR_bool analysis__succeeded;

#line 1382 "analysis.m"
{
#define MR_PROC_LABEL analysis__unsafe_get_debug_analysis_1_p_0

	MR_Word X;

		{
#line 1382 "analysis.m"
X = analysis__mutable_variable_debug_analysis;

#line 8641 "analysis.c"

		;}
#undef MR_PROC_LABEL
	 *analysis__X_1  = X;
#line 1382 "analysis.m"
}
#line 1382 "analysis.m"
  }
#line 1382 "analysis.m"
}

#line 1382 "analysis.m"
void MR_CALL 
analysis__unlock_debug_analysis_0_p_0(void)
#line 1382 "analysis.m"
{
#line 1382 "analysis.m"
  {
#line 1382 "analysis.m"
    MR_bool analysis__succeeded;

#line 1382 "analysis.m"
{
#define MR_PROC_LABEL analysis__unlock_debug_analysis_0_p_0


		{
#line 1382 "analysis.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&analysis__mutable_variable_debug_analysis_lock,
                    "analysis__mutable_variable_debug_analysis_lock");
#endif

#line 8675 "analysis.c"

		;}
#undef MR_PROC_LABEL
#line 1382 "analysis.m"
}
#line 1382 "analysis.m"
  }
#line 1382 "analysis.m"
}

#line 1382 "analysis.m"
void MR_CALL 
analysis__lock_debug_analysis_0_p_0(void)
#line 1382 "analysis.m"
{
#line 1382 "analysis.m"
  {
#line 1382 "analysis.m"
    MR_bool analysis__succeeded;

#line 1382 "analysis.m"
{
#define MR_PROC_LABEL analysis__lock_debug_analysis_0_p_0


		{
#line 1382 "analysis.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&analysis__mutable_variable_debug_analysis_lock,
                    "analysis__mutable_variable_debug_analysis_lock");
#endif

#line 8708 "analysis.c"

		;}
#undef MR_PROC_LABEL
#line 1382 "analysis.m"
}
#line 1382 "analysis.m"
  }
#line 1382 "analysis.m"
}

#line 1382 "analysis.m"
void MR_CALL 
analysis__initialise_mutable_debug_analysis_0_p_0(void)
#line 1382 "analysis.m"
{
#line 1382 "analysis.m"
  {
#line 1382 "analysis.m"
    MR_bool analysis__succeeded;

#line 1382 "analysis.m"
{
#define MR_PROC_LABEL analysis__initialise_mutable_debug_analysis_0_p_0


		{
#line 1382 "analysis.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&analysis__mutable_variable_debug_analysis_lock, MR_MUTEX_ATTR);
#endif

#line 8740 "analysis.c"

		;}
#undef MR_PROC_LABEL
#line 1382 "analysis.m"
}
#line 1382 "analysis.m"
{
#define MR_PROC_LABEL analysis__initialise_mutable_debug_analysis_0_p_0


		{
#line 1382 "analysis.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&analysis__mutable_variable_debug_analysis_lock,
                    "analysis__mutable_variable_debug_analysis_lock");
#endif

#line 8758 "analysis.c"

		;}
#undef MR_PROC_LABEL
#line 1382 "analysis.m"
}
#line 1382 "analysis.m"
{
#define MR_PROC_LABEL analysis__initialise_mutable_debug_analysis_0_p_0

	MR_Word X;

	X =  (MR_Integer) 0 ;
		{
#line 1382 "analysis.m"
analysis__mutable_variable_debug_analysis = X;

#line 8775 "analysis.c"

		;}
#undef MR_PROC_LABEL
#line 1382 "analysis.m"
}
#line 1382 "analysis.m"
{
#define MR_PROC_LABEL analysis__initialise_mutable_debug_analysis_0_p_0


		{
#line 1382 "analysis.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&analysis__mutable_variable_debug_analysis_lock,
                    "analysis__mutable_variable_debug_analysis_lock");
#endif

#line 8793 "analysis.c"

		;}
#undef MR_PROC_LABEL
#line 1382 "analysis.m"
}
#line 1382 "analysis.m"
  }
#line 1382 "analysis.m"
}

#line 1382 "analysis.m"
void MR_CALL 
analysis__pre_initialise_mutable_debug_analysis_0_p_0(void)
#line 1382 "analysis.m"
{
#line 1382 "analysis.m"
  {
#line 1382 "analysis.m"
    MR_bool analysis__succeeded;

#line 1382 "analysis.m"
{
#define MR_PROC_LABEL analysis__pre_initialise_mutable_debug_analysis_0_p_0


		{
#line 1382 "analysis.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&analysis__mutable_variable_debug_analysis_lock, MR_MUTEX_ATTR);
#endif

#line 8825 "analysis.c"

		;}
#undef MR_PROC_LABEL
#line 1382 "analysis.m"
}
#line 1382 "analysis.m"
  }
#line 1382 "analysis.m"
}

#line 1375 "analysis.m"
MR_Word MR_CALL 
analysis__lub_result_statuses_4_2_f_0(
#line 1375 "analysis.m"
  MR_Word analysis__Result_4,
#line 1375 "analysis.m"
  MR_Word analysis__Acc_5)
#line 1375 "analysis.m"
{
#line 1378 "analysis.m"
  {
#line 1378 "analysis.m"
    MR_bool analysis__succeeded;
#line 1378 "analysis.m"
    MR_Word analysis__HeadVar__3_3;
#line 1378 "analysis.m"
    MR_Word analysis__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Result_4, (MR_Integer) 3)));
#line 1378 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_analysis_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Result_4, (MR_Integer) 0)));
#line 1378 "analysis.m"
    MR_Box analysis__V_7_7 = (MR_hl_field(MR_mktag(0), analysis__Result_4, (MR_Integer) 1));
#line 1378 "analysis.m"
    MR_Box analysis__V_8_8 = (MR_hl_field(MR_mktag(0), analysis__Result_4, (MR_Integer) 2));

#line 1378 "analysis.m"
    {
#line 1378 "analysis.m"
      return analysis__HeadVar__3_3 = analysis__lub_2_f_0(analysis__V_6_6, analysis__Acc_5);
    }
#line 1378 "analysis.m"
    return analysis__HeadVar__3_3;
#line 1378 "analysis.m"
  }
#line 1375 "analysis.m"
}

#line 1369 "analysis.m"
MR_Word MR_CALL 
analysis__lub_result_statuses_3_3_f_0(
#line 1369 "analysis.m"
  MR_Word analysis___FuncId_5,
#line 1369 "analysis.m"
  MR_Word analysis__Results_6,
#line 1369 "analysis.m"
  MR_Word analysis__Acc_7)
#line 1369 "analysis.m"
{
#line 1372 "analysis.m"
  {
#line 1372 "analysis.m"
    MR_bool analysis__succeeded;
#line 1372 "analysis.m"
    MR_Word analysis__HeadVar__4_4;

#line 1372 "analysis.m"
    {
#line 1372 "analysis.m"
      return analysis__HeadVar__4_4 = analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_108_117_98_95_114_101_115_117_108_116_95_115_116_97_116_117_115_101_115_95_51_95_95_91_49_93_95_48_3_f_0(analysis__Results_6, analysis__Acc_7);
    }
#line 1372 "analysis.m"
    return analysis__HeadVar__4_4;
#line 1372 "analysis.m"
  }
#line 1369 "analysis.m"
}

#line 1362 "analysis.m"
MR_Word MR_CALL 
analysis__lub_result_statuses_2_3_f_0(
#line 1362 "analysis.m"
  MR_String analysis___AnalysisName_5,
#line 1362 "analysis.m"
  MR_Word analysis__FuncMap_6,
#line 1362 "analysis.m"
  MR_Word analysis__Acc_7)
#line 1362 "analysis.m"
{
#line 1366 "analysis.m"
  {
#line 1366 "analysis.m"
    MR_bool analysis__succeeded;
#line 1366 "analysis.m"
    MR_Word analysis__HeadVar__4_4;

#line 1366 "analysis.m"
    {
#line 1366 "analysis.m"
      return analysis__HeadVar__4_4 = analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_108_117_98_95_114_101_115_117_108_116_95_115_116_97_116_117_115_101_115_95_50_95_95_91_49_93_95_48_3_f_0(analysis__FuncMap_6, analysis__Acc_7);
    }
#line 1366 "analysis.m"
    return analysis__HeadVar__4_4;
#line 1366 "analysis.m"
  }
#line 1362 "analysis.m"
}

#line 1360 "analysis.m"
static MR_Box MR_CALL 
analysis__lub_result_statuses_1_f_0_1(
#line 1360 "analysis.m"
  MR_Box analysis__closure_arg,
#line 1360 "analysis.m"
  MR_Box analysis__wrapper_arg_1,
#line 1360 "analysis.m"
  MR_Box analysis__wrapper_arg_2,
#line 1360 "analysis.m"
  MR_Box analysis__wrapper_arg_3)
#line 1360 "analysis.m"
{
#line 1360 "analysis.m"
  {
#line 1360 "analysis.m"
    MR_Box analysis__wrapper_arg_4;
#line 1360 "analysis.m"
    MR_Box analysis__closure = analysis__closure_arg;
#line 1360 "analysis.m"
    MR_Word analysis__conv0_HeadVar__4_4;

#line 1360 "analysis.m"
    {
#line 1360 "analysis.m"
      analysis__conv0_HeadVar__4_4 = analysis__lub_result_statuses_2_3_f_0(((MR_String) analysis__wrapper_arg_1), ((MR_Word) analysis__wrapper_arg_2), ((MR_Word) analysis__wrapper_arg_3));
    }
#line 1360 "analysis.m"
    analysis__wrapper_arg_4 = ((MR_Box) (analysis__conv0_HeadVar__4_4));
#line 1360 "analysis.m"
    return analysis__wrapper_arg_4;
#line 1360 "analysis.m"
  }
#line 1360 "analysis.m"
}

#line 1356 "analysis.m"
MR_Word MR_CALL 
analysis__lub_result_statuses_1_f_0(
#line 1356 "analysis.m"
  MR_Word analysis__ModuleMap_3)
#line 1356 "analysis.m"
{
#line 1359 "analysis.m"
  {
#line 1359 "analysis.m"
    MR_bool analysis__succeeded;
#line 1359 "analysis.m"
    MR_Word analysis__HeadVar__2_2;
#line 1360 "analysis.m"
    MR_Box analysis__conv1_HeadVar__2_2;

#line 1360 "analysis.m"
    {
#line 1360 "analysis.m"
      analysis__conv1_HeadVar__2_2 = mercury__map__foldl_3_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &analysis_scalar_common_2[2], (MR_Word) &analysis__analysis__type_ctor_info_analysis_status_0, (MR_Word) &analysis_scalar_common_2[13], analysis__ModuleMap_3, ((MR_Box) ((MR_Integer) 2)));
    }
#line 1360 "analysis.m"
    analysis__HeadVar__2_2 = ((MR_Word) analysis__conv1_HeadVar__2_2);
#line 1359 "analysis.m"
    return analysis__HeadVar__2_2;
#line 1359 "analysis.m"
  }
#line 1356 "analysis.m"
}

#line 1323 "analysis.m"
void MR_CALL 
analysis__maybe_write_module_imdg_5_p_0(
#line 1323 "analysis.m"
  MR_Word analysis__Info_6,
#line 1323 "analysis.m"
  MR_Word analysis__Globals_7,
#line 1323 "analysis.m"
  MR_Word analysis__ModuleName_8)
#line 1323 "analysis.m"
{
#line 1329 "analysis.m"
  {
#line 1329 "analysis.m"
    MR_bool analysis__succeeded;
#line 1329 "analysis.m"
    MR_Word analysis__ModuleEntries_10;
#line 1327 "analysis.m"
    MR_Word analysis__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 9)));
#line 1327 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_compiler_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 0)));
#line 1327 "analysis.m"
    MR_Box analysis__V_15_15 = (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 1));
#line 1327 "analysis.m"
    MR_Word analysis__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 2)));
#line 1327 "analysis.m"
    MR_Word analysis__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 3)));
#line 1327 "analysis.m"
    MR_Word analysis__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 4)));
#line 1327 "analysis.m"
    MR_Word analysis__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 5)));
#line 1327 "analysis.m"
    MR_Word analysis__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 6)));
#line 1327 "analysis.m"
    MR_Word analysis__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 7)));
#line 1327 "analysis.m"
    MR_Word analysis__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 8)));
#line 1327 "analysis.m"
    MR_Word analysis__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 10)));
#line 1327 "analysis.m"
    MR_Box analysis__conv0_ModuleEntries_10;

#line 1327 "analysis.m"
    {
#line 1327 "analysis.m"
      analysis__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &analysis_scalar_common_2[5], analysis__V_13_13, ((MR_Box) (analysis__ModuleName_8)), &analysis__conv0_ModuleEntries_10);
    }
#line 1327 "analysis.m"
    if (analysis__succeeded)
#line 1327 "analysis.m"
      {
#line 1327 "analysis.m"
        analysis__ModuleEntries_10 = ((MR_Word) analysis__conv0_ModuleEntries_10);
#line 1327 "analysis.m"
        analysis__succeeded = MR_TRUE;
#line 1327 "analysis.m"
      }
#line 1329 "analysis.m"
    if (analysis__succeeded)
#line 1328 "analysis.m"
      {
#line 1328 "analysis.m"
        analysis__file__write_module_imdg_6_p_0(analysis__Info_6, analysis__Globals_7, analysis__ModuleName_8, analysis__ModuleEntries_10);
#line 1328 "analysis.m"
        return;
      }
#line 1329 "analysis.m"
    else
#line 1329 "analysis.m"
      {
#line 1329 "analysis.m"
      }
#line 1329 "analysis.m"
  }
#line 1323 "analysis.m"
}

#line 1312 "analysis.m"
void MR_CALL 
analysis__maybe_write_module_requests_5_p_0(
#line 1312 "analysis.m"
  MR_Word analysis__Info_6,
#line 1312 "analysis.m"
  MR_Word analysis__Globals_7,
#line 1312 "analysis.m"
  MR_Word analysis__ModuleName_8)
#line 1312 "analysis.m"
{
#line 1319 "analysis.m"
  {
#line 1319 "analysis.m"
    MR_bool analysis__succeeded;
#line 1319 "analysis.m"
    MR_Word analysis__Requests_10;
#line 1316 "analysis.m"
    MR_Word analysis__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 5)));
#line 1316 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_compiler_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 0)));
#line 1316 "analysis.m"
    MR_Box analysis__V_15_15 = (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 1));
#line 1316 "analysis.m"
    MR_Word analysis__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 2)));
#line 1316 "analysis.m"
    MR_Word analysis__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 3)));
#line 1316 "analysis.m"
    MR_Word analysis__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 4)));
#line 1316 "analysis.m"
    MR_Word analysis__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 6)));
#line 1316 "analysis.m"
    MR_Word analysis__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 7)));
#line 1316 "analysis.m"
    MR_Word analysis__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 8)));
#line 1316 "analysis.m"
    MR_Word analysis__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 9)));
#line 1316 "analysis.m"
    MR_Word analysis__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 10)));
#line 1316 "analysis.m"
    MR_Box analysis__conv0_Requests_10;

#line 1316 "analysis.m"
    {
#line 1316 "analysis.m"
      analysis__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &analysis_scalar_common_2[1], analysis__V_13_13, ((MR_Box) (analysis__ModuleName_8)), &analysis__conv0_Requests_10);
    }
#line 1316 "analysis.m"
    if (analysis__succeeded)
#line 1316 "analysis.m"
      {
#line 1316 "analysis.m"
        analysis__Requests_10 = ((MR_Word) analysis__conv0_Requests_10);
#line 1316 "analysis.m"
        analysis__succeeded = MR_TRUE;
#line 1316 "analysis.m"
      }
#line 1319 "analysis.m"
    if (analysis__succeeded)
#line 1317 "analysis.m"
      {
#line 1317 "analysis.m"
        analysis__file__write_module_analysis_requests_6_p_0(analysis__Info_6, analysis__Globals_7, analysis__ModuleName_8, analysis__Requests_10);
#line 1317 "analysis.m"
        return;
      }
#line 1319 "analysis.m"
    else
#line 1319 "analysis.m"
      {
#line 1319 "analysis.m"
      }
#line 1319 "analysis.m"
  }
#line 1312 "analysis.m"
}

#line 1300 "analysis.m"
void MR_CALL 
analysis__maybe_write_module_overall_status_5_p_0(
#line 1300 "analysis.m"
  MR_Word analysis__Info_6,
#line 1300 "analysis.m"
  MR_Word analysis__Globals_7,
#line 1300 "analysis.m"
  MR_Word analysis__ModuleName_8)
#line 1300 "analysis.m"
{
#line 1306 "analysis.m"
  {
#line 1306 "analysis.m"
    MR_bool analysis__succeeded;
#line 1306 "analysis.m"
    MR_Word analysis__Status_10;
#line 1304 "analysis.m"
    MR_Word analysis__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 6)));
#line 1304 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_compiler_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 0)));
#line 1304 "analysis.m"
    MR_Box analysis__V_15_15 = (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 1));
#line 1304 "analysis.m"
    MR_Word analysis__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 2)));
#line 1304 "analysis.m"
    MR_Word analysis__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 3)));
#line 1304 "analysis.m"
    MR_Word analysis__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 4)));
#line 1304 "analysis.m"
    MR_Word analysis__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 5)));
#line 1304 "analysis.m"
    MR_Word analysis__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 7)));
#line 1304 "analysis.m"
    MR_Word analysis__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 8)));
#line 1304 "analysis.m"
    MR_Word analysis__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 9)));
#line 1304 "analysis.m"
    MR_Word analysis__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 10)));
#line 1304 "analysis.m"
    MR_Box analysis__conv0_Status_10;

#line 1304 "analysis.m"
    {
#line 1304 "analysis.m"
      analysis__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &analysis__analysis__type_ctor_info_analysis_status_0, analysis__V_13_13, ((MR_Box) (analysis__ModuleName_8)), &analysis__conv0_Status_10);
    }
#line 1304 "analysis.m"
    if (analysis__succeeded)
#line 1304 "analysis.m"
      {
#line 1304 "analysis.m"
        analysis__Status_10 = ((MR_Word) analysis__conv0_Status_10);
#line 1304 "analysis.m"
        analysis__succeeded = MR_TRUE;
#line 1304 "analysis.m"
      }
#line 1306 "analysis.m"
    if (analysis__succeeded)
#line 1305 "analysis.m"
      {
#line 1305 "analysis.m"
        analysis__file__write_module_overall_status_6_p_0(analysis__Info_6, analysis__Globals_7, analysis__ModuleName_8, analysis__Status_10);
#line 1305 "analysis.m"
        return;
      }
#line 1306 "analysis.m"
    else
#line 1306 "analysis.m"
      {
#line 1306 "analysis.m"
      }
#line 1306 "analysis.m"
  }
#line 1300 "analysis.m"
}

#line 1291 "analysis.m"
void MR_CALL 
analysis__load_module_imdg_6_p_0(
#line 1291 "analysis.m"
  MR_Word analysis__Globals_7,
#line 1291 "analysis.m"
  MR_Word analysis__ModuleName_8,
#line 1291 "analysis.m"
  MR_Word analysis__STATE_VARIABLE_Info_0_14,
#line 1291 "analysis.m"
  MR_Word * analysis__STATE_VARIABLE_Info_15)
#line 1291 "analysis.m"
{
#line 1294 "analysis.m"
  {
#line 1294 "analysis.m"
    MR_bool analysis__succeeded;
#line 1294 "analysis.m"
    MR_Word analysis__IMDG_11;
#line 1294 "analysis.m"
    MR_Word analysis__Map0_12;
#line 1294 "analysis.m"
    MR_Word analysis__Map_13;
#line 1296 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_compiler_39;
#line 1296 "analysis.m"
    MR_Box analysis__V_20_20;
#line 1296 "analysis.m"
    MR_Word analysis__V_21_21;
#line 1296 "analysis.m"
    MR_Word analysis__V_22_22;
#line 1296 "analysis.m"
    MR_Word analysis__V_23_23;
#line 1296 "analysis.m"
    MR_Word analysis__V_24_24;
#line 1296 "analysis.m"
    MR_Word analysis__V_25_25;
#line 1296 "analysis.m"
    MR_Word analysis__V_26_26;
#line 1296 "analysis.m"
    MR_Word analysis__V_27_27;
#line 1296 "analysis.m"
    MR_Word analysis__V_28_28;
#line 1298 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_compiler_42;
#line 1298 "analysis.m"
    MR_Box analysis__V_29_29;
#line 1298 "analysis.m"
    MR_Word analysis__V_30_30;
#line 1298 "analysis.m"
    MR_Word analysis__V_31_31;
#line 1298 "analysis.m"
    MR_Word analysis__V_32_32;
#line 1298 "analysis.m"
    MR_Word analysis__V_33_33;
#line 1298 "analysis.m"
    MR_Word analysis__V_34_34;
#line 1298 "analysis.m"
    MR_Word analysis__V_35_35;
#line 1298 "analysis.m"
    MR_Word analysis__V_36_36;
#line 1298 "analysis.m"
    MR_Word analysis__V_38_38;
#line 1298 "analysis.m"
    MR_Word analysis__V_37_37;

#line 1295 "analysis.m"
    {
#line 1295 "analysis.m"
      analysis__file__read_module_imdg_6_p_0(analysis__STATE_VARIABLE_Info_0_14, analysis__Globals_7, analysis__ModuleName_8, &analysis__IMDG_11);
    }
#line 1296 "analysis.m"
    analysis__TypeClassInfo_for_compiler_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_14, (MR_Integer) 0)));
#line 1296 "analysis.m"
    analysis__V_20_20 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_14, (MR_Integer) 1));
#line 1296 "analysis.m"
    analysis__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_14, (MR_Integer) 2)));
#line 1296 "analysis.m"
    analysis__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_14, (MR_Integer) 3)));
#line 1296 "analysis.m"
    analysis__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_14, (MR_Integer) 4)));
#line 1296 "analysis.m"
    analysis__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_14, (MR_Integer) 5)));
#line 1296 "analysis.m"
    analysis__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_14, (MR_Integer) 6)));
#line 1296 "analysis.m"
    analysis__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_14, (MR_Integer) 7)));
#line 1296 "analysis.m"
    analysis__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_14, (MR_Integer) 8)));
#line 1296 "analysis.m"
    analysis__Map0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_14, (MR_Integer) 9)));
#line 1296 "analysis.m"
    analysis__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_14, (MR_Integer) 10)));
#line 1297 "analysis.m"
    {
#line 1297 "analysis.m"
      mercury__map__det_insert_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &analysis_scalar_common_2[5], ((MR_Box) (analysis__ModuleName_8)), ((MR_Box) (analysis__IMDG_11)), analysis__Map0_12, &analysis__Map_13);
    }
#line 1298 "analysis.m"
    analysis__TypeClassInfo_for_compiler_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_14, (MR_Integer) 0)));
#line 1298 "analysis.m"
    analysis__V_29_29 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_14, (MR_Integer) 1));
#line 1298 "analysis.m"
    analysis__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_14, (MR_Integer) 2)));
#line 1298 "analysis.m"
    analysis__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_14, (MR_Integer) 3)));
#line 1298 "analysis.m"
    analysis__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_14, (MR_Integer) 4)));
#line 1298 "analysis.m"
    analysis__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_14, (MR_Integer) 5)));
#line 1298 "analysis.m"
    analysis__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_14, (MR_Integer) 6)));
#line 1298 "analysis.m"
    analysis__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_14, (MR_Integer) 7)));
#line 1298 "analysis.m"
    analysis__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_14, (MR_Integer) 8)));
#line 1298 "analysis.m"
    analysis__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_14, (MR_Integer) 9)));
#line 1298 "analysis.m"
    analysis__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_14, (MR_Integer) 10)));
#line 1298 "analysis.m"
    {
#line 1298 "analysis.m"
      MR_Word base;
#line 1298 "analysis.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 1298 "analysis.m"
      *analysis__STATE_VARIABLE_Info_15 = base;
#line 1298 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (analysis__TypeClassInfo_for_compiler_42));
#line 1298 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 1) = analysis__V_29_29;
#line 1298 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (analysis__V_30_30));
#line 1298 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (analysis__V_31_31));
#line 1298 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (analysis__V_32_32));
#line 1298 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (analysis__V_33_33));
#line 1298 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (analysis__V_34_34));
#line 1298 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (analysis__V_35_35));
#line 1298 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (analysis__V_36_36));
#line 1298 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (analysis__Map_13));
#line 1298 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (analysis__V_38_38));
#line 1298 "analysis.m"
    }
#line 1294 "analysis.m"
  }
#line 1291 "analysis.m"
}

#line 1206 "analysis.m"
void MR_CALL 
analysis__load_module_analysis_results_6_p_0(
#line 1206 "analysis.m"
  MR_Word analysis__Globals_7,
#line 1206 "analysis.m"
  MR_Word analysis__ModuleName_8,
#line 1206 "analysis.m"
  MR_Word analysis__STATE_VARIABLE_Info_0_13,
#line 1206 "analysis.m"
  MR_Word * analysis__STATE_VARIABLE_Info_14)
#line 1206 "analysis.m"
{
#line 1216 "analysis.m"
  {
#line 1216 "analysis.m"
    MR_bool analysis__succeeded;
#line 1212 "analysis.m"
    MR_Word analysis__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 7)));
#line 1212 "analysis.m"
    MR_Word analysis__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 6)));
#line 1211 "analysis.m"
    MR_Word analysis__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 0)));
#line 1211 "analysis.m"
    MR_Word analysis__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 10)));
#line 1211 "analysis.m"
    MR_Word analysis__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 9)));
#line 1211 "analysis.m"
    MR_Word analysis__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 8)));
#line 1211 "analysis.m"
    MR_Word analysis__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 5)));
#line 1211 "analysis.m"
    MR_Word analysis__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 4)));
#line 1211 "analysis.m"
    MR_Word analysis__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 3)));
#line 1211 "analysis.m"
    MR_Word analysis__V_118_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 2)));
#line 1211 "analysis.m"
    MR_Box analysis__V_119_119 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 1));

#line 1211 "analysis.m"
    {
#line 1211 "analysis.m"
      analysis__succeeded = mercury__map__contains_2_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &analysis_scalar_common_2[3], analysis__V_113_113, ((MR_Box) (analysis__ModuleName_8)));
    }
#line 1212 "analysis.m"
    if (!(analysis__succeeded))
#line 1212 "analysis.m"
      {
#line 1212 "analysis.m"
        {
#line 1212 "analysis.m"
          analysis__succeeded = mercury__map__contains_2_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &analysis__analysis__type_ctor_info_analysis_status_0, analysis__V_114_114, ((MR_Box) (analysis__ModuleName_8)));
        }
#line 1212 "analysis.m"
      }
#line 1216 "analysis.m"
    if (analysis__succeeded)
#line 1215 "analysis.m"
      {
#line 1215 "analysis.m"
        {
#line 1215 "analysis.m"
          mercury__require__unexpected_3_p_0((MR_String) "analysis", (MR_String) "predicate \140analysis.load_module_analysis_results\'/6", (MR_String) "ensure_old_module_analysis_results_loaded");
#line 1215 "analysis.m"
          return;
        }
#line 1215 "analysis.m"
      }
#line 1216 "analysis.m"
    else
#line 1218 "analysis.m"
      {
#line 1218 "analysis.m"
        MR_Word analysis__TypeClassInfo_for_compiler_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 0)));
#line 1218 "analysis.m"
        MR_Word analysis__TypeCtorInfo_104_104;
#line 1218 "analysis.m"
        MR_Word analysis__ModuleStatus_11;
#line 1218 "analysis.m"
        MR_Word analysis__ModuleResults_12;
#line 1218 "analysis.m"
        MR_Box analysis__V_22_22 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 1));
#line 1218 "analysis.m"
        MR_Word analysis__STATE_VARIABLE_Info_25_25;
#line 1218 "analysis.m"
        MR_Word analysis__V_26_26;
#line 1218 "analysis.m"
        MR_Word analysis__V_27_27;
#line 1218 "analysis.m"
        MR_Word analysis__V_29_29;
#line 1218 "analysis.m"
        MR_Word analysis__V_30_30;
#line 1217 "analysis.m"
        MR_Word analysis__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 2)));
#line 1217 "analysis.m"
        MR_Word analysis__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 3)));
#line 1217 "analysis.m"
        MR_Word analysis__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 4)));
#line 1217 "analysis.m"
        MR_Word analysis__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 5)));
#line 1217 "analysis.m"
        MR_Word analysis__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 6)));
#line 1217 "analysis.m"
        MR_Word analysis__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 7)));
#line 1217 "analysis.m"
        MR_Word analysis__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 8)));
#line 1217 "analysis.m"
        MR_Word analysis__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 9)));
#line 1217 "analysis.m"
        MR_Word analysis__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 10)));
#line 1221 "analysis.m"
        MR_Word analysis__TypeClassInfo_for_compiler_103;
#line 1221 "analysis.m"
        MR_Box analysis__V_58_58;
#line 1221 "analysis.m"
        MR_Word analysis__V_59_59;
#line 1221 "analysis.m"
        MR_Word analysis__V_60_60;
#line 1221 "analysis.m"
        MR_Word analysis__V_61_61;
#line 1221 "analysis.m"
        MR_Word analysis__V_62_62;
#line 1221 "analysis.m"
        MR_Word analysis__V_63_63;
#line 1221 "analysis.m"
        MR_Word analysis__V_64_64;
#line 1221 "analysis.m"
        MR_Word analysis__V_65_65;
#line 1221 "analysis.m"
        MR_Word analysis__V_66_66;
#line 1221 "analysis.m"
        MR_Word analysis__TypeClassInfo_for_compiler_106;
#line 1221 "analysis.m"
        MR_Box analysis__V_67_67;
#line 1221 "analysis.m"
        MR_Word analysis__V_68_68;
#line 1221 "analysis.m"
        MR_Word analysis__V_69_69;
#line 1221 "analysis.m"
        MR_Word analysis__V_70_70;
#line 1221 "analysis.m"
        MR_Word analysis__V_71_71;
#line 1221 "analysis.m"
        MR_Word analysis__V_73_73;
#line 1221 "analysis.m"
        MR_Word analysis__V_74_74;
#line 1221 "analysis.m"
        MR_Word analysis__V_75_75;
#line 1221 "analysis.m"
        MR_Word analysis__V_76_76;
#line 1221 "analysis.m"
        MR_Word analysis__V_72_72;
#line 1222 "analysis.m"
        MR_Word analysis__TypeClassInfo_for_compiler_107;
#line 1222 "analysis.m"
        MR_Box analysis__V_77_77;
#line 1222 "analysis.m"
        MR_Word analysis__V_78_78;
#line 1222 "analysis.m"
        MR_Word analysis__V_79_79;
#line 1222 "analysis.m"
        MR_Word analysis__V_80_80;
#line 1222 "analysis.m"
        MR_Word analysis__V_81_81;
#line 1222 "analysis.m"
        MR_Word analysis__V_82_82;
#line 1222 "analysis.m"
        MR_Word analysis__V_83_83;
#line 1222 "analysis.m"
        MR_Word analysis__V_84_84;
#line 1222 "analysis.m"
        MR_Word analysis__V_85_85;
#line 1222 "analysis.m"
        MR_Word analysis__TypeClassInfo_for_compiler_109;
#line 1222 "analysis.m"
        MR_Box analysis__V_86_86;
#line 1222 "analysis.m"
        MR_Word analysis__V_87_87;
#line 1222 "analysis.m"
        MR_Word analysis__V_88_88;
#line 1222 "analysis.m"
        MR_Word analysis__V_89_89;
#line 1222 "analysis.m"
        MR_Word analysis__V_90_90;
#line 1222 "analysis.m"
        MR_Word analysis__V_91_91;
#line 1222 "analysis.m"
        MR_Word analysis__V_93_93;
#line 1222 "analysis.m"
        MR_Word analysis__V_94_94;
#line 1222 "analysis.m"
        MR_Word analysis__V_95_95;
#line 1222 "analysis.m"
        MR_Word analysis__V_92_92;

#line 1217 "analysis.m"
        {
#line 1217 "analysis.m"
          analysis__do_read_module_overall_status_6_p_0(analysis__TypeClassInfo_for_compiler_102, analysis__V_22_22, analysis__Globals_7, analysis__ModuleName_8, &analysis__ModuleStatus_11);
        }
#line 1219 "analysis.m"
        {
#line 1219 "analysis.m"
          analysis__file__read_module_analysis_results_6_p_0(analysis__STATE_VARIABLE_Info_0_13, analysis__Globals_7, analysis__ModuleName_8, &analysis__ModuleResults_12);
        }
#line 1221 "analysis.m"
        analysis__TypeClassInfo_for_compiler_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 0)));
#line 1221 "analysis.m"
        analysis__V_58_58 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 1));
#line 1221 "analysis.m"
        analysis__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 2)));
#line 1221 "analysis.m"
        analysis__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 3)));
#line 1221 "analysis.m"
        analysis__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 4)));
#line 1221 "analysis.m"
        analysis__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 5)));
#line 1221 "analysis.m"
        analysis__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 6)));
#line 1221 "analysis.m"
        analysis__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 7)));
#line 1221 "analysis.m"
        analysis__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 8)));
#line 1221 "analysis.m"
        analysis__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 9)));
#line 1221 "analysis.m"
        analysis__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 10)));
#line 9614 "analysis.c"
        analysis__TypeCtorInfo_104_104 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 1221 "analysis.m"
        {
#line 1221 "analysis.m"
          analysis__V_27_27 = mercury__map__f_101_108_101_109_32_58_61_3_f_0(analysis__TypeCtorInfo_104_104, (MR_Word) &analysis__analysis__type_ctor_info_analysis_status_0, ((MR_Box) (analysis__ModuleName_8)), analysis__V_26_26, ((MR_Box) (analysis__ModuleStatus_11)));
        }
#line 1221 "analysis.m"
        analysis__TypeClassInfo_for_compiler_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 0)));
#line 1221 "analysis.m"
        analysis__V_67_67 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 1));
#line 1221 "analysis.m"
        analysis__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 2)));
#line 1221 "analysis.m"
        analysis__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 3)));
#line 1221 "analysis.m"
        analysis__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 4)));
#line 1221 "analysis.m"
        analysis__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 5)));
#line 1221 "analysis.m"
        analysis__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 6)));
#line 1221 "analysis.m"
        analysis__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 7)));
#line 1221 "analysis.m"
        analysis__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 8)));
#line 1221 "analysis.m"
        analysis__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 9)));
#line 1221 "analysis.m"
        analysis__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 10)));
#line 1221 "analysis.m"
        {
#line 1221 "analysis.m"
          analysis__STATE_VARIABLE_Info_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 1221 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_25_25, 0) = ((MR_Box) (analysis__TypeClassInfo_for_compiler_106));
#line 1221 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_25_25, 1) = analysis__V_67_67;
#line 1221 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_25_25, 2) = ((MR_Box) (analysis__V_68_68));
#line 1221 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_25_25, 3) = ((MR_Box) (analysis__V_69_69));
#line 1221 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_25_25, 4) = ((MR_Box) (analysis__V_70_70));
#line 1221 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_25_25, 5) = ((MR_Box) (analysis__V_71_71));
#line 1221 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_25_25, 6) = ((MR_Box) (analysis__V_27_27));
#line 1221 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_25_25, 7) = ((MR_Box) (analysis__V_73_73));
#line 1221 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_25_25, 8) = ((MR_Box) (analysis__V_74_74));
#line 1221 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_25_25, 9) = ((MR_Box) (analysis__V_75_75));
#line 1221 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_25_25, 10) = ((MR_Box) (analysis__V_76_76));
#line 1221 "analysis.m"
        }
#line 1222 "analysis.m"
        analysis__TypeClassInfo_for_compiler_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_25_25, (MR_Integer) 0)));
#line 1222 "analysis.m"
        analysis__V_77_77 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_25_25, (MR_Integer) 1));
#line 1222 "analysis.m"
        analysis__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_25_25, (MR_Integer) 2)));
#line 1222 "analysis.m"
        analysis__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_25_25, (MR_Integer) 3)));
#line 1222 "analysis.m"
        analysis__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_25_25, (MR_Integer) 4)));
#line 1222 "analysis.m"
        analysis__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_25_25, (MR_Integer) 5)));
#line 1222 "analysis.m"
        analysis__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_25_25, (MR_Integer) 6)));
#line 1222 "analysis.m"
        analysis__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_25_25, (MR_Integer) 7)));
#line 1222 "analysis.m"
        analysis__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_25_25, (MR_Integer) 8)));
#line 1222 "analysis.m"
        analysis__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_25_25, (MR_Integer) 9)));
#line 1222 "analysis.m"
        analysis__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_25_25, (MR_Integer) 10)));
#line 1222 "analysis.m"
        {
#line 1222 "analysis.m"
          analysis__V_30_30 = mercury__map__f_101_108_101_109_32_58_61_3_f_0(analysis__TypeCtorInfo_104_104, (MR_Word) &analysis_scalar_common_2[3], ((MR_Box) (analysis__ModuleName_8)), analysis__V_29_29, ((MR_Box) (analysis__ModuleResults_12)));
        }
#line 1222 "analysis.m"
        analysis__TypeClassInfo_for_compiler_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_25_25, (MR_Integer) 0)));
#line 1222 "analysis.m"
        analysis__V_86_86 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_25_25, (MR_Integer) 1));
#line 1222 "analysis.m"
        analysis__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_25_25, (MR_Integer) 2)));
#line 1222 "analysis.m"
        analysis__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_25_25, (MR_Integer) 3)));
#line 1222 "analysis.m"
        analysis__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_25_25, (MR_Integer) 4)));
#line 1222 "analysis.m"
        analysis__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_25_25, (MR_Integer) 5)));
#line 1222 "analysis.m"
        analysis__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_25_25, (MR_Integer) 6)));
#line 1222 "analysis.m"
        analysis__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_25_25, (MR_Integer) 7)));
#line 1222 "analysis.m"
        analysis__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_25_25, (MR_Integer) 8)));
#line 1222 "analysis.m"
        analysis__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_25_25, (MR_Integer) 9)));
#line 1222 "analysis.m"
        analysis__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_25_25, (MR_Integer) 10)));
#line 1222 "analysis.m"
        {
#line 1222 "analysis.m"
          MR_Word base;
#line 1222 "analysis.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 1222 "analysis.m"
          *analysis__STATE_VARIABLE_Info_14 = base;
#line 1222 "analysis.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (analysis__TypeClassInfo_for_compiler_109));
#line 1222 "analysis.m"
          MR_hl_field(MR_mktag(0), base, 1) = analysis__V_86_86;
#line 1222 "analysis.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (analysis__V_87_87));
#line 1222 "analysis.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (analysis__V_88_88));
#line 1222 "analysis.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (analysis__V_89_89));
#line 1222 "analysis.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (analysis__V_90_90));
#line 1222 "analysis.m"
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (analysis__V_91_91));
#line 1222 "analysis.m"
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (analysis__V_30_30));
#line 1222 "analysis.m"
          MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (analysis__V_93_93));
#line 1222 "analysis.m"
          MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (analysis__V_94_94));
#line 1222 "analysis.m"
          MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (analysis__V_95_95));
#line 1222 "analysis.m"
        }
#line 1218 "analysis.m"
      }
#line 1216 "analysis.m"
  }
#line 1206 "analysis.m"
}

#line 1182 "analysis.m"
void MR_CALL 
analysis__combine_imdg_lists_3_p_0(
#line 1182 "analysis.m"
  MR_Word analysis__ArcsA_4,
#line 1182 "analysis.m"
  MR_Word analysis__ArcsB_5,
#line 1182 "analysis.m"
  MR_Word * analysis__HeadVar__3_3)
#line 1182 "analysis.m"
{
#line 1185 "analysis.m"
  {
#line 1185 "analysis.m"
    MR_bool analysis__succeeded;

#line 1185 "analysis.m"
    {
#line 1185 "analysis.m"
      *analysis__HeadVar__3_3 = mercury__list__f_43_43_2_f_0((MR_Word) &analysis__analysis__type_ctor_info_imdg_arc_0, analysis__ArcsA_4, analysis__ArcsB_5);
    }
#line 1185 "analysis.m"
  }
#line 1182 "analysis.m"
}

#line 1180 "analysis.m"
static void MR_CALL 
analysis__combine_func_imdg_3_p_0_1(
#line 1180 "analysis.m"
  MR_Box analysis__closure_arg,
#line 1180 "analysis.m"
  MR_Box analysis__wrapper_arg_1,
#line 1180 "analysis.m"
  MR_Box analysis__wrapper_arg_2,
#line 1180 "analysis.m"
  MR_Box * analysis__wrapper_arg_3)
#line 1180 "analysis.m"
{
#line 1180 "analysis.m"
  {
#line 1180 "analysis.m"
    MR_Box analysis__closure = analysis__closure_arg;
#line 1180 "analysis.m"
    MR_Word analysis__conv0_HeadVar__3_3;

#line 1180 "analysis.m"
    {
#line 1180 "analysis.m"
      analysis__combine_imdg_lists_3_p_0(((MR_Word) analysis__wrapper_arg_1), ((MR_Word) analysis__wrapper_arg_2), &analysis__conv0_HeadVar__3_3);
    }
#line 1180 "analysis.m"
    *analysis__wrapper_arg_3 = ((MR_Box) (analysis__conv0_HeadVar__3_3));
#line 1180 "analysis.m"
  }
#line 1180 "analysis.m"
}

#line 1176 "analysis.m"
void MR_CALL 
analysis__combine_func_imdg_3_p_0(
#line 1176 "analysis.m"
  MR_Word analysis__FuncImdgA_4,
#line 1176 "analysis.m"
  MR_Word analysis__FuncImdgB_5,
#line 1176 "analysis.m"
  MR_Word * analysis__FuncImdg_6)
#line 1176 "analysis.m"
{
#line 1179 "analysis.m"
  {
#line 1179 "analysis.m"
    MR_bool analysis__succeeded;

#line 1180 "analysis.m"
    {
#line 1180 "analysis.m"
      mercury__map__union_4_p_1((MR_Word) &analysis_scalar_common_1[2], (MR_Word) &analysis__analysis__type_ctor_info_func_id_0, (MR_Word) &analysis_scalar_common_2[12], analysis__FuncImdgA_4, analysis__FuncImdgB_5, analysis__FuncImdg_6);
#line 1180 "analysis.m"
      return;
    }
#line 1179 "analysis.m"
  }
#line 1176 "analysis.m"
}

#line 1173 "analysis.m"
static MR_bool MR_CALL 
analysis__clear_imdg_entries_pointing_at_3_3_p_0_1(
#line 1173 "analysis.m"
  MR_Box analysis__closure_arg,
#line 1173 "analysis.m"
  MR_Box analysis__wrapper_arg_1)
#line 1173 "analysis.m"
{
#line 1173 "analysis.m"
  {
#line 1173 "analysis.m"
    MR_bool analysis__succeeded;
#line 1173 "analysis.m"
    MR_Box analysis__closure = analysis__closure_arg;

#line 1173 "analysis.m"
    {
#line 1173 "analysis.m"
      return analysis__succeeded = analysis__IntroducedFrom__pred__clear_imdg_entries_pointing_at_3__1173__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 3))), ((MR_Word) analysis__wrapper_arg_1));
    }
#line 1173 "analysis.m"
    return analysis__succeeded;
#line 1173 "analysis.m"
  }
#line 1173 "analysis.m"
}

#line 1169 "analysis.m"
void MR_CALL 
analysis__clear_imdg_entries_pointing_at_3_3_p_0(
#line 1169 "analysis.m"
  MR_Word analysis__ModuleName_4,
#line 1169 "analysis.m"
  MR_Word analysis__Arcs0_5,
#line 1169 "analysis.m"
  MR_Word * analysis__Arcs_6)
#line 1169 "analysis.m"
{
#line 1172 "analysis.m"
  {
#line 1172 "analysis.m"
    MR_bool analysis__succeeded;
#line 1172 "analysis.m"
    MR_Word analysis__V_8_8;

#line 1173 "analysis.m"
    {
#line 1173 "analysis.m"
      analysis__V_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1173 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_8_8, 0) = ((MR_Box) (&analysis_scalar_common_13[1]));
#line 1173 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_8_8, 1) = ((MR_Box) (analysis__clear_imdg_entries_pointing_at_3_3_p_0_1));
#line 1173 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_8_8, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1173 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_8_8, 3) = ((MR_Box) (analysis__ModuleName_4));
#line 1173 "analysis.m"
    }
#line 1173 "analysis.m"
    {
#line 1173 "analysis.m"
      mercury__list__filter_3_p_0((MR_Word) &analysis__analysis__type_ctor_info_imdg_arc_0, analysis__V_8_8, analysis__Arcs0_5, analysis__Arcs_6);
#line 1173 "analysis.m"
      return;
    }
#line 1172 "analysis.m"
  }
#line 1169 "analysis.m"
}

#line 1166 "analysis.m"
static void MR_CALL 
analysis__clear_imdg_entries_pointing_at_2_3_p_0_1(
#line 1166 "analysis.m"
  MR_Box analysis__closure_arg,
#line 1166 "analysis.m"
  MR_Box analysis__wrapper_arg_1,
#line 1166 "analysis.m"
  MR_Box * analysis__wrapper_arg_2)
#line 1166 "analysis.m"
{
#line 1166 "analysis.m"
  {
#line 1166 "analysis.m"
    MR_Box analysis__closure = analysis__closure_arg;
#line 1166 "analysis.m"
    MR_Word analysis__conv0_Arcs_6;

#line 1166 "analysis.m"
    {
#line 1166 "analysis.m"
      analysis__clear_imdg_entries_pointing_at_3_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 3))), ((MR_Word) analysis__wrapper_arg_1), &analysis__conv0_Arcs_6);
    }
#line 1166 "analysis.m"
    *analysis__wrapper_arg_2 = ((MR_Box) (analysis__conv0_Arcs_6));
#line 1166 "analysis.m"
  }
#line 1166 "analysis.m"
}

#line 1161 "analysis.m"
void MR_CALL 
analysis__clear_imdg_entries_pointing_at_2_3_p_0(
#line 1161 "analysis.m"
  MR_Word analysis__ModuleName_4,
#line 1161 "analysis.m"
  MR_Word analysis__FuncMap0_5,
#line 1161 "analysis.m"
  MR_Word * analysis__FuncMap_6)
#line 1161 "analysis.m"
{
#line 1165 "analysis.m"
  {
#line 1165 "analysis.m"
    MR_bool analysis__succeeded;
#line 1165 "analysis.m"
    MR_Word analysis__TypeInfo_10_10;
#line 1165 "analysis.m"
    MR_Word analysis__V_7_7;

#line 1166 "analysis.m"
    {
#line 1166 "analysis.m"
      analysis__V_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1166 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_7_7, 0) = ((MR_Box) (&analysis_scalar_common_4[5]));
#line 1166 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_7_7, 1) = ((MR_Box) (analysis__clear_imdg_entries_pointing_at_2_3_p_0_1));
#line 1166 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_7_7, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1166 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_7_7, 3) = ((MR_Box) (analysis__ModuleName_4));
#line 1166 "analysis.m"
    }
#line 9981 "analysis.c"
    analysis__TypeInfo_10_10 = (MR_Word) &analysis_scalar_common_1[2];
#line 1166 "analysis.m"
    {
#line 1166 "analysis.m"
      mercury__map__map_values_only_3_p_0(analysis__TypeInfo_10_10, analysis__TypeInfo_10_10, (MR_Word) &analysis__analysis__type_ctor_info_func_id_0, analysis__V_7_7, analysis__FuncMap0_5, analysis__FuncMap_6);
#line 1166 "analysis.m"
      return;
    }
#line 1165 "analysis.m"
  }
#line 1161 "analysis.m"
}

#line 1158 "analysis.m"
static void MR_CALL 
analysis__clear_imdg_entries_pointing_at_3_p_0_1(
#line 1158 "analysis.m"
  MR_Box analysis__closure_arg,
#line 1158 "analysis.m"
  MR_Box analysis__wrapper_arg_1,
#line 1158 "analysis.m"
  MR_Box * analysis__wrapper_arg_2)
#line 1158 "analysis.m"
{
#line 1158 "analysis.m"
  {
#line 1158 "analysis.m"
    MR_Box analysis__closure = analysis__closure_arg;
#line 1158 "analysis.m"
    MR_Word analysis__conv0_FuncMap_6;

#line 1158 "analysis.m"
    {
#line 1158 "analysis.m"
      analysis__clear_imdg_entries_pointing_at_2_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 3))), ((MR_Word) analysis__wrapper_arg_1), &analysis__conv0_FuncMap_6);
    }
#line 1158 "analysis.m"
    *analysis__wrapper_arg_2 = ((MR_Box) (analysis__conv0_FuncMap_6));
#line 1158 "analysis.m"
  }
#line 1158 "analysis.m"
}

#line 1153 "analysis.m"
void MR_CALL 
analysis__clear_imdg_entries_pointing_at_3_p_0(
#line 1153 "analysis.m"
  MR_Word analysis__ModuleName_4,
#line 1153 "analysis.m"
  MR_Word analysis__Map0_5,
#line 1153 "analysis.m"
  MR_Word * analysis__Map_6)
#line 1153 "analysis.m"
{
#line 1157 "analysis.m"
  {
#line 1157 "analysis.m"
    MR_bool analysis__succeeded;
#line 1157 "analysis.m"
    MR_Word analysis__TypeInfo_10_10;
#line 1157 "analysis.m"
    MR_Word analysis__V_7_7;

#line 1158 "analysis.m"
    {
#line 1158 "analysis.m"
      analysis__V_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1158 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_7_7, 0) = ((MR_Box) (&analysis_scalar_common_4[4]));
#line 1158 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_7_7, 1) = ((MR_Box) (analysis__clear_imdg_entries_pointing_at_3_p_0_1));
#line 1158 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_7_7, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1158 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_7_7, 3) = ((MR_Box) (analysis__ModuleName_4));
#line 1158 "analysis.m"
    }
#line 10059 "analysis.c"
    analysis__TypeInfo_10_10 = (MR_Word) &analysis_scalar_common_2[4];
#line 1158 "analysis.m"
    {
#line 1158 "analysis.m"
      mercury__map__map_values_only_3_p_0(analysis__TypeInfo_10_10, analysis__TypeInfo_10_10, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, analysis__V_7_7, analysis__Map0_5, analysis__Map_6);
#line 1158 "analysis.m"
      return;
    }
#line 1157 "analysis.m"
  }
#line 1153 "analysis.m"
}

#line 1143 "analysis.m"
void MR_CALL 
analysis__write_clearing_entries_4_p_0(
#line 1143 "analysis.m"
  MR_Word analysis__ModuleName_5,
#line 1143 "analysis.m"
  MR_Word analysis__ImportedModuleName_6)
#line 1143 "analysis.m"
{
#line 1146 "analysis.m"
  {
#line 1146 "analysis.m"
    MR_bool analysis__succeeded;
#line 1146 "analysis.m"
    MR_Word analysis__TypeCtorInfo_18_18;

#line 1147 "analysis.m"
    {
#line 1147 "analysis.m"
      mercury__io__write_string_3_p_0((MR_String) "% Clearing entries involving ");
    }
#line 10094 "analysis.c"
    analysis__TypeCtorInfo_18_18 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 1148 "analysis.m"
    {
#line 1148 "analysis.m"
      mercury__io__write_3_p_0(analysis__TypeCtorInfo_18_18, ((MR_Box) (analysis__ModuleName_5)));
    }
#line 1149 "analysis.m"
    {
#line 1149 "analysis.m"
      mercury__io__write_string_3_p_0((MR_String) " from ");
    }
#line 1150 "analysis.m"
    {
#line 1150 "analysis.m"
      mercury__io__write_3_p_0(analysis__TypeCtorInfo_18_18, ((MR_Box) (analysis__ImportedModuleName_6)));
    }
#line 1151 "analysis.m"
    {
#line 1151 "analysis.m"
      mercury__io__write_string_3_p_0((MR_String) "\'s IMDG.\n");
#line 1151 "analysis.m"
      return;
    }
#line 1146 "analysis.m"
  }
#line 1143 "analysis.m"
}

#line 1136 "analysis.m"
static void MR_CALL 
analysis__update_intermodule_dependencies_2_4_p_0_1(
#line 1136 "analysis.m"
  MR_Box analysis__closure_arg,
#line 1136 "analysis.m"
  MR_Box analysis__wrapper_arg_1,
#line 1136 "analysis.m"
  MR_Box analysis__wrapper_arg_2,
#line 1136 "analysis.m"
  MR_Box * analysis__wrapper_arg_3)
#line 1136 "analysis.m"
{
#line 1136 "analysis.m"
  {
#line 1136 "analysis.m"
    MR_Box analysis__closure = analysis__closure_arg;
#line 1136 "analysis.m"
    MR_Word analysis__conv2_FuncImdg_6;

#line 1136 "analysis.m"
    {
#line 1136 "analysis.m"
      analysis__combine_func_imdg_3_p_0(((MR_Word) analysis__wrapper_arg_1), ((MR_Word) analysis__wrapper_arg_2), &analysis__conv2_FuncImdg_6);
    }
#line 1136 "analysis.m"
    *analysis__wrapper_arg_3 = ((MR_Box) (analysis__conv2_FuncImdg_6));
#line 1136 "analysis.m"
  }
#line 1136 "analysis.m"
}

#line 1124 "analysis.m"
void MR_CALL 
analysis__update_intermodule_dependencies_2_4_p_0(
#line 1124 "analysis.m"
  MR_Word analysis__ModuleName_5,
#line 1124 "analysis.m"
  MR_Word analysis__ImportedModuleName_6,
#line 1124 "analysis.m"
  MR_Word analysis__STATE_VARIABLE_Info_0_13,
#line 1124 "analysis.m"
  MR_Word * analysis__STATE_VARIABLE_Info_14)
#line 1124 "analysis.m"
{
#line 1127 "analysis.m"
  {
#line 1127 "analysis.m"
    MR_bool analysis__succeeded;
#line 1127 "analysis.m"
    MR_Word analysis__TypeCtorInfo_84_84 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 1127 "analysis.m"
    MR_Word analysis__TypeInfo_85_85 = (MR_Word) &analysis_scalar_common_2[5];
#line 1127 "analysis.m"
    MR_Word analysis__IMDG0_8;
#line 1127 "analysis.m"
    MR_Word analysis__IMDG1_10;
#line 1127 "analysis.m"
    MR_Word analysis__IMDG_12;
#line 1127 "analysis.m"
    MR_Word analysis__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 9)));
#line 1127 "analysis.m"
    MR_Word analysis__STATE_VARIABLE_Info_21_21;
#line 1127 "analysis.m"
    MR_Word analysis__V_22_22;
#line 1127 "analysis.m"
    MR_Word analysis__V_23_23;
#line 1127 "analysis.m"
    MR_Word analysis__V_25_25;
#line 1127 "analysis.m"
    MR_Word analysis__V_26_26;
#line 1128 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_compiler_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 0)));
#line 1128 "analysis.m"
    MR_Box analysis__V_27_27 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 1));
#line 1128 "analysis.m"
    MR_Word analysis__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 2)));
#line 1128 "analysis.m"
    MR_Word analysis__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 3)));
#line 1128 "analysis.m"
    MR_Word analysis__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 4)));
#line 1128 "analysis.m"
    MR_Word analysis__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 5)));
#line 1128 "analysis.m"
    MR_Word analysis__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 6)));
#line 1128 "analysis.m"
    MR_Word analysis__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 7)));
#line 1128 "analysis.m"
    MR_Word analysis__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 8)));
#line 1128 "analysis.m"
    MR_Word analysis__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 10)));
#line 1128 "analysis.m"
    MR_Box analysis__conv0_IMDG0_8;
#line 1137 "analysis.m"
    MR_Word analysis__NewArcs_11;
#line 1135 "analysis.m"
    MR_Word analysis__V_19_19;
#line 1135 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_compiler_88;
#line 1135 "analysis.m"
    MR_Box analysis__V_36_36;
#line 1135 "analysis.m"
    MR_Word analysis__V_37_37;
#line 1135 "analysis.m"
    MR_Word analysis__V_38_38;
#line 1135 "analysis.m"
    MR_Word analysis__V_39_39;
#line 1135 "analysis.m"
    MR_Word analysis__V_40_40;
#line 1135 "analysis.m"
    MR_Word analysis__V_41_41;
#line 1135 "analysis.m"
    MR_Word analysis__V_42_42;
#line 1135 "analysis.m"
    MR_Word analysis__V_43_43;
#line 1135 "analysis.m"
    MR_Word analysis__V_44_44;
#line 1135 "analysis.m"
    MR_Box analysis__conv1_NewArcs_11;
#line 1140 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_compiler_94;
#line 1140 "analysis.m"
    MR_Box analysis__V_45_45;
#line 1140 "analysis.m"
    MR_Word analysis__V_46_46;
#line 1140 "analysis.m"
    MR_Word analysis__V_47_47;
#line 1140 "analysis.m"
    MR_Word analysis__V_48_48;
#line 1140 "analysis.m"
    MR_Word analysis__V_49_49;
#line 1140 "analysis.m"
    MR_Word analysis__V_50_50;
#line 1140 "analysis.m"
    MR_Word analysis__V_51_51;
#line 1140 "analysis.m"
    MR_Word analysis__V_52_52;
#line 1140 "analysis.m"
    MR_Word analysis__V_53_53;
#line 1140 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_compiler_95;
#line 1140 "analysis.m"
    MR_Box analysis__V_54_54;
#line 1140 "analysis.m"
    MR_Word analysis__V_55_55;
#line 1140 "analysis.m"
    MR_Word analysis__V_56_56;
#line 1140 "analysis.m"
    MR_Word analysis__V_57_57;
#line 1140 "analysis.m"
    MR_Word analysis__V_58_58;
#line 1140 "analysis.m"
    MR_Word analysis__V_59_59;
#line 1140 "analysis.m"
    MR_Word analysis__V_60_60;
#line 1140 "analysis.m"
    MR_Word analysis__V_61_61;
#line 1140 "analysis.m"
    MR_Word analysis__V_63_63;
#line 1140 "analysis.m"
    MR_Word analysis__V_62_62;
#line 1141 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_compiler_96;
#line 1141 "analysis.m"
    MR_Box analysis__V_64_64;
#line 1141 "analysis.m"
    MR_Word analysis__V_65_65;
#line 1141 "analysis.m"
    MR_Word analysis__V_66_66;
#line 1141 "analysis.m"
    MR_Word analysis__V_67_67;
#line 1141 "analysis.m"
    MR_Word analysis__V_68_68;
#line 1141 "analysis.m"
    MR_Word analysis__V_69_69;
#line 1141 "analysis.m"
    MR_Word analysis__V_70_70;
#line 1141 "analysis.m"
    MR_Word analysis__V_71_71;
#line 1141 "analysis.m"
    MR_Word analysis__V_72_72;
#line 1141 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_compiler_97;
#line 1141 "analysis.m"
    MR_Box analysis__V_73_73;
#line 1141 "analysis.m"
    MR_Word analysis__V_74_74;
#line 1141 "analysis.m"
    MR_Word analysis__V_75_75;
#line 1141 "analysis.m"
    MR_Word analysis__V_76_76;
#line 1141 "analysis.m"
    MR_Word analysis__V_77_77;
#line 1141 "analysis.m"
    MR_Word analysis__V_78_78;
#line 1141 "analysis.m"
    MR_Word analysis__V_79_79;
#line 1141 "analysis.m"
    MR_Word analysis__V_80_80;
#line 1141 "analysis.m"
    MR_Word analysis__V_81_81;
#line 1141 "analysis.m"
    MR_Word analysis__V_82_82;

#line 1128 "analysis.m"
    {
#line 1128 "analysis.m"
      mercury__map__lookup_3_p_0(analysis__TypeCtorInfo_84_84, analysis__TypeInfo_85_85, analysis__V_15_15, ((MR_Box) (analysis__ImportedModuleName_6)), &analysis__conv0_IMDG0_8);
    }
#line 1128 "analysis.m"
    analysis__IMDG0_8 = ((MR_Word) analysis__conv0_IMDG0_8);
#line 1130 "analysis.m"
    {
#line 1130 "analysis.m"
      analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_109_115_103_95_95_104_111_49_95_95_91_51_93_95_48_3_p_0(analysis__ModuleName_5, analysis__ImportedModuleName_6);
    }
#line 1133 "analysis.m"
    {
#line 1133 "analysis.m"
      analysis__clear_imdg_entries_pointing_at_3_p_0(analysis__ModuleName_5, analysis__IMDG0_8, &analysis__IMDG1_10);
    }
#line 1135 "analysis.m"
    analysis__TypeClassInfo_for_compiler_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 0)));
#line 1135 "analysis.m"
    analysis__V_36_36 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 1));
#line 1135 "analysis.m"
    analysis__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 2)));
#line 1135 "analysis.m"
    analysis__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 3)));
#line 1135 "analysis.m"
    analysis__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 4)));
#line 1135 "analysis.m"
    analysis__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 5)));
#line 1135 "analysis.m"
    analysis__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 6)));
#line 1135 "analysis.m"
    analysis__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 7)));
#line 1135 "analysis.m"
    analysis__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 8)));
#line 1135 "analysis.m"
    analysis__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 9)));
#line 1135 "analysis.m"
    analysis__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 10)));
#line 1135 "analysis.m"
    {
#line 1135 "analysis.m"
      analysis__succeeded = mercury__map__elem_2_f_0(analysis__TypeCtorInfo_84_84, analysis__TypeInfo_85_85, ((MR_Box) (analysis__ImportedModuleName_6)), analysis__V_19_19, &analysis__conv1_NewArcs_11);
    }
#line 1135 "analysis.m"
    if (analysis__succeeded)
#line 1135 "analysis.m"
      {
#line 1135 "analysis.m"
        analysis__NewArcs_11 = ((MR_Word) analysis__conv1_NewArcs_11);
#line 1135 "analysis.m"
        analysis__succeeded = MR_TRUE;
#line 1135 "analysis.m"
      }
#line 1137 "analysis.m"
    if (analysis__succeeded)
#line 1136 "analysis.m"
      {
#line 1136 "analysis.m"
        {
#line 1136 "analysis.m"
          mercury__map__union_4_p_1((MR_Word) &analysis_scalar_common_2[4], (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &analysis_scalar_common_2[11], analysis__IMDG1_10, analysis__NewArcs_11, &analysis__IMDG_12);
        }
#line 1136 "analysis.m"
      }
#line 1137 "analysis.m"
    else
#line 1138 "analysis.m"
      analysis__IMDG_12 = analysis__IMDG1_10;
#line 1140 "analysis.m"
    analysis__TypeClassInfo_for_compiler_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 0)));
#line 1140 "analysis.m"
    analysis__V_45_45 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 1));
#line 1140 "analysis.m"
    analysis__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 2)));
#line 1140 "analysis.m"
    analysis__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 3)));
#line 1140 "analysis.m"
    analysis__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 4)));
#line 1140 "analysis.m"
    analysis__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 5)));
#line 1140 "analysis.m"
    analysis__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 6)));
#line 1140 "analysis.m"
    analysis__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 7)));
#line 1140 "analysis.m"
    analysis__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 8)));
#line 1140 "analysis.m"
    analysis__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 9)));
#line 1140 "analysis.m"
    analysis__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 10)));
#line 1140 "analysis.m"
    {
#line 1140 "analysis.m"
      analysis__V_23_23 = mercury__map__f_101_108_101_109_32_58_61_3_f_0(analysis__TypeCtorInfo_84_84, analysis__TypeInfo_85_85, ((MR_Box) (analysis__ImportedModuleName_6)), analysis__V_22_22, ((MR_Box) (analysis__IMDG_12)));
    }
#line 1140 "analysis.m"
    analysis__TypeClassInfo_for_compiler_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 0)));
#line 1140 "analysis.m"
    analysis__V_54_54 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 1));
#line 1140 "analysis.m"
    analysis__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 2)));
#line 1140 "analysis.m"
    analysis__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 3)));
#line 1140 "analysis.m"
    analysis__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 4)));
#line 1140 "analysis.m"
    analysis__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 5)));
#line 1140 "analysis.m"
    analysis__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 6)));
#line 1140 "analysis.m"
    analysis__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 7)));
#line 1140 "analysis.m"
    analysis__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 8)));
#line 1140 "analysis.m"
    analysis__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 9)));
#line 1140 "analysis.m"
    analysis__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 10)));
#line 1140 "analysis.m"
    {
#line 1140 "analysis.m"
      analysis__STATE_VARIABLE_Info_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 1140 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_21_21, 0) = ((MR_Box) (analysis__TypeClassInfo_for_compiler_95));
#line 1140 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_21_21, 1) = analysis__V_54_54;
#line 1140 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_21_21, 2) = ((MR_Box) (analysis__V_55_55));
#line 1140 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_21_21, 3) = ((MR_Box) (analysis__V_56_56));
#line 1140 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_21_21, 4) = ((MR_Box) (analysis__V_57_57));
#line 1140 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_21_21, 5) = ((MR_Box) (analysis__V_58_58));
#line 1140 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_21_21, 6) = ((MR_Box) (analysis__V_59_59));
#line 1140 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_21_21, 7) = ((MR_Box) (analysis__V_60_60));
#line 1140 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_21_21, 8) = ((MR_Box) (analysis__V_61_61));
#line 1140 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_21_21, 9) = ((MR_Box) (analysis__V_23_23));
#line 1140 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_21_21, 10) = ((MR_Box) (analysis__V_63_63));
#line 1140 "analysis.m"
    }
#line 1141 "analysis.m"
    analysis__TypeClassInfo_for_compiler_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_21_21, (MR_Integer) 0)));
#line 1141 "analysis.m"
    analysis__V_64_64 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_21_21, (MR_Integer) 1));
#line 1141 "analysis.m"
    analysis__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_21_21, (MR_Integer) 2)));
#line 1141 "analysis.m"
    analysis__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_21_21, (MR_Integer) 3)));
#line 1141 "analysis.m"
    analysis__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_21_21, (MR_Integer) 4)));
#line 1141 "analysis.m"
    analysis__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_21_21, (MR_Integer) 5)));
#line 1141 "analysis.m"
    analysis__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_21_21, (MR_Integer) 6)));
#line 1141 "analysis.m"
    analysis__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_21_21, (MR_Integer) 7)));
#line 1141 "analysis.m"
    analysis__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_21_21, (MR_Integer) 8)));
#line 1141 "analysis.m"
    analysis__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_21_21, (MR_Integer) 9)));
#line 1141 "analysis.m"
    analysis__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_21_21, (MR_Integer) 10)));
#line 1141 "analysis.m"
    {
#line 1141 "analysis.m"
      analysis__V_25_25 = mercury__map__delete_2_f_0(analysis__TypeCtorInfo_84_84, analysis__TypeInfo_85_85, analysis__V_26_26, ((MR_Box) (analysis__ImportedModuleName_6)));
    }
#line 1141 "analysis.m"
    analysis__TypeClassInfo_for_compiler_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_21_21, (MR_Integer) 0)));
#line 1141 "analysis.m"
    analysis__V_73_73 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_21_21, (MR_Integer) 1));
#line 1141 "analysis.m"
    analysis__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_21_21, (MR_Integer) 2)));
#line 1141 "analysis.m"
    analysis__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_21_21, (MR_Integer) 3)));
#line 1141 "analysis.m"
    analysis__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_21_21, (MR_Integer) 4)));
#line 1141 "analysis.m"
    analysis__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_21_21, (MR_Integer) 5)));
#line 1141 "analysis.m"
    analysis__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_21_21, (MR_Integer) 6)));
#line 1141 "analysis.m"
    analysis__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_21_21, (MR_Integer) 7)));
#line 1141 "analysis.m"
    analysis__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_21_21, (MR_Integer) 8)));
#line 1141 "analysis.m"
    analysis__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_21_21, (MR_Integer) 9)));
#line 1141 "analysis.m"
    analysis__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_21_21, (MR_Integer) 10)));
#line 1141 "analysis.m"
    {
#line 1141 "analysis.m"
      MR_Word base;
#line 1141 "analysis.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 1141 "analysis.m"
      *analysis__STATE_VARIABLE_Info_14 = base;
#line 1141 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (analysis__TypeClassInfo_for_compiler_97));
#line 1141 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 1) = analysis__V_73_73;
#line 1141 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (analysis__V_74_74));
#line 1141 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (analysis__V_75_75));
#line 1141 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (analysis__V_76_76));
#line 1141 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (analysis__V_77_77));
#line 1141 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (analysis__V_78_78));
#line 1141 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (analysis__V_79_79));
#line 1141 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (analysis__V_80_80));
#line 1141 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (analysis__V_81_81));
#line 1141 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (analysis__V_25_25));
#line 1141 "analysis.m"
    }
#line 1127 "analysis.m"
  }
#line 1124 "analysis.m"
}

#line 1121 "analysis.m"
static void MR_CALL 
analysis__update_intermodule_dependencies_4_p_0_1(
#line 1121 "analysis.m"
  MR_Box analysis__closure_arg,
#line 1121 "analysis.m"
  MR_Box analysis__wrapper_arg_1,
#line 1121 "analysis.m"
  MR_Box analysis__wrapper_arg_2,
#line 1121 "analysis.m"
  MR_Box * analysis__wrapper_arg_3)
#line 1121 "analysis.m"
{
#line 1121 "analysis.m"
  {
#line 1121 "analysis.m"
    MR_Box analysis__closure = analysis__closure_arg;
#line 1121 "analysis.m"
    MR_Word analysis__conv0_STATE_VARIABLE_Info_14;

#line 1121 "analysis.m"
    {
#line 1121 "analysis.m"
      analysis__update_intermodule_dependencies_2_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 3))), ((MR_Word) analysis__wrapper_arg_1), ((MR_Word) analysis__wrapper_arg_2), &analysis__conv0_STATE_VARIABLE_Info_14);
    }
#line 1121 "analysis.m"
    *analysis__wrapper_arg_3 = ((MR_Box) (analysis__conv0_STATE_VARIABLE_Info_14));
#line 1121 "analysis.m"
  }
#line 1121 "analysis.m"
}

#line 1117 "analysis.m"
void MR_CALL 
analysis__update_intermodule_dependencies_4_p_0(
#line 1117 "analysis.m"
  MR_Word analysis__ModuleName_5,
#line 1117 "analysis.m"
  MR_Word analysis__LocalImportedModules_6,
#line 1117 "analysis.m"
  MR_Word analysis__STATE_VARIABLE_Info_0_8,
#line 1117 "analysis.m"
  MR_Word * analysis__STATE_VARIABLE_Info_9)
#line 1117 "analysis.m"
{
#line 1120 "analysis.m"
  {
#line 1120 "analysis.m"
    MR_bool analysis__succeeded;
#line 1120 "analysis.m"
    MR_Word analysis__V_10_10;
#line 1121 "analysis.m"
    MR_Box analysis__conv1_STATE_VARIABLE_Info_9;

#line 1121 "analysis.m"
    {
#line 1121 "analysis.m"
      analysis__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1121 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_10_10, 0) = ((MR_Box) (&analysis_scalar_common_6[1]));
#line 1121 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_10_10, 1) = ((MR_Box) (analysis__update_intermodule_dependencies_4_p_0_1));
#line 1121 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_10_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1121 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_10_10, 3) = ((MR_Box) (analysis__ModuleName_5));
#line 1121 "analysis.m"
    }
#line 1121 "analysis.m"
    {
#line 1121 "analysis.m"
      mercury__set__fold_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &analysis__analysis__type_ctor_info_analysis_info_0, analysis__V_10_10, analysis__LocalImportedModules_6, ((MR_Box) (analysis__STATE_VARIABLE_Info_0_8)), &analysis__conv1_STATE_VARIABLE_Info_9);
    }
#line 1121 "analysis.m"
    *analysis__STATE_VARIABLE_Info_9 = ((MR_Word) analysis__conv1_STATE_VARIABLE_Info_9);
#line 1120 "analysis.m"
  }
#line 1117 "analysis.m"
}

#line 1099 "analysis.m"
void MR_CALL 
analysis__write_tainting_module_4_p_0(
#line 1099 "analysis.m"
  MR_Word analysis__ModuleName_5,
#line 1099 "analysis.m"
  MR_Word analysis__ModuleStatus_6)
#line 1099 "analysis.m"
{
#line 1102 "analysis.m"
  {
#line 1102 "analysis.m"
    MR_bool analysis__succeeded;
#line 1102 "analysis.m"
    MR_Word analysis__TypeCtorInfo_17_17 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;

#line 1103 "analysis.m"
    {
#line 1103 "analysis.m"
      mercury__io__print_3_p_0(analysis__TypeCtorInfo_17_17, ((MR_Box) ((MR_String) "% Tainting the overall module status of ")));
    }
#line 1104 "analysis.m"
    {
#line 1104 "analysis.m"
      mercury__io__print_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (analysis__ModuleName_5)));
    }
#line 1105 "analysis.m"
    {
#line 1105 "analysis.m"
      mercury__io__print_3_p_0(analysis__TypeCtorInfo_17_17, ((MR_Box) ((MR_String) " with ")));
    }
#line 1106 "analysis.m"
    {
#line 1106 "analysis.m"
      mercury__io__print_3_p_0((MR_Word) &analysis__analysis__type_ctor_info_analysis_status_0, ((MR_Box) (analysis__ModuleStatus_6)));
    }
#line 1107 "analysis.m"
    {
#line 1107 "analysis.m"
      mercury__io__nl_2_p_0();
#line 1107 "analysis.m"
      return;
    }
#line 1102 "analysis.m"
  }
#line 1099 "analysis.m"
}

#line 1083 "analysis.m"
void MR_CALL 
analysis__write_changed_answer_6_p_0(
#line 1083 "analysis.m"
  MR_Word analysis__TypeInfo_for_Answer_29,
#line 1083 "analysis.m"
  MR_Box analysis__OldAnswer_7,
#line 1083 "analysis.m"
  MR_Box analysis__NewAnswer_8,
#line 1083 "analysis.m"
  MR_Word analysis__Status_9,
#line 1083 "analysis.m"
  MR_Word analysis__DepModules_10)
#line 1083 "analysis.m"
{
#line 1086 "analysis.m"
  {
#line 1086 "analysis.m"
    MR_bool analysis__succeeded;

#line 1087 "analysis.m"
    {
#line 1087 "analysis.m"
      mercury__io__write_string_3_p_0((MR_String) "% ");
    }
#line 1088 "analysis.m"
    {
#line 1088 "analysis.m"
      mercury__io__write_3_p_0(analysis__TypeInfo_for_Answer_29, analysis__OldAnswer_7);
    }
#line 1089 "analysis.m"
    {
#line 1089 "analysis.m"
      mercury__io__write_string_3_p_0((MR_String) " changed to ");
    }
#line 1090 "analysis.m"
    {
#line 1090 "analysis.m"
      mercury__io__write_3_p_0(analysis__TypeInfo_for_Answer_29, analysis__NewAnswer_8);
    }
#line 1091 "analysis.m"
    {
#line 1091 "analysis.m"
      mercury__io__nl_2_p_0();
    }
#line 1092 "analysis.m"
    {
#line 1092 "analysis.m"
      mercury__io__write_string_3_p_0((MR_String) "Mark dependent modules as ");
    }
#line 1093 "analysis.m"
    {
#line 1093 "analysis.m"
      mercury__io__write_3_p_0((MR_Word) &analysis__analysis__type_ctor_info_analysis_status_0, ((MR_Box) (analysis__Status_9)));
    }
#line 1094 "analysis.m"
    {
#line 1094 "analysis.m"
      mercury__io__nl_2_p_0();
    }
#line 1095 "analysis.m"
    {
#line 1095 "analysis.m"
      mercury__io__write_string_3_p_0((MR_String) "The modules to mark are: ");
    }
#line 1096 "analysis.m"
    {
#line 1096 "analysis.m"
      mercury__io__write_3_p_0((MR_Word) &analysis_scalar_common_1[3], ((MR_Box) (analysis__DepModules_10)));
    }
#line 1097 "analysis.m"
    {
#line 1097 "analysis.m"
      mercury__io__nl_2_p_0();
#line 1097 "analysis.m"
      return;
    }
#line 1086 "analysis.m"
  }
#line 1083 "analysis.m"
}

#line 1069 "analysis.m"
void MR_CALL 
analysis__write_no_change_in_result_6_p_0(
#line 1069 "analysis.m"
  MR_Word analysis__TypeInfo_for_Call_27,
#line 1069 "analysis.m"
  MR_Word analysis__TypeInfo_for_Answer_28,
#line 1069 "analysis.m"
  MR_Word analysis__ModuleName_7,
#line 1069 "analysis.m"
  MR_Word analysis__FuncId_8,
#line 1069 "analysis.m"
  MR_Box analysis__Call_9,
#line 1069 "analysis.m"
  MR_Box analysis__NewAnswer_10)
#line 1069 "analysis.m"
{
#line 1072 "analysis.m"
  {
#line 1072 "analysis.m"
    MR_bool analysis__succeeded;

#line 1073 "analysis.m"
    {
#line 1073 "analysis.m"
      mercury__io__write_string_3_p_0((MR_String) "% No change in the result ");
    }
#line 1074 "analysis.m"
    {
#line 1074 "analysis.m"
      mercury__io__write_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (analysis__ModuleName_7)));
    }
#line 1075 "analysis.m"
    {
#line 1075 "analysis.m"
      mercury__io__write_string_3_p_0((MR_String) ".");
    }
#line 1076 "analysis.m"
    {
#line 1076 "analysis.m"
      mercury__io__write_3_p_0((MR_Word) &analysis__analysis__type_ctor_info_func_id_0, ((MR_Box) (analysis__FuncId_8)));
    }
#line 1077 "analysis.m"
    {
#line 1077 "analysis.m"
      mercury__io__write_string_3_p_0((MR_String) ":");
    }
#line 1078 "analysis.m"
    {
#line 1078 "analysis.m"
      mercury__io__write_3_p_0(analysis__TypeInfo_for_Call_27, analysis__Call_9);
    }
#line 1079 "analysis.m"
    {
#line 1079 "analysis.m"
      mercury__io__write_string_3_p_0((MR_String) " --> ");
    }
#line 1080 "analysis.m"
    {
#line 1080 "analysis.m"
      mercury__io__write_3_p_0(analysis__TypeInfo_for_Answer_28, analysis__NewAnswer_10);
    }
#line 1081 "analysis.m"
    {
#line 1081 "analysis.m"
      mercury__io__nl_2_p_0();
#line 1081 "analysis.m"
      return;
    }
#line 1072 "analysis.m"
  }
#line 1069 "analysis.m"
}

#line 1057 "analysis.m"
void MR_CALL 
analysis__ensure_module_status_loaded_6_p_0(
#line 1057 "analysis.m"
  MR_Word analysis__Globals_7,
#line 1057 "analysis.m"
  MR_Word analysis__ModuleName_8,
#line 1057 "analysis.m"
  MR_Word analysis__STATE_VARIABLE_Info_0_12,
#line 1057 "analysis.m"
  MR_Word * analysis__STATE_VARIABLE_Info_13)
#line 1057 "analysis.m"
{
#line 1063 "analysis.m"
  {
#line 1063 "analysis.m"
    MR_bool analysis__succeeded;
#line 1061 "analysis.m"
    MR_Word analysis__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 6)));
#line 1061 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_compiler_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 0)));
#line 1061 "analysis.m"
    MR_Box analysis__V_22_22 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 1));
#line 1061 "analysis.m"
    MR_Word analysis__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 2)));
#line 1061 "analysis.m"
    MR_Word analysis__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 3)));
#line 1061 "analysis.m"
    MR_Word analysis__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 4)));
#line 1061 "analysis.m"
    MR_Word analysis__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 5)));
#line 1061 "analysis.m"
    MR_Word analysis__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 7)));
#line 1061 "analysis.m"
    MR_Word analysis__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 8)));
#line 1061 "analysis.m"
    MR_Word analysis__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 9)));
#line 1061 "analysis.m"
    MR_Word analysis__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 10)));

#line 1061 "analysis.m"
    {
#line 1061 "analysis.m"
      analysis__succeeded = mercury__map__contains_2_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &analysis__analysis__type_ctor_info_analysis_status_0, analysis__V_16_16, ((MR_Box) (analysis__ModuleName_8)));
    }
#line 1063 "analysis.m"
    if (analysis__succeeded)
#line 1062 "analysis.m"
      *analysis__STATE_VARIABLE_Info_13 = analysis__STATE_VARIABLE_Info_0_12;
#line 1063 "analysis.m"
    else
#line 1065 "analysis.m"
      {
#line 1065 "analysis.m"
        MR_Word analysis__TypeClassInfo_for_compiler_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 0)));
#line 1065 "analysis.m"
        MR_Word analysis__ModuleStatus_11;
#line 1065 "analysis.m"
        MR_Box analysis__V_17_17 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 1));
#line 1065 "analysis.m"
        MR_Word analysis__V_20_20;
#line 1065 "analysis.m"
        MR_Word analysis__V_21_21;
#line 1064 "analysis.m"
        MR_Word analysis__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 2)));
#line 1064 "analysis.m"
        MR_Word analysis__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 3)));
#line 1064 "analysis.m"
        MR_Word analysis__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 4)));
#line 1064 "analysis.m"
        MR_Word analysis__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 5)));
#line 1064 "analysis.m"
        MR_Word analysis__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 6)));
#line 1064 "analysis.m"
        MR_Word analysis__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 7)));
#line 1064 "analysis.m"
        MR_Word analysis__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 8)));
#line 1064 "analysis.m"
        MR_Word analysis__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 9)));
#line 1064 "analysis.m"
        MR_Word analysis__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 10)));
#line 1066 "analysis.m"
        MR_Word analysis__TypeClassInfo_for_compiler_63;
#line 1066 "analysis.m"
        MR_Box analysis__V_40_40;
#line 1066 "analysis.m"
        MR_Word analysis__V_41_41;
#line 1066 "analysis.m"
        MR_Word analysis__V_42_42;
#line 1066 "analysis.m"
        MR_Word analysis__V_43_43;
#line 1066 "analysis.m"
        MR_Word analysis__V_44_44;
#line 1066 "analysis.m"
        MR_Word analysis__V_45_45;
#line 1066 "analysis.m"
        MR_Word analysis__V_46_46;
#line 1066 "analysis.m"
        MR_Word analysis__V_47_47;
#line 1066 "analysis.m"
        MR_Word analysis__V_48_48;
#line 1066 "analysis.m"
        MR_Word analysis__TypeClassInfo_for_compiler_66;
#line 1066 "analysis.m"
        MR_Box analysis__V_49_49;
#line 1066 "analysis.m"
        MR_Word analysis__V_50_50;
#line 1066 "analysis.m"
        MR_Word analysis__V_51_51;
#line 1066 "analysis.m"
        MR_Word analysis__V_52_52;
#line 1066 "analysis.m"
        MR_Word analysis__V_53_53;
#line 1066 "analysis.m"
        MR_Word analysis__V_55_55;
#line 1066 "analysis.m"
        MR_Word analysis__V_56_56;
#line 1066 "analysis.m"
        MR_Word analysis__V_57_57;
#line 1066 "analysis.m"
        MR_Word analysis__V_58_58;
#line 1066 "analysis.m"
        MR_Word analysis__V_54_54;

#line 1337 "analysis.m"
        {
#line 1337 "analysis.m"
          analysis__file__read_module_overall_status_6_p_0(analysis__TypeClassInfo_for_compiler_62, analysis__V_17_17, analysis__Globals_7, analysis__ModuleName_8, &analysis__ModuleStatus_11);
        }
#line 1066 "analysis.m"
        analysis__TypeClassInfo_for_compiler_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 0)));
#line 1066 "analysis.m"
        analysis__V_40_40 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 1));
#line 1066 "analysis.m"
        analysis__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 2)));
#line 1066 "analysis.m"
        analysis__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 3)));
#line 1066 "analysis.m"
        analysis__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 4)));
#line 1066 "analysis.m"
        analysis__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 5)));
#line 1066 "analysis.m"
        analysis__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 6)));
#line 1066 "analysis.m"
        analysis__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 7)));
#line 1066 "analysis.m"
        analysis__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 8)));
#line 1066 "analysis.m"
        analysis__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 9)));
#line 1066 "analysis.m"
        analysis__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 10)));
#line 1066 "analysis.m"
        {
#line 1066 "analysis.m"
          analysis__V_21_21 = mercury__map__f_101_108_101_109_32_58_61_3_f_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &analysis__analysis__type_ctor_info_analysis_status_0, ((MR_Box) (analysis__ModuleName_8)), analysis__V_20_20, ((MR_Box) (analysis__ModuleStatus_11)));
        }
#line 1066 "analysis.m"
        analysis__TypeClassInfo_for_compiler_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 0)));
#line 1066 "analysis.m"
        analysis__V_49_49 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 1));
#line 1066 "analysis.m"
        analysis__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 2)));
#line 1066 "analysis.m"
        analysis__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 3)));
#line 1066 "analysis.m"
        analysis__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 4)));
#line 1066 "analysis.m"
        analysis__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 5)));
#line 1066 "analysis.m"
        analysis__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 6)));
#line 1066 "analysis.m"
        analysis__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 7)));
#line 1066 "analysis.m"
        analysis__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 8)));
#line 1066 "analysis.m"
        analysis__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 9)));
#line 1066 "analysis.m"
        analysis__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 10)));
#line 1066 "analysis.m"
        {
#line 1066 "analysis.m"
          MR_Word base;
#line 1066 "analysis.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 1066 "analysis.m"
          *analysis__STATE_VARIABLE_Info_13 = base;
#line 1066 "analysis.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (analysis__TypeClassInfo_for_compiler_66));
#line 1066 "analysis.m"
          MR_hl_field(MR_mktag(0), base, 1) = analysis__V_49_49;
#line 1066 "analysis.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (analysis__V_50_50));
#line 1066 "analysis.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (analysis__V_51_51));
#line 1066 "analysis.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (analysis__V_52_52));
#line 1066 "analysis.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (analysis__V_53_53));
#line 1066 "analysis.m"
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (analysis__V_21_21));
#line 1066 "analysis.m"
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (analysis__V_55_55));
#line 1066 "analysis.m"
          MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (analysis__V_56_56));
#line 1066 "analysis.m"
          MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (analysis__V_57_57));
#line 1066 "analysis.m"
          MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (analysis__V_58_58));
#line 1066 "analysis.m"
        }
#line 1065 "analysis.m"
      }
#line 1063 "analysis.m"
  }
#line 1057 "analysis.m"
}

#line 1033 "analysis.m"
void MR_CALL 
analysis__taint_module_overall_status_7_p_0(
#line 1033 "analysis.m"
  MR_Word analysis__Globals_8,
#line 1033 "analysis.m"
  MR_Word analysis__Status_9,
#line 1033 "analysis.m"
  MR_Word analysis__ModuleName_10,
#line 1033 "analysis.m"
  MR_Word analysis__STATE_VARIABLE_Info_0_15,
#line 1033 "analysis.m"
  MR_Word * analysis__STATE_VARIABLE_Info_16)
#line 1033 "analysis.m"
{
#line 1039 "analysis.m"
  {
#line 1039 "analysis.m"
    MR_bool analysis__succeeded;

#line 1039 "analysis.m"
#line 1039 "analysis.m"
    switch (analysis__Status_9) {
#line 1039 "analysis.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1039 "analysis.m"
      case (MR_Integer) 0:
#line 1039 "analysis.m"
      case (MR_Integer) 1:
#line 1043 "analysis.m"
        {
#line 1043 "analysis.m"
          MR_Word analysis__TypeCtorInfo_56_56;
#line 1043 "analysis.m"
          MR_Word analysis__TypeCtorInfo_57_57;
#line 1043 "analysis.m"
          MR_Word analysis__ModuleStatus0_13;
#line 1043 "analysis.m"
          MR_Word analysis__ModuleStatus_14;
#line 1043 "analysis.m"
          MR_Word analysis__STATE_VARIABLE_Info_19_19;
#line 1043 "analysis.m"
          MR_Word analysis__V_21_21;
#line 1043 "analysis.m"
          MR_Word analysis__V_25_25;
#line 1043 "analysis.m"
          MR_Word analysis__V_26_26;
#line 1043 "analysis.m"
          MR_Word analysis__Debug_66;
#line 1051 "analysis.m"
          MR_Word analysis__TypeClassInfo_for_compiler_55;
#line 1051 "analysis.m"
          MR_Box analysis__V_27_27;
#line 1051 "analysis.m"
          MR_Word analysis__V_28_28;
#line 1051 "analysis.m"
          MR_Word analysis__V_29_29;
#line 1051 "analysis.m"
          MR_Word analysis__V_30_30;
#line 1051 "analysis.m"
          MR_Word analysis__V_31_31;
#line 1051 "analysis.m"
          MR_Word analysis__V_32_32;
#line 1051 "analysis.m"
          MR_Word analysis__V_33_33;
#line 1051 "analysis.m"
          MR_Word analysis__V_34_34;
#line 1051 "analysis.m"
          MR_Word analysis__V_35_35;
#line 1051 "analysis.m"
          MR_Box analysis__conv0_ModuleStatus0_13;
#line 1054 "analysis.m"
          MR_Word analysis__TypeClassInfo_for_compiler_60;
#line 1054 "analysis.m"
          MR_Box analysis__V_36_36;
#line 1054 "analysis.m"
          MR_Word analysis__V_37_37;
#line 1054 "analysis.m"
          MR_Word analysis__V_38_38;
#line 1054 "analysis.m"
          MR_Word analysis__V_39_39;
#line 1054 "analysis.m"
          MR_Word analysis__V_40_40;
#line 1054 "analysis.m"
          MR_Word analysis__V_41_41;
#line 1054 "analysis.m"
          MR_Word analysis__V_42_42;
#line 1054 "analysis.m"
          MR_Word analysis__V_43_43;
#line 1054 "analysis.m"
          MR_Word analysis__V_44_44;
#line 1054 "analysis.m"
          MR_Word analysis__TypeClassInfo_for_compiler_61;
#line 1054 "analysis.m"
          MR_Box analysis__V_45_45;
#line 1054 "analysis.m"
          MR_Word analysis__V_46_46;
#line 1054 "analysis.m"
          MR_Word analysis__V_47_47;
#line 1054 "analysis.m"
          MR_Word analysis__V_48_48;
#line 1054 "analysis.m"
          MR_Word analysis__V_49_49;
#line 1054 "analysis.m"
          MR_Word analysis__V_51_51;
#line 1054 "analysis.m"
          MR_Word analysis__V_52_52;
#line 1054 "analysis.m"
          MR_Word analysis__V_53_53;
#line 1054 "analysis.m"
          MR_Word analysis__V_54_54;
#line 1054 "analysis.m"
          MR_Word analysis__V_50_50;

#line 1049 "analysis.m"
          {
#line 1049 "analysis.m"
            analysis__ensure_module_status_loaded_6_p_0(analysis__Globals_8, analysis__ModuleName_10, analysis__STATE_VARIABLE_Info_0_15, &analysis__STATE_VARIABLE_Info_19_19);
          }
#line 1051 "analysis.m"
          analysis__TypeClassInfo_for_compiler_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_19_19, (MR_Integer) 0)));
#line 1051 "analysis.m"
          analysis__V_27_27 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_19_19, (MR_Integer) 1));
#line 1051 "analysis.m"
          analysis__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_19_19, (MR_Integer) 2)));
#line 1051 "analysis.m"
          analysis__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_19_19, (MR_Integer) 3)));
#line 1051 "analysis.m"
          analysis__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_19_19, (MR_Integer) 4)));
#line 1051 "analysis.m"
          analysis__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_19_19, (MR_Integer) 5)));
#line 1051 "analysis.m"
          analysis__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_19_19, (MR_Integer) 6)));
#line 1051 "analysis.m"
          analysis__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_19_19, (MR_Integer) 7)));
#line 1051 "analysis.m"
          analysis__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_19_19, (MR_Integer) 8)));
#line 1051 "analysis.m"
          analysis__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_19_19, (MR_Integer) 9)));
#line 1051 "analysis.m"
          analysis__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_19_19, (MR_Integer) 10)));
#line 11201 "analysis.c"
          analysis__TypeCtorInfo_56_56 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 11203 "analysis.c"
          analysis__TypeCtorInfo_57_57 = (MR_Word) &analysis__analysis__type_ctor_info_analysis_status_0;
#line 1051 "analysis.m"
          {
#line 1051 "analysis.m"
            analysis__conv0_ModuleStatus0_13 = mercury__map__det_elem_2_f_0(analysis__TypeCtorInfo_56_56, analysis__TypeCtorInfo_57_57, ((MR_Box) (analysis__ModuleName_10)), analysis__V_21_21);
          }
#line 1051 "analysis.m"
          analysis__ModuleStatus0_13 = ((MR_Word) analysis__conv0_ModuleStatus0_13);
#line 1052 "analysis.m"
          {
#line 1052 "analysis.m"
            analysis__ModuleStatus_14 = analysis__lub_2_f_0(analysis__ModuleStatus0_13, analysis__Status_9);
          }
#line 1382 "analysis.m"
{
#define MR_PROC_LABEL analysis__taint_module_overall_status_7_p_0


		{
#line 1382 "analysis.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&analysis__mutable_variable_debug_analysis_lock,
                    "analysis__mutable_variable_debug_analysis_lock");
#endif

#line 11229 "analysis.c"

		;}
#undef MR_PROC_LABEL
#line 1382 "analysis.m"
}
#line 1382 "analysis.m"
{
#define MR_PROC_LABEL analysis__taint_module_overall_status_7_p_0

	MR_Word X;

		{
#line 1382 "analysis.m"
X = analysis__mutable_variable_debug_analysis;

#line 11245 "analysis.c"

		;}
#undef MR_PROC_LABEL
	 analysis__Debug_66  = X;
#line 1382 "analysis.m"
}
#line 1382 "analysis.m"
{
#define MR_PROC_LABEL analysis__taint_module_overall_status_7_p_0


		{
#line 1382 "analysis.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&analysis__mutable_variable_debug_analysis_lock,
                    "analysis__mutable_variable_debug_analysis_lock");
#endif

#line 11264 "analysis.c"

		;}
#undef MR_PROC_LABEL
#line 1382 "analysis.m"
}
#line 1395 "analysis.m"
#line 1395 "analysis.m"
          switch (analysis__Debug_66) {
#line 1395 "analysis.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1395 "analysis.m"
            case (MR_Integer) 0:
#line 1396 "analysis.m"
              {
#line 1396 "analysis.m"
              }
#line 1395 "analysis.m"
              break;
#line 1395 "analysis.m"
            case (MR_Integer) 1:
#line 1394 "analysis.m"
              {
#line 1394 "analysis.m"
                analysis__write_tainting_module_4_p_0(analysis__ModuleName_10, analysis__ModuleStatus_14);
              }
#line 1395 "analysis.m"
              break;
#line 1395 "analysis.m"
          }
#line 1054 "analysis.m"
          analysis__TypeClassInfo_for_compiler_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_19_19, (MR_Integer) 0)));
#line 1054 "analysis.m"
          analysis__V_36_36 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_19_19, (MR_Integer) 1));
#line 1054 "analysis.m"
          analysis__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_19_19, (MR_Integer) 2)));
#line 1054 "analysis.m"
          analysis__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_19_19, (MR_Integer) 3)));
#line 1054 "analysis.m"
          analysis__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_19_19, (MR_Integer) 4)));
#line 1054 "analysis.m"
          analysis__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_19_19, (MR_Integer) 5)));
#line 1054 "analysis.m"
          analysis__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_19_19, (MR_Integer) 6)));
#line 1054 "analysis.m"
          analysis__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_19_19, (MR_Integer) 7)));
#line 1054 "analysis.m"
          analysis__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_19_19, (MR_Integer) 8)));
#line 1054 "analysis.m"
          analysis__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_19_19, (MR_Integer) 9)));
#line 1054 "analysis.m"
          analysis__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_19_19, (MR_Integer) 10)));
#line 1054 "analysis.m"
          {
#line 1054 "analysis.m"
            analysis__V_26_26 = mercury__map__f_101_108_101_109_32_58_61_3_f_0(analysis__TypeCtorInfo_56_56, analysis__TypeCtorInfo_57_57, ((MR_Box) (analysis__ModuleName_10)), analysis__V_25_25, ((MR_Box) (analysis__ModuleStatus_14)));
          }
#line 1054 "analysis.m"
          analysis__TypeClassInfo_for_compiler_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_19_19, (MR_Integer) 0)));
#line 1054 "analysis.m"
          analysis__V_45_45 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_19_19, (MR_Integer) 1));
#line 1054 "analysis.m"
          analysis__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_19_19, (MR_Integer) 2)));
#line 1054 "analysis.m"
          analysis__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_19_19, (MR_Integer) 3)));
#line 1054 "analysis.m"
          analysis__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_19_19, (MR_Integer) 4)));
#line 1054 "analysis.m"
          analysis__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_19_19, (MR_Integer) 5)));
#line 1054 "analysis.m"
          analysis__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_19_19, (MR_Integer) 6)));
#line 1054 "analysis.m"
          analysis__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_19_19, (MR_Integer) 7)));
#line 1054 "analysis.m"
          analysis__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_19_19, (MR_Integer) 8)));
#line 1054 "analysis.m"
          analysis__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_19_19, (MR_Integer) 9)));
#line 1054 "analysis.m"
          analysis__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_19_19, (MR_Integer) 10)));
#line 1054 "analysis.m"
          {
#line 1054 "analysis.m"
            MR_Word base;
#line 1054 "analysis.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 1054 "analysis.m"
            *analysis__STATE_VARIABLE_Info_16 = base;
#line 1054 "analysis.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (analysis__TypeClassInfo_for_compiler_61));
#line 1054 "analysis.m"
            MR_hl_field(MR_mktag(0), base, 1) = analysis__V_45_45;
#line 1054 "analysis.m"
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (analysis__V_46_46));
#line 1054 "analysis.m"
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (analysis__V_47_47));
#line 1054 "analysis.m"
            MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (analysis__V_48_48));
#line 1054 "analysis.m"
            MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (analysis__V_49_49));
#line 1054 "analysis.m"
            MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (analysis__V_26_26));
#line 1054 "analysis.m"
            MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (analysis__V_51_51));
#line 1054 "analysis.m"
            MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (analysis__V_52_52));
#line 1054 "analysis.m"
            MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (analysis__V_53_53));
#line 1054 "analysis.m"
            MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (analysis__V_54_54));
#line 1054 "analysis.m"
          }
#line 1043 "analysis.m"
        }
#line 1039 "analysis.m"
        break;
#line 1039 "analysis.m"
      case (MR_Integer) 2:
#line 1039 "analysis.m"
        *analysis__STATE_VARIABLE_Info_16 = analysis__STATE_VARIABLE_Info_0_15;
#line 1039 "analysis.m"
        break;
#line 1039 "analysis.m"
    }
#line 1039 "analysis.m"
  }
#line 1033 "analysis.m"
}

#line 1025 "analysis.m"
MR_bool MR_CALL 
analysis__arc_module_name_3_f_0(
#line 1025 "analysis.m"
  MR_Word analysis__TypeClassInfo_for_call_pattern_11,
#line 1025 "analysis.m"
  MR_Box analysis__FuncInfo_5,
#line 1025 "analysis.m"
  MR_Box analysis__CallA_6,
#line 1025 "analysis.m"
  MR_Word analysis__HeadVar__3_3,
#line 1025 "analysis.m"
  MR_Word * analysis__ModuleName_8)
#line 1025 "analysis.m"
{
#line 1029 "analysis.m"
  {
#line 1029 "analysis.m"
    MR_bool analysis__succeeded;
#line 1029 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_call_pattern_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__3_3, (MR_Integer) 0)));
#line 1029 "analysis.m"
    MR_Word analysis__TypeInfo_14_14;
#line 1029 "analysis.m"
    MR_Word analysis__TypeInfo_15_15;
#line 1029 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_partial_order_16;
#line 1029 "analysis.m"
    MR_Box analysis__CallB0_7 = (MR_hl_field(MR_mktag(0), analysis__HeadVar__3_3, (MR_Integer) 1));
#line 1029 "analysis.m"
    MR_Box analysis__CallB_9;
#line 1029 "analysis.m"
    MR_Word analysis__V_10_10;
#line 11425 "analysis.c"
    MR_bool MR_CALL (* analysis__func_0)(MR_Box, MR_Box, MR_Box, MR_Box);

#line 1029 "analysis.m"
    *analysis__ModuleName_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__3_3, (MR_Integer) 2)));
#line 11430 "analysis.c"
    {
#line 11432 "analysis.c"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_call_pattern_12, (MR_Integer) 4, &analysis__TypeInfo_14_14);
    }
#line 1030 "analysis.m"
    {
#line 1030 "analysis.m"
      analysis__V_10_10 = mercury__univ__univ_1_f_0(analysis__TypeInfo_14_14, analysis__CallB0_7);
    }
#line 11440 "analysis.c"
    {
#line 11442 "analysis.c"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_call_pattern_11, (MR_Integer) 4, &analysis__TypeInfo_15_15);
    }
#line 1030 "analysis.m"
    {
#line 1030 "analysis.m"
      mercury__univ__det_univ_to_type_2_p_0(analysis__TypeInfo_15_15, analysis__V_10_10, &analysis__CallB_9);
    }
#line 11450 "analysis.c"
    {
#line 11452 "analysis.c"
      mercury__private_builtin__superclass_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_call_pattern_11, (MR_Integer) 1, &analysis__TypeClassInfo_for_partial_order_16);
    }
#line 11455 "analysis.c"
    analysis__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), analysis__TypeClassInfo_for_partial_order_16, (MR_Integer) 0)), (MR_Integer) 6)));
#line 11457 "analysis.c"
    {
#line 11459 "analysis.c"
      return analysis__succeeded = analysis__func_0(((MR_Box) analysis__TypeClassInfo_for_partial_order_16), analysis__FuncInfo_5, analysis__CallA_6, analysis__CallB_9);
    }
#line 1029 "analysis.m"
    return analysis__succeeded;
#line 1029 "analysis.m"
  }
#line 1025 "analysis.m"
}

#line 1018 "analysis.m"
static MR_bool MR_CALL 
analysis__imdg_dependent_modules_5_f_0_1(
#line 1018 "analysis.m"
  MR_Box analysis__closure_arg,
#line 1018 "analysis.m"
  MR_Box analysis__wrapper_arg_1,
#line 1018 "analysis.m"
  MR_Box * analysis__wrapper_arg_2)
#line 1018 "analysis.m"
{
#line 1018 "analysis.m"
  {
#line 1018 "analysis.m"
    MR_bool analysis__succeeded;
#line 1018 "analysis.m"
    MR_Box analysis__closure = analysis__closure_arg;
#line 1018 "analysis.m"
    MR_Word analysis__conv2_ModuleName_8;

#line 1018 "analysis.m"
    {
#line 1018 "analysis.m"
      analysis__succeeded = analysis__arc_module_name_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 3))), (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 4)), (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 5)), ((MR_Word) analysis__wrapper_arg_1), &analysis__conv2_ModuleName_8);
    }
#line 1018 "analysis.m"
    if (analysis__succeeded)
#line 1018 "analysis.m"
      {
#line 1018 "analysis.m"
        *analysis__wrapper_arg_2 = ((MR_Box) (analysis__conv2_ModuleName_8));
#line 1018 "analysis.m"
        analysis__succeeded = MR_TRUE;
#line 1018 "analysis.m"
      }
#line 1018 "analysis.m"
    return analysis__succeeded;
#line 1018 "analysis.m"
  }
#line 1018 "analysis.m"
}

#line 1009 "analysis.m"
MR_Word MR_CALL 
analysis__imdg_dependent_modules_5_f_0(
#line 1009 "analysis.m"
  MR_Word analysis__TypeClassInfo_for_call_pattern_16,
#line 1009 "analysis.m"
  MR_Word analysis__ModuleMap_7,
#line 1009 "analysis.m"
  MR_String analysis__AnalysisName_8,
#line 1009 "analysis.m"
  MR_Word analysis__FuncId_9,
#line 1009 "analysis.m"
  MR_Box analysis__FuncInfo_10,
#line 1009 "analysis.m"
  MR_Box analysis__Call_11)
#line 1009 "analysis.m"
{
#line 1013 "analysis.m"
  {
#line 1013 "analysis.m"
    MR_bool analysis__succeeded;
#line 1013 "analysis.m"
    MR_Word analysis__HeadVar__6_6;
#line 1013 "analysis.m"
    MR_Word analysis__IMDGEntries_13;
#line 1015 "analysis.m"
    MR_Word analysis__TypeCtorInfo_19_19;
#line 1015 "analysis.m"
    MR_Word analysis__TypeInfo_20_20;
#line 1015 "analysis.m"
    MR_Word analysis__FuncAnalysisMap_12;
#line 1015 "analysis.m"
    MR_Box analysis__conv0_FuncAnalysisMap_12;
#line 1016 "analysis.m"
    MR_Box analysis__conv1_IMDGEntries_13;

#line 1015 "analysis.m"
    {
#line 1015 "analysis.m"
      analysis__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &analysis_scalar_common_2[4], analysis__ModuleMap_7, ((MR_Box) (analysis__AnalysisName_8)), &analysis__conv0_FuncAnalysisMap_12);
    }
#line 1015 "analysis.m"
    if (analysis__succeeded)
#line 1015 "analysis.m"
      {
#line 1015 "analysis.m"
        analysis__FuncAnalysisMap_12 = ((MR_Word) analysis__conv0_FuncAnalysisMap_12);
#line 1015 "analysis.m"
        analysis__succeeded = MR_TRUE;
#line 1015 "analysis.m"
      }
#line 1015 "analysis.m"
    if (analysis__succeeded)
#line 1015 "analysis.m"
      {
#line 11566 "analysis.c"
        analysis__TypeCtorInfo_19_19 = (MR_Word) &analysis__analysis__type_ctor_info_func_id_0;
#line 11568 "analysis.c"
        analysis__TypeInfo_20_20 = (MR_Word) &analysis_scalar_common_1[2];
#line 1016 "analysis.m"
        {
#line 1016 "analysis.m"
          analysis__succeeded = mercury__map__search_3_p_0(analysis__TypeCtorInfo_19_19, analysis__TypeInfo_20_20, analysis__FuncAnalysisMap_12, ((MR_Box) (analysis__FuncId_9)), &analysis__conv1_IMDGEntries_13);
        }
#line 1016 "analysis.m"
        if (analysis__succeeded)
#line 1016 "analysis.m"
          {
#line 1016 "analysis.m"
            analysis__IMDGEntries_13 = ((MR_Word) analysis__conv1_IMDGEntries_13);
#line 1016 "analysis.m"
            analysis__succeeded = MR_TRUE;
#line 1016 "analysis.m"
          }
#line 1015 "analysis.m"
      }
#line 1013 "analysis.m"
    if (analysis__succeeded)
#line 1018 "analysis.m"
      {
#line 1018 "analysis.m"
        MR_Word analysis__TypeCtorInfo_21_21 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 1018 "analysis.m"
        MR_Word analysis__V_14_14;
#line 1018 "analysis.m"
        MR_Word analysis__V_15_15;

#line 1018 "analysis.m"
        {
#line 1018 "analysis.m"
          analysis__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1018 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__V_15_15, 0) = ((MR_Box) (&analysis_scalar_common_7[2]));
#line 1018 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__V_15_15, 1) = ((MR_Box) (analysis__imdg_dependent_modules_5_f_0_1));
#line 1018 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__V_15_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1018 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__V_15_15, 3) = ((MR_Box) (analysis__TypeClassInfo_for_call_pattern_16));
#line 1018 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__V_15_15, 4) = analysis__FuncInfo_10;
#line 1018 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__V_15_15, 5) = analysis__Call_11;
#line 1018 "analysis.m"
        }
#line 1018 "analysis.m"
        {
#line 1018 "analysis.m"
          analysis__V_14_14 = mercury__list__filter_map_2_f_0((MR_Word) &analysis__analysis__type_ctor_info_imdg_arc_0, analysis__TypeCtorInfo_21_21, analysis__V_15_15, analysis__IMDGEntries_13);
        }
#line 1018 "analysis.m"
        {
#line 1018 "analysis.m"
          analysis__HeadVar__6_6 = mercury__set__from_list_1_f_0(analysis__TypeCtorInfo_21_21, analysis__V_14_14);
        }
#line 1018 "analysis.m"
      }
#line 1013 "analysis.m"
    else
#line 1021 "analysis.m"
      {
#line 1021 "analysis.m"
        {
#line 1021 "analysis.m"
          analysis__HeadVar__6_6 = mercury__set__init_0_f_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0);
        }
#line 1021 "analysis.m"
      }
#line 1013 "analysis.m"
    return analysis__HeadVar__6_6;
#line 1013 "analysis.m"
  }
#line 1009 "analysis.m"
}

#line 987 "analysis.m"
void MR_CALL 
analysis__replace_result_in_list_6_p_0(
#line 987 "analysis.m"
  MR_Word analysis__TypeClassInfo_for_analysis_25,
#line 987 "analysis.m"
  MR_Box analysis__FuncInfo_7,
#line 987 "analysis.m"
  MR_Box analysis__Call_8,
#line 987 "analysis.m"
  MR_Box analysis__Answer_9,
#line 987 "analysis.m"
  MR_Word analysis__Status_10,
#line 987 "analysis.m"
  MR_Word analysis__Results0_11,
#line 987 "analysis.m"
  MR_Word * analysis__Results_12)
#line 987 "analysis.m"
{
#line 994 "analysis.m"
  {
#line 994 "analysis.m"
    MR_bool analysis__succeeded;

#line 994 "analysis.m"
    if ((analysis__Results0_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 994 "analysis.m"
      {
#line 995 "analysis.m"
        {
#line 995 "analysis.m"
          mercury__require__unexpected_3_p_0((MR_String) "analysis", (MR_String) "predicate \140analysis.replace_result_in_list\'/6", (MR_String) "found no result to replace");
#line 995 "analysis.m"
          return;
        }
#line 994 "analysis.m"
      }
#line 994 "analysis.m"
    else
#line 997 "analysis.m"
      {
#line 997 "analysis.m"
        MR_Word analysis__TypeInfo_26_26;
#line 997 "analysis.m"
        MR_Word analysis__TypeClassInfo_for_analysis_27;
#line 997 "analysis.m"
        MR_Word analysis__TypeInfo_30_30;
#line 997 "analysis.m"
        MR_Word analysis__H0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), analysis__Results0_11, (MR_Integer) 0)));
#line 997 "analysis.m"
        MR_Word analysis__T0_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), analysis__Results0_11, (MR_Integer) 1)));
#line 997 "analysis.m"
        MR_Box analysis__HCall_15;
#line 997 "analysis.m"
        MR_Word analysis__H_16;
#line 997 "analysis.m"
        MR_Word analysis__T_17;
#line 997 "analysis.m"
        MR_Word analysis__V_18_18;
#line 997 "analysis.m"
        MR_Box analysis__V_19_19;
#line 998 "analysis.m"
        MR_Box analysis__V_23_23;
#line 998 "analysis.m"
        MR_Word analysis__V_24_24;
#line 999 "analysis.m"
        MR_Word analysis__TypeClassInfo_for_call_pattern_31;
#line 999 "analysis.m"
        MR_Word analysis__TypeClassInfo_for_partial_order_33;
#line 11715 "analysis.c"
        MR_bool MR_CALL (* analysis__func_0)(MR_Box, MR_Box, MR_Box, MR_Box);

#line 998 "analysis.m"
        analysis__TypeClassInfo_for_analysis_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__H0_13, (MR_Integer) 0)));
#line 998 "analysis.m"
        analysis__V_19_19 = (MR_hl_field(MR_mktag(0), analysis__H0_13, (MR_Integer) 1));
#line 998 "analysis.m"
        analysis__V_23_23 = (MR_hl_field(MR_mktag(0), analysis__H0_13, (MR_Integer) 2));
#line 998 "analysis.m"
        analysis__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__H0_13, (MR_Integer) 3)));
#line 11726 "analysis.c"
        {
#line 11728 "analysis.c"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_27, (MR_Integer) 4, &analysis__TypeInfo_26_26);
        }
#line 998 "analysis.m"
        {
#line 998 "analysis.m"
          analysis__V_18_18 = mercury__univ__univ_1_f_0(analysis__TypeInfo_26_26, analysis__V_19_19);
        }
#line 11736 "analysis.c"
        {
#line 11738 "analysis.c"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_25, (MR_Integer) 4, &analysis__TypeInfo_30_30);
        }
#line 998 "analysis.m"
        {
#line 998 "analysis.m"
          mercury__univ__det_univ_to_type_2_p_0(analysis__TypeInfo_30_30, analysis__V_18_18, &analysis__HCall_15);
        }
#line 11746 "analysis.c"
        {
#line 11748 "analysis.c"
          mercury__private_builtin__superclass_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_25, (MR_Integer) 1, &analysis__TypeClassInfo_for_call_pattern_31);
        }
#line 11751 "analysis.c"
        {
#line 11753 "analysis.c"
          mercury__private_builtin__superclass_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_call_pattern_31, (MR_Integer) 1, &analysis__TypeClassInfo_for_partial_order_33);
        }
#line 11756 "analysis.c"
        analysis__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), analysis__TypeClassInfo_for_partial_order_33, (MR_Integer) 0)), (MR_Integer) 6)));
#line 11758 "analysis.c"
        {
#line 11760 "analysis.c"
          analysis__succeeded = analysis__func_0(((MR_Box) analysis__TypeClassInfo_for_partial_order_33), analysis__FuncInfo_7, analysis__Call_8, analysis__HCall_15);
        }
#line 1002 "analysis.m"
        if (analysis__succeeded)
#line 1000 "analysis.m"
          {
#line 1000 "analysis.m"
            {
#line 1000 "analysis.m"
              analysis__H_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1000 "analysis.m"
              MR_hl_field(MR_mktag(0), analysis__H_16, 0) = ((MR_Box) (analysis__TypeClassInfo_for_analysis_25));
#line 1000 "analysis.m"
              MR_hl_field(MR_mktag(0), analysis__H_16, 1) = analysis__Call_8;
#line 1000 "analysis.m"
              MR_hl_field(MR_mktag(0), analysis__H_16, 2) = analysis__Answer_9;
#line 1000 "analysis.m"
              MR_hl_field(MR_mktag(0), analysis__H_16, 3) = ((MR_Box) (analysis__Status_10));
#line 1000 "analysis.m"
            }
#line 1001 "analysis.m"
            analysis__T_17 = analysis__T0_14;
#line 1000 "analysis.m"
          }
#line 1002 "analysis.m"
        else
#line 1003 "analysis.m"
          {
#line 1003 "analysis.m"
            analysis__H_16 = analysis__H0_13;
#line 1004 "analysis.m"
            {
#line 1004 "analysis.m"
              analysis__replace_result_in_list_6_p_0(analysis__TypeClassInfo_for_analysis_25, analysis__FuncInfo_7, analysis__Call_8, analysis__Answer_9, analysis__Status_10, analysis__T0_14, &analysis__T_17);
            }
#line 1003 "analysis.m"
          }
#line 1006 "analysis.m"
        {
#line 1006 "analysis.m"
          MR_Word base;
#line 1006 "analysis.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1006 "analysis.m"
          *analysis__Results_12 = base;
#line 1006 "analysis.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (analysis__H_16));
#line 1006 "analysis.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (analysis__T_17));
#line 1006 "analysis.m"
        }
#line 997 "analysis.m"
      }
#line 994 "analysis.m"
  }
#line 987 "analysis.m"
}

#line 969 "analysis.m"
void MR_CALL 
analysis__replace_result_in_analysis_map_8_p_0(
#line 969 "analysis.m"
  MR_Word analysis__TypeClassInfo_for_analysis_24,
#line 969 "analysis.m"
  MR_Word analysis__ModuleName_9,
#line 969 "analysis.m"
  MR_Word analysis__FuncId_10,
#line 969 "analysis.m"
  MR_Box analysis__FuncInfo_11,
#line 969 "analysis.m"
  MR_Box analysis__CallPattern_12,
#line 969 "analysis.m"
  MR_Box analysis__AnswerPattern_13,
#line 969 "analysis.m"
  MR_Word analysis__Status_14,
#line 969 "analysis.m"
  MR_Word analysis__Map0_15,
#line 969 "analysis.m"
  MR_Word * analysis__Map_16)
#line 969 "analysis.m"
{
#line 976 "analysis.m"
  {
#line 976 "analysis.m"
    MR_bool analysis__succeeded;
#line 976 "analysis.m"
    MR_Word analysis__TypeCtorInfo_25_25;
#line 976 "analysis.m"
    MR_Word analysis__TypeInfo_26_26;
#line 976 "analysis.m"
    MR_Word analysis__TypeCtorInfo_27_27;
#line 976 "analysis.m"
    MR_Word analysis__TypeInfo_28_28;
#line 976 "analysis.m"
    MR_Word analysis__TypeCtorInfo_29_29;
#line 976 "analysis.m"
    MR_Word analysis__TypeInfo_30_30;
#line 976 "analysis.m"
    MR_String analysis__AnalysisName_17;
#line 976 "analysis.m"
    MR_Word analysis__ModuleResults0_18;
#line 976 "analysis.m"
    MR_Word analysis__AnalysisResults0_19;
#line 976 "analysis.m"
    MR_Word analysis__FuncResults0_20;
#line 976 "analysis.m"
    MR_Word analysis__FuncResults_21;
#line 976 "analysis.m"
    MR_Word analysis__V_22_22;
#line 976 "analysis.m"
    MR_Word analysis__V_23_23;
#line 11872 "analysis.c"
    MR_Box analysis__V_31_31;
#line 11874 "analysis.c"
    MR_Box analysis__V_32_32;
#line 11876 "analysis.c"
    MR_Box MR_CALL (* analysis__func_0)(MR_Box) = ((MR_Box MR_CALL (*)(MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), analysis__TypeClassInfo_for_analysis_24, (MR_Integer) 0)), (MR_Integer) 5)));
#line 11878 "analysis.c"
    MR_Box analysis__conv1_AnalysisName_17;
#line 978 "analysis.m"
    MR_Box analysis__conv2_ModuleResults0_18;
#line 979 "analysis.m"
    MR_Box analysis__conv3_AnalysisResults0_19;
#line 980 "analysis.m"
    MR_Box analysis__conv4_FuncResults0_20;

#line 11887 "analysis.c"
    {
#line 11889 "analysis.c"
      analysis__conv1_AnalysisName_17 = analysis__func_0(((MR_Box) analysis__TypeClassInfo_for_analysis_24));
    }
#line 11892 "analysis.c"
    analysis__AnalysisName_17 = ((MR_String) analysis__conv1_AnalysisName_17);
#line 11894 "analysis.c"
    analysis__TypeCtorInfo_25_25 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 11896 "analysis.c"
    analysis__TypeInfo_26_26 = (MR_Word) &analysis_scalar_common_2[3];
#line 978 "analysis.m"
    {
#line 978 "analysis.m"
      analysis__conv2_ModuleResults0_18 = mercury__map__lookup_2_f_0(analysis__TypeCtorInfo_25_25, analysis__TypeInfo_26_26, analysis__Map0_15, ((MR_Box) (analysis__ModuleName_9)));
    }
#line 978 "analysis.m"
    analysis__ModuleResults0_18 = ((MR_Word) analysis__conv2_ModuleResults0_18);
#line 11905 "analysis.c"
    analysis__TypeCtorInfo_27_27 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 11907 "analysis.c"
    analysis__TypeInfo_28_28 = (MR_Word) &analysis_scalar_common_2[2];
#line 979 "analysis.m"
    {
#line 979 "analysis.m"
      analysis__conv3_AnalysisResults0_19 = mercury__map__lookup_2_f_0(analysis__TypeCtorInfo_27_27, analysis__TypeInfo_28_28, analysis__ModuleResults0_18, ((MR_Box) (analysis__AnalysisName_17)));
    }
#line 979 "analysis.m"
    analysis__AnalysisResults0_19 = ((MR_Word) analysis__conv3_AnalysisResults0_19);
#line 11916 "analysis.c"
    analysis__TypeCtorInfo_29_29 = (MR_Word) &analysis__analysis__type_ctor_info_func_id_0;
#line 11918 "analysis.c"
    analysis__TypeInfo_30_30 = (MR_Word) &analysis_scalar_common_1[1];
#line 980 "analysis.m"
    {
#line 980 "analysis.m"
      analysis__conv4_FuncResults0_20 = mercury__map__lookup_2_f_0(analysis__TypeCtorInfo_29_29, analysis__TypeInfo_30_30, analysis__AnalysisResults0_19, ((MR_Box) (analysis__FuncId_10)));
    }
#line 980 "analysis.m"
    analysis__FuncResults0_20 = ((MR_Word) analysis__conv4_FuncResults0_20);
#line 981 "analysis.m"
    {
#line 981 "analysis.m"
      analysis__replace_result_in_list_6_p_0(analysis__TypeClassInfo_for_analysis_24, analysis__FuncInfo_11, analysis__CallPattern_12, analysis__AnswerPattern_13, analysis__Status_14, analysis__FuncResults0_20, &analysis__FuncResults_21);
    }
#line 985 "analysis.m"
    {
#line 985 "analysis.m"
      analysis__V_23_23 = mercury__map__det_update_3_f_0(analysis__TypeCtorInfo_29_29, analysis__TypeInfo_30_30, analysis__AnalysisResults0_19, ((MR_Box) (analysis__FuncId_10)), ((MR_Box) (analysis__FuncResults_21)));
    }
#line 984 "analysis.m"
    {
#line 984 "analysis.m"
      analysis__V_22_22 = mercury__map__det_update_3_f_0(analysis__TypeCtorInfo_27_27, analysis__TypeInfo_28_28, analysis__ModuleResults0_18, ((MR_Box) (analysis__AnalysisName_17)), ((MR_Box) (analysis__V_23_23)));
    }
#line 983 "analysis.m"
    {
#line 983 "analysis.m"
      *analysis__Map_16 = mercury__map__det_update_3_f_0(analysis__TypeCtorInfo_25_25, analysis__TypeInfo_26_26, analysis__Map0_15, ((MR_Box) (analysis__ModuleName_9)), ((MR_Box) (analysis__V_22_22)));
    }
#line 976 "analysis.m"
  }
#line 969 "analysis.m"
}

#line 959 "analysis.m"
static void MR_CALL 
analysis__update_analysis_registry_5_9_p_0_3(
#line 959 "analysis.m"
  MR_Box analysis__closure_arg,
#line 959 "analysis.m"
  MR_Box analysis__wrapper_arg_1,
#line 959 "analysis.m"
  MR_Box analysis__wrapper_arg_2,
#line 959 "analysis.m"
  MR_Box * analysis__wrapper_arg_3,
#line 959 "analysis.m"
  MR_Box analysis__wrapper_arg_4,
#line 959 "analysis.m"
  MR_Box * analysis__wrapper_arg_5)
#line 959 "analysis.m"
{
#line 959 "analysis.m"
  {
#line 959 "analysis.m"
    MR_Box analysis__closure = analysis__closure_arg;
#line 959 "analysis.m"
    MR_Word analysis__conv9_STATE_VARIABLE_Info_16;

#line 959 "analysis.m"
    {
#line 959 "analysis.m"
      analysis__taint_module_overall_status_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 4))), ((MR_Word) analysis__wrapper_arg_1), ((MR_Word) analysis__wrapper_arg_2), &analysis__conv9_STATE_VARIABLE_Info_16);
    }
#line 959 "analysis.m"
    *analysis__wrapper_arg_3 = ((MR_Box) (analysis__conv9_STATE_VARIABLE_Info_16));
#line 959 "analysis.m"
  }
#line 959 "analysis.m"
}

#line 954 "analysis.m"
static MR_bool MR_CALL 
analysis__update_analysis_registry_5_9_p_0_2(
#line 954 "analysis.m"
  MR_Box analysis__closure_arg,
#line 954 "analysis.m"
  MR_Box analysis__wrapper_arg_1,
#line 954 "analysis.m"
  MR_Box * analysis__wrapper_arg_2)
#line 954 "analysis.m"
{
#line 954 "analysis.m"
  {
#line 954 "analysis.m"
    MR_bool analysis__succeeded;
#line 954 "analysis.m"
    MR_Box analysis__closure = analysis__closure_arg;
#line 954 "analysis.m"
    MR_Word analysis__conv8_HeadVar__2_62;

#line 954 "analysis.m"
    {
#line 954 "analysis.m"
      analysis__succeeded = analysis__IntroducedFrom__func__update_analysis_registry_5__954__1_1_f_0(((MR_Word) analysis__wrapper_arg_1), &analysis__conv8_HeadVar__2_62);
    }
#line 954 "analysis.m"
    if (analysis__succeeded)
#line 954 "analysis.m"
      {
#line 954 "analysis.m"
        *analysis__wrapper_arg_2 = ((MR_Box) (analysis__conv8_HeadVar__2_62));
#line 954 "analysis.m"
        analysis__succeeded = MR_TRUE;
#line 954 "analysis.m"
      }
#line 954 "analysis.m"
    return analysis__succeeded;
#line 954 "analysis.m"
  }
#line 954 "analysis.m"
}

#line 927 "analysis.m"
static void MR_CALL 
analysis__update_analysis_registry_5_9_p_0_1(
#line 927 "analysis.m"
  MR_Box analysis__closure_arg,
#line 927 "analysis.m"
  MR_Box analysis__wrapper_arg_1,
#line 927 "analysis.m"
  MR_Box analysis__wrapper_arg_2,
#line 927 "analysis.m"
  MR_Box * analysis__wrapper_arg_3,
#line 927 "analysis.m"
  MR_Box analysis__wrapper_arg_4,
#line 927 "analysis.m"
  MR_Box * analysis__wrapper_arg_5)
#line 927 "analysis.m"
{
#line 927 "analysis.m"
  {
#line 927 "analysis.m"
    MR_Box analysis__closure = analysis__closure_arg;
#line 927 "analysis.m"
    MR_Word analysis__conv2_STATE_VARIABLE_Info_16;

#line 927 "analysis.m"
    {
#line 927 "analysis.m"
      analysis__taint_module_overall_status_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 4))), ((MR_Word) analysis__wrapper_arg_1), ((MR_Word) analysis__wrapper_arg_2), &analysis__conv2_STATE_VARIABLE_Info_16);
    }
#line 927 "analysis.m"
    *analysis__wrapper_arg_3 = ((MR_Box) (analysis__conv2_STATE_VARIABLE_Info_16));
#line 927 "analysis.m"
  }
#line 927 "analysis.m"
}

#line 879 "analysis.m"
void MR_CALL 
analysis__update_analysis_registry_5_9_p_0(
#line 879 "analysis.m"
  MR_Word analysis__ModuleInfo_10,
#line 879 "analysis.m"
  MR_Word analysis__ModuleName_11,
#line 879 "analysis.m"
  MR_String analysis__AnalysisName_12,
#line 879 "analysis.m"
  MR_Word analysis__FuncId_13,
#line 879 "analysis.m"
  MR_Word analysis__NewResult_14,
#line 879 "analysis.m"
  MR_Word analysis__STATE_VARIABLE_Info_0_40,
#line 879 "analysis.m"
  MR_Word * analysis__STATE_VARIABLE_Info_41)
#line 879 "analysis.m"
{
#line 884 "analysis.m"
  {
#line 884 "analysis.m"
    MR_bool analysis__succeeded;
#line 884 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_analysis_158 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__NewResult_14, (MR_Integer) 0)));
#line 884 "analysis.m"
    MR_Box analysis__Call_17 = (MR_hl_field(MR_mktag(0), analysis__NewResult_14, (MR_Integer) 1));
#line 884 "analysis.m"
    MR_Box analysis__NewAnswer_18 = (MR_hl_field(MR_mktag(0), analysis__NewResult_14, (MR_Integer) 2));
#line 884 "analysis.m"
    MR_Word analysis__NewStatus_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__NewResult_14, (MR_Integer) 3)));
#line 884 "analysis.m"
    MR_Box analysis__FuncInfo_20;
#line 884 "analysis.m"
    MR_Word analysis__MaybeResult_21;
#line 884 "analysis.m"
    MR_Word analysis__Globals_22;
#line 884 "analysis.m"
    MR_Word analysis__STATE_VARIABLE_Info_50_50;
#line 886 "analysis.m"
    MR_Box analysis__V_218_218;
#line 886 "analysis.m"
    MR_Box analysis__V_219_219;
#line 961 "analysis.m"
    MR_Word analysis__Requests_33;
#line 950 "analysis.m"
    MR_Word analysis__TypeCtorInfo_201_201;
#line 950 "analysis.m"
    MR_Word analysis__TypeInfo_202_202;
#line 950 "analysis.m"
    MR_Word analysis__TypeCtorInfo_203_203;
#line 950 "analysis.m"
    MR_Word analysis__TypeInfo_204_204;
#line 950 "analysis.m"
    MR_Word analysis__ModuleRequests_32;
#line 950 "analysis.m"
    MR_Word analysis__V_58_58;
#line 950 "analysis.m"
    MR_Word analysis__V_59_59;
#line 950 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_compiler_198;
#line 950 "analysis.m"
    MR_Box analysis__V_149_149;
#line 950 "analysis.m"
    MR_Word analysis__V_150_150;
#line 950 "analysis.m"
    MR_Word analysis__V_151_151;
#line 950 "analysis.m"
    MR_Word analysis__V_152_152;
#line 950 "analysis.m"
    MR_Word analysis__V_153_153;
#line 950 "analysis.m"
    MR_Word analysis__V_154_154;
#line 950 "analysis.m"
    MR_Word analysis__V_155_155;
#line 950 "analysis.m"
    MR_Word analysis__V_156_156;
#line 950 "analysis.m"
    MR_Word analysis__V_157_157;
#line 950 "analysis.m"
    MR_Box analysis__conv5_ModuleRequests_32;
#line 951 "analysis.m"
    MR_Box analysis__conv6_V_59_59;
#line 951 "analysis.m"
    MR_Box analysis__conv7_Requests_33;
#line 952 "analysis.m"
    MR_Word analysis__V_34_34;
#line 952 "analysis.m"
    MR_Word analysis__V_35_35;

#line 886 "analysis.m"
    {
#line 886 "analysis.m"
      analysis__get_func_info_6_p_0(analysis__TypeClassInfo_for_analysis_158, analysis__ModuleInfo_10, analysis__ModuleName_11, analysis__FuncId_13, &analysis__FuncInfo_20);
    }
#line 887 "analysis.m"
    {
#line 887 "analysis.m"
      analysis__lookup_exactly_matching_result_even_from_invalid_modules_6_p_0(analysis__TypeClassInfo_for_analysis_158, analysis__STATE_VARIABLE_Info_0_40, analysis__ModuleName_11, analysis__FuncId_13, analysis__FuncInfo_20, analysis__Call_17, &analysis__MaybeResult_21);
    }
#line 889 "analysis.m"
    {
#line 889 "analysis.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(analysis__ModuleInfo_10, &analysis__Globals_22);
    }
#line 930 "analysis.m"
    if ((analysis__MaybeResult_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 933 "analysis.m"
      {
#line 933 "analysis.m"
        MR_Word analysis__TypeCtorInfo_194_194 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 933 "analysis.m"
        MR_Word analysis__TypeInfo_195_195 = (MR_Word) &analysis_scalar_common_2[3];
#line 933 "analysis.m"
        MR_Word analysis__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 7)));
#line 933 "analysis.m"
        MR_Word analysis__V_46_46;
#line 933 "analysis.m"
        MR_Word analysis__V_47_47;
#line 933 "analysis.m"
        MR_Word analysis__OldMap0_70;
#line 933 "analysis.m"
        MR_Word analysis__OldMap_71;
#line 934 "analysis.m"
        MR_Word analysis__TypeClassInfo_for_compiler_193 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 0)));
#line 934 "analysis.m"
        MR_Box analysis__V_121_121 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 1));
#line 934 "analysis.m"
        MR_Word analysis__V_122_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 2)));
#line 934 "analysis.m"
        MR_Word analysis__V_123_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 3)));
#line 934 "analysis.m"
        MR_Word analysis__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 4)));
#line 934 "analysis.m"
        MR_Word analysis__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 5)));
#line 934 "analysis.m"
        MR_Word analysis__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 6)));
#line 934 "analysis.m"
        MR_Word analysis__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 8)));
#line 934 "analysis.m"
        MR_Word analysis__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 9)));
#line 934 "analysis.m"
        MR_Word analysis__V_129_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 10)));
#line 934 "analysis.m"
        MR_Box analysis__conv0_OldMap0_70;
#line 937 "analysis.m"
        MR_Word analysis__TypeClassInfo_for_compiler_196;
#line 937 "analysis.m"
        MR_Box analysis__V_130_130;
#line 937 "analysis.m"
        MR_Word analysis__V_131_131;
#line 937 "analysis.m"
        MR_Word analysis__V_132_132;
#line 937 "analysis.m"
        MR_Word analysis__V_133_133;
#line 937 "analysis.m"
        MR_Word analysis__V_134_134;
#line 937 "analysis.m"
        MR_Word analysis__V_135_135;
#line 937 "analysis.m"
        MR_Word analysis__V_136_136;
#line 937 "analysis.m"
        MR_Word analysis__V_137_137;
#line 937 "analysis.m"
        MR_Word analysis__V_138_138;
#line 937 "analysis.m"
        MR_Word analysis__TypeClassInfo_for_compiler_197;
#line 937 "analysis.m"
        MR_Box analysis__V_139_139;
#line 937 "analysis.m"
        MR_Word analysis__V_140_140;
#line 937 "analysis.m"
        MR_Word analysis__V_141_141;
#line 937 "analysis.m"
        MR_Word analysis__V_142_142;
#line 937 "analysis.m"
        MR_Word analysis__V_143_143;
#line 937 "analysis.m"
        MR_Word analysis__V_144_144;
#line 937 "analysis.m"
        MR_Word analysis__V_146_146;
#line 937 "analysis.m"
        MR_Word analysis__V_147_147;
#line 937 "analysis.m"
        MR_Word analysis__V_148_148;
#line 937 "analysis.m"
        MR_Word analysis__V_145_145;

#line 934 "analysis.m"
        {
#line 934 "analysis.m"
          analysis__conv0_OldMap0_70 = mercury__map__det_elem_2_f_0(analysis__TypeCtorInfo_194_194, analysis__TypeInfo_195_195, ((MR_Box) (analysis__ModuleName_11)), analysis__V_44_44);
        }
#line 934 "analysis.m"
        analysis__OldMap0_70 = ((MR_Word) analysis__conv0_OldMap0_70);
#line 935 "analysis.m"
        {
#line 935 "analysis.m"
          analysis__record_result_in_analysis_map_6_p_0(analysis__TypeClassInfo_for_analysis_158, analysis__FuncId_13, analysis__Call_17, analysis__NewAnswer_18, analysis__NewStatus_19, analysis__OldMap0_70, &analysis__OldMap_71);
        }
#line 937 "analysis.m"
        analysis__TypeClassInfo_for_compiler_196 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 0)));
#line 937 "analysis.m"
        analysis__V_130_130 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 1));
#line 937 "analysis.m"
        analysis__V_131_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 2)));
#line 937 "analysis.m"
        analysis__V_132_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 3)));
#line 937 "analysis.m"
        analysis__V_133_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 4)));
#line 937 "analysis.m"
        analysis__V_134_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 5)));
#line 937 "analysis.m"
        analysis__V_135_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 6)));
#line 937 "analysis.m"
        analysis__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 7)));
#line 937 "analysis.m"
        analysis__V_136_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 8)));
#line 937 "analysis.m"
        analysis__V_137_137 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 9)));
#line 937 "analysis.m"
        analysis__V_138_138 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 10)));
#line 937 "analysis.m"
        {
#line 937 "analysis.m"
          analysis__V_47_47 = mercury__map__f_101_108_101_109_32_58_61_3_f_0(analysis__TypeCtorInfo_194_194, analysis__TypeInfo_195_195, ((MR_Box) (analysis__ModuleName_11)), analysis__V_46_46, ((MR_Box) (analysis__OldMap_71)));
        }
#line 937 "analysis.m"
        analysis__TypeClassInfo_for_compiler_197 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 0)));
#line 937 "analysis.m"
        analysis__V_139_139 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 1));
#line 937 "analysis.m"
        analysis__V_140_140 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 2)));
#line 937 "analysis.m"
        analysis__V_141_141 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 3)));
#line 937 "analysis.m"
        analysis__V_142_142 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 4)));
#line 937 "analysis.m"
        analysis__V_143_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 5)));
#line 937 "analysis.m"
        analysis__V_144_144 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 6)));
#line 937 "analysis.m"
        analysis__V_145_145 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 7)));
#line 937 "analysis.m"
        analysis__V_146_146 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 8)));
#line 937 "analysis.m"
        analysis__V_147_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 9)));
#line 937 "analysis.m"
        analysis__V_148_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 10)));
#line 937 "analysis.m"
        {
#line 937 "analysis.m"
          analysis__STATE_VARIABLE_Info_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 937 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_50_50, 0) = ((MR_Box) (analysis__TypeClassInfo_for_compiler_197));
#line 937 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_50_50, 1) = analysis__V_139_139;
#line 937 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_50_50, 2) = ((MR_Box) (analysis__V_140_140));
#line 937 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_50_50, 3) = ((MR_Box) (analysis__V_141_141));
#line 937 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_50_50, 4) = ((MR_Box) (analysis__V_142_142));
#line 937 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_50_50, 5) = ((MR_Box) (analysis__V_143_143));
#line 937 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_50_50, 6) = ((MR_Box) (analysis__V_144_144));
#line 937 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_50_50, 7) = ((MR_Box) (analysis__V_47_47));
#line 937 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_50_50, 8) = ((MR_Box) (analysis__V_146_146));
#line 937 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_50_50, 9) = ((MR_Box) (analysis__V_147_147));
#line 937 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_50_50, 10) = ((MR_Box) (analysis__V_148_148));
#line 937 "analysis.m"
        }
#line 933 "analysis.m"
      }
#line 930 "analysis.m"
    else
#line 893 "analysis.m"
      {
#line 893 "analysis.m"
        MR_Word analysis__OldResult_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), analysis__MaybeResult_21, (MR_Integer) 0)));
#line 893 "analysis.m"
        MR_Box analysis__OldAnswer_25 = (MR_hl_field(MR_mktag(0), analysis__OldResult_23, (MR_Integer) 1));
#line 893 "analysis.m"
        MR_Word analysis__OldStatus_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__OldResult_23, (MR_Integer) 2)));
#line 894 "analysis.m"
        MR_Box analysis___OldCall_24 = (MR_hl_field(MR_mktag(0), analysis__OldResult_23, (MR_Integer) 0));
#line 895 "analysis.m"
        MR_Word analysis__TypeClassInfo_for_answer_pattern_159;
#line 895 "analysis.m"
        MR_Word analysis__TypeClassInfo_for_partial_order_161;

#line 12362 "analysis.c"
        {
#line 12364 "analysis.c"
          mercury__private_builtin__superclass_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_158, (MR_Integer) 2, &analysis__TypeClassInfo_for_answer_pattern_159);
        }
#line 12367 "analysis.c"
        {
#line 12369 "analysis.c"
          mercury__private_builtin__superclass_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_answer_pattern_159, (MR_Integer) 1, &analysis__TypeClassInfo_for_partial_order_161);
        }
#line 895 "analysis.m"
        {
#line 895 "analysis.m"
          analysis__succeeded = analysis__equivalent_3_p_0(analysis__TypeClassInfo_for_partial_order_161, analysis__FuncInfo_20, analysis__NewAnswer_18, analysis__OldAnswer_25);
        }
#line 906 "analysis.m"
        if (analysis__succeeded)
#line 897 "analysis.m"
          {
#line 896 "analysis.m"
            {
#line 896 "analysis.m"
              analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_109_115_103_95_95_104_111_52_95_95_91_54_93_95_48_3_p_0(analysis__TypeClassInfo_for_analysis_158, analysis__ModuleName_11, analysis__FuncId_13, analysis__Call_17, analysis__NewAnswer_18);
            }
#line 898 "analysis.m"
            analysis__succeeded = (analysis__NewStatus_19 == analysis__OldStatus_26);
#line 898 "analysis.m"
            analysis__succeeded = !(analysis__succeeded);
#line 903 "analysis.m"
            if (analysis__succeeded)
#line 899 "analysis.m"
              {
#line 899 "analysis.m"
                MR_Word analysis__OldMap0_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 7)));
#line 899 "analysis.m"
                MR_Word analysis__OldMap_28;
#line 899 "analysis.m"
                MR_Word analysis__TypeClassInfo_for_compiler_169 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 0)));
#line 899 "analysis.m"
                MR_Box analysis__V_74_74 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 1));
#line 899 "analysis.m"
                MR_Word analysis__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 2)));
#line 899 "analysis.m"
                MR_Word analysis__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 3)));
#line 899 "analysis.m"
                MR_Word analysis__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 4)));
#line 899 "analysis.m"
                MR_Word analysis__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 5)));
#line 899 "analysis.m"
                MR_Word analysis__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 6)));
#line 899 "analysis.m"
                MR_Word analysis__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 8)));
#line 899 "analysis.m"
                MR_Word analysis__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 9)));
#line 899 "analysis.m"
                MR_Word analysis__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 10)));
#line 902 "analysis.m"
                MR_Word analysis__TypeClassInfo_for_compiler_170;
#line 902 "analysis.m"
                MR_Box analysis__V_83_83;
#line 902 "analysis.m"
                MR_Word analysis__V_84_84;
#line 902 "analysis.m"
                MR_Word analysis__V_85_85;
#line 902 "analysis.m"
                MR_Word analysis__V_86_86;
#line 902 "analysis.m"
                MR_Word analysis__V_87_87;
#line 902 "analysis.m"
                MR_Word analysis__V_88_88;
#line 902 "analysis.m"
                MR_Word analysis__V_90_90;
#line 902 "analysis.m"
                MR_Word analysis__V_91_91;
#line 902 "analysis.m"
                MR_Word analysis__V_92_92;
#line 902 "analysis.m"
                MR_Word analysis__V_89_89;

#line 900 "analysis.m"
                {
#line 900 "analysis.m"
                  analysis__replace_result_in_analysis_map_8_p_0(analysis__TypeClassInfo_for_analysis_158, analysis__ModuleName_11, analysis__FuncId_13, analysis__FuncInfo_20, analysis__Call_17, analysis__NewAnswer_18, analysis__NewStatus_19, analysis__OldMap0_27, &analysis__OldMap_28);
                }
#line 902 "analysis.m"
                analysis__TypeClassInfo_for_compiler_170 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 0)));
#line 902 "analysis.m"
                analysis__V_83_83 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 1));
#line 902 "analysis.m"
                analysis__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 2)));
#line 902 "analysis.m"
                analysis__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 3)));
#line 902 "analysis.m"
                analysis__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 4)));
#line 902 "analysis.m"
                analysis__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 5)));
#line 902 "analysis.m"
                analysis__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 6)));
#line 902 "analysis.m"
                analysis__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 7)));
#line 902 "analysis.m"
                analysis__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 8)));
#line 902 "analysis.m"
                analysis__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 9)));
#line 902 "analysis.m"
                analysis__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 10)));
#line 902 "analysis.m"
                {
#line 902 "analysis.m"
                  analysis__STATE_VARIABLE_Info_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 902 "analysis.m"
                  MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_50_50, 0) = ((MR_Box) (analysis__TypeClassInfo_for_compiler_170));
#line 902 "analysis.m"
                  MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_50_50, 1) = analysis__V_83_83;
#line 902 "analysis.m"
                  MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_50_50, 2) = ((MR_Box) (analysis__V_84_84));
#line 902 "analysis.m"
                  MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_50_50, 3) = ((MR_Box) (analysis__V_85_85));
#line 902 "analysis.m"
                  MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_50_50, 4) = ((MR_Box) (analysis__V_86_86));
#line 902 "analysis.m"
                  MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_50_50, 5) = ((MR_Box) (analysis__V_87_87));
#line 902 "analysis.m"
                  MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_50_50, 6) = ((MR_Box) (analysis__V_88_88));
#line 902 "analysis.m"
                  MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_50_50, 7) = ((MR_Box) (analysis__OldMap_28));
#line 902 "analysis.m"
                  MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_50_50, 8) = ((MR_Box) (analysis__V_90_90));
#line 902 "analysis.m"
                  MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_50_50, 9) = ((MR_Box) (analysis__V_91_91));
#line 902 "analysis.m"
                  MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_50_50, 10) = ((MR_Box) (analysis__V_92_92));
#line 902 "analysis.m"
                }
#line 899 "analysis.m"
              }
#line 903 "analysis.m"
            else
#line 903 "analysis.m"
              analysis__STATE_VARIABLE_Info_50_50 = analysis__STATE_VARIABLE_Info_0_40;
#line 897 "analysis.m"
          }
#line 906 "analysis.m"
        else
#line 909 "analysis.m"
          {
#line 909 "analysis.m"
            MR_Word analysis__TypeCtorInfo_178_178;
#line 909 "analysis.m"
            MR_Word analysis__TypeClassInfo_for_call_pattern_180;
#line 909 "analysis.m"
            MR_Word analysis__Status_29;
#line 909 "analysis.m"
            MR_Word analysis__OldArcs_30;
#line 909 "analysis.m"
            MR_Word analysis__DepModules_31;
#line 909 "analysis.m"
            MR_Word analysis__STATE_VARIABLE_Info_51_51;
#line 909 "analysis.m"
            MR_Word analysis__V_52_52;
#line 909 "analysis.m"
            MR_Word analysis__V_55_55;
#line 909 "analysis.m"
            MR_Word analysis__OldMap0_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 7)));
#line 909 "analysis.m"
            MR_Word analysis__OldMap_69;
#line 909 "analysis.m"
            MR_Word analysis__TypeClassInfo_for_compiler_171 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 0)));
#line 909 "analysis.m"
            MR_Box analysis__V_93_93 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 1));
#line 909 "analysis.m"
            MR_Word analysis__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 2)));
#line 909 "analysis.m"
            MR_Word analysis__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 3)));
#line 909 "analysis.m"
            MR_Word analysis__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 4)));
#line 909 "analysis.m"
            MR_Word analysis__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 5)));
#line 909 "analysis.m"
            MR_Word analysis__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 6)));
#line 909 "analysis.m"
            MR_Word analysis__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 8)));
#line 909 "analysis.m"
            MR_Word analysis__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 9)));
#line 909 "analysis.m"
            MR_Word analysis__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 10)));
#line 912 "analysis.m"
            MR_Word analysis__TypeClassInfo_for_compiler_172;
#line 912 "analysis.m"
            MR_Box analysis__V_102_102;
#line 912 "analysis.m"
            MR_Word analysis__V_103_103;
#line 912 "analysis.m"
            MR_Word analysis__V_104_104;
#line 912 "analysis.m"
            MR_Word analysis__V_105_105;
#line 912 "analysis.m"
            MR_Word analysis__V_106_106;
#line 912 "analysis.m"
            MR_Word analysis__V_107_107;
#line 912 "analysis.m"
            MR_Word analysis__V_109_109;
#line 912 "analysis.m"
            MR_Word analysis__V_110_110;
#line 912 "analysis.m"
            MR_Word analysis__V_111_111;
#line 912 "analysis.m"
            MR_Word analysis__V_108_108;
#line 917 "analysis.m"
            MR_Word analysis__TypeClassInfo_for_answer_pattern_173;
#line 917 "analysis.m"
            MR_Word analysis__TypeClassInfo_for_partial_order_175;
#line 922 "analysis.m"
            MR_Word analysis__TypeClassInfo_for_compiler_177;
#line 922 "analysis.m"
            MR_Box analysis__V_112_112;
#line 922 "analysis.m"
            MR_Word analysis__V_113_113;
#line 922 "analysis.m"
            MR_Word analysis__V_114_114;
#line 922 "analysis.m"
            MR_Word analysis__V_115_115;
#line 922 "analysis.m"
            MR_Word analysis__V_116_116;
#line 922 "analysis.m"
            MR_Word analysis__V_117_117;
#line 922 "analysis.m"
            MR_Word analysis__V_118_118;
#line 922 "analysis.m"
            MR_Word analysis__V_119_119;
#line 922 "analysis.m"
            MR_Word analysis__V_120_120;
#line 922 "analysis.m"
            MR_Box analysis__conv1_OldArcs_30;
#line 927 "analysis.m"
            MR_Box analysis__conv4_STATE_VARIABLE_Info_50_50;
#line 927 "analysis.m"
            MR_Box analysis__conv3_STATE_VARIABLE_IO_49_49;

#line 910 "analysis.m"
            {
#line 910 "analysis.m"
              analysis__replace_result_in_analysis_map_8_p_0(analysis__TypeClassInfo_for_analysis_158, analysis__ModuleName_11, analysis__FuncId_13, analysis__FuncInfo_20, analysis__Call_17, analysis__NewAnswer_18, analysis__NewStatus_19, analysis__OldMap0_68, &analysis__OldMap_69);
            }
#line 912 "analysis.m"
            analysis__TypeClassInfo_for_compiler_172 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 0)));
#line 912 "analysis.m"
            analysis__V_102_102 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 1));
#line 912 "analysis.m"
            analysis__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 2)));
#line 912 "analysis.m"
            analysis__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 3)));
#line 912 "analysis.m"
            analysis__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 4)));
#line 912 "analysis.m"
            analysis__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 5)));
#line 912 "analysis.m"
            analysis__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 6)));
#line 912 "analysis.m"
            analysis__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 7)));
#line 912 "analysis.m"
            analysis__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 8)));
#line 912 "analysis.m"
            analysis__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 9)));
#line 912 "analysis.m"
            analysis__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 10)));
#line 912 "analysis.m"
            {
#line 912 "analysis.m"
              analysis__STATE_VARIABLE_Info_51_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 912 "analysis.m"
              MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_51_51, 0) = ((MR_Box) (analysis__TypeClassInfo_for_compiler_172));
#line 912 "analysis.m"
              MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_51_51, 1) = analysis__V_102_102;
#line 912 "analysis.m"
              MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_51_51, 2) = ((MR_Box) (analysis__V_103_103));
#line 912 "analysis.m"
              MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_51_51, 3) = ((MR_Box) (analysis__V_104_104));
#line 912 "analysis.m"
              MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_51_51, 4) = ((MR_Box) (analysis__V_105_105));
#line 912 "analysis.m"
              MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_51_51, 5) = ((MR_Box) (analysis__V_106_106));
#line 912 "analysis.m"
              MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_51_51, 6) = ((MR_Box) (analysis__V_107_107));
#line 912 "analysis.m"
              MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_51_51, 7) = ((MR_Box) (analysis__OldMap_69));
#line 912 "analysis.m"
              MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_51_51, 8) = ((MR_Box) (analysis__V_109_109));
#line 912 "analysis.m"
              MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_51_51, 9) = ((MR_Box) (analysis__V_110_110));
#line 912 "analysis.m"
              MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_51_51, 10) = ((MR_Box) (analysis__V_111_111));
#line 912 "analysis.m"
            }
#line 12656 "analysis.c"
            {
#line 12658 "analysis.c"
              mercury__private_builtin__superclass_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_158, (MR_Integer) 2, &analysis__TypeClassInfo_for_answer_pattern_173);
            }
#line 12661 "analysis.c"
            {
#line 12663 "analysis.c"
              mercury__private_builtin__superclass_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_answer_pattern_173, (MR_Integer) 1, &analysis__TypeClassInfo_for_partial_order_175);
            }
#line 917 "analysis.m"
            {
#line 917 "analysis.m"
              analysis__succeeded = analysis__more_precise_than_3_p_0(analysis__TypeClassInfo_for_partial_order_175, analysis__FuncInfo_20, analysis__NewAnswer_18, analysis__OldAnswer_25);
            }
#line 919 "analysis.m"
            if (analysis__succeeded)
#line 918 "analysis.m"
              analysis__Status_29 = (MR_Integer) 1;
#line 919 "analysis.m"
            else
#line 920 "analysis.m"
              analysis__Status_29 = (MR_Integer) 0;
#line 922 "analysis.m"
            analysis__TypeClassInfo_for_compiler_177 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_51_51, (MR_Integer) 0)));
#line 922 "analysis.m"
            analysis__V_112_112 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_51_51, (MR_Integer) 1));
#line 922 "analysis.m"
            analysis__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_51_51, (MR_Integer) 2)));
#line 922 "analysis.m"
            analysis__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_51_51, (MR_Integer) 3)));
#line 922 "analysis.m"
            analysis__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_51_51, (MR_Integer) 4)));
#line 922 "analysis.m"
            analysis__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_51_51, (MR_Integer) 5)));
#line 922 "analysis.m"
            analysis__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_51_51, (MR_Integer) 6)));
#line 922 "analysis.m"
            analysis__V_118_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_51_51, (MR_Integer) 7)));
#line 922 "analysis.m"
            analysis__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_51_51, (MR_Integer) 8)));
#line 922 "analysis.m"
            analysis__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_51_51, (MR_Integer) 9)));
#line 922 "analysis.m"
            analysis__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_51_51, (MR_Integer) 10)));
#line 12701 "analysis.c"
            analysis__TypeCtorInfo_178_178 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 922 "analysis.m"
            {
#line 922 "analysis.m"
              analysis__conv1_OldArcs_30 = mercury__map__det_elem_2_f_0(analysis__TypeCtorInfo_178_178, (MR_Word) &analysis_scalar_common_2[5], ((MR_Box) (analysis__ModuleName_11)), analysis__V_52_52);
            }
#line 922 "analysis.m"
            analysis__OldArcs_30 = ((MR_Word) analysis__conv1_OldArcs_30);
#line 12710 "analysis.c"
            {
#line 12712 "analysis.c"
              mercury__private_builtin__superclass_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_158, (MR_Integer) 1, &analysis__TypeClassInfo_for_call_pattern_180);
            }
#line 923 "analysis.m"
            {
#line 923 "analysis.m"
              analysis__DepModules_31 = analysis__imdg_dependent_modules_5_f_0(analysis__TypeClassInfo_for_call_pattern_180, analysis__OldArcs_30, analysis__AnalysisName_12, analysis__FuncId_13, analysis__FuncInfo_20, analysis__Call_17);
            }
#line 925 "analysis.m"
            {
#line 925 "analysis.m"
              analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_109_115_103_95_95_104_111_51_95_95_91_54_93_95_48_3_p_0(analysis__TypeClassInfo_for_analysis_158, analysis__NewAnswer_18, analysis__OldAnswer_25, analysis__Status_29, analysis__DepModules_31);
            }
#line 927 "analysis.m"
            {
#line 927 "analysis.m"
              analysis__V_55_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 927 "analysis.m"
              MR_hl_field(MR_mktag(0), analysis__V_55_55, 0) = ((MR_Box) (&analysis_scalar_common_12[0]));
#line 927 "analysis.m"
              MR_hl_field(MR_mktag(0), analysis__V_55_55, 1) = ((MR_Box) (analysis__update_analysis_registry_5_9_p_0_1));
#line 927 "analysis.m"
              MR_hl_field(MR_mktag(0), analysis__V_55_55, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 927 "analysis.m"
              MR_hl_field(MR_mktag(0), analysis__V_55_55, 3) = ((MR_Box) (analysis__Globals_22));
#line 927 "analysis.m"
              MR_hl_field(MR_mktag(0), analysis__V_55_55, 4) = ((MR_Box) (analysis__Status_29));
#line 927 "analysis.m"
            }
#line 927 "analysis.m"
            {
#line 927 "analysis.m"
              mercury__set__fold2_6_p_2(analysis__TypeCtorInfo_178_178, (MR_Word) &analysis__analysis__type_ctor_info_analysis_info_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, analysis__V_55_55, analysis__DepModules_31, ((MR_Box) (analysis__STATE_VARIABLE_Info_51_51)), &analysis__conv4_STATE_VARIABLE_Info_50_50, ((MR_Box) ((MR_Integer) 0)), &analysis__conv3_STATE_VARIABLE_IO_49_49);
            }
#line 927 "analysis.m"
            analysis__STATE_VARIABLE_Info_50_50 = ((MR_Word) analysis__conv4_STATE_VARIABLE_Info_50_50);
#line 909 "analysis.m"
          }
#line 893 "analysis.m"
      }
#line 950 "analysis.m"
    analysis__TypeClassInfo_for_compiler_198 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_50_50, (MR_Integer) 0)));
#line 950 "analysis.m"
    analysis__V_149_149 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_50_50, (MR_Integer) 1));
#line 950 "analysis.m"
    analysis__V_150_150 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_50_50, (MR_Integer) 2)));
#line 950 "analysis.m"
    analysis__V_151_151 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_50_50, (MR_Integer) 3)));
#line 950 "analysis.m"
    analysis__V_152_152 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_50_50, (MR_Integer) 4)));
#line 950 "analysis.m"
    analysis__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_50_50, (MR_Integer) 5)));
#line 950 "analysis.m"
    analysis__V_153_153 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_50_50, (MR_Integer) 6)));
#line 950 "analysis.m"
    analysis__V_154_154 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_50_50, (MR_Integer) 7)));
#line 950 "analysis.m"
    analysis__V_155_155 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_50_50, (MR_Integer) 8)));
#line 950 "analysis.m"
    analysis__V_156_156 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_50_50, (MR_Integer) 9)));
#line 950 "analysis.m"
    analysis__V_157_157 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_50_50, (MR_Integer) 10)));
#line 950 "analysis.m"
    {
#line 950 "analysis.m"
      analysis__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &analysis_scalar_common_2[1], analysis__V_58_58, ((MR_Box) (analysis__ModuleName_11)), &analysis__conv5_ModuleRequests_32);
    }
#line 950 "analysis.m"
    if (analysis__succeeded)
#line 950 "analysis.m"
      {
#line 950 "analysis.m"
        analysis__ModuleRequests_32 = ((MR_Word) analysis__conv5_ModuleRequests_32);
#line 950 "analysis.m"
        analysis__succeeded = MR_TRUE;
#line 950 "analysis.m"
      }
#line 950 "analysis.m"
    if (analysis__succeeded)
#line 950 "analysis.m"
      {
#line 12793 "analysis.c"
        analysis__TypeCtorInfo_201_201 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 12795 "analysis.c"
        analysis__TypeInfo_202_202 = (MR_Word) &analysis_scalar_common_2[0];
#line 951 "analysis.m"
        {
#line 951 "analysis.m"
          analysis__succeeded = mercury__map__elem_2_f_0(analysis__TypeCtorInfo_201_201, analysis__TypeInfo_202_202, ((MR_Box) (analysis__AnalysisName_12)), analysis__ModuleRequests_32, &analysis__conv6_V_59_59);
        }
#line 951 "analysis.m"
        if (analysis__succeeded)
#line 951 "analysis.m"
          {
#line 951 "analysis.m"
            analysis__V_59_59 = ((MR_Word) analysis__conv6_V_59_59);
#line 951 "analysis.m"
            analysis__succeeded = MR_TRUE;
#line 951 "analysis.m"
          }
#line 950 "analysis.m"
        if (analysis__succeeded)
#line 950 "analysis.m"
          {
#line 12816 "analysis.c"
            analysis__TypeCtorInfo_203_203 = (MR_Word) &analysis__analysis__type_ctor_info_func_id_0;
#line 12818 "analysis.c"
            analysis__TypeInfo_204_204 = (MR_Word) &analysis_scalar_common_1[0];
#line 951 "analysis.m"
            {
#line 951 "analysis.m"
              analysis__succeeded = mercury__map__elem_2_f_0(analysis__TypeCtorInfo_203_203, analysis__TypeInfo_204_204, ((MR_Box) (analysis__FuncId_13)), analysis__V_59_59, &analysis__conv7_Requests_33);
            }
#line 951 "analysis.m"
            if (analysis__succeeded)
#line 951 "analysis.m"
              {
#line 951 "analysis.m"
                analysis__Requests_33 = ((MR_Word) analysis__conv7_Requests_33);
#line 951 "analysis.m"
                analysis__succeeded = MR_TRUE;
#line 951 "analysis.m"
              }
#line 950 "analysis.m"
            if (analysis__succeeded)
#line 950 "analysis.m"
              {
#line 952 "analysis.m"
                analysis__succeeded = ((MR_tag((MR_Word) analysis__Requests_33)) == (MR_mktag((MR_Integer) 1)));
#line 952 "analysis.m"
                if (analysis__succeeded)
#line 952 "analysis.m"
                  {
#line 952 "analysis.m"
                    analysis__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), analysis__Requests_33, (MR_Integer) 0)));
#line 952 "analysis.m"
                    analysis__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), analysis__Requests_33, (MR_Integer) 1)));
#line 952 "analysis.m"
                  }
#line 950 "analysis.m"
              }
#line 950 "analysis.m"
          }
#line 950 "analysis.m"
      }
#line 961 "analysis.m"
    if (analysis__succeeded)
#line 957 "analysis.m"
      {
#line 957 "analysis.m"
        MR_Word analysis__TypeCtorInfo_206_206 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 957 "analysis.m"
        MR_Word analysis__Callers0_36;
#line 957 "analysis.m"
        MR_Word analysis__Callers_39;
#line 957 "analysis.m"
        MR_Word analysis__V_64_64;
#line 959 "analysis.m"
        MR_Box analysis__conv11_STATE_VARIABLE_Info_41;
#line 959 "analysis.m"
        MR_Box analysis__conv10_STATE_VARIABLE_IO_43;

#line 954 "analysis.m"
        {
#line 954 "analysis.m"
          analysis__Callers0_36 = mercury__list__filter_map_2_f_0((MR_Word) &analysis__analysis__type_ctor_info_analysis_request_0, analysis__TypeCtorInfo_206_206, (MR_Word) &analysis_scalar_common_2[10], analysis__Requests_33);
        }
#line 958 "analysis.m"
        {
#line 958 "analysis.m"
          mercury__list__sort_and_remove_dups_2_p_0(analysis__TypeCtorInfo_206_206, analysis__Callers0_36, &analysis__Callers_39);
        }
#line 959 "analysis.m"
        {
#line 959 "analysis.m"
          analysis__V_64_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 959 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__V_64_64, 0) = ((MR_Box) (&analysis_scalar_common_12[0]));
#line 959 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__V_64_64, 1) = ((MR_Box) (analysis__update_analysis_registry_5_9_p_0_3));
#line 959 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__V_64_64, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 959 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__V_64_64, 3) = ((MR_Box) (analysis__Globals_22));
#line 959 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__V_64_64, 4) = ((MR_Box) ((MR_Integer) 1));
#line 959 "analysis.m"
        }
#line 959 "analysis.m"
        {
#line 959 "analysis.m"
          mercury__list__foldl2_6_p_2(analysis__TypeCtorInfo_206_206, (MR_Word) &analysis__analysis__type_ctor_info_analysis_info_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, analysis__V_64_64, analysis__Callers_39, ((MR_Box) (analysis__STATE_VARIABLE_Info_50_50)), &analysis__conv11_STATE_VARIABLE_Info_41, ((MR_Box) ((MR_Integer) 0)), &analysis__conv10_STATE_VARIABLE_IO_43);
        }
#line 959 "analysis.m"
        *analysis__STATE_VARIABLE_Info_41 = ((MR_Word) analysis__conv11_STATE_VARIABLE_Info_41);
#line 957 "analysis.m"
      }
#line 961 "analysis.m"
    else
#line 962 "analysis.m"
      *analysis__STATE_VARIABLE_Info_41 = analysis__STATE_VARIABLE_Info_50_50;
#line 884 "analysis.m"
  }
#line 879 "analysis.m"
}

#line 875 "analysis.m"
static void MR_CALL 
analysis__update_analysis_registry_4_9_p_0_1(
#line 875 "analysis.m"
  MR_Box analysis__closure_arg,
#line 875 "analysis.m"
  MR_Box analysis__wrapper_arg_1,
#line 875 "analysis.m"
  MR_Box analysis__wrapper_arg_2,
#line 875 "analysis.m"
  MR_Box * analysis__wrapper_arg_3,
#line 875 "analysis.m"
  MR_Box analysis__wrapper_arg_4,
#line 875 "analysis.m"
  MR_Box * analysis__wrapper_arg_5)
#line 875 "analysis.m"
{
#line 875 "analysis.m"
  {
#line 875 "analysis.m"
    MR_Box analysis__closure = analysis__closure_arg;
#line 875 "analysis.m"
    MR_Word analysis__conv0_STATE_VARIABLE_Info_41;

#line 875 "analysis.m"
    {
#line 875 "analysis.m"
      analysis__update_analysis_registry_5_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 4))), ((MR_String) (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 6))), ((MR_Word) analysis__wrapper_arg_1), ((MR_Word) analysis__wrapper_arg_2), &analysis__conv0_STATE_VARIABLE_Info_41);
    }
#line 875 "analysis.m"
    *analysis__wrapper_arg_3 = ((MR_Box) (analysis__conv0_STATE_VARIABLE_Info_41));
#line 875 "analysis.m"
  }
#line 875 "analysis.m"
}

#line 866 "analysis.m"
void MR_CALL 
analysis__update_analysis_registry_4_9_p_0(
#line 866 "analysis.m"
  MR_Word analysis__ModuleInfo_10,
#line 866 "analysis.m"
  MR_Word analysis__ModuleName_11,
#line 866 "analysis.m"
  MR_String analysis__AnalysisName_12,
#line 866 "analysis.m"
  MR_Word analysis__FuncId_13,
#line 866 "analysis.m"
  MR_Word analysis__NewResults_14,
#line 866 "analysis.m"
  MR_Word analysis__STATE_VARIABLE_Info_0_17,
#line 866 "analysis.m"
  MR_Word * analysis__STATE_VARIABLE_Info_18)
#line 866 "analysis.m"
{
#line 871 "analysis.m"
  {
#line 871 "analysis.m"
    MR_bool analysis__succeeded;
#line 871 "analysis.m"
    MR_Word analysis__V_21_21;
#line 874 "analysis.m"
    MR_Box analysis__conv2_STATE_VARIABLE_Info_18;
#line 874 "analysis.m"
    MR_Box analysis__conv1_STATE_VARIABLE_IO_20;

#line 875 "analysis.m"
    {
#line 875 "analysis.m"
      analysis__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 875 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_21_21, 0) = ((MR_Box) (&analysis_scalar_common_11[1]));
#line 875 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_21_21, 1) = ((MR_Box) (analysis__update_analysis_registry_4_9_p_0_1));
#line 875 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_21_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 875 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_21_21, 3) = ((MR_Box) (analysis__ModuleInfo_10));
#line 875 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_21_21, 4) = ((MR_Box) (analysis__ModuleName_11));
#line 875 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_21_21, 5) = ((MR_Box) (analysis__AnalysisName_12));
#line 875 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_21_21, 6) = ((MR_Box) (analysis__FuncId_13));
#line 875 "analysis.m"
    }
#line 874 "analysis.m"
    {
#line 874 "analysis.m"
      mercury__list__foldl2_6_p_2((MR_Word) &analysis__analysis__type_ctor_info_some_analysis_result_0, (MR_Word) &analysis__analysis__type_ctor_info_analysis_info_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, analysis__V_21_21, analysis__NewResults_14, ((MR_Box) (analysis__STATE_VARIABLE_Info_0_17)), &analysis__conv2_STATE_VARIABLE_Info_18, ((MR_Box) ((MR_Integer) 0)), &analysis__conv1_STATE_VARIABLE_IO_20);
    }
#line 874 "analysis.m"
    *analysis__STATE_VARIABLE_Info_18 = ((MR_Word) analysis__conv2_STATE_VARIABLE_Info_18);
#line 871 "analysis.m"
  }
#line 866 "analysis.m"
}

#line 863 "analysis.m"
static void MR_CALL 
analysis__update_analysis_registry_3_8_p_0_1(
#line 863 "analysis.m"
  MR_Box analysis__closure_arg,
#line 863 "analysis.m"
  MR_Box analysis__wrapper_arg_1,
#line 863 "analysis.m"
  MR_Box analysis__wrapper_arg_2,
#line 863 "analysis.m"
  MR_Box analysis__wrapper_arg_3,
#line 863 "analysis.m"
  MR_Box * analysis__wrapper_arg_4,
#line 863 "analysis.m"
  MR_Box analysis__wrapper_arg_5,
#line 863 "analysis.m"
  MR_Box * analysis__wrapper_arg_6)
#line 863 "analysis.m"
{
#line 863 "analysis.m"
  {
#line 863 "analysis.m"
    MR_Box analysis__closure = analysis__closure_arg;
#line 863 "analysis.m"
    MR_Word analysis__conv0_STATE_VARIABLE_Info_18;

#line 863 "analysis.m"
    {
#line 863 "analysis.m"
      analysis__update_analysis_registry_4_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 4))), ((MR_String) (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 5))), ((MR_Word) analysis__wrapper_arg_1), ((MR_Word) analysis__wrapper_arg_2), ((MR_Word) analysis__wrapper_arg_3), &analysis__conv0_STATE_VARIABLE_Info_18);
    }
#line 863 "analysis.m"
    *analysis__wrapper_arg_4 = ((MR_Box) (analysis__conv0_STATE_VARIABLE_Info_18));
#line 863 "analysis.m"
  }
#line 863 "analysis.m"
}

#line 856 "analysis.m"
void MR_CALL 
analysis__update_analysis_registry_3_8_p_0(
#line 856 "analysis.m"
  MR_Word analysis__ModuleInfo_9,
#line 856 "analysis.m"
  MR_Word analysis__ModuleName_10,
#line 856 "analysis.m"
  MR_String analysis__AnalysisName_11,
#line 856 "analysis.m"
  MR_Word analysis__FuncMap_12,
#line 856 "analysis.m"
  MR_Word analysis__STATE_VARIABLE_Info_0_15,
#line 856 "analysis.m"
  MR_Word * analysis__STATE_VARIABLE_Info_16)
#line 856 "analysis.m"
{
#line 861 "analysis.m"
  {
#line 861 "analysis.m"
    MR_bool analysis__succeeded;
#line 861 "analysis.m"
    MR_Word analysis__V_19_19;
#line 862 "analysis.m"
    MR_Box analysis__conv2_STATE_VARIABLE_Info_16;
#line 862 "analysis.m"
    MR_Box analysis__conv1_STATE_VARIABLE_IO_18;

#line 863 "analysis.m"
    {
#line 863 "analysis.m"
      analysis__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 863 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_19_19, 0) = ((MR_Box) (&analysis_scalar_common_11[0]));
#line 863 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_19_19, 1) = ((MR_Box) (analysis__update_analysis_registry_3_8_p_0_1));
#line 863 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_19_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 863 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_19_19, 3) = ((MR_Box) (analysis__ModuleInfo_9));
#line 863 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_19_19, 4) = ((MR_Box) (analysis__ModuleName_10));
#line 863 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_19_19, 5) = ((MR_Box) (analysis__AnalysisName_11));
#line 863 "analysis.m"
    }
#line 862 "analysis.m"
    {
#line 862 "analysis.m"
      mercury__map__foldl2_6_p_2((MR_Word) &analysis__analysis__type_ctor_info_func_id_0, (MR_Word) &analysis_scalar_common_1[1], (MR_Word) &analysis__analysis__type_ctor_info_analysis_info_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, analysis__V_19_19, analysis__FuncMap_12, ((MR_Box) (analysis__STATE_VARIABLE_Info_0_15)), &analysis__conv2_STATE_VARIABLE_Info_16, ((MR_Box) ((MR_Integer) 0)), &analysis__conv1_STATE_VARIABLE_IO_18);
    }
#line 862 "analysis.m"
    *analysis__STATE_VARIABLE_Info_16 = ((MR_Word) analysis__conv2_STATE_VARIABLE_Info_16);
#line 861 "analysis.m"
  }
#line 856 "analysis.m"
}

#line 853 "analysis.m"
static void MR_CALL 
analysis__update_analysis_registry_2_7_p_0_1(
#line 853 "analysis.m"
  MR_Box analysis__closure_arg,
#line 853 "analysis.m"
  MR_Box analysis__wrapper_arg_1,
#line 853 "analysis.m"
  MR_Box analysis__wrapper_arg_2,
#line 853 "analysis.m"
  MR_Box analysis__wrapper_arg_3,
#line 853 "analysis.m"
  MR_Box * analysis__wrapper_arg_4,
#line 853 "analysis.m"
  MR_Box analysis__wrapper_arg_5,
#line 853 "analysis.m"
  MR_Box * analysis__wrapper_arg_6)
#line 853 "analysis.m"
{
#line 853 "analysis.m"
  {
#line 853 "analysis.m"
    MR_Box analysis__closure = analysis__closure_arg;
#line 853 "analysis.m"
    MR_Word analysis__conv0_STATE_VARIABLE_Info_16;

#line 853 "analysis.m"
    {
#line 853 "analysis.m"
      analysis__update_analysis_registry_3_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 4))), ((MR_String) analysis__wrapper_arg_1), ((MR_Word) analysis__wrapper_arg_2), ((MR_Word) analysis__wrapper_arg_3), &analysis__conv0_STATE_VARIABLE_Info_16);
    }
#line 853 "analysis.m"
    *analysis__wrapper_arg_4 = ((MR_Box) (analysis__conv0_STATE_VARIABLE_Info_16));
#line 853 "analysis.m"
  }
#line 853 "analysis.m"
}

#line 848 "analysis.m"
void MR_CALL 
analysis__update_analysis_registry_2_7_p_0(
#line 848 "analysis.m"
  MR_Word analysis__ModuleInfo_8,
#line 848 "analysis.m"
  MR_Word analysis__ModuleName_9,
#line 848 "analysis.m"
  MR_Word analysis__ModuleMap_10,
#line 848 "analysis.m"
  MR_Word analysis__STATE_VARIABLE_Info_0_13,
#line 848 "analysis.m"
  MR_Word * analysis__STATE_VARIABLE_Info_14)
#line 848 "analysis.m"
{
#line 852 "analysis.m"
  {
#line 852 "analysis.m"
    MR_bool analysis__succeeded;
#line 852 "analysis.m"
    MR_Word analysis__V_17_17;
#line 853 "analysis.m"
    MR_Box analysis__conv2_STATE_VARIABLE_Info_14;
#line 853 "analysis.m"
    MR_Box analysis__conv1_STATE_VARIABLE_IO_16;

#line 853 "analysis.m"
    {
#line 853 "analysis.m"
      analysis__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 853 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_17_17, 0) = ((MR_Box) (&analysis_scalar_common_10[0]));
#line 853 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_17_17, 1) = ((MR_Box) (analysis__update_analysis_registry_2_7_p_0_1));
#line 853 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_17_17, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 853 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_17_17, 3) = ((MR_Box) (analysis__ModuleInfo_8));
#line 853 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_17_17, 4) = ((MR_Box) (analysis__ModuleName_9));
#line 853 "analysis.m"
    }
#line 853 "analysis.m"
    {
#line 853 "analysis.m"
      mercury__map__foldl2_6_p_2((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &analysis_scalar_common_2[2], (MR_Word) &analysis__analysis__type_ctor_info_analysis_info_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, analysis__V_17_17, analysis__ModuleMap_10, ((MR_Box) (analysis__STATE_VARIABLE_Info_0_13)), &analysis__conv2_STATE_VARIABLE_Info_14, ((MR_Box) ((MR_Integer) 0)), &analysis__conv1_STATE_VARIABLE_IO_16);
    }
#line 853 "analysis.m"
    *analysis__STATE_VARIABLE_Info_14 = ((MR_Word) analysis__conv2_STATE_VARIABLE_Info_14);
#line 852 "analysis.m"
  }
#line 848 "analysis.m"
}

#line 853 "analysis.m"
static void MR_CALL 
analysis__update_analysis_registry_5_p_0_1(
#line 853 "analysis.m"
  MR_Box analysis__closure_arg,
#line 853 "analysis.m"
  MR_Box analysis__wrapper_arg_1,
#line 853 "analysis.m"
  MR_Box analysis__wrapper_arg_2,
#line 853 "analysis.m"
  MR_Box analysis__wrapper_arg_3,
#line 853 "analysis.m"
  MR_Box * analysis__wrapper_arg_4,
#line 853 "analysis.m"
  MR_Box analysis__wrapper_arg_5,
#line 853 "analysis.m"
  MR_Box * analysis__wrapper_arg_6)
#line 853 "analysis.m"
{
#line 853 "analysis.m"
  {
#line 853 "analysis.m"
    MR_Box analysis__closure = analysis__closure_arg;
#line 853 "analysis.m"
    MR_Word analysis__conv0_STATE_VARIABLE_Info_16;

#line 853 "analysis.m"
    {
#line 853 "analysis.m"
      analysis__update_analysis_registry_3_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 4))), ((MR_String) analysis__wrapper_arg_1), ((MR_Word) analysis__wrapper_arg_2), ((MR_Word) analysis__wrapper_arg_3), &analysis__conv0_STATE_VARIABLE_Info_16);
    }
#line 853 "analysis.m"
    *analysis__wrapper_arg_4 = ((MR_Box) (analysis__conv0_STATE_VARIABLE_Info_16));
#line 853 "analysis.m"
  }
#line 853 "analysis.m"
}

#line 838 "analysis.m"
void MR_CALL 
analysis__update_analysis_registry_5_p_0(
#line 838 "analysis.m"
  MR_Word analysis__ModuleInfo_6,
#line 838 "analysis.m"
  MR_Word analysis__STATE_VARIABLE_Info_0_10,
#line 838 "analysis.m"
  MR_Word * analysis__STATE_VARIABLE_Info_11)
#line 838 "analysis.m"
{
#line 841 "analysis.m"
  {
#line 841 "analysis.m"
    MR_bool analysis__succeeded;
#line 841 "analysis.m"
    MR_Word analysis__NewResults_9;
#line 841 "analysis.m"
    MR_Word analysis__V_17_17;
#line 841 "analysis.m"
    MR_Word analysis__STATE_VARIABLE_Info_18_18;
#line 841 "analysis.m"
    MR_Word analysis__V_21_21;
#line 841 "analysis.m"
    MR_Word analysis__Debug_61;
#line 841 "analysis.m"
    MR_Word analysis__V_76_76;
#line 843 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_compiler_52;
#line 843 "analysis.m"
    MR_Box analysis__V_22_22;
#line 843 "analysis.m"
    MR_Word analysis__V_23_23;
#line 843 "analysis.m"
    MR_Word analysis__V_24_24;
#line 843 "analysis.m"
    MR_Word analysis__V_25_25;
#line 843 "analysis.m"
    MR_Word analysis__V_26_26;
#line 843 "analysis.m"
    MR_Word analysis__V_27_27;
#line 843 "analysis.m"
    MR_Word analysis__V_28_28;
#line 843 "analysis.m"
    MR_Word analysis__V_29_29;
#line 843 "analysis.m"
    MR_Word analysis__V_30_30;
#line 844 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_compiler_53;
#line 844 "analysis.m"
    MR_Box analysis__V_31_31;
#line 844 "analysis.m"
    MR_Word analysis__V_32_32;
#line 844 "analysis.m"
    MR_Word analysis__V_33_33;
#line 844 "analysis.m"
    MR_Word analysis__V_34_34;
#line 844 "analysis.m"
    MR_Word analysis__V_35_35;
#line 844 "analysis.m"
    MR_Word analysis__V_36_36;
#line 844 "analysis.m"
    MR_Word analysis__V_37_37;
#line 844 "analysis.m"
    MR_Word analysis__V_38_38;
#line 844 "analysis.m"
    MR_Word analysis__V_39_39;
#line 853 "analysis.m"
    MR_Box analysis__conv2_STATE_VARIABLE_Info_18_18;
#line 853 "analysis.m"
    MR_Box analysis__conv1_STATE_VARIABLE_IO_13;
#line 846 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_compiler_56;
#line 846 "analysis.m"
    MR_Box analysis__V_40_40;
#line 846 "analysis.m"
    MR_Word analysis__V_41_41;
#line 846 "analysis.m"
    MR_Word analysis__V_42_42;
#line 846 "analysis.m"
    MR_Word analysis__V_43_43;
#line 846 "analysis.m"
    MR_Word analysis__V_44_44;
#line 846 "analysis.m"
    MR_Word analysis__V_45_45;
#line 846 "analysis.m"
    MR_Word analysis__V_46_46;
#line 846 "analysis.m"
    MR_Word analysis__V_48_48;
#line 846 "analysis.m"
    MR_Word analysis__V_49_49;
#line 846 "analysis.m"
    MR_Word analysis__V_47_47;

#line 1382 "analysis.m"
{
#define MR_PROC_LABEL analysis__update_analysis_registry_5_p_0


		{
#line 1382 "analysis.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&analysis__mutable_variable_debug_analysis_lock,
                    "analysis__mutable_variable_debug_analysis_lock");
#endif

#line 13348 "analysis.c"

		;}
#undef MR_PROC_LABEL
#line 1382 "analysis.m"
}
#line 1382 "analysis.m"
{
#define MR_PROC_LABEL analysis__update_analysis_registry_5_p_0

	MR_Word X;

		{
#line 1382 "analysis.m"
X = analysis__mutable_variable_debug_analysis;

#line 13364 "analysis.c"

		;}
#undef MR_PROC_LABEL
	 analysis__Debug_61  = X;
#line 1382 "analysis.m"
}
#line 1382 "analysis.m"
{
#define MR_PROC_LABEL analysis__update_analysis_registry_5_p_0


		{
#line 1382 "analysis.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&analysis__mutable_variable_debug_analysis_lock,
                    "analysis__mutable_variable_debug_analysis_lock");
#endif

#line 13383 "analysis.c"

		;}
#undef MR_PROC_LABEL
#line 1382 "analysis.m"
}
#line 1395 "analysis.m"
#line 1395 "analysis.m"
    switch (analysis__Debug_61) {
#line 1395 "analysis.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1395 "analysis.m"
      case (MR_Integer) 0:
#line 1396 "analysis.m"
        {
#line 1396 "analysis.m"
        }
#line 1395 "analysis.m"
        break;
#line 1395 "analysis.m"
      case (MR_Integer) 1:
#line 1394 "analysis.m"
        {
#line 1394 "analysis.m"
          mercury__io__write_string_3_p_0((MR_String) "% Updating analysis registry.\n");
        }
#line 1395 "analysis.m"
        break;
#line 1395 "analysis.m"
    }
#line 843 "analysis.m"
    analysis__TypeClassInfo_for_compiler_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_10, (MR_Integer) 0)));
#line 843 "analysis.m"
    analysis__V_22_22 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_10, (MR_Integer) 1));
#line 843 "analysis.m"
    analysis__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_10, (MR_Integer) 2)));
#line 843 "analysis.m"
    analysis__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_10, (MR_Integer) 3)));
#line 843 "analysis.m"
    analysis__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_10, (MR_Integer) 4)));
#line 843 "analysis.m"
    analysis__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_10, (MR_Integer) 5)));
#line 843 "analysis.m"
    analysis__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_10, (MR_Integer) 6)));
#line 843 "analysis.m"
    analysis__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_10, (MR_Integer) 7)));
#line 843 "analysis.m"
    analysis__NewResults_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_10, (MR_Integer) 8)));
#line 843 "analysis.m"
    analysis__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_10, (MR_Integer) 9)));
#line 843 "analysis.m"
    analysis__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_10, (MR_Integer) 10)));
#line 844 "analysis.m"
    analysis__TypeClassInfo_for_compiler_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_10, (MR_Integer) 0)));
#line 844 "analysis.m"
    analysis__V_31_31 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_10, (MR_Integer) 1));
#line 844 "analysis.m"
    analysis__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_10, (MR_Integer) 2)));
#line 844 "analysis.m"
    analysis__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_10, (MR_Integer) 3)));
#line 844 "analysis.m"
    analysis__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_10, (MR_Integer) 4)));
#line 844 "analysis.m"
    analysis__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_10, (MR_Integer) 5)));
#line 844 "analysis.m"
    analysis__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_10, (MR_Integer) 6)));
#line 844 "analysis.m"
    analysis__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_10, (MR_Integer) 7)));
#line 844 "analysis.m"
    analysis__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_10, (MR_Integer) 8)));
#line 844 "analysis.m"
    analysis__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_10, (MR_Integer) 9)));
#line 844 "analysis.m"
    analysis__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_10, (MR_Integer) 10)));
#line 853 "analysis.m"
    {
#line 853 "analysis.m"
      analysis__V_76_76 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 853 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_76_76, 0) = ((MR_Box) (&analysis_scalar_common_10[0]));
#line 853 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_76_76, 1) = ((MR_Box) (analysis__update_analysis_registry_5_p_0_1));
#line 853 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_76_76, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 853 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_76_76, 3) = ((MR_Box) (analysis__ModuleInfo_6));
#line 853 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_76_76, 4) = ((MR_Box) (analysis__V_17_17));
#line 853 "analysis.m"
    }
#line 853 "analysis.m"
    {
#line 853 "analysis.m"
      mercury__map__foldl2_6_p_2((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &analysis_scalar_common_2[2], (MR_Word) &analysis__analysis__type_ctor_info_analysis_info_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, analysis__V_76_76, analysis__NewResults_9, ((MR_Box) (analysis__STATE_VARIABLE_Info_0_10)), &analysis__conv2_STATE_VARIABLE_Info_18_18, ((MR_Box) ((MR_Integer) 0)), &analysis__conv1_STATE_VARIABLE_IO_13);
    }
#line 853 "analysis.m"
    analysis__STATE_VARIABLE_Info_18_18 = ((MR_Word) analysis__conv2_STATE_VARIABLE_Info_18_18);
#line 846 "analysis.m"
    {
#line 846 "analysis.m"
      analysis__V_21_21 = mercury__map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &analysis_scalar_common_2[2]);
    }
#line 846 "analysis.m"
    analysis__TypeClassInfo_for_compiler_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_18_18, (MR_Integer) 0)));
#line 846 "analysis.m"
    analysis__V_40_40 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_18_18, (MR_Integer) 1));
#line 846 "analysis.m"
    analysis__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_18_18, (MR_Integer) 2)));
#line 846 "analysis.m"
    analysis__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_18_18, (MR_Integer) 3)));
#line 846 "analysis.m"
    analysis__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_18_18, (MR_Integer) 4)));
#line 846 "analysis.m"
    analysis__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_18_18, (MR_Integer) 5)));
#line 846 "analysis.m"
    analysis__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_18_18, (MR_Integer) 6)));
#line 846 "analysis.m"
    analysis__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_18_18, (MR_Integer) 7)));
#line 846 "analysis.m"
    analysis__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_18_18, (MR_Integer) 8)));
#line 846 "analysis.m"
    analysis__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_18_18, (MR_Integer) 9)));
#line 846 "analysis.m"
    analysis__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_18_18, (MR_Integer) 10)));
#line 846 "analysis.m"
    {
#line 846 "analysis.m"
      MR_Word base;
#line 846 "analysis.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 846 "analysis.m"
      *analysis__STATE_VARIABLE_Info_11 = base;
#line 846 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (analysis__TypeClassInfo_for_compiler_56));
#line 846 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 1) = analysis__V_40_40;
#line 846 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (analysis__V_41_41));
#line 846 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (analysis__V_42_42));
#line 846 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (analysis__V_43_43));
#line 846 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (analysis__V_44_44));
#line 846 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (analysis__V_45_45));
#line 846 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (analysis__V_46_46));
#line 846 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (analysis__V_21_21));
#line 846 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (analysis__V_48_48));
#line 846 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (analysis__V_49_49));
#line 846 "analysis.m"
    }
#line 841 "analysis.m"
  }
#line 838 "analysis.m"
}

#line 774 "analysis.m"
void MR_CALL 
analysis__record_dependency_2_7_p_0(
#line 774 "analysis.m"
  MR_Word analysis__TypeClassInfo_for_call_pattern_58,
#line 774 "analysis.m"
  MR_Word analysis__CallerModuleName_8,
#line 774 "analysis.m"
  MR_String analysis__AnalysisName_9,
#line 774 "analysis.m"
  MR_Word analysis__CalleeModuleName_10,
#line 774 "analysis.m"
  MR_Word analysis__FuncId_11,
#line 774 "analysis.m"
  MR_Box analysis__Call_12,
#line 774 "analysis.m"
  MR_Word analysis__STATE_VARIABLE_Info_0_22,
#line 774 "analysis.m"
  MR_Word * analysis__STATE_VARIABLE_Info_23)
#line 774 "analysis.m"
{
#line 780 "analysis.m"
  {
#line 780 "analysis.m"
    MR_bool analysis__succeeded;
#line 780 "analysis.m"
    MR_Word analysis__Analyses1_15;
#line 780 "analysis.m"
    MR_Word analysis__Funcs1_17;
#line 780 "analysis.m"
    MR_Word analysis__FuncArcs1_19;
#line 780 "analysis.m"
    MR_Word analysis__Dep_20;
#line 783 "analysis.m"
    MR_Word analysis__Analyses0_14;
#line 781 "analysis.m"
    MR_Word analysis__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 10)));
#line 781 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_compiler_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 0)));
#line 781 "analysis.m"
    MR_Box analysis__V_30_30 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 1));
#line 781 "analysis.m"
    MR_Word analysis__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 2)));
#line 781 "analysis.m"
    MR_Word analysis__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 3)));
#line 781 "analysis.m"
    MR_Word analysis__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 4)));
#line 781 "analysis.m"
    MR_Word analysis__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 5)));
#line 781 "analysis.m"
    MR_Word analysis__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 6)));
#line 781 "analysis.m"
    MR_Word analysis__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 7)));
#line 781 "analysis.m"
    MR_Word analysis__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 8)));
#line 781 "analysis.m"
    MR_Word analysis__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 9)));
#line 781 "analysis.m"
    MR_Box analysis__conv0_Analyses0_14;
#line 788 "analysis.m"
    MR_Word analysis__Funcs0_16;
#line 786 "analysis.m"
    MR_Box analysis__conv1_Funcs0_16;
#line 793 "analysis.m"
    MR_Word analysis__FuncArcs0_18;
#line 791 "analysis.m"
    MR_Box analysis__conv2_FuncArcs0_18;

#line 781 "analysis.m"
    {
#line 781 "analysis.m"
      analysis__succeeded = mercury__map__search_2_f_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &analysis_scalar_common_2[5], analysis__V_24_24, ((MR_Box) (analysis__CalleeModuleName_10)), &analysis__conv0_Analyses0_14);
    }
#line 781 "analysis.m"
    if (analysis__succeeded)
#line 781 "analysis.m"
      {
#line 781 "analysis.m"
        analysis__Analyses0_14 = ((MR_Word) analysis__conv0_Analyses0_14);
#line 781 "analysis.m"
        analysis__succeeded = MR_TRUE;
#line 781 "analysis.m"
      }
#line 783 "analysis.m"
    if (analysis__succeeded)
#line 782 "analysis.m"
      analysis__Analyses1_15 = analysis__Analyses0_14;
#line 783 "analysis.m"
    else
#line 784 "analysis.m"
      {
#line 784 "analysis.m"
        {
#line 784 "analysis.m"
          analysis__Analyses1_15 = mercury__map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &analysis_scalar_common_2[4]);
        }
#line 784 "analysis.m"
      }
#line 786 "analysis.m"
    {
#line 786 "analysis.m"
      analysis__succeeded = mercury__map__search_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &analysis_scalar_common_2[4], analysis__Analyses1_15, ((MR_Box) (analysis__AnalysisName_9)), &analysis__conv1_Funcs0_16);
    }
#line 786 "analysis.m"
    if (analysis__succeeded)
#line 786 "analysis.m"
      {
#line 786 "analysis.m"
        analysis__Funcs0_16 = ((MR_Word) analysis__conv1_Funcs0_16);
#line 786 "analysis.m"
        analysis__succeeded = MR_TRUE;
#line 786 "analysis.m"
      }
#line 788 "analysis.m"
    if (analysis__succeeded)
#line 787 "analysis.m"
      analysis__Funcs1_17 = analysis__Funcs0_16;
#line 788 "analysis.m"
    else
#line 789 "analysis.m"
      {
#line 789 "analysis.m"
        {
#line 789 "analysis.m"
          analysis__Funcs1_17 = mercury__map__init_0_f_0((MR_Word) &analysis__analysis__type_ctor_info_func_id_0, (MR_Word) &analysis_scalar_common_1[2]);
        }
#line 789 "analysis.m"
      }
#line 791 "analysis.m"
    {
#line 791 "analysis.m"
      analysis__succeeded = mercury__map__search_2_f_0((MR_Word) &analysis__analysis__type_ctor_info_func_id_0, (MR_Word) &analysis_scalar_common_1[2], analysis__Funcs1_17, ((MR_Box) (analysis__FuncId_11)), &analysis__conv2_FuncArcs0_18);
    }
#line 791 "analysis.m"
    if (analysis__succeeded)
#line 791 "analysis.m"
      {
#line 791 "analysis.m"
        analysis__FuncArcs0_18 = ((MR_Word) analysis__conv2_FuncArcs0_18);
#line 791 "analysis.m"
        analysis__succeeded = MR_TRUE;
#line 791 "analysis.m"
      }
#line 793 "analysis.m"
    if (analysis__succeeded)
#line 792 "analysis.m"
      analysis__FuncArcs1_19 = analysis__FuncArcs0_18;
#line 793 "analysis.m"
    else
#line 794 "analysis.m"
      analysis__FuncArcs1_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 796 "analysis.m"
    {
#line 796 "analysis.m"
      analysis__Dep_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 796 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__Dep_20, 0) = ((MR_Box) (analysis__TypeClassInfo_for_call_pattern_58));
#line 796 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__Dep_20, 1) = analysis__Call_12;
#line 796 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__Dep_20, 2) = ((MR_Box) (analysis__CallerModuleName_8));
#line 796 "analysis.m"
    }
#line 798 "analysis.m"
    {
#line 798 "analysis.m"
      analysis__succeeded = mercury__list__member_2_p_0((MR_Word) &analysis__analysis__type_ctor_info_imdg_arc_0, ((MR_Box) (analysis__Dep_20)), analysis__FuncArcs1_19);
    }
#line 800 "analysis.m"
    if (analysis__succeeded)
#line 800 "analysis.m"
      *analysis__STATE_VARIABLE_Info_23 = analysis__STATE_VARIABLE_Info_0_22;
#line 800 "analysis.m"
    else
#line 801 "analysis.m"
      {
#line 801 "analysis.m"
        MR_Word analysis__FuncArcs_21;
#line 801 "analysis.m"
        MR_Word analysis__V_26_26;
#line 801 "analysis.m"
        MR_Word analysis__V_27_27;
#line 801 "analysis.m"
        MR_Word analysis__V_28_28;
#line 801 "analysis.m"
        MR_Word analysis__V_29_29;
#line 803 "analysis.m"
        MR_Word analysis__TypeClassInfo_for_compiler_73;
#line 803 "analysis.m"
        MR_Box analysis__V_39_39;
#line 803 "analysis.m"
        MR_Word analysis__V_40_40;
#line 803 "analysis.m"
        MR_Word analysis__V_41_41;
#line 803 "analysis.m"
        MR_Word analysis__V_42_42;
#line 803 "analysis.m"
        MR_Word analysis__V_43_43;
#line 803 "analysis.m"
        MR_Word analysis__V_44_44;
#line 803 "analysis.m"
        MR_Word analysis__V_45_45;
#line 803 "analysis.m"
        MR_Word analysis__V_46_46;
#line 803 "analysis.m"
        MR_Word analysis__V_47_47;
#line 802 "analysis.m"
        MR_Word analysis__TypeClassInfo_for_compiler_78;
#line 802 "analysis.m"
        MR_Box analysis__V_48_48;
#line 802 "analysis.m"
        MR_Word analysis__V_49_49;
#line 802 "analysis.m"
        MR_Word analysis__V_50_50;
#line 802 "analysis.m"
        MR_Word analysis__V_51_51;
#line 802 "analysis.m"
        MR_Word analysis__V_52_52;
#line 802 "analysis.m"
        MR_Word analysis__V_53_53;
#line 802 "analysis.m"
        MR_Word analysis__V_54_54;
#line 802 "analysis.m"
        MR_Word analysis__V_55_55;
#line 802 "analysis.m"
        MR_Word analysis__V_56_56;
#line 802 "analysis.m"
        MR_Word analysis__V_57_57;

#line 801 "analysis.m"
        {
#line 801 "analysis.m"
          analysis__FuncArcs_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 801 "analysis.m"
          MR_hl_field(MR_mktag(1), analysis__FuncArcs_21, 0) = ((MR_Box) (analysis__Dep_20));
#line 801 "analysis.m"
          MR_hl_field(MR_mktag(1), analysis__FuncArcs_21, 1) = ((MR_Box) (analysis__FuncArcs1_19));
#line 801 "analysis.m"
        }
#line 803 "analysis.m"
        analysis__TypeClassInfo_for_compiler_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 0)));
#line 803 "analysis.m"
        analysis__V_39_39 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 1));
#line 803 "analysis.m"
        analysis__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 2)));
#line 803 "analysis.m"
        analysis__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 3)));
#line 803 "analysis.m"
        analysis__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 4)));
#line 803 "analysis.m"
        analysis__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 5)));
#line 803 "analysis.m"
        analysis__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 6)));
#line 803 "analysis.m"
        analysis__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 7)));
#line 803 "analysis.m"
        analysis__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 8)));
#line 803 "analysis.m"
        analysis__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 9)));
#line 803 "analysis.m"
        analysis__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 10)));
#line 805 "analysis.m"
        {
#line 805 "analysis.m"
          analysis__V_29_29 = mercury__map__set_3_f_0((MR_Word) &analysis__analysis__type_ctor_info_func_id_0, (MR_Word) &analysis_scalar_common_1[2], analysis__Funcs1_17, ((MR_Box) (analysis__FuncId_11)), ((MR_Box) (analysis__FuncArcs_21)));
        }
#line 804 "analysis.m"
        {
#line 804 "analysis.m"
          analysis__V_28_28 = mercury__map__set_3_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &analysis_scalar_common_2[4], analysis__Analyses1_15, ((MR_Box) (analysis__AnalysisName_9)), ((MR_Box) (analysis__V_29_29)));
        }
#line 803 "analysis.m"
        {
#line 803 "analysis.m"
          analysis__V_26_26 = mercury__map__set_3_f_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &analysis_scalar_common_2[5], analysis__V_27_27, ((MR_Box) (analysis__CalleeModuleName_10)), ((MR_Box) (analysis__V_28_28)));
        }
#line 802 "analysis.m"
        analysis__TypeClassInfo_for_compiler_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 0)));
#line 802 "analysis.m"
        analysis__V_48_48 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 1));
#line 802 "analysis.m"
        analysis__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 2)));
#line 802 "analysis.m"
        analysis__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 3)));
#line 802 "analysis.m"
        analysis__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 4)));
#line 802 "analysis.m"
        analysis__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 5)));
#line 802 "analysis.m"
        analysis__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 6)));
#line 802 "analysis.m"
        analysis__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 7)));
#line 802 "analysis.m"
        analysis__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 8)));
#line 802 "analysis.m"
        analysis__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 9)));
#line 802 "analysis.m"
        analysis__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 10)));
#line 802 "analysis.m"
        {
#line 802 "analysis.m"
          MR_Word base;
#line 802 "analysis.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 802 "analysis.m"
          *analysis__STATE_VARIABLE_Info_23 = base;
#line 802 "analysis.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (analysis__TypeClassInfo_for_compiler_78));
#line 802 "analysis.m"
          MR_hl_field(MR_mktag(0), base, 1) = analysis__V_48_48;
#line 802 "analysis.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (analysis__V_49_49));
#line 802 "analysis.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (analysis__V_50_50));
#line 802 "analysis.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (analysis__V_51_51));
#line 802 "analysis.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (analysis__V_52_52));
#line 802 "analysis.m"
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (analysis__V_53_53));
#line 802 "analysis.m"
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (analysis__V_54_54));
#line 802 "analysis.m"
          MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (analysis__V_55_55));
#line 802 "analysis.m"
          MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (analysis__V_56_56));
#line 802 "analysis.m"
          MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (analysis__V_26_26));
#line 802 "analysis.m"
        }
#line 801 "analysis.m"
      }
#line 780 "analysis.m"
  }
#line 774 "analysis.m"
}

#line 710 "analysis.m"
void MR_CALL 
analysis__record_request_2_7_p_0(
#line 710 "analysis.m"
  MR_Word analysis__TypeClassInfo_for_call_pattern_58,
#line 710 "analysis.m"
  MR_Word analysis__CallerModule_8,
#line 710 "analysis.m"
  MR_String analysis__AnalysisName_9,
#line 710 "analysis.m"
  MR_Word analysis__ModuleName_10,
#line 710 "analysis.m"
  MR_Word analysis__FuncId_11,
#line 710 "analysis.m"
  MR_Box analysis__CallPattern_12,
#line 710 "analysis.m"
  MR_Word analysis__STATE_VARIABLE_Info_0_22,
#line 710 "analysis.m"
  MR_Word * analysis__STATE_VARIABLE_Info_23)
#line 710 "analysis.m"
{
#line 715 "analysis.m"
  {
#line 715 "analysis.m"
    MR_bool analysis__succeeded;
#line 715 "analysis.m"
    MR_Word analysis__ModuleResults1_15;
#line 715 "analysis.m"
    MR_Word analysis__AnalysisResults1_17;
#line 715 "analysis.m"
    MR_Word analysis__FuncResults1_19;
#line 715 "analysis.m"
    MR_Word analysis__Request_20;
#line 715 "analysis.m"
    MR_Word analysis__FuncResults_21;
#line 715 "analysis.m"
    MR_Word analysis__V_26_26;
#line 715 "analysis.m"
    MR_Word analysis__V_27_27;
#line 715 "analysis.m"
    MR_Word analysis__V_28_28;
#line 715 "analysis.m"
    MR_Word analysis__V_29_29;
#line 718 "analysis.m"
    MR_Word analysis__ModuleResults0_14;
#line 716 "analysis.m"
    MR_Word analysis__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 5)));
#line 716 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_compiler_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 0)));
#line 716 "analysis.m"
    MR_Box analysis__V_30_30 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 1));
#line 716 "analysis.m"
    MR_Word analysis__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 2)));
#line 716 "analysis.m"
    MR_Word analysis__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 3)));
#line 716 "analysis.m"
    MR_Word analysis__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 4)));
#line 716 "analysis.m"
    MR_Word analysis__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 6)));
#line 716 "analysis.m"
    MR_Word analysis__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 7)));
#line 716 "analysis.m"
    MR_Word analysis__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 8)));
#line 716 "analysis.m"
    MR_Word analysis__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 9)));
#line 716 "analysis.m"
    MR_Word analysis__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 10)));
#line 716 "analysis.m"
    MR_Box analysis__conv0_ModuleResults0_14;
#line 723 "analysis.m"
    MR_Word analysis__AnalysisResults0_16;
#line 721 "analysis.m"
    MR_Box analysis__conv1_AnalysisResults0_16;
#line 728 "analysis.m"
    MR_Word analysis__FuncResults0_18;
#line 726 "analysis.m"
    MR_Box analysis__conv2_FuncResults0_18;
#line 734 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_compiler_72;
#line 734 "analysis.m"
    MR_Box analysis__V_39_39;
#line 734 "analysis.m"
    MR_Word analysis__V_40_40;
#line 734 "analysis.m"
    MR_Word analysis__V_41_41;
#line 734 "analysis.m"
    MR_Word analysis__V_42_42;
#line 734 "analysis.m"
    MR_Word analysis__V_43_43;
#line 734 "analysis.m"
    MR_Word analysis__V_44_44;
#line 734 "analysis.m"
    MR_Word analysis__V_45_45;
#line 734 "analysis.m"
    MR_Word analysis__V_46_46;
#line 734 "analysis.m"
    MR_Word analysis__V_47_47;
#line 733 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_compiler_77;
#line 733 "analysis.m"
    MR_Box analysis__V_48_48;
#line 733 "analysis.m"
    MR_Word analysis__V_49_49;
#line 733 "analysis.m"
    MR_Word analysis__V_50_50;
#line 733 "analysis.m"
    MR_Word analysis__V_51_51;
#line 733 "analysis.m"
    MR_Word analysis__V_53_53;
#line 733 "analysis.m"
    MR_Word analysis__V_54_54;
#line 733 "analysis.m"
    MR_Word analysis__V_55_55;
#line 733 "analysis.m"
    MR_Word analysis__V_56_56;
#line 733 "analysis.m"
    MR_Word analysis__V_57_57;
#line 733 "analysis.m"
    MR_Word analysis__V_52_52;

#line 716 "analysis.m"
    {
#line 716 "analysis.m"
      analysis__succeeded = mercury__map__search_2_f_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &analysis_scalar_common_2[1], analysis__V_24_24, ((MR_Box) (analysis__ModuleName_10)), &analysis__conv0_ModuleResults0_14);
    }
#line 716 "analysis.m"
    if (analysis__succeeded)
#line 716 "analysis.m"
      {
#line 716 "analysis.m"
        analysis__ModuleResults0_14 = ((MR_Word) analysis__conv0_ModuleResults0_14);
#line 716 "analysis.m"
        analysis__succeeded = MR_TRUE;
#line 716 "analysis.m"
      }
#line 718 "analysis.m"
    if (analysis__succeeded)
#line 717 "analysis.m"
      analysis__ModuleResults1_15 = analysis__ModuleResults0_14;
#line 718 "analysis.m"
    else
#line 719 "analysis.m"
      {
#line 719 "analysis.m"
        {
#line 719 "analysis.m"
          analysis__ModuleResults1_15 = mercury__map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &analysis_scalar_common_2[0]);
        }
#line 719 "analysis.m"
      }
#line 721 "analysis.m"
    {
#line 721 "analysis.m"
      analysis__succeeded = mercury__map__search_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &analysis_scalar_common_2[0], analysis__ModuleResults1_15, ((MR_Box) (analysis__AnalysisName_9)), &analysis__conv1_AnalysisResults0_16);
    }
#line 721 "analysis.m"
    if (analysis__succeeded)
#line 721 "analysis.m"
      {
#line 721 "analysis.m"
        analysis__AnalysisResults0_16 = ((MR_Word) analysis__conv1_AnalysisResults0_16);
#line 721 "analysis.m"
        analysis__succeeded = MR_TRUE;
#line 721 "analysis.m"
      }
#line 723 "analysis.m"
    if (analysis__succeeded)
#line 722 "analysis.m"
      analysis__AnalysisResults1_17 = analysis__AnalysisResults0_16;
#line 723 "analysis.m"
    else
#line 724 "analysis.m"
      {
#line 724 "analysis.m"
        {
#line 724 "analysis.m"
          analysis__AnalysisResults1_17 = mercury__map__init_0_f_0((MR_Word) &analysis__analysis__type_ctor_info_func_id_0, (MR_Word) &analysis_scalar_common_1[0]);
        }
#line 724 "analysis.m"
      }
#line 726 "analysis.m"
    {
#line 726 "analysis.m"
      analysis__succeeded = mercury__map__search_2_f_0((MR_Word) &analysis__analysis__type_ctor_info_func_id_0, (MR_Word) &analysis_scalar_common_1[0], analysis__AnalysisResults1_17, ((MR_Box) (analysis__FuncId_11)), &analysis__conv2_FuncResults0_18);
    }
#line 726 "analysis.m"
    if (analysis__succeeded)
#line 726 "analysis.m"
      {
#line 726 "analysis.m"
        analysis__FuncResults0_18 = ((MR_Word) analysis__conv2_FuncResults0_18);
#line 726 "analysis.m"
        analysis__succeeded = MR_TRUE;
#line 726 "analysis.m"
      }
#line 728 "analysis.m"
    if (analysis__succeeded)
#line 727 "analysis.m"
      analysis__FuncResults1_19 = analysis__FuncResults0_18;
#line 728 "analysis.m"
    else
#line 729 "analysis.m"
      analysis__FuncResults1_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 731 "analysis.m"
    {
#line 731 "analysis.m"
      analysis__Request_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 731 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__Request_20, 0) = ((MR_Box) (analysis__TypeClassInfo_for_call_pattern_58));
#line 731 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__Request_20, 1) = analysis__CallPattern_12;
#line 731 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__Request_20, 2) = ((MR_Box) (analysis__CallerModule_8));
#line 731 "analysis.m"
    }
#line 732 "analysis.m"
    {
#line 732 "analysis.m"
      analysis__FuncResults_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 732 "analysis.m"
      MR_hl_field(MR_mktag(1), analysis__FuncResults_21, 0) = ((MR_Box) (analysis__Request_20));
#line 732 "analysis.m"
      MR_hl_field(MR_mktag(1), analysis__FuncResults_21, 1) = ((MR_Box) (analysis__FuncResults1_19));
#line 732 "analysis.m"
    }
#line 734 "analysis.m"
    analysis__TypeClassInfo_for_compiler_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 0)));
#line 734 "analysis.m"
    analysis__V_39_39 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 1));
#line 734 "analysis.m"
    analysis__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 2)));
#line 734 "analysis.m"
    analysis__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 3)));
#line 734 "analysis.m"
    analysis__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 4)));
#line 734 "analysis.m"
    analysis__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 5)));
#line 734 "analysis.m"
    analysis__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 6)));
#line 734 "analysis.m"
    analysis__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 7)));
#line 734 "analysis.m"
    analysis__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 8)));
#line 734 "analysis.m"
    analysis__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 9)));
#line 734 "analysis.m"
    analysis__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 10)));
#line 736 "analysis.m"
    {
#line 736 "analysis.m"
      analysis__V_29_29 = mercury__map__set_3_f_0((MR_Word) &analysis__analysis__type_ctor_info_func_id_0, (MR_Word) &analysis_scalar_common_1[0], analysis__AnalysisResults1_17, ((MR_Box) (analysis__FuncId_11)), ((MR_Box) (analysis__FuncResults_21)));
    }
#line 735 "analysis.m"
    {
#line 735 "analysis.m"
      analysis__V_28_28 = mercury__map__set_3_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &analysis_scalar_common_2[0], analysis__ModuleResults1_15, ((MR_Box) (analysis__AnalysisName_9)), ((MR_Box) (analysis__V_29_29)));
    }
#line 734 "analysis.m"
    {
#line 734 "analysis.m"
      analysis__V_26_26 = mercury__map__set_3_f_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &analysis_scalar_common_2[1], analysis__V_27_27, ((MR_Box) (analysis__ModuleName_10)), ((MR_Box) (analysis__V_28_28)));
    }
#line 733 "analysis.m"
    analysis__TypeClassInfo_for_compiler_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 0)));
#line 733 "analysis.m"
    analysis__V_48_48 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 1));
#line 733 "analysis.m"
    analysis__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 2)));
#line 733 "analysis.m"
    analysis__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 3)));
#line 733 "analysis.m"
    analysis__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 4)));
#line 733 "analysis.m"
    analysis__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 5)));
#line 733 "analysis.m"
    analysis__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 6)));
#line 733 "analysis.m"
    analysis__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 7)));
#line 733 "analysis.m"
    analysis__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 8)));
#line 733 "analysis.m"
    analysis__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 9)));
#line 733 "analysis.m"
    analysis__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 10)));
#line 733 "analysis.m"
    {
#line 733 "analysis.m"
      MR_Word base;
#line 733 "analysis.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 733 "analysis.m"
      *analysis__STATE_VARIABLE_Info_23 = base;
#line 733 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (analysis__TypeClassInfo_for_compiler_77));
#line 733 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 1) = analysis__V_48_48;
#line 733 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (analysis__V_49_49));
#line 733 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (analysis__V_50_50));
#line 733 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (analysis__V_51_51));
#line 733 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (analysis__V_26_26));
#line 733 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (analysis__V_53_53));
#line 733 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (analysis__V_54_54));
#line 733 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (analysis__V_55_55));
#line 733 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (analysis__V_56_56));
#line 733 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (analysis__V_57_57));
#line 733 "analysis.m"
    }
#line 715 "analysis.m"
  }
#line 710 "analysis.m"
}

#line 642 "analysis.m"
void MR_CALL 
analysis__record_result_in_analysis_map_6_p_0(
#line 642 "analysis.m"
  MR_Word analysis__TypeClassInfo_for_analysis_21,
#line 642 "analysis.m"
  MR_Word analysis__FuncId_7,
#line 642 "analysis.m"
  MR_Box analysis__CallPattern_8,
#line 642 "analysis.m"
  MR_Box analysis__AnswerPattern_9,
#line 642 "analysis.m"
  MR_Word analysis__Status_10,
#line 642 "analysis.m"
  MR_Word analysis__ModuleResults0_11,
#line 642 "analysis.m"
  MR_Word * analysis__ModuleResults_12)
#line 642 "analysis.m"
{
#line 649 "analysis.m"
  {
#line 649 "analysis.m"
    MR_bool analysis__succeeded;
#line 649 "analysis.m"
    MR_String analysis__AnalysisName_13;
#line 649 "analysis.m"
    MR_Word analysis__AnalysisResults1_15;
#line 649 "analysis.m"
    MR_Word analysis__FuncResults1_17;
#line 649 "analysis.m"
    MR_Word analysis__Result_18;
#line 649 "analysis.m"
    MR_Word analysis__FuncResults_19;
#line 649 "analysis.m"
    MR_Word analysis__V_20_20;
#line 14237 "analysis.c"
    MR_Box analysis__V_32_32;
#line 14239 "analysis.c"
    MR_Box analysis__V_33_33;
#line 14241 "analysis.c"
    MR_Box MR_CALL (* analysis__func_0)(MR_Box) = ((MR_Box MR_CALL (*)(MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), analysis__TypeClassInfo_for_analysis_21, (MR_Integer) 0)), (MR_Integer) 5)));
#line 14243 "analysis.c"
    MR_Box analysis__conv1_AnalysisName_13;
#line 653 "analysis.m"
    MR_Word analysis__AnalysisResults0_14;
#line 651 "analysis.m"
    MR_Box analysis__conv2_AnalysisResults0_14;
#line 658 "analysis.m"
    MR_Word analysis__FuncResults0_16;
#line 656 "analysis.m"
    MR_Box analysis__conv3_FuncResults0_16;

#line 14254 "analysis.c"
    {
#line 14256 "analysis.c"
      analysis__conv1_AnalysisName_13 = analysis__func_0(((MR_Box) analysis__TypeClassInfo_for_analysis_21));
    }
#line 14259 "analysis.c"
    analysis__AnalysisName_13 = ((MR_String) analysis__conv1_AnalysisName_13);
#line 651 "analysis.m"
    {
#line 651 "analysis.m"
      analysis__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &analysis_scalar_common_2[2], analysis__ModuleResults0_11, ((MR_Box) (analysis__AnalysisName_13)), &analysis__conv2_AnalysisResults0_14);
    }
#line 651 "analysis.m"
    if (analysis__succeeded)
#line 651 "analysis.m"
      {
#line 651 "analysis.m"
        analysis__AnalysisResults0_14 = ((MR_Word) analysis__conv2_AnalysisResults0_14);
#line 651 "analysis.m"
        analysis__succeeded = MR_TRUE;
#line 651 "analysis.m"
      }
#line 653 "analysis.m"
    if (analysis__succeeded)
#line 652 "analysis.m"
      analysis__AnalysisResults1_15 = analysis__AnalysisResults0_14;
#line 653 "analysis.m"
    else
#line 654 "analysis.m"
      {
#line 654 "analysis.m"
        {
#line 654 "analysis.m"
          analysis__AnalysisResults1_15 = mercury__map__init_0_f_0((MR_Word) &analysis__analysis__type_ctor_info_func_id_0, (MR_Word) &analysis_scalar_common_1[1]);
        }
#line 654 "analysis.m"
      }
#line 656 "analysis.m"
    {
#line 656 "analysis.m"
      analysis__succeeded = mercury__map__search_3_p_0((MR_Word) &analysis__analysis__type_ctor_info_func_id_0, (MR_Word) &analysis_scalar_common_1[1], analysis__AnalysisResults1_15, ((MR_Box) (analysis__FuncId_7)), &analysis__conv3_FuncResults0_16);
    }
#line 656 "analysis.m"
    if (analysis__succeeded)
#line 656 "analysis.m"
      {
#line 656 "analysis.m"
        analysis__FuncResults0_16 = ((MR_Word) analysis__conv3_FuncResults0_16);
#line 656 "analysis.m"
        analysis__succeeded = MR_TRUE;
#line 656 "analysis.m"
      }
#line 658 "analysis.m"
    if (analysis__succeeded)
#line 657 "analysis.m"
      analysis__FuncResults1_17 = analysis__FuncResults0_16;
#line 658 "analysis.m"
    else
#line 659 "analysis.m"
      analysis__FuncResults1_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 661 "analysis.m"
    {
#line 661 "analysis.m"
      analysis__Result_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 661 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__Result_18, 0) = ((MR_Box) (analysis__TypeClassInfo_for_analysis_21));
#line 661 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__Result_18, 1) = analysis__CallPattern_8;
#line 661 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__Result_18, 2) = analysis__AnswerPattern_9;
#line 661 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__Result_18, 3) = ((MR_Box) (analysis__Status_10));
#line 661 "analysis.m"
    }
#line 662 "analysis.m"
    {
#line 662 "analysis.m"
      analysis__FuncResults_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 662 "analysis.m"
      MR_hl_field(MR_mktag(1), analysis__FuncResults_19, 0) = ((MR_Box) (analysis__Result_18));
#line 662 "analysis.m"
      MR_hl_field(MR_mktag(1), analysis__FuncResults_19, 1) = ((MR_Box) (analysis__FuncResults1_17));
#line 662 "analysis.m"
    }
#line 665 "analysis.m"
    {
#line 665 "analysis.m"
      analysis__V_20_20 = mercury__map__set_3_f_0((MR_Word) &analysis__analysis__type_ctor_info_func_id_0, (MR_Word) &analysis_scalar_common_1[1], analysis__AnalysisResults1_15, ((MR_Box) (analysis__FuncId_7)), ((MR_Box) (analysis__FuncResults_19)));
    }
#line 664 "analysis.m"
    {
#line 664 "analysis.m"
      *analysis__ModuleResults_12 = mercury__map__set_3_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &analysis_scalar_common_2[2], analysis__ModuleResults0_11, ((MR_Box) (analysis__AnalysisName_13)), ((MR_Box) (analysis__V_20_20)));
    }
#line 649 "analysis.m"
  }
#line 642 "analysis.m"
}

#line 605 "analysis.m"
static MR_bool MR_CALL 
analysis__lookup_exactly_matching_result_even_from_invalid_modules_6_p_0_1(
#line 605 "analysis.m"
  MR_Box analysis__closure_arg,
#line 605 "analysis.m"
  MR_Box analysis__wrapper_arg_1)
#line 605 "analysis.m"
{
#line 605 "analysis.m"
  {
#line 605 "analysis.m"
    MR_bool analysis__succeeded;
#line 605 "analysis.m"
    MR_Box analysis__closure = analysis__closure_arg;

#line 605 "analysis.m"
    {
#line 605 "analysis.m"
      return analysis__succeeded = analysis__IntroducedFrom__pred__lookup_exactly_matching_result_even_from_invalid_modules__605__1_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 3))), (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 4)), (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 5)), ((MR_Word) analysis__wrapper_arg_1));
    }
#line 605 "analysis.m"
    return analysis__succeeded;
#line 605 "analysis.m"
  }
#line 605 "analysis.m"
}

#line 595 "analysis.m"
void MR_CALL 
analysis__lookup_exactly_matching_result_even_from_invalid_modules_6_p_0(
#line 595 "analysis.m"
  MR_Word analysis__TypeClassInfo_for_analysis_32,
#line 595 "analysis.m"
  MR_Word analysis__Info_7,
#line 595 "analysis.m"
  MR_Word analysis__ModuleName_8,
#line 595 "analysis.m"
  MR_Word analysis__FuncId_9,
#line 595 "analysis.m"
  MR_Box analysis__FuncInfo_10,
#line 595 "analysis.m"
  MR_Box analysis__Call_11,
#line 595 "analysis.m"
  MR_Word * analysis__MaybeResult_12)
#line 595 "analysis.m"
{
#line 601 "analysis.m"
  {
#line 601 "analysis.m"
    MR_bool analysis__succeeded;
#line 601 "analysis.m"
    MR_Word analysis__TypeInfo_34_34;
#line 601 "analysis.m"
    MR_Word analysis__TypeInfo_36_36;
#line 601 "analysis.m"
    MR_Word analysis__TypeInfo_38_38;
#line 601 "analysis.m"
    MR_Word analysis__AllResultsList_14;
#line 601 "analysis.m"
    MR_Word analysis__ResultList_15;
#line 601 "analysis.m"
    MR_Word analysis__V_21_21;

#line 603 "analysis.m"
    {
#line 603 "analysis.m"
      analysis__lookup_results_1_5_p_0(analysis__TypeClassInfo_for_analysis_32, analysis__Info_7, analysis__ModuleName_8, analysis__FuncId_9, (MR_Integer) 1, &analysis__AllResultsList_14);
    }
#line 14422 "analysis.c"
    {
#line 14424 "analysis.c"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_32, (MR_Integer) 4, &analysis__TypeInfo_34_34);
    }
#line 14427 "analysis.c"
    {
#line 14429 "analysis.c"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_32, (MR_Integer) 5, &analysis__TypeInfo_36_36);
    }
#line 14432 "analysis.c"
    {
#line 14434 "analysis.c"
      analysis__TypeInfo_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 14436 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_38_38, 0) = ((MR_Box) (&analysis__analysis__type_ctor_info_analysis_result_2));
#line 14438 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_38_38, 1) = ((MR_Box) (analysis__TypeInfo_34_34));
#line 14440 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_38_38, 2) = ((MR_Box) (analysis__TypeInfo_36_36));
#line 14442 "analysis.c"
    }
#line 605 "analysis.m"
    {
#line 605 "analysis.m"
      analysis__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 605 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_21_21, 0) = ((MR_Box) (&analysis_scalar_common_6[0]));
#line 605 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_21_21, 1) = ((MR_Box) (analysis__lookup_exactly_matching_result_even_from_invalid_modules_6_p_0_1));
#line 605 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_21_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 605 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_21_21, 3) = ((MR_Box) (analysis__TypeClassInfo_for_analysis_32));
#line 605 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_21_21, 4) = analysis__FuncInfo_10;
#line 605 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_21_21, 5) = analysis__Call_11;
#line 605 "analysis.m"
    }
#line 605 "analysis.m"
    {
#line 605 "analysis.m"
      analysis__ResultList_15 = mercury__list__filter_2_f_0(analysis__TypeInfo_38_38, analysis__V_21_21, analysis__AllResultsList_14);
    }
#line 612 "analysis.m"
    if ((analysis__ResultList_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 610 "analysis.m"
      *analysis__MaybeResult_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 612 "analysis.m"
    else
#line 612 "analysis.m"
      {
#line 612 "analysis.m"
        MR_Word analysis__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), analysis__ResultList_15, (MR_Integer) 1)));
#line 612 "analysis.m"
        MR_Word analysis__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), analysis__ResultList_15, (MR_Integer) 0)));

#line 612 "analysis.m"
        if ((analysis__V_42_42 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 614 "analysis.m"
          {
#line 614 "analysis.m"
            MR_Word base;
#line 614 "analysis.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 614 "analysis.m"
            *analysis__MaybeResult_12 = base;
#line 614 "analysis.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (analysis__V_43_43));
#line 614 "analysis.m"
          }
#line 612 "analysis.m"
        else
#line 616 "analysis.m"
          {
#line 617 "analysis.m"
            {
#line 617 "analysis.m"
              mercury__require__unexpected_3_p_0((MR_String) "analysis", (MR_String) "predicate \140analysis.lookup_exactly_matching_result_even_from_invalid_modules\'/6", (MR_String) "zero or one exactly matching results expected");
#line 617 "analysis.m"
              return;
            }
#line 616 "analysis.m"
          }
#line 612 "analysis.m"
      }
#line 601 "analysis.m"
  }
#line 595 "analysis.m"
}

#line 581 "analysis.m"
void MR_CALL 
analysis__more_precise_answer_4_p_0(
#line 581 "analysis.m"
  MR_Word analysis__TypeClassInfo_for_analysis_15,
#line 581 "analysis.m"
  MR_Box analysis__FuncInfo_5,
#line 581 "analysis.m"
  MR_Word analysis__Result_6,
#line 581 "analysis.m"
  MR_Word analysis__Best0_7,
#line 581 "analysis.m"
  MR_Word * analysis__Best_8)
#line 581 "analysis.m"
{
#line 586 "analysis.m"
  {
#line 586 "analysis.m"
    MR_bool analysis__succeeded;
#line 586 "analysis.m"
    MR_Box analysis__ResultAnswer_9 = (MR_hl_field(MR_mktag(0), analysis__Result_6, (MR_Integer) 1));
#line 586 "analysis.m"
    MR_Box analysis__BestAnswer0_10 = (MR_hl_field(MR_mktag(0), analysis__Best0_7, (MR_Integer) 1));
#line 587 "analysis.m"
    MR_Box analysis__V_11_11 = (MR_hl_field(MR_mktag(0), analysis__Result_6, (MR_Integer) 0));
#line 587 "analysis.m"
    MR_Word analysis__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Result_6, (MR_Integer) 2)));
#line 588 "analysis.m"
    MR_Box analysis__V_13_13 = (MR_hl_field(MR_mktag(0), analysis__Best0_7, (MR_Integer) 0));
#line 588 "analysis.m"
    MR_Word analysis__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Best0_7, (MR_Integer) 2)));
#line 589 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_answer_pattern_16;
#line 589 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_partial_order_18;
#line 14549 "analysis.c"
    MR_bool MR_CALL (* analysis__func_0)(MR_Box, MR_Box, MR_Box, MR_Box);

#line 14552 "analysis.c"
    {
#line 14554 "analysis.c"
      mercury__private_builtin__superclass_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_15, (MR_Integer) 2, &analysis__TypeClassInfo_for_answer_pattern_16);
    }
#line 14557 "analysis.c"
    {
#line 14559 "analysis.c"
      mercury__private_builtin__superclass_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_answer_pattern_16, (MR_Integer) 1, &analysis__TypeClassInfo_for_partial_order_18);
    }
#line 14562 "analysis.c"
    analysis__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), analysis__TypeClassInfo_for_partial_order_18, (MR_Integer) 0)), (MR_Integer) 5)));
#line 14564 "analysis.c"
    {
#line 14566 "analysis.c"
      analysis__succeeded = analysis__func_0(((MR_Box) analysis__TypeClassInfo_for_partial_order_18), analysis__FuncInfo_5, analysis__ResultAnswer_9, analysis__BestAnswer0_10);
    }
#line 591 "analysis.m"
    if (analysis__succeeded)
#line 590 "analysis.m"
      *analysis__Best_8 = analysis__Result_6;
#line 591 "analysis.m"
    else
#line 592 "analysis.m"
      *analysis__Best_8 = analysis__Best0_7;
#line 586 "analysis.m"
  }
#line 581 "analysis.m"
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
    MR_Word analysis__conv5_HeadVar__3_25;

#line 538 "analysis.m"
    {
#line 538 "analysis.m"
      analysis__conv5_HeadVar__3_25 = analysis__IntroducedFrom__func__lookup_results_2__538__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 3))), ((MR_Word) analysis__wrapper_arg_1));
    }
#line 538 "analysis.m"
    analysis__wrapper_arg_2 = ((MR_Box) (analysis__conv5_HeadVar__3_25));
#line 538 "analysis.m"
    return analysis__wrapper_arg_2;
#line 538 "analysis.m"
  }
#line 538 "analysis.m"
}

#line 526 "analysis.m"
void MR_CALL 
analysis__lookup_results_2_4_p_0(
#line 526 "analysis.m"
  MR_Word analysis__TypeClassInfo_for_analysis_29,
#line 526 "analysis.m"
  MR_Word analysis__Map_5,
#line 526 "analysis.m"
  MR_Word analysis__ModuleName_6,
#line 526 "analysis.m"
  MR_Word analysis__FuncId_7,
#line 526 "analysis.m"
  MR_Word * analysis__ResultList_8)
#line 526 "analysis.m"
{
#line 530 "analysis.m"
  {
#line 530 "analysis.m"
    MR_bool analysis__succeeded;
#line 530 "analysis.m"
    MR_String analysis__AnalysisName_9;
#line 14635 "analysis.c"
    MR_Box analysis__V_20_20;
#line 14637 "analysis.c"
    MR_Box analysis__V_21_21;
#line 14639 "analysis.c"
    MR_Box MR_CALL (* analysis__func_0)(MR_Box) = ((MR_Box MR_CALL (*)(MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), analysis__TypeClassInfo_for_analysis_29, (MR_Integer) 0)), (MR_Integer) 5)));
#line 14641 "analysis.c"
    MR_Box analysis__conv1_AnalysisName_9;
#line 544 "analysis.m"
    MR_Word analysis__Results_15;
#line 533 "analysis.m"
    MR_Word analysis__TypeCtorInfo_32_32;
#line 533 "analysis.m"
    MR_Word analysis__TypeInfo_33_33;
#line 533 "analysis.m"
    MR_Word analysis__TypeCtorInfo_34_34;
#line 533 "analysis.m"
    MR_Word analysis__TypeInfo_35_35;
#line 533 "analysis.m"
    MR_Word analysis__ModuleResults_14;
#line 533 "analysis.m"
    MR_Word analysis__V_22_22;
#line 533 "analysis.m"
    MR_Box analysis__conv2_ModuleResults_14;
#line 534 "analysis.m"
    MR_Box analysis__conv3_V_22_22;
#line 534 "analysis.m"
    MR_Box analysis__conv4_Results_15;

#line 14664 "analysis.c"
    {
#line 14666 "analysis.c"
      analysis__conv1_AnalysisName_9 = analysis__func_0(((MR_Box) analysis__TypeClassInfo_for_analysis_29));
    }
#line 14669 "analysis.c"
    analysis__AnalysisName_9 = ((MR_String) analysis__conv1_AnalysisName_9);
#line 533 "analysis.m"
    {
#line 533 "analysis.m"
      analysis__succeeded = mercury__map__elem_2_f_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &analysis_scalar_common_2[3], ((MR_Box) (analysis__ModuleName_6)), analysis__Map_5, &analysis__conv2_ModuleResults_14);
    }
#line 533 "analysis.m"
    if (analysis__succeeded)
#line 533 "analysis.m"
      {
#line 533 "analysis.m"
        analysis__ModuleResults_14 = ((MR_Word) analysis__conv2_ModuleResults_14);
#line 533 "analysis.m"
        analysis__succeeded = MR_TRUE;
#line 533 "analysis.m"
      }
#line 533 "analysis.m"
    if (analysis__succeeded)
#line 533 "analysis.m"
      {
#line 14690 "analysis.c"
        analysis__TypeCtorInfo_32_32 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 14692 "analysis.c"
        analysis__TypeInfo_33_33 = (MR_Word) &analysis_scalar_common_2[2];
#line 534 "analysis.m"
        {
#line 534 "analysis.m"
          analysis__succeeded = mercury__map__elem_2_f_0(analysis__TypeCtorInfo_32_32, analysis__TypeInfo_33_33, ((MR_Box) (analysis__AnalysisName_9)), analysis__ModuleResults_14, &analysis__conv3_V_22_22);
        }
#line 534 "analysis.m"
        if (analysis__succeeded)
#line 534 "analysis.m"
          {
#line 534 "analysis.m"
            analysis__V_22_22 = ((MR_Word) analysis__conv3_V_22_22);
#line 534 "analysis.m"
            analysis__succeeded = MR_TRUE;
#line 534 "analysis.m"
          }
#line 533 "analysis.m"
        if (analysis__succeeded)
#line 533 "analysis.m"
          {
#line 14713 "analysis.c"
            analysis__TypeCtorInfo_34_34 = (MR_Word) &analysis__analysis__type_ctor_info_func_id_0;
#line 14715 "analysis.c"
            analysis__TypeInfo_35_35 = (MR_Word) &analysis_scalar_common_1[1];
#line 534 "analysis.m"
            {
#line 534 "analysis.m"
              analysis__succeeded = mercury__map__elem_2_f_0(analysis__TypeCtorInfo_34_34, analysis__TypeInfo_35_35, ((MR_Box) (analysis__FuncId_7)), analysis__V_22_22, &analysis__conv4_Results_15);
            }
#line 534 "analysis.m"
            if (analysis__succeeded)
#line 534 "analysis.m"
              {
#line 534 "analysis.m"
                analysis__Results_15 = ((MR_Word) analysis__conv4_Results_15);
#line 534 "analysis.m"
                analysis__succeeded = MR_TRUE;
#line 534 "analysis.m"
              }
#line 533 "analysis.m"
          }
#line 533 "analysis.m"
      }
#line 544 "analysis.m"
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

#line 14751 "analysis.c"
        {
#line 14753 "analysis.c"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_29, (MR_Integer) 4, &analysis__TypeInfo_38_38);
        }
#line 14756 "analysis.c"
        {
#line 14758 "analysis.c"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_29, (MR_Integer) 5, &analysis__TypeInfo_40_40);
        }
#line 14761 "analysis.c"
        {
#line 14763 "analysis.c"
          analysis__TypeInfo_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 14765 "analysis.c"
          MR_hl_field(MR_mktag(0), analysis__TypeInfo_42_42, 0) = ((MR_Box) (&analysis__analysis__type_ctor_info_analysis_result_2));
#line 14767 "analysis.c"
          MR_hl_field(MR_mktag(0), analysis__TypeInfo_42_42, 1) = ((MR_Box) (analysis__TypeInfo_38_38));
#line 14769 "analysis.c"
          MR_hl_field(MR_mktag(0), analysis__TypeInfo_42_42, 2) = ((MR_Box) (analysis__TypeInfo_40_40));
#line 14771 "analysis.c"
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
          analysis__conv6_ResultList_8 = mercury__list__map_2_f_0((MR_Word) &analysis__analysis__type_ctor_info_some_analysis_result_0, analysis__TypeInfo_42_42, (MR_Word) analysis__V_23_23, analysis__Results_15);
        }
#line 538 "analysis.m"
        *analysis__ResultList_8 = (MR_Word) analysis__conv6_ResultList_8;
#line 538 "analysis.m"
      }
#line 544 "analysis.m"
    else
#line 545 "analysis.m"
      *analysis__ResultList_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 530 "analysis.m"
  }
#line 526 "analysis.m"
}

#line 495 "analysis.m"
void MR_CALL 
analysis__lookup_results_1_5_p_0(
#line 495 "analysis.m"
  MR_Word analysis__TypeClassInfo_for_analysis_62,
#line 495 "analysis.m"
  MR_Word analysis__Info_6,
#line 495 "analysis.m"
  MR_Word analysis__ModuleName_7,
#line 495 "analysis.m"
  MR_Word analysis__FuncId_8,
#line 495 "analysis.m"
  MR_Word analysis__AllowInvalidModules_9,
#line 495 "analysis.m"
  MR_Word * analysis__ResultList_10)
#line 495 "analysis.m"
{
#line 499 "analysis.m"
  {
#line 499 "analysis.m"
    MR_bool analysis__succeeded;
#line 500 "analysis.m"
    MR_Word analysis__Debug_81;
#line 510 "analysis.m"
    MR_Word analysis__TypeCtorInfo_66_66;
#line 510 "analysis.m"
    MR_Word analysis__TypeCtorInfo_67_67;
#line 510 "analysis.m"
    MR_Word analysis__V_26_26;
#line 510 "analysis.m"
    MR_Word analysis__V_27_27;
#line 511 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_compiler_65;
#line 511 "analysis.m"
    MR_Box analysis__V_44_44;
#line 511 "analysis.m"
    MR_Word analysis__V_45_45;
#line 511 "analysis.m"
    MR_Word analysis__V_46_46;
#line 511 "analysis.m"
    MR_Word analysis__V_47_47;
#line 511 "analysis.m"
    MR_Word analysis__V_48_48;
#line 511 "analysis.m"
    MR_Word analysis__V_49_49;
#line 511 "analysis.m"
    MR_Word analysis__V_50_50;
#line 511 "analysis.m"
    MR_Word analysis__V_51_51;
#line 511 "analysis.m"
    MR_Word analysis__V_52_52;
#line 511 "analysis.m"
    MR_Box analysis__conv0_V_26_26;

#line 1382 "analysis.m"
{
#define MR_PROC_LABEL analysis__lookup_results_1_5_p_0


		{
#line 1382 "analysis.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&analysis__mutable_variable_debug_analysis_lock,
                    "analysis__mutable_variable_debug_analysis_lock");
#endif

#line 14871 "analysis.c"

		;}
#undef MR_PROC_LABEL
#line 1382 "analysis.m"
}
#line 1382 "analysis.m"
{
#define MR_PROC_LABEL analysis__lookup_results_1_5_p_0

	MR_Word X;

		{
#line 1382 "analysis.m"
X = analysis__mutable_variable_debug_analysis;

#line 14887 "analysis.c"

		;}
#undef MR_PROC_LABEL
	 analysis__Debug_81  = X;
#line 1382 "analysis.m"
}
#line 1382 "analysis.m"
{
#define MR_PROC_LABEL analysis__lookup_results_1_5_p_0


		{
#line 1382 "analysis.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&analysis__mutable_variable_debug_analysis_lock,
                    "analysis__mutable_variable_debug_analysis_lock");
#endif

#line 14906 "analysis.c"

		;}
#undef MR_PROC_LABEL
#line 1382 "analysis.m"
}
#line 1395 "analysis.m"
#line 1395 "analysis.m"
    switch (analysis__Debug_81) {
#line 1395 "analysis.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1395 "analysis.m"
      case (MR_Integer) 0:
#line 1396 "analysis.m"
        {
#line 1396 "analysis.m"
        }
#line 1395 "analysis.m"
        break;
#line 1395 "analysis.m"
      case (MR_Integer) 1:
#line 1394 "analysis.m"
        {
#line 1394 "analysis.m"
          analysis__IntroducedFrom__pred__lookup_results_1__501__1_4_p_0(analysis__ModuleName_7, analysis__FuncId_8);
        }
#line 1395 "analysis.m"
        break;
#line 1395 "analysis.m"
    }
#line 510 "analysis.m"
    analysis__succeeded = (analysis__AllowInvalidModules_9 == (MR_Integer) 0);
#line 510 "analysis.m"
    if (analysis__succeeded)
#line 510 "analysis.m"
      {
#line 511 "analysis.m"
        analysis__TypeClassInfo_for_compiler_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 0)));
#line 511 "analysis.m"
        analysis__V_44_44 = (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 1));
#line 511 "analysis.m"
        analysis__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 2)));
#line 511 "analysis.m"
        analysis__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 3)));
#line 511 "analysis.m"
        analysis__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 4)));
#line 511 "analysis.m"
        analysis__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 5)));
#line 511 "analysis.m"
        analysis__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 6)));
#line 511 "analysis.m"
        analysis__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 7)));
#line 511 "analysis.m"
        analysis__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 8)));
#line 511 "analysis.m"
        analysis__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 9)));
#line 511 "analysis.m"
        analysis__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 10)));
#line 14964 "analysis.c"
        analysis__TypeCtorInfo_66_66 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 14966 "analysis.c"
        analysis__TypeCtorInfo_67_67 = (MR_Word) &analysis__analysis__type_ctor_info_analysis_status_0;
#line 511 "analysis.m"
        {
#line 511 "analysis.m"
          analysis__succeeded = mercury__map__elem_2_f_0(analysis__TypeCtorInfo_66_66, analysis__TypeCtorInfo_67_67, ((MR_Box) (analysis__ModuleName_7)), analysis__V_27_27, &analysis__conv0_V_26_26);
        }
#line 511 "analysis.m"
        if (analysis__succeeded)
#line 511 "analysis.m"
          {
#line 511 "analysis.m"
            analysis__V_26_26 = ((MR_Word) analysis__conv0_V_26_26);
#line 511 "analysis.m"
            analysis__succeeded = MR_TRUE;
#line 511 "analysis.m"
          }
#line 510 "analysis.m"
        if (analysis__succeeded)
#line 511 "analysis.m"
          analysis__succeeded = (analysis__V_26_26 == (MR_Integer) 0);
#line 510 "analysis.m"
      }
#line 514 "analysis.m"
    if (analysis__succeeded)
#line 513 "analysis.m"
      *analysis__ResultList_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 514 "analysis.m"
    else
#line 516 "analysis.m"
      {
#line 516 "analysis.m"
        MR_Word analysis__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 7)));
#line 515 "analysis.m"
        MR_Word analysis__TypeClassInfo_for_compiler_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 0)));
#line 515 "analysis.m"
        MR_Box analysis__V_53_53 = (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 1));
#line 515 "analysis.m"
        MR_Word analysis__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 2)));
#line 515 "analysis.m"
        MR_Word analysis__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 3)));
#line 515 "analysis.m"
        MR_Word analysis__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 4)));
#line 515 "analysis.m"
        MR_Word analysis__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 5)));
#line 515 "analysis.m"
        MR_Word analysis__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 6)));
#line 515 "analysis.m"
        MR_Word analysis__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 8)));
#line 515 "analysis.m"
        MR_Word analysis__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 9)));
#line 515 "analysis.m"
        MR_Word analysis__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 10)));

#line 515 "analysis.m"
        {
#line 515 "analysis.m"
          analysis__lookup_results_2_4_p_0(analysis__TypeClassInfo_for_analysis_62, analysis__V_28_28, analysis__ModuleName_7, analysis__FuncId_8, analysis__ResultList_10);
        }
#line 518 "analysis.m"
        {
#line 518 "analysis.m"
          analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_109_115_103_95_95_104_111_54_95_95_91_51_93_95_48_3_p_0(analysis__TypeClassInfo_for_analysis_62, *analysis__ResultList_10);
#line 518 "analysis.m"
          return;
        }
#line 516 "analysis.m"
      }
#line 499 "analysis.m"
  }
#line 495 "analysis.m"
}

#line 312 "analysis.m"
void MR_CALL 
analysis__enable_debug_messages_3_p_0(
#line 312 "analysis.m"
  MR_Word analysis__Debug_4)
#line 312 "analysis.m"
{
#line 1382 "analysis.m"
  {
#line 1382 "analysis.m"
    MR_bool analysis__succeeded;

#line 1382 "analysis.m"
{
#define MR_PROC_LABEL analysis__enable_debug_messages_3_p_0


		{
#line 1382 "analysis.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&analysis__mutable_variable_debug_analysis_lock,
                    "analysis__mutable_variable_debug_analysis_lock");
#endif

#line 15063 "analysis.c"

		;}
#undef MR_PROC_LABEL
#line 1382 "analysis.m"
}
#line 1382 "analysis.m"
{
#define MR_PROC_LABEL analysis__enable_debug_messages_3_p_0

	MR_Word X;

	X =  analysis__Debug_4 ;
		{
#line 1382 "analysis.m"
analysis__mutable_variable_debug_analysis = X;

#line 15080 "analysis.c"

		;}
#undef MR_PROC_LABEL
#line 1382 "analysis.m"
}
#line 1382 "analysis.m"
{
#define MR_PROC_LABEL analysis__enable_debug_messages_3_p_0


		{
#line 1382 "analysis.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&analysis__mutable_variable_debug_analysis_lock,
                    "analysis__mutable_variable_debug_analysis_lock");
#endif

#line 15098 "analysis.c"

		;}
#undef MR_PROC_LABEL
#line 1382 "analysis.m"
}
#line 1382 "analysis.m"
  }
#line 312 "analysis.m"
}

#line 308 "analysis.m"
void MR_CALL 
analysis__do_read_module_overall_status_6_p_0(
#line 308 "analysis.m"
  MR_Word analysis__TypeClassInfo_for_compiler_15,
#line 308 "analysis.m"
  MR_Box analysis__Compiler_7,
#line 308 "analysis.m"
  MR_Word analysis__Globals_8,
#line 308 "analysis.m"
  MR_Word analysis__ModuleName_9,
#line 308 "analysis.m"
  MR_Word * analysis__ModuleStatus_10)
#line 308 "analysis.m"
{
#line 1337 "analysis.m"
  {
#line 1337 "analysis.m"
    MR_bool analysis__succeeded;

#line 1337 "analysis.m"
    {
#line 1337 "analysis.m"
      analysis__file__read_module_overall_status_6_p_0(analysis__TypeClassInfo_for_compiler_15, analysis__Compiler_7, analysis__Globals_8, analysis__ModuleName_9, analysis__ModuleStatus_10);
#line 1337 "analysis.m"
      return;
    }
#line 1337 "analysis.m"
  }
#line 308 "analysis.m"
}

#line 1282 "analysis.m"
static void MR_CALL 
analysis__write_analysis_files_7_p_0_4(
#line 1282 "analysis.m"
  MR_Box analysis__closure_arg,
#line 1282 "analysis.m"
  MR_Box analysis__wrapper_arg_1,
#line 1282 "analysis.m"
  MR_Box analysis__wrapper_arg_2,
#line 1282 "analysis.m"
  MR_Box * analysis__wrapper_arg_3)
#line 1282 "analysis.m"
{
#line 1282 "analysis.m"
  {
#line 1282 "analysis.m"
    MR_Box analysis__closure = analysis__closure_arg;

#line 1282 "analysis.m"
    {
#line 1282 "analysis.m"
      analysis__maybe_write_module_imdg_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 4))), ((MR_Word) analysis__wrapper_arg_1));
#line 1282 "analysis.m"
      return;
    }
#line 1282 "analysis.m"
  }
#line 1282 "analysis.m"
}

#line 1274 "analysis.m"
static void MR_CALL 
analysis__write_analysis_files_7_p_0_3(
#line 1274 "analysis.m"
  MR_Box analysis__closure_arg,
#line 1274 "analysis.m"
  MR_Box analysis__wrapper_arg_1,
#line 1274 "analysis.m"
  MR_Box analysis__wrapper_arg_2,
#line 1274 "analysis.m"
  MR_Box * analysis__wrapper_arg_3)
#line 1274 "analysis.m"
{
#line 1274 "analysis.m"
  {
#line 1274 "analysis.m"
    MR_Box analysis__closure = analysis__closure_arg;

#line 1274 "analysis.m"
    {
#line 1274 "analysis.m"
      analysis__maybe_write_module_requests_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 4))), ((MR_Word) analysis__wrapper_arg_1));
#line 1274 "analysis.m"
      return;
    }
#line 1274 "analysis.m"
  }
#line 1274 "analysis.m"
}

#line 1265 "analysis.m"
static void MR_CALL 
analysis__write_analysis_files_7_p_0_2(
#line 1265 "analysis.m"
  MR_Box analysis__closure_arg,
#line 1265 "analysis.m"
  MR_Box analysis__wrapper_arg_1,
#line 1265 "analysis.m"
  MR_Box analysis__wrapper_arg_2,
#line 1265 "analysis.m"
  MR_Box * analysis__wrapper_arg_3)
#line 1265 "analysis.m"
{
#line 1265 "analysis.m"
  {
#line 1265 "analysis.m"
    MR_Box analysis__closure = analysis__closure_arg;

#line 1265 "analysis.m"
    {
#line 1265 "analysis.m"
      analysis__maybe_write_module_overall_status_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 4))), ((MR_Word) analysis__wrapper_arg_1));
#line 1265 "analysis.m"
      return;
    }
#line 1265 "analysis.m"
  }
#line 1265 "analysis.m"
}

#line 1247 "analysis.m"
static void MR_CALL 
analysis__write_analysis_files_7_p_0_1(
#line 1247 "analysis.m"
  MR_Box analysis__closure_arg,
#line 1247 "analysis.m"
  MR_Box analysis__wrapper_arg_1,
#line 1247 "analysis.m"
  MR_Box analysis__wrapper_arg_2,
#line 1247 "analysis.m"
  MR_Box * analysis__wrapper_arg_3,
#line 1247 "analysis.m"
  MR_Box analysis__wrapper_arg_4,
#line 1247 "analysis.m"
  MR_Box * analysis__wrapper_arg_5)
#line 1247 "analysis.m"
{
#line 1247 "analysis.m"
  {
#line 1247 "analysis.m"
    MR_Box analysis__closure = analysis__closure_arg;
#line 1247 "analysis.m"
    MR_Word analysis__conv0_STATE_VARIABLE_Info_15;

#line 1247 "analysis.m"
    {
#line 1247 "analysis.m"
      analysis__load_module_imdg_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 3))), ((MR_Word) analysis__wrapper_arg_1), ((MR_Word) analysis__wrapper_arg_2), &analysis__conv0_STATE_VARIABLE_Info_15);
    }
#line 1247 "analysis.m"
    *analysis__wrapper_arg_3 = ((MR_Box) (analysis__conv0_STATE_VARIABLE_Info_15));
#line 1247 "analysis.m"
  }
#line 1247 "analysis.m"
}

#line 296 "analysis.m"
void MR_CALL 
analysis__write_analysis_files_7_p_0(
#line 296 "analysis.m"
  MR_Word analysis__TypeClassInfo_for_compiler_115,
#line 296 "analysis.m"
  MR_Box analysis__Compiler_8,
#line 296 "analysis.m"
  MR_Word analysis__ModuleInfo_9,
#line 296 "analysis.m"
  MR_Word analysis__ImportedModule0_10,
#line 296 "analysis.m"
  MR_Word analysis__STATE_VARIABLE_Info_0_21,
#line 296 "analysis.m"
  MR_Word * analysis__STATE_VARIABLE_Info_22)
#line 296 "analysis.m"
{
#line 1238 "analysis.m"
  {
#line 1238 "analysis.m"
    MR_bool analysis__succeeded;
#line 1238 "analysis.m"
    MR_Word analysis__TypeCtorInfo_117_117 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 1238 "analysis.m"
    MR_Word analysis__TypeCtorInfo_125_125;
#line 1238 "analysis.m"
    MR_Word analysis__ThisModule_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 2)));
#line 1238 "analysis.m"
    MR_Word analysis__ImportedModules_14;
#line 1238 "analysis.m"
    MR_Word analysis__LocalModules_15;
#line 1238 "analysis.m"
    MR_Word analysis__LocalImportedModules_16;
#line 1238 "analysis.m"
    MR_Word analysis__Globals_17;
#line 1238 "analysis.m"
    MR_Word analysis__ModuleStatus_18;
#line 1238 "analysis.m"
    MR_Word analysis__ModuleResults_19;
#line 1238 "analysis.m"
    MR_String analysis__TimestampFileName_20;
#line 1238 "analysis.m"
    MR_Word analysis__V_25_25;
#line 1238 "analysis.m"
    MR_Word analysis__STATE_VARIABLE_Info_26_26;
#line 1238 "analysis.m"
    MR_Word analysis__STATE_VARIABLE_Info_28_28;
#line 1238 "analysis.m"
    MR_Word analysis__V_30_30;
#line 1238 "analysis.m"
    MR_Word analysis__STATE_VARIABLE_Info_31_31;
#line 1238 "analysis.m"
    MR_Word analysis__V_32_32;
#line 1238 "analysis.m"
    MR_Word analysis__V_33_33;
#line 1238 "analysis.m"
    MR_Word analysis__V_39_39;
#line 1238 "analysis.m"
    MR_Word analysis__V_41_41;
#line 1238 "analysis.m"
    MR_Word analysis__V_43_43;
#line 1238 "analysis.m"
    MR_Word analysis__V_46_46;
#line 1239 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_compiler_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 0)));
#line 1239 "analysis.m"
    MR_Box analysis__V_51_51 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 1));
#line 1239 "analysis.m"
    MR_Word analysis__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 3)));
#line 1239 "analysis.m"
    MR_Word analysis__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 4)));
#line 1239 "analysis.m"
    MR_Word analysis__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 5)));
#line 1239 "analysis.m"
    MR_Word analysis__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 6)));
#line 1239 "analysis.m"
    MR_Word analysis__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 7)));
#line 1239 "analysis.m"
    MR_Word analysis__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 8)));
#line 1239 "analysis.m"
    MR_Word analysis__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 9)));
#line 1239 "analysis.m"
    MR_Word analysis__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 10)));
#line 1242 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_compiler_118;
#line 1242 "analysis.m"
    MR_Box analysis__V_60_60;
#line 1242 "analysis.m"
    MR_Word analysis__V_61_61;
#line 1242 "analysis.m"
    MR_Word analysis__V_62_62;
#line 1242 "analysis.m"
    MR_Word analysis__V_63_63;
#line 1242 "analysis.m"
    MR_Word analysis__V_64_64;
#line 1242 "analysis.m"
    MR_Word analysis__V_65_65;
#line 1242 "analysis.m"
    MR_Word analysis__V_66_66;
#line 1242 "analysis.m"
    MR_Word analysis__V_67_67;
#line 1242 "analysis.m"
    MR_Word analysis__V_68_68;
#line 1247 "analysis.m"
    MR_Box analysis__conv2_STATE_VARIABLE_Info_26_26;
#line 1247 "analysis.m"
    MR_Box analysis__conv1_STATE_VARIABLE_IO_27_27;
#line 1253 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_compiler_126;
#line 1253 "analysis.m"
    MR_Box analysis__V_69_69;
#line 1253 "analysis.m"
    MR_Word analysis__V_70_70;
#line 1253 "analysis.m"
    MR_Word analysis__V_71_71;
#line 1253 "analysis.m"
    MR_Word analysis__V_72_72;
#line 1253 "analysis.m"
    MR_Word analysis__V_73_73;
#line 1253 "analysis.m"
    MR_Word analysis__V_74_74;
#line 1253 "analysis.m"
    MR_Word analysis__V_75_75;
#line 1253 "analysis.m"
    MR_Word analysis__V_76_76;
#line 1253 "analysis.m"
    MR_Word analysis__V_77_77;
#line 1254 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_compiler_127;
#line 1254 "analysis.m"
    MR_Box analysis__V_78_78;
#line 1254 "analysis.m"
    MR_Word analysis__V_79_79;
#line 1254 "analysis.m"
    MR_Word analysis__V_80_80;
#line 1254 "analysis.m"
    MR_Word analysis__V_81_81;
#line 1254 "analysis.m"
    MR_Word analysis__V_82_82;
#line 1254 "analysis.m"
    MR_Word analysis__V_83_83;
#line 1254 "analysis.m"
    MR_Word analysis__V_84_84;
#line 1254 "analysis.m"
    MR_Word analysis__V_85_85;
#line 1254 "analysis.m"
    MR_Word analysis__V_86_86;
#line 1254 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_compiler_129;
#line 1254 "analysis.m"
    MR_Box analysis__V_87_87;
#line 1254 "analysis.m"
    MR_Word analysis__V_88_88;
#line 1254 "analysis.m"
    MR_Word analysis__V_89_89;
#line 1254 "analysis.m"
    MR_Word analysis__V_90_90;
#line 1254 "analysis.m"
    MR_Word analysis__V_91_91;
#line 1254 "analysis.m"
    MR_Word analysis__V_93_93;
#line 1254 "analysis.m"
    MR_Word analysis__V_94_94;
#line 1254 "analysis.m"
    MR_Word analysis__V_95_95;
#line 1254 "analysis.m"
    MR_Word analysis__V_96_96;
#line 1254 "analysis.m"
    MR_Word analysis__V_92_92;
#line 1257 "analysis.m"
    MR_Word analysis__V_35_35;
#line 1257 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_compiler_130;
#line 1257 "analysis.m"
    MR_Box analysis__V_97_97;
#line 1257 "analysis.m"
    MR_Word analysis__V_98_98;
#line 1257 "analysis.m"
    MR_Word analysis__V_99_99;
#line 1257 "analysis.m"
    MR_Word analysis__V_100_100;
#line 1257 "analysis.m"
    MR_Word analysis__V_101_101;
#line 1257 "analysis.m"
    MR_Word analysis__V_102_102;
#line 1257 "analysis.m"
    MR_Word analysis__V_103_103;
#line 1257 "analysis.m"
    MR_Word analysis__V_104_104;
#line 1257 "analysis.m"
    MR_Word analysis__V_105_105;
#line 1265 "analysis.m"
    MR_Box analysis__conv3_STATE_VARIABLE_IO_40_40;
#line 1269 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_compiler_136;
#line 1269 "analysis.m"
    MR_Box analysis__V_106_106;
#line 1269 "analysis.m"
    MR_Word analysis__V_107_107;
#line 1269 "analysis.m"
    MR_Word analysis__V_108_108;
#line 1269 "analysis.m"
    MR_Word analysis__V_109_109;
#line 1269 "analysis.m"
    MR_Word analysis__V_110_110;
#line 1269 "analysis.m"
    MR_Word analysis__V_111_111;
#line 1269 "analysis.m"
    MR_Word analysis__V_112_112;
#line 1269 "analysis.m"
    MR_Word analysis__V_113_113;
#line 1269 "analysis.m"
    MR_Word analysis__V_114_114;
#line 1269 "analysis.m"
    MR_Box analysis__conv4_ModuleResults_19;
#line 1274 "analysis.m"
    MR_Box analysis__conv5_STATE_VARIABLE_IO_44_44;
#line 1282 "analysis.m"
    MR_Box analysis__conv6_STATE_VARIABLE_IO_47_47;

#line 1240 "analysis.m"
    {
#line 1240 "analysis.m"
      analysis__ImportedModules_14 = mercury__set__delete_2_f_0(analysis__TypeCtorInfo_117_117, analysis__ImportedModule0_10, ((MR_Box) (analysis__ThisModule_13)));
    }
#line 1242 "analysis.m"
    analysis__TypeClassInfo_for_compiler_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 0)));
#line 1242 "analysis.m"
    analysis__V_60_60 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 1));
#line 1242 "analysis.m"
    analysis__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 2)));
#line 1242 "analysis.m"
    analysis__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 3)));
#line 1242 "analysis.m"
    analysis__LocalModules_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 4)));
#line 1242 "analysis.m"
    analysis__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 5)));
#line 1242 "analysis.m"
    analysis__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 6)));
#line 1242 "analysis.m"
    analysis__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 7)));
#line 1242 "analysis.m"
    analysis__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 8)));
#line 1242 "analysis.m"
    analysis__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 9)));
#line 1242 "analysis.m"
    analysis__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 10)));
#line 1243 "analysis.m"
    {
#line 1243 "analysis.m"
      analysis__LocalImportedModules_16 = mercury__set__intersect_2_f_0(analysis__TypeCtorInfo_117_117, analysis__LocalModules_15, analysis__ImportedModules_14);
    }
#line 1246 "analysis.m"
    {
#line 1246 "analysis.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(analysis__ModuleInfo_9, &analysis__Globals_17);
    }
#line 1247 "analysis.m"
    {
#line 1247 "analysis.m"
      analysis__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1247 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_25_25, 0) = ((MR_Box) (&analysis_scalar_common_8[0]));
#line 1247 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_25_25, 1) = ((MR_Box) (analysis__write_analysis_files_7_p_0_1));
#line 1247 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_25_25, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1247 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_25_25, 3) = ((MR_Box) (analysis__Globals_17));
#line 1247 "analysis.m"
    }
#line 15538 "analysis.c"
    analysis__TypeCtorInfo_125_125 = (MR_Word) &mercury__io__io__type_ctor_info_state_0;
#line 1247 "analysis.m"
    {
#line 1247 "analysis.m"
      mercury__set__fold2_6_p_2(analysis__TypeCtorInfo_117_117, (MR_Word) &analysis__analysis__type_ctor_info_analysis_info_0, analysis__TypeCtorInfo_125_125, analysis__V_25_25, analysis__LocalModules_15, ((MR_Box) (analysis__STATE_VARIABLE_Info_0_21)), &analysis__conv2_STATE_VARIABLE_Info_26_26, ((MR_Box) ((MR_Integer) 0)), &analysis__conv1_STATE_VARIABLE_IO_27_27);
    }
#line 1247 "analysis.m"
    analysis__STATE_VARIABLE_Info_26_26 = ((MR_Word) analysis__conv2_STATE_VARIABLE_Info_26_26);
#line 1249 "analysis.m"
    {
#line 1249 "analysis.m"
      analysis__update_analysis_registry_5_p_0(analysis__ModuleInfo_9, analysis__STATE_VARIABLE_Info_26_26, &analysis__STATE_VARIABLE_Info_28_28);
    }
#line 1253 "analysis.m"
    analysis__TypeClassInfo_for_compiler_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_28_28, (MR_Integer) 0)));
#line 1253 "analysis.m"
    analysis__V_69_69 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_28_28, (MR_Integer) 1));
#line 1253 "analysis.m"
    analysis__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_28_28, (MR_Integer) 2)));
#line 1253 "analysis.m"
    analysis__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_28_28, (MR_Integer) 3)));
#line 1253 "analysis.m"
    analysis__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_28_28, (MR_Integer) 4)));
#line 1253 "analysis.m"
    analysis__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_28_28, (MR_Integer) 5)));
#line 1253 "analysis.m"
    analysis__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_28_28, (MR_Integer) 6)));
#line 1253 "analysis.m"
    analysis__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_28_28, (MR_Integer) 7)));
#line 1253 "analysis.m"
    analysis__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_28_28, (MR_Integer) 8)));
#line 1253 "analysis.m"
    analysis__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_28_28, (MR_Integer) 9)));
#line 1253 "analysis.m"
    analysis__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_28_28, (MR_Integer) 10)));
#line 1253 "analysis.m"
    {
#line 1253 "analysis.m"
      analysis__ModuleStatus_18 = analysis__lub_result_statuses_1_f_0(analysis__V_30_30);
    }
#line 1254 "analysis.m"
    analysis__TypeClassInfo_for_compiler_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_28_28, (MR_Integer) 0)));
#line 1254 "analysis.m"
    analysis__V_78_78 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_28_28, (MR_Integer) 1));
#line 1254 "analysis.m"
    analysis__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_28_28, (MR_Integer) 2)));
#line 1254 "analysis.m"
    analysis__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_28_28, (MR_Integer) 3)));
#line 1254 "analysis.m"
    analysis__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_28_28, (MR_Integer) 4)));
#line 1254 "analysis.m"
    analysis__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_28_28, (MR_Integer) 5)));
#line 1254 "analysis.m"
    analysis__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_28_28, (MR_Integer) 6)));
#line 1254 "analysis.m"
    analysis__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_28_28, (MR_Integer) 7)));
#line 1254 "analysis.m"
    analysis__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_28_28, (MR_Integer) 8)));
#line 1254 "analysis.m"
    analysis__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_28_28, (MR_Integer) 9)));
#line 1254 "analysis.m"
    analysis__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_28_28, (MR_Integer) 10)));
#line 1254 "analysis.m"
    {
#line 1254 "analysis.m"
      analysis__V_33_33 = mercury__map__f_101_108_101_109_32_58_61_3_f_0(analysis__TypeCtorInfo_117_117, (MR_Word) &analysis__analysis__type_ctor_info_analysis_status_0, ((MR_Box) (analysis__ThisModule_13)), analysis__V_32_32, ((MR_Box) (analysis__ModuleStatus_18)));
    }
#line 1254 "analysis.m"
    analysis__TypeClassInfo_for_compiler_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_28_28, (MR_Integer) 0)));
#line 1254 "analysis.m"
    analysis__V_87_87 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_28_28, (MR_Integer) 1));
#line 1254 "analysis.m"
    analysis__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_28_28, (MR_Integer) 2)));
#line 1254 "analysis.m"
    analysis__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_28_28, (MR_Integer) 3)));
#line 1254 "analysis.m"
    analysis__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_28_28, (MR_Integer) 4)));
#line 1254 "analysis.m"
    analysis__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_28_28, (MR_Integer) 5)));
#line 1254 "analysis.m"
    analysis__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_28_28, (MR_Integer) 6)));
#line 1254 "analysis.m"
    analysis__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_28_28, (MR_Integer) 7)));
#line 1254 "analysis.m"
    analysis__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_28_28, (MR_Integer) 8)));
#line 1254 "analysis.m"
    analysis__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_28_28, (MR_Integer) 9)));
#line 1254 "analysis.m"
    analysis__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_28_28, (MR_Integer) 10)));
#line 1254 "analysis.m"
    {
#line 1254 "analysis.m"
      analysis__STATE_VARIABLE_Info_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 1254 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_31_31, 0) = ((MR_Box) (analysis__TypeClassInfo_for_compiler_129));
#line 1254 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_31_31, 1) = analysis__V_87_87;
#line 1254 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_31_31, 2) = ((MR_Box) (analysis__V_88_88));
#line 1254 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_31_31, 3) = ((MR_Box) (analysis__V_89_89));
#line 1254 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_31_31, 4) = ((MR_Box) (analysis__V_90_90));
#line 1254 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_31_31, 5) = ((MR_Box) (analysis__V_91_91));
#line 1254 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_31_31, 6) = ((MR_Box) (analysis__V_33_33));
#line 1254 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_31_31, 7) = ((MR_Box) (analysis__V_93_93));
#line 1254 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_31_31, 8) = ((MR_Box) (analysis__V_94_94));
#line 1254 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_31_31, 9) = ((MR_Box) (analysis__V_95_95));
#line 1254 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_31_31, 10) = ((MR_Box) (analysis__V_96_96));
#line 1254 "analysis.m"
    }
#line 1256 "analysis.m"
    {
#line 1256 "analysis.m"
      analysis__update_intermodule_dependencies_4_p_0(analysis__ThisModule_13, analysis__LocalImportedModules_16, analysis__STATE_VARIABLE_Info_31_31, analysis__STATE_VARIABLE_Info_22);
    }
#line 1257 "analysis.m"
    analysis__TypeClassInfo_for_compiler_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), *analysis__STATE_VARIABLE_Info_22, (MR_Integer) 0)));
#line 1257 "analysis.m"
    analysis__V_97_97 = (MR_hl_field(MR_mktag(0), *analysis__STATE_VARIABLE_Info_22, (MR_Integer) 1));
#line 1257 "analysis.m"
    analysis__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), *analysis__STATE_VARIABLE_Info_22, (MR_Integer) 2)));
#line 1257 "analysis.m"
    analysis__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), *analysis__STATE_VARIABLE_Info_22, (MR_Integer) 3)));
#line 1257 "analysis.m"
    analysis__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), *analysis__STATE_VARIABLE_Info_22, (MR_Integer) 4)));
#line 1257 "analysis.m"
    analysis__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), *analysis__STATE_VARIABLE_Info_22, (MR_Integer) 5)));
#line 1257 "analysis.m"
    analysis__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), *analysis__STATE_VARIABLE_Info_22, (MR_Integer) 6)));
#line 1257 "analysis.m"
    analysis__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), *analysis__STATE_VARIABLE_Info_22, (MR_Integer) 7)));
#line 1257 "analysis.m"
    analysis__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), *analysis__STATE_VARIABLE_Info_22, (MR_Integer) 8)));
#line 1257 "analysis.m"
    analysis__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), *analysis__STATE_VARIABLE_Info_22, (MR_Integer) 9)));
#line 1257 "analysis.m"
    analysis__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), *analysis__STATE_VARIABLE_Info_22, (MR_Integer) 10)));
#line 1257 "analysis.m"
    {
#line 1257 "analysis.m"
      analysis__succeeded = mercury__map__is_empty_1_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &analysis_scalar_common_2[2], analysis__V_35_35);
    }
#line 1259 "analysis.m"
    if (analysis__succeeded)
#line 1258 "analysis.m"
      {
#line 1258 "analysis.m"
      }
#line 1259 "analysis.m"
    else
#line 1260 "analysis.m"
      {
#line 1260 "analysis.m"
        {
#line 1260 "analysis.m"
          mercury__require__unexpected_3_p_0((MR_String) "analysis", (MR_String) "predicate \140analysis.write_analysis_files\'/7", (MR_String) "new_analysis_results is not empty");
#line 1260 "analysis.m"
          return;
        }
#line 1260 "analysis.m"
      }
#line 1265 "analysis.m"
    {
#line 1265 "analysis.m"
      analysis__V_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1265 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_39_39, 0) = ((MR_Box) (&analysis_scalar_common_7[1]));
#line 1265 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_39_39, 1) = ((MR_Box) (analysis__write_analysis_files_7_p_0_2));
#line 1265 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_39_39, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1265 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_39_39, 3) = ((MR_Box) (*analysis__STATE_VARIABLE_Info_22));
#line 1265 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_39_39, 4) = ((MR_Box) (analysis__Globals_17));
#line 1265 "analysis.m"
    }
#line 1265 "analysis.m"
    {
#line 1265 "analysis.m"
      mercury__set__fold_4_p_2(analysis__TypeCtorInfo_117_117, analysis__TypeCtorInfo_125_125, analysis__V_39_39, analysis__LocalModules_15, ((MR_Box) ((MR_Integer) 0)), &analysis__conv3_STATE_VARIABLE_IO_40_40);
    }
#line 1269 "analysis.m"
    analysis__TypeClassInfo_for_compiler_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), *analysis__STATE_VARIABLE_Info_22, (MR_Integer) 0)));
#line 1269 "analysis.m"
    analysis__V_106_106 = (MR_hl_field(MR_mktag(0), *analysis__STATE_VARIABLE_Info_22, (MR_Integer) 1));
#line 1269 "analysis.m"
    analysis__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), *analysis__STATE_VARIABLE_Info_22, (MR_Integer) 2)));
#line 1269 "analysis.m"
    analysis__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), *analysis__STATE_VARIABLE_Info_22, (MR_Integer) 3)));
#line 1269 "analysis.m"
    analysis__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), *analysis__STATE_VARIABLE_Info_22, (MR_Integer) 4)));
#line 1269 "analysis.m"
    analysis__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), *analysis__STATE_VARIABLE_Info_22, (MR_Integer) 5)));
#line 1269 "analysis.m"
    analysis__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), *analysis__STATE_VARIABLE_Info_22, (MR_Integer) 6)));
#line 1269 "analysis.m"
    analysis__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), *analysis__STATE_VARIABLE_Info_22, (MR_Integer) 7)));
#line 1269 "analysis.m"
    analysis__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), *analysis__STATE_VARIABLE_Info_22, (MR_Integer) 8)));
#line 1269 "analysis.m"
    analysis__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), *analysis__STATE_VARIABLE_Info_22, (MR_Integer) 9)));
#line 1269 "analysis.m"
    analysis__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), *analysis__STATE_VARIABLE_Info_22, (MR_Integer) 10)));
#line 1269 "analysis.m"
    {
#line 1269 "analysis.m"
      analysis__conv4_ModuleResults_19 = mercury__map__det_elem_2_f_0(analysis__TypeCtorInfo_117_117, (MR_Word) &analysis_scalar_common_2[3], ((MR_Box) (analysis__ThisModule_13)), analysis__V_41_41);
    }
#line 1269 "analysis.m"
    analysis__ModuleResults_19 = ((MR_Word) analysis__conv4_ModuleResults_19);
#line 1270 "analysis.m"
    {
#line 1270 "analysis.m"
      analysis__file__write_module_analysis_results_6_p_0(*analysis__STATE_VARIABLE_Info_22, analysis__Globals_17, analysis__ThisModule_13, analysis__ModuleResults_19);
    }
#line 1274 "analysis.m"
    {
#line 1274 "analysis.m"
      analysis__V_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1274 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_43_43, 0) = ((MR_Box) (&analysis_scalar_common_7[1]));
#line 1274 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_43_43, 1) = ((MR_Box) (analysis__write_analysis_files_7_p_0_3));
#line 1274 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_43_43, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1274 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_43_43, 3) = ((MR_Box) (*analysis__STATE_VARIABLE_Info_22));
#line 1274 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_43_43, 4) = ((MR_Box) (analysis__Globals_17));
#line 1274 "analysis.m"
    }
#line 1274 "analysis.m"
    {
#line 1274 "analysis.m"
      mercury__set__fold_4_p_2(analysis__TypeCtorInfo_117_117, analysis__TypeCtorInfo_125_125, analysis__V_43_43, analysis__LocalImportedModules_16, ((MR_Box) ((MR_Integer) 0)), &analysis__conv5_STATE_VARIABLE_IO_44_44);
    }
#line 1279 "analysis.m"
    {
#line 1279 "analysis.m"
      analysis__file__empty_request_file_5_p_0(*analysis__STATE_VARIABLE_Info_22, analysis__Globals_17, analysis__ThisModule_13);
    }
#line 1282 "analysis.m"
    {
#line 1282 "analysis.m"
      analysis__V_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1282 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_46_46, 0) = ((MR_Box) (&analysis_scalar_common_7[1]));
#line 1282 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_46_46, 1) = ((MR_Box) (analysis__write_analysis_files_7_p_0_4));
#line 1282 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_46_46, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1282 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_46_46, 3) = ((MR_Box) (*analysis__STATE_VARIABLE_Info_22));
#line 1282 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_46_46, 4) = ((MR_Box) (analysis__Globals_17));
#line 1282 "analysis.m"
    }
#line 1282 "analysis.m"
    {
#line 1282 "analysis.m"
      mercury__set__fold_4_p_2(analysis__TypeCtorInfo_117_117, analysis__TypeCtorInfo_125_125, analysis__V_46_46, analysis__LocalImportedModules_16, ((MR_Box) ((MR_Integer) 0)), &analysis__conv6_STATE_VARIABLE_IO_47_47);
    }
#line 1287 "analysis.m"
    {
#line 1287 "analysis.m"
      analysis__module_name_to_write_file_name_7_p_0(analysis__TypeClassInfo_for_compiler_115, analysis__Compiler_8, analysis__Globals_17, analysis__ThisModule_13, (MR_String) ".analysis_date", &analysis__TimestampFileName_20);
    }
#line 1289 "analysis.m"
    {
#line 1289 "analysis.m"
      parse_tree__module_cmds__touch_datestamp_4_p_0(analysis__Globals_17, analysis__TimestampFileName_20);
#line 1289 "analysis.m"
      return;
    }
#line 1238 "analysis.m"
  }
#line 296 "analysis.m"
}

#line 290 "analysis.m"
void MR_CALL 
analysis__module_is_local_3_p_0(
#line 290 "analysis.m"
  MR_Word analysis__Info_4,
#line 290 "analysis.m"
  MR_Word analysis__ModuleName_5,
#line 290 "analysis.m"
  MR_Word * analysis__IsLocal_6)
#line 290 "analysis.m"
{
#line 1228 "analysis.m"
  {
#line 1228 "analysis.m"
    MR_bool analysis__succeeded;
#line 1226 "analysis.m"
    MR_Word analysis__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_4, (MR_Integer) 4)));
#line 1226 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_compiler_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_4, (MR_Integer) 0)));
#line 1226 "analysis.m"
    MR_Box analysis__V_8_8 = (MR_hl_field(MR_mktag(0), analysis__Info_4, (MR_Integer) 1));
#line 1226 "analysis.m"
    MR_Word analysis__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_4, (MR_Integer) 2)));
#line 1226 "analysis.m"
    MR_Word analysis__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_4, (MR_Integer) 3)));
#line 1226 "analysis.m"
    MR_Word analysis__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_4, (MR_Integer) 5)));
#line 1226 "analysis.m"
    MR_Word analysis__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_4, (MR_Integer) 6)));
#line 1226 "analysis.m"
    MR_Word analysis__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_4, (MR_Integer) 7)));
#line 1226 "analysis.m"
    MR_Word analysis__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_4, (MR_Integer) 8)));
#line 1226 "analysis.m"
    MR_Word analysis__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_4, (MR_Integer) 9)));
#line 1226 "analysis.m"
    MR_Word analysis__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_4, (MR_Integer) 10)));

#line 1226 "analysis.m"
    {
#line 1226 "analysis.m"
      analysis__succeeded = mercury__set__contains_2_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, analysis__V_7_7, ((MR_Box) (analysis__ModuleName_5)));
    }
#line 1228 "analysis.m"
    if (analysis__succeeded)
#line 1227 "analysis.m"
      *analysis__IsLocal_6 = (MR_Integer) 1;
#line 1228 "analysis.m"
    else
#line 1229 "analysis.m"
      *analysis__IsLocal_6 = (MR_Integer) 0;
#line 1228 "analysis.m"
  }
#line 290 "analysis.m"
}

#line 1197 "analysis.m"
static void MR_CALL 
analysis__prepare_intermodule_analysis_7_p_0_1(
#line 1197 "analysis.m"
  MR_Box analysis__closure_arg,
#line 1197 "analysis.m"
  MR_Box analysis__wrapper_arg_1,
#line 1197 "analysis.m"
  MR_Box analysis__wrapper_arg_2,
#line 1197 "analysis.m"
  MR_Box * analysis__wrapper_arg_3,
#line 1197 "analysis.m"
  MR_Box analysis__wrapper_arg_4,
#line 1197 "analysis.m"
  MR_Box * analysis__wrapper_arg_5)
#line 1197 "analysis.m"
{
#line 1197 "analysis.m"
  {
#line 1197 "analysis.m"
    MR_Box analysis__closure = analysis__closure_arg;
#line 1197 "analysis.m"
    MR_Word analysis__conv0_STATE_VARIABLE_Info_14;

#line 1197 "analysis.m"
    {
#line 1197 "analysis.m"
      analysis__load_module_analysis_results_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 3))), ((MR_Word) analysis__wrapper_arg_1), ((MR_Word) analysis__wrapper_arg_2), &analysis__conv0_STATE_VARIABLE_Info_14);
    }
#line 1197 "analysis.m"
    *analysis__wrapper_arg_3 = ((MR_Box) (analysis__conv0_STATE_VARIABLE_Info_14));
#line 1197 "analysis.m"
  }
#line 1197 "analysis.m"
}

#line 280 "analysis.m"
void MR_CALL 
analysis__prepare_intermodule_analysis_7_p_0(
#line 280 "analysis.m"
  MR_Word analysis__Globals_8,
#line 280 "analysis.m"
  MR_Word analysis__ImportedModuleNames0_9,
#line 280 "analysis.m"
  MR_Word analysis__LocalModuleNames_10,
#line 280 "analysis.m"
  MR_Word analysis__STATE_VARIABLE_Info_0_16,
#line 280 "analysis.m"
  MR_Word * analysis__STATE_VARIABLE_Info_17)
#line 280 "analysis.m"
{
#line 1190 "analysis.m"
  {
#line 1190 "analysis.m"
    MR_bool analysis__succeeded;
#line 1190 "analysis.m"
    MR_Word analysis__TypeCtorInfo_69_69 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 1190 "analysis.m"
    MR_Word analysis__ThisModule_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_16, (MR_Integer) 2)));
#line 1190 "analysis.m"
    MR_Word analysis__ImportedModuleNames_14;
#line 1190 "analysis.m"
    MR_Word analysis__ThisModuleRequests_15;
#line 1190 "analysis.m"
    MR_Word analysis__STATE_VARIABLE_Info_20_20;
#line 1190 "analysis.m"
    MR_Word analysis__V_21_21;
#line 1190 "analysis.m"
    MR_Word analysis__STATE_VARIABLE_Info_22_22;
#line 1190 "analysis.m"
    MR_Word analysis__STATE_VARIABLE_Info_24_24;
#line 1190 "analysis.m"
    MR_Word analysis__V_28_28;
#line 1190 "analysis.m"
    MR_Word analysis__V_29_29;
#line 1191 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_compiler_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_16, (MR_Integer) 0)));
#line 1191 "analysis.m"
    MR_Box analysis__V_30_30 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_16, (MR_Integer) 1));
#line 1191 "analysis.m"
    MR_Word analysis__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_16, (MR_Integer) 3)));
#line 1191 "analysis.m"
    MR_Word analysis__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_16, (MR_Integer) 4)));
#line 1191 "analysis.m"
    MR_Word analysis__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_16, (MR_Integer) 5)));
#line 1191 "analysis.m"
    MR_Word analysis__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_16, (MR_Integer) 6)));
#line 1191 "analysis.m"
    MR_Word analysis__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_16, (MR_Integer) 7)));
#line 1191 "analysis.m"
    MR_Word analysis__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_16, (MR_Integer) 8)));
#line 1191 "analysis.m"
    MR_Word analysis__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_16, (MR_Integer) 9)));
#line 1191 "analysis.m"
    MR_Word analysis__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_16, (MR_Integer) 10)));
#line 1194 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_compiler_70;
#line 1194 "analysis.m"
    MR_Box analysis__V_39_39;
#line 1194 "analysis.m"
    MR_Word analysis__V_40_40;
#line 1194 "analysis.m"
    MR_Word analysis__V_41_41;
#line 1194 "analysis.m"
    MR_Word analysis__V_43_43;
#line 1194 "analysis.m"
    MR_Word analysis__V_44_44;
#line 1194 "analysis.m"
    MR_Word analysis__V_45_45;
#line 1194 "analysis.m"
    MR_Word analysis__V_46_46;
#line 1194 "analysis.m"
    MR_Word analysis__V_47_47;
#line 1194 "analysis.m"
    MR_Word analysis__V_48_48;
#line 1194 "analysis.m"
    MR_Word analysis__V_42_42;
#line 1197 "analysis.m"
    MR_Box analysis__conv2_STATE_VARIABLE_Info_22_22;
#line 1197 "analysis.m"
    MR_Box analysis__conv1_STATE_VARIABLE_IO_23_23;
#line 1204 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_compiler_78;
#line 1204 "analysis.m"
    MR_Box analysis__V_49_49;
#line 1204 "analysis.m"
    MR_Word analysis__V_50_50;
#line 1204 "analysis.m"
    MR_Word analysis__V_51_51;
#line 1204 "analysis.m"
    MR_Word analysis__V_52_52;
#line 1204 "analysis.m"
    MR_Word analysis__V_53_53;
#line 1204 "analysis.m"
    MR_Word analysis__V_54_54;
#line 1204 "analysis.m"
    MR_Word analysis__V_55_55;
#line 1204 "analysis.m"
    MR_Word analysis__V_56_56;
#line 1204 "analysis.m"
    MR_Word analysis__V_57_57;
#line 1204 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_compiler_80;
#line 1204 "analysis.m"
    MR_Box analysis__V_58_58;
#line 1204 "analysis.m"
    MR_Word analysis__V_59_59;
#line 1204 "analysis.m"
    MR_Word analysis__V_60_60;
#line 1204 "analysis.m"
    MR_Word analysis__V_61_61;
#line 1204 "analysis.m"
    MR_Word analysis__V_63_63;
#line 1204 "analysis.m"
    MR_Word analysis__V_64_64;
#line 1204 "analysis.m"
    MR_Word analysis__V_65_65;
#line 1204 "analysis.m"
    MR_Word analysis__V_66_66;
#line 1204 "analysis.m"
    MR_Word analysis__V_67_67;
#line 1204 "analysis.m"
    MR_Word analysis__V_62_62;

#line 1192 "analysis.m"
    {
#line 1192 "analysis.m"
      analysis__ImportedModuleNames_14 = mercury__set__delete_2_f_0(analysis__TypeCtorInfo_69_69, analysis__ImportedModuleNames0_9, ((MR_Box) (analysis__ThisModule_13)));
    }
#line 1194 "analysis.m"
    analysis__TypeClassInfo_for_compiler_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_16, (MR_Integer) 0)));
#line 1194 "analysis.m"
    analysis__V_39_39 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_16, (MR_Integer) 1));
#line 1194 "analysis.m"
    analysis__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_16, (MR_Integer) 2)));
#line 1194 "analysis.m"
    analysis__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_16, (MR_Integer) 3)));
#line 1194 "analysis.m"
    analysis__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_16, (MR_Integer) 4)));
#line 1194 "analysis.m"
    analysis__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_16, (MR_Integer) 5)));
#line 1194 "analysis.m"
    analysis__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_16, (MR_Integer) 6)));
#line 1194 "analysis.m"
    analysis__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_16, (MR_Integer) 7)));
#line 1194 "analysis.m"
    analysis__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_16, (MR_Integer) 8)));
#line 1194 "analysis.m"
    analysis__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_16, (MR_Integer) 9)));
#line 1194 "analysis.m"
    analysis__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_16, (MR_Integer) 10)));
#line 1194 "analysis.m"
    {
#line 1194 "analysis.m"
      analysis__STATE_VARIABLE_Info_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 1194 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_20_20, 0) = ((MR_Box) (analysis__TypeClassInfo_for_compiler_70));
#line 1194 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_20_20, 1) = analysis__V_39_39;
#line 1194 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_20_20, 2) = ((MR_Box) (analysis__V_40_40));
#line 1194 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_20_20, 3) = ((MR_Box) (analysis__V_41_41));
#line 1194 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_20_20, 4) = ((MR_Box) (analysis__LocalModuleNames_10));
#line 1194 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_20_20, 5) = ((MR_Box) (analysis__V_43_43));
#line 1194 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_20_20, 6) = ((MR_Box) (analysis__V_44_44));
#line 1194 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_20_20, 7) = ((MR_Box) (analysis__V_45_45));
#line 1194 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_20_20, 8) = ((MR_Box) (analysis__V_46_46));
#line 1194 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_20_20, 9) = ((MR_Box) (analysis__V_47_47));
#line 1194 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_20_20, 10) = ((MR_Box) (analysis__V_48_48));
#line 1194 "analysis.m"
    }
#line 1197 "analysis.m"
    {
#line 1197 "analysis.m"
      analysis__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1197 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_21_21, 0) = ((MR_Box) (&analysis_scalar_common_8[0]));
#line 1197 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_21_21, 1) = ((MR_Box) (analysis__prepare_intermodule_analysis_7_p_0_1));
#line 1197 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_21_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1197 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_21_21, 3) = ((MR_Box) (analysis__Globals_8));
#line 1197 "analysis.m"
    }
#line 1197 "analysis.m"
    {
#line 1197 "analysis.m"
      mercury__set__fold2_6_p_2(analysis__TypeCtorInfo_69_69, (MR_Word) &analysis__analysis__type_ctor_info_analysis_info_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, analysis__V_21_21, analysis__ImportedModuleNames_14, ((MR_Box) (analysis__STATE_VARIABLE_Info_20_20)), &analysis__conv2_STATE_VARIABLE_Info_22_22, ((MR_Box) ((MR_Integer) 0)), &analysis__conv1_STATE_VARIABLE_IO_23_23);
    }
#line 1197 "analysis.m"
    analysis__STATE_VARIABLE_Info_22_22 = ((MR_Word) analysis__conv2_STATE_VARIABLE_Info_22_22);
#line 1201 "analysis.m"
    {
#line 1201 "analysis.m"
      analysis__load_module_analysis_results_6_p_0(analysis__Globals_8, analysis__ThisModule_13, analysis__STATE_VARIABLE_Info_22_22, &analysis__STATE_VARIABLE_Info_24_24);
    }
#line 1202 "analysis.m"
    {
#line 1202 "analysis.m"
      analysis__file__read_module_analysis_requests_6_p_0(analysis__STATE_VARIABLE_Info_24_24, analysis__Globals_8, analysis__ThisModule_13, &analysis__ThisModuleRequests_15);
    }
#line 1204 "analysis.m"
    analysis__TypeClassInfo_for_compiler_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_24_24, (MR_Integer) 0)));
#line 1204 "analysis.m"
    analysis__V_49_49 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_24_24, (MR_Integer) 1));
#line 1204 "analysis.m"
    analysis__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_24_24, (MR_Integer) 2)));
#line 1204 "analysis.m"
    analysis__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_24_24, (MR_Integer) 3)));
#line 1204 "analysis.m"
    analysis__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_24_24, (MR_Integer) 4)));
#line 1204 "analysis.m"
    analysis__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_24_24, (MR_Integer) 5)));
#line 1204 "analysis.m"
    analysis__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_24_24, (MR_Integer) 6)));
#line 1204 "analysis.m"
    analysis__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_24_24, (MR_Integer) 7)));
#line 1204 "analysis.m"
    analysis__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_24_24, (MR_Integer) 8)));
#line 1204 "analysis.m"
    analysis__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_24_24, (MR_Integer) 9)));
#line 1204 "analysis.m"
    analysis__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_24_24, (MR_Integer) 10)));
#line 1204 "analysis.m"
    {
#line 1204 "analysis.m"
      analysis__V_29_29 = mercury__map__f_101_108_101_109_32_58_61_3_f_0(analysis__TypeCtorInfo_69_69, (MR_Word) &analysis_scalar_common_2[1], ((MR_Box) (analysis__ThisModule_13)), analysis__V_28_28, ((MR_Box) (analysis__ThisModuleRequests_15)));
    }
#line 1204 "analysis.m"
    analysis__TypeClassInfo_for_compiler_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_24_24, (MR_Integer) 0)));
#line 1204 "analysis.m"
    analysis__V_58_58 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_24_24, (MR_Integer) 1));
#line 1204 "analysis.m"
    analysis__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_24_24, (MR_Integer) 2)));
#line 1204 "analysis.m"
    analysis__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_24_24, (MR_Integer) 3)));
#line 1204 "analysis.m"
    analysis__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_24_24, (MR_Integer) 4)));
#line 1204 "analysis.m"
    analysis__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_24_24, (MR_Integer) 5)));
#line 1204 "analysis.m"
    analysis__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_24_24, (MR_Integer) 6)));
#line 1204 "analysis.m"
    analysis__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_24_24, (MR_Integer) 7)));
#line 1204 "analysis.m"
    analysis__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_24_24, (MR_Integer) 8)));
#line 1204 "analysis.m"
    analysis__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_24_24, (MR_Integer) 9)));
#line 1204 "analysis.m"
    analysis__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_24_24, (MR_Integer) 10)));
#line 1204 "analysis.m"
    {
#line 1204 "analysis.m"
      MR_Word base;
#line 1204 "analysis.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 1204 "analysis.m"
      *analysis__STATE_VARIABLE_Info_17 = base;
#line 1204 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (analysis__TypeClassInfo_for_compiler_80));
#line 1204 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 1) = analysis__V_58_58;
#line 1204 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (analysis__V_59_59));
#line 1204 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (analysis__V_60_60));
#line 1204 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (analysis__V_61_61));
#line 1204 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (analysis__V_29_29));
#line 1204 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (analysis__V_63_63));
#line 1204 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (analysis__V_64_64));
#line 1204 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (analysis__V_65_65));
#line 1204 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (analysis__V_66_66));
#line 1204 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (analysis__V_67_67));
#line 1204 "analysis.m"
    }
#line 1190 "analysis.m"
  }
#line 280 "analysis.m"
}

#line 264 "analysis.m"
void MR_CALL 
analysis__record_request_6_p_0(
#line 264 "analysis.m"
  MR_Word analysis__TypeClassInfo_for_call_pattern_39,
#line 264 "analysis.m"
  MR_String analysis__AnalysisName_7,
#line 264 "analysis.m"
  MR_Word analysis__ModuleName_8,
#line 264 "analysis.m"
  MR_Word analysis__FuncId_9,
#line 264 "analysis.m"
  MR_Box analysis__CallPattern_10,
#line 264 "analysis.m"
  MR_Word analysis__STATE_VARIABLE_Info_0_15,
#line 264 "analysis.m"
  MR_Word * analysis__STATE_VARIABLE_Info_16)
#line 264 "analysis.m"
{
#line 690 "analysis.m"
  {
#line 690 "analysis.m"
    MR_bool analysis__succeeded;
#line 690 "analysis.m"
    MR_Word analysis__ThisModule_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_15, (MR_Integer) 2)));
#line 690 "analysis.m"
    MR_Word analysis__MakeAnalysisReg_13;
#line 690 "analysis.m"
    MR_Word analysis__IsLocal_14;
#line 691 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_compiler_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_15, (MR_Integer) 0)));
#line 691 "analysis.m"
    MR_Box analysis__V_21_21 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_15, (MR_Integer) 1));
#line 691 "analysis.m"
    MR_Word analysis__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_15, (MR_Integer) 3)));
#line 691 "analysis.m"
    MR_Word analysis__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_15, (MR_Integer) 4)));
#line 691 "analysis.m"
    MR_Word analysis__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_15, (MR_Integer) 5)));
#line 691 "analysis.m"
    MR_Word analysis__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_15, (MR_Integer) 6)));
#line 691 "analysis.m"
    MR_Word analysis__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_15, (MR_Integer) 7)));
#line 691 "analysis.m"
    MR_Word analysis__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_15, (MR_Integer) 8)));
#line 691 "analysis.m"
    MR_Word analysis__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_15, (MR_Integer) 9)));
#line 691 "analysis.m"
    MR_Word analysis__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_15, (MR_Integer) 10)));
#line 698 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_compiler_41;
#line 698 "analysis.m"
    MR_Box analysis__V_30_30;
#line 698 "analysis.m"
    MR_Word analysis__V_31_31;
#line 698 "analysis.m"
    MR_Word analysis__V_32_32;
#line 698 "analysis.m"
    MR_Word analysis__V_33_33;
#line 698 "analysis.m"
    MR_Word analysis__V_34_34;
#line 698 "analysis.m"
    MR_Word analysis__V_35_35;
#line 698 "analysis.m"
    MR_Word analysis__V_36_36;
#line 698 "analysis.m"
    MR_Word analysis__V_37_37;
#line 698 "analysis.m"
    MR_Word analysis__V_38_38;
#line 1226 "analysis.m"
    MR_Word analysis__V_46_46;
#line 1226 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_compiler_56;
#line 1226 "analysis.m"
    MR_Box analysis__V_47_47;
#line 1226 "analysis.m"
    MR_Word analysis__V_48_48;
#line 1226 "analysis.m"
    MR_Word analysis__V_49_49;
#line 1226 "analysis.m"
    MR_Word analysis__V_50_50;
#line 1226 "analysis.m"
    MR_Word analysis__V_51_51;
#line 1226 "analysis.m"
    MR_Word analysis__V_52_52;
#line 1226 "analysis.m"
    MR_Word analysis__V_53_53;
#line 1226 "analysis.m"
    MR_Word analysis__V_54_54;
#line 1226 "analysis.m"
    MR_Word analysis__V_55_55;

#line 692 "analysis.m"
    {
#line 692 "analysis.m"
      analysis__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(analysis__ThisModule_12, analysis__ModuleName_8);
    }
#line 694 "analysis.m"
    if (analysis__succeeded)
#line 693 "analysis.m"
      {
#line 693 "analysis.m"
        {
#line 693 "analysis.m"
          mercury__require__unexpected_3_p_0((MR_String) "analysis", (MR_String) "predicate \140analysis.record_request\'/6", (MR_String) "request on self");
#line 693 "analysis.m"
          return;
        }
#line 693 "analysis.m"
      }
#line 694 "analysis.m"
    else
#line 695 "analysis.m"
      {
#line 695 "analysis.m"
      }
#line 698 "analysis.m"
    analysis__TypeClassInfo_for_compiler_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_15, (MR_Integer) 0)));
#line 698 "analysis.m"
    analysis__V_30_30 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_15, (MR_Integer) 1));
#line 698 "analysis.m"
    analysis__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_15, (MR_Integer) 2)));
#line 698 "analysis.m"
    analysis__MakeAnalysisReg_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_15, (MR_Integer) 3)));
#line 698 "analysis.m"
    analysis__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_15, (MR_Integer) 4)));
#line 698 "analysis.m"
    analysis__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_15, (MR_Integer) 5)));
#line 698 "analysis.m"
    analysis__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_15, (MR_Integer) 6)));
#line 698 "analysis.m"
    analysis__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_15, (MR_Integer) 7)));
#line 698 "analysis.m"
    analysis__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_15, (MR_Integer) 8)));
#line 698 "analysis.m"
    analysis__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_15, (MR_Integer) 9)));
#line 698 "analysis.m"
    analysis__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_15, (MR_Integer) 10)));
#line 1226 "analysis.m"
    analysis__TypeClassInfo_for_compiler_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_15, (MR_Integer) 0)));
#line 1226 "analysis.m"
    analysis__V_47_47 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_15, (MR_Integer) 1));
#line 1226 "analysis.m"
    analysis__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_15, (MR_Integer) 2)));
#line 1226 "analysis.m"
    analysis__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_15, (MR_Integer) 3)));
#line 1226 "analysis.m"
    analysis__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_15, (MR_Integer) 4)));
#line 1226 "analysis.m"
    analysis__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_15, (MR_Integer) 5)));
#line 1226 "analysis.m"
    analysis__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_15, (MR_Integer) 6)));
#line 1226 "analysis.m"
    analysis__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_15, (MR_Integer) 7)));
#line 1226 "analysis.m"
    analysis__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_15, (MR_Integer) 8)));
#line 1226 "analysis.m"
    analysis__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_15, (MR_Integer) 9)));
#line 1226 "analysis.m"
    analysis__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_15, (MR_Integer) 10)));
#line 1226 "analysis.m"
    {
#line 1226 "analysis.m"
      analysis__succeeded = mercury__set__contains_2_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, analysis__V_46_46, ((MR_Box) (analysis__ModuleName_8)));
    }
#line 1228 "analysis.m"
    if (analysis__succeeded)
#line 1227 "analysis.m"
      analysis__IsLocal_14 = (MR_Integer) 1;
#line 1228 "analysis.m"
    else
#line 1229 "analysis.m"
      analysis__IsLocal_14 = (MR_Integer) 0;
#line 701 "analysis.m"
    analysis__succeeded = (analysis__MakeAnalysisReg_13 == (MR_Integer) 0);
#line 701 "analysis.m"
    if (analysis__succeeded)
#line 702 "analysis.m"
      analysis__succeeded = (analysis__IsLocal_14 == (MR_Integer) 1);
#line 706 "analysis.m"
    if (analysis__succeeded)
#line 704 "analysis.m"
      {
#line 704 "analysis.m"
        analysis__record_request_2_7_p_0(analysis__TypeClassInfo_for_call_pattern_39, analysis__ThisModule_12, analysis__AnalysisName_7, analysis__ModuleName_8, analysis__FuncId_9, analysis__CallPattern_10, analysis__STATE_VARIABLE_Info_0_15, analysis__STATE_VARIABLE_Info_16);
#line 704 "analysis.m"
        return;
      }
#line 706 "analysis.m"
    else
#line 706 "analysis.m"
      *analysis__STATE_VARIABLE_Info_16 = analysis__STATE_VARIABLE_Info_0_15;
#line 690 "analysis.m"
  }
#line 264 "analysis.m"
}

#line 679 "analysis.m"
static MR_bool MR_CALL 
analysis__lookup_requests_5_p_0_1(
#line 679 "analysis.m"
  MR_Box analysis__closure_arg,
#line 679 "analysis.m"
  MR_Box analysis__wrapper_arg_1,
#line 679 "analysis.m"
  MR_Box * analysis__wrapper_arg_2)
#line 679 "analysis.m"
{
#line 679 "analysis.m"
  {
#line 679 "analysis.m"
    MR_bool analysis__succeeded;
#line 679 "analysis.m"
    MR_Box analysis__closure = analysis__closure_arg;

#line 679 "analysis.m"
    {
#line 679 "analysis.m"
      return analysis__succeeded = analysis__IntroducedFrom__func__lookup_requests__679__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 3))), ((MR_Word) analysis__wrapper_arg_1), analysis__wrapper_arg_2);
    }
#line 679 "analysis.m"
    return analysis__succeeded;
#line 679 "analysis.m"
  }
#line 679 "analysis.m"
}

#line 255 "analysis.m"
void MR_CALL 
analysis__lookup_requests_5_p_0(
#line 255 "analysis.m"
  MR_Word analysis__TypeClassInfo_for_call_pattern_47,
#line 255 "analysis.m"
  MR_Word analysis__Info_6,
#line 255 "analysis.m"
  MR_String analysis__AnalysisName_7,
#line 255 "analysis.m"
  MR_Word analysis__ModuleName_8,
#line 255 "analysis.m"
  MR_Word analysis__FuncId_9,
#line 255 "analysis.m"
  MR_Word * analysis__CallPatterns_10)
#line 255 "analysis.m"
{
#line 669 "analysis.m"
  {
#line 669 "analysis.m"
    MR_bool analysis__succeeded;
#line 670 "analysis.m"
    MR_Word analysis__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 2)));
#line 670 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_compiler_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 0)));
#line 670 "analysis.m"
    MR_Box analysis__V_29_29 = (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 1));
#line 670 "analysis.m"
    MR_Word analysis__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 3)));
#line 670 "analysis.m"
    MR_Word analysis__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 4)));
#line 670 "analysis.m"
    MR_Word analysis__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 5)));
#line 670 "analysis.m"
    MR_Word analysis__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 6)));
#line 670 "analysis.m"
    MR_Word analysis__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 7)));
#line 670 "analysis.m"
    MR_Word analysis__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 8)));
#line 670 "analysis.m"
    MR_Word analysis__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 9)));
#line 670 "analysis.m"
    MR_Word analysis__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 10)));
#line 686 "analysis.m"
    MR_Word analysis__CallPatterns0_12;
#line 676 "analysis.m"
    MR_Word analysis__TypeCtorInfo_52_52;
#line 676 "analysis.m"
    MR_Word analysis__TypeInfo_53_53;
#line 676 "analysis.m"
    MR_Word analysis__TypeCtorInfo_54_54;
#line 676 "analysis.m"
    MR_Word analysis__TypeInfo_55_55;
#line 676 "analysis.m"
    MR_Word analysis__ModuleRequests_11;
#line 676 "analysis.m"
    MR_Word analysis__V_20_20;
#line 676 "analysis.m"
    MR_Word analysis__V_21_21;
#line 676 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_compiler_49;
#line 676 "analysis.m"
    MR_Box analysis__V_38_38;
#line 676 "analysis.m"
    MR_Word analysis__V_39_39;
#line 676 "analysis.m"
    MR_Word analysis__V_40_40;
#line 676 "analysis.m"
    MR_Word analysis__V_41_41;
#line 676 "analysis.m"
    MR_Word analysis__V_42_42;
#line 676 "analysis.m"
    MR_Word analysis__V_43_43;
#line 676 "analysis.m"
    MR_Word analysis__V_44_44;
#line 676 "analysis.m"
    MR_Word analysis__V_45_45;
#line 676 "analysis.m"
    MR_Word analysis__V_46_46;
#line 676 "analysis.m"
    MR_Box analysis__conv0_ModuleRequests_11;
#line 677 "analysis.m"
    MR_Box analysis__conv1_V_21_21;
#line 677 "analysis.m"
    MR_Box analysis__conv2_CallPatterns0_12;

#line 670 "analysis.m"
    {
#line 670 "analysis.m"
      analysis__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(analysis__ModuleName_8, analysis__V_64_64);
    }
#line 672 "analysis.m"
    if (analysis__succeeded)
#line 671 "analysis.m"
      {
#line 671 "analysis.m"
      }
#line 672 "analysis.m"
    else
#line 673 "analysis.m"
      {
#line 673 "analysis.m"
        {
#line 673 "analysis.m"
          mercury__require__unexpected_3_p_0((MR_String) "analysis", (MR_String) "predicate \140analysis.lookup_requests\'/5", (MR_String) "not this_module");
#line 673 "analysis.m"
          return;
        }
#line 673 "analysis.m"
      }
#line 676 "analysis.m"
    analysis__TypeClassInfo_for_compiler_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 0)));
#line 676 "analysis.m"
    analysis__V_38_38 = (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 1));
#line 676 "analysis.m"
    analysis__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 2)));
#line 676 "analysis.m"
    analysis__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 3)));
#line 676 "analysis.m"
    analysis__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 4)));
#line 676 "analysis.m"
    analysis__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 5)));
#line 676 "analysis.m"
    analysis__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 6)));
#line 676 "analysis.m"
    analysis__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 7)));
#line 676 "analysis.m"
    analysis__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 8)));
#line 676 "analysis.m"
    analysis__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 9)));
#line 676 "analysis.m"
    analysis__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 10)));
#line 676 "analysis.m"
    {
#line 676 "analysis.m"
      analysis__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &analysis_scalar_common_2[1], analysis__V_20_20, ((MR_Box) (analysis__ModuleName_8)), &analysis__conv0_ModuleRequests_11);
    }
#line 676 "analysis.m"
    if (analysis__succeeded)
#line 676 "analysis.m"
      {
#line 676 "analysis.m"
        analysis__ModuleRequests_11 = ((MR_Word) analysis__conv0_ModuleRequests_11);
#line 676 "analysis.m"
        analysis__succeeded = MR_TRUE;
#line 676 "analysis.m"
      }
#line 676 "analysis.m"
    if (analysis__succeeded)
#line 676 "analysis.m"
      {
#line 16596 "analysis.c"
        analysis__TypeCtorInfo_52_52 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 16598 "analysis.c"
        analysis__TypeInfo_53_53 = (MR_Word) &analysis_scalar_common_2[0];
#line 677 "analysis.m"
        {
#line 677 "analysis.m"
          analysis__succeeded = mercury__map__elem_2_f_0(analysis__TypeCtorInfo_52_52, analysis__TypeInfo_53_53, ((MR_Box) (analysis__AnalysisName_7)), analysis__ModuleRequests_11, &analysis__conv1_V_21_21);
        }
#line 677 "analysis.m"
        if (analysis__succeeded)
#line 677 "analysis.m"
          {
#line 677 "analysis.m"
            analysis__V_21_21 = ((MR_Word) analysis__conv1_V_21_21);
#line 677 "analysis.m"
            analysis__succeeded = MR_TRUE;
#line 677 "analysis.m"
          }
#line 676 "analysis.m"
        if (analysis__succeeded)
#line 676 "analysis.m"
          {
#line 16619 "analysis.c"
            analysis__TypeCtorInfo_54_54 = (MR_Word) &analysis__analysis__type_ctor_info_func_id_0;
#line 16621 "analysis.c"
            analysis__TypeInfo_55_55 = (MR_Word) &analysis_scalar_common_1[0];
#line 677 "analysis.m"
            {
#line 677 "analysis.m"
              analysis__succeeded = mercury__map__elem_2_f_0(analysis__TypeCtorInfo_54_54, analysis__TypeInfo_55_55, ((MR_Box) (analysis__FuncId_9)), analysis__V_21_21, &analysis__conv2_CallPatterns0_12);
            }
#line 677 "analysis.m"
            if (analysis__succeeded)
#line 677 "analysis.m"
              {
#line 677 "analysis.m"
                analysis__CallPatterns0_12 = ((MR_Word) analysis__conv2_CallPatterns0_12);
#line 677 "analysis.m"
                analysis__succeeded = MR_TRUE;
#line 677 "analysis.m"
              }
#line 676 "analysis.m"
          }
#line 676 "analysis.m"
      }
#line 686 "analysis.m"
    if (analysis__succeeded)
#line 682 "analysis.m"
      {
#line 682 "analysis.m"
        MR_Word analysis__TypeInfo_58_58;
#line 682 "analysis.m"
        MR_Word analysis__TypeInfo_63_63;
#line 682 "analysis.m"
        MR_Word analysis__CallPatterns1_13;
#line 682 "analysis.m"
        MR_Word analysis__V_22_22;

#line 16655 "analysis.c"
        {
#line 16657 "analysis.c"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_call_pattern_47, (MR_Integer) 4, &analysis__TypeInfo_58_58);
        }
#line 679 "analysis.m"
        {
#line 679 "analysis.m"
          analysis__V_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 679 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__V_22_22, 0) = ((MR_Box) (&analysis_scalar_common_4[1]));
#line 679 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__V_22_22, 1) = ((MR_Box) (analysis__lookup_requests_5_p_0_1));
#line 679 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__V_22_22, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 679 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__V_22_22, 3) = ((MR_Box) (analysis__TypeClassInfo_for_call_pattern_47));
#line 679 "analysis.m"
        }
#line 679 "analysis.m"
        {
#line 679 "analysis.m"
          analysis__CallPatterns1_13 = mercury__list__filter_map_2_f_0((MR_Word) &analysis__analysis__type_ctor_info_analysis_request_0, analysis__TypeInfo_58_58, analysis__V_22_22, analysis__CallPatterns0_12);
        }
#line 16679 "analysis.c"
        {
#line 16681 "analysis.c"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_call_pattern_47, (MR_Integer) 4, &analysis__TypeInfo_63_63);
        }
#line 685 "analysis.m"
        {
#line 685 "analysis.m"
          mercury__list__sort_and_remove_dups_2_p_0(analysis__TypeInfo_63_63, analysis__CallPatterns1_13, analysis__CallPatterns_10);
#line 685 "analysis.m"
          return;
        }
#line 682 "analysis.m"
      }
#line 686 "analysis.m"
    else
#line 687 "analysis.m"
      *analysis__CallPatterns_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 669 "analysis.m"
  }
#line 255 "analysis.m"
}

#line 248 "analysis.m"
void MR_CALL 
analysis__record_dependency_7_p_0(
#line 248 "analysis.m"
  MR_Word analysis__TypeClassInfo_for_analysis_47,
#line 248 "analysis.m"
  MR_Word analysis__CalleeModuleName_8,
#line 248 "analysis.m"
  MR_Word analysis__FuncId_9,
#line 248 "analysis.m"
  MR_Box analysis__FuncInfo_10,
#line 248 "analysis.m"
  MR_Box analysis__Call_11,
#line 248 "analysis.m"
  MR_Word analysis__STATE_VARIABLE_Info_0_21,
#line 248 "analysis.m"
  MR_Word * analysis__STATE_VARIABLE_Info_22)
#line 248 "analysis.m"
{
#line 741 "analysis.m"
  {
#line 741 "analysis.m"
    MR_bool analysis__succeeded;
#line 741 "analysis.m"
    MR_Word analysis__ThisModule_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 2)));
#line 741 "analysis.m"
    MR_Word analysis__MakeAnalysisReg_15;
#line 741 "analysis.m"
    MR_Word analysis__IsLocal_16;
#line 742 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_compiler_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 0)));
#line 742 "analysis.m"
    MR_Box analysis__V_29_29 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 1));
#line 742 "analysis.m"
    MR_Word analysis__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 3)));
#line 742 "analysis.m"
    MR_Word analysis__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 4)));
#line 742 "analysis.m"
    MR_Word analysis__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 5)));
#line 742 "analysis.m"
    MR_Word analysis__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 6)));
#line 742 "analysis.m"
    MR_Word analysis__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 7)));
#line 742 "analysis.m"
    MR_Word analysis__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 8)));
#line 742 "analysis.m"
    MR_Word analysis__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 9)));
#line 742 "analysis.m"
    MR_Word analysis__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 10)));
#line 749 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_compiler_49;
#line 749 "analysis.m"
    MR_Box analysis__V_38_38;
#line 749 "analysis.m"
    MR_Word analysis__V_39_39;
#line 749 "analysis.m"
    MR_Word analysis__V_40_40;
#line 749 "analysis.m"
    MR_Word analysis__V_41_41;
#line 749 "analysis.m"
    MR_Word analysis__V_42_42;
#line 749 "analysis.m"
    MR_Word analysis__V_43_43;
#line 749 "analysis.m"
    MR_Word analysis__V_44_44;
#line 749 "analysis.m"
    MR_Word analysis__V_45_45;
#line 749 "analysis.m"
    MR_Word analysis__V_46_46;
#line 1226 "analysis.m"
    MR_Word analysis__V_65_65;
#line 1226 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_compiler_75;
#line 1226 "analysis.m"
    MR_Box analysis__V_66_66;
#line 1226 "analysis.m"
    MR_Word analysis__V_67_67;
#line 1226 "analysis.m"
    MR_Word analysis__V_68_68;
#line 1226 "analysis.m"
    MR_Word analysis__V_69_69;
#line 1226 "analysis.m"
    MR_Word analysis__V_70_70;
#line 1226 "analysis.m"
    MR_Word analysis__V_71_71;
#line 1226 "analysis.m"
    MR_Word analysis__V_72_72;
#line 1226 "analysis.m"
    MR_Word analysis__V_73_73;
#line 1226 "analysis.m"
    MR_Word analysis__V_74_74;

#line 743 "analysis.m"
    {
#line 743 "analysis.m"
      analysis__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(analysis__ThisModule_14, analysis__CalleeModuleName_8);
    }
#line 745 "analysis.m"
    if (analysis__succeeded)
#line 744 "analysis.m"
      {
#line 744 "analysis.m"
        {
#line 744 "analysis.m"
          mercury__require__unexpected_3_p_0((MR_String) "analysis", (MR_String) "predicate \140analysis.record_dependency\'/7", (MR_String) "dependency on self");
#line 744 "analysis.m"
          return;
        }
#line 744 "analysis.m"
      }
#line 745 "analysis.m"
    else
#line 746 "analysis.m"
      {
#line 746 "analysis.m"
      }
#line 749 "analysis.m"
    analysis__TypeClassInfo_for_compiler_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 0)));
#line 749 "analysis.m"
    analysis__V_38_38 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 1));
#line 749 "analysis.m"
    analysis__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 2)));
#line 749 "analysis.m"
    analysis__MakeAnalysisReg_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 3)));
#line 749 "analysis.m"
    analysis__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 4)));
#line 749 "analysis.m"
    analysis__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 5)));
#line 749 "analysis.m"
    analysis__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 6)));
#line 749 "analysis.m"
    analysis__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 7)));
#line 749 "analysis.m"
    analysis__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 8)));
#line 749 "analysis.m"
    analysis__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 9)));
#line 749 "analysis.m"
    analysis__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 10)));
#line 1226 "analysis.m"
    analysis__TypeClassInfo_for_compiler_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 0)));
#line 1226 "analysis.m"
    analysis__V_66_66 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 1));
#line 1226 "analysis.m"
    analysis__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 2)));
#line 1226 "analysis.m"
    analysis__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 3)));
#line 1226 "analysis.m"
    analysis__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 4)));
#line 1226 "analysis.m"
    analysis__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 5)));
#line 1226 "analysis.m"
    analysis__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 6)));
#line 1226 "analysis.m"
    analysis__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 7)));
#line 1226 "analysis.m"
    analysis__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 8)));
#line 1226 "analysis.m"
    analysis__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 9)));
#line 1226 "analysis.m"
    analysis__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 10)));
#line 1226 "analysis.m"
    {
#line 1226 "analysis.m"
      analysis__succeeded = mercury__set__contains_2_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, analysis__V_65_65, ((MR_Box) (analysis__CalleeModuleName_8)));
    }
#line 1228 "analysis.m"
    if (analysis__succeeded)
#line 1227 "analysis.m"
      analysis__IsLocal_16 = (MR_Integer) 1;
#line 1228 "analysis.m"
    else
#line 1229 "analysis.m"
      analysis__IsLocal_16 = (MR_Integer) 0;
#line 752 "analysis.m"
    analysis__succeeded = (analysis__MakeAnalysisReg_15 == (MR_Integer) 0);
#line 752 "analysis.m"
    if (analysis__succeeded)
#line 753 "analysis.m"
      analysis__succeeded = (analysis__IsLocal_16 == (MR_Integer) 1);
#line 770 "analysis.m"
    if (analysis__succeeded)
#line 755 "analysis.m"
      {
#line 755 "analysis.m"
        MR_Word analysis__TypeClassInfo_for_call_pattern_50;
#line 755 "analysis.m"
        MR_String analysis__AnalysisName_17;
#line 755 "analysis.m"
        MR_Word analysis__MaybeResult_18;
#line 755 "analysis.m"
        MR_Word analysis__STATE_VARIABLE_Info_26_26;
#line 16893 "analysis.c"
        MR_Box analysis__V_59_59;
#line 16895 "analysis.c"
        MR_Box MR_CALL (* analysis__func_0)(MR_Box) = ((MR_Box MR_CALL (*)(MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), analysis__TypeClassInfo_for_analysis_47, (MR_Integer) 0)), (MR_Integer) 5)));
#line 16897 "analysis.c"
        MR_Box analysis__conv1_AnalysisName_17;

#line 16900 "analysis.c"
        {
#line 16902 "analysis.c"
          analysis__conv1_AnalysisName_17 = analysis__func_0(((MR_Box) analysis__TypeClassInfo_for_analysis_47));
        }
#line 16905 "analysis.c"
        analysis__AnalysisName_17 = ((MR_String) analysis__conv1_AnalysisName_17);
#line 16907 "analysis.c"
        {
#line 16909 "analysis.c"
          mercury__private_builtin__superclass_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_47, (MR_Integer) 1, &analysis__TypeClassInfo_for_call_pattern_50);
        }
#line 756 "analysis.m"
        {
#line 756 "analysis.m"
          analysis__record_dependency_2_7_p_0(analysis__TypeClassInfo_for_call_pattern_50, analysis__ThisModule_14, analysis__AnalysisName_17, analysis__CalleeModuleName_8, analysis__FuncId_9, analysis__Call_11, analysis__STATE_VARIABLE_Info_0_21, &analysis__STATE_VARIABLE_Info_26_26);
        }
#line 761 "analysis.m"
        {
#line 761 "analysis.m"
          analysis__lookup_exactly_matching_result_even_from_invalid_modules_6_p_0(analysis__TypeClassInfo_for_analysis_47, analysis__STATE_VARIABLE_Info_26_26, analysis__CalleeModuleName_8, analysis__FuncId_9, analysis__FuncInfo_10, analysis__Call_11, &analysis__MaybeResult_18);
        }
#line 766 "analysis.m"
        if ((analysis__MaybeResult_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 764 "analysis.m"
          {
#line 764 "analysis.m"
            MR_Word analysis__TypeClassInfo_for_call_pattern_52;

#line 16929 "analysis.c"
            {
#line 16931 "analysis.c"
              mercury__private_builtin__superclass_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_47, (MR_Integer) 1, &analysis__TypeClassInfo_for_call_pattern_52);
            }
#line 765 "analysis.m"
            {
#line 765 "analysis.m"
              analysis__record_request_6_p_0(analysis__TypeClassInfo_for_call_pattern_52, analysis__AnalysisName_17, analysis__CalleeModuleName_8, analysis__FuncId_9, analysis__Call_11, analysis__STATE_VARIABLE_Info_26_26, analysis__STATE_VARIABLE_Info_22);
#line 765 "analysis.m"
              return;
            }
#line 764 "analysis.m"
          }
#line 766 "analysis.m"
        else
#line 767 "analysis.m"
          {
#line 767 "analysis.m"
            MR_Word analysis__TypeInfo_54_54;
#line 767 "analysis.m"
            MR_Word analysis__TypeInfo_56_56;
#line 767 "analysis.m"
            MR_Word analysis__TypeInfo_58_58;
#line 768 "analysis.m"
            MR_Word analysis__V_27_27;
#line 768 "analysis.m"
            MR_Word analysis__V_60_60;

#line 16958 "analysis.c"
            {
#line 16960 "analysis.c"
              mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_47, (MR_Integer) 4, &analysis__TypeInfo_54_54);
            }
#line 16963 "analysis.c"
            {
#line 16965 "analysis.c"
              mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_47, (MR_Integer) 5, &analysis__TypeInfo_56_56);
            }
#line 16968 "analysis.c"
            {
#line 16970 "analysis.c"
              analysis__TypeInfo_58_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 16972 "analysis.c"
              MR_hl_field(MR_mktag(0), analysis__TypeInfo_58_58, 0) = ((MR_Box) (&analysis__analysis__type_ctor_info_analysis_result_2));
#line 16974 "analysis.c"
              MR_hl_field(MR_mktag(0), analysis__TypeInfo_58_58, 1) = ((MR_Box) (analysis__TypeInfo_54_54));
#line 16976 "analysis.c"
              MR_hl_field(MR_mktag(0), analysis__TypeInfo_58_58, 2) = ((MR_Box) (analysis__TypeInfo_56_56));
#line 16978 "analysis.c"
            }
#line 768 "analysis.m"
            {
#line 768 "analysis.m"
              mercury__type_desc__same_type_2_p_0(analysis__TypeInfo_58_58);
            }
#line 767 "analysis.m"
            *analysis__STATE_VARIABLE_Info_22 = analysis__STATE_VARIABLE_Info_26_26;
#line 767 "analysis.m"
          }
#line 755 "analysis.m"
      }
#line 770 "analysis.m"
    else
#line 770 "analysis.m"
      *analysis__STATE_VARIABLE_Info_22 = analysis__STATE_VARIABLE_Info_0_21;
#line 741 "analysis.m"
  }
#line 248 "analysis.m"
}

#line 237 "analysis.m"
void MR_CALL 
analysis__record_result_7_p_0(
#line 237 "analysis.m"
  MR_Word analysis__TypeClassInfo_for_analysis_60,
#line 237 "analysis.m"
  MR_Word analysis__ModuleName_8,
#line 237 "analysis.m"
  MR_Word analysis__FuncId_9,
#line 237 "analysis.m"
  MR_Box analysis__CallPattern_10,
#line 237 "analysis.m"
  MR_Box analysis__AnswerPattern_11,
#line 237 "analysis.m"
  MR_Word analysis__Status_12,
#line 237 "analysis.m"
  MR_Word analysis__STATE_VARIABLE_Info_0_17,
#line 237 "analysis.m"
  MR_Word * analysis__STATE_VARIABLE_Info_18)
#line 237 "analysis.m"
{
#line 623 "analysis.m"
  {
#line 623 "analysis.m"
    MR_bool analysis__succeeded;
#line 623 "analysis.m"
    MR_Word analysis__MakeAnalysisReg_14;
#line 624 "analysis.m"
    MR_Word analysis__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 2)));
#line 624 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_compiler_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 0)));
#line 624 "analysis.m"
    MR_Box analysis__V_23_23 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 1));
#line 624 "analysis.m"
    MR_Word analysis__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 3)));
#line 624 "analysis.m"
    MR_Word analysis__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 4)));
#line 624 "analysis.m"
    MR_Word analysis__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 5)));
#line 624 "analysis.m"
    MR_Word analysis__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 6)));
#line 624 "analysis.m"
    MR_Word analysis__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 7)));
#line 624 "analysis.m"
    MR_Word analysis__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 8)));
#line 624 "analysis.m"
    MR_Word analysis__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 9)));
#line 624 "analysis.m"
    MR_Word analysis__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 10)));
#line 631 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_compiler_62;
#line 631 "analysis.m"
    MR_Box analysis__V_32_32;
#line 631 "analysis.m"
    MR_Word analysis__V_33_33;
#line 631 "analysis.m"
    MR_Word analysis__V_34_34;
#line 631 "analysis.m"
    MR_Word analysis__V_35_35;
#line 631 "analysis.m"
    MR_Word analysis__V_36_36;
#line 631 "analysis.m"
    MR_Word analysis__V_37_37;
#line 631 "analysis.m"
    MR_Word analysis__V_38_38;
#line 631 "analysis.m"
    MR_Word analysis__V_39_39;
#line 631 "analysis.m"
    MR_Word analysis__V_40_40;

#line 624 "analysis.m"
    {
#line 624 "analysis.m"
      analysis__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(analysis__ModuleName_8, analysis__V_65_65);
    }
#line 626 "analysis.m"
    if (analysis__succeeded)
#line 625 "analysis.m"
      {
#line 625 "analysis.m"
      }
#line 626 "analysis.m"
    else
#line 627 "analysis.m"
      {
#line 627 "analysis.m"
        {
#line 627 "analysis.m"
          mercury__require__unexpected_3_p_0((MR_String) "analysis", (MR_String) "predicate \140analysis.record_result\'/7", (MR_String) "recording result for procedure defined in another module");
#line 627 "analysis.m"
          return;
        }
#line 627 "analysis.m"
      }
#line 631 "analysis.m"
    analysis__TypeClassInfo_for_compiler_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 0)));
#line 631 "analysis.m"
    analysis__V_32_32 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 1));
#line 631 "analysis.m"
    analysis__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 2)));
#line 631 "analysis.m"
    analysis__MakeAnalysisReg_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 3)));
#line 631 "analysis.m"
    analysis__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 4)));
#line 631 "analysis.m"
    analysis__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 5)));
#line 631 "analysis.m"
    analysis__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 6)));
#line 631 "analysis.m"
    analysis__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 7)));
#line 631 "analysis.m"
    analysis__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 8)));
#line 631 "analysis.m"
    analysis__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 9)));
#line 631 "analysis.m"
    analysis__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 10)));
#line 638 "analysis.m"
#line 638 "analysis.m"
    switch (analysis__MakeAnalysisReg_14) {
#line 638 "analysis.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 638 "analysis.m"
      case (MR_Integer) 0:
#line 633 "analysis.m"
        {
#line 633 "analysis.m"
          MR_Word analysis__Map0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 8)));
#line 633 "analysis.m"
          MR_Word analysis__Map_16;
#line 634 "analysis.m"
          MR_Word analysis__TypeClassInfo_for_compiler_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 0)));
#line 634 "analysis.m"
          MR_Box analysis__V_41_41 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 1));
#line 634 "analysis.m"
          MR_Word analysis__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 2)));
#line 634 "analysis.m"
          MR_Word analysis__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 3)));
#line 634 "analysis.m"
          MR_Word analysis__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 4)));
#line 634 "analysis.m"
          MR_Word analysis__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 5)));
#line 634 "analysis.m"
          MR_Word analysis__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 6)));
#line 634 "analysis.m"
          MR_Word analysis__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 7)));
#line 634 "analysis.m"
          MR_Word analysis__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 9)));
#line 634 "analysis.m"
          MR_Word analysis__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 10)));
#line 637 "analysis.m"
          MR_Word analysis__TypeClassInfo_for_compiler_64;
#line 637 "analysis.m"
          MR_Box analysis__V_50_50;
#line 637 "analysis.m"
          MR_Word analysis__V_51_51;
#line 637 "analysis.m"
          MR_Word analysis__V_52_52;
#line 637 "analysis.m"
          MR_Word analysis__V_53_53;
#line 637 "analysis.m"
          MR_Word analysis__V_54_54;
#line 637 "analysis.m"
          MR_Word analysis__V_55_55;
#line 637 "analysis.m"
          MR_Word analysis__V_56_56;
#line 637 "analysis.m"
          MR_Word analysis__V_58_58;
#line 637 "analysis.m"
          MR_Word analysis__V_59_59;
#line 637 "analysis.m"
          MR_Word analysis__V_57_57;

#line 635 "analysis.m"
          {
#line 635 "analysis.m"
            analysis__record_result_in_analysis_map_6_p_0(analysis__TypeClassInfo_for_analysis_60, analysis__FuncId_9, analysis__CallPattern_10, analysis__AnswerPattern_11, analysis__Status_12, analysis__Map0_15, &analysis__Map_16);
          }
#line 637 "analysis.m"
          analysis__TypeClassInfo_for_compiler_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 0)));
#line 637 "analysis.m"
          analysis__V_50_50 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 1));
#line 637 "analysis.m"
          analysis__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 2)));
#line 637 "analysis.m"
          analysis__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 3)));
#line 637 "analysis.m"
          analysis__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 4)));
#line 637 "analysis.m"
          analysis__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 5)));
#line 637 "analysis.m"
          analysis__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 6)));
#line 637 "analysis.m"
          analysis__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 7)));
#line 637 "analysis.m"
          analysis__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 8)));
#line 637 "analysis.m"
          analysis__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 9)));
#line 637 "analysis.m"
          analysis__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 10)));
#line 637 "analysis.m"
          {
#line 637 "analysis.m"
            MR_Word base;
#line 637 "analysis.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 637 "analysis.m"
            *analysis__STATE_VARIABLE_Info_18 = base;
#line 637 "analysis.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (analysis__TypeClassInfo_for_compiler_64));
#line 637 "analysis.m"
            MR_hl_field(MR_mktag(0), base, 1) = analysis__V_50_50;
#line 637 "analysis.m"
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (analysis__V_51_51));
#line 637 "analysis.m"
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (analysis__V_52_52));
#line 637 "analysis.m"
            MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (analysis__V_53_53));
#line 637 "analysis.m"
            MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (analysis__V_54_54));
#line 637 "analysis.m"
            MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (analysis__V_55_55));
#line 637 "analysis.m"
            MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (analysis__V_56_56));
#line 637 "analysis.m"
            MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (analysis__Map_16));
#line 637 "analysis.m"
            MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (analysis__V_58_58));
#line 637 "analysis.m"
            MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (analysis__V_59_59));
#line 637 "analysis.m"
          }
#line 633 "analysis.m"
        }
#line 638 "analysis.m"
        break;
#line 638 "analysis.m"
      case (MR_Integer) 1:
#line 639 "analysis.m"
        *analysis__STATE_VARIABLE_Info_18 = analysis__STATE_VARIABLE_Info_0_17;
#line 638 "analysis.m"
        break;
#line 638 "analysis.m"
    }
#line 623 "analysis.m"
  }
#line 237 "analysis.m"
}

#line 577 "analysis.m"
static void MR_CALL 
analysis__lookup_best_result_6_p_0_1(
#line 577 "analysis.m"
  MR_Box analysis__closure_arg,
#line 577 "analysis.m"
  MR_Box analysis__wrapper_arg_1,
#line 577 "analysis.m"
  MR_Box analysis__wrapper_arg_2,
#line 577 "analysis.m"
  MR_Box * analysis__wrapper_arg_3)
#line 577 "analysis.m"
{
#line 577 "analysis.m"
  {
#line 577 "analysis.m"
    MR_Box analysis__closure = analysis__closure_arg;
#line 577 "analysis.m"
    MR_Word analysis__conv0_Best_8;

#line 577 "analysis.m"
    {
#line 577 "analysis.m"
      analysis__more_precise_answer_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 3))), (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 4)), ((MR_Word) analysis__wrapper_arg_1), ((MR_Word) analysis__wrapper_arg_2), &analysis__conv0_Best_8);
    }
#line 577 "analysis.m"
    *analysis__wrapper_arg_3 = ((MR_Box) (analysis__conv0_Best_8));
#line 577 "analysis.m"
  }
#line 577 "analysis.m"
}

#line 229 "analysis.m"
void MR_CALL 
analysis__lookup_best_result_6_p_0(
#line 229 "analysis.m"
  MR_Word analysis__TypeClassInfo_for_analysis_35,
#line 229 "analysis.m"
  MR_Word analysis__Info_7,
#line 229 "analysis.m"
  MR_Word analysis__ModuleName_8,
#line 229 "analysis.m"
  MR_Word analysis__FuncId_9,
#line 229 "analysis.m"
  MR_Box analysis__FuncInfo_10,
#line 229 "analysis.m"
  MR_Box analysis__Call_11,
#line 229 "analysis.m"
  MR_Word * analysis__MaybeBestResult_12)
#line 229 "analysis.m"
{
#line 560 "analysis.m"
  {
#line 560 "analysis.m"
    MR_bool analysis__succeeded;
#line 560 "analysis.m"
    MR_Word analysis__MatchingResults_14;
#line 561 "analysis.m"
    MR_Word analysis__Debug_51;

#line 1382 "analysis.m"
{
#define MR_PROC_LABEL analysis__lookup_best_result_6_p_0


		{
#line 1382 "analysis.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&analysis__mutable_variable_debug_analysis_lock,
                    "analysis__mutable_variable_debug_analysis_lock");
#endif

#line 17320 "analysis.c"

		;}
#undef MR_PROC_LABEL
#line 1382 "analysis.m"
}
#line 1382 "analysis.m"
{
#define MR_PROC_LABEL analysis__lookup_best_result_6_p_0

	MR_Word X;

		{
#line 1382 "analysis.m"
X = analysis__mutable_variable_debug_analysis;

#line 17336 "analysis.c"

		;}
#undef MR_PROC_LABEL
	 analysis__Debug_51  = X;
#line 1382 "analysis.m"
}
#line 1382 "analysis.m"
{
#define MR_PROC_LABEL analysis__lookup_best_result_6_p_0


		{
#line 1382 "analysis.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&analysis__mutable_variable_debug_analysis_lock,
                    "analysis__mutable_variable_debug_analysis_lock");
#endif

#line 17355 "analysis.c"

		;}
#undef MR_PROC_LABEL
#line 1382 "analysis.m"
}
#line 1395 "analysis.m"
#line 1395 "analysis.m"
    switch (analysis__Debug_51) {
#line 1395 "analysis.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1395 "analysis.m"
      case (MR_Integer) 0:
#line 1396 "analysis.m"
        {
#line 1396 "analysis.m"
        }
#line 1395 "analysis.m"
        break;
#line 1395 "analysis.m"
      case (MR_Integer) 1:
#line 1394 "analysis.m"
        {
#line 1394 "analysis.m"
          analysis__IntroducedFrom__pred__lookup_best_result__562__1_4_p_0(analysis__ModuleName_8, analysis__FuncId_9);
        }
#line 1395 "analysis.m"
        break;
#line 1395 "analysis.m"
    }
#line 570 "analysis.m"
    {
#line 570 "analysis.m"
      analysis__lookup_matching_results_6_p_0(analysis__TypeClassInfo_for_analysis_35, analysis__Info_7, analysis__ModuleName_8, analysis__FuncId_9, analysis__FuncInfo_10, analysis__Call_11, &analysis__MatchingResults_14);
    }
#line 575 "analysis.m"
    if ((analysis__MatchingResults_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 574 "analysis.m"
      *analysis__MaybeBestResult_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 575 "analysis.m"
    else
#line 576 "analysis.m"
      {
#line 576 "analysis.m"
        MR_Word analysis__TypeInfo_42_42;
#line 576 "analysis.m"
        MR_Word analysis__TypeInfo_44_44;
#line 576 "analysis.m"
        MR_Word analysis__TypeInfo_46_46;
#line 576 "analysis.m"
        MR_Word analysis__Result_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), analysis__MatchingResults_14, (MR_Integer) 0)));
#line 576 "analysis.m"
        MR_Word analysis__Results_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), analysis__MatchingResults_14, (MR_Integer) 1)));
#line 576 "analysis.m"
        MR_Word analysis__BestResult_17;
#line 576 "analysis.m"
        MR_Word analysis__V_32_32;
#line 577 "analysis.m"
        MR_Box analysis__conv1_BestResult_17;

#line 577 "analysis.m"
        {
#line 577 "analysis.m"
          analysis__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 577 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__V_32_32, 0) = ((MR_Box) (&analysis_scalar_common_7[0]));
#line 577 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__V_32_32, 1) = ((MR_Box) (analysis__lookup_best_result_6_p_0_1));
#line 577 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__V_32_32, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 577 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__V_32_32, 3) = ((MR_Box) (analysis__TypeClassInfo_for_analysis_35));
#line 577 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__V_32_32, 4) = analysis__FuncInfo_10;
#line 577 "analysis.m"
        }
#line 17431 "analysis.c"
        {
#line 17433 "analysis.c"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_35, (MR_Integer) 4, &analysis__TypeInfo_42_42);
        }
#line 17436 "analysis.c"
        {
#line 17438 "analysis.c"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_35, (MR_Integer) 5, &analysis__TypeInfo_44_44);
        }
#line 17441 "analysis.c"
        {
#line 17443 "analysis.c"
          analysis__TypeInfo_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 17445 "analysis.c"
          MR_hl_field(MR_mktag(0), analysis__TypeInfo_46_46, 0) = ((MR_Box) (&analysis__analysis__type_ctor_info_analysis_result_2));
#line 17447 "analysis.c"
          MR_hl_field(MR_mktag(0), analysis__TypeInfo_46_46, 1) = ((MR_Box) (analysis__TypeInfo_42_42));
#line 17449 "analysis.c"
          MR_hl_field(MR_mktag(0), analysis__TypeInfo_46_46, 2) = ((MR_Box) (analysis__TypeInfo_44_44));
#line 17451 "analysis.c"
        }
#line 577 "analysis.m"
        {
#line 577 "analysis.m"
          mercury__list__foldl_4_p_0(analysis__TypeInfo_46_46, analysis__TypeInfo_46_46, (MR_Word) analysis__V_32_32, analysis__Results_16, ((MR_Box) (analysis__Result_15)), &analysis__conv1_BestResult_17);
        }
#line 577 "analysis.m"
        analysis__BestResult_17 = ((MR_Word) analysis__conv1_BestResult_17);
#line 578 "analysis.m"
        {
#line 578 "analysis.m"
          MR_Word base;
#line 578 "analysis.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 578 "analysis.m"
          *analysis__MaybeBestResult_12 = base;
#line 578 "analysis.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (analysis__BestResult_17));
#line 578 "analysis.m"
        }
#line 576 "analysis.m"
      }
#line 560 "analysis.m"
  }
#line 229 "analysis.m"
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
      return analysis__succeeded = analysis__IntroducedFrom__pred__lookup_matching_results__551__1_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 3))), (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 4)), (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 5)), ((MR_Word) analysis__wrapper_arg_1));
    }
#line 551 "analysis.m"
    return analysis__succeeded;
#line 551 "analysis.m"
  }
#line 551 "analysis.m"
}

#line 214 "analysis.m"
void MR_CALL 
analysis__lookup_matching_results_6_p_0(
#line 214 "analysis.m"
  MR_Word analysis__TypeClassInfo_for_analysis_21,
#line 214 "analysis.m"
  MR_Word analysis__Info_7,
#line 214 "analysis.m"
  MR_Word analysis__ModuleName_8,
#line 214 "analysis.m"
  MR_Word analysis__FuncId_9,
#line 214 "analysis.m"
  MR_Box analysis__FuncInfo_10,
#line 214 "analysis.m"
  MR_Box analysis__Call_11,
#line 214 "analysis.m"
  MR_Word * analysis__ResultList_12)
#line 214 "analysis.m"
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

#line 492 "analysis.m"
    {
#line 492 "analysis.m"
      analysis__lookup_results_1_5_p_0(analysis__TypeClassInfo_for_analysis_21, analysis__Info_7, analysis__ModuleName_8, analysis__FuncId_9, (MR_Integer) 0, &analysis__AllResultsList_13);
    }
#line 17546 "analysis.c"
    {
#line 17548 "analysis.c"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_21, (MR_Integer) 4, &analysis__TypeInfo_23_23);
    }
#line 17551 "analysis.c"
    {
#line 17553 "analysis.c"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_21, (MR_Integer) 5, &analysis__TypeInfo_25_25);
    }
#line 17556 "analysis.c"
    {
#line 17558 "analysis.c"
      analysis__TypeInfo_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 17560 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_27_27, 0) = ((MR_Box) (&analysis__analysis__type_ctor_info_analysis_result_2));
#line 17562 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_27_27, 1) = ((MR_Box) (analysis__TypeInfo_23_23));
#line 17564 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_27_27, 2) = ((MR_Box) (analysis__TypeInfo_25_25));
#line 17566 "analysis.c"
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
#line 214 "analysis.m"
}

#line 203 "analysis.m"
void MR_CALL 
analysis__lookup_results_4_p_0(
#line 203 "analysis.m"
  MR_Word analysis__TypeClassInfo_for_analysis_10,
#line 203 "analysis.m"
  MR_Word analysis__Info_5,
#line 203 "analysis.m"
  MR_Word analysis__ModuleName_6,
#line 203 "analysis.m"
  MR_Word analysis__FuncId_7,
#line 203 "analysis.m"
  MR_Word * analysis__ResultList_8)
#line 203 "analysis.m"
{
#line 490 "analysis.m"
  {
#line 490 "analysis.m"
    MR_bool analysis__succeeded;

#line 492 "analysis.m"
    {
#line 492 "analysis.m"
      analysis__lookup_results_1_5_p_0(analysis__TypeClassInfo_for_analysis_10, analysis__Info_5, analysis__ModuleName_6, analysis__FuncId_7, (MR_Integer) 0, analysis__ResultList_8);
#line 492 "analysis.m"
      return;
    }
#line 490 "analysis.m"
  }
#line 203 "analysis.m"
}

#line 481 "analysis.m"
static MR_Box MR_CALL 
analysis__lookup_existing_call_patterns_5_p_0_1(
#line 481 "analysis.m"
  MR_Box analysis__closure_arg,
#line 481 "analysis.m"
  MR_Box analysis__wrapper_arg_1)
#line 481 "analysis.m"
{
#line 481 "analysis.m"
  {
#line 481 "analysis.m"
    MR_Box analysis__wrapper_arg_2;
#line 481 "analysis.m"
    MR_Box analysis__closure = analysis__closure_arg;

#line 481 "analysis.m"
    {
#line 481 "analysis.m"
      analysis__wrapper_arg_2 = analysis__IntroducedFrom__func__lookup_existing_call_patterns__481__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 3))), ((MR_Word) analysis__wrapper_arg_1));
    }
#line 481 "analysis.m"
    return analysis__wrapper_arg_2;
#line 481 "analysis.m"
  }
#line 481 "analysis.m"
}

#line 193 "analysis.m"
void MR_CALL 
analysis__lookup_existing_call_patterns_5_p_0(
#line 193 "analysis.m"
  MR_Word analysis__TypeClassInfo_for_call_pattern_46,
#line 193 "analysis.m"
  MR_Word analysis__Info_6,
#line 193 "analysis.m"
  MR_String analysis__AnalysisName_7,
#line 193 "analysis.m"
  MR_Word analysis__ModuleName_8,
#line 193 "analysis.m"
  MR_Word analysis__FuncId_9,
#line 193 "analysis.m"
  MR_Word * analysis__Calls_10)
#line 193 "analysis.m"
{
#line 470 "analysis.m"
  {
#line 470 "analysis.m"
    MR_bool analysis__succeeded;
#line 470 "analysis.m"
    MR_Word analysis__Map_11;
#line 471 "analysis.m"
    MR_Word analysis__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 2)));
#line 471 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_compiler_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 0)));
#line 471 "analysis.m"
    MR_Box analysis__V_28_28 = (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 1));
#line 471 "analysis.m"
    MR_Word analysis__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 3)));
#line 471 "analysis.m"
    MR_Word analysis__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 4)));
#line 471 "analysis.m"
    MR_Word analysis__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 5)));
#line 471 "analysis.m"
    MR_Word analysis__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 6)));
#line 471 "analysis.m"
    MR_Word analysis__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 7)));
#line 471 "analysis.m"
    MR_Word analysis__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 8)));
#line 471 "analysis.m"
    MR_Word analysis__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 9)));
#line 471 "analysis.m"
    MR_Word analysis__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 10)));
#line 476 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_compiler_48;
#line 476 "analysis.m"
    MR_Box analysis__V_37_37;
#line 476 "analysis.m"
    MR_Word analysis__V_38_38;
#line 476 "analysis.m"
    MR_Word analysis__V_39_39;
#line 476 "analysis.m"
    MR_Word analysis__V_40_40;
#line 476 "analysis.m"
    MR_Word analysis__V_41_41;
#line 476 "analysis.m"
    MR_Word analysis__V_42_42;
#line 476 "analysis.m"
    MR_Word analysis__V_43_43;
#line 476 "analysis.m"
    MR_Word analysis__V_44_44;
#line 476 "analysis.m"
    MR_Word analysis__V_45_45;
#line 486 "analysis.m"
    MR_Word analysis__Results_13;
#line 478 "analysis.m"
    MR_Word analysis__TypeCtorInfo_51_51;
#line 478 "analysis.m"
    MR_Word analysis__TypeInfo_52_52;
#line 478 "analysis.m"
    MR_Word analysis__TypeCtorInfo_53_53;
#line 478 "analysis.m"
    MR_Word analysis__TypeInfo_54_54;
#line 478 "analysis.m"
    MR_Word analysis__ModuleResults_12;
#line 478 "analysis.m"
    MR_Word analysis__V_22_22;
#line 478 "analysis.m"
    MR_Box analysis__conv0_ModuleResults_12;
#line 479 "analysis.m"
    MR_Box analysis__conv1_V_22_22;
#line 479 "analysis.m"
    MR_Box analysis__conv2_Results_13;

#line 471 "analysis.m"
    {
#line 471 "analysis.m"
      analysis__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(analysis__ModuleName_8, analysis__V_62_62);
    }
#line 473 "analysis.m"
    if (analysis__succeeded)
#line 472 "analysis.m"
      {
#line 472 "analysis.m"
      }
#line 473 "analysis.m"
    else
#line 474 "analysis.m"
      {
#line 474 "analysis.m"
        {
#line 474 "analysis.m"
          mercury__require__unexpected_3_p_0((MR_String) "analysis", (MR_String) "predicate \140analysis.lookup_existing_call_patterns\'/5", (MR_String) "not this_module");
#line 474 "analysis.m"
          return;
        }
#line 474 "analysis.m"
      }
#line 476 "analysis.m"
    analysis__TypeClassInfo_for_compiler_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 0)));
#line 476 "analysis.m"
    analysis__V_37_37 = (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 1));
#line 476 "analysis.m"
    analysis__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 2)));
#line 476 "analysis.m"
    analysis__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 3)));
#line 476 "analysis.m"
    analysis__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 4)));
#line 476 "analysis.m"
    analysis__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 5)));
#line 476 "analysis.m"
    analysis__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 6)));
#line 476 "analysis.m"
    analysis__Map_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 7)));
#line 476 "analysis.m"
    analysis__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 8)));
#line 476 "analysis.m"
    analysis__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 9)));
#line 476 "analysis.m"
    analysis__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 10)));
#line 478 "analysis.m"
    {
#line 478 "analysis.m"
      analysis__succeeded = mercury__map__elem_2_f_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &analysis_scalar_common_2[3], ((MR_Box) (analysis__ModuleName_8)), analysis__Map_11, &analysis__conv0_ModuleResults_12);
    }
#line 478 "analysis.m"
    if (analysis__succeeded)
#line 478 "analysis.m"
      {
#line 478 "analysis.m"
        analysis__ModuleResults_12 = ((MR_Word) analysis__conv0_ModuleResults_12);
#line 478 "analysis.m"
        analysis__succeeded = MR_TRUE;
#line 478 "analysis.m"
      }
#line 478 "analysis.m"
    if (analysis__succeeded)
#line 478 "analysis.m"
      {
#line 17807 "analysis.c"
        analysis__TypeCtorInfo_51_51 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 17809 "analysis.c"
        analysis__TypeInfo_52_52 = (MR_Word) &analysis_scalar_common_2[2];
#line 479 "analysis.m"
        {
#line 479 "analysis.m"
          analysis__succeeded = mercury__map__elem_2_f_0(analysis__TypeCtorInfo_51_51, analysis__TypeInfo_52_52, ((MR_Box) (analysis__AnalysisName_7)), analysis__ModuleResults_12, &analysis__conv1_V_22_22);
        }
#line 479 "analysis.m"
        if (analysis__succeeded)
#line 479 "analysis.m"
          {
#line 479 "analysis.m"
            analysis__V_22_22 = ((MR_Word) analysis__conv1_V_22_22);
#line 479 "analysis.m"
            analysis__succeeded = MR_TRUE;
#line 479 "analysis.m"
          }
#line 478 "analysis.m"
        if (analysis__succeeded)
#line 478 "analysis.m"
          {
#line 17830 "analysis.c"
            analysis__TypeCtorInfo_53_53 = (MR_Word) &analysis__analysis__type_ctor_info_func_id_0;
#line 17832 "analysis.c"
            analysis__TypeInfo_54_54 = (MR_Word) &analysis_scalar_common_1[1];
#line 479 "analysis.m"
            {
#line 479 "analysis.m"
              analysis__succeeded = mercury__map__elem_2_f_0(analysis__TypeCtorInfo_53_53, analysis__TypeInfo_54_54, ((MR_Box) (analysis__FuncId_9)), analysis__V_22_22, &analysis__conv2_Results_13);
            }
#line 479 "analysis.m"
            if (analysis__succeeded)
#line 479 "analysis.m"
              {
#line 479 "analysis.m"
                analysis__Results_13 = ((MR_Word) analysis__conv2_Results_13);
#line 479 "analysis.m"
                analysis__succeeded = MR_TRUE;
#line 479 "analysis.m"
              }
#line 478 "analysis.m"
          }
#line 478 "analysis.m"
      }
#line 486 "analysis.m"
    if (analysis__succeeded)
#line 481 "analysis.m"
      {
#line 481 "analysis.m"
        MR_Word analysis__TypeInfo_57_57;
#line 481 "analysis.m"
        MR_Word analysis__V_23_23;

#line 17862 "analysis.c"
        {
#line 17864 "analysis.c"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_call_pattern_46, (MR_Integer) 4, &analysis__TypeInfo_57_57);
        }
#line 481 "analysis.m"
        {
#line 481 "analysis.m"
          analysis__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 481 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__V_23_23, 0) = ((MR_Box) (&analysis_scalar_common_4[0]));
#line 481 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__V_23_23, 1) = ((MR_Box) (analysis__lookup_existing_call_patterns_5_p_0_1));
#line 481 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__V_23_23, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 481 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__V_23_23, 3) = ((MR_Box) (analysis__TypeClassInfo_for_call_pattern_46));
#line 481 "analysis.m"
        }
#line 481 "analysis.m"
        {
#line 481 "analysis.m"
          *analysis__Calls_10 = mercury__list__map_2_f_0((MR_Word) &analysis__analysis__type_ctor_info_some_analysis_result_0, analysis__TypeInfo_57_57, analysis__V_23_23, analysis__Results_13);
        }
#line 481 "analysis.m"
      }
#line 486 "analysis.m"
    else
#line 487 "analysis.m"
      *analysis__Calls_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 470 "analysis.m"
  }
#line 193 "analysis.m"
}

#line 181 "analysis.m"
MR_Word MR_CALL 
analysis__init_analysis_info_3_f_0(
#line 181 "analysis.m"
  MR_Word analysis__TypeClassInfo_for_compiler_17,
#line 181 "analysis.m"
  MR_Box analysis__Compiler_5,
#line 181 "analysis.m"
  MR_Word analysis__ThisModuleName_6,
#line 181 "analysis.m"
  MR_Word analysis__MakeAnalysisRegBool_7)
#line 181 "analysis.m"
{
#line 457 "analysis.m"
  {
#line 457 "analysis.m"
    MR_bool analysis__succeeded;
#line 457 "analysis.m"
    MR_Word analysis__Info_8;
#line 457 "analysis.m"
    MR_Word analysis__TypeCtorInfo_18_18;
#line 457 "analysis.m"
    MR_Word analysis__TypeInfo_24_24;
#line 457 "analysis.m"
    MR_Word analysis__MakeAnalysisReg_9;
#line 457 "analysis.m"
    MR_Word analysis__V_10_10;
#line 457 "analysis.m"
    MR_Word analysis__V_11_11;
#line 457 "analysis.m"
    MR_Word analysis__V_12_12;
#line 457 "analysis.m"
    MR_Word analysis__V_13_13;
#line 457 "analysis.m"
    MR_Word analysis__V_14_14;
#line 457 "analysis.m"
    MR_Word analysis__V_15_15;
#line 457 "analysis.m"
    MR_Word analysis__V_16_16;

#line 461 "analysis.m"
#line 461 "analysis.m"
    switch (analysis__MakeAnalysisRegBool_7) {
#line 461 "analysis.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 461 "analysis.m"
      case (MR_Integer) 0:
#line 463 "analysis.m"
        analysis__MakeAnalysisReg_9 = (MR_Integer) 1;
#line 461 "analysis.m"
        break;
#line 461 "analysis.m"
      case (MR_Integer) 1:
#line 460 "analysis.m"
        analysis__MakeAnalysisReg_9 = (MR_Integer) 0;
#line 461 "analysis.m"
        break;
#line 461 "analysis.m"
    }
#line 17956 "analysis.c"
    analysis__TypeCtorInfo_18_18 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 466 "analysis.m"
    {
#line 466 "analysis.m"
      analysis__V_10_10 = mercury__set__init_0_f_0(analysis__TypeCtorInfo_18_18);
    }
#line 466 "analysis.m"
    {
#line 466 "analysis.m"
      analysis__V_11_11 = mercury__map__init_0_f_0(analysis__TypeCtorInfo_18_18, (MR_Word) &analysis_scalar_common_2[1]);
    }
#line 466 "analysis.m"
    {
#line 466 "analysis.m"
      analysis__V_12_12 = mercury__map__init_0_f_0(analysis__TypeCtorInfo_18_18, (MR_Word) &analysis__analysis__type_ctor_info_analysis_status_0);
    }
#line 466 "analysis.m"
    {
#line 466 "analysis.m"
      analysis__V_13_13 = mercury__map__init_0_f_0(analysis__TypeCtorInfo_18_18, (MR_Word) &analysis_scalar_common_2[3]);
    }
#line 466 "analysis.m"
    {
#line 466 "analysis.m"
      analysis__V_14_14 = mercury__map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &analysis_scalar_common_2[2]);
    }
#line 17983 "analysis.c"
    analysis__TypeInfo_24_24 = (MR_Word) &analysis_scalar_common_2[5];
#line 466 "analysis.m"
    {
#line 466 "analysis.m"
      analysis__V_15_15 = mercury__map__init_0_f_0(analysis__TypeCtorInfo_18_18, analysis__TypeInfo_24_24);
    }
#line 466 "analysis.m"
    {
#line 466 "analysis.m"
      analysis__V_16_16 = mercury__map__init_0_f_0(analysis__TypeCtorInfo_18_18, analysis__TypeInfo_24_24);
    }
#line 465 "analysis.m"
    {
#line 465 "analysis.m"
      analysis__Info_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 465 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__Info_8, 0) = ((MR_Box) (analysis__TypeClassInfo_for_compiler_17));
#line 465 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__Info_8, 1) = analysis__Compiler_5;
#line 465 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__Info_8, 2) = ((MR_Box) (analysis__ThisModuleName_6));
#line 465 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__Info_8, 3) = ((MR_Box) (analysis__MakeAnalysisReg_9));
#line 465 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__Info_8, 4) = ((MR_Box) (analysis__V_10_10));
#line 465 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__Info_8, 5) = ((MR_Box) (analysis__V_11_11));
#line 465 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__Info_8, 6) = ((MR_Box) (analysis__V_12_12));
#line 465 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__Info_8, 7) = ((MR_Box) (analysis__V_13_13));
#line 465 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__Info_8, 8) = ((MR_Box) (analysis__V_14_14));
#line 465 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__Info_8, 9) = ((MR_Box) (analysis__V_15_15));
#line 465 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__Info_8, 10) = ((MR_Box) (analysis__V_16_16));
#line 465 "analysis.m"
    }
#line 457 "analysis.m"
    return analysis__Info_8;
#line 457 "analysis.m"
  }
#line 181 "analysis.m"
}

#line 167 "analysis.m"
MR_Word MR_CALL 
analysis__lub_2_f_0(
#line 167 "analysis.m"
  MR_Word analysis__StatusA_4,
#line 167 "analysis.m"
  MR_Word analysis__StatusB_5)
#line 167 "analysis.m"
{
#line 1343 "analysis.m"
  {
#line 1343 "analysis.m"
    MR_bool analysis__succeeded;
#line 1343 "analysis.m"
    MR_Word analysis__Status_6;
#line 1343 "analysis.m"
    MR_Word analysis__Cmp_7;
#line 1343 "analysis.m"
    MR_Integer analysis__V_9_9 = (MR_Integer) analysis__StatusA_4;
#line 1343 "analysis.m"
    MR_Integer analysis__V_10_10 = (MR_Integer) analysis__StatusB_5;

#line 1344 "analysis.m"
    {
#line 1344 "analysis.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(&analysis__Cmp_7, analysis__V_9_9, analysis__V_10_10);
    }
#line 1348 "analysis.m"
#line 1348 "analysis.m"
    switch (analysis__Cmp_7) {
#line 1348 "analysis.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1348 "analysis.m"
      case (MR_Integer) 1:
#line 1350 "analysis.m"
        analysis__Status_6 = analysis__StatusA_4;
#line 1348 "analysis.m"
        break;
#line 1348 "analysis.m"
      case (MR_Integer) 0:
#line 1347 "analysis.m"
        analysis__Status_6 = analysis__StatusA_4;
#line 1348 "analysis.m"
        break;
#line 1348 "analysis.m"
      case (MR_Integer) 2:
#line 1353 "analysis.m"
        analysis__Status_6 = analysis__StatusB_5;
#line 1348 "analysis.m"
        break;
#line 1348 "analysis.m"
    }
#line 1343 "analysis.m"
    return analysis__Status_6;
#line 1343 "analysis.m"
  }
#line 167 "analysis.m"
}

#line 142 "analysis.m"
MR_bool MR_CALL 
analysis__from_term_2_p_0(
#line 142 "analysis.m"
  MR_Word analysis__TypeClassInfo_for_to_term_3,
#line 142 "analysis.m"
  MR_Word analysis__HeadVar__1_1,
#line 142 "analysis.m"
  MR_Box * analysis__HeadVar__2_2)
#line 142 "analysis.m"
{
#line 18100 "analysis.c"
  {
#line 18102 "analysis.c"
    MR_bool analysis__succeeded;
#line 18104 "analysis.c"
    MR_bool MR_CALL (* analysis__func_0)(MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), analysis__TypeClassInfo_for_to_term_3, (MR_Integer) 0)), (MR_Integer) 6)));

#line 18107 "analysis.c"
    {
#line 18109 "analysis.c"
      return analysis__succeeded = analysis__func_0(((MR_Box) analysis__TypeClassInfo_for_to_term_3), ((MR_Box) (analysis__HeadVar__1_1)), analysis__HeadVar__2_2);
    }
#line 18112 "analysis.c"
    return analysis__succeeded;
#line 18114 "analysis.c"
  }
#line 142 "analysis.m"
}

#line 141 "analysis.m"
MR_Word MR_CALL 
analysis__to_term_1_f_0(
#line 141 "analysis.m"
  MR_Word analysis__TypeClassInfo_for_to_term_3,
#line 141 "analysis.m"
  MR_Box analysis__HeadVar__1_1)
#line 141 "analysis.m"
{
#line 18128 "analysis.c"
  {
#line 18130 "analysis.c"
    MR_bool analysis__succeeded;
#line 18132 "analysis.c"
    MR_Word analysis__HeadVar__2_2;
#line 18134 "analysis.c"
    MR_Box MR_CALL (* analysis__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), analysis__TypeClassInfo_for_to_term_3, (MR_Integer) 0)), (MR_Integer) 5)));
#line 18136 "analysis.c"
    MR_Box analysis__conv1_HeadVar__2_2;

#line 18139 "analysis.c"
    {
#line 18141 "analysis.c"
      analysis__conv1_HeadVar__2_2 = analysis__func_0(((MR_Box) analysis__TypeClassInfo_for_to_term_3), analysis__HeadVar__1_1);
    }
#line 18144 "analysis.c"
    analysis__HeadVar__2_2 = ((MR_Word) analysis__conv1_HeadVar__2_2);
#line 18146 "analysis.c"
    return analysis__HeadVar__2_2;
#line 18148 "analysis.c"
  }
#line 141 "analysis.m"
}

#line 137 "analysis.m"
MR_bool MR_CALL 
analysis__equivalent_3_p_0(
#line 137 "analysis.m"
  MR_Word analysis__TypeClassInfo_for_partial_order_4,
#line 137 "analysis.m"
  MR_Box analysis__HeadVar__1_1,
#line 137 "analysis.m"
  MR_Box analysis__HeadVar__2_2,
#line 137 "analysis.m"
  MR_Box analysis__HeadVar__3_3)
#line 137 "analysis.m"
{
#line 18166 "analysis.c"
  {
#line 18168 "analysis.c"
    MR_bool analysis__succeeded;
#line 18170 "analysis.c"
    MR_bool MR_CALL (* analysis__func_0)(MR_Box, MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), analysis__TypeClassInfo_for_partial_order_4, (MR_Integer) 0)), (MR_Integer) 6)));

#line 18173 "analysis.c"
    {
#line 18175 "analysis.c"
      return analysis__succeeded = analysis__func_0(((MR_Box) analysis__TypeClassInfo_for_partial_order_4), analysis__HeadVar__1_1, analysis__HeadVar__2_2, analysis__HeadVar__3_3);
    }
#line 18178 "analysis.c"
    return analysis__succeeded;
#line 18180 "analysis.c"
  }
#line 137 "analysis.m"
}

#line 136 "analysis.m"
MR_bool MR_CALL 
analysis__more_precise_than_3_p_0(
#line 136 "analysis.m"
  MR_Word analysis__TypeClassInfo_for_partial_order_4,
#line 136 "analysis.m"
  MR_Box analysis__HeadVar__1_1,
#line 136 "analysis.m"
  MR_Box analysis__HeadVar__2_2,
#line 136 "analysis.m"
  MR_Box analysis__HeadVar__3_3)
#line 136 "analysis.m"
{
#line 18198 "analysis.c"
  {
#line 18200 "analysis.c"
    MR_bool analysis__succeeded;
#line 18202 "analysis.c"
    MR_bool MR_CALL (* analysis__func_0)(MR_Box, MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), analysis__TypeClassInfo_for_partial_order_4, (MR_Integer) 0)), (MR_Integer) 5)));

#line 18205 "analysis.c"
    {
#line 18207 "analysis.c"
      return analysis__succeeded = analysis__func_0(((MR_Box) analysis__TypeClassInfo_for_partial_order_4), analysis__HeadVar__1_1, analysis__HeadVar__2_2, analysis__HeadVar__3_3);
    }
#line 18210 "analysis.c"
    return analysis__succeeded;
#line 18212 "analysis.c"
  }
#line 136 "analysis.m"
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
#line 18232 "analysis.c"
  {
#line 18234 "analysis.c"
    MR_bool analysis__succeeded;
#line 18236 "analysis.c"
    void MR_CALL (* analysis__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), analysis__TypeClassInfo_for_analysis_7, (MR_Integer) 0)), (MR_Integer) 10)));

#line 18239 "analysis.c"
    {
#line 18241 "analysis.c"
      analysis__func_0(((MR_Box) analysis__TypeClassInfo_for_analysis_7), ((MR_Box) (analysis__HeadVar__1_1)), ((MR_Box) (analysis__HeadVar__2_2)), ((MR_Box) (analysis__HeadVar__3_3)), analysis__HeadVar__6_6);
#line 18243 "analysis.c"
      return;
    }
#line 18246 "analysis.c"
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
#line 18260 "analysis.c"
  {
#line 18262 "analysis.c"
    MR_bool analysis__succeeded;
#line 18264 "analysis.c"
    MR_Box analysis__HeadVar__3_3;
#line 18266 "analysis.c"
    MR_Box MR_CALL (* analysis__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), analysis__TypeClassInfo_for_analysis_4, (MR_Integer) 0)), (MR_Integer) 9)));

#line 18269 "analysis.c"
    {
#line 18271 "analysis.c"
      return analysis__HeadVar__3_3 = analysis__func_0(((MR_Box) analysis__TypeClassInfo_for_analysis_4), analysis__HeadVar__1_1);
    }
#line 18274 "analysis.c"
    return analysis__HeadVar__3_3;
#line 18276 "analysis.c"
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
#line 18290 "analysis.c"
  {
#line 18292 "analysis.c"
    MR_bool analysis__succeeded;
#line 18294 "analysis.c"
    MR_Box analysis__HeadVar__3_3;
#line 18296 "analysis.c"
    MR_Box MR_CALL (* analysis__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), analysis__TypeClassInfo_for_analysis_4, (MR_Integer) 0)), (MR_Integer) 8)));

#line 18299 "analysis.c"
    {
#line 18301 "analysis.c"
      return analysis__HeadVar__3_3 = analysis__func_0(((MR_Box) analysis__TypeClassInfo_for_analysis_4), analysis__HeadVar__1_1);
    }
#line 18304 "analysis.c"
    return analysis__HeadVar__3_3;
#line 18306 "analysis.c"
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
#line 18318 "analysis.c"
  {
#line 18320 "analysis.c"
    MR_bool analysis__succeeded;
#line 18322 "analysis.c"
    MR_Word analysis__HeadVar__3_3;
#line 18324 "analysis.c"
    MR_Box MR_CALL (* analysis__func_0)(MR_Box) = ((MR_Box MR_CALL (*)(MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), analysis__TypeClassInfo_for_analysis_4, (MR_Integer) 0)), (MR_Integer) 7)));
#line 18326 "analysis.c"
    MR_Box analysis__conv1_HeadVar__3_3;

#line 18329 "analysis.c"
    {
#line 18331 "analysis.c"
      analysis__conv1_HeadVar__3_3 = analysis__func_0(((MR_Box) analysis__TypeClassInfo_for_analysis_4));
    }
#line 18334 "analysis.c"
    analysis__HeadVar__3_3 = ((MR_Word) analysis__conv1_HeadVar__3_3);
#line 18336 "analysis.c"
    return analysis__HeadVar__3_3;
#line 18338 "analysis.c"
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
#line 18350 "analysis.c"
  {
#line 18352 "analysis.c"
    MR_bool analysis__succeeded;
#line 18354 "analysis.c"
    MR_Integer analysis__HeadVar__3_3;
#line 18356 "analysis.c"
    MR_Box MR_CALL (* analysis__func_0)(MR_Box) = ((MR_Box MR_CALL (*)(MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), analysis__TypeClassInfo_for_analysis_4, (MR_Integer) 0)), (MR_Integer) 6)));
#line 18358 "analysis.c"
    MR_Box analysis__conv1_HeadVar__3_3;

#line 18361 "analysis.c"
    {
#line 18363 "analysis.c"
      analysis__conv1_HeadVar__3_3 = analysis__func_0(((MR_Box) analysis__TypeClassInfo_for_analysis_4));
    }
#line 18366 "analysis.c"
    analysis__HeadVar__3_3 = ((MR_Integer) analysis__conv1_HeadVar__3_3);
#line 18368 "analysis.c"
    return analysis__HeadVar__3_3;
#line 18370 "analysis.c"
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
#line 18382 "analysis.c"
  {
#line 18384 "analysis.c"
    MR_bool analysis__succeeded;
#line 18386 "analysis.c"
    MR_String analysis__HeadVar__3_3;
#line 18388 "analysis.c"
    MR_Box MR_CALL (* analysis__func_0)(MR_Box) = ((MR_Box MR_CALL (*)(MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), analysis__TypeClassInfo_for_analysis_4, (MR_Integer) 0)), (MR_Integer) 5)));
#line 18390 "analysis.c"
    MR_Box analysis__conv1_HeadVar__3_3;

#line 18393 "analysis.c"
    {
#line 18395 "analysis.c"
      analysis__conv1_HeadVar__3_3 = analysis__func_0(((MR_Box) analysis__TypeClassInfo_for_analysis_4));
    }
#line 18398 "analysis.c"
    analysis__HeadVar__3_3 = ((MR_String) analysis__conv1_HeadVar__3_3);
#line 18400 "analysis.c"
    return analysis__HeadVar__3_3;
#line 18402 "analysis.c"
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
#line 18424 "analysis.c"
  {
#line 18426 "analysis.c"
    MR_bool analysis__succeeded;
#line 18428 "analysis.c"
    void MR_CALL (* analysis__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), analysis__TypeClassInfo_for_compiler_8, (MR_Integer) 0)), (MR_Integer) 8)));
#line 18430 "analysis.c"
    MR_Box analysis__conv2_HeadVar__5_5;
#line 18432 "analysis.c"
    MR_Box analysis__conv1_HeadVar__7_7;

#line 18435 "analysis.c"
    {
#line 18437 "analysis.c"
      analysis__func_0(((MR_Box) analysis__TypeClassInfo_for_compiler_8), analysis__HeadVar__1_1, ((MR_Box) (analysis__HeadVar__2_2)), ((MR_Box) (analysis__HeadVar__3_3)), ((MR_Box) (analysis__HeadVar__4_4)), &analysis__conv2_HeadVar__5_5, ((MR_Box) ((MR_Integer) 0)), &analysis__conv1_HeadVar__7_7);
    }
#line 18440 "analysis.c"
    *analysis__HeadVar__5_5 = ((MR_String) analysis__conv2_HeadVar__5_5);
#line 18442 "analysis.c"
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
#line 18464 "analysis.c"
  {
#line 18466 "analysis.c"
    MR_bool analysis__succeeded;
#line 18468 "analysis.c"
    void MR_CALL (* analysis__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), analysis__TypeClassInfo_for_compiler_8, (MR_Integer) 0)), (MR_Integer) 7)));
#line 18470 "analysis.c"
    MR_Box analysis__conv2_HeadVar__5_5;
#line 18472 "analysis.c"
    MR_Box analysis__conv1_HeadVar__7_7;

#line 18475 "analysis.c"
    {
#line 18477 "analysis.c"
      analysis__func_0(((MR_Box) analysis__TypeClassInfo_for_compiler_8), analysis__HeadVar__1_1, ((MR_Box) (analysis__HeadVar__2_2)), ((MR_Box) (analysis__HeadVar__3_3)), ((MR_Box) (analysis__HeadVar__4_4)), &analysis__conv2_HeadVar__5_5, ((MR_Box) ((MR_Integer) 0)), &analysis__conv1_HeadVar__7_7);
    }
#line 18480 "analysis.c"
    *analysis__HeadVar__5_5 = ((MR_Word) analysis__conv2_HeadVar__5_5);
#line 18482 "analysis.c"
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
#line 18500 "analysis.c"
  {
#line 18502 "analysis.c"
    MR_bool analysis__succeeded;
#line 18504 "analysis.c"
    MR_bool MR_CALL (* analysis__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), analysis__TypeClassInfo_for_compiler_4, (MR_Integer) 0)), (MR_Integer) 6)));
#line 18506 "analysis.c"
    MR_Box analysis__conv1_HeadVar__3_3;

#line 18509 "analysis.c"
    {
#line 18511 "analysis.c"
      analysis__succeeded = analysis__func_0(((MR_Box) analysis__TypeClassInfo_for_compiler_4), analysis__HeadVar__1_1, ((MR_Box) (analysis__HeadVar__2_2)), &analysis__conv1_HeadVar__3_3);
    }
#line 18514 "analysis.c"
    if (analysis__succeeded)
#line 18516 "analysis.c"
      {
#line 18518 "analysis.c"
        *analysis__HeadVar__3_3 = ((MR_Word) analysis__conv1_HeadVar__3_3);
#line 18520 "analysis.c"
        analysis__succeeded = MR_TRUE;
#line 18522 "analysis.c"
      }
#line 18524 "analysis.c"
    return analysis__succeeded;
#line 18526 "analysis.c"
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
#line 18540 "analysis.c"
  {
#line 18542 "analysis.c"
    MR_bool analysis__succeeded;
#line 18544 "analysis.c"
    MR_String analysis__HeadVar__2_2;
#line 18546 "analysis.c"
    MR_Box MR_CALL (* analysis__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), analysis__TypeClassInfo_for_compiler_3, (MR_Integer) 0)), (MR_Integer) 5)));
#line 18548 "analysis.c"
    MR_Box analysis__conv1_HeadVar__2_2;

#line 18551 "analysis.c"
    {
#line 18553 "analysis.c"
      analysis__conv1_HeadVar__2_2 = analysis__func_0(((MR_Box) analysis__TypeClassInfo_for_compiler_3), analysis__HeadVar__1_1);
    }
#line 18556 "analysis.c"
    analysis__HeadVar__2_2 = ((MR_String) analysis__conv1_HeadVar__2_2);
#line 18558 "analysis.c"
    return analysis__HeadVar__2_2;
#line 18560 "analysis.c"
  }
#line 47 "analysis.m"
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
