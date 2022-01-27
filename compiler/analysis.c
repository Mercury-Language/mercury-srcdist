/*
** Automatically generated from `analysis.m'
** by the Mercury compiler,
** version rotd-2013-03-26, configured for x86_64-apple-darwin12.2.1.
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
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "hlds.mih"
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




#line 133 "analysis.c"
static const MR_FA_PseudoTypeInfo_Struct2 analysis__analysis__pti_analysis_result_2__pseudo_2__pseudo_3;

#line 136 "analysis.c"
static const MR_FA_PseudoTypeInfo_Struct2 analysis__analysis__pti_analysis_result_2__pseudo_1__pseudo_2;

#line 139 "analysis.c"
static const MR_FA_TypeInfo_Struct1 analysis__list__ti_list_1analysis__type_ctor_info_some_analysis_result_0;

#line 142 "analysis.c"
static const MR_FA_PseudoTypeInfo_Struct2 analysis__tree234__pti_tree234_2__plain_analysis__type_ctor_info_func_id_0__plain_list__ti_list_1analysis__type_ctor_info_some_analysis_result_0;

#line 145 "analysis.c"
static const MR_FA_PseudoTypeInfo_Struct1 analysis__list__pti_list_1__plain_analysis__type_ctor_info_some_analysis_result_0;

#line 148 "analysis.c"
static const MR_FA_TypeInfo_Struct1 analysis__list__ti_list_1analysis__type_ctor_info_imdg_arc_0;

#line 151 "analysis.c"
static const MR_FA_PseudoTypeInfo_Struct2 analysis__tree234__pti_tree234_2__plain_analysis__type_ctor_info_func_id_0__plain_list__ti_list_1analysis__type_ctor_info_imdg_arc_0;

#line 154 "analysis.c"
static const MR_FA_PseudoTypeInfo_Struct1 analysis__list__pti_list_1__plain_analysis__type_ctor_info_imdg_arc_0;

#line 157 "analysis.c"
static const MR_FA_TypeInfo_Struct1 analysis__set_ordlist__ti_set_ordlist_1mdbcomp__prim_data__type_ctor_info_sym_name_0;

#line 160 "analysis.c"
static const MR_FA_TypeInfo_Struct1 analysis__list__ti_list_1analysis__type_ctor_info_analysis_request_0;

#line 163 "analysis.c"
static const MR_FA_TypeInfo_Struct2 analysis__tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_analysis_request_0;

#line 166 "analysis.c"
static const MR_FA_TypeInfo_Struct2 analysis__tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_analysis_request_0;

#line 169 "analysis.c"
static const MR_FA_TypeInfo_Struct2 analysis__tree234__ti_tree234_2mdbcomp__prim_data__type_ctor_info_sym_name_0tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_analysis_request_0;

#line 172 "analysis.c"
static const MR_FA_TypeInfo_Struct2 analysis__tree234__ti_tree234_2mdbcomp__prim_data__type_ctor_info_sym_name_0analysis__type_ctor_info_analysis_status_0;

#line 175 "analysis.c"
static const MR_FA_TypeInfo_Struct2 analysis__tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_some_analysis_result_0;

#line 178 "analysis.c"
static const MR_FA_TypeInfo_Struct2 analysis__tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_some_analysis_result_0;

#line 181 "analysis.c"
static const MR_FA_TypeInfo_Struct2 analysis__tree234__ti_tree234_2mdbcomp__prim_data__type_ctor_info_sym_name_0tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_some_analysis_result_0;

#line 184 "analysis.c"
static const MR_FA_TypeInfo_Struct2 analysis__tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_imdg_arc_0;

#line 187 "analysis.c"
static const MR_FA_TypeInfo_Struct2 analysis__tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_imdg_arc_0;

#line 190 "analysis.c"
static const MR_FA_TypeInfo_Struct2 analysis__tree234__ti_tree234_2mdbcomp__prim_data__type_ctor_info_sym_name_0tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_imdg_arc_0;

#line 193 "analysis.c"
static const MR_PseudoTypeInfo analysis__analysis__field_types_analysis_info_0_0[10];

#line 196 "analysis.c"
static const MR_ConstString analysis__analysis__field_names_analysis_info_0_0[10];

#line 199 "analysis.c"
static const MR_TypeClassConstraint_1Struct analysis__analysis__exist_tc_constr_analysis_info_0_0_1;

#line 202 "analysis.c"
static const MR_TypeClassConstraint analysis__analysis__exist_tc_constrs_analysis_info_0_0[1];

#line 205 "analysis.c"
static const MR_DuExistLocn analysis__analysis__exist_locns_analysis_info_0_0[1];

#line 208 "analysis.c"
static const MR_DuExistInfo analysis__analysis__exist_info_analysis_info_0_0;

#line 211 "analysis.c"
static const MR_DuFunctorDesc analysis__analysis__du_functor_desc_analysis_info_0_0;

#line 214 "analysis.c"
static const MR_DuFunctorDescPtr analysis__analysis__du_stag_ordered_analysis_info_0_0[1];

#line 217 "analysis.c"
static const MR_DuPtagLayout analysis__analysis__du_ptag_ordered_analysis_info_0[1];

#line 220 "analysis.c"
static const MR_DuFunctorDescPtr analysis__analysis__du_name_ordered_analysis_info_0[1];

#line 223 "analysis.c"
static const MR_Integer analysis__analysis__functor_number_map_analysis_info_0[1];

#line 226 "analysis.c"
static const MR_FA_PseudoTypeInfo_Struct1 analysis__list__pti_list_1__pseudo_1;

#line 229 "analysis.c"
static const MR_FA_PseudoTypeInfo_Struct2 analysis__tree234__pti_tree234_2__plain_analysis__type_ctor_info_func_id_0__pseudo_list__pti_list_1__pseudo_1;

#line 232 "analysis.c"
static const MR_FA_PseudoTypeInfo_Struct2 analysis__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__pseudo_tree234__pti_tree234_2__plain_analysis__type_ctor_info_func_id_0__pseudo_list__pti_list_1__pseudo_1;

#line 235 "analysis.c"
static const MR_FA_PseudoTypeInfo_Struct2 analysis__tree234__pti_tree234_2__plain_mdbcomp__prim_data__type_ctor_info_sym_name_0__pseudo_tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__pseudo_tree234__pti_tree234_2__plain_analysis__type_ctor_info_func_id_0__pseudo_list__pti_list_1__pseudo_1;

#line 238 "analysis.c"
static const MR_PseudoTypeInfo analysis__analysis__field_types_analysis_request_0_0[2];

#line 241 "analysis.c"
static const MR_ConstString analysis__analysis__field_names_analysis_request_0_0[2];

#line 244 "analysis.c"
static const MR_TypeClassConstraint_2Struct analysis__analysis__exist_tc_constr_analysis_request_0_0_1;

#line 247 "analysis.c"
static const MR_TypeClassConstraint analysis__analysis__exist_tc_constrs_analysis_request_0_0[1];

#line 250 "analysis.c"
static const MR_DuExistLocn analysis__analysis__exist_locns_analysis_request_0_0[2];

#line 253 "analysis.c"
static const MR_DuExistInfo analysis__analysis__exist_info_analysis_request_0_0;

#line 256 "analysis.c"
static const MR_DuFunctorDesc analysis__analysis__du_functor_desc_analysis_request_0_0;

#line 259 "analysis.c"
static const MR_DuFunctorDescPtr analysis__analysis__du_stag_ordered_analysis_request_0_0[1];

#line 262 "analysis.c"
static const MR_DuPtagLayout analysis__analysis__du_ptag_ordered_analysis_request_0[1];

#line 265 "analysis.c"
static const MR_DuFunctorDescPtr analysis__analysis__du_name_ordered_analysis_request_0[1];

#line 268 "analysis.c"
static const MR_Integer analysis__analysis__functor_number_map_analysis_request_0[1];

#line 271 "analysis.c"
static const MR_PseudoTypeInfo analysis__analysis__field_types_analysis_result_2_0[3];

#line 274 "analysis.c"
static const MR_ConstString analysis__analysis__field_names_analysis_result_2_0[3];

#line 277 "analysis.c"
static const MR_DuFunctorDesc analysis__analysis__du_functor_desc_analysis_result_2_0;

#line 280 "analysis.c"
static const MR_DuFunctorDescPtr analysis__analysis__du_stag_ordered_analysis_result_2_0[1];

#line 283 "analysis.c"
static const MR_DuPtagLayout analysis__analysis__du_ptag_ordered_analysis_result_2[1];

#line 286 "analysis.c"
static const MR_DuFunctorDescPtr analysis__analysis__du_name_ordered_analysis_result_2[1];

#line 289 "analysis.c"
static const MR_Integer analysis__analysis__functor_number_map_analysis_result_2[1];

#line 292 "analysis.c"
static const MR_EnumFunctorDesc analysis__analysis__enum_functor_desc_analysis_status_0_0;

#line 295 "analysis.c"
static const MR_EnumFunctorDesc analysis__analysis__enum_functor_desc_analysis_status_0_1;

#line 298 "analysis.c"
static const MR_EnumFunctorDesc analysis__analysis__enum_functor_desc_analysis_status_0_2;

#line 301 "analysis.c"
static const MR_EnumFunctorDescPtr analysis__analysis__enum_value_ordered_analysis_status_0[3];

#line 304 "analysis.c"
static const MR_EnumFunctorDescPtr analysis__analysis__enum_name_ordered_analysis_status_0[3];

#line 307 "analysis.c"
static const MR_Integer analysis__analysis__functor_number_map_analysis_status_0[3];

#line 310 "analysis.c"
static const MR_FA_PseudoTypeInfo_Struct1 analysis__unit__pti_unit_1__pseudo_514;

#line 313 "analysis.c"
static const MR_FA_PseudoTypeInfo_Struct1 analysis__unit__pti_unit_1__pseudo_515;

#line 316 "analysis.c"
static const MR_PseudoTypeInfo analysis__analysis__field_types_analysis_type_0_0[2];

#line 319 "analysis.c"
static const MR_TypeClassConstraint_3Struct analysis__analysis__exist_tc_constr_analysis_type_0_0_1;

#line 322 "analysis.c"
static const MR_TypeClassConstraint analysis__analysis__exist_tc_constrs_analysis_type_0_0[1];

#line 325 "analysis.c"
static const MR_DuExistLocn analysis__analysis__exist_locns_analysis_type_0_0[3];

#line 328 "analysis.c"
static const MR_DuExistInfo analysis__analysis__exist_info_analysis_type_0_0;

#line 331 "analysis.c"
static const MR_DuFunctorDesc analysis__analysis__du_functor_desc_analysis_type_0_0;

#line 334 "analysis.c"
static const MR_DuFunctorDescPtr analysis__analysis__du_stag_ordered_analysis_type_0_0[1];

#line 337 "analysis.c"
static const MR_DuPtagLayout analysis__analysis__du_ptag_ordered_analysis_type_0[1];

#line 340 "analysis.c"
static const MR_DuFunctorDescPtr analysis__analysis__du_name_ordered_analysis_type_0[1];

#line 343 "analysis.c"
static const MR_Integer analysis__analysis__functor_number_map_analysis_type_0[1];

#line 346 "analysis.c"
static const MR_EnumFunctorDesc analysis__analysis__enum_functor_desc_any_call_0_0;

#line 349 "analysis.c"
static const MR_EnumFunctorDescPtr analysis__analysis__enum_value_ordered_any_call_0[1];

#line 352 "analysis.c"
static const MR_EnumFunctorDescPtr analysis__analysis__enum_name_ordered_any_call_0[1];

#line 355 "analysis.c"
static const MR_Integer analysis__analysis__functor_number_map_any_call_0[1];

#line 358 "analysis.c"
static const MR_EnumFunctorDesc analysis__analysis__enum_functor_desc_fixpoint_type_0_0;

#line 361 "analysis.c"
static const MR_EnumFunctorDesc analysis__analysis__enum_functor_desc_fixpoint_type_0_1;

#line 364 "analysis.c"
static const MR_EnumFunctorDescPtr analysis__analysis__enum_value_ordered_fixpoint_type_0[2];

#line 367 "analysis.c"
static const MR_EnumFunctorDescPtr analysis__analysis__enum_name_ordered_fixpoint_type_0[2];

#line 370 "analysis.c"
static const MR_Integer analysis__analysis__functor_number_map_fixpoint_type_0[2];

#line 373 "analysis.c"
static const MR_PseudoTypeInfo analysis__analysis__field_types_func_id_0_0[4];

#line 376 "analysis.c"
static const MR_ConstString analysis__analysis__field_names_func_id_0_0[4];

#line 379 "analysis.c"
static const MR_DuFunctorDesc analysis__analysis__du_functor_desc_func_id_0_0;

#line 382 "analysis.c"
static const MR_DuFunctorDescPtr analysis__analysis__du_stag_ordered_func_id_0_0[1];

#line 385 "analysis.c"
static const MR_DuPtagLayout analysis__analysis__du_ptag_ordered_func_id_0[1];

#line 388 "analysis.c"
static const MR_DuFunctorDescPtr analysis__analysis__du_name_ordered_func_id_0[1];

#line 391 "analysis.c"
static const MR_Integer analysis__analysis__functor_number_map_func_id_0[1];

#line 394 "analysis.c"
static const MR_PseudoTypeInfo analysis__analysis__field_types_imdg_arc_0_0[2];

#line 397 "analysis.c"
static const MR_ConstString analysis__analysis__field_names_imdg_arc_0_0[2];

#line 400 "analysis.c"
static const MR_TypeClassConstraint_2Struct analysis__analysis__exist_tc_constr_imdg_arc_0_0_1;

#line 403 "analysis.c"
static const MR_TypeClassConstraint analysis__analysis__exist_tc_constrs_imdg_arc_0_0[1];

#line 406 "analysis.c"
static const MR_DuExistLocn analysis__analysis__exist_locns_imdg_arc_0_0[2];

#line 409 "analysis.c"
static const MR_DuExistInfo analysis__analysis__exist_info_imdg_arc_0_0;

#line 412 "analysis.c"
static const MR_DuFunctorDesc analysis__analysis__du_functor_desc_imdg_arc_0_0;

#line 415 "analysis.c"
static const MR_DuFunctorDescPtr analysis__analysis__du_stag_ordered_imdg_arc_0_0[1];

#line 418 "analysis.c"
static const MR_DuPtagLayout analysis__analysis__du_ptag_ordered_imdg_arc_0[1];

#line 421 "analysis.c"
static const MR_DuFunctorDescPtr analysis__analysis__du_name_ordered_imdg_arc_0[1];

#line 424 "analysis.c"
static const MR_Integer analysis__analysis__functor_number_map_imdg_arc_0[1];

#line 427 "analysis.c"
static const MR_EnumFunctorDesc analysis__analysis__enum_functor_desc_make_analysis_registry_0_0;

#line 430 "analysis.c"
static const MR_EnumFunctorDesc analysis__analysis__enum_functor_desc_make_analysis_registry_0_1;

#line 433 "analysis.c"
static const MR_EnumFunctorDescPtr analysis__analysis__enum_value_ordered_make_analysis_registry_0[2];

#line 436 "analysis.c"
static const MR_EnumFunctorDescPtr analysis__analysis__enum_name_ordered_make_analysis_registry_0[2];

#line 439 "analysis.c"
static const MR_Integer analysis__analysis__functor_number_map_make_analysis_registry_0[2];

#line 442 "analysis.c"
static const MR_EnumFunctorDesc analysis__analysis__enum_functor_desc_no_func_info_0_0;

#line 445 "analysis.c"
static const MR_EnumFunctorDescPtr analysis__analysis__enum_value_ordered_no_func_info_0[1];

#line 448 "analysis.c"
static const MR_EnumFunctorDescPtr analysis__analysis__enum_name_ordered_no_func_info_0[1];

#line 451 "analysis.c"
static const MR_Integer analysis__analysis__functor_number_map_no_func_info_0[1];

#line 454 "analysis.c"
static const MR_PseudoTypeInfo analysis__analysis__field_types_some_analysis_result_0_0[3];

#line 457 "analysis.c"
static const MR_ConstString analysis__analysis__field_names_some_analysis_result_0_0[3];

#line 460 "analysis.c"
static const MR_TypeClassConstraint_3Struct analysis__analysis__exist_tc_constr_some_analysis_result_0_0_1;

#line 463 "analysis.c"
static const MR_TypeClassConstraint analysis__analysis__exist_tc_constrs_some_analysis_result_0_0[1];

#line 466 "analysis.c"
static const MR_DuExistLocn analysis__analysis__exist_locns_some_analysis_result_0_0[3];

#line 469 "analysis.c"
static const MR_DuExistInfo analysis__analysis__exist_info_some_analysis_result_0_0;

#line 472 "analysis.c"
static const MR_DuFunctorDesc analysis__analysis__du_functor_desc_some_analysis_result_0_0;

#line 475 "analysis.c"
static const MR_DuFunctorDescPtr analysis__analysis__du_stag_ordered_some_analysis_result_0_0[1];

#line 478 "analysis.c"
static const MR_DuPtagLayout analysis__analysis__du_ptag_ordered_some_analysis_result_0[1];

#line 481 "analysis.c"
static const MR_DuFunctorDescPtr analysis__analysis__du_name_ordered_some_analysis_result_0[1];

#line 484 "analysis.c"
static const MR_Integer analysis__analysis__functor_number_map_some_analysis_result_0[1];

#line 487 "analysis.c"
static const MR_ConstString analysis__analysis__type_class_id_var_names_to_term_1[1];

#line 490 "analysis.c"
static const MR_TypeClassMethod analysis__analysis__type_class_id_method_ids_to_term_1[2];

#line 493 "analysis.c"
static const MR_TypeClassId analysis__analysis__type_class_id_to_term_1;

#line 496 "analysis.c"
static const MR_ConstString analysis__analysis__type_class_id_var_names_partial_order_2[2];

#line 499 "analysis.c"
static const MR_TypeClassMethod analysis__analysis__type_class_id_method_ids_partial_order_2[2];

#line 502 "analysis.c"
static const MR_TypeClassId analysis__analysis__type_class_id_partial_order_2;

#line 505 "analysis.c"
static const MR_ConstString analysis__analysis__type_class_id_var_names_compiler_1[1];

#line 508 "analysis.c"
static const MR_TypeClassMethod analysis__analysis__type_class_id_method_ids_compiler_1[4];

#line 511 "analysis.c"
static const MR_TypeClassId analysis__analysis__type_class_id_compiler_1;

#line 514 "analysis.c"
static const MR_ConstString analysis__analysis__type_class_id_var_names_call_pattern_2[2];

#line 517 "analysis.c"
static const MR_TypeClassId analysis__analysis__type_class_id_call_pattern_2;

#line 520 "analysis.c"
static const MR_TypeClassConstraint_2Struct analysis__analysis__type_class_decl_super_call_pattern_2_1;

#line 523 "analysis.c"
static const MR_TypeClassConstraint_1Struct analysis__analysis__type_class_decl_super_call_pattern_2_2;

#line 526 "analysis.c"
static const MR_TypeClassConstraint analysis__analysis__type_class_decl_supers_call_pattern_2[2];

#line 529 "analysis.c"
static const MR_ConstString analysis__analysis__type_class_id_var_names_answer_pattern_2[2];

#line 532 "analysis.c"
static const MR_TypeClassId analysis__analysis__type_class_id_answer_pattern_2;

#line 535 "analysis.c"
static const MR_TypeClassConstraint_2Struct analysis__analysis__type_class_decl_super_answer_pattern_2_1;

#line 538 "analysis.c"
static const MR_TypeClassConstraint_1Struct analysis__analysis__type_class_decl_super_answer_pattern_2_2;

#line 541 "analysis.c"
static const MR_TypeClassConstraint analysis__analysis__type_class_decl_supers_answer_pattern_2[2];

#line 544 "analysis.c"
static const MR_ConstString analysis__analysis__type_class_id_var_names_analysis_3[3];

#line 547 "analysis.c"
static const MR_TypeClassMethod analysis__analysis__type_class_id_method_ids_analysis_3[6];

#line 550 "analysis.c"
static const MR_TypeClassId analysis__analysis__type_class_id_analysis_3;

#line 553 "analysis.c"
static const MR_TypeClassConstraint_2Struct analysis__analysis__type_class_decl_super_analysis_3_1;

#line 556 "analysis.c"
static const MR_TypeClassConstraint_2Struct analysis__analysis__type_class_decl_super_analysis_3_2;

#line 559 "analysis.c"
static const MR_TypeClassConstraint analysis__analysis__type_class_decl_supers_analysis_3[2];

#line 562 "analysis.c"
static MR_bool MR_CALL 
analysis____Unify____analysis_info_0_0_10001(
#line 565 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 567 "analysis.c"
  MR_Box analysis__wrapper_arg_2);

#line 570 "analysis.c"
static void MR_CALL 
analysis____Compare____analysis_info_0_0_10001(
#line 573 "analysis.c"
  MR_Box * analysis__wrapper_arg_1,
#line 575 "analysis.c"
  MR_Box analysis__wrapper_arg_2,
#line 577 "analysis.c"
  MR_Box analysis__wrapper_arg_3);

#line 580 "analysis.c"
static MR_bool MR_CALL 
analysis____Unify____analysis_map_1_0_10001(
#line 583 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 585 "analysis.c"
  MR_Box analysis__wrapper_arg_2,
#line 587 "analysis.c"
  MR_Box analysis__wrapper_arg_3);

#line 590 "analysis.c"
static void MR_CALL 
analysis____Compare____analysis_map_1_0_10001(
#line 593 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 595 "analysis.c"
  MR_Box * analysis__wrapper_arg_2,
#line 597 "analysis.c"
  MR_Box analysis__wrapper_arg_3,
#line 599 "analysis.c"
  MR_Box analysis__wrapper_arg_4);

#line 602 "analysis.c"
static MR_bool MR_CALL 
analysis____Unify____analysis_name_0_0_10001(
#line 605 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 607 "analysis.c"
  MR_Box analysis__wrapper_arg_2);

#line 610 "analysis.c"
static void MR_CALL 
analysis____Compare____analysis_name_0_0_10001(
#line 613 "analysis.c"
  MR_Box * analysis__wrapper_arg_1,
#line 615 "analysis.c"
  MR_Box analysis__wrapper_arg_2,
#line 617 "analysis.c"
  MR_Box analysis__wrapper_arg_3);

#line 620 "analysis.c"
static MR_bool MR_CALL 
analysis____Unify____analysis_request_0_0_10001(
#line 623 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 625 "analysis.c"
  MR_Box analysis__wrapper_arg_2);

#line 628 "analysis.c"
static void MR_CALL 
analysis____Compare____analysis_request_0_0_10001(
#line 631 "analysis.c"
  MR_Box * analysis__wrapper_arg_1,
#line 633 "analysis.c"
  MR_Box analysis__wrapper_arg_2,
#line 635 "analysis.c"
  MR_Box analysis__wrapper_arg_3);

#line 638 "analysis.c"
static MR_bool MR_CALL 
analysis____Unify____analysis_result_2_0_10001(
#line 641 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 643 "analysis.c"
  MR_Box analysis__wrapper_arg_2,
#line 645 "analysis.c"
  MR_Box analysis__wrapper_arg_3,
#line 647 "analysis.c"
  MR_Box analysis__wrapper_arg_4);

#line 650 "analysis.c"
static void MR_CALL 
analysis____Compare____analysis_result_2_0_10001(
#line 653 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 655 "analysis.c"
  MR_Box analysis__wrapper_arg_2,
#line 657 "analysis.c"
  MR_Box * analysis__wrapper_arg_3,
#line 659 "analysis.c"
  MR_Box analysis__wrapper_arg_4,
#line 661 "analysis.c"
  MR_Box analysis__wrapper_arg_5);

#line 664 "analysis.c"
static MR_bool MR_CALL 
analysis____Unify____analysis_status_0_0_10001(
#line 667 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 669 "analysis.c"
  MR_Box analysis__wrapper_arg_2);

#line 672 "analysis.c"
static void MR_CALL 
analysis____Compare____analysis_status_0_0_10001(
#line 675 "analysis.c"
  MR_Box * analysis__wrapper_arg_1,
#line 677 "analysis.c"
  MR_Box analysis__wrapper_arg_2,
#line 679 "analysis.c"
  MR_Box analysis__wrapper_arg_3);

#line 682 "analysis.c"
static MR_bool MR_CALL 
analysis____Unify____analysis_type_0_0_10001(
#line 685 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 687 "analysis.c"
  MR_Box analysis__wrapper_arg_2);

#line 690 "analysis.c"
static void MR_CALL 
analysis____Compare____analysis_type_0_0_10001(
#line 693 "analysis.c"
  MR_Box * analysis__wrapper_arg_1,
#line 695 "analysis.c"
  MR_Box analysis__wrapper_arg_2,
#line 697 "analysis.c"
  MR_Box analysis__wrapper_arg_3);

#line 700 "analysis.c"
static MR_bool MR_CALL 
analysis____Unify____any_call_0_0_10001(
#line 703 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 705 "analysis.c"
  MR_Box analysis__wrapper_arg_2);

#line 708 "analysis.c"
static void MR_CALL 
analysis____Compare____any_call_0_0_10001(
#line 711 "analysis.c"
  MR_Box * analysis__wrapper_arg_1,
#line 713 "analysis.c"
  MR_Box analysis__wrapper_arg_2,
#line 715 "analysis.c"
  MR_Box analysis__wrapper_arg_3);

#line 718 "analysis.c"
static MR_bool MR_CALL 
analysis____Unify____fixpoint_type_0_0_10001(
#line 721 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 723 "analysis.c"
  MR_Box analysis__wrapper_arg_2);

#line 726 "analysis.c"
static void MR_CALL 
analysis____Compare____fixpoint_type_0_0_10001(
#line 729 "analysis.c"
  MR_Box * analysis__wrapper_arg_1,
#line 731 "analysis.c"
  MR_Box analysis__wrapper_arg_2,
#line 733 "analysis.c"
  MR_Box analysis__wrapper_arg_3);

#line 736 "analysis.c"
static MR_bool MR_CALL 
analysis____Unify____func_analysis_map_1_0_10001(
#line 739 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 741 "analysis.c"
  MR_Box analysis__wrapper_arg_2,
#line 743 "analysis.c"
  MR_Box analysis__wrapper_arg_3);

#line 746 "analysis.c"
static void MR_CALL 
analysis____Compare____func_analysis_map_1_0_10001(
#line 749 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 751 "analysis.c"
  MR_Box * analysis__wrapper_arg_2,
#line 753 "analysis.c"
  MR_Box analysis__wrapper_arg_3,
#line 755 "analysis.c"
  MR_Box analysis__wrapper_arg_4);

#line 758 "analysis.c"
static MR_bool MR_CALL 
analysis____Unify____func_id_0_0_10001(
#line 761 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 763 "analysis.c"
  MR_Box analysis__wrapper_arg_2);

#line 766 "analysis.c"
static void MR_CALL 
analysis____Compare____func_id_0_0_10001(
#line 769 "analysis.c"
  MR_Box * analysis__wrapper_arg_1,
#line 771 "analysis.c"
  MR_Box analysis__wrapper_arg_2,
#line 773 "analysis.c"
  MR_Box analysis__wrapper_arg_3);

#line 776 "analysis.c"
static MR_bool MR_CALL 
analysis____Unify____imdg_arc_0_0_10001(
#line 779 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 781 "analysis.c"
  MR_Box analysis__wrapper_arg_2);

#line 784 "analysis.c"
static void MR_CALL 
analysis____Compare____imdg_arc_0_0_10001(
#line 787 "analysis.c"
  MR_Box * analysis__wrapper_arg_1,
#line 789 "analysis.c"
  MR_Box analysis__wrapper_arg_2,
#line 791 "analysis.c"
  MR_Box analysis__wrapper_arg_3);

#line 794 "analysis.c"
static MR_bool MR_CALL 
analysis____Unify____make_analysis_registry_0_0_10001(
#line 797 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 799 "analysis.c"
  MR_Box analysis__wrapper_arg_2);

#line 802 "analysis.c"
static void MR_CALL 
analysis____Compare____make_analysis_registry_0_0_10001(
#line 805 "analysis.c"
  MR_Box * analysis__wrapper_arg_1,
#line 807 "analysis.c"
  MR_Box analysis__wrapper_arg_2,
#line 809 "analysis.c"
  MR_Box analysis__wrapper_arg_3);

#line 812 "analysis.c"
static MR_bool MR_CALL 
analysis____Unify____module_analysis_map_1_0_10001(
#line 815 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 817 "analysis.c"
  MR_Box analysis__wrapper_arg_2,
#line 819 "analysis.c"
  MR_Box analysis__wrapper_arg_3);

#line 822 "analysis.c"
static void MR_CALL 
analysis____Compare____module_analysis_map_1_0_10001(
#line 825 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 827 "analysis.c"
  MR_Box * analysis__wrapper_arg_2,
#line 829 "analysis.c"
  MR_Box analysis__wrapper_arg_3,
#line 831 "analysis.c"
  MR_Box analysis__wrapper_arg_4);

#line 834 "analysis.c"
static MR_bool MR_CALL 
analysis____Unify____no_func_info_0_0_10001(
#line 837 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 839 "analysis.c"
  MR_Box analysis__wrapper_arg_2);

#line 842 "analysis.c"
static void MR_CALL 
analysis____Compare____no_func_info_0_0_10001(
#line 845 "analysis.c"
  MR_Box * analysis__wrapper_arg_1,
#line 847 "analysis.c"
  MR_Box analysis__wrapper_arg_2,
#line 849 "analysis.c"
  MR_Box analysis__wrapper_arg_3);

#line 852 "analysis.c"
static MR_bool MR_CALL 
analysis____Unify____some_analysis_result_0_0_10001(
#line 855 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 857 "analysis.c"
  MR_Box analysis__wrapper_arg_2);

#line 860 "analysis.c"
static void MR_CALL 
analysis____Compare____some_analysis_result_0_0_10001(
#line 863 "analysis.c"
  MR_Box * analysis__wrapper_arg_1,
#line 865 "analysis.c"
  MR_Box analysis__wrapper_arg_2,
#line 867 "analysis.c"
  MR_Box analysis__wrapper_arg_3);

#line 870 "analysis.c"
static MR_Box MR_CALL 
analysis__ClassMethod_for_analysis__to_term____analysis__any_call__arity0______analysis__to_term_1_1_f_0_10001(
#line 873 "analysis.c"
  MR_Box analysis__closure_arg,
#line 875 "analysis.c"
  MR_Box analysis__wrapper_arg_1);

#line 878 "analysis.c"
static MR_bool MR_CALL 
analysis__ClassMethod_for_analysis__to_term____analysis__any_call__arity0______analysis__from_term_2_2_p_0_10001(
#line 881 "analysis.c"
  MR_Box analysis__closure_arg,
#line 883 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 885 "analysis.c"
  MR_Box * analysis__wrapper_arg_2);

#line 888 "analysis.c"
static MR_bool MR_CALL 
analysis__ClassMethod_for_analysis__partial_order____analysis__no_func_info__arity0__analysis__any_call__arity0______analysis__more_precise_than_3_3_p_0_10001(
#line 891 "analysis.c"
  MR_Box analysis__closure_arg,
#line 893 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 895 "analysis.c"
  MR_Box analysis__wrapper_arg_2,
#line 897 "analysis.c"
  MR_Box analysis__wrapper_arg_3);

#line 900 "analysis.c"
static MR_bool MR_CALL 
analysis__ClassMethod_for_analysis__partial_order____analysis__no_func_info__arity0__analysis__any_call__arity0______analysis__equivalent_3_3_p_0_10001(
#line 903 "analysis.c"
  MR_Box analysis__closure_arg,
#line 905 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 907 "analysis.c"
  MR_Box analysis__wrapper_arg_2,
#line 909 "analysis.c"
  MR_Box analysis__wrapper_arg_3);

#line 1386 "analysis.m"
static void MR_CALL 
analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_109_115_103_95_95_104_111_52_95_95_91_54_93_95_48_3_p_0(
#line 1386 "analysis.m"
  MR_Word analysis__V_11_11,
#line 1386 "analysis.m"
  MR_Word analysis__V_12_12,
#line 1386 "analysis.m"
  MR_Word analysis__V_13_13,
#line 1386 "analysis.m"
  MR_Box analysis__V_14_14,
#line 1386 "analysis.m"
  MR_Box analysis__V_15_15);

#line 1386 "analysis.m"
static void MR_CALL 
analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_109_115_103_95_95_104_111_51_95_95_91_54_93_95_48_3_p_0(
#line 1386 "analysis.m"
  MR_Word analysis__V_11_11,
#line 1386 "analysis.m"
  MR_Box analysis__V_12_12,
#line 1386 "analysis.m"
  MR_Box analysis__V_13_13,
#line 1386 "analysis.m"
  MR_Word analysis__V_14_14,
#line 1386 "analysis.m"
  MR_Word analysis__V_15_15);

#line 1386 "analysis.m"
static void MR_CALL 
analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_109_115_103_95_95_104_111_49_95_95_91_51_93_95_48_3_p_0(
#line 1386 "analysis.m"
  MR_Word analysis__V_11_11,
#line 1386 "analysis.m"
  MR_Word analysis__V_12_12);

#line 1372 "analysis.m"
static MR_Box MR_CALL 
analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_108_117_98_95_114_101_115_117_108_116_95_115_116_97_116_117_115_101_115_95_51_95_95_91_49_93_95_48_3_f_0_1(
#line 1372 "analysis.m"
  MR_Box analysis__closure_arg,
#line 1372 "analysis.m"
  MR_Box analysis__wrapper_arg_1,
#line 1372 "analysis.m"
  MR_Box analysis__wrapper_arg_2);

#line 1366 "analysis.m"
static MR_Box MR_CALL 
analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_108_117_98_95_114_101_115_117_108_116_95_115_116_97_116_117_115_101_115_95_50_95_95_91_49_93_95_48_3_f_0_1(
#line 1366 "analysis.m"
  MR_Box analysis__closure_arg,
#line 1366 "analysis.m"
  MR_Box analysis__wrapper_arg_1,
#line 1366 "analysis.m"
  MR_Box analysis__wrapper_arg_2,
#line 1366 "analysis.m"
  MR_Box analysis__wrapper_arg_3);

#line 1172 "analysis.m"
static MR_bool MR_CALL 
analysis__IntroducedFrom__pred__clear_imdg_entries_pointing_at_3__1172__1_2_p_0(
#line 1172 "analysis.m"
  MR_Word analysis__ModuleName_4,
#line 1172 "analysis.m"
  MR_Word analysis__HeadVar__2_9);

#line 953 "analysis.m"
static MR_bool MR_CALL 
analysis__IntroducedFrom__func__update_analysis_registry_5__953__1_1_f_0(
#line 953 "analysis.m"
  MR_Word analysis__HeadVar__1_61,
#line 953 "analysis.m"
  MR_Word * analysis__HeadVar__2_62);

#line 924 "analysis.m"
static void MR_CALL 
analysis__IntroducedFrom__pred__update_analysis_registry_5__924__1_7_p_0(
#line 924 "analysis.m"
  MR_Word analysis__TypeClassInfo_for_analysis_158,
#line 924 "analysis.m"
  MR_Box analysis__NewAnswer_18,
#line 924 "analysis.m"
  MR_Box analysis__OldAnswer_25,
#line 924 "analysis.m"
  MR_Word analysis__Status_29,
#line 924 "analysis.m"
  MR_Word analysis__DepModules_31);

#line 895 "analysis.m"
static void MR_CALL 
analysis__IntroducedFrom__pred__update_analysis_registry_5__895__1_7_p_0(
#line 895 "analysis.m"
  MR_Word analysis__TypeClassInfo_for_analysis_158,
#line 895 "analysis.m"
  MR_Word analysis__ModuleName_11,
#line 895 "analysis.m"
  MR_Word analysis__FuncId_13,
#line 895 "analysis.m"
  MR_Box analysis__Call_17,
#line 895 "analysis.m"
  MR_Box analysis__NewAnswer_18);

#line 604 "analysis.m"
static MR_bool MR_CALL 
analysis__IntroducedFrom__pred__lookup_exactly_matching_result_even_from_invalid_modules__604__1_4_p_0(
#line 604 "analysis.m"
  MR_Word analysis__TypeClassInfo_for_analysis_32,
#line 604 "analysis.m"
  MR_Box analysis__FuncInfo_10,
#line 604 "analysis.m"
  MR_Box analysis__Call_11,
#line 604 "analysis.m"
  MR_Word analysis__HeadVar__4_22);

#line 537 "analysis.m"
static MR_Word MR_CALL 
analysis__IntroducedFrom__func__lookup_results_2__537__1_2_f_0(
#line 537 "analysis.m"
  MR_Word analysis__TypeClassInfo_for_analysis_29,
#line 537 "analysis.m"
  MR_Word analysis__HeadVar__2_24);

#line 517 "analysis.m"
static void MR_CALL 
analysis__IntroducedFrom__pred__lookup_results_1__517__1_4_p_0(
#line 517 "analysis.m"
  MR_Word analysis__TypeClassInfo_for_analysis_62,
#line 517 "analysis.m"
  MR_Word analysis__ResultList_10);

#line 500 "analysis.m"
static void MR_CALL 
analysis__IntroducedFrom__pred__lookup_results_1__500__1_4_p_0(
#line 500 "analysis.m"
  MR_Word analysis__ModuleName_7,
#line 500 "analysis.m"
  MR_Word analysis__FuncId_8);

#line 678 "analysis.m"
static MR_bool MR_CALL 
analysis__IntroducedFrom__func__lookup_requests__678__1_2_f_0(
#line 678 "analysis.m"
  MR_Word analysis__TypeClassInfo_for_call_pattern_47,
#line 678 "analysis.m"
  MR_Word analysis__HeadVar__2_23,
#line 678 "analysis.m"
  MR_Box * analysis__HeadVar__3_24);

#line 561 "analysis.m"
static void MR_CALL 
analysis__IntroducedFrom__pred__lookup_best_result__561__1_4_p_0(
#line 561 "analysis.m"
  MR_Word analysis__ModuleName_8,
#line 561 "analysis.m"
  MR_Word analysis__FuncId_9);

#line 550 "analysis.m"
static MR_bool MR_CALL 
analysis__IntroducedFrom__pred__lookup_matching_results__550__1_4_p_0(
#line 550 "analysis.m"
  MR_Word analysis__TypeClassInfo_for_analysis_21,
#line 550 "analysis.m"
  MR_Box analysis__FuncInfo_10,
#line 550 "analysis.m"
  MR_Box analysis__Call_11,
#line 550 "analysis.m"
  MR_Word analysis__HeadVar__4_17);

#line 480 "analysis.m"
static MR_Box MR_CALL 
analysis__IntroducedFrom__func__lookup_existing_call_patterns__480__1_2_f_0(
#line 480 "analysis.m"
  MR_Word analysis__TypeClassInfo_for_call_pattern_46,
#line 480 "analysis.m"
  MR_Word analysis__HeadVar__2_24);

#line 1359 "analysis.m"
static MR_Box MR_CALL 
analysis__lub_result_statuses_1_f_0_1(
#line 1359 "analysis.m"
  MR_Box analysis__closure_arg,
#line 1359 "analysis.m"
  MR_Box analysis__wrapper_arg_1,
#line 1359 "analysis.m"
  MR_Box analysis__wrapper_arg_2,
#line 1359 "analysis.m"
  MR_Box analysis__wrapper_arg_3);

#line 1179 "analysis.m"
static void MR_CALL 
analysis__combine_func_imdg_3_p_0_1(
#line 1179 "analysis.m"
  MR_Box analysis__closure_arg,
#line 1179 "analysis.m"
  MR_Box analysis__wrapper_arg_1,
#line 1179 "analysis.m"
  MR_Box analysis__wrapper_arg_2,
#line 1179 "analysis.m"
  MR_Box * analysis__wrapper_arg_3);

#line 1172 "analysis.m"
static MR_bool MR_CALL 
analysis__clear_imdg_entries_pointing_at_3_3_p_0_1(
#line 1172 "analysis.m"
  MR_Box analysis__closure_arg,
#line 1172 "analysis.m"
  MR_Box analysis__wrapper_arg_1);

#line 1165 "analysis.m"
static void MR_CALL 
analysis__clear_imdg_entries_pointing_at_2_3_p_0_1(
#line 1165 "analysis.m"
  MR_Box analysis__closure_arg,
#line 1165 "analysis.m"
  MR_Box analysis__wrapper_arg_1,
#line 1165 "analysis.m"
  MR_Box * analysis__wrapper_arg_2);

#line 1157 "analysis.m"
static void MR_CALL 
analysis__clear_imdg_entries_pointing_at_3_p_0_1(
#line 1157 "analysis.m"
  MR_Box analysis__closure_arg,
#line 1157 "analysis.m"
  MR_Box analysis__wrapper_arg_1,
#line 1157 "analysis.m"
  MR_Box * analysis__wrapper_arg_2);

#line 1135 "analysis.m"
static void MR_CALL 
analysis__update_intermodule_dependencies_2_4_p_0_1(
#line 1135 "analysis.m"
  MR_Box analysis__closure_arg,
#line 1135 "analysis.m"
  MR_Box analysis__wrapper_arg_1,
#line 1135 "analysis.m"
  MR_Box analysis__wrapper_arg_2,
#line 1135 "analysis.m"
  MR_Box * analysis__wrapper_arg_3);

#line 1120 "analysis.m"
static void MR_CALL 
analysis__update_intermodule_dependencies_4_p_0_1(
#line 1120 "analysis.m"
  MR_Box analysis__closure_arg,
#line 1120 "analysis.m"
  MR_Box analysis__wrapper_arg_1,
#line 1120 "analysis.m"
  MR_Box analysis__wrapper_arg_2,
#line 1120 "analysis.m"
  MR_Box * analysis__wrapper_arg_3);

#line 1017 "analysis.m"
static MR_bool MR_CALL 
analysis__imdg_dependent_modules_5_f_0_1(
#line 1017 "analysis.m"
  MR_Box analysis__closure_arg,
#line 1017 "analysis.m"
  MR_Box analysis__wrapper_arg_1,
#line 1017 "analysis.m"
  MR_Box * analysis__wrapper_arg_2);

#line 958 "analysis.m"
static void MR_CALL 
analysis__update_analysis_registry_5_9_p_0_3(
#line 958 "analysis.m"
  MR_Box analysis__closure_arg,
#line 958 "analysis.m"
  MR_Box analysis__wrapper_arg_1,
#line 958 "analysis.m"
  MR_Box analysis__wrapper_arg_2,
#line 958 "analysis.m"
  MR_Box * analysis__wrapper_arg_3,
#line 958 "analysis.m"
  MR_Box analysis__wrapper_arg_4,
#line 958 "analysis.m"
  MR_Box * analysis__wrapper_arg_5);

#line 953 "analysis.m"
static MR_bool MR_CALL 
analysis__update_analysis_registry_5_9_p_0_2(
#line 953 "analysis.m"
  MR_Box analysis__closure_arg,
#line 953 "analysis.m"
  MR_Box analysis__wrapper_arg_1,
#line 953 "analysis.m"
  MR_Box * analysis__wrapper_arg_2);

#line 926 "analysis.m"
static void MR_CALL 
analysis__update_analysis_registry_5_9_p_0_1(
#line 926 "analysis.m"
  MR_Box analysis__closure_arg,
#line 926 "analysis.m"
  MR_Box analysis__wrapper_arg_1,
#line 926 "analysis.m"
  MR_Box analysis__wrapper_arg_2,
#line 926 "analysis.m"
  MR_Box * analysis__wrapper_arg_3,
#line 926 "analysis.m"
  MR_Box analysis__wrapper_arg_4,
#line 926 "analysis.m"
  MR_Box * analysis__wrapper_arg_5);

#line 873 "analysis.m"
static void MR_CALL 
analysis__update_analysis_registry_4_9_p_0_1(
#line 873 "analysis.m"
  MR_Box analysis__closure_arg,
#line 873 "analysis.m"
  MR_Box analysis__wrapper_arg_1,
#line 873 "analysis.m"
  MR_Box analysis__wrapper_arg_2,
#line 873 "analysis.m"
  MR_Box * analysis__wrapper_arg_3,
#line 873 "analysis.m"
  MR_Box analysis__wrapper_arg_4,
#line 873 "analysis.m"
  MR_Box * analysis__wrapper_arg_5);

#line 861 "analysis.m"
static void MR_CALL 
analysis__update_analysis_registry_3_8_p_0_1(
#line 861 "analysis.m"
  MR_Box analysis__closure_arg,
#line 861 "analysis.m"
  MR_Box analysis__wrapper_arg_1,
#line 861 "analysis.m"
  MR_Box analysis__wrapper_arg_2,
#line 861 "analysis.m"
  MR_Box analysis__wrapper_arg_3,
#line 861 "analysis.m"
  MR_Box * analysis__wrapper_arg_4,
#line 861 "analysis.m"
  MR_Box analysis__wrapper_arg_5,
#line 861 "analysis.m"
  MR_Box * analysis__wrapper_arg_6);

#line 852 "analysis.m"
static void MR_CALL 
analysis__update_analysis_registry_2_7_p_0_1(
#line 852 "analysis.m"
  MR_Box analysis__closure_arg,
#line 852 "analysis.m"
  MR_Box analysis__wrapper_arg_1,
#line 852 "analysis.m"
  MR_Box analysis__wrapper_arg_2,
#line 852 "analysis.m"
  MR_Box analysis__wrapper_arg_3,
#line 852 "analysis.m"
  MR_Box * analysis__wrapper_arg_4,
#line 852 "analysis.m"
  MR_Box analysis__wrapper_arg_5,
#line 852 "analysis.m"
  MR_Box * analysis__wrapper_arg_6);

#line 852 "analysis.m"
static void MR_CALL 
analysis__update_analysis_registry_5_p_0_1(
#line 852 "analysis.m"
  MR_Box analysis__closure_arg,
#line 852 "analysis.m"
  MR_Box analysis__wrapper_arg_1,
#line 852 "analysis.m"
  MR_Box analysis__wrapper_arg_2,
#line 852 "analysis.m"
  MR_Box analysis__wrapper_arg_3,
#line 852 "analysis.m"
  MR_Box * analysis__wrapper_arg_4,
#line 852 "analysis.m"
  MR_Box analysis__wrapper_arg_5,
#line 852 "analysis.m"
  MR_Box * analysis__wrapper_arg_6);

#line 604 "analysis.m"
static MR_bool MR_CALL 
analysis__lookup_exactly_matching_result_even_from_invalid_modules_6_p_0_1(
#line 604 "analysis.m"
  MR_Box analysis__closure_arg,
#line 604 "analysis.m"
  MR_Box analysis__wrapper_arg_1);

#line 537 "analysis.m"
static MR_Box MR_CALL 
analysis__lookup_results_2_4_p_0_1(
#line 537 "analysis.m"
  MR_Box analysis__closure_arg,
#line 537 "analysis.m"
  MR_Box analysis__wrapper_arg_1);

#line 1281 "analysis.m"
static void MR_CALL 
analysis__write_analysis_files_7_p_0_4(
#line 1281 "analysis.m"
  MR_Box analysis__closure_arg,
#line 1281 "analysis.m"
  MR_Box analysis__wrapper_arg_1,
#line 1281 "analysis.m"
  MR_Box analysis__wrapper_arg_2,
#line 1281 "analysis.m"
  MR_Box * analysis__wrapper_arg_3);

#line 1273 "analysis.m"
static void MR_CALL 
analysis__write_analysis_files_7_p_0_3(
#line 1273 "analysis.m"
  MR_Box analysis__closure_arg,
#line 1273 "analysis.m"
  MR_Box analysis__wrapper_arg_1,
#line 1273 "analysis.m"
  MR_Box analysis__wrapper_arg_2,
#line 1273 "analysis.m"
  MR_Box * analysis__wrapper_arg_3);

#line 1264 "analysis.m"
static void MR_CALL 
analysis__write_analysis_files_7_p_0_2(
#line 1264 "analysis.m"
  MR_Box analysis__closure_arg,
#line 1264 "analysis.m"
  MR_Box analysis__wrapper_arg_1,
#line 1264 "analysis.m"
  MR_Box analysis__wrapper_arg_2,
#line 1264 "analysis.m"
  MR_Box * analysis__wrapper_arg_3);

#line 1246 "analysis.m"
static void MR_CALL 
analysis__write_analysis_files_7_p_0_1(
#line 1246 "analysis.m"
  MR_Box analysis__closure_arg,
#line 1246 "analysis.m"
  MR_Box analysis__wrapper_arg_1,
#line 1246 "analysis.m"
  MR_Box analysis__wrapper_arg_2,
#line 1246 "analysis.m"
  MR_Box * analysis__wrapper_arg_3,
#line 1246 "analysis.m"
  MR_Box analysis__wrapper_arg_4,
#line 1246 "analysis.m"
  MR_Box * analysis__wrapper_arg_5);

#line 1196 "analysis.m"
static void MR_CALL 
analysis__prepare_intermodule_analysis_7_p_0_1(
#line 1196 "analysis.m"
  MR_Box analysis__closure_arg,
#line 1196 "analysis.m"
  MR_Box analysis__wrapper_arg_1,
#line 1196 "analysis.m"
  MR_Box analysis__wrapper_arg_2,
#line 1196 "analysis.m"
  MR_Box * analysis__wrapper_arg_3,
#line 1196 "analysis.m"
  MR_Box analysis__wrapper_arg_4,
#line 1196 "analysis.m"
  MR_Box * analysis__wrapper_arg_5);

#line 678 "analysis.m"
static MR_bool MR_CALL 
analysis__lookup_requests_5_p_0_1(
#line 678 "analysis.m"
  MR_Box analysis__closure_arg,
#line 678 "analysis.m"
  MR_Box analysis__wrapper_arg_1,
#line 678 "analysis.m"
  MR_Box * analysis__wrapper_arg_2);

#line 576 "analysis.m"
static void MR_CALL 
analysis__lookup_best_result_6_p_0_1(
#line 576 "analysis.m"
  MR_Box analysis__closure_arg,
#line 576 "analysis.m"
  MR_Box analysis__wrapper_arg_1,
#line 576 "analysis.m"
  MR_Box analysis__wrapper_arg_2,
#line 576 "analysis.m"
  MR_Box * analysis__wrapper_arg_3);

#line 550 "analysis.m"
static MR_bool MR_CALL 
analysis__lookup_matching_results_6_p_0_1(
#line 550 "analysis.m"
  MR_Box analysis__closure_arg,
#line 550 "analysis.m"
  MR_Box analysis__wrapper_arg_1);

#line 480 "analysis.m"
static MR_Box MR_CALL 
analysis__lookup_existing_call_patterns_5_p_0_1(
#line 480 "analysis.m"
  MR_Box analysis__closure_arg,
#line 480 "analysis.m"
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
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0))
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
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0)),
    ((MR_Box) (&analysis_scalar_common_2[1]))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_analysis_status_0))
  },
  /* row 8 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0)),
    ((MR_Box) (&analysis_scalar_common_2[3]))
  },
  /* row 9 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0)),
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
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0)),
    ((MR_Box) (&analysis__tree234__pti_tree234_2__plain_analysis__type_ctor_info_func_id_0__plain_list__ti_list_1analysis__type_ctor_info_imdg_arc_0)),
    ((MR_Box) (&analysis__tree234__pti_tree234_2__plain_analysis__type_ctor_info_func_id_0__plain_list__ti_list_1analysis__type_ctor_info_imdg_arc_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0)),
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
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0)),
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
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0)),
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
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0))
  },
};

static /* final */ const MR_Box analysis_scalar_common_8[1][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0)),
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
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0)),
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
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0)),
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
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0)),
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
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0)),
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
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0)),
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
#line 1381 "analysis.m"
MR_Word analysis__mutable_variable_debug_analysis;
#ifdef MR_THREAD_SAFE
    MercuryLock analysis__mutable_variable_debug_analysis_lock;
#endif

#line 1381 "analysis.m"
void 
analysis__user_init_pred_0(void)
#line 1381 "analysis.m"
{
#line 1381 "analysis.m"
	analysis__initialise_mutable_debug_analysis_0_p_0();
}


#line 1886 "analysis.c"
static const MR_FA_PseudoTypeInfo_Struct2 analysis__analysis__pti_analysis_result_2__pseudo_2__pseudo_3 = {
  &analysis__analysis__type_ctor_info_analysis_result_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 2,
    (MR_PseudoTypeInfo) (MR_Integer) 3
  }
};

#line 1895 "analysis.c"
static const MR_FA_PseudoTypeInfo_Struct2 analysis__analysis__pti_analysis_result_2__pseudo_1__pseudo_2 = {
  &analysis__analysis__type_ctor_info_analysis_result_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

#line 1904 "analysis.c"
static const MR_FA_TypeInfo_Struct1 analysis__list__ti_list_1analysis__type_ctor_info_some_analysis_result_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &analysis__analysis__type_ctor_info_some_analysis_result_0
  }
};

#line 1912 "analysis.c"
static const MR_FA_PseudoTypeInfo_Struct2 analysis__tree234__pti_tree234_2__plain_analysis__type_ctor_info_func_id_0__plain_list__ti_list_1analysis__type_ctor_info_some_analysis_result_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &analysis__analysis__type_ctor_info_func_id_0,
    (MR_PseudoTypeInfo) &analysis__list__ti_list_1analysis__type_ctor_info_some_analysis_result_0
  }
};

#line 1921 "analysis.c"
static const MR_FA_PseudoTypeInfo_Struct1 analysis__list__pti_list_1__plain_analysis__type_ctor_info_some_analysis_result_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &analysis__analysis__type_ctor_info_some_analysis_result_0
  }
};

#line 1929 "analysis.c"
static const MR_FA_TypeInfo_Struct1 analysis__list__ti_list_1analysis__type_ctor_info_imdg_arc_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &analysis__analysis__type_ctor_info_imdg_arc_0
  }
};

#line 1937 "analysis.c"
static const MR_FA_PseudoTypeInfo_Struct2 analysis__tree234__pti_tree234_2__plain_analysis__type_ctor_info_func_id_0__plain_list__ti_list_1analysis__type_ctor_info_imdg_arc_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &analysis__analysis__type_ctor_info_func_id_0,
    (MR_PseudoTypeInfo) &analysis__list__ti_list_1analysis__type_ctor_info_imdg_arc_0
  }
};

#line 1946 "analysis.c"
static const MR_FA_PseudoTypeInfo_Struct1 analysis__list__pti_list_1__plain_analysis__type_ctor_info_imdg_arc_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &analysis__analysis__type_ctor_info_imdg_arc_0
  }
};

#line 1954 "analysis.c"
static const MR_FA_TypeInfo_Struct1 analysis__set_ordlist__ti_set_ordlist_1mdbcomp__prim_data__type_ctor_info_sym_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0
  }
};

#line 1962 "analysis.c"
static const MR_FA_TypeInfo_Struct1 analysis__list__ti_list_1analysis__type_ctor_info_analysis_request_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &analysis__analysis__type_ctor_info_analysis_request_0
  }
};

#line 1970 "analysis.c"
static const MR_FA_TypeInfo_Struct2 analysis__tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_analysis_request_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &analysis__analysis__type_ctor_info_func_id_0,
    (MR_TypeInfo) &analysis__list__ti_list_1analysis__type_ctor_info_analysis_request_0
  }
};

#line 1979 "analysis.c"
static const MR_FA_TypeInfo_Struct2 analysis__tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_analysis_request_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_TypeInfo) &analysis__tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_analysis_request_0
  }
};

#line 1988 "analysis.c"
static const MR_FA_TypeInfo_Struct2 analysis__tree234__ti_tree234_2mdbcomp__prim_data__type_ctor_info_sym_name_0tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_analysis_request_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0,
    (MR_TypeInfo) &analysis__tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_analysis_request_0
  }
};

#line 1997 "analysis.c"
static const MR_FA_TypeInfo_Struct2 analysis__tree234__ti_tree234_2mdbcomp__prim_data__type_ctor_info_sym_name_0analysis__type_ctor_info_analysis_status_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0,
    (MR_TypeInfo) &analysis__analysis__type_ctor_info_analysis_status_0
  }
};

#line 2006 "analysis.c"
static const MR_FA_TypeInfo_Struct2 analysis__tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_some_analysis_result_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &analysis__analysis__type_ctor_info_func_id_0,
    (MR_TypeInfo) &analysis__list__ti_list_1analysis__type_ctor_info_some_analysis_result_0
  }
};

#line 2015 "analysis.c"
static const MR_FA_TypeInfo_Struct2 analysis__tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_some_analysis_result_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_TypeInfo) &analysis__tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_some_analysis_result_0
  }
};

#line 2024 "analysis.c"
static const MR_FA_TypeInfo_Struct2 analysis__tree234__ti_tree234_2mdbcomp__prim_data__type_ctor_info_sym_name_0tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_some_analysis_result_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0,
    (MR_TypeInfo) &analysis__tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_some_analysis_result_0
  }
};

#line 2033 "analysis.c"
static const MR_FA_TypeInfo_Struct2 analysis__tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_imdg_arc_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &analysis__analysis__type_ctor_info_func_id_0,
    (MR_TypeInfo) &analysis__list__ti_list_1analysis__type_ctor_info_imdg_arc_0
  }
};

#line 2042 "analysis.c"
static const MR_FA_TypeInfo_Struct2 analysis__tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_imdg_arc_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_TypeInfo) &analysis__tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_imdg_arc_0
  }
};

#line 2051 "analysis.c"
static const MR_FA_TypeInfo_Struct2 analysis__tree234__ti_tree234_2mdbcomp__prim_data__type_ctor_info_sym_name_0tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_imdg_arc_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0,
    (MR_TypeInfo) &analysis__tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_imdg_arc_0
  }
};

#line 2060 "analysis.c"
static const MR_PseudoTypeInfo analysis__analysis__field_types_analysis_info_0_0[10] = {
  (MR_PseudoTypeInfo) (MR_Integer) 513,
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &analysis__analysis__type_ctor_info_make_analysis_registry_0,
  (MR_PseudoTypeInfo) &analysis__set_ordlist__ti_set_ordlist_1mdbcomp__prim_data__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &analysis__tree234__ti_tree234_2mdbcomp__prim_data__type_ctor_info_sym_name_0tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_analysis_request_0,
  (MR_PseudoTypeInfo) &analysis__tree234__ti_tree234_2mdbcomp__prim_data__type_ctor_info_sym_name_0analysis__type_ctor_info_analysis_status_0,
  (MR_PseudoTypeInfo) &analysis__tree234__ti_tree234_2mdbcomp__prim_data__type_ctor_info_sym_name_0tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_some_analysis_result_0,
  (MR_PseudoTypeInfo) &analysis__tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_some_analysis_result_0,
  (MR_PseudoTypeInfo) &analysis__tree234__ti_tree234_2mdbcomp__prim_data__type_ctor_info_sym_name_0tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_imdg_arc_0,
  (MR_PseudoTypeInfo) &analysis__tree234__ti_tree234_2mdbcomp__prim_data__type_ctor_info_sym_name_0tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_imdg_arc_0
};

#line 2074 "analysis.c"
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

#line 2088 "analysis.c"
static const MR_TypeClassConstraint_1Struct analysis__analysis__exist_tc_constr_analysis_info_0_0_1 = {
  &analysis__analysis__type_class_decl_compiler_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 2096 "analysis.c"
static const MR_TypeClassConstraint analysis__analysis__exist_tc_constrs_analysis_info_0_0[1] = {
  (MR_TypeClassConstraint) &analysis__analysis__exist_tc_constr_analysis_info_0_0_1
};

#line 2101 "analysis.c"
static const MR_DuExistLocn analysis__analysis__exist_locns_analysis_info_0_0[1] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

#line 2109 "analysis.c"
static const MR_DuExistInfo analysis__analysis__exist_info_analysis_info_0_0 = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 1,
  analysis__analysis__exist_locns_analysis_info_0_0,
  analysis__analysis__exist_tc_constrs_analysis_info_0_0
};

#line 2118 "analysis.c"
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

#line 2133 "analysis.c"
static const MR_DuFunctorDescPtr analysis__analysis__du_stag_ordered_analysis_info_0_0[1] = {
  &analysis__analysis__du_functor_desc_analysis_info_0_0
};

#line 2138 "analysis.c"
static const MR_DuPtagLayout analysis__analysis__du_ptag_ordered_analysis_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    analysis__analysis__du_stag_ordered_analysis_info_0_0
  }
};

#line 2147 "analysis.c"
static const MR_DuFunctorDescPtr analysis__analysis__du_name_ordered_analysis_info_0[1] = {
  &analysis__analysis__du_functor_desc_analysis_info_0_0
};

#line 2152 "analysis.c"
static const MR_Integer analysis__analysis__functor_number_map_analysis_info_0[1] = {
  (MR_Integer) 0
};

#line 2157 "analysis.c"
const MR_TypeCtorInfo_Struct analysis__analysis__type_ctor_info_analysis_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (analysis____Unify____analysis_info_0_0_10001)),
  ((MR_Box) (analysis____Compare____analysis_info_0_0_10001)),
  (MR_String) "analysis",
  (MR_String) "analysis_info",
  {
    analysis__analysis__du_name_ordered_analysis_info_0
  },
  {
    analysis__analysis__du_ptag_ordered_analysis_info_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  analysis__analysis__functor_number_map_analysis_info_0
};

#line 2178 "analysis.c"
static const MR_FA_PseudoTypeInfo_Struct1 analysis__list__pti_list_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 2186 "analysis.c"
static const MR_FA_PseudoTypeInfo_Struct2 analysis__tree234__pti_tree234_2__plain_analysis__type_ctor_info_func_id_0__pseudo_list__pti_list_1__pseudo_1 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &analysis__analysis__type_ctor_info_func_id_0,
    (MR_PseudoTypeInfo) &analysis__list__pti_list_1__pseudo_1
  }
};

#line 2195 "analysis.c"
static const MR_FA_PseudoTypeInfo_Struct2 analysis__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__pseudo_tree234__pti_tree234_2__plain_analysis__type_ctor_info_func_id_0__pseudo_list__pti_list_1__pseudo_1 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &analysis__tree234__pti_tree234_2__plain_analysis__type_ctor_info_func_id_0__pseudo_list__pti_list_1__pseudo_1
  }
};

#line 2204 "analysis.c"
static const MR_FA_PseudoTypeInfo_Struct2 analysis__tree234__pti_tree234_2__plain_mdbcomp__prim_data__type_ctor_info_sym_name_0__pseudo_tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__pseudo_tree234__pti_tree234_2__plain_analysis__type_ctor_info_func_id_0__pseudo_list__pti_list_1__pseudo_1 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0,
    (MR_PseudoTypeInfo) &analysis__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__pseudo_tree234__pti_tree234_2__plain_analysis__type_ctor_info_func_id_0__pseudo_list__pti_list_1__pseudo_1
  }
};

#line 2213 "analysis.c"
const MR_TypeCtorInfo_Struct analysis__analysis__type_ctor_info_analysis_map_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (analysis____Unify____analysis_map_1_0_10001)),
  ((MR_Box) (analysis____Compare____analysis_map_1_0_10001)),
  (MR_String) "analysis",
  (MR_String) "analysis_map",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &analysis__tree234__pti_tree234_2__plain_mdbcomp__prim_data__type_ctor_info_sym_name_0__pseudo_tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__pseudo_tree234__pti_tree234_2__plain_analysis__type_ctor_info_func_id_0__pseudo_list__pti_list_1__pseudo_1
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2234 "analysis.c"
const MR_TypeCtorInfo_Struct analysis__analysis__type_ctor_info_analysis_name_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (analysis____Unify____analysis_name_0_0_10001)),
  ((MR_Box) (analysis____Compare____analysis_name_0_0_10001)),
  (MR_String) "analysis",
  (MR_String) "analysis_name",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2255 "analysis.c"
static const MR_PseudoTypeInfo analysis__analysis__field_types_analysis_request_0_0[2] = {
  (MR_PseudoTypeInfo) (MR_Integer) 514,
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0
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
  {
    analysis__analysis__du_name_ordered_analysis_request_0
  },
  {
    analysis__analysis__du_ptag_ordered_analysis_request_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  analysis__analysis__functor_number_map_analysis_request_0
};

#line 2362 "analysis.c"
static const MR_PseudoTypeInfo analysis__analysis__field_types_analysis_result_2_0[3] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) (MR_Integer) 2,
  (MR_PseudoTypeInfo) &analysis__analysis__type_ctor_info_analysis_status_0
};

#line 2369 "analysis.c"
static const MR_ConstString analysis__analysis__field_names_analysis_result_2_0[3] = {
  (MR_String) "ar_call",
  (MR_String) "ar_answer",
  (MR_String) "ar_status"
};

#line 2376 "analysis.c"
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

#line 2391 "analysis.c"
static const MR_DuFunctorDescPtr analysis__analysis__du_stag_ordered_analysis_result_2_0[1] = {
  &analysis__analysis__du_functor_desc_analysis_result_2_0
};

#line 2396 "analysis.c"
static const MR_DuPtagLayout analysis__analysis__du_ptag_ordered_analysis_result_2[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    analysis__analysis__du_stag_ordered_analysis_result_2_0
  }
};

#line 2405 "analysis.c"
static const MR_DuFunctorDescPtr analysis__analysis__du_name_ordered_analysis_result_2[1] = {
  &analysis__analysis__du_functor_desc_analysis_result_2_0
};

#line 2410 "analysis.c"
static const MR_Integer analysis__analysis__functor_number_map_analysis_result_2[1] = {
  (MR_Integer) 0
};

#line 2415 "analysis.c"
const MR_TypeCtorInfo_Struct analysis__analysis__type_ctor_info_analysis_result_2 = {
  (MR_Integer) 2,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (analysis____Unify____analysis_result_2_0_10001)),
  ((MR_Box) (analysis____Compare____analysis_result_2_0_10001)),
  (MR_String) "analysis",
  (MR_String) "analysis_result",
  {
    analysis__analysis__du_name_ordered_analysis_result_2
  },
  {
    analysis__analysis__du_ptag_ordered_analysis_result_2
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  analysis__analysis__functor_number_map_analysis_result_2
};

#line 2436 "analysis.c"
static const MR_EnumFunctorDesc analysis__analysis__enum_functor_desc_analysis_status_0_0 = {
  (MR_String) "invalid",
  (MR_Integer) 0
};

#line 2442 "analysis.c"
static const MR_EnumFunctorDesc analysis__analysis__enum_functor_desc_analysis_status_0_1 = {
  (MR_String) "suboptimal",
  (MR_Integer) 1
};

#line 2448 "analysis.c"
static const MR_EnumFunctorDesc analysis__analysis__enum_functor_desc_analysis_status_0_2 = {
  (MR_String) "optimal",
  (MR_Integer) 2
};

#line 2454 "analysis.c"
static const MR_EnumFunctorDescPtr analysis__analysis__enum_value_ordered_analysis_status_0[3] = {
  &analysis__analysis__enum_functor_desc_analysis_status_0_0,
  &analysis__analysis__enum_functor_desc_analysis_status_0_1,
  &analysis__analysis__enum_functor_desc_analysis_status_0_2
};

#line 2461 "analysis.c"
static const MR_EnumFunctorDescPtr analysis__analysis__enum_name_ordered_analysis_status_0[3] = {
  &analysis__analysis__enum_functor_desc_analysis_status_0_0,
  &analysis__analysis__enum_functor_desc_analysis_status_0_2,
  &analysis__analysis__enum_functor_desc_analysis_status_0_1
};

#line 2468 "analysis.c"
static const MR_Integer analysis__analysis__functor_number_map_analysis_status_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 1
};

#line 2475 "analysis.c"
const MR_TypeCtorInfo_Struct analysis__analysis__type_ctor_info_analysis_status_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (analysis____Unify____analysis_status_0_0_10001)),
  ((MR_Box) (analysis____Compare____analysis_status_0_0_10001)),
  (MR_String) "analysis",
  (MR_String) "analysis_status",
  {
    analysis__analysis__enum_name_ordered_analysis_status_0
  },
  {
    analysis__analysis__enum_value_ordered_analysis_status_0
  },
  (MR_Integer) 3,
  (MR_Integer) 4,
  analysis__analysis__functor_number_map_analysis_status_0
};

#line 2496 "analysis.c"
static const MR_FA_PseudoTypeInfo_Struct1 analysis__unit__pti_unit_1__pseudo_514 = {
  &mercury__unit__unit__type_ctor_info_unit_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 514
  }
};

#line 2504 "analysis.c"
static const MR_FA_PseudoTypeInfo_Struct1 analysis__unit__pti_unit_1__pseudo_515 = {
  &mercury__unit__unit__type_ctor_info_unit_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 515
  }
};

#line 2512 "analysis.c"
static const MR_PseudoTypeInfo analysis__analysis__field_types_analysis_type_0_0[2] = {
  (MR_PseudoTypeInfo) &analysis__unit__pti_unit_1__pseudo_514,
  (MR_PseudoTypeInfo) &analysis__unit__pti_unit_1__pseudo_515
};

#line 2518 "analysis.c"
static const MR_TypeClassConstraint_3Struct analysis__analysis__exist_tc_constr_analysis_type_0_0_1 = {
  &analysis__analysis__type_class_decl_analysis_3,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 2,
    (MR_PseudoTypeInfo) (MR_Integer) 3
  }
};

#line 2528 "analysis.c"
static const MR_TypeClassConstraint analysis__analysis__exist_tc_constrs_analysis_type_0_0[1] = {
  (MR_TypeClassConstraint) &analysis__analysis__exist_tc_constr_analysis_type_0_0_1
};

#line 2533 "analysis.c"
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

#line 2549 "analysis.c"
static const MR_DuExistInfo analysis__analysis__exist_info_analysis_type_0_0 = {
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 1,
  analysis__analysis__exist_locns_analysis_type_0_0,
  analysis__analysis__exist_tc_constrs_analysis_type_0_0
};

#line 2558 "analysis.c"
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

#line 2573 "analysis.c"
static const MR_DuFunctorDescPtr analysis__analysis__du_stag_ordered_analysis_type_0_0[1] = {
  &analysis__analysis__du_functor_desc_analysis_type_0_0
};

#line 2578 "analysis.c"
static const MR_DuPtagLayout analysis__analysis__du_ptag_ordered_analysis_type_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    analysis__analysis__du_stag_ordered_analysis_type_0_0
  }
};

#line 2587 "analysis.c"
static const MR_DuFunctorDescPtr analysis__analysis__du_name_ordered_analysis_type_0[1] = {
  &analysis__analysis__du_functor_desc_analysis_type_0_0
};

#line 2592 "analysis.c"
static const MR_Integer analysis__analysis__functor_number_map_analysis_type_0[1] = {
  (MR_Integer) 0
};

#line 2597 "analysis.c"
const MR_TypeCtorInfo_Struct analysis__analysis__type_ctor_info_analysis_type_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (analysis____Unify____analysis_type_0_0_10001)),
  ((MR_Box) (analysis____Compare____analysis_type_0_0_10001)),
  (MR_String) "analysis",
  (MR_String) "analysis_type",
  {
    analysis__analysis__du_name_ordered_analysis_type_0
  },
  {
    analysis__analysis__du_ptag_ordered_analysis_type_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  analysis__analysis__functor_number_map_analysis_type_0
};

#line 2618 "analysis.c"
static const MR_EnumFunctorDesc analysis__analysis__enum_functor_desc_any_call_0_0 = {
  (MR_String) "any_call",
  (MR_Integer) 0
};

#line 2624 "analysis.c"
static const MR_EnumFunctorDescPtr analysis__analysis__enum_value_ordered_any_call_0[1] = {
  &analysis__analysis__enum_functor_desc_any_call_0_0
};

#line 2629 "analysis.c"
static const MR_EnumFunctorDescPtr analysis__analysis__enum_name_ordered_any_call_0[1] = {
  &analysis__analysis__enum_functor_desc_any_call_0_0
};

#line 2634 "analysis.c"
static const MR_Integer analysis__analysis__functor_number_map_any_call_0[1] = {
  (MR_Integer) 0
};

#line 2639 "analysis.c"
const MR_TypeCtorInfo_Struct analysis__analysis__type_ctor_info_any_call_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_DUMMY,
  ((MR_Box) (analysis____Unify____any_call_0_0_10001)),
  ((MR_Box) (analysis____Compare____any_call_0_0_10001)),
  (MR_String) "analysis",
  (MR_String) "any_call",
  {
    analysis__analysis__enum_name_ordered_any_call_0
  },
  {
    analysis__analysis__enum_value_ordered_any_call_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  analysis__analysis__functor_number_map_any_call_0
};

#line 2660 "analysis.c"
static const MR_EnumFunctorDesc analysis__analysis__enum_functor_desc_fixpoint_type_0_0 = {
  (MR_String) "least_fixpoint",
  (MR_Integer) 0
};

#line 2666 "analysis.c"
static const MR_EnumFunctorDesc analysis__analysis__enum_functor_desc_fixpoint_type_0_1 = {
  (MR_String) "greatest_fixpoint",
  (MR_Integer) 1
};

#line 2672 "analysis.c"
static const MR_EnumFunctorDescPtr analysis__analysis__enum_value_ordered_fixpoint_type_0[2] = {
  &analysis__analysis__enum_functor_desc_fixpoint_type_0_0,
  &analysis__analysis__enum_functor_desc_fixpoint_type_0_1
};

#line 2678 "analysis.c"
static const MR_EnumFunctorDescPtr analysis__analysis__enum_name_ordered_fixpoint_type_0[2] = {
  &analysis__analysis__enum_functor_desc_fixpoint_type_0_1,
  &analysis__analysis__enum_functor_desc_fixpoint_type_0_0
};

#line 2684 "analysis.c"
static const MR_Integer analysis__analysis__functor_number_map_fixpoint_type_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 2690 "analysis.c"
const MR_TypeCtorInfo_Struct analysis__analysis__type_ctor_info_fixpoint_type_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (analysis____Unify____fixpoint_type_0_0_10001)),
  ((MR_Box) (analysis____Compare____fixpoint_type_0_0_10001)),
  (MR_String) "analysis",
  (MR_String) "fixpoint_type",
  {
    analysis__analysis__enum_name_ordered_fixpoint_type_0
  },
  {
    analysis__analysis__enum_value_ordered_fixpoint_type_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  analysis__analysis__functor_number_map_fixpoint_type_0
};

#line 2711 "analysis.c"
const MR_TypeCtorInfo_Struct analysis__analysis__type_ctor_info_func_analysis_map_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (analysis____Unify____func_analysis_map_1_0_10001)),
  ((MR_Box) (analysis____Compare____func_analysis_map_1_0_10001)),
  (MR_String) "analysis",
  (MR_String) "func_analysis_map",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &analysis__tree234__pti_tree234_2__plain_analysis__type_ctor_info_func_id_0__pseudo_list__pti_list_1__pseudo_1
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2732 "analysis.c"
static const MR_PseudoTypeInfo analysis__analysis__field_types_func_id_0_0[4] = {
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2740 "analysis.c"
static const MR_ConstString analysis__analysis__field_names_func_id_0_0[4] = {
  (MR_String) "fid_pf",
  (MR_String) "fid_name",
  (MR_String) "fid_arity",
  (MR_String) "fid_mode"
};

#line 2748 "analysis.c"
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

#line 2763 "analysis.c"
static const MR_DuFunctorDescPtr analysis__analysis__du_stag_ordered_func_id_0_0[1] = {
  &analysis__analysis__du_functor_desc_func_id_0_0
};

#line 2768 "analysis.c"
static const MR_DuPtagLayout analysis__analysis__du_ptag_ordered_func_id_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    analysis__analysis__du_stag_ordered_func_id_0_0
  }
};

#line 2777 "analysis.c"
static const MR_DuFunctorDescPtr analysis__analysis__du_name_ordered_func_id_0[1] = {
  &analysis__analysis__du_functor_desc_func_id_0_0
};

#line 2782 "analysis.c"
static const MR_Integer analysis__analysis__functor_number_map_func_id_0[1] = {
  (MR_Integer) 0
};

#line 2787 "analysis.c"
const MR_TypeCtorInfo_Struct analysis__analysis__type_ctor_info_func_id_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (analysis____Unify____func_id_0_0_10001)),
  ((MR_Box) (analysis____Compare____func_id_0_0_10001)),
  (MR_String) "analysis",
  (MR_String) "func_id",
  {
    analysis__analysis__du_name_ordered_func_id_0
  },
  {
    analysis__analysis__du_ptag_ordered_func_id_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  analysis__analysis__functor_number_map_func_id_0
};

#line 2808 "analysis.c"
static const MR_PseudoTypeInfo analysis__analysis__field_types_imdg_arc_0_0[2] = {
  (MR_PseudoTypeInfo) (MR_Integer) 514,
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0
};

#line 2814 "analysis.c"
static const MR_ConstString analysis__analysis__field_names_imdg_arc_0_0[2] = {
  (MR_String) "imdg_call",
  (MR_String) "imdg_caller"
};

#line 2820 "analysis.c"
static const MR_TypeClassConstraint_2Struct analysis__analysis__exist_tc_constr_imdg_arc_0_0_1 = {
  &analysis__analysis__type_class_decl_call_pattern_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

#line 2829 "analysis.c"
static const MR_TypeClassConstraint analysis__analysis__exist_tc_constrs_imdg_arc_0_0[1] = {
  (MR_TypeClassConstraint) &analysis__analysis__exist_tc_constr_imdg_arc_0_0_1
};

#line 2834 "analysis.c"
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

#line 2846 "analysis.c"
static const MR_DuExistInfo analysis__analysis__exist_info_imdg_arc_0_0 = {
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 1,
  analysis__analysis__exist_locns_imdg_arc_0_0,
  analysis__analysis__exist_tc_constrs_imdg_arc_0_0
};

#line 2855 "analysis.c"
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

#line 2870 "analysis.c"
static const MR_DuFunctorDescPtr analysis__analysis__du_stag_ordered_imdg_arc_0_0[1] = {
  &analysis__analysis__du_functor_desc_imdg_arc_0_0
};

#line 2875 "analysis.c"
static const MR_DuPtagLayout analysis__analysis__du_ptag_ordered_imdg_arc_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    analysis__analysis__du_stag_ordered_imdg_arc_0_0
  }
};

#line 2884 "analysis.c"
static const MR_DuFunctorDescPtr analysis__analysis__du_name_ordered_imdg_arc_0[1] = {
  &analysis__analysis__du_functor_desc_imdg_arc_0_0
};

#line 2889 "analysis.c"
static const MR_Integer analysis__analysis__functor_number_map_imdg_arc_0[1] = {
  (MR_Integer) 0
};

#line 2894 "analysis.c"
const MR_TypeCtorInfo_Struct analysis__analysis__type_ctor_info_imdg_arc_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (analysis____Unify____imdg_arc_0_0_10001)),
  ((MR_Box) (analysis____Compare____imdg_arc_0_0_10001)),
  (MR_String) "analysis",
  (MR_String) "imdg_arc",
  {
    analysis__analysis__du_name_ordered_imdg_arc_0
  },
  {
    analysis__analysis__du_ptag_ordered_imdg_arc_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  analysis__analysis__functor_number_map_imdg_arc_0
};

#line 2915 "analysis.c"
static const MR_EnumFunctorDesc analysis__analysis__enum_functor_desc_make_analysis_registry_0_0 = {
  (MR_String) "make_analysis_registry",
  (MR_Integer) 0
};

#line 2921 "analysis.c"
static const MR_EnumFunctorDesc analysis__analysis__enum_functor_desc_make_analysis_registry_0_1 = {
  (MR_String) "use_analysis_registry_only",
  (MR_Integer) 1
};

#line 2927 "analysis.c"
static const MR_EnumFunctorDescPtr analysis__analysis__enum_value_ordered_make_analysis_registry_0[2] = {
  &analysis__analysis__enum_functor_desc_make_analysis_registry_0_0,
  &analysis__analysis__enum_functor_desc_make_analysis_registry_0_1
};

#line 2933 "analysis.c"
static const MR_EnumFunctorDescPtr analysis__analysis__enum_name_ordered_make_analysis_registry_0[2] = {
  &analysis__analysis__enum_functor_desc_make_analysis_registry_0_0,
  &analysis__analysis__enum_functor_desc_make_analysis_registry_0_1
};

#line 2939 "analysis.c"
static const MR_Integer analysis__analysis__functor_number_map_make_analysis_registry_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2945 "analysis.c"
const MR_TypeCtorInfo_Struct analysis__analysis__type_ctor_info_make_analysis_registry_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (analysis____Unify____make_analysis_registry_0_0_10001)),
  ((MR_Box) (analysis____Compare____make_analysis_registry_0_0_10001)),
  (MR_String) "analysis",
  (MR_String) "make_analysis_registry",
  {
    analysis__analysis__enum_name_ordered_make_analysis_registry_0
  },
  {
    analysis__analysis__enum_value_ordered_make_analysis_registry_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  analysis__analysis__functor_number_map_make_analysis_registry_0
};

#line 2966 "analysis.c"
const MR_TypeCtorInfo_Struct analysis__analysis__type_ctor_info_module_analysis_map_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (analysis____Unify____module_analysis_map_1_0_10001)),
  ((MR_Box) (analysis____Compare____module_analysis_map_1_0_10001)),
  (MR_String) "analysis",
  (MR_String) "module_analysis_map",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &analysis__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__pseudo_tree234__pti_tree234_2__plain_analysis__type_ctor_info_func_id_0__pseudo_list__pti_list_1__pseudo_1
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2987 "analysis.c"
static const MR_EnumFunctorDesc analysis__analysis__enum_functor_desc_no_func_info_0_0 = {
  (MR_String) "no_func_info",
  (MR_Integer) 0
};

#line 2993 "analysis.c"
static const MR_EnumFunctorDescPtr analysis__analysis__enum_value_ordered_no_func_info_0[1] = {
  &analysis__analysis__enum_functor_desc_no_func_info_0_0
};

#line 2998 "analysis.c"
static const MR_EnumFunctorDescPtr analysis__analysis__enum_name_ordered_no_func_info_0[1] = {
  &analysis__analysis__enum_functor_desc_no_func_info_0_0
};

#line 3003 "analysis.c"
static const MR_Integer analysis__analysis__functor_number_map_no_func_info_0[1] = {
  (MR_Integer) 0
};

#line 3008 "analysis.c"
const MR_TypeCtorInfo_Struct analysis__analysis__type_ctor_info_no_func_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_DUMMY,
  ((MR_Box) (analysis____Unify____no_func_info_0_0_10001)),
  ((MR_Box) (analysis____Compare____no_func_info_0_0_10001)),
  (MR_String) "analysis",
  (MR_String) "no_func_info",
  {
    analysis__analysis__enum_name_ordered_no_func_info_0
  },
  {
    analysis__analysis__enum_value_ordered_no_func_info_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  analysis__analysis__functor_number_map_no_func_info_0
};

#line 3029 "analysis.c"
static const MR_PseudoTypeInfo analysis__analysis__field_types_some_analysis_result_0_0[3] = {
  (MR_PseudoTypeInfo) (MR_Integer) 514,
  (MR_PseudoTypeInfo) (MR_Integer) 515,
  (MR_PseudoTypeInfo) &analysis__analysis__type_ctor_info_analysis_status_0
};

#line 3036 "analysis.c"
static const MR_ConstString analysis__analysis__field_names_some_analysis_result_0_0[3] = {
  (MR_String) "some_ar_call",
  (MR_String) "some_ar_answer",
  (MR_String) "some_ar_status"
};

#line 3043 "analysis.c"
static const MR_TypeClassConstraint_3Struct analysis__analysis__exist_tc_constr_some_analysis_result_0_0_1 = {
  &analysis__analysis__type_class_decl_analysis_3,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 2,
    (MR_PseudoTypeInfo) (MR_Integer) 3
  }
};

#line 3053 "analysis.c"
static const MR_TypeClassConstraint analysis__analysis__exist_tc_constrs_some_analysis_result_0_0[1] = {
  (MR_TypeClassConstraint) &analysis__analysis__exist_tc_constr_some_analysis_result_0_0_1
};

#line 3058 "analysis.c"
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

#line 3074 "analysis.c"
static const MR_DuExistInfo analysis__analysis__exist_info_some_analysis_result_0_0 = {
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 1,
  analysis__analysis__exist_locns_some_analysis_result_0_0,
  analysis__analysis__exist_tc_constrs_some_analysis_result_0_0
};

#line 3083 "analysis.c"
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

#line 3098 "analysis.c"
static const MR_DuFunctorDescPtr analysis__analysis__du_stag_ordered_some_analysis_result_0_0[1] = {
  &analysis__analysis__du_functor_desc_some_analysis_result_0_0
};

#line 3103 "analysis.c"
static const MR_DuPtagLayout analysis__analysis__du_ptag_ordered_some_analysis_result_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    analysis__analysis__du_stag_ordered_some_analysis_result_0_0
  }
};

#line 3112 "analysis.c"
static const MR_DuFunctorDescPtr analysis__analysis__du_name_ordered_some_analysis_result_0[1] = {
  &analysis__analysis__du_functor_desc_some_analysis_result_0_0
};

#line 3117 "analysis.c"
static const MR_Integer analysis__analysis__functor_number_map_some_analysis_result_0[1] = {
  (MR_Integer) 0
};

#line 3122 "analysis.c"
const MR_TypeCtorInfo_Struct analysis__analysis__type_ctor_info_some_analysis_result_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (analysis____Unify____some_analysis_result_0_0_10001)),
  ((MR_Box) (analysis____Compare____some_analysis_result_0_0_10001)),
  (MR_String) "analysis",
  (MR_String) "some_analysis_result",
  {
    analysis__analysis__du_name_ordered_some_analysis_result_0
  },
  {
    analysis__analysis__du_ptag_ordered_some_analysis_result_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  analysis__analysis__functor_number_map_some_analysis_result_0
};

#line 3143 "analysis.c"
const MR_BaseTypeclassInfo base_typeclass_info_analysis__to_term__arity1__analysis__any_call__arity0__[7] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (MR_Word) ((MR_Integer) 2)),
  ((MR_Box) (analysis__ClassMethod_for_analysis__to_term____analysis__any_call__arity0______analysis__to_term_1_1_f_0_10001)),
  ((MR_Box) (analysis__ClassMethod_for_analysis__to_term____analysis__any_call__arity0______analysis__from_term_2_2_p_0_10001))
};

#line 3154 "analysis.c"
const MR_BaseTypeclassInfo base_typeclass_info_analysis__partial_order__arity2__analysis__no_func_info__arity0__analysis__any_call__arity0__[7] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 2)),
  ((MR_Box) (MR_Word) ((MR_Integer) 2)),
  ((MR_Box) (analysis__ClassMethod_for_analysis__partial_order____analysis__no_func_info__arity0__analysis__any_call__arity0______analysis__more_precise_than_3_3_p_0_10001)),
  ((MR_Box) (analysis__ClassMethod_for_analysis__partial_order____analysis__no_func_info__arity0__analysis__any_call__arity0______analysis__equivalent_3_3_p_0_10001))
};

#line 3165 "analysis.c"
const MR_BaseTypeclassInfo base_typeclass_info_analysis__call_pattern__arity2__analysis__no_func_info__arity0__analysis__any_call__arity0__[5] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 2)),
  ((MR_Box) (MR_Word) ((MR_Integer) 2)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0))
};

#line 3174 "analysis.c"
static const MR_ConstString analysis__analysis__type_class_id_var_names_to_term_1[1] = {
  (MR_String) "S"
};

#line 3179 "analysis.c"
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

#line 3193 "analysis.c"
static const MR_TypeClassId analysis__analysis__type_class_id_to_term_1 = {
  (MR_String) "analysis",
  (MR_String) "to_term",
  (MR_Integer) 1,
  (MR_Integer) 1,
  (MR_Integer) 2,
  analysis__analysis__type_class_id_var_names_to_term_1,
  analysis__analysis__type_class_id_method_ids_to_term_1
};

#line 3204 "analysis.c"
const MR_TypeClassDeclStruct analysis__analysis__type_class_decl_to_term_1 = {
  &analysis__analysis__type_class_id_to_term_1,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL
};

#line 3212 "analysis.c"
static const MR_ConstString analysis__analysis__type_class_id_var_names_partial_order_2[2] = {
  (MR_String) "FuncInfo",
  (MR_String) "T"
};

#line 3218 "analysis.c"
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

#line 3232 "analysis.c"
static const MR_TypeClassId analysis__analysis__type_class_id_partial_order_2 = {
  (MR_String) "analysis",
  (MR_String) "partial_order",
  (MR_Integer) 2,
  (MR_Integer) 2,
  (MR_Integer) 2,
  analysis__analysis__type_class_id_var_names_partial_order_2,
  analysis__analysis__type_class_id_method_ids_partial_order_2
};

#line 3243 "analysis.c"
const MR_TypeClassDeclStruct analysis__analysis__type_class_decl_partial_order_2 = {
  &analysis__analysis__type_class_id_partial_order_2,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL
};

#line 3251 "analysis.c"
static const MR_ConstString analysis__analysis__type_class_id_var_names_compiler_1[1] = {
  (MR_String) "Compiler"
};

#line 3256 "analysis.c"
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

#line 3280 "analysis.c"
static const MR_TypeClassId analysis__analysis__type_class_id_compiler_1 = {
  (MR_String) "analysis",
  (MR_String) "compiler",
  (MR_Integer) 1,
  (MR_Integer) 1,
  (MR_Integer) 4,
  analysis__analysis__type_class_id_var_names_compiler_1,
  analysis__analysis__type_class_id_method_ids_compiler_1
};

#line 3291 "analysis.c"
const MR_TypeClassDeclStruct analysis__analysis__type_class_decl_compiler_1 = {
  &analysis__analysis__type_class_id_compiler_1,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL
};

#line 3299 "analysis.c"
static const MR_ConstString analysis__analysis__type_class_id_var_names_call_pattern_2[2] = {
  (MR_String) "FuncInfo",
  (MR_String) "Call"
};

#line 3305 "analysis.c"
static const MR_TypeClassId analysis__analysis__type_class_id_call_pattern_2 = {
  (MR_String) "analysis",
  (MR_String) "call_pattern",
  (MR_Integer) 2,
  (MR_Integer) 2,
  (MR_Integer) 0,
  analysis__analysis__type_class_id_var_names_call_pattern_2,
  NULL
};

#line 3316 "analysis.c"
static const MR_TypeClassConstraint_2Struct analysis__analysis__type_class_decl_super_call_pattern_2_1 = {
  &analysis__analysis__type_class_decl_partial_order_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

#line 3325 "analysis.c"
static const MR_TypeClassConstraint_1Struct analysis__analysis__type_class_decl_super_call_pattern_2_2 = {
  &analysis__analysis__type_class_decl_to_term_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

#line 3333 "analysis.c"
static const MR_TypeClassConstraint analysis__analysis__type_class_decl_supers_call_pattern_2[2] = {
  (MR_TypeClassConstraint) &analysis__analysis__type_class_decl_super_call_pattern_2_1,
  (MR_TypeClassConstraint) &analysis__analysis__type_class_decl_super_call_pattern_2_2
};

#line 3339 "analysis.c"
const MR_TypeClassDeclStruct analysis__analysis__type_class_decl_call_pattern_2 = {
  &analysis__analysis__type_class_id_call_pattern_2,
  (MR_Integer) 0,
  (MR_Integer) 2,
  NULL
};

#line 3347 "analysis.c"
static const MR_ConstString analysis__analysis__type_class_id_var_names_answer_pattern_2[2] = {
  (MR_String) "FuncInfo",
  (MR_String) "Answer"
};

#line 3353 "analysis.c"
static const MR_TypeClassId analysis__analysis__type_class_id_answer_pattern_2 = {
  (MR_String) "analysis",
  (MR_String) "answer_pattern",
  (MR_Integer) 2,
  (MR_Integer) 2,
  (MR_Integer) 0,
  analysis__analysis__type_class_id_var_names_answer_pattern_2,
  NULL
};

#line 3364 "analysis.c"
static const MR_TypeClassConstraint_2Struct analysis__analysis__type_class_decl_super_answer_pattern_2_1 = {
  &analysis__analysis__type_class_decl_partial_order_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

#line 3373 "analysis.c"
static const MR_TypeClassConstraint_1Struct analysis__analysis__type_class_decl_super_answer_pattern_2_2 = {
  &analysis__analysis__type_class_decl_to_term_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

#line 3381 "analysis.c"
static const MR_TypeClassConstraint analysis__analysis__type_class_decl_supers_answer_pattern_2[2] = {
  (MR_TypeClassConstraint) &analysis__analysis__type_class_decl_super_answer_pattern_2_1,
  (MR_TypeClassConstraint) &analysis__analysis__type_class_decl_super_answer_pattern_2_2
};

#line 3387 "analysis.c"
const MR_TypeClassDeclStruct analysis__analysis__type_class_decl_answer_pattern_2 = {
  &analysis__analysis__type_class_id_answer_pattern_2,
  (MR_Integer) 0,
  (MR_Integer) 2,
  NULL
};

#line 3395 "analysis.c"
static const MR_ConstString analysis__analysis__type_class_id_var_names_analysis_3[3] = {
  (MR_String) "FuncInfo",
  (MR_String) "Call",
  (MR_String) "Answer"
};

#line 3402 "analysis.c"
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

#line 3436 "analysis.c"
static const MR_TypeClassId analysis__analysis__type_class_id_analysis_3 = {
  (MR_String) "analysis",
  (MR_String) "analysis",
  (MR_Integer) 3,
  (MR_Integer) 3,
  (MR_Integer) 6,
  analysis__analysis__type_class_id_var_names_analysis_3,
  analysis__analysis__type_class_id_method_ids_analysis_3
};

#line 3447 "analysis.c"
static const MR_TypeClassConstraint_2Struct analysis__analysis__type_class_decl_super_analysis_3_1 = {
  &analysis__analysis__type_class_decl_call_pattern_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

#line 3456 "analysis.c"
static const MR_TypeClassConstraint_2Struct analysis__analysis__type_class_decl_super_analysis_3_2 = {
  &analysis__analysis__type_class_decl_answer_pattern_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 3
  }
};

#line 3465 "analysis.c"
static const MR_TypeClassConstraint analysis__analysis__type_class_decl_supers_analysis_3[2] = {
  (MR_TypeClassConstraint) &analysis__analysis__type_class_decl_super_analysis_3_1,
  (MR_TypeClassConstraint) &analysis__analysis__type_class_decl_super_analysis_3_2
};

#line 3471 "analysis.c"
const MR_TypeClassDeclStruct analysis__analysis__type_class_decl_analysis_3 = {
  &analysis__analysis__type_class_id_analysis_3,
  (MR_Integer) 0,
  (MR_Integer) 2,
  NULL
};

#line 3479 "analysis.c"
static MR_bool MR_CALL 
analysis____Unify____analysis_info_0_0_10001(
#line 3482 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 3484 "analysis.c"
  MR_Box analysis__wrapper_arg_2)
#line 3486 "analysis.c"
{
#line 3488 "analysis.c"
  {
#line 3490 "analysis.c"
    MR_bool analysis__succeeded;

#line 3493 "analysis.c"
    {
#line 3495 "analysis.c"
      analysis__succeeded = analysis____Unify____analysis_info_0_0(((MR_Word) analysis__wrapper_arg_1), ((MR_Word) analysis__wrapper_arg_2));
    }
#line 3498 "analysis.c"
    return analysis__succeeded;
#line 3500 "analysis.c"
  }
#line 3502 "analysis.c"
}

#line 3505 "analysis.c"
static void MR_CALL 
analysis____Compare____analysis_info_0_0_10001(
#line 3508 "analysis.c"
  MR_Box * analysis__wrapper_arg_1,
#line 3510 "analysis.c"
  MR_Box analysis__wrapper_arg_2,
#line 3512 "analysis.c"
  MR_Box analysis__wrapper_arg_3)
#line 3514 "analysis.c"
{
#line 3516 "analysis.c"
  {
#line 3518 "analysis.c"
    MR_Word analysis__conv0_HeadVar__1_1;

#line 3521 "analysis.c"
    {
#line 3523 "analysis.c"
      analysis____Compare____analysis_info_0_0(&analysis__conv0_HeadVar__1_1, ((MR_Word) analysis__wrapper_arg_2), ((MR_Word) analysis__wrapper_arg_3));
    }
#line 3526 "analysis.c"
    *analysis__wrapper_arg_1 = ((MR_Box) (analysis__conv0_HeadVar__1_1));
#line 3528 "analysis.c"
  }
#line 3530 "analysis.c"
}

#line 3533 "analysis.c"
static MR_bool MR_CALL 
analysis____Unify____analysis_map_1_0_10001(
#line 3536 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 3538 "analysis.c"
  MR_Box analysis__wrapper_arg_2,
#line 3540 "analysis.c"
  MR_Box analysis__wrapper_arg_3)
#line 3542 "analysis.c"
{
#line 3544 "analysis.c"
  {
#line 3546 "analysis.c"
    MR_bool analysis__succeeded;

#line 3549 "analysis.c"
    {
#line 3551 "analysis.c"
      analysis__succeeded = analysis____Unify____analysis_map_1_0(((MR_Word) analysis__wrapper_arg_1), ((MR_Word) analysis__wrapper_arg_2), ((MR_Word) analysis__wrapper_arg_3));
    }
#line 3554 "analysis.c"
    return analysis__succeeded;
#line 3556 "analysis.c"
  }
#line 3558 "analysis.c"
}

#line 3561 "analysis.c"
static void MR_CALL 
analysis____Compare____analysis_map_1_0_10001(
#line 3564 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 3566 "analysis.c"
  MR_Box * analysis__wrapper_arg_2,
#line 3568 "analysis.c"
  MR_Box analysis__wrapper_arg_3,
#line 3570 "analysis.c"
  MR_Box analysis__wrapper_arg_4)
#line 3572 "analysis.c"
{
#line 3574 "analysis.c"
  {
#line 3576 "analysis.c"
    MR_Word analysis__conv0_HeadVar__1_1;

#line 3579 "analysis.c"
    {
#line 3581 "analysis.c"
      analysis____Compare____analysis_map_1_0(((MR_Word) analysis__wrapper_arg_1), &analysis__conv0_HeadVar__1_1, ((MR_Word) analysis__wrapper_arg_3), ((MR_Word) analysis__wrapper_arg_4));
    }
#line 3584 "analysis.c"
    *analysis__wrapper_arg_2 = ((MR_Box) (analysis__conv0_HeadVar__1_1));
#line 3586 "analysis.c"
  }
#line 3588 "analysis.c"
}

#line 3591 "analysis.c"
static MR_bool MR_CALL 
analysis____Unify____analysis_name_0_0_10001(
#line 3594 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 3596 "analysis.c"
  MR_Box analysis__wrapper_arg_2)
#line 3598 "analysis.c"
{
#line 3600 "analysis.c"
  {
#line 3602 "analysis.c"
    MR_bool analysis__succeeded;

#line 3605 "analysis.c"
    {
#line 3607 "analysis.c"
      analysis__succeeded = analysis____Unify____analysis_name_0_0(((MR_String) analysis__wrapper_arg_1), ((MR_String) analysis__wrapper_arg_2));
    }
#line 3610 "analysis.c"
    return analysis__succeeded;
#line 3612 "analysis.c"
  }
#line 3614 "analysis.c"
}

#line 3617 "analysis.c"
static void MR_CALL 
analysis____Compare____analysis_name_0_0_10001(
#line 3620 "analysis.c"
  MR_Box * analysis__wrapper_arg_1,
#line 3622 "analysis.c"
  MR_Box analysis__wrapper_arg_2,
#line 3624 "analysis.c"
  MR_Box analysis__wrapper_arg_3)
#line 3626 "analysis.c"
{
#line 3628 "analysis.c"
  {
#line 3630 "analysis.c"
    MR_Word analysis__conv0_HeadVar__1_1;

#line 3633 "analysis.c"
    {
#line 3635 "analysis.c"
      analysis____Compare____analysis_name_0_0(&analysis__conv0_HeadVar__1_1, ((MR_String) analysis__wrapper_arg_2), ((MR_String) analysis__wrapper_arg_3));
    }
#line 3638 "analysis.c"
    *analysis__wrapper_arg_1 = ((MR_Box) (analysis__conv0_HeadVar__1_1));
#line 3640 "analysis.c"
  }
#line 3642 "analysis.c"
}

#line 3645 "analysis.c"
static MR_bool MR_CALL 
analysis____Unify____analysis_request_0_0_10001(
#line 3648 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 3650 "analysis.c"
  MR_Box analysis__wrapper_arg_2)
#line 3652 "analysis.c"
{
#line 3654 "analysis.c"
  {
#line 3656 "analysis.c"
    MR_bool analysis__succeeded;

#line 3659 "analysis.c"
    {
#line 3661 "analysis.c"
      analysis__succeeded = analysis____Unify____analysis_request_0_0(((MR_Word) analysis__wrapper_arg_1), ((MR_Word) analysis__wrapper_arg_2));
    }
#line 3664 "analysis.c"
    return analysis__succeeded;
#line 3666 "analysis.c"
  }
#line 3668 "analysis.c"
}

#line 3671 "analysis.c"
static void MR_CALL 
analysis____Compare____analysis_request_0_0_10001(
#line 3674 "analysis.c"
  MR_Box * analysis__wrapper_arg_1,
#line 3676 "analysis.c"
  MR_Box analysis__wrapper_arg_2,
#line 3678 "analysis.c"
  MR_Box analysis__wrapper_arg_3)
#line 3680 "analysis.c"
{
#line 3682 "analysis.c"
  {
#line 3684 "analysis.c"
    MR_Word analysis__conv0_HeadVar__1_1;

#line 3687 "analysis.c"
    {
#line 3689 "analysis.c"
      analysis____Compare____analysis_request_0_0(&analysis__conv0_HeadVar__1_1, ((MR_Word) analysis__wrapper_arg_2), ((MR_Word) analysis__wrapper_arg_3));
    }
#line 3692 "analysis.c"
    *analysis__wrapper_arg_1 = ((MR_Box) (analysis__conv0_HeadVar__1_1));
#line 3694 "analysis.c"
  }
#line 3696 "analysis.c"
}

#line 3699 "analysis.c"
static MR_bool MR_CALL 
analysis____Unify____analysis_result_2_0_10001(
#line 3702 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 3704 "analysis.c"
  MR_Box analysis__wrapper_arg_2,
#line 3706 "analysis.c"
  MR_Box analysis__wrapper_arg_3,
#line 3708 "analysis.c"
  MR_Box analysis__wrapper_arg_4)
#line 3710 "analysis.c"
{
#line 3712 "analysis.c"
  {
#line 3714 "analysis.c"
    MR_bool analysis__succeeded;

#line 3717 "analysis.c"
    {
#line 3719 "analysis.c"
      analysis__succeeded = analysis____Unify____analysis_result_2_0(((MR_Word) analysis__wrapper_arg_1), ((MR_Word) analysis__wrapper_arg_2), ((MR_Word) analysis__wrapper_arg_3), ((MR_Word) analysis__wrapper_arg_4));
    }
#line 3722 "analysis.c"
    return analysis__succeeded;
#line 3724 "analysis.c"
  }
#line 3726 "analysis.c"
}

#line 3729 "analysis.c"
static void MR_CALL 
analysis____Compare____analysis_result_2_0_10001(
#line 3732 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 3734 "analysis.c"
  MR_Box analysis__wrapper_arg_2,
#line 3736 "analysis.c"
  MR_Box * analysis__wrapper_arg_3,
#line 3738 "analysis.c"
  MR_Box analysis__wrapper_arg_4,
#line 3740 "analysis.c"
  MR_Box analysis__wrapper_arg_5)
#line 3742 "analysis.c"
{
#line 3744 "analysis.c"
  {
#line 3746 "analysis.c"
    MR_Word analysis__conv0_HeadVar__1_1;

#line 3749 "analysis.c"
    {
#line 3751 "analysis.c"
      analysis____Compare____analysis_result_2_0(((MR_Word) analysis__wrapper_arg_1), ((MR_Word) analysis__wrapper_arg_2), &analysis__conv0_HeadVar__1_1, ((MR_Word) analysis__wrapper_arg_4), ((MR_Word) analysis__wrapper_arg_5));
    }
#line 3754 "analysis.c"
    *analysis__wrapper_arg_3 = ((MR_Box) (analysis__conv0_HeadVar__1_1));
#line 3756 "analysis.c"
  }
#line 3758 "analysis.c"
}

#line 3761 "analysis.c"
static MR_bool MR_CALL 
analysis____Unify____analysis_status_0_0_10001(
#line 3764 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 3766 "analysis.c"
  MR_Box analysis__wrapper_arg_2)
#line 3768 "analysis.c"
{
#line 3770 "analysis.c"
  {
#line 3772 "analysis.c"
    MR_bool analysis__succeeded;

#line 3775 "analysis.c"
    {
#line 3777 "analysis.c"
      analysis__succeeded = analysis____Unify____analysis_status_0_0(((MR_Word) analysis__wrapper_arg_1), ((MR_Word) analysis__wrapper_arg_2));
    }
#line 3780 "analysis.c"
    return analysis__succeeded;
#line 3782 "analysis.c"
  }
#line 3784 "analysis.c"
}

#line 3787 "analysis.c"
static void MR_CALL 
analysis____Compare____analysis_status_0_0_10001(
#line 3790 "analysis.c"
  MR_Box * analysis__wrapper_arg_1,
#line 3792 "analysis.c"
  MR_Box analysis__wrapper_arg_2,
#line 3794 "analysis.c"
  MR_Box analysis__wrapper_arg_3)
#line 3796 "analysis.c"
{
#line 3798 "analysis.c"
  {
#line 3800 "analysis.c"
    MR_Word analysis__conv0_HeadVar__1_1;

#line 3803 "analysis.c"
    {
#line 3805 "analysis.c"
      analysis____Compare____analysis_status_0_0(&analysis__conv0_HeadVar__1_1, ((MR_Word) analysis__wrapper_arg_2), ((MR_Word) analysis__wrapper_arg_3));
    }
#line 3808 "analysis.c"
    *analysis__wrapper_arg_1 = ((MR_Box) (analysis__conv0_HeadVar__1_1));
#line 3810 "analysis.c"
  }
#line 3812 "analysis.c"
}

#line 3815 "analysis.c"
static MR_bool MR_CALL 
analysis____Unify____analysis_type_0_0_10001(
#line 3818 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 3820 "analysis.c"
  MR_Box analysis__wrapper_arg_2)
#line 3822 "analysis.c"
{
#line 3824 "analysis.c"
  {
#line 3826 "analysis.c"
    MR_bool analysis__succeeded;

#line 3829 "analysis.c"
    {
#line 3831 "analysis.c"
      analysis__succeeded = analysis____Unify____analysis_type_0_0(((MR_Word) analysis__wrapper_arg_1), ((MR_Word) analysis__wrapper_arg_2));
    }
#line 3834 "analysis.c"
    return analysis__succeeded;
#line 3836 "analysis.c"
  }
#line 3838 "analysis.c"
}

#line 3841 "analysis.c"
static void MR_CALL 
analysis____Compare____analysis_type_0_0_10001(
#line 3844 "analysis.c"
  MR_Box * analysis__wrapper_arg_1,
#line 3846 "analysis.c"
  MR_Box analysis__wrapper_arg_2,
#line 3848 "analysis.c"
  MR_Box analysis__wrapper_arg_3)
#line 3850 "analysis.c"
{
#line 3852 "analysis.c"
  {
#line 3854 "analysis.c"
    MR_Word analysis__conv0_HeadVar__1_1;

#line 3857 "analysis.c"
    {
#line 3859 "analysis.c"
      analysis____Compare____analysis_type_0_0(&analysis__conv0_HeadVar__1_1, ((MR_Word) analysis__wrapper_arg_2), ((MR_Word) analysis__wrapper_arg_3));
    }
#line 3862 "analysis.c"
    *analysis__wrapper_arg_1 = ((MR_Box) (analysis__conv0_HeadVar__1_1));
#line 3864 "analysis.c"
  }
#line 3866 "analysis.c"
}

#line 3869 "analysis.c"
static MR_bool MR_CALL 
analysis____Unify____any_call_0_0_10001(
#line 3872 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 3874 "analysis.c"
  MR_Box analysis__wrapper_arg_2)
#line 3876 "analysis.c"
{
#line 3878 "analysis.c"
  {
#line 3880 "analysis.c"
    MR_bool analysis__succeeded;

#line 3883 "analysis.c"
    {
#line 3885 "analysis.c"
      analysis__succeeded = analysis____Unify____any_call_0_0();
    }
#line 3888 "analysis.c"
    return analysis__succeeded;
#line 3890 "analysis.c"
  }
#line 3892 "analysis.c"
}

#line 3895 "analysis.c"
static void MR_CALL 
analysis____Compare____any_call_0_0_10001(
#line 3898 "analysis.c"
  MR_Box * analysis__wrapper_arg_1,
#line 3900 "analysis.c"
  MR_Box analysis__wrapper_arg_2,
#line 3902 "analysis.c"
  MR_Box analysis__wrapper_arg_3)
#line 3904 "analysis.c"
{
#line 3906 "analysis.c"
  {
#line 3908 "analysis.c"
    MR_Word analysis__conv0_HeadVar__1_1;

#line 3911 "analysis.c"
    {
#line 3913 "analysis.c"
      analysis____Compare____any_call_0_0(&analysis__conv0_HeadVar__1_1);
    }
#line 3916 "analysis.c"
    *analysis__wrapper_arg_1 = ((MR_Box) (analysis__conv0_HeadVar__1_1));
#line 3918 "analysis.c"
  }
#line 3920 "analysis.c"
}

#line 3923 "analysis.c"
static MR_bool MR_CALL 
analysis____Unify____fixpoint_type_0_0_10001(
#line 3926 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 3928 "analysis.c"
  MR_Box analysis__wrapper_arg_2)
#line 3930 "analysis.c"
{
#line 3932 "analysis.c"
  {
#line 3934 "analysis.c"
    MR_bool analysis__succeeded;

#line 3937 "analysis.c"
    {
#line 3939 "analysis.c"
      analysis__succeeded = analysis____Unify____fixpoint_type_0_0(((MR_Word) analysis__wrapper_arg_1), ((MR_Word) analysis__wrapper_arg_2));
    }
#line 3942 "analysis.c"
    return analysis__succeeded;
#line 3944 "analysis.c"
  }
#line 3946 "analysis.c"
}

#line 3949 "analysis.c"
static void MR_CALL 
analysis____Compare____fixpoint_type_0_0_10001(
#line 3952 "analysis.c"
  MR_Box * analysis__wrapper_arg_1,
#line 3954 "analysis.c"
  MR_Box analysis__wrapper_arg_2,
#line 3956 "analysis.c"
  MR_Box analysis__wrapper_arg_3)
#line 3958 "analysis.c"
{
#line 3960 "analysis.c"
  {
#line 3962 "analysis.c"
    MR_Word analysis__conv0_HeadVar__1_1;

#line 3965 "analysis.c"
    {
#line 3967 "analysis.c"
      analysis____Compare____fixpoint_type_0_0(&analysis__conv0_HeadVar__1_1, ((MR_Word) analysis__wrapper_arg_2), ((MR_Word) analysis__wrapper_arg_3));
    }
#line 3970 "analysis.c"
    *analysis__wrapper_arg_1 = ((MR_Box) (analysis__conv0_HeadVar__1_1));
#line 3972 "analysis.c"
  }
#line 3974 "analysis.c"
}

#line 3977 "analysis.c"
static MR_bool MR_CALL 
analysis____Unify____func_analysis_map_1_0_10001(
#line 3980 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 3982 "analysis.c"
  MR_Box analysis__wrapper_arg_2,
#line 3984 "analysis.c"
  MR_Box analysis__wrapper_arg_3)
#line 3986 "analysis.c"
{
#line 3988 "analysis.c"
  {
#line 3990 "analysis.c"
    MR_bool analysis__succeeded;

#line 3993 "analysis.c"
    {
#line 3995 "analysis.c"
      analysis__succeeded = analysis____Unify____func_analysis_map_1_0(((MR_Word) analysis__wrapper_arg_1), ((MR_Word) analysis__wrapper_arg_2), ((MR_Word) analysis__wrapper_arg_3));
    }
#line 3998 "analysis.c"
    return analysis__succeeded;
#line 4000 "analysis.c"
  }
#line 4002 "analysis.c"
}

#line 4005 "analysis.c"
static void MR_CALL 
analysis____Compare____func_analysis_map_1_0_10001(
#line 4008 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 4010 "analysis.c"
  MR_Box * analysis__wrapper_arg_2,
#line 4012 "analysis.c"
  MR_Box analysis__wrapper_arg_3,
#line 4014 "analysis.c"
  MR_Box analysis__wrapper_arg_4)
#line 4016 "analysis.c"
{
#line 4018 "analysis.c"
  {
#line 4020 "analysis.c"
    MR_Word analysis__conv0_HeadVar__1_1;

#line 4023 "analysis.c"
    {
#line 4025 "analysis.c"
      analysis____Compare____func_analysis_map_1_0(((MR_Word) analysis__wrapper_arg_1), &analysis__conv0_HeadVar__1_1, ((MR_Word) analysis__wrapper_arg_3), ((MR_Word) analysis__wrapper_arg_4));
    }
#line 4028 "analysis.c"
    *analysis__wrapper_arg_2 = ((MR_Box) (analysis__conv0_HeadVar__1_1));
#line 4030 "analysis.c"
  }
#line 4032 "analysis.c"
}

#line 4035 "analysis.c"
static MR_bool MR_CALL 
analysis____Unify____func_id_0_0_10001(
#line 4038 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 4040 "analysis.c"
  MR_Box analysis__wrapper_arg_2)
#line 4042 "analysis.c"
{
#line 4044 "analysis.c"
  {
#line 4046 "analysis.c"
    MR_bool analysis__succeeded;

#line 4049 "analysis.c"
    {
#line 4051 "analysis.c"
      analysis__succeeded = analysis____Unify____func_id_0_0(((MR_Word) analysis__wrapper_arg_1), ((MR_Word) analysis__wrapper_arg_2));
    }
#line 4054 "analysis.c"
    return analysis__succeeded;
#line 4056 "analysis.c"
  }
#line 4058 "analysis.c"
}

#line 4061 "analysis.c"
static void MR_CALL 
analysis____Compare____func_id_0_0_10001(
#line 4064 "analysis.c"
  MR_Box * analysis__wrapper_arg_1,
#line 4066 "analysis.c"
  MR_Box analysis__wrapper_arg_2,
#line 4068 "analysis.c"
  MR_Box analysis__wrapper_arg_3)
#line 4070 "analysis.c"
{
#line 4072 "analysis.c"
  {
#line 4074 "analysis.c"
    MR_Word analysis__conv0_HeadVar__1_1;

#line 4077 "analysis.c"
    {
#line 4079 "analysis.c"
      analysis____Compare____func_id_0_0(&analysis__conv0_HeadVar__1_1, ((MR_Word) analysis__wrapper_arg_2), ((MR_Word) analysis__wrapper_arg_3));
    }
#line 4082 "analysis.c"
    *analysis__wrapper_arg_1 = ((MR_Box) (analysis__conv0_HeadVar__1_1));
#line 4084 "analysis.c"
  }
#line 4086 "analysis.c"
}

#line 4089 "analysis.c"
static MR_bool MR_CALL 
analysis____Unify____imdg_arc_0_0_10001(
#line 4092 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 4094 "analysis.c"
  MR_Box analysis__wrapper_arg_2)
#line 4096 "analysis.c"
{
#line 4098 "analysis.c"
  {
#line 4100 "analysis.c"
    MR_bool analysis__succeeded;

#line 4103 "analysis.c"
    {
#line 4105 "analysis.c"
      analysis__succeeded = analysis____Unify____imdg_arc_0_0(((MR_Word) analysis__wrapper_arg_1), ((MR_Word) analysis__wrapper_arg_2));
    }
#line 4108 "analysis.c"
    return analysis__succeeded;
#line 4110 "analysis.c"
  }
#line 4112 "analysis.c"
}

#line 4115 "analysis.c"
static void MR_CALL 
analysis____Compare____imdg_arc_0_0_10001(
#line 4118 "analysis.c"
  MR_Box * analysis__wrapper_arg_1,
#line 4120 "analysis.c"
  MR_Box analysis__wrapper_arg_2,
#line 4122 "analysis.c"
  MR_Box analysis__wrapper_arg_3)
#line 4124 "analysis.c"
{
#line 4126 "analysis.c"
  {
#line 4128 "analysis.c"
    MR_Word analysis__conv0_HeadVar__1_1;

#line 4131 "analysis.c"
    {
#line 4133 "analysis.c"
      analysis____Compare____imdg_arc_0_0(&analysis__conv0_HeadVar__1_1, ((MR_Word) analysis__wrapper_arg_2), ((MR_Word) analysis__wrapper_arg_3));
    }
#line 4136 "analysis.c"
    *analysis__wrapper_arg_1 = ((MR_Box) (analysis__conv0_HeadVar__1_1));
#line 4138 "analysis.c"
  }
#line 4140 "analysis.c"
}

#line 4143 "analysis.c"
static MR_bool MR_CALL 
analysis____Unify____make_analysis_registry_0_0_10001(
#line 4146 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 4148 "analysis.c"
  MR_Box analysis__wrapper_arg_2)
#line 4150 "analysis.c"
{
#line 4152 "analysis.c"
  {
#line 4154 "analysis.c"
    MR_bool analysis__succeeded;

#line 4157 "analysis.c"
    {
#line 4159 "analysis.c"
      analysis__succeeded = analysis____Unify____make_analysis_registry_0_0(((MR_Word) analysis__wrapper_arg_1), ((MR_Word) analysis__wrapper_arg_2));
    }
#line 4162 "analysis.c"
    return analysis__succeeded;
#line 4164 "analysis.c"
  }
#line 4166 "analysis.c"
}

#line 4169 "analysis.c"
static void MR_CALL 
analysis____Compare____make_analysis_registry_0_0_10001(
#line 4172 "analysis.c"
  MR_Box * analysis__wrapper_arg_1,
#line 4174 "analysis.c"
  MR_Box analysis__wrapper_arg_2,
#line 4176 "analysis.c"
  MR_Box analysis__wrapper_arg_3)
#line 4178 "analysis.c"
{
#line 4180 "analysis.c"
  {
#line 4182 "analysis.c"
    MR_Word analysis__conv0_HeadVar__1_1;

#line 4185 "analysis.c"
    {
#line 4187 "analysis.c"
      analysis____Compare____make_analysis_registry_0_0(&analysis__conv0_HeadVar__1_1, ((MR_Word) analysis__wrapper_arg_2), ((MR_Word) analysis__wrapper_arg_3));
    }
#line 4190 "analysis.c"
    *analysis__wrapper_arg_1 = ((MR_Box) (analysis__conv0_HeadVar__1_1));
#line 4192 "analysis.c"
  }
#line 4194 "analysis.c"
}

#line 4197 "analysis.c"
static MR_bool MR_CALL 
analysis____Unify____module_analysis_map_1_0_10001(
#line 4200 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 4202 "analysis.c"
  MR_Box analysis__wrapper_arg_2,
#line 4204 "analysis.c"
  MR_Box analysis__wrapper_arg_3)
#line 4206 "analysis.c"
{
#line 4208 "analysis.c"
  {
#line 4210 "analysis.c"
    MR_bool analysis__succeeded;

#line 4213 "analysis.c"
    {
#line 4215 "analysis.c"
      analysis__succeeded = analysis____Unify____module_analysis_map_1_0(((MR_Word) analysis__wrapper_arg_1), ((MR_Word) analysis__wrapper_arg_2), ((MR_Word) analysis__wrapper_arg_3));
    }
#line 4218 "analysis.c"
    return analysis__succeeded;
#line 4220 "analysis.c"
  }
#line 4222 "analysis.c"
}

#line 4225 "analysis.c"
static void MR_CALL 
analysis____Compare____module_analysis_map_1_0_10001(
#line 4228 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 4230 "analysis.c"
  MR_Box * analysis__wrapper_arg_2,
#line 4232 "analysis.c"
  MR_Box analysis__wrapper_arg_3,
#line 4234 "analysis.c"
  MR_Box analysis__wrapper_arg_4)
#line 4236 "analysis.c"
{
#line 4238 "analysis.c"
  {
#line 4240 "analysis.c"
    MR_Word analysis__conv0_HeadVar__1_1;

#line 4243 "analysis.c"
    {
#line 4245 "analysis.c"
      analysis____Compare____module_analysis_map_1_0(((MR_Word) analysis__wrapper_arg_1), &analysis__conv0_HeadVar__1_1, ((MR_Word) analysis__wrapper_arg_3), ((MR_Word) analysis__wrapper_arg_4));
    }
#line 4248 "analysis.c"
    *analysis__wrapper_arg_2 = ((MR_Box) (analysis__conv0_HeadVar__1_1));
#line 4250 "analysis.c"
  }
#line 4252 "analysis.c"
}

#line 4255 "analysis.c"
static MR_bool MR_CALL 
analysis____Unify____no_func_info_0_0_10001(
#line 4258 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 4260 "analysis.c"
  MR_Box analysis__wrapper_arg_2)
#line 4262 "analysis.c"
{
#line 4264 "analysis.c"
  {
#line 4266 "analysis.c"
    MR_bool analysis__succeeded;

#line 4269 "analysis.c"
    {
#line 4271 "analysis.c"
      analysis__succeeded = analysis____Unify____no_func_info_0_0();
    }
#line 4274 "analysis.c"
    return analysis__succeeded;
#line 4276 "analysis.c"
  }
#line 4278 "analysis.c"
}

#line 4281 "analysis.c"
static void MR_CALL 
analysis____Compare____no_func_info_0_0_10001(
#line 4284 "analysis.c"
  MR_Box * analysis__wrapper_arg_1,
#line 4286 "analysis.c"
  MR_Box analysis__wrapper_arg_2,
#line 4288 "analysis.c"
  MR_Box analysis__wrapper_arg_3)
#line 4290 "analysis.c"
{
#line 4292 "analysis.c"
  {
#line 4294 "analysis.c"
    MR_Word analysis__conv0_HeadVar__1_1;

#line 4297 "analysis.c"
    {
#line 4299 "analysis.c"
      analysis____Compare____no_func_info_0_0(&analysis__conv0_HeadVar__1_1);
    }
#line 4302 "analysis.c"
    *analysis__wrapper_arg_1 = ((MR_Box) (analysis__conv0_HeadVar__1_1));
#line 4304 "analysis.c"
  }
#line 4306 "analysis.c"
}

#line 4309 "analysis.c"
static MR_bool MR_CALL 
analysis____Unify____some_analysis_result_0_0_10001(
#line 4312 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 4314 "analysis.c"
  MR_Box analysis__wrapper_arg_2)
#line 4316 "analysis.c"
{
#line 4318 "analysis.c"
  {
#line 4320 "analysis.c"
    MR_bool analysis__succeeded;

#line 4323 "analysis.c"
    {
#line 4325 "analysis.c"
      analysis__succeeded = analysis____Unify____some_analysis_result_0_0(((MR_Word) analysis__wrapper_arg_1), ((MR_Word) analysis__wrapper_arg_2));
    }
#line 4328 "analysis.c"
    return analysis__succeeded;
#line 4330 "analysis.c"
  }
#line 4332 "analysis.c"
}

#line 4335 "analysis.c"
static void MR_CALL 
analysis____Compare____some_analysis_result_0_0_10001(
#line 4338 "analysis.c"
  MR_Box * analysis__wrapper_arg_1,
#line 4340 "analysis.c"
  MR_Box analysis__wrapper_arg_2,
#line 4342 "analysis.c"
  MR_Box analysis__wrapper_arg_3)
#line 4344 "analysis.c"
{
#line 4346 "analysis.c"
  {
#line 4348 "analysis.c"
    MR_Word analysis__conv0_HeadVar__1_1;

#line 4351 "analysis.c"
    {
#line 4353 "analysis.c"
      analysis____Compare____some_analysis_result_0_0(&analysis__conv0_HeadVar__1_1, ((MR_Word) analysis__wrapper_arg_2), ((MR_Word) analysis__wrapper_arg_3));
    }
#line 4356 "analysis.c"
    *analysis__wrapper_arg_1 = ((MR_Box) (analysis__conv0_HeadVar__1_1));
#line 4358 "analysis.c"
  }
#line 4360 "analysis.c"
}

#line 4363 "analysis.c"
static MR_Box MR_CALL 
analysis__ClassMethod_for_analysis__to_term____analysis__any_call__arity0______analysis__to_term_1_1_f_0_10001(
#line 4366 "analysis.c"
  MR_Box analysis__closure_arg,
#line 4368 "analysis.c"
  MR_Box analysis__wrapper_arg_1)
#line 4370 "analysis.c"
{
#line 4372 "analysis.c"
  {
#line 4374 "analysis.c"
    MR_Box analysis__wrapper_arg_2;
#line 4376 "analysis.c"
    MR_Box analysis__closure;
#line 4378 "analysis.c"
    MR_Word analysis__conv0_Term_3;

#line 4381 "analysis.c"
    analysis__closure = analysis__closure_arg;
#line 4383 "analysis.c"
    {
#line 4385 "analysis.c"
      analysis__conv0_Term_3 = analysis__ClassMethod_for_analysis__to_term____analysis__any_call__arity0______analysis__to_term_1_1_f_0();
    }
#line 4388 "analysis.c"
    analysis__wrapper_arg_2 = ((MR_Box) (analysis__conv0_Term_3));
#line 4390 "analysis.c"
    return analysis__wrapper_arg_2;
#line 4392 "analysis.c"
  }
#line 4394 "analysis.c"
}

#line 4397 "analysis.c"
static MR_bool MR_CALL 
analysis__ClassMethod_for_analysis__to_term____analysis__any_call__arity0______analysis__from_term_2_2_p_0_10001(
#line 4400 "analysis.c"
  MR_Box analysis__closure_arg,
#line 4402 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 4404 "analysis.c"
  MR_Box * analysis__wrapper_arg_2)
#line 4406 "analysis.c"
{
#line 4408 "analysis.c"
  {
#line 4410 "analysis.c"
    MR_bool analysis__succeeded;
#line 4412 "analysis.c"
    MR_Box analysis__closure;

#line 4415 "analysis.c"
    analysis__closure = analysis__closure_arg;
#line 4417 "analysis.c"
    {
#line 4419 "analysis.c"
      analysis__succeeded = analysis__ClassMethod_for_analysis__to_term____analysis__any_call__arity0______analysis__from_term_2_2_p_0(((MR_Word) analysis__wrapper_arg_1));
    }
#line 4422 "analysis.c"
    return analysis__succeeded;
#line 4424 "analysis.c"
  }
#line 4426 "analysis.c"
}

#line 4429 "analysis.c"
static MR_bool MR_CALL 
analysis__ClassMethod_for_analysis__partial_order____analysis__no_func_info__arity0__analysis__any_call__arity0______analysis__more_precise_than_3_3_p_0_10001(
#line 4432 "analysis.c"
  MR_Box analysis__closure_arg,
#line 4434 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 4436 "analysis.c"
  MR_Box analysis__wrapper_arg_2,
#line 4438 "analysis.c"
  MR_Box analysis__wrapper_arg_3)
#line 4440 "analysis.c"
{
#line 4442 "analysis.c"
  {
#line 4444 "analysis.c"
    MR_bool analysis__succeeded;
#line 4446 "analysis.c"
    MR_Box analysis__closure;

#line 4449 "analysis.c"
    analysis__closure = analysis__closure_arg;
#line 4451 "analysis.c"
    {
#line 4453 "analysis.c"
      analysis__succeeded = analysis__ClassMethod_for_analysis__partial_order____analysis__no_func_info__arity0__analysis__any_call__arity0______analysis__more_precise_than_3_3_p_0();
    }
#line 4456 "analysis.c"
    return analysis__succeeded;
#line 4458 "analysis.c"
  }
#line 4460 "analysis.c"
}

#line 4463 "analysis.c"
static MR_bool MR_CALL 
analysis__ClassMethod_for_analysis__partial_order____analysis__no_func_info__arity0__analysis__any_call__arity0______analysis__equivalent_3_3_p_0_10001(
#line 4466 "analysis.c"
  MR_Box analysis__closure_arg,
#line 4468 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 4470 "analysis.c"
  MR_Box analysis__wrapper_arg_2,
#line 4472 "analysis.c"
  MR_Box analysis__wrapper_arg_3)
#line 4474 "analysis.c"
{
#line 4476 "analysis.c"
  {
#line 4478 "analysis.c"
    MR_bool analysis__succeeded;
#line 4480 "analysis.c"
    MR_Box analysis__closure;

#line 4483 "analysis.c"
    analysis__closure = analysis__closure_arg;
#line 4485 "analysis.c"
    {
#line 4487 "analysis.c"
      analysis__succeeded = analysis__ClassMethod_for_analysis__partial_order____analysis__no_func_info__arity0__analysis__any_call__arity0______analysis__equivalent_3_3_p_0();
    }
#line 4490 "analysis.c"
    return analysis__succeeded;
#line 4492 "analysis.c"
  }
#line 4494 "analysis.c"
}

#line 1386 "analysis.m"
static void MR_CALL 
analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_109_115_103_95_95_104_111_52_95_95_91_54_93_95_48_3_p_0(
#line 1386 "analysis.m"
  MR_Word analysis__V_11_11,
#line 1386 "analysis.m"
  MR_Word analysis__V_12_12,
#line 1386 "analysis.m"
  MR_Word analysis__V_13_13,
#line 1386 "analysis.m"
  MR_Box analysis__V_14_14,
#line 1386 "analysis.m"
  MR_Box analysis__V_15_15)
#line 1386 "analysis.m"
{
#line 1389 "analysis.m"
  {
#line 1389 "analysis.m"
    MR_bool analysis__succeeded;
#line 1389 "analysis.m"
    MR_Word analysis__Debug_6;

#line 1381 "analysis.m"
{
#define MR_PROC_LABEL analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_109_115_103_95_95_104_111_52_95_95_91_54_93_95_48_3_p_0


		{
#line 1381 "analysis.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&analysis__mutable_variable_debug_analysis_lock,
                "analysis__mutable_variable_debug_analysis_lock");
#endif

#line 4531 "analysis.c"

		;}
#undef MR_PROC_LABEL
#line 1381 "analysis.m"
}
#line 1381 "analysis.m"
{
#define MR_PROC_LABEL analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_109_115_103_95_95_104_111_52_95_95_91_54_93_95_48_3_p_0

	MR_Word X;

		{
#line 1381 "analysis.m"
X = analysis__mutable_variable_debug_analysis;

#line 4547 "analysis.c"

		;}
#undef MR_PROC_LABEL
	 analysis__Debug_6  = X;
#line 1381 "analysis.m"
}
#line 1381 "analysis.m"
{
#define MR_PROC_LABEL analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_109_115_103_95_95_104_111_52_95_95_91_54_93_95_48_3_p_0


		{
#line 1381 "analysis.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&analysis__mutable_variable_debug_analysis_lock,
                "analysis__mutable_variable_debug_analysis_lock");
#endif

#line 4566 "analysis.c"

		;}
#undef MR_PROC_LABEL
#line 1381 "analysis.m"
}
#line 1394 "analysis.m"
    if ((analysis__Debug_6 == (MR_Integer) 0))
#line 1395 "analysis.m"
      {
#line 1395 "analysis.m"
      }
#line 1394 "analysis.m"
    else
#line 1393 "analysis.m"
      {
#line 1393 "analysis.m"
        analysis__IntroducedFrom__pred__update_analysis_registry_5__895__1_7_p_0(analysis__V_11_11, analysis__V_12_12, analysis__V_13_13, analysis__V_14_14, analysis__V_15_15);
#line 1393 "analysis.m"
        return;
      }
#line 1389 "analysis.m"
  }
#line 1386 "analysis.m"
}

#line 1386 "analysis.m"
static void MR_CALL 
analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_109_115_103_95_95_104_111_51_95_95_91_54_93_95_48_3_p_0(
#line 1386 "analysis.m"
  MR_Word analysis__V_11_11,
#line 1386 "analysis.m"
  MR_Box analysis__V_12_12,
#line 1386 "analysis.m"
  MR_Box analysis__V_13_13,
#line 1386 "analysis.m"
  MR_Word analysis__V_14_14,
#line 1386 "analysis.m"
  MR_Word analysis__V_15_15)
#line 1386 "analysis.m"
{
#line 1389 "analysis.m"
  {
#line 1389 "analysis.m"
    MR_bool analysis__succeeded;
#line 1389 "analysis.m"
    MR_Word analysis__Debug_6;

#line 1381 "analysis.m"
{
#define MR_PROC_LABEL analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_109_115_103_95_95_104_111_51_95_95_91_54_93_95_48_3_p_0


		{
#line 1381 "analysis.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&analysis__mutable_variable_debug_analysis_lock,
                "analysis__mutable_variable_debug_analysis_lock");
#endif

#line 4626 "analysis.c"

		;}
#undef MR_PROC_LABEL
#line 1381 "analysis.m"
}
#line 1381 "analysis.m"
{
#define MR_PROC_LABEL analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_109_115_103_95_95_104_111_51_95_95_91_54_93_95_48_3_p_0

	MR_Word X;

		{
#line 1381 "analysis.m"
X = analysis__mutable_variable_debug_analysis;

#line 4642 "analysis.c"

		;}
#undef MR_PROC_LABEL
	 analysis__Debug_6  = X;
#line 1381 "analysis.m"
}
#line 1381 "analysis.m"
{
#define MR_PROC_LABEL analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_109_115_103_95_95_104_111_51_95_95_91_54_93_95_48_3_p_0


		{
#line 1381 "analysis.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&analysis__mutable_variable_debug_analysis_lock,
                "analysis__mutable_variable_debug_analysis_lock");
#endif

#line 4661 "analysis.c"

		;}
#undef MR_PROC_LABEL
#line 1381 "analysis.m"
}
#line 1394 "analysis.m"
    if ((analysis__Debug_6 == (MR_Integer) 0))
#line 1395 "analysis.m"
      {
#line 1395 "analysis.m"
      }
#line 1394 "analysis.m"
    else
#line 1393 "analysis.m"
      {
#line 1393 "analysis.m"
        analysis__IntroducedFrom__pred__update_analysis_registry_5__924__1_7_p_0(analysis__V_11_11, analysis__V_12_12, analysis__V_13_13, analysis__V_14_14, analysis__V_15_15);
#line 1393 "analysis.m"
        return;
      }
#line 1389 "analysis.m"
  }
#line 1386 "analysis.m"
}

#line 1386 "analysis.m"
static void MR_CALL 
analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_109_115_103_95_95_104_111_49_95_95_91_51_93_95_48_3_p_0(
#line 1386 "analysis.m"
  MR_Word analysis__V_11_11,
#line 1386 "analysis.m"
  MR_Word analysis__V_12_12)
#line 1386 "analysis.m"
{
#line 1389 "analysis.m"
  {
#line 1389 "analysis.m"
    MR_bool analysis__succeeded;
#line 1389 "analysis.m"
    MR_Word analysis__Debug_6;

#line 1381 "analysis.m"
{
#define MR_PROC_LABEL analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_109_115_103_95_95_104_111_49_95_95_91_51_93_95_48_3_p_0


		{
#line 1381 "analysis.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&analysis__mutable_variable_debug_analysis_lock,
                "analysis__mutable_variable_debug_analysis_lock");
#endif

#line 4715 "analysis.c"

		;}
#undef MR_PROC_LABEL
#line 1381 "analysis.m"
}
#line 1381 "analysis.m"
{
#define MR_PROC_LABEL analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_109_115_103_95_95_104_111_49_95_95_91_51_93_95_48_3_p_0

	MR_Word X;

		{
#line 1381 "analysis.m"
X = analysis__mutable_variable_debug_analysis;

#line 4731 "analysis.c"

		;}
#undef MR_PROC_LABEL
	 analysis__Debug_6  = X;
#line 1381 "analysis.m"
}
#line 1381 "analysis.m"
{
#define MR_PROC_LABEL analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_109_115_103_95_95_104_111_49_95_95_91_51_93_95_48_3_p_0


		{
#line 1381 "analysis.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&analysis__mutable_variable_debug_analysis_lock,
                "analysis__mutable_variable_debug_analysis_lock");
#endif

#line 4750 "analysis.c"

		;}
#undef MR_PROC_LABEL
#line 1381 "analysis.m"
}
#line 1394 "analysis.m"
    if ((analysis__Debug_6 == (MR_Integer) 0))
#line 1395 "analysis.m"
      {
#line 1395 "analysis.m"
      }
#line 1394 "analysis.m"
    else
#line 1393 "analysis.m"
      {
#line 1393 "analysis.m"
        analysis__write_clearing_entries_4_p_0(analysis__V_11_11, analysis__V_12_12);
#line 1393 "analysis.m"
        return;
      }
#line 1389 "analysis.m"
  }
#line 1386 "analysis.m"
}

#line 446 "analysis.m"
MR_Word MR_CALL 
analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_116_111_95_116_101_114_109_95_95_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_116_111_95_116_101_114_109_95_49_95_95_91_49_93_95_48_1_f_0(void)
#line 446 "analysis.m"
{
#line 446 "analysis.m"
  {
#line 446 "analysis.m"
    MR_bool analysis__succeeded;
#line 446 "analysis.m"
    MR_Word analysis__Term_3;
#line 446 "analysis.m"
    MR_Word analysis__V_8_8;

#line 447 "analysis.m"
    {
#line 447 "analysis.m"
      analysis__V_8_8 = mercury__term__context_init_0_f_0();
    }
#line 447 "analysis.m"
    {
#line 447 "analysis.m"
      analysis__Term_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 447 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__Term_3, 0) = ((MR_Box) (&analysis_scalar_common_14[0]));
#line 447 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__Term_3, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 447 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__Term_3, 2) = ((MR_Box) (analysis__V_8_8));
#line 447 "analysis.m"
    }
#line 446 "analysis.m"
    return analysis__Term_3;
#line 446 "analysis.m"
  }
#line 446 "analysis.m"
}

#line 441 "analysis.m"
MR_bool MR_CALL 
analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_112_97_114_116_105_97_108_95_111_114_100_101_114_95_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_101_113_117_105_118_97_108_101_110_116_95_51_95_95_91_49_44_32_50_44_32_51_93_95_48_3_p_0(void)
#line 441 "analysis.m"
{
#line 442 "analysis.m"
  {
#line 442 "analysis.m"
    MR_bool analysis__succeeded;

#line 442 "analysis.m"
    {
#line 442 "analysis.m"
      return analysis__succeeded = mercury__builtin__semidet_succeed_0_p_0();
    }
#line 442 "analysis.m"
    return analysis__succeeded;
#line 442 "analysis.m"
  }
#line 441 "analysis.m"
}

#line 438 "analysis.m"
MR_bool MR_CALL 
analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_112_97_114_116_105_97_108_95_111_114_100_101_114_95_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_109_111_114_101_95_112_114_101_99_105_115_101_95_116_104_97_110_95_51_95_95_91_49_44_32_50_44_32_51_93_95_48_3_p_0(void)
#line 438 "analysis.m"
{
#line 439 "analysis.m"
  {
#line 439 "analysis.m"
    MR_bool analysis__succeeded;

#line 439 "analysis.m"
    {
#line 439 "analysis.m"
      return analysis__succeeded = mercury__builtin__semidet_fail_0_p_0();
    }
#line 439 "analysis.m"
    return analysis__succeeded;
#line 439 "analysis.m"
  }
#line 438 "analysis.m"
}

#line 144 "analysis.m"
void MR_CALL 
analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(
#line 144 "analysis.m"
  MR_Word * analysis__HeadVar__1_1)
#line 144 "analysis.m"
{
#line 144 "analysis.m"
  {
#line 144 "analysis.m"
    MR_bool analysis__succeeded;

#line 144 "analysis.m"
    *analysis__HeadVar__1_1 = (MR_Integer) 0;
#line 144 "analysis.m"
  }
#line 144 "analysis.m"
}

#line 144 "analysis.m"
MR_bool MR_CALL 
analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_48_95_95_91_49_44_32_50_93_95_48_2_p_0(void)
#line 144 "analysis.m"
{
#line 144 "analysis.m"
  {
#line 144 "analysis.m"
    return MR_TRUE;
#line 144 "analysis.m"
  }
#line 144 "analysis.m"
}

#line 150 "analysis.m"
void MR_CALL 
analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(
#line 150 "analysis.m"
  MR_Word * analysis__HeadVar__1_1)
#line 150 "analysis.m"
{
#line 150 "analysis.m"
  {
#line 150 "analysis.m"
    MR_bool analysis__succeeded;

#line 150 "analysis.m"
    *analysis__HeadVar__1_1 = (MR_Integer) 0;
#line 150 "analysis.m"
  }
#line 150 "analysis.m"
}

#line 150 "analysis.m"
MR_bool MR_CALL 
analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_48_95_95_91_49_44_32_50_93_95_48_2_p_0(void)
#line 150 "analysis.m"
{
#line 150 "analysis.m"
  {
#line 150 "analysis.m"
    return MR_TRUE;
#line 150 "analysis.m"
  }
#line 150 "analysis.m"
}

#line 1372 "analysis.m"
static MR_Box MR_CALL 
analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_108_117_98_95_114_101_115_117_108_116_95_115_116_97_116_117_115_101_115_95_51_95_95_91_49_93_95_48_3_f_0_1(
#line 1372 "analysis.m"
  MR_Box analysis__closure_arg,
#line 1372 "analysis.m"
  MR_Box analysis__wrapper_arg_1,
#line 1372 "analysis.m"
  MR_Box analysis__wrapper_arg_2)
#line 1372 "analysis.m"
{
#line 1372 "analysis.m"
  {
#line 1372 "analysis.m"
    MR_Box analysis__wrapper_arg_3;
#line 1372 "analysis.m"
    MR_Box analysis__closure = analysis__closure_arg;
#line 1372 "analysis.m"
    MR_Word analysis__conv0_HeadVar__3_3;

#line 1372 "analysis.m"
    {
#line 1372 "analysis.m"
      analysis__conv0_HeadVar__3_3 = analysis__lub_result_statuses_4_2_f_0(((MR_Word) analysis__wrapper_arg_1), ((MR_Word) analysis__wrapper_arg_2));
    }
#line 1372 "analysis.m"
    analysis__wrapper_arg_3 = ((MR_Box) (analysis__conv0_HeadVar__3_3));
#line 1372 "analysis.m"
    return analysis__wrapper_arg_3;
#line 1372 "analysis.m"
  }
#line 1372 "analysis.m"
}

#line 1368 "analysis.m"
MR_Word MR_CALL 
analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_108_117_98_95_114_101_115_117_108_116_95_115_116_97_116_117_115_101_115_95_51_95_95_91_49_93_95_48_3_f_0(
#line 1368 "analysis.m"
  MR_Word analysis__Results_6,
#line 1368 "analysis.m"
  MR_Word analysis__Acc_7)
#line 1368 "analysis.m"
{
#line 1371 "analysis.m"
  {
#line 1371 "analysis.m"
    MR_bool analysis__succeeded;
#line 1371 "analysis.m"
    MR_Word analysis__HeadVar__4_4;
#line 1371 "analysis.m"
    MR_Box analysis__conv1_HeadVar__4_4;

#line 1371 "analysis.m"
    {
#line 1371 "analysis.m"
      analysis__conv1_HeadVar__4_4 = mercury__list__foldl_3_f_0((MR_Word) &analysis__analysis__type_ctor_info_some_analysis_result_0, (MR_Word) &analysis__analysis__type_ctor_info_analysis_status_0, (MR_Word) &analysis_scalar_common_2[15], analysis__Results_6, ((MR_Box) (analysis__Acc_7)));
    }
#line 1371 "analysis.m"
    analysis__HeadVar__4_4 = ((MR_Word) analysis__conv1_HeadVar__4_4);
#line 1371 "analysis.m"
    return analysis__HeadVar__4_4;
#line 1371 "analysis.m"
  }
#line 1368 "analysis.m"
}

#line 1366 "analysis.m"
static MR_Box MR_CALL 
analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_108_117_98_95_114_101_115_117_108_116_95_115_116_97_116_117_115_101_115_95_50_95_95_91_49_93_95_48_3_f_0_1(
#line 1366 "analysis.m"
  MR_Box analysis__closure_arg,
#line 1366 "analysis.m"
  MR_Box analysis__wrapper_arg_1,
#line 1366 "analysis.m"
  MR_Box analysis__wrapper_arg_2,
#line 1366 "analysis.m"
  MR_Box analysis__wrapper_arg_3)
#line 1366 "analysis.m"
{
#line 1366 "analysis.m"
  {
#line 1366 "analysis.m"
    MR_Box analysis__wrapper_arg_4;
#line 1366 "analysis.m"
    MR_Box analysis__closure = analysis__closure_arg;
#line 1366 "analysis.m"
    MR_Word analysis__conv0_HeadVar__4_4;

#line 1366 "analysis.m"
    {
#line 1366 "analysis.m"
      analysis__conv0_HeadVar__4_4 = analysis__lub_result_statuses_3_3_f_0(((MR_Word) analysis__wrapper_arg_1), ((MR_Word) analysis__wrapper_arg_2), ((MR_Word) analysis__wrapper_arg_3));
    }
#line 1366 "analysis.m"
    analysis__wrapper_arg_4 = ((MR_Box) (analysis__conv0_HeadVar__4_4));
#line 1366 "analysis.m"
    return analysis__wrapper_arg_4;
#line 1366 "analysis.m"
  }
#line 1366 "analysis.m"
}

#line 1361 "analysis.m"
MR_Word MR_CALL 
analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_108_117_98_95_114_101_115_117_108_116_95_115_116_97_116_117_115_101_115_95_50_95_95_91_49_93_95_48_3_f_0(
#line 1361 "analysis.m"
  MR_Word analysis__FuncMap_6,
#line 1361 "analysis.m"
  MR_Word analysis__Acc_7)
#line 1361 "analysis.m"
{
#line 1365 "analysis.m"
  {
#line 1365 "analysis.m"
    MR_bool analysis__succeeded;
#line 1365 "analysis.m"
    MR_Word analysis__HeadVar__4_4;
#line 1365 "analysis.m"
    MR_Box analysis__conv1_HeadVar__4_4;

#line 1365 "analysis.m"
    {
#line 1365 "analysis.m"
      analysis__conv1_HeadVar__4_4 = mercury__map__foldl_3_f_0((MR_Word) &analysis__analysis__type_ctor_info_func_id_0, (MR_Word) &analysis_scalar_common_1[1], (MR_Word) &analysis__analysis__type_ctor_info_analysis_status_0, (MR_Word) &analysis_scalar_common_2[14], analysis__FuncMap_6, ((MR_Box) (analysis__Acc_7)));
    }
#line 1365 "analysis.m"
    analysis__HeadVar__4_4 = ((MR_Word) analysis__conv1_HeadVar__4_4);
#line 1365 "analysis.m"
    return analysis__HeadVar__4_4;
#line 1365 "analysis.m"
  }
#line 1361 "analysis.m"
}

#line 1172 "analysis.m"
static MR_bool MR_CALL 
analysis__IntroducedFrom__pred__clear_imdg_entries_pointing_at_3__1172__1_2_p_0(
#line 1172 "analysis.m"
  MR_Word analysis__ModuleName_4,
#line 1172 "analysis.m"
  MR_Word analysis__HeadVar__2_9)
#line 1172 "analysis.m"
{
#line 1172 "analysis.m"
  {
#line 1172 "analysis.m"
    MR_bool analysis__succeeded;
#line 1172 "analysis.m"
    MR_Word analysis__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_9, (MR_Integer) 2)));
#line 1172 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_call_pattern_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_9, (MR_Integer) 0)));
#line 1172 "analysis.m"
    MR_Box analysis__V_11_11 = (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_9, (MR_Integer) 1));

#line 1172 "analysis.m"
    {
#line 1172 "analysis.m"
      analysis__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(analysis__ModuleName_4, analysis__V_14_14);
    }
#line 1172 "analysis.m"
    analysis__succeeded = !(analysis__succeeded);
#line 1172 "analysis.m"
    return analysis__succeeded;
#line 1172 "analysis.m"
  }
#line 1172 "analysis.m"
}

#line 953 "analysis.m"
static MR_bool MR_CALL 
analysis__IntroducedFrom__func__update_analysis_registry_5__953__1_1_f_0(
#line 953 "analysis.m"
  MR_Word analysis__HeadVar__1_61,
#line 953 "analysis.m"
  MR_Word * analysis__HeadVar__2_62)
#line 953 "analysis.m"
{
#line 953 "analysis.m"
  {
#line 953 "analysis.m"
    MR_bool analysis__succeeded;
#line 953 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_call_pattern_207 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__1_61, (MR_Integer) 0)));
#line 953 "analysis.m"
    MR_Word analysis__TypeInfo_209_209;
#line 953 "analysis.m"
    MR_Word analysis__TypeInfo_210_210;
#line 953 "analysis.m"
    MR_Word analysis__V_63_63;
#line 953 "analysis.m"
    MR_Box analysis__Call0_72 = (MR_hl_field(MR_mktag(0), analysis__HeadVar__1_61, (MR_Integer) 1));
#line 953 "analysis.m"
    MR_Word analysis__V_220_220;

#line 953 "analysis.m"
    *analysis__HeadVar__2_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__1_61, (MR_Integer) 2)));
#line 5120 "analysis.c"
    {
#line 5122 "analysis.c"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_call_pattern_207, (MR_Integer) 4, &analysis__TypeInfo_209_209);
    }
#line 955 "analysis.m"
    {
#line 955 "analysis.m"
      analysis__V_63_63 = mercury__univ__univ_1_f_0(analysis__TypeInfo_209_209, analysis__Call0_72);
    }
#line 5130 "analysis.c"
    {
#line 5132 "analysis.c"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_call_pattern_207, (MR_Integer) 4, &analysis__TypeInfo_210_210);
    }
#line 955 "analysis.m"
    {
#line 955 "analysis.m"
      analysis__V_220_220 = mercury__univ__univ_1_f_0(analysis__TypeInfo_210_210, analysis__Call0_72);
    }
#line 955 "analysis.m"
    {
#line 955 "analysis.m"
      return analysis__succeeded = mercury__univ____Unify____univ_0_0(analysis__V_63_63, analysis__V_220_220);
    }
#line 953 "analysis.m"
    return analysis__succeeded;
#line 953 "analysis.m"
  }
#line 953 "analysis.m"
}

#line 924 "analysis.m"
static void MR_CALL 
analysis__IntroducedFrom__pred__update_analysis_registry_5__924__1_7_p_0(
#line 924 "analysis.m"
  MR_Word analysis__TypeClassInfo_for_analysis_158,
#line 924 "analysis.m"
  MR_Box analysis__NewAnswer_18,
#line 924 "analysis.m"
  MR_Box analysis__OldAnswer_25,
#line 924 "analysis.m"
  MR_Word analysis__Status_29,
#line 924 "analysis.m"
  MR_Word analysis__DepModules_31)
#line 924 "analysis.m"
{
#line 924 "analysis.m"
  {
#line 924 "analysis.m"
    MR_bool analysis__succeeded;
#line 924 "analysis.m"
    MR_Word analysis__TypeInfo_185_185;

#line 5174 "analysis.c"
    {
#line 5176 "analysis.c"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_158, (MR_Integer) 5, &analysis__TypeInfo_185_185);
    }
#line 924 "analysis.m"
    {
#line 924 "analysis.m"
      analysis__write_changed_answer_6_p_0(analysis__TypeInfo_185_185, analysis__OldAnswer_25, analysis__NewAnswer_18, analysis__Status_29, analysis__DepModules_31);
#line 924 "analysis.m"
      return;
    }
#line 924 "analysis.m"
  }
#line 924 "analysis.m"
}

#line 895 "analysis.m"
static void MR_CALL 
analysis__IntroducedFrom__pred__update_analysis_registry_5__895__1_7_p_0(
#line 895 "analysis.m"
  MR_Word analysis__TypeClassInfo_for_analysis_158,
#line 895 "analysis.m"
  MR_Word analysis__ModuleName_11,
#line 895 "analysis.m"
  MR_Word analysis__FuncId_13,
#line 895 "analysis.m"
  MR_Box analysis__Call_17,
#line 895 "analysis.m"
  MR_Box analysis__NewAnswer_18)
#line 895 "analysis.m"
{
#line 895 "analysis.m"
  {
#line 895 "analysis.m"
    MR_bool analysis__succeeded;
#line 895 "analysis.m"
    MR_Word analysis__TypeInfo_166_166;
#line 895 "analysis.m"
    MR_Word analysis__TypeInfo_168_168;

#line 5215 "analysis.c"
    {
#line 5217 "analysis.c"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_158, (MR_Integer) 4, &analysis__TypeInfo_166_166);
    }
#line 5220 "analysis.c"
    {
#line 5222 "analysis.c"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_158, (MR_Integer) 5, &analysis__TypeInfo_168_168);
    }
#line 895 "analysis.m"
    {
#line 895 "analysis.m"
      analysis__write_no_change_in_result_6_p_0(analysis__TypeInfo_166_166, analysis__TypeInfo_168_168, analysis__ModuleName_11, analysis__FuncId_13, analysis__Call_17, analysis__NewAnswer_18);
#line 895 "analysis.m"
      return;
    }
#line 895 "analysis.m"
  }
#line 895 "analysis.m"
}

#line 604 "analysis.m"
static MR_bool MR_CALL 
analysis__IntroducedFrom__pred__lookup_exactly_matching_result_even_from_invalid_modules__604__1_4_p_0(
#line 604 "analysis.m"
  MR_Word analysis__TypeClassInfo_for_analysis_32,
#line 604 "analysis.m"
  MR_Box analysis__FuncInfo_10,
#line 604 "analysis.m"
  MR_Box analysis__Call_11,
#line 604 "analysis.m"
  MR_Word analysis__HeadVar__4_22)
#line 604 "analysis.m"
{
#line 604 "analysis.m"
  {
#line 604 "analysis.m"
    MR_bool analysis__succeeded;
#line 604 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_call_pattern_39;
#line 604 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_partial_order_41;
#line 604 "analysis.m"
    MR_Box analysis__V_23_23 = (MR_hl_field(MR_mktag(0), analysis__HeadVar__4_22, (MR_Integer) 0));
#line 606 "analysis.m"
    MR_Box analysis__V_30_30 = (MR_hl_field(MR_mktag(0), analysis__HeadVar__4_22, (MR_Integer) 1));
#line 606 "analysis.m"
    MR_Word analysis__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__4_22, (MR_Integer) 2)));
#line 5264 "analysis.c"
    MR_bool MR_CALL (* analysis__func_0)(MR_Box, MR_Box, MR_Box, MR_Box);

#line 5267 "analysis.c"
    {
#line 5269 "analysis.c"
      mercury__private_builtin__superclass_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_32, (MR_Integer) 1, &analysis__TypeClassInfo_for_call_pattern_39);
    }
#line 5272 "analysis.c"
    {
#line 5274 "analysis.c"
      mercury__private_builtin__superclass_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_call_pattern_39, (MR_Integer) 1, &analysis__TypeClassInfo_for_partial_order_41);
    }
#line 5277 "analysis.c"
    analysis__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), analysis__TypeClassInfo_for_partial_order_41, (MR_Integer) 0)), (MR_Integer) 6)));
#line 5279 "analysis.c"
    {
#line 5281 "analysis.c"
      return analysis__succeeded = analysis__func_0(((MR_Box) analysis__TypeClassInfo_for_partial_order_41), analysis__FuncInfo_10, analysis__Call_11, analysis__V_23_23);
    }
#line 604 "analysis.m"
    return analysis__succeeded;
#line 604 "analysis.m"
  }
#line 604 "analysis.m"
}

#line 537 "analysis.m"
static MR_Word MR_CALL 
analysis__IntroducedFrom__func__lookup_results_2__537__1_2_f_0(
#line 537 "analysis.m"
  MR_Word analysis__TypeClassInfo_for_analysis_29,
#line 537 "analysis.m"
  MR_Word analysis__HeadVar__2_24)
#line 537 "analysis.m"
{
#line 537 "analysis.m"
  {
#line 537 "analysis.m"
    MR_bool analysis__succeeded;
#line 537 "analysis.m"
    MR_Word analysis__HeadVar__3_25;
#line 537 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_analysis_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_24, (MR_Integer) 0)));
#line 537 "analysis.m"
    MR_Word analysis__TypeInfo_45_45;
#line 537 "analysis.m"
    MR_Word analysis__TypeInfo_46_46;
#line 537 "analysis.m"
    MR_Word analysis__TypeInfo_48_48;
#line 537 "analysis.m"
    MR_Word analysis__TypeInfo_49_49;
#line 537 "analysis.m"
    MR_Box analysis__Call_11;
#line 537 "analysis.m"
    MR_Box analysis__Answer_13;
#line 537 "analysis.m"
    MR_Word analysis__Status_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_24, (MR_Integer) 3)));
#line 537 "analysis.m"
    MR_Box analysis__Call0_18 = (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_24, (MR_Integer) 1));
#line 537 "analysis.m"
    MR_Box analysis__Answer0_19 = (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_24, (MR_Integer) 2));
#line 537 "analysis.m"
    MR_Word analysis__V_26_26;
#line 537 "analysis.m"
    MR_Word analysis__V_27_27;

#line 5331 "analysis.c"
    {
#line 5333 "analysis.c"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_43, (MR_Integer) 4, &analysis__TypeInfo_45_45);
    }
#line 540 "analysis.m"
    {
#line 540 "analysis.m"
      analysis__V_26_26 = mercury__univ__univ_1_f_0(analysis__TypeInfo_45_45, analysis__Call0_18);
    }
#line 5341 "analysis.c"
    {
#line 5343 "analysis.c"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_29, (MR_Integer) 4, &analysis__TypeInfo_46_46);
    }
#line 540 "analysis.m"
    {
#line 540 "analysis.m"
      mercury__univ__det_univ_to_type_2_p_0(analysis__TypeInfo_46_46, analysis__V_26_26, &analysis__Call_11);
    }
#line 5351 "analysis.c"
    {
#line 5353 "analysis.c"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_43, (MR_Integer) 5, &analysis__TypeInfo_48_48);
    }
#line 541 "analysis.m"
    {
#line 541 "analysis.m"
      analysis__V_27_27 = mercury__univ__univ_1_f_0(analysis__TypeInfo_48_48, analysis__Answer0_19);
    }
#line 5361 "analysis.c"
    {
#line 5363 "analysis.c"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_29, (MR_Integer) 5, &analysis__TypeInfo_49_49);
    }
#line 541 "analysis.m"
    {
#line 541 "analysis.m"
      mercury__univ__det_univ_to_type_2_p_0(analysis__TypeInfo_49_49, analysis__V_27_27, &analysis__Answer_13);
    }
#line 537 "analysis.m"
    {
#line 537 "analysis.m"
      analysis__HeadVar__3_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 537 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__HeadVar__3_25, 0) = analysis__Call_11;
#line 537 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__HeadVar__3_25, 1) = analysis__Answer_13;
#line 537 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__HeadVar__3_25, 2) = ((MR_Box) (analysis__Status_17));
#line 537 "analysis.m"
    }
#line 537 "analysis.m"
    return analysis__HeadVar__3_25;
#line 537 "analysis.m"
  }
#line 537 "analysis.m"
}

#line 517 "analysis.m"
static void MR_CALL 
analysis__IntroducedFrom__pred__lookup_results_1__517__1_4_p_0(
#line 517 "analysis.m"
  MR_Word analysis__TypeClassInfo_for_analysis_62,
#line 517 "analysis.m"
  MR_Word analysis__ResultList_10)
#line 517 "analysis.m"
{
#line 517 "analysis.m"
  {
#line 517 "analysis.m"
    MR_bool analysis__succeeded;
#line 517 "analysis.m"
    MR_Word analysis__TypeInfo_70_70;
#line 517 "analysis.m"
    MR_Word analysis__TypeInfo_72_72;
#line 517 "analysis.m"
    MR_Word analysis__TypeInfo_74_74;
#line 517 "analysis.m"
    MR_Word analysis__TypeInfo_76_76;

#line 518 "analysis.m"
    {
#line 518 "analysis.m"
      mercury__io__write_string_3_p_0((MR_String) "% Found these results: ");
    }
#line 5417 "analysis.c"
    {
#line 5419 "analysis.c"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_62, (MR_Integer) 4, &analysis__TypeInfo_70_70);
    }
#line 5422 "analysis.c"
    {
#line 5424 "analysis.c"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_62, (MR_Integer) 5, &analysis__TypeInfo_72_72);
    }
#line 5427 "analysis.c"
    {
#line 5429 "analysis.c"
      analysis__TypeInfo_74_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 5431 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_74_74, 0) = ((MR_Box) (&analysis__analysis__type_ctor_info_analysis_result_2));
#line 5433 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_74_74, 1) = ((MR_Box) (analysis__TypeInfo_70_70));
#line 5435 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_74_74, 2) = ((MR_Box) (analysis__TypeInfo_72_72));
#line 5437 "analysis.c"
    }
#line 5439 "analysis.c"
    {
#line 5441 "analysis.c"
      analysis__TypeInfo_76_76 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 5443 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_76_76, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
#line 5445 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_76_76, 1) = ((MR_Box) (analysis__TypeInfo_74_74));
#line 5447 "analysis.c"
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
#line 520 "analysis.m"
      return;
    }
#line 517 "analysis.m"
  }
#line 517 "analysis.m"
}

#line 500 "analysis.m"
static void MR_CALL 
analysis__IntroducedFrom__pred__lookup_results_1__500__1_4_p_0(
#line 500 "analysis.m"
  MR_Word analysis__ModuleName_7,
#line 500 "analysis.m"
  MR_Word analysis__FuncId_8)
#line 500 "analysis.m"
{
#line 500 "analysis.m"
  {
#line 500 "analysis.m"
    MR_bool analysis__succeeded;

#line 501 "analysis.m"
    {
#line 501 "analysis.m"
      mercury__io__write_string_3_p_0((MR_String) "% Looking up analysis results for ");
    }
#line 502 "analysis.m"
    {
#line 502 "analysis.m"
      mercury__io__write_3_p_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0, ((MR_Box) (analysis__ModuleName_7)));
    }
#line 503 "analysis.m"
    {
#line 503 "analysis.m"
      mercury__io__write_string_3_p_0((MR_String) ".");
    }
#line 504 "analysis.m"
    {
#line 504 "analysis.m"
      mercury__io__write_3_p_0((MR_Word) &analysis__analysis__type_ctor_info_func_id_0, ((MR_Box) (analysis__FuncId_8)));
    }
#line 505 "analysis.m"
    {
#line 505 "analysis.m"
      mercury__io__nl_2_p_0();
#line 505 "analysis.m"
      return;
    }
#line 500 "analysis.m"
  }
#line 500 "analysis.m"
}

#line 678 "analysis.m"
static MR_bool MR_CALL 
analysis__IntroducedFrom__func__lookup_requests__678__1_2_f_0(
#line 678 "analysis.m"
  MR_Word analysis__TypeClassInfo_for_call_pattern_47,
#line 678 "analysis.m"
  MR_Word analysis__HeadVar__2_23,
#line 678 "analysis.m"
  MR_Box * analysis__HeadVar__3_24)
#line 678 "analysis.m"
{
#line 678 "analysis.m"
  {
#line 678 "analysis.m"
    MR_bool analysis__succeeded;
#line 678 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_call_pattern_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_23, (MR_Integer) 0)));
#line 678 "analysis.m"
    MR_Word analysis__TypeInfo_61_61;
#line 678 "analysis.m"
    MR_Word analysis__TypeInfo_62_62;
#line 678 "analysis.m"
    MR_Word analysis__V_25_25;
#line 678 "analysis.m"
    MR_Box analysis__Call0_27 = (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_23, (MR_Integer) 1));
#line 678 "analysis.m"
    MR_Word analysis__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_23, (MR_Integer) 2)));

#line 5540 "analysis.c"
    {
#line 5542 "analysis.c"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_call_pattern_47, (MR_Integer) 4, &analysis__TypeInfo_61_61);
    }
#line 5545 "analysis.c"
    {
#line 5547 "analysis.c"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_call_pattern_59, (MR_Integer) 4, &analysis__TypeInfo_62_62);
    }
#line 680 "analysis.m"
    {
#line 680 "analysis.m"
      analysis__V_25_25 = mercury__univ__univ_1_f_0(analysis__TypeInfo_62_62, analysis__Call0_27);
    }
#line 680 "analysis.m"
    {
#line 680 "analysis.m"
      return analysis__succeeded = mercury__univ__univ_1_f_2(analysis__TypeInfo_61_61, analysis__HeadVar__3_24, analysis__V_25_25);
    }
#line 678 "analysis.m"
    return analysis__succeeded;
#line 678 "analysis.m"
  }
#line 678 "analysis.m"
}

#line 561 "analysis.m"
static void MR_CALL 
analysis__IntroducedFrom__pred__lookup_best_result__561__1_4_p_0(
#line 561 "analysis.m"
  MR_Word analysis__ModuleName_8,
#line 561 "analysis.m"
  MR_Word analysis__FuncId_9)
#line 561 "analysis.m"
{
#line 561 "analysis.m"
  {
#line 561 "analysis.m"
    MR_bool analysis__succeeded;

#line 562 "analysis.m"
    {
#line 562 "analysis.m"
      mercury__io__write_string_3_p_0((MR_String) "% Looking up best analysis result for ");
    }
#line 563 "analysis.m"
    {
#line 563 "analysis.m"
      mercury__io__write_3_p_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0, ((MR_Box) (analysis__ModuleName_8)));
    }
#line 564 "analysis.m"
    {
#line 564 "analysis.m"
      mercury__io__write_string_3_p_0((MR_String) ".");
    }
#line 565 "analysis.m"
    {
#line 565 "analysis.m"
      mercury__io__write_3_p_0((MR_Word) &analysis__analysis__type_ctor_info_func_id_0, ((MR_Box) (analysis__FuncId_9)));
    }
#line 566 "analysis.m"
    {
#line 566 "analysis.m"
      mercury__io__nl_2_p_0();
#line 566 "analysis.m"
      return;
    }
#line 561 "analysis.m"
  }
#line 561 "analysis.m"
}

#line 550 "analysis.m"
static MR_bool MR_CALL 
analysis__IntroducedFrom__pred__lookup_matching_results__550__1_4_p_0(
#line 550 "analysis.m"
  MR_Word analysis__TypeClassInfo_for_analysis_21,
#line 550 "analysis.m"
  MR_Box analysis__FuncInfo_10,
#line 550 "analysis.m"
  MR_Box analysis__Call_11,
#line 550 "analysis.m"
  MR_Word analysis__HeadVar__4_17)
#line 550 "analysis.m"
{
#line 550 "analysis.m"
  {
#line 550 "analysis.m"
    MR_bool analysis__succeeded;
#line 550 "analysis.m"
    MR_Box analysis__ResultCall_15 = (MR_hl_field(MR_mktag(0), analysis__HeadVar__4_17, (MR_Integer) 0));
#line 552 "analysis.m"
    MR_Box analysis__V_19_19 = (MR_hl_field(MR_mktag(0), analysis__HeadVar__4_17, (MR_Integer) 1));
#line 552 "analysis.m"
    MR_Word analysis__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__4_17, (MR_Integer) 2)));

#line 553 "analysis.m"
    {
#line 553 "analysis.m"
      MR_Word analysis__TypeClassInfo_for_call_pattern_28;
#line 553 "analysis.m"
      MR_Word analysis__TypeClassInfo_for_partial_order_30;
#line 5643 "analysis.c"
      MR_bool MR_CALL (* analysis__func_0)(MR_Box, MR_Box, MR_Box, MR_Box);

#line 5646 "analysis.c"
      {
#line 5648 "analysis.c"
        mercury__private_builtin__superclass_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_21, (MR_Integer) 1, &analysis__TypeClassInfo_for_call_pattern_28);
      }
#line 5651 "analysis.c"
      {
#line 5653 "analysis.c"
        mercury__private_builtin__superclass_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_call_pattern_28, (MR_Integer) 1, &analysis__TypeClassInfo_for_partial_order_30);
      }
#line 5656 "analysis.c"
      analysis__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), analysis__TypeClassInfo_for_partial_order_30, (MR_Integer) 0)), (MR_Integer) 5)));
#line 5658 "analysis.c"
      {
#line 5660 "analysis.c"
        analysis__succeeded = analysis__func_0(((MR_Box) analysis__TypeClassInfo_for_partial_order_30), analysis__FuncInfo_10, analysis__Call_11, analysis__ResultCall_15);
      }
#line 553 "analysis.m"
    }
#line 554 "analysis.m"
    if (!(analysis__succeeded))
#line 554 "analysis.m"
      {
#line 554 "analysis.m"
        MR_Word analysis__TypeClassInfo_for_call_pattern_31;
#line 554 "analysis.m"
        MR_Word analysis__TypeClassInfo_for_partial_order_33;
#line 5673 "analysis.c"
        MR_bool MR_CALL (* analysis__func_1)(MR_Box, MR_Box, MR_Box, MR_Box);

#line 5676 "analysis.c"
        {
#line 5678 "analysis.c"
          mercury__private_builtin__superclass_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_21, (MR_Integer) 1, &analysis__TypeClassInfo_for_call_pattern_31);
        }
#line 5681 "analysis.c"
        {
#line 5683 "analysis.c"
          mercury__private_builtin__superclass_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_call_pattern_31, (MR_Integer) 1, &analysis__TypeClassInfo_for_partial_order_33);
        }
#line 5686 "analysis.c"
        analysis__func_1 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), analysis__TypeClassInfo_for_partial_order_33, (MR_Integer) 0)), (MR_Integer) 6)));
#line 5688 "analysis.c"
        {
#line 5690 "analysis.c"
          return analysis__succeeded = analysis__func_1(((MR_Box) analysis__TypeClassInfo_for_partial_order_33), analysis__FuncInfo_10, analysis__Call_11, analysis__ResultCall_15);
        }
#line 554 "analysis.m"
      }
#line 550 "analysis.m"
    return analysis__succeeded;
#line 550 "analysis.m"
  }
#line 550 "analysis.m"
}

#line 480 "analysis.m"
static MR_Box MR_CALL 
analysis__IntroducedFrom__func__lookup_existing_call_patterns__480__1_2_f_0(
#line 480 "analysis.m"
  MR_Word analysis__TypeClassInfo_for_call_pattern_46,
#line 480 "analysis.m"
  MR_Word analysis__HeadVar__2_24)
#line 480 "analysis.m"
{
#line 480 "analysis.m"
  {
#line 480 "analysis.m"
    MR_bool analysis__succeeded;
#line 480 "analysis.m"
    MR_Box analysis__HeadVar__3_25;
#line 480 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_analysis_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_24, (MR_Integer) 0)));
#line 480 "analysis.m"
    MR_Word analysis__TypeInfo_60_60;
#line 480 "analysis.m"
    MR_Word analysis__TypeInfo_61_61;
#line 480 "analysis.m"
    MR_Box analysis__Call0_16 = (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_24, (MR_Integer) 1));
#line 480 "analysis.m"
    MR_Word analysis__V_26_26;
#line 482 "analysis.m"
    MR_Box analysis___Answer_17 = (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_24, (MR_Integer) 2));
#line 482 "analysis.m"
    MR_Word analysis___Status_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_24, (MR_Integer) 3)));

#line 5732 "analysis.c"
    {
#line 5734 "analysis.c"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_58, (MR_Integer) 4, &analysis__TypeInfo_60_60);
    }
#line 483 "analysis.m"
    {
#line 483 "analysis.m"
      analysis__V_26_26 = mercury__univ__univ_1_f_0(analysis__TypeInfo_60_60, analysis__Call0_16);
    }
#line 5742 "analysis.c"
    {
#line 5744 "analysis.c"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_call_pattern_46, (MR_Integer) 4, &analysis__TypeInfo_61_61);
    }
#line 483 "analysis.m"
    {
#line 483 "analysis.m"
      mercury__univ__det_univ_to_type_2_p_0(analysis__TypeInfo_61_61, analysis__V_26_26, &analysis__HeadVar__3_25);
    }
#line 480 "analysis.m"
    return analysis__HeadVar__3_25;
#line 480 "analysis.m"
  }
#line 480 "analysis.m"
}

#line 449 "analysis.m"
MR_bool MR_CALL 
analysis__ClassMethod_for_analysis__to_term____analysis__any_call__arity0______analysis__from_term_2_2_p_0(
#line 449 "analysis.m"
  MR_Word analysis__Term_3)
#line 449 "analysis.m"
{
#line 449 "analysis.m"
  {
#line 449 "analysis.m"
    MR_bool analysis__succeeded;
#line 449 "analysis.m"
    MR_Word analysis__V_5_5;
#line 449 "analysis.m"
    MR_String analysis__V_6_6;
#line 449 "analysis.m"
    MR_Word analysis__V_7_7;
#line 450 "analysis.m"
    MR_Word analysis__V_4_4;

#line 449 "analysis.m"
    mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 450 "analysis.m"
    analysis__succeeded = ((MR_tag((MR_Word) analysis__Term_3)) == (MR_mktag((MR_Integer) 0)));
#line 450 "analysis.m"
    if (analysis__succeeded)
#line 450 "analysis.m"
      {
#line 450 "analysis.m"
        analysis__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Term_3, (MR_Integer) 0)));
#line 450 "analysis.m"
        analysis__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Term_3, (MR_Integer) 1)));
#line 450 "analysis.m"
        analysis__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Term_3, (MR_Integer) 2)));
#line 450 "analysis.m"
        analysis__succeeded = (analysis__V_7_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 449 "analysis.m"
        if (analysis__succeeded)
#line 449 "analysis.m"
          {
#line 450 "analysis.m"
            analysis__succeeded = ((MR_tag((MR_Word) analysis__V_5_5)) == (MR_mktag((MR_Integer) 0)));
#line 450 "analysis.m"
            if (analysis__succeeded)
#line 450 "analysis.m"
              {
#line 450 "analysis.m"
                analysis__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), analysis__V_5_5, (MR_Integer) 0)));
#line 450 "analysis.m"
                analysis__succeeded = (strcmp(analysis__V_6_6, (MR_String) "any") == 0);
#line 450 "analysis.m"
              }
#line 449 "analysis.m"
          }
#line 450 "analysis.m"
      }
#line 449 "analysis.m"
    return analysis__succeeded;
#line 449 "analysis.m"
  }
#line 449 "analysis.m"
}

#line 446 "analysis.m"
MR_Word MR_CALL 
analysis__ClassMethod_for_analysis__to_term____analysis__any_call__arity0______analysis__to_term_1_1_f_0(void)
#line 446 "analysis.m"
{
#line 446 "analysis.m"
  {
#line 446 "analysis.m"
    MR_bool analysis__succeeded;
#line 446 "analysis.m"
    MR_Word analysis__Term_3;

#line 446 "analysis.m"
    {
#line 446 "analysis.m"
      return analysis__Term_3 = analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_116_111_95_116_101_114_109_95_95_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_116_111_95_116_101_114_109_95_49_95_95_91_49_93_95_48_1_f_0();
    }
#line 446 "analysis.m"
    return analysis__Term_3;
#line 446 "analysis.m"
  }
#line 446 "analysis.m"
}

#line 441 "analysis.m"
MR_bool MR_CALL 
analysis__ClassMethod_for_analysis__partial_order____analysis__no_func_info__arity0__analysis__any_call__arity0______analysis__equivalent_3_3_p_0(void)
#line 441 "analysis.m"
{
#line 442 "analysis.m"
  {
#line 442 "analysis.m"
    MR_bool analysis__succeeded;

#line 442 "analysis.m"
    {
#line 442 "analysis.m"
      return analysis__succeeded = analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_112_97_114_116_105_97_108_95_111_114_100_101_114_95_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_101_113_117_105_118_97_108_101_110_116_95_51_95_95_91_49_44_32_50_44_32_51_93_95_48_3_p_0();
    }
#line 442 "analysis.m"
    return analysis__succeeded;
#line 442 "analysis.m"
  }
#line 441 "analysis.m"
}

#line 438 "analysis.m"
MR_bool MR_CALL 
analysis__ClassMethod_for_analysis__partial_order____analysis__no_func_info__arity0__analysis__any_call__arity0______analysis__more_precise_than_3_3_p_0(void)
#line 438 "analysis.m"
{
#line 439 "analysis.m"
  {
#line 439 "analysis.m"
    MR_bool analysis__succeeded;

#line 439 "analysis.m"
    {
#line 439 "analysis.m"
      return analysis__succeeded = analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_112_97_114_116_105_97_108_95_111_114_100_101_114_95_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_109_111_114_101_95_112_114_101_99_105_115_101_95_116_104_97_110_95_51_95_95_91_49_44_32_50_44_32_51_93_95_48_3_p_0();
    }
#line 439 "analysis.m"
    return analysis__succeeded;
#line 439 "analysis.m"
  }
#line 438 "analysis.m"
}

#line 399 "analysis.m"
void MR_CALL 
analysis____Compare____some_analysis_result_0_0(
#line 399 "analysis.m"
  MR_Word * analysis__HeadVar__1_1,
#line 399 "analysis.m"
  MR_Word analysis__HeadVar__2_2,
#line 399 "analysis.m"
  MR_Word analysis__HeadVar__3_3)
#line 399 "analysis.m"
{
#line 399 "analysis.m"
  {
#line 399 "analysis.m"
    MR_bool analysis__succeeded;
#line 399 "analysis.m"
    MR_Integer analysis__CastX_12 = (MR_Integer) analysis__HeadVar__2_2;
#line 399 "analysis.m"
    MR_Integer analysis__CastY_13 = (MR_Integer) analysis__HeadVar__3_3;

#line 399 "analysis.m"
    analysis__succeeded = (analysis__CastX_12 == analysis__CastY_13);
#line 399 "analysis.m"
    if (analysis__succeeded)
#line 399 "analysis.m"
      *analysis__HeadVar__1_1 = (MR_Integer) 0;
#line 399 "analysis.m"
    else
#line 399 "analysis.m"
      {
#line 399 "analysis.m"
        MR_Word analysis__TypeClassInfo_for_analysis_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 0)));
#line 399 "analysis.m"
        MR_Word analysis__TypeClassInfo_for_analysis_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__3_3, (MR_Integer) 0)));
#line 399 "analysis.m"
        MR_Box analysis__V_4_4 = (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 1));
#line 399 "analysis.m"
        MR_Box analysis__V_5_5 = (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 2));
#line 399 "analysis.m"
        MR_Word analysis__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 3)));
#line 399 "analysis.m"
        MR_Box analysis__V_7_7 = (MR_hl_field(MR_mktag(0), analysis__HeadVar__3_3, (MR_Integer) 1));
#line 399 "analysis.m"
        MR_Box analysis__V_8_8 = (MR_hl_field(MR_mktag(0), analysis__HeadVar__3_3, (MR_Integer) 2));
#line 399 "analysis.m"
        MR_Word analysis__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__3_3, (MR_Integer) 3)));
#line 399 "analysis.m"
        MR_Word analysis__V_10_10;
#line 399 "analysis.m"
        MR_Word analysis__TypeInfo_17_17;
#line 399 "analysis.m"
        MR_Word analysis__TypeInfo_18_18;

#line 5943 "analysis.c"
        {
#line 5945 "analysis.c"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_14, (MR_Integer) 4, &analysis__TypeInfo_17_17);
        }
#line 5948 "analysis.c"
        {
#line 5950 "analysis.c"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_15, (MR_Integer) 4, &analysis__TypeInfo_18_18);
        }
#line 399 "analysis.m"
        {
#line 399 "analysis.m"
          mercury__private_builtin__typed_compare_3_p_0(analysis__TypeInfo_17_17, analysis__TypeInfo_18_18, &analysis__V_10_10, analysis__V_4_4, analysis__V_7_7);
        }
#line 399 "analysis.m"
        analysis__succeeded = (analysis__V_10_10 == (MR_Integer) 0);
#line 399 "analysis.m"
        analysis__succeeded = !(analysis__succeeded);
#line 399 "analysis.m"
        if (analysis__succeeded)
#line 399 "analysis.m"
          *analysis__HeadVar__1_1 = analysis__V_10_10;
#line 399 "analysis.m"
        else
#line 399 "analysis.m"
          {
#line 399 "analysis.m"
            MR_Word analysis__V_11_11;
#line 399 "analysis.m"
            MR_Word analysis__TypeInfo_20_20;
#line 399 "analysis.m"
            MR_Word analysis__TypeInfo_21_21;

#line 5977 "analysis.c"
            {
#line 5979 "analysis.c"
              mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_14, (MR_Integer) 5, &analysis__TypeInfo_20_20);
            }
#line 5982 "analysis.c"
            {
#line 5984 "analysis.c"
              mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_15, (MR_Integer) 5, &analysis__TypeInfo_21_21);
            }
#line 399 "analysis.m"
            {
#line 399 "analysis.m"
              mercury__private_builtin__typed_compare_3_p_0(analysis__TypeInfo_20_20, analysis__TypeInfo_21_21, &analysis__V_11_11, analysis__V_5_5, analysis__V_8_8);
            }
#line 399 "analysis.m"
            analysis__succeeded = (analysis__V_11_11 == (MR_Integer) 0);
#line 399 "analysis.m"
            analysis__succeeded = !(analysis__succeeded);
#line 399 "analysis.m"
            if (analysis__succeeded)
#line 399 "analysis.m"
              *analysis__HeadVar__1_1 = analysis__V_11_11;
#line 399 "analysis.m"
            else
#line 399 "analysis.m"
              {
#line 399 "analysis.m"
                MR_Integer analysis__V_23_23 = (MR_Integer) analysis__V_6_6;
#line 399 "analysis.m"
                MR_Integer analysis__V_24_24 = (MR_Integer) analysis__V_9_9;

#line 399 "analysis.m"
                {
#line 399 "analysis.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(analysis__HeadVar__1_1, analysis__V_23_23, analysis__V_24_24);
#line 399 "analysis.m"
                  return;
                }
#line 399 "analysis.m"
              }
#line 399 "analysis.m"
          }
#line 399 "analysis.m"
      }
#line 399 "analysis.m"
  }
#line 399 "analysis.m"
}

#line 399 "analysis.m"
MR_bool MR_CALL 
analysis____Unify____some_analysis_result_0_0(
#line 399 "analysis.m"
  MR_Word analysis__HeadVar__1_1,
#line 399 "analysis.m"
  MR_Word analysis__HeadVar__2_2)
#line 399 "analysis.m"
{
#line 399 "analysis.m"
  {
#line 399 "analysis.m"
    MR_bool analysis__succeeded;
#line 399 "analysis.m"
    MR_Integer analysis__CastX_9 = (MR_Integer) analysis__HeadVar__1_1;
#line 399 "analysis.m"
    MR_Integer analysis__CastY_10 = (MR_Integer) analysis__HeadVar__2_2;

#line 399 "analysis.m"
    analysis__succeeded = (analysis__CastX_9 == analysis__CastY_10);
#line 399 "analysis.m"
    if (analysis__succeeded)
#line 399 "analysis.m"
      analysis__succeeded = MR_TRUE;
#line 399 "analysis.m"
    else
#line 399 "analysis.m"
      {
#line 399 "analysis.m"
        MR_Word analysis__TypeClassInfo_for_analysis_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__1_1, (MR_Integer) 0)));
#line 399 "analysis.m"
        MR_Word analysis__TypeClassInfo_for_analysis_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 0)));
#line 399 "analysis.m"
        MR_Word analysis__TypeInfo_14_14;
#line 399 "analysis.m"
        MR_Word analysis__TypeInfo_15_15;
#line 399 "analysis.m"
        MR_Word analysis__TypeInfo_17_17;
#line 399 "analysis.m"
        MR_Word analysis__TypeInfo_18_18;
#line 399 "analysis.m"
        MR_Box analysis__V_3_3 = (MR_hl_field(MR_mktag(0), analysis__HeadVar__1_1, (MR_Integer) 1));
#line 399 "analysis.m"
        MR_Box analysis__V_4_4 = (MR_hl_field(MR_mktag(0), analysis__HeadVar__1_1, (MR_Integer) 2));
#line 399 "analysis.m"
        MR_Word analysis__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__1_1, (MR_Integer) 3)));
#line 399 "analysis.m"
        MR_Box analysis__V_6_6 = (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 1));
#line 399 "analysis.m"
        MR_Box analysis__V_7_7 = (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 2));
#line 399 "analysis.m"
        MR_Word analysis__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 3)));
#line 399 "analysis.m"
        MR_Integer analysis__PolyConst5_16;

#line 6082 "analysis.c"
        {
#line 6084 "analysis.c"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_11, (MR_Integer) 4, &analysis__TypeInfo_14_14);
        }
#line 6087 "analysis.c"
        {
#line 6089 "analysis.c"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_12, (MR_Integer) 4, &analysis__TypeInfo_15_15);
        }
#line 399 "analysis.m"
        {
#line 399 "analysis.m"
          analysis__succeeded = mercury__private_builtin__typed_unify_2_p_0(analysis__TypeInfo_14_14, analysis__TypeInfo_15_15, analysis__V_3_3, analysis__V_6_6);
        }
#line 399 "analysis.m"
        if (analysis__succeeded)
#line 399 "analysis.m"
          {
#line 6101 "analysis.c"
            analysis__PolyConst5_16 = (MR_Integer) 5;
#line 6103 "analysis.c"
            {
#line 6105 "analysis.c"
              mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_11, analysis__PolyConst5_16, &analysis__TypeInfo_17_17);
            }
#line 6108 "analysis.c"
            {
#line 6110 "analysis.c"
              mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_12, analysis__PolyConst5_16, &analysis__TypeInfo_18_18);
            }
#line 399 "analysis.m"
            {
#line 399 "analysis.m"
              analysis__succeeded = mercury__private_builtin__typed_unify_2_p_0(analysis__TypeInfo_17_17, analysis__TypeInfo_18_18, analysis__V_4_4, analysis__V_7_7);
            }
#line 399 "analysis.m"
            if (analysis__succeeded)
#line 399 "analysis.m"
              analysis__succeeded = (analysis__V_5_5 == analysis__V_8_8);
#line 399 "analysis.m"
          }
#line 399 "analysis.m"
      }
#line 399 "analysis.m"
    return analysis__succeeded;
#line 399 "analysis.m"
  }
#line 399 "analysis.m"
}

#line 144 "analysis.m"
void MR_CALL 
analysis____Compare____no_func_info_0_0(
#line 144 "analysis.m"
  MR_Word * analysis__HeadVar__1_1)
#line 144 "analysis.m"
{
#line 144 "analysis.m"
  {
#line 144 "analysis.m"
    MR_bool analysis__succeeded;

#line 144 "analysis.m"
    {
#line 144 "analysis.m"
      analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(analysis__HeadVar__1_1);
#line 144 "analysis.m"
      return;
    }
#line 144 "analysis.m"
  }
#line 144 "analysis.m"
}

#line 144 "analysis.m"
MR_bool MR_CALL 
analysis____Unify____no_func_info_0_0(void)
#line 144 "analysis.m"
{
#line 144 "analysis.m"
  {
#line 144 "analysis.m"
    MR_bool analysis__succeeded;

#line 144 "analysis.m"
    {
#line 144 "analysis.m"
      return analysis__succeeded = analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_48_95_95_91_49_44_32_50_93_95_48_2_p_0();
    }
#line 144 "analysis.m"
    return analysis__succeeded;
#line 144 "analysis.m"
  }
#line 144 "analysis.m"
}

#line 428 "analysis.m"
void MR_CALL 
analysis____Compare____module_analysis_map_1_0(
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
    MR_Word analysis__TypeInfo_10_10;
#line 428 "analysis.m"
    MR_Word analysis__TypeInfo_12_12;
#line 428 "analysis.m"
    MR_Word analysis__Cast_HeadVar1_4 = analysis__HeadVar__2_2;
#line 428 "analysis.m"
    MR_Word analysis__Cast_HeadVar2_5 = analysis__HeadVar__3_3;

#line 6205 "analysis.c"
    {
#line 6207 "analysis.c"
      analysis__TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6209 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_10_10, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
#line 6211 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_10_10, 1) = ((MR_Box) (analysis__TypeInfo_for_T_6));
#line 6213 "analysis.c"
    }
#line 6215 "analysis.c"
    {
#line 6217 "analysis.c"
      analysis__TypeInfo_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 6219 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_12_12, 0) = ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2));
#line 6221 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_12_12, 1) = ((MR_Box) (&analysis__analysis__type_ctor_info_func_id_0));
#line 6223 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_12_12, 2) = ((MR_Box) (analysis__TypeInfo_10_10));
#line 6225 "analysis.c"
    }
#line 428 "analysis.m"
    {
#line 428 "analysis.m"
      mercury__tree234____Compare____tree234_2_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, analysis__TypeInfo_12_12, analysis__HeadVar__1_1, analysis__Cast_HeadVar1_4, analysis__Cast_HeadVar2_5);
#line 428 "analysis.m"
      return;
    }
#line 428 "analysis.m"
  }
#line 428 "analysis.m"
}

#line 428 "analysis.m"
MR_bool MR_CALL 
analysis____Unify____module_analysis_map_1_0(
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
    MR_Word analysis__TypeInfo_9_9;
#line 428 "analysis.m"
    MR_Word analysis__TypeInfo_11_11;
#line 428 "analysis.m"
    MR_Word analysis__Cast_HeadVar1_3 = analysis__HeadVar__1_1;
#line 428 "analysis.m"
    MR_Word analysis__Cast_HeadVar2_4 = analysis__HeadVar__2_2;

#line 6263 "analysis.c"
    {
#line 6265 "analysis.c"
      analysis__TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6267 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_9_9, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
#line 6269 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_9_9, 1) = ((MR_Box) (analysis__TypeInfo_for_T_5));
#line 6271 "analysis.c"
    }
#line 6273 "analysis.c"
    {
#line 6275 "analysis.c"
      analysis__TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 6277 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_11_11, 0) = ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2));
#line 6279 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_11_11, 1) = ((MR_Box) (&analysis__analysis__type_ctor_info_func_id_0));
#line 6281 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_11_11, 2) = ((MR_Box) (analysis__TypeInfo_9_9));
#line 6283 "analysis.c"
    }
#line 428 "analysis.m"
    {
#line 428 "analysis.m"
      return analysis__succeeded = mercury__tree234____Unify____tree234_2_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, analysis__TypeInfo_11_11, analysis__Cast_HeadVar1_3, analysis__Cast_HeadVar2_4);
    }
#line 428 "analysis.m"
    return analysis__succeeded;
#line 428 "analysis.m"
  }
#line 428 "analysis.m"
}

#line 392 "analysis.m"
void MR_CALL 
analysis____Compare____make_analysis_registry_0_0(
#line 392 "analysis.m"
  MR_Word * analysis__HeadVar__1_1,
#line 392 "analysis.m"
  MR_Word analysis__HeadVar__2_2,
#line 392 "analysis.m"
  MR_Word analysis__HeadVar__3_3)
#line 392 "analysis.m"
{
#line 392 "analysis.m"
  {
#line 392 "analysis.m"
    MR_bool analysis__succeeded;
#line 392 "analysis.m"
    MR_Integer analysis__Cast_HeadVar1_4 = (MR_Integer) analysis__HeadVar__2_2;
#line 392 "analysis.m"
    MR_Integer analysis__Cast_HeadVar2_5 = (MR_Integer) analysis__HeadVar__3_3;

#line 392 "analysis.m"
    {
#line 392 "analysis.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(analysis__HeadVar__1_1, analysis__Cast_HeadVar1_4, analysis__Cast_HeadVar2_5);
#line 392 "analysis.m"
      return;
    }
#line 392 "analysis.m"
  }
#line 392 "analysis.m"
}

#line 392 "analysis.m"
MR_bool MR_CALL 
analysis____Unify____make_analysis_registry_0_0(
#line 392 "analysis.m"
  MR_Word analysis__HeadVar__2_1,
#line 392 "analysis.m"
  MR_Word analysis__HeadVar__2_2)
#line 392 "analysis.m"
{
#line 6338 "analysis.c"
  {
#line 6340 "analysis.c"
    MR_bool analysis__succeeded = (analysis__HeadVar__2_1 == analysis__HeadVar__2_2);

#line 6343 "analysis.c"
    return analysis__succeeded;
#line 6345 "analysis.c"
  }
#line 392 "analysis.m"
}

#line 416 "analysis.m"
void MR_CALL 
analysis____Compare____imdg_arc_0_0(
#line 416 "analysis.m"
  MR_Word * analysis__HeadVar__1_1,
#line 416 "analysis.m"
  MR_Word analysis__HeadVar__2_2,
#line 416 "analysis.m"
  MR_Word analysis__HeadVar__3_3)
#line 416 "analysis.m"
{
#line 416 "analysis.m"
  {
#line 416 "analysis.m"
    MR_bool analysis__succeeded;
#line 416 "analysis.m"
    MR_Integer analysis__CastX_9 = (MR_Integer) analysis__HeadVar__2_2;
#line 416 "analysis.m"
    MR_Integer analysis__CastY_10 = (MR_Integer) analysis__HeadVar__3_3;

#line 416 "analysis.m"
    analysis__succeeded = (analysis__CastX_9 == analysis__CastY_10);
#line 416 "analysis.m"
    if (analysis__succeeded)
#line 416 "analysis.m"
      *analysis__HeadVar__1_1 = (MR_Integer) 0;
#line 416 "analysis.m"
    else
#line 416 "analysis.m"
      {
#line 416 "analysis.m"
        MR_Word analysis__TypeClassInfo_for_call_pattern_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 0)));
#line 416 "analysis.m"
        MR_Word analysis__TypeClassInfo_for_call_pattern_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__3_3, (MR_Integer) 0)));
#line 416 "analysis.m"
        MR_Box analysis__V_4_4 = (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 1));
#line 416 "analysis.m"
        MR_Word analysis__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 2)));
#line 416 "analysis.m"
        MR_Box analysis__V_6_6 = (MR_hl_field(MR_mktag(0), analysis__HeadVar__3_3, (MR_Integer) 1));
#line 416 "analysis.m"
        MR_Word analysis__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__3_3, (MR_Integer) 2)));
#line 416 "analysis.m"
        MR_Word analysis__V_8_8;
#line 416 "analysis.m"
        MR_Word analysis__TypeInfo_14_14;
#line 416 "analysis.m"
        MR_Word analysis__TypeInfo_15_15;

#line 6399 "analysis.c"
        {
#line 6401 "analysis.c"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_call_pattern_11, (MR_Integer) 4, &analysis__TypeInfo_14_14);
        }
#line 6404 "analysis.c"
        {
#line 6406 "analysis.c"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_call_pattern_12, (MR_Integer) 4, &analysis__TypeInfo_15_15);
        }
#line 416 "analysis.m"
        {
#line 416 "analysis.m"
          mercury__private_builtin__typed_compare_3_p_0(analysis__TypeInfo_14_14, analysis__TypeInfo_15_15, &analysis__V_8_8, analysis__V_4_4, analysis__V_6_6);
        }
#line 416 "analysis.m"
        analysis__succeeded = (analysis__V_8_8 == (MR_Integer) 0);
#line 416 "analysis.m"
        analysis__succeeded = !(analysis__succeeded);
#line 416 "analysis.m"
        if (analysis__succeeded)
#line 416 "analysis.m"
          *analysis__HeadVar__1_1 = analysis__V_8_8;
#line 416 "analysis.m"
        else
#line 416 "analysis.m"
          {
#line 416 "analysis.m"
            mdbcomp__prim_data____Compare____sym_name_0_0(analysis__HeadVar__1_1, analysis__V_5_5, analysis__V_7_7);
#line 416 "analysis.m"
            return;
          }
#line 416 "analysis.m"
      }
#line 416 "analysis.m"
  }
#line 416 "analysis.m"
}

#line 416 "analysis.m"
MR_bool MR_CALL 
analysis____Unify____imdg_arc_0_0(
#line 416 "analysis.m"
  MR_Word analysis__HeadVar__1_1,
#line 416 "analysis.m"
  MR_Word analysis__HeadVar__2_2)
#line 416 "analysis.m"
{
#line 416 "analysis.m"
  {
#line 416 "analysis.m"
    MR_bool analysis__succeeded;
#line 416 "analysis.m"
    MR_Integer analysis__CastX_7 = (MR_Integer) analysis__HeadVar__1_1;
#line 416 "analysis.m"
    MR_Integer analysis__CastY_8 = (MR_Integer) analysis__HeadVar__2_2;

#line 416 "analysis.m"
    analysis__succeeded = (analysis__CastX_7 == analysis__CastY_8);
#line 416 "analysis.m"
    if (analysis__succeeded)
#line 416 "analysis.m"
      analysis__succeeded = MR_TRUE;
#line 416 "analysis.m"
    else
#line 416 "analysis.m"
      {
#line 416 "analysis.m"
        MR_Word analysis__TypeClassInfo_for_call_pattern_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__1_1, (MR_Integer) 0)));
#line 416 "analysis.m"
        MR_Word analysis__TypeClassInfo_for_call_pattern_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 0)));
#line 416 "analysis.m"
        MR_Word analysis__TypeInfo_12_12;
#line 416 "analysis.m"
        MR_Word analysis__TypeInfo_13_13;
#line 416 "analysis.m"
        MR_Box analysis__V_3_3 = (MR_hl_field(MR_mktag(0), analysis__HeadVar__1_1, (MR_Integer) 1));
#line 416 "analysis.m"
        MR_Word analysis__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__1_1, (MR_Integer) 2)));
#line 416 "analysis.m"
        MR_Box analysis__V_5_5 = (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 1));
#line 416 "analysis.m"
        MR_Word analysis__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 2)));

#line 6483 "analysis.c"
        {
#line 6485 "analysis.c"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_call_pattern_9, (MR_Integer) 4, &analysis__TypeInfo_12_12);
        }
#line 6488 "analysis.c"
        {
#line 6490 "analysis.c"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_call_pattern_10, (MR_Integer) 4, &analysis__TypeInfo_13_13);
        }
#line 416 "analysis.m"
        {
#line 416 "analysis.m"
          analysis__succeeded = mercury__private_builtin__typed_unify_2_p_0(analysis__TypeInfo_12_12, analysis__TypeInfo_13_13, analysis__V_3_3, analysis__V_5_5);
        }
#line 416 "analysis.m"
        if (analysis__succeeded)
#line 416 "analysis.m"
          {
#line 416 "analysis.m"
            return analysis__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(analysis__V_4_4, analysis__V_6_6);
          }
#line 416 "analysis.m"
      }
#line 416 "analysis.m"
    return analysis__succeeded;
#line 416 "analysis.m"
  }
#line 416 "analysis.m"
}

#line 170 "analysis.m"
void MR_CALL 
analysis____Compare____func_id_0_0(
#line 170 "analysis.m"
  MR_Word * analysis__HeadVar__1_1,
#line 170 "analysis.m"
  MR_Word analysis__HeadVar__2_2,
#line 170 "analysis.m"
  MR_Word analysis__HeadVar__3_3)
#line 170 "analysis.m"
{
#line 170 "analysis.m"
  {
#line 170 "analysis.m"
    MR_bool analysis__succeeded;
#line 170 "analysis.m"
    MR_Integer analysis__CastX_15 = (MR_Integer) analysis__HeadVar__2_2;
#line 170 "analysis.m"
    MR_Integer analysis__CastY_16 = (MR_Integer) analysis__HeadVar__3_3;

#line 170 "analysis.m"
    analysis__succeeded = (analysis__CastX_15 == analysis__CastY_16);
#line 170 "analysis.m"
    if (analysis__succeeded)
#line 6538 "analysis.c"
      *analysis__HeadVar__1_1 = (MR_Integer) 0;
#line 170 "analysis.m"
    else
#line 170 "analysis.m"
      {
#line 170 "analysis.m"
        MR_Word analysis__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 0)));
#line 170 "analysis.m"
        MR_String analysis__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 1)));
#line 170 "analysis.m"
        MR_Integer analysis__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 2)));
#line 170 "analysis.m"
        MR_Integer analysis__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 3)));
#line 170 "analysis.m"
        MR_Word analysis__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__3_3, (MR_Integer) 0)));
#line 170 "analysis.m"
        MR_String analysis__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(0), analysis__HeadVar__3_3, (MR_Integer) 1)));
#line 170 "analysis.m"
        MR_Integer analysis__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), analysis__HeadVar__3_3, (MR_Integer) 2)));
#line 170 "analysis.m"
        MR_Integer analysis__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), analysis__HeadVar__3_3, (MR_Integer) 3)));
#line 170 "analysis.m"
        MR_Word analysis__V_12_12;
#line 170 "analysis.m"
        MR_Integer analysis__V_21_21 = (MR_Integer) analysis__V_4_4;
#line 170 "analysis.m"
        MR_Integer analysis__V_22_22 = (MR_Integer) analysis__V_8_8;

#line 170 "analysis.m"
        {
#line 170 "analysis.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&analysis__V_12_12, analysis__V_21_21, analysis__V_22_22);
        }
#line 6572 "analysis.c"
        analysis__succeeded = (analysis__V_12_12 == (MR_Integer) 0);
#line 170 "analysis.m"
        analysis__succeeded = !(analysis__succeeded);
#line 170 "analysis.m"
        if (analysis__succeeded)
#line 170 "analysis.m"
          *analysis__HeadVar__1_1 = analysis__V_12_12;
#line 170 "analysis.m"
        else
#line 170 "analysis.m"
          {
#line 170 "analysis.m"
            MR_Word analysis__V_13_13;

#line 170 "analysis.m"
            {
#line 170 "analysis.m"
              mercury__private_builtin__builtin_compare_string_3_p_0(&analysis__V_13_13, analysis__V_5_5, analysis__V_9_9);
            }
#line 6592 "analysis.c"
            analysis__succeeded = (analysis__V_13_13 == (MR_Integer) 0);
#line 170 "analysis.m"
            analysis__succeeded = !(analysis__succeeded);
#line 170 "analysis.m"
            if (analysis__succeeded)
#line 170 "analysis.m"
              *analysis__HeadVar__1_1 = analysis__V_13_13;
#line 170 "analysis.m"
            else
#line 170 "analysis.m"
              {
#line 170 "analysis.m"
                MR_Word analysis__V_14_14;

#line 170 "analysis.m"
                {
#line 170 "analysis.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(&analysis__V_14_14, analysis__V_6_6, analysis__V_10_10);
                }
#line 6612 "analysis.c"
                analysis__succeeded = (analysis__V_14_14 == (MR_Integer) 0);
#line 170 "analysis.m"
                analysis__succeeded = !(analysis__succeeded);
#line 170 "analysis.m"
                if (analysis__succeeded)
#line 170 "analysis.m"
                  *analysis__HeadVar__1_1 = analysis__V_14_14;
#line 170 "analysis.m"
                else
#line 170 "analysis.m"
                  {
#line 170 "analysis.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(analysis__HeadVar__1_1, analysis__V_7_7, analysis__V_11_11);
#line 170 "analysis.m"
                    return;
                  }
#line 170 "analysis.m"
              }
#line 170 "analysis.m"
          }
#line 170 "analysis.m"
      }
#line 170 "analysis.m"
  }
#line 170 "analysis.m"
}

#line 170 "analysis.m"
MR_bool MR_CALL 
analysis____Unify____func_id_0_0(
#line 170 "analysis.m"
  MR_Word analysis__HeadVar__1_1,
#line 170 "analysis.m"
  MR_Word analysis__HeadVar__2_2)
#line 170 "analysis.m"
{
#line 170 "analysis.m"
  {
#line 170 "analysis.m"
    MR_bool analysis__succeeded;
#line 170 "analysis.m"
    MR_Integer analysis__CastX_11 = (MR_Integer) analysis__HeadVar__1_1;
#line 170 "analysis.m"
    MR_Integer analysis__CastY_12 = (MR_Integer) analysis__HeadVar__2_2;

#line 170 "analysis.m"
    analysis__succeeded = (analysis__CastX_11 == analysis__CastY_12);
#line 170 "analysis.m"
    if (analysis__succeeded)
#line 170 "analysis.m"
      analysis__succeeded = MR_TRUE;
#line 170 "analysis.m"
    else
#line 170 "analysis.m"
      {
#line 170 "analysis.m"
        MR_Word analysis__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__1_1, (MR_Integer) 0)));
#line 170 "analysis.m"
        MR_String analysis__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), analysis__HeadVar__1_1, (MR_Integer) 1)));
#line 170 "analysis.m"
        MR_Integer analysis__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), analysis__HeadVar__1_1, (MR_Integer) 2)));
#line 170 "analysis.m"
        MR_Integer analysis__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), analysis__HeadVar__1_1, (MR_Integer) 3)));
#line 170 "analysis.m"
        MR_Word analysis__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 0)));
#line 170 "analysis.m"
        MR_String analysis__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 1)));
#line 170 "analysis.m"
        MR_Integer analysis__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 2)));
#line 170 "analysis.m"
        MR_Integer analysis__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 3)));

#line 6685 "analysis.c"
        analysis__succeeded = (analysis__V_3_3 == analysis__V_7_7);
#line 170 "analysis.m"
        if (analysis__succeeded)
#line 170 "analysis.m"
          {
#line 6691 "analysis.c"
            analysis__succeeded = (strcmp(analysis__V_4_4, analysis__V_8_8) == 0);
#line 170 "analysis.m"
            if (analysis__succeeded)
#line 170 "analysis.m"
              {
#line 6697 "analysis.c"
                analysis__succeeded = (analysis__V_5_5 == analysis__V_9_9);
#line 170 "analysis.m"
                if (analysis__succeeded)
#line 6701 "analysis.c"
                  analysis__succeeded = (analysis__V_6_6 == analysis__V_10_10);
#line 170 "analysis.m"
              }
#line 170 "analysis.m"
          }
#line 170 "analysis.m"
      }
#line 170 "analysis.m"
    return analysis__succeeded;
#line 170 "analysis.m"
  }
#line 170 "analysis.m"
}

#line 429 "analysis.m"
void MR_CALL 
analysis____Compare____func_analysis_map_1_0(
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
    MR_Word analysis__TypeInfo_9_9;
#line 429 "analysis.m"
    MR_Word analysis__Cast_HeadVar1_4 = analysis__HeadVar__2_2;
#line 429 "analysis.m"
    MR_Word analysis__Cast_HeadVar2_5 = analysis__HeadVar__3_3;

#line 6740 "analysis.c"
    {
#line 6742 "analysis.c"
      analysis__TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6744 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_9_9, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
#line 6746 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_9_9, 1) = ((MR_Box) (analysis__TypeInfo_for_T_6));
#line 6748 "analysis.c"
    }
#line 429 "analysis.m"
    {
#line 429 "analysis.m"
      mercury__tree234____Compare____tree234_2_0((MR_Word) &analysis__analysis__type_ctor_info_func_id_0, analysis__TypeInfo_9_9, analysis__HeadVar__1_1, analysis__Cast_HeadVar1_4, analysis__Cast_HeadVar2_5);
#line 429 "analysis.m"
      return;
    }
#line 429 "analysis.m"
  }
#line 429 "analysis.m"
}

#line 429 "analysis.m"
MR_bool MR_CALL 
analysis____Unify____func_analysis_map_1_0(
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
    MR_Word analysis__TypeInfo_8_8;
#line 429 "analysis.m"
    MR_Word analysis__Cast_HeadVar1_3 = analysis__HeadVar__1_1;
#line 429 "analysis.m"
    MR_Word analysis__Cast_HeadVar2_4 = analysis__HeadVar__2_2;

#line 6784 "analysis.c"
    {
#line 6786 "analysis.c"
      analysis__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6788 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_8_8, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
#line 6790 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_8_8, 1) = ((MR_Box) (analysis__TypeInfo_for_T_5));
#line 6792 "analysis.c"
    }
#line 429 "analysis.m"
    {
#line 429 "analysis.m"
      return analysis__succeeded = mercury__tree234____Unify____tree234_2_0((MR_Word) &analysis__analysis__type_ctor_info_func_id_0, analysis__TypeInfo_8_8, analysis__Cast_HeadVar1_3, analysis__Cast_HeadVar2_4);
    }
#line 429 "analysis.m"
    return analysis__succeeded;
#line 429 "analysis.m"
  }
#line 429 "analysis.m"
}

#line 105 "analysis.m"
void MR_CALL 
analysis____Compare____fixpoint_type_0_0(
#line 105 "analysis.m"
  MR_Word * analysis__HeadVar__1_1,
#line 105 "analysis.m"
  MR_Word analysis__HeadVar__2_2,
#line 105 "analysis.m"
  MR_Word analysis__HeadVar__3_3)
#line 105 "analysis.m"
{
#line 105 "analysis.m"
  {
#line 105 "analysis.m"
    MR_bool analysis__succeeded;
#line 105 "analysis.m"
    MR_Integer analysis__Cast_HeadVar1_4 = (MR_Integer) analysis__HeadVar__2_2;
#line 105 "analysis.m"
    MR_Integer analysis__Cast_HeadVar2_5 = (MR_Integer) analysis__HeadVar__3_3;

#line 105 "analysis.m"
    {
#line 105 "analysis.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(analysis__HeadVar__1_1, analysis__Cast_HeadVar1_4, analysis__Cast_HeadVar2_5);
#line 105 "analysis.m"
      return;
    }
#line 105 "analysis.m"
  }
#line 105 "analysis.m"
}

#line 105 "analysis.m"
MR_bool MR_CALL 
analysis____Unify____fixpoint_type_0_0(
#line 105 "analysis.m"
  MR_Word analysis__HeadVar__2_1,
#line 105 "analysis.m"
  MR_Word analysis__HeadVar__2_2)
#line 105 "analysis.m"
{
#line 6847 "analysis.c"
  {
#line 6849 "analysis.c"
    MR_bool analysis__succeeded = (analysis__HeadVar__2_1 == analysis__HeadVar__2_2);

#line 6852 "analysis.c"
    return analysis__succeeded;
#line 6854 "analysis.c"
  }
#line 105 "analysis.m"
}

#line 150 "analysis.m"
void MR_CALL 
analysis____Compare____any_call_0_0(
#line 150 "analysis.m"
  MR_Word * analysis__HeadVar__1_1)
#line 150 "analysis.m"
{
#line 150 "analysis.m"
  {
#line 150 "analysis.m"
    MR_bool analysis__succeeded;

#line 150 "analysis.m"
    {
#line 150 "analysis.m"
      analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(analysis__HeadVar__1_1);
#line 150 "analysis.m"
      return;
    }
#line 150 "analysis.m"
  }
#line 150 "analysis.m"
}

#line 150 "analysis.m"
MR_bool MR_CALL 
analysis____Unify____any_call_0_0(void)
#line 150 "analysis.m"
{
#line 150 "analysis.m"
  {
#line 150 "analysis.m"
    MR_bool analysis__succeeded;

#line 150 "analysis.m"
    {
#line 150 "analysis.m"
      return analysis__succeeded = analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_48_95_95_91_49_44_32_50_93_95_48_2_p_0();
    }
#line 150 "analysis.m"
    return analysis__succeeded;
#line 150 "analysis.m"
  }
#line 150 "analysis.m"
}

#line 68 "analysis.m"
void MR_CALL 
analysis____Compare____analysis_type_0_0(
#line 68 "analysis.m"
  MR_Word * analysis__HeadVar__1_1,
#line 68 "analysis.m"
  MR_Word analysis__HeadVar__2_2,
#line 68 "analysis.m"
  MR_Word analysis__HeadVar__3_3)
#line 68 "analysis.m"
{
#line 68 "analysis.m"
  {
#line 68 "analysis.m"
    MR_bool analysis__succeeded;
#line 68 "analysis.m"
    MR_Integer analysis__CastX_8 = (MR_Integer) analysis__HeadVar__2_2;
#line 68 "analysis.m"
    MR_Integer analysis__CastY_9 = (MR_Integer) analysis__HeadVar__3_3;

#line 68 "analysis.m"
    analysis__succeeded = (analysis__CastX_8 == analysis__CastY_9);
#line 68 "analysis.m"
    if (analysis__succeeded)
#line 68 "analysis.m"
      *analysis__HeadVar__1_1 = (MR_Integer) 0;
#line 68 "analysis.m"
    else
#line 68 "analysis.m"
      *analysis__HeadVar__1_1 = (MR_Integer) 0;
#line 68 "analysis.m"
  }
#line 68 "analysis.m"
}

#line 68 "analysis.m"
MR_bool MR_CALL 
analysis____Unify____analysis_type_0_0(
#line 68 "analysis.m"
  MR_Word analysis__HeadVar__1_1,
#line 68 "analysis.m"
  MR_Word analysis__HeadVar__2_2)
#line 68 "analysis.m"
{
#line 68 "analysis.m"
  {
#line 68 "analysis.m"
    MR_bool analysis__succeeded;
#line 68 "analysis.m"
    MR_Integer analysis__CastX_7 = (MR_Integer) analysis__HeadVar__1_1;
#line 68 "analysis.m"
    MR_Integer analysis__CastY_8 = (MR_Integer) analysis__HeadVar__2_2;

#line 68 "analysis.m"
    analysis__succeeded = (analysis__CastX_7 == analysis__CastY_8);
#line 68 "analysis.m"
    if (analysis__succeeded)
#line 68 "analysis.m"
      {
#line 68 "analysis.m"
      }
#line 68 "analysis.m"
    else
#line 68 "analysis.m"
      {
#line 68 "analysis.m"
      }
#line 68 "analysis.m"
    analysis__succeeded = MR_TRUE;
#line 68 "analysis.m"
    return analysis__succeeded;
#line 68 "analysis.m"
  }
#line 68 "analysis.m"
}

#line 159 "analysis.m"
void MR_CALL 
analysis____Compare____analysis_status_0_0(
#line 159 "analysis.m"
  MR_Word * analysis__HeadVar__1_1,
#line 159 "analysis.m"
  MR_Word analysis__HeadVar__2_2,
#line 159 "analysis.m"
  MR_Word analysis__HeadVar__3_3)
#line 159 "analysis.m"
{
#line 159 "analysis.m"
  {
#line 159 "analysis.m"
    MR_bool analysis__succeeded;
#line 159 "analysis.m"
    MR_Integer analysis__Cast_HeadVar1_4 = (MR_Integer) analysis__HeadVar__2_2;
#line 159 "analysis.m"
    MR_Integer analysis__Cast_HeadVar2_5 = (MR_Integer) analysis__HeadVar__3_3;

#line 159 "analysis.m"
    {
#line 159 "analysis.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(analysis__HeadVar__1_1, analysis__Cast_HeadVar1_4, analysis__Cast_HeadVar2_5);
#line 159 "analysis.m"
      return;
    }
#line 159 "analysis.m"
  }
#line 159 "analysis.m"
}

#line 159 "analysis.m"
MR_bool MR_CALL 
analysis____Unify____analysis_status_0_0(
#line 159 "analysis.m"
  MR_Word analysis__HeadVar__2_1,
#line 159 "analysis.m"
  MR_Word analysis__HeadVar__2_2)
#line 159 "analysis.m"
{
#line 7022 "analysis.c"
  {
#line 7024 "analysis.c"
    MR_bool analysis__succeeded = (analysis__HeadVar__2_1 == analysis__HeadVar__2_2);

#line 7027 "analysis.c"
    return analysis__succeeded;
#line 7029 "analysis.c"
  }
#line 159 "analysis.m"
}

#line 124 "analysis.m"
void MR_CALL 
analysis____Compare____analysis_result_2_0(
#line 124 "analysis.m"
  MR_Word analysis__TypeInfo_for_Call_14,
#line 124 "analysis.m"
  MR_Word analysis__TypeInfo_for_Answer_15,
#line 124 "analysis.m"
  MR_Word * analysis__HeadVar__1_1,
#line 124 "analysis.m"
  MR_Word analysis__HeadVar__2_2,
#line 124 "analysis.m"
  MR_Word analysis__HeadVar__3_3)
#line 124 "analysis.m"
{
#line 124 "analysis.m"
  {
#line 124 "analysis.m"
    MR_bool analysis__succeeded;
#line 124 "analysis.m"
    MR_Integer analysis__CastX_12 = (MR_Integer) analysis__HeadVar__2_2;
#line 124 "analysis.m"
    MR_Integer analysis__CastY_13 = (MR_Integer) analysis__HeadVar__3_3;

#line 124 "analysis.m"
    analysis__succeeded = (analysis__CastX_12 == analysis__CastY_13);
#line 124 "analysis.m"
    if (analysis__succeeded)
#line 7062 "analysis.c"
      *analysis__HeadVar__1_1 = (MR_Integer) 0;
#line 124 "analysis.m"
    else
#line 124 "analysis.m"
      {
#line 124 "analysis.m"
        MR_Box analysis__V_4_4 = (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 0));
#line 124 "analysis.m"
        MR_Box analysis__V_5_5 = (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 1));
#line 124 "analysis.m"
        MR_Word analysis__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 2)));
#line 124 "analysis.m"
        MR_Box analysis__V_7_7 = (MR_hl_field(MR_mktag(0), analysis__HeadVar__3_3, (MR_Integer) 0));
#line 124 "analysis.m"
        MR_Box analysis__V_8_8 = (MR_hl_field(MR_mktag(0), analysis__HeadVar__3_3, (MR_Integer) 1));
#line 124 "analysis.m"
        MR_Word analysis__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__3_3, (MR_Integer) 2)));
#line 124 "analysis.m"
        MR_Word analysis__V_10_10;

#line 124 "analysis.m"
        {
#line 124 "analysis.m"
          mercury__builtin__compare_3_p_0(analysis__TypeInfo_for_Call_14, &analysis__V_10_10, analysis__V_4_4, analysis__V_7_7);
        }
#line 7088 "analysis.c"
        analysis__succeeded = (analysis__V_10_10 == (MR_Integer) 0);
#line 124 "analysis.m"
        analysis__succeeded = !(analysis__succeeded);
#line 124 "analysis.m"
        if (analysis__succeeded)
#line 124 "analysis.m"
          *analysis__HeadVar__1_1 = analysis__V_10_10;
#line 124 "analysis.m"
        else
#line 124 "analysis.m"
          {
#line 124 "analysis.m"
            MR_Word analysis__V_11_11;

#line 124 "analysis.m"
            {
#line 124 "analysis.m"
              mercury__builtin__compare_3_p_0(analysis__TypeInfo_for_Answer_15, &analysis__V_11_11, analysis__V_5_5, analysis__V_8_8);
            }
#line 7108 "analysis.c"
            analysis__succeeded = (analysis__V_11_11 == (MR_Integer) 0);
#line 124 "analysis.m"
            analysis__succeeded = !(analysis__succeeded);
#line 124 "analysis.m"
            if (analysis__succeeded)
#line 124 "analysis.m"
              *analysis__HeadVar__1_1 = analysis__V_11_11;
#line 124 "analysis.m"
            else
#line 124 "analysis.m"
              {
#line 124 "analysis.m"
                MR_Integer analysis__V_17_17 = (MR_Integer) analysis__V_6_6;
#line 124 "analysis.m"
                MR_Integer analysis__V_18_18 = (MR_Integer) analysis__V_9_9;

#line 124 "analysis.m"
                {
#line 124 "analysis.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(analysis__HeadVar__1_1, analysis__V_17_17, analysis__V_18_18);
#line 124 "analysis.m"
                  return;
                }
#line 124 "analysis.m"
              }
#line 124 "analysis.m"
          }
#line 124 "analysis.m"
      }
#line 124 "analysis.m"
  }
#line 124 "analysis.m"
}

#line 124 "analysis.m"
MR_bool MR_CALL 
analysis____Unify____analysis_result_2_0(
#line 124 "analysis.m"
  MR_Word analysis__TypeInfo_for_Call_11,
#line 124 "analysis.m"
  MR_Word analysis__TypeInfo_for_Answer_12,
#line 124 "analysis.m"
  MR_Word analysis__HeadVar__1_1,
#line 124 "analysis.m"
  MR_Word analysis__HeadVar__2_2)
#line 124 "analysis.m"
{
#line 124 "analysis.m"
  {
#line 124 "analysis.m"
    MR_bool analysis__succeeded;
#line 124 "analysis.m"
    MR_Integer analysis__CastX_9 = (MR_Integer) analysis__HeadVar__1_1;
#line 124 "analysis.m"
    MR_Integer analysis__CastY_10 = (MR_Integer) analysis__HeadVar__2_2;

#line 124 "analysis.m"
    analysis__succeeded = (analysis__CastX_9 == analysis__CastY_10);
#line 124 "analysis.m"
    if (analysis__succeeded)
#line 124 "analysis.m"
      analysis__succeeded = MR_TRUE;
#line 124 "analysis.m"
    else
#line 124 "analysis.m"
      {
#line 124 "analysis.m"
        MR_Box analysis__V_3_3 = (MR_hl_field(MR_mktag(0), analysis__HeadVar__1_1, (MR_Integer) 0));
#line 124 "analysis.m"
        MR_Box analysis__V_4_4 = (MR_hl_field(MR_mktag(0), analysis__HeadVar__1_1, (MR_Integer) 1));
#line 124 "analysis.m"
        MR_Word analysis__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__1_1, (MR_Integer) 2)));
#line 124 "analysis.m"
        MR_Box analysis__V_6_6 = (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 0));
#line 124 "analysis.m"
        MR_Box analysis__V_7_7 = (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 1));
#line 124 "analysis.m"
        MR_Word analysis__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 2)));

#line 7188 "analysis.c"
        {
#line 7190 "analysis.c"
          analysis__succeeded = mercury__builtin__unify_2_p_0(analysis__TypeInfo_for_Call_11, analysis__V_3_3, analysis__V_6_6);
        }
#line 124 "analysis.m"
        if (analysis__succeeded)
#line 124 "analysis.m"
          {
#line 7197 "analysis.c"
            {
#line 7199 "analysis.c"
              analysis__succeeded = mercury__builtin__unify_2_p_0(analysis__TypeInfo_for_Answer_12, analysis__V_4_4, analysis__V_7_7);
            }
#line 124 "analysis.m"
            if (analysis__succeeded)
#line 7204 "analysis.c"
              analysis__succeeded = (analysis__V_5_5 == analysis__V_8_8);
#line 124 "analysis.m"
          }
#line 124 "analysis.m"
      }
#line 124 "analysis.m"
    return analysis__succeeded;
#line 124 "analysis.m"
  }
#line 124 "analysis.m"
}

#line 408 "analysis.m"
void MR_CALL 
analysis____Compare____analysis_request_0_0(
#line 408 "analysis.m"
  MR_Word * analysis__HeadVar__1_1,
#line 408 "analysis.m"
  MR_Word analysis__HeadVar__2_2,
#line 408 "analysis.m"
  MR_Word analysis__HeadVar__3_3)
#line 408 "analysis.m"
{
#line 408 "analysis.m"
  {
#line 408 "analysis.m"
    MR_bool analysis__succeeded;
#line 408 "analysis.m"
    MR_Integer analysis__CastX_9 = (MR_Integer) analysis__HeadVar__2_2;
#line 408 "analysis.m"
    MR_Integer analysis__CastY_10 = (MR_Integer) analysis__HeadVar__3_3;

#line 408 "analysis.m"
    analysis__succeeded = (analysis__CastX_9 == analysis__CastY_10);
#line 408 "analysis.m"
    if (analysis__succeeded)
#line 408 "analysis.m"
      *analysis__HeadVar__1_1 = (MR_Integer) 0;
#line 408 "analysis.m"
    else
#line 408 "analysis.m"
      {
#line 408 "analysis.m"
        MR_Word analysis__TypeClassInfo_for_call_pattern_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 0)));
#line 408 "analysis.m"
        MR_Word analysis__TypeClassInfo_for_call_pattern_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__3_3, (MR_Integer) 0)));
#line 408 "analysis.m"
        MR_Box analysis__V_4_4 = (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 1));
#line 408 "analysis.m"
        MR_Word analysis__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 2)));
#line 408 "analysis.m"
        MR_Box analysis__V_6_6 = (MR_hl_field(MR_mktag(0), analysis__HeadVar__3_3, (MR_Integer) 1));
#line 408 "analysis.m"
        MR_Word analysis__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__3_3, (MR_Integer) 2)));
#line 408 "analysis.m"
        MR_Word analysis__V_8_8;
#line 408 "analysis.m"
        MR_Word analysis__TypeInfo_14_14;
#line 408 "analysis.m"
        MR_Word analysis__TypeInfo_15_15;

#line 7266 "analysis.c"
        {
#line 7268 "analysis.c"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_call_pattern_11, (MR_Integer) 4, &analysis__TypeInfo_14_14);
        }
#line 7271 "analysis.c"
        {
#line 7273 "analysis.c"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_call_pattern_12, (MR_Integer) 4, &analysis__TypeInfo_15_15);
        }
#line 408 "analysis.m"
        {
#line 408 "analysis.m"
          mercury__private_builtin__typed_compare_3_p_0(analysis__TypeInfo_14_14, analysis__TypeInfo_15_15, &analysis__V_8_8, analysis__V_4_4, analysis__V_6_6);
        }
#line 408 "analysis.m"
        analysis__succeeded = (analysis__V_8_8 == (MR_Integer) 0);
#line 408 "analysis.m"
        analysis__succeeded = !(analysis__succeeded);
#line 408 "analysis.m"
        if (analysis__succeeded)
#line 408 "analysis.m"
          *analysis__HeadVar__1_1 = analysis__V_8_8;
#line 408 "analysis.m"
        else
#line 408 "analysis.m"
          {
#line 408 "analysis.m"
            mdbcomp__prim_data____Compare____sym_name_0_0(analysis__HeadVar__1_1, analysis__V_5_5, analysis__V_7_7);
#line 408 "analysis.m"
            return;
          }
#line 408 "analysis.m"
      }
#line 408 "analysis.m"
  }
#line 408 "analysis.m"
}

#line 408 "analysis.m"
MR_bool MR_CALL 
analysis____Unify____analysis_request_0_0(
#line 408 "analysis.m"
  MR_Word analysis__HeadVar__1_1,
#line 408 "analysis.m"
  MR_Word analysis__HeadVar__2_2)
#line 408 "analysis.m"
{
#line 408 "analysis.m"
  {
#line 408 "analysis.m"
    MR_bool analysis__succeeded;
#line 408 "analysis.m"
    MR_Integer analysis__CastX_7 = (MR_Integer) analysis__HeadVar__1_1;
#line 408 "analysis.m"
    MR_Integer analysis__CastY_8 = (MR_Integer) analysis__HeadVar__2_2;

#line 408 "analysis.m"
    analysis__succeeded = (analysis__CastX_7 == analysis__CastY_8);
#line 408 "analysis.m"
    if (analysis__succeeded)
#line 408 "analysis.m"
      analysis__succeeded = MR_TRUE;
#line 408 "analysis.m"
    else
#line 408 "analysis.m"
      {
#line 408 "analysis.m"
        MR_Word analysis__TypeClassInfo_for_call_pattern_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__1_1, (MR_Integer) 0)));
#line 408 "analysis.m"
        MR_Word analysis__TypeClassInfo_for_call_pattern_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 0)));
#line 408 "analysis.m"
        MR_Word analysis__TypeInfo_12_12;
#line 408 "analysis.m"
        MR_Word analysis__TypeInfo_13_13;
#line 408 "analysis.m"
        MR_Box analysis__V_3_3 = (MR_hl_field(MR_mktag(0), analysis__HeadVar__1_1, (MR_Integer) 1));
#line 408 "analysis.m"
        MR_Word analysis__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__1_1, (MR_Integer) 2)));
#line 408 "analysis.m"
        MR_Box analysis__V_5_5 = (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 1));
#line 408 "analysis.m"
        MR_Word analysis__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 2)));

#line 7350 "analysis.c"
        {
#line 7352 "analysis.c"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_call_pattern_9, (MR_Integer) 4, &analysis__TypeInfo_12_12);
        }
#line 7355 "analysis.c"
        {
#line 7357 "analysis.c"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_call_pattern_10, (MR_Integer) 4, &analysis__TypeInfo_13_13);
        }
#line 408 "analysis.m"
        {
#line 408 "analysis.m"
          analysis__succeeded = mercury__private_builtin__typed_unify_2_p_0(analysis__TypeInfo_12_12, analysis__TypeInfo_13_13, analysis__V_3_3, analysis__V_5_5);
        }
#line 408 "analysis.m"
        if (analysis__succeeded)
#line 408 "analysis.m"
          {
#line 408 "analysis.m"
            return analysis__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(analysis__V_4_4, analysis__V_6_6);
          }
#line 408 "analysis.m"
      }
#line 408 "analysis.m"
    return analysis__succeeded;
#line 408 "analysis.m"
  }
#line 408 "analysis.m"
}

#line 66 "analysis.m"
void MR_CALL 
analysis____Compare____analysis_name_0_0(
#line 66 "analysis.m"
  MR_Word * analysis__HeadVar__1_1,
#line 66 "analysis.m"
  MR_String analysis__HeadVar__2_2,
#line 66 "analysis.m"
  MR_String analysis__HeadVar__3_3)
#line 66 "analysis.m"
{
#line 66 "analysis.m"
  {
#line 66 "analysis.m"
    MR_bool analysis__succeeded;
#line 66 "analysis.m"
    MR_String analysis__Cast_HeadVar1_4 = analysis__HeadVar__2_2;
#line 66 "analysis.m"
    MR_String analysis__Cast_HeadVar2_5 = analysis__HeadVar__3_3;

#line 66 "analysis.m"
    {
#line 66 "analysis.m"
      mercury__private_builtin__builtin_compare_string_3_p_0(analysis__HeadVar__1_1, analysis__Cast_HeadVar1_4, analysis__Cast_HeadVar2_5);
#line 66 "analysis.m"
      return;
    }
#line 66 "analysis.m"
  }
#line 66 "analysis.m"
}

#line 66 "analysis.m"
MR_bool MR_CALL 
analysis____Unify____analysis_name_0_0(
#line 66 "analysis.m"
  MR_String analysis__HeadVar__1_1,
#line 66 "analysis.m"
  MR_String analysis__HeadVar__2_2)
#line 66 "analysis.m"
{
#line 66 "analysis.m"
  {
#line 66 "analysis.m"
    MR_bool analysis__succeeded;
#line 66 "analysis.m"
    MR_String analysis__Cast_HeadVar1_3 = analysis__HeadVar__1_1;
#line 66 "analysis.m"
    MR_String analysis__Cast_HeadVar2_4 = analysis__HeadVar__2_2;

#line 66 "analysis.m"
    analysis__succeeded = (strcmp(analysis__Cast_HeadVar1_3, analysis__Cast_HeadVar2_4) == 0);
#line 66 "analysis.m"
    return analysis__succeeded;
#line 66 "analysis.m"
  }
#line 66 "analysis.m"
}

#line 427 "analysis.m"
void MR_CALL 
analysis____Compare____analysis_map_1_0(
#line 427 "analysis.m"
  MR_Word analysis__TypeInfo_for_T_6,
#line 427 "analysis.m"
  MR_Word * analysis__HeadVar__1_1,
#line 427 "analysis.m"
  MR_Word analysis__HeadVar__2_2,
#line 427 "analysis.m"
  MR_Word analysis__HeadVar__3_3)
#line 427 "analysis.m"
{
#line 427 "analysis.m"
  {
#line 427 "analysis.m"
    MR_bool analysis__succeeded;
#line 427 "analysis.m"
    MR_Word analysis__TypeInfo_11_11;
#line 427 "analysis.m"
    MR_Word analysis__TypeCtorInfo_12_12 = (MR_Word) &mercury__tree234__tree234__type_ctor_info_tree234_2;
#line 427 "analysis.m"
    MR_Word analysis__TypeInfo_13_13;
#line 427 "analysis.m"
    MR_Word analysis__TypeInfo_14_14;
#line 427 "analysis.m"
    MR_Word analysis__Cast_HeadVar1_4 = analysis__HeadVar__2_2;
#line 427 "analysis.m"
    MR_Word analysis__Cast_HeadVar2_5 = analysis__HeadVar__3_3;

#line 7470 "analysis.c"
    {
#line 7472 "analysis.c"
      analysis__TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7474 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_11_11, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
#line 7476 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_11_11, 1) = ((MR_Box) (analysis__TypeInfo_for_T_6));
#line 7478 "analysis.c"
    }
#line 7480 "analysis.c"
    {
#line 7482 "analysis.c"
      analysis__TypeInfo_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 7484 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_13_13, 0) = ((MR_Box) (analysis__TypeCtorInfo_12_12));
#line 7486 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_13_13, 1) = ((MR_Box) (&analysis__analysis__type_ctor_info_func_id_0));
#line 7488 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_13_13, 2) = ((MR_Box) (analysis__TypeInfo_11_11));
#line 7490 "analysis.c"
    }
#line 7492 "analysis.c"
    {
#line 7494 "analysis.c"
      analysis__TypeInfo_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 7496 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_14_14, 0) = ((MR_Box) (analysis__TypeCtorInfo_12_12));
#line 7498 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_14_14, 1) = ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0));
#line 7500 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_14_14, 2) = ((MR_Box) (analysis__TypeInfo_13_13));
#line 7502 "analysis.c"
    }
#line 427 "analysis.m"
    {
#line 427 "analysis.m"
      mercury__tree234____Compare____tree234_2_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0, analysis__TypeInfo_14_14, analysis__HeadVar__1_1, analysis__Cast_HeadVar1_4, analysis__Cast_HeadVar2_5);
#line 427 "analysis.m"
      return;
    }
#line 427 "analysis.m"
  }
#line 427 "analysis.m"
}

#line 427 "analysis.m"
MR_bool MR_CALL 
analysis____Unify____analysis_map_1_0(
#line 427 "analysis.m"
  MR_Word analysis__TypeInfo_for_T_5,
#line 427 "analysis.m"
  MR_Word analysis__HeadVar__1_1,
#line 427 "analysis.m"
  MR_Word analysis__HeadVar__2_2)
#line 427 "analysis.m"
{
#line 427 "analysis.m"
  {
#line 427 "analysis.m"
    MR_bool analysis__succeeded;
#line 427 "analysis.m"
    MR_Word analysis__TypeInfo_10_10;
#line 427 "analysis.m"
    MR_Word analysis__TypeCtorInfo_11_11 = (MR_Word) &mercury__tree234__tree234__type_ctor_info_tree234_2;
#line 427 "analysis.m"
    MR_Word analysis__TypeInfo_12_12;
#line 427 "analysis.m"
    MR_Word analysis__TypeInfo_13_13;
#line 427 "analysis.m"
    MR_Word analysis__Cast_HeadVar1_3 = analysis__HeadVar__1_1;
#line 427 "analysis.m"
    MR_Word analysis__Cast_HeadVar2_4 = analysis__HeadVar__2_2;

#line 7544 "analysis.c"
    {
#line 7546 "analysis.c"
      analysis__TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7548 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_10_10, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
#line 7550 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_10_10, 1) = ((MR_Box) (analysis__TypeInfo_for_T_5));
#line 7552 "analysis.c"
    }
#line 7554 "analysis.c"
    {
#line 7556 "analysis.c"
      analysis__TypeInfo_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 7558 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_12_12, 0) = ((MR_Box) (analysis__TypeCtorInfo_11_11));
#line 7560 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_12_12, 1) = ((MR_Box) (&analysis__analysis__type_ctor_info_func_id_0));
#line 7562 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_12_12, 2) = ((MR_Box) (analysis__TypeInfo_10_10));
#line 7564 "analysis.c"
    }
#line 7566 "analysis.c"
    {
#line 7568 "analysis.c"
      analysis__TypeInfo_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 7570 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_13_13, 0) = ((MR_Box) (analysis__TypeCtorInfo_11_11));
#line 7572 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_13_13, 1) = ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0));
#line 7574 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_13_13, 2) = ((MR_Box) (analysis__TypeInfo_12_12));
#line 7576 "analysis.c"
    }
#line 427 "analysis.m"
    {
#line 427 "analysis.m"
      return analysis__succeeded = mercury__tree234____Unify____tree234_2_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0, analysis__TypeInfo_13_13, analysis__Cast_HeadVar1_3, analysis__Cast_HeadVar2_4);
    }
#line 427 "analysis.m"
    return analysis__succeeded;
#line 427 "analysis.m"
  }
#line 427 "analysis.m"
}

#line 333 "analysis.m"
void MR_CALL 
analysis____Compare____analysis_info_0_0(
#line 333 "analysis.m"
  MR_Word * analysis__HeadVar__1_1,
#line 333 "analysis.m"
  MR_Word analysis__HeadVar__2_2,
#line 333 "analysis.m"
  MR_Word analysis__HeadVar__3_3)
#line 333 "analysis.m"
{
#line 333 "analysis.m"
  {
#line 333 "analysis.m"
    MR_bool analysis__succeeded;
#line 333 "analysis.m"
    MR_Integer analysis__CastX_33 = (MR_Integer) analysis__HeadVar__2_2;
#line 333 "analysis.m"
    MR_Integer analysis__CastY_34 = (MR_Integer) analysis__HeadVar__3_3;

#line 333 "analysis.m"
    analysis__succeeded = (analysis__CastX_33 == analysis__CastY_34);
#line 333 "analysis.m"
    if (analysis__succeeded)
#line 333 "analysis.m"
      *analysis__HeadVar__1_1 = (MR_Integer) 0;
#line 333 "analysis.m"
    else
#line 333 "analysis.m"
      {
#line 333 "analysis.m"
        MR_Word analysis__TypeClassInfo_for_compiler_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 0)));
#line 333 "analysis.m"
        MR_Word analysis__TypeClassInfo_for_compiler_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__3_3, (MR_Integer) 0)));
#line 333 "analysis.m"
        MR_Box analysis__V_4_4 = (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 1));
#line 333 "analysis.m"
        MR_Word analysis__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 2)));
#line 333 "analysis.m"
        MR_Word analysis__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 3)));
#line 333 "analysis.m"
        MR_Word analysis__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 4)));
#line 333 "analysis.m"
        MR_Word analysis__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 5)));
#line 333 "analysis.m"
        MR_Word analysis__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 6)));
#line 333 "analysis.m"
        MR_Word analysis__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 7)));
#line 333 "analysis.m"
        MR_Word analysis__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 8)));
#line 333 "analysis.m"
        MR_Word analysis__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 9)));
#line 333 "analysis.m"
        MR_Word analysis__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 10)));
#line 333 "analysis.m"
        MR_Box analysis__V_14_14 = (MR_hl_field(MR_mktag(0), analysis__HeadVar__3_3, (MR_Integer) 1));
#line 333 "analysis.m"
        MR_Word analysis__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__3_3, (MR_Integer) 2)));
#line 333 "analysis.m"
        MR_Word analysis__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__3_3, (MR_Integer) 3)));
#line 333 "analysis.m"
        MR_Word analysis__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__3_3, (MR_Integer) 4)));
#line 333 "analysis.m"
        MR_Word analysis__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__3_3, (MR_Integer) 5)));
#line 333 "analysis.m"
        MR_Word analysis__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__3_3, (MR_Integer) 6)));
#line 333 "analysis.m"
        MR_Word analysis__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__3_3, (MR_Integer) 7)));
#line 333 "analysis.m"
        MR_Word analysis__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__3_3, (MR_Integer) 8)));
#line 333 "analysis.m"
        MR_Word analysis__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__3_3, (MR_Integer) 9)));
#line 333 "analysis.m"
        MR_Word analysis__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__3_3, (MR_Integer) 10)));
#line 333 "analysis.m"
        MR_Word analysis__V_24_24;
#line 333 "analysis.m"
        MR_Word analysis__TypeInfo_38_38;
#line 333 "analysis.m"
        MR_Word analysis__TypeInfo_39_39;

#line 7671 "analysis.c"
        {
#line 7673 "analysis.c"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_compiler_35, (MR_Integer) 1, &analysis__TypeInfo_38_38);
        }
#line 7676 "analysis.c"
        {
#line 7678 "analysis.c"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_compiler_36, (MR_Integer) 1, &analysis__TypeInfo_39_39);
        }
#line 333 "analysis.m"
        {
#line 333 "analysis.m"
          mercury__private_builtin__typed_compare_3_p_0(analysis__TypeInfo_38_38, analysis__TypeInfo_39_39, &analysis__V_24_24, analysis__V_4_4, analysis__V_14_14);
        }
#line 333 "analysis.m"
        analysis__succeeded = (analysis__V_24_24 == (MR_Integer) 0);
#line 333 "analysis.m"
        analysis__succeeded = !(analysis__succeeded);
#line 333 "analysis.m"
        if (analysis__succeeded)
#line 333 "analysis.m"
          *analysis__HeadVar__1_1 = analysis__V_24_24;
#line 333 "analysis.m"
        else
#line 333 "analysis.m"
          {
#line 333 "analysis.m"
            MR_Word analysis__V_25_25;

#line 333 "analysis.m"
            {
#line 333 "analysis.m"
              mdbcomp__prim_data____Compare____sym_name_0_0(&analysis__V_25_25, analysis__V_5_5, analysis__V_15_15);
            }
#line 333 "analysis.m"
            analysis__succeeded = (analysis__V_25_25 == (MR_Integer) 0);
#line 333 "analysis.m"
            analysis__succeeded = !(analysis__succeeded);
#line 333 "analysis.m"
            if (analysis__succeeded)
#line 333 "analysis.m"
              *analysis__HeadVar__1_1 = analysis__V_25_25;
#line 333 "analysis.m"
            else
#line 333 "analysis.m"
              {
#line 333 "analysis.m"
                MR_Word analysis__V_26_26;
#line 333 "analysis.m"
                MR_Integer analysis__V_49_49 = (MR_Integer) analysis__V_6_6;
#line 333 "analysis.m"
                MR_Integer analysis__V_50_50 = (MR_Integer) analysis__V_16_16;

#line 333 "analysis.m"
                {
#line 333 "analysis.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(&analysis__V_26_26, analysis__V_49_49, analysis__V_50_50);
                }
#line 333 "analysis.m"
                analysis__succeeded = (analysis__V_26_26 == (MR_Integer) 0);
#line 333 "analysis.m"
                analysis__succeeded = !(analysis__succeeded);
#line 333 "analysis.m"
                if (analysis__succeeded)
#line 333 "analysis.m"
                  *analysis__HeadVar__1_1 = analysis__V_26_26;
#line 333 "analysis.m"
                else
#line 333 "analysis.m"
                  {
#line 333 "analysis.m"
                    MR_Word analysis__V_27_27;

#line 333 "analysis.m"
                    {
#line 333 "analysis.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &analysis_scalar_common_1[3], &analysis__V_27_27, ((MR_Box) (analysis__V_7_7)), ((MR_Box) (analysis__V_17_17)));
                    }
#line 333 "analysis.m"
                    analysis__succeeded = (analysis__V_27_27 == (MR_Integer) 0);
#line 333 "analysis.m"
                    analysis__succeeded = !(analysis__succeeded);
#line 333 "analysis.m"
                    if (analysis__succeeded)
#line 333 "analysis.m"
                      *analysis__HeadVar__1_1 = analysis__V_27_27;
#line 333 "analysis.m"
                    else
#line 333 "analysis.m"
                      {
#line 333 "analysis.m"
                        MR_Word analysis__V_28_28;

#line 333 "analysis.m"
                        {
#line 333 "analysis.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &analysis_scalar_common_2[6], &analysis__V_28_28, ((MR_Box) (analysis__V_8_8)), ((MR_Box) (analysis__V_18_18)));
                        }
#line 333 "analysis.m"
                        analysis__succeeded = (analysis__V_28_28 == (MR_Integer) 0);
#line 333 "analysis.m"
                        analysis__succeeded = !(analysis__succeeded);
#line 333 "analysis.m"
                        if (analysis__succeeded)
#line 333 "analysis.m"
                          *analysis__HeadVar__1_1 = analysis__V_28_28;
#line 333 "analysis.m"
                        else
#line 333 "analysis.m"
                          {
#line 333 "analysis.m"
                            MR_Word analysis__V_29_29;

#line 333 "analysis.m"
                            {
#line 333 "analysis.m"
                              mercury__builtin__compare_3_p_0((MR_Word) &analysis_scalar_common_2[7], &analysis__V_29_29, ((MR_Box) (analysis__V_9_9)), ((MR_Box) (analysis__V_19_19)));
                            }
#line 333 "analysis.m"
                            analysis__succeeded = (analysis__V_29_29 == (MR_Integer) 0);
#line 333 "analysis.m"
                            analysis__succeeded = !(analysis__succeeded);
#line 333 "analysis.m"
                            if (analysis__succeeded)
#line 333 "analysis.m"
                              *analysis__HeadVar__1_1 = analysis__V_29_29;
#line 333 "analysis.m"
                            else
#line 333 "analysis.m"
                              {
#line 333 "analysis.m"
                                MR_Word analysis__V_30_30;

#line 333 "analysis.m"
                                {
#line 333 "analysis.m"
                                  mercury__builtin__compare_3_p_0((MR_Word) &analysis_scalar_common_2[8], &analysis__V_30_30, ((MR_Box) (analysis__V_10_10)), ((MR_Box) (analysis__V_20_20)));
                                }
#line 333 "analysis.m"
                                analysis__succeeded = (analysis__V_30_30 == (MR_Integer) 0);
#line 333 "analysis.m"
                                analysis__succeeded = !(analysis__succeeded);
#line 333 "analysis.m"
                                if (analysis__succeeded)
#line 333 "analysis.m"
                                  *analysis__HeadVar__1_1 = analysis__V_30_30;
#line 333 "analysis.m"
                                else
#line 333 "analysis.m"
                                  {
#line 333 "analysis.m"
                                    MR_Word analysis__V_31_31;

#line 333 "analysis.m"
                                    {
#line 333 "analysis.m"
                                      mercury__builtin__compare_3_p_0((MR_Word) &analysis_scalar_common_2[3], &analysis__V_31_31, ((MR_Box) (analysis__V_11_11)), ((MR_Box) (analysis__V_21_21)));
                                    }
#line 333 "analysis.m"
                                    analysis__succeeded = (analysis__V_31_31 == (MR_Integer) 0);
#line 333 "analysis.m"
                                    analysis__succeeded = !(analysis__succeeded);
#line 333 "analysis.m"
                                    if (analysis__succeeded)
#line 333 "analysis.m"
                                      *analysis__HeadVar__1_1 = analysis__V_31_31;
#line 333 "analysis.m"
                                    else
#line 333 "analysis.m"
                                      {
#line 333 "analysis.m"
                                        MR_Word analysis__V_32_32;

#line 333 "analysis.m"
                                        {
#line 333 "analysis.m"
                                          mercury__builtin__compare_3_p_0((MR_Word) &analysis_scalar_common_2[9], &analysis__V_32_32, ((MR_Box) (analysis__V_12_12)), ((MR_Box) (analysis__V_22_22)));
                                        }
#line 333 "analysis.m"
                                        analysis__succeeded = (analysis__V_32_32 == (MR_Integer) 0);
#line 333 "analysis.m"
                                        analysis__succeeded = !(analysis__succeeded);
#line 333 "analysis.m"
                                        if (analysis__succeeded)
#line 333 "analysis.m"
                                          *analysis__HeadVar__1_1 = analysis__V_32_32;
#line 333 "analysis.m"
                                        else
#line 333 "analysis.m"
                                          {
#line 333 "analysis.m"
                                            {
#line 333 "analysis.m"
                                              mercury__builtin__compare_3_p_0((MR_Word) &analysis_scalar_common_2[9], analysis__HeadVar__1_1, ((MR_Box) (analysis__V_13_13)), ((MR_Box) (analysis__V_23_23)));
#line 333 "analysis.m"
                                              return;
                                            }
#line 333 "analysis.m"
                                          }
#line 333 "analysis.m"
                                      }
#line 333 "analysis.m"
                                  }
#line 333 "analysis.m"
                              }
#line 333 "analysis.m"
                          }
#line 333 "analysis.m"
                      }
#line 333 "analysis.m"
                  }
#line 333 "analysis.m"
              }
#line 333 "analysis.m"
          }
#line 333 "analysis.m"
      }
#line 333 "analysis.m"
  }
#line 333 "analysis.m"
}

#line 333 "analysis.m"
MR_bool MR_CALL 
analysis____Unify____analysis_info_0_0(
#line 333 "analysis.m"
  MR_Word analysis__HeadVar__1_1,
#line 333 "analysis.m"
  MR_Word analysis__HeadVar__2_2)
#line 333 "analysis.m"
{
#line 333 "analysis.m"
  {
#line 333 "analysis.m"
    MR_bool analysis__succeeded;
#line 333 "analysis.m"
    MR_Integer analysis__CastX_23 = (MR_Integer) analysis__HeadVar__1_1;
#line 333 "analysis.m"
    MR_Integer analysis__CastY_24 = (MR_Integer) analysis__HeadVar__2_2;

#line 333 "analysis.m"
    analysis__succeeded = (analysis__CastX_23 == analysis__CastY_24);
#line 333 "analysis.m"
    if (analysis__succeeded)
#line 333 "analysis.m"
      analysis__succeeded = MR_TRUE;
#line 333 "analysis.m"
    else
#line 333 "analysis.m"
      {
#line 333 "analysis.m"
        MR_Word analysis__TypeClassInfo_for_compiler_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__1_1, (MR_Integer) 0)));
#line 333 "analysis.m"
        MR_Word analysis__TypeClassInfo_for_compiler_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 0)));
#line 333 "analysis.m"
        MR_Word analysis__TypeInfo_28_28;
#line 333 "analysis.m"
        MR_Word analysis__TypeInfo_29_29;
#line 333 "analysis.m"
        MR_Word analysis__TypeInfo_31_31;
#line 333 "analysis.m"
        MR_Word analysis__TypeInfo_32_32;
#line 333 "analysis.m"
        MR_Word analysis__TypeInfo_33_33;
#line 333 "analysis.m"
        MR_Word analysis__TypeInfo_34_34;
#line 333 "analysis.m"
        MR_Word analysis__TypeInfo_35_35;
#line 333 "analysis.m"
        MR_Word analysis__TypeInfo_36_36;
#line 333 "analysis.m"
        MR_Word analysis__TypeInfo_37_37;
#line 333 "analysis.m"
        MR_Box analysis__V_3_3 = (MR_hl_field(MR_mktag(0), analysis__HeadVar__1_1, (MR_Integer) 1));
#line 333 "analysis.m"
        MR_Word analysis__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__1_1, (MR_Integer) 2)));
#line 333 "analysis.m"
        MR_Word analysis__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__1_1, (MR_Integer) 3)));
#line 333 "analysis.m"
        MR_Word analysis__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__1_1, (MR_Integer) 4)));
#line 333 "analysis.m"
        MR_Word analysis__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__1_1, (MR_Integer) 5)));
#line 333 "analysis.m"
        MR_Word analysis__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__1_1, (MR_Integer) 6)));
#line 333 "analysis.m"
        MR_Word analysis__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__1_1, (MR_Integer) 7)));
#line 333 "analysis.m"
        MR_Word analysis__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__1_1, (MR_Integer) 8)));
#line 333 "analysis.m"
        MR_Word analysis__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__1_1, (MR_Integer) 9)));
#line 333 "analysis.m"
        MR_Word analysis__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__1_1, (MR_Integer) 10)));
#line 333 "analysis.m"
        MR_Box analysis__V_13_13 = (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 1));
#line 333 "analysis.m"
        MR_Word analysis__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 2)));
#line 333 "analysis.m"
        MR_Word analysis__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 3)));
#line 333 "analysis.m"
        MR_Word analysis__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 4)));
#line 333 "analysis.m"
        MR_Word analysis__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 5)));
#line 333 "analysis.m"
        MR_Word analysis__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 6)));
#line 333 "analysis.m"
        MR_Word analysis__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 7)));
#line 333 "analysis.m"
        MR_Word analysis__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 8)));
#line 333 "analysis.m"
        MR_Word analysis__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 9)));
#line 333 "analysis.m"
        MR_Word analysis__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 10)));

#line 7985 "analysis.c"
        {
#line 7987 "analysis.c"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_compiler_25, (MR_Integer) 1, &analysis__TypeInfo_28_28);
        }
#line 7990 "analysis.c"
        {
#line 7992 "analysis.c"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_compiler_26, (MR_Integer) 1, &analysis__TypeInfo_29_29);
        }
#line 333 "analysis.m"
        {
#line 333 "analysis.m"
          analysis__succeeded = mercury__private_builtin__typed_unify_2_p_0(analysis__TypeInfo_28_28, analysis__TypeInfo_29_29, analysis__V_3_3, analysis__V_13_13);
        }
#line 333 "analysis.m"
        if (analysis__succeeded)
#line 333 "analysis.m"
          {
#line 333 "analysis.m"
            {
#line 333 "analysis.m"
              analysis__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(analysis__V_4_4, analysis__V_14_14);
            }
#line 333 "analysis.m"
            if (analysis__succeeded)
#line 333 "analysis.m"
              {
#line 333 "analysis.m"
                analysis__succeeded = (analysis__V_5_5 == analysis__V_15_15);
#line 333 "analysis.m"
                if (analysis__succeeded)
#line 333 "analysis.m"
                  {
#line 8019 "analysis.c"
                    analysis__TypeInfo_31_31 = (MR_Word) &analysis_scalar_common_1[3];
#line 333 "analysis.m"
                    {
#line 333 "analysis.m"
                      analysis__succeeded = mercury__builtin__unify_2_p_0(analysis__TypeInfo_31_31, ((MR_Box) (analysis__V_6_6)), ((MR_Box) (analysis__V_16_16)));
                    }
#line 333 "analysis.m"
                    if (analysis__succeeded)
#line 333 "analysis.m"
                      {
#line 8030 "analysis.c"
                        analysis__TypeInfo_32_32 = (MR_Word) &analysis_scalar_common_2[6];
#line 333 "analysis.m"
                        {
#line 333 "analysis.m"
                          analysis__succeeded = mercury__builtin__unify_2_p_0(analysis__TypeInfo_32_32, ((MR_Box) (analysis__V_7_7)), ((MR_Box) (analysis__V_17_17)));
                        }
#line 333 "analysis.m"
                        if (analysis__succeeded)
#line 333 "analysis.m"
                          {
#line 8041 "analysis.c"
                            analysis__TypeInfo_33_33 = (MR_Word) &analysis_scalar_common_2[7];
#line 333 "analysis.m"
                            {
#line 333 "analysis.m"
                              analysis__succeeded = mercury__builtin__unify_2_p_0(analysis__TypeInfo_33_33, ((MR_Box) (analysis__V_8_8)), ((MR_Box) (analysis__V_18_18)));
                            }
#line 333 "analysis.m"
                            if (analysis__succeeded)
#line 333 "analysis.m"
                              {
#line 8052 "analysis.c"
                                analysis__TypeInfo_34_34 = (MR_Word) &analysis_scalar_common_2[8];
#line 333 "analysis.m"
                                {
#line 333 "analysis.m"
                                  analysis__succeeded = mercury__builtin__unify_2_p_0(analysis__TypeInfo_34_34, ((MR_Box) (analysis__V_9_9)), ((MR_Box) (analysis__V_19_19)));
                                }
#line 333 "analysis.m"
                                if (analysis__succeeded)
#line 333 "analysis.m"
                                  {
#line 8063 "analysis.c"
                                    analysis__TypeInfo_35_35 = (MR_Word) &analysis_scalar_common_2[3];
#line 333 "analysis.m"
                                    {
#line 333 "analysis.m"
                                      analysis__succeeded = mercury__builtin__unify_2_p_0(analysis__TypeInfo_35_35, ((MR_Box) (analysis__V_10_10)), ((MR_Box) (analysis__V_20_20)));
                                    }
#line 333 "analysis.m"
                                    if (analysis__succeeded)
#line 333 "analysis.m"
                                      {
#line 8074 "analysis.c"
                                        analysis__TypeInfo_36_36 = (MR_Word) &analysis_scalar_common_2[9];
#line 333 "analysis.m"
                                        {
#line 333 "analysis.m"
                                          analysis__succeeded = mercury__builtin__unify_2_p_0(analysis__TypeInfo_36_36, ((MR_Box) (analysis__V_11_11)), ((MR_Box) (analysis__V_21_21)));
                                        }
#line 333 "analysis.m"
                                        if (analysis__succeeded)
#line 333 "analysis.m"
                                          {
#line 8085 "analysis.c"
                                            analysis__TypeInfo_37_37 = (MR_Word) &analysis_scalar_common_2[9];
#line 333 "analysis.m"
                                            {
#line 333 "analysis.m"
                                              return analysis__succeeded = mercury__builtin__unify_2_p_0(analysis__TypeInfo_37_37, ((MR_Box) (analysis__V_12_12)), ((MR_Box) (analysis__V_22_22)));
                                            }
#line 333 "analysis.m"
                                          }
#line 333 "analysis.m"
                                      }
#line 333 "analysis.m"
                                  }
#line 333 "analysis.m"
                              }
#line 333 "analysis.m"
                          }
#line 333 "analysis.m"
                      }
#line 333 "analysis.m"
                  }
#line 333 "analysis.m"
              }
#line 333 "analysis.m"
          }
#line 333 "analysis.m"
      }
#line 333 "analysis.m"
    return analysis__succeeded;
#line 333 "analysis.m"
  }
#line 333 "analysis.m"
}

#line 1386 "analysis.m"
void MR_CALL 
analysis__debug_msg_3_p_0(
#line 1386 "analysis.m"
  MR_Word analysis__P_4)
#line 1386 "analysis.m"
{
#line 1389 "analysis.m"
  {
#line 1389 "analysis.m"
    MR_bool analysis__succeeded;
#line 1389 "analysis.m"
    MR_Word analysis__Debug_6;

#line 1381 "analysis.m"
{
#define MR_PROC_LABEL analysis__debug_msg_3_p_0


		{
#line 1381 "analysis.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&analysis__mutable_variable_debug_analysis_lock,
                "analysis__mutable_variable_debug_analysis_lock");
#endif

#line 8145 "analysis.c"

		;}
#undef MR_PROC_LABEL
#line 1381 "analysis.m"
}
#line 1381 "analysis.m"
{
#define MR_PROC_LABEL analysis__debug_msg_3_p_0

	MR_Word X;

		{
#line 1381 "analysis.m"
X = analysis__mutable_variable_debug_analysis;

#line 8161 "analysis.c"

		;}
#undef MR_PROC_LABEL
	 analysis__Debug_6  = X;
#line 1381 "analysis.m"
}
#line 1381 "analysis.m"
{
#define MR_PROC_LABEL analysis__debug_msg_3_p_0


		{
#line 1381 "analysis.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&analysis__mutable_variable_debug_analysis_lock,
                "analysis__mutable_variable_debug_analysis_lock");
#endif

#line 8180 "analysis.c"

		;}
#undef MR_PROC_LABEL
#line 1381 "analysis.m"
}
#line 1394 "analysis.m"
    if ((analysis__Debug_6 == (MR_Integer) 0))
#line 1395 "analysis.m"
      {
#line 1395 "analysis.m"
      }
#line 1394 "analysis.m"
    else
#line 1393 "analysis.m"
      {
#line 1393 "analysis.m"
        void MR_CALL (* analysis__func_0)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), analysis__P_4, (MR_Integer) 1)));
#line 1393 "analysis.m"
        MR_Box analysis__conv1_STATE_VARIABLE_IO_8;

#line 1393 "analysis.m"
        {
#line 1393 "analysis.m"
          analysis__func_0(((MR_Box) analysis__P_4), ((MR_Box) ((MR_Integer) 0)), &analysis__conv1_STATE_VARIABLE_IO_8);
        }
#line 1393 "analysis.m"
      }
#line 1389 "analysis.m"
  }
#line 1386 "analysis.m"
}

#line 1381 "analysis.m"
void MR_CALL 
analysis__set_debug_analysis_3_p_0(
#line 1381 "analysis.m"
  MR_Word analysis__X_4)
#line 1381 "analysis.m"
{
#line 1381 "analysis.m"
  {
#line 1381 "analysis.m"
    MR_bool analysis__succeeded;

#line 1381 "analysis.m"
{
#define MR_PROC_LABEL analysis__set_debug_analysis_3_p_0


		{
#line 1381 "analysis.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&analysis__mutable_variable_debug_analysis_lock,
                "analysis__mutable_variable_debug_analysis_lock");
#endif

#line 8237 "analysis.c"

		;}
#undef MR_PROC_LABEL
#line 1381 "analysis.m"
}
#line 1381 "analysis.m"
{
#define MR_PROC_LABEL analysis__set_debug_analysis_3_p_0

	MR_Word X;

	X =  analysis__X_4 ;
		{
#line 1381 "analysis.m"
analysis__mutable_variable_debug_analysis = X;

#line 8254 "analysis.c"

		;}
#undef MR_PROC_LABEL
#line 1381 "analysis.m"
}
#line 1381 "analysis.m"
{
#define MR_PROC_LABEL analysis__set_debug_analysis_3_p_0


		{
#line 1381 "analysis.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&analysis__mutable_variable_debug_analysis_lock,
                "analysis__mutable_variable_debug_analysis_lock");
#endif

#line 8272 "analysis.c"

		;}
#undef MR_PROC_LABEL
#line 1381 "analysis.m"
}
#line 1381 "analysis.m"
  }
#line 1381 "analysis.m"
}

#line 1381 "analysis.m"
void MR_CALL 
analysis__get_debug_analysis_3_p_0(
#line 1381 "analysis.m"
  MR_Word * analysis__X_4)
#line 1381 "analysis.m"
{
#line 1381 "analysis.m"
  {
#line 1381 "analysis.m"
    MR_bool analysis__succeeded;

#line 1381 "analysis.m"
{
#define MR_PROC_LABEL analysis__get_debug_analysis_3_p_0


		{
#line 1381 "analysis.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&analysis__mutable_variable_debug_analysis_lock,
                "analysis__mutable_variable_debug_analysis_lock");
#endif

#line 8307 "analysis.c"

		;}
#undef MR_PROC_LABEL
#line 1381 "analysis.m"
}
#line 1381 "analysis.m"
{
#define MR_PROC_LABEL analysis__get_debug_analysis_3_p_0

	MR_Word X;

		{
#line 1381 "analysis.m"
X = analysis__mutable_variable_debug_analysis;

#line 8323 "analysis.c"

		;}
#undef MR_PROC_LABEL
	 *analysis__X_4  = X;
#line 1381 "analysis.m"
}
#line 1381 "analysis.m"
{
#define MR_PROC_LABEL analysis__get_debug_analysis_3_p_0


		{
#line 1381 "analysis.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&analysis__mutable_variable_debug_analysis_lock,
                "analysis__mutable_variable_debug_analysis_lock");
#endif

#line 8342 "analysis.c"

		;}
#undef MR_PROC_LABEL
#line 1381 "analysis.m"
}
#line 1381 "analysis.m"
  }
#line 1381 "analysis.m"
}

#line 1381 "analysis.m"
void MR_CALL 
analysis__set_debug_analysis_1_p_0(
#line 1381 "analysis.m"
  MR_Word analysis__X_2)
#line 1381 "analysis.m"
{
#line 1381 "analysis.m"
  {
#line 1381 "analysis.m"
    MR_bool analysis__succeeded;

#line 1381 "analysis.m"
{
#define MR_PROC_LABEL analysis__set_debug_analysis_1_p_0


		{
#line 1381 "analysis.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&analysis__mutable_variable_debug_analysis_lock,
                "analysis__mutable_variable_debug_analysis_lock");
#endif

#line 8377 "analysis.c"

		;}
#undef MR_PROC_LABEL
#line 1381 "analysis.m"
}
#line 1381 "analysis.m"
{
#define MR_PROC_LABEL analysis__set_debug_analysis_1_p_0

	MR_Word X;

	X =  analysis__X_2 ;
		{
#line 1381 "analysis.m"
analysis__mutable_variable_debug_analysis = X;

#line 8394 "analysis.c"

		;}
#undef MR_PROC_LABEL
#line 1381 "analysis.m"
}
#line 1381 "analysis.m"
{
#define MR_PROC_LABEL analysis__set_debug_analysis_1_p_0


		{
#line 1381 "analysis.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&analysis__mutable_variable_debug_analysis_lock,
                "analysis__mutable_variable_debug_analysis_lock");
#endif

#line 8412 "analysis.c"

		;}
#undef MR_PROC_LABEL
#line 1381 "analysis.m"
}
#line 1381 "analysis.m"
  }
#line 1381 "analysis.m"
}

#line 1381 "analysis.m"
void MR_CALL 
analysis__get_debug_analysis_1_p_0(
#line 1381 "analysis.m"
  MR_Word * analysis__X_2)
#line 1381 "analysis.m"
{
#line 1381 "analysis.m"
  {
#line 1381 "analysis.m"
    MR_bool analysis__succeeded;

#line 1381 "analysis.m"
{
#define MR_PROC_LABEL analysis__get_debug_analysis_1_p_0


		{
#line 1381 "analysis.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&analysis__mutable_variable_debug_analysis_lock,
                "analysis__mutable_variable_debug_analysis_lock");
#endif

#line 8447 "analysis.c"

		;}
#undef MR_PROC_LABEL
#line 1381 "analysis.m"
}
#line 1381 "analysis.m"
{
#define MR_PROC_LABEL analysis__get_debug_analysis_1_p_0

	MR_Word X;

		{
#line 1381 "analysis.m"
X = analysis__mutable_variable_debug_analysis;

#line 8463 "analysis.c"

		;}
#undef MR_PROC_LABEL
	 *analysis__X_2  = X;
#line 1381 "analysis.m"
}
#line 1381 "analysis.m"
{
#define MR_PROC_LABEL analysis__get_debug_analysis_1_p_0


		{
#line 1381 "analysis.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&analysis__mutable_variable_debug_analysis_lock,
                "analysis__mutable_variable_debug_analysis_lock");
#endif

#line 8482 "analysis.c"

		;}
#undef MR_PROC_LABEL
#line 1381 "analysis.m"
}
#line 1381 "analysis.m"
  }
#line 1381 "analysis.m"
}

#line 1381 "analysis.m"
void MR_CALL 
analysis__unsafe_set_debug_analysis_1_p_0(
#line 1381 "analysis.m"
  MR_Word analysis__X_1)
#line 1381 "analysis.m"
{
#line 1381 "analysis.m"
  {
#line 1381 "analysis.m"
    MR_bool analysis__succeeded;

#line 1381 "analysis.m"
{
#define MR_PROC_LABEL analysis__unsafe_set_debug_analysis_1_p_0

	MR_Word X;

	X =  analysis__X_1 ;
		{
#line 1381 "analysis.m"
analysis__mutable_variable_debug_analysis = X;

#line 8516 "analysis.c"

		;}
#undef MR_PROC_LABEL
#line 1381 "analysis.m"
}
#line 1381 "analysis.m"
  }
#line 1381 "analysis.m"
}

#line 1381 "analysis.m"
void MR_CALL 
analysis__unsafe_get_debug_analysis_1_p_0(
#line 1381 "analysis.m"
  MR_Word * analysis__X_1)
#line 1381 "analysis.m"
{
#line 1381 "analysis.m"
  {
#line 1381 "analysis.m"
    MR_bool analysis__succeeded;

#line 1381 "analysis.m"
{
#define MR_PROC_LABEL analysis__unsafe_get_debug_analysis_1_p_0

	MR_Word X;

		{
#line 1381 "analysis.m"
X = analysis__mutable_variable_debug_analysis;

#line 8549 "analysis.c"

		;}
#undef MR_PROC_LABEL
	 *analysis__X_1  = X;
#line 1381 "analysis.m"
}
#line 1381 "analysis.m"
  }
#line 1381 "analysis.m"
}

#line 1381 "analysis.m"
void MR_CALL 
analysis__unlock_debug_analysis_0_p_0(void)
#line 1381 "analysis.m"
{
#line 1381 "analysis.m"
  {
#line 1381 "analysis.m"
    MR_bool analysis__succeeded;

#line 1381 "analysis.m"
{
#define MR_PROC_LABEL analysis__unlock_debug_analysis_0_p_0


		{
#line 1381 "analysis.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&analysis__mutable_variable_debug_analysis_lock,
                "analysis__mutable_variable_debug_analysis_lock");
#endif

#line 8583 "analysis.c"

		;}
#undef MR_PROC_LABEL
#line 1381 "analysis.m"
}
#line 1381 "analysis.m"
  }
#line 1381 "analysis.m"
}

#line 1381 "analysis.m"
void MR_CALL 
analysis__lock_debug_analysis_0_p_0(void)
#line 1381 "analysis.m"
{
#line 1381 "analysis.m"
  {
#line 1381 "analysis.m"
    MR_bool analysis__succeeded;

#line 1381 "analysis.m"
{
#define MR_PROC_LABEL analysis__lock_debug_analysis_0_p_0


		{
#line 1381 "analysis.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&analysis__mutable_variable_debug_analysis_lock,
                "analysis__mutable_variable_debug_analysis_lock");
#endif

#line 8616 "analysis.c"

		;}
#undef MR_PROC_LABEL
#line 1381 "analysis.m"
}
#line 1381 "analysis.m"
  }
#line 1381 "analysis.m"
}

#line 1381 "analysis.m"
void MR_CALL 
analysis__pre_initialise_mutable_debug_analysis_0_p_0(void)
#line 1381 "analysis.m"
{
#line 1381 "analysis.m"
  {
#line 1381 "analysis.m"
    MR_bool analysis__succeeded;

#line 1381 "analysis.m"
{
#define MR_PROC_LABEL analysis__pre_initialise_mutable_debug_analysis_0_p_0


		{
#line 1381 "analysis.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&analysis__mutable_variable_debug_analysis_lock, MR_MUTEX_ATTR);
#endif

#line 8648 "analysis.c"

		;}
#undef MR_PROC_LABEL
#line 1381 "analysis.m"
}
#line 1381 "analysis.m"
  }
#line 1381 "analysis.m"
}

#line 1381 "analysis.m"
void MR_CALL 
analysis__initialise_mutable_debug_analysis_0_p_0(void)
#line 1381 "analysis.m"
{
#line 1381 "analysis.m"
  {
#line 1381 "analysis.m"
    MR_bool analysis__succeeded;

#line 1381 "analysis.m"
{
#define MR_PROC_LABEL analysis__initialise_mutable_debug_analysis_0_p_0


		{
#line 1381 "analysis.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&analysis__mutable_variable_debug_analysis_lock, MR_MUTEX_ATTR);
#endif

#line 8680 "analysis.c"

		;}
#undef MR_PROC_LABEL
#line 1381 "analysis.m"
}
#line 1381 "analysis.m"
{
#define MR_PROC_LABEL analysis__initialise_mutable_debug_analysis_0_p_0


		{
#line 1381 "analysis.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&analysis__mutable_variable_debug_analysis_lock,
                "analysis__mutable_variable_debug_analysis_lock");
#endif

#line 8698 "analysis.c"

		;}
#undef MR_PROC_LABEL
#line 1381 "analysis.m"
}
#line 1381 "analysis.m"
{
#define MR_PROC_LABEL analysis__initialise_mutable_debug_analysis_0_p_0

	MR_Word X;

	X =  (MR_Integer) 0 ;
		{
#line 1381 "analysis.m"
analysis__mutable_variable_debug_analysis = X;

#line 8715 "analysis.c"

		;}
#undef MR_PROC_LABEL
#line 1381 "analysis.m"
}
#line 1381 "analysis.m"
{
#define MR_PROC_LABEL analysis__initialise_mutable_debug_analysis_0_p_0


		{
#line 1381 "analysis.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&analysis__mutable_variable_debug_analysis_lock,
                "analysis__mutable_variable_debug_analysis_lock");
#endif

#line 8733 "analysis.c"

		;}
#undef MR_PROC_LABEL
#line 1381 "analysis.m"
}
#line 1381 "analysis.m"
  }
#line 1381 "analysis.m"
}

#line 1374 "analysis.m"
MR_Word MR_CALL 
analysis__lub_result_statuses_4_2_f_0(
#line 1374 "analysis.m"
  MR_Word analysis__Result_4,
#line 1374 "analysis.m"
  MR_Word analysis__Acc_5)
#line 1374 "analysis.m"
{
#line 1377 "analysis.m"
  {
#line 1377 "analysis.m"
    MR_bool analysis__succeeded;
#line 1377 "analysis.m"
    MR_Word analysis__HeadVar__3_3;
#line 1377 "analysis.m"
    MR_Word analysis__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Result_4, (MR_Integer) 3)));
#line 1377 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_analysis_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Result_4, (MR_Integer) 0)));
#line 1377 "analysis.m"
    MR_Box analysis__V_7_7 = (MR_hl_field(MR_mktag(0), analysis__Result_4, (MR_Integer) 1));
#line 1377 "analysis.m"
    MR_Box analysis__V_8_8 = (MR_hl_field(MR_mktag(0), analysis__Result_4, (MR_Integer) 2));

#line 1377 "analysis.m"
    {
#line 1377 "analysis.m"
      return analysis__HeadVar__3_3 = analysis__lub_2_f_0(analysis__V_6_6, analysis__Acc_5);
    }
#line 1377 "analysis.m"
    return analysis__HeadVar__3_3;
#line 1377 "analysis.m"
  }
#line 1374 "analysis.m"
}

#line 1368 "analysis.m"
MR_Word MR_CALL 
analysis__lub_result_statuses_3_3_f_0(
#line 1368 "analysis.m"
  MR_Word analysis___FuncId_5,
#line 1368 "analysis.m"
  MR_Word analysis__Results_6,
#line 1368 "analysis.m"
  MR_Word analysis__Acc_7)
#line 1368 "analysis.m"
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
      return analysis__HeadVar__4_4 = analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_108_117_98_95_114_101_115_117_108_116_95_115_116_97_116_117_115_101_115_95_51_95_95_91_49_93_95_48_3_f_0(analysis__Results_6, analysis__Acc_7);
    }
#line 1371 "analysis.m"
    return analysis__HeadVar__4_4;
#line 1371 "analysis.m"
  }
#line 1368 "analysis.m"
}

#line 1361 "analysis.m"
MR_Word MR_CALL 
analysis__lub_result_statuses_2_3_f_0(
#line 1361 "analysis.m"
  MR_String analysis___AnalysisName_5,
#line 1361 "analysis.m"
  MR_Word analysis__FuncMap_6,
#line 1361 "analysis.m"
  MR_Word analysis__Acc_7)
#line 1361 "analysis.m"
{
#line 1365 "analysis.m"
  {
#line 1365 "analysis.m"
    MR_bool analysis__succeeded;
#line 1365 "analysis.m"
    MR_Word analysis__HeadVar__4_4;

#line 1365 "analysis.m"
    {
#line 1365 "analysis.m"
      return analysis__HeadVar__4_4 = analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_108_117_98_95_114_101_115_117_108_116_95_115_116_97_116_117_115_101_115_95_50_95_95_91_49_93_95_48_3_f_0(analysis__FuncMap_6, analysis__Acc_7);
    }
#line 1365 "analysis.m"
    return analysis__HeadVar__4_4;
#line 1365 "analysis.m"
  }
#line 1361 "analysis.m"
}

#line 1359 "analysis.m"
static MR_Box MR_CALL 
analysis__lub_result_statuses_1_f_0_1(
#line 1359 "analysis.m"
  MR_Box analysis__closure_arg,
#line 1359 "analysis.m"
  MR_Box analysis__wrapper_arg_1,
#line 1359 "analysis.m"
  MR_Box analysis__wrapper_arg_2,
#line 1359 "analysis.m"
  MR_Box analysis__wrapper_arg_3)
#line 1359 "analysis.m"
{
#line 1359 "analysis.m"
  {
#line 1359 "analysis.m"
    MR_Box analysis__wrapper_arg_4;
#line 1359 "analysis.m"
    MR_Box analysis__closure = analysis__closure_arg;
#line 1359 "analysis.m"
    MR_Word analysis__conv0_HeadVar__4_4;

#line 1359 "analysis.m"
    {
#line 1359 "analysis.m"
      analysis__conv0_HeadVar__4_4 = analysis__lub_result_statuses_2_3_f_0(((MR_String) analysis__wrapper_arg_1), ((MR_Word) analysis__wrapper_arg_2), ((MR_Word) analysis__wrapper_arg_3));
    }
#line 1359 "analysis.m"
    analysis__wrapper_arg_4 = ((MR_Box) (analysis__conv0_HeadVar__4_4));
#line 1359 "analysis.m"
    return analysis__wrapper_arg_4;
#line 1359 "analysis.m"
  }
#line 1359 "analysis.m"
}

#line 1355 "analysis.m"
MR_Word MR_CALL 
analysis__lub_result_statuses_1_f_0(
#line 1355 "analysis.m"
  MR_Word analysis__ModuleMap_3)
#line 1355 "analysis.m"
{
#line 1358 "analysis.m"
  {
#line 1358 "analysis.m"
    MR_bool analysis__succeeded;
#line 1358 "analysis.m"
    MR_Word analysis__HeadVar__2_2;
#line 1358 "analysis.m"
    MR_Box analysis__conv1_HeadVar__2_2;

#line 1358 "analysis.m"
    {
#line 1358 "analysis.m"
      analysis__conv1_HeadVar__2_2 = mercury__map__foldl_3_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &analysis_scalar_common_2[2], (MR_Word) &analysis__analysis__type_ctor_info_analysis_status_0, (MR_Word) &analysis_scalar_common_2[13], analysis__ModuleMap_3, ((MR_Box) ((MR_Integer) 2)));
    }
#line 1358 "analysis.m"
    analysis__HeadVar__2_2 = ((MR_Word) analysis__conv1_HeadVar__2_2);
#line 1358 "analysis.m"
    return analysis__HeadVar__2_2;
#line 1358 "analysis.m"
  }
#line 1355 "analysis.m"
}

#line 1322 "analysis.m"
void MR_CALL 
analysis__maybe_write_module_imdg_5_p_0(
#line 1322 "analysis.m"
  MR_Word analysis__Info_6,
#line 1322 "analysis.m"
  MR_Word analysis__Globals_7,
#line 1322 "analysis.m"
  MR_Word analysis__ModuleName_8)
#line 1322 "analysis.m"
{
#line 1328 "analysis.m"
  {
#line 1328 "analysis.m"
    MR_bool analysis__succeeded;
#line 1328 "analysis.m"
    MR_Word analysis__ModuleEntries_10;
#line 1326 "analysis.m"
    MR_Word analysis__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 9)));
#line 1326 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_compiler_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 0)));
#line 1326 "analysis.m"
    MR_Box analysis__V_15_15 = (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 1));
#line 1326 "analysis.m"
    MR_Word analysis__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 2)));
#line 1326 "analysis.m"
    MR_Word analysis__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 3)));
#line 1326 "analysis.m"
    MR_Word analysis__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 4)));
#line 1326 "analysis.m"
    MR_Word analysis__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 5)));
#line 1326 "analysis.m"
    MR_Word analysis__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 6)));
#line 1326 "analysis.m"
    MR_Word analysis__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 7)));
#line 1326 "analysis.m"
    MR_Word analysis__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 8)));
#line 1326 "analysis.m"
    MR_Word analysis__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 10)));
#line 1326 "analysis.m"
    MR_Box analysis__conv0_ModuleEntries_10;

#line 1326 "analysis.m"
    {
#line 1326 "analysis.m"
      analysis__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0, (MR_Word) &analysis_scalar_common_2[5], analysis__V_13_13, ((MR_Box) (analysis__ModuleName_8)), &analysis__conv0_ModuleEntries_10);
    }
#line 1326 "analysis.m"
    if (analysis__succeeded)
#line 1326 "analysis.m"
      {
#line 1326 "analysis.m"
        analysis__ModuleEntries_10 = ((MR_Word) analysis__conv0_ModuleEntries_10);
#line 1326 "analysis.m"
        analysis__succeeded = MR_TRUE;
#line 1326 "analysis.m"
      }
#line 1328 "analysis.m"
    if (analysis__succeeded)
#line 1327 "analysis.m"
      {
#line 1327 "analysis.m"
        analysis__file__write_module_imdg_6_p_0(analysis__Info_6, analysis__Globals_7, analysis__ModuleName_8, analysis__ModuleEntries_10);
#line 1327 "analysis.m"
        return;
      }
#line 1328 "analysis.m"
    else
#line 1327 "analysis.m"
      {
#line 1327 "analysis.m"
      }
#line 1328 "analysis.m"
  }
#line 1322 "analysis.m"
}

#line 1311 "analysis.m"
void MR_CALL 
analysis__maybe_write_module_requests_5_p_0(
#line 1311 "analysis.m"
  MR_Word analysis__Info_6,
#line 1311 "analysis.m"
  MR_Word analysis__Globals_7,
#line 1311 "analysis.m"
  MR_Word analysis__ModuleName_8)
#line 1311 "analysis.m"
{
#line 1318 "analysis.m"
  {
#line 1318 "analysis.m"
    MR_bool analysis__succeeded;
#line 1318 "analysis.m"
    MR_Word analysis__Requests_10;
#line 1315 "analysis.m"
    MR_Word analysis__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 5)));
#line 1315 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_compiler_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 0)));
#line 1315 "analysis.m"
    MR_Box analysis__V_15_15 = (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 1));
#line 1315 "analysis.m"
    MR_Word analysis__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 2)));
#line 1315 "analysis.m"
    MR_Word analysis__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 3)));
#line 1315 "analysis.m"
    MR_Word analysis__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 4)));
#line 1315 "analysis.m"
    MR_Word analysis__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 6)));
#line 1315 "analysis.m"
    MR_Word analysis__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 7)));
#line 1315 "analysis.m"
    MR_Word analysis__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 8)));
#line 1315 "analysis.m"
    MR_Word analysis__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 9)));
#line 1315 "analysis.m"
    MR_Word analysis__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 10)));
#line 1315 "analysis.m"
    MR_Box analysis__conv0_Requests_10;

#line 1315 "analysis.m"
    {
#line 1315 "analysis.m"
      analysis__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0, (MR_Word) &analysis_scalar_common_2[1], analysis__V_13_13, ((MR_Box) (analysis__ModuleName_8)), &analysis__conv0_Requests_10);
    }
#line 1315 "analysis.m"
    if (analysis__succeeded)
#line 1315 "analysis.m"
      {
#line 1315 "analysis.m"
        analysis__Requests_10 = ((MR_Word) analysis__conv0_Requests_10);
#line 1315 "analysis.m"
        analysis__succeeded = MR_TRUE;
#line 1315 "analysis.m"
      }
#line 1318 "analysis.m"
    if (analysis__succeeded)
#line 1316 "analysis.m"
      {
#line 1316 "analysis.m"
        analysis__file__write_module_analysis_requests_6_p_0(analysis__Info_6, analysis__Globals_7, analysis__ModuleName_8, analysis__Requests_10);
#line 1316 "analysis.m"
        return;
      }
#line 1318 "analysis.m"
    else
#line 1316 "analysis.m"
      {
#line 1316 "analysis.m"
      }
#line 1318 "analysis.m"
  }
#line 1311 "analysis.m"
}

#line 1299 "analysis.m"
void MR_CALL 
analysis__maybe_write_module_overall_status_5_p_0(
#line 1299 "analysis.m"
  MR_Word analysis__Info_6,
#line 1299 "analysis.m"
  MR_Word analysis__Globals_7,
#line 1299 "analysis.m"
  MR_Word analysis__ModuleName_8)
#line 1299 "analysis.m"
{
#line 1305 "analysis.m"
  {
#line 1305 "analysis.m"
    MR_bool analysis__succeeded;
#line 1305 "analysis.m"
    MR_Word analysis__Status_10;
#line 1303 "analysis.m"
    MR_Word analysis__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 6)));
#line 1303 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_compiler_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 0)));
#line 1303 "analysis.m"
    MR_Box analysis__V_15_15 = (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 1));
#line 1303 "analysis.m"
    MR_Word analysis__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 2)));
#line 1303 "analysis.m"
    MR_Word analysis__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 3)));
#line 1303 "analysis.m"
    MR_Word analysis__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 4)));
#line 1303 "analysis.m"
    MR_Word analysis__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 5)));
#line 1303 "analysis.m"
    MR_Word analysis__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 7)));
#line 1303 "analysis.m"
    MR_Word analysis__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 8)));
#line 1303 "analysis.m"
    MR_Word analysis__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 9)));
#line 1303 "analysis.m"
    MR_Word analysis__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 10)));
#line 1303 "analysis.m"
    MR_Box analysis__conv0_Status_10;

#line 1303 "analysis.m"
    {
#line 1303 "analysis.m"
      analysis__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0, (MR_Word) &analysis__analysis__type_ctor_info_analysis_status_0, analysis__V_13_13, ((MR_Box) (analysis__ModuleName_8)), &analysis__conv0_Status_10);
    }
#line 1303 "analysis.m"
    if (analysis__succeeded)
#line 1303 "analysis.m"
      {
#line 1303 "analysis.m"
        analysis__Status_10 = ((MR_Word) analysis__conv0_Status_10);
#line 1303 "analysis.m"
        analysis__succeeded = MR_TRUE;
#line 1303 "analysis.m"
      }
#line 1305 "analysis.m"
    if (analysis__succeeded)
#line 1304 "analysis.m"
      {
#line 1304 "analysis.m"
        analysis__file__write_module_overall_status_6_p_0(analysis__Info_6, analysis__Globals_7, analysis__ModuleName_8, analysis__Status_10);
#line 1304 "analysis.m"
        return;
      }
#line 1305 "analysis.m"
    else
#line 1304 "analysis.m"
      {
#line 1304 "analysis.m"
      }
#line 1305 "analysis.m"
  }
#line 1299 "analysis.m"
}

#line 1290 "analysis.m"
void MR_CALL 
analysis__load_module_imdg_6_p_0(
#line 1290 "analysis.m"
  MR_Word analysis__Globals_7,
#line 1290 "analysis.m"
  MR_Word analysis__ModuleName_8,
#line 1290 "analysis.m"
  MR_Word analysis__STATE_VARIABLE_Info_0_14,
#line 1290 "analysis.m"
  MR_Word * analysis__STATE_VARIABLE_Info_15)
#line 1290 "analysis.m"
{
#line 1293 "analysis.m"
  {
#line 1293 "analysis.m"
    MR_bool analysis__succeeded;
#line 1293 "analysis.m"
    MR_Word analysis__IMDG_11;
#line 1293 "analysis.m"
    MR_Word analysis__Map0_12;
#line 1293 "analysis.m"
    MR_Word analysis__Map_13;
#line 1295 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_compiler_39;
#line 1295 "analysis.m"
    MR_Box analysis__V_20_20;
#line 1295 "analysis.m"
    MR_Word analysis__V_21_21;
#line 1295 "analysis.m"
    MR_Word analysis__V_22_22;
#line 1295 "analysis.m"
    MR_Word analysis__V_23_23;
#line 1295 "analysis.m"
    MR_Word analysis__V_24_24;
#line 1295 "analysis.m"
    MR_Word analysis__V_25_25;
#line 1295 "analysis.m"
    MR_Word analysis__V_26_26;
#line 1295 "analysis.m"
    MR_Word analysis__V_27_27;
#line 1295 "analysis.m"
    MR_Word analysis__V_28_28;
#line 1297 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_compiler_42;
#line 1297 "analysis.m"
    MR_Box analysis__V_29_29;
#line 1297 "analysis.m"
    MR_Word analysis__V_30_30;
#line 1297 "analysis.m"
    MR_Word analysis__V_31_31;
#line 1297 "analysis.m"
    MR_Word analysis__V_32_32;
#line 1297 "analysis.m"
    MR_Word analysis__V_33_33;
#line 1297 "analysis.m"
    MR_Word analysis__V_34_34;
#line 1297 "analysis.m"
    MR_Word analysis__V_35_35;
#line 1297 "analysis.m"
    MR_Word analysis__V_36_36;
#line 1297 "analysis.m"
    MR_Word analysis__V_38_38;
#line 1297 "analysis.m"
    MR_Word analysis__V_37_37;

#line 1294 "analysis.m"
    {
#line 1294 "analysis.m"
      analysis__file__read_module_imdg_6_p_0(analysis__STATE_VARIABLE_Info_0_14, analysis__Globals_7, analysis__ModuleName_8, &analysis__IMDG_11);
    }
#line 1295 "analysis.m"
    analysis__TypeClassInfo_for_compiler_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_14, (MR_Integer) 0)));
#line 1295 "analysis.m"
    analysis__V_20_20 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_14, (MR_Integer) 1));
#line 1295 "analysis.m"
    analysis__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_14, (MR_Integer) 2)));
#line 1295 "analysis.m"
    analysis__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_14, (MR_Integer) 3)));
#line 1295 "analysis.m"
    analysis__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_14, (MR_Integer) 4)));
#line 1295 "analysis.m"
    analysis__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_14, (MR_Integer) 5)));
#line 1295 "analysis.m"
    analysis__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_14, (MR_Integer) 6)));
#line 1295 "analysis.m"
    analysis__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_14, (MR_Integer) 7)));
#line 1295 "analysis.m"
    analysis__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_14, (MR_Integer) 8)));
#line 1295 "analysis.m"
    analysis__Map0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_14, (MR_Integer) 9)));
#line 1295 "analysis.m"
    analysis__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_14, (MR_Integer) 10)));
#line 1296 "analysis.m"
    {
#line 1296 "analysis.m"
      mercury__map__det_insert_4_p_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0, (MR_Word) &analysis_scalar_common_2[5], ((MR_Box) (analysis__ModuleName_8)), ((MR_Box) (analysis__IMDG_11)), analysis__Map0_12, &analysis__Map_13);
    }
#line 1297 "analysis.m"
    analysis__TypeClassInfo_for_compiler_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_14, (MR_Integer) 0)));
#line 1297 "analysis.m"
    analysis__V_29_29 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_14, (MR_Integer) 1));
#line 1297 "analysis.m"
    analysis__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_14, (MR_Integer) 2)));
#line 1297 "analysis.m"
    analysis__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_14, (MR_Integer) 3)));
#line 1297 "analysis.m"
    analysis__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_14, (MR_Integer) 4)));
#line 1297 "analysis.m"
    analysis__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_14, (MR_Integer) 5)));
#line 1297 "analysis.m"
    analysis__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_14, (MR_Integer) 6)));
#line 1297 "analysis.m"
    analysis__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_14, (MR_Integer) 7)));
#line 1297 "analysis.m"
    analysis__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_14, (MR_Integer) 8)));
#line 1297 "analysis.m"
    analysis__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_14, (MR_Integer) 9)));
#line 1297 "analysis.m"
    analysis__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_14, (MR_Integer) 10)));
#line 1297 "analysis.m"
    {
#line 1297 "analysis.m"
      MR_Word base;
#line 1297 "analysis.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 1297 "analysis.m"
      *analysis__STATE_VARIABLE_Info_15 = base;
#line 1297 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (analysis__TypeClassInfo_for_compiler_42));
#line 1297 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 1) = analysis__V_29_29;
#line 1297 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (analysis__V_30_30));
#line 1297 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (analysis__V_31_31));
#line 1297 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (analysis__V_32_32));
#line 1297 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (analysis__V_33_33));
#line 1297 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (analysis__V_34_34));
#line 1297 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (analysis__V_35_35));
#line 1297 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (analysis__V_36_36));
#line 1297 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (analysis__Map_13));
#line 1297 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (analysis__V_38_38));
#line 1297 "analysis.m"
    }
#line 1293 "analysis.m"
  }
#line 1290 "analysis.m"
}

#line 1205 "analysis.m"
void MR_CALL 
analysis__load_module_analysis_results_6_p_0(
#line 1205 "analysis.m"
  MR_Word analysis__Globals_7,
#line 1205 "analysis.m"
  MR_Word analysis__ModuleName_8,
#line 1205 "analysis.m"
  MR_Word analysis__STATE_VARIABLE_Info_0_13,
#line 1205 "analysis.m"
  MR_Word * analysis__STATE_VARIABLE_Info_14)
#line 1205 "analysis.m"
{
#line 1215 "analysis.m"
  {
#line 1215 "analysis.m"
    MR_bool analysis__succeeded;
#line 1211 "analysis.m"
    MR_Word analysis__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 7)));
#line 1211 "analysis.m"
    MR_Word analysis__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 6)));
#line 1210 "analysis.m"
    MR_Word analysis__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 0)));
#line 1210 "analysis.m"
    MR_Word analysis__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 10)));
#line 1210 "analysis.m"
    MR_Word analysis__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 9)));
#line 1210 "analysis.m"
    MR_Word analysis__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 8)));
#line 1210 "analysis.m"
    MR_Word analysis__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 5)));
#line 1210 "analysis.m"
    MR_Word analysis__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 4)));
#line 1210 "analysis.m"
    MR_Word analysis__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 3)));
#line 1210 "analysis.m"
    MR_Word analysis__V_118_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 2)));
#line 1210 "analysis.m"
    MR_Box analysis__V_119_119 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 1));

#line 1210 "analysis.m"
    {
#line 1210 "analysis.m"
      analysis__succeeded = mercury__map__contains_2_p_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0, (MR_Word) &analysis_scalar_common_2[3], analysis__V_113_113, ((MR_Box) (analysis__ModuleName_8)));
    }
#line 1211 "analysis.m"
    if (!(analysis__succeeded))
#line 1211 "analysis.m"
      {
#line 1211 "analysis.m"
        {
#line 1211 "analysis.m"
          analysis__succeeded = mercury__map__contains_2_p_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0, (MR_Word) &analysis__analysis__type_ctor_info_analysis_status_0, analysis__V_114_114, ((MR_Box) (analysis__ModuleName_8)));
        }
#line 1211 "analysis.m"
      }
#line 1215 "analysis.m"
    if (analysis__succeeded)
#line 1214 "analysis.m"
      {
#line 1214 "analysis.m"
        {
#line 1214 "analysis.m"
          mercury__require__unexpected_3_p_0((MR_String) "analysis", (MR_String) "predicate \140analysis.load_module_analysis_results\'/6", (MR_String) "ensure_old_module_analysis_results_loaded");
#line 1214 "analysis.m"
          return;
        }
#line 1214 "analysis.m"
      }
#line 1215 "analysis.m"
    else
#line 1217 "analysis.m"
      {
#line 1217 "analysis.m"
        MR_Word analysis__TypeClassInfo_for_compiler_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 0)));
#line 1217 "analysis.m"
        MR_Word analysis__TypeCtorInfo_104_104;
#line 1217 "analysis.m"
        MR_Word analysis__ModuleStatus_11;
#line 1217 "analysis.m"
        MR_Word analysis__ModuleResults_12;
#line 1217 "analysis.m"
        MR_Box analysis__V_22_22 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 1));
#line 1217 "analysis.m"
        MR_Word analysis__STATE_VARIABLE_Info_25_25;
#line 1217 "analysis.m"
        MR_Word analysis__V_26_26;
#line 1217 "analysis.m"
        MR_Word analysis__V_27_27;
#line 1217 "analysis.m"
        MR_Word analysis__V_29_29;
#line 1217 "analysis.m"
        MR_Word analysis__V_30_30;
#line 1216 "analysis.m"
        MR_Word analysis__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 2)));
#line 1216 "analysis.m"
        MR_Word analysis__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 3)));
#line 1216 "analysis.m"
        MR_Word analysis__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 4)));
#line 1216 "analysis.m"
        MR_Word analysis__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 5)));
#line 1216 "analysis.m"
        MR_Word analysis__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 6)));
#line 1216 "analysis.m"
        MR_Word analysis__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 7)));
#line 1216 "analysis.m"
        MR_Word analysis__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 8)));
#line 1216 "analysis.m"
        MR_Word analysis__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 9)));
#line 1216 "analysis.m"
        MR_Word analysis__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 10)));
#line 1220 "analysis.m"
        MR_Word analysis__TypeClassInfo_for_compiler_103;
#line 1220 "analysis.m"
        MR_Box analysis__V_58_58;
#line 1220 "analysis.m"
        MR_Word analysis__V_59_59;
#line 1220 "analysis.m"
        MR_Word analysis__V_60_60;
#line 1220 "analysis.m"
        MR_Word analysis__V_61_61;
#line 1220 "analysis.m"
        MR_Word analysis__V_62_62;
#line 1220 "analysis.m"
        MR_Word analysis__V_63_63;
#line 1220 "analysis.m"
        MR_Word analysis__V_64_64;
#line 1220 "analysis.m"
        MR_Word analysis__V_65_65;
#line 1220 "analysis.m"
        MR_Word analysis__V_66_66;
#line 1220 "analysis.m"
        MR_Word analysis__TypeClassInfo_for_compiler_106;
#line 1220 "analysis.m"
        MR_Box analysis__V_67_67;
#line 1220 "analysis.m"
        MR_Word analysis__V_68_68;
#line 1220 "analysis.m"
        MR_Word analysis__V_69_69;
#line 1220 "analysis.m"
        MR_Word analysis__V_70_70;
#line 1220 "analysis.m"
        MR_Word analysis__V_71_71;
#line 1220 "analysis.m"
        MR_Word analysis__V_73_73;
#line 1220 "analysis.m"
        MR_Word analysis__V_74_74;
#line 1220 "analysis.m"
        MR_Word analysis__V_75_75;
#line 1220 "analysis.m"
        MR_Word analysis__V_76_76;
#line 1220 "analysis.m"
        MR_Word analysis__V_72_72;
#line 1221 "analysis.m"
        MR_Word analysis__TypeClassInfo_for_compiler_107;
#line 1221 "analysis.m"
        MR_Box analysis__V_77_77;
#line 1221 "analysis.m"
        MR_Word analysis__V_78_78;
#line 1221 "analysis.m"
        MR_Word analysis__V_79_79;
#line 1221 "analysis.m"
        MR_Word analysis__V_80_80;
#line 1221 "analysis.m"
        MR_Word analysis__V_81_81;
#line 1221 "analysis.m"
        MR_Word analysis__V_82_82;
#line 1221 "analysis.m"
        MR_Word analysis__V_83_83;
#line 1221 "analysis.m"
        MR_Word analysis__V_84_84;
#line 1221 "analysis.m"
        MR_Word analysis__V_85_85;
#line 1221 "analysis.m"
        MR_Word analysis__TypeClassInfo_for_compiler_109;
#line 1221 "analysis.m"
        MR_Box analysis__V_86_86;
#line 1221 "analysis.m"
        MR_Word analysis__V_87_87;
#line 1221 "analysis.m"
        MR_Word analysis__V_88_88;
#line 1221 "analysis.m"
        MR_Word analysis__V_89_89;
#line 1221 "analysis.m"
        MR_Word analysis__V_90_90;
#line 1221 "analysis.m"
        MR_Word analysis__V_91_91;
#line 1221 "analysis.m"
        MR_Word analysis__V_93_93;
#line 1221 "analysis.m"
        MR_Word analysis__V_94_94;
#line 1221 "analysis.m"
        MR_Word analysis__V_95_95;
#line 1221 "analysis.m"
        MR_Word analysis__V_92_92;

#line 1216 "analysis.m"
        {
#line 1216 "analysis.m"
          analysis__do_read_module_overall_status_6_p_0(analysis__TypeClassInfo_for_compiler_102, analysis__V_22_22, analysis__Globals_7, analysis__ModuleName_8, &analysis__ModuleStatus_11);
        }
#line 1218 "analysis.m"
        {
#line 1218 "analysis.m"
          analysis__file__read_module_analysis_results_6_p_0(analysis__STATE_VARIABLE_Info_0_13, analysis__Globals_7, analysis__ModuleName_8, &analysis__ModuleResults_12);
        }
#line 1220 "analysis.m"
        analysis__TypeClassInfo_for_compiler_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 0)));
#line 1220 "analysis.m"
        analysis__V_58_58 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 1));
#line 1220 "analysis.m"
        analysis__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 2)));
#line 1220 "analysis.m"
        analysis__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 3)));
#line 1220 "analysis.m"
        analysis__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 4)));
#line 1220 "analysis.m"
        analysis__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 5)));
#line 1220 "analysis.m"
        analysis__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 6)));
#line 1220 "analysis.m"
        analysis__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 7)));
#line 1220 "analysis.m"
        analysis__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 8)));
#line 1220 "analysis.m"
        analysis__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 9)));
#line 1220 "analysis.m"
        analysis__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 10)));
#line 9522 "analysis.c"
        analysis__TypeCtorInfo_104_104 = (MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0;
#line 1220 "analysis.m"
        {
#line 1220 "analysis.m"
          analysis__V_27_27 = mercury__map__f_101_108_101_109_32_58_61_3_f_0(analysis__TypeCtorInfo_104_104, (MR_Word) &analysis__analysis__type_ctor_info_analysis_status_0, ((MR_Box) (analysis__ModuleName_8)), analysis__V_26_26, ((MR_Box) (analysis__ModuleStatus_11)));
        }
#line 1220 "analysis.m"
        analysis__TypeClassInfo_for_compiler_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 0)));
#line 1220 "analysis.m"
        analysis__V_67_67 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 1));
#line 1220 "analysis.m"
        analysis__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 2)));
#line 1220 "analysis.m"
        analysis__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 3)));
#line 1220 "analysis.m"
        analysis__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 4)));
#line 1220 "analysis.m"
        analysis__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 5)));
#line 1220 "analysis.m"
        analysis__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 6)));
#line 1220 "analysis.m"
        analysis__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 7)));
#line 1220 "analysis.m"
        analysis__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 8)));
#line 1220 "analysis.m"
        analysis__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 9)));
#line 1220 "analysis.m"
        analysis__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 10)));
#line 1220 "analysis.m"
        {
#line 1220 "analysis.m"
          analysis__STATE_VARIABLE_Info_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 1220 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_25_25, 0) = ((MR_Box) (analysis__TypeClassInfo_for_compiler_106));
#line 1220 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_25_25, 1) = analysis__V_67_67;
#line 1220 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_25_25, 2) = ((MR_Box) (analysis__V_68_68));
#line 1220 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_25_25, 3) = ((MR_Box) (analysis__V_69_69));
#line 1220 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_25_25, 4) = ((MR_Box) (analysis__V_70_70));
#line 1220 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_25_25, 5) = ((MR_Box) (analysis__V_71_71));
#line 1220 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_25_25, 6) = ((MR_Box) (analysis__V_27_27));
#line 1220 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_25_25, 7) = ((MR_Box) (analysis__V_73_73));
#line 1220 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_25_25, 8) = ((MR_Box) (analysis__V_74_74));
#line 1220 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_25_25, 9) = ((MR_Box) (analysis__V_75_75));
#line 1220 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_25_25, 10) = ((MR_Box) (analysis__V_76_76));
#line 1220 "analysis.m"
        }
#line 1221 "analysis.m"
        analysis__TypeClassInfo_for_compiler_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_25_25, (MR_Integer) 0)));
#line 1221 "analysis.m"
        analysis__V_77_77 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_25_25, (MR_Integer) 1));
#line 1221 "analysis.m"
        analysis__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_25_25, (MR_Integer) 2)));
#line 1221 "analysis.m"
        analysis__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_25_25, (MR_Integer) 3)));
#line 1221 "analysis.m"
        analysis__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_25_25, (MR_Integer) 4)));
#line 1221 "analysis.m"
        analysis__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_25_25, (MR_Integer) 5)));
#line 1221 "analysis.m"
        analysis__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_25_25, (MR_Integer) 6)));
#line 1221 "analysis.m"
        analysis__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_25_25, (MR_Integer) 7)));
#line 1221 "analysis.m"
        analysis__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_25_25, (MR_Integer) 8)));
#line 1221 "analysis.m"
        analysis__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_25_25, (MR_Integer) 9)));
#line 1221 "analysis.m"
        analysis__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_25_25, (MR_Integer) 10)));
#line 1221 "analysis.m"
        {
#line 1221 "analysis.m"
          analysis__V_30_30 = mercury__map__f_101_108_101_109_32_58_61_3_f_0(analysis__TypeCtorInfo_104_104, (MR_Word) &analysis_scalar_common_2[3], ((MR_Box) (analysis__ModuleName_8)), analysis__V_29_29, ((MR_Box) (analysis__ModuleResults_12)));
        }
#line 1221 "analysis.m"
        analysis__TypeClassInfo_for_compiler_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_25_25, (MR_Integer) 0)));
#line 1221 "analysis.m"
        analysis__V_86_86 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_25_25, (MR_Integer) 1));
#line 1221 "analysis.m"
        analysis__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_25_25, (MR_Integer) 2)));
#line 1221 "analysis.m"
        analysis__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_25_25, (MR_Integer) 3)));
#line 1221 "analysis.m"
        analysis__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_25_25, (MR_Integer) 4)));
#line 1221 "analysis.m"
        analysis__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_25_25, (MR_Integer) 5)));
#line 1221 "analysis.m"
        analysis__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_25_25, (MR_Integer) 6)));
#line 1221 "analysis.m"
        analysis__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_25_25, (MR_Integer) 7)));
#line 1221 "analysis.m"
        analysis__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_25_25, (MR_Integer) 8)));
#line 1221 "analysis.m"
        analysis__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_25_25, (MR_Integer) 9)));
#line 1221 "analysis.m"
        analysis__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_25_25, (MR_Integer) 10)));
#line 1221 "analysis.m"
        {
#line 1221 "analysis.m"
          MR_Word base;
#line 1221 "analysis.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 1221 "analysis.m"
          *analysis__STATE_VARIABLE_Info_14 = base;
#line 1221 "analysis.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (analysis__TypeClassInfo_for_compiler_109));
#line 1221 "analysis.m"
          MR_hl_field(MR_mktag(0), base, 1) = analysis__V_86_86;
#line 1221 "analysis.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (analysis__V_87_87));
#line 1221 "analysis.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (analysis__V_88_88));
#line 1221 "analysis.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (analysis__V_89_89));
#line 1221 "analysis.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (analysis__V_90_90));
#line 1221 "analysis.m"
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (analysis__V_91_91));
#line 1221 "analysis.m"
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (analysis__V_30_30));
#line 1221 "analysis.m"
          MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (analysis__V_93_93));
#line 1221 "analysis.m"
          MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (analysis__V_94_94));
#line 1221 "analysis.m"
          MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (analysis__V_95_95));
#line 1221 "analysis.m"
        }
#line 1217 "analysis.m"
      }
#line 1215 "analysis.m"
  }
#line 1205 "analysis.m"
}

#line 1181 "analysis.m"
void MR_CALL 
analysis__combine_imdg_lists_3_p_0(
#line 1181 "analysis.m"
  MR_Word analysis__ArcsA_4,
#line 1181 "analysis.m"
  MR_Word analysis__ArcsB_5,
#line 1181 "analysis.m"
  MR_Word * analysis__HeadVar__3_3)
#line 1181 "analysis.m"
{
#line 1184 "analysis.m"
  {
#line 1184 "analysis.m"
    MR_bool analysis__succeeded;

#line 1184 "analysis.m"
    {
#line 1184 "analysis.m"
      *analysis__HeadVar__3_3 = mercury__list__f_43_43_2_f_0((MR_Word) &analysis__analysis__type_ctor_info_imdg_arc_0, analysis__ArcsA_4, analysis__ArcsB_5);
    }
#line 1184 "analysis.m"
  }
#line 1181 "analysis.m"
}

#line 1179 "analysis.m"
static void MR_CALL 
analysis__combine_func_imdg_3_p_0_1(
#line 1179 "analysis.m"
  MR_Box analysis__closure_arg,
#line 1179 "analysis.m"
  MR_Box analysis__wrapper_arg_1,
#line 1179 "analysis.m"
  MR_Box analysis__wrapper_arg_2,
#line 1179 "analysis.m"
  MR_Box * analysis__wrapper_arg_3)
#line 1179 "analysis.m"
{
#line 1179 "analysis.m"
  {
#line 1179 "analysis.m"
    MR_Box analysis__closure = analysis__closure_arg;
#line 1179 "analysis.m"
    MR_Word analysis__conv0_HeadVar__3_3;

#line 1179 "analysis.m"
    {
#line 1179 "analysis.m"
      analysis__combine_imdg_lists_3_p_0(((MR_Word) analysis__wrapper_arg_1), ((MR_Word) analysis__wrapper_arg_2), &analysis__conv0_HeadVar__3_3);
    }
#line 1179 "analysis.m"
    *analysis__wrapper_arg_3 = ((MR_Box) (analysis__conv0_HeadVar__3_3));
#line 1179 "analysis.m"
  }
#line 1179 "analysis.m"
}

#line 1175 "analysis.m"
void MR_CALL 
analysis__combine_func_imdg_3_p_0(
#line 1175 "analysis.m"
  MR_Word analysis__FuncImdgA_4,
#line 1175 "analysis.m"
  MR_Word analysis__FuncImdgB_5,
#line 1175 "analysis.m"
  MR_Word * analysis__FuncImdg_6)
#line 1175 "analysis.m"
{
#line 1178 "analysis.m"
  {
#line 1178 "analysis.m"
    MR_bool analysis__succeeded;

#line 1179 "analysis.m"
    {
#line 1179 "analysis.m"
      mercury__map__union_4_p_1((MR_Word) &analysis_scalar_common_1[2], (MR_Word) &analysis__analysis__type_ctor_info_func_id_0, (MR_Word) &analysis_scalar_common_2[12], analysis__FuncImdgA_4, analysis__FuncImdgB_5, analysis__FuncImdg_6);
#line 1179 "analysis.m"
      return;
    }
#line 1178 "analysis.m"
  }
#line 1175 "analysis.m"
}

#line 1172 "analysis.m"
static MR_bool MR_CALL 
analysis__clear_imdg_entries_pointing_at_3_3_p_0_1(
#line 1172 "analysis.m"
  MR_Box analysis__closure_arg,
#line 1172 "analysis.m"
  MR_Box analysis__wrapper_arg_1)
#line 1172 "analysis.m"
{
#line 1172 "analysis.m"
  {
#line 1172 "analysis.m"
    MR_bool analysis__succeeded;
#line 1172 "analysis.m"
    MR_Box analysis__closure = analysis__closure_arg;

#line 1172 "analysis.m"
    {
#line 1172 "analysis.m"
      return analysis__succeeded = analysis__IntroducedFrom__pred__clear_imdg_entries_pointing_at_3__1172__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 3))), ((MR_Word) analysis__wrapper_arg_1));
    }
#line 1172 "analysis.m"
    return analysis__succeeded;
#line 1172 "analysis.m"
  }
#line 1172 "analysis.m"
}

#line 1168 "analysis.m"
void MR_CALL 
analysis__clear_imdg_entries_pointing_at_3_3_p_0(
#line 1168 "analysis.m"
  MR_Word analysis__ModuleName_4,
#line 1168 "analysis.m"
  MR_Word analysis__Arcs0_5,
#line 1168 "analysis.m"
  MR_Word * analysis__Arcs_6)
#line 1168 "analysis.m"
{
#line 1171 "analysis.m"
  {
#line 1171 "analysis.m"
    MR_bool analysis__succeeded;
#line 1171 "analysis.m"
    MR_Word analysis__V_8_8;

#line 1172 "analysis.m"
    {
#line 1172 "analysis.m"
      analysis__V_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1172 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_8_8, 0) = ((MR_Box) (&analysis_scalar_common_13[1]));
#line 1172 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_8_8, 1) = ((MR_Box) (analysis__clear_imdg_entries_pointing_at_3_3_p_0_1));
#line 1172 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_8_8, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1172 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_8_8, 3) = ((MR_Box) (analysis__ModuleName_4));
#line 1172 "analysis.m"
    }
#line 1172 "analysis.m"
    {
#line 1172 "analysis.m"
      mercury__list__filter_3_p_0((MR_Word) &analysis__analysis__type_ctor_info_imdg_arc_0, analysis__V_8_8, analysis__Arcs0_5, analysis__Arcs_6);
#line 1172 "analysis.m"
      return;
    }
#line 1171 "analysis.m"
  }
#line 1168 "analysis.m"
}

#line 1165 "analysis.m"
static void MR_CALL 
analysis__clear_imdg_entries_pointing_at_2_3_p_0_1(
#line 1165 "analysis.m"
  MR_Box analysis__closure_arg,
#line 1165 "analysis.m"
  MR_Box analysis__wrapper_arg_1,
#line 1165 "analysis.m"
  MR_Box * analysis__wrapper_arg_2)
#line 1165 "analysis.m"
{
#line 1165 "analysis.m"
  {
#line 1165 "analysis.m"
    MR_Box analysis__closure = analysis__closure_arg;
#line 1165 "analysis.m"
    MR_Word analysis__conv0_Arcs_6;

#line 1165 "analysis.m"
    {
#line 1165 "analysis.m"
      analysis__clear_imdg_entries_pointing_at_3_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 3))), ((MR_Word) analysis__wrapper_arg_1), &analysis__conv0_Arcs_6);
    }
#line 1165 "analysis.m"
    *analysis__wrapper_arg_2 = ((MR_Box) (analysis__conv0_Arcs_6));
#line 1165 "analysis.m"
  }
#line 1165 "analysis.m"
}

#line 1160 "analysis.m"
void MR_CALL 
analysis__clear_imdg_entries_pointing_at_2_3_p_0(
#line 1160 "analysis.m"
  MR_Word analysis__ModuleName_4,
#line 1160 "analysis.m"
  MR_Word analysis__FuncMap0_5,
#line 1160 "analysis.m"
  MR_Word * analysis__FuncMap_6)
#line 1160 "analysis.m"
{
#line 1164 "analysis.m"
  {
#line 1164 "analysis.m"
    MR_bool analysis__succeeded;
#line 1164 "analysis.m"
    MR_Word analysis__TypeInfo_10_10;
#line 1164 "analysis.m"
    MR_Word analysis__V_7_7;

#line 1165 "analysis.m"
    {
#line 1165 "analysis.m"
      analysis__V_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1165 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_7_7, 0) = ((MR_Box) (&analysis_scalar_common_4[5]));
#line 1165 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_7_7, 1) = ((MR_Box) (analysis__clear_imdg_entries_pointing_at_2_3_p_0_1));
#line 1165 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_7_7, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1165 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_7_7, 3) = ((MR_Box) (analysis__ModuleName_4));
#line 1165 "analysis.m"
    }
#line 9889 "analysis.c"
    analysis__TypeInfo_10_10 = (MR_Word) &analysis_scalar_common_1[2];
#line 1165 "analysis.m"
    {
#line 1165 "analysis.m"
      mercury__map__map_values_only_3_p_0(analysis__TypeInfo_10_10, analysis__TypeInfo_10_10, (MR_Word) &analysis__analysis__type_ctor_info_func_id_0, analysis__V_7_7, analysis__FuncMap0_5, analysis__FuncMap_6);
#line 1165 "analysis.m"
      return;
    }
#line 1164 "analysis.m"
  }
#line 1160 "analysis.m"
}

#line 1157 "analysis.m"
static void MR_CALL 
analysis__clear_imdg_entries_pointing_at_3_p_0_1(
#line 1157 "analysis.m"
  MR_Box analysis__closure_arg,
#line 1157 "analysis.m"
  MR_Box analysis__wrapper_arg_1,
#line 1157 "analysis.m"
  MR_Box * analysis__wrapper_arg_2)
#line 1157 "analysis.m"
{
#line 1157 "analysis.m"
  {
#line 1157 "analysis.m"
    MR_Box analysis__closure = analysis__closure_arg;
#line 1157 "analysis.m"
    MR_Word analysis__conv0_FuncMap_6;

#line 1157 "analysis.m"
    {
#line 1157 "analysis.m"
      analysis__clear_imdg_entries_pointing_at_2_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 3))), ((MR_Word) analysis__wrapper_arg_1), &analysis__conv0_FuncMap_6);
    }
#line 1157 "analysis.m"
    *analysis__wrapper_arg_2 = ((MR_Box) (analysis__conv0_FuncMap_6));
#line 1157 "analysis.m"
  }
#line 1157 "analysis.m"
}

#line 1152 "analysis.m"
void MR_CALL 
analysis__clear_imdg_entries_pointing_at_3_p_0(
#line 1152 "analysis.m"
  MR_Word analysis__ModuleName_4,
#line 1152 "analysis.m"
  MR_Word analysis__Map0_5,
#line 1152 "analysis.m"
  MR_Word * analysis__Map_6)
#line 1152 "analysis.m"
{
#line 1156 "analysis.m"
  {
#line 1156 "analysis.m"
    MR_bool analysis__succeeded;
#line 1156 "analysis.m"
    MR_Word analysis__TypeInfo_10_10;
#line 1156 "analysis.m"
    MR_Word analysis__V_7_7;

#line 1157 "analysis.m"
    {
#line 1157 "analysis.m"
      analysis__V_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1157 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_7_7, 0) = ((MR_Box) (&analysis_scalar_common_4[4]));
#line 1157 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_7_7, 1) = ((MR_Box) (analysis__clear_imdg_entries_pointing_at_3_p_0_1));
#line 1157 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_7_7, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1157 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_7_7, 3) = ((MR_Box) (analysis__ModuleName_4));
#line 1157 "analysis.m"
    }
#line 9967 "analysis.c"
    analysis__TypeInfo_10_10 = (MR_Word) &analysis_scalar_common_2[4];
#line 1157 "analysis.m"
    {
#line 1157 "analysis.m"
      mercury__map__map_values_only_3_p_0(analysis__TypeInfo_10_10, analysis__TypeInfo_10_10, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, analysis__V_7_7, analysis__Map0_5, analysis__Map_6);
#line 1157 "analysis.m"
      return;
    }
#line 1156 "analysis.m"
  }
#line 1152 "analysis.m"
}

#line 1142 "analysis.m"
void MR_CALL 
analysis__write_clearing_entries_4_p_0(
#line 1142 "analysis.m"
  MR_Word analysis__ModuleName_5,
#line 1142 "analysis.m"
  MR_Word analysis__ImportedModuleName_6)
#line 1142 "analysis.m"
{
#line 1145 "analysis.m"
  {
#line 1145 "analysis.m"
    MR_bool analysis__succeeded;
#line 1145 "analysis.m"
    MR_Word analysis__TypeCtorInfo_18_18;

#line 1146 "analysis.m"
    {
#line 1146 "analysis.m"
      mercury__io__write_string_3_p_0((MR_String) "% Clearing entries involving ");
    }
#line 10002 "analysis.c"
    analysis__TypeCtorInfo_18_18 = (MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0;
#line 1147 "analysis.m"
    {
#line 1147 "analysis.m"
      mercury__io__write_3_p_0(analysis__TypeCtorInfo_18_18, ((MR_Box) (analysis__ModuleName_5)));
    }
#line 1148 "analysis.m"
    {
#line 1148 "analysis.m"
      mercury__io__write_string_3_p_0((MR_String) " from ");
    }
#line 1149 "analysis.m"
    {
#line 1149 "analysis.m"
      mercury__io__write_3_p_0(analysis__TypeCtorInfo_18_18, ((MR_Box) (analysis__ImportedModuleName_6)));
    }
#line 1150 "analysis.m"
    {
#line 1150 "analysis.m"
      mercury__io__write_string_3_p_0((MR_String) "\'s IMDG.\n");
#line 1150 "analysis.m"
      return;
    }
#line 1145 "analysis.m"
  }
#line 1142 "analysis.m"
}

#line 1135 "analysis.m"
static void MR_CALL 
analysis__update_intermodule_dependencies_2_4_p_0_1(
#line 1135 "analysis.m"
  MR_Box analysis__closure_arg,
#line 1135 "analysis.m"
  MR_Box analysis__wrapper_arg_1,
#line 1135 "analysis.m"
  MR_Box analysis__wrapper_arg_2,
#line 1135 "analysis.m"
  MR_Box * analysis__wrapper_arg_3)
#line 1135 "analysis.m"
{
#line 1135 "analysis.m"
  {
#line 1135 "analysis.m"
    MR_Box analysis__closure = analysis__closure_arg;
#line 1135 "analysis.m"
    MR_Word analysis__conv2_FuncImdg_6;

#line 1135 "analysis.m"
    {
#line 1135 "analysis.m"
      analysis__combine_func_imdg_3_p_0(((MR_Word) analysis__wrapper_arg_1), ((MR_Word) analysis__wrapper_arg_2), &analysis__conv2_FuncImdg_6);
    }
#line 1135 "analysis.m"
    *analysis__wrapper_arg_3 = ((MR_Box) (analysis__conv2_FuncImdg_6));
#line 1135 "analysis.m"
  }
#line 1135 "analysis.m"
}

#line 1123 "analysis.m"
void MR_CALL 
analysis__update_intermodule_dependencies_2_4_p_0(
#line 1123 "analysis.m"
  MR_Word analysis__ModuleName_5,
#line 1123 "analysis.m"
  MR_Word analysis__ImportedModuleName_6,
#line 1123 "analysis.m"
  MR_Word analysis__STATE_VARIABLE_Info_0_13,
#line 1123 "analysis.m"
  MR_Word * analysis__STATE_VARIABLE_Info_14)
#line 1123 "analysis.m"
{
#line 1126 "analysis.m"
  {
#line 1126 "analysis.m"
    MR_bool analysis__succeeded;
#line 1126 "analysis.m"
    MR_Word analysis__TypeCtorInfo_84_84 = (MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0;
#line 1126 "analysis.m"
    MR_Word analysis__TypeInfo_85_85 = (MR_Word) &analysis_scalar_common_2[5];
#line 1126 "analysis.m"
    MR_Word analysis__IMDG0_8;
#line 1126 "analysis.m"
    MR_Word analysis__IMDG1_10;
#line 1126 "analysis.m"
    MR_Word analysis__IMDG_12;
#line 1126 "analysis.m"
    MR_Word analysis__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 9)));
#line 1126 "analysis.m"
    MR_Word analysis__STATE_VARIABLE_Info_21_21;
#line 1126 "analysis.m"
    MR_Word analysis__V_22_22;
#line 1126 "analysis.m"
    MR_Word analysis__V_23_23;
#line 1126 "analysis.m"
    MR_Word analysis__V_25_25;
#line 1126 "analysis.m"
    MR_Word analysis__V_26_26;
#line 1127 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_compiler_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 0)));
#line 1127 "analysis.m"
    MR_Box analysis__V_27_27 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 1));
#line 1127 "analysis.m"
    MR_Word analysis__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 2)));
#line 1127 "analysis.m"
    MR_Word analysis__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 3)));
#line 1127 "analysis.m"
    MR_Word analysis__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 4)));
#line 1127 "analysis.m"
    MR_Word analysis__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 5)));
#line 1127 "analysis.m"
    MR_Word analysis__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 6)));
#line 1127 "analysis.m"
    MR_Word analysis__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 7)));
#line 1127 "analysis.m"
    MR_Word analysis__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 8)));
#line 1127 "analysis.m"
    MR_Word analysis__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 10)));
#line 1127 "analysis.m"
    MR_Box analysis__conv0_IMDG0_8;
#line 1136 "analysis.m"
    MR_Word analysis__NewArcs_11;
#line 1134 "analysis.m"
    MR_Word analysis__V_19_19;
#line 1134 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_compiler_88;
#line 1134 "analysis.m"
    MR_Box analysis__V_36_36;
#line 1134 "analysis.m"
    MR_Word analysis__V_37_37;
#line 1134 "analysis.m"
    MR_Word analysis__V_38_38;
#line 1134 "analysis.m"
    MR_Word analysis__V_39_39;
#line 1134 "analysis.m"
    MR_Word analysis__V_40_40;
#line 1134 "analysis.m"
    MR_Word analysis__V_41_41;
#line 1134 "analysis.m"
    MR_Word analysis__V_42_42;
#line 1134 "analysis.m"
    MR_Word analysis__V_43_43;
#line 1134 "analysis.m"
    MR_Word analysis__V_44_44;
#line 1134 "analysis.m"
    MR_Box analysis__conv1_NewArcs_11;
#line 1139 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_compiler_94;
#line 1139 "analysis.m"
    MR_Box analysis__V_45_45;
#line 1139 "analysis.m"
    MR_Word analysis__V_46_46;
#line 1139 "analysis.m"
    MR_Word analysis__V_47_47;
#line 1139 "analysis.m"
    MR_Word analysis__V_48_48;
#line 1139 "analysis.m"
    MR_Word analysis__V_49_49;
#line 1139 "analysis.m"
    MR_Word analysis__V_50_50;
#line 1139 "analysis.m"
    MR_Word analysis__V_51_51;
#line 1139 "analysis.m"
    MR_Word analysis__V_52_52;
#line 1139 "analysis.m"
    MR_Word analysis__V_53_53;
#line 1139 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_compiler_95;
#line 1139 "analysis.m"
    MR_Box analysis__V_54_54;
#line 1139 "analysis.m"
    MR_Word analysis__V_55_55;
#line 1139 "analysis.m"
    MR_Word analysis__V_56_56;
#line 1139 "analysis.m"
    MR_Word analysis__V_57_57;
#line 1139 "analysis.m"
    MR_Word analysis__V_58_58;
#line 1139 "analysis.m"
    MR_Word analysis__V_59_59;
#line 1139 "analysis.m"
    MR_Word analysis__V_60_60;
#line 1139 "analysis.m"
    MR_Word analysis__V_61_61;
#line 1139 "analysis.m"
    MR_Word analysis__V_63_63;
#line 1139 "analysis.m"
    MR_Word analysis__V_62_62;
#line 1140 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_compiler_96;
#line 1140 "analysis.m"
    MR_Box analysis__V_64_64;
#line 1140 "analysis.m"
    MR_Word analysis__V_65_65;
#line 1140 "analysis.m"
    MR_Word analysis__V_66_66;
#line 1140 "analysis.m"
    MR_Word analysis__V_67_67;
#line 1140 "analysis.m"
    MR_Word analysis__V_68_68;
#line 1140 "analysis.m"
    MR_Word analysis__V_69_69;
#line 1140 "analysis.m"
    MR_Word analysis__V_70_70;
#line 1140 "analysis.m"
    MR_Word analysis__V_71_71;
#line 1140 "analysis.m"
    MR_Word analysis__V_72_72;
#line 1140 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_compiler_97;
#line 1140 "analysis.m"
    MR_Box analysis__V_73_73;
#line 1140 "analysis.m"
    MR_Word analysis__V_74_74;
#line 1140 "analysis.m"
    MR_Word analysis__V_75_75;
#line 1140 "analysis.m"
    MR_Word analysis__V_76_76;
#line 1140 "analysis.m"
    MR_Word analysis__V_77_77;
#line 1140 "analysis.m"
    MR_Word analysis__V_78_78;
#line 1140 "analysis.m"
    MR_Word analysis__V_79_79;
#line 1140 "analysis.m"
    MR_Word analysis__V_80_80;
#line 1140 "analysis.m"
    MR_Word analysis__V_81_81;
#line 1140 "analysis.m"
    MR_Word analysis__V_82_82;

#line 1127 "analysis.m"
    {
#line 1127 "analysis.m"
      mercury__map__lookup_3_p_0(analysis__TypeCtorInfo_84_84, analysis__TypeInfo_85_85, analysis__V_15_15, ((MR_Box) (analysis__ImportedModuleName_6)), &analysis__conv0_IMDG0_8);
    }
#line 1127 "analysis.m"
    analysis__IMDG0_8 = ((MR_Word) analysis__conv0_IMDG0_8);
#line 1129 "analysis.m"
    {
#line 1129 "analysis.m"
      analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_109_115_103_95_95_104_111_49_95_95_91_51_93_95_48_3_p_0(analysis__ModuleName_5, analysis__ImportedModuleName_6);
    }
#line 1132 "analysis.m"
    {
#line 1132 "analysis.m"
      analysis__clear_imdg_entries_pointing_at_3_p_0(analysis__ModuleName_5, analysis__IMDG0_8, &analysis__IMDG1_10);
    }
#line 1134 "analysis.m"
    analysis__TypeClassInfo_for_compiler_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 0)));
#line 1134 "analysis.m"
    analysis__V_36_36 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 1));
#line 1134 "analysis.m"
    analysis__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 2)));
#line 1134 "analysis.m"
    analysis__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 3)));
#line 1134 "analysis.m"
    analysis__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 4)));
#line 1134 "analysis.m"
    analysis__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 5)));
#line 1134 "analysis.m"
    analysis__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 6)));
#line 1134 "analysis.m"
    analysis__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 7)));
#line 1134 "analysis.m"
    analysis__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 8)));
#line 1134 "analysis.m"
    analysis__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 9)));
#line 1134 "analysis.m"
    analysis__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 10)));
#line 1134 "analysis.m"
    {
#line 1134 "analysis.m"
      analysis__succeeded = mercury__map__elem_2_f_0(analysis__TypeCtorInfo_84_84, analysis__TypeInfo_85_85, ((MR_Box) (analysis__ImportedModuleName_6)), analysis__V_19_19, &analysis__conv1_NewArcs_11);
    }
#line 1134 "analysis.m"
    if (analysis__succeeded)
#line 1134 "analysis.m"
      {
#line 1134 "analysis.m"
        analysis__NewArcs_11 = ((MR_Word) analysis__conv1_NewArcs_11);
#line 1134 "analysis.m"
        analysis__succeeded = MR_TRUE;
#line 1134 "analysis.m"
      }
#line 1136 "analysis.m"
    if (analysis__succeeded)
#line 1135 "analysis.m"
      {
#line 1135 "analysis.m"
        {
#line 1135 "analysis.m"
          mercury__map__union_4_p_1((MR_Word) &analysis_scalar_common_2[4], (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &analysis_scalar_common_2[11], analysis__IMDG1_10, analysis__NewArcs_11, &analysis__IMDG_12);
        }
#line 1135 "analysis.m"
      }
#line 1136 "analysis.m"
    else
#line 1137 "analysis.m"
      analysis__IMDG_12 = analysis__IMDG1_10;
#line 1139 "analysis.m"
    analysis__TypeClassInfo_for_compiler_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 0)));
#line 1139 "analysis.m"
    analysis__V_45_45 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 1));
#line 1139 "analysis.m"
    analysis__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 2)));
#line 1139 "analysis.m"
    analysis__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 3)));
#line 1139 "analysis.m"
    analysis__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 4)));
#line 1139 "analysis.m"
    analysis__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 5)));
#line 1139 "analysis.m"
    analysis__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 6)));
#line 1139 "analysis.m"
    analysis__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 7)));
#line 1139 "analysis.m"
    analysis__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 8)));
#line 1139 "analysis.m"
    analysis__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 9)));
#line 1139 "analysis.m"
    analysis__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 10)));
#line 1139 "analysis.m"
    {
#line 1139 "analysis.m"
      analysis__V_23_23 = mercury__map__f_101_108_101_109_32_58_61_3_f_0(analysis__TypeCtorInfo_84_84, analysis__TypeInfo_85_85, ((MR_Box) (analysis__ImportedModuleName_6)), analysis__V_22_22, ((MR_Box) (analysis__IMDG_12)));
    }
#line 1139 "analysis.m"
    analysis__TypeClassInfo_for_compiler_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 0)));
#line 1139 "analysis.m"
    analysis__V_54_54 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 1));
#line 1139 "analysis.m"
    analysis__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 2)));
#line 1139 "analysis.m"
    analysis__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 3)));
#line 1139 "analysis.m"
    analysis__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 4)));
#line 1139 "analysis.m"
    analysis__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 5)));
#line 1139 "analysis.m"
    analysis__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 6)));
#line 1139 "analysis.m"
    analysis__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 7)));
#line 1139 "analysis.m"
    analysis__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 8)));
#line 1139 "analysis.m"
    analysis__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 9)));
#line 1139 "analysis.m"
    analysis__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 10)));
#line 1139 "analysis.m"
    {
#line 1139 "analysis.m"
      analysis__STATE_VARIABLE_Info_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 1139 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_21_21, 0) = ((MR_Box) (analysis__TypeClassInfo_for_compiler_95));
#line 1139 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_21_21, 1) = analysis__V_54_54;
#line 1139 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_21_21, 2) = ((MR_Box) (analysis__V_55_55));
#line 1139 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_21_21, 3) = ((MR_Box) (analysis__V_56_56));
#line 1139 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_21_21, 4) = ((MR_Box) (analysis__V_57_57));
#line 1139 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_21_21, 5) = ((MR_Box) (analysis__V_58_58));
#line 1139 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_21_21, 6) = ((MR_Box) (analysis__V_59_59));
#line 1139 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_21_21, 7) = ((MR_Box) (analysis__V_60_60));
#line 1139 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_21_21, 8) = ((MR_Box) (analysis__V_61_61));
#line 1139 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_21_21, 9) = ((MR_Box) (analysis__V_23_23));
#line 1139 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_21_21, 10) = ((MR_Box) (analysis__V_63_63));
#line 1139 "analysis.m"
    }
#line 1140 "analysis.m"
    analysis__TypeClassInfo_for_compiler_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_21_21, (MR_Integer) 0)));
#line 1140 "analysis.m"
    analysis__V_64_64 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_21_21, (MR_Integer) 1));
#line 1140 "analysis.m"
    analysis__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_21_21, (MR_Integer) 2)));
#line 1140 "analysis.m"
    analysis__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_21_21, (MR_Integer) 3)));
#line 1140 "analysis.m"
    analysis__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_21_21, (MR_Integer) 4)));
#line 1140 "analysis.m"
    analysis__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_21_21, (MR_Integer) 5)));
#line 1140 "analysis.m"
    analysis__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_21_21, (MR_Integer) 6)));
#line 1140 "analysis.m"
    analysis__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_21_21, (MR_Integer) 7)));
#line 1140 "analysis.m"
    analysis__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_21_21, (MR_Integer) 8)));
#line 1140 "analysis.m"
    analysis__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_21_21, (MR_Integer) 9)));
#line 1140 "analysis.m"
    analysis__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_21_21, (MR_Integer) 10)));
#line 1140 "analysis.m"
    {
#line 1140 "analysis.m"
      analysis__V_25_25 = mercury__map__delete_2_f_0(analysis__TypeCtorInfo_84_84, analysis__TypeInfo_85_85, analysis__V_26_26, ((MR_Box) (analysis__ImportedModuleName_6)));
    }
#line 1140 "analysis.m"
    analysis__TypeClassInfo_for_compiler_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_21_21, (MR_Integer) 0)));
#line 1140 "analysis.m"
    analysis__V_73_73 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_21_21, (MR_Integer) 1));
#line 1140 "analysis.m"
    analysis__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_21_21, (MR_Integer) 2)));
#line 1140 "analysis.m"
    analysis__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_21_21, (MR_Integer) 3)));
#line 1140 "analysis.m"
    analysis__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_21_21, (MR_Integer) 4)));
#line 1140 "analysis.m"
    analysis__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_21_21, (MR_Integer) 5)));
#line 1140 "analysis.m"
    analysis__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_21_21, (MR_Integer) 6)));
#line 1140 "analysis.m"
    analysis__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_21_21, (MR_Integer) 7)));
#line 1140 "analysis.m"
    analysis__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_21_21, (MR_Integer) 8)));
#line 1140 "analysis.m"
    analysis__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_21_21, (MR_Integer) 9)));
#line 1140 "analysis.m"
    analysis__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_21_21, (MR_Integer) 10)));
#line 1140 "analysis.m"
    {
#line 1140 "analysis.m"
      MR_Word base;
#line 1140 "analysis.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 1140 "analysis.m"
      *analysis__STATE_VARIABLE_Info_14 = base;
#line 1140 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (analysis__TypeClassInfo_for_compiler_97));
#line 1140 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 1) = analysis__V_73_73;
#line 1140 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (analysis__V_74_74));
#line 1140 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (analysis__V_75_75));
#line 1140 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (analysis__V_76_76));
#line 1140 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (analysis__V_77_77));
#line 1140 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (analysis__V_78_78));
#line 1140 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (analysis__V_79_79));
#line 1140 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (analysis__V_80_80));
#line 1140 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (analysis__V_81_81));
#line 1140 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (analysis__V_25_25));
#line 1140 "analysis.m"
    }
#line 1126 "analysis.m"
  }
#line 1123 "analysis.m"
}

#line 1120 "analysis.m"
static void MR_CALL 
analysis__update_intermodule_dependencies_4_p_0_1(
#line 1120 "analysis.m"
  MR_Box analysis__closure_arg,
#line 1120 "analysis.m"
  MR_Box analysis__wrapper_arg_1,
#line 1120 "analysis.m"
  MR_Box analysis__wrapper_arg_2,
#line 1120 "analysis.m"
  MR_Box * analysis__wrapper_arg_3)
#line 1120 "analysis.m"
{
#line 1120 "analysis.m"
  {
#line 1120 "analysis.m"
    MR_Box analysis__closure = analysis__closure_arg;
#line 1120 "analysis.m"
    MR_Word analysis__conv0_STATE_VARIABLE_Info_14;

#line 1120 "analysis.m"
    {
#line 1120 "analysis.m"
      analysis__update_intermodule_dependencies_2_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 3))), ((MR_Word) analysis__wrapper_arg_1), ((MR_Word) analysis__wrapper_arg_2), &analysis__conv0_STATE_VARIABLE_Info_14);
    }
#line 1120 "analysis.m"
    *analysis__wrapper_arg_3 = ((MR_Box) (analysis__conv0_STATE_VARIABLE_Info_14));
#line 1120 "analysis.m"
  }
#line 1120 "analysis.m"
}

#line 1116 "analysis.m"
void MR_CALL 
analysis__update_intermodule_dependencies_4_p_0(
#line 1116 "analysis.m"
  MR_Word analysis__ModuleName_5,
#line 1116 "analysis.m"
  MR_Word analysis__LocalImportedModules_6,
#line 1116 "analysis.m"
  MR_Word analysis__STATE_VARIABLE_Info_0_8,
#line 1116 "analysis.m"
  MR_Word * analysis__STATE_VARIABLE_Info_9)
#line 1116 "analysis.m"
{
#line 1119 "analysis.m"
  {
#line 1119 "analysis.m"
    MR_bool analysis__succeeded;
#line 1119 "analysis.m"
    MR_Word analysis__V_10_10;
#line 1120 "analysis.m"
    MR_Box analysis__conv1_STATE_VARIABLE_Info_9;

#line 1120 "analysis.m"
    {
#line 1120 "analysis.m"
      analysis__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1120 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_10_10, 0) = ((MR_Box) (&analysis_scalar_common_6[1]));
#line 1120 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_10_10, 1) = ((MR_Box) (analysis__update_intermodule_dependencies_4_p_0_1));
#line 1120 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_10_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1120 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_10_10, 3) = ((MR_Box) (analysis__ModuleName_5));
#line 1120 "analysis.m"
    }
#line 1120 "analysis.m"
    {
#line 1120 "analysis.m"
      mercury__set__fold_4_p_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0, (MR_Word) &analysis__analysis__type_ctor_info_analysis_info_0, analysis__V_10_10, analysis__LocalImportedModules_6, ((MR_Box) (analysis__STATE_VARIABLE_Info_0_8)), &analysis__conv1_STATE_VARIABLE_Info_9);
    }
#line 1120 "analysis.m"
    *analysis__STATE_VARIABLE_Info_9 = ((MR_Word) analysis__conv1_STATE_VARIABLE_Info_9);
#line 1119 "analysis.m"
  }
#line 1116 "analysis.m"
}

#line 1098 "analysis.m"
void MR_CALL 
analysis__write_tainting_module_4_p_0(
#line 1098 "analysis.m"
  MR_Word analysis__ModuleName_5,
#line 1098 "analysis.m"
  MR_Word analysis__ModuleStatus_6)
#line 1098 "analysis.m"
{
#line 1101 "analysis.m"
  {
#line 1101 "analysis.m"
    MR_bool analysis__succeeded;
#line 1101 "analysis.m"
    MR_Word analysis__TypeCtorInfo_17_17 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;

#line 1102 "analysis.m"
    {
#line 1102 "analysis.m"
      mercury__io__print_3_p_0(analysis__TypeCtorInfo_17_17, ((MR_Box) ((MR_String) "% Tainting the overall module status of ")));
    }
#line 1103 "analysis.m"
    {
#line 1103 "analysis.m"
      mercury__io__print_3_p_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0, ((MR_Box) (analysis__ModuleName_5)));
    }
#line 1104 "analysis.m"
    {
#line 1104 "analysis.m"
      mercury__io__print_3_p_0(analysis__TypeCtorInfo_17_17, ((MR_Box) ((MR_String) " with ")));
    }
#line 1105 "analysis.m"
    {
#line 1105 "analysis.m"
      mercury__io__print_3_p_0((MR_Word) &analysis__analysis__type_ctor_info_analysis_status_0, ((MR_Box) (analysis__ModuleStatus_6)));
    }
#line 1106 "analysis.m"
    {
#line 1106 "analysis.m"
      mercury__io__nl_2_p_0();
#line 1106 "analysis.m"
      return;
    }
#line 1101 "analysis.m"
  }
#line 1098 "analysis.m"
}

#line 1082 "analysis.m"
void MR_CALL 
analysis__write_changed_answer_6_p_0(
#line 1082 "analysis.m"
  MR_Word analysis__TypeInfo_for_Answer_29,
#line 1082 "analysis.m"
  MR_Box analysis__OldAnswer_7,
#line 1082 "analysis.m"
  MR_Box analysis__NewAnswer_8,
#line 1082 "analysis.m"
  MR_Word analysis__Status_9,
#line 1082 "analysis.m"
  MR_Word analysis__DepModules_10)
#line 1082 "analysis.m"
{
#line 1085 "analysis.m"
  {
#line 1085 "analysis.m"
    MR_bool analysis__succeeded;

#line 1086 "analysis.m"
    {
#line 1086 "analysis.m"
      mercury__io__write_string_3_p_0((MR_String) "% ");
    }
#line 1087 "analysis.m"
    {
#line 1087 "analysis.m"
      mercury__io__write_3_p_0(analysis__TypeInfo_for_Answer_29, analysis__OldAnswer_7);
    }
#line 1088 "analysis.m"
    {
#line 1088 "analysis.m"
      mercury__io__write_string_3_p_0((MR_String) " changed to ");
    }
#line 1089 "analysis.m"
    {
#line 1089 "analysis.m"
      mercury__io__write_3_p_0(analysis__TypeInfo_for_Answer_29, analysis__NewAnswer_8);
    }
#line 1090 "analysis.m"
    {
#line 1090 "analysis.m"
      mercury__io__nl_2_p_0();
    }
#line 1091 "analysis.m"
    {
#line 1091 "analysis.m"
      mercury__io__write_string_3_p_0((MR_String) "Mark dependent modules as ");
    }
#line 1092 "analysis.m"
    {
#line 1092 "analysis.m"
      mercury__io__write_3_p_0((MR_Word) &analysis__analysis__type_ctor_info_analysis_status_0, ((MR_Box) (analysis__Status_9)));
    }
#line 1093 "analysis.m"
    {
#line 1093 "analysis.m"
      mercury__io__nl_2_p_0();
    }
#line 1094 "analysis.m"
    {
#line 1094 "analysis.m"
      mercury__io__write_string_3_p_0((MR_String) "The modules to mark are: ");
    }
#line 1095 "analysis.m"
    {
#line 1095 "analysis.m"
      mercury__io__write_3_p_0((MR_Word) &analysis_scalar_common_1[3], ((MR_Box) (analysis__DepModules_10)));
    }
#line 1096 "analysis.m"
    {
#line 1096 "analysis.m"
      mercury__io__nl_2_p_0();
#line 1096 "analysis.m"
      return;
    }
#line 1085 "analysis.m"
  }
#line 1082 "analysis.m"
}

#line 1068 "analysis.m"
void MR_CALL 
analysis__write_no_change_in_result_6_p_0(
#line 1068 "analysis.m"
  MR_Word analysis__TypeInfo_for_Call_27,
#line 1068 "analysis.m"
  MR_Word analysis__TypeInfo_for_Answer_28,
#line 1068 "analysis.m"
  MR_Word analysis__ModuleName_7,
#line 1068 "analysis.m"
  MR_Word analysis__FuncId_8,
#line 1068 "analysis.m"
  MR_Box analysis__Call_9,
#line 1068 "analysis.m"
  MR_Box analysis__NewAnswer_10)
#line 1068 "analysis.m"
{
#line 1071 "analysis.m"
  {
#line 1071 "analysis.m"
    MR_bool analysis__succeeded;

#line 1072 "analysis.m"
    {
#line 1072 "analysis.m"
      mercury__io__write_string_3_p_0((MR_String) "% No change in the result ");
    }
#line 1073 "analysis.m"
    {
#line 1073 "analysis.m"
      mercury__io__write_3_p_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0, ((MR_Box) (analysis__ModuleName_7)));
    }
#line 1074 "analysis.m"
    {
#line 1074 "analysis.m"
      mercury__io__write_string_3_p_0((MR_String) ".");
    }
#line 1075 "analysis.m"
    {
#line 1075 "analysis.m"
      mercury__io__write_3_p_0((MR_Word) &analysis__analysis__type_ctor_info_func_id_0, ((MR_Box) (analysis__FuncId_8)));
    }
#line 1076 "analysis.m"
    {
#line 1076 "analysis.m"
      mercury__io__write_string_3_p_0((MR_String) ":");
    }
#line 1077 "analysis.m"
    {
#line 1077 "analysis.m"
      mercury__io__write_3_p_0(analysis__TypeInfo_for_Call_27, analysis__Call_9);
    }
#line 1078 "analysis.m"
    {
#line 1078 "analysis.m"
      mercury__io__write_string_3_p_0((MR_String) " --> ");
    }
#line 1079 "analysis.m"
    {
#line 1079 "analysis.m"
      mercury__io__write_3_p_0(analysis__TypeInfo_for_Answer_28, analysis__NewAnswer_10);
    }
#line 1080 "analysis.m"
    {
#line 1080 "analysis.m"
      mercury__io__nl_2_p_0();
#line 1080 "analysis.m"
      return;
    }
#line 1071 "analysis.m"
  }
#line 1068 "analysis.m"
}

#line 1056 "analysis.m"
void MR_CALL 
analysis__ensure_module_status_loaded_6_p_0(
#line 1056 "analysis.m"
  MR_Word analysis__Globals_7,
#line 1056 "analysis.m"
  MR_Word analysis__ModuleName_8,
#line 1056 "analysis.m"
  MR_Word analysis__STATE_VARIABLE_Info_0_12,
#line 1056 "analysis.m"
  MR_Word * analysis__STATE_VARIABLE_Info_13)
#line 1056 "analysis.m"
{
#line 1062 "analysis.m"
  {
#line 1062 "analysis.m"
    MR_bool analysis__succeeded;
#line 1060 "analysis.m"
    MR_Word analysis__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 6)));
#line 1060 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_compiler_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 0)));
#line 1060 "analysis.m"
    MR_Box analysis__V_22_22 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 1));
#line 1060 "analysis.m"
    MR_Word analysis__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 2)));
#line 1060 "analysis.m"
    MR_Word analysis__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 3)));
#line 1060 "analysis.m"
    MR_Word analysis__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 4)));
#line 1060 "analysis.m"
    MR_Word analysis__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 5)));
#line 1060 "analysis.m"
    MR_Word analysis__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 7)));
#line 1060 "analysis.m"
    MR_Word analysis__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 8)));
#line 1060 "analysis.m"
    MR_Word analysis__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 9)));
#line 1060 "analysis.m"
    MR_Word analysis__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 10)));

#line 1060 "analysis.m"
    {
#line 1060 "analysis.m"
      analysis__succeeded = mercury__map__contains_2_p_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0, (MR_Word) &analysis__analysis__type_ctor_info_analysis_status_0, analysis__V_16_16, ((MR_Box) (analysis__ModuleName_8)));
    }
#line 1062 "analysis.m"
    if (analysis__succeeded)
#line 1061 "analysis.m"
      *analysis__STATE_VARIABLE_Info_13 = analysis__STATE_VARIABLE_Info_0_12;
#line 1062 "analysis.m"
    else
#line 1064 "analysis.m"
      {
#line 1064 "analysis.m"
        MR_Word analysis__TypeClassInfo_for_compiler_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 0)));
#line 1064 "analysis.m"
        MR_Word analysis__ModuleStatus_11;
#line 1064 "analysis.m"
        MR_Box analysis__V_17_17 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 1));
#line 1064 "analysis.m"
        MR_Word analysis__V_20_20;
#line 1064 "analysis.m"
        MR_Word analysis__V_21_21;
#line 1063 "analysis.m"
        MR_Word analysis__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 2)));
#line 1063 "analysis.m"
        MR_Word analysis__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 3)));
#line 1063 "analysis.m"
        MR_Word analysis__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 4)));
#line 1063 "analysis.m"
        MR_Word analysis__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 5)));
#line 1063 "analysis.m"
        MR_Word analysis__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 6)));
#line 1063 "analysis.m"
        MR_Word analysis__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 7)));
#line 1063 "analysis.m"
        MR_Word analysis__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 8)));
#line 1063 "analysis.m"
        MR_Word analysis__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 9)));
#line 1063 "analysis.m"
        MR_Word analysis__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 10)));
#line 1065 "analysis.m"
        MR_Word analysis__TypeClassInfo_for_compiler_63;
#line 1065 "analysis.m"
        MR_Box analysis__V_40_40;
#line 1065 "analysis.m"
        MR_Word analysis__V_41_41;
#line 1065 "analysis.m"
        MR_Word analysis__V_42_42;
#line 1065 "analysis.m"
        MR_Word analysis__V_43_43;
#line 1065 "analysis.m"
        MR_Word analysis__V_44_44;
#line 1065 "analysis.m"
        MR_Word analysis__V_45_45;
#line 1065 "analysis.m"
        MR_Word analysis__V_46_46;
#line 1065 "analysis.m"
        MR_Word analysis__V_47_47;
#line 1065 "analysis.m"
        MR_Word analysis__V_48_48;
#line 1065 "analysis.m"
        MR_Word analysis__TypeClassInfo_for_compiler_66;
#line 1065 "analysis.m"
        MR_Box analysis__V_49_49;
#line 1065 "analysis.m"
        MR_Word analysis__V_50_50;
#line 1065 "analysis.m"
        MR_Word analysis__V_51_51;
#line 1065 "analysis.m"
        MR_Word analysis__V_52_52;
#line 1065 "analysis.m"
        MR_Word analysis__V_53_53;
#line 1065 "analysis.m"
        MR_Word analysis__V_55_55;
#line 1065 "analysis.m"
        MR_Word analysis__V_56_56;
#line 1065 "analysis.m"
        MR_Word analysis__V_57_57;
#line 1065 "analysis.m"
        MR_Word analysis__V_58_58;
#line 1065 "analysis.m"
        MR_Word analysis__V_54_54;

#line 1336 "analysis.m"
        {
#line 1336 "analysis.m"
          analysis__file__read_module_overall_status_6_p_0(analysis__TypeClassInfo_for_compiler_62, analysis__V_17_17, analysis__Globals_7, analysis__ModuleName_8, &analysis__ModuleStatus_11);
        }
#line 1065 "analysis.m"
        analysis__TypeClassInfo_for_compiler_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 0)));
#line 1065 "analysis.m"
        analysis__V_40_40 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 1));
#line 1065 "analysis.m"
        analysis__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 2)));
#line 1065 "analysis.m"
        analysis__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 3)));
#line 1065 "analysis.m"
        analysis__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 4)));
#line 1065 "analysis.m"
        analysis__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 5)));
#line 1065 "analysis.m"
        analysis__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 6)));
#line 1065 "analysis.m"
        analysis__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 7)));
#line 1065 "analysis.m"
        analysis__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 8)));
#line 1065 "analysis.m"
        analysis__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 9)));
#line 1065 "analysis.m"
        analysis__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 10)));
#line 1065 "analysis.m"
        {
#line 1065 "analysis.m"
          analysis__V_21_21 = mercury__map__f_101_108_101_109_32_58_61_3_f_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0, (MR_Word) &analysis__analysis__type_ctor_info_analysis_status_0, ((MR_Box) (analysis__ModuleName_8)), analysis__V_20_20, ((MR_Box) (analysis__ModuleStatus_11)));
        }
#line 1065 "analysis.m"
        analysis__TypeClassInfo_for_compiler_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 0)));
#line 1065 "analysis.m"
        analysis__V_49_49 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 1));
#line 1065 "analysis.m"
        analysis__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 2)));
#line 1065 "analysis.m"
        analysis__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 3)));
#line 1065 "analysis.m"
        analysis__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 4)));
#line 1065 "analysis.m"
        analysis__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 5)));
#line 1065 "analysis.m"
        analysis__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 6)));
#line 1065 "analysis.m"
        analysis__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 7)));
#line 1065 "analysis.m"
        analysis__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 8)));
#line 1065 "analysis.m"
        analysis__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 9)));
#line 1065 "analysis.m"
        analysis__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 10)));
#line 1065 "analysis.m"
        {
#line 1065 "analysis.m"
          MR_Word base;
#line 1065 "analysis.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 1065 "analysis.m"
          *analysis__STATE_VARIABLE_Info_13 = base;
#line 1065 "analysis.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (analysis__TypeClassInfo_for_compiler_66));
#line 1065 "analysis.m"
          MR_hl_field(MR_mktag(0), base, 1) = analysis__V_49_49;
#line 1065 "analysis.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (analysis__V_50_50));
#line 1065 "analysis.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (analysis__V_51_51));
#line 1065 "analysis.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (analysis__V_52_52));
#line 1065 "analysis.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (analysis__V_53_53));
#line 1065 "analysis.m"
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (analysis__V_21_21));
#line 1065 "analysis.m"
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (analysis__V_55_55));
#line 1065 "analysis.m"
          MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (analysis__V_56_56));
#line 1065 "analysis.m"
          MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (analysis__V_57_57));
#line 1065 "analysis.m"
          MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (analysis__V_58_58));
#line 1065 "analysis.m"
        }
#line 1064 "analysis.m"
      }
#line 1062 "analysis.m"
  }
#line 1056 "analysis.m"
}

#line 1032 "analysis.m"
void MR_CALL 
analysis__taint_module_overall_status_7_p_0(
#line 1032 "analysis.m"
  MR_Word analysis__Globals_8,
#line 1032 "analysis.m"
  MR_Word analysis__Status_9,
#line 1032 "analysis.m"
  MR_Word analysis__ModuleName_10,
#line 1032 "analysis.m"
  MR_Word analysis__STATE_VARIABLE_Info_0_15,
#line 1032 "analysis.m"
  MR_Word * analysis__STATE_VARIABLE_Info_16)
#line 1032 "analysis.m"
{
#line 1038 "analysis.m"
  {
#line 1038 "analysis.m"
    MR_bool analysis__succeeded;

#line 1038 "analysis.m"
    if ((analysis__Status_9 == (MR_Integer) 2))
#line 1038 "analysis.m"
      *analysis__STATE_VARIABLE_Info_16 = analysis__STATE_VARIABLE_Info_0_15;
#line 1038 "analysis.m"
    else
#line 1042 "analysis.m"
      {
#line 1042 "analysis.m"
        MR_Word analysis__TypeCtorInfo_56_56;
#line 1042 "analysis.m"
        MR_Word analysis__TypeCtorInfo_57_57;
#line 1042 "analysis.m"
        MR_Word analysis__ModuleStatus0_13;
#line 1042 "analysis.m"
        MR_Word analysis__ModuleStatus_14;
#line 1042 "analysis.m"
        MR_Word analysis__STATE_VARIABLE_Info_19_19;
#line 1042 "analysis.m"
        MR_Word analysis__V_21_21;
#line 1042 "analysis.m"
        MR_Word analysis__V_25_25;
#line 1042 "analysis.m"
        MR_Word analysis__V_26_26;
#line 1042 "analysis.m"
        MR_Word analysis__Debug_66;
#line 1050 "analysis.m"
        MR_Word analysis__TypeClassInfo_for_compiler_55;
#line 1050 "analysis.m"
        MR_Box analysis__V_27_27;
#line 1050 "analysis.m"
        MR_Word analysis__V_28_28;
#line 1050 "analysis.m"
        MR_Word analysis__V_29_29;
#line 1050 "analysis.m"
        MR_Word analysis__V_30_30;
#line 1050 "analysis.m"
        MR_Word analysis__V_31_31;
#line 1050 "analysis.m"
        MR_Word analysis__V_32_32;
#line 1050 "analysis.m"
        MR_Word analysis__V_33_33;
#line 1050 "analysis.m"
        MR_Word analysis__V_34_34;
#line 1050 "analysis.m"
        MR_Word analysis__V_35_35;
#line 1050 "analysis.m"
        MR_Box analysis__conv0_ModuleStatus0_13;
#line 1053 "analysis.m"
        MR_Word analysis__TypeClassInfo_for_compiler_60;
#line 1053 "analysis.m"
        MR_Box analysis__V_36_36;
#line 1053 "analysis.m"
        MR_Word analysis__V_37_37;
#line 1053 "analysis.m"
        MR_Word analysis__V_38_38;
#line 1053 "analysis.m"
        MR_Word analysis__V_39_39;
#line 1053 "analysis.m"
        MR_Word analysis__V_40_40;
#line 1053 "analysis.m"
        MR_Word analysis__V_41_41;
#line 1053 "analysis.m"
        MR_Word analysis__V_42_42;
#line 1053 "analysis.m"
        MR_Word analysis__V_43_43;
#line 1053 "analysis.m"
        MR_Word analysis__V_44_44;
#line 1053 "analysis.m"
        MR_Word analysis__TypeClassInfo_for_compiler_61;
#line 1053 "analysis.m"
        MR_Box analysis__V_45_45;
#line 1053 "analysis.m"
        MR_Word analysis__V_46_46;
#line 1053 "analysis.m"
        MR_Word analysis__V_47_47;
#line 1053 "analysis.m"
        MR_Word analysis__V_48_48;
#line 1053 "analysis.m"
        MR_Word analysis__V_49_49;
#line 1053 "analysis.m"
        MR_Word analysis__V_51_51;
#line 1053 "analysis.m"
        MR_Word analysis__V_52_52;
#line 1053 "analysis.m"
        MR_Word analysis__V_53_53;
#line 1053 "analysis.m"
        MR_Word analysis__V_54_54;
#line 1053 "analysis.m"
        MR_Word analysis__V_50_50;

#line 1048 "analysis.m"
        {
#line 1048 "analysis.m"
          analysis__ensure_module_status_loaded_6_p_0(analysis__Globals_8, analysis__ModuleName_10, analysis__STATE_VARIABLE_Info_0_15, &analysis__STATE_VARIABLE_Info_19_19);
        }
#line 1050 "analysis.m"
        analysis__TypeClassInfo_for_compiler_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_19_19, (MR_Integer) 0)));
#line 1050 "analysis.m"
        analysis__V_27_27 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_19_19, (MR_Integer) 1));
#line 1050 "analysis.m"
        analysis__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_19_19, (MR_Integer) 2)));
#line 1050 "analysis.m"
        analysis__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_19_19, (MR_Integer) 3)));
#line 1050 "analysis.m"
        analysis__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_19_19, (MR_Integer) 4)));
#line 1050 "analysis.m"
        analysis__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_19_19, (MR_Integer) 5)));
#line 1050 "analysis.m"
        analysis__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_19_19, (MR_Integer) 6)));
#line 1050 "analysis.m"
        analysis__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_19_19, (MR_Integer) 7)));
#line 1050 "analysis.m"
        analysis__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_19_19, (MR_Integer) 8)));
#line 1050 "analysis.m"
        analysis__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_19_19, (MR_Integer) 9)));
#line 1050 "analysis.m"
        analysis__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_19_19, (MR_Integer) 10)));
#line 11106 "analysis.c"
        analysis__TypeCtorInfo_56_56 = (MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0;
#line 11108 "analysis.c"
        analysis__TypeCtorInfo_57_57 = (MR_Word) &analysis__analysis__type_ctor_info_analysis_status_0;
#line 1050 "analysis.m"
        {
#line 1050 "analysis.m"
          analysis__conv0_ModuleStatus0_13 = mercury__map__det_elem_2_f_0(analysis__TypeCtorInfo_56_56, analysis__TypeCtorInfo_57_57, ((MR_Box) (analysis__ModuleName_10)), analysis__V_21_21);
        }
#line 1050 "analysis.m"
        analysis__ModuleStatus0_13 = ((MR_Word) analysis__conv0_ModuleStatus0_13);
#line 1051 "analysis.m"
        {
#line 1051 "analysis.m"
          analysis__ModuleStatus_14 = analysis__lub_2_f_0(analysis__ModuleStatus0_13, analysis__Status_9);
        }
#line 1381 "analysis.m"
{
#define MR_PROC_LABEL analysis__taint_module_overall_status_7_p_0


		{
#line 1381 "analysis.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&analysis__mutable_variable_debug_analysis_lock,
                "analysis__mutable_variable_debug_analysis_lock");
#endif

#line 11134 "analysis.c"

		;}
#undef MR_PROC_LABEL
#line 1381 "analysis.m"
}
#line 1381 "analysis.m"
{
#define MR_PROC_LABEL analysis__taint_module_overall_status_7_p_0

	MR_Word X;

		{
#line 1381 "analysis.m"
X = analysis__mutable_variable_debug_analysis;

#line 11150 "analysis.c"

		;}
#undef MR_PROC_LABEL
	 analysis__Debug_66  = X;
#line 1381 "analysis.m"
}
#line 1381 "analysis.m"
{
#define MR_PROC_LABEL analysis__taint_module_overall_status_7_p_0


		{
#line 1381 "analysis.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&analysis__mutable_variable_debug_analysis_lock,
                "analysis__mutable_variable_debug_analysis_lock");
#endif

#line 11169 "analysis.c"

		;}
#undef MR_PROC_LABEL
#line 1381 "analysis.m"
}
#line 1394 "analysis.m"
        if ((analysis__Debug_66 == (MR_Integer) 0))
#line 1395 "analysis.m"
          {
#line 1395 "analysis.m"
          }
#line 1394 "analysis.m"
        else
#line 1393 "analysis.m"
          {
#line 1393 "analysis.m"
            analysis__write_tainting_module_4_p_0(analysis__ModuleName_10, analysis__ModuleStatus_14);
          }
#line 1053 "analysis.m"
        analysis__TypeClassInfo_for_compiler_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_19_19, (MR_Integer) 0)));
#line 1053 "analysis.m"
        analysis__V_36_36 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_19_19, (MR_Integer) 1));
#line 1053 "analysis.m"
        analysis__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_19_19, (MR_Integer) 2)));
#line 1053 "analysis.m"
        analysis__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_19_19, (MR_Integer) 3)));
#line 1053 "analysis.m"
        analysis__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_19_19, (MR_Integer) 4)));
#line 1053 "analysis.m"
        analysis__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_19_19, (MR_Integer) 5)));
#line 1053 "analysis.m"
        analysis__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_19_19, (MR_Integer) 6)));
#line 1053 "analysis.m"
        analysis__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_19_19, (MR_Integer) 7)));
#line 1053 "analysis.m"
        analysis__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_19_19, (MR_Integer) 8)));
#line 1053 "analysis.m"
        analysis__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_19_19, (MR_Integer) 9)));
#line 1053 "analysis.m"
        analysis__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_19_19, (MR_Integer) 10)));
#line 1053 "analysis.m"
        {
#line 1053 "analysis.m"
          analysis__V_26_26 = mercury__map__f_101_108_101_109_32_58_61_3_f_0(analysis__TypeCtorInfo_56_56, analysis__TypeCtorInfo_57_57, ((MR_Box) (analysis__ModuleName_10)), analysis__V_25_25, ((MR_Box) (analysis__ModuleStatus_14)));
        }
#line 1053 "analysis.m"
        analysis__TypeClassInfo_for_compiler_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_19_19, (MR_Integer) 0)));
#line 1053 "analysis.m"
        analysis__V_45_45 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_19_19, (MR_Integer) 1));
#line 1053 "analysis.m"
        analysis__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_19_19, (MR_Integer) 2)));
#line 1053 "analysis.m"
        analysis__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_19_19, (MR_Integer) 3)));
#line 1053 "analysis.m"
        analysis__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_19_19, (MR_Integer) 4)));
#line 1053 "analysis.m"
        analysis__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_19_19, (MR_Integer) 5)));
#line 1053 "analysis.m"
        analysis__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_19_19, (MR_Integer) 6)));
#line 1053 "analysis.m"
        analysis__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_19_19, (MR_Integer) 7)));
#line 1053 "analysis.m"
        analysis__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_19_19, (MR_Integer) 8)));
#line 1053 "analysis.m"
        analysis__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_19_19, (MR_Integer) 9)));
#line 1053 "analysis.m"
        analysis__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_19_19, (MR_Integer) 10)));
#line 1053 "analysis.m"
        {
#line 1053 "analysis.m"
          MR_Word base;
#line 1053 "analysis.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 1053 "analysis.m"
          *analysis__STATE_VARIABLE_Info_16 = base;
#line 1053 "analysis.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (analysis__TypeClassInfo_for_compiler_61));
#line 1053 "analysis.m"
          MR_hl_field(MR_mktag(0), base, 1) = analysis__V_45_45;
#line 1053 "analysis.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (analysis__V_46_46));
#line 1053 "analysis.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (analysis__V_47_47));
#line 1053 "analysis.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (analysis__V_48_48));
#line 1053 "analysis.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (analysis__V_49_49));
#line 1053 "analysis.m"
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (analysis__V_26_26));
#line 1053 "analysis.m"
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (analysis__V_51_51));
#line 1053 "analysis.m"
          MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (analysis__V_52_52));
#line 1053 "analysis.m"
          MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (analysis__V_53_53));
#line 1053 "analysis.m"
          MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (analysis__V_54_54));
#line 1053 "analysis.m"
        }
#line 1042 "analysis.m"
      }
#line 1038 "analysis.m"
  }
#line 1032 "analysis.m"
}

#line 1024 "analysis.m"
MR_bool MR_CALL 
analysis__arc_module_name_3_f_0(
#line 1024 "analysis.m"
  MR_Word analysis__TypeClassInfo_for_call_pattern_11,
#line 1024 "analysis.m"
  MR_Box analysis__FuncInfo_5,
#line 1024 "analysis.m"
  MR_Box analysis__CallA_6,
#line 1024 "analysis.m"
  MR_Word analysis__HeadVar__3_3,
#line 1024 "analysis.m"
  MR_Word * analysis__ModuleName_8)
#line 1024 "analysis.m"
{
#line 1028 "analysis.m"
  {
#line 1028 "analysis.m"
    MR_bool analysis__succeeded;
#line 1028 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_call_pattern_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__3_3, (MR_Integer) 0)));
#line 1028 "analysis.m"
    MR_Word analysis__TypeInfo_14_14;
#line 1028 "analysis.m"
    MR_Word analysis__TypeInfo_15_15;
#line 1028 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_partial_order_16;
#line 1028 "analysis.m"
    MR_Box analysis__CallB0_7 = (MR_hl_field(MR_mktag(0), analysis__HeadVar__3_3, (MR_Integer) 1));
#line 1028 "analysis.m"
    MR_Box analysis__CallB_9;
#line 1028 "analysis.m"
    MR_Word analysis__V_10_10;
#line 11309 "analysis.c"
    MR_bool MR_CALL (* analysis__func_0)(MR_Box, MR_Box, MR_Box, MR_Box);

#line 1028 "analysis.m"
    *analysis__ModuleName_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__3_3, (MR_Integer) 2)));
#line 11314 "analysis.c"
    {
#line 11316 "analysis.c"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_call_pattern_12, (MR_Integer) 4, &analysis__TypeInfo_14_14);
    }
#line 1029 "analysis.m"
    {
#line 1029 "analysis.m"
      analysis__V_10_10 = mercury__univ__univ_1_f_0(analysis__TypeInfo_14_14, analysis__CallB0_7);
    }
#line 11324 "analysis.c"
    {
#line 11326 "analysis.c"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_call_pattern_11, (MR_Integer) 4, &analysis__TypeInfo_15_15);
    }
#line 1029 "analysis.m"
    {
#line 1029 "analysis.m"
      mercury__univ__det_univ_to_type_2_p_0(analysis__TypeInfo_15_15, analysis__V_10_10, &analysis__CallB_9);
    }
#line 11334 "analysis.c"
    {
#line 11336 "analysis.c"
      mercury__private_builtin__superclass_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_call_pattern_11, (MR_Integer) 1, &analysis__TypeClassInfo_for_partial_order_16);
    }
#line 11339 "analysis.c"
    analysis__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), analysis__TypeClassInfo_for_partial_order_16, (MR_Integer) 0)), (MR_Integer) 6)));
#line 11341 "analysis.c"
    {
#line 11343 "analysis.c"
      return analysis__succeeded = analysis__func_0(((MR_Box) analysis__TypeClassInfo_for_partial_order_16), analysis__FuncInfo_5, analysis__CallA_6, analysis__CallB_9);
    }
#line 1028 "analysis.m"
    return analysis__succeeded;
#line 1028 "analysis.m"
  }
#line 1024 "analysis.m"
}

#line 1017 "analysis.m"
static MR_bool MR_CALL 
analysis__imdg_dependent_modules_5_f_0_1(
#line 1017 "analysis.m"
  MR_Box analysis__closure_arg,
#line 1017 "analysis.m"
  MR_Box analysis__wrapper_arg_1,
#line 1017 "analysis.m"
  MR_Box * analysis__wrapper_arg_2)
#line 1017 "analysis.m"
{
#line 1017 "analysis.m"
  {
#line 1017 "analysis.m"
    MR_bool analysis__succeeded;
#line 1017 "analysis.m"
    MR_Box analysis__closure = analysis__closure_arg;
#line 1017 "analysis.m"
    MR_Word analysis__conv2_ModuleName_8;

#line 1017 "analysis.m"
    {
#line 1017 "analysis.m"
      analysis__succeeded = analysis__arc_module_name_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 3))), (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 4)), (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 5)), ((MR_Word) analysis__wrapper_arg_1), &analysis__conv2_ModuleName_8);
    }
#line 1017 "analysis.m"
    if (analysis__succeeded)
#line 1017 "analysis.m"
      {
#line 1017 "analysis.m"
        *analysis__wrapper_arg_2 = ((MR_Box) (analysis__conv2_ModuleName_8));
#line 1017 "analysis.m"
        analysis__succeeded = MR_TRUE;
#line 1017 "analysis.m"
      }
#line 1017 "analysis.m"
    return analysis__succeeded;
#line 1017 "analysis.m"
  }
#line 1017 "analysis.m"
}

#line 1008 "analysis.m"
MR_Word MR_CALL 
analysis__imdg_dependent_modules_5_f_0(
#line 1008 "analysis.m"
  MR_Word analysis__TypeClassInfo_for_call_pattern_16,
#line 1008 "analysis.m"
  MR_Word analysis__ModuleMap_7,
#line 1008 "analysis.m"
  MR_String analysis__AnalysisName_8,
#line 1008 "analysis.m"
  MR_Word analysis__FuncId_9,
#line 1008 "analysis.m"
  MR_Box analysis__FuncInfo_10,
#line 1008 "analysis.m"
  MR_Box analysis__Call_11)
#line 1008 "analysis.m"
{
#line 1012 "analysis.m"
  {
#line 1012 "analysis.m"
    MR_bool analysis__succeeded;
#line 1012 "analysis.m"
    MR_Word analysis__HeadVar__6_6;
#line 1012 "analysis.m"
    MR_Word analysis__IMDGEntries_13;
#line 1014 "analysis.m"
    MR_Word analysis__TypeCtorInfo_19_19;
#line 1014 "analysis.m"
    MR_Word analysis__TypeInfo_20_20;
#line 1014 "analysis.m"
    MR_Word analysis__FuncAnalysisMap_12;
#line 1014 "analysis.m"
    MR_Box analysis__conv0_FuncAnalysisMap_12;
#line 1015 "analysis.m"
    MR_Box analysis__conv1_IMDGEntries_13;

#line 1014 "analysis.m"
    {
#line 1014 "analysis.m"
      analysis__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &analysis_scalar_common_2[4], analysis__ModuleMap_7, ((MR_Box) (analysis__AnalysisName_8)), &analysis__conv0_FuncAnalysisMap_12);
    }
#line 1014 "analysis.m"
    if (analysis__succeeded)
#line 1014 "analysis.m"
      {
#line 1014 "analysis.m"
        analysis__FuncAnalysisMap_12 = ((MR_Word) analysis__conv0_FuncAnalysisMap_12);
#line 1014 "analysis.m"
        analysis__succeeded = MR_TRUE;
#line 1014 "analysis.m"
      }
#line 1014 "analysis.m"
    if (analysis__succeeded)
#line 1014 "analysis.m"
      {
#line 11450 "analysis.c"
        analysis__TypeCtorInfo_19_19 = (MR_Word) &analysis__analysis__type_ctor_info_func_id_0;
#line 11452 "analysis.c"
        analysis__TypeInfo_20_20 = (MR_Word) &analysis_scalar_common_1[2];
#line 1015 "analysis.m"
        {
#line 1015 "analysis.m"
          analysis__succeeded = mercury__map__search_3_p_0(analysis__TypeCtorInfo_19_19, analysis__TypeInfo_20_20, analysis__FuncAnalysisMap_12, ((MR_Box) (analysis__FuncId_9)), &analysis__conv1_IMDGEntries_13);
        }
#line 1015 "analysis.m"
        if (analysis__succeeded)
#line 1015 "analysis.m"
          {
#line 1015 "analysis.m"
            analysis__IMDGEntries_13 = ((MR_Word) analysis__conv1_IMDGEntries_13);
#line 1015 "analysis.m"
            analysis__succeeded = MR_TRUE;
#line 1015 "analysis.m"
          }
#line 1014 "analysis.m"
      }
#line 1012 "analysis.m"
    if (analysis__succeeded)
#line 1017 "analysis.m"
      {
#line 1017 "analysis.m"
        MR_Word analysis__TypeCtorInfo_21_21 = (MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0;
#line 1017 "analysis.m"
        MR_Word analysis__V_14_14;
#line 1017 "analysis.m"
        MR_Word analysis__V_15_15;

#line 1017 "analysis.m"
        {
#line 1017 "analysis.m"
          analysis__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1017 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__V_15_15, 0) = ((MR_Box) (&analysis_scalar_common_7[2]));
#line 1017 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__V_15_15, 1) = ((MR_Box) (analysis__imdg_dependent_modules_5_f_0_1));
#line 1017 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__V_15_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1017 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__V_15_15, 3) = ((MR_Box) (analysis__TypeClassInfo_for_call_pattern_16));
#line 1017 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__V_15_15, 4) = analysis__FuncInfo_10;
#line 1017 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__V_15_15, 5) = analysis__Call_11;
#line 1017 "analysis.m"
        }
#line 1017 "analysis.m"
        {
#line 1017 "analysis.m"
          analysis__V_14_14 = mercury__list__filter_map_2_f_0((MR_Word) &analysis__analysis__type_ctor_info_imdg_arc_0, analysis__TypeCtorInfo_21_21, analysis__V_15_15, analysis__IMDGEntries_13);
        }
#line 1012 "analysis.m"
        {
#line 1012 "analysis.m"
          analysis__HeadVar__6_6 = mercury__set__from_list_1_f_0(analysis__TypeCtorInfo_21_21, analysis__V_14_14);
        }
#line 1017 "analysis.m"
      }
#line 1012 "analysis.m"
    else
#line 1012 "analysis.m"
      {
#line 1012 "analysis.m"
        {
#line 1012 "analysis.m"
          analysis__HeadVar__6_6 = mercury__set__init_0_f_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0);
        }
#line 1012 "analysis.m"
      }
#line 1012 "analysis.m"
    return analysis__HeadVar__6_6;
#line 1012 "analysis.m"
  }
#line 1008 "analysis.m"
}

#line 986 "analysis.m"
void MR_CALL 
analysis__replace_result_in_list_6_p_0(
#line 986 "analysis.m"
  MR_Word analysis__TypeClassInfo_for_analysis_25,
#line 986 "analysis.m"
  MR_Box analysis__FuncInfo_7,
#line 986 "analysis.m"
  MR_Box analysis__Call_8,
#line 986 "analysis.m"
  MR_Box analysis__Answer_9,
#line 986 "analysis.m"
  MR_Word analysis__Status_10,
#line 986 "analysis.m"
  MR_Word analysis__Results0_11,
#line 986 "analysis.m"
  MR_Word * analysis__Results_12)
#line 986 "analysis.m"
{
#line 993 "analysis.m"
  {
#line 993 "analysis.m"
    MR_bool analysis__succeeded;

#line 993 "analysis.m"
    if ((analysis__Results0_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 993 "analysis.m"
      {
#line 994 "analysis.m"
        {
#line 994 "analysis.m"
          mercury__require__unexpected_3_p_0((MR_String) "analysis", (MR_String) "predicate \140analysis.replace_result_in_list\'/6", (MR_String) "found no result to replace");
#line 994 "analysis.m"
          return;
        }
#line 993 "analysis.m"
      }
#line 993 "analysis.m"
    else
#line 996 "analysis.m"
      {
#line 996 "analysis.m"
        MR_Word analysis__TypeInfo_26_26;
#line 996 "analysis.m"
        MR_Word analysis__TypeClassInfo_for_analysis_27;
#line 996 "analysis.m"
        MR_Word analysis__TypeInfo_30_30;
#line 996 "analysis.m"
        MR_Word analysis__H0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), analysis__Results0_11, (MR_Integer) 0)));
#line 996 "analysis.m"
        MR_Word analysis__T0_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), analysis__Results0_11, (MR_Integer) 1)));
#line 996 "analysis.m"
        MR_Box analysis__HCall_15;
#line 996 "analysis.m"
        MR_Word analysis__H_16;
#line 996 "analysis.m"
        MR_Word analysis__T_17;
#line 996 "analysis.m"
        MR_Word analysis__V_18_18;
#line 996 "analysis.m"
        MR_Box analysis__V_19_19;
#line 997 "analysis.m"
        MR_Box analysis__V_23_23;
#line 997 "analysis.m"
        MR_Word analysis__V_24_24;
#line 998 "analysis.m"
        MR_Word analysis__TypeClassInfo_for_call_pattern_31;
#line 998 "analysis.m"
        MR_Word analysis__TypeClassInfo_for_partial_order_33;
#line 11599 "analysis.c"
        MR_bool MR_CALL (* analysis__func_0)(MR_Box, MR_Box, MR_Box, MR_Box);

#line 997 "analysis.m"
        analysis__TypeClassInfo_for_analysis_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__H0_13, (MR_Integer) 0)));
#line 997 "analysis.m"
        analysis__V_19_19 = (MR_hl_field(MR_mktag(0), analysis__H0_13, (MR_Integer) 1));
#line 997 "analysis.m"
        analysis__V_23_23 = (MR_hl_field(MR_mktag(0), analysis__H0_13, (MR_Integer) 2));
#line 997 "analysis.m"
        analysis__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__H0_13, (MR_Integer) 3)));
#line 11610 "analysis.c"
        {
#line 11612 "analysis.c"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_27, (MR_Integer) 4, &analysis__TypeInfo_26_26);
        }
#line 997 "analysis.m"
        {
#line 997 "analysis.m"
          analysis__V_18_18 = mercury__univ__univ_1_f_0(analysis__TypeInfo_26_26, analysis__V_19_19);
        }
#line 11620 "analysis.c"
        {
#line 11622 "analysis.c"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_25, (MR_Integer) 4, &analysis__TypeInfo_30_30);
        }
#line 997 "analysis.m"
        {
#line 997 "analysis.m"
          mercury__univ__det_univ_to_type_2_p_0(analysis__TypeInfo_30_30, analysis__V_18_18, &analysis__HCall_15);
        }
#line 11630 "analysis.c"
        {
#line 11632 "analysis.c"
          mercury__private_builtin__superclass_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_25, (MR_Integer) 1, &analysis__TypeClassInfo_for_call_pattern_31);
        }
#line 11635 "analysis.c"
        {
#line 11637 "analysis.c"
          mercury__private_builtin__superclass_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_call_pattern_31, (MR_Integer) 1, &analysis__TypeClassInfo_for_partial_order_33);
        }
#line 11640 "analysis.c"
        analysis__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), analysis__TypeClassInfo_for_partial_order_33, (MR_Integer) 0)), (MR_Integer) 6)));
#line 11642 "analysis.c"
        {
#line 11644 "analysis.c"
          analysis__succeeded = analysis__func_0(((MR_Box) analysis__TypeClassInfo_for_partial_order_33), analysis__FuncInfo_7, analysis__Call_8, analysis__HCall_15);
        }
#line 1001 "analysis.m"
        if (analysis__succeeded)
#line 999 "analysis.m"
          {
#line 999 "analysis.m"
            {
#line 999 "analysis.m"
              analysis__H_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 999 "analysis.m"
              MR_hl_field(MR_mktag(0), analysis__H_16, 0) = ((MR_Box) (analysis__TypeClassInfo_for_analysis_25));
#line 999 "analysis.m"
              MR_hl_field(MR_mktag(0), analysis__H_16, 1) = analysis__Call_8;
#line 999 "analysis.m"
              MR_hl_field(MR_mktag(0), analysis__H_16, 2) = analysis__Answer_9;
#line 999 "analysis.m"
              MR_hl_field(MR_mktag(0), analysis__H_16, 3) = ((MR_Box) (analysis__Status_10));
#line 999 "analysis.m"
            }
#line 1000 "analysis.m"
            analysis__T_17 = analysis__T0_14;
#line 999 "analysis.m"
          }
#line 1001 "analysis.m"
        else
#line 1002 "analysis.m"
          {
#line 1002 "analysis.m"
            analysis__H_16 = analysis__H0_13;
#line 1003 "analysis.m"
            {
#line 1003 "analysis.m"
              analysis__replace_result_in_list_6_p_0(analysis__TypeClassInfo_for_analysis_25, analysis__FuncInfo_7, analysis__Call_8, analysis__Answer_9, analysis__Status_10, analysis__T0_14, &analysis__T_17);
            }
#line 1002 "analysis.m"
          }
#line 1005 "analysis.m"
        {
#line 1005 "analysis.m"
          MR_Word base;
#line 1005 "analysis.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1005 "analysis.m"
          *analysis__Results_12 = base;
#line 1005 "analysis.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (analysis__H_16));
#line 1005 "analysis.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (analysis__T_17));
#line 1005 "analysis.m"
        }
#line 996 "analysis.m"
      }
#line 993 "analysis.m"
  }
#line 986 "analysis.m"
}

#line 968 "analysis.m"
void MR_CALL 
analysis__replace_result_in_analysis_map_8_p_0(
#line 968 "analysis.m"
  MR_Word analysis__TypeClassInfo_for_analysis_24,
#line 968 "analysis.m"
  MR_Word analysis__ModuleName_9,
#line 968 "analysis.m"
  MR_Word analysis__FuncId_10,
#line 968 "analysis.m"
  MR_Box analysis__FuncInfo_11,
#line 968 "analysis.m"
  MR_Box analysis__CallPattern_12,
#line 968 "analysis.m"
  MR_Box analysis__AnswerPattern_13,
#line 968 "analysis.m"
  MR_Word analysis__Status_14,
#line 968 "analysis.m"
  MR_Word analysis__Map0_15,
#line 968 "analysis.m"
  MR_Word * analysis__Map_16)
#line 968 "analysis.m"
{
#line 975 "analysis.m"
  {
#line 975 "analysis.m"
    MR_bool analysis__succeeded;
#line 975 "analysis.m"
    MR_Word analysis__TypeCtorInfo_25_25;
#line 975 "analysis.m"
    MR_Word analysis__TypeInfo_26_26;
#line 975 "analysis.m"
    MR_Word analysis__TypeCtorInfo_27_27;
#line 975 "analysis.m"
    MR_Word analysis__TypeInfo_28_28;
#line 975 "analysis.m"
    MR_Word analysis__TypeCtorInfo_29_29;
#line 975 "analysis.m"
    MR_Word analysis__TypeInfo_30_30;
#line 975 "analysis.m"
    MR_String analysis__AnalysisName_17;
#line 975 "analysis.m"
    MR_Word analysis__ModuleResults0_18;
#line 975 "analysis.m"
    MR_Word analysis__AnalysisResults0_19;
#line 975 "analysis.m"
    MR_Word analysis__FuncResults0_20;
#line 975 "analysis.m"
    MR_Word analysis__FuncResults_21;
#line 975 "analysis.m"
    MR_Word analysis__V_22_22;
#line 975 "analysis.m"
    MR_Word analysis__V_23_23;
#line 11756 "analysis.c"
    MR_Box analysis__V_31_31;
#line 11758 "analysis.c"
    MR_Box analysis__V_32_32;
#line 11760 "analysis.c"
    MR_Box MR_CALL (* analysis__func_0)(MR_Box) = ((MR_Box MR_CALL (*)(MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), analysis__TypeClassInfo_for_analysis_24, (MR_Integer) 0)), (MR_Integer) 5)));
#line 11762 "analysis.c"
    MR_Box analysis__conv1_AnalysisName_17;
#line 977 "analysis.m"
    MR_Box analysis__conv2_ModuleResults0_18;
#line 978 "analysis.m"
    MR_Box analysis__conv3_AnalysisResults0_19;
#line 979 "analysis.m"
    MR_Box analysis__conv4_FuncResults0_20;

#line 11771 "analysis.c"
    {
#line 11773 "analysis.c"
      analysis__conv1_AnalysisName_17 = analysis__func_0(((MR_Box) analysis__TypeClassInfo_for_analysis_24));
    }
#line 11776 "analysis.c"
    analysis__AnalysisName_17 = ((MR_String) analysis__conv1_AnalysisName_17);
#line 11778 "analysis.c"
    analysis__TypeCtorInfo_25_25 = (MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0;
#line 11780 "analysis.c"
    analysis__TypeInfo_26_26 = (MR_Word) &analysis_scalar_common_2[3];
#line 977 "analysis.m"
    {
#line 977 "analysis.m"
      analysis__conv2_ModuleResults0_18 = mercury__map__lookup_2_f_0(analysis__TypeCtorInfo_25_25, analysis__TypeInfo_26_26, analysis__Map0_15, ((MR_Box) (analysis__ModuleName_9)));
    }
#line 977 "analysis.m"
    analysis__ModuleResults0_18 = ((MR_Word) analysis__conv2_ModuleResults0_18);
#line 11789 "analysis.c"
    analysis__TypeCtorInfo_27_27 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 11791 "analysis.c"
    analysis__TypeInfo_28_28 = (MR_Word) &analysis_scalar_common_2[2];
#line 978 "analysis.m"
    {
#line 978 "analysis.m"
      analysis__conv3_AnalysisResults0_19 = mercury__map__lookup_2_f_0(analysis__TypeCtorInfo_27_27, analysis__TypeInfo_28_28, analysis__ModuleResults0_18, ((MR_Box) (analysis__AnalysisName_17)));
    }
#line 978 "analysis.m"
    analysis__AnalysisResults0_19 = ((MR_Word) analysis__conv3_AnalysisResults0_19);
#line 11800 "analysis.c"
    analysis__TypeCtorInfo_29_29 = (MR_Word) &analysis__analysis__type_ctor_info_func_id_0;
#line 11802 "analysis.c"
    analysis__TypeInfo_30_30 = (MR_Word) &analysis_scalar_common_1[1];
#line 979 "analysis.m"
    {
#line 979 "analysis.m"
      analysis__conv4_FuncResults0_20 = mercury__map__lookup_2_f_0(analysis__TypeCtorInfo_29_29, analysis__TypeInfo_30_30, analysis__AnalysisResults0_19, ((MR_Box) (analysis__FuncId_10)));
    }
#line 979 "analysis.m"
    analysis__FuncResults0_20 = ((MR_Word) analysis__conv4_FuncResults0_20);
#line 980 "analysis.m"
    {
#line 980 "analysis.m"
      analysis__replace_result_in_list_6_p_0(analysis__TypeClassInfo_for_analysis_24, analysis__FuncInfo_11, analysis__CallPattern_12, analysis__AnswerPattern_13, analysis__Status_14, analysis__FuncResults0_20, &analysis__FuncResults_21);
    }
#line 983 "analysis.m"
    {
#line 983 "analysis.m"
      analysis__V_23_23 = mercury__map__det_update_3_f_0(analysis__TypeCtorInfo_29_29, analysis__TypeInfo_30_30, analysis__AnalysisResults0_19, ((MR_Box) (analysis__FuncId_10)), ((MR_Box) (analysis__FuncResults_21)));
    }
#line 982 "analysis.m"
    {
#line 982 "analysis.m"
      analysis__V_22_22 = mercury__map__det_update_3_f_0(analysis__TypeCtorInfo_27_27, analysis__TypeInfo_28_28, analysis__ModuleResults0_18, ((MR_Box) (analysis__AnalysisName_17)), ((MR_Box) (analysis__V_23_23)));
    }
#line 982 "analysis.m"
    {
#line 982 "analysis.m"
      *analysis__Map_16 = mercury__map__det_update_3_f_0(analysis__TypeCtorInfo_25_25, analysis__TypeInfo_26_26, analysis__Map0_15, ((MR_Box) (analysis__ModuleName_9)), ((MR_Box) (analysis__V_22_22)));
    }
#line 975 "analysis.m"
  }
#line 968 "analysis.m"
}

#line 958 "analysis.m"
static void MR_CALL 
analysis__update_analysis_registry_5_9_p_0_3(
#line 958 "analysis.m"
  MR_Box analysis__closure_arg,
#line 958 "analysis.m"
  MR_Box analysis__wrapper_arg_1,
#line 958 "analysis.m"
  MR_Box analysis__wrapper_arg_2,
#line 958 "analysis.m"
  MR_Box * analysis__wrapper_arg_3,
#line 958 "analysis.m"
  MR_Box analysis__wrapper_arg_4,
#line 958 "analysis.m"
  MR_Box * analysis__wrapper_arg_5)
#line 958 "analysis.m"
{
#line 958 "analysis.m"
  {
#line 958 "analysis.m"
    MR_Box analysis__closure = analysis__closure_arg;
#line 958 "analysis.m"
    MR_Word analysis__conv9_STATE_VARIABLE_Info_16;

#line 958 "analysis.m"
    {
#line 958 "analysis.m"
      analysis__taint_module_overall_status_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 4))), ((MR_Word) analysis__wrapper_arg_1), ((MR_Word) analysis__wrapper_arg_2), &analysis__conv9_STATE_VARIABLE_Info_16);
    }
#line 958 "analysis.m"
    *analysis__wrapper_arg_3 = ((MR_Box) (analysis__conv9_STATE_VARIABLE_Info_16));
#line 958 "analysis.m"
  }
#line 958 "analysis.m"
}

#line 953 "analysis.m"
static MR_bool MR_CALL 
analysis__update_analysis_registry_5_9_p_0_2(
#line 953 "analysis.m"
  MR_Box analysis__closure_arg,
#line 953 "analysis.m"
  MR_Box analysis__wrapper_arg_1,
#line 953 "analysis.m"
  MR_Box * analysis__wrapper_arg_2)
#line 953 "analysis.m"
{
#line 953 "analysis.m"
  {
#line 953 "analysis.m"
    MR_bool analysis__succeeded;
#line 953 "analysis.m"
    MR_Box analysis__closure = analysis__closure_arg;
#line 953 "analysis.m"
    MR_Word analysis__conv8_HeadVar__2_62;

#line 953 "analysis.m"
    {
#line 953 "analysis.m"
      analysis__succeeded = analysis__IntroducedFrom__func__update_analysis_registry_5__953__1_1_f_0(((MR_Word) analysis__wrapper_arg_1), &analysis__conv8_HeadVar__2_62);
    }
#line 953 "analysis.m"
    if (analysis__succeeded)
#line 953 "analysis.m"
      {
#line 953 "analysis.m"
        *analysis__wrapper_arg_2 = ((MR_Box) (analysis__conv8_HeadVar__2_62));
#line 953 "analysis.m"
        analysis__succeeded = MR_TRUE;
#line 953 "analysis.m"
      }
#line 953 "analysis.m"
    return analysis__succeeded;
#line 953 "analysis.m"
  }
#line 953 "analysis.m"
}

#line 926 "analysis.m"
static void MR_CALL 
analysis__update_analysis_registry_5_9_p_0_1(
#line 926 "analysis.m"
  MR_Box analysis__closure_arg,
#line 926 "analysis.m"
  MR_Box analysis__wrapper_arg_1,
#line 926 "analysis.m"
  MR_Box analysis__wrapper_arg_2,
#line 926 "analysis.m"
  MR_Box * analysis__wrapper_arg_3,
#line 926 "analysis.m"
  MR_Box analysis__wrapper_arg_4,
#line 926 "analysis.m"
  MR_Box * analysis__wrapper_arg_5)
#line 926 "analysis.m"
{
#line 926 "analysis.m"
  {
#line 926 "analysis.m"
    MR_Box analysis__closure = analysis__closure_arg;
#line 926 "analysis.m"
    MR_Word analysis__conv2_STATE_VARIABLE_Info_16;

#line 926 "analysis.m"
    {
#line 926 "analysis.m"
      analysis__taint_module_overall_status_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 4))), ((MR_Word) analysis__wrapper_arg_1), ((MR_Word) analysis__wrapper_arg_2), &analysis__conv2_STATE_VARIABLE_Info_16);
    }
#line 926 "analysis.m"
    *analysis__wrapper_arg_3 = ((MR_Box) (analysis__conv2_STATE_VARIABLE_Info_16));
#line 926 "analysis.m"
  }
#line 926 "analysis.m"
}

#line 878 "analysis.m"
void MR_CALL 
analysis__update_analysis_registry_5_9_p_0(
#line 878 "analysis.m"
  MR_Word analysis__ModuleInfo_10,
#line 878 "analysis.m"
  MR_Word analysis__ModuleName_11,
#line 878 "analysis.m"
  MR_String analysis__AnalysisName_12,
#line 878 "analysis.m"
  MR_Word analysis__FuncId_13,
#line 878 "analysis.m"
  MR_Word analysis__NewResult_14,
#line 878 "analysis.m"
  MR_Word analysis__STATE_VARIABLE_Info_0_40,
#line 878 "analysis.m"
  MR_Word * analysis__STATE_VARIABLE_Info_41)
#line 878 "analysis.m"
{
#line 883 "analysis.m"
  {
#line 883 "analysis.m"
    MR_bool analysis__succeeded;
#line 883 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_analysis_158 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__NewResult_14, (MR_Integer) 0)));
#line 883 "analysis.m"
    MR_Box analysis__Call_17 = (MR_hl_field(MR_mktag(0), analysis__NewResult_14, (MR_Integer) 1));
#line 883 "analysis.m"
    MR_Box analysis__NewAnswer_18 = (MR_hl_field(MR_mktag(0), analysis__NewResult_14, (MR_Integer) 2));
#line 883 "analysis.m"
    MR_Word analysis__NewStatus_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__NewResult_14, (MR_Integer) 3)));
#line 883 "analysis.m"
    MR_Box analysis__FuncInfo_20;
#line 883 "analysis.m"
    MR_Word analysis__MaybeResult_21;
#line 883 "analysis.m"
    MR_Word analysis__Globals_22;
#line 883 "analysis.m"
    MR_Word analysis__STATE_VARIABLE_Info_50_50;
#line 885 "analysis.m"
    MR_Box analysis__V_218_218;
#line 885 "analysis.m"
    MR_Box analysis__V_219_219;
#line 960 "analysis.m"
    MR_Word analysis__Requests_33;
#line 949 "analysis.m"
    MR_Word analysis__TypeCtorInfo_201_201;
#line 949 "analysis.m"
    MR_Word analysis__TypeInfo_202_202;
#line 949 "analysis.m"
    MR_Word analysis__TypeCtorInfo_203_203;
#line 949 "analysis.m"
    MR_Word analysis__TypeInfo_204_204;
#line 949 "analysis.m"
    MR_Word analysis__ModuleRequests_32;
#line 949 "analysis.m"
    MR_Word analysis__V_58_58;
#line 949 "analysis.m"
    MR_Word analysis__V_59_59;
#line 949 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_compiler_198;
#line 949 "analysis.m"
    MR_Box analysis__V_149_149;
#line 949 "analysis.m"
    MR_Word analysis__V_150_150;
#line 949 "analysis.m"
    MR_Word analysis__V_151_151;
#line 949 "analysis.m"
    MR_Word analysis__V_152_152;
#line 949 "analysis.m"
    MR_Word analysis__V_153_153;
#line 949 "analysis.m"
    MR_Word analysis__V_154_154;
#line 949 "analysis.m"
    MR_Word analysis__V_155_155;
#line 949 "analysis.m"
    MR_Word analysis__V_156_156;
#line 949 "analysis.m"
    MR_Word analysis__V_157_157;
#line 949 "analysis.m"
    MR_Box analysis__conv5_ModuleRequests_32;
#line 950 "analysis.m"
    MR_Box analysis__conv6_V_59_59;
#line 950 "analysis.m"
    MR_Box analysis__conv7_Requests_33;
#line 951 "analysis.m"
    MR_Word analysis__V_34_34;
#line 951 "analysis.m"
    MR_Word analysis__V_35_35;

#line 885 "analysis.m"
    {
#line 885 "analysis.m"
      analysis__get_func_info_6_p_0(analysis__TypeClassInfo_for_analysis_158, analysis__ModuleInfo_10, analysis__ModuleName_11, analysis__FuncId_13, &analysis__FuncInfo_20);
    }
#line 886 "analysis.m"
    {
#line 886 "analysis.m"
      analysis__lookup_exactly_matching_result_even_from_invalid_modules_6_p_0(analysis__TypeClassInfo_for_analysis_158, analysis__STATE_VARIABLE_Info_0_40, analysis__ModuleName_11, analysis__FuncId_13, analysis__FuncInfo_20, analysis__Call_17, &analysis__MaybeResult_21);
    }
#line 888 "analysis.m"
    {
#line 888 "analysis.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(analysis__ModuleInfo_10, &analysis__Globals_22);
    }
#line 929 "analysis.m"
    if ((analysis__MaybeResult_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 932 "analysis.m"
      {
#line 932 "analysis.m"
        MR_Word analysis__TypeCtorInfo_194_194 = (MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0;
#line 932 "analysis.m"
        MR_Word analysis__TypeInfo_195_195 = (MR_Word) &analysis_scalar_common_2[3];
#line 932 "analysis.m"
        MR_Word analysis__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 7)));
#line 932 "analysis.m"
        MR_Word analysis__V_46_46;
#line 932 "analysis.m"
        MR_Word analysis__V_47_47;
#line 932 "analysis.m"
        MR_Word analysis__OldMap0_70;
#line 932 "analysis.m"
        MR_Word analysis__OldMap_71;
#line 933 "analysis.m"
        MR_Word analysis__TypeClassInfo_for_compiler_193 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 0)));
#line 933 "analysis.m"
        MR_Box analysis__V_121_121 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 1));
#line 933 "analysis.m"
        MR_Word analysis__V_122_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 2)));
#line 933 "analysis.m"
        MR_Word analysis__V_123_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 3)));
#line 933 "analysis.m"
        MR_Word analysis__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 4)));
#line 933 "analysis.m"
        MR_Word analysis__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 5)));
#line 933 "analysis.m"
        MR_Word analysis__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 6)));
#line 933 "analysis.m"
        MR_Word analysis__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 8)));
#line 933 "analysis.m"
        MR_Word analysis__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 9)));
#line 933 "analysis.m"
        MR_Word analysis__V_129_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 10)));
#line 933 "analysis.m"
        MR_Box analysis__conv0_OldMap0_70;
#line 936 "analysis.m"
        MR_Word analysis__TypeClassInfo_for_compiler_196;
#line 936 "analysis.m"
        MR_Box analysis__V_130_130;
#line 936 "analysis.m"
        MR_Word analysis__V_131_131;
#line 936 "analysis.m"
        MR_Word analysis__V_132_132;
#line 936 "analysis.m"
        MR_Word analysis__V_133_133;
#line 936 "analysis.m"
        MR_Word analysis__V_134_134;
#line 936 "analysis.m"
        MR_Word analysis__V_135_135;
#line 936 "analysis.m"
        MR_Word analysis__V_136_136;
#line 936 "analysis.m"
        MR_Word analysis__V_137_137;
#line 936 "analysis.m"
        MR_Word analysis__V_138_138;
#line 936 "analysis.m"
        MR_Word analysis__TypeClassInfo_for_compiler_197;
#line 936 "analysis.m"
        MR_Box analysis__V_139_139;
#line 936 "analysis.m"
        MR_Word analysis__V_140_140;
#line 936 "analysis.m"
        MR_Word analysis__V_141_141;
#line 936 "analysis.m"
        MR_Word analysis__V_142_142;
#line 936 "analysis.m"
        MR_Word analysis__V_143_143;
#line 936 "analysis.m"
        MR_Word analysis__V_144_144;
#line 936 "analysis.m"
        MR_Word analysis__V_146_146;
#line 936 "analysis.m"
        MR_Word analysis__V_147_147;
#line 936 "analysis.m"
        MR_Word analysis__V_148_148;
#line 936 "analysis.m"
        MR_Word analysis__V_145_145;

#line 933 "analysis.m"
        {
#line 933 "analysis.m"
          analysis__conv0_OldMap0_70 = mercury__map__det_elem_2_f_0(analysis__TypeCtorInfo_194_194, analysis__TypeInfo_195_195, ((MR_Box) (analysis__ModuleName_11)), analysis__V_44_44);
        }
#line 933 "analysis.m"
        analysis__OldMap0_70 = ((MR_Word) analysis__conv0_OldMap0_70);
#line 934 "analysis.m"
        {
#line 934 "analysis.m"
          analysis__record_result_in_analysis_map_6_p_0(analysis__TypeClassInfo_for_analysis_158, analysis__FuncId_13, analysis__Call_17, analysis__NewAnswer_18, analysis__NewStatus_19, analysis__OldMap0_70, &analysis__OldMap_71);
        }
#line 936 "analysis.m"
        analysis__TypeClassInfo_for_compiler_196 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 0)));
#line 936 "analysis.m"
        analysis__V_130_130 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 1));
#line 936 "analysis.m"
        analysis__V_131_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 2)));
#line 936 "analysis.m"
        analysis__V_132_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 3)));
#line 936 "analysis.m"
        analysis__V_133_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 4)));
#line 936 "analysis.m"
        analysis__V_134_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 5)));
#line 936 "analysis.m"
        analysis__V_135_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 6)));
#line 936 "analysis.m"
        analysis__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 7)));
#line 936 "analysis.m"
        analysis__V_136_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 8)));
#line 936 "analysis.m"
        analysis__V_137_137 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 9)));
#line 936 "analysis.m"
        analysis__V_138_138 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 10)));
#line 936 "analysis.m"
        {
#line 936 "analysis.m"
          analysis__V_47_47 = mercury__map__f_101_108_101_109_32_58_61_3_f_0(analysis__TypeCtorInfo_194_194, analysis__TypeInfo_195_195, ((MR_Box) (analysis__ModuleName_11)), analysis__V_46_46, ((MR_Box) (analysis__OldMap_71)));
        }
#line 936 "analysis.m"
        analysis__TypeClassInfo_for_compiler_197 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 0)));
#line 936 "analysis.m"
        analysis__V_139_139 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 1));
#line 936 "analysis.m"
        analysis__V_140_140 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 2)));
#line 936 "analysis.m"
        analysis__V_141_141 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 3)));
#line 936 "analysis.m"
        analysis__V_142_142 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 4)));
#line 936 "analysis.m"
        analysis__V_143_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 5)));
#line 936 "analysis.m"
        analysis__V_144_144 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 6)));
#line 936 "analysis.m"
        analysis__V_145_145 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 7)));
#line 936 "analysis.m"
        analysis__V_146_146 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 8)));
#line 936 "analysis.m"
        analysis__V_147_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 9)));
#line 936 "analysis.m"
        analysis__V_148_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 10)));
#line 936 "analysis.m"
        {
#line 936 "analysis.m"
          analysis__STATE_VARIABLE_Info_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 936 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_50_50, 0) = ((MR_Box) (analysis__TypeClassInfo_for_compiler_197));
#line 936 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_50_50, 1) = analysis__V_139_139;
#line 936 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_50_50, 2) = ((MR_Box) (analysis__V_140_140));
#line 936 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_50_50, 3) = ((MR_Box) (analysis__V_141_141));
#line 936 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_50_50, 4) = ((MR_Box) (analysis__V_142_142));
#line 936 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_50_50, 5) = ((MR_Box) (analysis__V_143_143));
#line 936 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_50_50, 6) = ((MR_Box) (analysis__V_144_144));
#line 936 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_50_50, 7) = ((MR_Box) (analysis__V_47_47));
#line 936 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_50_50, 8) = ((MR_Box) (analysis__V_146_146));
#line 936 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_50_50, 9) = ((MR_Box) (analysis__V_147_147));
#line 936 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_50_50, 10) = ((MR_Box) (analysis__V_148_148));
#line 936 "analysis.m"
        }
#line 932 "analysis.m"
      }
#line 929 "analysis.m"
    else
#line 892 "analysis.m"
      {
#line 892 "analysis.m"
        MR_Word analysis__OldResult_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), analysis__MaybeResult_21, (MR_Integer) 0)));
#line 892 "analysis.m"
        MR_Box analysis__OldAnswer_25 = (MR_hl_field(MR_mktag(0), analysis__OldResult_23, (MR_Integer) 1));
#line 892 "analysis.m"
        MR_Word analysis__OldStatus_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__OldResult_23, (MR_Integer) 2)));
#line 893 "analysis.m"
        MR_Box analysis___OldCall_24 = (MR_hl_field(MR_mktag(0), analysis__OldResult_23, (MR_Integer) 0));
#line 894 "analysis.m"
        MR_Word analysis__TypeClassInfo_for_answer_pattern_159;
#line 894 "analysis.m"
        MR_Word analysis__TypeClassInfo_for_partial_order_161;

#line 12246 "analysis.c"
        {
#line 12248 "analysis.c"
          mercury__private_builtin__superclass_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_158, (MR_Integer) 2, &analysis__TypeClassInfo_for_answer_pattern_159);
        }
#line 12251 "analysis.c"
        {
#line 12253 "analysis.c"
          mercury__private_builtin__superclass_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_answer_pattern_159, (MR_Integer) 1, &analysis__TypeClassInfo_for_partial_order_161);
        }
#line 894 "analysis.m"
        {
#line 894 "analysis.m"
          analysis__succeeded = analysis__equivalent_3_p_0(analysis__TypeClassInfo_for_partial_order_161, analysis__FuncInfo_20, analysis__NewAnswer_18, analysis__OldAnswer_25);
        }
#line 905 "analysis.m"
        if (analysis__succeeded)
#line 896 "analysis.m"
          {
#line 895 "analysis.m"
            {
#line 895 "analysis.m"
              analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_109_115_103_95_95_104_111_52_95_95_91_54_93_95_48_3_p_0(analysis__TypeClassInfo_for_analysis_158, analysis__ModuleName_11, analysis__FuncId_13, analysis__Call_17, analysis__NewAnswer_18);
            }
#line 897 "analysis.m"
            analysis__succeeded = (analysis__NewStatus_19 == analysis__OldStatus_26);
#line 897 "analysis.m"
            analysis__succeeded = !(analysis__succeeded);
#line 902 "analysis.m"
            if (analysis__succeeded)
#line 898 "analysis.m"
              {
#line 898 "analysis.m"
                MR_Word analysis__OldMap0_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 7)));
#line 898 "analysis.m"
                MR_Word analysis__OldMap_28;
#line 898 "analysis.m"
                MR_Word analysis__TypeClassInfo_for_compiler_169 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 0)));
#line 898 "analysis.m"
                MR_Box analysis__V_74_74 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 1));
#line 898 "analysis.m"
                MR_Word analysis__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 2)));
#line 898 "analysis.m"
                MR_Word analysis__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 3)));
#line 898 "analysis.m"
                MR_Word analysis__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 4)));
#line 898 "analysis.m"
                MR_Word analysis__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 5)));
#line 898 "analysis.m"
                MR_Word analysis__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 6)));
#line 898 "analysis.m"
                MR_Word analysis__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 8)));
#line 898 "analysis.m"
                MR_Word analysis__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 9)));
#line 898 "analysis.m"
                MR_Word analysis__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 10)));
#line 901 "analysis.m"
                MR_Word analysis__TypeClassInfo_for_compiler_170;
#line 901 "analysis.m"
                MR_Box analysis__V_83_83;
#line 901 "analysis.m"
                MR_Word analysis__V_84_84;
#line 901 "analysis.m"
                MR_Word analysis__V_85_85;
#line 901 "analysis.m"
                MR_Word analysis__V_86_86;
#line 901 "analysis.m"
                MR_Word analysis__V_87_87;
#line 901 "analysis.m"
                MR_Word analysis__V_88_88;
#line 901 "analysis.m"
                MR_Word analysis__V_90_90;
#line 901 "analysis.m"
                MR_Word analysis__V_91_91;
#line 901 "analysis.m"
                MR_Word analysis__V_92_92;
#line 901 "analysis.m"
                MR_Word analysis__V_89_89;

#line 899 "analysis.m"
                {
#line 899 "analysis.m"
                  analysis__replace_result_in_analysis_map_8_p_0(analysis__TypeClassInfo_for_analysis_158, analysis__ModuleName_11, analysis__FuncId_13, analysis__FuncInfo_20, analysis__Call_17, analysis__NewAnswer_18, analysis__NewStatus_19, analysis__OldMap0_27, &analysis__OldMap_28);
                }
#line 901 "analysis.m"
                analysis__TypeClassInfo_for_compiler_170 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 0)));
#line 901 "analysis.m"
                analysis__V_83_83 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 1));
#line 901 "analysis.m"
                analysis__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 2)));
#line 901 "analysis.m"
                analysis__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 3)));
#line 901 "analysis.m"
                analysis__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 4)));
#line 901 "analysis.m"
                analysis__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 5)));
#line 901 "analysis.m"
                analysis__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 6)));
#line 901 "analysis.m"
                analysis__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 7)));
#line 901 "analysis.m"
                analysis__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 8)));
#line 901 "analysis.m"
                analysis__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 9)));
#line 901 "analysis.m"
                analysis__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 10)));
#line 901 "analysis.m"
                {
#line 901 "analysis.m"
                  analysis__STATE_VARIABLE_Info_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 901 "analysis.m"
                  MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_50_50, 0) = ((MR_Box) (analysis__TypeClassInfo_for_compiler_170));
#line 901 "analysis.m"
                  MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_50_50, 1) = analysis__V_83_83;
#line 901 "analysis.m"
                  MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_50_50, 2) = ((MR_Box) (analysis__V_84_84));
#line 901 "analysis.m"
                  MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_50_50, 3) = ((MR_Box) (analysis__V_85_85));
#line 901 "analysis.m"
                  MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_50_50, 4) = ((MR_Box) (analysis__V_86_86));
#line 901 "analysis.m"
                  MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_50_50, 5) = ((MR_Box) (analysis__V_87_87));
#line 901 "analysis.m"
                  MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_50_50, 6) = ((MR_Box) (analysis__V_88_88));
#line 901 "analysis.m"
                  MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_50_50, 7) = ((MR_Box) (analysis__OldMap_28));
#line 901 "analysis.m"
                  MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_50_50, 8) = ((MR_Box) (analysis__V_90_90));
#line 901 "analysis.m"
                  MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_50_50, 9) = ((MR_Box) (analysis__V_91_91));
#line 901 "analysis.m"
                  MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_50_50, 10) = ((MR_Box) (analysis__V_92_92));
#line 901 "analysis.m"
                }
#line 898 "analysis.m"
              }
#line 902 "analysis.m"
            else
#line 901 "analysis.m"
              analysis__STATE_VARIABLE_Info_50_50 = analysis__STATE_VARIABLE_Info_0_40;
#line 896 "analysis.m"
          }
#line 905 "analysis.m"
        else
#line 908 "analysis.m"
          {
#line 908 "analysis.m"
            MR_Word analysis__TypeCtorInfo_178_178;
#line 908 "analysis.m"
            MR_Word analysis__TypeClassInfo_for_call_pattern_180;
#line 908 "analysis.m"
            MR_Word analysis__Status_29;
#line 908 "analysis.m"
            MR_Word analysis__OldArcs_30;
#line 908 "analysis.m"
            MR_Word analysis__DepModules_31;
#line 908 "analysis.m"
            MR_Word analysis__STATE_VARIABLE_Info_51_51;
#line 908 "analysis.m"
            MR_Word analysis__V_52_52;
#line 908 "analysis.m"
            MR_Word analysis__V_55_55;
#line 908 "analysis.m"
            MR_Word analysis__OldMap0_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 7)));
#line 908 "analysis.m"
            MR_Word analysis__OldMap_69;
#line 908 "analysis.m"
            MR_Word analysis__TypeClassInfo_for_compiler_171 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 0)));
#line 908 "analysis.m"
            MR_Box analysis__V_93_93 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 1));
#line 908 "analysis.m"
            MR_Word analysis__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 2)));
#line 908 "analysis.m"
            MR_Word analysis__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 3)));
#line 908 "analysis.m"
            MR_Word analysis__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 4)));
#line 908 "analysis.m"
            MR_Word analysis__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 5)));
#line 908 "analysis.m"
            MR_Word analysis__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 6)));
#line 908 "analysis.m"
            MR_Word analysis__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 8)));
#line 908 "analysis.m"
            MR_Word analysis__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 9)));
#line 908 "analysis.m"
            MR_Word analysis__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 10)));
#line 911 "analysis.m"
            MR_Word analysis__TypeClassInfo_for_compiler_172;
#line 911 "analysis.m"
            MR_Box analysis__V_102_102;
#line 911 "analysis.m"
            MR_Word analysis__V_103_103;
#line 911 "analysis.m"
            MR_Word analysis__V_104_104;
#line 911 "analysis.m"
            MR_Word analysis__V_105_105;
#line 911 "analysis.m"
            MR_Word analysis__V_106_106;
#line 911 "analysis.m"
            MR_Word analysis__V_107_107;
#line 911 "analysis.m"
            MR_Word analysis__V_109_109;
#line 911 "analysis.m"
            MR_Word analysis__V_110_110;
#line 911 "analysis.m"
            MR_Word analysis__V_111_111;
#line 911 "analysis.m"
            MR_Word analysis__V_108_108;
#line 916 "analysis.m"
            MR_Word analysis__TypeClassInfo_for_answer_pattern_173;
#line 916 "analysis.m"
            MR_Word analysis__TypeClassInfo_for_partial_order_175;
#line 921 "analysis.m"
            MR_Word analysis__TypeClassInfo_for_compiler_177;
#line 921 "analysis.m"
            MR_Box analysis__V_112_112;
#line 921 "analysis.m"
            MR_Word analysis__V_113_113;
#line 921 "analysis.m"
            MR_Word analysis__V_114_114;
#line 921 "analysis.m"
            MR_Word analysis__V_115_115;
#line 921 "analysis.m"
            MR_Word analysis__V_116_116;
#line 921 "analysis.m"
            MR_Word analysis__V_117_117;
#line 921 "analysis.m"
            MR_Word analysis__V_118_118;
#line 921 "analysis.m"
            MR_Word analysis__V_119_119;
#line 921 "analysis.m"
            MR_Word analysis__V_120_120;
#line 921 "analysis.m"
            MR_Box analysis__conv1_OldArcs_30;
#line 926 "analysis.m"
            MR_Box analysis__conv4_STATE_VARIABLE_Info_50_50;
#line 926 "analysis.m"
            MR_Box analysis__conv3_STATE_VARIABLE_IO_49_49;

#line 909 "analysis.m"
            {
#line 909 "analysis.m"
              analysis__replace_result_in_analysis_map_8_p_0(analysis__TypeClassInfo_for_analysis_158, analysis__ModuleName_11, analysis__FuncId_13, analysis__FuncInfo_20, analysis__Call_17, analysis__NewAnswer_18, analysis__NewStatus_19, analysis__OldMap0_68, &analysis__OldMap_69);
            }
#line 911 "analysis.m"
            analysis__TypeClassInfo_for_compiler_172 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 0)));
#line 911 "analysis.m"
            analysis__V_102_102 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 1));
#line 911 "analysis.m"
            analysis__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 2)));
#line 911 "analysis.m"
            analysis__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 3)));
#line 911 "analysis.m"
            analysis__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 4)));
#line 911 "analysis.m"
            analysis__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 5)));
#line 911 "analysis.m"
            analysis__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 6)));
#line 911 "analysis.m"
            analysis__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 7)));
#line 911 "analysis.m"
            analysis__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 8)));
#line 911 "analysis.m"
            analysis__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 9)));
#line 911 "analysis.m"
            analysis__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 10)));
#line 911 "analysis.m"
            {
#line 911 "analysis.m"
              analysis__STATE_VARIABLE_Info_51_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 911 "analysis.m"
              MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_51_51, 0) = ((MR_Box) (analysis__TypeClassInfo_for_compiler_172));
#line 911 "analysis.m"
              MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_51_51, 1) = analysis__V_102_102;
#line 911 "analysis.m"
              MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_51_51, 2) = ((MR_Box) (analysis__V_103_103));
#line 911 "analysis.m"
              MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_51_51, 3) = ((MR_Box) (analysis__V_104_104));
#line 911 "analysis.m"
              MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_51_51, 4) = ((MR_Box) (analysis__V_105_105));
#line 911 "analysis.m"
              MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_51_51, 5) = ((MR_Box) (analysis__V_106_106));
#line 911 "analysis.m"
              MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_51_51, 6) = ((MR_Box) (analysis__V_107_107));
#line 911 "analysis.m"
              MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_51_51, 7) = ((MR_Box) (analysis__OldMap_69));
#line 911 "analysis.m"
              MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_51_51, 8) = ((MR_Box) (analysis__V_109_109));
#line 911 "analysis.m"
              MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_51_51, 9) = ((MR_Box) (analysis__V_110_110));
#line 911 "analysis.m"
              MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_51_51, 10) = ((MR_Box) (analysis__V_111_111));
#line 911 "analysis.m"
            }
#line 12540 "analysis.c"
            {
#line 12542 "analysis.c"
              mercury__private_builtin__superclass_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_158, (MR_Integer) 2, &analysis__TypeClassInfo_for_answer_pattern_173);
            }
#line 12545 "analysis.c"
            {
#line 12547 "analysis.c"
              mercury__private_builtin__superclass_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_answer_pattern_173, (MR_Integer) 1, &analysis__TypeClassInfo_for_partial_order_175);
            }
#line 916 "analysis.m"
            {
#line 916 "analysis.m"
              analysis__succeeded = analysis__more_precise_than_3_p_0(analysis__TypeClassInfo_for_partial_order_175, analysis__FuncInfo_20, analysis__NewAnswer_18, analysis__OldAnswer_25);
            }
#line 918 "analysis.m"
            if (analysis__succeeded)
#line 917 "analysis.m"
              analysis__Status_29 = (MR_Integer) 1;
#line 918 "analysis.m"
            else
#line 919 "analysis.m"
              analysis__Status_29 = (MR_Integer) 0;
#line 921 "analysis.m"
            analysis__TypeClassInfo_for_compiler_177 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_51_51, (MR_Integer) 0)));
#line 921 "analysis.m"
            analysis__V_112_112 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_51_51, (MR_Integer) 1));
#line 921 "analysis.m"
            analysis__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_51_51, (MR_Integer) 2)));
#line 921 "analysis.m"
            analysis__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_51_51, (MR_Integer) 3)));
#line 921 "analysis.m"
            analysis__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_51_51, (MR_Integer) 4)));
#line 921 "analysis.m"
            analysis__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_51_51, (MR_Integer) 5)));
#line 921 "analysis.m"
            analysis__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_51_51, (MR_Integer) 6)));
#line 921 "analysis.m"
            analysis__V_118_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_51_51, (MR_Integer) 7)));
#line 921 "analysis.m"
            analysis__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_51_51, (MR_Integer) 8)));
#line 921 "analysis.m"
            analysis__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_51_51, (MR_Integer) 9)));
#line 921 "analysis.m"
            analysis__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_51_51, (MR_Integer) 10)));
#line 12585 "analysis.c"
            analysis__TypeCtorInfo_178_178 = (MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0;
#line 921 "analysis.m"
            {
#line 921 "analysis.m"
              analysis__conv1_OldArcs_30 = mercury__map__det_elem_2_f_0(analysis__TypeCtorInfo_178_178, (MR_Word) &analysis_scalar_common_2[5], ((MR_Box) (analysis__ModuleName_11)), analysis__V_52_52);
            }
#line 921 "analysis.m"
            analysis__OldArcs_30 = ((MR_Word) analysis__conv1_OldArcs_30);
#line 12594 "analysis.c"
            {
#line 12596 "analysis.c"
              mercury__private_builtin__superclass_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_158, (MR_Integer) 1, &analysis__TypeClassInfo_for_call_pattern_180);
            }
#line 922 "analysis.m"
            {
#line 922 "analysis.m"
              analysis__DepModules_31 = analysis__imdg_dependent_modules_5_f_0(analysis__TypeClassInfo_for_call_pattern_180, analysis__OldArcs_30, analysis__AnalysisName_12, analysis__FuncId_13, analysis__FuncInfo_20, analysis__Call_17);
            }
#line 924 "analysis.m"
            {
#line 924 "analysis.m"
              analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_109_115_103_95_95_104_111_51_95_95_91_54_93_95_48_3_p_0(analysis__TypeClassInfo_for_analysis_158, analysis__NewAnswer_18, analysis__OldAnswer_25, analysis__Status_29, analysis__DepModules_31);
            }
#line 926 "analysis.m"
            {
#line 926 "analysis.m"
              analysis__V_55_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 926 "analysis.m"
              MR_hl_field(MR_mktag(0), analysis__V_55_55, 0) = ((MR_Box) (&analysis_scalar_common_12[0]));
#line 926 "analysis.m"
              MR_hl_field(MR_mktag(0), analysis__V_55_55, 1) = ((MR_Box) (analysis__update_analysis_registry_5_9_p_0_1));
#line 926 "analysis.m"
              MR_hl_field(MR_mktag(0), analysis__V_55_55, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 926 "analysis.m"
              MR_hl_field(MR_mktag(0), analysis__V_55_55, 3) = ((MR_Box) (analysis__Globals_22));
#line 926 "analysis.m"
              MR_hl_field(MR_mktag(0), analysis__V_55_55, 4) = ((MR_Box) (analysis__Status_29));
#line 926 "analysis.m"
            }
#line 926 "analysis.m"
            {
#line 926 "analysis.m"
              mercury__set__fold2_6_p_2(analysis__TypeCtorInfo_178_178, (MR_Word) &analysis__analysis__type_ctor_info_analysis_info_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, analysis__V_55_55, analysis__DepModules_31, ((MR_Box) (analysis__STATE_VARIABLE_Info_51_51)), &analysis__conv4_STATE_VARIABLE_Info_50_50, ((MR_Box) ((MR_Integer) 0)), &analysis__conv3_STATE_VARIABLE_IO_49_49);
            }
#line 926 "analysis.m"
            analysis__STATE_VARIABLE_Info_50_50 = ((MR_Word) analysis__conv4_STATE_VARIABLE_Info_50_50);
#line 908 "analysis.m"
          }
#line 892 "analysis.m"
      }
#line 949 "analysis.m"
    analysis__TypeClassInfo_for_compiler_198 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_50_50, (MR_Integer) 0)));
#line 949 "analysis.m"
    analysis__V_149_149 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_50_50, (MR_Integer) 1));
#line 949 "analysis.m"
    analysis__V_150_150 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_50_50, (MR_Integer) 2)));
#line 949 "analysis.m"
    analysis__V_151_151 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_50_50, (MR_Integer) 3)));
#line 949 "analysis.m"
    analysis__V_152_152 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_50_50, (MR_Integer) 4)));
#line 949 "analysis.m"
    analysis__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_50_50, (MR_Integer) 5)));
#line 949 "analysis.m"
    analysis__V_153_153 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_50_50, (MR_Integer) 6)));
#line 949 "analysis.m"
    analysis__V_154_154 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_50_50, (MR_Integer) 7)));
#line 949 "analysis.m"
    analysis__V_155_155 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_50_50, (MR_Integer) 8)));
#line 949 "analysis.m"
    analysis__V_156_156 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_50_50, (MR_Integer) 9)));
#line 949 "analysis.m"
    analysis__V_157_157 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_50_50, (MR_Integer) 10)));
#line 949 "analysis.m"
    {
#line 949 "analysis.m"
      analysis__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0, (MR_Word) &analysis_scalar_common_2[1], analysis__V_58_58, ((MR_Box) (analysis__ModuleName_11)), &analysis__conv5_ModuleRequests_32);
    }
#line 949 "analysis.m"
    if (analysis__succeeded)
#line 949 "analysis.m"
      {
#line 949 "analysis.m"
        analysis__ModuleRequests_32 = ((MR_Word) analysis__conv5_ModuleRequests_32);
#line 949 "analysis.m"
        analysis__succeeded = MR_TRUE;
#line 949 "analysis.m"
      }
#line 949 "analysis.m"
    if (analysis__succeeded)
#line 949 "analysis.m"
      {
#line 12677 "analysis.c"
        analysis__TypeCtorInfo_201_201 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 12679 "analysis.c"
        analysis__TypeInfo_202_202 = (MR_Word) &analysis_scalar_common_2[0];
#line 950 "analysis.m"
        {
#line 950 "analysis.m"
          analysis__succeeded = mercury__map__elem_2_f_0(analysis__TypeCtorInfo_201_201, analysis__TypeInfo_202_202, ((MR_Box) (analysis__AnalysisName_12)), analysis__ModuleRequests_32, &analysis__conv6_V_59_59);
        }
#line 950 "analysis.m"
        if (analysis__succeeded)
#line 950 "analysis.m"
          {
#line 950 "analysis.m"
            analysis__V_59_59 = ((MR_Word) analysis__conv6_V_59_59);
#line 950 "analysis.m"
            analysis__succeeded = MR_TRUE;
#line 950 "analysis.m"
          }
#line 949 "analysis.m"
        if (analysis__succeeded)
#line 949 "analysis.m"
          {
#line 12700 "analysis.c"
            analysis__TypeCtorInfo_203_203 = (MR_Word) &analysis__analysis__type_ctor_info_func_id_0;
#line 12702 "analysis.c"
            analysis__TypeInfo_204_204 = (MR_Word) &analysis_scalar_common_1[0];
#line 950 "analysis.m"
            {
#line 950 "analysis.m"
              analysis__succeeded = mercury__map__elem_2_f_0(analysis__TypeCtorInfo_203_203, analysis__TypeInfo_204_204, ((MR_Box) (analysis__FuncId_13)), analysis__V_59_59, &analysis__conv7_Requests_33);
            }
#line 950 "analysis.m"
            if (analysis__succeeded)
#line 950 "analysis.m"
              {
#line 950 "analysis.m"
                analysis__Requests_33 = ((MR_Word) analysis__conv7_Requests_33);
#line 950 "analysis.m"
                analysis__succeeded = MR_TRUE;
#line 950 "analysis.m"
              }
#line 949 "analysis.m"
            if (analysis__succeeded)
#line 949 "analysis.m"
              {
#line 951 "analysis.m"
                analysis__succeeded = ((MR_tag((MR_Word) analysis__Requests_33)) == (MR_mktag((MR_Integer) 1)));
#line 951 "analysis.m"
                if (analysis__succeeded)
#line 951 "analysis.m"
                  {
#line 951 "analysis.m"
                    analysis__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), analysis__Requests_33, (MR_Integer) 0)));
#line 951 "analysis.m"
                    analysis__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), analysis__Requests_33, (MR_Integer) 1)));
#line 951 "analysis.m"
                  }
#line 949 "analysis.m"
              }
#line 949 "analysis.m"
          }
#line 949 "analysis.m"
      }
#line 960 "analysis.m"
    if (analysis__succeeded)
#line 956 "analysis.m"
      {
#line 956 "analysis.m"
        MR_Word analysis__TypeCtorInfo_206_206 = (MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0;
#line 956 "analysis.m"
        MR_Word analysis__Callers0_36;
#line 956 "analysis.m"
        MR_Word analysis__Callers_39;
#line 956 "analysis.m"
        MR_Word analysis__V_64_64;
#line 958 "analysis.m"
        MR_Box analysis__conv11_STATE_VARIABLE_Info_41;
#line 958 "analysis.m"
        MR_Box analysis__conv10_STATE_VARIABLE_IO_43;

#line 953 "analysis.m"
        {
#line 953 "analysis.m"
          analysis__Callers0_36 = mercury__list__filter_map_2_f_0((MR_Word) &analysis__analysis__type_ctor_info_analysis_request_0, analysis__TypeCtorInfo_206_206, (MR_Word) &analysis_scalar_common_2[10], analysis__Requests_33);
        }
#line 957 "analysis.m"
        {
#line 957 "analysis.m"
          mercury__list__sort_and_remove_dups_2_p_0(analysis__TypeCtorInfo_206_206, analysis__Callers0_36, &analysis__Callers_39);
        }
#line 958 "analysis.m"
        {
#line 958 "analysis.m"
          analysis__V_64_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 958 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__V_64_64, 0) = ((MR_Box) (&analysis_scalar_common_12[0]));
#line 958 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__V_64_64, 1) = ((MR_Box) (analysis__update_analysis_registry_5_9_p_0_3));
#line 958 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__V_64_64, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 958 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__V_64_64, 3) = ((MR_Box) (analysis__Globals_22));
#line 958 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__V_64_64, 4) = ((MR_Box) ((MR_Integer) 1));
#line 958 "analysis.m"
        }
#line 958 "analysis.m"
        {
#line 958 "analysis.m"
          mercury__list__foldl2_6_p_2(analysis__TypeCtorInfo_206_206, (MR_Word) &analysis__analysis__type_ctor_info_analysis_info_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, analysis__V_64_64, analysis__Callers_39, ((MR_Box) (analysis__STATE_VARIABLE_Info_50_50)), &analysis__conv11_STATE_VARIABLE_Info_41, ((MR_Box) ((MR_Integer) 0)), &analysis__conv10_STATE_VARIABLE_IO_43);
        }
#line 958 "analysis.m"
        *analysis__STATE_VARIABLE_Info_41 = ((MR_Word) analysis__conv11_STATE_VARIABLE_Info_41);
#line 956 "analysis.m"
      }
#line 960 "analysis.m"
    else
#line 961 "analysis.m"
      *analysis__STATE_VARIABLE_Info_41 = analysis__STATE_VARIABLE_Info_50_50;
#line 883 "analysis.m"
  }
#line 878 "analysis.m"
}

#line 873 "analysis.m"
static void MR_CALL 
analysis__update_analysis_registry_4_9_p_0_1(
#line 873 "analysis.m"
  MR_Box analysis__closure_arg,
#line 873 "analysis.m"
  MR_Box analysis__wrapper_arg_1,
#line 873 "analysis.m"
  MR_Box analysis__wrapper_arg_2,
#line 873 "analysis.m"
  MR_Box * analysis__wrapper_arg_3,
#line 873 "analysis.m"
  MR_Box analysis__wrapper_arg_4,
#line 873 "analysis.m"
  MR_Box * analysis__wrapper_arg_5)
#line 873 "analysis.m"
{
#line 873 "analysis.m"
  {
#line 873 "analysis.m"
    MR_Box analysis__closure = analysis__closure_arg;
#line 873 "analysis.m"
    MR_Word analysis__conv0_STATE_VARIABLE_Info_41;

#line 873 "analysis.m"
    {
#line 873 "analysis.m"
      analysis__update_analysis_registry_5_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 4))), ((MR_String) (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 6))), ((MR_Word) analysis__wrapper_arg_1), ((MR_Word) analysis__wrapper_arg_2), &analysis__conv0_STATE_VARIABLE_Info_41);
    }
#line 873 "analysis.m"
    *analysis__wrapper_arg_3 = ((MR_Box) (analysis__conv0_STATE_VARIABLE_Info_41));
#line 873 "analysis.m"
  }
#line 873 "analysis.m"
}

#line 865 "analysis.m"
void MR_CALL 
analysis__update_analysis_registry_4_9_p_0(
#line 865 "analysis.m"
  MR_Word analysis__ModuleInfo_10,
#line 865 "analysis.m"
  MR_Word analysis__ModuleName_11,
#line 865 "analysis.m"
  MR_String analysis__AnalysisName_12,
#line 865 "analysis.m"
  MR_Word analysis__FuncId_13,
#line 865 "analysis.m"
  MR_Word analysis__NewResults_14,
#line 865 "analysis.m"
  MR_Word analysis__STATE_VARIABLE_Info_0_17,
#line 865 "analysis.m"
  MR_Word * analysis__STATE_VARIABLE_Info_18)
#line 865 "analysis.m"
{
#line 870 "analysis.m"
  {
#line 870 "analysis.m"
    MR_bool analysis__succeeded;
#line 870 "analysis.m"
    MR_Word analysis__V_21_21;
#line 873 "analysis.m"
    MR_Box analysis__conv2_STATE_VARIABLE_Info_18;
#line 873 "analysis.m"
    MR_Box analysis__conv1_STATE_VARIABLE_IO_20;

#line 873 "analysis.m"
    {
#line 873 "analysis.m"
      analysis__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 873 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_21_21, 0) = ((MR_Box) (&analysis_scalar_common_11[1]));
#line 873 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_21_21, 1) = ((MR_Box) (analysis__update_analysis_registry_4_9_p_0_1));
#line 873 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_21_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 873 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_21_21, 3) = ((MR_Box) (analysis__ModuleInfo_10));
#line 873 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_21_21, 4) = ((MR_Box) (analysis__ModuleName_11));
#line 873 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_21_21, 5) = ((MR_Box) (analysis__AnalysisName_12));
#line 873 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_21_21, 6) = ((MR_Box) (analysis__FuncId_13));
#line 873 "analysis.m"
    }
#line 873 "analysis.m"
    {
#line 873 "analysis.m"
      mercury__list__foldl2_6_p_2((MR_Word) &analysis__analysis__type_ctor_info_some_analysis_result_0, (MR_Word) &analysis__analysis__type_ctor_info_analysis_info_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, analysis__V_21_21, analysis__NewResults_14, ((MR_Box) (analysis__STATE_VARIABLE_Info_0_17)), &analysis__conv2_STATE_VARIABLE_Info_18, ((MR_Box) ((MR_Integer) 0)), &analysis__conv1_STATE_VARIABLE_IO_20);
    }
#line 873 "analysis.m"
    *analysis__STATE_VARIABLE_Info_18 = ((MR_Word) analysis__conv2_STATE_VARIABLE_Info_18);
#line 870 "analysis.m"
  }
#line 865 "analysis.m"
}

#line 861 "analysis.m"
static void MR_CALL 
analysis__update_analysis_registry_3_8_p_0_1(
#line 861 "analysis.m"
  MR_Box analysis__closure_arg,
#line 861 "analysis.m"
  MR_Box analysis__wrapper_arg_1,
#line 861 "analysis.m"
  MR_Box analysis__wrapper_arg_2,
#line 861 "analysis.m"
  MR_Box analysis__wrapper_arg_3,
#line 861 "analysis.m"
  MR_Box * analysis__wrapper_arg_4,
#line 861 "analysis.m"
  MR_Box analysis__wrapper_arg_5,
#line 861 "analysis.m"
  MR_Box * analysis__wrapper_arg_6)
#line 861 "analysis.m"
{
#line 861 "analysis.m"
  {
#line 861 "analysis.m"
    MR_Box analysis__closure = analysis__closure_arg;
#line 861 "analysis.m"
    MR_Word analysis__conv0_STATE_VARIABLE_Info_18;

#line 861 "analysis.m"
    {
#line 861 "analysis.m"
      analysis__update_analysis_registry_4_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 4))), ((MR_String) (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 5))), ((MR_Word) analysis__wrapper_arg_1), ((MR_Word) analysis__wrapper_arg_2), ((MR_Word) analysis__wrapper_arg_3), &analysis__conv0_STATE_VARIABLE_Info_18);
    }
#line 861 "analysis.m"
    *analysis__wrapper_arg_4 = ((MR_Box) (analysis__conv0_STATE_VARIABLE_Info_18));
#line 861 "analysis.m"
  }
#line 861 "analysis.m"
}

#line 855 "analysis.m"
void MR_CALL 
analysis__update_analysis_registry_3_8_p_0(
#line 855 "analysis.m"
  MR_Word analysis__ModuleInfo_9,
#line 855 "analysis.m"
  MR_Word analysis__ModuleName_10,
#line 855 "analysis.m"
  MR_String analysis__AnalysisName_11,
#line 855 "analysis.m"
  MR_Word analysis__FuncMap_12,
#line 855 "analysis.m"
  MR_Word analysis__STATE_VARIABLE_Info_0_15,
#line 855 "analysis.m"
  MR_Word * analysis__STATE_VARIABLE_Info_16)
#line 855 "analysis.m"
{
#line 860 "analysis.m"
  {
#line 860 "analysis.m"
    MR_bool analysis__succeeded;
#line 860 "analysis.m"
    MR_Word analysis__V_19_19;
#line 861 "analysis.m"
    MR_Box analysis__conv2_STATE_VARIABLE_Info_16;
#line 861 "analysis.m"
    MR_Box analysis__conv1_STATE_VARIABLE_IO_18;

#line 861 "analysis.m"
    {
#line 861 "analysis.m"
      analysis__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 861 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_19_19, 0) = ((MR_Box) (&analysis_scalar_common_11[0]));
#line 861 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_19_19, 1) = ((MR_Box) (analysis__update_analysis_registry_3_8_p_0_1));
#line 861 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_19_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 861 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_19_19, 3) = ((MR_Box) (analysis__ModuleInfo_9));
#line 861 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_19_19, 4) = ((MR_Box) (analysis__ModuleName_10));
#line 861 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_19_19, 5) = ((MR_Box) (analysis__AnalysisName_11));
#line 861 "analysis.m"
    }
#line 861 "analysis.m"
    {
#line 861 "analysis.m"
      mercury__map__foldl2_6_p_2((MR_Word) &analysis__analysis__type_ctor_info_func_id_0, (MR_Word) &analysis_scalar_common_1[1], (MR_Word) &analysis__analysis__type_ctor_info_analysis_info_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, analysis__V_19_19, analysis__FuncMap_12, ((MR_Box) (analysis__STATE_VARIABLE_Info_0_15)), &analysis__conv2_STATE_VARIABLE_Info_16, ((MR_Box) ((MR_Integer) 0)), &analysis__conv1_STATE_VARIABLE_IO_18);
    }
#line 861 "analysis.m"
    *analysis__STATE_VARIABLE_Info_16 = ((MR_Word) analysis__conv2_STATE_VARIABLE_Info_16);
#line 860 "analysis.m"
  }
#line 855 "analysis.m"
}

#line 852 "analysis.m"
static void MR_CALL 
analysis__update_analysis_registry_2_7_p_0_1(
#line 852 "analysis.m"
  MR_Box analysis__closure_arg,
#line 852 "analysis.m"
  MR_Box analysis__wrapper_arg_1,
#line 852 "analysis.m"
  MR_Box analysis__wrapper_arg_2,
#line 852 "analysis.m"
  MR_Box analysis__wrapper_arg_3,
#line 852 "analysis.m"
  MR_Box * analysis__wrapper_arg_4,
#line 852 "analysis.m"
  MR_Box analysis__wrapper_arg_5,
#line 852 "analysis.m"
  MR_Box * analysis__wrapper_arg_6)
#line 852 "analysis.m"
{
#line 852 "analysis.m"
  {
#line 852 "analysis.m"
    MR_Box analysis__closure = analysis__closure_arg;
#line 852 "analysis.m"
    MR_Word analysis__conv0_STATE_VARIABLE_Info_16;

#line 852 "analysis.m"
    {
#line 852 "analysis.m"
      analysis__update_analysis_registry_3_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 4))), ((MR_String) analysis__wrapper_arg_1), ((MR_Word) analysis__wrapper_arg_2), ((MR_Word) analysis__wrapper_arg_3), &analysis__conv0_STATE_VARIABLE_Info_16);
    }
#line 852 "analysis.m"
    *analysis__wrapper_arg_4 = ((MR_Box) (analysis__conv0_STATE_VARIABLE_Info_16));
#line 852 "analysis.m"
  }
#line 852 "analysis.m"
}

#line 847 "analysis.m"
void MR_CALL 
analysis__update_analysis_registry_2_7_p_0(
#line 847 "analysis.m"
  MR_Word analysis__ModuleInfo_8,
#line 847 "analysis.m"
  MR_Word analysis__ModuleName_9,
#line 847 "analysis.m"
  MR_Word analysis__ModuleMap_10,
#line 847 "analysis.m"
  MR_Word analysis__STATE_VARIABLE_Info_0_13,
#line 847 "analysis.m"
  MR_Word * analysis__STATE_VARIABLE_Info_14)
#line 847 "analysis.m"
{
#line 851 "analysis.m"
  {
#line 851 "analysis.m"
    MR_bool analysis__succeeded;
#line 851 "analysis.m"
    MR_Word analysis__V_17_17;
#line 852 "analysis.m"
    MR_Box analysis__conv2_STATE_VARIABLE_Info_14;
#line 852 "analysis.m"
    MR_Box analysis__conv1_STATE_VARIABLE_IO_16;

#line 852 "analysis.m"
    {
#line 852 "analysis.m"
      analysis__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 852 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_17_17, 0) = ((MR_Box) (&analysis_scalar_common_10[0]));
#line 852 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_17_17, 1) = ((MR_Box) (analysis__update_analysis_registry_2_7_p_0_1));
#line 852 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_17_17, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 852 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_17_17, 3) = ((MR_Box) (analysis__ModuleInfo_8));
#line 852 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_17_17, 4) = ((MR_Box) (analysis__ModuleName_9));
#line 852 "analysis.m"
    }
#line 852 "analysis.m"
    {
#line 852 "analysis.m"
      mercury__map__foldl2_6_p_2((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &analysis_scalar_common_2[2], (MR_Word) &analysis__analysis__type_ctor_info_analysis_info_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, analysis__V_17_17, analysis__ModuleMap_10, ((MR_Box) (analysis__STATE_VARIABLE_Info_0_13)), &analysis__conv2_STATE_VARIABLE_Info_14, ((MR_Box) ((MR_Integer) 0)), &analysis__conv1_STATE_VARIABLE_IO_16);
    }
#line 852 "analysis.m"
    *analysis__STATE_VARIABLE_Info_14 = ((MR_Word) analysis__conv2_STATE_VARIABLE_Info_14);
#line 851 "analysis.m"
  }
#line 847 "analysis.m"
}

#line 852 "analysis.m"
static void MR_CALL 
analysis__update_analysis_registry_5_p_0_1(
#line 852 "analysis.m"
  MR_Box analysis__closure_arg,
#line 852 "analysis.m"
  MR_Box analysis__wrapper_arg_1,
#line 852 "analysis.m"
  MR_Box analysis__wrapper_arg_2,
#line 852 "analysis.m"
  MR_Box analysis__wrapper_arg_3,
#line 852 "analysis.m"
  MR_Box * analysis__wrapper_arg_4,
#line 852 "analysis.m"
  MR_Box analysis__wrapper_arg_5,
#line 852 "analysis.m"
  MR_Box * analysis__wrapper_arg_6)
#line 852 "analysis.m"
{
#line 852 "analysis.m"
  {
#line 852 "analysis.m"
    MR_Box analysis__closure = analysis__closure_arg;
#line 852 "analysis.m"
    MR_Word analysis__conv0_STATE_VARIABLE_Info_16;

#line 852 "analysis.m"
    {
#line 852 "analysis.m"
      analysis__update_analysis_registry_3_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 4))), ((MR_String) analysis__wrapper_arg_1), ((MR_Word) analysis__wrapper_arg_2), ((MR_Word) analysis__wrapper_arg_3), &analysis__conv0_STATE_VARIABLE_Info_16);
    }
#line 852 "analysis.m"
    *analysis__wrapper_arg_4 = ((MR_Box) (analysis__conv0_STATE_VARIABLE_Info_16));
#line 852 "analysis.m"
  }
#line 852 "analysis.m"
}

#line 837 "analysis.m"
void MR_CALL 
analysis__update_analysis_registry_5_p_0(
#line 837 "analysis.m"
  MR_Word analysis__ModuleInfo_6,
#line 837 "analysis.m"
  MR_Word analysis__STATE_VARIABLE_Info_0_10,
#line 837 "analysis.m"
  MR_Word * analysis__STATE_VARIABLE_Info_11)
#line 837 "analysis.m"
{
#line 840 "analysis.m"
  {
#line 840 "analysis.m"
    MR_bool analysis__succeeded;
#line 840 "analysis.m"
    MR_Word analysis__NewResults_9;
#line 840 "analysis.m"
    MR_Word analysis__V_17_17;
#line 840 "analysis.m"
    MR_Word analysis__STATE_VARIABLE_Info_18_18;
#line 840 "analysis.m"
    MR_Word analysis__V_21_21;
#line 840 "analysis.m"
    MR_Word analysis__Debug_61;
#line 840 "analysis.m"
    MR_Word analysis__V_75_75;
#line 842 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_compiler_52;
#line 842 "analysis.m"
    MR_Box analysis__V_22_22;
#line 842 "analysis.m"
    MR_Word analysis__V_23_23;
#line 842 "analysis.m"
    MR_Word analysis__V_24_24;
#line 842 "analysis.m"
    MR_Word analysis__V_25_25;
#line 842 "analysis.m"
    MR_Word analysis__V_26_26;
#line 842 "analysis.m"
    MR_Word analysis__V_27_27;
#line 842 "analysis.m"
    MR_Word analysis__V_28_28;
#line 842 "analysis.m"
    MR_Word analysis__V_29_29;
#line 842 "analysis.m"
    MR_Word analysis__V_30_30;
#line 843 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_compiler_53;
#line 843 "analysis.m"
    MR_Box analysis__V_31_31;
#line 843 "analysis.m"
    MR_Word analysis__V_32_32;
#line 843 "analysis.m"
    MR_Word analysis__V_33_33;
#line 843 "analysis.m"
    MR_Word analysis__V_34_34;
#line 843 "analysis.m"
    MR_Word analysis__V_35_35;
#line 843 "analysis.m"
    MR_Word analysis__V_36_36;
#line 843 "analysis.m"
    MR_Word analysis__V_37_37;
#line 843 "analysis.m"
    MR_Word analysis__V_38_38;
#line 843 "analysis.m"
    MR_Word analysis__V_39_39;
#line 852 "analysis.m"
    MR_Box analysis__conv2_STATE_VARIABLE_Info_18_18;
#line 852 "analysis.m"
    MR_Box analysis__conv1_STATE_VARIABLE_IO_13;
#line 845 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_compiler_56;
#line 845 "analysis.m"
    MR_Box analysis__V_40_40;
#line 845 "analysis.m"
    MR_Word analysis__V_41_41;
#line 845 "analysis.m"
    MR_Word analysis__V_42_42;
#line 845 "analysis.m"
    MR_Word analysis__V_43_43;
#line 845 "analysis.m"
    MR_Word analysis__V_44_44;
#line 845 "analysis.m"
    MR_Word analysis__V_45_45;
#line 845 "analysis.m"
    MR_Word analysis__V_46_46;
#line 845 "analysis.m"
    MR_Word analysis__V_48_48;
#line 845 "analysis.m"
    MR_Word analysis__V_49_49;
#line 845 "analysis.m"
    MR_Word analysis__V_47_47;

#line 1381 "analysis.m"
{
#define MR_PROC_LABEL analysis__update_analysis_registry_5_p_0


		{
#line 1381 "analysis.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&analysis__mutable_variable_debug_analysis_lock,
                "analysis__mutable_variable_debug_analysis_lock");
#endif

#line 13232 "analysis.c"

		;}
#undef MR_PROC_LABEL
#line 1381 "analysis.m"
}
#line 1381 "analysis.m"
{
#define MR_PROC_LABEL analysis__update_analysis_registry_5_p_0

	MR_Word X;

		{
#line 1381 "analysis.m"
X = analysis__mutable_variable_debug_analysis;

#line 13248 "analysis.c"

		;}
#undef MR_PROC_LABEL
	 analysis__Debug_61  = X;
#line 1381 "analysis.m"
}
#line 1381 "analysis.m"
{
#define MR_PROC_LABEL analysis__update_analysis_registry_5_p_0


		{
#line 1381 "analysis.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&analysis__mutable_variable_debug_analysis_lock,
                "analysis__mutable_variable_debug_analysis_lock");
#endif

#line 13267 "analysis.c"

		;}
#undef MR_PROC_LABEL
#line 1381 "analysis.m"
}
#line 1394 "analysis.m"
    if ((analysis__Debug_61 == (MR_Integer) 0))
#line 1395 "analysis.m"
      {
#line 1395 "analysis.m"
      }
#line 1394 "analysis.m"
    else
#line 1393 "analysis.m"
      {
#line 1393 "analysis.m"
        mercury__io__write_string_3_p_0((MR_String) "% Updating analysis registry.\n");
      }
#line 842 "analysis.m"
    analysis__TypeClassInfo_for_compiler_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_10, (MR_Integer) 0)));
#line 842 "analysis.m"
    analysis__V_22_22 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_10, (MR_Integer) 1));
#line 842 "analysis.m"
    analysis__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_10, (MR_Integer) 2)));
#line 842 "analysis.m"
    analysis__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_10, (MR_Integer) 3)));
#line 842 "analysis.m"
    analysis__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_10, (MR_Integer) 4)));
#line 842 "analysis.m"
    analysis__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_10, (MR_Integer) 5)));
#line 842 "analysis.m"
    analysis__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_10, (MR_Integer) 6)));
#line 842 "analysis.m"
    analysis__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_10, (MR_Integer) 7)));
#line 842 "analysis.m"
    analysis__NewResults_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_10, (MR_Integer) 8)));
#line 842 "analysis.m"
    analysis__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_10, (MR_Integer) 9)));
#line 842 "analysis.m"
    analysis__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_10, (MR_Integer) 10)));
#line 843 "analysis.m"
    analysis__TypeClassInfo_for_compiler_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_10, (MR_Integer) 0)));
#line 843 "analysis.m"
    analysis__V_31_31 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_10, (MR_Integer) 1));
#line 843 "analysis.m"
    analysis__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_10, (MR_Integer) 2)));
#line 843 "analysis.m"
    analysis__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_10, (MR_Integer) 3)));
#line 843 "analysis.m"
    analysis__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_10, (MR_Integer) 4)));
#line 843 "analysis.m"
    analysis__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_10, (MR_Integer) 5)));
#line 843 "analysis.m"
    analysis__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_10, (MR_Integer) 6)));
#line 843 "analysis.m"
    analysis__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_10, (MR_Integer) 7)));
#line 843 "analysis.m"
    analysis__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_10, (MR_Integer) 8)));
#line 843 "analysis.m"
    analysis__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_10, (MR_Integer) 9)));
#line 843 "analysis.m"
    analysis__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_10, (MR_Integer) 10)));
#line 852 "analysis.m"
    {
#line 852 "analysis.m"
      analysis__V_75_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 852 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_75_75, 0) = ((MR_Box) (&analysis_scalar_common_10[0]));
#line 852 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_75_75, 1) = ((MR_Box) (analysis__update_analysis_registry_5_p_0_1));
#line 852 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_75_75, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 852 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_75_75, 3) = ((MR_Box) (analysis__ModuleInfo_6));
#line 852 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_75_75, 4) = ((MR_Box) (analysis__V_17_17));
#line 852 "analysis.m"
    }
#line 852 "analysis.m"
    {
#line 852 "analysis.m"
      mercury__map__foldl2_6_p_2((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &analysis_scalar_common_2[2], (MR_Word) &analysis__analysis__type_ctor_info_analysis_info_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, analysis__V_75_75, analysis__NewResults_9, ((MR_Box) (analysis__STATE_VARIABLE_Info_0_10)), &analysis__conv2_STATE_VARIABLE_Info_18_18, ((MR_Box) ((MR_Integer) 0)), &analysis__conv1_STATE_VARIABLE_IO_13);
    }
#line 852 "analysis.m"
    analysis__STATE_VARIABLE_Info_18_18 = ((MR_Word) analysis__conv2_STATE_VARIABLE_Info_18_18);
#line 845 "analysis.m"
    {
#line 845 "analysis.m"
      analysis__V_21_21 = mercury__map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &analysis_scalar_common_2[2]);
    }
#line 845 "analysis.m"
    analysis__TypeClassInfo_for_compiler_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_18_18, (MR_Integer) 0)));
#line 845 "analysis.m"
    analysis__V_40_40 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_18_18, (MR_Integer) 1));
#line 845 "analysis.m"
    analysis__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_18_18, (MR_Integer) 2)));
#line 845 "analysis.m"
    analysis__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_18_18, (MR_Integer) 3)));
#line 845 "analysis.m"
    analysis__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_18_18, (MR_Integer) 4)));
#line 845 "analysis.m"
    analysis__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_18_18, (MR_Integer) 5)));
#line 845 "analysis.m"
    analysis__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_18_18, (MR_Integer) 6)));
#line 845 "analysis.m"
    analysis__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_18_18, (MR_Integer) 7)));
#line 845 "analysis.m"
    analysis__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_18_18, (MR_Integer) 8)));
#line 845 "analysis.m"
    analysis__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_18_18, (MR_Integer) 9)));
#line 845 "analysis.m"
    analysis__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_18_18, (MR_Integer) 10)));
#line 845 "analysis.m"
    {
#line 845 "analysis.m"
      MR_Word base;
#line 845 "analysis.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 845 "analysis.m"
      *analysis__STATE_VARIABLE_Info_11 = base;
#line 845 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (analysis__TypeClassInfo_for_compiler_56));
#line 845 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 1) = analysis__V_40_40;
#line 845 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (analysis__V_41_41));
#line 845 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (analysis__V_42_42));
#line 845 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (analysis__V_43_43));
#line 845 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (analysis__V_44_44));
#line 845 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (analysis__V_45_45));
#line 845 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (analysis__V_46_46));
#line 845 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (analysis__V_21_21));
#line 845 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (analysis__V_48_48));
#line 845 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (analysis__V_49_49));
#line 845 "analysis.m"
    }
#line 840 "analysis.m"
  }
#line 837 "analysis.m"
}

#line 773 "analysis.m"
void MR_CALL 
analysis__record_dependency_2_7_p_0(
#line 773 "analysis.m"
  MR_Word analysis__TypeClassInfo_for_call_pattern_58,
#line 773 "analysis.m"
  MR_Word analysis__CallerModuleName_8,
#line 773 "analysis.m"
  MR_String analysis__AnalysisName_9,
#line 773 "analysis.m"
  MR_Word analysis__CalleeModuleName_10,
#line 773 "analysis.m"
  MR_Word analysis__FuncId_11,
#line 773 "analysis.m"
  MR_Box analysis__Call_12,
#line 773 "analysis.m"
  MR_Word analysis__STATE_VARIABLE_Info_0_22,
#line 773 "analysis.m"
  MR_Word * analysis__STATE_VARIABLE_Info_23)
#line 773 "analysis.m"
{
#line 779 "analysis.m"
  {
#line 779 "analysis.m"
    MR_bool analysis__succeeded;
#line 779 "analysis.m"
    MR_Word analysis__Analyses1_15;
#line 779 "analysis.m"
    MR_Word analysis__Funcs1_17;
#line 779 "analysis.m"
    MR_Word analysis__FuncArcs1_19;
#line 779 "analysis.m"
    MR_Word analysis__Dep_20;
#line 782 "analysis.m"
    MR_Word analysis__Analyses0_14;
#line 780 "analysis.m"
    MR_Word analysis__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 10)));
#line 780 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_compiler_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 0)));
#line 780 "analysis.m"
    MR_Box analysis__V_30_30 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 1));
#line 780 "analysis.m"
    MR_Word analysis__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 2)));
#line 780 "analysis.m"
    MR_Word analysis__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 3)));
#line 780 "analysis.m"
    MR_Word analysis__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 4)));
#line 780 "analysis.m"
    MR_Word analysis__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 5)));
#line 780 "analysis.m"
    MR_Word analysis__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 6)));
#line 780 "analysis.m"
    MR_Word analysis__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 7)));
#line 780 "analysis.m"
    MR_Word analysis__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 8)));
#line 780 "analysis.m"
    MR_Word analysis__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 9)));
#line 780 "analysis.m"
    MR_Box analysis__conv0_Analyses0_14;
#line 787 "analysis.m"
    MR_Word analysis__Funcs0_16;
#line 785 "analysis.m"
    MR_Box analysis__conv1_Funcs0_16;
#line 792 "analysis.m"
    MR_Word analysis__FuncArcs0_18;
#line 790 "analysis.m"
    MR_Box analysis__conv2_FuncArcs0_18;

#line 780 "analysis.m"
    {
#line 780 "analysis.m"
      analysis__succeeded = mercury__map__search_2_f_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0, (MR_Word) &analysis_scalar_common_2[5], analysis__V_24_24, ((MR_Box) (analysis__CalleeModuleName_10)), &analysis__conv0_Analyses0_14);
    }
#line 780 "analysis.m"
    if (analysis__succeeded)
#line 780 "analysis.m"
      {
#line 780 "analysis.m"
        analysis__Analyses0_14 = ((MR_Word) analysis__conv0_Analyses0_14);
#line 780 "analysis.m"
        analysis__succeeded = MR_TRUE;
#line 780 "analysis.m"
      }
#line 782 "analysis.m"
    if (analysis__succeeded)
#line 781 "analysis.m"
      analysis__Analyses1_15 = analysis__Analyses0_14;
#line 782 "analysis.m"
    else
#line 783 "analysis.m"
      {
#line 783 "analysis.m"
        {
#line 783 "analysis.m"
          analysis__Analyses1_15 = mercury__map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &analysis_scalar_common_2[4]);
        }
#line 783 "analysis.m"
      }
#line 785 "analysis.m"
    {
#line 785 "analysis.m"
      analysis__succeeded = mercury__map__search_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &analysis_scalar_common_2[4], analysis__Analyses1_15, ((MR_Box) (analysis__AnalysisName_9)), &analysis__conv1_Funcs0_16);
    }
#line 785 "analysis.m"
    if (analysis__succeeded)
#line 785 "analysis.m"
      {
#line 785 "analysis.m"
        analysis__Funcs0_16 = ((MR_Word) analysis__conv1_Funcs0_16);
#line 785 "analysis.m"
        analysis__succeeded = MR_TRUE;
#line 785 "analysis.m"
      }
#line 787 "analysis.m"
    if (analysis__succeeded)
#line 786 "analysis.m"
      analysis__Funcs1_17 = analysis__Funcs0_16;
#line 787 "analysis.m"
    else
#line 788 "analysis.m"
      {
#line 788 "analysis.m"
        {
#line 788 "analysis.m"
          analysis__Funcs1_17 = mercury__map__init_0_f_0((MR_Word) &analysis__analysis__type_ctor_info_func_id_0, (MR_Word) &analysis_scalar_common_1[2]);
        }
#line 788 "analysis.m"
      }
#line 790 "analysis.m"
    {
#line 790 "analysis.m"
      analysis__succeeded = mercury__map__search_2_f_0((MR_Word) &analysis__analysis__type_ctor_info_func_id_0, (MR_Word) &analysis_scalar_common_1[2], analysis__Funcs1_17, ((MR_Box) (analysis__FuncId_11)), &analysis__conv2_FuncArcs0_18);
    }
#line 790 "analysis.m"
    if (analysis__succeeded)
#line 790 "analysis.m"
      {
#line 790 "analysis.m"
        analysis__FuncArcs0_18 = ((MR_Word) analysis__conv2_FuncArcs0_18);
#line 790 "analysis.m"
        analysis__succeeded = MR_TRUE;
#line 790 "analysis.m"
      }
#line 792 "analysis.m"
    if (analysis__succeeded)
#line 791 "analysis.m"
      analysis__FuncArcs1_19 = analysis__FuncArcs0_18;
#line 792 "analysis.m"
    else
#line 793 "analysis.m"
      analysis__FuncArcs1_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 795 "analysis.m"
    {
#line 795 "analysis.m"
      analysis__Dep_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 795 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__Dep_20, 0) = ((MR_Box) (analysis__TypeClassInfo_for_call_pattern_58));
#line 795 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__Dep_20, 1) = analysis__Call_12;
#line 795 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__Dep_20, 2) = ((MR_Box) (analysis__CallerModuleName_8));
#line 795 "analysis.m"
    }
#line 797 "analysis.m"
    {
#line 797 "analysis.m"
      analysis__succeeded = mercury__list__member_2_p_0((MR_Word) &analysis__analysis__type_ctor_info_imdg_arc_0, ((MR_Box) (analysis__Dep_20)), analysis__FuncArcs1_19);
    }
#line 799 "analysis.m"
    if (analysis__succeeded)
#line 797 "analysis.m"
      *analysis__STATE_VARIABLE_Info_23 = analysis__STATE_VARIABLE_Info_0_22;
#line 799 "analysis.m"
    else
#line 800 "analysis.m"
      {
#line 800 "analysis.m"
        MR_Word analysis__FuncArcs_21;
#line 800 "analysis.m"
        MR_Word analysis__V_26_26;
#line 800 "analysis.m"
        MR_Word analysis__V_27_27;
#line 800 "analysis.m"
        MR_Word analysis__V_28_28;
#line 800 "analysis.m"
        MR_Word analysis__V_29_29;
#line 802 "analysis.m"
        MR_Word analysis__TypeClassInfo_for_compiler_73;
#line 802 "analysis.m"
        MR_Box analysis__V_39_39;
#line 802 "analysis.m"
        MR_Word analysis__V_40_40;
#line 802 "analysis.m"
        MR_Word analysis__V_41_41;
#line 802 "analysis.m"
        MR_Word analysis__V_42_42;
#line 802 "analysis.m"
        MR_Word analysis__V_43_43;
#line 802 "analysis.m"
        MR_Word analysis__V_44_44;
#line 802 "analysis.m"
        MR_Word analysis__V_45_45;
#line 802 "analysis.m"
        MR_Word analysis__V_46_46;
#line 802 "analysis.m"
        MR_Word analysis__V_47_47;
#line 801 "analysis.m"
        MR_Word analysis__TypeClassInfo_for_compiler_78;
#line 801 "analysis.m"
        MR_Box analysis__V_48_48;
#line 801 "analysis.m"
        MR_Word analysis__V_49_49;
#line 801 "analysis.m"
        MR_Word analysis__V_50_50;
#line 801 "analysis.m"
        MR_Word analysis__V_51_51;
#line 801 "analysis.m"
        MR_Word analysis__V_52_52;
#line 801 "analysis.m"
        MR_Word analysis__V_53_53;
#line 801 "analysis.m"
        MR_Word analysis__V_54_54;
#line 801 "analysis.m"
        MR_Word analysis__V_55_55;
#line 801 "analysis.m"
        MR_Word analysis__V_56_56;
#line 801 "analysis.m"
        MR_Word analysis__V_57_57;

#line 800 "analysis.m"
        {
#line 800 "analysis.m"
          analysis__FuncArcs_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 800 "analysis.m"
          MR_hl_field(MR_mktag(1), analysis__FuncArcs_21, 0) = ((MR_Box) (analysis__Dep_20));
#line 800 "analysis.m"
          MR_hl_field(MR_mktag(1), analysis__FuncArcs_21, 1) = ((MR_Box) (analysis__FuncArcs1_19));
#line 800 "analysis.m"
        }
#line 802 "analysis.m"
        analysis__TypeClassInfo_for_compiler_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 0)));
#line 802 "analysis.m"
        analysis__V_39_39 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 1));
#line 802 "analysis.m"
        analysis__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 2)));
#line 802 "analysis.m"
        analysis__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 3)));
#line 802 "analysis.m"
        analysis__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 4)));
#line 802 "analysis.m"
        analysis__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 5)));
#line 802 "analysis.m"
        analysis__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 6)));
#line 802 "analysis.m"
        analysis__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 7)));
#line 802 "analysis.m"
        analysis__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 8)));
#line 802 "analysis.m"
        analysis__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 9)));
#line 802 "analysis.m"
        analysis__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 10)));
#line 803 "analysis.m"
        {
#line 803 "analysis.m"
          analysis__V_29_29 = mercury__map__set_3_f_0((MR_Word) &analysis__analysis__type_ctor_info_func_id_0, (MR_Word) &analysis_scalar_common_1[2], analysis__Funcs1_17, ((MR_Box) (analysis__FuncId_11)), ((MR_Box) (analysis__FuncArcs_21)));
        }
#line 802 "analysis.m"
        {
#line 802 "analysis.m"
          analysis__V_28_28 = mercury__map__set_3_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &analysis_scalar_common_2[4], analysis__Analyses1_15, ((MR_Box) (analysis__AnalysisName_9)), ((MR_Box) (analysis__V_29_29)));
        }
#line 801 "analysis.m"
        {
#line 801 "analysis.m"
          analysis__V_26_26 = mercury__map__set_3_f_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0, (MR_Word) &analysis_scalar_common_2[5], analysis__V_27_27, ((MR_Box) (analysis__CalleeModuleName_10)), ((MR_Box) (analysis__V_28_28)));
        }
#line 801 "analysis.m"
        analysis__TypeClassInfo_for_compiler_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 0)));
#line 801 "analysis.m"
        analysis__V_48_48 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 1));
#line 801 "analysis.m"
        analysis__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 2)));
#line 801 "analysis.m"
        analysis__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 3)));
#line 801 "analysis.m"
        analysis__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 4)));
#line 801 "analysis.m"
        analysis__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 5)));
#line 801 "analysis.m"
        analysis__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 6)));
#line 801 "analysis.m"
        analysis__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 7)));
#line 801 "analysis.m"
        analysis__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 8)));
#line 801 "analysis.m"
        analysis__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 9)));
#line 801 "analysis.m"
        analysis__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 10)));
#line 801 "analysis.m"
        {
#line 801 "analysis.m"
          MR_Word base;
#line 801 "analysis.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 801 "analysis.m"
          *analysis__STATE_VARIABLE_Info_23 = base;
#line 801 "analysis.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (analysis__TypeClassInfo_for_compiler_78));
#line 801 "analysis.m"
          MR_hl_field(MR_mktag(0), base, 1) = analysis__V_48_48;
#line 801 "analysis.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (analysis__V_49_49));
#line 801 "analysis.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (analysis__V_50_50));
#line 801 "analysis.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (analysis__V_51_51));
#line 801 "analysis.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (analysis__V_52_52));
#line 801 "analysis.m"
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (analysis__V_53_53));
#line 801 "analysis.m"
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (analysis__V_54_54));
#line 801 "analysis.m"
          MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (analysis__V_55_55));
#line 801 "analysis.m"
          MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (analysis__V_56_56));
#line 801 "analysis.m"
          MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (analysis__V_26_26));
#line 801 "analysis.m"
        }
#line 800 "analysis.m"
      }
#line 779 "analysis.m"
  }
#line 773 "analysis.m"
}

#line 709 "analysis.m"
void MR_CALL 
analysis__record_request_2_7_p_0(
#line 709 "analysis.m"
  MR_Word analysis__TypeClassInfo_for_call_pattern_58,
#line 709 "analysis.m"
  MR_Word analysis__CallerModule_8,
#line 709 "analysis.m"
  MR_String analysis__AnalysisName_9,
#line 709 "analysis.m"
  MR_Word analysis__ModuleName_10,
#line 709 "analysis.m"
  MR_Word analysis__FuncId_11,
#line 709 "analysis.m"
  MR_Box analysis__CallPattern_12,
#line 709 "analysis.m"
  MR_Word analysis__STATE_VARIABLE_Info_0_22,
#line 709 "analysis.m"
  MR_Word * analysis__STATE_VARIABLE_Info_23)
#line 709 "analysis.m"
{
#line 714 "analysis.m"
  {
#line 714 "analysis.m"
    MR_bool analysis__succeeded;
#line 714 "analysis.m"
    MR_Word analysis__ModuleResults1_15;
#line 714 "analysis.m"
    MR_Word analysis__AnalysisResults1_17;
#line 714 "analysis.m"
    MR_Word analysis__FuncResults1_19;
#line 714 "analysis.m"
    MR_Word analysis__Request_20;
#line 714 "analysis.m"
    MR_Word analysis__FuncResults_21;
#line 714 "analysis.m"
    MR_Word analysis__V_26_26;
#line 714 "analysis.m"
    MR_Word analysis__V_27_27;
#line 714 "analysis.m"
    MR_Word analysis__V_28_28;
#line 714 "analysis.m"
    MR_Word analysis__V_29_29;
#line 717 "analysis.m"
    MR_Word analysis__ModuleResults0_14;
#line 715 "analysis.m"
    MR_Word analysis__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 5)));
#line 715 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_compiler_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 0)));
#line 715 "analysis.m"
    MR_Box analysis__V_30_30 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 1));
#line 715 "analysis.m"
    MR_Word analysis__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 2)));
#line 715 "analysis.m"
    MR_Word analysis__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 3)));
#line 715 "analysis.m"
    MR_Word analysis__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 4)));
#line 715 "analysis.m"
    MR_Word analysis__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 6)));
#line 715 "analysis.m"
    MR_Word analysis__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 7)));
#line 715 "analysis.m"
    MR_Word analysis__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 8)));
#line 715 "analysis.m"
    MR_Word analysis__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 9)));
#line 715 "analysis.m"
    MR_Word analysis__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 10)));
#line 715 "analysis.m"
    MR_Box analysis__conv0_ModuleResults0_14;
#line 722 "analysis.m"
    MR_Word analysis__AnalysisResults0_16;
#line 720 "analysis.m"
    MR_Box analysis__conv1_AnalysisResults0_16;
#line 727 "analysis.m"
    MR_Word analysis__FuncResults0_18;
#line 725 "analysis.m"
    MR_Box analysis__conv2_FuncResults0_18;
#line 733 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_compiler_72;
#line 733 "analysis.m"
    MR_Box analysis__V_39_39;
#line 733 "analysis.m"
    MR_Word analysis__V_40_40;
#line 733 "analysis.m"
    MR_Word analysis__V_41_41;
#line 733 "analysis.m"
    MR_Word analysis__V_42_42;
#line 733 "analysis.m"
    MR_Word analysis__V_43_43;
#line 733 "analysis.m"
    MR_Word analysis__V_44_44;
#line 733 "analysis.m"
    MR_Word analysis__V_45_45;
#line 733 "analysis.m"
    MR_Word analysis__V_46_46;
#line 733 "analysis.m"
    MR_Word analysis__V_47_47;
#line 732 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_compiler_77;
#line 732 "analysis.m"
    MR_Box analysis__V_48_48;
#line 732 "analysis.m"
    MR_Word analysis__V_49_49;
#line 732 "analysis.m"
    MR_Word analysis__V_50_50;
#line 732 "analysis.m"
    MR_Word analysis__V_51_51;
#line 732 "analysis.m"
    MR_Word analysis__V_53_53;
#line 732 "analysis.m"
    MR_Word analysis__V_54_54;
#line 732 "analysis.m"
    MR_Word analysis__V_55_55;
#line 732 "analysis.m"
    MR_Word analysis__V_56_56;
#line 732 "analysis.m"
    MR_Word analysis__V_57_57;
#line 732 "analysis.m"
    MR_Word analysis__V_52_52;

#line 715 "analysis.m"
    {
#line 715 "analysis.m"
      analysis__succeeded = mercury__map__search_2_f_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0, (MR_Word) &analysis_scalar_common_2[1], analysis__V_24_24, ((MR_Box) (analysis__ModuleName_10)), &analysis__conv0_ModuleResults0_14);
    }
#line 715 "analysis.m"
    if (analysis__succeeded)
#line 715 "analysis.m"
      {
#line 715 "analysis.m"
        analysis__ModuleResults0_14 = ((MR_Word) analysis__conv0_ModuleResults0_14);
#line 715 "analysis.m"
        analysis__succeeded = MR_TRUE;
#line 715 "analysis.m"
      }
#line 717 "analysis.m"
    if (analysis__succeeded)
#line 716 "analysis.m"
      analysis__ModuleResults1_15 = analysis__ModuleResults0_14;
#line 717 "analysis.m"
    else
#line 718 "analysis.m"
      {
#line 718 "analysis.m"
        {
#line 718 "analysis.m"
          analysis__ModuleResults1_15 = mercury__map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &analysis_scalar_common_2[0]);
        }
#line 718 "analysis.m"
      }
#line 720 "analysis.m"
    {
#line 720 "analysis.m"
      analysis__succeeded = mercury__map__search_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &analysis_scalar_common_2[0], analysis__ModuleResults1_15, ((MR_Box) (analysis__AnalysisName_9)), &analysis__conv1_AnalysisResults0_16);
    }
#line 720 "analysis.m"
    if (analysis__succeeded)
#line 720 "analysis.m"
      {
#line 720 "analysis.m"
        analysis__AnalysisResults0_16 = ((MR_Word) analysis__conv1_AnalysisResults0_16);
#line 720 "analysis.m"
        analysis__succeeded = MR_TRUE;
#line 720 "analysis.m"
      }
#line 722 "analysis.m"
    if (analysis__succeeded)
#line 721 "analysis.m"
      analysis__AnalysisResults1_17 = analysis__AnalysisResults0_16;
#line 722 "analysis.m"
    else
#line 723 "analysis.m"
      {
#line 723 "analysis.m"
        {
#line 723 "analysis.m"
          analysis__AnalysisResults1_17 = mercury__map__init_0_f_0((MR_Word) &analysis__analysis__type_ctor_info_func_id_0, (MR_Word) &analysis_scalar_common_1[0]);
        }
#line 723 "analysis.m"
      }
#line 725 "analysis.m"
    {
#line 725 "analysis.m"
      analysis__succeeded = mercury__map__search_2_f_0((MR_Word) &analysis__analysis__type_ctor_info_func_id_0, (MR_Word) &analysis_scalar_common_1[0], analysis__AnalysisResults1_17, ((MR_Box) (analysis__FuncId_11)), &analysis__conv2_FuncResults0_18);
    }
#line 725 "analysis.m"
    if (analysis__succeeded)
#line 725 "analysis.m"
      {
#line 725 "analysis.m"
        analysis__FuncResults0_18 = ((MR_Word) analysis__conv2_FuncResults0_18);
#line 725 "analysis.m"
        analysis__succeeded = MR_TRUE;
#line 725 "analysis.m"
      }
#line 727 "analysis.m"
    if (analysis__succeeded)
#line 726 "analysis.m"
      analysis__FuncResults1_19 = analysis__FuncResults0_18;
#line 727 "analysis.m"
    else
#line 728 "analysis.m"
      analysis__FuncResults1_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 730 "analysis.m"
    {
#line 730 "analysis.m"
      analysis__Request_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 730 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__Request_20, 0) = ((MR_Box) (analysis__TypeClassInfo_for_call_pattern_58));
#line 730 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__Request_20, 1) = analysis__CallPattern_12;
#line 730 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__Request_20, 2) = ((MR_Box) (analysis__CallerModule_8));
#line 730 "analysis.m"
    }
#line 731 "analysis.m"
    {
#line 731 "analysis.m"
      analysis__FuncResults_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 731 "analysis.m"
      MR_hl_field(MR_mktag(1), analysis__FuncResults_21, 0) = ((MR_Box) (analysis__Request_20));
#line 731 "analysis.m"
      MR_hl_field(MR_mktag(1), analysis__FuncResults_21, 1) = ((MR_Box) (analysis__FuncResults1_19));
#line 731 "analysis.m"
    }
#line 733 "analysis.m"
    analysis__TypeClassInfo_for_compiler_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 0)));
#line 733 "analysis.m"
    analysis__V_39_39 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 1));
#line 733 "analysis.m"
    analysis__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 2)));
#line 733 "analysis.m"
    analysis__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 3)));
#line 733 "analysis.m"
    analysis__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 4)));
#line 733 "analysis.m"
    analysis__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 5)));
#line 733 "analysis.m"
    analysis__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 6)));
#line 733 "analysis.m"
    analysis__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 7)));
#line 733 "analysis.m"
    analysis__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 8)));
#line 733 "analysis.m"
    analysis__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 9)));
#line 733 "analysis.m"
    analysis__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 10)));
#line 734 "analysis.m"
    {
#line 734 "analysis.m"
      analysis__V_29_29 = mercury__map__set_3_f_0((MR_Word) &analysis__analysis__type_ctor_info_func_id_0, (MR_Word) &analysis_scalar_common_1[0], analysis__AnalysisResults1_17, ((MR_Box) (analysis__FuncId_11)), ((MR_Box) (analysis__FuncResults_21)));
    }
#line 733 "analysis.m"
    {
#line 733 "analysis.m"
      analysis__V_28_28 = mercury__map__set_3_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &analysis_scalar_common_2[0], analysis__ModuleResults1_15, ((MR_Box) (analysis__AnalysisName_9)), ((MR_Box) (analysis__V_29_29)));
    }
#line 732 "analysis.m"
    {
#line 732 "analysis.m"
      analysis__V_26_26 = mercury__map__set_3_f_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0, (MR_Word) &analysis_scalar_common_2[1], analysis__V_27_27, ((MR_Box) (analysis__ModuleName_10)), ((MR_Box) (analysis__V_28_28)));
    }
#line 732 "analysis.m"
    analysis__TypeClassInfo_for_compiler_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 0)));
#line 732 "analysis.m"
    analysis__V_48_48 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 1));
#line 732 "analysis.m"
    analysis__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 2)));
#line 732 "analysis.m"
    analysis__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 3)));
#line 732 "analysis.m"
    analysis__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 4)));
#line 732 "analysis.m"
    analysis__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 5)));
#line 732 "analysis.m"
    analysis__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 6)));
#line 732 "analysis.m"
    analysis__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 7)));
#line 732 "analysis.m"
    analysis__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 8)));
#line 732 "analysis.m"
    analysis__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 9)));
#line 732 "analysis.m"
    analysis__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 10)));
#line 732 "analysis.m"
    {
#line 732 "analysis.m"
      MR_Word base;
#line 732 "analysis.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 732 "analysis.m"
      *analysis__STATE_VARIABLE_Info_23 = base;
#line 732 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (analysis__TypeClassInfo_for_compiler_77));
#line 732 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 1) = analysis__V_48_48;
#line 732 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (analysis__V_49_49));
#line 732 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (analysis__V_50_50));
#line 732 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (analysis__V_51_51));
#line 732 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (analysis__V_26_26));
#line 732 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (analysis__V_53_53));
#line 732 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (analysis__V_54_54));
#line 732 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (analysis__V_55_55));
#line 732 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (analysis__V_56_56));
#line 732 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (analysis__V_57_57));
#line 732 "analysis.m"
    }
#line 714 "analysis.m"
  }
#line 709 "analysis.m"
}

#line 641 "analysis.m"
void MR_CALL 
analysis__record_result_in_analysis_map_6_p_0(
#line 641 "analysis.m"
  MR_Word analysis__TypeClassInfo_for_analysis_21,
#line 641 "analysis.m"
  MR_Word analysis__FuncId_7,
#line 641 "analysis.m"
  MR_Box analysis__CallPattern_8,
#line 641 "analysis.m"
  MR_Box analysis__AnswerPattern_9,
#line 641 "analysis.m"
  MR_Word analysis__Status_10,
#line 641 "analysis.m"
  MR_Word analysis__ModuleResults0_11,
#line 641 "analysis.m"
  MR_Word * analysis__ModuleResults_12)
#line 641 "analysis.m"
{
#line 648 "analysis.m"
  {
#line 648 "analysis.m"
    MR_bool analysis__succeeded;
#line 648 "analysis.m"
    MR_String analysis__AnalysisName_13;
#line 648 "analysis.m"
    MR_Word analysis__AnalysisResults1_15;
#line 648 "analysis.m"
    MR_Word analysis__FuncResults1_17;
#line 648 "analysis.m"
    MR_Word analysis__Result_18;
#line 648 "analysis.m"
    MR_Word analysis__FuncResults_19;
#line 648 "analysis.m"
    MR_Word analysis__V_20_20;
#line 14110 "analysis.c"
    MR_Box analysis__V_32_32;
#line 14112 "analysis.c"
    MR_Box analysis__V_33_33;
#line 14114 "analysis.c"
    MR_Box MR_CALL (* analysis__func_0)(MR_Box) = ((MR_Box MR_CALL (*)(MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), analysis__TypeClassInfo_for_analysis_21, (MR_Integer) 0)), (MR_Integer) 5)));
#line 14116 "analysis.c"
    MR_Box analysis__conv1_AnalysisName_13;
#line 652 "analysis.m"
    MR_Word analysis__AnalysisResults0_14;
#line 650 "analysis.m"
    MR_Box analysis__conv2_AnalysisResults0_14;
#line 657 "analysis.m"
    MR_Word analysis__FuncResults0_16;
#line 655 "analysis.m"
    MR_Box analysis__conv3_FuncResults0_16;

#line 14127 "analysis.c"
    {
#line 14129 "analysis.c"
      analysis__conv1_AnalysisName_13 = analysis__func_0(((MR_Box) analysis__TypeClassInfo_for_analysis_21));
    }
#line 14132 "analysis.c"
    analysis__AnalysisName_13 = ((MR_String) analysis__conv1_AnalysisName_13);
#line 650 "analysis.m"
    {
#line 650 "analysis.m"
      analysis__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &analysis_scalar_common_2[2], analysis__ModuleResults0_11, ((MR_Box) (analysis__AnalysisName_13)), &analysis__conv2_AnalysisResults0_14);
    }
#line 650 "analysis.m"
    if (analysis__succeeded)
#line 650 "analysis.m"
      {
#line 650 "analysis.m"
        analysis__AnalysisResults0_14 = ((MR_Word) analysis__conv2_AnalysisResults0_14);
#line 650 "analysis.m"
        analysis__succeeded = MR_TRUE;
#line 650 "analysis.m"
      }
#line 652 "analysis.m"
    if (analysis__succeeded)
#line 651 "analysis.m"
      analysis__AnalysisResults1_15 = analysis__AnalysisResults0_14;
#line 652 "analysis.m"
    else
#line 653 "analysis.m"
      {
#line 653 "analysis.m"
        {
#line 653 "analysis.m"
          analysis__AnalysisResults1_15 = mercury__map__init_0_f_0((MR_Word) &analysis__analysis__type_ctor_info_func_id_0, (MR_Word) &analysis_scalar_common_1[1]);
        }
#line 653 "analysis.m"
      }
#line 655 "analysis.m"
    {
#line 655 "analysis.m"
      analysis__succeeded = mercury__map__search_3_p_0((MR_Word) &analysis__analysis__type_ctor_info_func_id_0, (MR_Word) &analysis_scalar_common_1[1], analysis__AnalysisResults1_15, ((MR_Box) (analysis__FuncId_7)), &analysis__conv3_FuncResults0_16);
    }
#line 655 "analysis.m"
    if (analysis__succeeded)
#line 655 "analysis.m"
      {
#line 655 "analysis.m"
        analysis__FuncResults0_16 = ((MR_Word) analysis__conv3_FuncResults0_16);
#line 655 "analysis.m"
        analysis__succeeded = MR_TRUE;
#line 655 "analysis.m"
      }
#line 657 "analysis.m"
    if (analysis__succeeded)
#line 656 "analysis.m"
      analysis__FuncResults1_17 = analysis__FuncResults0_16;
#line 657 "analysis.m"
    else
#line 658 "analysis.m"
      analysis__FuncResults1_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 660 "analysis.m"
    {
#line 660 "analysis.m"
      analysis__Result_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 660 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__Result_18, 0) = ((MR_Box) (analysis__TypeClassInfo_for_analysis_21));
#line 660 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__Result_18, 1) = analysis__CallPattern_8;
#line 660 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__Result_18, 2) = analysis__AnswerPattern_9;
#line 660 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__Result_18, 3) = ((MR_Box) (analysis__Status_10));
#line 660 "analysis.m"
    }
#line 661 "analysis.m"
    {
#line 661 "analysis.m"
      analysis__FuncResults_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 661 "analysis.m"
      MR_hl_field(MR_mktag(1), analysis__FuncResults_19, 0) = ((MR_Box) (analysis__Result_18));
#line 661 "analysis.m"
      MR_hl_field(MR_mktag(1), analysis__FuncResults_19, 1) = ((MR_Box) (analysis__FuncResults1_17));
#line 661 "analysis.m"
    }
#line 663 "analysis.m"
    {
#line 663 "analysis.m"
      analysis__V_20_20 = mercury__map__set_3_f_0((MR_Word) &analysis__analysis__type_ctor_info_func_id_0, (MR_Word) &analysis_scalar_common_1[1], analysis__AnalysisResults1_15, ((MR_Box) (analysis__FuncId_7)), ((MR_Box) (analysis__FuncResults_19)));
    }
#line 662 "analysis.m"
    {
#line 662 "analysis.m"
      *analysis__ModuleResults_12 = mercury__map__set_3_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &analysis_scalar_common_2[2], analysis__ModuleResults0_11, ((MR_Box) (analysis__AnalysisName_13)), ((MR_Box) (analysis__V_20_20)));
    }
#line 648 "analysis.m"
  }
#line 641 "analysis.m"
}

#line 604 "analysis.m"
static MR_bool MR_CALL 
analysis__lookup_exactly_matching_result_even_from_invalid_modules_6_p_0_1(
#line 604 "analysis.m"
  MR_Box analysis__closure_arg,
#line 604 "analysis.m"
  MR_Box analysis__wrapper_arg_1)
#line 604 "analysis.m"
{
#line 604 "analysis.m"
  {
#line 604 "analysis.m"
    MR_bool analysis__succeeded;
#line 604 "analysis.m"
    MR_Box analysis__closure = analysis__closure_arg;

#line 604 "analysis.m"
    {
#line 604 "analysis.m"
      return analysis__succeeded = analysis__IntroducedFrom__pred__lookup_exactly_matching_result_even_from_invalid_modules__604__1_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 3))), (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 4)), (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 5)), ((MR_Word) analysis__wrapper_arg_1));
    }
#line 604 "analysis.m"
    return analysis__succeeded;
#line 604 "analysis.m"
  }
#line 604 "analysis.m"
}

#line 594 "analysis.m"
void MR_CALL 
analysis__lookup_exactly_matching_result_even_from_invalid_modules_6_p_0(
#line 594 "analysis.m"
  MR_Word analysis__TypeClassInfo_for_analysis_32,
#line 594 "analysis.m"
  MR_Word analysis__Info_7,
#line 594 "analysis.m"
  MR_Word analysis__ModuleName_8,
#line 594 "analysis.m"
  MR_Word analysis__FuncId_9,
#line 594 "analysis.m"
  MR_Box analysis__FuncInfo_10,
#line 594 "analysis.m"
  MR_Box analysis__Call_11,
#line 594 "analysis.m"
  MR_Word * analysis__MaybeResult_12)
#line 594 "analysis.m"
{
#line 600 "analysis.m"
  {
#line 600 "analysis.m"
    MR_bool analysis__succeeded;
#line 600 "analysis.m"
    MR_Word analysis__TypeInfo_34_34;
#line 600 "analysis.m"
    MR_Word analysis__TypeInfo_36_36;
#line 600 "analysis.m"
    MR_Word analysis__TypeInfo_38_38;
#line 600 "analysis.m"
    MR_Word analysis__AllResultsList_14;
#line 600 "analysis.m"
    MR_Word analysis__ResultList_15;
#line 600 "analysis.m"
    MR_Word analysis__V_21_21;

#line 602 "analysis.m"
    {
#line 602 "analysis.m"
      analysis__lookup_results_1_5_p_0(analysis__TypeClassInfo_for_analysis_32, analysis__Info_7, analysis__ModuleName_8, analysis__FuncId_9, (MR_Integer) 1, &analysis__AllResultsList_14);
    }
#line 14295 "analysis.c"
    {
#line 14297 "analysis.c"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_32, (MR_Integer) 4, &analysis__TypeInfo_34_34);
    }
#line 14300 "analysis.c"
    {
#line 14302 "analysis.c"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_32, (MR_Integer) 5, &analysis__TypeInfo_36_36);
    }
#line 14305 "analysis.c"
    {
#line 14307 "analysis.c"
      analysis__TypeInfo_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 14309 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_38_38, 0) = ((MR_Box) (&analysis__analysis__type_ctor_info_analysis_result_2));
#line 14311 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_38_38, 1) = ((MR_Box) (analysis__TypeInfo_34_34));
#line 14313 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_38_38, 2) = ((MR_Box) (analysis__TypeInfo_36_36));
#line 14315 "analysis.c"
    }
#line 604 "analysis.m"
    {
#line 604 "analysis.m"
      analysis__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 604 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_21_21, 0) = ((MR_Box) (&analysis_scalar_common_6[0]));
#line 604 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_21_21, 1) = ((MR_Box) (analysis__lookup_exactly_matching_result_even_from_invalid_modules_6_p_0_1));
#line 604 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_21_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 604 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_21_21, 3) = ((MR_Box) (analysis__TypeClassInfo_for_analysis_32));
#line 604 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_21_21, 4) = analysis__FuncInfo_10;
#line 604 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_21_21, 5) = analysis__Call_11;
#line 604 "analysis.m"
    }
#line 604 "analysis.m"
    {
#line 604 "analysis.m"
      analysis__ResultList_15 = mercury__list__filter_2_f_0(analysis__TypeInfo_38_38, analysis__V_21_21, analysis__AllResultsList_14);
    }
#line 611 "analysis.m"
    if ((analysis__ResultList_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 609 "analysis.m"
      *analysis__MaybeResult_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 611 "analysis.m"
    else
#line 611 "analysis.m"
      {
#line 611 "analysis.m"
        MR_Word analysis__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), analysis__ResultList_15, (MR_Integer) 1)));
#line 611 "analysis.m"
        MR_Word analysis__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), analysis__ResultList_15, (MR_Integer) 0)));

#line 611 "analysis.m"
        if ((analysis__V_42_42 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 613 "analysis.m"
          {
#line 613 "analysis.m"
            MR_Word base;
#line 613 "analysis.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 613 "analysis.m"
            *analysis__MaybeResult_12 = base;
#line 613 "analysis.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (analysis__V_43_43));
#line 613 "analysis.m"
          }
#line 611 "analysis.m"
        else
#line 615 "analysis.m"
          {
#line 616 "analysis.m"
            {
#line 616 "analysis.m"
              mercury__require__unexpected_3_p_0((MR_String) "analysis", (MR_String) "predicate \140analysis.lookup_exactly_matching_result_even_from_invalid_modules\'/6", (MR_String) "zero or one exactly matching results expected");
#line 616 "analysis.m"
              return;
            }
#line 615 "analysis.m"
          }
#line 611 "analysis.m"
      }
#line 600 "analysis.m"
  }
#line 594 "analysis.m"
}

#line 580 "analysis.m"
void MR_CALL 
analysis__more_precise_answer_4_p_0(
#line 580 "analysis.m"
  MR_Word analysis__TypeClassInfo_for_analysis_15,
#line 580 "analysis.m"
  MR_Box analysis__FuncInfo_5,
#line 580 "analysis.m"
  MR_Word analysis__Result_6,
#line 580 "analysis.m"
  MR_Word analysis__Best0_7,
#line 580 "analysis.m"
  MR_Word * analysis__Best_8)
#line 580 "analysis.m"
{
#line 585 "analysis.m"
  {
#line 585 "analysis.m"
    MR_bool analysis__succeeded;
#line 585 "analysis.m"
    MR_Box analysis__ResultAnswer_9 = (MR_hl_field(MR_mktag(0), analysis__Result_6, (MR_Integer) 1));
#line 585 "analysis.m"
    MR_Box analysis__BestAnswer0_10 = (MR_hl_field(MR_mktag(0), analysis__Best0_7, (MR_Integer) 1));
#line 586 "analysis.m"
    MR_Box analysis__V_11_11 = (MR_hl_field(MR_mktag(0), analysis__Result_6, (MR_Integer) 0));
#line 586 "analysis.m"
    MR_Word analysis__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Result_6, (MR_Integer) 2)));
#line 587 "analysis.m"
    MR_Box analysis__V_13_13 = (MR_hl_field(MR_mktag(0), analysis__Best0_7, (MR_Integer) 0));
#line 587 "analysis.m"
    MR_Word analysis__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Best0_7, (MR_Integer) 2)));
#line 588 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_answer_pattern_16;
#line 588 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_partial_order_18;
#line 14422 "analysis.c"
    MR_bool MR_CALL (* analysis__func_0)(MR_Box, MR_Box, MR_Box, MR_Box);

#line 14425 "analysis.c"
    {
#line 14427 "analysis.c"
      mercury__private_builtin__superclass_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_15, (MR_Integer) 2, &analysis__TypeClassInfo_for_answer_pattern_16);
    }
#line 14430 "analysis.c"
    {
#line 14432 "analysis.c"
      mercury__private_builtin__superclass_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_answer_pattern_16, (MR_Integer) 1, &analysis__TypeClassInfo_for_partial_order_18);
    }
#line 14435 "analysis.c"
    analysis__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), analysis__TypeClassInfo_for_partial_order_18, (MR_Integer) 0)), (MR_Integer) 5)));
#line 14437 "analysis.c"
    {
#line 14439 "analysis.c"
      analysis__succeeded = analysis__func_0(((MR_Box) analysis__TypeClassInfo_for_partial_order_18), analysis__FuncInfo_5, analysis__ResultAnswer_9, analysis__BestAnswer0_10);
    }
#line 590 "analysis.m"
    if (analysis__succeeded)
#line 589 "analysis.m"
      *analysis__Best_8 = analysis__Result_6;
#line 590 "analysis.m"
    else
#line 591 "analysis.m"
      *analysis__Best_8 = analysis__Best0_7;
#line 585 "analysis.m"
  }
#line 580 "analysis.m"
}

#line 537 "analysis.m"
static MR_Box MR_CALL 
analysis__lookup_results_2_4_p_0_1(
#line 537 "analysis.m"
  MR_Box analysis__closure_arg,
#line 537 "analysis.m"
  MR_Box analysis__wrapper_arg_1)
#line 537 "analysis.m"
{
#line 537 "analysis.m"
  {
#line 537 "analysis.m"
    MR_Box analysis__wrapper_arg_2;
#line 537 "analysis.m"
    MR_Box analysis__closure = analysis__closure_arg;
#line 537 "analysis.m"
    MR_Word analysis__conv5_HeadVar__3_25;

#line 537 "analysis.m"
    {
#line 537 "analysis.m"
      analysis__conv5_HeadVar__3_25 = analysis__IntroducedFrom__func__lookup_results_2__537__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 3))), ((MR_Word) analysis__wrapper_arg_1));
    }
#line 537 "analysis.m"
    analysis__wrapper_arg_2 = ((MR_Box) (analysis__conv5_HeadVar__3_25));
#line 537 "analysis.m"
    return analysis__wrapper_arg_2;
#line 537 "analysis.m"
  }
#line 537 "analysis.m"
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
#line 14508 "analysis.c"
    MR_Box analysis__V_20_20;
#line 14510 "analysis.c"
    MR_Box analysis__V_21_21;
#line 14512 "analysis.c"
    MR_Box MR_CALL (* analysis__func_0)(MR_Box) = ((MR_Box MR_CALL (*)(MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), analysis__TypeClassInfo_for_analysis_29, (MR_Integer) 0)), (MR_Integer) 5)));
#line 14514 "analysis.c"
    MR_Box analysis__conv1_AnalysisName_9;
#line 543 "analysis.m"
    MR_Word analysis__Results_15;
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
    MR_Word analysis__V_22_22;
#line 532 "analysis.m"
    MR_Box analysis__conv2_ModuleResults_14;
#line 533 "analysis.m"
    MR_Box analysis__conv3_V_22_22;
#line 533 "analysis.m"
    MR_Box analysis__conv4_Results_15;

#line 14537 "analysis.c"
    {
#line 14539 "analysis.c"
      analysis__conv1_AnalysisName_9 = analysis__func_0(((MR_Box) analysis__TypeClassInfo_for_analysis_29));
    }
#line 14542 "analysis.c"
    analysis__AnalysisName_9 = ((MR_String) analysis__conv1_AnalysisName_9);
#line 532 "analysis.m"
    {
#line 532 "analysis.m"
      analysis__succeeded = mercury__map__elem_2_f_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0, (MR_Word) &analysis_scalar_common_2[3], ((MR_Box) (analysis__ModuleName_6)), analysis__Map_5, &analysis__conv2_ModuleResults_14);
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
#line 14563 "analysis.c"
        analysis__TypeCtorInfo_32_32 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 14565 "analysis.c"
        analysis__TypeInfo_33_33 = (MR_Word) &analysis_scalar_common_2[2];
#line 533 "analysis.m"
        {
#line 533 "analysis.m"
          analysis__succeeded = mercury__map__elem_2_f_0(analysis__TypeCtorInfo_32_32, analysis__TypeInfo_33_33, ((MR_Box) (analysis__AnalysisName_9)), analysis__ModuleResults_14, &analysis__conv3_V_22_22);
        }
#line 533 "analysis.m"
        if (analysis__succeeded)
#line 533 "analysis.m"
          {
#line 533 "analysis.m"
            analysis__V_22_22 = ((MR_Word) analysis__conv3_V_22_22);
#line 533 "analysis.m"
            analysis__succeeded = MR_TRUE;
#line 533 "analysis.m"
          }
#line 532 "analysis.m"
        if (analysis__succeeded)
#line 532 "analysis.m"
          {
#line 14586 "analysis.c"
            analysis__TypeCtorInfo_34_34 = (MR_Word) &analysis__analysis__type_ctor_info_func_id_0;
#line 14588 "analysis.c"
            analysis__TypeInfo_35_35 = (MR_Word) &analysis_scalar_common_1[1];
#line 533 "analysis.m"
            {
#line 533 "analysis.m"
              analysis__succeeded = mercury__map__elem_2_f_0(analysis__TypeCtorInfo_34_34, analysis__TypeInfo_35_35, ((MR_Box) (analysis__FuncId_7)), analysis__V_22_22, &analysis__conv4_Results_15);
            }
#line 533 "analysis.m"
            if (analysis__succeeded)
#line 533 "analysis.m"
              {
#line 533 "analysis.m"
                analysis__Results_15 = ((MR_Word) analysis__conv4_Results_15);
#line 533 "analysis.m"
                analysis__succeeded = MR_TRUE;
#line 533 "analysis.m"
              }
#line 532 "analysis.m"
          }
#line 532 "analysis.m"
      }
#line 543 "analysis.m"
    if (analysis__succeeded)
#line 537 "analysis.m"
      {
#line 537 "analysis.m"
        MR_Word analysis__TypeInfo_38_38;
#line 537 "analysis.m"
        MR_Word analysis__TypeInfo_40_40;
#line 537 "analysis.m"
        MR_Word analysis__TypeInfo_42_42;
#line 537 "analysis.m"
        MR_Word analysis__V_23_23;
#line 537 "analysis.m"
        MR_Word analysis__conv6_ResultList_8;

#line 14624 "analysis.c"
        {
#line 14626 "analysis.c"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_29, (MR_Integer) 4, &analysis__TypeInfo_38_38);
        }
#line 14629 "analysis.c"
        {
#line 14631 "analysis.c"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_29, (MR_Integer) 5, &analysis__TypeInfo_40_40);
        }
#line 14634 "analysis.c"
        {
#line 14636 "analysis.c"
          analysis__TypeInfo_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 14638 "analysis.c"
          MR_hl_field(MR_mktag(0), analysis__TypeInfo_42_42, 0) = ((MR_Box) (&analysis__analysis__type_ctor_info_analysis_result_2));
#line 14640 "analysis.c"
          MR_hl_field(MR_mktag(0), analysis__TypeInfo_42_42, 1) = ((MR_Box) (analysis__TypeInfo_38_38));
#line 14642 "analysis.c"
          MR_hl_field(MR_mktag(0), analysis__TypeInfo_42_42, 2) = ((MR_Box) (analysis__TypeInfo_40_40));
#line 14644 "analysis.c"
        }
#line 537 "analysis.m"
        {
#line 537 "analysis.m"
          analysis__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 537 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__V_23_23, 0) = ((MR_Box) (&analysis_scalar_common_4[2]));
#line 537 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__V_23_23, 1) = ((MR_Box) (analysis__lookup_results_2_4_p_0_1));
#line 537 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__V_23_23, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 537 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__V_23_23, 3) = ((MR_Box) (analysis__TypeClassInfo_for_analysis_29));
#line 537 "analysis.m"
        }
#line 537 "analysis.m"
        {
#line 537 "analysis.m"
          analysis__conv6_ResultList_8 = mercury__list__map_2_f_0((MR_Word) &analysis__analysis__type_ctor_info_some_analysis_result_0, analysis__TypeInfo_42_42, (MR_Word) analysis__V_23_23, analysis__Results_15);
        }
#line 537 "analysis.m"
        *analysis__ResultList_8 = (MR_Word) analysis__conv6_ResultList_8;
#line 537 "analysis.m"
      }
#line 543 "analysis.m"
    else
#line 544 "analysis.m"
      *analysis__ResultList_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 529 "analysis.m"
  }
#line 525 "analysis.m"
}

#line 494 "analysis.m"
void MR_CALL 
analysis__lookup_results_1_5_p_0(
#line 494 "analysis.m"
  MR_Word analysis__TypeClassInfo_for_analysis_62,
#line 494 "analysis.m"
  MR_Word analysis__Info_6,
#line 494 "analysis.m"
  MR_Word analysis__ModuleName_7,
#line 494 "analysis.m"
  MR_Word analysis__FuncId_8,
#line 494 "analysis.m"
  MR_Word analysis__AllowInvalidModules_9,
#line 494 "analysis.m"
  MR_Word * analysis__ResultList_10)
#line 494 "analysis.m"
{
#line 498 "analysis.m"
  {
#line 498 "analysis.m"
    MR_bool analysis__succeeded;
#line 499 "analysis.m"
    MR_Word analysis__Debug_81;
#line 509 "analysis.m"
    MR_Word analysis__TypeCtorInfo_66_66;
#line 509 "analysis.m"
    MR_Word analysis__TypeCtorInfo_67_67;
#line 509 "analysis.m"
    MR_Word analysis__V_26_26;
#line 509 "analysis.m"
    MR_Word analysis__V_27_27;
#line 510 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_compiler_65;
#line 510 "analysis.m"
    MR_Box analysis__V_44_44;
#line 510 "analysis.m"
    MR_Word analysis__V_45_45;
#line 510 "analysis.m"
    MR_Word analysis__V_46_46;
#line 510 "analysis.m"
    MR_Word analysis__V_47_47;
#line 510 "analysis.m"
    MR_Word analysis__V_48_48;
#line 510 "analysis.m"
    MR_Word analysis__V_49_49;
#line 510 "analysis.m"
    MR_Word analysis__V_50_50;
#line 510 "analysis.m"
    MR_Word analysis__V_51_51;
#line 510 "analysis.m"
    MR_Word analysis__V_52_52;
#line 510 "analysis.m"
    MR_Box analysis__conv0_V_26_26;

#line 1381 "analysis.m"
{
#define MR_PROC_LABEL analysis__lookup_results_1_5_p_0


		{
#line 1381 "analysis.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&analysis__mutable_variable_debug_analysis_lock,
                "analysis__mutable_variable_debug_analysis_lock");
#endif

#line 14744 "analysis.c"

		;}
#undef MR_PROC_LABEL
#line 1381 "analysis.m"
}
#line 1381 "analysis.m"
{
#define MR_PROC_LABEL analysis__lookup_results_1_5_p_0

	MR_Word X;

		{
#line 1381 "analysis.m"
X = analysis__mutable_variable_debug_analysis;

#line 14760 "analysis.c"

		;}
#undef MR_PROC_LABEL
	 analysis__Debug_81  = X;
#line 1381 "analysis.m"
}
#line 1381 "analysis.m"
{
#define MR_PROC_LABEL analysis__lookup_results_1_5_p_0


		{
#line 1381 "analysis.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&analysis__mutable_variable_debug_analysis_lock,
                "analysis__mutable_variable_debug_analysis_lock");
#endif

#line 14779 "analysis.c"

		;}
#undef MR_PROC_LABEL
#line 1381 "analysis.m"
}
#line 1394 "analysis.m"
    if ((analysis__Debug_81 == (MR_Integer) 0))
#line 1395 "analysis.m"
      {
#line 1395 "analysis.m"
      }
#line 1394 "analysis.m"
    else
#line 1393 "analysis.m"
      {
#line 1393 "analysis.m"
        analysis__IntroducedFrom__pred__lookup_results_1__500__1_4_p_0(analysis__ModuleName_7, analysis__FuncId_8);
      }
#line 509 "analysis.m"
    analysis__succeeded = (analysis__AllowInvalidModules_9 == (MR_Integer) 0);
#line 509 "analysis.m"
    if (analysis__succeeded)
#line 509 "analysis.m"
      {
#line 510 "analysis.m"
        analysis__TypeClassInfo_for_compiler_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 0)));
#line 510 "analysis.m"
        analysis__V_44_44 = (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 1));
#line 510 "analysis.m"
        analysis__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 2)));
#line 510 "analysis.m"
        analysis__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 3)));
#line 510 "analysis.m"
        analysis__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 4)));
#line 510 "analysis.m"
        analysis__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 5)));
#line 510 "analysis.m"
        analysis__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 6)));
#line 510 "analysis.m"
        analysis__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 7)));
#line 510 "analysis.m"
        analysis__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 8)));
#line 510 "analysis.m"
        analysis__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 9)));
#line 510 "analysis.m"
        analysis__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 10)));
#line 14826 "analysis.c"
        analysis__TypeCtorInfo_66_66 = (MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0;
#line 14828 "analysis.c"
        analysis__TypeCtorInfo_67_67 = (MR_Word) &analysis__analysis__type_ctor_info_analysis_status_0;
#line 510 "analysis.m"
        {
#line 510 "analysis.m"
          analysis__succeeded = mercury__map__elem_2_f_0(analysis__TypeCtorInfo_66_66, analysis__TypeCtorInfo_67_67, ((MR_Box) (analysis__ModuleName_7)), analysis__V_27_27, &analysis__conv0_V_26_26);
        }
#line 510 "analysis.m"
        if (analysis__succeeded)
#line 510 "analysis.m"
          {
#line 510 "analysis.m"
            analysis__V_26_26 = ((MR_Word) analysis__conv0_V_26_26);
#line 510 "analysis.m"
            analysis__succeeded = MR_TRUE;
#line 510 "analysis.m"
          }
#line 509 "analysis.m"
        if (analysis__succeeded)
#line 510 "analysis.m"
          analysis__succeeded = (analysis__V_26_26 == (MR_Integer) 0);
#line 509 "analysis.m"
      }
#line 513 "analysis.m"
    if (analysis__succeeded)
#line 512 "analysis.m"
      *analysis__ResultList_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 513 "analysis.m"
    else
#line 515 "analysis.m"
      {
#line 515 "analysis.m"
        MR_Word analysis__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 7)));
#line 514 "analysis.m"
        MR_Word analysis__TypeClassInfo_for_compiler_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 0)));
#line 514 "analysis.m"
        MR_Box analysis__V_53_53 = (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 1));
#line 514 "analysis.m"
        MR_Word analysis__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 2)));
#line 514 "analysis.m"
        MR_Word analysis__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 3)));
#line 514 "analysis.m"
        MR_Word analysis__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 4)));
#line 514 "analysis.m"
        MR_Word analysis__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 5)));
#line 514 "analysis.m"
        MR_Word analysis__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 6)));
#line 514 "analysis.m"
        MR_Word analysis__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 8)));
#line 514 "analysis.m"
        MR_Word analysis__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 9)));
#line 514 "analysis.m"
        MR_Word analysis__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 10)));
#line 516 "analysis.m"
        MR_Word analysis__Debug_90;

#line 514 "analysis.m"
        {
#line 514 "analysis.m"
          analysis__lookup_results_2_4_p_0(analysis__TypeClassInfo_for_analysis_62, analysis__V_28_28, analysis__ModuleName_7, analysis__FuncId_8, analysis__ResultList_10);
        }
#line 1381 "analysis.m"
{
#define MR_PROC_LABEL analysis__lookup_results_1_5_p_0


		{
#line 1381 "analysis.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&analysis__mutable_variable_debug_analysis_lock,
                "analysis__mutable_variable_debug_analysis_lock");
#endif

#line 14901 "analysis.c"

		;}
#undef MR_PROC_LABEL
#line 1381 "analysis.m"
}
#line 1381 "analysis.m"
{
#define MR_PROC_LABEL analysis__lookup_results_1_5_p_0

	MR_Word X;

		{
#line 1381 "analysis.m"
X = analysis__mutable_variable_debug_analysis;

#line 14917 "analysis.c"

		;}
#undef MR_PROC_LABEL
	 analysis__Debug_90  = X;
#line 1381 "analysis.m"
}
#line 1381 "analysis.m"
{
#define MR_PROC_LABEL analysis__lookup_results_1_5_p_0


		{
#line 1381 "analysis.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&analysis__mutable_variable_debug_analysis_lock,
                "analysis__mutable_variable_debug_analysis_lock");
#endif

#line 14936 "analysis.c"

		;}
#undef MR_PROC_LABEL
#line 1381 "analysis.m"
}
#line 1394 "analysis.m"
        if ((analysis__Debug_90 == (MR_Integer) 0))
#line 1395 "analysis.m"
          {
#line 1395 "analysis.m"
          }
#line 1394 "analysis.m"
        else
#line 1393 "analysis.m"
          {
#line 1393 "analysis.m"
            analysis__IntroducedFrom__pred__lookup_results_1__517__1_4_p_0(analysis__TypeClassInfo_for_analysis_62, *analysis__ResultList_10);
#line 1393 "analysis.m"
            return;
          }
#line 515 "analysis.m"
      }
#line 498 "analysis.m"
  }
#line 494 "analysis.m"
}

#line 311 "analysis.m"
void MR_CALL 
analysis__enable_debug_messages_3_p_0(
#line 311 "analysis.m"
  MR_Word analysis__Debug_4)
#line 311 "analysis.m"
{
#line 1381 "analysis.m"
  {
#line 1381 "analysis.m"
    MR_bool analysis__succeeded;

#line 1381 "analysis.m"
{
#define MR_PROC_LABEL analysis__enable_debug_messages_3_p_0


		{
#line 1381 "analysis.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&analysis__mutable_variable_debug_analysis_lock,
                "analysis__mutable_variable_debug_analysis_lock");
#endif

#line 14988 "analysis.c"

		;}
#undef MR_PROC_LABEL
#line 1381 "analysis.m"
}
#line 1381 "analysis.m"
{
#define MR_PROC_LABEL analysis__enable_debug_messages_3_p_0

	MR_Word X;

	X =  analysis__Debug_4 ;
		{
#line 1381 "analysis.m"
analysis__mutable_variable_debug_analysis = X;

#line 15005 "analysis.c"

		;}
#undef MR_PROC_LABEL
#line 1381 "analysis.m"
}
#line 1381 "analysis.m"
{
#define MR_PROC_LABEL analysis__enable_debug_messages_3_p_0


		{
#line 1381 "analysis.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&analysis__mutable_variable_debug_analysis_lock,
                "analysis__mutable_variable_debug_analysis_lock");
#endif

#line 15023 "analysis.c"

		;}
#undef MR_PROC_LABEL
#line 1381 "analysis.m"
}
#line 1381 "analysis.m"
  }
#line 311 "analysis.m"
}

#line 307 "analysis.m"
void MR_CALL 
analysis__do_read_module_overall_status_6_p_0(
#line 307 "analysis.m"
  MR_Word analysis__TypeClassInfo_for_compiler_15,
#line 307 "analysis.m"
  MR_Box analysis__Compiler_7,
#line 307 "analysis.m"
  MR_Word analysis__Globals_8,
#line 307 "analysis.m"
  MR_Word analysis__ModuleName_9,
#line 307 "analysis.m"
  MR_Word * analysis__ModuleStatus_10)
#line 307 "analysis.m"
{
#line 1336 "analysis.m"
  {
#line 1336 "analysis.m"
    MR_bool analysis__succeeded;

#line 1336 "analysis.m"
    {
#line 1336 "analysis.m"
      analysis__file__read_module_overall_status_6_p_0(analysis__TypeClassInfo_for_compiler_15, analysis__Compiler_7, analysis__Globals_8, analysis__ModuleName_9, analysis__ModuleStatus_10);
#line 1336 "analysis.m"
      return;
    }
#line 1336 "analysis.m"
  }
#line 307 "analysis.m"
}

#line 1281 "analysis.m"
static void MR_CALL 
analysis__write_analysis_files_7_p_0_4(
#line 1281 "analysis.m"
  MR_Box analysis__closure_arg,
#line 1281 "analysis.m"
  MR_Box analysis__wrapper_arg_1,
#line 1281 "analysis.m"
  MR_Box analysis__wrapper_arg_2,
#line 1281 "analysis.m"
  MR_Box * analysis__wrapper_arg_3)
#line 1281 "analysis.m"
{
#line 1281 "analysis.m"
  {
#line 1281 "analysis.m"
    MR_Box analysis__closure = analysis__closure_arg;

#line 1281 "analysis.m"
    {
#line 1281 "analysis.m"
      analysis__maybe_write_module_imdg_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 4))), ((MR_Word) analysis__wrapper_arg_1));
#line 1281 "analysis.m"
      return;
    }
#line 1281 "analysis.m"
  }
#line 1281 "analysis.m"
}

#line 1273 "analysis.m"
static void MR_CALL 
analysis__write_analysis_files_7_p_0_3(
#line 1273 "analysis.m"
  MR_Box analysis__closure_arg,
#line 1273 "analysis.m"
  MR_Box analysis__wrapper_arg_1,
#line 1273 "analysis.m"
  MR_Box analysis__wrapper_arg_2,
#line 1273 "analysis.m"
  MR_Box * analysis__wrapper_arg_3)
#line 1273 "analysis.m"
{
#line 1273 "analysis.m"
  {
#line 1273 "analysis.m"
    MR_Box analysis__closure = analysis__closure_arg;

#line 1273 "analysis.m"
    {
#line 1273 "analysis.m"
      analysis__maybe_write_module_requests_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 4))), ((MR_Word) analysis__wrapper_arg_1));
#line 1273 "analysis.m"
      return;
    }
#line 1273 "analysis.m"
  }
#line 1273 "analysis.m"
}

#line 1264 "analysis.m"
static void MR_CALL 
analysis__write_analysis_files_7_p_0_2(
#line 1264 "analysis.m"
  MR_Box analysis__closure_arg,
#line 1264 "analysis.m"
  MR_Box analysis__wrapper_arg_1,
#line 1264 "analysis.m"
  MR_Box analysis__wrapper_arg_2,
#line 1264 "analysis.m"
  MR_Box * analysis__wrapper_arg_3)
#line 1264 "analysis.m"
{
#line 1264 "analysis.m"
  {
#line 1264 "analysis.m"
    MR_Box analysis__closure = analysis__closure_arg;

#line 1264 "analysis.m"
    {
#line 1264 "analysis.m"
      analysis__maybe_write_module_overall_status_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 4))), ((MR_Word) analysis__wrapper_arg_1));
#line 1264 "analysis.m"
      return;
    }
#line 1264 "analysis.m"
  }
#line 1264 "analysis.m"
}

#line 1246 "analysis.m"
static void MR_CALL 
analysis__write_analysis_files_7_p_0_1(
#line 1246 "analysis.m"
  MR_Box analysis__closure_arg,
#line 1246 "analysis.m"
  MR_Box analysis__wrapper_arg_1,
#line 1246 "analysis.m"
  MR_Box analysis__wrapper_arg_2,
#line 1246 "analysis.m"
  MR_Box * analysis__wrapper_arg_3,
#line 1246 "analysis.m"
  MR_Box analysis__wrapper_arg_4,
#line 1246 "analysis.m"
  MR_Box * analysis__wrapper_arg_5)
#line 1246 "analysis.m"
{
#line 1246 "analysis.m"
  {
#line 1246 "analysis.m"
    MR_Box analysis__closure = analysis__closure_arg;
#line 1246 "analysis.m"
    MR_Word analysis__conv0_STATE_VARIABLE_Info_15;

#line 1246 "analysis.m"
    {
#line 1246 "analysis.m"
      analysis__load_module_imdg_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 3))), ((MR_Word) analysis__wrapper_arg_1), ((MR_Word) analysis__wrapper_arg_2), &analysis__conv0_STATE_VARIABLE_Info_15);
    }
#line 1246 "analysis.m"
    *analysis__wrapper_arg_3 = ((MR_Box) (analysis__conv0_STATE_VARIABLE_Info_15));
#line 1246 "analysis.m"
  }
#line 1246 "analysis.m"
}

#line 295 "analysis.m"
void MR_CALL 
analysis__write_analysis_files_7_p_0(
#line 295 "analysis.m"
  MR_Word analysis__TypeClassInfo_for_compiler_115,
#line 295 "analysis.m"
  MR_Box analysis__Compiler_8,
#line 295 "analysis.m"
  MR_Word analysis__ModuleInfo_9,
#line 295 "analysis.m"
  MR_Word analysis__ImportedModule0_10,
#line 295 "analysis.m"
  MR_Word analysis__STATE_VARIABLE_Info_0_21,
#line 295 "analysis.m"
  MR_Word * analysis__STATE_VARIABLE_Info_22)
#line 295 "analysis.m"
{
#line 1237 "analysis.m"
  {
#line 1237 "analysis.m"
    MR_bool analysis__succeeded;
#line 1237 "analysis.m"
    MR_Word analysis__TypeCtorInfo_117_117 = (MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0;
#line 1237 "analysis.m"
    MR_Word analysis__TypeCtorInfo_125_125;
#line 1237 "analysis.m"
    MR_Word analysis__ThisModule_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 2)));
#line 1237 "analysis.m"
    MR_Word analysis__ImportedModules_14;
#line 1237 "analysis.m"
    MR_Word analysis__LocalModules_15;
#line 1237 "analysis.m"
    MR_Word analysis__LocalImportedModules_16;
#line 1237 "analysis.m"
    MR_Word analysis__Globals_17;
#line 1237 "analysis.m"
    MR_Word analysis__ModuleStatus_18;
#line 1237 "analysis.m"
    MR_Word analysis__ModuleResults_19;
#line 1237 "analysis.m"
    MR_String analysis__TimestampFileName_20;
#line 1237 "analysis.m"
    MR_Word analysis__V_25_25;
#line 1237 "analysis.m"
    MR_Word analysis__STATE_VARIABLE_Info_26_26;
#line 1237 "analysis.m"
    MR_Word analysis__STATE_VARIABLE_Info_28_28;
#line 1237 "analysis.m"
    MR_Word analysis__V_30_30;
#line 1237 "analysis.m"
    MR_Word analysis__STATE_VARIABLE_Info_31_31;
#line 1237 "analysis.m"
    MR_Word analysis__V_32_32;
#line 1237 "analysis.m"
    MR_Word analysis__V_33_33;
#line 1237 "analysis.m"
    MR_Word analysis__V_39_39;
#line 1237 "analysis.m"
    MR_Word analysis__V_41_41;
#line 1237 "analysis.m"
    MR_Word analysis__V_43_43;
#line 1237 "analysis.m"
    MR_Word analysis__V_46_46;
#line 1238 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_compiler_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 0)));
#line 1238 "analysis.m"
    MR_Box analysis__V_51_51 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 1));
#line 1238 "analysis.m"
    MR_Word analysis__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 3)));
#line 1238 "analysis.m"
    MR_Word analysis__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 4)));
#line 1238 "analysis.m"
    MR_Word analysis__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 5)));
#line 1238 "analysis.m"
    MR_Word analysis__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 6)));
#line 1238 "analysis.m"
    MR_Word analysis__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 7)));
#line 1238 "analysis.m"
    MR_Word analysis__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 8)));
#line 1238 "analysis.m"
    MR_Word analysis__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 9)));
#line 1238 "analysis.m"
    MR_Word analysis__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 10)));
#line 1241 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_compiler_118;
#line 1241 "analysis.m"
    MR_Box analysis__V_60_60;
#line 1241 "analysis.m"
    MR_Word analysis__V_61_61;
#line 1241 "analysis.m"
    MR_Word analysis__V_62_62;
#line 1241 "analysis.m"
    MR_Word analysis__V_63_63;
#line 1241 "analysis.m"
    MR_Word analysis__V_64_64;
#line 1241 "analysis.m"
    MR_Word analysis__V_65_65;
#line 1241 "analysis.m"
    MR_Word analysis__V_66_66;
#line 1241 "analysis.m"
    MR_Word analysis__V_67_67;
#line 1241 "analysis.m"
    MR_Word analysis__V_68_68;
#line 1246 "analysis.m"
    MR_Box analysis__conv2_STATE_VARIABLE_Info_26_26;
#line 1246 "analysis.m"
    MR_Box analysis__conv1_STATE_VARIABLE_IO_27_27;
#line 1252 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_compiler_126;
#line 1252 "analysis.m"
    MR_Box analysis__V_69_69;
#line 1252 "analysis.m"
    MR_Word analysis__V_70_70;
#line 1252 "analysis.m"
    MR_Word analysis__V_71_71;
#line 1252 "analysis.m"
    MR_Word analysis__V_72_72;
#line 1252 "analysis.m"
    MR_Word analysis__V_73_73;
#line 1252 "analysis.m"
    MR_Word analysis__V_74_74;
#line 1252 "analysis.m"
    MR_Word analysis__V_75_75;
#line 1252 "analysis.m"
    MR_Word analysis__V_76_76;
#line 1252 "analysis.m"
    MR_Word analysis__V_77_77;
#line 1253 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_compiler_127;
#line 1253 "analysis.m"
    MR_Box analysis__V_78_78;
#line 1253 "analysis.m"
    MR_Word analysis__V_79_79;
#line 1253 "analysis.m"
    MR_Word analysis__V_80_80;
#line 1253 "analysis.m"
    MR_Word analysis__V_81_81;
#line 1253 "analysis.m"
    MR_Word analysis__V_82_82;
#line 1253 "analysis.m"
    MR_Word analysis__V_83_83;
#line 1253 "analysis.m"
    MR_Word analysis__V_84_84;
#line 1253 "analysis.m"
    MR_Word analysis__V_85_85;
#line 1253 "analysis.m"
    MR_Word analysis__V_86_86;
#line 1253 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_compiler_129;
#line 1253 "analysis.m"
    MR_Box analysis__V_87_87;
#line 1253 "analysis.m"
    MR_Word analysis__V_88_88;
#line 1253 "analysis.m"
    MR_Word analysis__V_89_89;
#line 1253 "analysis.m"
    MR_Word analysis__V_90_90;
#line 1253 "analysis.m"
    MR_Word analysis__V_91_91;
#line 1253 "analysis.m"
    MR_Word analysis__V_93_93;
#line 1253 "analysis.m"
    MR_Word analysis__V_94_94;
#line 1253 "analysis.m"
    MR_Word analysis__V_95_95;
#line 1253 "analysis.m"
    MR_Word analysis__V_96_96;
#line 1253 "analysis.m"
    MR_Word analysis__V_92_92;
#line 1256 "analysis.m"
    MR_Word analysis__V_35_35;
#line 1256 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_compiler_130;
#line 1256 "analysis.m"
    MR_Box analysis__V_97_97;
#line 1256 "analysis.m"
    MR_Word analysis__V_98_98;
#line 1256 "analysis.m"
    MR_Word analysis__V_99_99;
#line 1256 "analysis.m"
    MR_Word analysis__V_100_100;
#line 1256 "analysis.m"
    MR_Word analysis__V_101_101;
#line 1256 "analysis.m"
    MR_Word analysis__V_102_102;
#line 1256 "analysis.m"
    MR_Word analysis__V_103_103;
#line 1256 "analysis.m"
    MR_Word analysis__V_104_104;
#line 1256 "analysis.m"
    MR_Word analysis__V_105_105;
#line 1264 "analysis.m"
    MR_Box analysis__conv3_STATE_VARIABLE_IO_40_40;
#line 1268 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_compiler_136;
#line 1268 "analysis.m"
    MR_Box analysis__V_106_106;
#line 1268 "analysis.m"
    MR_Word analysis__V_107_107;
#line 1268 "analysis.m"
    MR_Word analysis__V_108_108;
#line 1268 "analysis.m"
    MR_Word analysis__V_109_109;
#line 1268 "analysis.m"
    MR_Word analysis__V_110_110;
#line 1268 "analysis.m"
    MR_Word analysis__V_111_111;
#line 1268 "analysis.m"
    MR_Word analysis__V_112_112;
#line 1268 "analysis.m"
    MR_Word analysis__V_113_113;
#line 1268 "analysis.m"
    MR_Word analysis__V_114_114;
#line 1268 "analysis.m"
    MR_Box analysis__conv4_ModuleResults_19;
#line 1273 "analysis.m"
    MR_Box analysis__conv5_STATE_VARIABLE_IO_44_44;
#line 1281 "analysis.m"
    MR_Box analysis__conv6_STATE_VARIABLE_IO_47_47;

#line 1239 "analysis.m"
    {
#line 1239 "analysis.m"
      analysis__ImportedModules_14 = mercury__set__delete_2_f_0(analysis__TypeCtorInfo_117_117, analysis__ImportedModule0_10, ((MR_Box) (analysis__ThisModule_13)));
    }
#line 1241 "analysis.m"
    analysis__TypeClassInfo_for_compiler_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 0)));
#line 1241 "analysis.m"
    analysis__V_60_60 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 1));
#line 1241 "analysis.m"
    analysis__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 2)));
#line 1241 "analysis.m"
    analysis__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 3)));
#line 1241 "analysis.m"
    analysis__LocalModules_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 4)));
#line 1241 "analysis.m"
    analysis__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 5)));
#line 1241 "analysis.m"
    analysis__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 6)));
#line 1241 "analysis.m"
    analysis__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 7)));
#line 1241 "analysis.m"
    analysis__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 8)));
#line 1241 "analysis.m"
    analysis__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 9)));
#line 1241 "analysis.m"
    analysis__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 10)));
#line 1242 "analysis.m"
    {
#line 1242 "analysis.m"
      analysis__LocalImportedModules_16 = mercury__set__intersect_2_f_0(analysis__TypeCtorInfo_117_117, analysis__LocalModules_15, analysis__ImportedModules_14);
    }
#line 1245 "analysis.m"
    {
#line 1245 "analysis.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(analysis__ModuleInfo_9, &analysis__Globals_17);
    }
#line 1246 "analysis.m"
    {
#line 1246 "analysis.m"
      analysis__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1246 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_25_25, 0) = ((MR_Box) (&analysis_scalar_common_8[0]));
#line 1246 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_25_25, 1) = ((MR_Box) (analysis__write_analysis_files_7_p_0_1));
#line 1246 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_25_25, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1246 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_25_25, 3) = ((MR_Box) (analysis__Globals_17));
#line 1246 "analysis.m"
    }
#line 15463 "analysis.c"
    analysis__TypeCtorInfo_125_125 = (MR_Word) &mercury__io__io__type_ctor_info_state_0;
#line 1246 "analysis.m"
    {
#line 1246 "analysis.m"
      mercury__set__fold2_6_p_2(analysis__TypeCtorInfo_117_117, (MR_Word) &analysis__analysis__type_ctor_info_analysis_info_0, analysis__TypeCtorInfo_125_125, analysis__V_25_25, analysis__LocalModules_15, ((MR_Box) (analysis__STATE_VARIABLE_Info_0_21)), &analysis__conv2_STATE_VARIABLE_Info_26_26, ((MR_Box) ((MR_Integer) 0)), &analysis__conv1_STATE_VARIABLE_IO_27_27);
    }
#line 1246 "analysis.m"
    analysis__STATE_VARIABLE_Info_26_26 = ((MR_Word) analysis__conv2_STATE_VARIABLE_Info_26_26);
#line 1248 "analysis.m"
    {
#line 1248 "analysis.m"
      analysis__update_analysis_registry_5_p_0(analysis__ModuleInfo_9, analysis__STATE_VARIABLE_Info_26_26, &analysis__STATE_VARIABLE_Info_28_28);
    }
#line 1252 "analysis.m"
    analysis__TypeClassInfo_for_compiler_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_28_28, (MR_Integer) 0)));
#line 1252 "analysis.m"
    analysis__V_69_69 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_28_28, (MR_Integer) 1));
#line 1252 "analysis.m"
    analysis__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_28_28, (MR_Integer) 2)));
#line 1252 "analysis.m"
    analysis__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_28_28, (MR_Integer) 3)));
#line 1252 "analysis.m"
    analysis__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_28_28, (MR_Integer) 4)));
#line 1252 "analysis.m"
    analysis__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_28_28, (MR_Integer) 5)));
#line 1252 "analysis.m"
    analysis__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_28_28, (MR_Integer) 6)));
#line 1252 "analysis.m"
    analysis__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_28_28, (MR_Integer) 7)));
#line 1252 "analysis.m"
    analysis__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_28_28, (MR_Integer) 8)));
#line 1252 "analysis.m"
    analysis__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_28_28, (MR_Integer) 9)));
#line 1252 "analysis.m"
    analysis__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_28_28, (MR_Integer) 10)));
#line 1252 "analysis.m"
    {
#line 1252 "analysis.m"
      analysis__ModuleStatus_18 = analysis__lub_result_statuses_1_f_0(analysis__V_30_30);
    }
#line 1253 "analysis.m"
    analysis__TypeClassInfo_for_compiler_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_28_28, (MR_Integer) 0)));
#line 1253 "analysis.m"
    analysis__V_78_78 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_28_28, (MR_Integer) 1));
#line 1253 "analysis.m"
    analysis__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_28_28, (MR_Integer) 2)));
#line 1253 "analysis.m"
    analysis__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_28_28, (MR_Integer) 3)));
#line 1253 "analysis.m"
    analysis__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_28_28, (MR_Integer) 4)));
#line 1253 "analysis.m"
    analysis__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_28_28, (MR_Integer) 5)));
#line 1253 "analysis.m"
    analysis__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_28_28, (MR_Integer) 6)));
#line 1253 "analysis.m"
    analysis__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_28_28, (MR_Integer) 7)));
#line 1253 "analysis.m"
    analysis__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_28_28, (MR_Integer) 8)));
#line 1253 "analysis.m"
    analysis__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_28_28, (MR_Integer) 9)));
#line 1253 "analysis.m"
    analysis__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_28_28, (MR_Integer) 10)));
#line 1253 "analysis.m"
    {
#line 1253 "analysis.m"
      analysis__V_33_33 = mercury__map__f_101_108_101_109_32_58_61_3_f_0(analysis__TypeCtorInfo_117_117, (MR_Word) &analysis__analysis__type_ctor_info_analysis_status_0, ((MR_Box) (analysis__ThisModule_13)), analysis__V_32_32, ((MR_Box) (analysis__ModuleStatus_18)));
    }
#line 1253 "analysis.m"
    analysis__TypeClassInfo_for_compiler_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_28_28, (MR_Integer) 0)));
#line 1253 "analysis.m"
    analysis__V_87_87 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_28_28, (MR_Integer) 1));
#line 1253 "analysis.m"
    analysis__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_28_28, (MR_Integer) 2)));
#line 1253 "analysis.m"
    analysis__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_28_28, (MR_Integer) 3)));
#line 1253 "analysis.m"
    analysis__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_28_28, (MR_Integer) 4)));
#line 1253 "analysis.m"
    analysis__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_28_28, (MR_Integer) 5)));
#line 1253 "analysis.m"
    analysis__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_28_28, (MR_Integer) 6)));
#line 1253 "analysis.m"
    analysis__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_28_28, (MR_Integer) 7)));
#line 1253 "analysis.m"
    analysis__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_28_28, (MR_Integer) 8)));
#line 1253 "analysis.m"
    analysis__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_28_28, (MR_Integer) 9)));
#line 1253 "analysis.m"
    analysis__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_28_28, (MR_Integer) 10)));
#line 1253 "analysis.m"
    {
#line 1253 "analysis.m"
      analysis__STATE_VARIABLE_Info_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 1253 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_31_31, 0) = ((MR_Box) (analysis__TypeClassInfo_for_compiler_129));
#line 1253 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_31_31, 1) = analysis__V_87_87;
#line 1253 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_31_31, 2) = ((MR_Box) (analysis__V_88_88));
#line 1253 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_31_31, 3) = ((MR_Box) (analysis__V_89_89));
#line 1253 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_31_31, 4) = ((MR_Box) (analysis__V_90_90));
#line 1253 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_31_31, 5) = ((MR_Box) (analysis__V_91_91));
#line 1253 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_31_31, 6) = ((MR_Box) (analysis__V_33_33));
#line 1253 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_31_31, 7) = ((MR_Box) (analysis__V_93_93));
#line 1253 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_31_31, 8) = ((MR_Box) (analysis__V_94_94));
#line 1253 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_31_31, 9) = ((MR_Box) (analysis__V_95_95));
#line 1253 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_31_31, 10) = ((MR_Box) (analysis__V_96_96));
#line 1253 "analysis.m"
    }
#line 1255 "analysis.m"
    {
#line 1255 "analysis.m"
      analysis__update_intermodule_dependencies_4_p_0(analysis__ThisModule_13, analysis__LocalImportedModules_16, analysis__STATE_VARIABLE_Info_31_31, analysis__STATE_VARIABLE_Info_22);
    }
#line 1256 "analysis.m"
    analysis__TypeClassInfo_for_compiler_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), *analysis__STATE_VARIABLE_Info_22, (MR_Integer) 0)));
#line 1256 "analysis.m"
    analysis__V_97_97 = (MR_hl_field(MR_mktag(0), *analysis__STATE_VARIABLE_Info_22, (MR_Integer) 1));
#line 1256 "analysis.m"
    analysis__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), *analysis__STATE_VARIABLE_Info_22, (MR_Integer) 2)));
#line 1256 "analysis.m"
    analysis__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), *analysis__STATE_VARIABLE_Info_22, (MR_Integer) 3)));
#line 1256 "analysis.m"
    analysis__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), *analysis__STATE_VARIABLE_Info_22, (MR_Integer) 4)));
#line 1256 "analysis.m"
    analysis__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), *analysis__STATE_VARIABLE_Info_22, (MR_Integer) 5)));
#line 1256 "analysis.m"
    analysis__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), *analysis__STATE_VARIABLE_Info_22, (MR_Integer) 6)));
#line 1256 "analysis.m"
    analysis__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), *analysis__STATE_VARIABLE_Info_22, (MR_Integer) 7)));
#line 1256 "analysis.m"
    analysis__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), *analysis__STATE_VARIABLE_Info_22, (MR_Integer) 8)));
#line 1256 "analysis.m"
    analysis__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), *analysis__STATE_VARIABLE_Info_22, (MR_Integer) 9)));
#line 1256 "analysis.m"
    analysis__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), *analysis__STATE_VARIABLE_Info_22, (MR_Integer) 10)));
#line 1256 "analysis.m"
    {
#line 1256 "analysis.m"
      analysis__succeeded = mercury__map__is_empty_1_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &analysis_scalar_common_2[2], analysis__V_35_35);
    }
#line 1258 "analysis.m"
    if (analysis__succeeded)
#line 1257 "analysis.m"
      {
#line 1257 "analysis.m"
      }
#line 1258 "analysis.m"
    else
#line 1259 "analysis.m"
      {
#line 1259 "analysis.m"
        {
#line 1259 "analysis.m"
          mercury__require__unexpected_3_p_0((MR_String) "analysis", (MR_String) "predicate \140analysis.write_analysis_files\'/7", (MR_String) "new_analysis_results is not empty");
#line 1259 "analysis.m"
          return;
        }
#line 1259 "analysis.m"
      }
#line 1264 "analysis.m"
    {
#line 1264 "analysis.m"
      analysis__V_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1264 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_39_39, 0) = ((MR_Box) (&analysis_scalar_common_7[1]));
#line 1264 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_39_39, 1) = ((MR_Box) (analysis__write_analysis_files_7_p_0_2));
#line 1264 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_39_39, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1264 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_39_39, 3) = ((MR_Box) (*analysis__STATE_VARIABLE_Info_22));
#line 1264 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_39_39, 4) = ((MR_Box) (analysis__Globals_17));
#line 1264 "analysis.m"
    }
#line 1264 "analysis.m"
    {
#line 1264 "analysis.m"
      mercury__set__fold_4_p_2(analysis__TypeCtorInfo_117_117, analysis__TypeCtorInfo_125_125, analysis__V_39_39, analysis__LocalModules_15, ((MR_Box) ((MR_Integer) 0)), &analysis__conv3_STATE_VARIABLE_IO_40_40);
    }
#line 1268 "analysis.m"
    analysis__TypeClassInfo_for_compiler_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), *analysis__STATE_VARIABLE_Info_22, (MR_Integer) 0)));
#line 1268 "analysis.m"
    analysis__V_106_106 = (MR_hl_field(MR_mktag(0), *analysis__STATE_VARIABLE_Info_22, (MR_Integer) 1));
#line 1268 "analysis.m"
    analysis__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), *analysis__STATE_VARIABLE_Info_22, (MR_Integer) 2)));
#line 1268 "analysis.m"
    analysis__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), *analysis__STATE_VARIABLE_Info_22, (MR_Integer) 3)));
#line 1268 "analysis.m"
    analysis__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), *analysis__STATE_VARIABLE_Info_22, (MR_Integer) 4)));
#line 1268 "analysis.m"
    analysis__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), *analysis__STATE_VARIABLE_Info_22, (MR_Integer) 5)));
#line 1268 "analysis.m"
    analysis__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), *analysis__STATE_VARIABLE_Info_22, (MR_Integer) 6)));
#line 1268 "analysis.m"
    analysis__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), *analysis__STATE_VARIABLE_Info_22, (MR_Integer) 7)));
#line 1268 "analysis.m"
    analysis__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), *analysis__STATE_VARIABLE_Info_22, (MR_Integer) 8)));
#line 1268 "analysis.m"
    analysis__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), *analysis__STATE_VARIABLE_Info_22, (MR_Integer) 9)));
#line 1268 "analysis.m"
    analysis__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), *analysis__STATE_VARIABLE_Info_22, (MR_Integer) 10)));
#line 1268 "analysis.m"
    {
#line 1268 "analysis.m"
      analysis__conv4_ModuleResults_19 = mercury__map__det_elem_2_f_0(analysis__TypeCtorInfo_117_117, (MR_Word) &analysis_scalar_common_2[3], ((MR_Box) (analysis__ThisModule_13)), analysis__V_41_41);
    }
#line 1268 "analysis.m"
    analysis__ModuleResults_19 = ((MR_Word) analysis__conv4_ModuleResults_19);
#line 1269 "analysis.m"
    {
#line 1269 "analysis.m"
      analysis__file__write_module_analysis_results_6_p_0(*analysis__STATE_VARIABLE_Info_22, analysis__Globals_17, analysis__ThisModule_13, analysis__ModuleResults_19);
    }
#line 1273 "analysis.m"
    {
#line 1273 "analysis.m"
      analysis__V_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1273 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_43_43, 0) = ((MR_Box) (&analysis_scalar_common_7[1]));
#line 1273 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_43_43, 1) = ((MR_Box) (analysis__write_analysis_files_7_p_0_3));
#line 1273 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_43_43, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1273 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_43_43, 3) = ((MR_Box) (*analysis__STATE_VARIABLE_Info_22));
#line 1273 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_43_43, 4) = ((MR_Box) (analysis__Globals_17));
#line 1273 "analysis.m"
    }
#line 1273 "analysis.m"
    {
#line 1273 "analysis.m"
      mercury__set__fold_4_p_2(analysis__TypeCtorInfo_117_117, analysis__TypeCtorInfo_125_125, analysis__V_43_43, analysis__LocalImportedModules_16, ((MR_Box) ((MR_Integer) 0)), &analysis__conv5_STATE_VARIABLE_IO_44_44);
    }
#line 1278 "analysis.m"
    {
#line 1278 "analysis.m"
      analysis__file__empty_request_file_5_p_0(*analysis__STATE_VARIABLE_Info_22, analysis__Globals_17, analysis__ThisModule_13);
    }
#line 1281 "analysis.m"
    {
#line 1281 "analysis.m"
      analysis__V_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1281 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_46_46, 0) = ((MR_Box) (&analysis_scalar_common_7[1]));
#line 1281 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_46_46, 1) = ((MR_Box) (analysis__write_analysis_files_7_p_0_4));
#line 1281 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_46_46, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1281 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_46_46, 3) = ((MR_Box) (*analysis__STATE_VARIABLE_Info_22));
#line 1281 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_46_46, 4) = ((MR_Box) (analysis__Globals_17));
#line 1281 "analysis.m"
    }
#line 1281 "analysis.m"
    {
#line 1281 "analysis.m"
      mercury__set__fold_4_p_2(analysis__TypeCtorInfo_117_117, analysis__TypeCtorInfo_125_125, analysis__V_46_46, analysis__LocalImportedModules_16, ((MR_Box) ((MR_Integer) 0)), &analysis__conv6_STATE_VARIABLE_IO_47_47);
    }
#line 1286 "analysis.m"
    {
#line 1286 "analysis.m"
      analysis__module_name_to_write_file_name_7_p_0(analysis__TypeClassInfo_for_compiler_115, analysis__Compiler_8, analysis__Globals_17, analysis__ThisModule_13, (MR_String) ".analysis_date", &analysis__TimestampFileName_20);
    }
#line 1288 "analysis.m"
    {
#line 1288 "analysis.m"
      parse_tree__module_cmds__touch_datestamp_4_p_0(analysis__Globals_17, analysis__TimestampFileName_20);
#line 1288 "analysis.m"
      return;
    }
#line 1237 "analysis.m"
  }
#line 295 "analysis.m"
}

#line 289 "analysis.m"
void MR_CALL 
analysis__module_is_local_3_p_0(
#line 289 "analysis.m"
  MR_Word analysis__Info_4,
#line 289 "analysis.m"
  MR_Word analysis__ModuleName_5,
#line 289 "analysis.m"
  MR_Word * analysis__IsLocal_6)
#line 289 "analysis.m"
{
#line 1227 "analysis.m"
  {
#line 1227 "analysis.m"
    MR_bool analysis__succeeded;
#line 1225 "analysis.m"
    MR_Word analysis__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_4, (MR_Integer) 4)));
#line 1225 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_compiler_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_4, (MR_Integer) 0)));
#line 1225 "analysis.m"
    MR_Box analysis__V_8_8 = (MR_hl_field(MR_mktag(0), analysis__Info_4, (MR_Integer) 1));
#line 1225 "analysis.m"
    MR_Word analysis__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_4, (MR_Integer) 2)));
#line 1225 "analysis.m"
    MR_Word analysis__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_4, (MR_Integer) 3)));
#line 1225 "analysis.m"
    MR_Word analysis__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_4, (MR_Integer) 5)));
#line 1225 "analysis.m"
    MR_Word analysis__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_4, (MR_Integer) 6)));
#line 1225 "analysis.m"
    MR_Word analysis__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_4, (MR_Integer) 7)));
#line 1225 "analysis.m"
    MR_Word analysis__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_4, (MR_Integer) 8)));
#line 1225 "analysis.m"
    MR_Word analysis__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_4, (MR_Integer) 9)));
#line 1225 "analysis.m"
    MR_Word analysis__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_4, (MR_Integer) 10)));

#line 1225 "analysis.m"
    {
#line 1225 "analysis.m"
      analysis__succeeded = mercury__set__contains_2_p_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0, analysis__V_7_7, ((MR_Box) (analysis__ModuleName_5)));
    }
#line 1227 "analysis.m"
    if (analysis__succeeded)
#line 1226 "analysis.m"
      *analysis__IsLocal_6 = (MR_Integer) 1;
#line 1227 "analysis.m"
    else
#line 1228 "analysis.m"
      *analysis__IsLocal_6 = (MR_Integer) 0;
#line 1227 "analysis.m"
  }
#line 289 "analysis.m"
}

#line 1196 "analysis.m"
static void MR_CALL 
analysis__prepare_intermodule_analysis_7_p_0_1(
#line 1196 "analysis.m"
  MR_Box analysis__closure_arg,
#line 1196 "analysis.m"
  MR_Box analysis__wrapper_arg_1,
#line 1196 "analysis.m"
  MR_Box analysis__wrapper_arg_2,
#line 1196 "analysis.m"
  MR_Box * analysis__wrapper_arg_3,
#line 1196 "analysis.m"
  MR_Box analysis__wrapper_arg_4,
#line 1196 "analysis.m"
  MR_Box * analysis__wrapper_arg_5)
#line 1196 "analysis.m"
{
#line 1196 "analysis.m"
  {
#line 1196 "analysis.m"
    MR_Box analysis__closure = analysis__closure_arg;
#line 1196 "analysis.m"
    MR_Word analysis__conv0_STATE_VARIABLE_Info_14;

#line 1196 "analysis.m"
    {
#line 1196 "analysis.m"
      analysis__load_module_analysis_results_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 3))), ((MR_Word) analysis__wrapper_arg_1), ((MR_Word) analysis__wrapper_arg_2), &analysis__conv0_STATE_VARIABLE_Info_14);
    }
#line 1196 "analysis.m"
    *analysis__wrapper_arg_3 = ((MR_Box) (analysis__conv0_STATE_VARIABLE_Info_14));
#line 1196 "analysis.m"
  }
#line 1196 "analysis.m"
}

#line 279 "analysis.m"
void MR_CALL 
analysis__prepare_intermodule_analysis_7_p_0(
#line 279 "analysis.m"
  MR_Word analysis__Globals_8,
#line 279 "analysis.m"
  MR_Word analysis__ImportedModuleNames0_9,
#line 279 "analysis.m"
  MR_Word analysis__LocalModuleNames_10,
#line 279 "analysis.m"
  MR_Word analysis__STATE_VARIABLE_Info_0_16,
#line 279 "analysis.m"
  MR_Word * analysis__STATE_VARIABLE_Info_17)
#line 279 "analysis.m"
{
#line 1189 "analysis.m"
  {
#line 1189 "analysis.m"
    MR_bool analysis__succeeded;
#line 1189 "analysis.m"
    MR_Word analysis__TypeCtorInfo_69_69 = (MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0;
#line 1189 "analysis.m"
    MR_Word analysis__ThisModule_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_16, (MR_Integer) 2)));
#line 1189 "analysis.m"
    MR_Word analysis__ImportedModuleNames_14;
#line 1189 "analysis.m"
    MR_Word analysis__ThisModuleRequests_15;
#line 1189 "analysis.m"
    MR_Word analysis__STATE_VARIABLE_Info_20_20;
#line 1189 "analysis.m"
    MR_Word analysis__V_21_21;
#line 1189 "analysis.m"
    MR_Word analysis__STATE_VARIABLE_Info_22_22;
#line 1189 "analysis.m"
    MR_Word analysis__STATE_VARIABLE_Info_24_24;
#line 1189 "analysis.m"
    MR_Word analysis__V_28_28;
#line 1189 "analysis.m"
    MR_Word analysis__V_29_29;
#line 1190 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_compiler_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_16, (MR_Integer) 0)));
#line 1190 "analysis.m"
    MR_Box analysis__V_30_30 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_16, (MR_Integer) 1));
#line 1190 "analysis.m"
    MR_Word analysis__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_16, (MR_Integer) 3)));
#line 1190 "analysis.m"
    MR_Word analysis__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_16, (MR_Integer) 4)));
#line 1190 "analysis.m"
    MR_Word analysis__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_16, (MR_Integer) 5)));
#line 1190 "analysis.m"
    MR_Word analysis__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_16, (MR_Integer) 6)));
#line 1190 "analysis.m"
    MR_Word analysis__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_16, (MR_Integer) 7)));
#line 1190 "analysis.m"
    MR_Word analysis__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_16, (MR_Integer) 8)));
#line 1190 "analysis.m"
    MR_Word analysis__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_16, (MR_Integer) 9)));
#line 1190 "analysis.m"
    MR_Word analysis__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_16, (MR_Integer) 10)));
#line 1193 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_compiler_70;
#line 1193 "analysis.m"
    MR_Box analysis__V_39_39;
#line 1193 "analysis.m"
    MR_Word analysis__V_40_40;
#line 1193 "analysis.m"
    MR_Word analysis__V_41_41;
#line 1193 "analysis.m"
    MR_Word analysis__V_43_43;
#line 1193 "analysis.m"
    MR_Word analysis__V_44_44;
#line 1193 "analysis.m"
    MR_Word analysis__V_45_45;
#line 1193 "analysis.m"
    MR_Word analysis__V_46_46;
#line 1193 "analysis.m"
    MR_Word analysis__V_47_47;
#line 1193 "analysis.m"
    MR_Word analysis__V_48_48;
#line 1193 "analysis.m"
    MR_Word analysis__V_42_42;
#line 1196 "analysis.m"
    MR_Box analysis__conv2_STATE_VARIABLE_Info_22_22;
#line 1196 "analysis.m"
    MR_Box analysis__conv1_STATE_VARIABLE_IO_23_23;
#line 1203 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_compiler_78;
#line 1203 "analysis.m"
    MR_Box analysis__V_49_49;
#line 1203 "analysis.m"
    MR_Word analysis__V_50_50;
#line 1203 "analysis.m"
    MR_Word analysis__V_51_51;
#line 1203 "analysis.m"
    MR_Word analysis__V_52_52;
#line 1203 "analysis.m"
    MR_Word analysis__V_53_53;
#line 1203 "analysis.m"
    MR_Word analysis__V_54_54;
#line 1203 "analysis.m"
    MR_Word analysis__V_55_55;
#line 1203 "analysis.m"
    MR_Word analysis__V_56_56;
#line 1203 "analysis.m"
    MR_Word analysis__V_57_57;
#line 1203 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_compiler_80;
#line 1203 "analysis.m"
    MR_Box analysis__V_58_58;
#line 1203 "analysis.m"
    MR_Word analysis__V_59_59;
#line 1203 "analysis.m"
    MR_Word analysis__V_60_60;
#line 1203 "analysis.m"
    MR_Word analysis__V_61_61;
#line 1203 "analysis.m"
    MR_Word analysis__V_63_63;
#line 1203 "analysis.m"
    MR_Word analysis__V_64_64;
#line 1203 "analysis.m"
    MR_Word analysis__V_65_65;
#line 1203 "analysis.m"
    MR_Word analysis__V_66_66;
#line 1203 "analysis.m"
    MR_Word analysis__V_67_67;
#line 1203 "analysis.m"
    MR_Word analysis__V_62_62;

#line 1191 "analysis.m"
    {
#line 1191 "analysis.m"
      analysis__ImportedModuleNames_14 = mercury__set__delete_2_f_0(analysis__TypeCtorInfo_69_69, analysis__ImportedModuleNames0_9, ((MR_Box) (analysis__ThisModule_13)));
    }
#line 1193 "analysis.m"
    analysis__TypeClassInfo_for_compiler_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_16, (MR_Integer) 0)));
#line 1193 "analysis.m"
    analysis__V_39_39 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_16, (MR_Integer) 1));
#line 1193 "analysis.m"
    analysis__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_16, (MR_Integer) 2)));
#line 1193 "analysis.m"
    analysis__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_16, (MR_Integer) 3)));
#line 1193 "analysis.m"
    analysis__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_16, (MR_Integer) 4)));
#line 1193 "analysis.m"
    analysis__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_16, (MR_Integer) 5)));
#line 1193 "analysis.m"
    analysis__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_16, (MR_Integer) 6)));
#line 1193 "analysis.m"
    analysis__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_16, (MR_Integer) 7)));
#line 1193 "analysis.m"
    analysis__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_16, (MR_Integer) 8)));
#line 1193 "analysis.m"
    analysis__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_16, (MR_Integer) 9)));
#line 1193 "analysis.m"
    analysis__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_16, (MR_Integer) 10)));
#line 1193 "analysis.m"
    {
#line 1193 "analysis.m"
      analysis__STATE_VARIABLE_Info_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 1193 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_20_20, 0) = ((MR_Box) (analysis__TypeClassInfo_for_compiler_70));
#line 1193 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_20_20, 1) = analysis__V_39_39;
#line 1193 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_20_20, 2) = ((MR_Box) (analysis__V_40_40));
#line 1193 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_20_20, 3) = ((MR_Box) (analysis__V_41_41));
#line 1193 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_20_20, 4) = ((MR_Box) (analysis__LocalModuleNames_10));
#line 1193 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_20_20, 5) = ((MR_Box) (analysis__V_43_43));
#line 1193 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_20_20, 6) = ((MR_Box) (analysis__V_44_44));
#line 1193 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_20_20, 7) = ((MR_Box) (analysis__V_45_45));
#line 1193 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_20_20, 8) = ((MR_Box) (analysis__V_46_46));
#line 1193 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_20_20, 9) = ((MR_Box) (analysis__V_47_47));
#line 1193 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_20_20, 10) = ((MR_Box) (analysis__V_48_48));
#line 1193 "analysis.m"
    }
#line 1196 "analysis.m"
    {
#line 1196 "analysis.m"
      analysis__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1196 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_21_21, 0) = ((MR_Box) (&analysis_scalar_common_8[0]));
#line 1196 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_21_21, 1) = ((MR_Box) (analysis__prepare_intermodule_analysis_7_p_0_1));
#line 1196 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_21_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1196 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_21_21, 3) = ((MR_Box) (analysis__Globals_8));
#line 1196 "analysis.m"
    }
#line 1196 "analysis.m"
    {
#line 1196 "analysis.m"
      mercury__set__fold2_6_p_2(analysis__TypeCtorInfo_69_69, (MR_Word) &analysis__analysis__type_ctor_info_analysis_info_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, analysis__V_21_21, analysis__ImportedModuleNames_14, ((MR_Box) (analysis__STATE_VARIABLE_Info_20_20)), &analysis__conv2_STATE_VARIABLE_Info_22_22, ((MR_Box) ((MR_Integer) 0)), &analysis__conv1_STATE_VARIABLE_IO_23_23);
    }
#line 1196 "analysis.m"
    analysis__STATE_VARIABLE_Info_22_22 = ((MR_Word) analysis__conv2_STATE_VARIABLE_Info_22_22);
#line 1200 "analysis.m"
    {
#line 1200 "analysis.m"
      analysis__load_module_analysis_results_6_p_0(analysis__Globals_8, analysis__ThisModule_13, analysis__STATE_VARIABLE_Info_22_22, &analysis__STATE_VARIABLE_Info_24_24);
    }
#line 1201 "analysis.m"
    {
#line 1201 "analysis.m"
      analysis__file__read_module_analysis_requests_6_p_0(analysis__STATE_VARIABLE_Info_24_24, analysis__Globals_8, analysis__ThisModule_13, &analysis__ThisModuleRequests_15);
    }
#line 1203 "analysis.m"
    analysis__TypeClassInfo_for_compiler_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_24_24, (MR_Integer) 0)));
#line 1203 "analysis.m"
    analysis__V_49_49 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_24_24, (MR_Integer) 1));
#line 1203 "analysis.m"
    analysis__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_24_24, (MR_Integer) 2)));
#line 1203 "analysis.m"
    analysis__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_24_24, (MR_Integer) 3)));
#line 1203 "analysis.m"
    analysis__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_24_24, (MR_Integer) 4)));
#line 1203 "analysis.m"
    analysis__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_24_24, (MR_Integer) 5)));
#line 1203 "analysis.m"
    analysis__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_24_24, (MR_Integer) 6)));
#line 1203 "analysis.m"
    analysis__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_24_24, (MR_Integer) 7)));
#line 1203 "analysis.m"
    analysis__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_24_24, (MR_Integer) 8)));
#line 1203 "analysis.m"
    analysis__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_24_24, (MR_Integer) 9)));
#line 1203 "analysis.m"
    analysis__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_24_24, (MR_Integer) 10)));
#line 1203 "analysis.m"
    {
#line 1203 "analysis.m"
      analysis__V_29_29 = mercury__map__f_101_108_101_109_32_58_61_3_f_0(analysis__TypeCtorInfo_69_69, (MR_Word) &analysis_scalar_common_2[1], ((MR_Box) (analysis__ThisModule_13)), analysis__V_28_28, ((MR_Box) (analysis__ThisModuleRequests_15)));
    }
#line 1203 "analysis.m"
    analysis__TypeClassInfo_for_compiler_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_24_24, (MR_Integer) 0)));
#line 1203 "analysis.m"
    analysis__V_58_58 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_24_24, (MR_Integer) 1));
#line 1203 "analysis.m"
    analysis__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_24_24, (MR_Integer) 2)));
#line 1203 "analysis.m"
    analysis__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_24_24, (MR_Integer) 3)));
#line 1203 "analysis.m"
    analysis__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_24_24, (MR_Integer) 4)));
#line 1203 "analysis.m"
    analysis__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_24_24, (MR_Integer) 5)));
#line 1203 "analysis.m"
    analysis__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_24_24, (MR_Integer) 6)));
#line 1203 "analysis.m"
    analysis__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_24_24, (MR_Integer) 7)));
#line 1203 "analysis.m"
    analysis__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_24_24, (MR_Integer) 8)));
#line 1203 "analysis.m"
    analysis__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_24_24, (MR_Integer) 9)));
#line 1203 "analysis.m"
    analysis__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_24_24, (MR_Integer) 10)));
#line 1203 "analysis.m"
    {
#line 1203 "analysis.m"
      MR_Word base;
#line 1203 "analysis.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 1203 "analysis.m"
      *analysis__STATE_VARIABLE_Info_17 = base;
#line 1203 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (analysis__TypeClassInfo_for_compiler_80));
#line 1203 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 1) = analysis__V_58_58;
#line 1203 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (analysis__V_59_59));
#line 1203 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (analysis__V_60_60));
#line 1203 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (analysis__V_61_61));
#line 1203 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (analysis__V_29_29));
#line 1203 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (analysis__V_63_63));
#line 1203 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (analysis__V_64_64));
#line 1203 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (analysis__V_65_65));
#line 1203 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (analysis__V_66_66));
#line 1203 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (analysis__V_67_67));
#line 1203 "analysis.m"
    }
#line 1189 "analysis.m"
  }
#line 279 "analysis.m"
}

#line 263 "analysis.m"
void MR_CALL 
analysis__record_request_6_p_0(
#line 263 "analysis.m"
  MR_Word analysis__TypeClassInfo_for_call_pattern_39,
#line 263 "analysis.m"
  MR_String analysis__AnalysisName_7,
#line 263 "analysis.m"
  MR_Word analysis__ModuleName_8,
#line 263 "analysis.m"
  MR_Word analysis__FuncId_9,
#line 263 "analysis.m"
  MR_Box analysis__CallPattern_10,
#line 263 "analysis.m"
  MR_Word analysis__STATE_VARIABLE_Info_0_15,
#line 263 "analysis.m"
  MR_Word * analysis__STATE_VARIABLE_Info_16)
#line 263 "analysis.m"
{
#line 689 "analysis.m"
  {
#line 689 "analysis.m"
    MR_bool analysis__succeeded;
#line 689 "analysis.m"
    MR_Word analysis__ThisModule_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_15, (MR_Integer) 2)));
#line 689 "analysis.m"
    MR_Word analysis__MakeAnalysisReg_13;
#line 689 "analysis.m"
    MR_Word analysis__IsLocal_14;
#line 690 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_compiler_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_15, (MR_Integer) 0)));
#line 690 "analysis.m"
    MR_Box analysis__V_21_21 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_15, (MR_Integer) 1));
#line 690 "analysis.m"
    MR_Word analysis__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_15, (MR_Integer) 3)));
#line 690 "analysis.m"
    MR_Word analysis__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_15, (MR_Integer) 4)));
#line 690 "analysis.m"
    MR_Word analysis__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_15, (MR_Integer) 5)));
#line 690 "analysis.m"
    MR_Word analysis__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_15, (MR_Integer) 6)));
#line 690 "analysis.m"
    MR_Word analysis__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_15, (MR_Integer) 7)));
#line 690 "analysis.m"
    MR_Word analysis__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_15, (MR_Integer) 8)));
#line 690 "analysis.m"
    MR_Word analysis__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_15, (MR_Integer) 9)));
#line 690 "analysis.m"
    MR_Word analysis__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_15, (MR_Integer) 10)));
#line 697 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_compiler_41;
#line 697 "analysis.m"
    MR_Box analysis__V_30_30;
#line 697 "analysis.m"
    MR_Word analysis__V_31_31;
#line 697 "analysis.m"
    MR_Word analysis__V_32_32;
#line 697 "analysis.m"
    MR_Word analysis__V_33_33;
#line 697 "analysis.m"
    MR_Word analysis__V_34_34;
#line 697 "analysis.m"
    MR_Word analysis__V_35_35;
#line 697 "analysis.m"
    MR_Word analysis__V_36_36;
#line 697 "analysis.m"
    MR_Word analysis__V_37_37;
#line 697 "analysis.m"
    MR_Word analysis__V_38_38;
#line 1225 "analysis.m"
    MR_Word analysis__V_46_46;
#line 1225 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_compiler_56;
#line 1225 "analysis.m"
    MR_Box analysis__V_47_47;
#line 1225 "analysis.m"
    MR_Word analysis__V_48_48;
#line 1225 "analysis.m"
    MR_Word analysis__V_49_49;
#line 1225 "analysis.m"
    MR_Word analysis__V_50_50;
#line 1225 "analysis.m"
    MR_Word analysis__V_51_51;
#line 1225 "analysis.m"
    MR_Word analysis__V_52_52;
#line 1225 "analysis.m"
    MR_Word analysis__V_53_53;
#line 1225 "analysis.m"
    MR_Word analysis__V_54_54;
#line 1225 "analysis.m"
    MR_Word analysis__V_55_55;

#line 691 "analysis.m"
    {
#line 691 "analysis.m"
      analysis__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(analysis__ThisModule_12, analysis__ModuleName_8);
    }
#line 693 "analysis.m"
    if (analysis__succeeded)
#line 692 "analysis.m"
      {
#line 692 "analysis.m"
        {
#line 692 "analysis.m"
          mercury__require__unexpected_3_p_0((MR_String) "analysis", (MR_String) "predicate \140analysis.record_request\'/6", (MR_String) "request on self");
#line 692 "analysis.m"
          return;
        }
#line 692 "analysis.m"
      }
#line 693 "analysis.m"
    else
#line 694 "analysis.m"
      {
#line 694 "analysis.m"
      }
#line 697 "analysis.m"
    analysis__TypeClassInfo_for_compiler_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_15, (MR_Integer) 0)));
#line 697 "analysis.m"
    analysis__V_30_30 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_15, (MR_Integer) 1));
#line 697 "analysis.m"
    analysis__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_15, (MR_Integer) 2)));
#line 697 "analysis.m"
    analysis__MakeAnalysisReg_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_15, (MR_Integer) 3)));
#line 697 "analysis.m"
    analysis__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_15, (MR_Integer) 4)));
#line 697 "analysis.m"
    analysis__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_15, (MR_Integer) 5)));
#line 697 "analysis.m"
    analysis__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_15, (MR_Integer) 6)));
#line 697 "analysis.m"
    analysis__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_15, (MR_Integer) 7)));
#line 697 "analysis.m"
    analysis__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_15, (MR_Integer) 8)));
#line 697 "analysis.m"
    analysis__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_15, (MR_Integer) 9)));
#line 697 "analysis.m"
    analysis__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_15, (MR_Integer) 10)));
#line 1225 "analysis.m"
    analysis__TypeClassInfo_for_compiler_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_15, (MR_Integer) 0)));
#line 1225 "analysis.m"
    analysis__V_47_47 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_15, (MR_Integer) 1));
#line 1225 "analysis.m"
    analysis__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_15, (MR_Integer) 2)));
#line 1225 "analysis.m"
    analysis__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_15, (MR_Integer) 3)));
#line 1225 "analysis.m"
    analysis__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_15, (MR_Integer) 4)));
#line 1225 "analysis.m"
    analysis__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_15, (MR_Integer) 5)));
#line 1225 "analysis.m"
    analysis__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_15, (MR_Integer) 6)));
#line 1225 "analysis.m"
    analysis__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_15, (MR_Integer) 7)));
#line 1225 "analysis.m"
    analysis__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_15, (MR_Integer) 8)));
#line 1225 "analysis.m"
    analysis__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_15, (MR_Integer) 9)));
#line 1225 "analysis.m"
    analysis__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_15, (MR_Integer) 10)));
#line 1225 "analysis.m"
    {
#line 1225 "analysis.m"
      analysis__succeeded = mercury__set__contains_2_p_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0, analysis__V_46_46, ((MR_Box) (analysis__ModuleName_8)));
    }
#line 1227 "analysis.m"
    if (analysis__succeeded)
#line 1226 "analysis.m"
      analysis__IsLocal_14 = (MR_Integer) 1;
#line 1227 "analysis.m"
    else
#line 1228 "analysis.m"
      analysis__IsLocal_14 = (MR_Integer) 0;
#line 700 "analysis.m"
    analysis__succeeded = (analysis__MakeAnalysisReg_13 == (MR_Integer) 0);
#line 700 "analysis.m"
    if (analysis__succeeded)
#line 701 "analysis.m"
      analysis__succeeded = (analysis__IsLocal_14 == (MR_Integer) 1);
#line 705 "analysis.m"
    if (analysis__succeeded)
#line 703 "analysis.m"
      {
#line 703 "analysis.m"
        analysis__record_request_2_7_p_0(analysis__TypeClassInfo_for_call_pattern_39, analysis__ThisModule_12, analysis__AnalysisName_7, analysis__ModuleName_8, analysis__FuncId_9, analysis__CallPattern_10, analysis__STATE_VARIABLE_Info_0_15, analysis__STATE_VARIABLE_Info_16);
#line 703 "analysis.m"
        return;
      }
#line 705 "analysis.m"
    else
#line 703 "analysis.m"
      *analysis__STATE_VARIABLE_Info_16 = analysis__STATE_VARIABLE_Info_0_15;
#line 689 "analysis.m"
  }
#line 263 "analysis.m"
}

#line 678 "analysis.m"
static MR_bool MR_CALL 
analysis__lookup_requests_5_p_0_1(
#line 678 "analysis.m"
  MR_Box analysis__closure_arg,
#line 678 "analysis.m"
  MR_Box analysis__wrapper_arg_1,
#line 678 "analysis.m"
  MR_Box * analysis__wrapper_arg_2)
#line 678 "analysis.m"
{
#line 678 "analysis.m"
  {
#line 678 "analysis.m"
    MR_bool analysis__succeeded;
#line 678 "analysis.m"
    MR_Box analysis__closure = analysis__closure_arg;

#line 678 "analysis.m"
    {
#line 678 "analysis.m"
      return analysis__succeeded = analysis__IntroducedFrom__func__lookup_requests__678__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 3))), ((MR_Word) analysis__wrapper_arg_1), analysis__wrapper_arg_2);
    }
#line 678 "analysis.m"
    return analysis__succeeded;
#line 678 "analysis.m"
  }
#line 678 "analysis.m"
}

#line 254 "analysis.m"
void MR_CALL 
analysis__lookup_requests_5_p_0(
#line 254 "analysis.m"
  MR_Word analysis__TypeClassInfo_for_call_pattern_47,
#line 254 "analysis.m"
  MR_Word analysis__Info_6,
#line 254 "analysis.m"
  MR_String analysis__AnalysisName_7,
#line 254 "analysis.m"
  MR_Word analysis__ModuleName_8,
#line 254 "analysis.m"
  MR_Word analysis__FuncId_9,
#line 254 "analysis.m"
  MR_Word * analysis__CallPatterns_10)
#line 254 "analysis.m"
{
#line 668 "analysis.m"
  {
#line 668 "analysis.m"
    MR_bool analysis__succeeded;
#line 669 "analysis.m"
    MR_Word analysis__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 2)));
#line 669 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_compiler_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 0)));
#line 669 "analysis.m"
    MR_Box analysis__V_29_29 = (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 1));
#line 669 "analysis.m"
    MR_Word analysis__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 3)));
#line 669 "analysis.m"
    MR_Word analysis__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 4)));
#line 669 "analysis.m"
    MR_Word analysis__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 5)));
#line 669 "analysis.m"
    MR_Word analysis__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 6)));
#line 669 "analysis.m"
    MR_Word analysis__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 7)));
#line 669 "analysis.m"
    MR_Word analysis__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 8)));
#line 669 "analysis.m"
    MR_Word analysis__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 9)));
#line 669 "analysis.m"
    MR_Word analysis__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 10)));
#line 685 "analysis.m"
    MR_Word analysis__CallPatterns0_12;
#line 675 "analysis.m"
    MR_Word analysis__TypeCtorInfo_52_52;
#line 675 "analysis.m"
    MR_Word analysis__TypeInfo_53_53;
#line 675 "analysis.m"
    MR_Word analysis__TypeCtorInfo_54_54;
#line 675 "analysis.m"
    MR_Word analysis__TypeInfo_55_55;
#line 675 "analysis.m"
    MR_Word analysis__ModuleRequests_11;
#line 675 "analysis.m"
    MR_Word analysis__V_20_20;
#line 675 "analysis.m"
    MR_Word analysis__V_21_21;
#line 675 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_compiler_49;
#line 675 "analysis.m"
    MR_Box analysis__V_38_38;
#line 675 "analysis.m"
    MR_Word analysis__V_39_39;
#line 675 "analysis.m"
    MR_Word analysis__V_40_40;
#line 675 "analysis.m"
    MR_Word analysis__V_41_41;
#line 675 "analysis.m"
    MR_Word analysis__V_42_42;
#line 675 "analysis.m"
    MR_Word analysis__V_43_43;
#line 675 "analysis.m"
    MR_Word analysis__V_44_44;
#line 675 "analysis.m"
    MR_Word analysis__V_45_45;
#line 675 "analysis.m"
    MR_Word analysis__V_46_46;
#line 675 "analysis.m"
    MR_Box analysis__conv0_ModuleRequests_11;
#line 676 "analysis.m"
    MR_Box analysis__conv1_V_21_21;
#line 676 "analysis.m"
    MR_Box analysis__conv2_CallPatterns0_12;

#line 669 "analysis.m"
    {
#line 669 "analysis.m"
      analysis__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(analysis__ModuleName_8, analysis__V_64_64);
    }
#line 671 "analysis.m"
    if (analysis__succeeded)
#line 670 "analysis.m"
      {
#line 670 "analysis.m"
      }
#line 671 "analysis.m"
    else
#line 672 "analysis.m"
      {
#line 672 "analysis.m"
        {
#line 672 "analysis.m"
          mercury__require__unexpected_3_p_0((MR_String) "analysis", (MR_String) "predicate \140analysis.lookup_requests\'/5", (MR_String) "not this_module");
#line 672 "analysis.m"
          return;
        }
#line 672 "analysis.m"
      }
#line 675 "analysis.m"
    analysis__TypeClassInfo_for_compiler_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 0)));
#line 675 "analysis.m"
    analysis__V_38_38 = (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 1));
#line 675 "analysis.m"
    analysis__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 2)));
#line 675 "analysis.m"
    analysis__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 3)));
#line 675 "analysis.m"
    analysis__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 4)));
#line 675 "analysis.m"
    analysis__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 5)));
#line 675 "analysis.m"
    analysis__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 6)));
#line 675 "analysis.m"
    analysis__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 7)));
#line 675 "analysis.m"
    analysis__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 8)));
#line 675 "analysis.m"
    analysis__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 9)));
#line 675 "analysis.m"
    analysis__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 10)));
#line 675 "analysis.m"
    {
#line 675 "analysis.m"
      analysis__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0, (MR_Word) &analysis_scalar_common_2[1], analysis__V_20_20, ((MR_Box) (analysis__ModuleName_8)), &analysis__conv0_ModuleRequests_11);
    }
#line 675 "analysis.m"
    if (analysis__succeeded)
#line 675 "analysis.m"
      {
#line 675 "analysis.m"
        analysis__ModuleRequests_11 = ((MR_Word) analysis__conv0_ModuleRequests_11);
#line 675 "analysis.m"
        analysis__succeeded = MR_TRUE;
#line 675 "analysis.m"
      }
#line 675 "analysis.m"
    if (analysis__succeeded)
#line 675 "analysis.m"
      {
#line 16521 "analysis.c"
        analysis__TypeCtorInfo_52_52 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 16523 "analysis.c"
        analysis__TypeInfo_53_53 = (MR_Word) &analysis_scalar_common_2[0];
#line 676 "analysis.m"
        {
#line 676 "analysis.m"
          analysis__succeeded = mercury__map__elem_2_f_0(analysis__TypeCtorInfo_52_52, analysis__TypeInfo_53_53, ((MR_Box) (analysis__AnalysisName_7)), analysis__ModuleRequests_11, &analysis__conv1_V_21_21);
        }
#line 676 "analysis.m"
        if (analysis__succeeded)
#line 676 "analysis.m"
          {
#line 676 "analysis.m"
            analysis__V_21_21 = ((MR_Word) analysis__conv1_V_21_21);
#line 676 "analysis.m"
            analysis__succeeded = MR_TRUE;
#line 676 "analysis.m"
          }
#line 675 "analysis.m"
        if (analysis__succeeded)
#line 675 "analysis.m"
          {
#line 16544 "analysis.c"
            analysis__TypeCtorInfo_54_54 = (MR_Word) &analysis__analysis__type_ctor_info_func_id_0;
#line 16546 "analysis.c"
            analysis__TypeInfo_55_55 = (MR_Word) &analysis_scalar_common_1[0];
#line 676 "analysis.m"
            {
#line 676 "analysis.m"
              analysis__succeeded = mercury__map__elem_2_f_0(analysis__TypeCtorInfo_54_54, analysis__TypeInfo_55_55, ((MR_Box) (analysis__FuncId_9)), analysis__V_21_21, &analysis__conv2_CallPatterns0_12);
            }
#line 676 "analysis.m"
            if (analysis__succeeded)
#line 676 "analysis.m"
              {
#line 676 "analysis.m"
                analysis__CallPatterns0_12 = ((MR_Word) analysis__conv2_CallPatterns0_12);
#line 676 "analysis.m"
                analysis__succeeded = MR_TRUE;
#line 676 "analysis.m"
              }
#line 675 "analysis.m"
          }
#line 675 "analysis.m"
      }
#line 685 "analysis.m"
    if (analysis__succeeded)
#line 681 "analysis.m"
      {
#line 681 "analysis.m"
        MR_Word analysis__TypeInfo_58_58;
#line 681 "analysis.m"
        MR_Word analysis__TypeInfo_63_63;
#line 681 "analysis.m"
        MR_Word analysis__CallPatterns1_13;
#line 681 "analysis.m"
        MR_Word analysis__V_22_22;

#line 16580 "analysis.c"
        {
#line 16582 "analysis.c"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_call_pattern_47, (MR_Integer) 4, &analysis__TypeInfo_58_58);
        }
#line 678 "analysis.m"
        {
#line 678 "analysis.m"
          analysis__V_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 678 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__V_22_22, 0) = ((MR_Box) (&analysis_scalar_common_4[1]));
#line 678 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__V_22_22, 1) = ((MR_Box) (analysis__lookup_requests_5_p_0_1));
#line 678 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__V_22_22, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 678 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__V_22_22, 3) = ((MR_Box) (analysis__TypeClassInfo_for_call_pattern_47));
#line 678 "analysis.m"
        }
#line 678 "analysis.m"
        {
#line 678 "analysis.m"
          analysis__CallPatterns1_13 = mercury__list__filter_map_2_f_0((MR_Word) &analysis__analysis__type_ctor_info_analysis_request_0, analysis__TypeInfo_58_58, analysis__V_22_22, analysis__CallPatterns0_12);
        }
#line 16604 "analysis.c"
        {
#line 16606 "analysis.c"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_call_pattern_47, (MR_Integer) 4, &analysis__TypeInfo_63_63);
        }
#line 684 "analysis.m"
        {
#line 684 "analysis.m"
          mercury__list__sort_and_remove_dups_2_p_0(analysis__TypeInfo_63_63, analysis__CallPatterns1_13, analysis__CallPatterns_10);
#line 684 "analysis.m"
          return;
        }
#line 681 "analysis.m"
      }
#line 685 "analysis.m"
    else
#line 686 "analysis.m"
      *analysis__CallPatterns_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 668 "analysis.m"
  }
#line 254 "analysis.m"
}

#line 247 "analysis.m"
void MR_CALL 
analysis__record_dependency_7_p_0(
#line 247 "analysis.m"
  MR_Word analysis__TypeClassInfo_for_analysis_47,
#line 247 "analysis.m"
  MR_Word analysis__CalleeModuleName_8,
#line 247 "analysis.m"
  MR_Word analysis__FuncId_9,
#line 247 "analysis.m"
  MR_Box analysis__FuncInfo_10,
#line 247 "analysis.m"
  MR_Box analysis__Call_11,
#line 247 "analysis.m"
  MR_Word analysis__STATE_VARIABLE_Info_0_21,
#line 247 "analysis.m"
  MR_Word * analysis__STATE_VARIABLE_Info_22)
#line 247 "analysis.m"
{
#line 740 "analysis.m"
  {
#line 740 "analysis.m"
    MR_bool analysis__succeeded;
#line 740 "analysis.m"
    MR_Word analysis__ThisModule_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 2)));
#line 740 "analysis.m"
    MR_Word analysis__MakeAnalysisReg_15;
#line 740 "analysis.m"
    MR_Word analysis__IsLocal_16;
#line 741 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_compiler_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 0)));
#line 741 "analysis.m"
    MR_Box analysis__V_29_29 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 1));
#line 741 "analysis.m"
    MR_Word analysis__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 3)));
#line 741 "analysis.m"
    MR_Word analysis__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 4)));
#line 741 "analysis.m"
    MR_Word analysis__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 5)));
#line 741 "analysis.m"
    MR_Word analysis__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 6)));
#line 741 "analysis.m"
    MR_Word analysis__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 7)));
#line 741 "analysis.m"
    MR_Word analysis__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 8)));
#line 741 "analysis.m"
    MR_Word analysis__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 9)));
#line 741 "analysis.m"
    MR_Word analysis__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 10)));
#line 748 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_compiler_49;
#line 748 "analysis.m"
    MR_Box analysis__V_38_38;
#line 748 "analysis.m"
    MR_Word analysis__V_39_39;
#line 748 "analysis.m"
    MR_Word analysis__V_40_40;
#line 748 "analysis.m"
    MR_Word analysis__V_41_41;
#line 748 "analysis.m"
    MR_Word analysis__V_42_42;
#line 748 "analysis.m"
    MR_Word analysis__V_43_43;
#line 748 "analysis.m"
    MR_Word analysis__V_44_44;
#line 748 "analysis.m"
    MR_Word analysis__V_45_45;
#line 748 "analysis.m"
    MR_Word analysis__V_46_46;
#line 1225 "analysis.m"
    MR_Word analysis__V_65_65;
#line 1225 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_compiler_75;
#line 1225 "analysis.m"
    MR_Box analysis__V_66_66;
#line 1225 "analysis.m"
    MR_Word analysis__V_67_67;
#line 1225 "analysis.m"
    MR_Word analysis__V_68_68;
#line 1225 "analysis.m"
    MR_Word analysis__V_69_69;
#line 1225 "analysis.m"
    MR_Word analysis__V_70_70;
#line 1225 "analysis.m"
    MR_Word analysis__V_71_71;
#line 1225 "analysis.m"
    MR_Word analysis__V_72_72;
#line 1225 "analysis.m"
    MR_Word analysis__V_73_73;
#line 1225 "analysis.m"
    MR_Word analysis__V_74_74;

#line 742 "analysis.m"
    {
#line 742 "analysis.m"
      analysis__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(analysis__ThisModule_14, analysis__CalleeModuleName_8);
    }
#line 744 "analysis.m"
    if (analysis__succeeded)
#line 743 "analysis.m"
      {
#line 743 "analysis.m"
        {
#line 743 "analysis.m"
          mercury__require__unexpected_3_p_0((MR_String) "analysis", (MR_String) "predicate \140analysis.record_dependency\'/7", (MR_String) "dependency on self");
#line 743 "analysis.m"
          return;
        }
#line 743 "analysis.m"
      }
#line 744 "analysis.m"
    else
#line 745 "analysis.m"
      {
#line 745 "analysis.m"
      }
#line 748 "analysis.m"
    analysis__TypeClassInfo_for_compiler_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 0)));
#line 748 "analysis.m"
    analysis__V_38_38 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 1));
#line 748 "analysis.m"
    analysis__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 2)));
#line 748 "analysis.m"
    analysis__MakeAnalysisReg_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 3)));
#line 748 "analysis.m"
    analysis__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 4)));
#line 748 "analysis.m"
    analysis__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 5)));
#line 748 "analysis.m"
    analysis__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 6)));
#line 748 "analysis.m"
    analysis__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 7)));
#line 748 "analysis.m"
    analysis__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 8)));
#line 748 "analysis.m"
    analysis__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 9)));
#line 748 "analysis.m"
    analysis__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 10)));
#line 1225 "analysis.m"
    analysis__TypeClassInfo_for_compiler_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 0)));
#line 1225 "analysis.m"
    analysis__V_66_66 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 1));
#line 1225 "analysis.m"
    analysis__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 2)));
#line 1225 "analysis.m"
    analysis__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 3)));
#line 1225 "analysis.m"
    analysis__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 4)));
#line 1225 "analysis.m"
    analysis__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 5)));
#line 1225 "analysis.m"
    analysis__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 6)));
#line 1225 "analysis.m"
    analysis__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 7)));
#line 1225 "analysis.m"
    analysis__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 8)));
#line 1225 "analysis.m"
    analysis__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 9)));
#line 1225 "analysis.m"
    analysis__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 10)));
#line 1225 "analysis.m"
    {
#line 1225 "analysis.m"
      analysis__succeeded = mercury__set__contains_2_p_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0, analysis__V_65_65, ((MR_Box) (analysis__CalleeModuleName_8)));
    }
#line 1227 "analysis.m"
    if (analysis__succeeded)
#line 1226 "analysis.m"
      analysis__IsLocal_16 = (MR_Integer) 1;
#line 1227 "analysis.m"
    else
#line 1228 "analysis.m"
      analysis__IsLocal_16 = (MR_Integer) 0;
#line 751 "analysis.m"
    analysis__succeeded = (analysis__MakeAnalysisReg_15 == (MR_Integer) 0);
#line 751 "analysis.m"
    if (analysis__succeeded)
#line 752 "analysis.m"
      analysis__succeeded = (analysis__IsLocal_16 == (MR_Integer) 1);
#line 769 "analysis.m"
    if (analysis__succeeded)
#line 754 "analysis.m"
      {
#line 754 "analysis.m"
        MR_Word analysis__TypeClassInfo_for_call_pattern_50;
#line 754 "analysis.m"
        MR_String analysis__AnalysisName_17;
#line 754 "analysis.m"
        MR_Word analysis__MaybeResult_18;
#line 754 "analysis.m"
        MR_Word analysis__STATE_VARIABLE_Info_26_26;
#line 16818 "analysis.c"
        MR_Box analysis__V_59_59;
#line 16820 "analysis.c"
        MR_Box MR_CALL (* analysis__func_0)(MR_Box) = ((MR_Box MR_CALL (*)(MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), analysis__TypeClassInfo_for_analysis_47, (MR_Integer) 0)), (MR_Integer) 5)));
#line 16822 "analysis.c"
        MR_Box analysis__conv1_AnalysisName_17;

#line 16825 "analysis.c"
        {
#line 16827 "analysis.c"
          analysis__conv1_AnalysisName_17 = analysis__func_0(((MR_Box) analysis__TypeClassInfo_for_analysis_47));
        }
#line 16830 "analysis.c"
        analysis__AnalysisName_17 = ((MR_String) analysis__conv1_AnalysisName_17);
#line 16832 "analysis.c"
        {
#line 16834 "analysis.c"
          mercury__private_builtin__superclass_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_47, (MR_Integer) 1, &analysis__TypeClassInfo_for_call_pattern_50);
        }
#line 755 "analysis.m"
        {
#line 755 "analysis.m"
          analysis__record_dependency_2_7_p_0(analysis__TypeClassInfo_for_call_pattern_50, analysis__ThisModule_14, analysis__AnalysisName_17, analysis__CalleeModuleName_8, analysis__FuncId_9, analysis__Call_11, analysis__STATE_VARIABLE_Info_0_21, &analysis__STATE_VARIABLE_Info_26_26);
        }
#line 760 "analysis.m"
        {
#line 760 "analysis.m"
          analysis__lookup_exactly_matching_result_even_from_invalid_modules_6_p_0(analysis__TypeClassInfo_for_analysis_47, analysis__STATE_VARIABLE_Info_26_26, analysis__CalleeModuleName_8, analysis__FuncId_9, analysis__FuncInfo_10, analysis__Call_11, &analysis__MaybeResult_18);
        }
#line 765 "analysis.m"
        if ((analysis__MaybeResult_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 763 "analysis.m"
          {
#line 763 "analysis.m"
            MR_Word analysis__TypeClassInfo_for_call_pattern_52;

#line 16854 "analysis.c"
            {
#line 16856 "analysis.c"
              mercury__private_builtin__superclass_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_47, (MR_Integer) 1, &analysis__TypeClassInfo_for_call_pattern_52);
            }
#line 764 "analysis.m"
            {
#line 764 "analysis.m"
              analysis__record_request_6_p_0(analysis__TypeClassInfo_for_call_pattern_52, analysis__AnalysisName_17, analysis__CalleeModuleName_8, analysis__FuncId_9, analysis__Call_11, analysis__STATE_VARIABLE_Info_26_26, analysis__STATE_VARIABLE_Info_22);
#line 764 "analysis.m"
              return;
            }
#line 763 "analysis.m"
          }
#line 765 "analysis.m"
        else
#line 766 "analysis.m"
          {
#line 766 "analysis.m"
            MR_Word analysis__TypeInfo_54_54;
#line 766 "analysis.m"
            MR_Word analysis__TypeInfo_56_56;
#line 766 "analysis.m"
            MR_Word analysis__TypeInfo_58_58;
#line 767 "analysis.m"
            MR_Word analysis__V_27_27;
#line 767 "analysis.m"
            MR_Word analysis__V_60_60;

#line 16883 "analysis.c"
            {
#line 16885 "analysis.c"
              mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_47, (MR_Integer) 4, &analysis__TypeInfo_54_54);
            }
#line 16888 "analysis.c"
            {
#line 16890 "analysis.c"
              mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_47, (MR_Integer) 5, &analysis__TypeInfo_56_56);
            }
#line 16893 "analysis.c"
            {
#line 16895 "analysis.c"
              analysis__TypeInfo_58_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 16897 "analysis.c"
              MR_hl_field(MR_mktag(0), analysis__TypeInfo_58_58, 0) = ((MR_Box) (&analysis__analysis__type_ctor_info_analysis_result_2));
#line 16899 "analysis.c"
              MR_hl_field(MR_mktag(0), analysis__TypeInfo_58_58, 1) = ((MR_Box) (analysis__TypeInfo_54_54));
#line 16901 "analysis.c"
              MR_hl_field(MR_mktag(0), analysis__TypeInfo_58_58, 2) = ((MR_Box) (analysis__TypeInfo_56_56));
#line 16903 "analysis.c"
            }
#line 767 "analysis.m"
            {
#line 767 "analysis.m"
              mercury__type_desc__same_type_2_p_0(analysis__TypeInfo_58_58);
            }
#line 767 "analysis.m"
            *analysis__STATE_VARIABLE_Info_22 = analysis__STATE_VARIABLE_Info_26_26;
#line 766 "analysis.m"
          }
#line 754 "analysis.m"
      }
#line 769 "analysis.m"
    else
#line 767 "analysis.m"
      *analysis__STATE_VARIABLE_Info_22 = analysis__STATE_VARIABLE_Info_0_21;
#line 740 "analysis.m"
  }
#line 247 "analysis.m"
}

#line 236 "analysis.m"
void MR_CALL 
analysis__record_result_7_p_0(
#line 236 "analysis.m"
  MR_Word analysis__TypeClassInfo_for_analysis_60,
#line 236 "analysis.m"
  MR_Word analysis__ModuleName_8,
#line 236 "analysis.m"
  MR_Word analysis__FuncId_9,
#line 236 "analysis.m"
  MR_Box analysis__CallPattern_10,
#line 236 "analysis.m"
  MR_Box analysis__AnswerPattern_11,
#line 236 "analysis.m"
  MR_Word analysis__Status_12,
#line 236 "analysis.m"
  MR_Word analysis__STATE_VARIABLE_Info_0_17,
#line 236 "analysis.m"
  MR_Word * analysis__STATE_VARIABLE_Info_18)
#line 236 "analysis.m"
{
#line 622 "analysis.m"
  {
#line 622 "analysis.m"
    MR_bool analysis__succeeded;
#line 622 "analysis.m"
    MR_Word analysis__MakeAnalysisReg_14;
#line 623 "analysis.m"
    MR_Word analysis__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 2)));
#line 623 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_compiler_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 0)));
#line 623 "analysis.m"
    MR_Box analysis__V_23_23 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 1));
#line 623 "analysis.m"
    MR_Word analysis__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 3)));
#line 623 "analysis.m"
    MR_Word analysis__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 4)));
#line 623 "analysis.m"
    MR_Word analysis__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 5)));
#line 623 "analysis.m"
    MR_Word analysis__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 6)));
#line 623 "analysis.m"
    MR_Word analysis__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 7)));
#line 623 "analysis.m"
    MR_Word analysis__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 8)));
#line 623 "analysis.m"
    MR_Word analysis__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 9)));
#line 623 "analysis.m"
    MR_Word analysis__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 10)));
#line 630 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_compiler_62;
#line 630 "analysis.m"
    MR_Box analysis__V_32_32;
#line 630 "analysis.m"
    MR_Word analysis__V_33_33;
#line 630 "analysis.m"
    MR_Word analysis__V_34_34;
#line 630 "analysis.m"
    MR_Word analysis__V_35_35;
#line 630 "analysis.m"
    MR_Word analysis__V_36_36;
#line 630 "analysis.m"
    MR_Word analysis__V_37_37;
#line 630 "analysis.m"
    MR_Word analysis__V_38_38;
#line 630 "analysis.m"
    MR_Word analysis__V_39_39;
#line 630 "analysis.m"
    MR_Word analysis__V_40_40;

#line 623 "analysis.m"
    {
#line 623 "analysis.m"
      analysis__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(analysis__ModuleName_8, analysis__V_65_65);
    }
#line 625 "analysis.m"
    if (analysis__succeeded)
#line 624 "analysis.m"
      {
#line 624 "analysis.m"
      }
#line 625 "analysis.m"
    else
#line 626 "analysis.m"
      {
#line 626 "analysis.m"
        {
#line 626 "analysis.m"
          mercury__require__unexpected_3_p_0((MR_String) "analysis", (MR_String) "predicate \140analysis.record_result\'/7", (MR_String) "recording result for procedure defined in another module");
#line 626 "analysis.m"
          return;
        }
#line 626 "analysis.m"
      }
#line 630 "analysis.m"
    analysis__TypeClassInfo_for_compiler_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 0)));
#line 630 "analysis.m"
    analysis__V_32_32 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 1));
#line 630 "analysis.m"
    analysis__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 2)));
#line 630 "analysis.m"
    analysis__MakeAnalysisReg_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 3)));
#line 630 "analysis.m"
    analysis__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 4)));
#line 630 "analysis.m"
    analysis__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 5)));
#line 630 "analysis.m"
    analysis__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 6)));
#line 630 "analysis.m"
    analysis__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 7)));
#line 630 "analysis.m"
    analysis__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 8)));
#line 630 "analysis.m"
    analysis__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 9)));
#line 630 "analysis.m"
    analysis__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 10)));
#line 637 "analysis.m"
    if ((analysis__MakeAnalysisReg_14 == (MR_Integer) 0))
#line 632 "analysis.m"
      {
#line 632 "analysis.m"
        MR_Word analysis__Map0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 8)));
#line 632 "analysis.m"
        MR_Word analysis__Map_16;
#line 633 "analysis.m"
        MR_Word analysis__TypeClassInfo_for_compiler_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 0)));
#line 633 "analysis.m"
        MR_Box analysis__V_41_41 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 1));
#line 633 "analysis.m"
        MR_Word analysis__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 2)));
#line 633 "analysis.m"
        MR_Word analysis__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 3)));
#line 633 "analysis.m"
        MR_Word analysis__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 4)));
#line 633 "analysis.m"
        MR_Word analysis__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 5)));
#line 633 "analysis.m"
        MR_Word analysis__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 6)));
#line 633 "analysis.m"
        MR_Word analysis__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 7)));
#line 633 "analysis.m"
        MR_Word analysis__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 9)));
#line 633 "analysis.m"
        MR_Word analysis__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 10)));
#line 636 "analysis.m"
        MR_Word analysis__TypeClassInfo_for_compiler_64;
#line 636 "analysis.m"
        MR_Box analysis__V_50_50;
#line 636 "analysis.m"
        MR_Word analysis__V_51_51;
#line 636 "analysis.m"
        MR_Word analysis__V_52_52;
#line 636 "analysis.m"
        MR_Word analysis__V_53_53;
#line 636 "analysis.m"
        MR_Word analysis__V_54_54;
#line 636 "analysis.m"
        MR_Word analysis__V_55_55;
#line 636 "analysis.m"
        MR_Word analysis__V_56_56;
#line 636 "analysis.m"
        MR_Word analysis__V_58_58;
#line 636 "analysis.m"
        MR_Word analysis__V_59_59;
#line 636 "analysis.m"
        MR_Word analysis__V_57_57;

#line 634 "analysis.m"
        {
#line 634 "analysis.m"
          analysis__record_result_in_analysis_map_6_p_0(analysis__TypeClassInfo_for_analysis_60, analysis__FuncId_9, analysis__CallPattern_10, analysis__AnswerPattern_11, analysis__Status_12, analysis__Map0_15, &analysis__Map_16);
        }
#line 636 "analysis.m"
        analysis__TypeClassInfo_for_compiler_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 0)));
#line 636 "analysis.m"
        analysis__V_50_50 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 1));
#line 636 "analysis.m"
        analysis__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 2)));
#line 636 "analysis.m"
        analysis__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 3)));
#line 636 "analysis.m"
        analysis__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 4)));
#line 636 "analysis.m"
        analysis__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 5)));
#line 636 "analysis.m"
        analysis__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 6)));
#line 636 "analysis.m"
        analysis__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 7)));
#line 636 "analysis.m"
        analysis__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 8)));
#line 636 "analysis.m"
        analysis__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 9)));
#line 636 "analysis.m"
        analysis__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 10)));
#line 636 "analysis.m"
        {
#line 636 "analysis.m"
          MR_Word base;
#line 636 "analysis.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 636 "analysis.m"
          *analysis__STATE_VARIABLE_Info_18 = base;
#line 636 "analysis.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (analysis__TypeClassInfo_for_compiler_64));
#line 636 "analysis.m"
          MR_hl_field(MR_mktag(0), base, 1) = analysis__V_50_50;
#line 636 "analysis.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (analysis__V_51_51));
#line 636 "analysis.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (analysis__V_52_52));
#line 636 "analysis.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (analysis__V_53_53));
#line 636 "analysis.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (analysis__V_54_54));
#line 636 "analysis.m"
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (analysis__V_55_55));
#line 636 "analysis.m"
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (analysis__V_56_56));
#line 636 "analysis.m"
          MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (analysis__Map_16));
#line 636 "analysis.m"
          MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (analysis__V_58_58));
#line 636 "analysis.m"
          MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (analysis__V_59_59));
#line 636 "analysis.m"
        }
#line 632 "analysis.m"
      }
#line 637 "analysis.m"
    else
#line 638 "analysis.m"
      *analysis__STATE_VARIABLE_Info_18 = analysis__STATE_VARIABLE_Info_0_17;
#line 622 "analysis.m"
  }
#line 236 "analysis.m"
}

#line 576 "analysis.m"
static void MR_CALL 
analysis__lookup_best_result_6_p_0_1(
#line 576 "analysis.m"
  MR_Box analysis__closure_arg,
#line 576 "analysis.m"
  MR_Box analysis__wrapper_arg_1,
#line 576 "analysis.m"
  MR_Box analysis__wrapper_arg_2,
#line 576 "analysis.m"
  MR_Box * analysis__wrapper_arg_3)
#line 576 "analysis.m"
{
#line 576 "analysis.m"
  {
#line 576 "analysis.m"
    MR_Box analysis__closure = analysis__closure_arg;
#line 576 "analysis.m"
    MR_Word analysis__conv0_Best_8;

#line 576 "analysis.m"
    {
#line 576 "analysis.m"
      analysis__more_precise_answer_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 3))), (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 4)), ((MR_Word) analysis__wrapper_arg_1), ((MR_Word) analysis__wrapper_arg_2), &analysis__conv0_Best_8);
    }
#line 576 "analysis.m"
    *analysis__wrapper_arg_3 = ((MR_Box) (analysis__conv0_Best_8));
#line 576 "analysis.m"
  }
#line 576 "analysis.m"
}

#line 228 "analysis.m"
void MR_CALL 
analysis__lookup_best_result_6_p_0(
#line 228 "analysis.m"
  MR_Word analysis__TypeClassInfo_for_analysis_35,
#line 228 "analysis.m"
  MR_Word analysis__Info_7,
#line 228 "analysis.m"
  MR_Word analysis__ModuleName_8,
#line 228 "analysis.m"
  MR_Word analysis__FuncId_9,
#line 228 "analysis.m"
  MR_Box analysis__FuncInfo_10,
#line 228 "analysis.m"
  MR_Box analysis__Call_11,
#line 228 "analysis.m"
  MR_Word * analysis__MaybeBestResult_12)
#line 228 "analysis.m"
{
#line 559 "analysis.m"
  {
#line 559 "analysis.m"
    MR_bool analysis__succeeded;
#line 559 "analysis.m"
    MR_Word analysis__MatchingResults_14;
#line 560 "analysis.m"
    MR_Word analysis__Debug_51;

#line 1381 "analysis.m"
{
#define MR_PROC_LABEL analysis__lookup_best_result_6_p_0


		{
#line 1381 "analysis.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&analysis__mutable_variable_debug_analysis_lock,
                "analysis__mutable_variable_debug_analysis_lock");
#endif

#line 17234 "analysis.c"

		;}
#undef MR_PROC_LABEL
#line 1381 "analysis.m"
}
#line 1381 "analysis.m"
{
#define MR_PROC_LABEL analysis__lookup_best_result_6_p_0

	MR_Word X;

		{
#line 1381 "analysis.m"
X = analysis__mutable_variable_debug_analysis;

#line 17250 "analysis.c"

		;}
#undef MR_PROC_LABEL
	 analysis__Debug_51  = X;
#line 1381 "analysis.m"
}
#line 1381 "analysis.m"
{
#define MR_PROC_LABEL analysis__lookup_best_result_6_p_0


		{
#line 1381 "analysis.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&analysis__mutable_variable_debug_analysis_lock,
                "analysis__mutable_variable_debug_analysis_lock");
#endif

#line 17269 "analysis.c"

		;}
#undef MR_PROC_LABEL
#line 1381 "analysis.m"
}
#line 1394 "analysis.m"
    if ((analysis__Debug_51 == (MR_Integer) 0))
#line 1395 "analysis.m"
      {
#line 1395 "analysis.m"
      }
#line 1394 "analysis.m"
    else
#line 1393 "analysis.m"
      {
#line 1393 "analysis.m"
        analysis__IntroducedFrom__pred__lookup_best_result__561__1_4_p_0(analysis__ModuleName_8, analysis__FuncId_9);
      }
#line 569 "analysis.m"
    {
#line 569 "analysis.m"
      analysis__lookup_matching_results_6_p_0(analysis__TypeClassInfo_for_analysis_35, analysis__Info_7, analysis__ModuleName_8, analysis__FuncId_9, analysis__FuncInfo_10, analysis__Call_11, &analysis__MatchingResults_14);
    }
#line 574 "analysis.m"
    if ((analysis__MatchingResults_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 573 "analysis.m"
      *analysis__MaybeBestResult_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 574 "analysis.m"
    else
#line 575 "analysis.m"
      {
#line 575 "analysis.m"
        MR_Word analysis__TypeInfo_42_42;
#line 575 "analysis.m"
        MR_Word analysis__TypeInfo_44_44;
#line 575 "analysis.m"
        MR_Word analysis__TypeInfo_46_46;
#line 575 "analysis.m"
        MR_Word analysis__Result_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), analysis__MatchingResults_14, (MR_Integer) 0)));
#line 575 "analysis.m"
        MR_Word analysis__Results_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), analysis__MatchingResults_14, (MR_Integer) 1)));
#line 575 "analysis.m"
        MR_Word analysis__BestResult_17;
#line 575 "analysis.m"
        MR_Word analysis__V_32_32;
#line 576 "analysis.m"
        MR_Box analysis__conv1_BestResult_17;

#line 576 "analysis.m"
        {
#line 576 "analysis.m"
          analysis__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 576 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__V_32_32, 0) = ((MR_Box) (&analysis_scalar_common_7[0]));
#line 576 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__V_32_32, 1) = ((MR_Box) (analysis__lookup_best_result_6_p_0_1));
#line 576 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__V_32_32, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 576 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__V_32_32, 3) = ((MR_Box) (analysis__TypeClassInfo_for_analysis_35));
#line 576 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__V_32_32, 4) = analysis__FuncInfo_10;
#line 576 "analysis.m"
        }
#line 17334 "analysis.c"
        {
#line 17336 "analysis.c"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_35, (MR_Integer) 4, &analysis__TypeInfo_42_42);
        }
#line 17339 "analysis.c"
        {
#line 17341 "analysis.c"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_35, (MR_Integer) 5, &analysis__TypeInfo_44_44);
        }
#line 17344 "analysis.c"
        {
#line 17346 "analysis.c"
          analysis__TypeInfo_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 17348 "analysis.c"
          MR_hl_field(MR_mktag(0), analysis__TypeInfo_46_46, 0) = ((MR_Box) (&analysis__analysis__type_ctor_info_analysis_result_2));
#line 17350 "analysis.c"
          MR_hl_field(MR_mktag(0), analysis__TypeInfo_46_46, 1) = ((MR_Box) (analysis__TypeInfo_42_42));
#line 17352 "analysis.c"
          MR_hl_field(MR_mktag(0), analysis__TypeInfo_46_46, 2) = ((MR_Box) (analysis__TypeInfo_44_44));
#line 17354 "analysis.c"
        }
#line 576 "analysis.m"
        {
#line 576 "analysis.m"
          mercury__list__foldl_4_p_0(analysis__TypeInfo_46_46, analysis__TypeInfo_46_46, (MR_Word) analysis__V_32_32, analysis__Results_16, ((MR_Box) (analysis__Result_15)), &analysis__conv1_BestResult_17);
        }
#line 576 "analysis.m"
        analysis__BestResult_17 = ((MR_Word) analysis__conv1_BestResult_17);
#line 577 "analysis.m"
        {
#line 577 "analysis.m"
          MR_Word base;
#line 577 "analysis.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 577 "analysis.m"
          *analysis__MaybeBestResult_12 = base;
#line 577 "analysis.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (analysis__BestResult_17));
#line 577 "analysis.m"
        }
#line 575 "analysis.m"
      }
#line 559 "analysis.m"
  }
#line 228 "analysis.m"
}

#line 550 "analysis.m"
static MR_bool MR_CALL 
analysis__lookup_matching_results_6_p_0_1(
#line 550 "analysis.m"
  MR_Box analysis__closure_arg,
#line 550 "analysis.m"
  MR_Box analysis__wrapper_arg_1)
#line 550 "analysis.m"
{
#line 550 "analysis.m"
  {
#line 550 "analysis.m"
    MR_bool analysis__succeeded;
#line 550 "analysis.m"
    MR_Box analysis__closure = analysis__closure_arg;

#line 550 "analysis.m"
    {
#line 550 "analysis.m"
      return analysis__succeeded = analysis__IntroducedFrom__pred__lookup_matching_results__550__1_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 3))), (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 4)), (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 5)), ((MR_Word) analysis__wrapper_arg_1));
    }
#line 550 "analysis.m"
    return analysis__succeeded;
#line 550 "analysis.m"
  }
#line 550 "analysis.m"
}

#line 213 "analysis.m"
void MR_CALL 
analysis__lookup_matching_results_6_p_0(
#line 213 "analysis.m"
  MR_Word analysis__TypeClassInfo_for_analysis_21,
#line 213 "analysis.m"
  MR_Word analysis__Info_7,
#line 213 "analysis.m"
  MR_Word analysis__ModuleName_8,
#line 213 "analysis.m"
  MR_Word analysis__FuncId_9,
#line 213 "analysis.m"
  MR_Box analysis__FuncInfo_10,
#line 213 "analysis.m"
  MR_Box analysis__Call_11,
#line 213 "analysis.m"
  MR_Word * analysis__ResultList_12)
#line 213 "analysis.m"
{
#line 548 "analysis.m"
  {
#line 548 "analysis.m"
    MR_bool analysis__succeeded;
#line 548 "analysis.m"
    MR_Word analysis__TypeInfo_23_23;
#line 548 "analysis.m"
    MR_Word analysis__TypeInfo_25_25;
#line 548 "analysis.m"
    MR_Word analysis__TypeInfo_27_27;
#line 548 "analysis.m"
    MR_Word analysis__AllResultsList_13;
#line 548 "analysis.m"
    MR_Word analysis__V_16_16;

#line 491 "analysis.m"
    {
#line 491 "analysis.m"
      analysis__lookup_results_1_5_p_0(analysis__TypeClassInfo_for_analysis_21, analysis__Info_7, analysis__ModuleName_8, analysis__FuncId_9, (MR_Integer) 0, &analysis__AllResultsList_13);
    }
#line 17449 "analysis.c"
    {
#line 17451 "analysis.c"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_21, (MR_Integer) 4, &analysis__TypeInfo_23_23);
    }
#line 17454 "analysis.c"
    {
#line 17456 "analysis.c"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_21, (MR_Integer) 5, &analysis__TypeInfo_25_25);
    }
#line 17459 "analysis.c"
    {
#line 17461 "analysis.c"
      analysis__TypeInfo_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 17463 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_27_27, 0) = ((MR_Box) (&analysis__analysis__type_ctor_info_analysis_result_2));
#line 17465 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_27_27, 1) = ((MR_Box) (analysis__TypeInfo_23_23));
#line 17467 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_27_27, 2) = ((MR_Box) (analysis__TypeInfo_25_25));
#line 17469 "analysis.c"
    }
#line 550 "analysis.m"
    {
#line 550 "analysis.m"
      analysis__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 550 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_16_16, 0) = ((MR_Box) (&analysis_scalar_common_6[0]));
#line 550 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_16_16, 1) = ((MR_Box) (analysis__lookup_matching_results_6_p_0_1));
#line 550 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_16_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 550 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_16_16, 3) = ((MR_Box) (analysis__TypeClassInfo_for_analysis_21));
#line 550 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_16_16, 4) = analysis__FuncInfo_10;
#line 550 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_16_16, 5) = analysis__Call_11;
#line 550 "analysis.m"
    }
#line 550 "analysis.m"
    {
#line 550 "analysis.m"
      *analysis__ResultList_12 = mercury__list__filter_2_f_0(analysis__TypeInfo_27_27, analysis__V_16_16, analysis__AllResultsList_13);
    }
#line 548 "analysis.m"
  }
#line 213 "analysis.m"
}

#line 202 "analysis.m"
void MR_CALL 
analysis__lookup_results_4_p_0(
#line 202 "analysis.m"
  MR_Word analysis__TypeClassInfo_for_analysis_10,
#line 202 "analysis.m"
  MR_Word analysis__Info_5,
#line 202 "analysis.m"
  MR_Word analysis__ModuleName_6,
#line 202 "analysis.m"
  MR_Word analysis__FuncId_7,
#line 202 "analysis.m"
  MR_Word * analysis__ResultList_8)
#line 202 "analysis.m"
{
#line 489 "analysis.m"
  {
#line 489 "analysis.m"
    MR_bool analysis__succeeded;

#line 491 "analysis.m"
    {
#line 491 "analysis.m"
      analysis__lookup_results_1_5_p_0(analysis__TypeClassInfo_for_analysis_10, analysis__Info_5, analysis__ModuleName_6, analysis__FuncId_7, (MR_Integer) 0, analysis__ResultList_8);
#line 491 "analysis.m"
      return;
    }
#line 489 "analysis.m"
  }
#line 202 "analysis.m"
}

#line 480 "analysis.m"
static MR_Box MR_CALL 
analysis__lookup_existing_call_patterns_5_p_0_1(
#line 480 "analysis.m"
  MR_Box analysis__closure_arg,
#line 480 "analysis.m"
  MR_Box analysis__wrapper_arg_1)
#line 480 "analysis.m"
{
#line 480 "analysis.m"
  {
#line 480 "analysis.m"
    MR_Box analysis__wrapper_arg_2;
#line 480 "analysis.m"
    MR_Box analysis__closure = analysis__closure_arg;

#line 480 "analysis.m"
    {
#line 480 "analysis.m"
      analysis__wrapper_arg_2 = analysis__IntroducedFrom__func__lookup_existing_call_patterns__480__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 3))), ((MR_Word) analysis__wrapper_arg_1));
    }
#line 480 "analysis.m"
    return analysis__wrapper_arg_2;
#line 480 "analysis.m"
  }
#line 480 "analysis.m"
}

#line 192 "analysis.m"
void MR_CALL 
analysis__lookup_existing_call_patterns_5_p_0(
#line 192 "analysis.m"
  MR_Word analysis__TypeClassInfo_for_call_pattern_46,
#line 192 "analysis.m"
  MR_Word analysis__Info_6,
#line 192 "analysis.m"
  MR_String analysis__AnalysisName_7,
#line 192 "analysis.m"
  MR_Word analysis__ModuleName_8,
#line 192 "analysis.m"
  MR_Word analysis__FuncId_9,
#line 192 "analysis.m"
  MR_Word * analysis__Calls_10)
#line 192 "analysis.m"
{
#line 469 "analysis.m"
  {
#line 469 "analysis.m"
    MR_bool analysis__succeeded;
#line 469 "analysis.m"
    MR_Word analysis__Map_11;
#line 470 "analysis.m"
    MR_Word analysis__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 2)));
#line 470 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_compiler_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 0)));
#line 470 "analysis.m"
    MR_Box analysis__V_28_28 = (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 1));
#line 470 "analysis.m"
    MR_Word analysis__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 3)));
#line 470 "analysis.m"
    MR_Word analysis__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 4)));
#line 470 "analysis.m"
    MR_Word analysis__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 5)));
#line 470 "analysis.m"
    MR_Word analysis__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 6)));
#line 470 "analysis.m"
    MR_Word analysis__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 7)));
#line 470 "analysis.m"
    MR_Word analysis__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 8)));
#line 470 "analysis.m"
    MR_Word analysis__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 9)));
#line 470 "analysis.m"
    MR_Word analysis__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 10)));
#line 475 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_compiler_48;
#line 475 "analysis.m"
    MR_Box analysis__V_37_37;
#line 475 "analysis.m"
    MR_Word analysis__V_38_38;
#line 475 "analysis.m"
    MR_Word analysis__V_39_39;
#line 475 "analysis.m"
    MR_Word analysis__V_40_40;
#line 475 "analysis.m"
    MR_Word analysis__V_41_41;
#line 475 "analysis.m"
    MR_Word analysis__V_42_42;
#line 475 "analysis.m"
    MR_Word analysis__V_43_43;
#line 475 "analysis.m"
    MR_Word analysis__V_44_44;
#line 475 "analysis.m"
    MR_Word analysis__V_45_45;
#line 485 "analysis.m"
    MR_Word analysis__Results_13;
#line 477 "analysis.m"
    MR_Word analysis__TypeCtorInfo_51_51;
#line 477 "analysis.m"
    MR_Word analysis__TypeInfo_52_52;
#line 477 "analysis.m"
    MR_Word analysis__TypeCtorInfo_53_53;
#line 477 "analysis.m"
    MR_Word analysis__TypeInfo_54_54;
#line 477 "analysis.m"
    MR_Word analysis__ModuleResults_12;
#line 477 "analysis.m"
    MR_Word analysis__V_22_22;
#line 477 "analysis.m"
    MR_Box analysis__conv0_ModuleResults_12;
#line 478 "analysis.m"
    MR_Box analysis__conv1_V_22_22;
#line 478 "analysis.m"
    MR_Box analysis__conv2_Results_13;

#line 470 "analysis.m"
    {
#line 470 "analysis.m"
      analysis__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(analysis__ModuleName_8, analysis__V_62_62);
    }
#line 472 "analysis.m"
    if (analysis__succeeded)
#line 471 "analysis.m"
      {
#line 471 "analysis.m"
      }
#line 472 "analysis.m"
    else
#line 473 "analysis.m"
      {
#line 473 "analysis.m"
        {
#line 473 "analysis.m"
          mercury__require__unexpected_3_p_0((MR_String) "analysis", (MR_String) "predicate \140analysis.lookup_existing_call_patterns\'/5", (MR_String) "not this_module");
#line 473 "analysis.m"
          return;
        }
#line 473 "analysis.m"
      }
#line 475 "analysis.m"
    analysis__TypeClassInfo_for_compiler_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 0)));
#line 475 "analysis.m"
    analysis__V_37_37 = (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 1));
#line 475 "analysis.m"
    analysis__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 2)));
#line 475 "analysis.m"
    analysis__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 3)));
#line 475 "analysis.m"
    analysis__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 4)));
#line 475 "analysis.m"
    analysis__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 5)));
#line 475 "analysis.m"
    analysis__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 6)));
#line 475 "analysis.m"
    analysis__Map_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 7)));
#line 475 "analysis.m"
    analysis__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 8)));
#line 475 "analysis.m"
    analysis__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 9)));
#line 475 "analysis.m"
    analysis__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 10)));
#line 477 "analysis.m"
    {
#line 477 "analysis.m"
      analysis__succeeded = mercury__map__elem_2_f_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0, (MR_Word) &analysis_scalar_common_2[3], ((MR_Box) (analysis__ModuleName_8)), analysis__Map_11, &analysis__conv0_ModuleResults_12);
    }
#line 477 "analysis.m"
    if (analysis__succeeded)
#line 477 "analysis.m"
      {
#line 477 "analysis.m"
        analysis__ModuleResults_12 = ((MR_Word) analysis__conv0_ModuleResults_12);
#line 477 "analysis.m"
        analysis__succeeded = MR_TRUE;
#line 477 "analysis.m"
      }
#line 477 "analysis.m"
    if (analysis__succeeded)
#line 477 "analysis.m"
      {
#line 17710 "analysis.c"
        analysis__TypeCtorInfo_51_51 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 17712 "analysis.c"
        analysis__TypeInfo_52_52 = (MR_Word) &analysis_scalar_common_2[2];
#line 478 "analysis.m"
        {
#line 478 "analysis.m"
          analysis__succeeded = mercury__map__elem_2_f_0(analysis__TypeCtorInfo_51_51, analysis__TypeInfo_52_52, ((MR_Box) (analysis__AnalysisName_7)), analysis__ModuleResults_12, &analysis__conv1_V_22_22);
        }
#line 478 "analysis.m"
        if (analysis__succeeded)
#line 478 "analysis.m"
          {
#line 478 "analysis.m"
            analysis__V_22_22 = ((MR_Word) analysis__conv1_V_22_22);
#line 478 "analysis.m"
            analysis__succeeded = MR_TRUE;
#line 478 "analysis.m"
          }
#line 477 "analysis.m"
        if (analysis__succeeded)
#line 477 "analysis.m"
          {
#line 17733 "analysis.c"
            analysis__TypeCtorInfo_53_53 = (MR_Word) &analysis__analysis__type_ctor_info_func_id_0;
#line 17735 "analysis.c"
            analysis__TypeInfo_54_54 = (MR_Word) &analysis_scalar_common_1[1];
#line 478 "analysis.m"
            {
#line 478 "analysis.m"
              analysis__succeeded = mercury__map__elem_2_f_0(analysis__TypeCtorInfo_53_53, analysis__TypeInfo_54_54, ((MR_Box) (analysis__FuncId_9)), analysis__V_22_22, &analysis__conv2_Results_13);
            }
#line 478 "analysis.m"
            if (analysis__succeeded)
#line 478 "analysis.m"
              {
#line 478 "analysis.m"
                analysis__Results_13 = ((MR_Word) analysis__conv2_Results_13);
#line 478 "analysis.m"
                analysis__succeeded = MR_TRUE;
#line 478 "analysis.m"
              }
#line 477 "analysis.m"
          }
#line 477 "analysis.m"
      }
#line 485 "analysis.m"
    if (analysis__succeeded)
#line 480 "analysis.m"
      {
#line 480 "analysis.m"
        MR_Word analysis__TypeInfo_57_57;
#line 480 "analysis.m"
        MR_Word analysis__V_23_23;

#line 17765 "analysis.c"
        {
#line 17767 "analysis.c"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_call_pattern_46, (MR_Integer) 4, &analysis__TypeInfo_57_57);
        }
#line 480 "analysis.m"
        {
#line 480 "analysis.m"
          analysis__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 480 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__V_23_23, 0) = ((MR_Box) (&analysis_scalar_common_4[0]));
#line 480 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__V_23_23, 1) = ((MR_Box) (analysis__lookup_existing_call_patterns_5_p_0_1));
#line 480 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__V_23_23, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 480 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__V_23_23, 3) = ((MR_Box) (analysis__TypeClassInfo_for_call_pattern_46));
#line 480 "analysis.m"
        }
#line 480 "analysis.m"
        {
#line 480 "analysis.m"
          *analysis__Calls_10 = mercury__list__map_2_f_0((MR_Word) &analysis__analysis__type_ctor_info_some_analysis_result_0, analysis__TypeInfo_57_57, analysis__V_23_23, analysis__Results_13);
        }
#line 480 "analysis.m"
      }
#line 485 "analysis.m"
    else
#line 486 "analysis.m"
      *analysis__Calls_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 469 "analysis.m"
  }
#line 192 "analysis.m"
}

#line 180 "analysis.m"
MR_Word MR_CALL 
analysis__init_analysis_info_3_f_0(
#line 180 "analysis.m"
  MR_Word analysis__TypeClassInfo_for_compiler_17,
#line 180 "analysis.m"
  MR_Box analysis__Compiler_5,
#line 180 "analysis.m"
  MR_Word analysis__ThisModuleName_6,
#line 180 "analysis.m"
  MR_Word analysis__MakeAnalysisRegBool_7)
#line 180 "analysis.m"
{
#line 456 "analysis.m"
  {
#line 456 "analysis.m"
    MR_bool analysis__succeeded;
#line 456 "analysis.m"
    MR_Word analysis__Info_8;
#line 456 "analysis.m"
    MR_Word analysis__TypeCtorInfo_18_18;
#line 456 "analysis.m"
    MR_Word analysis__TypeInfo_24_24;
#line 456 "analysis.m"
    MR_Word analysis__MakeAnalysisReg_9;
#line 456 "analysis.m"
    MR_Word analysis__V_10_10;
#line 456 "analysis.m"
    MR_Word analysis__V_11_11;
#line 456 "analysis.m"
    MR_Word analysis__V_12_12;
#line 456 "analysis.m"
    MR_Word analysis__V_13_13;
#line 456 "analysis.m"
    MR_Word analysis__V_14_14;
#line 456 "analysis.m"
    MR_Word analysis__V_15_15;
#line 456 "analysis.m"
    MR_Word analysis__V_16_16;

#line 460 "analysis.m"
    if ((analysis__MakeAnalysisRegBool_7 == (MR_Integer) 0))
#line 462 "analysis.m"
      analysis__MakeAnalysisReg_9 = (MR_Integer) 1;
#line 460 "analysis.m"
    else
#line 459 "analysis.m"
      analysis__MakeAnalysisReg_9 = (MR_Integer) 0;
#line 17848 "analysis.c"
    analysis__TypeCtorInfo_18_18 = (MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0;
#line 464 "analysis.m"
    {
#line 464 "analysis.m"
      analysis__V_10_10 = mercury__set__init_0_f_0(analysis__TypeCtorInfo_18_18);
    }
#line 464 "analysis.m"
    {
#line 464 "analysis.m"
      analysis__V_11_11 = mercury__map__init_0_f_0(analysis__TypeCtorInfo_18_18, (MR_Word) &analysis_scalar_common_2[1]);
    }
#line 464 "analysis.m"
    {
#line 464 "analysis.m"
      analysis__V_12_12 = mercury__map__init_0_f_0(analysis__TypeCtorInfo_18_18, (MR_Word) &analysis__analysis__type_ctor_info_analysis_status_0);
    }
#line 464 "analysis.m"
    {
#line 464 "analysis.m"
      analysis__V_13_13 = mercury__map__init_0_f_0(analysis__TypeCtorInfo_18_18, (MR_Word) &analysis_scalar_common_2[3]);
    }
#line 464 "analysis.m"
    {
#line 464 "analysis.m"
      analysis__V_14_14 = mercury__map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &analysis_scalar_common_2[2]);
    }
#line 17875 "analysis.c"
    analysis__TypeInfo_24_24 = (MR_Word) &analysis_scalar_common_2[5];
#line 464 "analysis.m"
    {
#line 464 "analysis.m"
      analysis__V_15_15 = mercury__map__init_0_f_0(analysis__TypeCtorInfo_18_18, analysis__TypeInfo_24_24);
    }
#line 464 "analysis.m"
    {
#line 464 "analysis.m"
      analysis__V_16_16 = mercury__map__init_0_f_0(analysis__TypeCtorInfo_18_18, analysis__TypeInfo_24_24);
    }
#line 464 "analysis.m"
    {
#line 464 "analysis.m"
      analysis__Info_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 464 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__Info_8, 0) = ((MR_Box) (analysis__TypeClassInfo_for_compiler_17));
#line 464 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__Info_8, 1) = analysis__Compiler_5;
#line 464 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__Info_8, 2) = ((MR_Box) (analysis__ThisModuleName_6));
#line 464 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__Info_8, 3) = ((MR_Box) (analysis__MakeAnalysisReg_9));
#line 464 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__Info_8, 4) = ((MR_Box) (analysis__V_10_10));
#line 464 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__Info_8, 5) = ((MR_Box) (analysis__V_11_11));
#line 464 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__Info_8, 6) = ((MR_Box) (analysis__V_12_12));
#line 464 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__Info_8, 7) = ((MR_Box) (analysis__V_13_13));
#line 464 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__Info_8, 8) = ((MR_Box) (analysis__V_14_14));
#line 464 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__Info_8, 9) = ((MR_Box) (analysis__V_15_15));
#line 464 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__Info_8, 10) = ((MR_Box) (analysis__V_16_16));
#line 464 "analysis.m"
    }
#line 456 "analysis.m"
    return analysis__Info_8;
#line 456 "analysis.m"
  }
#line 180 "analysis.m"
}

#line 166 "analysis.m"
MR_Word MR_CALL 
analysis__lub_2_f_0(
#line 166 "analysis.m"
  MR_Word analysis__StatusA_4,
#line 166 "analysis.m"
  MR_Word analysis__StatusB_5)
#line 166 "analysis.m"
{
#line 1342 "analysis.m"
  {
#line 1342 "analysis.m"
    MR_bool analysis__succeeded;
#line 1342 "analysis.m"
    MR_Word analysis__Status_6;
#line 1342 "analysis.m"
    MR_Word analysis__Cmp_7;
#line 1342 "analysis.m"
    MR_Integer analysis__V_9_9 = (MR_Integer) analysis__StatusA_4;
#line 1342 "analysis.m"
    MR_Integer analysis__V_10_10 = (MR_Integer) analysis__StatusB_5;

#line 1343 "analysis.m"
    {
#line 1343 "analysis.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(&analysis__Cmp_7, analysis__V_9_9, analysis__V_10_10);
    }
#line 1347 "analysis.m"
    if ((analysis__Cmp_7 == (MR_Integer) 1))
#line 1349 "analysis.m"
      analysis__Status_6 = analysis__StatusA_4;
#line 1347 "analysis.m"
    else
#line 1347 "analysis.m"
      if ((analysis__Cmp_7 == (MR_Integer) 0))
#line 1346 "analysis.m"
        analysis__Status_6 = analysis__StatusA_4;
#line 1347 "analysis.m"
      else
#line 1352 "analysis.m"
        analysis__Status_6 = analysis__StatusB_5;
#line 1342 "analysis.m"
    return analysis__Status_6;
#line 1342 "analysis.m"
  }
#line 166 "analysis.m"
}

#line 141 "analysis.m"
MR_bool MR_CALL 
analysis__from_term_2_p_0(
#line 141 "analysis.m"
  MR_Word analysis__TypeClassInfo_for_to_term_3,
#line 141 "analysis.m"
  MR_Word analysis__HeadVar__1_1,
#line 141 "analysis.m"
  MR_Box * analysis__HeadVar__2_2)
#line 141 "analysis.m"
{
#line 17981 "analysis.c"
  {
#line 17983 "analysis.c"
    MR_bool analysis__succeeded;
#line 17985 "analysis.c"
    MR_bool MR_CALL (* analysis__func_0)(MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), analysis__TypeClassInfo_for_to_term_3, (MR_Integer) 0)), (MR_Integer) 6)));

#line 17988 "analysis.c"
    {
#line 17990 "analysis.c"
      return analysis__succeeded = analysis__func_0(((MR_Box) analysis__TypeClassInfo_for_to_term_3), ((MR_Box) (analysis__HeadVar__1_1)), analysis__HeadVar__2_2);
    }
#line 17993 "analysis.c"
    return analysis__succeeded;
#line 17995 "analysis.c"
  }
#line 141 "analysis.m"
}

#line 140 "analysis.m"
MR_Word MR_CALL 
analysis__to_term_1_f_0(
#line 140 "analysis.m"
  MR_Word analysis__TypeClassInfo_for_to_term_3,
#line 140 "analysis.m"
  MR_Box analysis__HeadVar__1_1)
#line 140 "analysis.m"
{
#line 18009 "analysis.c"
  {
#line 18011 "analysis.c"
    MR_bool analysis__succeeded;
#line 18013 "analysis.c"
    MR_Word analysis__HeadVar__2_2;
#line 18015 "analysis.c"
    MR_Box MR_CALL (* analysis__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), analysis__TypeClassInfo_for_to_term_3, (MR_Integer) 0)), (MR_Integer) 5)));
#line 18017 "analysis.c"
    MR_Box analysis__conv1_HeadVar__2_2;

#line 18020 "analysis.c"
    {
#line 18022 "analysis.c"
      analysis__conv1_HeadVar__2_2 = analysis__func_0(((MR_Box) analysis__TypeClassInfo_for_to_term_3), analysis__HeadVar__1_1);
    }
#line 18025 "analysis.c"
    analysis__HeadVar__2_2 = ((MR_Word) analysis__conv1_HeadVar__2_2);
#line 18027 "analysis.c"
    return analysis__HeadVar__2_2;
#line 18029 "analysis.c"
  }
#line 140 "analysis.m"
}

#line 136 "analysis.m"
MR_bool MR_CALL 
analysis__equivalent_3_p_0(
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
#line 18047 "analysis.c"
  {
#line 18049 "analysis.c"
    MR_bool analysis__succeeded;
#line 18051 "analysis.c"
    MR_bool MR_CALL (* analysis__func_0)(MR_Box, MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), analysis__TypeClassInfo_for_partial_order_4, (MR_Integer) 0)), (MR_Integer) 6)));

#line 18054 "analysis.c"
    {
#line 18056 "analysis.c"
      return analysis__succeeded = analysis__func_0(((MR_Box) analysis__TypeClassInfo_for_partial_order_4), analysis__HeadVar__1_1, analysis__HeadVar__2_2, analysis__HeadVar__3_3);
    }
#line 18059 "analysis.c"
    return analysis__succeeded;
#line 18061 "analysis.c"
  }
#line 136 "analysis.m"
}

#line 135 "analysis.m"
MR_bool MR_CALL 
analysis__more_precise_than_3_p_0(
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
#line 18079 "analysis.c"
  {
#line 18081 "analysis.c"
    MR_bool analysis__succeeded;
#line 18083 "analysis.c"
    MR_bool MR_CALL (* analysis__func_0)(MR_Box, MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), analysis__TypeClassInfo_for_partial_order_4, (MR_Integer) 0)), (MR_Integer) 5)));

#line 18086 "analysis.c"
    {
#line 18088 "analysis.c"
      return analysis__succeeded = analysis__func_0(((MR_Box) analysis__TypeClassInfo_for_partial_order_4), analysis__HeadVar__1_1, analysis__HeadVar__2_2, analysis__HeadVar__3_3);
    }
#line 18091 "analysis.c"
    return analysis__succeeded;
#line 18093 "analysis.c"
  }
#line 135 "analysis.m"
}

#line 101 "analysis.m"
void MR_CALL 
analysis__get_func_info_6_p_0(
#line 101 "analysis.m"
  MR_Word analysis__TypeClassInfo_for_analysis_7,
#line 101 "analysis.m"
  MR_Word analysis__HeadVar__1_1,
#line 101 "analysis.m"
  MR_Word analysis__HeadVar__2_2,
#line 101 "analysis.m"
  MR_Word analysis__HeadVar__3_3,
#line 101 "analysis.m"
  MR_Box * analysis__HeadVar__6_6)
#line 101 "analysis.m"
{
#line 18113 "analysis.c"
  {
#line 18115 "analysis.c"
    MR_bool analysis__succeeded;
#line 18117 "analysis.c"
    void MR_CALL (* analysis__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), analysis__TypeClassInfo_for_analysis_7, (MR_Integer) 0)), (MR_Integer) 10)));

#line 18120 "analysis.c"
    {
#line 18122 "analysis.c"
      analysis__func_0(((MR_Box) analysis__TypeClassInfo_for_analysis_7), ((MR_Box) (analysis__HeadVar__1_1)), ((MR_Box) (analysis__HeadVar__2_2)), ((MR_Box) (analysis__HeadVar__3_3)), analysis__HeadVar__6_6);
#line 18124 "analysis.c"
      return;
    }
#line 18127 "analysis.c"
  }
#line 101 "analysis.m"
}

#line 99 "analysis.m"
MR_Box MR_CALL 
analysis__top_2_f_0(
#line 99 "analysis.m"
  MR_Word analysis__TypeClassInfo_for_analysis_4,
#line 99 "analysis.m"
  MR_Box analysis__HeadVar__1_1)
#line 99 "analysis.m"
{
#line 18141 "analysis.c"
  {
#line 18143 "analysis.c"
    MR_bool analysis__succeeded;
#line 18145 "analysis.c"
    MR_Box analysis__HeadVar__3_3;
#line 18147 "analysis.c"
    MR_Box MR_CALL (* analysis__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), analysis__TypeClassInfo_for_analysis_4, (MR_Integer) 0)), (MR_Integer) 9)));

#line 18150 "analysis.c"
    {
#line 18152 "analysis.c"
      return analysis__HeadVar__3_3 = analysis__func_0(((MR_Box) analysis__TypeClassInfo_for_analysis_4), analysis__HeadVar__1_1);
    }
#line 18155 "analysis.c"
    return analysis__HeadVar__3_3;
#line 18157 "analysis.c"
  }
#line 99 "analysis.m"
}

#line 98 "analysis.m"
MR_Box MR_CALL 
analysis__bottom_2_f_0(
#line 98 "analysis.m"
  MR_Word analysis__TypeClassInfo_for_analysis_4,
#line 98 "analysis.m"
  MR_Box analysis__HeadVar__1_1)
#line 98 "analysis.m"
{
#line 18171 "analysis.c"
  {
#line 18173 "analysis.c"
    MR_bool analysis__succeeded;
#line 18175 "analysis.c"
    MR_Box analysis__HeadVar__3_3;
#line 18177 "analysis.c"
    MR_Box MR_CALL (* analysis__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), analysis__TypeClassInfo_for_analysis_4, (MR_Integer) 0)), (MR_Integer) 8)));

#line 18180 "analysis.c"
    {
#line 18182 "analysis.c"
      return analysis__HeadVar__3_3 = analysis__func_0(((MR_Box) analysis__TypeClassInfo_for_analysis_4), analysis__HeadVar__1_1);
    }
#line 18185 "analysis.c"
    return analysis__HeadVar__3_3;
#line 18187 "analysis.c"
  }
#line 98 "analysis.m"
}

#line 95 "analysis.m"
MR_Word MR_CALL 
analysis__preferred_fixpoint_type_2_f_0(
#line 95 "analysis.m"
  MR_Word analysis__TypeClassInfo_for_analysis_4)
#line 95 "analysis.m"
{
#line 18199 "analysis.c"
  {
#line 18201 "analysis.c"
    MR_bool analysis__succeeded;
#line 18203 "analysis.c"
    MR_Word analysis__HeadVar__3_3;
#line 18205 "analysis.c"
    MR_Box MR_CALL (* analysis__func_0)(MR_Box) = ((MR_Box MR_CALL (*)(MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), analysis__TypeClassInfo_for_analysis_4, (MR_Integer) 0)), (MR_Integer) 7)));
#line 18207 "analysis.c"
    MR_Box analysis__conv1_HeadVar__3_3;

#line 18210 "analysis.c"
    {
#line 18212 "analysis.c"
      analysis__conv1_HeadVar__3_3 = analysis__func_0(((MR_Box) analysis__TypeClassInfo_for_analysis_4));
    }
#line 18215 "analysis.c"
    analysis__HeadVar__3_3 = ((MR_Word) analysis__conv1_HeadVar__3_3);
#line 18217 "analysis.c"
    return analysis__HeadVar__3_3;
#line 18219 "analysis.c"
  }
#line 95 "analysis.m"
}

#line 92 "analysis.m"
MR_Integer MR_CALL 
analysis__analysis_version_number_2_f_0(
#line 92 "analysis.m"
  MR_Word analysis__TypeClassInfo_for_analysis_4)
#line 92 "analysis.m"
{
#line 18231 "analysis.c"
  {
#line 18233 "analysis.c"
    MR_bool analysis__succeeded;
#line 18235 "analysis.c"
    MR_Integer analysis__HeadVar__3_3;
#line 18237 "analysis.c"
    MR_Box MR_CALL (* analysis__func_0)(MR_Box) = ((MR_Box MR_CALL (*)(MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), analysis__TypeClassInfo_for_analysis_4, (MR_Integer) 0)), (MR_Integer) 6)));
#line 18239 "analysis.c"
    MR_Box analysis__conv1_HeadVar__3_3;

#line 18242 "analysis.c"
    {
#line 18244 "analysis.c"
      analysis__conv1_HeadVar__3_3 = analysis__func_0(((MR_Box) analysis__TypeClassInfo_for_analysis_4));
    }
#line 18247 "analysis.c"
    analysis__HeadVar__3_3 = ((MR_Integer) analysis__conv1_HeadVar__3_3);
#line 18249 "analysis.c"
    return analysis__HeadVar__3_3;
#line 18251 "analysis.c"
  }
#line 92 "analysis.m"
}

#line 85 "analysis.m"
MR_String MR_CALL 
analysis__analysis_name_2_f_0(
#line 85 "analysis.m"
  MR_Word analysis__TypeClassInfo_for_analysis_4)
#line 85 "analysis.m"
{
#line 18263 "analysis.c"
  {
#line 18265 "analysis.c"
    MR_bool analysis__succeeded;
#line 18267 "analysis.c"
    MR_String analysis__HeadVar__3_3;
#line 18269 "analysis.c"
    MR_Box MR_CALL (* analysis__func_0)(MR_Box) = ((MR_Box MR_CALL (*)(MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), analysis__TypeClassInfo_for_analysis_4, (MR_Integer) 0)), (MR_Integer) 5)));
#line 18271 "analysis.c"
    MR_Box analysis__conv1_HeadVar__3_3;

#line 18274 "analysis.c"
    {
#line 18276 "analysis.c"
      analysis__conv1_HeadVar__3_3 = analysis__func_0(((MR_Box) analysis__TypeClassInfo_for_analysis_4));
    }
#line 18279 "analysis.c"
    analysis__HeadVar__3_3 = ((MR_String) analysis__conv1_HeadVar__3_3);
#line 18281 "analysis.c"
    return analysis__HeadVar__3_3;
#line 18283 "analysis.c"
  }
#line 85 "analysis.m"
}

#line 62 "analysis.m"
void MR_CALL 
analysis__module_name_to_write_file_name_7_p_0(
#line 62 "analysis.m"
  MR_Word analysis__TypeClassInfo_for_compiler_8,
#line 62 "analysis.m"
  MR_Box analysis__HeadVar__1_1,
#line 62 "analysis.m"
  MR_Word analysis__HeadVar__2_2,
#line 62 "analysis.m"
  MR_Word analysis__HeadVar__3_3,
#line 62 "analysis.m"
  MR_String analysis__HeadVar__4_4,
#line 62 "analysis.m"
  MR_String * analysis__HeadVar__5_5)
#line 62 "analysis.m"
{
#line 18305 "analysis.c"
  {
#line 18307 "analysis.c"
    MR_bool analysis__succeeded;
#line 18309 "analysis.c"
    void MR_CALL (* analysis__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), analysis__TypeClassInfo_for_compiler_8, (MR_Integer) 0)), (MR_Integer) 8)));
#line 18311 "analysis.c"
    MR_Box analysis__conv2_HeadVar__5_5;
#line 18313 "analysis.c"
    MR_Box analysis__conv1_HeadVar__7_7;

#line 18316 "analysis.c"
    {
#line 18318 "analysis.c"
      analysis__func_0(((MR_Box) analysis__TypeClassInfo_for_compiler_8), analysis__HeadVar__1_1, ((MR_Box) (analysis__HeadVar__2_2)), ((MR_Box) (analysis__HeadVar__3_3)), ((MR_Box) (analysis__HeadVar__4_4)), &analysis__conv2_HeadVar__5_5, ((MR_Box) ((MR_Integer) 0)), &analysis__conv1_HeadVar__7_7);
    }
#line 18321 "analysis.c"
    *analysis__HeadVar__5_5 = ((MR_String) analysis__conv2_HeadVar__5_5);
#line 18323 "analysis.c"
  }
#line 62 "analysis.m"
}

#line 55 "analysis.m"
void MR_CALL 
analysis__module_name_to_read_file_name_7_p_0(
#line 55 "analysis.m"
  MR_Word analysis__TypeClassInfo_for_compiler_8,
#line 55 "analysis.m"
  MR_Box analysis__HeadVar__1_1,
#line 55 "analysis.m"
  MR_Word analysis__HeadVar__2_2,
#line 55 "analysis.m"
  MR_Word analysis__HeadVar__3_3,
#line 55 "analysis.m"
  MR_String analysis__HeadVar__4_4,
#line 55 "analysis.m"
  MR_Word * analysis__HeadVar__5_5)
#line 55 "analysis.m"
{
#line 18345 "analysis.c"
  {
#line 18347 "analysis.c"
    MR_bool analysis__succeeded;
#line 18349 "analysis.c"
    void MR_CALL (* analysis__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), analysis__TypeClassInfo_for_compiler_8, (MR_Integer) 0)), (MR_Integer) 7)));
#line 18351 "analysis.c"
    MR_Box analysis__conv2_HeadVar__5_5;
#line 18353 "analysis.c"
    MR_Box analysis__conv1_HeadVar__7_7;

#line 18356 "analysis.c"
    {
#line 18358 "analysis.c"
      analysis__func_0(((MR_Box) analysis__TypeClassInfo_for_compiler_8), analysis__HeadVar__1_1, ((MR_Box) (analysis__HeadVar__2_2)), ((MR_Box) (analysis__HeadVar__3_3)), ((MR_Box) (analysis__HeadVar__4_4)), &analysis__conv2_HeadVar__5_5, ((MR_Box) ((MR_Integer) 0)), &analysis__conv1_HeadVar__7_7);
    }
#line 18361 "analysis.c"
    *analysis__HeadVar__5_5 = ((MR_Word) analysis__conv2_HeadVar__5_5);
#line 18363 "analysis.c"
  }
#line 55 "analysis.m"
}

#line 50 "analysis.m"
MR_bool MR_CALL 
analysis__analyses_2_f_0(
#line 50 "analysis.m"
  MR_Word analysis__TypeClassInfo_for_compiler_4,
#line 50 "analysis.m"
  MR_Box analysis__HeadVar__1_1,
#line 50 "analysis.m"
  MR_String analysis__HeadVar__2_2,
#line 50 "analysis.m"
  MR_Word * analysis__HeadVar__3_3)
#line 50 "analysis.m"
{
#line 18381 "analysis.c"
  {
#line 18383 "analysis.c"
    MR_bool analysis__succeeded;
#line 18385 "analysis.c"
    MR_bool MR_CALL (* analysis__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), analysis__TypeClassInfo_for_compiler_4, (MR_Integer) 0)), (MR_Integer) 6)));
#line 18387 "analysis.c"
    MR_Box analysis__conv1_HeadVar__3_3;

#line 18390 "analysis.c"
    {
#line 18392 "analysis.c"
      analysis__succeeded = analysis__func_0(((MR_Box) analysis__TypeClassInfo_for_compiler_4), analysis__HeadVar__1_1, ((MR_Box) (analysis__HeadVar__2_2)), &analysis__conv1_HeadVar__3_3);
    }
#line 18395 "analysis.c"
    if (analysis__succeeded)
#line 18397 "analysis.c"
      {
#line 18399 "analysis.c"
        *analysis__HeadVar__3_3 = ((MR_Word) analysis__conv1_HeadVar__3_3);
#line 18401 "analysis.c"
        analysis__succeeded = MR_TRUE;
#line 18403 "analysis.c"
      }
#line 18405 "analysis.c"
    return analysis__succeeded;
#line 18407 "analysis.c"
  }
#line 50 "analysis.m"
}

#line 46 "analysis.m"
MR_String MR_CALL 
analysis__compiler_name_1_f_0(
#line 46 "analysis.m"
  MR_Word analysis__TypeClassInfo_for_compiler_3,
#line 46 "analysis.m"
  MR_Box analysis__HeadVar__1_1)
#line 46 "analysis.m"
{
#line 18421 "analysis.c"
  {
#line 18423 "analysis.c"
    MR_bool analysis__succeeded;
#line 18425 "analysis.c"
    MR_String analysis__HeadVar__2_2;
#line 18427 "analysis.c"
    MR_Box MR_CALL (* analysis__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), analysis__TypeClassInfo_for_compiler_3, (MR_Integer) 0)), (MR_Integer) 5)));
#line 18429 "analysis.c"
    MR_Box analysis__conv1_HeadVar__2_2;

#line 18432 "analysis.c"
    {
#line 18434 "analysis.c"
      analysis__conv1_HeadVar__2_2 = analysis__func_0(((MR_Box) analysis__TypeClassInfo_for_compiler_3), analysis__HeadVar__1_1);
    }
#line 18437 "analysis.c"
    analysis__HeadVar__2_2 = ((MR_String) analysis__conv1_HeadVar__2_2);
#line 18439 "analysis.c"
    return analysis__HeadVar__2_2;
#line 18441 "analysis.c"
  }
#line 46 "analysis.m"
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
