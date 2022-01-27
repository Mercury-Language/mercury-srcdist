/*
** Automatically generated from `analysis.m'
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
#include "parse_tree.file_kind.mih"
#include "parse_tree.module_cmds.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.status.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 139 "analysis.c"
static const MR_FA_PseudoTypeInfo_Struct2 analysis__analysis__pti_analysis_result_2__pseudo_2__pseudo_3;

#line 142 "analysis.c"
static const MR_FA_PseudoTypeInfo_Struct2 analysis__analysis__pti_analysis_result_2__pseudo_1__pseudo_2;

#line 145 "analysis.c"
static const MR_FA_TypeInfo_Struct1 analysis__list__ti_list_1analysis__type_ctor_info_some_analysis_result_0;

#line 148 "analysis.c"
static const MR_FA_PseudoTypeInfo_Struct2 analysis__tree234__pti_tree234_2__plain_analysis__type_ctor_info_func_id_0__plain_list__ti_list_1analysis__type_ctor_info_some_analysis_result_0;

#line 151 "analysis.c"
static const MR_FA_PseudoTypeInfo_Struct1 analysis__list__pti_list_1__plain_analysis__type_ctor_info_some_analysis_result_0;

#line 154 "analysis.c"
static const MR_FA_TypeInfo_Struct1 analysis__list__ti_list_1analysis__type_ctor_info_imdg_arc_0;

#line 157 "analysis.c"
static const MR_FA_PseudoTypeInfo_Struct2 analysis__tree234__pti_tree234_2__plain_analysis__type_ctor_info_func_id_0__plain_list__ti_list_1analysis__type_ctor_info_imdg_arc_0;

#line 160 "analysis.c"
static const MR_FA_PseudoTypeInfo_Struct1 analysis__list__pti_list_1__plain_analysis__type_ctor_info_imdg_arc_0;

#line 163 "analysis.c"
static const MR_FA_TypeInfo_Struct1 analysis__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0;

#line 166 "analysis.c"
static const MR_FA_TypeInfo_Struct1 analysis__list__ti_list_1analysis__type_ctor_info_analysis_request_0;

#line 169 "analysis.c"
static const MR_FA_TypeInfo_Struct2 analysis__tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_analysis_request_0;

#line 172 "analysis.c"
static const MR_FA_TypeInfo_Struct2 analysis__tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_analysis_request_0;

#line 175 "analysis.c"
static const MR_FA_TypeInfo_Struct2 analysis__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_analysis_request_0;

#line 178 "analysis.c"
static const MR_FA_TypeInfo_Struct2 analysis__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0analysis__type_ctor_info_analysis_status_0;

#line 181 "analysis.c"
static const MR_FA_TypeInfo_Struct2 analysis__tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_some_analysis_result_0;

#line 184 "analysis.c"
static const MR_FA_TypeInfo_Struct2 analysis__tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_some_analysis_result_0;

#line 187 "analysis.c"
static const MR_FA_TypeInfo_Struct2 analysis__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_some_analysis_result_0;

#line 190 "analysis.c"
static const MR_FA_TypeInfo_Struct2 analysis__tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_imdg_arc_0;

#line 193 "analysis.c"
static const MR_FA_TypeInfo_Struct2 analysis__tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_imdg_arc_0;

#line 196 "analysis.c"
static const MR_FA_TypeInfo_Struct2 analysis__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_imdg_arc_0;

#line 199 "analysis.c"
static const MR_PseudoTypeInfo analysis__analysis__field_types_analysis_info_0_0[10];

#line 202 "analysis.c"
static const MR_ConstString analysis__analysis__field_names_analysis_info_0_0[10];

#line 205 "analysis.c"
static const MR_TypeClassConstraint_1Struct analysis__analysis__exist_tc_constr_analysis_info_0_0_1;

#line 208 "analysis.c"
static const MR_TypeClassConstraint analysis__analysis__exist_tc_constrs_analysis_info_0_0[1];

#line 211 "analysis.c"
static const MR_DuExistLocn analysis__analysis__exist_locns_analysis_info_0_0[1];

#line 214 "analysis.c"
static const MR_DuExistInfo analysis__analysis__exist_info_analysis_info_0_0;

#line 217 "analysis.c"
static const MR_DuFunctorDesc analysis__analysis__du_functor_desc_analysis_info_0_0;

#line 220 "analysis.c"
static const MR_DuFunctorDescPtr analysis__analysis__du_stag_ordered_analysis_info_0_0[1];

#line 223 "analysis.c"
static const MR_DuPtagLayout analysis__analysis__du_ptag_ordered_analysis_info_0[1];

#line 226 "analysis.c"
static const MR_DuFunctorDescPtr analysis__analysis__du_name_ordered_analysis_info_0[1];

#line 229 "analysis.c"
static const MR_Integer analysis__analysis__functor_number_map_analysis_info_0[1];

#line 232 "analysis.c"
static const MR_FA_PseudoTypeInfo_Struct1 analysis__list__pti_list_1__pseudo_1;

#line 235 "analysis.c"
static const MR_FA_PseudoTypeInfo_Struct2 analysis__tree234__pti_tree234_2__plain_analysis__type_ctor_info_func_id_0__pseudo_list__pti_list_1__pseudo_1;

#line 238 "analysis.c"
static const MR_FA_PseudoTypeInfo_Struct2 analysis__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__pseudo_tree234__pti_tree234_2__plain_analysis__type_ctor_info_func_id_0__pseudo_list__pti_list_1__pseudo_1;

#line 241 "analysis.c"
static const MR_FA_PseudoTypeInfo_Struct2 analysis__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__pseudo_tree234__pti_tree234_2__plain_analysis__type_ctor_info_func_id_0__pseudo_list__pti_list_1__pseudo_1;

#line 244 "analysis.c"
static const MR_PseudoTypeInfo analysis__analysis__field_types_analysis_request_0_0[2];

#line 247 "analysis.c"
static const MR_ConstString analysis__analysis__field_names_analysis_request_0_0[2];

#line 250 "analysis.c"
static const MR_TypeClassConstraint_2Struct analysis__analysis__exist_tc_constr_analysis_request_0_0_1;

#line 253 "analysis.c"
static const MR_TypeClassConstraint analysis__analysis__exist_tc_constrs_analysis_request_0_0[1];

#line 256 "analysis.c"
static const MR_DuExistLocn analysis__analysis__exist_locns_analysis_request_0_0[2];

#line 259 "analysis.c"
static const MR_DuExistInfo analysis__analysis__exist_info_analysis_request_0_0;

#line 262 "analysis.c"
static const MR_DuFunctorDesc analysis__analysis__du_functor_desc_analysis_request_0_0;

#line 265 "analysis.c"
static const MR_DuFunctorDescPtr analysis__analysis__du_stag_ordered_analysis_request_0_0[1];

#line 268 "analysis.c"
static const MR_DuPtagLayout analysis__analysis__du_ptag_ordered_analysis_request_0[1];

#line 271 "analysis.c"
static const MR_DuFunctorDescPtr analysis__analysis__du_name_ordered_analysis_request_0[1];

#line 274 "analysis.c"
static const MR_Integer analysis__analysis__functor_number_map_analysis_request_0[1];

#line 277 "analysis.c"
static const MR_PseudoTypeInfo analysis__analysis__field_types_analysis_result_2_0[3];

#line 280 "analysis.c"
static const MR_ConstString analysis__analysis__field_names_analysis_result_2_0[3];

#line 283 "analysis.c"
static const MR_DuFunctorDesc analysis__analysis__du_functor_desc_analysis_result_2_0;

#line 286 "analysis.c"
static const MR_DuFunctorDescPtr analysis__analysis__du_stag_ordered_analysis_result_2_0[1];

#line 289 "analysis.c"
static const MR_DuPtagLayout analysis__analysis__du_ptag_ordered_analysis_result_2[1];

#line 292 "analysis.c"
static const MR_DuFunctorDescPtr analysis__analysis__du_name_ordered_analysis_result_2[1];

#line 295 "analysis.c"
static const MR_Integer analysis__analysis__functor_number_map_analysis_result_2[1];

#line 298 "analysis.c"
static const MR_EnumFunctorDesc analysis__analysis__enum_functor_desc_analysis_status_0_0;

#line 301 "analysis.c"
static const MR_EnumFunctorDesc analysis__analysis__enum_functor_desc_analysis_status_0_1;

#line 304 "analysis.c"
static const MR_EnumFunctorDesc analysis__analysis__enum_functor_desc_analysis_status_0_2;

#line 307 "analysis.c"
static const MR_EnumFunctorDescPtr analysis__analysis__enum_value_ordered_analysis_status_0[3];

#line 310 "analysis.c"
static const MR_EnumFunctorDescPtr analysis__analysis__enum_name_ordered_analysis_status_0[3];

#line 313 "analysis.c"
static const MR_Integer analysis__analysis__functor_number_map_analysis_status_0[3];

#line 316 "analysis.c"
static const MR_FA_PseudoTypeInfo_Struct1 analysis__unit__pti_unit_1__pseudo_514;

#line 319 "analysis.c"
static const MR_FA_PseudoTypeInfo_Struct1 analysis__unit__pti_unit_1__pseudo_515;

#line 322 "analysis.c"
static const MR_PseudoTypeInfo analysis__analysis__field_types_analysis_type_0_0[2];

#line 325 "analysis.c"
static const MR_TypeClassConstraint_3Struct analysis__analysis__exist_tc_constr_analysis_type_0_0_1;

#line 328 "analysis.c"
static const MR_TypeClassConstraint analysis__analysis__exist_tc_constrs_analysis_type_0_0[1];

#line 331 "analysis.c"
static const MR_DuExistLocn analysis__analysis__exist_locns_analysis_type_0_0[3];

#line 334 "analysis.c"
static const MR_DuExistInfo analysis__analysis__exist_info_analysis_type_0_0;

#line 337 "analysis.c"
static const MR_DuFunctorDesc analysis__analysis__du_functor_desc_analysis_type_0_0;

#line 340 "analysis.c"
static const MR_DuFunctorDescPtr analysis__analysis__du_stag_ordered_analysis_type_0_0[1];

#line 343 "analysis.c"
static const MR_DuPtagLayout analysis__analysis__du_ptag_ordered_analysis_type_0[1];

#line 346 "analysis.c"
static const MR_DuFunctorDescPtr analysis__analysis__du_name_ordered_analysis_type_0[1];

#line 349 "analysis.c"
static const MR_Integer analysis__analysis__functor_number_map_analysis_type_0[1];

#line 352 "analysis.c"
static const MR_EnumFunctorDesc analysis__analysis__enum_functor_desc_any_call_0_0;

#line 355 "analysis.c"
static const MR_EnumFunctorDescPtr analysis__analysis__enum_value_ordered_any_call_0[1];

#line 358 "analysis.c"
static const MR_EnumFunctorDescPtr analysis__analysis__enum_name_ordered_any_call_0[1];

#line 361 "analysis.c"
static const MR_Integer analysis__analysis__functor_number_map_any_call_0[1];

#line 364 "analysis.c"
static const MR_EnumFunctorDesc analysis__analysis__enum_functor_desc_fixpoint_type_0_0;

#line 367 "analysis.c"
static const MR_EnumFunctorDesc analysis__analysis__enum_functor_desc_fixpoint_type_0_1;

#line 370 "analysis.c"
static const MR_EnumFunctorDescPtr analysis__analysis__enum_value_ordered_fixpoint_type_0[2];

#line 373 "analysis.c"
static const MR_EnumFunctorDescPtr analysis__analysis__enum_name_ordered_fixpoint_type_0[2];

#line 376 "analysis.c"
static const MR_Integer analysis__analysis__functor_number_map_fixpoint_type_0[2];

#line 379 "analysis.c"
static const MR_PseudoTypeInfo analysis__analysis__field_types_func_id_0_0[4];

#line 382 "analysis.c"
static const MR_ConstString analysis__analysis__field_names_func_id_0_0[4];

#line 385 "analysis.c"
static const MR_DuFunctorDesc analysis__analysis__du_functor_desc_func_id_0_0;

#line 388 "analysis.c"
static const MR_DuFunctorDescPtr analysis__analysis__du_stag_ordered_func_id_0_0[1];

#line 391 "analysis.c"
static const MR_DuPtagLayout analysis__analysis__du_ptag_ordered_func_id_0[1];

#line 394 "analysis.c"
static const MR_DuFunctorDescPtr analysis__analysis__du_name_ordered_func_id_0[1];

#line 397 "analysis.c"
static const MR_Integer analysis__analysis__functor_number_map_func_id_0[1];

#line 400 "analysis.c"
static const MR_PseudoTypeInfo analysis__analysis__field_types_imdg_arc_0_0[2];

#line 403 "analysis.c"
static const MR_ConstString analysis__analysis__field_names_imdg_arc_0_0[2];

#line 406 "analysis.c"
static const MR_TypeClassConstraint_2Struct analysis__analysis__exist_tc_constr_imdg_arc_0_0_1;

#line 409 "analysis.c"
static const MR_TypeClassConstraint analysis__analysis__exist_tc_constrs_imdg_arc_0_0[1];

#line 412 "analysis.c"
static const MR_DuExistLocn analysis__analysis__exist_locns_imdg_arc_0_0[2];

#line 415 "analysis.c"
static const MR_DuExistInfo analysis__analysis__exist_info_imdg_arc_0_0;

#line 418 "analysis.c"
static const MR_DuFunctorDesc analysis__analysis__du_functor_desc_imdg_arc_0_0;

#line 421 "analysis.c"
static const MR_DuFunctorDescPtr analysis__analysis__du_stag_ordered_imdg_arc_0_0[1];

#line 424 "analysis.c"
static const MR_DuPtagLayout analysis__analysis__du_ptag_ordered_imdg_arc_0[1];

#line 427 "analysis.c"
static const MR_DuFunctorDescPtr analysis__analysis__du_name_ordered_imdg_arc_0[1];

#line 430 "analysis.c"
static const MR_Integer analysis__analysis__functor_number_map_imdg_arc_0[1];

#line 433 "analysis.c"
static const MR_EnumFunctorDesc analysis__analysis__enum_functor_desc_make_analysis_registry_0_0;

#line 436 "analysis.c"
static const MR_EnumFunctorDesc analysis__analysis__enum_functor_desc_make_analysis_registry_0_1;

#line 439 "analysis.c"
static const MR_EnumFunctorDescPtr analysis__analysis__enum_value_ordered_make_analysis_registry_0[2];

#line 442 "analysis.c"
static const MR_EnumFunctorDescPtr analysis__analysis__enum_name_ordered_make_analysis_registry_0[2];

#line 445 "analysis.c"
static const MR_Integer analysis__analysis__functor_number_map_make_analysis_registry_0[2];

#line 448 "analysis.c"
static const MR_EnumFunctorDesc analysis__analysis__enum_functor_desc_no_func_info_0_0;

#line 451 "analysis.c"
static const MR_EnumFunctorDescPtr analysis__analysis__enum_value_ordered_no_func_info_0[1];

#line 454 "analysis.c"
static const MR_EnumFunctorDescPtr analysis__analysis__enum_name_ordered_no_func_info_0[1];

#line 457 "analysis.c"
static const MR_Integer analysis__analysis__functor_number_map_no_func_info_0[1];

#line 460 "analysis.c"
static const MR_PseudoTypeInfo analysis__analysis__field_types_some_analysis_result_0_0[3];

#line 463 "analysis.c"
static const MR_ConstString analysis__analysis__field_names_some_analysis_result_0_0[3];

#line 466 "analysis.c"
static const MR_TypeClassConstraint_3Struct analysis__analysis__exist_tc_constr_some_analysis_result_0_0_1;

#line 469 "analysis.c"
static const MR_TypeClassConstraint analysis__analysis__exist_tc_constrs_some_analysis_result_0_0[1];

#line 472 "analysis.c"
static const MR_DuExistLocn analysis__analysis__exist_locns_some_analysis_result_0_0[3];

#line 475 "analysis.c"
static const MR_DuExistInfo analysis__analysis__exist_info_some_analysis_result_0_0;

#line 478 "analysis.c"
static const MR_DuFunctorDesc analysis__analysis__du_functor_desc_some_analysis_result_0_0;

#line 481 "analysis.c"
static const MR_DuFunctorDescPtr analysis__analysis__du_stag_ordered_some_analysis_result_0_0[1];

#line 484 "analysis.c"
static const MR_DuPtagLayout analysis__analysis__du_ptag_ordered_some_analysis_result_0[1];

#line 487 "analysis.c"
static const MR_DuFunctorDescPtr analysis__analysis__du_name_ordered_some_analysis_result_0[1];

#line 490 "analysis.c"
static const MR_Integer analysis__analysis__functor_number_map_some_analysis_result_0[1];

#line 493 "analysis.c"
static const MR_ConstString analysis__analysis__type_class_id_var_names_to_term_1[1];

#line 496 "analysis.c"
static const MR_TypeClassMethod analysis__analysis__type_class_id_method_ids_to_term_1[2];

#line 499 "analysis.c"
static const MR_TypeClassId analysis__analysis__type_class_id_to_term_1;

#line 502 "analysis.c"
static const MR_ConstString analysis__analysis__type_class_id_var_names_partial_order_2[2];

#line 505 "analysis.c"
static const MR_TypeClassMethod analysis__analysis__type_class_id_method_ids_partial_order_2[2];

#line 508 "analysis.c"
static const MR_TypeClassId analysis__analysis__type_class_id_partial_order_2;

#line 511 "analysis.c"
static const MR_ConstString analysis__analysis__type_class_id_var_names_compiler_1[1];

#line 514 "analysis.c"
static const MR_TypeClassMethod analysis__analysis__type_class_id_method_ids_compiler_1[4];

#line 517 "analysis.c"
static const MR_TypeClassId analysis__analysis__type_class_id_compiler_1;

#line 520 "analysis.c"
static const MR_ConstString analysis__analysis__type_class_id_var_names_call_pattern_2[2];

#line 523 "analysis.c"
static const MR_TypeClassId analysis__analysis__type_class_id_call_pattern_2;

#line 526 "analysis.c"
static const MR_TypeClassConstraint_2Struct analysis__analysis__type_class_decl_super_call_pattern_2_1;

#line 529 "analysis.c"
static const MR_TypeClassConstraint_1Struct analysis__analysis__type_class_decl_super_call_pattern_2_2;

#line 532 "analysis.c"
static const MR_TypeClassConstraint analysis__analysis__type_class_decl_supers_call_pattern_2[2];

#line 535 "analysis.c"
static const MR_ConstString analysis__analysis__type_class_id_var_names_answer_pattern_2[2];

#line 538 "analysis.c"
static const MR_TypeClassId analysis__analysis__type_class_id_answer_pattern_2;

#line 541 "analysis.c"
static const MR_TypeClassConstraint_2Struct analysis__analysis__type_class_decl_super_answer_pattern_2_1;

#line 544 "analysis.c"
static const MR_TypeClassConstraint_1Struct analysis__analysis__type_class_decl_super_answer_pattern_2_2;

#line 547 "analysis.c"
static const MR_TypeClassConstraint analysis__analysis__type_class_decl_supers_answer_pattern_2[2];

#line 550 "analysis.c"
static const MR_ConstString analysis__analysis__type_class_id_var_names_analysis_3[3];

#line 553 "analysis.c"
static const MR_TypeClassMethod analysis__analysis__type_class_id_method_ids_analysis_3[6];

#line 556 "analysis.c"
static const MR_TypeClassId analysis__analysis__type_class_id_analysis_3;

#line 559 "analysis.c"
static const MR_TypeClassConstraint_2Struct analysis__analysis__type_class_decl_super_analysis_3_1;

#line 562 "analysis.c"
static const MR_TypeClassConstraint_2Struct analysis__analysis__type_class_decl_super_analysis_3_2;

#line 565 "analysis.c"
static const MR_TypeClassConstraint analysis__analysis__type_class_decl_supers_analysis_3[2];

#line 568 "analysis.c"
static MR_bool MR_CALL 
analysis____Unify____analysis_info_0_0_10001(
#line 571 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 573 "analysis.c"
  MR_Box analysis__wrapper_arg_2);

#line 576 "analysis.c"
static void MR_CALL 
analysis____Compare____analysis_info_0_0_10001(
#line 579 "analysis.c"
  MR_Box * analysis__wrapper_arg_1,
#line 581 "analysis.c"
  MR_Box analysis__wrapper_arg_2,
#line 583 "analysis.c"
  MR_Box analysis__wrapper_arg_3);

#line 586 "analysis.c"
static MR_bool MR_CALL 
analysis____Unify____analysis_map_1_0_10001(
#line 589 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 591 "analysis.c"
  MR_Box analysis__wrapper_arg_2,
#line 593 "analysis.c"
  MR_Box analysis__wrapper_arg_3);

#line 596 "analysis.c"
static void MR_CALL 
analysis____Compare____analysis_map_1_0_10001(
#line 599 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 601 "analysis.c"
  MR_Box * analysis__wrapper_arg_2,
#line 603 "analysis.c"
  MR_Box analysis__wrapper_arg_3,
#line 605 "analysis.c"
  MR_Box analysis__wrapper_arg_4);

#line 608 "analysis.c"
static MR_bool MR_CALL 
analysis____Unify____analysis_name_0_0_10001(
#line 611 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 613 "analysis.c"
  MR_Box analysis__wrapper_arg_2);

#line 616 "analysis.c"
static void MR_CALL 
analysis____Compare____analysis_name_0_0_10001(
#line 619 "analysis.c"
  MR_Box * analysis__wrapper_arg_1,
#line 621 "analysis.c"
  MR_Box analysis__wrapper_arg_2,
#line 623 "analysis.c"
  MR_Box analysis__wrapper_arg_3);

#line 626 "analysis.c"
static MR_bool MR_CALL 
analysis____Unify____analysis_request_0_0_10001(
#line 629 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 631 "analysis.c"
  MR_Box analysis__wrapper_arg_2);

#line 634 "analysis.c"
static void MR_CALL 
analysis____Compare____analysis_request_0_0_10001(
#line 637 "analysis.c"
  MR_Box * analysis__wrapper_arg_1,
#line 639 "analysis.c"
  MR_Box analysis__wrapper_arg_2,
#line 641 "analysis.c"
  MR_Box analysis__wrapper_arg_3);

#line 644 "analysis.c"
static MR_bool MR_CALL 
analysis____Unify____analysis_result_2_0_10001(
#line 647 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 649 "analysis.c"
  MR_Box analysis__wrapper_arg_2,
#line 651 "analysis.c"
  MR_Box analysis__wrapper_arg_3,
#line 653 "analysis.c"
  MR_Box analysis__wrapper_arg_4);

#line 656 "analysis.c"
static void MR_CALL 
analysis____Compare____analysis_result_2_0_10001(
#line 659 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 661 "analysis.c"
  MR_Box analysis__wrapper_arg_2,
#line 663 "analysis.c"
  MR_Box * analysis__wrapper_arg_3,
#line 665 "analysis.c"
  MR_Box analysis__wrapper_arg_4,
#line 667 "analysis.c"
  MR_Box analysis__wrapper_arg_5);

#line 670 "analysis.c"
static MR_bool MR_CALL 
analysis____Unify____analysis_status_0_0_10001(
#line 673 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 675 "analysis.c"
  MR_Box analysis__wrapper_arg_2);

#line 678 "analysis.c"
static void MR_CALL 
analysis____Compare____analysis_status_0_0_10001(
#line 681 "analysis.c"
  MR_Box * analysis__wrapper_arg_1,
#line 683 "analysis.c"
  MR_Box analysis__wrapper_arg_2,
#line 685 "analysis.c"
  MR_Box analysis__wrapper_arg_3);

#line 688 "analysis.c"
static MR_bool MR_CALL 
analysis____Unify____analysis_type_0_0_10001(
#line 691 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 693 "analysis.c"
  MR_Box analysis__wrapper_arg_2);

#line 696 "analysis.c"
static void MR_CALL 
analysis____Compare____analysis_type_0_0_10001(
#line 699 "analysis.c"
  MR_Box * analysis__wrapper_arg_1,
#line 701 "analysis.c"
  MR_Box analysis__wrapper_arg_2,
#line 703 "analysis.c"
  MR_Box analysis__wrapper_arg_3);

#line 706 "analysis.c"
static MR_bool MR_CALL 
analysis____Unify____any_call_0_0_10001(
#line 709 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 711 "analysis.c"
  MR_Box analysis__wrapper_arg_2);

#line 714 "analysis.c"
static void MR_CALL 
analysis____Compare____any_call_0_0_10001(
#line 717 "analysis.c"
  MR_Box * analysis__wrapper_arg_1,
#line 719 "analysis.c"
  MR_Box analysis__wrapper_arg_2,
#line 721 "analysis.c"
  MR_Box analysis__wrapper_arg_3);

#line 724 "analysis.c"
static MR_bool MR_CALL 
analysis____Unify____fixpoint_type_0_0_10001(
#line 727 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 729 "analysis.c"
  MR_Box analysis__wrapper_arg_2);

#line 732 "analysis.c"
static void MR_CALL 
analysis____Compare____fixpoint_type_0_0_10001(
#line 735 "analysis.c"
  MR_Box * analysis__wrapper_arg_1,
#line 737 "analysis.c"
  MR_Box analysis__wrapper_arg_2,
#line 739 "analysis.c"
  MR_Box analysis__wrapper_arg_3);

#line 742 "analysis.c"
static MR_bool MR_CALL 
analysis____Unify____func_analysis_map_1_0_10001(
#line 745 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 747 "analysis.c"
  MR_Box analysis__wrapper_arg_2,
#line 749 "analysis.c"
  MR_Box analysis__wrapper_arg_3);

#line 752 "analysis.c"
static void MR_CALL 
analysis____Compare____func_analysis_map_1_0_10001(
#line 755 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 757 "analysis.c"
  MR_Box * analysis__wrapper_arg_2,
#line 759 "analysis.c"
  MR_Box analysis__wrapper_arg_3,
#line 761 "analysis.c"
  MR_Box analysis__wrapper_arg_4);

#line 764 "analysis.c"
static MR_bool MR_CALL 
analysis____Unify____func_id_0_0_10001(
#line 767 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 769 "analysis.c"
  MR_Box analysis__wrapper_arg_2);

#line 772 "analysis.c"
static void MR_CALL 
analysis____Compare____func_id_0_0_10001(
#line 775 "analysis.c"
  MR_Box * analysis__wrapper_arg_1,
#line 777 "analysis.c"
  MR_Box analysis__wrapper_arg_2,
#line 779 "analysis.c"
  MR_Box analysis__wrapper_arg_3);

#line 782 "analysis.c"
static MR_bool MR_CALL 
analysis____Unify____imdg_arc_0_0_10001(
#line 785 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 787 "analysis.c"
  MR_Box analysis__wrapper_arg_2);

#line 790 "analysis.c"
static void MR_CALL 
analysis____Compare____imdg_arc_0_0_10001(
#line 793 "analysis.c"
  MR_Box * analysis__wrapper_arg_1,
#line 795 "analysis.c"
  MR_Box analysis__wrapper_arg_2,
#line 797 "analysis.c"
  MR_Box analysis__wrapper_arg_3);

#line 800 "analysis.c"
static MR_bool MR_CALL 
analysis____Unify____make_analysis_registry_0_0_10001(
#line 803 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 805 "analysis.c"
  MR_Box analysis__wrapper_arg_2);

#line 808 "analysis.c"
static void MR_CALL 
analysis____Compare____make_analysis_registry_0_0_10001(
#line 811 "analysis.c"
  MR_Box * analysis__wrapper_arg_1,
#line 813 "analysis.c"
  MR_Box analysis__wrapper_arg_2,
#line 815 "analysis.c"
  MR_Box analysis__wrapper_arg_3);

#line 818 "analysis.c"
static MR_bool MR_CALL 
analysis____Unify____module_analysis_map_1_0_10001(
#line 821 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 823 "analysis.c"
  MR_Box analysis__wrapper_arg_2,
#line 825 "analysis.c"
  MR_Box analysis__wrapper_arg_3);

#line 828 "analysis.c"
static void MR_CALL 
analysis____Compare____module_analysis_map_1_0_10001(
#line 831 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 833 "analysis.c"
  MR_Box * analysis__wrapper_arg_2,
#line 835 "analysis.c"
  MR_Box analysis__wrapper_arg_3,
#line 837 "analysis.c"
  MR_Box analysis__wrapper_arg_4);

#line 840 "analysis.c"
static MR_bool MR_CALL 
analysis____Unify____no_func_info_0_0_10001(
#line 843 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 845 "analysis.c"
  MR_Box analysis__wrapper_arg_2);

#line 848 "analysis.c"
static void MR_CALL 
analysis____Compare____no_func_info_0_0_10001(
#line 851 "analysis.c"
  MR_Box * analysis__wrapper_arg_1,
#line 853 "analysis.c"
  MR_Box analysis__wrapper_arg_2,
#line 855 "analysis.c"
  MR_Box analysis__wrapper_arg_3);

#line 858 "analysis.c"
static MR_bool MR_CALL 
analysis____Unify____some_analysis_result_0_0_10001(
#line 861 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 863 "analysis.c"
  MR_Box analysis__wrapper_arg_2);

#line 866 "analysis.c"
static void MR_CALL 
analysis____Compare____some_analysis_result_0_0_10001(
#line 869 "analysis.c"
  MR_Box * analysis__wrapper_arg_1,
#line 871 "analysis.c"
  MR_Box analysis__wrapper_arg_2,
#line 873 "analysis.c"
  MR_Box analysis__wrapper_arg_3);

#line 876 "analysis.c"
static MR_Box MR_CALL 
analysis__ClassMethod_for_analysis__to_term____analysis__any_call__arity0______analysis__to_term_1_1_f_0_10001(
#line 879 "analysis.c"
  MR_Box analysis__closure_arg,
#line 881 "analysis.c"
  MR_Box analysis__wrapper_arg_1);

#line 884 "analysis.c"
static MR_bool MR_CALL 
analysis__ClassMethod_for_analysis__to_term____analysis__any_call__arity0______analysis__from_term_2_2_p_0_10001(
#line 887 "analysis.c"
  MR_Box analysis__closure_arg,
#line 889 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 891 "analysis.c"
  MR_Box * analysis__wrapper_arg_2);

#line 894 "analysis.c"
static MR_bool MR_CALL 
analysis__ClassMethod_for_analysis__partial_order____analysis__no_func_info__arity0__analysis__any_call__arity0______analysis__more_precise_than_3_3_p_0_10001(
#line 897 "analysis.c"
  MR_Box analysis__closure_arg,
#line 899 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 901 "analysis.c"
  MR_Box analysis__wrapper_arg_2,
#line 903 "analysis.c"
  MR_Box analysis__wrapper_arg_3);

#line 906 "analysis.c"
static MR_bool MR_CALL 
analysis__ClassMethod_for_analysis__partial_order____analysis__no_func_info__arity0__analysis__any_call__arity0______analysis__equivalent_3_3_p_0_10001(
#line 909 "analysis.c"
  MR_Box analysis__closure_arg,
#line 911 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 913 "analysis.c"
  MR_Box analysis__wrapper_arg_2,
#line 915 "analysis.c"
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



#include "analysis.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
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


#line 1895 "analysis.c"
static const MR_FA_PseudoTypeInfo_Struct2 analysis__analysis__pti_analysis_result_2__pseudo_2__pseudo_3 = {
  &analysis__analysis__type_ctor_info_analysis_result_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 2,
    (MR_PseudoTypeInfo) (MR_Integer) 3
  }
};

#line 1904 "analysis.c"
static const MR_FA_PseudoTypeInfo_Struct2 analysis__analysis__pti_analysis_result_2__pseudo_1__pseudo_2 = {
  &analysis__analysis__type_ctor_info_analysis_result_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

#line 1913 "analysis.c"
static const MR_FA_TypeInfo_Struct1 analysis__list__ti_list_1analysis__type_ctor_info_some_analysis_result_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &analysis__analysis__type_ctor_info_some_analysis_result_0
  }
};

#line 1921 "analysis.c"
static const MR_FA_PseudoTypeInfo_Struct2 analysis__tree234__pti_tree234_2__plain_analysis__type_ctor_info_func_id_0__plain_list__ti_list_1analysis__type_ctor_info_some_analysis_result_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &analysis__analysis__type_ctor_info_func_id_0,
    (MR_PseudoTypeInfo) &analysis__list__ti_list_1analysis__type_ctor_info_some_analysis_result_0
  }
};

#line 1930 "analysis.c"
static const MR_FA_PseudoTypeInfo_Struct1 analysis__list__pti_list_1__plain_analysis__type_ctor_info_some_analysis_result_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &analysis__analysis__type_ctor_info_some_analysis_result_0
  }
};

#line 1938 "analysis.c"
static const MR_FA_TypeInfo_Struct1 analysis__list__ti_list_1analysis__type_ctor_info_imdg_arc_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &analysis__analysis__type_ctor_info_imdg_arc_0
  }
};

#line 1946 "analysis.c"
static const MR_FA_PseudoTypeInfo_Struct2 analysis__tree234__pti_tree234_2__plain_analysis__type_ctor_info_func_id_0__plain_list__ti_list_1analysis__type_ctor_info_imdg_arc_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &analysis__analysis__type_ctor_info_func_id_0,
    (MR_PseudoTypeInfo) &analysis__list__ti_list_1analysis__type_ctor_info_imdg_arc_0
  }
};

#line 1955 "analysis.c"
static const MR_FA_PseudoTypeInfo_Struct1 analysis__list__pti_list_1__plain_analysis__type_ctor_info_imdg_arc_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &analysis__analysis__type_ctor_info_imdg_arc_0
  }
};

#line 1963 "analysis.c"
static const MR_FA_TypeInfo_Struct1 analysis__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
  }
};

#line 1971 "analysis.c"
static const MR_FA_TypeInfo_Struct1 analysis__list__ti_list_1analysis__type_ctor_info_analysis_request_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &analysis__analysis__type_ctor_info_analysis_request_0
  }
};

#line 1979 "analysis.c"
static const MR_FA_TypeInfo_Struct2 analysis__tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_analysis_request_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &analysis__analysis__type_ctor_info_func_id_0,
    (MR_TypeInfo) &analysis__list__ti_list_1analysis__type_ctor_info_analysis_request_0
  }
};

#line 1988 "analysis.c"
static const MR_FA_TypeInfo_Struct2 analysis__tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_analysis_request_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_TypeInfo) &analysis__tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_analysis_request_0
  }
};

#line 1997 "analysis.c"
static const MR_FA_TypeInfo_Struct2 analysis__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_analysis_request_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_TypeInfo) &analysis__tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_analysis_request_0
  }
};

#line 2006 "analysis.c"
static const MR_FA_TypeInfo_Struct2 analysis__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0analysis__type_ctor_info_analysis_status_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_TypeInfo) &analysis__analysis__type_ctor_info_analysis_status_0
  }
};

#line 2015 "analysis.c"
static const MR_FA_TypeInfo_Struct2 analysis__tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_some_analysis_result_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &analysis__analysis__type_ctor_info_func_id_0,
    (MR_TypeInfo) &analysis__list__ti_list_1analysis__type_ctor_info_some_analysis_result_0
  }
};

#line 2024 "analysis.c"
static const MR_FA_TypeInfo_Struct2 analysis__tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_some_analysis_result_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_TypeInfo) &analysis__tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_some_analysis_result_0
  }
};

#line 2033 "analysis.c"
static const MR_FA_TypeInfo_Struct2 analysis__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_some_analysis_result_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_TypeInfo) &analysis__tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_some_analysis_result_0
  }
};

#line 2042 "analysis.c"
static const MR_FA_TypeInfo_Struct2 analysis__tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_imdg_arc_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &analysis__analysis__type_ctor_info_func_id_0,
    (MR_TypeInfo) &analysis__list__ti_list_1analysis__type_ctor_info_imdg_arc_0
  }
};

#line 2051 "analysis.c"
static const MR_FA_TypeInfo_Struct2 analysis__tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_imdg_arc_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_TypeInfo) &analysis__tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_imdg_arc_0
  }
};

#line 2060 "analysis.c"
static const MR_FA_TypeInfo_Struct2 analysis__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_imdg_arc_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_TypeInfo) &analysis__tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_imdg_arc_0
  }
};

#line 2069 "analysis.c"
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

#line 2083 "analysis.c"
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

#line 2097 "analysis.c"
static const MR_TypeClassConstraint_1Struct analysis__analysis__exist_tc_constr_analysis_info_0_0_1 = {
  &analysis__analysis__type_class_decl_compiler_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 2105 "analysis.c"
static const MR_TypeClassConstraint analysis__analysis__exist_tc_constrs_analysis_info_0_0[1] = {
  (MR_TypeClassConstraint) &analysis__analysis__exist_tc_constr_analysis_info_0_0_1
};

#line 2110 "analysis.c"
static const MR_DuExistLocn analysis__analysis__exist_locns_analysis_info_0_0[1] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

#line 2118 "analysis.c"
static const MR_DuExistInfo analysis__analysis__exist_info_analysis_info_0_0 = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 1,
  analysis__analysis__exist_locns_analysis_info_0_0,
  analysis__analysis__exist_tc_constrs_analysis_info_0_0
};

#line 2127 "analysis.c"
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

#line 2142 "analysis.c"
static const MR_DuFunctorDescPtr analysis__analysis__du_stag_ordered_analysis_info_0_0[1] = {
  &analysis__analysis__du_functor_desc_analysis_info_0_0
};

#line 2147 "analysis.c"
static const MR_DuPtagLayout analysis__analysis__du_ptag_ordered_analysis_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    analysis__analysis__du_stag_ordered_analysis_info_0_0
  }
};

#line 2156 "analysis.c"
static const MR_DuFunctorDescPtr analysis__analysis__du_name_ordered_analysis_info_0[1] = {
  &analysis__analysis__du_functor_desc_analysis_info_0_0
};

#line 2161 "analysis.c"
static const MR_Integer analysis__analysis__functor_number_map_analysis_info_0[1] = {
  (MR_Integer) 0
};

#line 2166 "analysis.c"
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

#line 2183 "analysis.c"
static const MR_FA_PseudoTypeInfo_Struct1 analysis__list__pti_list_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 2191 "analysis.c"
static const MR_FA_PseudoTypeInfo_Struct2 analysis__tree234__pti_tree234_2__plain_analysis__type_ctor_info_func_id_0__pseudo_list__pti_list_1__pseudo_1 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &analysis__analysis__type_ctor_info_func_id_0,
    (MR_PseudoTypeInfo) &analysis__list__pti_list_1__pseudo_1
  }
};

#line 2200 "analysis.c"
static const MR_FA_PseudoTypeInfo_Struct2 analysis__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__pseudo_tree234__pti_tree234_2__plain_analysis__type_ctor_info_func_id_0__pseudo_list__pti_list_1__pseudo_1 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &analysis__tree234__pti_tree234_2__plain_analysis__type_ctor_info_func_id_0__pseudo_list__pti_list_1__pseudo_1
  }
};

#line 2209 "analysis.c"
static const MR_FA_PseudoTypeInfo_Struct2 analysis__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__pseudo_tree234__pti_tree234_2__plain_analysis__type_ctor_info_func_id_0__pseudo_list__pti_list_1__pseudo_1 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_PseudoTypeInfo) &analysis__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__pseudo_tree234__pti_tree234_2__plain_analysis__type_ctor_info_func_id_0__pseudo_list__pti_list_1__pseudo_1
  }
};

#line 2218 "analysis.c"
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

#line 2235 "analysis.c"
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

#line 2252 "analysis.c"
static const MR_PseudoTypeInfo analysis__analysis__field_types_analysis_request_0_0[2] = {
  (MR_PseudoTypeInfo) (MR_Integer) 514,
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
};

#line 2258 "analysis.c"
static const MR_ConstString analysis__analysis__field_names_analysis_request_0_0[2] = {
  (MR_String) "req_call",
  (MR_String) "req_caller"
};

#line 2264 "analysis.c"
static const MR_TypeClassConstraint_2Struct analysis__analysis__exist_tc_constr_analysis_request_0_0_1 = {
  &analysis__analysis__type_class_decl_call_pattern_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

#line 2273 "analysis.c"
static const MR_TypeClassConstraint analysis__analysis__exist_tc_constrs_analysis_request_0_0[1] = {
  (MR_TypeClassConstraint) &analysis__analysis__exist_tc_constr_analysis_request_0_0_1
};

#line 2278 "analysis.c"
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

#line 2290 "analysis.c"
static const MR_DuExistInfo analysis__analysis__exist_info_analysis_request_0_0 = {
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 1,
  analysis__analysis__exist_locns_analysis_request_0_0,
  analysis__analysis__exist_tc_constrs_analysis_request_0_0
};

#line 2299 "analysis.c"
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

#line 2314 "analysis.c"
static const MR_DuFunctorDescPtr analysis__analysis__du_stag_ordered_analysis_request_0_0[1] = {
  &analysis__analysis__du_functor_desc_analysis_request_0_0
};

#line 2319 "analysis.c"
static const MR_DuPtagLayout analysis__analysis__du_ptag_ordered_analysis_request_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    analysis__analysis__du_stag_ordered_analysis_request_0_0
  }
};

#line 2328 "analysis.c"
static const MR_DuFunctorDescPtr analysis__analysis__du_name_ordered_analysis_request_0[1] = {
  &analysis__analysis__du_functor_desc_analysis_request_0_0
};

#line 2333 "analysis.c"
static const MR_Integer analysis__analysis__functor_number_map_analysis_request_0[1] = {
  (MR_Integer) 0
};

#line 2338 "analysis.c"
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

#line 2355 "analysis.c"
static const MR_PseudoTypeInfo analysis__analysis__field_types_analysis_result_2_0[3] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) (MR_Integer) 2,
  (MR_PseudoTypeInfo) &analysis__analysis__type_ctor_info_analysis_status_0
};

#line 2362 "analysis.c"
static const MR_ConstString analysis__analysis__field_names_analysis_result_2_0[3] = {
  (MR_String) "ar_call",
  (MR_String) "ar_answer",
  (MR_String) "ar_status"
};

#line 2369 "analysis.c"
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

#line 2384 "analysis.c"
static const MR_DuFunctorDescPtr analysis__analysis__du_stag_ordered_analysis_result_2_0[1] = {
  &analysis__analysis__du_functor_desc_analysis_result_2_0
};

#line 2389 "analysis.c"
static const MR_DuPtagLayout analysis__analysis__du_ptag_ordered_analysis_result_2[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    analysis__analysis__du_stag_ordered_analysis_result_2_0
  }
};

#line 2398 "analysis.c"
static const MR_DuFunctorDescPtr analysis__analysis__du_name_ordered_analysis_result_2[1] = {
  &analysis__analysis__du_functor_desc_analysis_result_2_0
};

#line 2403 "analysis.c"
static const MR_Integer analysis__analysis__functor_number_map_analysis_result_2[1] = {
  (MR_Integer) 0
};

#line 2408 "analysis.c"
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

#line 2425 "analysis.c"
static const MR_EnumFunctorDesc analysis__analysis__enum_functor_desc_analysis_status_0_0 = {
  (MR_String) "invalid",
  (MR_Integer) 0
};

#line 2431 "analysis.c"
static const MR_EnumFunctorDesc analysis__analysis__enum_functor_desc_analysis_status_0_1 = {
  (MR_String) "suboptimal",
  (MR_Integer) 1
};

#line 2437 "analysis.c"
static const MR_EnumFunctorDesc analysis__analysis__enum_functor_desc_analysis_status_0_2 = {
  (MR_String) "optimal",
  (MR_Integer) 2
};

#line 2443 "analysis.c"
static const MR_EnumFunctorDescPtr analysis__analysis__enum_value_ordered_analysis_status_0[3] = {
  &analysis__analysis__enum_functor_desc_analysis_status_0_0,
  &analysis__analysis__enum_functor_desc_analysis_status_0_1,
  &analysis__analysis__enum_functor_desc_analysis_status_0_2
};

#line 2450 "analysis.c"
static const MR_EnumFunctorDescPtr analysis__analysis__enum_name_ordered_analysis_status_0[3] = {
  &analysis__analysis__enum_functor_desc_analysis_status_0_0,
  &analysis__analysis__enum_functor_desc_analysis_status_0_2,
  &analysis__analysis__enum_functor_desc_analysis_status_0_1
};

#line 2457 "analysis.c"
static const MR_Integer analysis__analysis__functor_number_map_analysis_status_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 1
};

#line 2464 "analysis.c"
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

#line 2481 "analysis.c"
static const MR_FA_PseudoTypeInfo_Struct1 analysis__unit__pti_unit_1__pseudo_514 = {
  &mercury__unit__unit__type_ctor_info_unit_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 514
  }
};

#line 2489 "analysis.c"
static const MR_FA_PseudoTypeInfo_Struct1 analysis__unit__pti_unit_1__pseudo_515 = {
  &mercury__unit__unit__type_ctor_info_unit_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 515
  }
};

#line 2497 "analysis.c"
static const MR_PseudoTypeInfo analysis__analysis__field_types_analysis_type_0_0[2] = {
  (MR_PseudoTypeInfo) &analysis__unit__pti_unit_1__pseudo_514,
  (MR_PseudoTypeInfo) &analysis__unit__pti_unit_1__pseudo_515
};

#line 2503 "analysis.c"
static const MR_TypeClassConstraint_3Struct analysis__analysis__exist_tc_constr_analysis_type_0_0_1 = {
  &analysis__analysis__type_class_decl_analysis_3,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 2,
    (MR_PseudoTypeInfo) (MR_Integer) 3
  }
};

#line 2513 "analysis.c"
static const MR_TypeClassConstraint analysis__analysis__exist_tc_constrs_analysis_type_0_0[1] = {
  (MR_TypeClassConstraint) &analysis__analysis__exist_tc_constr_analysis_type_0_0_1
};

#line 2518 "analysis.c"
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

#line 2534 "analysis.c"
static const MR_DuExistInfo analysis__analysis__exist_info_analysis_type_0_0 = {
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 1,
  analysis__analysis__exist_locns_analysis_type_0_0,
  analysis__analysis__exist_tc_constrs_analysis_type_0_0
};

#line 2543 "analysis.c"
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

#line 2558 "analysis.c"
static const MR_DuFunctorDescPtr analysis__analysis__du_stag_ordered_analysis_type_0_0[1] = {
  &analysis__analysis__du_functor_desc_analysis_type_0_0
};

#line 2563 "analysis.c"
static const MR_DuPtagLayout analysis__analysis__du_ptag_ordered_analysis_type_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    analysis__analysis__du_stag_ordered_analysis_type_0_0
  }
};

#line 2572 "analysis.c"
static const MR_DuFunctorDescPtr analysis__analysis__du_name_ordered_analysis_type_0[1] = {
  &analysis__analysis__du_functor_desc_analysis_type_0_0
};

#line 2577 "analysis.c"
static const MR_Integer analysis__analysis__functor_number_map_analysis_type_0[1] = {
  (MR_Integer) 0
};

#line 2582 "analysis.c"
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

#line 2599 "analysis.c"
static const MR_EnumFunctorDesc analysis__analysis__enum_functor_desc_any_call_0_0 = {
  (MR_String) "any_call",
  (MR_Integer) 0
};

#line 2605 "analysis.c"
static const MR_EnumFunctorDescPtr analysis__analysis__enum_value_ordered_any_call_0[1] = {
  &analysis__analysis__enum_functor_desc_any_call_0_0
};

#line 2610 "analysis.c"
static const MR_EnumFunctorDescPtr analysis__analysis__enum_name_ordered_any_call_0[1] = {
  &analysis__analysis__enum_functor_desc_any_call_0_0
};

#line 2615 "analysis.c"
static const MR_Integer analysis__analysis__functor_number_map_any_call_0[1] = {
  (MR_Integer) 0
};

#line 2620 "analysis.c"
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

#line 2637 "analysis.c"
static const MR_EnumFunctorDesc analysis__analysis__enum_functor_desc_fixpoint_type_0_0 = {
  (MR_String) "least_fixpoint",
  (MR_Integer) 0
};

#line 2643 "analysis.c"
static const MR_EnumFunctorDesc analysis__analysis__enum_functor_desc_fixpoint_type_0_1 = {
  (MR_String) "greatest_fixpoint",
  (MR_Integer) 1
};

#line 2649 "analysis.c"
static const MR_EnumFunctorDescPtr analysis__analysis__enum_value_ordered_fixpoint_type_0[2] = {
  &analysis__analysis__enum_functor_desc_fixpoint_type_0_0,
  &analysis__analysis__enum_functor_desc_fixpoint_type_0_1
};

#line 2655 "analysis.c"
static const MR_EnumFunctorDescPtr analysis__analysis__enum_name_ordered_fixpoint_type_0[2] = {
  &analysis__analysis__enum_functor_desc_fixpoint_type_0_1,
  &analysis__analysis__enum_functor_desc_fixpoint_type_0_0
};

#line 2661 "analysis.c"
static const MR_Integer analysis__analysis__functor_number_map_fixpoint_type_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 2667 "analysis.c"
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

#line 2684 "analysis.c"
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

#line 2701 "analysis.c"
static const MR_PseudoTypeInfo analysis__analysis__field_types_func_id_0_0[4] = {
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2709 "analysis.c"
static const MR_ConstString analysis__analysis__field_names_func_id_0_0[4] = {
  (MR_String) "fid_pf",
  (MR_String) "fid_name",
  (MR_String) "fid_arity",
  (MR_String) "fid_mode"
};

#line 2717 "analysis.c"
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

#line 2732 "analysis.c"
static const MR_DuFunctorDescPtr analysis__analysis__du_stag_ordered_func_id_0_0[1] = {
  &analysis__analysis__du_functor_desc_func_id_0_0
};

#line 2737 "analysis.c"
static const MR_DuPtagLayout analysis__analysis__du_ptag_ordered_func_id_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    analysis__analysis__du_stag_ordered_func_id_0_0
  }
};

#line 2746 "analysis.c"
static const MR_DuFunctorDescPtr analysis__analysis__du_name_ordered_func_id_0[1] = {
  &analysis__analysis__du_functor_desc_func_id_0_0
};

#line 2751 "analysis.c"
static const MR_Integer analysis__analysis__functor_number_map_func_id_0[1] = {
  (MR_Integer) 0
};

#line 2756 "analysis.c"
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

#line 2773 "analysis.c"
static const MR_PseudoTypeInfo analysis__analysis__field_types_imdg_arc_0_0[2] = {
  (MR_PseudoTypeInfo) (MR_Integer) 514,
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
};

#line 2779 "analysis.c"
static const MR_ConstString analysis__analysis__field_names_imdg_arc_0_0[2] = {
  (MR_String) "imdg_call",
  (MR_String) "imdg_caller"
};

#line 2785 "analysis.c"
static const MR_TypeClassConstraint_2Struct analysis__analysis__exist_tc_constr_imdg_arc_0_0_1 = {
  &analysis__analysis__type_class_decl_call_pattern_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

#line 2794 "analysis.c"
static const MR_TypeClassConstraint analysis__analysis__exist_tc_constrs_imdg_arc_0_0[1] = {
  (MR_TypeClassConstraint) &analysis__analysis__exist_tc_constr_imdg_arc_0_0_1
};

#line 2799 "analysis.c"
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

#line 2811 "analysis.c"
static const MR_DuExistInfo analysis__analysis__exist_info_imdg_arc_0_0 = {
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 1,
  analysis__analysis__exist_locns_imdg_arc_0_0,
  analysis__analysis__exist_tc_constrs_imdg_arc_0_0
};

#line 2820 "analysis.c"
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

#line 2835 "analysis.c"
static const MR_DuFunctorDescPtr analysis__analysis__du_stag_ordered_imdg_arc_0_0[1] = {
  &analysis__analysis__du_functor_desc_imdg_arc_0_0
};

#line 2840 "analysis.c"
static const MR_DuPtagLayout analysis__analysis__du_ptag_ordered_imdg_arc_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    analysis__analysis__du_stag_ordered_imdg_arc_0_0
  }
};

#line 2849 "analysis.c"
static const MR_DuFunctorDescPtr analysis__analysis__du_name_ordered_imdg_arc_0[1] = {
  &analysis__analysis__du_functor_desc_imdg_arc_0_0
};

#line 2854 "analysis.c"
static const MR_Integer analysis__analysis__functor_number_map_imdg_arc_0[1] = {
  (MR_Integer) 0
};

#line 2859 "analysis.c"
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

#line 2876 "analysis.c"
static const MR_EnumFunctorDesc analysis__analysis__enum_functor_desc_make_analysis_registry_0_0 = {
  (MR_String) "make_analysis_registry",
  (MR_Integer) 0
};

#line 2882 "analysis.c"
static const MR_EnumFunctorDesc analysis__analysis__enum_functor_desc_make_analysis_registry_0_1 = {
  (MR_String) "use_analysis_registry_only",
  (MR_Integer) 1
};

#line 2888 "analysis.c"
static const MR_EnumFunctorDescPtr analysis__analysis__enum_value_ordered_make_analysis_registry_0[2] = {
  &analysis__analysis__enum_functor_desc_make_analysis_registry_0_0,
  &analysis__analysis__enum_functor_desc_make_analysis_registry_0_1
};

#line 2894 "analysis.c"
static const MR_EnumFunctorDescPtr analysis__analysis__enum_name_ordered_make_analysis_registry_0[2] = {
  &analysis__analysis__enum_functor_desc_make_analysis_registry_0_0,
  &analysis__analysis__enum_functor_desc_make_analysis_registry_0_1
};

#line 2900 "analysis.c"
static const MR_Integer analysis__analysis__functor_number_map_make_analysis_registry_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2906 "analysis.c"
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

#line 2923 "analysis.c"
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

#line 2940 "analysis.c"
static const MR_EnumFunctorDesc analysis__analysis__enum_functor_desc_no_func_info_0_0 = {
  (MR_String) "no_func_info",
  (MR_Integer) 0
};

#line 2946 "analysis.c"
static const MR_EnumFunctorDescPtr analysis__analysis__enum_value_ordered_no_func_info_0[1] = {
  &analysis__analysis__enum_functor_desc_no_func_info_0_0
};

#line 2951 "analysis.c"
static const MR_EnumFunctorDescPtr analysis__analysis__enum_name_ordered_no_func_info_0[1] = {
  &analysis__analysis__enum_functor_desc_no_func_info_0_0
};

#line 2956 "analysis.c"
static const MR_Integer analysis__analysis__functor_number_map_no_func_info_0[1] = {
  (MR_Integer) 0
};

#line 2961 "analysis.c"
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

#line 2978 "analysis.c"
static const MR_PseudoTypeInfo analysis__analysis__field_types_some_analysis_result_0_0[3] = {
  (MR_PseudoTypeInfo) (MR_Integer) 514,
  (MR_PseudoTypeInfo) (MR_Integer) 515,
  (MR_PseudoTypeInfo) &analysis__analysis__type_ctor_info_analysis_status_0
};

#line 2985 "analysis.c"
static const MR_ConstString analysis__analysis__field_names_some_analysis_result_0_0[3] = {
  (MR_String) "some_ar_call",
  (MR_String) "some_ar_answer",
  (MR_String) "some_ar_status"
};

#line 2992 "analysis.c"
static const MR_TypeClassConstraint_3Struct analysis__analysis__exist_tc_constr_some_analysis_result_0_0_1 = {
  &analysis__analysis__type_class_decl_analysis_3,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 2,
    (MR_PseudoTypeInfo) (MR_Integer) 3
  }
};

#line 3002 "analysis.c"
static const MR_TypeClassConstraint analysis__analysis__exist_tc_constrs_some_analysis_result_0_0[1] = {
  (MR_TypeClassConstraint) &analysis__analysis__exist_tc_constr_some_analysis_result_0_0_1
};

#line 3007 "analysis.c"
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

#line 3023 "analysis.c"
static const MR_DuExistInfo analysis__analysis__exist_info_some_analysis_result_0_0 = {
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 1,
  analysis__analysis__exist_locns_some_analysis_result_0_0,
  analysis__analysis__exist_tc_constrs_some_analysis_result_0_0
};

#line 3032 "analysis.c"
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

#line 3047 "analysis.c"
static const MR_DuFunctorDescPtr analysis__analysis__du_stag_ordered_some_analysis_result_0_0[1] = {
  &analysis__analysis__du_functor_desc_some_analysis_result_0_0
};

#line 3052 "analysis.c"
static const MR_DuPtagLayout analysis__analysis__du_ptag_ordered_some_analysis_result_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    analysis__analysis__du_stag_ordered_some_analysis_result_0_0
  }
};

#line 3061 "analysis.c"
static const MR_DuFunctorDescPtr analysis__analysis__du_name_ordered_some_analysis_result_0[1] = {
  &analysis__analysis__du_functor_desc_some_analysis_result_0_0
};

#line 3066 "analysis.c"
static const MR_Integer analysis__analysis__functor_number_map_some_analysis_result_0[1] = {
  (MR_Integer) 0
};

#line 3071 "analysis.c"
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

#line 3088 "analysis.c"
const MR_BaseTypeclassInfo base_typeclass_info_analysis__to_term__arity1__analysis__any_call__arity0__[7] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (MR_Word) ((MR_Integer) 2)),
  ((MR_Box) (analysis__ClassMethod_for_analysis__to_term____analysis__any_call__arity0______analysis__to_term_1_1_f_0_10001)),
  ((MR_Box) (analysis__ClassMethod_for_analysis__to_term____analysis__any_call__arity0______analysis__from_term_2_2_p_0_10001))
};

#line 3099 "analysis.c"
const MR_BaseTypeclassInfo base_typeclass_info_analysis__partial_order__arity2__analysis__no_func_info__arity0__analysis__any_call__arity0__[7] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 2)),
  ((MR_Box) (MR_Word) ((MR_Integer) 2)),
  ((MR_Box) (analysis__ClassMethod_for_analysis__partial_order____analysis__no_func_info__arity0__analysis__any_call__arity0______analysis__more_precise_than_3_3_p_0_10001)),
  ((MR_Box) (analysis__ClassMethod_for_analysis__partial_order____analysis__no_func_info__arity0__analysis__any_call__arity0______analysis__equivalent_3_3_p_0_10001))
};

#line 3110 "analysis.c"
const MR_BaseTypeclassInfo base_typeclass_info_analysis__call_pattern__arity2__analysis__no_func_info__arity0__analysis__any_call__arity0__[5] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 2)),
  ((MR_Box) (MR_Word) ((MR_Integer) 2)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0))
};

#line 3119 "analysis.c"
static const MR_ConstString analysis__analysis__type_class_id_var_names_to_term_1[1] = {
  (MR_String) "S"
};

#line 3124 "analysis.c"
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

#line 3138 "analysis.c"
static const MR_TypeClassId analysis__analysis__type_class_id_to_term_1 = {
  (MR_String) "analysis",
  (MR_String) "to_term",
  (MR_Integer) 1,
  (MR_Integer) 1,
  (MR_Integer) 2,
  analysis__analysis__type_class_id_var_names_to_term_1,
  analysis__analysis__type_class_id_method_ids_to_term_1
};

#line 3149 "analysis.c"
const MR_TypeClassDeclStruct analysis__analysis__type_class_decl_to_term_1 = {
  &analysis__analysis__type_class_id_to_term_1,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL
};

#line 3157 "analysis.c"
static const MR_ConstString analysis__analysis__type_class_id_var_names_partial_order_2[2] = {
  (MR_String) "FuncInfo",
  (MR_String) "T"
};

#line 3163 "analysis.c"
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

#line 3177 "analysis.c"
static const MR_TypeClassId analysis__analysis__type_class_id_partial_order_2 = {
  (MR_String) "analysis",
  (MR_String) "partial_order",
  (MR_Integer) 2,
  (MR_Integer) 2,
  (MR_Integer) 2,
  analysis__analysis__type_class_id_var_names_partial_order_2,
  analysis__analysis__type_class_id_method_ids_partial_order_2
};

#line 3188 "analysis.c"
const MR_TypeClassDeclStruct analysis__analysis__type_class_decl_partial_order_2 = {
  &analysis__analysis__type_class_id_partial_order_2,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL
};

#line 3196 "analysis.c"
static const MR_ConstString analysis__analysis__type_class_id_var_names_compiler_1[1] = {
  (MR_String) "Compiler"
};

#line 3201 "analysis.c"
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

#line 3225 "analysis.c"
static const MR_TypeClassId analysis__analysis__type_class_id_compiler_1 = {
  (MR_String) "analysis",
  (MR_String) "compiler",
  (MR_Integer) 1,
  (MR_Integer) 1,
  (MR_Integer) 4,
  analysis__analysis__type_class_id_var_names_compiler_1,
  analysis__analysis__type_class_id_method_ids_compiler_1
};

#line 3236 "analysis.c"
const MR_TypeClassDeclStruct analysis__analysis__type_class_decl_compiler_1 = {
  &analysis__analysis__type_class_id_compiler_1,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL
};

#line 3244 "analysis.c"
static const MR_ConstString analysis__analysis__type_class_id_var_names_call_pattern_2[2] = {
  (MR_String) "FuncInfo",
  (MR_String) "Call"
};

#line 3250 "analysis.c"
static const MR_TypeClassId analysis__analysis__type_class_id_call_pattern_2 = {
  (MR_String) "analysis",
  (MR_String) "call_pattern",
  (MR_Integer) 2,
  (MR_Integer) 2,
  (MR_Integer) 0,
  analysis__analysis__type_class_id_var_names_call_pattern_2,
  NULL
};

#line 3261 "analysis.c"
static const MR_TypeClassConstraint_2Struct analysis__analysis__type_class_decl_super_call_pattern_2_1 = {
  &analysis__analysis__type_class_decl_partial_order_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

#line 3270 "analysis.c"
static const MR_TypeClassConstraint_1Struct analysis__analysis__type_class_decl_super_call_pattern_2_2 = {
  &analysis__analysis__type_class_decl_to_term_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

#line 3278 "analysis.c"
static const MR_TypeClassConstraint analysis__analysis__type_class_decl_supers_call_pattern_2[2] = {
  (MR_TypeClassConstraint) &analysis__analysis__type_class_decl_super_call_pattern_2_1,
  (MR_TypeClassConstraint) &analysis__analysis__type_class_decl_super_call_pattern_2_2
};

#line 3284 "analysis.c"
const MR_TypeClassDeclStruct analysis__analysis__type_class_decl_call_pattern_2 = {
  &analysis__analysis__type_class_id_call_pattern_2,
  (MR_Integer) 0,
  (MR_Integer) 2,
  NULL
};

#line 3292 "analysis.c"
static const MR_ConstString analysis__analysis__type_class_id_var_names_answer_pattern_2[2] = {
  (MR_String) "FuncInfo",
  (MR_String) "Answer"
};

#line 3298 "analysis.c"
static const MR_TypeClassId analysis__analysis__type_class_id_answer_pattern_2 = {
  (MR_String) "analysis",
  (MR_String) "answer_pattern",
  (MR_Integer) 2,
  (MR_Integer) 2,
  (MR_Integer) 0,
  analysis__analysis__type_class_id_var_names_answer_pattern_2,
  NULL
};

#line 3309 "analysis.c"
static const MR_TypeClassConstraint_2Struct analysis__analysis__type_class_decl_super_answer_pattern_2_1 = {
  &analysis__analysis__type_class_decl_partial_order_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

#line 3318 "analysis.c"
static const MR_TypeClassConstraint_1Struct analysis__analysis__type_class_decl_super_answer_pattern_2_2 = {
  &analysis__analysis__type_class_decl_to_term_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

#line 3326 "analysis.c"
static const MR_TypeClassConstraint analysis__analysis__type_class_decl_supers_answer_pattern_2[2] = {
  (MR_TypeClassConstraint) &analysis__analysis__type_class_decl_super_answer_pattern_2_1,
  (MR_TypeClassConstraint) &analysis__analysis__type_class_decl_super_answer_pattern_2_2
};

#line 3332 "analysis.c"
const MR_TypeClassDeclStruct analysis__analysis__type_class_decl_answer_pattern_2 = {
  &analysis__analysis__type_class_id_answer_pattern_2,
  (MR_Integer) 0,
  (MR_Integer) 2,
  NULL
};

#line 3340 "analysis.c"
static const MR_ConstString analysis__analysis__type_class_id_var_names_analysis_3[3] = {
  (MR_String) "FuncInfo",
  (MR_String) "Call",
  (MR_String) "Answer"
};

#line 3347 "analysis.c"
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

#line 3381 "analysis.c"
static const MR_TypeClassId analysis__analysis__type_class_id_analysis_3 = {
  (MR_String) "analysis",
  (MR_String) "analysis",
  (MR_Integer) 3,
  (MR_Integer) 3,
  (MR_Integer) 6,
  analysis__analysis__type_class_id_var_names_analysis_3,
  analysis__analysis__type_class_id_method_ids_analysis_3
};

#line 3392 "analysis.c"
static const MR_TypeClassConstraint_2Struct analysis__analysis__type_class_decl_super_analysis_3_1 = {
  &analysis__analysis__type_class_decl_call_pattern_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

#line 3401 "analysis.c"
static const MR_TypeClassConstraint_2Struct analysis__analysis__type_class_decl_super_analysis_3_2 = {
  &analysis__analysis__type_class_decl_answer_pattern_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 3
  }
};

#line 3410 "analysis.c"
static const MR_TypeClassConstraint analysis__analysis__type_class_decl_supers_analysis_3[2] = {
  (MR_TypeClassConstraint) &analysis__analysis__type_class_decl_super_analysis_3_1,
  (MR_TypeClassConstraint) &analysis__analysis__type_class_decl_super_analysis_3_2
};

#line 3416 "analysis.c"
const MR_TypeClassDeclStruct analysis__analysis__type_class_decl_analysis_3 = {
  &analysis__analysis__type_class_id_analysis_3,
  (MR_Integer) 0,
  (MR_Integer) 2,
  NULL
};

#line 3424 "analysis.c"
static MR_bool MR_CALL 
analysis____Unify____analysis_info_0_0_10001(
#line 3427 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 3429 "analysis.c"
  MR_Box analysis__wrapper_arg_2)
#line 3431 "analysis.c"
{
#line 3433 "analysis.c"
  {
#line 3435 "analysis.c"
    MR_bool analysis__succeeded;

#line 3438 "analysis.c"
    {
#line 3440 "analysis.c"
      analysis__succeeded = analysis____Unify____analysis_info_0_0(((MR_Word) analysis__wrapper_arg_1), ((MR_Word) analysis__wrapper_arg_2));
    }
#line 3443 "analysis.c"
    return analysis__succeeded;
#line 3445 "analysis.c"
  }
#line 3447 "analysis.c"
}

#line 3450 "analysis.c"
static void MR_CALL 
analysis____Compare____analysis_info_0_0_10001(
#line 3453 "analysis.c"
  MR_Box * analysis__wrapper_arg_1,
#line 3455 "analysis.c"
  MR_Box analysis__wrapper_arg_2,
#line 3457 "analysis.c"
  MR_Box analysis__wrapper_arg_3)
#line 3459 "analysis.c"
{
#line 3461 "analysis.c"
  {
#line 3463 "analysis.c"
    MR_Word analysis__conv0_HeadVar__1_1;

#line 3466 "analysis.c"
    {
#line 3468 "analysis.c"
      analysis____Compare____analysis_info_0_0(&analysis__conv0_HeadVar__1_1, ((MR_Word) analysis__wrapper_arg_2), ((MR_Word) analysis__wrapper_arg_3));
    }
#line 3471 "analysis.c"
    *analysis__wrapper_arg_1 = ((MR_Box) (analysis__conv0_HeadVar__1_1));
#line 3473 "analysis.c"
  }
#line 3475 "analysis.c"
}

#line 3478 "analysis.c"
static MR_bool MR_CALL 
analysis____Unify____analysis_map_1_0_10001(
#line 3481 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 3483 "analysis.c"
  MR_Box analysis__wrapper_arg_2,
#line 3485 "analysis.c"
  MR_Box analysis__wrapper_arg_3)
#line 3487 "analysis.c"
{
#line 3489 "analysis.c"
  {
#line 3491 "analysis.c"
    MR_bool analysis__succeeded;

#line 3494 "analysis.c"
    {
#line 3496 "analysis.c"
      analysis__succeeded = analysis____Unify____analysis_map_1_0(((MR_Word) analysis__wrapper_arg_1), ((MR_Word) analysis__wrapper_arg_2), ((MR_Word) analysis__wrapper_arg_3));
    }
#line 3499 "analysis.c"
    return analysis__succeeded;
#line 3501 "analysis.c"
  }
#line 3503 "analysis.c"
}

#line 3506 "analysis.c"
static void MR_CALL 
analysis____Compare____analysis_map_1_0_10001(
#line 3509 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 3511 "analysis.c"
  MR_Box * analysis__wrapper_arg_2,
#line 3513 "analysis.c"
  MR_Box analysis__wrapper_arg_3,
#line 3515 "analysis.c"
  MR_Box analysis__wrapper_arg_4)
#line 3517 "analysis.c"
{
#line 3519 "analysis.c"
  {
#line 3521 "analysis.c"
    MR_Word analysis__conv0_HeadVar__1_1;

#line 3524 "analysis.c"
    {
#line 3526 "analysis.c"
      analysis____Compare____analysis_map_1_0(((MR_Word) analysis__wrapper_arg_1), &analysis__conv0_HeadVar__1_1, ((MR_Word) analysis__wrapper_arg_3), ((MR_Word) analysis__wrapper_arg_4));
    }
#line 3529 "analysis.c"
    *analysis__wrapper_arg_2 = ((MR_Box) (analysis__conv0_HeadVar__1_1));
#line 3531 "analysis.c"
  }
#line 3533 "analysis.c"
}

#line 3536 "analysis.c"
static MR_bool MR_CALL 
analysis____Unify____analysis_name_0_0_10001(
#line 3539 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 3541 "analysis.c"
  MR_Box analysis__wrapper_arg_2)
#line 3543 "analysis.c"
{
#line 3545 "analysis.c"
  {
#line 3547 "analysis.c"
    MR_bool analysis__succeeded;

#line 3550 "analysis.c"
    {
#line 3552 "analysis.c"
      analysis__succeeded = analysis____Unify____analysis_name_0_0(((MR_String) analysis__wrapper_arg_1), ((MR_String) analysis__wrapper_arg_2));
    }
#line 3555 "analysis.c"
    return analysis__succeeded;
#line 3557 "analysis.c"
  }
#line 3559 "analysis.c"
}

#line 3562 "analysis.c"
static void MR_CALL 
analysis____Compare____analysis_name_0_0_10001(
#line 3565 "analysis.c"
  MR_Box * analysis__wrapper_arg_1,
#line 3567 "analysis.c"
  MR_Box analysis__wrapper_arg_2,
#line 3569 "analysis.c"
  MR_Box analysis__wrapper_arg_3)
#line 3571 "analysis.c"
{
#line 3573 "analysis.c"
  {
#line 3575 "analysis.c"
    MR_Word analysis__conv0_HeadVar__1_1;

#line 3578 "analysis.c"
    {
#line 3580 "analysis.c"
      analysis____Compare____analysis_name_0_0(&analysis__conv0_HeadVar__1_1, ((MR_String) analysis__wrapper_arg_2), ((MR_String) analysis__wrapper_arg_3));
    }
#line 3583 "analysis.c"
    *analysis__wrapper_arg_1 = ((MR_Box) (analysis__conv0_HeadVar__1_1));
#line 3585 "analysis.c"
  }
#line 3587 "analysis.c"
}

#line 3590 "analysis.c"
static MR_bool MR_CALL 
analysis____Unify____analysis_request_0_0_10001(
#line 3593 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 3595 "analysis.c"
  MR_Box analysis__wrapper_arg_2)
#line 3597 "analysis.c"
{
#line 3599 "analysis.c"
  {
#line 3601 "analysis.c"
    MR_bool analysis__succeeded;

#line 3604 "analysis.c"
    {
#line 3606 "analysis.c"
      analysis__succeeded = analysis____Unify____analysis_request_0_0(((MR_Word) analysis__wrapper_arg_1), ((MR_Word) analysis__wrapper_arg_2));
    }
#line 3609 "analysis.c"
    return analysis__succeeded;
#line 3611 "analysis.c"
  }
#line 3613 "analysis.c"
}

#line 3616 "analysis.c"
static void MR_CALL 
analysis____Compare____analysis_request_0_0_10001(
#line 3619 "analysis.c"
  MR_Box * analysis__wrapper_arg_1,
#line 3621 "analysis.c"
  MR_Box analysis__wrapper_arg_2,
#line 3623 "analysis.c"
  MR_Box analysis__wrapper_arg_3)
#line 3625 "analysis.c"
{
#line 3627 "analysis.c"
  {
#line 3629 "analysis.c"
    MR_Word analysis__conv0_HeadVar__1_1;

#line 3632 "analysis.c"
    {
#line 3634 "analysis.c"
      analysis____Compare____analysis_request_0_0(&analysis__conv0_HeadVar__1_1, ((MR_Word) analysis__wrapper_arg_2), ((MR_Word) analysis__wrapper_arg_3));
    }
#line 3637 "analysis.c"
    *analysis__wrapper_arg_1 = ((MR_Box) (analysis__conv0_HeadVar__1_1));
#line 3639 "analysis.c"
  }
#line 3641 "analysis.c"
}

#line 3644 "analysis.c"
static MR_bool MR_CALL 
analysis____Unify____analysis_result_2_0_10001(
#line 3647 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 3649 "analysis.c"
  MR_Box analysis__wrapper_arg_2,
#line 3651 "analysis.c"
  MR_Box analysis__wrapper_arg_3,
#line 3653 "analysis.c"
  MR_Box analysis__wrapper_arg_4)
#line 3655 "analysis.c"
{
#line 3657 "analysis.c"
  {
#line 3659 "analysis.c"
    MR_bool analysis__succeeded;

#line 3662 "analysis.c"
    {
#line 3664 "analysis.c"
      analysis__succeeded = analysis____Unify____analysis_result_2_0(((MR_Word) analysis__wrapper_arg_1), ((MR_Word) analysis__wrapper_arg_2), ((MR_Word) analysis__wrapper_arg_3), ((MR_Word) analysis__wrapper_arg_4));
    }
#line 3667 "analysis.c"
    return analysis__succeeded;
#line 3669 "analysis.c"
  }
#line 3671 "analysis.c"
}

#line 3674 "analysis.c"
static void MR_CALL 
analysis____Compare____analysis_result_2_0_10001(
#line 3677 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 3679 "analysis.c"
  MR_Box analysis__wrapper_arg_2,
#line 3681 "analysis.c"
  MR_Box * analysis__wrapper_arg_3,
#line 3683 "analysis.c"
  MR_Box analysis__wrapper_arg_4,
#line 3685 "analysis.c"
  MR_Box analysis__wrapper_arg_5)
#line 3687 "analysis.c"
{
#line 3689 "analysis.c"
  {
#line 3691 "analysis.c"
    MR_Word analysis__conv0_HeadVar__1_1;

#line 3694 "analysis.c"
    {
#line 3696 "analysis.c"
      analysis____Compare____analysis_result_2_0(((MR_Word) analysis__wrapper_arg_1), ((MR_Word) analysis__wrapper_arg_2), &analysis__conv0_HeadVar__1_1, ((MR_Word) analysis__wrapper_arg_4), ((MR_Word) analysis__wrapper_arg_5));
    }
#line 3699 "analysis.c"
    *analysis__wrapper_arg_3 = ((MR_Box) (analysis__conv0_HeadVar__1_1));
#line 3701 "analysis.c"
  }
#line 3703 "analysis.c"
}

#line 3706 "analysis.c"
static MR_bool MR_CALL 
analysis____Unify____analysis_status_0_0_10001(
#line 3709 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 3711 "analysis.c"
  MR_Box analysis__wrapper_arg_2)
#line 3713 "analysis.c"
{
#line 3715 "analysis.c"
  {
#line 3717 "analysis.c"
    MR_bool analysis__succeeded;

#line 3720 "analysis.c"
    {
#line 3722 "analysis.c"
      analysis__succeeded = analysis____Unify____analysis_status_0_0(((MR_Word) analysis__wrapper_arg_1), ((MR_Word) analysis__wrapper_arg_2));
    }
#line 3725 "analysis.c"
    return analysis__succeeded;
#line 3727 "analysis.c"
  }
#line 3729 "analysis.c"
}

#line 3732 "analysis.c"
static void MR_CALL 
analysis____Compare____analysis_status_0_0_10001(
#line 3735 "analysis.c"
  MR_Box * analysis__wrapper_arg_1,
#line 3737 "analysis.c"
  MR_Box analysis__wrapper_arg_2,
#line 3739 "analysis.c"
  MR_Box analysis__wrapper_arg_3)
#line 3741 "analysis.c"
{
#line 3743 "analysis.c"
  {
#line 3745 "analysis.c"
    MR_Word analysis__conv0_HeadVar__1_1;

#line 3748 "analysis.c"
    {
#line 3750 "analysis.c"
      analysis____Compare____analysis_status_0_0(&analysis__conv0_HeadVar__1_1, ((MR_Word) analysis__wrapper_arg_2), ((MR_Word) analysis__wrapper_arg_3));
    }
#line 3753 "analysis.c"
    *analysis__wrapper_arg_1 = ((MR_Box) (analysis__conv0_HeadVar__1_1));
#line 3755 "analysis.c"
  }
#line 3757 "analysis.c"
}

#line 3760 "analysis.c"
static MR_bool MR_CALL 
analysis____Unify____analysis_type_0_0_10001(
#line 3763 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 3765 "analysis.c"
  MR_Box analysis__wrapper_arg_2)
#line 3767 "analysis.c"
{
#line 3769 "analysis.c"
  {
#line 3771 "analysis.c"
    MR_bool analysis__succeeded;

#line 3774 "analysis.c"
    {
#line 3776 "analysis.c"
      analysis__succeeded = analysis____Unify____analysis_type_0_0(((MR_Word) analysis__wrapper_arg_1), ((MR_Word) analysis__wrapper_arg_2));
    }
#line 3779 "analysis.c"
    return analysis__succeeded;
#line 3781 "analysis.c"
  }
#line 3783 "analysis.c"
}

#line 3786 "analysis.c"
static void MR_CALL 
analysis____Compare____analysis_type_0_0_10001(
#line 3789 "analysis.c"
  MR_Box * analysis__wrapper_arg_1,
#line 3791 "analysis.c"
  MR_Box analysis__wrapper_arg_2,
#line 3793 "analysis.c"
  MR_Box analysis__wrapper_arg_3)
#line 3795 "analysis.c"
{
#line 3797 "analysis.c"
  {
#line 3799 "analysis.c"
    MR_Word analysis__conv0_HeadVar__1_1;

#line 3802 "analysis.c"
    {
#line 3804 "analysis.c"
      analysis____Compare____analysis_type_0_0(&analysis__conv0_HeadVar__1_1, ((MR_Word) analysis__wrapper_arg_2), ((MR_Word) analysis__wrapper_arg_3));
    }
#line 3807 "analysis.c"
    *analysis__wrapper_arg_1 = ((MR_Box) (analysis__conv0_HeadVar__1_1));
#line 3809 "analysis.c"
  }
#line 3811 "analysis.c"
}

#line 3814 "analysis.c"
static MR_bool MR_CALL 
analysis____Unify____any_call_0_0_10001(
#line 3817 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 3819 "analysis.c"
  MR_Box analysis__wrapper_arg_2)
#line 3821 "analysis.c"
{
#line 3823 "analysis.c"
  {
#line 3825 "analysis.c"
    MR_bool analysis__succeeded;

#line 3828 "analysis.c"
    {
#line 3830 "analysis.c"
      analysis__succeeded = analysis____Unify____any_call_0_0();
    }
#line 3833 "analysis.c"
    return analysis__succeeded;
#line 3835 "analysis.c"
  }
#line 3837 "analysis.c"
}

#line 3840 "analysis.c"
static void MR_CALL 
analysis____Compare____any_call_0_0_10001(
#line 3843 "analysis.c"
  MR_Box * analysis__wrapper_arg_1,
#line 3845 "analysis.c"
  MR_Box analysis__wrapper_arg_2,
#line 3847 "analysis.c"
  MR_Box analysis__wrapper_arg_3)
#line 3849 "analysis.c"
{
#line 3851 "analysis.c"
  {
#line 3853 "analysis.c"
    MR_Word analysis__conv0_HeadVar__1_1;

#line 3856 "analysis.c"
    {
#line 3858 "analysis.c"
      analysis____Compare____any_call_0_0(&analysis__conv0_HeadVar__1_1);
    }
#line 3861 "analysis.c"
    *analysis__wrapper_arg_1 = ((MR_Box) (analysis__conv0_HeadVar__1_1));
#line 3863 "analysis.c"
  }
#line 3865 "analysis.c"
}

#line 3868 "analysis.c"
static MR_bool MR_CALL 
analysis____Unify____fixpoint_type_0_0_10001(
#line 3871 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 3873 "analysis.c"
  MR_Box analysis__wrapper_arg_2)
#line 3875 "analysis.c"
{
#line 3877 "analysis.c"
  {
#line 3879 "analysis.c"
    MR_bool analysis__succeeded;

#line 3882 "analysis.c"
    {
#line 3884 "analysis.c"
      analysis__succeeded = analysis____Unify____fixpoint_type_0_0(((MR_Word) analysis__wrapper_arg_1), ((MR_Word) analysis__wrapper_arg_2));
    }
#line 3887 "analysis.c"
    return analysis__succeeded;
#line 3889 "analysis.c"
  }
#line 3891 "analysis.c"
}

#line 3894 "analysis.c"
static void MR_CALL 
analysis____Compare____fixpoint_type_0_0_10001(
#line 3897 "analysis.c"
  MR_Box * analysis__wrapper_arg_1,
#line 3899 "analysis.c"
  MR_Box analysis__wrapper_arg_2,
#line 3901 "analysis.c"
  MR_Box analysis__wrapper_arg_3)
#line 3903 "analysis.c"
{
#line 3905 "analysis.c"
  {
#line 3907 "analysis.c"
    MR_Word analysis__conv0_HeadVar__1_1;

#line 3910 "analysis.c"
    {
#line 3912 "analysis.c"
      analysis____Compare____fixpoint_type_0_0(&analysis__conv0_HeadVar__1_1, ((MR_Word) analysis__wrapper_arg_2), ((MR_Word) analysis__wrapper_arg_3));
    }
#line 3915 "analysis.c"
    *analysis__wrapper_arg_1 = ((MR_Box) (analysis__conv0_HeadVar__1_1));
#line 3917 "analysis.c"
  }
#line 3919 "analysis.c"
}

#line 3922 "analysis.c"
static MR_bool MR_CALL 
analysis____Unify____func_analysis_map_1_0_10001(
#line 3925 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 3927 "analysis.c"
  MR_Box analysis__wrapper_arg_2,
#line 3929 "analysis.c"
  MR_Box analysis__wrapper_arg_3)
#line 3931 "analysis.c"
{
#line 3933 "analysis.c"
  {
#line 3935 "analysis.c"
    MR_bool analysis__succeeded;

#line 3938 "analysis.c"
    {
#line 3940 "analysis.c"
      analysis__succeeded = analysis____Unify____func_analysis_map_1_0(((MR_Word) analysis__wrapper_arg_1), ((MR_Word) analysis__wrapper_arg_2), ((MR_Word) analysis__wrapper_arg_3));
    }
#line 3943 "analysis.c"
    return analysis__succeeded;
#line 3945 "analysis.c"
  }
#line 3947 "analysis.c"
}

#line 3950 "analysis.c"
static void MR_CALL 
analysis____Compare____func_analysis_map_1_0_10001(
#line 3953 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 3955 "analysis.c"
  MR_Box * analysis__wrapper_arg_2,
#line 3957 "analysis.c"
  MR_Box analysis__wrapper_arg_3,
#line 3959 "analysis.c"
  MR_Box analysis__wrapper_arg_4)
#line 3961 "analysis.c"
{
#line 3963 "analysis.c"
  {
#line 3965 "analysis.c"
    MR_Word analysis__conv0_HeadVar__1_1;

#line 3968 "analysis.c"
    {
#line 3970 "analysis.c"
      analysis____Compare____func_analysis_map_1_0(((MR_Word) analysis__wrapper_arg_1), &analysis__conv0_HeadVar__1_1, ((MR_Word) analysis__wrapper_arg_3), ((MR_Word) analysis__wrapper_arg_4));
    }
#line 3973 "analysis.c"
    *analysis__wrapper_arg_2 = ((MR_Box) (analysis__conv0_HeadVar__1_1));
#line 3975 "analysis.c"
  }
#line 3977 "analysis.c"
}

#line 3980 "analysis.c"
static MR_bool MR_CALL 
analysis____Unify____func_id_0_0_10001(
#line 3983 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 3985 "analysis.c"
  MR_Box analysis__wrapper_arg_2)
#line 3987 "analysis.c"
{
#line 3989 "analysis.c"
  {
#line 3991 "analysis.c"
    MR_bool analysis__succeeded;

#line 3994 "analysis.c"
    {
#line 3996 "analysis.c"
      analysis__succeeded = analysis____Unify____func_id_0_0(((MR_Word) analysis__wrapper_arg_1), ((MR_Word) analysis__wrapper_arg_2));
    }
#line 3999 "analysis.c"
    return analysis__succeeded;
#line 4001 "analysis.c"
  }
#line 4003 "analysis.c"
}

#line 4006 "analysis.c"
static void MR_CALL 
analysis____Compare____func_id_0_0_10001(
#line 4009 "analysis.c"
  MR_Box * analysis__wrapper_arg_1,
#line 4011 "analysis.c"
  MR_Box analysis__wrapper_arg_2,
#line 4013 "analysis.c"
  MR_Box analysis__wrapper_arg_3)
#line 4015 "analysis.c"
{
#line 4017 "analysis.c"
  {
#line 4019 "analysis.c"
    MR_Word analysis__conv0_HeadVar__1_1;

#line 4022 "analysis.c"
    {
#line 4024 "analysis.c"
      analysis____Compare____func_id_0_0(&analysis__conv0_HeadVar__1_1, ((MR_Word) analysis__wrapper_arg_2), ((MR_Word) analysis__wrapper_arg_3));
    }
#line 4027 "analysis.c"
    *analysis__wrapper_arg_1 = ((MR_Box) (analysis__conv0_HeadVar__1_1));
#line 4029 "analysis.c"
  }
#line 4031 "analysis.c"
}

#line 4034 "analysis.c"
static MR_bool MR_CALL 
analysis____Unify____imdg_arc_0_0_10001(
#line 4037 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 4039 "analysis.c"
  MR_Box analysis__wrapper_arg_2)
#line 4041 "analysis.c"
{
#line 4043 "analysis.c"
  {
#line 4045 "analysis.c"
    MR_bool analysis__succeeded;

#line 4048 "analysis.c"
    {
#line 4050 "analysis.c"
      analysis__succeeded = analysis____Unify____imdg_arc_0_0(((MR_Word) analysis__wrapper_arg_1), ((MR_Word) analysis__wrapper_arg_2));
    }
#line 4053 "analysis.c"
    return analysis__succeeded;
#line 4055 "analysis.c"
  }
#line 4057 "analysis.c"
}

#line 4060 "analysis.c"
static void MR_CALL 
analysis____Compare____imdg_arc_0_0_10001(
#line 4063 "analysis.c"
  MR_Box * analysis__wrapper_arg_1,
#line 4065 "analysis.c"
  MR_Box analysis__wrapper_arg_2,
#line 4067 "analysis.c"
  MR_Box analysis__wrapper_arg_3)
#line 4069 "analysis.c"
{
#line 4071 "analysis.c"
  {
#line 4073 "analysis.c"
    MR_Word analysis__conv0_HeadVar__1_1;

#line 4076 "analysis.c"
    {
#line 4078 "analysis.c"
      analysis____Compare____imdg_arc_0_0(&analysis__conv0_HeadVar__1_1, ((MR_Word) analysis__wrapper_arg_2), ((MR_Word) analysis__wrapper_arg_3));
    }
#line 4081 "analysis.c"
    *analysis__wrapper_arg_1 = ((MR_Box) (analysis__conv0_HeadVar__1_1));
#line 4083 "analysis.c"
  }
#line 4085 "analysis.c"
}

#line 4088 "analysis.c"
static MR_bool MR_CALL 
analysis____Unify____make_analysis_registry_0_0_10001(
#line 4091 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 4093 "analysis.c"
  MR_Box analysis__wrapper_arg_2)
#line 4095 "analysis.c"
{
#line 4097 "analysis.c"
  {
#line 4099 "analysis.c"
    MR_bool analysis__succeeded;

#line 4102 "analysis.c"
    {
#line 4104 "analysis.c"
      analysis__succeeded = analysis____Unify____make_analysis_registry_0_0(((MR_Word) analysis__wrapper_arg_1), ((MR_Word) analysis__wrapper_arg_2));
    }
#line 4107 "analysis.c"
    return analysis__succeeded;
#line 4109 "analysis.c"
  }
#line 4111 "analysis.c"
}

#line 4114 "analysis.c"
static void MR_CALL 
analysis____Compare____make_analysis_registry_0_0_10001(
#line 4117 "analysis.c"
  MR_Box * analysis__wrapper_arg_1,
#line 4119 "analysis.c"
  MR_Box analysis__wrapper_arg_2,
#line 4121 "analysis.c"
  MR_Box analysis__wrapper_arg_3)
#line 4123 "analysis.c"
{
#line 4125 "analysis.c"
  {
#line 4127 "analysis.c"
    MR_Word analysis__conv0_HeadVar__1_1;

#line 4130 "analysis.c"
    {
#line 4132 "analysis.c"
      analysis____Compare____make_analysis_registry_0_0(&analysis__conv0_HeadVar__1_1, ((MR_Word) analysis__wrapper_arg_2), ((MR_Word) analysis__wrapper_arg_3));
    }
#line 4135 "analysis.c"
    *analysis__wrapper_arg_1 = ((MR_Box) (analysis__conv0_HeadVar__1_1));
#line 4137 "analysis.c"
  }
#line 4139 "analysis.c"
}

#line 4142 "analysis.c"
static MR_bool MR_CALL 
analysis____Unify____module_analysis_map_1_0_10001(
#line 4145 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 4147 "analysis.c"
  MR_Box analysis__wrapper_arg_2,
#line 4149 "analysis.c"
  MR_Box analysis__wrapper_arg_3)
#line 4151 "analysis.c"
{
#line 4153 "analysis.c"
  {
#line 4155 "analysis.c"
    MR_bool analysis__succeeded;

#line 4158 "analysis.c"
    {
#line 4160 "analysis.c"
      analysis__succeeded = analysis____Unify____module_analysis_map_1_0(((MR_Word) analysis__wrapper_arg_1), ((MR_Word) analysis__wrapper_arg_2), ((MR_Word) analysis__wrapper_arg_3));
    }
#line 4163 "analysis.c"
    return analysis__succeeded;
#line 4165 "analysis.c"
  }
#line 4167 "analysis.c"
}

#line 4170 "analysis.c"
static void MR_CALL 
analysis____Compare____module_analysis_map_1_0_10001(
#line 4173 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 4175 "analysis.c"
  MR_Box * analysis__wrapper_arg_2,
#line 4177 "analysis.c"
  MR_Box analysis__wrapper_arg_3,
#line 4179 "analysis.c"
  MR_Box analysis__wrapper_arg_4)
#line 4181 "analysis.c"
{
#line 4183 "analysis.c"
  {
#line 4185 "analysis.c"
    MR_Word analysis__conv0_HeadVar__1_1;

#line 4188 "analysis.c"
    {
#line 4190 "analysis.c"
      analysis____Compare____module_analysis_map_1_0(((MR_Word) analysis__wrapper_arg_1), &analysis__conv0_HeadVar__1_1, ((MR_Word) analysis__wrapper_arg_3), ((MR_Word) analysis__wrapper_arg_4));
    }
#line 4193 "analysis.c"
    *analysis__wrapper_arg_2 = ((MR_Box) (analysis__conv0_HeadVar__1_1));
#line 4195 "analysis.c"
  }
#line 4197 "analysis.c"
}

#line 4200 "analysis.c"
static MR_bool MR_CALL 
analysis____Unify____no_func_info_0_0_10001(
#line 4203 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 4205 "analysis.c"
  MR_Box analysis__wrapper_arg_2)
#line 4207 "analysis.c"
{
#line 4209 "analysis.c"
  {
#line 4211 "analysis.c"
    MR_bool analysis__succeeded;

#line 4214 "analysis.c"
    {
#line 4216 "analysis.c"
      analysis__succeeded = analysis____Unify____no_func_info_0_0();
    }
#line 4219 "analysis.c"
    return analysis__succeeded;
#line 4221 "analysis.c"
  }
#line 4223 "analysis.c"
}

#line 4226 "analysis.c"
static void MR_CALL 
analysis____Compare____no_func_info_0_0_10001(
#line 4229 "analysis.c"
  MR_Box * analysis__wrapper_arg_1,
#line 4231 "analysis.c"
  MR_Box analysis__wrapper_arg_2,
#line 4233 "analysis.c"
  MR_Box analysis__wrapper_arg_3)
#line 4235 "analysis.c"
{
#line 4237 "analysis.c"
  {
#line 4239 "analysis.c"
    MR_Word analysis__conv0_HeadVar__1_1;

#line 4242 "analysis.c"
    {
#line 4244 "analysis.c"
      analysis____Compare____no_func_info_0_0(&analysis__conv0_HeadVar__1_1);
    }
#line 4247 "analysis.c"
    *analysis__wrapper_arg_1 = ((MR_Box) (analysis__conv0_HeadVar__1_1));
#line 4249 "analysis.c"
  }
#line 4251 "analysis.c"
}

#line 4254 "analysis.c"
static MR_bool MR_CALL 
analysis____Unify____some_analysis_result_0_0_10001(
#line 4257 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 4259 "analysis.c"
  MR_Box analysis__wrapper_arg_2)
#line 4261 "analysis.c"
{
#line 4263 "analysis.c"
  {
#line 4265 "analysis.c"
    MR_bool analysis__succeeded;

#line 4268 "analysis.c"
    {
#line 4270 "analysis.c"
      analysis__succeeded = analysis____Unify____some_analysis_result_0_0(((MR_Word) analysis__wrapper_arg_1), ((MR_Word) analysis__wrapper_arg_2));
    }
#line 4273 "analysis.c"
    return analysis__succeeded;
#line 4275 "analysis.c"
  }
#line 4277 "analysis.c"
}

#line 4280 "analysis.c"
static void MR_CALL 
analysis____Compare____some_analysis_result_0_0_10001(
#line 4283 "analysis.c"
  MR_Box * analysis__wrapper_arg_1,
#line 4285 "analysis.c"
  MR_Box analysis__wrapper_arg_2,
#line 4287 "analysis.c"
  MR_Box analysis__wrapper_arg_3)
#line 4289 "analysis.c"
{
#line 4291 "analysis.c"
  {
#line 4293 "analysis.c"
    MR_Word analysis__conv0_HeadVar__1_1;

#line 4296 "analysis.c"
    {
#line 4298 "analysis.c"
      analysis____Compare____some_analysis_result_0_0(&analysis__conv0_HeadVar__1_1, ((MR_Word) analysis__wrapper_arg_2), ((MR_Word) analysis__wrapper_arg_3));
    }
#line 4301 "analysis.c"
    *analysis__wrapper_arg_1 = ((MR_Box) (analysis__conv0_HeadVar__1_1));
#line 4303 "analysis.c"
  }
#line 4305 "analysis.c"
}

#line 4308 "analysis.c"
static MR_Box MR_CALL 
analysis__ClassMethod_for_analysis__to_term____analysis__any_call__arity0______analysis__to_term_1_1_f_0_10001(
#line 4311 "analysis.c"
  MR_Box analysis__closure_arg,
#line 4313 "analysis.c"
  MR_Box analysis__wrapper_arg_1)
#line 4315 "analysis.c"
{
#line 4317 "analysis.c"
  {
#line 4319 "analysis.c"
    MR_Box analysis__wrapper_arg_2;
#line 4321 "analysis.c"
    MR_Box analysis__closure;
#line 4323 "analysis.c"
    MR_Word analysis__conv0_Term_3;

#line 4326 "analysis.c"
    analysis__closure = analysis__closure_arg;
#line 4328 "analysis.c"
    {
#line 4330 "analysis.c"
      analysis__conv0_Term_3 = analysis__ClassMethod_for_analysis__to_term____analysis__any_call__arity0______analysis__to_term_1_1_f_0();
    }
#line 4333 "analysis.c"
    analysis__wrapper_arg_2 = ((MR_Box) (analysis__conv0_Term_3));
#line 4335 "analysis.c"
    return analysis__wrapper_arg_2;
#line 4337 "analysis.c"
  }
#line 4339 "analysis.c"
}

#line 4342 "analysis.c"
static MR_bool MR_CALL 
analysis__ClassMethod_for_analysis__to_term____analysis__any_call__arity0______analysis__from_term_2_2_p_0_10001(
#line 4345 "analysis.c"
  MR_Box analysis__closure_arg,
#line 4347 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 4349 "analysis.c"
  MR_Box * analysis__wrapper_arg_2)
#line 4351 "analysis.c"
{
#line 4353 "analysis.c"
  {
#line 4355 "analysis.c"
    MR_bool analysis__succeeded;
#line 4357 "analysis.c"
    MR_Box analysis__closure;

#line 4360 "analysis.c"
    analysis__closure = analysis__closure_arg;
#line 4362 "analysis.c"
    {
#line 4364 "analysis.c"
      analysis__succeeded = analysis__ClassMethod_for_analysis__to_term____analysis__any_call__arity0______analysis__from_term_2_2_p_0(((MR_Word) analysis__wrapper_arg_1));
    }
#line 4367 "analysis.c"
    return analysis__succeeded;
#line 4369 "analysis.c"
  }
#line 4371 "analysis.c"
}

#line 4374 "analysis.c"
static MR_bool MR_CALL 
analysis__ClassMethod_for_analysis__partial_order____analysis__no_func_info__arity0__analysis__any_call__arity0______analysis__more_precise_than_3_3_p_0_10001(
#line 4377 "analysis.c"
  MR_Box analysis__closure_arg,
#line 4379 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 4381 "analysis.c"
  MR_Box analysis__wrapper_arg_2,
#line 4383 "analysis.c"
  MR_Box analysis__wrapper_arg_3)
#line 4385 "analysis.c"
{
#line 4387 "analysis.c"
  {
#line 4389 "analysis.c"
    MR_bool analysis__succeeded;
#line 4391 "analysis.c"
    MR_Box analysis__closure;

#line 4394 "analysis.c"
    analysis__closure = analysis__closure_arg;
#line 4396 "analysis.c"
    {
#line 4398 "analysis.c"
      analysis__succeeded = analysis__ClassMethod_for_analysis__partial_order____analysis__no_func_info__arity0__analysis__any_call__arity0______analysis__more_precise_than_3_3_p_0();
    }
#line 4401 "analysis.c"
    return analysis__succeeded;
#line 4403 "analysis.c"
  }
#line 4405 "analysis.c"
}

#line 4408 "analysis.c"
static MR_bool MR_CALL 
analysis__ClassMethod_for_analysis__partial_order____analysis__no_func_info__arity0__analysis__any_call__arity0______analysis__equivalent_3_3_p_0_10001(
#line 4411 "analysis.c"
  MR_Box analysis__closure_arg,
#line 4413 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 4415 "analysis.c"
  MR_Box analysis__wrapper_arg_2,
#line 4417 "analysis.c"
  MR_Box analysis__wrapper_arg_3)
#line 4419 "analysis.c"
{
#line 4421 "analysis.c"
  {
#line 4423 "analysis.c"
    MR_bool analysis__succeeded;
#line 4425 "analysis.c"
    MR_Box analysis__closure;

#line 4428 "analysis.c"
    analysis__closure = analysis__closure_arg;
#line 4430 "analysis.c"
    {
#line 4432 "analysis.c"
      analysis__succeeded = analysis__ClassMethod_for_analysis__partial_order____analysis__no_func_info__arity0__analysis__any_call__arity0______analysis__equivalent_3_3_p_0();
    }
#line 4435 "analysis.c"
    return analysis__succeeded;
#line 4437 "analysis.c"
  }
#line 4439 "analysis.c"
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

#line 4470 "analysis.c"

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

#line 4486 "analysis.c"

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

#line 4505 "analysis.c"

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

#line 4576 "analysis.c"

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

#line 4592 "analysis.c"

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

#line 4611 "analysis.c"

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

#line 4682 "analysis.c"

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

#line 4698 "analysis.c"

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

#line 4717 "analysis.c"

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

#line 4782 "analysis.c"

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

#line 4798 "analysis.c"

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

#line 4817 "analysis.c"

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
#line 5198 "analysis.c"
    {
#line 5200 "analysis.c"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_call_pattern_207, (MR_Integer) 4, &analysis__TypeInfo_209_209);
    }
#line 956 "analysis.m"
    {
#line 956 "analysis.m"
      analysis__V_63_63 = mercury__univ__univ_1_f_0(analysis__TypeInfo_209_209, analysis__Call0_72);
    }
#line 5208 "analysis.c"
    {
#line 5210 "analysis.c"
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

#line 5252 "analysis.c"
    {
#line 5254 "analysis.c"
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

#line 5293 "analysis.c"
    {
#line 5295 "analysis.c"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_158, (MR_Integer) 4, &analysis__TypeInfo_166_166);
    }
#line 5298 "analysis.c"
    {
#line 5300 "analysis.c"
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
#line 5342 "analysis.c"
    MR_bool MR_CALL (* analysis__func_0)(MR_Box, MR_Box, MR_Box, MR_Box);

#line 5345 "analysis.c"
    {
#line 5347 "analysis.c"
      mercury__private_builtin__superclass_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_32, (MR_Integer) 1, &analysis__TypeClassInfo_for_call_pattern_39);
    }
#line 5350 "analysis.c"
    {
#line 5352 "analysis.c"
      mercury__private_builtin__superclass_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_call_pattern_39, (MR_Integer) 1, &analysis__TypeClassInfo_for_partial_order_41);
    }
#line 5355 "analysis.c"
    analysis__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), analysis__TypeClassInfo_for_partial_order_41, (MR_Integer) 0)), (MR_Integer) 6)));
#line 5357 "analysis.c"
    {
#line 5359 "analysis.c"
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

#line 5409 "analysis.c"
    {
#line 5411 "analysis.c"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_43, (MR_Integer) 4, &analysis__TypeInfo_45_45);
    }
#line 541 "analysis.m"
    {
#line 541 "analysis.m"
      analysis__V_26_26 = mercury__univ__univ_1_f_0(analysis__TypeInfo_45_45, analysis__Call0_18);
    }
#line 5419 "analysis.c"
    {
#line 5421 "analysis.c"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_29, (MR_Integer) 4, &analysis__TypeInfo_46_46);
    }
#line 541 "analysis.m"
    {
#line 541 "analysis.m"
      mercury__univ__det_univ_to_type_2_p_0(analysis__TypeInfo_46_46, analysis__V_26_26, &analysis__Call_11);
    }
#line 5429 "analysis.c"
    {
#line 5431 "analysis.c"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_43, (MR_Integer) 5, &analysis__TypeInfo_48_48);
    }
#line 542 "analysis.m"
    {
#line 542 "analysis.m"
      analysis__V_27_27 = mercury__univ__univ_1_f_0(analysis__TypeInfo_48_48, analysis__Answer0_19);
    }
#line 5439 "analysis.c"
    {
#line 5441 "analysis.c"
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
#line 5495 "analysis.c"
    {
#line 5497 "analysis.c"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_62, (MR_Integer) 4, &analysis__TypeInfo_70_70);
    }
#line 5500 "analysis.c"
    {
#line 5502 "analysis.c"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_62, (MR_Integer) 5, &analysis__TypeInfo_72_72);
    }
#line 5505 "analysis.c"
    {
#line 5507 "analysis.c"
      analysis__TypeInfo_74_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 5509 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_74_74, 0) = ((MR_Box) (&analysis__analysis__type_ctor_info_analysis_result_2));
#line 5511 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_74_74, 1) = ((MR_Box) (analysis__TypeInfo_70_70));
#line 5513 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_74_74, 2) = ((MR_Box) (analysis__TypeInfo_72_72));
#line 5515 "analysis.c"
    }
#line 5517 "analysis.c"
    {
#line 5519 "analysis.c"
      analysis__TypeInfo_76_76 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 5521 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_76_76, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
#line 5523 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_76_76, 1) = ((MR_Box) (analysis__TypeInfo_74_74));
#line 5525 "analysis.c"
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

#line 5618 "analysis.c"
    {
#line 5620 "analysis.c"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_call_pattern_47, (MR_Integer) 4, &analysis__TypeInfo_61_61);
    }
#line 5623 "analysis.c"
    {
#line 5625 "analysis.c"
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
#line 5721 "analysis.c"
      MR_bool MR_CALL (* analysis__func_0)(MR_Box, MR_Box, MR_Box, MR_Box);

#line 5724 "analysis.c"
      {
#line 5726 "analysis.c"
        mercury__private_builtin__superclass_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_21, (MR_Integer) 1, &analysis__TypeClassInfo_for_call_pattern_28);
      }
#line 5729 "analysis.c"
      {
#line 5731 "analysis.c"
        mercury__private_builtin__superclass_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_call_pattern_28, (MR_Integer) 1, &analysis__TypeClassInfo_for_partial_order_30);
      }
#line 5734 "analysis.c"
      analysis__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), analysis__TypeClassInfo_for_partial_order_30, (MR_Integer) 0)), (MR_Integer) 5)));
#line 5736 "analysis.c"
      {
#line 5738 "analysis.c"
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
#line 5751 "analysis.c"
        MR_bool MR_CALL (* analysis__func_1)(MR_Box, MR_Box, MR_Box, MR_Box);

#line 5754 "analysis.c"
        {
#line 5756 "analysis.c"
          mercury__private_builtin__superclass_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_21, (MR_Integer) 1, &analysis__TypeClassInfo_for_call_pattern_31);
        }
#line 5759 "analysis.c"
        {
#line 5761 "analysis.c"
          mercury__private_builtin__superclass_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_call_pattern_31, (MR_Integer) 1, &analysis__TypeClassInfo_for_partial_order_33);
        }
#line 5764 "analysis.c"
        analysis__func_1 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), analysis__TypeClassInfo_for_partial_order_33, (MR_Integer) 0)), (MR_Integer) 6)));
#line 5766 "analysis.c"
        {
#line 5768 "analysis.c"
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

#line 5810 "analysis.c"
    {
#line 5812 "analysis.c"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_58, (MR_Integer) 4, &analysis__TypeInfo_60_60);
    }
#line 484 "analysis.m"
    {
#line 484 "analysis.m"
      analysis__V_26_26 = mercury__univ__univ_1_f_0(analysis__TypeInfo_60_60, analysis__Call0_16);
    }
#line 5820 "analysis.c"
    {
#line 5822 "analysis.c"
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

#line 6021 "analysis.c"
        {
#line 6023 "analysis.c"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_14, (MR_Integer) 4, &analysis__TypeInfo_17_17);
        }
#line 6026 "analysis.c"
        {
#line 6028 "analysis.c"
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

#line 6055 "analysis.c"
            {
#line 6057 "analysis.c"
              mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_14, (MR_Integer) 5, &analysis__TypeInfo_20_20);
            }
#line 6060 "analysis.c"
            {
#line 6062 "analysis.c"
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

#line 6160 "analysis.c"
        {
#line 6162 "analysis.c"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_11, (MR_Integer) 4, &analysis__TypeInfo_14_14);
        }
#line 6165 "analysis.c"
        {
#line 6167 "analysis.c"
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
#line 6179 "analysis.c"
            analysis__PolyConst5_16 = (MR_Integer) 5;
#line 6181 "analysis.c"
            {
#line 6183 "analysis.c"
              mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_11, analysis__PolyConst5_16, &analysis__TypeInfo_17_17);
            }
#line 6186 "analysis.c"
            {
#line 6188 "analysis.c"
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

#line 6283 "analysis.c"
    {
#line 6285 "analysis.c"
      analysis__TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6287 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_10_10, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
#line 6289 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_10_10, 1) = ((MR_Box) (analysis__TypeInfo_for_T_6));
#line 6291 "analysis.c"
    }
#line 6293 "analysis.c"
    {
#line 6295 "analysis.c"
      analysis__TypeInfo_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 6297 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_12_12, 0) = ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2));
#line 6299 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_12_12, 1) = ((MR_Box) (&analysis__analysis__type_ctor_info_func_id_0));
#line 6301 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_12_12, 2) = ((MR_Box) (analysis__TypeInfo_10_10));
#line 6303 "analysis.c"
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

#line 6341 "analysis.c"
    {
#line 6343 "analysis.c"
      analysis__TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6345 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_9_9, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
#line 6347 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_9_9, 1) = ((MR_Box) (analysis__TypeInfo_for_T_5));
#line 6349 "analysis.c"
    }
#line 6351 "analysis.c"
    {
#line 6353 "analysis.c"
      analysis__TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 6355 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_11_11, 0) = ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2));
#line 6357 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_11_11, 1) = ((MR_Box) (&analysis__analysis__type_ctor_info_func_id_0));
#line 6359 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_11_11, 2) = ((MR_Box) (analysis__TypeInfo_9_9));
#line 6361 "analysis.c"
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
#line 6416 "analysis.c"
  {
#line 6418 "analysis.c"
    MR_bool analysis__succeeded = (analysis__HeadVar__2_1 == analysis__HeadVar__2_2);

#line 6421 "analysis.c"
    return analysis__succeeded;
#line 6423 "analysis.c"
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

#line 6477 "analysis.c"
        {
#line 6479 "analysis.c"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_call_pattern_11, (MR_Integer) 4, &analysis__TypeInfo_14_14);
        }
#line 6482 "analysis.c"
        {
#line 6484 "analysis.c"
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

#line 6561 "analysis.c"
        {
#line 6563 "analysis.c"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_call_pattern_9, (MR_Integer) 4, &analysis__TypeInfo_12_12);
        }
#line 6566 "analysis.c"
        {
#line 6568 "analysis.c"
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
#line 6616 "analysis.c"
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
#line 6650 "analysis.c"
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
#line 6670 "analysis.c"
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
#line 6690 "analysis.c"
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

#line 6763 "analysis.c"
        analysis__succeeded = (analysis__V_3_3 == analysis__V_7_7);
#line 171 "analysis.m"
        if (analysis__succeeded)
#line 171 "analysis.m"
          {
#line 6769 "analysis.c"
            analysis__succeeded = (strcmp(analysis__V_4_4, analysis__V_8_8) == 0);
#line 171 "analysis.m"
            if (analysis__succeeded)
#line 171 "analysis.m"
              {
#line 6775 "analysis.c"
                analysis__succeeded = (analysis__V_5_5 == analysis__V_9_9);
#line 171 "analysis.m"
                if (analysis__succeeded)
#line 6779 "analysis.c"
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

#line 6818 "analysis.c"
    {
#line 6820 "analysis.c"
      analysis__TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6822 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_9_9, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
#line 6824 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_9_9, 1) = ((MR_Box) (analysis__TypeInfo_for_T_6));
#line 6826 "analysis.c"
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

#line 6862 "analysis.c"
    {
#line 6864 "analysis.c"
      analysis__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6866 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_8_8, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
#line 6868 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_8_8, 1) = ((MR_Box) (analysis__TypeInfo_for_T_5));
#line 6870 "analysis.c"
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
#line 6925 "analysis.c"
  {
#line 6927 "analysis.c"
    MR_bool analysis__succeeded = (analysis__HeadVar__2_1 == analysis__HeadVar__2_2);

#line 6930 "analysis.c"
    return analysis__succeeded;
#line 6932 "analysis.c"
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
#line 7100 "analysis.c"
  {
#line 7102 "analysis.c"
    MR_bool analysis__succeeded = (analysis__HeadVar__2_1 == analysis__HeadVar__2_2);

#line 7105 "analysis.c"
    return analysis__succeeded;
#line 7107 "analysis.c"
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
#line 7140 "analysis.c"
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
#line 7166 "analysis.c"
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
#line 7186 "analysis.c"
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

#line 7266 "analysis.c"
        {
#line 7268 "analysis.c"
          analysis__succeeded = mercury__builtin__unify_2_p_0(analysis__TypeInfo_for_Call_11, analysis__V_3_3, analysis__V_6_6);
        }
#line 125 "analysis.m"
        if (analysis__succeeded)
#line 125 "analysis.m"
          {
#line 7275 "analysis.c"
            {
#line 7277 "analysis.c"
              analysis__succeeded = mercury__builtin__unify_2_p_0(analysis__TypeInfo_for_Answer_12, analysis__V_4_4, analysis__V_7_7);
            }
#line 125 "analysis.m"
            if (analysis__succeeded)
#line 7282 "analysis.c"
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

#line 7344 "analysis.c"
        {
#line 7346 "analysis.c"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_call_pattern_11, (MR_Integer) 4, &analysis__TypeInfo_14_14);
        }
#line 7349 "analysis.c"
        {
#line 7351 "analysis.c"
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

#line 7428 "analysis.c"
        {
#line 7430 "analysis.c"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_call_pattern_9, (MR_Integer) 4, &analysis__TypeInfo_12_12);
        }
#line 7433 "analysis.c"
        {
#line 7435 "analysis.c"
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

#line 7548 "analysis.c"
    {
#line 7550 "analysis.c"
      analysis__TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7552 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_11_11, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
#line 7554 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_11_11, 1) = ((MR_Box) (analysis__TypeInfo_for_T_6));
#line 7556 "analysis.c"
    }
#line 7558 "analysis.c"
    {
#line 7560 "analysis.c"
      analysis__TypeInfo_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 7562 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_13_13, 0) = ((MR_Box) (analysis__TypeCtorInfo_12_12));
#line 7564 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_13_13, 1) = ((MR_Box) (&analysis__analysis__type_ctor_info_func_id_0));
#line 7566 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_13_13, 2) = ((MR_Box) (analysis__TypeInfo_11_11));
#line 7568 "analysis.c"
    }
#line 7570 "analysis.c"
    {
#line 7572 "analysis.c"
      analysis__TypeInfo_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 7574 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_14_14, 0) = ((MR_Box) (analysis__TypeCtorInfo_12_12));
#line 7576 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_14_14, 1) = ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0));
#line 7578 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_14_14, 2) = ((MR_Box) (analysis__TypeInfo_13_13));
#line 7580 "analysis.c"
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

#line 7622 "analysis.c"
    {
#line 7624 "analysis.c"
      analysis__TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7626 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_10_10, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
#line 7628 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_10_10, 1) = ((MR_Box) (analysis__TypeInfo_for_T_5));
#line 7630 "analysis.c"
    }
#line 7632 "analysis.c"
    {
#line 7634 "analysis.c"
      analysis__TypeInfo_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 7636 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_12_12, 0) = ((MR_Box) (analysis__TypeCtorInfo_11_11));
#line 7638 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_12_12, 1) = ((MR_Box) (&analysis__analysis__type_ctor_info_func_id_0));
#line 7640 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_12_12, 2) = ((MR_Box) (analysis__TypeInfo_10_10));
#line 7642 "analysis.c"
    }
#line 7644 "analysis.c"
    {
#line 7646 "analysis.c"
      analysis__TypeInfo_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 7648 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_13_13, 0) = ((MR_Box) (analysis__TypeCtorInfo_11_11));
#line 7650 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_13_13, 1) = ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0));
#line 7652 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_13_13, 2) = ((MR_Box) (analysis__TypeInfo_12_12));
#line 7654 "analysis.c"
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

#line 7749 "analysis.c"
        {
#line 7751 "analysis.c"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_compiler_35, (MR_Integer) 1, &analysis__TypeInfo_38_38);
        }
#line 7754 "analysis.c"
        {
#line 7756 "analysis.c"
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

#line 8063 "analysis.c"
        {
#line 8065 "analysis.c"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_compiler_25, (MR_Integer) 1, &analysis__TypeInfo_28_28);
        }
#line 8068 "analysis.c"
        {
#line 8070 "analysis.c"
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
#line 8097 "analysis.c"
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
#line 8108 "analysis.c"
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
#line 8119 "analysis.c"
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
#line 8130 "analysis.c"
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
#line 8141 "analysis.c"
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
#line 8152 "analysis.c"
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
#line 8163 "analysis.c"
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

#line 8223 "analysis.c"

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

#line 8239 "analysis.c"

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

#line 8258 "analysis.c"

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

#line 8326 "analysis.c"

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

#line 8343 "analysis.c"

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

#line 8361 "analysis.c"

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

#line 8396 "analysis.c"

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

#line 8412 "analysis.c"

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

#line 8431 "analysis.c"

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

#line 8466 "analysis.c"

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

#line 8483 "analysis.c"

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

#line 8501 "analysis.c"

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

#line 8536 "analysis.c"

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

#line 8552 "analysis.c"

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

#line 8571 "analysis.c"

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

#line 8605 "analysis.c"

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

#line 8638 "analysis.c"

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

#line 8672 "analysis.c"

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

#line 8705 "analysis.c"

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

#line 8737 "analysis.c"

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

#line 8755 "analysis.c"

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

#line 8772 "analysis.c"

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

#line 8790 "analysis.c"

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

#line 8822 "analysis.c"

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
#line 9611 "analysis.c"
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
#line 9978 "analysis.c"
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
#line 10056 "analysis.c"
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
#line 10091 "analysis.c"
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
#line 11198 "analysis.c"
          analysis__TypeCtorInfo_56_56 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 11200 "analysis.c"
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

#line 11226 "analysis.c"

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

#line 11242 "analysis.c"

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

#line 11261 "analysis.c"

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
#line 11422 "analysis.c"
    MR_bool MR_CALL (* analysis__func_0)(MR_Box, MR_Box, MR_Box, MR_Box);

#line 1029 "analysis.m"
    *analysis__ModuleName_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__3_3, (MR_Integer) 2)));
#line 11427 "analysis.c"
    {
#line 11429 "analysis.c"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_call_pattern_12, (MR_Integer) 4, &analysis__TypeInfo_14_14);
    }
#line 1030 "analysis.m"
    {
#line 1030 "analysis.m"
      analysis__V_10_10 = mercury__univ__univ_1_f_0(analysis__TypeInfo_14_14, analysis__CallB0_7);
    }
#line 11437 "analysis.c"
    {
#line 11439 "analysis.c"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_call_pattern_11, (MR_Integer) 4, &analysis__TypeInfo_15_15);
    }
#line 1030 "analysis.m"
    {
#line 1030 "analysis.m"
      mercury__univ__det_univ_to_type_2_p_0(analysis__TypeInfo_15_15, analysis__V_10_10, &analysis__CallB_9);
    }
#line 11447 "analysis.c"
    {
#line 11449 "analysis.c"
      mercury__private_builtin__superclass_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_call_pattern_11, (MR_Integer) 1, &analysis__TypeClassInfo_for_partial_order_16);
    }
#line 11452 "analysis.c"
    analysis__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), analysis__TypeClassInfo_for_partial_order_16, (MR_Integer) 0)), (MR_Integer) 6)));
#line 11454 "analysis.c"
    {
#line 11456 "analysis.c"
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
#line 11563 "analysis.c"
        analysis__TypeCtorInfo_19_19 = (MR_Word) &analysis__analysis__type_ctor_info_func_id_0;
#line 11565 "analysis.c"
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
#line 11712 "analysis.c"
        MR_bool MR_CALL (* analysis__func_0)(MR_Box, MR_Box, MR_Box, MR_Box);

#line 998 "analysis.m"
        analysis__TypeClassInfo_for_analysis_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__H0_13, (MR_Integer) 0)));
#line 998 "analysis.m"
        analysis__V_19_19 = (MR_hl_field(MR_mktag(0), analysis__H0_13, (MR_Integer) 1));
#line 998 "analysis.m"
        analysis__V_23_23 = (MR_hl_field(MR_mktag(0), analysis__H0_13, (MR_Integer) 2));
#line 998 "analysis.m"
        analysis__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__H0_13, (MR_Integer) 3)));
#line 11723 "analysis.c"
        {
#line 11725 "analysis.c"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_27, (MR_Integer) 4, &analysis__TypeInfo_26_26);
        }
#line 998 "analysis.m"
        {
#line 998 "analysis.m"
          analysis__V_18_18 = mercury__univ__univ_1_f_0(analysis__TypeInfo_26_26, analysis__V_19_19);
        }
#line 11733 "analysis.c"
        {
#line 11735 "analysis.c"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_25, (MR_Integer) 4, &analysis__TypeInfo_30_30);
        }
#line 998 "analysis.m"
        {
#line 998 "analysis.m"
          mercury__univ__det_univ_to_type_2_p_0(analysis__TypeInfo_30_30, analysis__V_18_18, &analysis__HCall_15);
        }
#line 11743 "analysis.c"
        {
#line 11745 "analysis.c"
          mercury__private_builtin__superclass_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_25, (MR_Integer) 1, &analysis__TypeClassInfo_for_call_pattern_31);
        }
#line 11748 "analysis.c"
        {
#line 11750 "analysis.c"
          mercury__private_builtin__superclass_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_call_pattern_31, (MR_Integer) 1, &analysis__TypeClassInfo_for_partial_order_33);
        }
#line 11753 "analysis.c"
        analysis__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), analysis__TypeClassInfo_for_partial_order_33, (MR_Integer) 0)), (MR_Integer) 6)));
#line 11755 "analysis.c"
        {
#line 11757 "analysis.c"
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
#line 11869 "analysis.c"
    MR_Box analysis__V_31_31;
#line 11871 "analysis.c"
    MR_Box analysis__V_32_32;
#line 11873 "analysis.c"
    MR_Box MR_CALL (* analysis__func_0)(MR_Box) = ((MR_Box MR_CALL (*)(MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), analysis__TypeClassInfo_for_analysis_24, (MR_Integer) 0)), (MR_Integer) 5)));
#line 11875 "analysis.c"
    MR_Box analysis__conv1_AnalysisName_17;
#line 978 "analysis.m"
    MR_Box analysis__conv2_ModuleResults0_18;
#line 979 "analysis.m"
    MR_Box analysis__conv3_AnalysisResults0_19;
#line 980 "analysis.m"
    MR_Box analysis__conv4_FuncResults0_20;

#line 11884 "analysis.c"
    {
#line 11886 "analysis.c"
      analysis__conv1_AnalysisName_17 = analysis__func_0(((MR_Box) analysis__TypeClassInfo_for_analysis_24));
    }
#line 11889 "analysis.c"
    analysis__AnalysisName_17 = ((MR_String) analysis__conv1_AnalysisName_17);
#line 11891 "analysis.c"
    analysis__TypeCtorInfo_25_25 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 11893 "analysis.c"
    analysis__TypeInfo_26_26 = (MR_Word) &analysis_scalar_common_2[3];
#line 978 "analysis.m"
    {
#line 978 "analysis.m"
      analysis__conv2_ModuleResults0_18 = mercury__map__lookup_2_f_0(analysis__TypeCtorInfo_25_25, analysis__TypeInfo_26_26, analysis__Map0_15, ((MR_Box) (analysis__ModuleName_9)));
    }
#line 978 "analysis.m"
    analysis__ModuleResults0_18 = ((MR_Word) analysis__conv2_ModuleResults0_18);
#line 11902 "analysis.c"
    analysis__TypeCtorInfo_27_27 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 11904 "analysis.c"
    analysis__TypeInfo_28_28 = (MR_Word) &analysis_scalar_common_2[2];
#line 979 "analysis.m"
    {
#line 979 "analysis.m"
      analysis__conv3_AnalysisResults0_19 = mercury__map__lookup_2_f_0(analysis__TypeCtorInfo_27_27, analysis__TypeInfo_28_28, analysis__ModuleResults0_18, ((MR_Box) (analysis__AnalysisName_17)));
    }
#line 979 "analysis.m"
    analysis__AnalysisResults0_19 = ((MR_Word) analysis__conv3_AnalysisResults0_19);
#line 11913 "analysis.c"
    analysis__TypeCtorInfo_29_29 = (MR_Word) &analysis__analysis__type_ctor_info_func_id_0;
#line 11915 "analysis.c"
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

#line 12359 "analysis.c"
        {
#line 12361 "analysis.c"
          mercury__private_builtin__superclass_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_158, (MR_Integer) 2, &analysis__TypeClassInfo_for_answer_pattern_159);
        }
#line 12364 "analysis.c"
        {
#line 12366 "analysis.c"
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
#line 12653 "analysis.c"
            {
#line 12655 "analysis.c"
              mercury__private_builtin__superclass_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_158, (MR_Integer) 2, &analysis__TypeClassInfo_for_answer_pattern_173);
            }
#line 12658 "analysis.c"
            {
#line 12660 "analysis.c"
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
#line 12698 "analysis.c"
            analysis__TypeCtorInfo_178_178 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 922 "analysis.m"
            {
#line 922 "analysis.m"
              analysis__conv1_OldArcs_30 = mercury__map__det_elem_2_f_0(analysis__TypeCtorInfo_178_178, (MR_Word) &analysis_scalar_common_2[5], ((MR_Box) (analysis__ModuleName_11)), analysis__V_52_52);
            }
#line 922 "analysis.m"
            analysis__OldArcs_30 = ((MR_Word) analysis__conv1_OldArcs_30);
#line 12707 "analysis.c"
            {
#line 12709 "analysis.c"
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
#line 12790 "analysis.c"
        analysis__TypeCtorInfo_201_201 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 12792 "analysis.c"
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
#line 12813 "analysis.c"
            analysis__TypeCtorInfo_203_203 = (MR_Word) &analysis__analysis__type_ctor_info_func_id_0;
#line 12815 "analysis.c"
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

#line 13345 "analysis.c"

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

#line 13361 "analysis.c"

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

#line 13380 "analysis.c"

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
#line 14234 "analysis.c"
    MR_Box analysis__V_32_32;
#line 14236 "analysis.c"
    MR_Box analysis__V_33_33;
#line 14238 "analysis.c"
    MR_Box MR_CALL (* analysis__func_0)(MR_Box) = ((MR_Box MR_CALL (*)(MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), analysis__TypeClassInfo_for_analysis_21, (MR_Integer) 0)), (MR_Integer) 5)));
#line 14240 "analysis.c"
    MR_Box analysis__conv1_AnalysisName_13;
#line 653 "analysis.m"
    MR_Word analysis__AnalysisResults0_14;
#line 651 "analysis.m"
    MR_Box analysis__conv2_AnalysisResults0_14;
#line 658 "analysis.m"
    MR_Word analysis__FuncResults0_16;
#line 656 "analysis.m"
    MR_Box analysis__conv3_FuncResults0_16;

#line 14251 "analysis.c"
    {
#line 14253 "analysis.c"
      analysis__conv1_AnalysisName_13 = analysis__func_0(((MR_Box) analysis__TypeClassInfo_for_analysis_21));
    }
#line 14256 "analysis.c"
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
#line 14419 "analysis.c"
    {
#line 14421 "analysis.c"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_32, (MR_Integer) 4, &analysis__TypeInfo_34_34);
    }
#line 14424 "analysis.c"
    {
#line 14426 "analysis.c"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_32, (MR_Integer) 5, &analysis__TypeInfo_36_36);
    }
#line 14429 "analysis.c"
    {
#line 14431 "analysis.c"
      analysis__TypeInfo_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 14433 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_38_38, 0) = ((MR_Box) (&analysis__analysis__type_ctor_info_analysis_result_2));
#line 14435 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_38_38, 1) = ((MR_Box) (analysis__TypeInfo_34_34));
#line 14437 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_38_38, 2) = ((MR_Box) (analysis__TypeInfo_36_36));
#line 14439 "analysis.c"
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
#line 14546 "analysis.c"
    MR_bool MR_CALL (* analysis__func_0)(MR_Box, MR_Box, MR_Box, MR_Box);

#line 14549 "analysis.c"
    {
#line 14551 "analysis.c"
      mercury__private_builtin__superclass_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_15, (MR_Integer) 2, &analysis__TypeClassInfo_for_answer_pattern_16);
    }
#line 14554 "analysis.c"
    {
#line 14556 "analysis.c"
      mercury__private_builtin__superclass_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_answer_pattern_16, (MR_Integer) 1, &analysis__TypeClassInfo_for_partial_order_18);
    }
#line 14559 "analysis.c"
    analysis__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), analysis__TypeClassInfo_for_partial_order_18, (MR_Integer) 0)), (MR_Integer) 5)));
#line 14561 "analysis.c"
    {
#line 14563 "analysis.c"
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
#line 14632 "analysis.c"
    MR_Box analysis__V_20_20;
#line 14634 "analysis.c"
    MR_Box analysis__V_21_21;
#line 14636 "analysis.c"
    MR_Box MR_CALL (* analysis__func_0)(MR_Box) = ((MR_Box MR_CALL (*)(MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), analysis__TypeClassInfo_for_analysis_29, (MR_Integer) 0)), (MR_Integer) 5)));
#line 14638 "analysis.c"
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

#line 14661 "analysis.c"
    {
#line 14663 "analysis.c"
      analysis__conv1_AnalysisName_9 = analysis__func_0(((MR_Box) analysis__TypeClassInfo_for_analysis_29));
    }
#line 14666 "analysis.c"
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
#line 14687 "analysis.c"
        analysis__TypeCtorInfo_32_32 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 14689 "analysis.c"
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
#line 14710 "analysis.c"
            analysis__TypeCtorInfo_34_34 = (MR_Word) &analysis__analysis__type_ctor_info_func_id_0;
#line 14712 "analysis.c"
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

#line 14748 "analysis.c"
        {
#line 14750 "analysis.c"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_29, (MR_Integer) 4, &analysis__TypeInfo_38_38);
        }
#line 14753 "analysis.c"
        {
#line 14755 "analysis.c"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_29, (MR_Integer) 5, &analysis__TypeInfo_40_40);
        }
#line 14758 "analysis.c"
        {
#line 14760 "analysis.c"
          analysis__TypeInfo_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 14762 "analysis.c"
          MR_hl_field(MR_mktag(0), analysis__TypeInfo_42_42, 0) = ((MR_Box) (&analysis__analysis__type_ctor_info_analysis_result_2));
#line 14764 "analysis.c"
          MR_hl_field(MR_mktag(0), analysis__TypeInfo_42_42, 1) = ((MR_Box) (analysis__TypeInfo_38_38));
#line 14766 "analysis.c"
          MR_hl_field(MR_mktag(0), analysis__TypeInfo_42_42, 2) = ((MR_Box) (analysis__TypeInfo_40_40));
#line 14768 "analysis.c"
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

#line 14868 "analysis.c"

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

#line 14884 "analysis.c"

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

#line 14903 "analysis.c"

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
#line 14961 "analysis.c"
        analysis__TypeCtorInfo_66_66 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 14963 "analysis.c"
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

#line 15060 "analysis.c"

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

#line 15077 "analysis.c"

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

#line 15095 "analysis.c"

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
#line 15535 "analysis.c"
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
#line 16593 "analysis.c"
        analysis__TypeCtorInfo_52_52 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 16595 "analysis.c"
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
#line 16616 "analysis.c"
            analysis__TypeCtorInfo_54_54 = (MR_Word) &analysis__analysis__type_ctor_info_func_id_0;
#line 16618 "analysis.c"
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

#line 16652 "analysis.c"
        {
#line 16654 "analysis.c"
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
#line 16676 "analysis.c"
        {
#line 16678 "analysis.c"
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
#line 16890 "analysis.c"
        MR_Box analysis__V_59_59;
#line 16892 "analysis.c"
        MR_Box MR_CALL (* analysis__func_0)(MR_Box) = ((MR_Box MR_CALL (*)(MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), analysis__TypeClassInfo_for_analysis_47, (MR_Integer) 0)), (MR_Integer) 5)));
#line 16894 "analysis.c"
        MR_Box analysis__conv1_AnalysisName_17;

#line 16897 "analysis.c"
        {
#line 16899 "analysis.c"
          analysis__conv1_AnalysisName_17 = analysis__func_0(((MR_Box) analysis__TypeClassInfo_for_analysis_47));
        }
#line 16902 "analysis.c"
        analysis__AnalysisName_17 = ((MR_String) analysis__conv1_AnalysisName_17);
#line 16904 "analysis.c"
        {
#line 16906 "analysis.c"
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

#line 16926 "analysis.c"
            {
#line 16928 "analysis.c"
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

#line 16955 "analysis.c"
            {
#line 16957 "analysis.c"
              mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_47, (MR_Integer) 4, &analysis__TypeInfo_54_54);
            }
#line 16960 "analysis.c"
            {
#line 16962 "analysis.c"
              mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_47, (MR_Integer) 5, &analysis__TypeInfo_56_56);
            }
#line 16965 "analysis.c"
            {
#line 16967 "analysis.c"
              analysis__TypeInfo_58_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 16969 "analysis.c"
              MR_hl_field(MR_mktag(0), analysis__TypeInfo_58_58, 0) = ((MR_Box) (&analysis__analysis__type_ctor_info_analysis_result_2));
#line 16971 "analysis.c"
              MR_hl_field(MR_mktag(0), analysis__TypeInfo_58_58, 1) = ((MR_Box) (analysis__TypeInfo_54_54));
#line 16973 "analysis.c"
              MR_hl_field(MR_mktag(0), analysis__TypeInfo_58_58, 2) = ((MR_Box) (analysis__TypeInfo_56_56));
#line 16975 "analysis.c"
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

#line 17317 "analysis.c"

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

#line 17333 "analysis.c"

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

#line 17352 "analysis.c"

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
#line 17428 "analysis.c"
        {
#line 17430 "analysis.c"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_35, (MR_Integer) 4, &analysis__TypeInfo_42_42);
        }
#line 17433 "analysis.c"
        {
#line 17435 "analysis.c"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_35, (MR_Integer) 5, &analysis__TypeInfo_44_44);
        }
#line 17438 "analysis.c"
        {
#line 17440 "analysis.c"
          analysis__TypeInfo_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 17442 "analysis.c"
          MR_hl_field(MR_mktag(0), analysis__TypeInfo_46_46, 0) = ((MR_Box) (&analysis__analysis__type_ctor_info_analysis_result_2));
#line 17444 "analysis.c"
          MR_hl_field(MR_mktag(0), analysis__TypeInfo_46_46, 1) = ((MR_Box) (analysis__TypeInfo_42_42));
#line 17446 "analysis.c"
          MR_hl_field(MR_mktag(0), analysis__TypeInfo_46_46, 2) = ((MR_Box) (analysis__TypeInfo_44_44));
#line 17448 "analysis.c"
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
#line 17543 "analysis.c"
    {
#line 17545 "analysis.c"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_21, (MR_Integer) 4, &analysis__TypeInfo_23_23);
    }
#line 17548 "analysis.c"
    {
#line 17550 "analysis.c"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_21, (MR_Integer) 5, &analysis__TypeInfo_25_25);
    }
#line 17553 "analysis.c"
    {
#line 17555 "analysis.c"
      analysis__TypeInfo_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 17557 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_27_27, 0) = ((MR_Box) (&analysis__analysis__type_ctor_info_analysis_result_2));
#line 17559 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_27_27, 1) = ((MR_Box) (analysis__TypeInfo_23_23));
#line 17561 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_27_27, 2) = ((MR_Box) (analysis__TypeInfo_25_25));
#line 17563 "analysis.c"
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
#line 17804 "analysis.c"
        analysis__TypeCtorInfo_51_51 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 17806 "analysis.c"
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
#line 17827 "analysis.c"
            analysis__TypeCtorInfo_53_53 = (MR_Word) &analysis__analysis__type_ctor_info_func_id_0;
#line 17829 "analysis.c"
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

#line 17859 "analysis.c"
        {
#line 17861 "analysis.c"
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
#line 17953 "analysis.c"
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
#line 17980 "analysis.c"
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
#line 18097 "analysis.c"
  {
#line 18099 "analysis.c"
    MR_bool analysis__succeeded;
#line 18101 "analysis.c"
    MR_bool MR_CALL (* analysis__func_0)(MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), analysis__TypeClassInfo_for_to_term_3, (MR_Integer) 0)), (MR_Integer) 6)));

#line 18104 "analysis.c"
    {
#line 18106 "analysis.c"
      return analysis__succeeded = analysis__func_0(((MR_Box) analysis__TypeClassInfo_for_to_term_3), ((MR_Box) (analysis__HeadVar__1_1)), analysis__HeadVar__2_2);
    }
#line 18109 "analysis.c"
    return analysis__succeeded;
#line 18111 "analysis.c"
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
#line 18125 "analysis.c"
  {
#line 18127 "analysis.c"
    MR_bool analysis__succeeded;
#line 18129 "analysis.c"
    MR_Word analysis__HeadVar__2_2;
#line 18131 "analysis.c"
    MR_Box MR_CALL (* analysis__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), analysis__TypeClassInfo_for_to_term_3, (MR_Integer) 0)), (MR_Integer) 5)));
#line 18133 "analysis.c"
    MR_Box analysis__conv1_HeadVar__2_2;

#line 18136 "analysis.c"
    {
#line 18138 "analysis.c"
      analysis__conv1_HeadVar__2_2 = analysis__func_0(((MR_Box) analysis__TypeClassInfo_for_to_term_3), analysis__HeadVar__1_1);
    }
#line 18141 "analysis.c"
    analysis__HeadVar__2_2 = ((MR_Word) analysis__conv1_HeadVar__2_2);
#line 18143 "analysis.c"
    return analysis__HeadVar__2_2;
#line 18145 "analysis.c"
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
#line 18163 "analysis.c"
  {
#line 18165 "analysis.c"
    MR_bool analysis__succeeded;
#line 18167 "analysis.c"
    MR_bool MR_CALL (* analysis__func_0)(MR_Box, MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), analysis__TypeClassInfo_for_partial_order_4, (MR_Integer) 0)), (MR_Integer) 6)));

#line 18170 "analysis.c"
    {
#line 18172 "analysis.c"
      return analysis__succeeded = analysis__func_0(((MR_Box) analysis__TypeClassInfo_for_partial_order_4), analysis__HeadVar__1_1, analysis__HeadVar__2_2, analysis__HeadVar__3_3);
    }
#line 18175 "analysis.c"
    return analysis__succeeded;
#line 18177 "analysis.c"
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
#line 18195 "analysis.c"
  {
#line 18197 "analysis.c"
    MR_bool analysis__succeeded;
#line 18199 "analysis.c"
    MR_bool MR_CALL (* analysis__func_0)(MR_Box, MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), analysis__TypeClassInfo_for_partial_order_4, (MR_Integer) 0)), (MR_Integer) 5)));

#line 18202 "analysis.c"
    {
#line 18204 "analysis.c"
      return analysis__succeeded = analysis__func_0(((MR_Box) analysis__TypeClassInfo_for_partial_order_4), analysis__HeadVar__1_1, analysis__HeadVar__2_2, analysis__HeadVar__3_3);
    }
#line 18207 "analysis.c"
    return analysis__succeeded;
#line 18209 "analysis.c"
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
#line 18229 "analysis.c"
  {
#line 18231 "analysis.c"
    MR_bool analysis__succeeded;
#line 18233 "analysis.c"
    void MR_CALL (* analysis__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), analysis__TypeClassInfo_for_analysis_7, (MR_Integer) 0)), (MR_Integer) 10)));

#line 18236 "analysis.c"
    {
#line 18238 "analysis.c"
      analysis__func_0(((MR_Box) analysis__TypeClassInfo_for_analysis_7), ((MR_Box) (analysis__HeadVar__1_1)), ((MR_Box) (analysis__HeadVar__2_2)), ((MR_Box) (analysis__HeadVar__3_3)), analysis__HeadVar__6_6);
#line 18240 "analysis.c"
      return;
    }
#line 18243 "analysis.c"
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
#line 18257 "analysis.c"
  {
#line 18259 "analysis.c"
    MR_bool analysis__succeeded;
#line 18261 "analysis.c"
    MR_Box analysis__HeadVar__3_3;
#line 18263 "analysis.c"
    MR_Box MR_CALL (* analysis__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), analysis__TypeClassInfo_for_analysis_4, (MR_Integer) 0)), (MR_Integer) 9)));

#line 18266 "analysis.c"
    {
#line 18268 "analysis.c"
      return analysis__HeadVar__3_3 = analysis__func_0(((MR_Box) analysis__TypeClassInfo_for_analysis_4), analysis__HeadVar__1_1);
    }
#line 18271 "analysis.c"
    return analysis__HeadVar__3_3;
#line 18273 "analysis.c"
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
#line 18287 "analysis.c"
  {
#line 18289 "analysis.c"
    MR_bool analysis__succeeded;
#line 18291 "analysis.c"
    MR_Box analysis__HeadVar__3_3;
#line 18293 "analysis.c"
    MR_Box MR_CALL (* analysis__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), analysis__TypeClassInfo_for_analysis_4, (MR_Integer) 0)), (MR_Integer) 8)));

#line 18296 "analysis.c"
    {
#line 18298 "analysis.c"
      return analysis__HeadVar__3_3 = analysis__func_0(((MR_Box) analysis__TypeClassInfo_for_analysis_4), analysis__HeadVar__1_1);
    }
#line 18301 "analysis.c"
    return analysis__HeadVar__3_3;
#line 18303 "analysis.c"
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
#line 18315 "analysis.c"
  {
#line 18317 "analysis.c"
    MR_bool analysis__succeeded;
#line 18319 "analysis.c"
    MR_Word analysis__HeadVar__3_3;
#line 18321 "analysis.c"
    MR_Box MR_CALL (* analysis__func_0)(MR_Box) = ((MR_Box MR_CALL (*)(MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), analysis__TypeClassInfo_for_analysis_4, (MR_Integer) 0)), (MR_Integer) 7)));
#line 18323 "analysis.c"
    MR_Box analysis__conv1_HeadVar__3_3;

#line 18326 "analysis.c"
    {
#line 18328 "analysis.c"
      analysis__conv1_HeadVar__3_3 = analysis__func_0(((MR_Box) analysis__TypeClassInfo_for_analysis_4));
    }
#line 18331 "analysis.c"
    analysis__HeadVar__3_3 = ((MR_Word) analysis__conv1_HeadVar__3_3);
#line 18333 "analysis.c"
    return analysis__HeadVar__3_3;
#line 18335 "analysis.c"
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
#line 18347 "analysis.c"
  {
#line 18349 "analysis.c"
    MR_bool analysis__succeeded;
#line 18351 "analysis.c"
    MR_Integer analysis__HeadVar__3_3;
#line 18353 "analysis.c"
    MR_Box MR_CALL (* analysis__func_0)(MR_Box) = ((MR_Box MR_CALL (*)(MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), analysis__TypeClassInfo_for_analysis_4, (MR_Integer) 0)), (MR_Integer) 6)));
#line 18355 "analysis.c"
    MR_Box analysis__conv1_HeadVar__3_3;

#line 18358 "analysis.c"
    {
#line 18360 "analysis.c"
      analysis__conv1_HeadVar__3_3 = analysis__func_0(((MR_Box) analysis__TypeClassInfo_for_analysis_4));
    }
#line 18363 "analysis.c"
    analysis__HeadVar__3_3 = ((MR_Integer) analysis__conv1_HeadVar__3_3);
#line 18365 "analysis.c"
    return analysis__HeadVar__3_3;
#line 18367 "analysis.c"
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
#line 18379 "analysis.c"
  {
#line 18381 "analysis.c"
    MR_bool analysis__succeeded;
#line 18383 "analysis.c"
    MR_String analysis__HeadVar__3_3;
#line 18385 "analysis.c"
    MR_Box MR_CALL (* analysis__func_0)(MR_Box) = ((MR_Box MR_CALL (*)(MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), analysis__TypeClassInfo_for_analysis_4, (MR_Integer) 0)), (MR_Integer) 5)));
#line 18387 "analysis.c"
    MR_Box analysis__conv1_HeadVar__3_3;

#line 18390 "analysis.c"
    {
#line 18392 "analysis.c"
      analysis__conv1_HeadVar__3_3 = analysis__func_0(((MR_Box) analysis__TypeClassInfo_for_analysis_4));
    }
#line 18395 "analysis.c"
    analysis__HeadVar__3_3 = ((MR_String) analysis__conv1_HeadVar__3_3);
#line 18397 "analysis.c"
    return analysis__HeadVar__3_3;
#line 18399 "analysis.c"
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
#line 18421 "analysis.c"
  {
#line 18423 "analysis.c"
    MR_bool analysis__succeeded;
#line 18425 "analysis.c"
    void MR_CALL (* analysis__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), analysis__TypeClassInfo_for_compiler_8, (MR_Integer) 0)), (MR_Integer) 8)));
#line 18427 "analysis.c"
    MR_Box analysis__conv2_HeadVar__5_5;
#line 18429 "analysis.c"
    MR_Box analysis__conv1_HeadVar__7_7;

#line 18432 "analysis.c"
    {
#line 18434 "analysis.c"
      analysis__func_0(((MR_Box) analysis__TypeClassInfo_for_compiler_8), analysis__HeadVar__1_1, ((MR_Box) (analysis__HeadVar__2_2)), ((MR_Box) (analysis__HeadVar__3_3)), ((MR_Box) (analysis__HeadVar__4_4)), &analysis__conv2_HeadVar__5_5, ((MR_Box) ((MR_Integer) 0)), &analysis__conv1_HeadVar__7_7);
    }
#line 18437 "analysis.c"
    *analysis__HeadVar__5_5 = ((MR_String) analysis__conv2_HeadVar__5_5);
#line 18439 "analysis.c"
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
#line 18461 "analysis.c"
  {
#line 18463 "analysis.c"
    MR_bool analysis__succeeded;
#line 18465 "analysis.c"
    void MR_CALL (* analysis__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), analysis__TypeClassInfo_for_compiler_8, (MR_Integer) 0)), (MR_Integer) 7)));
#line 18467 "analysis.c"
    MR_Box analysis__conv2_HeadVar__5_5;
#line 18469 "analysis.c"
    MR_Box analysis__conv1_HeadVar__7_7;

#line 18472 "analysis.c"
    {
#line 18474 "analysis.c"
      analysis__func_0(((MR_Box) analysis__TypeClassInfo_for_compiler_8), analysis__HeadVar__1_1, ((MR_Box) (analysis__HeadVar__2_2)), ((MR_Box) (analysis__HeadVar__3_3)), ((MR_Box) (analysis__HeadVar__4_4)), &analysis__conv2_HeadVar__5_5, ((MR_Box) ((MR_Integer) 0)), &analysis__conv1_HeadVar__7_7);
    }
#line 18477 "analysis.c"
    *analysis__HeadVar__5_5 = ((MR_Word) analysis__conv2_HeadVar__5_5);
#line 18479 "analysis.c"
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
#line 18497 "analysis.c"
  {
#line 18499 "analysis.c"
    MR_bool analysis__succeeded;
#line 18501 "analysis.c"
    MR_bool MR_CALL (* analysis__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), analysis__TypeClassInfo_for_compiler_4, (MR_Integer) 0)), (MR_Integer) 6)));
#line 18503 "analysis.c"
    MR_Box analysis__conv1_HeadVar__3_3;

#line 18506 "analysis.c"
    {
#line 18508 "analysis.c"
      analysis__succeeded = analysis__func_0(((MR_Box) analysis__TypeClassInfo_for_compiler_4), analysis__HeadVar__1_1, ((MR_Box) (analysis__HeadVar__2_2)), &analysis__conv1_HeadVar__3_3);
    }
#line 18511 "analysis.c"
    if (analysis__succeeded)
#line 18513 "analysis.c"
      {
#line 18515 "analysis.c"
        *analysis__HeadVar__3_3 = ((MR_Word) analysis__conv1_HeadVar__3_3);
#line 18517 "analysis.c"
        analysis__succeeded = MR_TRUE;
#line 18519 "analysis.c"
      }
#line 18521 "analysis.c"
    return analysis__succeeded;
#line 18523 "analysis.c"
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
#line 18537 "analysis.c"
  {
#line 18539 "analysis.c"
    MR_bool analysis__succeeded;
#line 18541 "analysis.c"
    MR_String analysis__HeadVar__2_2;
#line 18543 "analysis.c"
    MR_Box MR_CALL (* analysis__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), analysis__TypeClassInfo_for_compiler_3, (MR_Integer) 0)), (MR_Integer) 5)));
#line 18545 "analysis.c"
    MR_Box analysis__conv1_HeadVar__2_2;

#line 18548 "analysis.c"
    {
#line 18550 "analysis.c"
      analysis__conv1_HeadVar__2_2 = analysis__func_0(((MR_Box) analysis__TypeClassInfo_for_compiler_3), analysis__HeadVar__1_1);
    }
#line 18553 "analysis.c"
    analysis__HeadVar__2_2 = ((MR_String) analysis__conv1_HeadVar__2_2);
#line 18555 "analysis.c"
    return analysis__HeadVar__2_2;
#line 18557 "analysis.c"
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
