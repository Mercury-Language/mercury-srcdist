/*
** Automatically generated from `analysis.m'
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




#line 142 "analysis.c"
static const MR_FA_PseudoTypeInfo_Struct2 analysis__analysis__pti_analysis_result_2__pseudo_2__pseudo_3;

#line 145 "analysis.c"
static const MR_FA_PseudoTypeInfo_Struct2 analysis__analysis__pti_analysis_result_2__pseudo_1__pseudo_2;

#line 148 "analysis.c"
static const MR_FA_TypeInfo_Struct1 analysis__list__ti_list_1analysis__type_ctor_info_some_analysis_result_0;

#line 151 "analysis.c"
static const MR_FA_PseudoTypeInfo_Struct2 analysis__tree234__pti_tree234_2__plain_analysis__type_ctor_info_func_id_0__plain_list__ti_list_1analysis__type_ctor_info_some_analysis_result_0;

#line 154 "analysis.c"
static const MR_FA_PseudoTypeInfo_Struct1 analysis__list__pti_list_1__plain_analysis__type_ctor_info_some_analysis_result_0;

#line 157 "analysis.c"
static const MR_FA_TypeInfo_Struct1 analysis__list__ti_list_1analysis__type_ctor_info_imdg_arc_0;

#line 160 "analysis.c"
static const MR_FA_PseudoTypeInfo_Struct2 analysis__tree234__pti_tree234_2__plain_analysis__type_ctor_info_func_id_0__plain_list__ti_list_1analysis__type_ctor_info_imdg_arc_0;

#line 163 "analysis.c"
static const MR_FA_PseudoTypeInfo_Struct1 analysis__list__pti_list_1__plain_analysis__type_ctor_info_imdg_arc_0;

#line 166 "analysis.c"
static const MR_FA_TypeInfo_Struct1 analysis__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0;

#line 169 "analysis.c"
static const MR_FA_TypeInfo_Struct1 analysis__list__ti_list_1analysis__type_ctor_info_analysis_request_0;

#line 172 "analysis.c"
static const MR_FA_TypeInfo_Struct2 analysis__tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_analysis_request_0;

#line 175 "analysis.c"
static const MR_FA_TypeInfo_Struct2 analysis__tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_analysis_request_0;

#line 178 "analysis.c"
static const MR_FA_TypeInfo_Struct2 analysis__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_analysis_request_0;

#line 181 "analysis.c"
static const MR_FA_TypeInfo_Struct2 analysis__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0analysis__type_ctor_info_analysis_status_0;

#line 184 "analysis.c"
static const MR_FA_TypeInfo_Struct2 analysis__tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_some_analysis_result_0;

#line 187 "analysis.c"
static const MR_FA_TypeInfo_Struct2 analysis__tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_some_analysis_result_0;

#line 190 "analysis.c"
static const MR_FA_TypeInfo_Struct2 analysis__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_some_analysis_result_0;

#line 193 "analysis.c"
static const MR_FA_TypeInfo_Struct2 analysis__tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_imdg_arc_0;

#line 196 "analysis.c"
static const MR_FA_TypeInfo_Struct2 analysis__tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_imdg_arc_0;

#line 199 "analysis.c"
static const MR_FA_TypeInfo_Struct2 analysis__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_imdg_arc_0;

#line 202 "analysis.c"
static const MR_PseudoTypeInfo analysis__analysis__field_types_analysis_info_0_0[10];

#line 205 "analysis.c"
static const MR_ConstString analysis__analysis__field_names_analysis_info_0_0[10];

#line 208 "analysis.c"
static const MR_TypeClassConstraint_1Struct analysis__analysis__exist_tc_constr_analysis_info_0_0_1;

#line 211 "analysis.c"
static const MR_TypeClassConstraint analysis__analysis__exist_tc_constrs_analysis_info_0_0[1];

#line 214 "analysis.c"
static const MR_DuExistLocn analysis__analysis__exist_locns_analysis_info_0_0[1];

#line 217 "analysis.c"
static const MR_DuExistInfo analysis__analysis__exist_info_analysis_info_0_0;

#line 220 "analysis.c"
static const MR_DuFunctorDesc analysis__analysis__du_functor_desc_analysis_info_0_0;

#line 223 "analysis.c"
static const MR_DuFunctorDescPtr analysis__analysis__du_stag_ordered_analysis_info_0_0[1];

#line 226 "analysis.c"
static const MR_DuPtagLayout analysis__analysis__du_ptag_ordered_analysis_info_0[1];

#line 229 "analysis.c"
static const MR_DuFunctorDescPtr analysis__analysis__du_name_ordered_analysis_info_0[1];

#line 232 "analysis.c"
static const MR_Integer analysis__analysis__functor_number_map_analysis_info_0[1];

#line 235 "analysis.c"
static const MR_FA_PseudoTypeInfo_Struct1 analysis__list__pti_list_1__pseudo_1;

#line 238 "analysis.c"
static const MR_FA_PseudoTypeInfo_Struct2 analysis__tree234__pti_tree234_2__plain_analysis__type_ctor_info_func_id_0__pseudo_list__pti_list_1__pseudo_1;

#line 241 "analysis.c"
static const MR_FA_PseudoTypeInfo_Struct2 analysis__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__pseudo_tree234__pti_tree234_2__plain_analysis__type_ctor_info_func_id_0__pseudo_list__pti_list_1__pseudo_1;

#line 244 "analysis.c"
static const MR_FA_PseudoTypeInfo_Struct2 analysis__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__pseudo_tree234__pti_tree234_2__plain_analysis__type_ctor_info_func_id_0__pseudo_list__pti_list_1__pseudo_1;

#line 247 "analysis.c"
static const MR_PseudoTypeInfo analysis__analysis__field_types_analysis_request_0_0[2];

#line 250 "analysis.c"
static const MR_ConstString analysis__analysis__field_names_analysis_request_0_0[2];

#line 253 "analysis.c"
static const MR_TypeClassConstraint_2Struct analysis__analysis__exist_tc_constr_analysis_request_0_0_1;

#line 256 "analysis.c"
static const MR_TypeClassConstraint analysis__analysis__exist_tc_constrs_analysis_request_0_0[1];

#line 259 "analysis.c"
static const MR_DuExistLocn analysis__analysis__exist_locns_analysis_request_0_0[2];

#line 262 "analysis.c"
static const MR_DuExistInfo analysis__analysis__exist_info_analysis_request_0_0;

#line 265 "analysis.c"
static const MR_DuFunctorDesc analysis__analysis__du_functor_desc_analysis_request_0_0;

#line 268 "analysis.c"
static const MR_DuFunctorDescPtr analysis__analysis__du_stag_ordered_analysis_request_0_0[1];

#line 271 "analysis.c"
static const MR_DuPtagLayout analysis__analysis__du_ptag_ordered_analysis_request_0[1];

#line 274 "analysis.c"
static const MR_DuFunctorDescPtr analysis__analysis__du_name_ordered_analysis_request_0[1];

#line 277 "analysis.c"
static const MR_Integer analysis__analysis__functor_number_map_analysis_request_0[1];

#line 280 "analysis.c"
static const MR_PseudoTypeInfo analysis__analysis__field_types_analysis_result_2_0[3];

#line 283 "analysis.c"
static const MR_ConstString analysis__analysis__field_names_analysis_result_2_0[3];

#line 286 "analysis.c"
static const MR_DuFunctorDesc analysis__analysis__du_functor_desc_analysis_result_2_0;

#line 289 "analysis.c"
static const MR_DuFunctorDescPtr analysis__analysis__du_stag_ordered_analysis_result_2_0[1];

#line 292 "analysis.c"
static const MR_DuPtagLayout analysis__analysis__du_ptag_ordered_analysis_result_2[1];

#line 295 "analysis.c"
static const MR_DuFunctorDescPtr analysis__analysis__du_name_ordered_analysis_result_2[1];

#line 298 "analysis.c"
static const MR_Integer analysis__analysis__functor_number_map_analysis_result_2[1];

#line 301 "analysis.c"
static const MR_EnumFunctorDesc analysis__analysis__enum_functor_desc_analysis_status_0_0;

#line 304 "analysis.c"
static const MR_EnumFunctorDesc analysis__analysis__enum_functor_desc_analysis_status_0_1;

#line 307 "analysis.c"
static const MR_EnumFunctorDesc analysis__analysis__enum_functor_desc_analysis_status_0_2;

#line 310 "analysis.c"
static const MR_EnumFunctorDescPtr analysis__analysis__enum_value_ordered_analysis_status_0[3];

#line 313 "analysis.c"
static const MR_EnumFunctorDescPtr analysis__analysis__enum_name_ordered_analysis_status_0[3];

#line 316 "analysis.c"
static const MR_Integer analysis__analysis__functor_number_map_analysis_status_0[3];

#line 319 "analysis.c"
static const MR_FA_PseudoTypeInfo_Struct1 analysis__unit__pti_unit_1__pseudo_514;

#line 322 "analysis.c"
static const MR_FA_PseudoTypeInfo_Struct1 analysis__unit__pti_unit_1__pseudo_515;

#line 325 "analysis.c"
static const MR_PseudoTypeInfo analysis__analysis__field_types_analysis_type_0_0[2];

#line 328 "analysis.c"
static const MR_TypeClassConstraint_3Struct analysis__analysis__exist_tc_constr_analysis_type_0_0_1;

#line 331 "analysis.c"
static const MR_TypeClassConstraint analysis__analysis__exist_tc_constrs_analysis_type_0_0[1];

#line 334 "analysis.c"
static const MR_DuExistLocn analysis__analysis__exist_locns_analysis_type_0_0[3];

#line 337 "analysis.c"
static const MR_DuExistInfo analysis__analysis__exist_info_analysis_type_0_0;

#line 340 "analysis.c"
static const MR_DuFunctorDesc analysis__analysis__du_functor_desc_analysis_type_0_0;

#line 343 "analysis.c"
static const MR_DuFunctorDescPtr analysis__analysis__du_stag_ordered_analysis_type_0_0[1];

#line 346 "analysis.c"
static const MR_DuPtagLayout analysis__analysis__du_ptag_ordered_analysis_type_0[1];

#line 349 "analysis.c"
static const MR_DuFunctorDescPtr analysis__analysis__du_name_ordered_analysis_type_0[1];

#line 352 "analysis.c"
static const MR_Integer analysis__analysis__functor_number_map_analysis_type_0[1];

#line 355 "analysis.c"
static const MR_EnumFunctorDesc analysis__analysis__enum_functor_desc_any_call_0_0;

#line 358 "analysis.c"
static const MR_EnumFunctorDescPtr analysis__analysis__enum_value_ordered_any_call_0[1];

#line 361 "analysis.c"
static const MR_EnumFunctorDescPtr analysis__analysis__enum_name_ordered_any_call_0[1];

#line 364 "analysis.c"
static const MR_Integer analysis__analysis__functor_number_map_any_call_0[1];

#line 367 "analysis.c"
static const MR_EnumFunctorDesc analysis__analysis__enum_functor_desc_fixpoint_type_0_0;

#line 370 "analysis.c"
static const MR_EnumFunctorDesc analysis__analysis__enum_functor_desc_fixpoint_type_0_1;

#line 373 "analysis.c"
static const MR_EnumFunctorDescPtr analysis__analysis__enum_value_ordered_fixpoint_type_0[2];

#line 376 "analysis.c"
static const MR_EnumFunctorDescPtr analysis__analysis__enum_name_ordered_fixpoint_type_0[2];

#line 379 "analysis.c"
static const MR_Integer analysis__analysis__functor_number_map_fixpoint_type_0[2];

#line 382 "analysis.c"
static const MR_PseudoTypeInfo analysis__analysis__field_types_func_id_0_0[4];

#line 385 "analysis.c"
static const MR_ConstString analysis__analysis__field_names_func_id_0_0[4];

#line 388 "analysis.c"
static const MR_DuFunctorDesc analysis__analysis__du_functor_desc_func_id_0_0;

#line 391 "analysis.c"
static const MR_DuFunctorDescPtr analysis__analysis__du_stag_ordered_func_id_0_0[1];

#line 394 "analysis.c"
static const MR_DuPtagLayout analysis__analysis__du_ptag_ordered_func_id_0[1];

#line 397 "analysis.c"
static const MR_DuFunctorDescPtr analysis__analysis__du_name_ordered_func_id_0[1];

#line 400 "analysis.c"
static const MR_Integer analysis__analysis__functor_number_map_func_id_0[1];

#line 403 "analysis.c"
static const MR_PseudoTypeInfo analysis__analysis__field_types_imdg_arc_0_0[2];

#line 406 "analysis.c"
static const MR_ConstString analysis__analysis__field_names_imdg_arc_0_0[2];

#line 409 "analysis.c"
static const MR_TypeClassConstraint_2Struct analysis__analysis__exist_tc_constr_imdg_arc_0_0_1;

#line 412 "analysis.c"
static const MR_TypeClassConstraint analysis__analysis__exist_tc_constrs_imdg_arc_0_0[1];

#line 415 "analysis.c"
static const MR_DuExistLocn analysis__analysis__exist_locns_imdg_arc_0_0[2];

#line 418 "analysis.c"
static const MR_DuExistInfo analysis__analysis__exist_info_imdg_arc_0_0;

#line 421 "analysis.c"
static const MR_DuFunctorDesc analysis__analysis__du_functor_desc_imdg_arc_0_0;

#line 424 "analysis.c"
static const MR_DuFunctorDescPtr analysis__analysis__du_stag_ordered_imdg_arc_0_0[1];

#line 427 "analysis.c"
static const MR_DuPtagLayout analysis__analysis__du_ptag_ordered_imdg_arc_0[1];

#line 430 "analysis.c"
static const MR_DuFunctorDescPtr analysis__analysis__du_name_ordered_imdg_arc_0[1];

#line 433 "analysis.c"
static const MR_Integer analysis__analysis__functor_number_map_imdg_arc_0[1];

#line 436 "analysis.c"
static const MR_EnumFunctorDesc analysis__analysis__enum_functor_desc_make_analysis_registry_0_0;

#line 439 "analysis.c"
static const MR_EnumFunctorDesc analysis__analysis__enum_functor_desc_make_analysis_registry_0_1;

#line 442 "analysis.c"
static const MR_EnumFunctorDescPtr analysis__analysis__enum_value_ordered_make_analysis_registry_0[2];

#line 445 "analysis.c"
static const MR_EnumFunctorDescPtr analysis__analysis__enum_name_ordered_make_analysis_registry_0[2];

#line 448 "analysis.c"
static const MR_Integer analysis__analysis__functor_number_map_make_analysis_registry_0[2];

#line 451 "analysis.c"
static const MR_EnumFunctorDesc analysis__analysis__enum_functor_desc_no_func_info_0_0;

#line 454 "analysis.c"
static const MR_EnumFunctorDescPtr analysis__analysis__enum_value_ordered_no_func_info_0[1];

#line 457 "analysis.c"
static const MR_EnumFunctorDescPtr analysis__analysis__enum_name_ordered_no_func_info_0[1];

#line 460 "analysis.c"
static const MR_Integer analysis__analysis__functor_number_map_no_func_info_0[1];

#line 463 "analysis.c"
static const MR_PseudoTypeInfo analysis__analysis__field_types_some_analysis_result_0_0[3];

#line 466 "analysis.c"
static const MR_ConstString analysis__analysis__field_names_some_analysis_result_0_0[3];

#line 469 "analysis.c"
static const MR_TypeClassConstraint_3Struct analysis__analysis__exist_tc_constr_some_analysis_result_0_0_1;

#line 472 "analysis.c"
static const MR_TypeClassConstraint analysis__analysis__exist_tc_constrs_some_analysis_result_0_0[1];

#line 475 "analysis.c"
static const MR_DuExistLocn analysis__analysis__exist_locns_some_analysis_result_0_0[3];

#line 478 "analysis.c"
static const MR_DuExistInfo analysis__analysis__exist_info_some_analysis_result_0_0;

#line 481 "analysis.c"
static const MR_DuFunctorDesc analysis__analysis__du_functor_desc_some_analysis_result_0_0;

#line 484 "analysis.c"
static const MR_DuFunctorDescPtr analysis__analysis__du_stag_ordered_some_analysis_result_0_0[1];

#line 487 "analysis.c"
static const MR_DuPtagLayout analysis__analysis__du_ptag_ordered_some_analysis_result_0[1];

#line 490 "analysis.c"
static const MR_DuFunctorDescPtr analysis__analysis__du_name_ordered_some_analysis_result_0[1];

#line 493 "analysis.c"
static const MR_Integer analysis__analysis__functor_number_map_some_analysis_result_0[1];

#line 496 "analysis.c"
static const MR_ConstString analysis__analysis__type_class_id_var_names_to_term_1[1];

#line 499 "analysis.c"
static const MR_TypeClassMethod analysis__analysis__type_class_id_method_ids_to_term_1[2];

#line 502 "analysis.c"
static const MR_TypeClassId analysis__analysis__type_class_id_to_term_1;

#line 505 "analysis.c"
static const MR_ConstString analysis__analysis__type_class_id_var_names_partial_order_2[2];

#line 508 "analysis.c"
static const MR_TypeClassMethod analysis__analysis__type_class_id_method_ids_partial_order_2[2];

#line 511 "analysis.c"
static const MR_TypeClassId analysis__analysis__type_class_id_partial_order_2;

#line 514 "analysis.c"
static const MR_ConstString analysis__analysis__type_class_id_var_names_compiler_1[1];

#line 517 "analysis.c"
static const MR_TypeClassMethod analysis__analysis__type_class_id_method_ids_compiler_1[4];

#line 520 "analysis.c"
static const MR_TypeClassId analysis__analysis__type_class_id_compiler_1;

#line 523 "analysis.c"
static const MR_ConstString analysis__analysis__type_class_id_var_names_call_pattern_2[2];

#line 526 "analysis.c"
static const MR_TypeClassId analysis__analysis__type_class_id_call_pattern_2;

#line 529 "analysis.c"
static const MR_TypeClassConstraint_2Struct analysis__analysis__type_class_decl_super_call_pattern_2_1;

#line 532 "analysis.c"
static const MR_TypeClassConstraint_1Struct analysis__analysis__type_class_decl_super_call_pattern_2_2;

#line 535 "analysis.c"
static const MR_TypeClassConstraint analysis__analysis__type_class_decl_supers_call_pattern_2[2];

#line 538 "analysis.c"
static const MR_ConstString analysis__analysis__type_class_id_var_names_answer_pattern_2[2];

#line 541 "analysis.c"
static const MR_TypeClassId analysis__analysis__type_class_id_answer_pattern_2;

#line 544 "analysis.c"
static const MR_TypeClassConstraint_2Struct analysis__analysis__type_class_decl_super_answer_pattern_2_1;

#line 547 "analysis.c"
static const MR_TypeClassConstraint_1Struct analysis__analysis__type_class_decl_super_answer_pattern_2_2;

#line 550 "analysis.c"
static const MR_TypeClassConstraint analysis__analysis__type_class_decl_supers_answer_pattern_2[2];

#line 553 "analysis.c"
static const MR_ConstString analysis__analysis__type_class_id_var_names_analysis_3[3];

#line 556 "analysis.c"
static const MR_TypeClassMethod analysis__analysis__type_class_id_method_ids_analysis_3[6];

#line 559 "analysis.c"
static const MR_TypeClassId analysis__analysis__type_class_id_analysis_3;

#line 562 "analysis.c"
static const MR_TypeClassConstraint_2Struct analysis__analysis__type_class_decl_super_analysis_3_1;

#line 565 "analysis.c"
static const MR_TypeClassConstraint_2Struct analysis__analysis__type_class_decl_super_analysis_3_2;

#line 568 "analysis.c"
static const MR_TypeClassConstraint analysis__analysis__type_class_decl_supers_analysis_3[2];

#line 571 "analysis.c"
static MR_bool MR_CALL 
analysis____Unify____analysis_info_0_0_10001(
#line 574 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 576 "analysis.c"
  MR_Box analysis__wrapper_arg_2);

#line 579 "analysis.c"
static void MR_CALL 
analysis____Compare____analysis_info_0_0_10001(
#line 582 "analysis.c"
  MR_Box * analysis__wrapper_arg_1,
#line 584 "analysis.c"
  MR_Box analysis__wrapper_arg_2,
#line 586 "analysis.c"
  MR_Box analysis__wrapper_arg_3);

#line 589 "analysis.c"
static MR_bool MR_CALL 
analysis____Unify____analysis_map_1_0_10001(
#line 592 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 594 "analysis.c"
  MR_Box analysis__wrapper_arg_2,
#line 596 "analysis.c"
  MR_Box analysis__wrapper_arg_3);

#line 599 "analysis.c"
static void MR_CALL 
analysis____Compare____analysis_map_1_0_10001(
#line 602 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 604 "analysis.c"
  MR_Box * analysis__wrapper_arg_2,
#line 606 "analysis.c"
  MR_Box analysis__wrapper_arg_3,
#line 608 "analysis.c"
  MR_Box analysis__wrapper_arg_4);

#line 611 "analysis.c"
static MR_bool MR_CALL 
analysis____Unify____analysis_name_0_0_10001(
#line 614 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 616 "analysis.c"
  MR_Box analysis__wrapper_arg_2);

#line 619 "analysis.c"
static void MR_CALL 
analysis____Compare____analysis_name_0_0_10001(
#line 622 "analysis.c"
  MR_Box * analysis__wrapper_arg_1,
#line 624 "analysis.c"
  MR_Box analysis__wrapper_arg_2,
#line 626 "analysis.c"
  MR_Box analysis__wrapper_arg_3);

#line 629 "analysis.c"
static MR_bool MR_CALL 
analysis____Unify____analysis_request_0_0_10001(
#line 632 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 634 "analysis.c"
  MR_Box analysis__wrapper_arg_2);

#line 637 "analysis.c"
static void MR_CALL 
analysis____Compare____analysis_request_0_0_10001(
#line 640 "analysis.c"
  MR_Box * analysis__wrapper_arg_1,
#line 642 "analysis.c"
  MR_Box analysis__wrapper_arg_2,
#line 644 "analysis.c"
  MR_Box analysis__wrapper_arg_3);

#line 647 "analysis.c"
static MR_bool MR_CALL 
analysis____Unify____analysis_result_2_0_10001(
#line 650 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 652 "analysis.c"
  MR_Box analysis__wrapper_arg_2,
#line 654 "analysis.c"
  MR_Box analysis__wrapper_arg_3,
#line 656 "analysis.c"
  MR_Box analysis__wrapper_arg_4);

#line 659 "analysis.c"
static void MR_CALL 
analysis____Compare____analysis_result_2_0_10001(
#line 662 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 664 "analysis.c"
  MR_Box analysis__wrapper_arg_2,
#line 666 "analysis.c"
  MR_Box * analysis__wrapper_arg_3,
#line 668 "analysis.c"
  MR_Box analysis__wrapper_arg_4,
#line 670 "analysis.c"
  MR_Box analysis__wrapper_arg_5);

#line 673 "analysis.c"
static MR_bool MR_CALL 
analysis____Unify____analysis_status_0_0_10001(
#line 676 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 678 "analysis.c"
  MR_Box analysis__wrapper_arg_2);

#line 681 "analysis.c"
static void MR_CALL 
analysis____Compare____analysis_status_0_0_10001(
#line 684 "analysis.c"
  MR_Box * analysis__wrapper_arg_1,
#line 686 "analysis.c"
  MR_Box analysis__wrapper_arg_2,
#line 688 "analysis.c"
  MR_Box analysis__wrapper_arg_3);

#line 691 "analysis.c"
static MR_bool MR_CALL 
analysis____Unify____analysis_type_0_0_10001(
#line 694 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 696 "analysis.c"
  MR_Box analysis__wrapper_arg_2);

#line 699 "analysis.c"
static void MR_CALL 
analysis____Compare____analysis_type_0_0_10001(
#line 702 "analysis.c"
  MR_Box * analysis__wrapper_arg_1,
#line 704 "analysis.c"
  MR_Box analysis__wrapper_arg_2,
#line 706 "analysis.c"
  MR_Box analysis__wrapper_arg_3);

#line 709 "analysis.c"
static MR_bool MR_CALL 
analysis____Unify____any_call_0_0_10001(
#line 712 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 714 "analysis.c"
  MR_Box analysis__wrapper_arg_2);

#line 717 "analysis.c"
static void MR_CALL 
analysis____Compare____any_call_0_0_10001(
#line 720 "analysis.c"
  MR_Box * analysis__wrapper_arg_1,
#line 722 "analysis.c"
  MR_Box analysis__wrapper_arg_2,
#line 724 "analysis.c"
  MR_Box analysis__wrapper_arg_3);

#line 727 "analysis.c"
static MR_bool MR_CALL 
analysis____Unify____fixpoint_type_0_0_10001(
#line 730 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 732 "analysis.c"
  MR_Box analysis__wrapper_arg_2);

#line 735 "analysis.c"
static void MR_CALL 
analysis____Compare____fixpoint_type_0_0_10001(
#line 738 "analysis.c"
  MR_Box * analysis__wrapper_arg_1,
#line 740 "analysis.c"
  MR_Box analysis__wrapper_arg_2,
#line 742 "analysis.c"
  MR_Box analysis__wrapper_arg_3);

#line 745 "analysis.c"
static MR_bool MR_CALL 
analysis____Unify____func_analysis_map_1_0_10001(
#line 748 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 750 "analysis.c"
  MR_Box analysis__wrapper_arg_2,
#line 752 "analysis.c"
  MR_Box analysis__wrapper_arg_3);

#line 755 "analysis.c"
static void MR_CALL 
analysis____Compare____func_analysis_map_1_0_10001(
#line 758 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 760 "analysis.c"
  MR_Box * analysis__wrapper_arg_2,
#line 762 "analysis.c"
  MR_Box analysis__wrapper_arg_3,
#line 764 "analysis.c"
  MR_Box analysis__wrapper_arg_4);

#line 767 "analysis.c"
static MR_bool MR_CALL 
analysis____Unify____func_id_0_0_10001(
#line 770 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 772 "analysis.c"
  MR_Box analysis__wrapper_arg_2);

#line 775 "analysis.c"
static void MR_CALL 
analysis____Compare____func_id_0_0_10001(
#line 778 "analysis.c"
  MR_Box * analysis__wrapper_arg_1,
#line 780 "analysis.c"
  MR_Box analysis__wrapper_arg_2,
#line 782 "analysis.c"
  MR_Box analysis__wrapper_arg_3);

#line 785 "analysis.c"
static MR_bool MR_CALL 
analysis____Unify____imdg_arc_0_0_10001(
#line 788 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 790 "analysis.c"
  MR_Box analysis__wrapper_arg_2);

#line 793 "analysis.c"
static void MR_CALL 
analysis____Compare____imdg_arc_0_0_10001(
#line 796 "analysis.c"
  MR_Box * analysis__wrapper_arg_1,
#line 798 "analysis.c"
  MR_Box analysis__wrapper_arg_2,
#line 800 "analysis.c"
  MR_Box analysis__wrapper_arg_3);

#line 803 "analysis.c"
static MR_bool MR_CALL 
analysis____Unify____make_analysis_registry_0_0_10001(
#line 806 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 808 "analysis.c"
  MR_Box analysis__wrapper_arg_2);

#line 811 "analysis.c"
static void MR_CALL 
analysis____Compare____make_analysis_registry_0_0_10001(
#line 814 "analysis.c"
  MR_Box * analysis__wrapper_arg_1,
#line 816 "analysis.c"
  MR_Box analysis__wrapper_arg_2,
#line 818 "analysis.c"
  MR_Box analysis__wrapper_arg_3);

#line 821 "analysis.c"
static MR_bool MR_CALL 
analysis____Unify____module_analysis_map_1_0_10001(
#line 824 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 826 "analysis.c"
  MR_Box analysis__wrapper_arg_2,
#line 828 "analysis.c"
  MR_Box analysis__wrapper_arg_3);

#line 831 "analysis.c"
static void MR_CALL 
analysis____Compare____module_analysis_map_1_0_10001(
#line 834 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 836 "analysis.c"
  MR_Box * analysis__wrapper_arg_2,
#line 838 "analysis.c"
  MR_Box analysis__wrapper_arg_3,
#line 840 "analysis.c"
  MR_Box analysis__wrapper_arg_4);

#line 843 "analysis.c"
static MR_bool MR_CALL 
analysis____Unify____no_func_info_0_0_10001(
#line 846 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 848 "analysis.c"
  MR_Box analysis__wrapper_arg_2);

#line 851 "analysis.c"
static void MR_CALL 
analysis____Compare____no_func_info_0_0_10001(
#line 854 "analysis.c"
  MR_Box * analysis__wrapper_arg_1,
#line 856 "analysis.c"
  MR_Box analysis__wrapper_arg_2,
#line 858 "analysis.c"
  MR_Box analysis__wrapper_arg_3);

#line 861 "analysis.c"
static MR_bool MR_CALL 
analysis____Unify____some_analysis_result_0_0_10001(
#line 864 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 866 "analysis.c"
  MR_Box analysis__wrapper_arg_2);

#line 869 "analysis.c"
static void MR_CALL 
analysis____Compare____some_analysis_result_0_0_10001(
#line 872 "analysis.c"
  MR_Box * analysis__wrapper_arg_1,
#line 874 "analysis.c"
  MR_Box analysis__wrapper_arg_2,
#line 876 "analysis.c"
  MR_Box analysis__wrapper_arg_3);

#line 879 "analysis.c"
static MR_Box MR_CALL 
analysis__ClassMethod_for_analysis__to_term____analysis__any_call__arity0______analysis__to_term_1_1_f_0_10001(
#line 882 "analysis.c"
  MR_Box analysis__closure_arg,
#line 884 "analysis.c"
  MR_Box analysis__wrapper_arg_1);

#line 887 "analysis.c"
static MR_bool MR_CALL 
analysis__ClassMethod_for_analysis__to_term____analysis__any_call__arity0______analysis__from_term_2_2_p_0_10001(
#line 890 "analysis.c"
  MR_Box analysis__closure_arg,
#line 892 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 894 "analysis.c"
  MR_Box * analysis__wrapper_arg_2);

#line 897 "analysis.c"
static MR_bool MR_CALL 
analysis__ClassMethod_for_analysis__partial_order____analysis__no_func_info__arity0__analysis__any_call__arity0______analysis__more_precise_than_3_3_p_0_10001(
#line 900 "analysis.c"
  MR_Box analysis__closure_arg,
#line 902 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 904 "analysis.c"
  MR_Box analysis__wrapper_arg_2,
#line 906 "analysis.c"
  MR_Box analysis__wrapper_arg_3);

#line 909 "analysis.c"
static MR_bool MR_CALL 
analysis__ClassMethod_for_analysis__partial_order____analysis__no_func_info__arity0__analysis__any_call__arity0______analysis__equivalent_3_3_p_0_10001(
#line 912 "analysis.c"
  MR_Box analysis__closure_arg,
#line 914 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 916 "analysis.c"
  MR_Box analysis__wrapper_arg_2,
#line 918 "analysis.c"
  MR_Box analysis__wrapper_arg_3);

#line 1385 "analysis.m"
static void MR_CALL 
analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_109_115_103_95_95_104_111_54_95_95_91_51_93_95_48_3_p_0(
#line 1385 "analysis.m"
  MR_Word analysis__V_11_11,
#line 1385 "analysis.m"
  MR_Word analysis__V_12_12);

#line 1385 "analysis.m"
static void MR_CALL 
analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_109_115_103_95_95_104_111_52_95_95_91_54_93_95_48_3_p_0(
#line 1385 "analysis.m"
  MR_Word analysis__V_11_11,
#line 1385 "analysis.m"
  MR_Word analysis__V_12_12,
#line 1385 "analysis.m"
  MR_Word analysis__V_13_13,
#line 1385 "analysis.m"
  MR_Box analysis__V_14_14,
#line 1385 "analysis.m"
  MR_Box analysis__V_15_15);

#line 1385 "analysis.m"
static void MR_CALL 
analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_109_115_103_95_95_104_111_51_95_95_91_54_93_95_48_3_p_0(
#line 1385 "analysis.m"
  MR_Word analysis__V_11_11,
#line 1385 "analysis.m"
  MR_Box analysis__V_12_12,
#line 1385 "analysis.m"
  MR_Box analysis__V_13_13,
#line 1385 "analysis.m"
  MR_Word analysis__V_14_14,
#line 1385 "analysis.m"
  MR_Word analysis__V_15_15);

#line 1385 "analysis.m"
static void MR_CALL 
analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_109_115_103_95_95_104_111_49_95_95_91_51_93_95_48_3_p_0(
#line 1385 "analysis.m"
  MR_Word analysis__V_11_11,
#line 1385 "analysis.m"
  MR_Word analysis__V_12_12);

#line 1371 "analysis.m"
static MR_Box MR_CALL 
analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_108_117_98_95_114_101_115_117_108_116_95_115_116_97_116_117_115_101_115_95_51_95_95_91_49_93_95_48_3_f_0_1(
#line 1371 "analysis.m"
  MR_Box analysis__closure_arg,
#line 1371 "analysis.m"
  MR_Box analysis__wrapper_arg_1,
#line 1371 "analysis.m"
  MR_Box analysis__wrapper_arg_2);

#line 1365 "analysis.m"
static MR_Box MR_CALL 
analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_108_117_98_95_114_101_115_117_108_116_95_115_116_97_116_117_115_101_115_95_50_95_95_91_49_93_95_48_3_f_0_1(
#line 1365 "analysis.m"
  MR_Box analysis__closure_arg,
#line 1365 "analysis.m"
  MR_Box analysis__wrapper_arg_1,
#line 1365 "analysis.m"
  MR_Box analysis__wrapper_arg_2,
#line 1365 "analysis.m"
  MR_Box analysis__wrapper_arg_3);

#line 1171 "analysis.m"
static MR_bool MR_CALL 
analysis__IntroducedFrom__pred__clear_imdg_entries_pointing_at_3__1171__1_2_p_0(
#line 1171 "analysis.m"
  MR_Word analysis__ModuleName_4,
#line 1171 "analysis.m"
  MR_Word analysis__LambdaHeadVar__1_9);

#line 952 "analysis.m"
static MR_bool MR_CALL 
analysis__IntroducedFrom__func__update_analysis_registry_5__952__1_1_f_0(
#line 952 "analysis.m"
  MR_Word analysis__LambdaHeadVar__1_61,
#line 952 "analysis.m"
  MR_Word * analysis__LambdaHeadVar__2_62);

#line 923 "analysis.m"
static void MR_CALL 
analysis__IntroducedFrom__pred__update_analysis_registry_5__923__1_7_p_0(
#line 923 "analysis.m"
  MR_Word analysis__TypeClassInfo_for_analysis_158,
#line 923 "analysis.m"
  MR_Box analysis__NewAnswer_18,
#line 923 "analysis.m"
  MR_Box analysis__OldAnswer_25,
#line 923 "analysis.m"
  MR_Word analysis__Status_29,
#line 923 "analysis.m"
  MR_Word analysis__DepModules_31);

#line 894 "analysis.m"
static void MR_CALL 
analysis__IntroducedFrom__pred__update_analysis_registry_5__894__1_7_p_0(
#line 894 "analysis.m"
  MR_Word analysis__TypeClassInfo_for_analysis_158,
#line 894 "analysis.m"
  MR_Word analysis__ModuleName_11,
#line 894 "analysis.m"
  MR_Word analysis__FuncId_13,
#line 894 "analysis.m"
  MR_Box analysis__Call_17,
#line 894 "analysis.m"
  MR_Box analysis__NewAnswer_18);

#line 603 "analysis.m"
static MR_bool MR_CALL 
analysis__IntroducedFrom__pred__lookup_exactly_matching_result_even_from_invalid_modules__603__1_4_p_0(
#line 603 "analysis.m"
  MR_Word analysis__TypeClassInfo_for_analysis_32,
#line 603 "analysis.m"
  MR_Box analysis__FuncInfo_10,
#line 603 "analysis.m"
  MR_Box analysis__Call_11,
#line 603 "analysis.m"
  MR_Word analysis__LambdaHeadVar__1_22);

#line 536 "analysis.m"
static MR_Word MR_CALL 
analysis__IntroducedFrom__func__lookup_results_2__536__1_2_f_0(
#line 536 "analysis.m"
  MR_Word analysis__TypeClassInfo_for_analysis_29,
#line 536 "analysis.m"
  MR_Word analysis__LambdaHeadVar__1_24);

#line 516 "analysis.m"
static void MR_CALL 
analysis__IntroducedFrom__pred__lookup_results_1__516__1_4_p_0(
#line 516 "analysis.m"
  MR_Word analysis__TypeClassInfo_for_analysis_62,
#line 516 "analysis.m"
  MR_Word analysis__ResultList_10);

#line 499 "analysis.m"
static void MR_CALL 
analysis__IntroducedFrom__pred__lookup_results_1__499__1_4_p_0(
#line 499 "analysis.m"
  MR_Word analysis__ModuleName_7,
#line 499 "analysis.m"
  MR_Word analysis__FuncId_8);

#line 677 "analysis.m"
static MR_bool MR_CALL 
analysis__IntroducedFrom__func__lookup_requests__677__1_2_f_0(
#line 677 "analysis.m"
  MR_Word analysis__TypeClassInfo_for_call_pattern_47,
#line 677 "analysis.m"
  MR_Word analysis__LambdaHeadVar__1_23,
#line 677 "analysis.m"
  MR_Box * analysis__LambdaHeadVar__2_24);

#line 560 "analysis.m"
static void MR_CALL 
analysis__IntroducedFrom__pred__lookup_best_result__560__1_4_p_0(
#line 560 "analysis.m"
  MR_Word analysis__ModuleName_8,
#line 560 "analysis.m"
  MR_Word analysis__FuncId_9);

#line 549 "analysis.m"
static MR_bool MR_CALL 
analysis__IntroducedFrom__pred__lookup_matching_results__549__1_4_p_0(
#line 549 "analysis.m"
  MR_Word analysis__TypeClassInfo_for_analysis_21,
#line 549 "analysis.m"
  MR_Box analysis__FuncInfo_10,
#line 549 "analysis.m"
  MR_Box analysis__Call_11,
#line 549 "analysis.m"
  MR_Word analysis__LambdaHeadVar__1_17);

#line 479 "analysis.m"
static MR_Box MR_CALL 
analysis__IntroducedFrom__func__lookup_existing_call_patterns__479__1_2_f_0(
#line 479 "analysis.m"
  MR_Word analysis__TypeClassInfo_for_call_pattern_46,
#line 479 "analysis.m"
  MR_Word analysis__LambdaHeadVar__1_24);

#line 1358 "analysis.m"
static MR_Box MR_CALL 
analysis__lub_result_statuses_1_f_0_1(
#line 1358 "analysis.m"
  MR_Box analysis__closure_arg,
#line 1358 "analysis.m"
  MR_Box analysis__wrapper_arg_1,
#line 1358 "analysis.m"
  MR_Box analysis__wrapper_arg_2,
#line 1358 "analysis.m"
  MR_Box analysis__wrapper_arg_3);

#line 1178 "analysis.m"
static void MR_CALL 
analysis__combine_func_imdg_3_p_0_1(
#line 1178 "analysis.m"
  MR_Box analysis__closure_arg,
#line 1178 "analysis.m"
  MR_Box analysis__wrapper_arg_1,
#line 1178 "analysis.m"
  MR_Box analysis__wrapper_arg_2,
#line 1178 "analysis.m"
  MR_Box * analysis__wrapper_arg_3);

#line 1171 "analysis.m"
static MR_bool MR_CALL 
analysis__clear_imdg_entries_pointing_at_3_3_p_0_1(
#line 1171 "analysis.m"
  MR_Box analysis__closure_arg,
#line 1171 "analysis.m"
  MR_Box analysis__wrapper_arg_1);

#line 1164 "analysis.m"
static void MR_CALL 
analysis__clear_imdg_entries_pointing_at_2_3_p_0_1(
#line 1164 "analysis.m"
  MR_Box analysis__closure_arg,
#line 1164 "analysis.m"
  MR_Box analysis__wrapper_arg_1,
#line 1164 "analysis.m"
  MR_Box * analysis__wrapper_arg_2);

#line 1156 "analysis.m"
static void MR_CALL 
analysis__clear_imdg_entries_pointing_at_3_p_0_1(
#line 1156 "analysis.m"
  MR_Box analysis__closure_arg,
#line 1156 "analysis.m"
  MR_Box analysis__wrapper_arg_1,
#line 1156 "analysis.m"
  MR_Box * analysis__wrapper_arg_2);

#line 1134 "analysis.m"
static void MR_CALL 
analysis__update_intermodule_dependencies_2_4_p_0_1(
#line 1134 "analysis.m"
  MR_Box analysis__closure_arg,
#line 1134 "analysis.m"
  MR_Box analysis__wrapper_arg_1,
#line 1134 "analysis.m"
  MR_Box analysis__wrapper_arg_2,
#line 1134 "analysis.m"
  MR_Box * analysis__wrapper_arg_3);

#line 1119 "analysis.m"
static void MR_CALL 
analysis__update_intermodule_dependencies_4_p_0_1(
#line 1119 "analysis.m"
  MR_Box analysis__closure_arg,
#line 1119 "analysis.m"
  MR_Box analysis__wrapper_arg_1,
#line 1119 "analysis.m"
  MR_Box analysis__wrapper_arg_2,
#line 1119 "analysis.m"
  MR_Box * analysis__wrapper_arg_3);

#line 1016 "analysis.m"
static MR_bool MR_CALL 
analysis__imdg_dependent_modules_5_f_0_1(
#line 1016 "analysis.m"
  MR_Box analysis__closure_arg,
#line 1016 "analysis.m"
  MR_Box analysis__wrapper_arg_1,
#line 1016 "analysis.m"
  MR_Box * analysis__wrapper_arg_2);

#line 957 "analysis.m"
static void MR_CALL 
analysis__update_analysis_registry_5_9_p_0_3(
#line 957 "analysis.m"
  MR_Box analysis__closure_arg,
#line 957 "analysis.m"
  MR_Box analysis__wrapper_arg_1,
#line 957 "analysis.m"
  MR_Box analysis__wrapper_arg_2,
#line 957 "analysis.m"
  MR_Box * analysis__wrapper_arg_3,
#line 957 "analysis.m"
  MR_Box analysis__wrapper_arg_4,
#line 957 "analysis.m"
  MR_Box * analysis__wrapper_arg_5);

#line 952 "analysis.m"
static MR_bool MR_CALL 
analysis__update_analysis_registry_5_9_p_0_2(
#line 952 "analysis.m"
  MR_Box analysis__closure_arg,
#line 952 "analysis.m"
  MR_Box analysis__wrapper_arg_1,
#line 952 "analysis.m"
  MR_Box * analysis__wrapper_arg_2);

#line 925 "analysis.m"
static void MR_CALL 
analysis__update_analysis_registry_5_9_p_0_1(
#line 925 "analysis.m"
  MR_Box analysis__closure_arg,
#line 925 "analysis.m"
  MR_Box analysis__wrapper_arg_1,
#line 925 "analysis.m"
  MR_Box analysis__wrapper_arg_2,
#line 925 "analysis.m"
  MR_Box * analysis__wrapper_arg_3,
#line 925 "analysis.m"
  MR_Box analysis__wrapper_arg_4,
#line 925 "analysis.m"
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

#line 851 "analysis.m"
static void MR_CALL 
analysis__update_analysis_registry_2_7_p_0_1(
#line 851 "analysis.m"
  MR_Box analysis__closure_arg,
#line 851 "analysis.m"
  MR_Box analysis__wrapper_arg_1,
#line 851 "analysis.m"
  MR_Box analysis__wrapper_arg_2,
#line 851 "analysis.m"
  MR_Box analysis__wrapper_arg_3,
#line 851 "analysis.m"
  MR_Box * analysis__wrapper_arg_4,
#line 851 "analysis.m"
  MR_Box analysis__wrapper_arg_5,
#line 851 "analysis.m"
  MR_Box * analysis__wrapper_arg_6);

#line 851 "analysis.m"
static void MR_CALL 
analysis__update_analysis_registry_5_p_0_1(
#line 851 "analysis.m"
  MR_Box analysis__closure_arg,
#line 851 "analysis.m"
  MR_Box analysis__wrapper_arg_1,
#line 851 "analysis.m"
  MR_Box analysis__wrapper_arg_2,
#line 851 "analysis.m"
  MR_Box analysis__wrapper_arg_3,
#line 851 "analysis.m"
  MR_Box * analysis__wrapper_arg_4,
#line 851 "analysis.m"
  MR_Box analysis__wrapper_arg_5,
#line 851 "analysis.m"
  MR_Box * analysis__wrapper_arg_6);

#line 603 "analysis.m"
static MR_bool MR_CALL 
analysis__lookup_exactly_matching_result_even_from_invalid_modules_6_p_0_1(
#line 603 "analysis.m"
  MR_Box analysis__closure_arg,
#line 603 "analysis.m"
  MR_Box analysis__wrapper_arg_1);

#line 536 "analysis.m"
static MR_Box MR_CALL 
analysis__lookup_results_2_4_p_0_1(
#line 536 "analysis.m"
  MR_Box analysis__closure_arg,
#line 536 "analysis.m"
  MR_Box analysis__wrapper_arg_1);

#line 1280 "analysis.m"
static void MR_CALL 
analysis__write_analysis_files_7_p_0_4(
#line 1280 "analysis.m"
  MR_Box analysis__closure_arg,
#line 1280 "analysis.m"
  MR_Box analysis__wrapper_arg_1,
#line 1280 "analysis.m"
  MR_Box analysis__wrapper_arg_2,
#line 1280 "analysis.m"
  MR_Box * analysis__wrapper_arg_3);

#line 1272 "analysis.m"
static void MR_CALL 
analysis__write_analysis_files_7_p_0_3(
#line 1272 "analysis.m"
  MR_Box analysis__closure_arg,
#line 1272 "analysis.m"
  MR_Box analysis__wrapper_arg_1,
#line 1272 "analysis.m"
  MR_Box analysis__wrapper_arg_2,
#line 1272 "analysis.m"
  MR_Box * analysis__wrapper_arg_3);

#line 1263 "analysis.m"
static void MR_CALL 
analysis__write_analysis_files_7_p_0_2(
#line 1263 "analysis.m"
  MR_Box analysis__closure_arg,
#line 1263 "analysis.m"
  MR_Box analysis__wrapper_arg_1,
#line 1263 "analysis.m"
  MR_Box analysis__wrapper_arg_2,
#line 1263 "analysis.m"
  MR_Box * analysis__wrapper_arg_3);

#line 1245 "analysis.m"
static void MR_CALL 
analysis__write_analysis_files_7_p_0_1(
#line 1245 "analysis.m"
  MR_Box analysis__closure_arg,
#line 1245 "analysis.m"
  MR_Box analysis__wrapper_arg_1,
#line 1245 "analysis.m"
  MR_Box analysis__wrapper_arg_2,
#line 1245 "analysis.m"
  MR_Box * analysis__wrapper_arg_3,
#line 1245 "analysis.m"
  MR_Box analysis__wrapper_arg_4,
#line 1245 "analysis.m"
  MR_Box * analysis__wrapper_arg_5);

#line 1195 "analysis.m"
static void MR_CALL 
analysis__prepare_intermodule_analysis_7_p_0_1(
#line 1195 "analysis.m"
  MR_Box analysis__closure_arg,
#line 1195 "analysis.m"
  MR_Box analysis__wrapper_arg_1,
#line 1195 "analysis.m"
  MR_Box analysis__wrapper_arg_2,
#line 1195 "analysis.m"
  MR_Box * analysis__wrapper_arg_3,
#line 1195 "analysis.m"
  MR_Box analysis__wrapper_arg_4,
#line 1195 "analysis.m"
  MR_Box * analysis__wrapper_arg_5);

#line 677 "analysis.m"
static MR_bool MR_CALL 
analysis__lookup_requests_5_p_0_1(
#line 677 "analysis.m"
  MR_Box analysis__closure_arg,
#line 677 "analysis.m"
  MR_Box analysis__wrapper_arg_1,
#line 677 "analysis.m"
  MR_Box * analysis__wrapper_arg_2);

#line 575 "analysis.m"
static void MR_CALL 
analysis__lookup_best_result_6_p_0_1(
#line 575 "analysis.m"
  MR_Box analysis__closure_arg,
#line 575 "analysis.m"
  MR_Box analysis__wrapper_arg_1,
#line 575 "analysis.m"
  MR_Box analysis__wrapper_arg_2,
#line 575 "analysis.m"
  MR_Box * analysis__wrapper_arg_3);

#line 549 "analysis.m"
static MR_bool MR_CALL 
analysis__lookup_matching_results_6_p_0_1(
#line 549 "analysis.m"
  MR_Box analysis__closure_arg,
#line 549 "analysis.m"
  MR_Box analysis__wrapper_arg_1);

#line 479 "analysis.m"
static MR_Box MR_CALL 
analysis__lookup_existing_call_patterns_5_p_0_1(
#line 479 "analysis.m"
  MR_Box analysis__closure_arg,
#line 479 "analysis.m"
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
#line 1380 "analysis.m"
MR_Word analysis__mutable_variable_debug_analysis;
#ifdef MR_THREAD_SAFE
    MercuryLock analysis__mutable_variable_debug_analysis_lock;
#endif

#line 1380 "analysis.m"
void 
analysis__user_init_pred_0(void)
#line 1380 "analysis.m"
{
#line 1380 "analysis.m"
	analysis__initialise_mutable_debug_analysis_0_p_0();
}


#line 1896 "analysis.c"
static const MR_FA_PseudoTypeInfo_Struct2 analysis__analysis__pti_analysis_result_2__pseudo_2__pseudo_3 = {
  &analysis__analysis__type_ctor_info_analysis_result_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 2,
    (MR_PseudoTypeInfo) (MR_Integer) 3
  }
};

#line 1905 "analysis.c"
static const MR_FA_PseudoTypeInfo_Struct2 analysis__analysis__pti_analysis_result_2__pseudo_1__pseudo_2 = {
  &analysis__analysis__type_ctor_info_analysis_result_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

#line 1914 "analysis.c"
static const MR_FA_TypeInfo_Struct1 analysis__list__ti_list_1analysis__type_ctor_info_some_analysis_result_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &analysis__analysis__type_ctor_info_some_analysis_result_0
  }
};

#line 1922 "analysis.c"
static const MR_FA_PseudoTypeInfo_Struct2 analysis__tree234__pti_tree234_2__plain_analysis__type_ctor_info_func_id_0__plain_list__ti_list_1analysis__type_ctor_info_some_analysis_result_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &analysis__analysis__type_ctor_info_func_id_0,
    (MR_PseudoTypeInfo) &analysis__list__ti_list_1analysis__type_ctor_info_some_analysis_result_0
  }
};

#line 1931 "analysis.c"
static const MR_FA_PseudoTypeInfo_Struct1 analysis__list__pti_list_1__plain_analysis__type_ctor_info_some_analysis_result_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &analysis__analysis__type_ctor_info_some_analysis_result_0
  }
};

#line 1939 "analysis.c"
static const MR_FA_TypeInfo_Struct1 analysis__list__ti_list_1analysis__type_ctor_info_imdg_arc_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &analysis__analysis__type_ctor_info_imdg_arc_0
  }
};

#line 1947 "analysis.c"
static const MR_FA_PseudoTypeInfo_Struct2 analysis__tree234__pti_tree234_2__plain_analysis__type_ctor_info_func_id_0__plain_list__ti_list_1analysis__type_ctor_info_imdg_arc_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &analysis__analysis__type_ctor_info_func_id_0,
    (MR_PseudoTypeInfo) &analysis__list__ti_list_1analysis__type_ctor_info_imdg_arc_0
  }
};

#line 1956 "analysis.c"
static const MR_FA_PseudoTypeInfo_Struct1 analysis__list__pti_list_1__plain_analysis__type_ctor_info_imdg_arc_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &analysis__analysis__type_ctor_info_imdg_arc_0
  }
};

#line 1964 "analysis.c"
static const MR_FA_TypeInfo_Struct1 analysis__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
  }
};

#line 1972 "analysis.c"
static const MR_FA_TypeInfo_Struct1 analysis__list__ti_list_1analysis__type_ctor_info_analysis_request_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &analysis__analysis__type_ctor_info_analysis_request_0
  }
};

#line 1980 "analysis.c"
static const MR_FA_TypeInfo_Struct2 analysis__tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_analysis_request_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &analysis__analysis__type_ctor_info_func_id_0,
    (MR_TypeInfo) &analysis__list__ti_list_1analysis__type_ctor_info_analysis_request_0
  }
};

#line 1989 "analysis.c"
static const MR_FA_TypeInfo_Struct2 analysis__tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_analysis_request_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_TypeInfo) &analysis__tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_analysis_request_0
  }
};

#line 1998 "analysis.c"
static const MR_FA_TypeInfo_Struct2 analysis__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_analysis_request_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_TypeInfo) &analysis__tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_analysis_request_0
  }
};

#line 2007 "analysis.c"
static const MR_FA_TypeInfo_Struct2 analysis__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0analysis__type_ctor_info_analysis_status_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_TypeInfo) &analysis__analysis__type_ctor_info_analysis_status_0
  }
};

#line 2016 "analysis.c"
static const MR_FA_TypeInfo_Struct2 analysis__tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_some_analysis_result_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &analysis__analysis__type_ctor_info_func_id_0,
    (MR_TypeInfo) &analysis__list__ti_list_1analysis__type_ctor_info_some_analysis_result_0
  }
};

#line 2025 "analysis.c"
static const MR_FA_TypeInfo_Struct2 analysis__tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_some_analysis_result_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_TypeInfo) &analysis__tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_some_analysis_result_0
  }
};

#line 2034 "analysis.c"
static const MR_FA_TypeInfo_Struct2 analysis__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_some_analysis_result_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_TypeInfo) &analysis__tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_some_analysis_result_0
  }
};

#line 2043 "analysis.c"
static const MR_FA_TypeInfo_Struct2 analysis__tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_imdg_arc_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &analysis__analysis__type_ctor_info_func_id_0,
    (MR_TypeInfo) &analysis__list__ti_list_1analysis__type_ctor_info_imdg_arc_0
  }
};

#line 2052 "analysis.c"
static const MR_FA_TypeInfo_Struct2 analysis__tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_imdg_arc_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_TypeInfo) &analysis__tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_imdg_arc_0
  }
};

#line 2061 "analysis.c"
static const MR_FA_TypeInfo_Struct2 analysis__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_imdg_arc_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_TypeInfo) &analysis__tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_imdg_arc_0
  }
};

#line 2070 "analysis.c"
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

#line 2084 "analysis.c"
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

#line 2098 "analysis.c"
static const MR_TypeClassConstraint_1Struct analysis__analysis__exist_tc_constr_analysis_info_0_0_1 = {
  &analysis__analysis__type_class_decl_compiler_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 2106 "analysis.c"
static const MR_TypeClassConstraint analysis__analysis__exist_tc_constrs_analysis_info_0_0[1] = {
  (MR_TypeClassConstraint) &analysis__analysis__exist_tc_constr_analysis_info_0_0_1
};

#line 2111 "analysis.c"
static const MR_DuExistLocn analysis__analysis__exist_locns_analysis_info_0_0[1] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

#line 2119 "analysis.c"
static const MR_DuExistInfo analysis__analysis__exist_info_analysis_info_0_0 = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 1,
  analysis__analysis__exist_locns_analysis_info_0_0,
  analysis__analysis__exist_tc_constrs_analysis_info_0_0
};

#line 2128 "analysis.c"
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

#line 2143 "analysis.c"
static const MR_DuFunctorDescPtr analysis__analysis__du_stag_ordered_analysis_info_0_0[1] = {
  &analysis__analysis__du_functor_desc_analysis_info_0_0
};

#line 2148 "analysis.c"
static const MR_DuPtagLayout analysis__analysis__du_ptag_ordered_analysis_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    analysis__analysis__du_stag_ordered_analysis_info_0_0
  }
};

#line 2157 "analysis.c"
static const MR_DuFunctorDescPtr analysis__analysis__du_name_ordered_analysis_info_0[1] = {
  &analysis__analysis__du_functor_desc_analysis_info_0_0
};

#line 2162 "analysis.c"
static const MR_Integer analysis__analysis__functor_number_map_analysis_info_0[1] = {
  (MR_Integer) 0
};

#line 2167 "analysis.c"
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

#line 2184 "analysis.c"
static const MR_FA_PseudoTypeInfo_Struct1 analysis__list__pti_list_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 2192 "analysis.c"
static const MR_FA_PseudoTypeInfo_Struct2 analysis__tree234__pti_tree234_2__plain_analysis__type_ctor_info_func_id_0__pseudo_list__pti_list_1__pseudo_1 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &analysis__analysis__type_ctor_info_func_id_0,
    (MR_PseudoTypeInfo) &analysis__list__pti_list_1__pseudo_1
  }
};

#line 2201 "analysis.c"
static const MR_FA_PseudoTypeInfo_Struct2 analysis__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__pseudo_tree234__pti_tree234_2__plain_analysis__type_ctor_info_func_id_0__pseudo_list__pti_list_1__pseudo_1 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &analysis__tree234__pti_tree234_2__plain_analysis__type_ctor_info_func_id_0__pseudo_list__pti_list_1__pseudo_1
  }
};

#line 2210 "analysis.c"
static const MR_FA_PseudoTypeInfo_Struct2 analysis__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__pseudo_tree234__pti_tree234_2__plain_analysis__type_ctor_info_func_id_0__pseudo_list__pti_list_1__pseudo_1 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_PseudoTypeInfo) &analysis__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__pseudo_tree234__pti_tree234_2__plain_analysis__type_ctor_info_func_id_0__pseudo_list__pti_list_1__pseudo_1
  }
};

#line 2219 "analysis.c"
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

#line 2236 "analysis.c"
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

#line 2253 "analysis.c"
static const MR_PseudoTypeInfo analysis__analysis__field_types_analysis_request_0_0[2] = {
  (MR_PseudoTypeInfo) (MR_Integer) 514,
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
};

#line 2259 "analysis.c"
static const MR_ConstString analysis__analysis__field_names_analysis_request_0_0[2] = {
  (MR_String) "req_call",
  (MR_String) "req_caller"
};

#line 2265 "analysis.c"
static const MR_TypeClassConstraint_2Struct analysis__analysis__exist_tc_constr_analysis_request_0_0_1 = {
  &analysis__analysis__type_class_decl_call_pattern_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

#line 2274 "analysis.c"
static const MR_TypeClassConstraint analysis__analysis__exist_tc_constrs_analysis_request_0_0[1] = {
  (MR_TypeClassConstraint) &analysis__analysis__exist_tc_constr_analysis_request_0_0_1
};

#line 2279 "analysis.c"
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

#line 2291 "analysis.c"
static const MR_DuExistInfo analysis__analysis__exist_info_analysis_request_0_0 = {
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 1,
  analysis__analysis__exist_locns_analysis_request_0_0,
  analysis__analysis__exist_tc_constrs_analysis_request_0_0
};

#line 2300 "analysis.c"
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

#line 2315 "analysis.c"
static const MR_DuFunctorDescPtr analysis__analysis__du_stag_ordered_analysis_request_0_0[1] = {
  &analysis__analysis__du_functor_desc_analysis_request_0_0
};

#line 2320 "analysis.c"
static const MR_DuPtagLayout analysis__analysis__du_ptag_ordered_analysis_request_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    analysis__analysis__du_stag_ordered_analysis_request_0_0
  }
};

#line 2329 "analysis.c"
static const MR_DuFunctorDescPtr analysis__analysis__du_name_ordered_analysis_request_0[1] = {
  &analysis__analysis__du_functor_desc_analysis_request_0_0
};

#line 2334 "analysis.c"
static const MR_Integer analysis__analysis__functor_number_map_analysis_request_0[1] = {
  (MR_Integer) 0
};

#line 2339 "analysis.c"
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

#line 2356 "analysis.c"
static const MR_PseudoTypeInfo analysis__analysis__field_types_analysis_result_2_0[3] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) (MR_Integer) 2,
  (MR_PseudoTypeInfo) &analysis__analysis__type_ctor_info_analysis_status_0
};

#line 2363 "analysis.c"
static const MR_ConstString analysis__analysis__field_names_analysis_result_2_0[3] = {
  (MR_String) "ar_call",
  (MR_String) "ar_answer",
  (MR_String) "ar_status"
};

#line 2370 "analysis.c"
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

#line 2385 "analysis.c"
static const MR_DuFunctorDescPtr analysis__analysis__du_stag_ordered_analysis_result_2_0[1] = {
  &analysis__analysis__du_functor_desc_analysis_result_2_0
};

#line 2390 "analysis.c"
static const MR_DuPtagLayout analysis__analysis__du_ptag_ordered_analysis_result_2[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    analysis__analysis__du_stag_ordered_analysis_result_2_0
  }
};

#line 2399 "analysis.c"
static const MR_DuFunctorDescPtr analysis__analysis__du_name_ordered_analysis_result_2[1] = {
  &analysis__analysis__du_functor_desc_analysis_result_2_0
};

#line 2404 "analysis.c"
static const MR_Integer analysis__analysis__functor_number_map_analysis_result_2[1] = {
  (MR_Integer) 0
};

#line 2409 "analysis.c"
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

#line 2426 "analysis.c"
static const MR_EnumFunctorDesc analysis__analysis__enum_functor_desc_analysis_status_0_0 = {
  (MR_String) "invalid",
  (MR_Integer) 0
};

#line 2432 "analysis.c"
static const MR_EnumFunctorDesc analysis__analysis__enum_functor_desc_analysis_status_0_1 = {
  (MR_String) "suboptimal",
  (MR_Integer) 1
};

#line 2438 "analysis.c"
static const MR_EnumFunctorDesc analysis__analysis__enum_functor_desc_analysis_status_0_2 = {
  (MR_String) "optimal",
  (MR_Integer) 2
};

#line 2444 "analysis.c"
static const MR_EnumFunctorDescPtr analysis__analysis__enum_value_ordered_analysis_status_0[3] = {
  &analysis__analysis__enum_functor_desc_analysis_status_0_0,
  &analysis__analysis__enum_functor_desc_analysis_status_0_1,
  &analysis__analysis__enum_functor_desc_analysis_status_0_2
};

#line 2451 "analysis.c"
static const MR_EnumFunctorDescPtr analysis__analysis__enum_name_ordered_analysis_status_0[3] = {
  &analysis__analysis__enum_functor_desc_analysis_status_0_0,
  &analysis__analysis__enum_functor_desc_analysis_status_0_2,
  &analysis__analysis__enum_functor_desc_analysis_status_0_1
};

#line 2458 "analysis.c"
static const MR_Integer analysis__analysis__functor_number_map_analysis_status_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 1
};

#line 2465 "analysis.c"
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

#line 2482 "analysis.c"
static const MR_FA_PseudoTypeInfo_Struct1 analysis__unit__pti_unit_1__pseudo_514 = {
  &mercury__unit__unit__type_ctor_info_unit_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 514
  }
};

#line 2490 "analysis.c"
static const MR_FA_PseudoTypeInfo_Struct1 analysis__unit__pti_unit_1__pseudo_515 = {
  &mercury__unit__unit__type_ctor_info_unit_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 515
  }
};

#line 2498 "analysis.c"
static const MR_PseudoTypeInfo analysis__analysis__field_types_analysis_type_0_0[2] = {
  (MR_PseudoTypeInfo) &analysis__unit__pti_unit_1__pseudo_514,
  (MR_PseudoTypeInfo) &analysis__unit__pti_unit_1__pseudo_515
};

#line 2504 "analysis.c"
static const MR_TypeClassConstraint_3Struct analysis__analysis__exist_tc_constr_analysis_type_0_0_1 = {
  &analysis__analysis__type_class_decl_analysis_3,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 2,
    (MR_PseudoTypeInfo) (MR_Integer) 3
  }
};

#line 2514 "analysis.c"
static const MR_TypeClassConstraint analysis__analysis__exist_tc_constrs_analysis_type_0_0[1] = {
  (MR_TypeClassConstraint) &analysis__analysis__exist_tc_constr_analysis_type_0_0_1
};

#line 2519 "analysis.c"
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

#line 2535 "analysis.c"
static const MR_DuExistInfo analysis__analysis__exist_info_analysis_type_0_0 = {
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 1,
  analysis__analysis__exist_locns_analysis_type_0_0,
  analysis__analysis__exist_tc_constrs_analysis_type_0_0
};

#line 2544 "analysis.c"
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

#line 2559 "analysis.c"
static const MR_DuFunctorDescPtr analysis__analysis__du_stag_ordered_analysis_type_0_0[1] = {
  &analysis__analysis__du_functor_desc_analysis_type_0_0
};

#line 2564 "analysis.c"
static const MR_DuPtagLayout analysis__analysis__du_ptag_ordered_analysis_type_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    analysis__analysis__du_stag_ordered_analysis_type_0_0
  }
};

#line 2573 "analysis.c"
static const MR_DuFunctorDescPtr analysis__analysis__du_name_ordered_analysis_type_0[1] = {
  &analysis__analysis__du_functor_desc_analysis_type_0_0
};

#line 2578 "analysis.c"
static const MR_Integer analysis__analysis__functor_number_map_analysis_type_0[1] = {
  (MR_Integer) 0
};

#line 2583 "analysis.c"
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

#line 2600 "analysis.c"
static const MR_EnumFunctorDesc analysis__analysis__enum_functor_desc_any_call_0_0 = {
  (MR_String) "any_call",
  (MR_Integer) 0
};

#line 2606 "analysis.c"
static const MR_EnumFunctorDescPtr analysis__analysis__enum_value_ordered_any_call_0[1] = {
  &analysis__analysis__enum_functor_desc_any_call_0_0
};

#line 2611 "analysis.c"
static const MR_EnumFunctorDescPtr analysis__analysis__enum_name_ordered_any_call_0[1] = {
  &analysis__analysis__enum_functor_desc_any_call_0_0
};

#line 2616 "analysis.c"
static const MR_Integer analysis__analysis__functor_number_map_any_call_0[1] = {
  (MR_Integer) 0
};

#line 2621 "analysis.c"
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

#line 2638 "analysis.c"
static const MR_EnumFunctorDesc analysis__analysis__enum_functor_desc_fixpoint_type_0_0 = {
  (MR_String) "least_fixpoint",
  (MR_Integer) 0
};

#line 2644 "analysis.c"
static const MR_EnumFunctorDesc analysis__analysis__enum_functor_desc_fixpoint_type_0_1 = {
  (MR_String) "greatest_fixpoint",
  (MR_Integer) 1
};

#line 2650 "analysis.c"
static const MR_EnumFunctorDescPtr analysis__analysis__enum_value_ordered_fixpoint_type_0[2] = {
  &analysis__analysis__enum_functor_desc_fixpoint_type_0_0,
  &analysis__analysis__enum_functor_desc_fixpoint_type_0_1
};

#line 2656 "analysis.c"
static const MR_EnumFunctorDescPtr analysis__analysis__enum_name_ordered_fixpoint_type_0[2] = {
  &analysis__analysis__enum_functor_desc_fixpoint_type_0_1,
  &analysis__analysis__enum_functor_desc_fixpoint_type_0_0
};

#line 2662 "analysis.c"
static const MR_Integer analysis__analysis__functor_number_map_fixpoint_type_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 2668 "analysis.c"
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

#line 2685 "analysis.c"
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

#line 2702 "analysis.c"
static const MR_PseudoTypeInfo analysis__analysis__field_types_func_id_0_0[4] = {
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2710 "analysis.c"
static const MR_ConstString analysis__analysis__field_names_func_id_0_0[4] = {
  (MR_String) "fid_pf",
  (MR_String) "fid_name",
  (MR_String) "fid_arity",
  (MR_String) "fid_mode"
};

#line 2718 "analysis.c"
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

#line 2733 "analysis.c"
static const MR_DuFunctorDescPtr analysis__analysis__du_stag_ordered_func_id_0_0[1] = {
  &analysis__analysis__du_functor_desc_func_id_0_0
};

#line 2738 "analysis.c"
static const MR_DuPtagLayout analysis__analysis__du_ptag_ordered_func_id_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    analysis__analysis__du_stag_ordered_func_id_0_0
  }
};

#line 2747 "analysis.c"
static const MR_DuFunctorDescPtr analysis__analysis__du_name_ordered_func_id_0[1] = {
  &analysis__analysis__du_functor_desc_func_id_0_0
};

#line 2752 "analysis.c"
static const MR_Integer analysis__analysis__functor_number_map_func_id_0[1] = {
  (MR_Integer) 0
};

#line 2757 "analysis.c"
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

#line 2774 "analysis.c"
static const MR_PseudoTypeInfo analysis__analysis__field_types_imdg_arc_0_0[2] = {
  (MR_PseudoTypeInfo) (MR_Integer) 514,
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
};

#line 2780 "analysis.c"
static const MR_ConstString analysis__analysis__field_names_imdg_arc_0_0[2] = {
  (MR_String) "imdg_call",
  (MR_String) "imdg_caller"
};

#line 2786 "analysis.c"
static const MR_TypeClassConstraint_2Struct analysis__analysis__exist_tc_constr_imdg_arc_0_0_1 = {
  &analysis__analysis__type_class_decl_call_pattern_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

#line 2795 "analysis.c"
static const MR_TypeClassConstraint analysis__analysis__exist_tc_constrs_imdg_arc_0_0[1] = {
  (MR_TypeClassConstraint) &analysis__analysis__exist_tc_constr_imdg_arc_0_0_1
};

#line 2800 "analysis.c"
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

#line 2812 "analysis.c"
static const MR_DuExistInfo analysis__analysis__exist_info_imdg_arc_0_0 = {
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 1,
  analysis__analysis__exist_locns_imdg_arc_0_0,
  analysis__analysis__exist_tc_constrs_imdg_arc_0_0
};

#line 2821 "analysis.c"
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

#line 2836 "analysis.c"
static const MR_DuFunctorDescPtr analysis__analysis__du_stag_ordered_imdg_arc_0_0[1] = {
  &analysis__analysis__du_functor_desc_imdg_arc_0_0
};

#line 2841 "analysis.c"
static const MR_DuPtagLayout analysis__analysis__du_ptag_ordered_imdg_arc_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    analysis__analysis__du_stag_ordered_imdg_arc_0_0
  }
};

#line 2850 "analysis.c"
static const MR_DuFunctorDescPtr analysis__analysis__du_name_ordered_imdg_arc_0[1] = {
  &analysis__analysis__du_functor_desc_imdg_arc_0_0
};

#line 2855 "analysis.c"
static const MR_Integer analysis__analysis__functor_number_map_imdg_arc_0[1] = {
  (MR_Integer) 0
};

#line 2860 "analysis.c"
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

#line 2877 "analysis.c"
static const MR_EnumFunctorDesc analysis__analysis__enum_functor_desc_make_analysis_registry_0_0 = {
  (MR_String) "make_analysis_registry",
  (MR_Integer) 0
};

#line 2883 "analysis.c"
static const MR_EnumFunctorDesc analysis__analysis__enum_functor_desc_make_analysis_registry_0_1 = {
  (MR_String) "use_analysis_registry_only",
  (MR_Integer) 1
};

#line 2889 "analysis.c"
static const MR_EnumFunctorDescPtr analysis__analysis__enum_value_ordered_make_analysis_registry_0[2] = {
  &analysis__analysis__enum_functor_desc_make_analysis_registry_0_0,
  &analysis__analysis__enum_functor_desc_make_analysis_registry_0_1
};

#line 2895 "analysis.c"
static const MR_EnumFunctorDescPtr analysis__analysis__enum_name_ordered_make_analysis_registry_0[2] = {
  &analysis__analysis__enum_functor_desc_make_analysis_registry_0_0,
  &analysis__analysis__enum_functor_desc_make_analysis_registry_0_1
};

#line 2901 "analysis.c"
static const MR_Integer analysis__analysis__functor_number_map_make_analysis_registry_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2907 "analysis.c"
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

#line 2924 "analysis.c"
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

#line 2941 "analysis.c"
static const MR_EnumFunctorDesc analysis__analysis__enum_functor_desc_no_func_info_0_0 = {
  (MR_String) "no_func_info",
  (MR_Integer) 0
};

#line 2947 "analysis.c"
static const MR_EnumFunctorDescPtr analysis__analysis__enum_value_ordered_no_func_info_0[1] = {
  &analysis__analysis__enum_functor_desc_no_func_info_0_0
};

#line 2952 "analysis.c"
static const MR_EnumFunctorDescPtr analysis__analysis__enum_name_ordered_no_func_info_0[1] = {
  &analysis__analysis__enum_functor_desc_no_func_info_0_0
};

#line 2957 "analysis.c"
static const MR_Integer analysis__analysis__functor_number_map_no_func_info_0[1] = {
  (MR_Integer) 0
};

#line 2962 "analysis.c"
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

#line 2979 "analysis.c"
static const MR_PseudoTypeInfo analysis__analysis__field_types_some_analysis_result_0_0[3] = {
  (MR_PseudoTypeInfo) (MR_Integer) 514,
  (MR_PseudoTypeInfo) (MR_Integer) 515,
  (MR_PseudoTypeInfo) &analysis__analysis__type_ctor_info_analysis_status_0
};

#line 2986 "analysis.c"
static const MR_ConstString analysis__analysis__field_names_some_analysis_result_0_0[3] = {
  (MR_String) "some_ar_call",
  (MR_String) "some_ar_answer",
  (MR_String) "some_ar_status"
};

#line 2993 "analysis.c"
static const MR_TypeClassConstraint_3Struct analysis__analysis__exist_tc_constr_some_analysis_result_0_0_1 = {
  &analysis__analysis__type_class_decl_analysis_3,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 2,
    (MR_PseudoTypeInfo) (MR_Integer) 3
  }
};

#line 3003 "analysis.c"
static const MR_TypeClassConstraint analysis__analysis__exist_tc_constrs_some_analysis_result_0_0[1] = {
  (MR_TypeClassConstraint) &analysis__analysis__exist_tc_constr_some_analysis_result_0_0_1
};

#line 3008 "analysis.c"
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

#line 3024 "analysis.c"
static const MR_DuExistInfo analysis__analysis__exist_info_some_analysis_result_0_0 = {
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 1,
  analysis__analysis__exist_locns_some_analysis_result_0_0,
  analysis__analysis__exist_tc_constrs_some_analysis_result_0_0
};

#line 3033 "analysis.c"
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

#line 3048 "analysis.c"
static const MR_DuFunctorDescPtr analysis__analysis__du_stag_ordered_some_analysis_result_0_0[1] = {
  &analysis__analysis__du_functor_desc_some_analysis_result_0_0
};

#line 3053 "analysis.c"
static const MR_DuPtagLayout analysis__analysis__du_ptag_ordered_some_analysis_result_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    analysis__analysis__du_stag_ordered_some_analysis_result_0_0
  }
};

#line 3062 "analysis.c"
static const MR_DuFunctorDescPtr analysis__analysis__du_name_ordered_some_analysis_result_0[1] = {
  &analysis__analysis__du_functor_desc_some_analysis_result_0_0
};

#line 3067 "analysis.c"
static const MR_Integer analysis__analysis__functor_number_map_some_analysis_result_0[1] = {
  (MR_Integer) 0
};

#line 3072 "analysis.c"
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

#line 3089 "analysis.c"
const MR_BaseTypeclassInfo base_typeclass_info_analysis__to_term__arity1__analysis__any_call__arity0__[7] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (MR_Word) ((MR_Integer) 2)),
  ((MR_Box) (analysis__ClassMethod_for_analysis__to_term____analysis__any_call__arity0______analysis__to_term_1_1_f_0_10001)),
  ((MR_Box) (analysis__ClassMethod_for_analysis__to_term____analysis__any_call__arity0______analysis__from_term_2_2_p_0_10001))
};

#line 3100 "analysis.c"
const MR_BaseTypeclassInfo base_typeclass_info_analysis__partial_order__arity2__analysis__no_func_info__arity0__analysis__any_call__arity0__[7] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 2)),
  ((MR_Box) (MR_Word) ((MR_Integer) 2)),
  ((MR_Box) (analysis__ClassMethod_for_analysis__partial_order____analysis__no_func_info__arity0__analysis__any_call__arity0______analysis__more_precise_than_3_3_p_0_10001)),
  ((MR_Box) (analysis__ClassMethod_for_analysis__partial_order____analysis__no_func_info__arity0__analysis__any_call__arity0______analysis__equivalent_3_3_p_0_10001))
};

#line 3111 "analysis.c"
const MR_BaseTypeclassInfo base_typeclass_info_analysis__call_pattern__arity2__analysis__no_func_info__arity0__analysis__any_call__arity0__[5] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 2)),
  ((MR_Box) (MR_Word) ((MR_Integer) 2)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0))
};

#line 3120 "analysis.c"
static const MR_ConstString analysis__analysis__type_class_id_var_names_to_term_1[1] = {
  (MR_String) "S"
};

#line 3125 "analysis.c"
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

#line 3139 "analysis.c"
static const MR_TypeClassId analysis__analysis__type_class_id_to_term_1 = {
  (MR_String) "analysis",
  (MR_String) "to_term",
  (MR_Integer) 1,
  (MR_Integer) 1,
  (MR_Integer) 2,
  analysis__analysis__type_class_id_var_names_to_term_1,
  analysis__analysis__type_class_id_method_ids_to_term_1
};

#line 3150 "analysis.c"
const MR_TypeClassDeclStruct analysis__analysis__type_class_decl_to_term_1 = {
  &analysis__analysis__type_class_id_to_term_1,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL
};

#line 3158 "analysis.c"
static const MR_ConstString analysis__analysis__type_class_id_var_names_partial_order_2[2] = {
  (MR_String) "FuncInfo",
  (MR_String) "T"
};

#line 3164 "analysis.c"
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

#line 3178 "analysis.c"
static const MR_TypeClassId analysis__analysis__type_class_id_partial_order_2 = {
  (MR_String) "analysis",
  (MR_String) "partial_order",
  (MR_Integer) 2,
  (MR_Integer) 2,
  (MR_Integer) 2,
  analysis__analysis__type_class_id_var_names_partial_order_2,
  analysis__analysis__type_class_id_method_ids_partial_order_2
};

#line 3189 "analysis.c"
const MR_TypeClassDeclStruct analysis__analysis__type_class_decl_partial_order_2 = {
  &analysis__analysis__type_class_id_partial_order_2,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL
};

#line 3197 "analysis.c"
static const MR_ConstString analysis__analysis__type_class_id_var_names_compiler_1[1] = {
  (MR_String) "Compiler"
};

#line 3202 "analysis.c"
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

#line 3226 "analysis.c"
static const MR_TypeClassId analysis__analysis__type_class_id_compiler_1 = {
  (MR_String) "analysis",
  (MR_String) "compiler",
  (MR_Integer) 1,
  (MR_Integer) 1,
  (MR_Integer) 4,
  analysis__analysis__type_class_id_var_names_compiler_1,
  analysis__analysis__type_class_id_method_ids_compiler_1
};

#line 3237 "analysis.c"
const MR_TypeClassDeclStruct analysis__analysis__type_class_decl_compiler_1 = {
  &analysis__analysis__type_class_id_compiler_1,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL
};

#line 3245 "analysis.c"
static const MR_ConstString analysis__analysis__type_class_id_var_names_call_pattern_2[2] = {
  (MR_String) "FuncInfo",
  (MR_String) "Call"
};

#line 3251 "analysis.c"
static const MR_TypeClassId analysis__analysis__type_class_id_call_pattern_2 = {
  (MR_String) "analysis",
  (MR_String) "call_pattern",
  (MR_Integer) 2,
  (MR_Integer) 2,
  (MR_Integer) 0,
  analysis__analysis__type_class_id_var_names_call_pattern_2,
  NULL
};

#line 3262 "analysis.c"
static const MR_TypeClassConstraint_2Struct analysis__analysis__type_class_decl_super_call_pattern_2_1 = {
  &analysis__analysis__type_class_decl_partial_order_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

#line 3271 "analysis.c"
static const MR_TypeClassConstraint_1Struct analysis__analysis__type_class_decl_super_call_pattern_2_2 = {
  &analysis__analysis__type_class_decl_to_term_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

#line 3279 "analysis.c"
static const MR_TypeClassConstraint analysis__analysis__type_class_decl_supers_call_pattern_2[2] = {
  (MR_TypeClassConstraint) &analysis__analysis__type_class_decl_super_call_pattern_2_1,
  (MR_TypeClassConstraint) &analysis__analysis__type_class_decl_super_call_pattern_2_2
};

#line 3285 "analysis.c"
const MR_TypeClassDeclStruct analysis__analysis__type_class_decl_call_pattern_2 = {
  &analysis__analysis__type_class_id_call_pattern_2,
  (MR_Integer) 0,
  (MR_Integer) 2,
  NULL
};

#line 3293 "analysis.c"
static const MR_ConstString analysis__analysis__type_class_id_var_names_answer_pattern_2[2] = {
  (MR_String) "FuncInfo",
  (MR_String) "Answer"
};

#line 3299 "analysis.c"
static const MR_TypeClassId analysis__analysis__type_class_id_answer_pattern_2 = {
  (MR_String) "analysis",
  (MR_String) "answer_pattern",
  (MR_Integer) 2,
  (MR_Integer) 2,
  (MR_Integer) 0,
  analysis__analysis__type_class_id_var_names_answer_pattern_2,
  NULL
};

#line 3310 "analysis.c"
static const MR_TypeClassConstraint_2Struct analysis__analysis__type_class_decl_super_answer_pattern_2_1 = {
  &analysis__analysis__type_class_decl_partial_order_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

#line 3319 "analysis.c"
static const MR_TypeClassConstraint_1Struct analysis__analysis__type_class_decl_super_answer_pattern_2_2 = {
  &analysis__analysis__type_class_decl_to_term_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

#line 3327 "analysis.c"
static const MR_TypeClassConstraint analysis__analysis__type_class_decl_supers_answer_pattern_2[2] = {
  (MR_TypeClassConstraint) &analysis__analysis__type_class_decl_super_answer_pattern_2_1,
  (MR_TypeClassConstraint) &analysis__analysis__type_class_decl_super_answer_pattern_2_2
};

#line 3333 "analysis.c"
const MR_TypeClassDeclStruct analysis__analysis__type_class_decl_answer_pattern_2 = {
  &analysis__analysis__type_class_id_answer_pattern_2,
  (MR_Integer) 0,
  (MR_Integer) 2,
  NULL
};

#line 3341 "analysis.c"
static const MR_ConstString analysis__analysis__type_class_id_var_names_analysis_3[3] = {
  (MR_String) "FuncInfo",
  (MR_String) "Call",
  (MR_String) "Answer"
};

#line 3348 "analysis.c"
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

#line 3382 "analysis.c"
static const MR_TypeClassId analysis__analysis__type_class_id_analysis_3 = {
  (MR_String) "analysis",
  (MR_String) "analysis",
  (MR_Integer) 3,
  (MR_Integer) 3,
  (MR_Integer) 6,
  analysis__analysis__type_class_id_var_names_analysis_3,
  analysis__analysis__type_class_id_method_ids_analysis_3
};

#line 3393 "analysis.c"
static const MR_TypeClassConstraint_2Struct analysis__analysis__type_class_decl_super_analysis_3_1 = {
  &analysis__analysis__type_class_decl_call_pattern_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

#line 3402 "analysis.c"
static const MR_TypeClassConstraint_2Struct analysis__analysis__type_class_decl_super_analysis_3_2 = {
  &analysis__analysis__type_class_decl_answer_pattern_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 3
  }
};

#line 3411 "analysis.c"
static const MR_TypeClassConstraint analysis__analysis__type_class_decl_supers_analysis_3[2] = {
  (MR_TypeClassConstraint) &analysis__analysis__type_class_decl_super_analysis_3_1,
  (MR_TypeClassConstraint) &analysis__analysis__type_class_decl_super_analysis_3_2
};

#line 3417 "analysis.c"
const MR_TypeClassDeclStruct analysis__analysis__type_class_decl_analysis_3 = {
  &analysis__analysis__type_class_id_analysis_3,
  (MR_Integer) 0,
  (MR_Integer) 2,
  NULL
};

#line 3425 "analysis.c"
static MR_bool MR_CALL 
analysis____Unify____analysis_info_0_0_10001(
#line 3428 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 3430 "analysis.c"
  MR_Box analysis__wrapper_arg_2)
#line 3432 "analysis.c"
{
#line 3434 "analysis.c"
  {
#line 3436 "analysis.c"
    MR_bool analysis__succeeded;

#line 3439 "analysis.c"
    {
#line 3441 "analysis.c"
      analysis__succeeded = analysis____Unify____analysis_info_0_0(((MR_Word) analysis__wrapper_arg_1), ((MR_Word) analysis__wrapper_arg_2));
    }
#line 3444 "analysis.c"
    return analysis__succeeded;
#line 3446 "analysis.c"
  }
#line 3448 "analysis.c"
}

#line 3451 "analysis.c"
static void MR_CALL 
analysis____Compare____analysis_info_0_0_10001(
#line 3454 "analysis.c"
  MR_Box * analysis__wrapper_arg_1,
#line 3456 "analysis.c"
  MR_Box analysis__wrapper_arg_2,
#line 3458 "analysis.c"
  MR_Box analysis__wrapper_arg_3)
#line 3460 "analysis.c"
{
#line 3462 "analysis.c"
  {
#line 3464 "analysis.c"
    MR_Word analysis__conv0_HeadVar__1_1;

#line 3467 "analysis.c"
    {
#line 3469 "analysis.c"
      analysis____Compare____analysis_info_0_0(&analysis__conv0_HeadVar__1_1, ((MR_Word) analysis__wrapper_arg_2), ((MR_Word) analysis__wrapper_arg_3));
    }
#line 3472 "analysis.c"
    *analysis__wrapper_arg_1 = ((MR_Box) (analysis__conv0_HeadVar__1_1));
#line 3474 "analysis.c"
  }
#line 3476 "analysis.c"
}

#line 3479 "analysis.c"
static MR_bool MR_CALL 
analysis____Unify____analysis_map_1_0_10001(
#line 3482 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 3484 "analysis.c"
  MR_Box analysis__wrapper_arg_2,
#line 3486 "analysis.c"
  MR_Box analysis__wrapper_arg_3)
#line 3488 "analysis.c"
{
#line 3490 "analysis.c"
  {
#line 3492 "analysis.c"
    MR_bool analysis__succeeded;

#line 3495 "analysis.c"
    {
#line 3497 "analysis.c"
      analysis__succeeded = analysis____Unify____analysis_map_1_0(((MR_Word) analysis__wrapper_arg_1), ((MR_Word) analysis__wrapper_arg_2), ((MR_Word) analysis__wrapper_arg_3));
    }
#line 3500 "analysis.c"
    return analysis__succeeded;
#line 3502 "analysis.c"
  }
#line 3504 "analysis.c"
}

#line 3507 "analysis.c"
static void MR_CALL 
analysis____Compare____analysis_map_1_0_10001(
#line 3510 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 3512 "analysis.c"
  MR_Box * analysis__wrapper_arg_2,
#line 3514 "analysis.c"
  MR_Box analysis__wrapper_arg_3,
#line 3516 "analysis.c"
  MR_Box analysis__wrapper_arg_4)
#line 3518 "analysis.c"
{
#line 3520 "analysis.c"
  {
#line 3522 "analysis.c"
    MR_Word analysis__conv0_HeadVar__1_1;

#line 3525 "analysis.c"
    {
#line 3527 "analysis.c"
      analysis____Compare____analysis_map_1_0(((MR_Word) analysis__wrapper_arg_1), &analysis__conv0_HeadVar__1_1, ((MR_Word) analysis__wrapper_arg_3), ((MR_Word) analysis__wrapper_arg_4));
    }
#line 3530 "analysis.c"
    *analysis__wrapper_arg_2 = ((MR_Box) (analysis__conv0_HeadVar__1_1));
#line 3532 "analysis.c"
  }
#line 3534 "analysis.c"
}

#line 3537 "analysis.c"
static MR_bool MR_CALL 
analysis____Unify____analysis_name_0_0_10001(
#line 3540 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 3542 "analysis.c"
  MR_Box analysis__wrapper_arg_2)
#line 3544 "analysis.c"
{
#line 3546 "analysis.c"
  {
#line 3548 "analysis.c"
    MR_bool analysis__succeeded;

#line 3551 "analysis.c"
    {
#line 3553 "analysis.c"
      analysis__succeeded = analysis____Unify____analysis_name_0_0(((MR_String) analysis__wrapper_arg_1), ((MR_String) analysis__wrapper_arg_2));
    }
#line 3556 "analysis.c"
    return analysis__succeeded;
#line 3558 "analysis.c"
  }
#line 3560 "analysis.c"
}

#line 3563 "analysis.c"
static void MR_CALL 
analysis____Compare____analysis_name_0_0_10001(
#line 3566 "analysis.c"
  MR_Box * analysis__wrapper_arg_1,
#line 3568 "analysis.c"
  MR_Box analysis__wrapper_arg_2,
#line 3570 "analysis.c"
  MR_Box analysis__wrapper_arg_3)
#line 3572 "analysis.c"
{
#line 3574 "analysis.c"
  {
#line 3576 "analysis.c"
    MR_Word analysis__conv0_HeadVar__1_1;

#line 3579 "analysis.c"
    {
#line 3581 "analysis.c"
      analysis____Compare____analysis_name_0_0(&analysis__conv0_HeadVar__1_1, ((MR_String) analysis__wrapper_arg_2), ((MR_String) analysis__wrapper_arg_3));
    }
#line 3584 "analysis.c"
    *analysis__wrapper_arg_1 = ((MR_Box) (analysis__conv0_HeadVar__1_1));
#line 3586 "analysis.c"
  }
#line 3588 "analysis.c"
}

#line 3591 "analysis.c"
static MR_bool MR_CALL 
analysis____Unify____analysis_request_0_0_10001(
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
      analysis__succeeded = analysis____Unify____analysis_request_0_0(((MR_Word) analysis__wrapper_arg_1), ((MR_Word) analysis__wrapper_arg_2));
    }
#line 3610 "analysis.c"
    return analysis__succeeded;
#line 3612 "analysis.c"
  }
#line 3614 "analysis.c"
}

#line 3617 "analysis.c"
static void MR_CALL 
analysis____Compare____analysis_request_0_0_10001(
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
      analysis____Compare____analysis_request_0_0(&analysis__conv0_HeadVar__1_1, ((MR_Word) analysis__wrapper_arg_2), ((MR_Word) analysis__wrapper_arg_3));
    }
#line 3638 "analysis.c"
    *analysis__wrapper_arg_1 = ((MR_Box) (analysis__conv0_HeadVar__1_1));
#line 3640 "analysis.c"
  }
#line 3642 "analysis.c"
}

#line 3645 "analysis.c"
static MR_bool MR_CALL 
analysis____Unify____analysis_result_2_0_10001(
#line 3648 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 3650 "analysis.c"
  MR_Box analysis__wrapper_arg_2,
#line 3652 "analysis.c"
  MR_Box analysis__wrapper_arg_3,
#line 3654 "analysis.c"
  MR_Box analysis__wrapper_arg_4)
#line 3656 "analysis.c"
{
#line 3658 "analysis.c"
  {
#line 3660 "analysis.c"
    MR_bool analysis__succeeded;

#line 3663 "analysis.c"
    {
#line 3665 "analysis.c"
      analysis__succeeded = analysis____Unify____analysis_result_2_0(((MR_Word) analysis__wrapper_arg_1), ((MR_Word) analysis__wrapper_arg_2), ((MR_Word) analysis__wrapper_arg_3), ((MR_Word) analysis__wrapper_arg_4));
    }
#line 3668 "analysis.c"
    return analysis__succeeded;
#line 3670 "analysis.c"
  }
#line 3672 "analysis.c"
}

#line 3675 "analysis.c"
static void MR_CALL 
analysis____Compare____analysis_result_2_0_10001(
#line 3678 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 3680 "analysis.c"
  MR_Box analysis__wrapper_arg_2,
#line 3682 "analysis.c"
  MR_Box * analysis__wrapper_arg_3,
#line 3684 "analysis.c"
  MR_Box analysis__wrapper_arg_4,
#line 3686 "analysis.c"
  MR_Box analysis__wrapper_arg_5)
#line 3688 "analysis.c"
{
#line 3690 "analysis.c"
  {
#line 3692 "analysis.c"
    MR_Word analysis__conv0_HeadVar__1_1;

#line 3695 "analysis.c"
    {
#line 3697 "analysis.c"
      analysis____Compare____analysis_result_2_0(((MR_Word) analysis__wrapper_arg_1), ((MR_Word) analysis__wrapper_arg_2), &analysis__conv0_HeadVar__1_1, ((MR_Word) analysis__wrapper_arg_4), ((MR_Word) analysis__wrapper_arg_5));
    }
#line 3700 "analysis.c"
    *analysis__wrapper_arg_3 = ((MR_Box) (analysis__conv0_HeadVar__1_1));
#line 3702 "analysis.c"
  }
#line 3704 "analysis.c"
}

#line 3707 "analysis.c"
static MR_bool MR_CALL 
analysis____Unify____analysis_status_0_0_10001(
#line 3710 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 3712 "analysis.c"
  MR_Box analysis__wrapper_arg_2)
#line 3714 "analysis.c"
{
#line 3716 "analysis.c"
  {
#line 3718 "analysis.c"
    MR_bool analysis__succeeded;

#line 3721 "analysis.c"
    {
#line 3723 "analysis.c"
      analysis__succeeded = analysis____Unify____analysis_status_0_0(((MR_Word) analysis__wrapper_arg_1), ((MR_Word) analysis__wrapper_arg_2));
    }
#line 3726 "analysis.c"
    return analysis__succeeded;
#line 3728 "analysis.c"
  }
#line 3730 "analysis.c"
}

#line 3733 "analysis.c"
static void MR_CALL 
analysis____Compare____analysis_status_0_0_10001(
#line 3736 "analysis.c"
  MR_Box * analysis__wrapper_arg_1,
#line 3738 "analysis.c"
  MR_Box analysis__wrapper_arg_2,
#line 3740 "analysis.c"
  MR_Box analysis__wrapper_arg_3)
#line 3742 "analysis.c"
{
#line 3744 "analysis.c"
  {
#line 3746 "analysis.c"
    MR_Word analysis__conv0_HeadVar__1_1;

#line 3749 "analysis.c"
    {
#line 3751 "analysis.c"
      analysis____Compare____analysis_status_0_0(&analysis__conv0_HeadVar__1_1, ((MR_Word) analysis__wrapper_arg_2), ((MR_Word) analysis__wrapper_arg_3));
    }
#line 3754 "analysis.c"
    *analysis__wrapper_arg_1 = ((MR_Box) (analysis__conv0_HeadVar__1_1));
#line 3756 "analysis.c"
  }
#line 3758 "analysis.c"
}

#line 3761 "analysis.c"
static MR_bool MR_CALL 
analysis____Unify____analysis_type_0_0_10001(
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
      analysis__succeeded = analysis____Unify____analysis_type_0_0(((MR_Word) analysis__wrapper_arg_1), ((MR_Word) analysis__wrapper_arg_2));
    }
#line 3780 "analysis.c"
    return analysis__succeeded;
#line 3782 "analysis.c"
  }
#line 3784 "analysis.c"
}

#line 3787 "analysis.c"
static void MR_CALL 
analysis____Compare____analysis_type_0_0_10001(
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
      analysis____Compare____analysis_type_0_0(&analysis__conv0_HeadVar__1_1, ((MR_Word) analysis__wrapper_arg_2), ((MR_Word) analysis__wrapper_arg_3));
    }
#line 3808 "analysis.c"
    *analysis__wrapper_arg_1 = ((MR_Box) (analysis__conv0_HeadVar__1_1));
#line 3810 "analysis.c"
  }
#line 3812 "analysis.c"
}

#line 3815 "analysis.c"
static MR_bool MR_CALL 
analysis____Unify____any_call_0_0_10001(
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
      analysis__succeeded = analysis____Unify____any_call_0_0();
    }
#line 3834 "analysis.c"
    return analysis__succeeded;
#line 3836 "analysis.c"
  }
#line 3838 "analysis.c"
}

#line 3841 "analysis.c"
static void MR_CALL 
analysis____Compare____any_call_0_0_10001(
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
      analysis____Compare____any_call_0_0(&analysis__conv0_HeadVar__1_1);
    }
#line 3862 "analysis.c"
    *analysis__wrapper_arg_1 = ((MR_Box) (analysis__conv0_HeadVar__1_1));
#line 3864 "analysis.c"
  }
#line 3866 "analysis.c"
}

#line 3869 "analysis.c"
static MR_bool MR_CALL 
analysis____Unify____fixpoint_type_0_0_10001(
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
      analysis__succeeded = analysis____Unify____fixpoint_type_0_0(((MR_Word) analysis__wrapper_arg_1), ((MR_Word) analysis__wrapper_arg_2));
    }
#line 3888 "analysis.c"
    return analysis__succeeded;
#line 3890 "analysis.c"
  }
#line 3892 "analysis.c"
}

#line 3895 "analysis.c"
static void MR_CALL 
analysis____Compare____fixpoint_type_0_0_10001(
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
      analysis____Compare____fixpoint_type_0_0(&analysis__conv0_HeadVar__1_1, ((MR_Word) analysis__wrapper_arg_2), ((MR_Word) analysis__wrapper_arg_3));
    }
#line 3916 "analysis.c"
    *analysis__wrapper_arg_1 = ((MR_Box) (analysis__conv0_HeadVar__1_1));
#line 3918 "analysis.c"
  }
#line 3920 "analysis.c"
}

#line 3923 "analysis.c"
static MR_bool MR_CALL 
analysis____Unify____func_analysis_map_1_0_10001(
#line 3926 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 3928 "analysis.c"
  MR_Box analysis__wrapper_arg_2,
#line 3930 "analysis.c"
  MR_Box analysis__wrapper_arg_3)
#line 3932 "analysis.c"
{
#line 3934 "analysis.c"
  {
#line 3936 "analysis.c"
    MR_bool analysis__succeeded;

#line 3939 "analysis.c"
    {
#line 3941 "analysis.c"
      analysis__succeeded = analysis____Unify____func_analysis_map_1_0(((MR_Word) analysis__wrapper_arg_1), ((MR_Word) analysis__wrapper_arg_2), ((MR_Word) analysis__wrapper_arg_3));
    }
#line 3944 "analysis.c"
    return analysis__succeeded;
#line 3946 "analysis.c"
  }
#line 3948 "analysis.c"
}

#line 3951 "analysis.c"
static void MR_CALL 
analysis____Compare____func_analysis_map_1_0_10001(
#line 3954 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 3956 "analysis.c"
  MR_Box * analysis__wrapper_arg_2,
#line 3958 "analysis.c"
  MR_Box analysis__wrapper_arg_3,
#line 3960 "analysis.c"
  MR_Box analysis__wrapper_arg_4)
#line 3962 "analysis.c"
{
#line 3964 "analysis.c"
  {
#line 3966 "analysis.c"
    MR_Word analysis__conv0_HeadVar__1_1;

#line 3969 "analysis.c"
    {
#line 3971 "analysis.c"
      analysis____Compare____func_analysis_map_1_0(((MR_Word) analysis__wrapper_arg_1), &analysis__conv0_HeadVar__1_1, ((MR_Word) analysis__wrapper_arg_3), ((MR_Word) analysis__wrapper_arg_4));
    }
#line 3974 "analysis.c"
    *analysis__wrapper_arg_2 = ((MR_Box) (analysis__conv0_HeadVar__1_1));
#line 3976 "analysis.c"
  }
#line 3978 "analysis.c"
}

#line 3981 "analysis.c"
static MR_bool MR_CALL 
analysis____Unify____func_id_0_0_10001(
#line 3984 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 3986 "analysis.c"
  MR_Box analysis__wrapper_arg_2)
#line 3988 "analysis.c"
{
#line 3990 "analysis.c"
  {
#line 3992 "analysis.c"
    MR_bool analysis__succeeded;

#line 3995 "analysis.c"
    {
#line 3997 "analysis.c"
      analysis__succeeded = analysis____Unify____func_id_0_0(((MR_Word) analysis__wrapper_arg_1), ((MR_Word) analysis__wrapper_arg_2));
    }
#line 4000 "analysis.c"
    return analysis__succeeded;
#line 4002 "analysis.c"
  }
#line 4004 "analysis.c"
}

#line 4007 "analysis.c"
static void MR_CALL 
analysis____Compare____func_id_0_0_10001(
#line 4010 "analysis.c"
  MR_Box * analysis__wrapper_arg_1,
#line 4012 "analysis.c"
  MR_Box analysis__wrapper_arg_2,
#line 4014 "analysis.c"
  MR_Box analysis__wrapper_arg_3)
#line 4016 "analysis.c"
{
#line 4018 "analysis.c"
  {
#line 4020 "analysis.c"
    MR_Word analysis__conv0_HeadVar__1_1;

#line 4023 "analysis.c"
    {
#line 4025 "analysis.c"
      analysis____Compare____func_id_0_0(&analysis__conv0_HeadVar__1_1, ((MR_Word) analysis__wrapper_arg_2), ((MR_Word) analysis__wrapper_arg_3));
    }
#line 4028 "analysis.c"
    *analysis__wrapper_arg_1 = ((MR_Box) (analysis__conv0_HeadVar__1_1));
#line 4030 "analysis.c"
  }
#line 4032 "analysis.c"
}

#line 4035 "analysis.c"
static MR_bool MR_CALL 
analysis____Unify____imdg_arc_0_0_10001(
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
      analysis__succeeded = analysis____Unify____imdg_arc_0_0(((MR_Word) analysis__wrapper_arg_1), ((MR_Word) analysis__wrapper_arg_2));
    }
#line 4054 "analysis.c"
    return analysis__succeeded;
#line 4056 "analysis.c"
  }
#line 4058 "analysis.c"
}

#line 4061 "analysis.c"
static void MR_CALL 
analysis____Compare____imdg_arc_0_0_10001(
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
      analysis____Compare____imdg_arc_0_0(&analysis__conv0_HeadVar__1_1, ((MR_Word) analysis__wrapper_arg_2), ((MR_Word) analysis__wrapper_arg_3));
    }
#line 4082 "analysis.c"
    *analysis__wrapper_arg_1 = ((MR_Box) (analysis__conv0_HeadVar__1_1));
#line 4084 "analysis.c"
  }
#line 4086 "analysis.c"
}

#line 4089 "analysis.c"
static MR_bool MR_CALL 
analysis____Unify____make_analysis_registry_0_0_10001(
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
      analysis__succeeded = analysis____Unify____make_analysis_registry_0_0(((MR_Word) analysis__wrapper_arg_1), ((MR_Word) analysis__wrapper_arg_2));
    }
#line 4108 "analysis.c"
    return analysis__succeeded;
#line 4110 "analysis.c"
  }
#line 4112 "analysis.c"
}

#line 4115 "analysis.c"
static void MR_CALL 
analysis____Compare____make_analysis_registry_0_0_10001(
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
      analysis____Compare____make_analysis_registry_0_0(&analysis__conv0_HeadVar__1_1, ((MR_Word) analysis__wrapper_arg_2), ((MR_Word) analysis__wrapper_arg_3));
    }
#line 4136 "analysis.c"
    *analysis__wrapper_arg_1 = ((MR_Box) (analysis__conv0_HeadVar__1_1));
#line 4138 "analysis.c"
  }
#line 4140 "analysis.c"
}

#line 4143 "analysis.c"
static MR_bool MR_CALL 
analysis____Unify____module_analysis_map_1_0_10001(
#line 4146 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 4148 "analysis.c"
  MR_Box analysis__wrapper_arg_2,
#line 4150 "analysis.c"
  MR_Box analysis__wrapper_arg_3)
#line 4152 "analysis.c"
{
#line 4154 "analysis.c"
  {
#line 4156 "analysis.c"
    MR_bool analysis__succeeded;

#line 4159 "analysis.c"
    {
#line 4161 "analysis.c"
      analysis__succeeded = analysis____Unify____module_analysis_map_1_0(((MR_Word) analysis__wrapper_arg_1), ((MR_Word) analysis__wrapper_arg_2), ((MR_Word) analysis__wrapper_arg_3));
    }
#line 4164 "analysis.c"
    return analysis__succeeded;
#line 4166 "analysis.c"
  }
#line 4168 "analysis.c"
}

#line 4171 "analysis.c"
static void MR_CALL 
analysis____Compare____module_analysis_map_1_0_10001(
#line 4174 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 4176 "analysis.c"
  MR_Box * analysis__wrapper_arg_2,
#line 4178 "analysis.c"
  MR_Box analysis__wrapper_arg_3,
#line 4180 "analysis.c"
  MR_Box analysis__wrapper_arg_4)
#line 4182 "analysis.c"
{
#line 4184 "analysis.c"
  {
#line 4186 "analysis.c"
    MR_Word analysis__conv0_HeadVar__1_1;

#line 4189 "analysis.c"
    {
#line 4191 "analysis.c"
      analysis____Compare____module_analysis_map_1_0(((MR_Word) analysis__wrapper_arg_1), &analysis__conv0_HeadVar__1_1, ((MR_Word) analysis__wrapper_arg_3), ((MR_Word) analysis__wrapper_arg_4));
    }
#line 4194 "analysis.c"
    *analysis__wrapper_arg_2 = ((MR_Box) (analysis__conv0_HeadVar__1_1));
#line 4196 "analysis.c"
  }
#line 4198 "analysis.c"
}

#line 4201 "analysis.c"
static MR_bool MR_CALL 
analysis____Unify____no_func_info_0_0_10001(
#line 4204 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 4206 "analysis.c"
  MR_Box analysis__wrapper_arg_2)
#line 4208 "analysis.c"
{
#line 4210 "analysis.c"
  {
#line 4212 "analysis.c"
    MR_bool analysis__succeeded;

#line 4215 "analysis.c"
    {
#line 4217 "analysis.c"
      analysis__succeeded = analysis____Unify____no_func_info_0_0();
    }
#line 4220 "analysis.c"
    return analysis__succeeded;
#line 4222 "analysis.c"
  }
#line 4224 "analysis.c"
}

#line 4227 "analysis.c"
static void MR_CALL 
analysis____Compare____no_func_info_0_0_10001(
#line 4230 "analysis.c"
  MR_Box * analysis__wrapper_arg_1,
#line 4232 "analysis.c"
  MR_Box analysis__wrapper_arg_2,
#line 4234 "analysis.c"
  MR_Box analysis__wrapper_arg_3)
#line 4236 "analysis.c"
{
#line 4238 "analysis.c"
  {
#line 4240 "analysis.c"
    MR_Word analysis__conv0_HeadVar__1_1;

#line 4243 "analysis.c"
    {
#line 4245 "analysis.c"
      analysis____Compare____no_func_info_0_0(&analysis__conv0_HeadVar__1_1);
    }
#line 4248 "analysis.c"
    *analysis__wrapper_arg_1 = ((MR_Box) (analysis__conv0_HeadVar__1_1));
#line 4250 "analysis.c"
  }
#line 4252 "analysis.c"
}

#line 4255 "analysis.c"
static MR_bool MR_CALL 
analysis____Unify____some_analysis_result_0_0_10001(
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
      analysis__succeeded = analysis____Unify____some_analysis_result_0_0(((MR_Word) analysis__wrapper_arg_1), ((MR_Word) analysis__wrapper_arg_2));
    }
#line 4274 "analysis.c"
    return analysis__succeeded;
#line 4276 "analysis.c"
  }
#line 4278 "analysis.c"
}

#line 4281 "analysis.c"
static void MR_CALL 
analysis____Compare____some_analysis_result_0_0_10001(
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
      analysis____Compare____some_analysis_result_0_0(&analysis__conv0_HeadVar__1_1, ((MR_Word) analysis__wrapper_arg_2), ((MR_Word) analysis__wrapper_arg_3));
    }
#line 4302 "analysis.c"
    *analysis__wrapper_arg_1 = ((MR_Box) (analysis__conv0_HeadVar__1_1));
#line 4304 "analysis.c"
  }
#line 4306 "analysis.c"
}

#line 4309 "analysis.c"
static MR_Box MR_CALL 
analysis__ClassMethod_for_analysis__to_term____analysis__any_call__arity0______analysis__to_term_1_1_f_0_10001(
#line 4312 "analysis.c"
  MR_Box analysis__closure_arg,
#line 4314 "analysis.c"
  MR_Box analysis__wrapper_arg_1)
#line 4316 "analysis.c"
{
#line 4318 "analysis.c"
  {
#line 4320 "analysis.c"
    MR_Box analysis__wrapper_arg_2;
#line 4322 "analysis.c"
    MR_Box analysis__closure;
#line 4324 "analysis.c"
    MR_Word analysis__conv0_Term_3;

#line 4327 "analysis.c"
    analysis__closure = analysis__closure_arg;
#line 4329 "analysis.c"
    {
#line 4331 "analysis.c"
      analysis__conv0_Term_3 = analysis__ClassMethod_for_analysis__to_term____analysis__any_call__arity0______analysis__to_term_1_1_f_0();
    }
#line 4334 "analysis.c"
    analysis__wrapper_arg_2 = ((MR_Box) (analysis__conv0_Term_3));
#line 4336 "analysis.c"
    return analysis__wrapper_arg_2;
#line 4338 "analysis.c"
  }
#line 4340 "analysis.c"
}

#line 4343 "analysis.c"
static MR_bool MR_CALL 
analysis__ClassMethod_for_analysis__to_term____analysis__any_call__arity0______analysis__from_term_2_2_p_0_10001(
#line 4346 "analysis.c"
  MR_Box analysis__closure_arg,
#line 4348 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 4350 "analysis.c"
  MR_Box * analysis__wrapper_arg_2)
#line 4352 "analysis.c"
{
#line 4354 "analysis.c"
  {
#line 4356 "analysis.c"
    MR_bool analysis__succeeded;
#line 4358 "analysis.c"
    MR_Box analysis__closure;

#line 4361 "analysis.c"
    analysis__closure = analysis__closure_arg;
#line 4363 "analysis.c"
    {
#line 4365 "analysis.c"
      analysis__succeeded = analysis__ClassMethod_for_analysis__to_term____analysis__any_call__arity0______analysis__from_term_2_2_p_0(((MR_Word) analysis__wrapper_arg_1));
    }
#line 4368 "analysis.c"
    return analysis__succeeded;
#line 4370 "analysis.c"
  }
#line 4372 "analysis.c"
}

#line 4375 "analysis.c"
static MR_bool MR_CALL 
analysis__ClassMethod_for_analysis__partial_order____analysis__no_func_info__arity0__analysis__any_call__arity0______analysis__more_precise_than_3_3_p_0_10001(
#line 4378 "analysis.c"
  MR_Box analysis__closure_arg,
#line 4380 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 4382 "analysis.c"
  MR_Box analysis__wrapper_arg_2,
#line 4384 "analysis.c"
  MR_Box analysis__wrapper_arg_3)
#line 4386 "analysis.c"
{
#line 4388 "analysis.c"
  {
#line 4390 "analysis.c"
    MR_bool analysis__succeeded;
#line 4392 "analysis.c"
    MR_Box analysis__closure;

#line 4395 "analysis.c"
    analysis__closure = analysis__closure_arg;
#line 4397 "analysis.c"
    {
#line 4399 "analysis.c"
      analysis__succeeded = analysis__ClassMethod_for_analysis__partial_order____analysis__no_func_info__arity0__analysis__any_call__arity0______analysis__more_precise_than_3_3_p_0();
    }
#line 4402 "analysis.c"
    return analysis__succeeded;
#line 4404 "analysis.c"
  }
#line 4406 "analysis.c"
}

#line 4409 "analysis.c"
static MR_bool MR_CALL 
analysis__ClassMethod_for_analysis__partial_order____analysis__no_func_info__arity0__analysis__any_call__arity0______analysis__equivalent_3_3_p_0_10001(
#line 4412 "analysis.c"
  MR_Box analysis__closure_arg,
#line 4414 "analysis.c"
  MR_Box analysis__wrapper_arg_1,
#line 4416 "analysis.c"
  MR_Box analysis__wrapper_arg_2,
#line 4418 "analysis.c"
  MR_Box analysis__wrapper_arg_3)
#line 4420 "analysis.c"
{
#line 4422 "analysis.c"
  {
#line 4424 "analysis.c"
    MR_bool analysis__succeeded;
#line 4426 "analysis.c"
    MR_Box analysis__closure;

#line 4429 "analysis.c"
    analysis__closure = analysis__closure_arg;
#line 4431 "analysis.c"
    {
#line 4433 "analysis.c"
      analysis__succeeded = analysis__ClassMethod_for_analysis__partial_order____analysis__no_func_info__arity0__analysis__any_call__arity0______analysis__equivalent_3_3_p_0();
    }
#line 4436 "analysis.c"
    return analysis__succeeded;
#line 4438 "analysis.c"
  }
#line 4440 "analysis.c"
}

#line 1385 "analysis.m"
static void MR_CALL 
analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_109_115_103_95_95_104_111_54_95_95_91_51_93_95_48_3_p_0(
#line 1385 "analysis.m"
  MR_Word analysis__V_11_11,
#line 1385 "analysis.m"
  MR_Word analysis__V_12_12)
#line 1385 "analysis.m"
{
#line 1388 "analysis.m"
  {
#line 1388 "analysis.m"
    MR_bool analysis__succeeded;
#line 1388 "analysis.m"
    MR_Word analysis__Debug_6;

#line 1380 "analysis.m"
{
#define MR_PROC_LABEL analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_109_115_103_95_95_104_111_54_95_95_91_51_93_95_48_3_p_0


		{
#line 1380 "analysis.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&analysis__mutable_variable_debug_analysis_lock,
                    "analysis__mutable_variable_debug_analysis_lock");
#endif

#line 4471 "analysis.c"

		;}
#undef MR_PROC_LABEL
#line 1380 "analysis.m"
}
#line 1380 "analysis.m"
{
#define MR_PROC_LABEL analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_109_115_103_95_95_104_111_54_95_95_91_51_93_95_48_3_p_0

	MR_Word X;

		{
#line 1380 "analysis.m"
X = analysis__mutable_variable_debug_analysis;

#line 4487 "analysis.c"

		;}
#undef MR_PROC_LABEL
	 analysis__Debug_6  = X;
#line 1380 "analysis.m"
}
#line 1380 "analysis.m"
{
#define MR_PROC_LABEL analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_109_115_103_95_95_104_111_54_95_95_91_51_93_95_48_3_p_0


		{
#line 1380 "analysis.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&analysis__mutable_variable_debug_analysis_lock,
                    "analysis__mutable_variable_debug_analysis_lock");
#endif

#line 4506 "analysis.c"

		;}
#undef MR_PROC_LABEL
#line 1380 "analysis.m"
}
#line 1393 "analysis.m"
#line 1393 "analysis.m"
    switch (analysis__Debug_6) {
#line 1393 "analysis.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1393 "analysis.m"
      case (MR_Integer) 0:
#line 1394 "analysis.m"
        {
#line 1394 "analysis.m"
        }
#line 1393 "analysis.m"
        break;
#line 1393 "analysis.m"
      case (MR_Integer) 1:
#line 1392 "analysis.m"
        {
#line 1392 "analysis.m"
          analysis__IntroducedFrom__pred__lookup_results_1__516__1_4_p_0(analysis__V_11_11, analysis__V_12_12);
#line 1392 "analysis.m"
          return;
        }
#line 1393 "analysis.m"
        break;
#line 1393 "analysis.m"
    }
#line 1388 "analysis.m"
  }
#line 1385 "analysis.m"
}

#line 1385 "analysis.m"
static void MR_CALL 
analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_109_115_103_95_95_104_111_52_95_95_91_54_93_95_48_3_p_0(
#line 1385 "analysis.m"
  MR_Word analysis__V_11_11,
#line 1385 "analysis.m"
  MR_Word analysis__V_12_12,
#line 1385 "analysis.m"
  MR_Word analysis__V_13_13,
#line 1385 "analysis.m"
  MR_Box analysis__V_14_14,
#line 1385 "analysis.m"
  MR_Box analysis__V_15_15)
#line 1385 "analysis.m"
{
#line 1388 "analysis.m"
  {
#line 1388 "analysis.m"
    MR_bool analysis__succeeded;
#line 1388 "analysis.m"
    MR_Word analysis__Debug_6;

#line 1380 "analysis.m"
{
#define MR_PROC_LABEL analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_109_115_103_95_95_104_111_52_95_95_91_54_93_95_48_3_p_0


		{
#line 1380 "analysis.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&analysis__mutable_variable_debug_analysis_lock,
                    "analysis__mutable_variable_debug_analysis_lock");
#endif

#line 4577 "analysis.c"

		;}
#undef MR_PROC_LABEL
#line 1380 "analysis.m"
}
#line 1380 "analysis.m"
{
#define MR_PROC_LABEL analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_109_115_103_95_95_104_111_52_95_95_91_54_93_95_48_3_p_0

	MR_Word X;

		{
#line 1380 "analysis.m"
X = analysis__mutable_variable_debug_analysis;

#line 4593 "analysis.c"

		;}
#undef MR_PROC_LABEL
	 analysis__Debug_6  = X;
#line 1380 "analysis.m"
}
#line 1380 "analysis.m"
{
#define MR_PROC_LABEL analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_109_115_103_95_95_104_111_52_95_95_91_54_93_95_48_3_p_0


		{
#line 1380 "analysis.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&analysis__mutable_variable_debug_analysis_lock,
                    "analysis__mutable_variable_debug_analysis_lock");
#endif

#line 4612 "analysis.c"

		;}
#undef MR_PROC_LABEL
#line 1380 "analysis.m"
}
#line 1393 "analysis.m"
#line 1393 "analysis.m"
    switch (analysis__Debug_6) {
#line 1393 "analysis.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1393 "analysis.m"
      case (MR_Integer) 0:
#line 1394 "analysis.m"
        {
#line 1394 "analysis.m"
        }
#line 1393 "analysis.m"
        break;
#line 1393 "analysis.m"
      case (MR_Integer) 1:
#line 1392 "analysis.m"
        {
#line 1392 "analysis.m"
          analysis__IntroducedFrom__pred__update_analysis_registry_5__894__1_7_p_0(analysis__V_11_11, analysis__V_12_12, analysis__V_13_13, analysis__V_14_14, analysis__V_15_15);
#line 1392 "analysis.m"
          return;
        }
#line 1393 "analysis.m"
        break;
#line 1393 "analysis.m"
    }
#line 1388 "analysis.m"
  }
#line 1385 "analysis.m"
}

#line 1385 "analysis.m"
static void MR_CALL 
analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_109_115_103_95_95_104_111_51_95_95_91_54_93_95_48_3_p_0(
#line 1385 "analysis.m"
  MR_Word analysis__V_11_11,
#line 1385 "analysis.m"
  MR_Box analysis__V_12_12,
#line 1385 "analysis.m"
  MR_Box analysis__V_13_13,
#line 1385 "analysis.m"
  MR_Word analysis__V_14_14,
#line 1385 "analysis.m"
  MR_Word analysis__V_15_15)
#line 1385 "analysis.m"
{
#line 1388 "analysis.m"
  {
#line 1388 "analysis.m"
    MR_bool analysis__succeeded;
#line 1388 "analysis.m"
    MR_Word analysis__Debug_6;

#line 1380 "analysis.m"
{
#define MR_PROC_LABEL analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_109_115_103_95_95_104_111_51_95_95_91_54_93_95_48_3_p_0


		{
#line 1380 "analysis.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&analysis__mutable_variable_debug_analysis_lock,
                    "analysis__mutable_variable_debug_analysis_lock");
#endif

#line 4683 "analysis.c"

		;}
#undef MR_PROC_LABEL
#line 1380 "analysis.m"
}
#line 1380 "analysis.m"
{
#define MR_PROC_LABEL analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_109_115_103_95_95_104_111_51_95_95_91_54_93_95_48_3_p_0

	MR_Word X;

		{
#line 1380 "analysis.m"
X = analysis__mutable_variable_debug_analysis;

#line 4699 "analysis.c"

		;}
#undef MR_PROC_LABEL
	 analysis__Debug_6  = X;
#line 1380 "analysis.m"
}
#line 1380 "analysis.m"
{
#define MR_PROC_LABEL analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_109_115_103_95_95_104_111_51_95_95_91_54_93_95_48_3_p_0


		{
#line 1380 "analysis.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&analysis__mutable_variable_debug_analysis_lock,
                    "analysis__mutable_variable_debug_analysis_lock");
#endif

#line 4718 "analysis.c"

		;}
#undef MR_PROC_LABEL
#line 1380 "analysis.m"
}
#line 1393 "analysis.m"
#line 1393 "analysis.m"
    switch (analysis__Debug_6) {
#line 1393 "analysis.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1393 "analysis.m"
      case (MR_Integer) 0:
#line 1394 "analysis.m"
        {
#line 1394 "analysis.m"
        }
#line 1393 "analysis.m"
        break;
#line 1393 "analysis.m"
      case (MR_Integer) 1:
#line 1392 "analysis.m"
        {
#line 1392 "analysis.m"
          analysis__IntroducedFrom__pred__update_analysis_registry_5__923__1_7_p_0(analysis__V_11_11, analysis__V_12_12, analysis__V_13_13, analysis__V_14_14, analysis__V_15_15);
#line 1392 "analysis.m"
          return;
        }
#line 1393 "analysis.m"
        break;
#line 1393 "analysis.m"
    }
#line 1388 "analysis.m"
  }
#line 1385 "analysis.m"
}

#line 1385 "analysis.m"
static void MR_CALL 
analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_109_115_103_95_95_104_111_49_95_95_91_51_93_95_48_3_p_0(
#line 1385 "analysis.m"
  MR_Word analysis__V_11_11,
#line 1385 "analysis.m"
  MR_Word analysis__V_12_12)
#line 1385 "analysis.m"
{
#line 1388 "analysis.m"
  {
#line 1388 "analysis.m"
    MR_bool analysis__succeeded;
#line 1388 "analysis.m"
    MR_Word analysis__Debug_6;

#line 1380 "analysis.m"
{
#define MR_PROC_LABEL analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_109_115_103_95_95_104_111_49_95_95_91_51_93_95_48_3_p_0


		{
#line 1380 "analysis.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&analysis__mutable_variable_debug_analysis_lock,
                    "analysis__mutable_variable_debug_analysis_lock");
#endif

#line 4783 "analysis.c"

		;}
#undef MR_PROC_LABEL
#line 1380 "analysis.m"
}
#line 1380 "analysis.m"
{
#define MR_PROC_LABEL analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_109_115_103_95_95_104_111_49_95_95_91_51_93_95_48_3_p_0

	MR_Word X;

		{
#line 1380 "analysis.m"
X = analysis__mutable_variable_debug_analysis;

#line 4799 "analysis.c"

		;}
#undef MR_PROC_LABEL
	 analysis__Debug_6  = X;
#line 1380 "analysis.m"
}
#line 1380 "analysis.m"
{
#define MR_PROC_LABEL analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_109_115_103_95_95_104_111_49_95_95_91_51_93_95_48_3_p_0


		{
#line 1380 "analysis.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&analysis__mutable_variable_debug_analysis_lock,
                    "analysis__mutable_variable_debug_analysis_lock");
#endif

#line 4818 "analysis.c"

		;}
#undef MR_PROC_LABEL
#line 1380 "analysis.m"
}
#line 1393 "analysis.m"
#line 1393 "analysis.m"
    switch (analysis__Debug_6) {
#line 1393 "analysis.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1393 "analysis.m"
      case (MR_Integer) 0:
#line 1394 "analysis.m"
        {
#line 1394 "analysis.m"
        }
#line 1393 "analysis.m"
        break;
#line 1393 "analysis.m"
      case (MR_Integer) 1:
#line 1392 "analysis.m"
        {
#line 1392 "analysis.m"
          analysis__write_clearing_entries_4_p_0(analysis__V_11_11, analysis__V_12_12);
#line 1392 "analysis.m"
          return;
        }
#line 1393 "analysis.m"
        break;
#line 1393 "analysis.m"
    }
#line 1388 "analysis.m"
  }
#line 1385 "analysis.m"
}

#line 445 "analysis.m"
MR_Word MR_CALL 
analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_116_111_95_116_101_114_109_95_95_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_116_111_95_116_101_114_109_95_49_95_95_91_49_93_95_48_1_f_0(void)
#line 445 "analysis.m"
{
#line 445 "analysis.m"
  {
#line 445 "analysis.m"
    MR_bool analysis__succeeded;
#line 445 "analysis.m"
    MR_Word analysis__Term_3;
#line 445 "analysis.m"
    MR_Word analysis__V_8_8;

#line 446 "analysis.m"
    {
#line 446 "analysis.m"
      analysis__V_8_8 = mercury__term__context_init_0_f_0();
    }
#line 446 "analysis.m"
    {
#line 446 "analysis.m"
      analysis__Term_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 446 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__Term_3, 0) = ((MR_Box) (&analysis_scalar_common_14[0]));
#line 446 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__Term_3, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 446 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__Term_3, 2) = ((MR_Box) (analysis__V_8_8));
#line 446 "analysis.m"
    }
#line 445 "analysis.m"
    return analysis__Term_3;
#line 445 "analysis.m"
  }
#line 445 "analysis.m"
}

#line 440 "analysis.m"
MR_bool MR_CALL 
analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_112_97_114_116_105_97_108_95_111_114_100_101_114_95_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_101_113_117_105_118_97_108_101_110_116_95_51_95_95_91_49_44_32_50_44_32_51_93_95_48_3_p_0(void)
#line 440 "analysis.m"
{
#line 441 "analysis.m"
  {
#line 441 "analysis.m"
    MR_bool analysis__succeeded;

#line 441 "analysis.m"
    {
#line 441 "analysis.m"
      return analysis__succeeded = mercury__builtin__semidet_succeed_0_p_0();
    }
#line 441 "analysis.m"
    return analysis__succeeded;
#line 441 "analysis.m"
  }
#line 440 "analysis.m"
}

#line 437 "analysis.m"
MR_bool MR_CALL 
analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_112_97_114_116_105_97_108_95_111_114_100_101_114_95_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_109_111_114_101_95_112_114_101_99_105_115_101_95_116_104_97_110_95_51_95_95_91_49_44_32_50_44_32_51_93_95_48_3_p_0(void)
#line 437 "analysis.m"
{
#line 438 "analysis.m"
  {
#line 438 "analysis.m"
    MR_bool analysis__succeeded;

#line 438 "analysis.m"
    {
#line 438 "analysis.m"
      return analysis__succeeded = mercury__builtin__semidet_fail_0_p_0();
    }
#line 438 "analysis.m"
    return analysis__succeeded;
#line 438 "analysis.m"
  }
#line 437 "analysis.m"
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

#line 1371 "analysis.m"
static MR_Box MR_CALL 
analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_108_117_98_95_114_101_115_117_108_116_95_115_116_97_116_117_115_101_115_95_51_95_95_91_49_93_95_48_3_f_0_1(
#line 1371 "analysis.m"
  MR_Box analysis__closure_arg,
#line 1371 "analysis.m"
  MR_Box analysis__wrapper_arg_1,
#line 1371 "analysis.m"
  MR_Box analysis__wrapper_arg_2)
#line 1371 "analysis.m"
{
#line 1371 "analysis.m"
  {
#line 1371 "analysis.m"
    MR_Box analysis__wrapper_arg_3;
#line 1371 "analysis.m"
    MR_Box analysis__closure = analysis__closure_arg;
#line 1371 "analysis.m"
    MR_Word analysis__conv0_HeadVar__3_3;

#line 1371 "analysis.m"
    {
#line 1371 "analysis.m"
      analysis__conv0_HeadVar__3_3 = analysis__lub_result_statuses_4_2_f_0(((MR_Word) analysis__wrapper_arg_1), ((MR_Word) analysis__wrapper_arg_2));
    }
#line 1371 "analysis.m"
    analysis__wrapper_arg_3 = ((MR_Box) (analysis__conv0_HeadVar__3_3));
#line 1371 "analysis.m"
    return analysis__wrapper_arg_3;
#line 1371 "analysis.m"
  }
#line 1371 "analysis.m"
}

#line 1367 "analysis.m"
MR_Word MR_CALL 
analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_108_117_98_95_114_101_115_117_108_116_95_115_116_97_116_117_115_101_115_95_51_95_95_91_49_93_95_48_3_f_0(
#line 1367 "analysis.m"
  MR_Word analysis__Results_6,
#line 1367 "analysis.m"
  MR_Word analysis__Acc_7)
#line 1367 "analysis.m"
{
#line 1370 "analysis.m"
  {
#line 1370 "analysis.m"
    MR_bool analysis__succeeded;
#line 1370 "analysis.m"
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
#line 1370 "analysis.m"
    return analysis__HeadVar__4_4;
#line 1370 "analysis.m"
  }
#line 1367 "analysis.m"
}

#line 1365 "analysis.m"
static MR_Box MR_CALL 
analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_108_117_98_95_114_101_115_117_108_116_95_115_116_97_116_117_115_101_115_95_50_95_95_91_49_93_95_48_3_f_0_1(
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
      analysis__conv0_HeadVar__4_4 = analysis__lub_result_statuses_3_3_f_0(((MR_Word) analysis__wrapper_arg_1), ((MR_Word) analysis__wrapper_arg_2), ((MR_Word) analysis__wrapper_arg_3));
    }
#line 1365 "analysis.m"
    analysis__wrapper_arg_4 = ((MR_Box) (analysis__conv0_HeadVar__4_4));
#line 1365 "analysis.m"
    return analysis__wrapper_arg_4;
#line 1365 "analysis.m"
  }
#line 1365 "analysis.m"
}

#line 1360 "analysis.m"
MR_Word MR_CALL 
analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_108_117_98_95_114_101_115_117_108_116_95_115_116_97_116_117_115_101_115_95_50_95_95_91_49_93_95_48_3_f_0(
#line 1360 "analysis.m"
  MR_Word analysis__FuncMap_6,
#line 1360 "analysis.m"
  MR_Word analysis__Acc_7)
#line 1360 "analysis.m"
{
#line 1364 "analysis.m"
  {
#line 1364 "analysis.m"
    MR_bool analysis__succeeded;
#line 1364 "analysis.m"
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
#line 1364 "analysis.m"
    return analysis__HeadVar__4_4;
#line 1364 "analysis.m"
  }
#line 1360 "analysis.m"
}

#line 1171 "analysis.m"
static MR_bool MR_CALL 
analysis__IntroducedFrom__pred__clear_imdg_entries_pointing_at_3__1171__1_2_p_0(
#line 1171 "analysis.m"
  MR_Word analysis__ModuleName_4,
#line 1171 "analysis.m"
  MR_Word analysis__LambdaHeadVar__1_9)
#line 1171 "analysis.m"
{
#line 1171 "analysis.m"
  {
#line 1171 "analysis.m"
    MR_bool analysis__succeeded;
#line 1171 "analysis.m"
    MR_Word analysis__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__LambdaHeadVar__1_9, (MR_Integer) 2)));
#line 1171 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_call_pattern_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__LambdaHeadVar__1_9, (MR_Integer) 0)));
#line 1171 "analysis.m"
    MR_Box analysis__V_11_11 = (MR_hl_field(MR_mktag(0), analysis__LambdaHeadVar__1_9, (MR_Integer) 1));

#line 1171 "analysis.m"
    {
#line 1171 "analysis.m"
      analysis__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(analysis__ModuleName_4, analysis__V_14_14);
    }
#line 1171 "analysis.m"
    analysis__succeeded = !(analysis__succeeded);
#line 1171 "analysis.m"
    return analysis__succeeded;
#line 1171 "analysis.m"
  }
#line 1171 "analysis.m"
}

#line 952 "analysis.m"
static MR_bool MR_CALL 
analysis__IntroducedFrom__func__update_analysis_registry_5__952__1_1_f_0(
#line 952 "analysis.m"
  MR_Word analysis__LambdaHeadVar__1_61,
#line 952 "analysis.m"
  MR_Word * analysis__LambdaHeadVar__2_62)
#line 952 "analysis.m"
{
#line 952 "analysis.m"
  {
#line 952 "analysis.m"
    MR_bool analysis__succeeded;
#line 952 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_call_pattern_207 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__LambdaHeadVar__1_61, (MR_Integer) 0)));
#line 952 "analysis.m"
    MR_Word analysis__TypeInfo_209_209;
#line 952 "analysis.m"
    MR_Word analysis__TypeInfo_210_210;
#line 952 "analysis.m"
    MR_Word analysis__V_63_63;
#line 952 "analysis.m"
    MR_Box analysis__Call0_72 = (MR_hl_field(MR_mktag(0), analysis__LambdaHeadVar__1_61, (MR_Integer) 1));
#line 952 "analysis.m"
    MR_Word analysis__V_220_220;

#line 953 "analysis.m"
    *analysis__LambdaHeadVar__2_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__LambdaHeadVar__1_61, (MR_Integer) 2)));
#line 954 "analysis.m"
    {
#line 954 "analysis.m"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_call_pattern_207, (MR_Integer) 4, &analysis__TypeInfo_209_209);
    }
#line 954 "analysis.m"
    {
#line 954 "analysis.m"
      analysis__V_63_63 = mercury__univ__univ_1_f_0(analysis__TypeInfo_209_209, analysis__Call0_72);
    }
#line 954 "analysis.m"
    {
#line 954 "analysis.m"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_call_pattern_207, (MR_Integer) 4, &analysis__TypeInfo_210_210);
    }
#line 954 "analysis.m"
    {
#line 954 "analysis.m"
      analysis__V_220_220 = mercury__univ__univ_1_f_0(analysis__TypeInfo_210_210, analysis__Call0_72);
    }
#line 954 "analysis.m"
    {
#line 954 "analysis.m"
      return analysis__succeeded = mercury__univ____Unify____univ_0_0(analysis__V_63_63, analysis__V_220_220);
    }
#line 952 "analysis.m"
    return analysis__succeeded;
#line 952 "analysis.m"
  }
#line 952 "analysis.m"
}

#line 923 "analysis.m"
static void MR_CALL 
analysis__IntroducedFrom__pred__update_analysis_registry_5__923__1_7_p_0(
#line 923 "analysis.m"
  MR_Word analysis__TypeClassInfo_for_analysis_158,
#line 923 "analysis.m"
  MR_Box analysis__NewAnswer_18,
#line 923 "analysis.m"
  MR_Box analysis__OldAnswer_25,
#line 923 "analysis.m"
  MR_Word analysis__Status_29,
#line 923 "analysis.m"
  MR_Word analysis__DepModules_31)
#line 923 "analysis.m"
{
#line 923 "analysis.m"
  {
#line 923 "analysis.m"
    MR_bool analysis__succeeded;
#line 923 "analysis.m"
    MR_Word analysis__TypeInfo_185_185;

#line 923 "analysis.m"
    {
#line 923 "analysis.m"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_158, (MR_Integer) 5, &analysis__TypeInfo_185_185);
    }
#line 923 "analysis.m"
    {
#line 923 "analysis.m"
      analysis__write_changed_answer_6_p_0(analysis__TypeInfo_185_185, analysis__OldAnswer_25, analysis__NewAnswer_18, analysis__Status_29, analysis__DepModules_31);
#line 923 "analysis.m"
      return;
    }
#line 923 "analysis.m"
  }
#line 923 "analysis.m"
}

#line 894 "analysis.m"
static void MR_CALL 
analysis__IntroducedFrom__pred__update_analysis_registry_5__894__1_7_p_0(
#line 894 "analysis.m"
  MR_Word analysis__TypeClassInfo_for_analysis_158,
#line 894 "analysis.m"
  MR_Word analysis__ModuleName_11,
#line 894 "analysis.m"
  MR_Word analysis__FuncId_13,
#line 894 "analysis.m"
  MR_Box analysis__Call_17,
#line 894 "analysis.m"
  MR_Box analysis__NewAnswer_18)
#line 894 "analysis.m"
{
#line 894 "analysis.m"
  {
#line 894 "analysis.m"
    MR_bool analysis__succeeded;
#line 894 "analysis.m"
    MR_Word analysis__TypeInfo_166_166;
#line 894 "analysis.m"
    MR_Word analysis__TypeInfo_168_168;

#line 894 "analysis.m"
    {
#line 894 "analysis.m"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_158, (MR_Integer) 4, &analysis__TypeInfo_166_166);
    }
#line 894 "analysis.m"
    {
#line 894 "analysis.m"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_158, (MR_Integer) 5, &analysis__TypeInfo_168_168);
    }
#line 894 "analysis.m"
    {
#line 894 "analysis.m"
      analysis__write_no_change_in_result_6_p_0(analysis__TypeInfo_166_166, analysis__TypeInfo_168_168, analysis__ModuleName_11, analysis__FuncId_13, analysis__Call_17, analysis__NewAnswer_18);
#line 894 "analysis.m"
      return;
    }
#line 894 "analysis.m"
  }
#line 894 "analysis.m"
}

#line 603 "analysis.m"
static MR_bool MR_CALL 
analysis__IntroducedFrom__pred__lookup_exactly_matching_result_even_from_invalid_modules__603__1_4_p_0(
#line 603 "analysis.m"
  MR_Word analysis__TypeClassInfo_for_analysis_32,
#line 603 "analysis.m"
  MR_Box analysis__FuncInfo_10,
#line 603 "analysis.m"
  MR_Box analysis__Call_11,
#line 603 "analysis.m"
  MR_Word analysis__LambdaHeadVar__1_22)
#line 603 "analysis.m"
{
#line 603 "analysis.m"
  {
#line 603 "analysis.m"
    MR_bool analysis__succeeded;
#line 603 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_call_pattern_39;
#line 603 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_partial_order_41;
#line 603 "analysis.m"
    MR_Box analysis__V_23_23 = (MR_hl_field(MR_mktag(0), analysis__LambdaHeadVar__1_22, (MR_Integer) 0));
#line 605 "analysis.m"
    MR_Box analysis__V_30_30 = (MR_hl_field(MR_mktag(0), analysis__LambdaHeadVar__1_22, (MR_Integer) 1));
#line 605 "analysis.m"
    MR_Word analysis__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__LambdaHeadVar__1_22, (MR_Integer) 2)));
#line 137 "analysis.m"
    MR_bool MR_CALL (* analysis__func_0)(MR_Box, MR_Box, MR_Box, MR_Box);

#line 5346 "analysis.c"
    {
#line 5348 "analysis.c"
      mercury__private_builtin__superclass_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_32, (MR_Integer) 1, &analysis__TypeClassInfo_for_call_pattern_39);
    }
#line 5351 "analysis.c"
    {
#line 5353 "analysis.c"
      mercury__private_builtin__superclass_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_call_pattern_39, (MR_Integer) 1, &analysis__TypeClassInfo_for_partial_order_41);
    }
#line 137 "analysis.m"
    analysis__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), analysis__TypeClassInfo_for_partial_order_41, (MR_Integer) 0)), (MR_Integer) 6)));
#line 137 "analysis.m"
    {
#line 137 "analysis.m"
      return analysis__succeeded = analysis__func_0(((MR_Box) analysis__TypeClassInfo_for_partial_order_41), analysis__FuncInfo_10, analysis__Call_11, analysis__V_23_23);
    }
#line 603 "analysis.m"
    return analysis__succeeded;
#line 603 "analysis.m"
  }
#line 603 "analysis.m"
}

#line 536 "analysis.m"
static MR_Word MR_CALL 
analysis__IntroducedFrom__func__lookup_results_2__536__1_2_f_0(
#line 536 "analysis.m"
  MR_Word analysis__TypeClassInfo_for_analysis_29,
#line 536 "analysis.m"
  MR_Word analysis__LambdaHeadVar__1_24)
#line 536 "analysis.m"
{
#line 536 "analysis.m"
  {
#line 536 "analysis.m"
    MR_bool analysis__succeeded;
#line 536 "analysis.m"
    MR_Word analysis__LambdaHeadVar__2_25;
#line 536 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_analysis_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__LambdaHeadVar__1_24, (MR_Integer) 0)));
#line 536 "analysis.m"
    MR_Word analysis__TypeInfo_45_45;
#line 536 "analysis.m"
    MR_Word analysis__TypeInfo_46_46;
#line 536 "analysis.m"
    MR_Word analysis__TypeInfo_48_48;
#line 536 "analysis.m"
    MR_Word analysis__TypeInfo_49_49;
#line 536 "analysis.m"
    MR_Box analysis__Call_11;
#line 536 "analysis.m"
    MR_Box analysis__Answer_13;
#line 536 "analysis.m"
    MR_Word analysis__Status_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__LambdaHeadVar__1_24, (MR_Integer) 3)));
#line 536 "analysis.m"
    MR_Box analysis__Call0_18 = (MR_hl_field(MR_mktag(0), analysis__LambdaHeadVar__1_24, (MR_Integer) 1));
#line 536 "analysis.m"
    MR_Box analysis__Answer0_19 = (MR_hl_field(MR_mktag(0), analysis__LambdaHeadVar__1_24, (MR_Integer) 2));
#line 536 "analysis.m"
    MR_Word analysis__V_26_26;
#line 536 "analysis.m"
    MR_Word analysis__V_27_27;

#line 539 "analysis.m"
    {
#line 539 "analysis.m"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_43, (MR_Integer) 4, &analysis__TypeInfo_45_45);
    }
#line 539 "analysis.m"
    {
#line 539 "analysis.m"
      analysis__V_26_26 = mercury__univ__univ_1_f_0(analysis__TypeInfo_45_45, analysis__Call0_18);
    }
#line 539 "analysis.m"
    {
#line 539 "analysis.m"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_29, (MR_Integer) 4, &analysis__TypeInfo_46_46);
    }
#line 539 "analysis.m"
    {
#line 539 "analysis.m"
      mercury__univ__det_univ_to_type_2_p_0(analysis__TypeInfo_46_46, analysis__V_26_26, &analysis__Call_11);
    }
#line 540 "analysis.m"
    {
#line 540 "analysis.m"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_43, (MR_Integer) 5, &analysis__TypeInfo_48_48);
    }
#line 540 "analysis.m"
    {
#line 540 "analysis.m"
      analysis__V_27_27 = mercury__univ__univ_1_f_0(analysis__TypeInfo_48_48, analysis__Answer0_19);
    }
#line 540 "analysis.m"
    {
#line 540 "analysis.m"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_29, (MR_Integer) 5, &analysis__TypeInfo_49_49);
    }
#line 540 "analysis.m"
    {
#line 540 "analysis.m"
      mercury__univ__det_univ_to_type_2_p_0(analysis__TypeInfo_49_49, analysis__V_27_27, &analysis__Answer_13);
    }
#line 537 "analysis.m"
    {
#line 537 "analysis.m"
      analysis__LambdaHeadVar__2_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 537 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__LambdaHeadVar__2_25, 0) = analysis__Call_11;
#line 537 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__LambdaHeadVar__2_25, 1) = analysis__Answer_13;
#line 537 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__LambdaHeadVar__2_25, 2) = ((MR_Box) (analysis__Status_17));
#line 537 "analysis.m"
    }
#line 536 "analysis.m"
    return analysis__LambdaHeadVar__2_25;
#line 536 "analysis.m"
  }
#line 536 "analysis.m"
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

#line 517 "analysis.m"
    {
#line 517 "analysis.m"
      mercury__io__write_string_3_p_0((MR_String) "% Found these results: ");
    }
#line 518 "analysis.m"
    {
#line 518 "analysis.m"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_62, (MR_Integer) 4, &analysis__TypeInfo_70_70);
    }
#line 518 "analysis.m"
    {
#line 518 "analysis.m"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_62, (MR_Integer) 5, &analysis__TypeInfo_72_72);
    }
#line 5506 "analysis.c"
    {
#line 5508 "analysis.c"
      analysis__TypeInfo_74_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 5510 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_74_74, 0) = ((MR_Box) (&analysis__analysis__type_ctor_info_analysis_result_2));
#line 5512 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_74_74, 1) = ((MR_Box) (analysis__TypeInfo_70_70));
#line 5514 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_74_74, 2) = ((MR_Box) (analysis__TypeInfo_72_72));
#line 5516 "analysis.c"
    }
#line 5518 "analysis.c"
    {
#line 5520 "analysis.c"
      analysis__TypeInfo_76_76 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 5522 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_76_76, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
#line 5524 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_76_76, 1) = ((MR_Box) (analysis__TypeInfo_74_74));
#line 5526 "analysis.c"
    }
#line 518 "analysis.m"
    {
#line 518 "analysis.m"
      mercury__io__print_3_p_0(analysis__TypeInfo_76_76, ((MR_Box) (analysis__ResultList_10)));
    }
#line 519 "analysis.m"
    {
#line 519 "analysis.m"
      mercury__io__nl_2_p_0();
#line 519 "analysis.m"
      return;
    }
#line 516 "analysis.m"
  }
#line 516 "analysis.m"
}

#line 499 "analysis.m"
static void MR_CALL 
analysis__IntroducedFrom__pred__lookup_results_1__499__1_4_p_0(
#line 499 "analysis.m"
  MR_Word analysis__ModuleName_7,
#line 499 "analysis.m"
  MR_Word analysis__FuncId_8)
#line 499 "analysis.m"
{
#line 499 "analysis.m"
  {
#line 499 "analysis.m"
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
#line 504 "analysis.m"
      return;
    }
#line 499 "analysis.m"
  }
#line 499 "analysis.m"
}

#line 677 "analysis.m"
static MR_bool MR_CALL 
analysis__IntroducedFrom__func__lookup_requests__677__1_2_f_0(
#line 677 "analysis.m"
  MR_Word analysis__TypeClassInfo_for_call_pattern_47,
#line 677 "analysis.m"
  MR_Word analysis__LambdaHeadVar__1_23,
#line 677 "analysis.m"
  MR_Box * analysis__LambdaHeadVar__2_24)
#line 677 "analysis.m"
{
#line 677 "analysis.m"
  {
#line 677 "analysis.m"
    MR_bool analysis__succeeded;
#line 677 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_call_pattern_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__LambdaHeadVar__1_23, (MR_Integer) 0)));
#line 677 "analysis.m"
    MR_Word analysis__TypeInfo_61_61;
#line 677 "analysis.m"
    MR_Word analysis__TypeInfo_62_62;
#line 677 "analysis.m"
    MR_Word analysis__V_25_25;
#line 677 "analysis.m"
    MR_Box analysis__Call0_27 = (MR_hl_field(MR_mktag(0), analysis__LambdaHeadVar__1_23, (MR_Integer) 1));
#line 678 "analysis.m"
    MR_Word analysis__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__LambdaHeadVar__1_23, (MR_Integer) 2)));

#line 679 "analysis.m"
    {
#line 679 "analysis.m"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_call_pattern_47, (MR_Integer) 4, &analysis__TypeInfo_61_61);
    }
#line 679 "analysis.m"
    {
#line 679 "analysis.m"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_call_pattern_59, (MR_Integer) 4, &analysis__TypeInfo_62_62);
    }
#line 679 "analysis.m"
    {
#line 679 "analysis.m"
      analysis__V_25_25 = mercury__univ__univ_1_f_0(analysis__TypeInfo_62_62, analysis__Call0_27);
    }
#line 679 "analysis.m"
    {
#line 679 "analysis.m"
      return analysis__succeeded = mercury__univ__univ_1_f_2(analysis__TypeInfo_61_61, analysis__LambdaHeadVar__2_24, analysis__V_25_25);
    }
#line 677 "analysis.m"
    return analysis__succeeded;
#line 677 "analysis.m"
  }
#line 677 "analysis.m"
}

#line 560 "analysis.m"
static void MR_CALL 
analysis__IntroducedFrom__pred__lookup_best_result__560__1_4_p_0(
#line 560 "analysis.m"
  MR_Word analysis__ModuleName_8,
#line 560 "analysis.m"
  MR_Word analysis__FuncId_9)
#line 560 "analysis.m"
{
#line 560 "analysis.m"
  {
#line 560 "analysis.m"
    MR_bool analysis__succeeded;

#line 561 "analysis.m"
    {
#line 561 "analysis.m"
      mercury__io__write_string_3_p_0((MR_String) "% Looking up best analysis result for ");
    }
#line 562 "analysis.m"
    {
#line 562 "analysis.m"
      mercury__io__write_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (analysis__ModuleName_8)));
    }
#line 563 "analysis.m"
    {
#line 563 "analysis.m"
      mercury__io__write_string_3_p_0((MR_String) ".");
    }
#line 564 "analysis.m"
    {
#line 564 "analysis.m"
      mercury__io__write_3_p_0((MR_Word) &analysis__analysis__type_ctor_info_func_id_0, ((MR_Box) (analysis__FuncId_9)));
    }
#line 565 "analysis.m"
    {
#line 565 "analysis.m"
      mercury__io__nl_2_p_0();
#line 565 "analysis.m"
      return;
    }
#line 560 "analysis.m"
  }
#line 560 "analysis.m"
}

#line 549 "analysis.m"
static MR_bool MR_CALL 
analysis__IntroducedFrom__pred__lookup_matching_results__549__1_4_p_0(
#line 549 "analysis.m"
  MR_Word analysis__TypeClassInfo_for_analysis_21,
#line 549 "analysis.m"
  MR_Box analysis__FuncInfo_10,
#line 549 "analysis.m"
  MR_Box analysis__Call_11,
#line 549 "analysis.m"
  MR_Word analysis__LambdaHeadVar__1_17)
#line 549 "analysis.m"
{
#line 549 "analysis.m"
  {
#line 549 "analysis.m"
    MR_bool analysis__succeeded;
#line 549 "analysis.m"
    MR_Box analysis__ResultCall_15 = (MR_hl_field(MR_mktag(0), analysis__LambdaHeadVar__1_17, (MR_Integer) 0));
#line 551 "analysis.m"
    MR_Box analysis__V_19_19 = (MR_hl_field(MR_mktag(0), analysis__LambdaHeadVar__1_17, (MR_Integer) 1));
#line 551 "analysis.m"
    MR_Word analysis__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__LambdaHeadVar__1_17, (MR_Integer) 2)));

#line 552 "analysis.m"
    {
#line 552 "analysis.m"
      MR_Word analysis__TypeClassInfo_for_call_pattern_28;
#line 552 "analysis.m"
      MR_Word analysis__TypeClassInfo_for_partial_order_30;
#line 136 "analysis.m"
      MR_bool MR_CALL (* analysis__func_0)(MR_Box, MR_Box, MR_Box, MR_Box);

#line 5725 "analysis.c"
      {
#line 5727 "analysis.c"
        mercury__private_builtin__superclass_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_21, (MR_Integer) 1, &analysis__TypeClassInfo_for_call_pattern_28);
      }
#line 5730 "analysis.c"
      {
#line 5732 "analysis.c"
        mercury__private_builtin__superclass_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_call_pattern_28, (MR_Integer) 1, &analysis__TypeClassInfo_for_partial_order_30);
      }
#line 136 "analysis.m"
      analysis__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), analysis__TypeClassInfo_for_partial_order_30, (MR_Integer) 0)), (MR_Integer) 5)));
#line 136 "analysis.m"
      {
#line 136 "analysis.m"
        analysis__succeeded = analysis__func_0(((MR_Box) analysis__TypeClassInfo_for_partial_order_30), analysis__FuncInfo_10, analysis__Call_11, analysis__ResultCall_15);
      }
#line 552 "analysis.m"
    }
#line 553 "analysis.m"
    if (!(analysis__succeeded))
#line 553 "analysis.m"
      {
#line 553 "analysis.m"
        MR_Word analysis__TypeClassInfo_for_call_pattern_31;
#line 553 "analysis.m"
        MR_Word analysis__TypeClassInfo_for_partial_order_33;
#line 137 "analysis.m"
        MR_bool MR_CALL (* analysis__func_1)(MR_Box, MR_Box, MR_Box, MR_Box);

#line 5755 "analysis.c"
        {
#line 5757 "analysis.c"
          mercury__private_builtin__superclass_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_21, (MR_Integer) 1, &analysis__TypeClassInfo_for_call_pattern_31);
        }
#line 5760 "analysis.c"
        {
#line 5762 "analysis.c"
          mercury__private_builtin__superclass_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_call_pattern_31, (MR_Integer) 1, &analysis__TypeClassInfo_for_partial_order_33);
        }
#line 137 "analysis.m"
        analysis__func_1 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), analysis__TypeClassInfo_for_partial_order_33, (MR_Integer) 0)), (MR_Integer) 6)));
#line 137 "analysis.m"
        {
#line 137 "analysis.m"
          return analysis__succeeded = analysis__func_1(((MR_Box) analysis__TypeClassInfo_for_partial_order_33), analysis__FuncInfo_10, analysis__Call_11, analysis__ResultCall_15);
        }
#line 553 "analysis.m"
      }
#line 549 "analysis.m"
    return analysis__succeeded;
#line 549 "analysis.m"
  }
#line 549 "analysis.m"
}

#line 479 "analysis.m"
static MR_Box MR_CALL 
analysis__IntroducedFrom__func__lookup_existing_call_patterns__479__1_2_f_0(
#line 479 "analysis.m"
  MR_Word analysis__TypeClassInfo_for_call_pattern_46,
#line 479 "analysis.m"
  MR_Word analysis__LambdaHeadVar__1_24)
#line 479 "analysis.m"
{
#line 479 "analysis.m"
  {
#line 479 "analysis.m"
    MR_bool analysis__succeeded;
#line 479 "analysis.m"
    MR_Box analysis__LambdaHeadVar__2_25;
#line 479 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_analysis_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__LambdaHeadVar__1_24, (MR_Integer) 0)));
#line 479 "analysis.m"
    MR_Word analysis__TypeInfo_60_60;
#line 479 "analysis.m"
    MR_Word analysis__TypeInfo_61_61;
#line 479 "analysis.m"
    MR_Box analysis__Call0_16 = (MR_hl_field(MR_mktag(0), analysis__LambdaHeadVar__1_24, (MR_Integer) 1));
#line 479 "analysis.m"
    MR_Word analysis__V_26_26;
#line 481 "analysis.m"
    MR_Box analysis___Answer_17 = (MR_hl_field(MR_mktag(0), analysis__LambdaHeadVar__1_24, (MR_Integer) 2));
#line 481 "analysis.m"
    MR_Word analysis___Status_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__LambdaHeadVar__1_24, (MR_Integer) 3)));

#line 482 "analysis.m"
    {
#line 482 "analysis.m"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_58, (MR_Integer) 4, &analysis__TypeInfo_60_60);
    }
#line 482 "analysis.m"
    {
#line 482 "analysis.m"
      analysis__V_26_26 = mercury__univ__univ_1_f_0(analysis__TypeInfo_60_60, analysis__Call0_16);
    }
#line 482 "analysis.m"
    {
#line 482 "analysis.m"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_call_pattern_46, (MR_Integer) 4, &analysis__TypeInfo_61_61);
    }
#line 482 "analysis.m"
    {
#line 482 "analysis.m"
      mercury__univ__det_univ_to_type_2_p_0(analysis__TypeInfo_61_61, analysis__V_26_26, &analysis__LambdaHeadVar__2_25);
    }
#line 479 "analysis.m"
    return analysis__LambdaHeadVar__2_25;
#line 479 "analysis.m"
  }
#line 479 "analysis.m"
}

#line 448 "analysis.m"
MR_bool MR_CALL 
analysis__ClassMethod_for_analysis__to_term____analysis__any_call__arity0______analysis__from_term_2_2_p_0(
#line 448 "analysis.m"
  MR_Word analysis__Term_3)
#line 448 "analysis.m"
{
#line 448 "analysis.m"
  {
#line 448 "analysis.m"
    MR_bool analysis__succeeded;
#line 448 "analysis.m"
    MR_Word analysis__V_5_5;
#line 448 "analysis.m"
    MR_String analysis__V_6_6;
#line 448 "analysis.m"
    MR_Word analysis__V_7_7;
#line 449 "analysis.m"
    MR_Word analysis__V_4_4;

#line 448 "analysis.m"
    mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 449 "analysis.m"
    analysis__succeeded = ((MR_tag((MR_Word) analysis__Term_3)) == (MR_mktag((MR_Integer) 0)));
#line 449 "analysis.m"
    if (analysis__succeeded)
#line 449 "analysis.m"
      {
#line 449 "analysis.m"
        analysis__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Term_3, (MR_Integer) 0)));
#line 449 "analysis.m"
        analysis__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Term_3, (MR_Integer) 1)));
#line 449 "analysis.m"
        analysis__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Term_3, (MR_Integer) 2)));
#line 449 "analysis.m"
        analysis__succeeded = (analysis__V_7_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 448 "analysis.m"
        if (analysis__succeeded)
#line 448 "analysis.m"
          {
#line 449 "analysis.m"
            analysis__succeeded = ((MR_tag((MR_Word) analysis__V_5_5)) == (MR_mktag((MR_Integer) 0)));
#line 449 "analysis.m"
            if (analysis__succeeded)
#line 449 "analysis.m"
              {
#line 449 "analysis.m"
                analysis__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), analysis__V_5_5, (MR_Integer) 0)));
#line 449 "analysis.m"
                analysis__succeeded = (strcmp(analysis__V_6_6, (MR_String) "any") == 0);
#line 449 "analysis.m"
              }
#line 448 "analysis.m"
          }
#line 449 "analysis.m"
      }
#line 448 "analysis.m"
    return analysis__succeeded;
#line 448 "analysis.m"
  }
#line 448 "analysis.m"
}

#line 445 "analysis.m"
MR_Word MR_CALL 
analysis__ClassMethod_for_analysis__to_term____analysis__any_call__arity0______analysis__to_term_1_1_f_0(void)
#line 445 "analysis.m"
{
#line 445 "analysis.m"
  {
#line 445 "analysis.m"
    MR_bool analysis__succeeded;
#line 445 "analysis.m"
    MR_Word analysis__Term_3;

#line 445 "analysis.m"
    {
#line 445 "analysis.m"
      return analysis__Term_3 = analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_116_111_95_116_101_114_109_95_95_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_116_111_95_116_101_114_109_95_49_95_95_91_49_93_95_48_1_f_0();
    }
#line 445 "analysis.m"
    return analysis__Term_3;
#line 445 "analysis.m"
  }
#line 445 "analysis.m"
}

#line 440 "analysis.m"
MR_bool MR_CALL 
analysis__ClassMethod_for_analysis__partial_order____analysis__no_func_info__arity0__analysis__any_call__arity0______analysis__equivalent_3_3_p_0(void)
#line 440 "analysis.m"
{
#line 441 "analysis.m"
  {
#line 441 "analysis.m"
    MR_bool analysis__succeeded;

#line 441 "analysis.m"
    {
#line 441 "analysis.m"
      return analysis__succeeded = analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_112_97_114_116_105_97_108_95_111_114_100_101_114_95_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_101_113_117_105_118_97_108_101_110_116_95_51_95_95_91_49_44_32_50_44_32_51_93_95_48_3_p_0();
    }
#line 441 "analysis.m"
    return analysis__succeeded;
#line 441 "analysis.m"
  }
#line 440 "analysis.m"
}

#line 437 "analysis.m"
MR_bool MR_CALL 
analysis__ClassMethod_for_analysis__partial_order____analysis__no_func_info__arity0__analysis__any_call__arity0______analysis__more_precise_than_3_3_p_0(void)
#line 437 "analysis.m"
{
#line 438 "analysis.m"
  {
#line 438 "analysis.m"
    MR_bool analysis__succeeded;

#line 438 "analysis.m"
    {
#line 438 "analysis.m"
      return analysis__succeeded = analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_112_97_114_116_105_97_108_95_111_114_100_101_114_95_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_109_111_114_101_95_112_114_101_99_105_115_101_95_116_104_97_110_95_51_95_95_91_49_44_32_50_44_32_51_93_95_48_3_p_0();
    }
#line 438 "analysis.m"
    return analysis__succeeded;
#line 438 "analysis.m"
  }
#line 437 "analysis.m"
}

#line 398 "analysis.m"
void MR_CALL 
analysis____Compare____some_analysis_result_0_0(
#line 398 "analysis.m"
  MR_Word * analysis__HeadVar__1_1,
#line 398 "analysis.m"
  MR_Word analysis__HeadVar__2_2,
#line 398 "analysis.m"
  MR_Word analysis__HeadVar__3_3)
#line 398 "analysis.m"
{
#line 398 "analysis.m"
  {
#line 398 "analysis.m"
    MR_bool analysis__succeeded;
#line 398 "analysis.m"
    MR_Integer analysis__CastX_12 = (MR_Integer) analysis__HeadVar__2_2;
#line 398 "analysis.m"
    MR_Integer analysis__CastY_13 = (MR_Integer) analysis__HeadVar__3_3;

#line 398 "analysis.m"
    analysis__succeeded = (analysis__CastX_12 == analysis__CastY_13);
#line 398 "analysis.m"
    if (analysis__succeeded)
#line 398 "analysis.m"
      *analysis__HeadVar__1_1 = (MR_Integer) 0;
#line 398 "analysis.m"
    else
#line 398 "analysis.m"
      {
#line 398 "analysis.m"
        MR_Word analysis__TypeClassInfo_for_analysis_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 0)));
#line 398 "analysis.m"
        MR_Word analysis__TypeClassInfo_for_analysis_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__3_3, (MR_Integer) 0)));
#line 398 "analysis.m"
        MR_Box analysis__V_4_4 = (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 1));
#line 398 "analysis.m"
        MR_Box analysis__V_5_5 = (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 2));
#line 398 "analysis.m"
        MR_Word analysis__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 3)));
#line 398 "analysis.m"
        MR_Box analysis__V_7_7 = (MR_hl_field(MR_mktag(0), analysis__HeadVar__3_3, (MR_Integer) 1));
#line 398 "analysis.m"
        MR_Box analysis__V_8_8 = (MR_hl_field(MR_mktag(0), analysis__HeadVar__3_3, (MR_Integer) 2));
#line 398 "analysis.m"
        MR_Word analysis__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__3_3, (MR_Integer) 3)));
#line 398 "analysis.m"
        MR_Word analysis__V_10_10;
#line 398 "analysis.m"
        MR_Word analysis__TypeInfo_17_17;
#line 398 "analysis.m"
        MR_Word analysis__TypeInfo_18_18;

#line 398 "analysis.m"
        {
#line 398 "analysis.m"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_14, (MR_Integer) 4, &analysis__TypeInfo_17_17);
        }
#line 398 "analysis.m"
        {
#line 398 "analysis.m"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_15, (MR_Integer) 4, &analysis__TypeInfo_18_18);
        }
#line 398 "analysis.m"
        {
#line 398 "analysis.m"
          mercury__private_builtin__typed_compare_3_p_0(analysis__TypeInfo_17_17, analysis__TypeInfo_18_18, &analysis__V_10_10, analysis__V_4_4, analysis__V_7_7);
        }
#line 398 "analysis.m"
        analysis__succeeded = (analysis__V_10_10 == (MR_Integer) 0);
#line 398 "analysis.m"
        analysis__succeeded = !(analysis__succeeded);
#line 398 "analysis.m"
        if (analysis__succeeded)
#line 398 "analysis.m"
          *analysis__HeadVar__1_1 = analysis__V_10_10;
#line 398 "analysis.m"
        else
#line 398 "analysis.m"
          {
#line 398 "analysis.m"
            MR_Word analysis__V_11_11;
#line 398 "analysis.m"
            MR_Word analysis__TypeInfo_20_20;
#line 398 "analysis.m"
            MR_Word analysis__TypeInfo_21_21;

#line 398 "analysis.m"
            {
#line 398 "analysis.m"
              mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_14, (MR_Integer) 5, &analysis__TypeInfo_20_20);
            }
#line 398 "analysis.m"
            {
#line 398 "analysis.m"
              mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_15, (MR_Integer) 5, &analysis__TypeInfo_21_21);
            }
#line 398 "analysis.m"
            {
#line 398 "analysis.m"
              mercury__private_builtin__typed_compare_3_p_0(analysis__TypeInfo_20_20, analysis__TypeInfo_21_21, &analysis__V_11_11, analysis__V_5_5, analysis__V_8_8);
            }
#line 398 "analysis.m"
            analysis__succeeded = (analysis__V_11_11 == (MR_Integer) 0);
#line 398 "analysis.m"
            analysis__succeeded = !(analysis__succeeded);
#line 398 "analysis.m"
            if (analysis__succeeded)
#line 398 "analysis.m"
              *analysis__HeadVar__1_1 = analysis__V_11_11;
#line 398 "analysis.m"
            else
#line 398 "analysis.m"
              {
#line 398 "analysis.m"
                MR_Integer analysis__V_23_23 = (MR_Integer) analysis__V_6_6;
#line 398 "analysis.m"
                MR_Integer analysis__V_24_24 = (MR_Integer) analysis__V_9_9;

#line 398 "analysis.m"
                {
#line 398 "analysis.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(analysis__HeadVar__1_1, analysis__V_23_23, analysis__V_24_24);
#line 398 "analysis.m"
                  return;
                }
#line 398 "analysis.m"
              }
#line 398 "analysis.m"
          }
#line 398 "analysis.m"
      }
#line 398 "analysis.m"
  }
#line 398 "analysis.m"
}

#line 398 "analysis.m"
MR_bool MR_CALL 
analysis____Unify____some_analysis_result_0_0(
#line 398 "analysis.m"
  MR_Word analysis__HeadVar__1_1,
#line 398 "analysis.m"
  MR_Word analysis__HeadVar__2_2)
#line 398 "analysis.m"
{
#line 398 "analysis.m"
  {
#line 398 "analysis.m"
    MR_bool analysis__succeeded;
#line 398 "analysis.m"
    MR_Integer analysis__CastX_9 = (MR_Integer) analysis__HeadVar__1_1;
#line 398 "analysis.m"
    MR_Integer analysis__CastY_10 = (MR_Integer) analysis__HeadVar__2_2;

#line 398 "analysis.m"
    analysis__succeeded = (analysis__CastX_9 == analysis__CastY_10);
#line 398 "analysis.m"
    if (analysis__succeeded)
#line 398 "analysis.m"
      analysis__succeeded = MR_TRUE;
#line 398 "analysis.m"
    else
#line 398 "analysis.m"
      {
#line 398 "analysis.m"
        MR_Word analysis__TypeClassInfo_for_analysis_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__1_1, (MR_Integer) 0)));
#line 398 "analysis.m"
        MR_Word analysis__TypeClassInfo_for_analysis_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 0)));
#line 398 "analysis.m"
        MR_Word analysis__TypeInfo_14_14;
#line 398 "analysis.m"
        MR_Word analysis__TypeInfo_15_15;
#line 398 "analysis.m"
        MR_Word analysis__TypeInfo_17_17;
#line 398 "analysis.m"
        MR_Word analysis__TypeInfo_18_18;
#line 398 "analysis.m"
        MR_Box analysis__V_3_3 = (MR_hl_field(MR_mktag(0), analysis__HeadVar__1_1, (MR_Integer) 1));
#line 398 "analysis.m"
        MR_Box analysis__V_4_4 = (MR_hl_field(MR_mktag(0), analysis__HeadVar__1_1, (MR_Integer) 2));
#line 398 "analysis.m"
        MR_Word analysis__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__1_1, (MR_Integer) 3)));
#line 398 "analysis.m"
        MR_Box analysis__V_6_6 = (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 1));
#line 398 "analysis.m"
        MR_Box analysis__V_7_7 = (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 2));
#line 398 "analysis.m"
        MR_Word analysis__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 3)));
#line 398 "analysis.m"
        MR_Integer analysis__PolyConst5_16;

#line 398 "analysis.m"
        {
#line 398 "analysis.m"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_11, (MR_Integer) 4, &analysis__TypeInfo_14_14);
        }
#line 398 "analysis.m"
        {
#line 398 "analysis.m"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_12, (MR_Integer) 4, &analysis__TypeInfo_15_15);
        }
#line 398 "analysis.m"
        {
#line 398 "analysis.m"
          analysis__succeeded = mercury__private_builtin__typed_unify_2_p_0(analysis__TypeInfo_14_14, analysis__TypeInfo_15_15, analysis__V_3_3, analysis__V_6_6);
        }
#line 398 "analysis.m"
        if (analysis__succeeded)
#line 398 "analysis.m"
          {
#line 6180 "analysis.c"
            analysis__PolyConst5_16 = (MR_Integer) 5;
#line 398 "analysis.m"
            {
#line 398 "analysis.m"
              mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_11, analysis__PolyConst5_16, &analysis__TypeInfo_17_17);
            }
#line 398 "analysis.m"
            {
#line 398 "analysis.m"
              mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_12, analysis__PolyConst5_16, &analysis__TypeInfo_18_18);
            }
#line 398 "analysis.m"
            {
#line 398 "analysis.m"
              analysis__succeeded = mercury__private_builtin__typed_unify_2_p_0(analysis__TypeInfo_17_17, analysis__TypeInfo_18_18, analysis__V_4_4, analysis__V_7_7);
            }
#line 398 "analysis.m"
            if (analysis__succeeded)
#line 398 "analysis.m"
              analysis__succeeded = (analysis__V_5_5 == analysis__V_8_8);
#line 398 "analysis.m"
          }
#line 398 "analysis.m"
      }
#line 398 "analysis.m"
    return analysis__succeeded;
#line 398 "analysis.m"
  }
#line 398 "analysis.m"
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

#line 427 "analysis.m"
void MR_CALL 
analysis____Compare____module_analysis_map_1_0(
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
    MR_Word analysis__TypeInfo_10_10;
#line 427 "analysis.m"
    MR_Word analysis__TypeInfo_12_12;
#line 427 "analysis.m"
    MR_Word analysis__Cast_HeadVar1_4 = analysis__HeadVar__2_2;
#line 427 "analysis.m"
    MR_Word analysis__Cast_HeadVar2_5 = analysis__HeadVar__3_3;

#line 6284 "analysis.c"
    {
#line 6286 "analysis.c"
      analysis__TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6288 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_10_10, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
#line 6290 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_10_10, 1) = ((MR_Box) (analysis__TypeInfo_for_T_6));
#line 6292 "analysis.c"
    }
#line 6294 "analysis.c"
    {
#line 6296 "analysis.c"
      analysis__TypeInfo_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 6298 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_12_12, 0) = ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2));
#line 6300 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_12_12, 1) = ((MR_Box) (&analysis__analysis__type_ctor_info_func_id_0));
#line 6302 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_12_12, 2) = ((MR_Box) (analysis__TypeInfo_10_10));
#line 6304 "analysis.c"
    }
#line 427 "analysis.m"
    {
#line 427 "analysis.m"
      mercury__tree234____Compare____tree234_2_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, analysis__TypeInfo_12_12, analysis__HeadVar__1_1, analysis__Cast_HeadVar1_4, analysis__Cast_HeadVar2_5);
#line 427 "analysis.m"
      return;
    }
#line 427 "analysis.m"
  }
#line 427 "analysis.m"
}

#line 427 "analysis.m"
MR_bool MR_CALL 
analysis____Unify____module_analysis_map_1_0(
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
    MR_Word analysis__TypeInfo_9_9;
#line 427 "analysis.m"
    MR_Word analysis__TypeInfo_11_11;
#line 427 "analysis.m"
    MR_Word analysis__Cast_HeadVar1_3 = analysis__HeadVar__1_1;
#line 427 "analysis.m"
    MR_Word analysis__Cast_HeadVar2_4 = analysis__HeadVar__2_2;

#line 6342 "analysis.c"
    {
#line 6344 "analysis.c"
      analysis__TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6346 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_9_9, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
#line 6348 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_9_9, 1) = ((MR_Box) (analysis__TypeInfo_for_T_5));
#line 6350 "analysis.c"
    }
#line 6352 "analysis.c"
    {
#line 6354 "analysis.c"
      analysis__TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 6356 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_11_11, 0) = ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2));
#line 6358 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_11_11, 1) = ((MR_Box) (&analysis__analysis__type_ctor_info_func_id_0));
#line 6360 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_11_11, 2) = ((MR_Box) (analysis__TypeInfo_9_9));
#line 6362 "analysis.c"
    }
#line 427 "analysis.m"
    {
#line 427 "analysis.m"
      return analysis__succeeded = mercury__tree234____Unify____tree234_2_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, analysis__TypeInfo_11_11, analysis__Cast_HeadVar1_3, analysis__Cast_HeadVar2_4);
    }
#line 427 "analysis.m"
    return analysis__succeeded;
#line 427 "analysis.m"
  }
#line 427 "analysis.m"
}

#line 391 "analysis.m"
void MR_CALL 
analysis____Compare____make_analysis_registry_0_0(
#line 391 "analysis.m"
  MR_Word * analysis__HeadVar__1_1,
#line 391 "analysis.m"
  MR_Word analysis__HeadVar__2_2,
#line 391 "analysis.m"
  MR_Word analysis__HeadVar__3_3)
#line 391 "analysis.m"
{
#line 391 "analysis.m"
  {
#line 391 "analysis.m"
    MR_bool analysis__succeeded;
#line 391 "analysis.m"
    MR_Integer analysis__Cast_HeadVar1_4 = (MR_Integer) analysis__HeadVar__2_2;
#line 391 "analysis.m"
    MR_Integer analysis__Cast_HeadVar2_5 = (MR_Integer) analysis__HeadVar__3_3;

#line 391 "analysis.m"
    {
#line 391 "analysis.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(analysis__HeadVar__1_1, analysis__Cast_HeadVar1_4, analysis__Cast_HeadVar2_5);
#line 391 "analysis.m"
      return;
    }
#line 391 "analysis.m"
  }
#line 391 "analysis.m"
}

#line 391 "analysis.m"
MR_bool MR_CALL 
analysis____Unify____make_analysis_registry_0_0(
#line 391 "analysis.m"
  MR_Word analysis__HeadVar__2_1,
#line 391 "analysis.m"
  MR_Word analysis__HeadVar__2_2)
#line 391 "analysis.m"
{
#line 6417 "analysis.c"
  {
#line 6419 "analysis.c"
    MR_bool analysis__succeeded = (analysis__HeadVar__2_1 == analysis__HeadVar__2_2);

#line 6422 "analysis.c"
    return analysis__succeeded;
#line 6424 "analysis.c"
  }
#line 391 "analysis.m"
}

#line 415 "analysis.m"
void MR_CALL 
analysis____Compare____imdg_arc_0_0(
#line 415 "analysis.m"
  MR_Word * analysis__HeadVar__1_1,
#line 415 "analysis.m"
  MR_Word analysis__HeadVar__2_2,
#line 415 "analysis.m"
  MR_Word analysis__HeadVar__3_3)
#line 415 "analysis.m"
{
#line 415 "analysis.m"
  {
#line 415 "analysis.m"
    MR_bool analysis__succeeded;
#line 415 "analysis.m"
    MR_Integer analysis__CastX_9 = (MR_Integer) analysis__HeadVar__2_2;
#line 415 "analysis.m"
    MR_Integer analysis__CastY_10 = (MR_Integer) analysis__HeadVar__3_3;

#line 415 "analysis.m"
    analysis__succeeded = (analysis__CastX_9 == analysis__CastY_10);
#line 415 "analysis.m"
    if (analysis__succeeded)
#line 415 "analysis.m"
      *analysis__HeadVar__1_1 = (MR_Integer) 0;
#line 415 "analysis.m"
    else
#line 415 "analysis.m"
      {
#line 415 "analysis.m"
        MR_Word analysis__TypeClassInfo_for_call_pattern_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 0)));
#line 415 "analysis.m"
        MR_Word analysis__TypeClassInfo_for_call_pattern_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__3_3, (MR_Integer) 0)));
#line 415 "analysis.m"
        MR_Box analysis__V_4_4 = (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 1));
#line 415 "analysis.m"
        MR_Word analysis__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 2)));
#line 415 "analysis.m"
        MR_Box analysis__V_6_6 = (MR_hl_field(MR_mktag(0), analysis__HeadVar__3_3, (MR_Integer) 1));
#line 415 "analysis.m"
        MR_Word analysis__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__3_3, (MR_Integer) 2)));
#line 415 "analysis.m"
        MR_Word analysis__V_8_8;
#line 415 "analysis.m"
        MR_Word analysis__TypeInfo_14_14;
#line 415 "analysis.m"
        MR_Word analysis__TypeInfo_15_15;

#line 415 "analysis.m"
        {
#line 415 "analysis.m"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_call_pattern_11, (MR_Integer) 4, &analysis__TypeInfo_14_14);
        }
#line 415 "analysis.m"
        {
#line 415 "analysis.m"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_call_pattern_12, (MR_Integer) 4, &analysis__TypeInfo_15_15);
        }
#line 415 "analysis.m"
        {
#line 415 "analysis.m"
          mercury__private_builtin__typed_compare_3_p_0(analysis__TypeInfo_14_14, analysis__TypeInfo_15_15, &analysis__V_8_8, analysis__V_4_4, analysis__V_6_6);
        }
#line 415 "analysis.m"
        analysis__succeeded = (analysis__V_8_8 == (MR_Integer) 0);
#line 415 "analysis.m"
        analysis__succeeded = !(analysis__succeeded);
#line 415 "analysis.m"
        if (analysis__succeeded)
#line 415 "analysis.m"
          *analysis__HeadVar__1_1 = analysis__V_8_8;
#line 415 "analysis.m"
        else
#line 415 "analysis.m"
          {
#line 415 "analysis.m"
            mdbcomp__sym_name____Compare____sym_name_0_0(analysis__HeadVar__1_1, analysis__V_5_5, analysis__V_7_7);
#line 415 "analysis.m"
            return;
          }
#line 415 "analysis.m"
      }
#line 415 "analysis.m"
  }
#line 415 "analysis.m"
}

#line 415 "analysis.m"
MR_bool MR_CALL 
analysis____Unify____imdg_arc_0_0(
#line 415 "analysis.m"
  MR_Word analysis__HeadVar__1_1,
#line 415 "analysis.m"
  MR_Word analysis__HeadVar__2_2)
#line 415 "analysis.m"
{
#line 415 "analysis.m"
  {
#line 415 "analysis.m"
    MR_bool analysis__succeeded;
#line 415 "analysis.m"
    MR_Integer analysis__CastX_7 = (MR_Integer) analysis__HeadVar__1_1;
#line 415 "analysis.m"
    MR_Integer analysis__CastY_8 = (MR_Integer) analysis__HeadVar__2_2;

#line 415 "analysis.m"
    analysis__succeeded = (analysis__CastX_7 == analysis__CastY_8);
#line 415 "analysis.m"
    if (analysis__succeeded)
#line 415 "analysis.m"
      analysis__succeeded = MR_TRUE;
#line 415 "analysis.m"
    else
#line 415 "analysis.m"
      {
#line 415 "analysis.m"
        MR_Word analysis__TypeClassInfo_for_call_pattern_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__1_1, (MR_Integer) 0)));
#line 415 "analysis.m"
        MR_Word analysis__TypeClassInfo_for_call_pattern_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 0)));
#line 415 "analysis.m"
        MR_Word analysis__TypeInfo_12_12;
#line 415 "analysis.m"
        MR_Word analysis__TypeInfo_13_13;
#line 415 "analysis.m"
        MR_Box analysis__V_3_3 = (MR_hl_field(MR_mktag(0), analysis__HeadVar__1_1, (MR_Integer) 1));
#line 415 "analysis.m"
        MR_Word analysis__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__1_1, (MR_Integer) 2)));
#line 415 "analysis.m"
        MR_Box analysis__V_5_5 = (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 1));
#line 415 "analysis.m"
        MR_Word analysis__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 2)));

#line 415 "analysis.m"
        {
#line 415 "analysis.m"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_call_pattern_9, (MR_Integer) 4, &analysis__TypeInfo_12_12);
        }
#line 415 "analysis.m"
        {
#line 415 "analysis.m"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_call_pattern_10, (MR_Integer) 4, &analysis__TypeInfo_13_13);
        }
#line 415 "analysis.m"
        {
#line 415 "analysis.m"
          analysis__succeeded = mercury__private_builtin__typed_unify_2_p_0(analysis__TypeInfo_12_12, analysis__TypeInfo_13_13, analysis__V_3_3, analysis__V_5_5);
        }
#line 415 "analysis.m"
        if (analysis__succeeded)
#line 415 "analysis.m"
          {
#line 415 "analysis.m"
            return analysis__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(analysis__V_4_4, analysis__V_6_6);
          }
#line 415 "analysis.m"
      }
#line 415 "analysis.m"
    return analysis__succeeded;
#line 415 "analysis.m"
  }
#line 415 "analysis.m"
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
#line 6617 "analysis.c"
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
#line 6651 "analysis.c"
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
#line 6671 "analysis.c"
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
#line 6691 "analysis.c"
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

#line 6764 "analysis.c"
        analysis__succeeded = (analysis__V_3_3 == analysis__V_7_7);
#line 171 "analysis.m"
        if (analysis__succeeded)
#line 171 "analysis.m"
          {
#line 6770 "analysis.c"
            analysis__succeeded = (strcmp(analysis__V_4_4, analysis__V_8_8) == 0);
#line 171 "analysis.m"
            if (analysis__succeeded)
#line 171 "analysis.m"
              {
#line 6776 "analysis.c"
                analysis__succeeded = (analysis__V_5_5 == analysis__V_9_9);
#line 171 "analysis.m"
                if (analysis__succeeded)
#line 6780 "analysis.c"
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

#line 428 "analysis.m"
void MR_CALL 
analysis____Compare____func_analysis_map_1_0(
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
    MR_Word analysis__TypeInfo_9_9;
#line 428 "analysis.m"
    MR_Word analysis__Cast_HeadVar1_4 = analysis__HeadVar__2_2;
#line 428 "analysis.m"
    MR_Word analysis__Cast_HeadVar2_5 = analysis__HeadVar__3_3;

#line 6819 "analysis.c"
    {
#line 6821 "analysis.c"
      analysis__TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6823 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_9_9, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
#line 6825 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_9_9, 1) = ((MR_Box) (analysis__TypeInfo_for_T_6));
#line 6827 "analysis.c"
    }
#line 428 "analysis.m"
    {
#line 428 "analysis.m"
      mercury__tree234____Compare____tree234_2_0((MR_Word) &analysis__analysis__type_ctor_info_func_id_0, analysis__TypeInfo_9_9, analysis__HeadVar__1_1, analysis__Cast_HeadVar1_4, analysis__Cast_HeadVar2_5);
#line 428 "analysis.m"
      return;
    }
#line 428 "analysis.m"
  }
#line 428 "analysis.m"
}

#line 428 "analysis.m"
MR_bool MR_CALL 
analysis____Unify____func_analysis_map_1_0(
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
    MR_Word analysis__TypeInfo_8_8;
#line 428 "analysis.m"
    MR_Word analysis__Cast_HeadVar1_3 = analysis__HeadVar__1_1;
#line 428 "analysis.m"
    MR_Word analysis__Cast_HeadVar2_4 = analysis__HeadVar__2_2;

#line 6863 "analysis.c"
    {
#line 6865 "analysis.c"
      analysis__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6867 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_8_8, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
#line 6869 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_8_8, 1) = ((MR_Box) (analysis__TypeInfo_for_T_5));
#line 6871 "analysis.c"
    }
#line 428 "analysis.m"
    {
#line 428 "analysis.m"
      return analysis__succeeded = mercury__tree234____Unify____tree234_2_0((MR_Word) &analysis__analysis__type_ctor_info_func_id_0, analysis__TypeInfo_8_8, analysis__Cast_HeadVar1_3, analysis__Cast_HeadVar2_4);
    }
#line 428 "analysis.m"
    return analysis__succeeded;
#line 428 "analysis.m"
  }
#line 428 "analysis.m"
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
#line 6926 "analysis.c"
  {
#line 6928 "analysis.c"
    MR_bool analysis__succeeded = (analysis__HeadVar__2_1 == analysis__HeadVar__2_2);

#line 6931 "analysis.c"
    return analysis__succeeded;
#line 6933 "analysis.c"
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
#line 7101 "analysis.c"
  {
#line 7103 "analysis.c"
    MR_bool analysis__succeeded = (analysis__HeadVar__2_1 == analysis__HeadVar__2_2);

#line 7106 "analysis.c"
    return analysis__succeeded;
#line 7108 "analysis.c"
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
#line 7141 "analysis.c"
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
#line 7167 "analysis.c"
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
#line 7187 "analysis.c"
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

#line 7267 "analysis.c"
        {
#line 7269 "analysis.c"
          analysis__succeeded = mercury__builtin__unify_2_p_0(analysis__TypeInfo_for_Call_11, analysis__V_3_3, analysis__V_6_6);
        }
#line 125 "analysis.m"
        if (analysis__succeeded)
#line 125 "analysis.m"
          {
#line 7276 "analysis.c"
            {
#line 7278 "analysis.c"
              analysis__succeeded = mercury__builtin__unify_2_p_0(analysis__TypeInfo_for_Answer_12, analysis__V_4_4, analysis__V_7_7);
            }
#line 125 "analysis.m"
            if (analysis__succeeded)
#line 7283 "analysis.c"
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

#line 407 "analysis.m"
void MR_CALL 
analysis____Compare____analysis_request_0_0(
#line 407 "analysis.m"
  MR_Word * analysis__HeadVar__1_1,
#line 407 "analysis.m"
  MR_Word analysis__HeadVar__2_2,
#line 407 "analysis.m"
  MR_Word analysis__HeadVar__3_3)
#line 407 "analysis.m"
{
#line 407 "analysis.m"
  {
#line 407 "analysis.m"
    MR_bool analysis__succeeded;
#line 407 "analysis.m"
    MR_Integer analysis__CastX_9 = (MR_Integer) analysis__HeadVar__2_2;
#line 407 "analysis.m"
    MR_Integer analysis__CastY_10 = (MR_Integer) analysis__HeadVar__3_3;

#line 407 "analysis.m"
    analysis__succeeded = (analysis__CastX_9 == analysis__CastY_10);
#line 407 "analysis.m"
    if (analysis__succeeded)
#line 407 "analysis.m"
      *analysis__HeadVar__1_1 = (MR_Integer) 0;
#line 407 "analysis.m"
    else
#line 407 "analysis.m"
      {
#line 407 "analysis.m"
        MR_Word analysis__TypeClassInfo_for_call_pattern_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 0)));
#line 407 "analysis.m"
        MR_Word analysis__TypeClassInfo_for_call_pattern_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__3_3, (MR_Integer) 0)));
#line 407 "analysis.m"
        MR_Box analysis__V_4_4 = (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 1));
#line 407 "analysis.m"
        MR_Word analysis__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 2)));
#line 407 "analysis.m"
        MR_Box analysis__V_6_6 = (MR_hl_field(MR_mktag(0), analysis__HeadVar__3_3, (MR_Integer) 1));
#line 407 "analysis.m"
        MR_Word analysis__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__3_3, (MR_Integer) 2)));
#line 407 "analysis.m"
        MR_Word analysis__V_8_8;
#line 407 "analysis.m"
        MR_Word analysis__TypeInfo_14_14;
#line 407 "analysis.m"
        MR_Word analysis__TypeInfo_15_15;

#line 407 "analysis.m"
        {
#line 407 "analysis.m"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_call_pattern_11, (MR_Integer) 4, &analysis__TypeInfo_14_14);
        }
#line 407 "analysis.m"
        {
#line 407 "analysis.m"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_call_pattern_12, (MR_Integer) 4, &analysis__TypeInfo_15_15);
        }
#line 407 "analysis.m"
        {
#line 407 "analysis.m"
          mercury__private_builtin__typed_compare_3_p_0(analysis__TypeInfo_14_14, analysis__TypeInfo_15_15, &analysis__V_8_8, analysis__V_4_4, analysis__V_6_6);
        }
#line 407 "analysis.m"
        analysis__succeeded = (analysis__V_8_8 == (MR_Integer) 0);
#line 407 "analysis.m"
        analysis__succeeded = !(analysis__succeeded);
#line 407 "analysis.m"
        if (analysis__succeeded)
#line 407 "analysis.m"
          *analysis__HeadVar__1_1 = analysis__V_8_8;
#line 407 "analysis.m"
        else
#line 407 "analysis.m"
          {
#line 407 "analysis.m"
            mdbcomp__sym_name____Compare____sym_name_0_0(analysis__HeadVar__1_1, analysis__V_5_5, analysis__V_7_7);
#line 407 "analysis.m"
            return;
          }
#line 407 "analysis.m"
      }
#line 407 "analysis.m"
  }
#line 407 "analysis.m"
}

#line 407 "analysis.m"
MR_bool MR_CALL 
analysis____Unify____analysis_request_0_0(
#line 407 "analysis.m"
  MR_Word analysis__HeadVar__1_1,
#line 407 "analysis.m"
  MR_Word analysis__HeadVar__2_2)
#line 407 "analysis.m"
{
#line 407 "analysis.m"
  {
#line 407 "analysis.m"
    MR_bool analysis__succeeded;
#line 407 "analysis.m"
    MR_Integer analysis__CastX_7 = (MR_Integer) analysis__HeadVar__1_1;
#line 407 "analysis.m"
    MR_Integer analysis__CastY_8 = (MR_Integer) analysis__HeadVar__2_2;

#line 407 "analysis.m"
    analysis__succeeded = (analysis__CastX_7 == analysis__CastY_8);
#line 407 "analysis.m"
    if (analysis__succeeded)
#line 407 "analysis.m"
      analysis__succeeded = MR_TRUE;
#line 407 "analysis.m"
    else
#line 407 "analysis.m"
      {
#line 407 "analysis.m"
        MR_Word analysis__TypeClassInfo_for_call_pattern_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__1_1, (MR_Integer) 0)));
#line 407 "analysis.m"
        MR_Word analysis__TypeClassInfo_for_call_pattern_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 0)));
#line 407 "analysis.m"
        MR_Word analysis__TypeInfo_12_12;
#line 407 "analysis.m"
        MR_Word analysis__TypeInfo_13_13;
#line 407 "analysis.m"
        MR_Box analysis__V_3_3 = (MR_hl_field(MR_mktag(0), analysis__HeadVar__1_1, (MR_Integer) 1));
#line 407 "analysis.m"
        MR_Word analysis__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__1_1, (MR_Integer) 2)));
#line 407 "analysis.m"
        MR_Box analysis__V_5_5 = (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 1));
#line 407 "analysis.m"
        MR_Word analysis__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 2)));

#line 407 "analysis.m"
        {
#line 407 "analysis.m"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_call_pattern_9, (MR_Integer) 4, &analysis__TypeInfo_12_12);
        }
#line 407 "analysis.m"
        {
#line 407 "analysis.m"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_call_pattern_10, (MR_Integer) 4, &analysis__TypeInfo_13_13);
        }
#line 407 "analysis.m"
        {
#line 407 "analysis.m"
          analysis__succeeded = mercury__private_builtin__typed_unify_2_p_0(analysis__TypeInfo_12_12, analysis__TypeInfo_13_13, analysis__V_3_3, analysis__V_5_5);
        }
#line 407 "analysis.m"
        if (analysis__succeeded)
#line 407 "analysis.m"
          {
#line 407 "analysis.m"
            return analysis__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(analysis__V_4_4, analysis__V_6_6);
          }
#line 407 "analysis.m"
      }
#line 407 "analysis.m"
    return analysis__succeeded;
#line 407 "analysis.m"
  }
#line 407 "analysis.m"
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

#line 426 "analysis.m"
void MR_CALL 
analysis____Compare____analysis_map_1_0(
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
    MR_Word analysis__TypeInfo_11_11;
#line 426 "analysis.m"
    MR_Word analysis__TypeCtorInfo_12_12 = (MR_Word) &mercury__tree234__tree234__type_ctor_info_tree234_2;
#line 426 "analysis.m"
    MR_Word analysis__TypeInfo_13_13;
#line 426 "analysis.m"
    MR_Word analysis__TypeInfo_14_14;
#line 426 "analysis.m"
    MR_Word analysis__Cast_HeadVar1_4 = analysis__HeadVar__2_2;
#line 426 "analysis.m"
    MR_Word analysis__Cast_HeadVar2_5 = analysis__HeadVar__3_3;

#line 7549 "analysis.c"
    {
#line 7551 "analysis.c"
      analysis__TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7553 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_11_11, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
#line 7555 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_11_11, 1) = ((MR_Box) (analysis__TypeInfo_for_T_6));
#line 7557 "analysis.c"
    }
#line 7559 "analysis.c"
    {
#line 7561 "analysis.c"
      analysis__TypeInfo_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 7563 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_13_13, 0) = ((MR_Box) (analysis__TypeCtorInfo_12_12));
#line 7565 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_13_13, 1) = ((MR_Box) (&analysis__analysis__type_ctor_info_func_id_0));
#line 7567 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_13_13, 2) = ((MR_Box) (analysis__TypeInfo_11_11));
#line 7569 "analysis.c"
    }
#line 7571 "analysis.c"
    {
#line 7573 "analysis.c"
      analysis__TypeInfo_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 7575 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_14_14, 0) = ((MR_Box) (analysis__TypeCtorInfo_12_12));
#line 7577 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_14_14, 1) = ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0));
#line 7579 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_14_14, 2) = ((MR_Box) (analysis__TypeInfo_13_13));
#line 7581 "analysis.c"
    }
#line 426 "analysis.m"
    {
#line 426 "analysis.m"
      mercury__tree234____Compare____tree234_2_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, analysis__TypeInfo_14_14, analysis__HeadVar__1_1, analysis__Cast_HeadVar1_4, analysis__Cast_HeadVar2_5);
#line 426 "analysis.m"
      return;
    }
#line 426 "analysis.m"
  }
#line 426 "analysis.m"
}

#line 426 "analysis.m"
MR_bool MR_CALL 
analysis____Unify____analysis_map_1_0(
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
    MR_Word analysis__TypeInfo_10_10;
#line 426 "analysis.m"
    MR_Word analysis__TypeCtorInfo_11_11 = (MR_Word) &mercury__tree234__tree234__type_ctor_info_tree234_2;
#line 426 "analysis.m"
    MR_Word analysis__TypeInfo_12_12;
#line 426 "analysis.m"
    MR_Word analysis__TypeInfo_13_13;
#line 426 "analysis.m"
    MR_Word analysis__Cast_HeadVar1_3 = analysis__HeadVar__1_1;
#line 426 "analysis.m"
    MR_Word analysis__Cast_HeadVar2_4 = analysis__HeadVar__2_2;

#line 7623 "analysis.c"
    {
#line 7625 "analysis.c"
      analysis__TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7627 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_10_10, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
#line 7629 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_10_10, 1) = ((MR_Box) (analysis__TypeInfo_for_T_5));
#line 7631 "analysis.c"
    }
#line 7633 "analysis.c"
    {
#line 7635 "analysis.c"
      analysis__TypeInfo_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 7637 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_12_12, 0) = ((MR_Box) (analysis__TypeCtorInfo_11_11));
#line 7639 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_12_12, 1) = ((MR_Box) (&analysis__analysis__type_ctor_info_func_id_0));
#line 7641 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_12_12, 2) = ((MR_Box) (analysis__TypeInfo_10_10));
#line 7643 "analysis.c"
    }
#line 7645 "analysis.c"
    {
#line 7647 "analysis.c"
      analysis__TypeInfo_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 7649 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_13_13, 0) = ((MR_Box) (analysis__TypeCtorInfo_11_11));
#line 7651 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_13_13, 1) = ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0));
#line 7653 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_13_13, 2) = ((MR_Box) (analysis__TypeInfo_12_12));
#line 7655 "analysis.c"
    }
#line 426 "analysis.m"
    {
#line 426 "analysis.m"
      return analysis__succeeded = mercury__tree234____Unify____tree234_2_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, analysis__TypeInfo_13_13, analysis__Cast_HeadVar1_3, analysis__Cast_HeadVar2_4);
    }
#line 426 "analysis.m"
    return analysis__succeeded;
#line 426 "analysis.m"
  }
#line 426 "analysis.m"
}

#line 332 "analysis.m"
void MR_CALL 
analysis____Compare____analysis_info_0_0(
#line 332 "analysis.m"
  MR_Word * analysis__HeadVar__1_1,
#line 332 "analysis.m"
  MR_Word analysis__HeadVar__2_2,
#line 332 "analysis.m"
  MR_Word analysis__HeadVar__3_3)
#line 332 "analysis.m"
{
#line 332 "analysis.m"
  {
#line 332 "analysis.m"
    MR_bool analysis__succeeded;
#line 332 "analysis.m"
    MR_Integer analysis__CastX_33 = (MR_Integer) analysis__HeadVar__2_2;
#line 332 "analysis.m"
    MR_Integer analysis__CastY_34 = (MR_Integer) analysis__HeadVar__3_3;

#line 332 "analysis.m"
    analysis__succeeded = (analysis__CastX_33 == analysis__CastY_34);
#line 332 "analysis.m"
    if (analysis__succeeded)
#line 332 "analysis.m"
      *analysis__HeadVar__1_1 = (MR_Integer) 0;
#line 332 "analysis.m"
    else
#line 332 "analysis.m"
      {
#line 332 "analysis.m"
        MR_Word analysis__TypeClassInfo_for_compiler_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 0)));
#line 332 "analysis.m"
        MR_Word analysis__TypeClassInfo_for_compiler_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__3_3, (MR_Integer) 0)));
#line 332 "analysis.m"
        MR_Box analysis__V_4_4 = (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 1));
#line 332 "analysis.m"
        MR_Word analysis__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 2)));
#line 332 "analysis.m"
        MR_Word analysis__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 3)));
#line 332 "analysis.m"
        MR_Word analysis__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 4)));
#line 332 "analysis.m"
        MR_Word analysis__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 5)));
#line 332 "analysis.m"
        MR_Word analysis__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 6)));
#line 332 "analysis.m"
        MR_Word analysis__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 7)));
#line 332 "analysis.m"
        MR_Word analysis__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 8)));
#line 332 "analysis.m"
        MR_Word analysis__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 9)));
#line 332 "analysis.m"
        MR_Word analysis__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 10)));
#line 332 "analysis.m"
        MR_Box analysis__V_14_14 = (MR_hl_field(MR_mktag(0), analysis__HeadVar__3_3, (MR_Integer) 1));
#line 332 "analysis.m"
        MR_Word analysis__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__3_3, (MR_Integer) 2)));
#line 332 "analysis.m"
        MR_Word analysis__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__3_3, (MR_Integer) 3)));
#line 332 "analysis.m"
        MR_Word analysis__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__3_3, (MR_Integer) 4)));
#line 332 "analysis.m"
        MR_Word analysis__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__3_3, (MR_Integer) 5)));
#line 332 "analysis.m"
        MR_Word analysis__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__3_3, (MR_Integer) 6)));
#line 332 "analysis.m"
        MR_Word analysis__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__3_3, (MR_Integer) 7)));
#line 332 "analysis.m"
        MR_Word analysis__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__3_3, (MR_Integer) 8)));
#line 332 "analysis.m"
        MR_Word analysis__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__3_3, (MR_Integer) 9)));
#line 332 "analysis.m"
        MR_Word analysis__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__3_3, (MR_Integer) 10)));
#line 332 "analysis.m"
        MR_Word analysis__V_24_24;
#line 332 "analysis.m"
        MR_Word analysis__TypeInfo_38_38;
#line 332 "analysis.m"
        MR_Word analysis__TypeInfo_39_39;

#line 332 "analysis.m"
        {
#line 332 "analysis.m"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_compiler_35, (MR_Integer) 1, &analysis__TypeInfo_38_38);
        }
#line 332 "analysis.m"
        {
#line 332 "analysis.m"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_compiler_36, (MR_Integer) 1, &analysis__TypeInfo_39_39);
        }
#line 332 "analysis.m"
        {
#line 332 "analysis.m"
          mercury__private_builtin__typed_compare_3_p_0(analysis__TypeInfo_38_38, analysis__TypeInfo_39_39, &analysis__V_24_24, analysis__V_4_4, analysis__V_14_14);
        }
#line 332 "analysis.m"
        analysis__succeeded = (analysis__V_24_24 == (MR_Integer) 0);
#line 332 "analysis.m"
        analysis__succeeded = !(analysis__succeeded);
#line 332 "analysis.m"
        if (analysis__succeeded)
#line 332 "analysis.m"
          *analysis__HeadVar__1_1 = analysis__V_24_24;
#line 332 "analysis.m"
        else
#line 332 "analysis.m"
          {
#line 332 "analysis.m"
            MR_Word analysis__V_25_25;

#line 332 "analysis.m"
            {
#line 332 "analysis.m"
              mdbcomp__sym_name____Compare____sym_name_0_0(&analysis__V_25_25, analysis__V_5_5, analysis__V_15_15);
            }
#line 332 "analysis.m"
            analysis__succeeded = (analysis__V_25_25 == (MR_Integer) 0);
#line 332 "analysis.m"
            analysis__succeeded = !(analysis__succeeded);
#line 332 "analysis.m"
            if (analysis__succeeded)
#line 332 "analysis.m"
              *analysis__HeadVar__1_1 = analysis__V_25_25;
#line 332 "analysis.m"
            else
#line 332 "analysis.m"
              {
#line 332 "analysis.m"
                MR_Word analysis__V_26_26;
#line 332 "analysis.m"
                MR_Integer analysis__V_49_49 = (MR_Integer) analysis__V_6_6;
#line 332 "analysis.m"
                MR_Integer analysis__V_50_50 = (MR_Integer) analysis__V_16_16;

#line 332 "analysis.m"
                {
#line 332 "analysis.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(&analysis__V_26_26, analysis__V_49_49, analysis__V_50_50);
                }
#line 332 "analysis.m"
                analysis__succeeded = (analysis__V_26_26 == (MR_Integer) 0);
#line 332 "analysis.m"
                analysis__succeeded = !(analysis__succeeded);
#line 332 "analysis.m"
                if (analysis__succeeded)
#line 332 "analysis.m"
                  *analysis__HeadVar__1_1 = analysis__V_26_26;
#line 332 "analysis.m"
                else
#line 332 "analysis.m"
                  {
#line 332 "analysis.m"
                    MR_Word analysis__V_27_27;

#line 332 "analysis.m"
                    {
#line 332 "analysis.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &analysis_scalar_common_1[3], &analysis__V_27_27, ((MR_Box) (analysis__V_7_7)), ((MR_Box) (analysis__V_17_17)));
                    }
#line 332 "analysis.m"
                    analysis__succeeded = (analysis__V_27_27 == (MR_Integer) 0);
#line 332 "analysis.m"
                    analysis__succeeded = !(analysis__succeeded);
#line 332 "analysis.m"
                    if (analysis__succeeded)
#line 332 "analysis.m"
                      *analysis__HeadVar__1_1 = analysis__V_27_27;
#line 332 "analysis.m"
                    else
#line 332 "analysis.m"
                      {
#line 332 "analysis.m"
                        MR_Word analysis__V_28_28;

#line 332 "analysis.m"
                        {
#line 332 "analysis.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &analysis_scalar_common_2[6], &analysis__V_28_28, ((MR_Box) (analysis__V_8_8)), ((MR_Box) (analysis__V_18_18)));
                        }
#line 332 "analysis.m"
                        analysis__succeeded = (analysis__V_28_28 == (MR_Integer) 0);
#line 332 "analysis.m"
                        analysis__succeeded = !(analysis__succeeded);
#line 332 "analysis.m"
                        if (analysis__succeeded)
#line 332 "analysis.m"
                          *analysis__HeadVar__1_1 = analysis__V_28_28;
#line 332 "analysis.m"
                        else
#line 332 "analysis.m"
                          {
#line 332 "analysis.m"
                            MR_Word analysis__V_29_29;

#line 332 "analysis.m"
                            {
#line 332 "analysis.m"
                              mercury__builtin__compare_3_p_0((MR_Word) &analysis_scalar_common_2[7], &analysis__V_29_29, ((MR_Box) (analysis__V_9_9)), ((MR_Box) (analysis__V_19_19)));
                            }
#line 332 "analysis.m"
                            analysis__succeeded = (analysis__V_29_29 == (MR_Integer) 0);
#line 332 "analysis.m"
                            analysis__succeeded = !(analysis__succeeded);
#line 332 "analysis.m"
                            if (analysis__succeeded)
#line 332 "analysis.m"
                              *analysis__HeadVar__1_1 = analysis__V_29_29;
#line 332 "analysis.m"
                            else
#line 332 "analysis.m"
                              {
#line 332 "analysis.m"
                                MR_Word analysis__V_30_30;

#line 332 "analysis.m"
                                {
#line 332 "analysis.m"
                                  mercury__builtin__compare_3_p_0((MR_Word) &analysis_scalar_common_2[8], &analysis__V_30_30, ((MR_Box) (analysis__V_10_10)), ((MR_Box) (analysis__V_20_20)));
                                }
#line 332 "analysis.m"
                                analysis__succeeded = (analysis__V_30_30 == (MR_Integer) 0);
#line 332 "analysis.m"
                                analysis__succeeded = !(analysis__succeeded);
#line 332 "analysis.m"
                                if (analysis__succeeded)
#line 332 "analysis.m"
                                  *analysis__HeadVar__1_1 = analysis__V_30_30;
#line 332 "analysis.m"
                                else
#line 332 "analysis.m"
                                  {
#line 332 "analysis.m"
                                    MR_Word analysis__V_31_31;

#line 332 "analysis.m"
                                    {
#line 332 "analysis.m"
                                      mercury__builtin__compare_3_p_0((MR_Word) &analysis_scalar_common_2[3], &analysis__V_31_31, ((MR_Box) (analysis__V_11_11)), ((MR_Box) (analysis__V_21_21)));
                                    }
#line 332 "analysis.m"
                                    analysis__succeeded = (analysis__V_31_31 == (MR_Integer) 0);
#line 332 "analysis.m"
                                    analysis__succeeded = !(analysis__succeeded);
#line 332 "analysis.m"
                                    if (analysis__succeeded)
#line 332 "analysis.m"
                                      *analysis__HeadVar__1_1 = analysis__V_31_31;
#line 332 "analysis.m"
                                    else
#line 332 "analysis.m"
                                      {
#line 332 "analysis.m"
                                        MR_Word analysis__V_32_32;

#line 332 "analysis.m"
                                        {
#line 332 "analysis.m"
                                          mercury__builtin__compare_3_p_0((MR_Word) &analysis_scalar_common_2[9], &analysis__V_32_32, ((MR_Box) (analysis__V_12_12)), ((MR_Box) (analysis__V_22_22)));
                                        }
#line 332 "analysis.m"
                                        analysis__succeeded = (analysis__V_32_32 == (MR_Integer) 0);
#line 332 "analysis.m"
                                        analysis__succeeded = !(analysis__succeeded);
#line 332 "analysis.m"
                                        if (analysis__succeeded)
#line 332 "analysis.m"
                                          *analysis__HeadVar__1_1 = analysis__V_32_32;
#line 332 "analysis.m"
                                        else
#line 332 "analysis.m"
                                          {
#line 332 "analysis.m"
                                            {
#line 332 "analysis.m"
                                              mercury__builtin__compare_3_p_0((MR_Word) &analysis_scalar_common_2[9], analysis__HeadVar__1_1, ((MR_Box) (analysis__V_13_13)), ((MR_Box) (analysis__V_23_23)));
#line 332 "analysis.m"
                                              return;
                                            }
#line 332 "analysis.m"
                                          }
#line 332 "analysis.m"
                                      }
#line 332 "analysis.m"
                                  }
#line 332 "analysis.m"
                              }
#line 332 "analysis.m"
                          }
#line 332 "analysis.m"
                      }
#line 332 "analysis.m"
                  }
#line 332 "analysis.m"
              }
#line 332 "analysis.m"
          }
#line 332 "analysis.m"
      }
#line 332 "analysis.m"
  }
#line 332 "analysis.m"
}

#line 332 "analysis.m"
MR_bool MR_CALL 
analysis____Unify____analysis_info_0_0(
#line 332 "analysis.m"
  MR_Word analysis__HeadVar__1_1,
#line 332 "analysis.m"
  MR_Word analysis__HeadVar__2_2)
#line 332 "analysis.m"
{
#line 332 "analysis.m"
  {
#line 332 "analysis.m"
    MR_bool analysis__succeeded;
#line 332 "analysis.m"
    MR_Integer analysis__CastX_23 = (MR_Integer) analysis__HeadVar__1_1;
#line 332 "analysis.m"
    MR_Integer analysis__CastY_24 = (MR_Integer) analysis__HeadVar__2_2;

#line 332 "analysis.m"
    analysis__succeeded = (analysis__CastX_23 == analysis__CastY_24);
#line 332 "analysis.m"
    if (analysis__succeeded)
#line 332 "analysis.m"
      analysis__succeeded = MR_TRUE;
#line 332 "analysis.m"
    else
#line 332 "analysis.m"
      {
#line 332 "analysis.m"
        MR_Word analysis__TypeClassInfo_for_compiler_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__1_1, (MR_Integer) 0)));
#line 332 "analysis.m"
        MR_Word analysis__TypeClassInfo_for_compiler_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 0)));
#line 332 "analysis.m"
        MR_Word analysis__TypeInfo_28_28;
#line 332 "analysis.m"
        MR_Word analysis__TypeInfo_29_29;
#line 332 "analysis.m"
        MR_Word analysis__TypeInfo_31_31;
#line 332 "analysis.m"
        MR_Word analysis__TypeInfo_32_32;
#line 332 "analysis.m"
        MR_Word analysis__TypeInfo_33_33;
#line 332 "analysis.m"
        MR_Word analysis__TypeInfo_34_34;
#line 332 "analysis.m"
        MR_Word analysis__TypeInfo_35_35;
#line 332 "analysis.m"
        MR_Word analysis__TypeInfo_36_36;
#line 332 "analysis.m"
        MR_Word analysis__TypeInfo_37_37;
#line 332 "analysis.m"
        MR_Box analysis__V_3_3 = (MR_hl_field(MR_mktag(0), analysis__HeadVar__1_1, (MR_Integer) 1));
#line 332 "analysis.m"
        MR_Word analysis__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__1_1, (MR_Integer) 2)));
#line 332 "analysis.m"
        MR_Word analysis__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__1_1, (MR_Integer) 3)));
#line 332 "analysis.m"
        MR_Word analysis__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__1_1, (MR_Integer) 4)));
#line 332 "analysis.m"
        MR_Word analysis__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__1_1, (MR_Integer) 5)));
#line 332 "analysis.m"
        MR_Word analysis__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__1_1, (MR_Integer) 6)));
#line 332 "analysis.m"
        MR_Word analysis__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__1_1, (MR_Integer) 7)));
#line 332 "analysis.m"
        MR_Word analysis__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__1_1, (MR_Integer) 8)));
#line 332 "analysis.m"
        MR_Word analysis__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__1_1, (MR_Integer) 9)));
#line 332 "analysis.m"
        MR_Word analysis__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__1_1, (MR_Integer) 10)));
#line 332 "analysis.m"
        MR_Box analysis__V_13_13 = (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 1));
#line 332 "analysis.m"
        MR_Word analysis__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 2)));
#line 332 "analysis.m"
        MR_Word analysis__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 3)));
#line 332 "analysis.m"
        MR_Word analysis__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 4)));
#line 332 "analysis.m"
        MR_Word analysis__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 5)));
#line 332 "analysis.m"
        MR_Word analysis__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 6)));
#line 332 "analysis.m"
        MR_Word analysis__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 7)));
#line 332 "analysis.m"
        MR_Word analysis__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 8)));
#line 332 "analysis.m"
        MR_Word analysis__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 9)));
#line 332 "analysis.m"
        MR_Word analysis__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 10)));

#line 332 "analysis.m"
        {
#line 332 "analysis.m"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_compiler_25, (MR_Integer) 1, &analysis__TypeInfo_28_28);
        }
#line 332 "analysis.m"
        {
#line 332 "analysis.m"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_compiler_26, (MR_Integer) 1, &analysis__TypeInfo_29_29);
        }
#line 332 "analysis.m"
        {
#line 332 "analysis.m"
          analysis__succeeded = mercury__private_builtin__typed_unify_2_p_0(analysis__TypeInfo_28_28, analysis__TypeInfo_29_29, analysis__V_3_3, analysis__V_13_13);
        }
#line 332 "analysis.m"
        if (analysis__succeeded)
#line 332 "analysis.m"
          {
#line 332 "analysis.m"
            {
#line 332 "analysis.m"
              analysis__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(analysis__V_4_4, analysis__V_14_14);
            }
#line 332 "analysis.m"
            if (analysis__succeeded)
#line 332 "analysis.m"
              {
#line 332 "analysis.m"
                analysis__succeeded = (analysis__V_5_5 == analysis__V_15_15);
#line 332 "analysis.m"
                if (analysis__succeeded)
#line 332 "analysis.m"
                  {
#line 8098 "analysis.c"
                    analysis__TypeInfo_31_31 = (MR_Word) &analysis_scalar_common_1[3];
#line 332 "analysis.m"
                    {
#line 332 "analysis.m"
                      analysis__succeeded = mercury__builtin__unify_2_p_0(analysis__TypeInfo_31_31, ((MR_Box) (analysis__V_6_6)), ((MR_Box) (analysis__V_16_16)));
                    }
#line 332 "analysis.m"
                    if (analysis__succeeded)
#line 332 "analysis.m"
                      {
#line 8109 "analysis.c"
                        analysis__TypeInfo_32_32 = (MR_Word) &analysis_scalar_common_2[6];
#line 332 "analysis.m"
                        {
#line 332 "analysis.m"
                          analysis__succeeded = mercury__builtin__unify_2_p_0(analysis__TypeInfo_32_32, ((MR_Box) (analysis__V_7_7)), ((MR_Box) (analysis__V_17_17)));
                        }
#line 332 "analysis.m"
                        if (analysis__succeeded)
#line 332 "analysis.m"
                          {
#line 8120 "analysis.c"
                            analysis__TypeInfo_33_33 = (MR_Word) &analysis_scalar_common_2[7];
#line 332 "analysis.m"
                            {
#line 332 "analysis.m"
                              analysis__succeeded = mercury__builtin__unify_2_p_0(analysis__TypeInfo_33_33, ((MR_Box) (analysis__V_8_8)), ((MR_Box) (analysis__V_18_18)));
                            }
#line 332 "analysis.m"
                            if (analysis__succeeded)
#line 332 "analysis.m"
                              {
#line 8131 "analysis.c"
                                analysis__TypeInfo_34_34 = (MR_Word) &analysis_scalar_common_2[8];
#line 332 "analysis.m"
                                {
#line 332 "analysis.m"
                                  analysis__succeeded = mercury__builtin__unify_2_p_0(analysis__TypeInfo_34_34, ((MR_Box) (analysis__V_9_9)), ((MR_Box) (analysis__V_19_19)));
                                }
#line 332 "analysis.m"
                                if (analysis__succeeded)
#line 332 "analysis.m"
                                  {
#line 8142 "analysis.c"
                                    analysis__TypeInfo_35_35 = (MR_Word) &analysis_scalar_common_2[3];
#line 332 "analysis.m"
                                    {
#line 332 "analysis.m"
                                      analysis__succeeded = mercury__builtin__unify_2_p_0(analysis__TypeInfo_35_35, ((MR_Box) (analysis__V_10_10)), ((MR_Box) (analysis__V_20_20)));
                                    }
#line 332 "analysis.m"
                                    if (analysis__succeeded)
#line 332 "analysis.m"
                                      {
#line 8153 "analysis.c"
                                        analysis__TypeInfo_36_36 = (MR_Word) &analysis_scalar_common_2[9];
#line 332 "analysis.m"
                                        {
#line 332 "analysis.m"
                                          analysis__succeeded = mercury__builtin__unify_2_p_0(analysis__TypeInfo_36_36, ((MR_Box) (analysis__V_11_11)), ((MR_Box) (analysis__V_21_21)));
                                        }
#line 332 "analysis.m"
                                        if (analysis__succeeded)
#line 332 "analysis.m"
                                          {
#line 8164 "analysis.c"
                                            analysis__TypeInfo_37_37 = (MR_Word) &analysis_scalar_common_2[9];
#line 332 "analysis.m"
                                            {
#line 332 "analysis.m"
                                              return analysis__succeeded = mercury__builtin__unify_2_p_0(analysis__TypeInfo_37_37, ((MR_Box) (analysis__V_12_12)), ((MR_Box) (analysis__V_22_22)));
                                            }
#line 332 "analysis.m"
                                          }
#line 332 "analysis.m"
                                      }
#line 332 "analysis.m"
                                  }
#line 332 "analysis.m"
                              }
#line 332 "analysis.m"
                          }
#line 332 "analysis.m"
                      }
#line 332 "analysis.m"
                  }
#line 332 "analysis.m"
              }
#line 332 "analysis.m"
          }
#line 332 "analysis.m"
      }
#line 332 "analysis.m"
    return analysis__succeeded;
#line 332 "analysis.m"
  }
#line 332 "analysis.m"
}

#line 1385 "analysis.m"
void MR_CALL 
analysis__debug_msg_3_p_0(
#line 1385 "analysis.m"
  MR_Word analysis__P_4)
#line 1385 "analysis.m"
{
#line 1388 "analysis.m"
  {
#line 1388 "analysis.m"
    MR_bool analysis__succeeded;
#line 1388 "analysis.m"
    MR_Word analysis__Debug_6;

#line 1380 "analysis.m"
{
#define MR_PROC_LABEL analysis__debug_msg_3_p_0


		{
#line 1380 "analysis.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&analysis__mutable_variable_debug_analysis_lock,
                    "analysis__mutable_variable_debug_analysis_lock");
#endif

#line 8224 "analysis.c"

		;}
#undef MR_PROC_LABEL
#line 1380 "analysis.m"
}
#line 1380 "analysis.m"
{
#define MR_PROC_LABEL analysis__debug_msg_3_p_0

	MR_Word X;

		{
#line 1380 "analysis.m"
X = analysis__mutable_variable_debug_analysis;

#line 8240 "analysis.c"

		;}
#undef MR_PROC_LABEL
	 analysis__Debug_6  = X;
#line 1380 "analysis.m"
}
#line 1380 "analysis.m"
{
#define MR_PROC_LABEL analysis__debug_msg_3_p_0


		{
#line 1380 "analysis.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&analysis__mutable_variable_debug_analysis_lock,
                    "analysis__mutable_variable_debug_analysis_lock");
#endif

#line 8259 "analysis.c"

		;}
#undef MR_PROC_LABEL
#line 1380 "analysis.m"
}
#line 1393 "analysis.m"
#line 1393 "analysis.m"
    switch (analysis__Debug_6) {
#line 1393 "analysis.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1393 "analysis.m"
      case (MR_Integer) 0:
#line 1394 "analysis.m"
        {
#line 1394 "analysis.m"
        }
#line 1393 "analysis.m"
        break;
#line 1393 "analysis.m"
      case (MR_Integer) 1:
#line 1392 "analysis.m"
        {
#line 1392 "analysis.m"
          void MR_CALL (* analysis__func_0)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), analysis__P_4, (MR_Integer) 1)));
#line 1392 "analysis.m"
          MR_Box analysis__conv1_STATE_VARIABLE_IO_8;

#line 1392 "analysis.m"
          {
#line 1392 "analysis.m"
            analysis__func_0(((MR_Box) analysis__P_4), ((MR_Box) ((MR_Integer) 0)), &analysis__conv1_STATE_VARIABLE_IO_8);
          }
#line 1392 "analysis.m"
        }
#line 1393 "analysis.m"
        break;
#line 1393 "analysis.m"
    }
#line 1388 "analysis.m"
  }
#line 1385 "analysis.m"
}

#line 1380 "analysis.m"
void MR_CALL 
analysis__set_debug_analysis_3_p_0(
#line 1380 "analysis.m"
  MR_Word analysis__X_4)
#line 1380 "analysis.m"
{
#line 1380 "analysis.m"
  {
#line 1380 "analysis.m"
    MR_bool analysis__succeeded;

#line 1380 "analysis.m"
{
#define MR_PROC_LABEL analysis__set_debug_analysis_3_p_0


		{
#line 1380 "analysis.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&analysis__mutable_variable_debug_analysis_lock,
                    "analysis__mutable_variable_debug_analysis_lock");
#endif

#line 8327 "analysis.c"

		;}
#undef MR_PROC_LABEL
#line 1380 "analysis.m"
}
#line 1380 "analysis.m"
{
#define MR_PROC_LABEL analysis__set_debug_analysis_3_p_0

	MR_Word X;

	X =  analysis__X_4 ;
		{
#line 1380 "analysis.m"
analysis__mutable_variable_debug_analysis = X;

#line 8344 "analysis.c"

		;}
#undef MR_PROC_LABEL
#line 1380 "analysis.m"
}
#line 1380 "analysis.m"
{
#define MR_PROC_LABEL analysis__set_debug_analysis_3_p_0


		{
#line 1380 "analysis.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&analysis__mutable_variable_debug_analysis_lock,
                    "analysis__mutable_variable_debug_analysis_lock");
#endif

#line 8362 "analysis.c"

		;}
#undef MR_PROC_LABEL
#line 1380 "analysis.m"
}
#line 1380 "analysis.m"
  }
#line 1380 "analysis.m"
}

#line 1380 "analysis.m"
void MR_CALL 
analysis__get_debug_analysis_3_p_0(
#line 1380 "analysis.m"
  MR_Word * analysis__X_4)
#line 1380 "analysis.m"
{
#line 1380 "analysis.m"
  {
#line 1380 "analysis.m"
    MR_bool analysis__succeeded;

#line 1380 "analysis.m"
{
#define MR_PROC_LABEL analysis__get_debug_analysis_3_p_0


		{
#line 1380 "analysis.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&analysis__mutable_variable_debug_analysis_lock,
                    "analysis__mutable_variable_debug_analysis_lock");
#endif

#line 8397 "analysis.c"

		;}
#undef MR_PROC_LABEL
#line 1380 "analysis.m"
}
#line 1380 "analysis.m"
{
#define MR_PROC_LABEL analysis__get_debug_analysis_3_p_0

	MR_Word X;

		{
#line 1380 "analysis.m"
X = analysis__mutable_variable_debug_analysis;

#line 8413 "analysis.c"

		;}
#undef MR_PROC_LABEL
	 *analysis__X_4  = X;
#line 1380 "analysis.m"
}
#line 1380 "analysis.m"
{
#define MR_PROC_LABEL analysis__get_debug_analysis_3_p_0


		{
#line 1380 "analysis.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&analysis__mutable_variable_debug_analysis_lock,
                    "analysis__mutable_variable_debug_analysis_lock");
#endif

#line 8432 "analysis.c"

		;}
#undef MR_PROC_LABEL
#line 1380 "analysis.m"
}
#line 1380 "analysis.m"
  }
#line 1380 "analysis.m"
}

#line 1380 "analysis.m"
void MR_CALL 
analysis__set_debug_analysis_1_p_0(
#line 1380 "analysis.m"
  MR_Word analysis__X_2)
#line 1380 "analysis.m"
{
#line 1380 "analysis.m"
  {
#line 1380 "analysis.m"
    MR_bool analysis__succeeded;

#line 1380 "analysis.m"
{
#define MR_PROC_LABEL analysis__set_debug_analysis_1_p_0


		{
#line 1380 "analysis.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&analysis__mutable_variable_debug_analysis_lock,
                    "analysis__mutable_variable_debug_analysis_lock");
#endif

#line 8467 "analysis.c"

		;}
#undef MR_PROC_LABEL
#line 1380 "analysis.m"
}
#line 1380 "analysis.m"
{
#define MR_PROC_LABEL analysis__set_debug_analysis_1_p_0

	MR_Word X;

	X =  analysis__X_2 ;
		{
#line 1380 "analysis.m"
analysis__mutable_variable_debug_analysis = X;

#line 8484 "analysis.c"

		;}
#undef MR_PROC_LABEL
#line 1380 "analysis.m"
}
#line 1380 "analysis.m"
{
#define MR_PROC_LABEL analysis__set_debug_analysis_1_p_0


		{
#line 1380 "analysis.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&analysis__mutable_variable_debug_analysis_lock,
                    "analysis__mutable_variable_debug_analysis_lock");
#endif

#line 8502 "analysis.c"

		;}
#undef MR_PROC_LABEL
#line 1380 "analysis.m"
}
#line 1380 "analysis.m"
  }
#line 1380 "analysis.m"
}

#line 1380 "analysis.m"
void MR_CALL 
analysis__get_debug_analysis_1_p_0(
#line 1380 "analysis.m"
  MR_Word * analysis__X_2)
#line 1380 "analysis.m"
{
#line 1380 "analysis.m"
  {
#line 1380 "analysis.m"
    MR_bool analysis__succeeded;

#line 1380 "analysis.m"
{
#define MR_PROC_LABEL analysis__get_debug_analysis_1_p_0


		{
#line 1380 "analysis.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&analysis__mutable_variable_debug_analysis_lock,
                    "analysis__mutable_variable_debug_analysis_lock");
#endif

#line 8537 "analysis.c"

		;}
#undef MR_PROC_LABEL
#line 1380 "analysis.m"
}
#line 1380 "analysis.m"
{
#define MR_PROC_LABEL analysis__get_debug_analysis_1_p_0

	MR_Word X;

		{
#line 1380 "analysis.m"
X = analysis__mutable_variable_debug_analysis;

#line 8553 "analysis.c"

		;}
#undef MR_PROC_LABEL
	 *analysis__X_2  = X;
#line 1380 "analysis.m"
}
#line 1380 "analysis.m"
{
#define MR_PROC_LABEL analysis__get_debug_analysis_1_p_0


		{
#line 1380 "analysis.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&analysis__mutable_variable_debug_analysis_lock,
                    "analysis__mutable_variable_debug_analysis_lock");
#endif

#line 8572 "analysis.c"

		;}
#undef MR_PROC_LABEL
#line 1380 "analysis.m"
}
#line 1380 "analysis.m"
  }
#line 1380 "analysis.m"
}

#line 1380 "analysis.m"
void MR_CALL 
analysis__unsafe_set_debug_analysis_1_p_0(
#line 1380 "analysis.m"
  MR_Word analysis__X_1)
#line 1380 "analysis.m"
{
#line 1380 "analysis.m"
  {
#line 1380 "analysis.m"
    MR_bool analysis__succeeded;

#line 1380 "analysis.m"
{
#define MR_PROC_LABEL analysis__unsafe_set_debug_analysis_1_p_0

	MR_Word X;

	X =  analysis__X_1 ;
		{
#line 1380 "analysis.m"
analysis__mutable_variable_debug_analysis = X;

#line 8606 "analysis.c"

		;}
#undef MR_PROC_LABEL
#line 1380 "analysis.m"
}
#line 1380 "analysis.m"
  }
#line 1380 "analysis.m"
}

#line 1380 "analysis.m"
void MR_CALL 
analysis__unsafe_get_debug_analysis_1_p_0(
#line 1380 "analysis.m"
  MR_Word * analysis__X_1)
#line 1380 "analysis.m"
{
#line 1380 "analysis.m"
  {
#line 1380 "analysis.m"
    MR_bool analysis__succeeded;

#line 1380 "analysis.m"
{
#define MR_PROC_LABEL analysis__unsafe_get_debug_analysis_1_p_0

	MR_Word X;

		{
#line 1380 "analysis.m"
X = analysis__mutable_variable_debug_analysis;

#line 8639 "analysis.c"

		;}
#undef MR_PROC_LABEL
	 *analysis__X_1  = X;
#line 1380 "analysis.m"
}
#line 1380 "analysis.m"
  }
#line 1380 "analysis.m"
}

#line 1380 "analysis.m"
void MR_CALL 
analysis__unlock_debug_analysis_0_p_0(void)
#line 1380 "analysis.m"
{
#line 1380 "analysis.m"
  {
#line 1380 "analysis.m"
    MR_bool analysis__succeeded;

#line 1380 "analysis.m"
{
#define MR_PROC_LABEL analysis__unlock_debug_analysis_0_p_0


		{
#line 1380 "analysis.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&analysis__mutable_variable_debug_analysis_lock,
                    "analysis__mutable_variable_debug_analysis_lock");
#endif

#line 8673 "analysis.c"

		;}
#undef MR_PROC_LABEL
#line 1380 "analysis.m"
}
#line 1380 "analysis.m"
  }
#line 1380 "analysis.m"
}

#line 1380 "analysis.m"
void MR_CALL 
analysis__lock_debug_analysis_0_p_0(void)
#line 1380 "analysis.m"
{
#line 1380 "analysis.m"
  {
#line 1380 "analysis.m"
    MR_bool analysis__succeeded;

#line 1380 "analysis.m"
{
#define MR_PROC_LABEL analysis__lock_debug_analysis_0_p_0


		{
#line 1380 "analysis.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&analysis__mutable_variable_debug_analysis_lock,
                    "analysis__mutable_variable_debug_analysis_lock");
#endif

#line 8706 "analysis.c"

		;}
#undef MR_PROC_LABEL
#line 1380 "analysis.m"
}
#line 1380 "analysis.m"
  }
#line 1380 "analysis.m"
}

#line 1380 "analysis.m"
void MR_CALL 
analysis__initialise_mutable_debug_analysis_0_p_0(void)
#line 1380 "analysis.m"
{
#line 1380 "analysis.m"
  {
#line 1380 "analysis.m"
    MR_bool analysis__succeeded;

#line 1380 "analysis.m"
{
#define MR_PROC_LABEL analysis__initialise_mutable_debug_analysis_0_p_0


		{
#line 1380 "analysis.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&analysis__mutable_variable_debug_analysis_lock, MR_MUTEX_ATTR);
#endif

#line 8738 "analysis.c"

		;}
#undef MR_PROC_LABEL
#line 1380 "analysis.m"
}
#line 1380 "analysis.m"
{
#define MR_PROC_LABEL analysis__initialise_mutable_debug_analysis_0_p_0


		{
#line 1380 "analysis.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&analysis__mutable_variable_debug_analysis_lock,
                    "analysis__mutable_variable_debug_analysis_lock");
#endif

#line 8756 "analysis.c"

		;}
#undef MR_PROC_LABEL
#line 1380 "analysis.m"
}
#line 1380 "analysis.m"
{
#define MR_PROC_LABEL analysis__initialise_mutable_debug_analysis_0_p_0

	MR_Word X;

	X =  (MR_Integer) 0 ;
		{
#line 1380 "analysis.m"
analysis__mutable_variable_debug_analysis = X;

#line 8773 "analysis.c"

		;}
#undef MR_PROC_LABEL
#line 1380 "analysis.m"
}
#line 1380 "analysis.m"
{
#define MR_PROC_LABEL analysis__initialise_mutable_debug_analysis_0_p_0


		{
#line 1380 "analysis.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&analysis__mutable_variable_debug_analysis_lock,
                    "analysis__mutable_variable_debug_analysis_lock");
#endif

#line 8791 "analysis.c"

		;}
#undef MR_PROC_LABEL
#line 1380 "analysis.m"
}
#line 1380 "analysis.m"
  }
#line 1380 "analysis.m"
}

#line 1380 "analysis.m"
void MR_CALL 
analysis__pre_initialise_mutable_debug_analysis_0_p_0(void)
#line 1380 "analysis.m"
{
#line 1380 "analysis.m"
  {
#line 1380 "analysis.m"
    MR_bool analysis__succeeded;

#line 1380 "analysis.m"
{
#define MR_PROC_LABEL analysis__pre_initialise_mutable_debug_analysis_0_p_0


		{
#line 1380 "analysis.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&analysis__mutable_variable_debug_analysis_lock, MR_MUTEX_ATTR);
#endif

#line 8823 "analysis.c"

		;}
#undef MR_PROC_LABEL
#line 1380 "analysis.m"
}
#line 1380 "analysis.m"
  }
#line 1380 "analysis.m"
}

#line 1373 "analysis.m"
MR_Word MR_CALL 
analysis__lub_result_statuses_4_2_f_0(
#line 1373 "analysis.m"
  MR_Word analysis__Result_4,
#line 1373 "analysis.m"
  MR_Word analysis__Acc_5)
#line 1373 "analysis.m"
{
#line 1376 "analysis.m"
  {
#line 1376 "analysis.m"
    MR_bool analysis__succeeded;
#line 1376 "analysis.m"
    MR_Word analysis__HeadVar__3_3;
#line 1376 "analysis.m"
    MR_Word analysis__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Result_4, (MR_Integer) 3)));
#line 1376 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_analysis_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Result_4, (MR_Integer) 0)));
#line 1376 "analysis.m"
    MR_Box analysis__V_7_7 = (MR_hl_field(MR_mktag(0), analysis__Result_4, (MR_Integer) 1));
#line 1376 "analysis.m"
    MR_Box analysis__V_8_8 = (MR_hl_field(MR_mktag(0), analysis__Result_4, (MR_Integer) 2));

#line 1376 "analysis.m"
    {
#line 1376 "analysis.m"
      return analysis__HeadVar__3_3 = analysis__lub_2_f_0(analysis__V_6_6, analysis__Acc_5);
    }
#line 1376 "analysis.m"
    return analysis__HeadVar__3_3;
#line 1376 "analysis.m"
  }
#line 1373 "analysis.m"
}

#line 1367 "analysis.m"
MR_Word MR_CALL 
analysis__lub_result_statuses_3_3_f_0(
#line 1367 "analysis.m"
  MR_Word analysis___FuncId_5,
#line 1367 "analysis.m"
  MR_Word analysis__Results_6,
#line 1367 "analysis.m"
  MR_Word analysis__Acc_7)
#line 1367 "analysis.m"
{
#line 1370 "analysis.m"
  {
#line 1370 "analysis.m"
    MR_bool analysis__succeeded;
#line 1370 "analysis.m"
    MR_Word analysis__HeadVar__4_4;

#line 1370 "analysis.m"
    {
#line 1370 "analysis.m"
      return analysis__HeadVar__4_4 = analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_108_117_98_95_114_101_115_117_108_116_95_115_116_97_116_117_115_101_115_95_51_95_95_91_49_93_95_48_3_f_0(analysis__Results_6, analysis__Acc_7);
    }
#line 1370 "analysis.m"
    return analysis__HeadVar__4_4;
#line 1370 "analysis.m"
  }
#line 1367 "analysis.m"
}

#line 1360 "analysis.m"
MR_Word MR_CALL 
analysis__lub_result_statuses_2_3_f_0(
#line 1360 "analysis.m"
  MR_String analysis___AnalysisName_5,
#line 1360 "analysis.m"
  MR_Word analysis__FuncMap_6,
#line 1360 "analysis.m"
  MR_Word analysis__Acc_7)
#line 1360 "analysis.m"
{
#line 1364 "analysis.m"
  {
#line 1364 "analysis.m"
    MR_bool analysis__succeeded;
#line 1364 "analysis.m"
    MR_Word analysis__HeadVar__4_4;

#line 1364 "analysis.m"
    {
#line 1364 "analysis.m"
      return analysis__HeadVar__4_4 = analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_108_117_98_95_114_101_115_117_108_116_95_115_116_97_116_117_115_101_115_95_50_95_95_91_49_93_95_48_3_f_0(analysis__FuncMap_6, analysis__Acc_7);
    }
#line 1364 "analysis.m"
    return analysis__HeadVar__4_4;
#line 1364 "analysis.m"
  }
#line 1360 "analysis.m"
}

#line 1358 "analysis.m"
static MR_Box MR_CALL 
analysis__lub_result_statuses_1_f_0_1(
#line 1358 "analysis.m"
  MR_Box analysis__closure_arg,
#line 1358 "analysis.m"
  MR_Box analysis__wrapper_arg_1,
#line 1358 "analysis.m"
  MR_Box analysis__wrapper_arg_2,
#line 1358 "analysis.m"
  MR_Box analysis__wrapper_arg_3)
#line 1358 "analysis.m"
{
#line 1358 "analysis.m"
  {
#line 1358 "analysis.m"
    MR_Box analysis__wrapper_arg_4;
#line 1358 "analysis.m"
    MR_Box analysis__closure = analysis__closure_arg;
#line 1358 "analysis.m"
    MR_Word analysis__conv0_HeadVar__4_4;

#line 1358 "analysis.m"
    {
#line 1358 "analysis.m"
      analysis__conv0_HeadVar__4_4 = analysis__lub_result_statuses_2_3_f_0(((MR_String) analysis__wrapper_arg_1), ((MR_Word) analysis__wrapper_arg_2), ((MR_Word) analysis__wrapper_arg_3));
    }
#line 1358 "analysis.m"
    analysis__wrapper_arg_4 = ((MR_Box) (analysis__conv0_HeadVar__4_4));
#line 1358 "analysis.m"
    return analysis__wrapper_arg_4;
#line 1358 "analysis.m"
  }
#line 1358 "analysis.m"
}

#line 1354 "analysis.m"
MR_Word MR_CALL 
analysis__lub_result_statuses_1_f_0(
#line 1354 "analysis.m"
  MR_Word analysis__ModuleMap_3)
#line 1354 "analysis.m"
{
#line 1357 "analysis.m"
  {
#line 1357 "analysis.m"
    MR_bool analysis__succeeded;
#line 1357 "analysis.m"
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
#line 1357 "analysis.m"
    return analysis__HeadVar__2_2;
#line 1357 "analysis.m"
  }
#line 1354 "analysis.m"
}

#line 1321 "analysis.m"
void MR_CALL 
analysis__maybe_write_module_imdg_5_p_0(
#line 1321 "analysis.m"
  MR_Word analysis__Info_6,
#line 1321 "analysis.m"
  MR_Word analysis__Globals_7,
#line 1321 "analysis.m"
  MR_Word analysis__ModuleName_8)
#line 1321 "analysis.m"
{
#line 1327 "analysis.m"
  {
#line 1327 "analysis.m"
    MR_bool analysis__succeeded;
#line 1327 "analysis.m"
    MR_Word analysis__ModuleEntries_10;
#line 1325 "analysis.m"
    MR_Word analysis__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 9)));
#line 1325 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_compiler_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 0)));
#line 1325 "analysis.m"
    MR_Box analysis__V_15_15 = (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 1));
#line 1325 "analysis.m"
    MR_Word analysis__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 2)));
#line 1325 "analysis.m"
    MR_Word analysis__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 3)));
#line 1325 "analysis.m"
    MR_Word analysis__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 4)));
#line 1325 "analysis.m"
    MR_Word analysis__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 5)));
#line 1325 "analysis.m"
    MR_Word analysis__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 6)));
#line 1325 "analysis.m"
    MR_Word analysis__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 7)));
#line 1325 "analysis.m"
    MR_Word analysis__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 8)));
#line 1325 "analysis.m"
    MR_Word analysis__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 10)));
#line 1325 "analysis.m"
    MR_Box analysis__conv0_ModuleEntries_10;

#line 1325 "analysis.m"
    {
#line 1325 "analysis.m"
      analysis__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &analysis_scalar_common_2[5], analysis__V_13_13, ((MR_Box) (analysis__ModuleName_8)), &analysis__conv0_ModuleEntries_10);
    }
#line 1325 "analysis.m"
    if (analysis__succeeded)
#line 1325 "analysis.m"
      {
#line 1325 "analysis.m"
        analysis__ModuleEntries_10 = ((MR_Word) analysis__conv0_ModuleEntries_10);
#line 1325 "analysis.m"
        analysis__succeeded = MR_TRUE;
#line 1325 "analysis.m"
      }
#line 1327 "analysis.m"
    if (analysis__succeeded)
#line 1326 "analysis.m"
      {
#line 1326 "analysis.m"
        analysis__file__write_module_imdg_6_p_0(analysis__Info_6, analysis__Globals_7, analysis__ModuleName_8, analysis__ModuleEntries_10);
#line 1326 "analysis.m"
        return;
      }
#line 1327 "analysis.m"
    else
#line 1327 "analysis.m"
      {
#line 1327 "analysis.m"
      }
#line 1327 "analysis.m"
  }
#line 1321 "analysis.m"
}

#line 1310 "analysis.m"
void MR_CALL 
analysis__maybe_write_module_requests_5_p_0(
#line 1310 "analysis.m"
  MR_Word analysis__Info_6,
#line 1310 "analysis.m"
  MR_Word analysis__Globals_7,
#line 1310 "analysis.m"
  MR_Word analysis__ModuleName_8)
#line 1310 "analysis.m"
{
#line 1317 "analysis.m"
  {
#line 1317 "analysis.m"
    MR_bool analysis__succeeded;
#line 1317 "analysis.m"
    MR_Word analysis__Requests_10;
#line 1314 "analysis.m"
    MR_Word analysis__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 5)));
#line 1314 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_compiler_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 0)));
#line 1314 "analysis.m"
    MR_Box analysis__V_15_15 = (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 1));
#line 1314 "analysis.m"
    MR_Word analysis__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 2)));
#line 1314 "analysis.m"
    MR_Word analysis__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 3)));
#line 1314 "analysis.m"
    MR_Word analysis__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 4)));
#line 1314 "analysis.m"
    MR_Word analysis__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 6)));
#line 1314 "analysis.m"
    MR_Word analysis__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 7)));
#line 1314 "analysis.m"
    MR_Word analysis__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 8)));
#line 1314 "analysis.m"
    MR_Word analysis__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 9)));
#line 1314 "analysis.m"
    MR_Word analysis__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 10)));
#line 1314 "analysis.m"
    MR_Box analysis__conv0_Requests_10;

#line 1314 "analysis.m"
    {
#line 1314 "analysis.m"
      analysis__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &analysis_scalar_common_2[1], analysis__V_13_13, ((MR_Box) (analysis__ModuleName_8)), &analysis__conv0_Requests_10);
    }
#line 1314 "analysis.m"
    if (analysis__succeeded)
#line 1314 "analysis.m"
      {
#line 1314 "analysis.m"
        analysis__Requests_10 = ((MR_Word) analysis__conv0_Requests_10);
#line 1314 "analysis.m"
        analysis__succeeded = MR_TRUE;
#line 1314 "analysis.m"
      }
#line 1317 "analysis.m"
    if (analysis__succeeded)
#line 1315 "analysis.m"
      {
#line 1315 "analysis.m"
        analysis__file__write_module_analysis_requests_6_p_0(analysis__Info_6, analysis__Globals_7, analysis__ModuleName_8, analysis__Requests_10);
#line 1315 "analysis.m"
        return;
      }
#line 1317 "analysis.m"
    else
#line 1317 "analysis.m"
      {
#line 1317 "analysis.m"
      }
#line 1317 "analysis.m"
  }
#line 1310 "analysis.m"
}

#line 1298 "analysis.m"
void MR_CALL 
analysis__maybe_write_module_overall_status_5_p_0(
#line 1298 "analysis.m"
  MR_Word analysis__Info_6,
#line 1298 "analysis.m"
  MR_Word analysis__Globals_7,
#line 1298 "analysis.m"
  MR_Word analysis__ModuleName_8)
#line 1298 "analysis.m"
{
#line 1304 "analysis.m"
  {
#line 1304 "analysis.m"
    MR_bool analysis__succeeded;
#line 1304 "analysis.m"
    MR_Word analysis__Status_10;
#line 1302 "analysis.m"
    MR_Word analysis__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 6)));
#line 1302 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_compiler_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 0)));
#line 1302 "analysis.m"
    MR_Box analysis__V_15_15 = (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 1));
#line 1302 "analysis.m"
    MR_Word analysis__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 2)));
#line 1302 "analysis.m"
    MR_Word analysis__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 3)));
#line 1302 "analysis.m"
    MR_Word analysis__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 4)));
#line 1302 "analysis.m"
    MR_Word analysis__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 5)));
#line 1302 "analysis.m"
    MR_Word analysis__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 7)));
#line 1302 "analysis.m"
    MR_Word analysis__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 8)));
#line 1302 "analysis.m"
    MR_Word analysis__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 9)));
#line 1302 "analysis.m"
    MR_Word analysis__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 10)));
#line 1302 "analysis.m"
    MR_Box analysis__conv0_Status_10;

#line 1302 "analysis.m"
    {
#line 1302 "analysis.m"
      analysis__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &analysis__analysis__type_ctor_info_analysis_status_0, analysis__V_13_13, ((MR_Box) (analysis__ModuleName_8)), &analysis__conv0_Status_10);
    }
#line 1302 "analysis.m"
    if (analysis__succeeded)
#line 1302 "analysis.m"
      {
#line 1302 "analysis.m"
        analysis__Status_10 = ((MR_Word) analysis__conv0_Status_10);
#line 1302 "analysis.m"
        analysis__succeeded = MR_TRUE;
#line 1302 "analysis.m"
      }
#line 1304 "analysis.m"
    if (analysis__succeeded)
#line 1303 "analysis.m"
      {
#line 1303 "analysis.m"
        analysis__file__write_module_overall_status_6_p_0(analysis__Info_6, analysis__Globals_7, analysis__ModuleName_8, analysis__Status_10);
#line 1303 "analysis.m"
        return;
      }
#line 1304 "analysis.m"
    else
#line 1304 "analysis.m"
      {
#line 1304 "analysis.m"
      }
#line 1304 "analysis.m"
  }
#line 1298 "analysis.m"
}

#line 1289 "analysis.m"
void MR_CALL 
analysis__load_module_imdg_6_p_0(
#line 1289 "analysis.m"
  MR_Word analysis__Globals_7,
#line 1289 "analysis.m"
  MR_Word analysis__ModuleName_8,
#line 1289 "analysis.m"
  MR_Word analysis__STATE_VARIABLE_Info_0_14,
#line 1289 "analysis.m"
  MR_Word * analysis__STATE_VARIABLE_Info_15)
#line 1289 "analysis.m"
{
#line 1292 "analysis.m"
  {
#line 1292 "analysis.m"
    MR_bool analysis__succeeded;
#line 1292 "analysis.m"
    MR_Word analysis__IMDG_11;
#line 1292 "analysis.m"
    MR_Word analysis__Map0_12;
#line 1292 "analysis.m"
    MR_Word analysis__Map_13;
#line 1294 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_compiler_39;
#line 1294 "analysis.m"
    MR_Box analysis__V_20_20;
#line 1294 "analysis.m"
    MR_Word analysis__V_21_21;
#line 1294 "analysis.m"
    MR_Word analysis__V_22_22;
#line 1294 "analysis.m"
    MR_Word analysis__V_23_23;
#line 1294 "analysis.m"
    MR_Word analysis__V_24_24;
#line 1294 "analysis.m"
    MR_Word analysis__V_25_25;
#line 1294 "analysis.m"
    MR_Word analysis__V_26_26;
#line 1294 "analysis.m"
    MR_Word analysis__V_27_27;
#line 1294 "analysis.m"
    MR_Word analysis__V_28_28;
#line 1296 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_compiler_42;
#line 1296 "analysis.m"
    MR_Box analysis__V_29_29;
#line 1296 "analysis.m"
    MR_Word analysis__V_30_30;
#line 1296 "analysis.m"
    MR_Word analysis__V_31_31;
#line 1296 "analysis.m"
    MR_Word analysis__V_32_32;
#line 1296 "analysis.m"
    MR_Word analysis__V_33_33;
#line 1296 "analysis.m"
    MR_Word analysis__V_34_34;
#line 1296 "analysis.m"
    MR_Word analysis__V_35_35;
#line 1296 "analysis.m"
    MR_Word analysis__V_36_36;
#line 1296 "analysis.m"
    MR_Word analysis__V_38_38;
#line 1296 "analysis.m"
    MR_Word analysis__V_37_37;

#line 1293 "analysis.m"
    {
#line 1293 "analysis.m"
      analysis__file__read_module_imdg_6_p_0(analysis__STATE_VARIABLE_Info_0_14, analysis__Globals_7, analysis__ModuleName_8, &analysis__IMDG_11);
    }
#line 1294 "analysis.m"
    analysis__TypeClassInfo_for_compiler_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_14, (MR_Integer) 0)));
#line 1294 "analysis.m"
    analysis__V_20_20 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_14, (MR_Integer) 1));
#line 1294 "analysis.m"
    analysis__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_14, (MR_Integer) 2)));
#line 1294 "analysis.m"
    analysis__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_14, (MR_Integer) 3)));
#line 1294 "analysis.m"
    analysis__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_14, (MR_Integer) 4)));
#line 1294 "analysis.m"
    analysis__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_14, (MR_Integer) 5)));
#line 1294 "analysis.m"
    analysis__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_14, (MR_Integer) 6)));
#line 1294 "analysis.m"
    analysis__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_14, (MR_Integer) 7)));
#line 1294 "analysis.m"
    analysis__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_14, (MR_Integer) 8)));
#line 1294 "analysis.m"
    analysis__Map0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_14, (MR_Integer) 9)));
#line 1294 "analysis.m"
    analysis__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_14, (MR_Integer) 10)));
#line 1295 "analysis.m"
    {
#line 1295 "analysis.m"
      mercury__map__det_insert_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &analysis_scalar_common_2[5], ((MR_Box) (analysis__ModuleName_8)), ((MR_Box) (analysis__IMDG_11)), analysis__Map0_12, &analysis__Map_13);
    }
#line 1296 "analysis.m"
    analysis__TypeClassInfo_for_compiler_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_14, (MR_Integer) 0)));
#line 1296 "analysis.m"
    analysis__V_29_29 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_14, (MR_Integer) 1));
#line 1296 "analysis.m"
    analysis__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_14, (MR_Integer) 2)));
#line 1296 "analysis.m"
    analysis__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_14, (MR_Integer) 3)));
#line 1296 "analysis.m"
    analysis__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_14, (MR_Integer) 4)));
#line 1296 "analysis.m"
    analysis__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_14, (MR_Integer) 5)));
#line 1296 "analysis.m"
    analysis__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_14, (MR_Integer) 6)));
#line 1296 "analysis.m"
    analysis__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_14, (MR_Integer) 7)));
#line 1296 "analysis.m"
    analysis__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_14, (MR_Integer) 8)));
#line 1296 "analysis.m"
    analysis__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_14, (MR_Integer) 9)));
#line 1296 "analysis.m"
    analysis__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_14, (MR_Integer) 10)));
#line 1296 "analysis.m"
    {
#line 1296 "analysis.m"
      MR_Word base;
#line 1296 "analysis.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 1296 "analysis.m"
      *analysis__STATE_VARIABLE_Info_15 = base;
#line 1296 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (analysis__TypeClassInfo_for_compiler_42));
#line 1296 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 1) = analysis__V_29_29;
#line 1296 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (analysis__V_30_30));
#line 1296 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (analysis__V_31_31));
#line 1296 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (analysis__V_32_32));
#line 1296 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (analysis__V_33_33));
#line 1296 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (analysis__V_34_34));
#line 1296 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (analysis__V_35_35));
#line 1296 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (analysis__V_36_36));
#line 1296 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (analysis__Map_13));
#line 1296 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (analysis__V_38_38));
#line 1296 "analysis.m"
    }
#line 1292 "analysis.m"
  }
#line 1289 "analysis.m"
}

#line 1204 "analysis.m"
void MR_CALL 
analysis__load_module_analysis_results_6_p_0(
#line 1204 "analysis.m"
  MR_Word analysis__Globals_7,
#line 1204 "analysis.m"
  MR_Word analysis__ModuleName_8,
#line 1204 "analysis.m"
  MR_Word analysis__STATE_VARIABLE_Info_0_13,
#line 1204 "analysis.m"
  MR_Word * analysis__STATE_VARIABLE_Info_14)
#line 1204 "analysis.m"
{
#line 1214 "analysis.m"
  {
#line 1214 "analysis.m"
    MR_bool analysis__succeeded;
#line 1210 "analysis.m"
    MR_Word analysis__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 7)));
#line 1210 "analysis.m"
    MR_Word analysis__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 6)));
#line 1209 "analysis.m"
    MR_Word analysis__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 0)));
#line 1209 "analysis.m"
    MR_Word analysis__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 10)));
#line 1209 "analysis.m"
    MR_Word analysis__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 9)));
#line 1209 "analysis.m"
    MR_Word analysis__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 8)));
#line 1209 "analysis.m"
    MR_Word analysis__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 5)));
#line 1209 "analysis.m"
    MR_Word analysis__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 4)));
#line 1209 "analysis.m"
    MR_Word analysis__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 3)));
#line 1209 "analysis.m"
    MR_Word analysis__V_118_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 2)));
#line 1209 "analysis.m"
    MR_Box analysis__V_119_119 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 1));

#line 1209 "analysis.m"
    {
#line 1209 "analysis.m"
      analysis__succeeded = mercury__map__contains_2_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &analysis_scalar_common_2[3], analysis__V_113_113, ((MR_Box) (analysis__ModuleName_8)));
    }
#line 1210 "analysis.m"
    if (!(analysis__succeeded))
#line 1210 "analysis.m"
      {
#line 1210 "analysis.m"
        {
#line 1210 "analysis.m"
          analysis__succeeded = mercury__map__contains_2_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &analysis__analysis__type_ctor_info_analysis_status_0, analysis__V_114_114, ((MR_Box) (analysis__ModuleName_8)));
        }
#line 1210 "analysis.m"
      }
#line 1214 "analysis.m"
    if (analysis__succeeded)
#line 1213 "analysis.m"
      {
#line 1213 "analysis.m"
        {
#line 1213 "analysis.m"
          mercury__require__unexpected_3_p_0((MR_String) "analysis", (MR_String) "predicate \140analysis.load_module_analysis_results\'/6", (MR_String) "ensure_old_module_analysis_results_loaded");
#line 1213 "analysis.m"
          return;
        }
#line 1213 "analysis.m"
      }
#line 1214 "analysis.m"
    else
#line 1216 "analysis.m"
      {
#line 1216 "analysis.m"
        MR_Word analysis__TypeClassInfo_for_compiler_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 0)));
#line 1216 "analysis.m"
        MR_Word analysis__TypeCtorInfo_104_104;
#line 1216 "analysis.m"
        MR_Word analysis__ModuleStatus_11;
#line 1216 "analysis.m"
        MR_Word analysis__ModuleResults_12;
#line 1216 "analysis.m"
        MR_Box analysis__V_22_22 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 1));
#line 1216 "analysis.m"
        MR_Word analysis__STATE_VARIABLE_Info_25_25;
#line 1216 "analysis.m"
        MR_Word analysis__V_26_26;
#line 1216 "analysis.m"
        MR_Word analysis__V_27_27;
#line 1216 "analysis.m"
        MR_Word analysis__V_29_29;
#line 1216 "analysis.m"
        MR_Word analysis__V_30_30;
#line 1215 "analysis.m"
        MR_Word analysis__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 2)));
#line 1215 "analysis.m"
        MR_Word analysis__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 3)));
#line 1215 "analysis.m"
        MR_Word analysis__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 4)));
#line 1215 "analysis.m"
        MR_Word analysis__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 5)));
#line 1215 "analysis.m"
        MR_Word analysis__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 6)));
#line 1215 "analysis.m"
        MR_Word analysis__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 7)));
#line 1215 "analysis.m"
        MR_Word analysis__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 8)));
#line 1215 "analysis.m"
        MR_Word analysis__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 9)));
#line 1215 "analysis.m"
        MR_Word analysis__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 10)));
#line 1219 "analysis.m"
        MR_Word analysis__TypeClassInfo_for_compiler_103;
#line 1219 "analysis.m"
        MR_Box analysis__V_58_58;
#line 1219 "analysis.m"
        MR_Word analysis__V_59_59;
#line 1219 "analysis.m"
        MR_Word analysis__V_60_60;
#line 1219 "analysis.m"
        MR_Word analysis__V_61_61;
#line 1219 "analysis.m"
        MR_Word analysis__V_62_62;
#line 1219 "analysis.m"
        MR_Word analysis__V_63_63;
#line 1219 "analysis.m"
        MR_Word analysis__V_64_64;
#line 1219 "analysis.m"
        MR_Word analysis__V_65_65;
#line 1219 "analysis.m"
        MR_Word analysis__V_66_66;
#line 1219 "analysis.m"
        MR_Word analysis__TypeClassInfo_for_compiler_106;
#line 1219 "analysis.m"
        MR_Box analysis__V_67_67;
#line 1219 "analysis.m"
        MR_Word analysis__V_68_68;
#line 1219 "analysis.m"
        MR_Word analysis__V_69_69;
#line 1219 "analysis.m"
        MR_Word analysis__V_70_70;
#line 1219 "analysis.m"
        MR_Word analysis__V_71_71;
#line 1219 "analysis.m"
        MR_Word analysis__V_73_73;
#line 1219 "analysis.m"
        MR_Word analysis__V_74_74;
#line 1219 "analysis.m"
        MR_Word analysis__V_75_75;
#line 1219 "analysis.m"
        MR_Word analysis__V_76_76;
#line 1219 "analysis.m"
        MR_Word analysis__V_72_72;
#line 1220 "analysis.m"
        MR_Word analysis__TypeClassInfo_for_compiler_107;
#line 1220 "analysis.m"
        MR_Box analysis__V_77_77;
#line 1220 "analysis.m"
        MR_Word analysis__V_78_78;
#line 1220 "analysis.m"
        MR_Word analysis__V_79_79;
#line 1220 "analysis.m"
        MR_Word analysis__V_80_80;
#line 1220 "analysis.m"
        MR_Word analysis__V_81_81;
#line 1220 "analysis.m"
        MR_Word analysis__V_82_82;
#line 1220 "analysis.m"
        MR_Word analysis__V_83_83;
#line 1220 "analysis.m"
        MR_Word analysis__V_84_84;
#line 1220 "analysis.m"
        MR_Word analysis__V_85_85;
#line 1220 "analysis.m"
        MR_Word analysis__TypeClassInfo_for_compiler_109;
#line 1220 "analysis.m"
        MR_Box analysis__V_86_86;
#line 1220 "analysis.m"
        MR_Word analysis__V_87_87;
#line 1220 "analysis.m"
        MR_Word analysis__V_88_88;
#line 1220 "analysis.m"
        MR_Word analysis__V_89_89;
#line 1220 "analysis.m"
        MR_Word analysis__V_90_90;
#line 1220 "analysis.m"
        MR_Word analysis__V_91_91;
#line 1220 "analysis.m"
        MR_Word analysis__V_93_93;
#line 1220 "analysis.m"
        MR_Word analysis__V_94_94;
#line 1220 "analysis.m"
        MR_Word analysis__V_95_95;
#line 1220 "analysis.m"
        MR_Word analysis__V_92_92;

#line 1215 "analysis.m"
        {
#line 1215 "analysis.m"
          analysis__do_read_module_overall_status_6_p_0(analysis__TypeClassInfo_for_compiler_102, analysis__V_22_22, analysis__Globals_7, analysis__ModuleName_8, &analysis__ModuleStatus_11);
        }
#line 1217 "analysis.m"
        {
#line 1217 "analysis.m"
          analysis__file__read_module_analysis_results_6_p_0(analysis__STATE_VARIABLE_Info_0_13, analysis__Globals_7, analysis__ModuleName_8, &analysis__ModuleResults_12);
        }
#line 1219 "analysis.m"
        analysis__TypeClassInfo_for_compiler_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 0)));
#line 1219 "analysis.m"
        analysis__V_58_58 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 1));
#line 1219 "analysis.m"
        analysis__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 2)));
#line 1219 "analysis.m"
        analysis__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 3)));
#line 1219 "analysis.m"
        analysis__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 4)));
#line 1219 "analysis.m"
        analysis__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 5)));
#line 1219 "analysis.m"
        analysis__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 6)));
#line 1219 "analysis.m"
        analysis__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 7)));
#line 1219 "analysis.m"
        analysis__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 8)));
#line 1219 "analysis.m"
        analysis__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 9)));
#line 1219 "analysis.m"
        analysis__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 10)));
#line 9612 "analysis.c"
        analysis__TypeCtorInfo_104_104 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 1219 "analysis.m"
        {
#line 1219 "analysis.m"
          analysis__V_27_27 = mercury__map__f_101_108_101_109_32_58_61_3_f_0(analysis__TypeCtorInfo_104_104, (MR_Word) &analysis__analysis__type_ctor_info_analysis_status_0, ((MR_Box) (analysis__ModuleName_8)), analysis__V_26_26, ((MR_Box) (analysis__ModuleStatus_11)));
        }
#line 1219 "analysis.m"
        analysis__TypeClassInfo_for_compiler_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 0)));
#line 1219 "analysis.m"
        analysis__V_67_67 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 1));
#line 1219 "analysis.m"
        analysis__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 2)));
#line 1219 "analysis.m"
        analysis__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 3)));
#line 1219 "analysis.m"
        analysis__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 4)));
#line 1219 "analysis.m"
        analysis__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 5)));
#line 1219 "analysis.m"
        analysis__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 6)));
#line 1219 "analysis.m"
        analysis__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 7)));
#line 1219 "analysis.m"
        analysis__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 8)));
#line 1219 "analysis.m"
        analysis__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 9)));
#line 1219 "analysis.m"
        analysis__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 10)));
#line 1219 "analysis.m"
        {
#line 1219 "analysis.m"
          analysis__STATE_VARIABLE_Info_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 1219 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_25_25, 0) = ((MR_Box) (analysis__TypeClassInfo_for_compiler_106));
#line 1219 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_25_25, 1) = analysis__V_67_67;
#line 1219 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_25_25, 2) = ((MR_Box) (analysis__V_68_68));
#line 1219 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_25_25, 3) = ((MR_Box) (analysis__V_69_69));
#line 1219 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_25_25, 4) = ((MR_Box) (analysis__V_70_70));
#line 1219 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_25_25, 5) = ((MR_Box) (analysis__V_71_71));
#line 1219 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_25_25, 6) = ((MR_Box) (analysis__V_27_27));
#line 1219 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_25_25, 7) = ((MR_Box) (analysis__V_73_73));
#line 1219 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_25_25, 8) = ((MR_Box) (analysis__V_74_74));
#line 1219 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_25_25, 9) = ((MR_Box) (analysis__V_75_75));
#line 1219 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_25_25, 10) = ((MR_Box) (analysis__V_76_76));
#line 1219 "analysis.m"
        }
#line 1220 "analysis.m"
        analysis__TypeClassInfo_for_compiler_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_25_25, (MR_Integer) 0)));
#line 1220 "analysis.m"
        analysis__V_77_77 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_25_25, (MR_Integer) 1));
#line 1220 "analysis.m"
        analysis__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_25_25, (MR_Integer) 2)));
#line 1220 "analysis.m"
        analysis__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_25_25, (MR_Integer) 3)));
#line 1220 "analysis.m"
        analysis__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_25_25, (MR_Integer) 4)));
#line 1220 "analysis.m"
        analysis__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_25_25, (MR_Integer) 5)));
#line 1220 "analysis.m"
        analysis__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_25_25, (MR_Integer) 6)));
#line 1220 "analysis.m"
        analysis__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_25_25, (MR_Integer) 7)));
#line 1220 "analysis.m"
        analysis__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_25_25, (MR_Integer) 8)));
#line 1220 "analysis.m"
        analysis__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_25_25, (MR_Integer) 9)));
#line 1220 "analysis.m"
        analysis__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_25_25, (MR_Integer) 10)));
#line 1220 "analysis.m"
        {
#line 1220 "analysis.m"
          analysis__V_30_30 = mercury__map__f_101_108_101_109_32_58_61_3_f_0(analysis__TypeCtorInfo_104_104, (MR_Word) &analysis_scalar_common_2[3], ((MR_Box) (analysis__ModuleName_8)), analysis__V_29_29, ((MR_Box) (analysis__ModuleResults_12)));
        }
#line 1220 "analysis.m"
        analysis__TypeClassInfo_for_compiler_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_25_25, (MR_Integer) 0)));
#line 1220 "analysis.m"
        analysis__V_86_86 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_25_25, (MR_Integer) 1));
#line 1220 "analysis.m"
        analysis__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_25_25, (MR_Integer) 2)));
#line 1220 "analysis.m"
        analysis__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_25_25, (MR_Integer) 3)));
#line 1220 "analysis.m"
        analysis__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_25_25, (MR_Integer) 4)));
#line 1220 "analysis.m"
        analysis__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_25_25, (MR_Integer) 5)));
#line 1220 "analysis.m"
        analysis__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_25_25, (MR_Integer) 6)));
#line 1220 "analysis.m"
        analysis__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_25_25, (MR_Integer) 7)));
#line 1220 "analysis.m"
        analysis__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_25_25, (MR_Integer) 8)));
#line 1220 "analysis.m"
        analysis__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_25_25, (MR_Integer) 9)));
#line 1220 "analysis.m"
        analysis__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_25_25, (MR_Integer) 10)));
#line 1220 "analysis.m"
        {
#line 1220 "analysis.m"
          MR_Word base;
#line 1220 "analysis.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 1220 "analysis.m"
          *analysis__STATE_VARIABLE_Info_14 = base;
#line 1220 "analysis.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (analysis__TypeClassInfo_for_compiler_109));
#line 1220 "analysis.m"
          MR_hl_field(MR_mktag(0), base, 1) = analysis__V_86_86;
#line 1220 "analysis.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (analysis__V_87_87));
#line 1220 "analysis.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (analysis__V_88_88));
#line 1220 "analysis.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (analysis__V_89_89));
#line 1220 "analysis.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (analysis__V_90_90));
#line 1220 "analysis.m"
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (analysis__V_91_91));
#line 1220 "analysis.m"
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (analysis__V_30_30));
#line 1220 "analysis.m"
          MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (analysis__V_93_93));
#line 1220 "analysis.m"
          MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (analysis__V_94_94));
#line 1220 "analysis.m"
          MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (analysis__V_95_95));
#line 1220 "analysis.m"
        }
#line 1216 "analysis.m"
      }
#line 1214 "analysis.m"
  }
#line 1204 "analysis.m"
}

#line 1180 "analysis.m"
void MR_CALL 
analysis__combine_imdg_lists_3_p_0(
#line 1180 "analysis.m"
  MR_Word analysis__ArcsA_4,
#line 1180 "analysis.m"
  MR_Word analysis__ArcsB_5,
#line 1180 "analysis.m"
  MR_Word * analysis__HeadVar__3_3)
#line 1180 "analysis.m"
{
#line 1183 "analysis.m"
  {
#line 1183 "analysis.m"
    MR_bool analysis__succeeded;

#line 1183 "analysis.m"
    {
#line 1183 "analysis.m"
      *analysis__HeadVar__3_3 = mercury__list__f_43_43_2_f_0((MR_Word) &analysis__analysis__type_ctor_info_imdg_arc_0, analysis__ArcsA_4, analysis__ArcsB_5);
    }
#line 1183 "analysis.m"
  }
#line 1180 "analysis.m"
}

#line 1178 "analysis.m"
static void MR_CALL 
analysis__combine_func_imdg_3_p_0_1(
#line 1178 "analysis.m"
  MR_Box analysis__closure_arg,
#line 1178 "analysis.m"
  MR_Box analysis__wrapper_arg_1,
#line 1178 "analysis.m"
  MR_Box analysis__wrapper_arg_2,
#line 1178 "analysis.m"
  MR_Box * analysis__wrapper_arg_3)
#line 1178 "analysis.m"
{
#line 1178 "analysis.m"
  {
#line 1178 "analysis.m"
    MR_Box analysis__closure = analysis__closure_arg;
#line 1178 "analysis.m"
    MR_Word analysis__conv0_HeadVar__3_3;

#line 1178 "analysis.m"
    {
#line 1178 "analysis.m"
      analysis__combine_imdg_lists_3_p_0(((MR_Word) analysis__wrapper_arg_1), ((MR_Word) analysis__wrapper_arg_2), &analysis__conv0_HeadVar__3_3);
    }
#line 1178 "analysis.m"
    *analysis__wrapper_arg_3 = ((MR_Box) (analysis__conv0_HeadVar__3_3));
#line 1178 "analysis.m"
  }
#line 1178 "analysis.m"
}

#line 1174 "analysis.m"
void MR_CALL 
analysis__combine_func_imdg_3_p_0(
#line 1174 "analysis.m"
  MR_Word analysis__FuncImdgA_4,
#line 1174 "analysis.m"
  MR_Word analysis__FuncImdgB_5,
#line 1174 "analysis.m"
  MR_Word * analysis__FuncImdg_6)
#line 1174 "analysis.m"
{
#line 1177 "analysis.m"
  {
#line 1177 "analysis.m"
    MR_bool analysis__succeeded;

#line 1178 "analysis.m"
    {
#line 1178 "analysis.m"
      mercury__map__union_4_p_1((MR_Word) &analysis_scalar_common_1[2], (MR_Word) &analysis__analysis__type_ctor_info_func_id_0, (MR_Word) &analysis_scalar_common_2[12], analysis__FuncImdgA_4, analysis__FuncImdgB_5, analysis__FuncImdg_6);
#line 1178 "analysis.m"
      return;
    }
#line 1177 "analysis.m"
  }
#line 1174 "analysis.m"
}

#line 1171 "analysis.m"
static MR_bool MR_CALL 
analysis__clear_imdg_entries_pointing_at_3_3_p_0_1(
#line 1171 "analysis.m"
  MR_Box analysis__closure_arg,
#line 1171 "analysis.m"
  MR_Box analysis__wrapper_arg_1)
#line 1171 "analysis.m"
{
#line 1171 "analysis.m"
  {
#line 1171 "analysis.m"
    MR_bool analysis__succeeded;
#line 1171 "analysis.m"
    MR_Box analysis__closure = analysis__closure_arg;

#line 1171 "analysis.m"
    {
#line 1171 "analysis.m"
      return analysis__succeeded = analysis__IntroducedFrom__pred__clear_imdg_entries_pointing_at_3__1171__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 3))), ((MR_Word) analysis__wrapper_arg_1));
    }
#line 1171 "analysis.m"
    return analysis__succeeded;
#line 1171 "analysis.m"
  }
#line 1171 "analysis.m"
}

#line 1167 "analysis.m"
void MR_CALL 
analysis__clear_imdg_entries_pointing_at_3_3_p_0(
#line 1167 "analysis.m"
  MR_Word analysis__ModuleName_4,
#line 1167 "analysis.m"
  MR_Word analysis__Arcs0_5,
#line 1167 "analysis.m"
  MR_Word * analysis__Arcs_6)
#line 1167 "analysis.m"
{
#line 1170 "analysis.m"
  {
#line 1170 "analysis.m"
    MR_bool analysis__succeeded;
#line 1170 "analysis.m"
    MR_Word analysis__V_8_8;

#line 1171 "analysis.m"
    {
#line 1171 "analysis.m"
      analysis__V_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1171 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_8_8, 0) = ((MR_Box) (&analysis_scalar_common_13[1]));
#line 1171 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_8_8, 1) = ((MR_Box) (analysis__clear_imdg_entries_pointing_at_3_3_p_0_1));
#line 1171 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_8_8, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1171 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_8_8, 3) = ((MR_Box) (analysis__ModuleName_4));
#line 1171 "analysis.m"
    }
#line 1171 "analysis.m"
    {
#line 1171 "analysis.m"
      mercury__list__filter_3_p_0((MR_Word) &analysis__analysis__type_ctor_info_imdg_arc_0, analysis__V_8_8, analysis__Arcs0_5, analysis__Arcs_6);
#line 1171 "analysis.m"
      return;
    }
#line 1170 "analysis.m"
  }
#line 1167 "analysis.m"
}

#line 1164 "analysis.m"
static void MR_CALL 
analysis__clear_imdg_entries_pointing_at_2_3_p_0_1(
#line 1164 "analysis.m"
  MR_Box analysis__closure_arg,
#line 1164 "analysis.m"
  MR_Box analysis__wrapper_arg_1,
#line 1164 "analysis.m"
  MR_Box * analysis__wrapper_arg_2)
#line 1164 "analysis.m"
{
#line 1164 "analysis.m"
  {
#line 1164 "analysis.m"
    MR_Box analysis__closure = analysis__closure_arg;
#line 1164 "analysis.m"
    MR_Word analysis__conv0_Arcs_6;

#line 1164 "analysis.m"
    {
#line 1164 "analysis.m"
      analysis__clear_imdg_entries_pointing_at_3_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 3))), ((MR_Word) analysis__wrapper_arg_1), &analysis__conv0_Arcs_6);
    }
#line 1164 "analysis.m"
    *analysis__wrapper_arg_2 = ((MR_Box) (analysis__conv0_Arcs_6));
#line 1164 "analysis.m"
  }
#line 1164 "analysis.m"
}

#line 1159 "analysis.m"
void MR_CALL 
analysis__clear_imdg_entries_pointing_at_2_3_p_0(
#line 1159 "analysis.m"
  MR_Word analysis__ModuleName_4,
#line 1159 "analysis.m"
  MR_Word analysis__FuncMap0_5,
#line 1159 "analysis.m"
  MR_Word * analysis__FuncMap_6)
#line 1159 "analysis.m"
{
#line 1163 "analysis.m"
  {
#line 1163 "analysis.m"
    MR_bool analysis__succeeded;
#line 1163 "analysis.m"
    MR_Word analysis__TypeInfo_10_10;
#line 1163 "analysis.m"
    MR_Word analysis__V_7_7;

#line 1164 "analysis.m"
    {
#line 1164 "analysis.m"
      analysis__V_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1164 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_7_7, 0) = ((MR_Box) (&analysis_scalar_common_4[5]));
#line 1164 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_7_7, 1) = ((MR_Box) (analysis__clear_imdg_entries_pointing_at_2_3_p_0_1));
#line 1164 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_7_7, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1164 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_7_7, 3) = ((MR_Box) (analysis__ModuleName_4));
#line 1164 "analysis.m"
    }
#line 9979 "analysis.c"
    analysis__TypeInfo_10_10 = (MR_Word) &analysis_scalar_common_1[2];
#line 1164 "analysis.m"
    {
#line 1164 "analysis.m"
      mercury__map__map_values_only_3_p_0(analysis__TypeInfo_10_10, analysis__TypeInfo_10_10, (MR_Word) &analysis__analysis__type_ctor_info_func_id_0, analysis__V_7_7, analysis__FuncMap0_5, analysis__FuncMap_6);
#line 1164 "analysis.m"
      return;
    }
#line 1163 "analysis.m"
  }
#line 1159 "analysis.m"
}

#line 1156 "analysis.m"
static void MR_CALL 
analysis__clear_imdg_entries_pointing_at_3_p_0_1(
#line 1156 "analysis.m"
  MR_Box analysis__closure_arg,
#line 1156 "analysis.m"
  MR_Box analysis__wrapper_arg_1,
#line 1156 "analysis.m"
  MR_Box * analysis__wrapper_arg_2)
#line 1156 "analysis.m"
{
#line 1156 "analysis.m"
  {
#line 1156 "analysis.m"
    MR_Box analysis__closure = analysis__closure_arg;
#line 1156 "analysis.m"
    MR_Word analysis__conv0_FuncMap_6;

#line 1156 "analysis.m"
    {
#line 1156 "analysis.m"
      analysis__clear_imdg_entries_pointing_at_2_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 3))), ((MR_Word) analysis__wrapper_arg_1), &analysis__conv0_FuncMap_6);
    }
#line 1156 "analysis.m"
    *analysis__wrapper_arg_2 = ((MR_Box) (analysis__conv0_FuncMap_6));
#line 1156 "analysis.m"
  }
#line 1156 "analysis.m"
}

#line 1151 "analysis.m"
void MR_CALL 
analysis__clear_imdg_entries_pointing_at_3_p_0(
#line 1151 "analysis.m"
  MR_Word analysis__ModuleName_4,
#line 1151 "analysis.m"
  MR_Word analysis__Map0_5,
#line 1151 "analysis.m"
  MR_Word * analysis__Map_6)
#line 1151 "analysis.m"
{
#line 1155 "analysis.m"
  {
#line 1155 "analysis.m"
    MR_bool analysis__succeeded;
#line 1155 "analysis.m"
    MR_Word analysis__TypeInfo_10_10;
#line 1155 "analysis.m"
    MR_Word analysis__V_7_7;

#line 1156 "analysis.m"
    {
#line 1156 "analysis.m"
      analysis__V_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1156 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_7_7, 0) = ((MR_Box) (&analysis_scalar_common_4[4]));
#line 1156 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_7_7, 1) = ((MR_Box) (analysis__clear_imdg_entries_pointing_at_3_p_0_1));
#line 1156 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_7_7, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1156 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_7_7, 3) = ((MR_Box) (analysis__ModuleName_4));
#line 1156 "analysis.m"
    }
#line 10057 "analysis.c"
    analysis__TypeInfo_10_10 = (MR_Word) &analysis_scalar_common_2[4];
#line 1156 "analysis.m"
    {
#line 1156 "analysis.m"
      mercury__map__map_values_only_3_p_0(analysis__TypeInfo_10_10, analysis__TypeInfo_10_10, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, analysis__V_7_7, analysis__Map0_5, analysis__Map_6);
#line 1156 "analysis.m"
      return;
    }
#line 1155 "analysis.m"
  }
#line 1151 "analysis.m"
}

#line 1141 "analysis.m"
void MR_CALL 
analysis__write_clearing_entries_4_p_0(
#line 1141 "analysis.m"
  MR_Word analysis__ModuleName_5,
#line 1141 "analysis.m"
  MR_Word analysis__ImportedModuleName_6)
#line 1141 "analysis.m"
{
#line 1144 "analysis.m"
  {
#line 1144 "analysis.m"
    MR_bool analysis__succeeded;
#line 1144 "analysis.m"
    MR_Word analysis__TypeCtorInfo_18_18;

#line 1145 "analysis.m"
    {
#line 1145 "analysis.m"
      mercury__io__write_string_3_p_0((MR_String) "% Clearing entries involving ");
    }
#line 10092 "analysis.c"
    analysis__TypeCtorInfo_18_18 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 1146 "analysis.m"
    {
#line 1146 "analysis.m"
      mercury__io__write_3_p_0(analysis__TypeCtorInfo_18_18, ((MR_Box) (analysis__ModuleName_5)));
    }
#line 1147 "analysis.m"
    {
#line 1147 "analysis.m"
      mercury__io__write_string_3_p_0((MR_String) " from ");
    }
#line 1148 "analysis.m"
    {
#line 1148 "analysis.m"
      mercury__io__write_3_p_0(analysis__TypeCtorInfo_18_18, ((MR_Box) (analysis__ImportedModuleName_6)));
    }
#line 1149 "analysis.m"
    {
#line 1149 "analysis.m"
      mercury__io__write_string_3_p_0((MR_String) "\'s IMDG.\n");
#line 1149 "analysis.m"
      return;
    }
#line 1144 "analysis.m"
  }
#line 1141 "analysis.m"
}

#line 1134 "analysis.m"
static void MR_CALL 
analysis__update_intermodule_dependencies_2_4_p_0_1(
#line 1134 "analysis.m"
  MR_Box analysis__closure_arg,
#line 1134 "analysis.m"
  MR_Box analysis__wrapper_arg_1,
#line 1134 "analysis.m"
  MR_Box analysis__wrapper_arg_2,
#line 1134 "analysis.m"
  MR_Box * analysis__wrapper_arg_3)
#line 1134 "analysis.m"
{
#line 1134 "analysis.m"
  {
#line 1134 "analysis.m"
    MR_Box analysis__closure = analysis__closure_arg;
#line 1134 "analysis.m"
    MR_Word analysis__conv2_FuncImdg_6;

#line 1134 "analysis.m"
    {
#line 1134 "analysis.m"
      analysis__combine_func_imdg_3_p_0(((MR_Word) analysis__wrapper_arg_1), ((MR_Word) analysis__wrapper_arg_2), &analysis__conv2_FuncImdg_6);
    }
#line 1134 "analysis.m"
    *analysis__wrapper_arg_3 = ((MR_Box) (analysis__conv2_FuncImdg_6));
#line 1134 "analysis.m"
  }
#line 1134 "analysis.m"
}

#line 1122 "analysis.m"
void MR_CALL 
analysis__update_intermodule_dependencies_2_4_p_0(
#line 1122 "analysis.m"
  MR_Word analysis__ModuleName_5,
#line 1122 "analysis.m"
  MR_Word analysis__ImportedModuleName_6,
#line 1122 "analysis.m"
  MR_Word analysis__STATE_VARIABLE_Info_0_13,
#line 1122 "analysis.m"
  MR_Word * analysis__STATE_VARIABLE_Info_14)
#line 1122 "analysis.m"
{
#line 1125 "analysis.m"
  {
#line 1125 "analysis.m"
    MR_bool analysis__succeeded;
#line 1125 "analysis.m"
    MR_Word analysis__TypeCtorInfo_84_84 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 1125 "analysis.m"
    MR_Word analysis__TypeInfo_85_85 = (MR_Word) &analysis_scalar_common_2[5];
#line 1125 "analysis.m"
    MR_Word analysis__IMDG0_8;
#line 1125 "analysis.m"
    MR_Word analysis__IMDG1_10;
#line 1125 "analysis.m"
    MR_Word analysis__IMDG_12;
#line 1125 "analysis.m"
    MR_Word analysis__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 9)));
#line 1125 "analysis.m"
    MR_Word analysis__STATE_VARIABLE_Info_21_21;
#line 1125 "analysis.m"
    MR_Word analysis__V_22_22;
#line 1125 "analysis.m"
    MR_Word analysis__V_23_23;
#line 1125 "analysis.m"
    MR_Word analysis__V_25_25;
#line 1125 "analysis.m"
    MR_Word analysis__V_26_26;
#line 1126 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_compiler_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 0)));
#line 1126 "analysis.m"
    MR_Box analysis__V_27_27 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 1));
#line 1126 "analysis.m"
    MR_Word analysis__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 2)));
#line 1126 "analysis.m"
    MR_Word analysis__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 3)));
#line 1126 "analysis.m"
    MR_Word analysis__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 4)));
#line 1126 "analysis.m"
    MR_Word analysis__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 5)));
#line 1126 "analysis.m"
    MR_Word analysis__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 6)));
#line 1126 "analysis.m"
    MR_Word analysis__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 7)));
#line 1126 "analysis.m"
    MR_Word analysis__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 8)));
#line 1126 "analysis.m"
    MR_Word analysis__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 10)));
#line 1126 "analysis.m"
    MR_Box analysis__conv0_IMDG0_8;
#line 1135 "analysis.m"
    MR_Word analysis__NewArcs_11;
#line 1133 "analysis.m"
    MR_Word analysis__V_19_19;
#line 1133 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_compiler_88;
#line 1133 "analysis.m"
    MR_Box analysis__V_36_36;
#line 1133 "analysis.m"
    MR_Word analysis__V_37_37;
#line 1133 "analysis.m"
    MR_Word analysis__V_38_38;
#line 1133 "analysis.m"
    MR_Word analysis__V_39_39;
#line 1133 "analysis.m"
    MR_Word analysis__V_40_40;
#line 1133 "analysis.m"
    MR_Word analysis__V_41_41;
#line 1133 "analysis.m"
    MR_Word analysis__V_42_42;
#line 1133 "analysis.m"
    MR_Word analysis__V_43_43;
#line 1133 "analysis.m"
    MR_Word analysis__V_44_44;
#line 1133 "analysis.m"
    MR_Box analysis__conv1_NewArcs_11;
#line 1138 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_compiler_94;
#line 1138 "analysis.m"
    MR_Box analysis__V_45_45;
#line 1138 "analysis.m"
    MR_Word analysis__V_46_46;
#line 1138 "analysis.m"
    MR_Word analysis__V_47_47;
#line 1138 "analysis.m"
    MR_Word analysis__V_48_48;
#line 1138 "analysis.m"
    MR_Word analysis__V_49_49;
#line 1138 "analysis.m"
    MR_Word analysis__V_50_50;
#line 1138 "analysis.m"
    MR_Word analysis__V_51_51;
#line 1138 "analysis.m"
    MR_Word analysis__V_52_52;
#line 1138 "analysis.m"
    MR_Word analysis__V_53_53;
#line 1138 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_compiler_95;
#line 1138 "analysis.m"
    MR_Box analysis__V_54_54;
#line 1138 "analysis.m"
    MR_Word analysis__V_55_55;
#line 1138 "analysis.m"
    MR_Word analysis__V_56_56;
#line 1138 "analysis.m"
    MR_Word analysis__V_57_57;
#line 1138 "analysis.m"
    MR_Word analysis__V_58_58;
#line 1138 "analysis.m"
    MR_Word analysis__V_59_59;
#line 1138 "analysis.m"
    MR_Word analysis__V_60_60;
#line 1138 "analysis.m"
    MR_Word analysis__V_61_61;
#line 1138 "analysis.m"
    MR_Word analysis__V_63_63;
#line 1138 "analysis.m"
    MR_Word analysis__V_62_62;
#line 1139 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_compiler_96;
#line 1139 "analysis.m"
    MR_Box analysis__V_64_64;
#line 1139 "analysis.m"
    MR_Word analysis__V_65_65;
#line 1139 "analysis.m"
    MR_Word analysis__V_66_66;
#line 1139 "analysis.m"
    MR_Word analysis__V_67_67;
#line 1139 "analysis.m"
    MR_Word analysis__V_68_68;
#line 1139 "analysis.m"
    MR_Word analysis__V_69_69;
#line 1139 "analysis.m"
    MR_Word analysis__V_70_70;
#line 1139 "analysis.m"
    MR_Word analysis__V_71_71;
#line 1139 "analysis.m"
    MR_Word analysis__V_72_72;
#line 1139 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_compiler_97;
#line 1139 "analysis.m"
    MR_Box analysis__V_73_73;
#line 1139 "analysis.m"
    MR_Word analysis__V_74_74;
#line 1139 "analysis.m"
    MR_Word analysis__V_75_75;
#line 1139 "analysis.m"
    MR_Word analysis__V_76_76;
#line 1139 "analysis.m"
    MR_Word analysis__V_77_77;
#line 1139 "analysis.m"
    MR_Word analysis__V_78_78;
#line 1139 "analysis.m"
    MR_Word analysis__V_79_79;
#line 1139 "analysis.m"
    MR_Word analysis__V_80_80;
#line 1139 "analysis.m"
    MR_Word analysis__V_81_81;
#line 1139 "analysis.m"
    MR_Word analysis__V_82_82;

#line 1126 "analysis.m"
    {
#line 1126 "analysis.m"
      mercury__map__lookup_3_p_0(analysis__TypeCtorInfo_84_84, analysis__TypeInfo_85_85, analysis__V_15_15, ((MR_Box) (analysis__ImportedModuleName_6)), &analysis__conv0_IMDG0_8);
    }
#line 1126 "analysis.m"
    analysis__IMDG0_8 = ((MR_Word) analysis__conv0_IMDG0_8);
#line 1128 "analysis.m"
    {
#line 1128 "analysis.m"
      analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_109_115_103_95_95_104_111_49_95_95_91_51_93_95_48_3_p_0(analysis__ModuleName_5, analysis__ImportedModuleName_6);
    }
#line 1131 "analysis.m"
    {
#line 1131 "analysis.m"
      analysis__clear_imdg_entries_pointing_at_3_p_0(analysis__ModuleName_5, analysis__IMDG0_8, &analysis__IMDG1_10);
    }
#line 1133 "analysis.m"
    analysis__TypeClassInfo_for_compiler_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 0)));
#line 1133 "analysis.m"
    analysis__V_36_36 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 1));
#line 1133 "analysis.m"
    analysis__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 2)));
#line 1133 "analysis.m"
    analysis__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 3)));
#line 1133 "analysis.m"
    analysis__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 4)));
#line 1133 "analysis.m"
    analysis__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 5)));
#line 1133 "analysis.m"
    analysis__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 6)));
#line 1133 "analysis.m"
    analysis__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 7)));
#line 1133 "analysis.m"
    analysis__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 8)));
#line 1133 "analysis.m"
    analysis__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 9)));
#line 1133 "analysis.m"
    analysis__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 10)));
#line 1133 "analysis.m"
    {
#line 1133 "analysis.m"
      analysis__succeeded = mercury__map__elem_2_f_0(analysis__TypeCtorInfo_84_84, analysis__TypeInfo_85_85, ((MR_Box) (analysis__ImportedModuleName_6)), analysis__V_19_19, &analysis__conv1_NewArcs_11);
    }
#line 1133 "analysis.m"
    if (analysis__succeeded)
#line 1133 "analysis.m"
      {
#line 1133 "analysis.m"
        analysis__NewArcs_11 = ((MR_Word) analysis__conv1_NewArcs_11);
#line 1133 "analysis.m"
        analysis__succeeded = MR_TRUE;
#line 1133 "analysis.m"
      }
#line 1135 "analysis.m"
    if (analysis__succeeded)
#line 1134 "analysis.m"
      {
#line 1134 "analysis.m"
        {
#line 1134 "analysis.m"
          mercury__map__union_4_p_1((MR_Word) &analysis_scalar_common_2[4], (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &analysis_scalar_common_2[11], analysis__IMDG1_10, analysis__NewArcs_11, &analysis__IMDG_12);
        }
#line 1134 "analysis.m"
      }
#line 1135 "analysis.m"
    else
#line 1136 "analysis.m"
      analysis__IMDG_12 = analysis__IMDG1_10;
#line 1138 "analysis.m"
    analysis__TypeClassInfo_for_compiler_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 0)));
#line 1138 "analysis.m"
    analysis__V_45_45 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 1));
#line 1138 "analysis.m"
    analysis__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 2)));
#line 1138 "analysis.m"
    analysis__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 3)));
#line 1138 "analysis.m"
    analysis__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 4)));
#line 1138 "analysis.m"
    analysis__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 5)));
#line 1138 "analysis.m"
    analysis__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 6)));
#line 1138 "analysis.m"
    analysis__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 7)));
#line 1138 "analysis.m"
    analysis__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 8)));
#line 1138 "analysis.m"
    analysis__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 9)));
#line 1138 "analysis.m"
    analysis__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 10)));
#line 1138 "analysis.m"
    {
#line 1138 "analysis.m"
      analysis__V_23_23 = mercury__map__f_101_108_101_109_32_58_61_3_f_0(analysis__TypeCtorInfo_84_84, analysis__TypeInfo_85_85, ((MR_Box) (analysis__ImportedModuleName_6)), analysis__V_22_22, ((MR_Box) (analysis__IMDG_12)));
    }
#line 1138 "analysis.m"
    analysis__TypeClassInfo_for_compiler_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 0)));
#line 1138 "analysis.m"
    analysis__V_54_54 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 1));
#line 1138 "analysis.m"
    analysis__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 2)));
#line 1138 "analysis.m"
    analysis__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 3)));
#line 1138 "analysis.m"
    analysis__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 4)));
#line 1138 "analysis.m"
    analysis__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 5)));
#line 1138 "analysis.m"
    analysis__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 6)));
#line 1138 "analysis.m"
    analysis__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 7)));
#line 1138 "analysis.m"
    analysis__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 8)));
#line 1138 "analysis.m"
    analysis__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 9)));
#line 1138 "analysis.m"
    analysis__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 10)));
#line 1138 "analysis.m"
    {
#line 1138 "analysis.m"
      analysis__STATE_VARIABLE_Info_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 1138 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_21_21, 0) = ((MR_Box) (analysis__TypeClassInfo_for_compiler_95));
#line 1138 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_21_21, 1) = analysis__V_54_54;
#line 1138 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_21_21, 2) = ((MR_Box) (analysis__V_55_55));
#line 1138 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_21_21, 3) = ((MR_Box) (analysis__V_56_56));
#line 1138 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_21_21, 4) = ((MR_Box) (analysis__V_57_57));
#line 1138 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_21_21, 5) = ((MR_Box) (analysis__V_58_58));
#line 1138 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_21_21, 6) = ((MR_Box) (analysis__V_59_59));
#line 1138 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_21_21, 7) = ((MR_Box) (analysis__V_60_60));
#line 1138 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_21_21, 8) = ((MR_Box) (analysis__V_61_61));
#line 1138 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_21_21, 9) = ((MR_Box) (analysis__V_23_23));
#line 1138 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_21_21, 10) = ((MR_Box) (analysis__V_63_63));
#line 1138 "analysis.m"
    }
#line 1139 "analysis.m"
    analysis__TypeClassInfo_for_compiler_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_21_21, (MR_Integer) 0)));
#line 1139 "analysis.m"
    analysis__V_64_64 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_21_21, (MR_Integer) 1));
#line 1139 "analysis.m"
    analysis__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_21_21, (MR_Integer) 2)));
#line 1139 "analysis.m"
    analysis__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_21_21, (MR_Integer) 3)));
#line 1139 "analysis.m"
    analysis__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_21_21, (MR_Integer) 4)));
#line 1139 "analysis.m"
    analysis__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_21_21, (MR_Integer) 5)));
#line 1139 "analysis.m"
    analysis__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_21_21, (MR_Integer) 6)));
#line 1139 "analysis.m"
    analysis__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_21_21, (MR_Integer) 7)));
#line 1139 "analysis.m"
    analysis__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_21_21, (MR_Integer) 8)));
#line 1139 "analysis.m"
    analysis__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_21_21, (MR_Integer) 9)));
#line 1139 "analysis.m"
    analysis__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_21_21, (MR_Integer) 10)));
#line 1139 "analysis.m"
    {
#line 1139 "analysis.m"
      analysis__V_25_25 = mercury__map__delete_2_f_0(analysis__TypeCtorInfo_84_84, analysis__TypeInfo_85_85, analysis__V_26_26, ((MR_Box) (analysis__ImportedModuleName_6)));
    }
#line 1139 "analysis.m"
    analysis__TypeClassInfo_for_compiler_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_21_21, (MR_Integer) 0)));
#line 1139 "analysis.m"
    analysis__V_73_73 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_21_21, (MR_Integer) 1));
#line 1139 "analysis.m"
    analysis__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_21_21, (MR_Integer) 2)));
#line 1139 "analysis.m"
    analysis__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_21_21, (MR_Integer) 3)));
#line 1139 "analysis.m"
    analysis__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_21_21, (MR_Integer) 4)));
#line 1139 "analysis.m"
    analysis__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_21_21, (MR_Integer) 5)));
#line 1139 "analysis.m"
    analysis__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_21_21, (MR_Integer) 6)));
#line 1139 "analysis.m"
    analysis__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_21_21, (MR_Integer) 7)));
#line 1139 "analysis.m"
    analysis__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_21_21, (MR_Integer) 8)));
#line 1139 "analysis.m"
    analysis__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_21_21, (MR_Integer) 9)));
#line 1139 "analysis.m"
    analysis__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_21_21, (MR_Integer) 10)));
#line 1139 "analysis.m"
    {
#line 1139 "analysis.m"
      MR_Word base;
#line 1139 "analysis.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 1139 "analysis.m"
      *analysis__STATE_VARIABLE_Info_14 = base;
#line 1139 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (analysis__TypeClassInfo_for_compiler_97));
#line 1139 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 1) = analysis__V_73_73;
#line 1139 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (analysis__V_74_74));
#line 1139 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (analysis__V_75_75));
#line 1139 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (analysis__V_76_76));
#line 1139 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (analysis__V_77_77));
#line 1139 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (analysis__V_78_78));
#line 1139 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (analysis__V_79_79));
#line 1139 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (analysis__V_80_80));
#line 1139 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (analysis__V_81_81));
#line 1139 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (analysis__V_25_25));
#line 1139 "analysis.m"
    }
#line 1125 "analysis.m"
  }
#line 1122 "analysis.m"
}

#line 1119 "analysis.m"
static void MR_CALL 
analysis__update_intermodule_dependencies_4_p_0_1(
#line 1119 "analysis.m"
  MR_Box analysis__closure_arg,
#line 1119 "analysis.m"
  MR_Box analysis__wrapper_arg_1,
#line 1119 "analysis.m"
  MR_Box analysis__wrapper_arg_2,
#line 1119 "analysis.m"
  MR_Box * analysis__wrapper_arg_3)
#line 1119 "analysis.m"
{
#line 1119 "analysis.m"
  {
#line 1119 "analysis.m"
    MR_Box analysis__closure = analysis__closure_arg;
#line 1119 "analysis.m"
    MR_Word analysis__conv0_STATE_VARIABLE_Info_14;

#line 1119 "analysis.m"
    {
#line 1119 "analysis.m"
      analysis__update_intermodule_dependencies_2_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 3))), ((MR_Word) analysis__wrapper_arg_1), ((MR_Word) analysis__wrapper_arg_2), &analysis__conv0_STATE_VARIABLE_Info_14);
    }
#line 1119 "analysis.m"
    *analysis__wrapper_arg_3 = ((MR_Box) (analysis__conv0_STATE_VARIABLE_Info_14));
#line 1119 "analysis.m"
  }
#line 1119 "analysis.m"
}

#line 1115 "analysis.m"
void MR_CALL 
analysis__update_intermodule_dependencies_4_p_0(
#line 1115 "analysis.m"
  MR_Word analysis__ModuleName_5,
#line 1115 "analysis.m"
  MR_Word analysis__LocalImportedModules_6,
#line 1115 "analysis.m"
  MR_Word analysis__STATE_VARIABLE_Info_0_8,
#line 1115 "analysis.m"
  MR_Word * analysis__STATE_VARIABLE_Info_9)
#line 1115 "analysis.m"
{
#line 1118 "analysis.m"
  {
#line 1118 "analysis.m"
    MR_bool analysis__succeeded;
#line 1118 "analysis.m"
    MR_Word analysis__V_10_10;
#line 1119 "analysis.m"
    MR_Box analysis__conv1_STATE_VARIABLE_Info_9;

#line 1119 "analysis.m"
    {
#line 1119 "analysis.m"
      analysis__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1119 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_10_10, 0) = ((MR_Box) (&analysis_scalar_common_6[1]));
#line 1119 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_10_10, 1) = ((MR_Box) (analysis__update_intermodule_dependencies_4_p_0_1));
#line 1119 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_10_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1119 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_10_10, 3) = ((MR_Box) (analysis__ModuleName_5));
#line 1119 "analysis.m"
    }
#line 1119 "analysis.m"
    {
#line 1119 "analysis.m"
      mercury__set__fold_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &analysis__analysis__type_ctor_info_analysis_info_0, analysis__V_10_10, analysis__LocalImportedModules_6, ((MR_Box) (analysis__STATE_VARIABLE_Info_0_8)), &analysis__conv1_STATE_VARIABLE_Info_9);
    }
#line 1119 "analysis.m"
    *analysis__STATE_VARIABLE_Info_9 = ((MR_Word) analysis__conv1_STATE_VARIABLE_Info_9);
#line 1118 "analysis.m"
  }
#line 1115 "analysis.m"
}

#line 1097 "analysis.m"
void MR_CALL 
analysis__write_tainting_module_4_p_0(
#line 1097 "analysis.m"
  MR_Word analysis__ModuleName_5,
#line 1097 "analysis.m"
  MR_Word analysis__ModuleStatus_6)
#line 1097 "analysis.m"
{
#line 1100 "analysis.m"
  {
#line 1100 "analysis.m"
    MR_bool analysis__succeeded;
#line 1100 "analysis.m"
    MR_Word analysis__TypeCtorInfo_17_17 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;

#line 1101 "analysis.m"
    {
#line 1101 "analysis.m"
      mercury__io__print_3_p_0(analysis__TypeCtorInfo_17_17, ((MR_Box) ((MR_String) "% Tainting the overall module status of ")));
    }
#line 1102 "analysis.m"
    {
#line 1102 "analysis.m"
      mercury__io__print_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (analysis__ModuleName_5)));
    }
#line 1103 "analysis.m"
    {
#line 1103 "analysis.m"
      mercury__io__print_3_p_0(analysis__TypeCtorInfo_17_17, ((MR_Box) ((MR_String) " with ")));
    }
#line 1104 "analysis.m"
    {
#line 1104 "analysis.m"
      mercury__io__print_3_p_0((MR_Word) &analysis__analysis__type_ctor_info_analysis_status_0, ((MR_Box) (analysis__ModuleStatus_6)));
    }
#line 1105 "analysis.m"
    {
#line 1105 "analysis.m"
      mercury__io__nl_2_p_0();
#line 1105 "analysis.m"
      return;
    }
#line 1100 "analysis.m"
  }
#line 1097 "analysis.m"
}

#line 1081 "analysis.m"
void MR_CALL 
analysis__write_changed_answer_6_p_0(
#line 1081 "analysis.m"
  MR_Word analysis__TypeInfo_for_Answer_29,
#line 1081 "analysis.m"
  MR_Box analysis__OldAnswer_7,
#line 1081 "analysis.m"
  MR_Box analysis__NewAnswer_8,
#line 1081 "analysis.m"
  MR_Word analysis__Status_9,
#line 1081 "analysis.m"
  MR_Word analysis__DepModules_10)
#line 1081 "analysis.m"
{
#line 1084 "analysis.m"
  {
#line 1084 "analysis.m"
    MR_bool analysis__succeeded;

#line 1085 "analysis.m"
    {
#line 1085 "analysis.m"
      mercury__io__write_string_3_p_0((MR_String) "% ");
    }
#line 1086 "analysis.m"
    {
#line 1086 "analysis.m"
      mercury__io__write_3_p_0(analysis__TypeInfo_for_Answer_29, analysis__OldAnswer_7);
    }
#line 1087 "analysis.m"
    {
#line 1087 "analysis.m"
      mercury__io__write_string_3_p_0((MR_String) " changed to ");
    }
#line 1088 "analysis.m"
    {
#line 1088 "analysis.m"
      mercury__io__write_3_p_0(analysis__TypeInfo_for_Answer_29, analysis__NewAnswer_8);
    }
#line 1089 "analysis.m"
    {
#line 1089 "analysis.m"
      mercury__io__nl_2_p_0();
    }
#line 1090 "analysis.m"
    {
#line 1090 "analysis.m"
      mercury__io__write_string_3_p_0((MR_String) "Mark dependent modules as ");
    }
#line 1091 "analysis.m"
    {
#line 1091 "analysis.m"
      mercury__io__write_3_p_0((MR_Word) &analysis__analysis__type_ctor_info_analysis_status_0, ((MR_Box) (analysis__Status_9)));
    }
#line 1092 "analysis.m"
    {
#line 1092 "analysis.m"
      mercury__io__nl_2_p_0();
    }
#line 1093 "analysis.m"
    {
#line 1093 "analysis.m"
      mercury__io__write_string_3_p_0((MR_String) "The modules to mark are: ");
    }
#line 1094 "analysis.m"
    {
#line 1094 "analysis.m"
      mercury__io__write_3_p_0((MR_Word) &analysis_scalar_common_1[3], ((MR_Box) (analysis__DepModules_10)));
    }
#line 1095 "analysis.m"
    {
#line 1095 "analysis.m"
      mercury__io__nl_2_p_0();
#line 1095 "analysis.m"
      return;
    }
#line 1084 "analysis.m"
  }
#line 1081 "analysis.m"
}

#line 1067 "analysis.m"
void MR_CALL 
analysis__write_no_change_in_result_6_p_0(
#line 1067 "analysis.m"
  MR_Word analysis__TypeInfo_for_Call_27,
#line 1067 "analysis.m"
  MR_Word analysis__TypeInfo_for_Answer_28,
#line 1067 "analysis.m"
  MR_Word analysis__ModuleName_7,
#line 1067 "analysis.m"
  MR_Word analysis__FuncId_8,
#line 1067 "analysis.m"
  MR_Box analysis__Call_9,
#line 1067 "analysis.m"
  MR_Box analysis__NewAnswer_10)
#line 1067 "analysis.m"
{
#line 1070 "analysis.m"
  {
#line 1070 "analysis.m"
    MR_bool analysis__succeeded;

#line 1071 "analysis.m"
    {
#line 1071 "analysis.m"
      mercury__io__write_string_3_p_0((MR_String) "% No change in the result ");
    }
#line 1072 "analysis.m"
    {
#line 1072 "analysis.m"
      mercury__io__write_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (analysis__ModuleName_7)));
    }
#line 1073 "analysis.m"
    {
#line 1073 "analysis.m"
      mercury__io__write_string_3_p_0((MR_String) ".");
    }
#line 1074 "analysis.m"
    {
#line 1074 "analysis.m"
      mercury__io__write_3_p_0((MR_Word) &analysis__analysis__type_ctor_info_func_id_0, ((MR_Box) (analysis__FuncId_8)));
    }
#line 1075 "analysis.m"
    {
#line 1075 "analysis.m"
      mercury__io__write_string_3_p_0((MR_String) ":");
    }
#line 1076 "analysis.m"
    {
#line 1076 "analysis.m"
      mercury__io__write_3_p_0(analysis__TypeInfo_for_Call_27, analysis__Call_9);
    }
#line 1077 "analysis.m"
    {
#line 1077 "analysis.m"
      mercury__io__write_string_3_p_0((MR_String) " --> ");
    }
#line 1078 "analysis.m"
    {
#line 1078 "analysis.m"
      mercury__io__write_3_p_0(analysis__TypeInfo_for_Answer_28, analysis__NewAnswer_10);
    }
#line 1079 "analysis.m"
    {
#line 1079 "analysis.m"
      mercury__io__nl_2_p_0();
#line 1079 "analysis.m"
      return;
    }
#line 1070 "analysis.m"
  }
#line 1067 "analysis.m"
}

#line 1055 "analysis.m"
void MR_CALL 
analysis__ensure_module_status_loaded_6_p_0(
#line 1055 "analysis.m"
  MR_Word analysis__Globals_7,
#line 1055 "analysis.m"
  MR_Word analysis__ModuleName_8,
#line 1055 "analysis.m"
  MR_Word analysis__STATE_VARIABLE_Info_0_12,
#line 1055 "analysis.m"
  MR_Word * analysis__STATE_VARIABLE_Info_13)
#line 1055 "analysis.m"
{
#line 1061 "analysis.m"
  {
#line 1061 "analysis.m"
    MR_bool analysis__succeeded;
#line 1059 "analysis.m"
    MR_Word analysis__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 6)));
#line 1059 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_compiler_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 0)));
#line 1059 "analysis.m"
    MR_Box analysis__V_22_22 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 1));
#line 1059 "analysis.m"
    MR_Word analysis__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 2)));
#line 1059 "analysis.m"
    MR_Word analysis__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 3)));
#line 1059 "analysis.m"
    MR_Word analysis__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 4)));
#line 1059 "analysis.m"
    MR_Word analysis__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 5)));
#line 1059 "analysis.m"
    MR_Word analysis__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 7)));
#line 1059 "analysis.m"
    MR_Word analysis__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 8)));
#line 1059 "analysis.m"
    MR_Word analysis__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 9)));
#line 1059 "analysis.m"
    MR_Word analysis__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 10)));

#line 1059 "analysis.m"
    {
#line 1059 "analysis.m"
      analysis__succeeded = mercury__map__contains_2_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &analysis__analysis__type_ctor_info_analysis_status_0, analysis__V_16_16, ((MR_Box) (analysis__ModuleName_8)));
    }
#line 1061 "analysis.m"
    if (analysis__succeeded)
#line 1060 "analysis.m"
      *analysis__STATE_VARIABLE_Info_13 = analysis__STATE_VARIABLE_Info_0_12;
#line 1061 "analysis.m"
    else
#line 1063 "analysis.m"
      {
#line 1063 "analysis.m"
        MR_Word analysis__TypeClassInfo_for_compiler_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 0)));
#line 1063 "analysis.m"
        MR_Word analysis__ModuleStatus_11;
#line 1063 "analysis.m"
        MR_Box analysis__V_17_17 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 1));
#line 1063 "analysis.m"
        MR_Word analysis__V_20_20;
#line 1063 "analysis.m"
        MR_Word analysis__V_21_21;
#line 1062 "analysis.m"
        MR_Word analysis__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 2)));
#line 1062 "analysis.m"
        MR_Word analysis__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 3)));
#line 1062 "analysis.m"
        MR_Word analysis__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 4)));
#line 1062 "analysis.m"
        MR_Word analysis__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 5)));
#line 1062 "analysis.m"
        MR_Word analysis__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 6)));
#line 1062 "analysis.m"
        MR_Word analysis__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 7)));
#line 1062 "analysis.m"
        MR_Word analysis__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 8)));
#line 1062 "analysis.m"
        MR_Word analysis__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 9)));
#line 1062 "analysis.m"
        MR_Word analysis__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 10)));
#line 1064 "analysis.m"
        MR_Word analysis__TypeClassInfo_for_compiler_63;
#line 1064 "analysis.m"
        MR_Box analysis__V_40_40;
#line 1064 "analysis.m"
        MR_Word analysis__V_41_41;
#line 1064 "analysis.m"
        MR_Word analysis__V_42_42;
#line 1064 "analysis.m"
        MR_Word analysis__V_43_43;
#line 1064 "analysis.m"
        MR_Word analysis__V_44_44;
#line 1064 "analysis.m"
        MR_Word analysis__V_45_45;
#line 1064 "analysis.m"
        MR_Word analysis__V_46_46;
#line 1064 "analysis.m"
        MR_Word analysis__V_47_47;
#line 1064 "analysis.m"
        MR_Word analysis__V_48_48;
#line 1064 "analysis.m"
        MR_Word analysis__TypeClassInfo_for_compiler_66;
#line 1064 "analysis.m"
        MR_Box analysis__V_49_49;
#line 1064 "analysis.m"
        MR_Word analysis__V_50_50;
#line 1064 "analysis.m"
        MR_Word analysis__V_51_51;
#line 1064 "analysis.m"
        MR_Word analysis__V_52_52;
#line 1064 "analysis.m"
        MR_Word analysis__V_53_53;
#line 1064 "analysis.m"
        MR_Word analysis__V_55_55;
#line 1064 "analysis.m"
        MR_Word analysis__V_56_56;
#line 1064 "analysis.m"
        MR_Word analysis__V_57_57;
#line 1064 "analysis.m"
        MR_Word analysis__V_58_58;
#line 1064 "analysis.m"
        MR_Word analysis__V_54_54;

#line 1335 "analysis.m"
        {
#line 1335 "analysis.m"
          analysis__file__read_module_overall_status_6_p_0(analysis__TypeClassInfo_for_compiler_62, analysis__V_17_17, analysis__Globals_7, analysis__ModuleName_8, &analysis__ModuleStatus_11);
        }
#line 1064 "analysis.m"
        analysis__TypeClassInfo_for_compiler_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 0)));
#line 1064 "analysis.m"
        analysis__V_40_40 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 1));
#line 1064 "analysis.m"
        analysis__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 2)));
#line 1064 "analysis.m"
        analysis__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 3)));
#line 1064 "analysis.m"
        analysis__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 4)));
#line 1064 "analysis.m"
        analysis__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 5)));
#line 1064 "analysis.m"
        analysis__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 6)));
#line 1064 "analysis.m"
        analysis__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 7)));
#line 1064 "analysis.m"
        analysis__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 8)));
#line 1064 "analysis.m"
        analysis__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 9)));
#line 1064 "analysis.m"
        analysis__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 10)));
#line 1064 "analysis.m"
        {
#line 1064 "analysis.m"
          analysis__V_21_21 = mercury__map__f_101_108_101_109_32_58_61_3_f_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &analysis__analysis__type_ctor_info_analysis_status_0, ((MR_Box) (analysis__ModuleName_8)), analysis__V_20_20, ((MR_Box) (analysis__ModuleStatus_11)));
        }
#line 1064 "analysis.m"
        analysis__TypeClassInfo_for_compiler_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 0)));
#line 1064 "analysis.m"
        analysis__V_49_49 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 1));
#line 1064 "analysis.m"
        analysis__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 2)));
#line 1064 "analysis.m"
        analysis__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 3)));
#line 1064 "analysis.m"
        analysis__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 4)));
#line 1064 "analysis.m"
        analysis__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 5)));
#line 1064 "analysis.m"
        analysis__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 6)));
#line 1064 "analysis.m"
        analysis__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 7)));
#line 1064 "analysis.m"
        analysis__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 8)));
#line 1064 "analysis.m"
        analysis__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 9)));
#line 1064 "analysis.m"
        analysis__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 10)));
#line 1064 "analysis.m"
        {
#line 1064 "analysis.m"
          MR_Word base;
#line 1064 "analysis.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 1064 "analysis.m"
          *analysis__STATE_VARIABLE_Info_13 = base;
#line 1064 "analysis.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (analysis__TypeClassInfo_for_compiler_66));
#line 1064 "analysis.m"
          MR_hl_field(MR_mktag(0), base, 1) = analysis__V_49_49;
#line 1064 "analysis.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (analysis__V_50_50));
#line 1064 "analysis.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (analysis__V_51_51));
#line 1064 "analysis.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (analysis__V_52_52));
#line 1064 "analysis.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (analysis__V_53_53));
#line 1064 "analysis.m"
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (analysis__V_21_21));
#line 1064 "analysis.m"
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (analysis__V_55_55));
#line 1064 "analysis.m"
          MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (analysis__V_56_56));
#line 1064 "analysis.m"
          MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (analysis__V_57_57));
#line 1064 "analysis.m"
          MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (analysis__V_58_58));
#line 1064 "analysis.m"
        }
#line 1063 "analysis.m"
      }
#line 1061 "analysis.m"
  }
#line 1055 "analysis.m"
}

#line 1031 "analysis.m"
void MR_CALL 
analysis__taint_module_overall_status_7_p_0(
#line 1031 "analysis.m"
  MR_Word analysis__Globals_8,
#line 1031 "analysis.m"
  MR_Word analysis__Status_9,
#line 1031 "analysis.m"
  MR_Word analysis__ModuleName_10,
#line 1031 "analysis.m"
  MR_Word analysis__STATE_VARIABLE_Info_0_15,
#line 1031 "analysis.m"
  MR_Word * analysis__STATE_VARIABLE_Info_16)
#line 1031 "analysis.m"
{
#line 1037 "analysis.m"
  {
#line 1037 "analysis.m"
    MR_bool analysis__succeeded;

#line 1037 "analysis.m"
#line 1037 "analysis.m"
    switch (analysis__Status_9) {
#line 1037 "analysis.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1037 "analysis.m"
      case (MR_Integer) 0:
#line 1037 "analysis.m"
      case (MR_Integer) 1:
#line 1041 "analysis.m"
        {
#line 1041 "analysis.m"
          MR_Word analysis__TypeCtorInfo_56_56;
#line 1041 "analysis.m"
          MR_Word analysis__TypeCtorInfo_57_57;
#line 1041 "analysis.m"
          MR_Word analysis__ModuleStatus0_13;
#line 1041 "analysis.m"
          MR_Word analysis__ModuleStatus_14;
#line 1041 "analysis.m"
          MR_Word analysis__STATE_VARIABLE_Info_19_19;
#line 1041 "analysis.m"
          MR_Word analysis__V_21_21;
#line 1041 "analysis.m"
          MR_Word analysis__V_25_25;
#line 1041 "analysis.m"
          MR_Word analysis__V_26_26;
#line 1041 "analysis.m"
          MR_Word analysis__Debug_66;
#line 1049 "analysis.m"
          MR_Word analysis__TypeClassInfo_for_compiler_55;
#line 1049 "analysis.m"
          MR_Box analysis__V_27_27;
#line 1049 "analysis.m"
          MR_Word analysis__V_28_28;
#line 1049 "analysis.m"
          MR_Word analysis__V_29_29;
#line 1049 "analysis.m"
          MR_Word analysis__V_30_30;
#line 1049 "analysis.m"
          MR_Word analysis__V_31_31;
#line 1049 "analysis.m"
          MR_Word analysis__V_32_32;
#line 1049 "analysis.m"
          MR_Word analysis__V_33_33;
#line 1049 "analysis.m"
          MR_Word analysis__V_34_34;
#line 1049 "analysis.m"
          MR_Word analysis__V_35_35;
#line 1049 "analysis.m"
          MR_Box analysis__conv0_ModuleStatus0_13;
#line 1052 "analysis.m"
          MR_Word analysis__TypeClassInfo_for_compiler_60;
#line 1052 "analysis.m"
          MR_Box analysis__V_36_36;
#line 1052 "analysis.m"
          MR_Word analysis__V_37_37;
#line 1052 "analysis.m"
          MR_Word analysis__V_38_38;
#line 1052 "analysis.m"
          MR_Word analysis__V_39_39;
#line 1052 "analysis.m"
          MR_Word analysis__V_40_40;
#line 1052 "analysis.m"
          MR_Word analysis__V_41_41;
#line 1052 "analysis.m"
          MR_Word analysis__V_42_42;
#line 1052 "analysis.m"
          MR_Word analysis__V_43_43;
#line 1052 "analysis.m"
          MR_Word analysis__V_44_44;
#line 1052 "analysis.m"
          MR_Word analysis__TypeClassInfo_for_compiler_61;
#line 1052 "analysis.m"
          MR_Box analysis__V_45_45;
#line 1052 "analysis.m"
          MR_Word analysis__V_46_46;
#line 1052 "analysis.m"
          MR_Word analysis__V_47_47;
#line 1052 "analysis.m"
          MR_Word analysis__V_48_48;
#line 1052 "analysis.m"
          MR_Word analysis__V_49_49;
#line 1052 "analysis.m"
          MR_Word analysis__V_51_51;
#line 1052 "analysis.m"
          MR_Word analysis__V_52_52;
#line 1052 "analysis.m"
          MR_Word analysis__V_53_53;
#line 1052 "analysis.m"
          MR_Word analysis__V_54_54;
#line 1052 "analysis.m"
          MR_Word analysis__V_50_50;

#line 1047 "analysis.m"
          {
#line 1047 "analysis.m"
            analysis__ensure_module_status_loaded_6_p_0(analysis__Globals_8, analysis__ModuleName_10, analysis__STATE_VARIABLE_Info_0_15, &analysis__STATE_VARIABLE_Info_19_19);
          }
#line 1049 "analysis.m"
          analysis__TypeClassInfo_for_compiler_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_19_19, (MR_Integer) 0)));
#line 1049 "analysis.m"
          analysis__V_27_27 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_19_19, (MR_Integer) 1));
#line 1049 "analysis.m"
          analysis__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_19_19, (MR_Integer) 2)));
#line 1049 "analysis.m"
          analysis__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_19_19, (MR_Integer) 3)));
#line 1049 "analysis.m"
          analysis__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_19_19, (MR_Integer) 4)));
#line 1049 "analysis.m"
          analysis__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_19_19, (MR_Integer) 5)));
#line 1049 "analysis.m"
          analysis__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_19_19, (MR_Integer) 6)));
#line 1049 "analysis.m"
          analysis__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_19_19, (MR_Integer) 7)));
#line 1049 "analysis.m"
          analysis__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_19_19, (MR_Integer) 8)));
#line 1049 "analysis.m"
          analysis__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_19_19, (MR_Integer) 9)));
#line 1049 "analysis.m"
          analysis__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_19_19, (MR_Integer) 10)));
#line 11199 "analysis.c"
          analysis__TypeCtorInfo_56_56 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 11201 "analysis.c"
          analysis__TypeCtorInfo_57_57 = (MR_Word) &analysis__analysis__type_ctor_info_analysis_status_0;
#line 1049 "analysis.m"
          {
#line 1049 "analysis.m"
            analysis__conv0_ModuleStatus0_13 = mercury__map__det_elem_2_f_0(analysis__TypeCtorInfo_56_56, analysis__TypeCtorInfo_57_57, ((MR_Box) (analysis__ModuleName_10)), analysis__V_21_21);
          }
#line 1049 "analysis.m"
          analysis__ModuleStatus0_13 = ((MR_Word) analysis__conv0_ModuleStatus0_13);
#line 1050 "analysis.m"
          {
#line 1050 "analysis.m"
            analysis__ModuleStatus_14 = analysis__lub_2_f_0(analysis__ModuleStatus0_13, analysis__Status_9);
          }
#line 1380 "analysis.m"
{
#define MR_PROC_LABEL analysis__taint_module_overall_status_7_p_0


		{
#line 1380 "analysis.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&analysis__mutable_variable_debug_analysis_lock,
                    "analysis__mutable_variable_debug_analysis_lock");
#endif

#line 11227 "analysis.c"

		;}
#undef MR_PROC_LABEL
#line 1380 "analysis.m"
}
#line 1380 "analysis.m"
{
#define MR_PROC_LABEL analysis__taint_module_overall_status_7_p_0

	MR_Word X;

		{
#line 1380 "analysis.m"
X = analysis__mutable_variable_debug_analysis;

#line 11243 "analysis.c"

		;}
#undef MR_PROC_LABEL
	 analysis__Debug_66  = X;
#line 1380 "analysis.m"
}
#line 1380 "analysis.m"
{
#define MR_PROC_LABEL analysis__taint_module_overall_status_7_p_0


		{
#line 1380 "analysis.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&analysis__mutable_variable_debug_analysis_lock,
                    "analysis__mutable_variable_debug_analysis_lock");
#endif

#line 11262 "analysis.c"

		;}
#undef MR_PROC_LABEL
#line 1380 "analysis.m"
}
#line 1393 "analysis.m"
#line 1393 "analysis.m"
          switch (analysis__Debug_66) {
#line 1393 "analysis.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1393 "analysis.m"
            case (MR_Integer) 0:
#line 1394 "analysis.m"
              {
#line 1394 "analysis.m"
              }
#line 1393 "analysis.m"
              break;
#line 1393 "analysis.m"
            case (MR_Integer) 1:
#line 1392 "analysis.m"
              {
#line 1392 "analysis.m"
                analysis__write_tainting_module_4_p_0(analysis__ModuleName_10, analysis__ModuleStatus_14);
              }
#line 1393 "analysis.m"
              break;
#line 1393 "analysis.m"
          }
#line 1052 "analysis.m"
          analysis__TypeClassInfo_for_compiler_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_19_19, (MR_Integer) 0)));
#line 1052 "analysis.m"
          analysis__V_36_36 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_19_19, (MR_Integer) 1));
#line 1052 "analysis.m"
          analysis__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_19_19, (MR_Integer) 2)));
#line 1052 "analysis.m"
          analysis__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_19_19, (MR_Integer) 3)));
#line 1052 "analysis.m"
          analysis__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_19_19, (MR_Integer) 4)));
#line 1052 "analysis.m"
          analysis__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_19_19, (MR_Integer) 5)));
#line 1052 "analysis.m"
          analysis__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_19_19, (MR_Integer) 6)));
#line 1052 "analysis.m"
          analysis__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_19_19, (MR_Integer) 7)));
#line 1052 "analysis.m"
          analysis__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_19_19, (MR_Integer) 8)));
#line 1052 "analysis.m"
          analysis__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_19_19, (MR_Integer) 9)));
#line 1052 "analysis.m"
          analysis__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_19_19, (MR_Integer) 10)));
#line 1052 "analysis.m"
          {
#line 1052 "analysis.m"
            analysis__V_26_26 = mercury__map__f_101_108_101_109_32_58_61_3_f_0(analysis__TypeCtorInfo_56_56, analysis__TypeCtorInfo_57_57, ((MR_Box) (analysis__ModuleName_10)), analysis__V_25_25, ((MR_Box) (analysis__ModuleStatus_14)));
          }
#line 1052 "analysis.m"
          analysis__TypeClassInfo_for_compiler_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_19_19, (MR_Integer) 0)));
#line 1052 "analysis.m"
          analysis__V_45_45 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_19_19, (MR_Integer) 1));
#line 1052 "analysis.m"
          analysis__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_19_19, (MR_Integer) 2)));
#line 1052 "analysis.m"
          analysis__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_19_19, (MR_Integer) 3)));
#line 1052 "analysis.m"
          analysis__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_19_19, (MR_Integer) 4)));
#line 1052 "analysis.m"
          analysis__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_19_19, (MR_Integer) 5)));
#line 1052 "analysis.m"
          analysis__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_19_19, (MR_Integer) 6)));
#line 1052 "analysis.m"
          analysis__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_19_19, (MR_Integer) 7)));
#line 1052 "analysis.m"
          analysis__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_19_19, (MR_Integer) 8)));
#line 1052 "analysis.m"
          analysis__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_19_19, (MR_Integer) 9)));
#line 1052 "analysis.m"
          analysis__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_19_19, (MR_Integer) 10)));
#line 1052 "analysis.m"
          {
#line 1052 "analysis.m"
            MR_Word base;
#line 1052 "analysis.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 1052 "analysis.m"
            *analysis__STATE_VARIABLE_Info_16 = base;
#line 1052 "analysis.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (analysis__TypeClassInfo_for_compiler_61));
#line 1052 "analysis.m"
            MR_hl_field(MR_mktag(0), base, 1) = analysis__V_45_45;
#line 1052 "analysis.m"
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (analysis__V_46_46));
#line 1052 "analysis.m"
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (analysis__V_47_47));
#line 1052 "analysis.m"
            MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (analysis__V_48_48));
#line 1052 "analysis.m"
            MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (analysis__V_49_49));
#line 1052 "analysis.m"
            MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (analysis__V_26_26));
#line 1052 "analysis.m"
            MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (analysis__V_51_51));
#line 1052 "analysis.m"
            MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (analysis__V_52_52));
#line 1052 "analysis.m"
            MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (analysis__V_53_53));
#line 1052 "analysis.m"
            MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (analysis__V_54_54));
#line 1052 "analysis.m"
          }
#line 1041 "analysis.m"
        }
#line 1037 "analysis.m"
        break;
#line 1037 "analysis.m"
      case (MR_Integer) 2:
#line 1037 "analysis.m"
        *analysis__STATE_VARIABLE_Info_16 = analysis__STATE_VARIABLE_Info_0_15;
#line 1037 "analysis.m"
        break;
#line 1037 "analysis.m"
    }
#line 1037 "analysis.m"
  }
#line 1031 "analysis.m"
}

#line 1023 "analysis.m"
MR_bool MR_CALL 
analysis__arc_module_name_3_f_0(
#line 1023 "analysis.m"
  MR_Word analysis__TypeClassInfo_for_call_pattern_11,
#line 1023 "analysis.m"
  MR_Box analysis__FuncInfo_5,
#line 1023 "analysis.m"
  MR_Box analysis__CallA_6,
#line 1023 "analysis.m"
  MR_Word analysis__HeadVar__3_3,
#line 1023 "analysis.m"
  MR_Word * analysis__ModuleName_8)
#line 1023 "analysis.m"
{
#line 1027 "analysis.m"
  {
#line 1027 "analysis.m"
    MR_bool analysis__succeeded;
#line 1027 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_call_pattern_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__3_3, (MR_Integer) 0)));
#line 1027 "analysis.m"
    MR_Word analysis__TypeInfo_14_14;
#line 1027 "analysis.m"
    MR_Word analysis__TypeInfo_15_15;
#line 1027 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_partial_order_16;
#line 1027 "analysis.m"
    MR_Box analysis__CallB0_7 = (MR_hl_field(MR_mktag(0), analysis__HeadVar__3_3, (MR_Integer) 1));
#line 1027 "analysis.m"
    MR_Box analysis__CallB_9;
#line 1027 "analysis.m"
    MR_Word analysis__V_10_10;
#line 137 "analysis.m"
    MR_bool MR_CALL (* analysis__func_0)(MR_Box, MR_Box, MR_Box, MR_Box);

#line 1027 "analysis.m"
    *analysis__ModuleName_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__3_3, (MR_Integer) 2)));
#line 1028 "analysis.m"
    {
#line 1028 "analysis.m"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_call_pattern_12, (MR_Integer) 4, &analysis__TypeInfo_14_14);
    }
#line 1028 "analysis.m"
    {
#line 1028 "analysis.m"
      analysis__V_10_10 = mercury__univ__univ_1_f_0(analysis__TypeInfo_14_14, analysis__CallB0_7);
    }
#line 1028 "analysis.m"
    {
#line 1028 "analysis.m"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_call_pattern_11, (MR_Integer) 4, &analysis__TypeInfo_15_15);
    }
#line 1028 "analysis.m"
    {
#line 1028 "analysis.m"
      mercury__univ__det_univ_to_type_2_p_0(analysis__TypeInfo_15_15, analysis__V_10_10, &analysis__CallB_9);
    }
#line 11448 "analysis.c"
    {
#line 11450 "analysis.c"
      mercury__private_builtin__superclass_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_call_pattern_11, (MR_Integer) 1, &analysis__TypeClassInfo_for_partial_order_16);
    }
#line 137 "analysis.m"
    analysis__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), analysis__TypeClassInfo_for_partial_order_16, (MR_Integer) 0)), (MR_Integer) 6)));
#line 137 "analysis.m"
    {
#line 137 "analysis.m"
      return analysis__succeeded = analysis__func_0(((MR_Box) analysis__TypeClassInfo_for_partial_order_16), analysis__FuncInfo_5, analysis__CallA_6, analysis__CallB_9);
    }
#line 1027 "analysis.m"
    return analysis__succeeded;
#line 1027 "analysis.m"
  }
#line 1023 "analysis.m"
}

#line 1016 "analysis.m"
static MR_bool MR_CALL 
analysis__imdg_dependent_modules_5_f_0_1(
#line 1016 "analysis.m"
  MR_Box analysis__closure_arg,
#line 1016 "analysis.m"
  MR_Box analysis__wrapper_arg_1,
#line 1016 "analysis.m"
  MR_Box * analysis__wrapper_arg_2)
#line 1016 "analysis.m"
{
#line 1016 "analysis.m"
  {
#line 1016 "analysis.m"
    MR_bool analysis__succeeded;
#line 1016 "analysis.m"
    MR_Box analysis__closure = analysis__closure_arg;
#line 1016 "analysis.m"
    MR_Word analysis__conv2_ModuleName_8;

#line 1016 "analysis.m"
    {
#line 1016 "analysis.m"
      analysis__succeeded = analysis__arc_module_name_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 3))), (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 4)), (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 5)), ((MR_Word) analysis__wrapper_arg_1), &analysis__conv2_ModuleName_8);
    }
#line 1016 "analysis.m"
    if (analysis__succeeded)
#line 1016 "analysis.m"
      {
#line 1016 "analysis.m"
        *analysis__wrapper_arg_2 = ((MR_Box) (analysis__conv2_ModuleName_8));
#line 1016 "analysis.m"
        analysis__succeeded = MR_TRUE;
#line 1016 "analysis.m"
      }
#line 1016 "analysis.m"
    return analysis__succeeded;
#line 1016 "analysis.m"
  }
#line 1016 "analysis.m"
}

#line 1007 "analysis.m"
MR_Word MR_CALL 
analysis__imdg_dependent_modules_5_f_0(
#line 1007 "analysis.m"
  MR_Word analysis__TypeClassInfo_for_call_pattern_16,
#line 1007 "analysis.m"
  MR_Word analysis__ModuleMap_7,
#line 1007 "analysis.m"
  MR_String analysis__AnalysisName_8,
#line 1007 "analysis.m"
  MR_Word analysis__FuncId_9,
#line 1007 "analysis.m"
  MR_Box analysis__FuncInfo_10,
#line 1007 "analysis.m"
  MR_Box analysis__Call_11)
#line 1007 "analysis.m"
{
#line 1011 "analysis.m"
  {
#line 1011 "analysis.m"
    MR_bool analysis__succeeded;
#line 1011 "analysis.m"
    MR_Word analysis__HeadVar__6_6;
#line 1011 "analysis.m"
    MR_Word analysis__IMDGEntries_13;
#line 1013 "analysis.m"
    MR_Word analysis__TypeCtorInfo_19_19;
#line 1013 "analysis.m"
    MR_Word analysis__TypeInfo_20_20;
#line 1013 "analysis.m"
    MR_Word analysis__FuncAnalysisMap_12;
#line 1013 "analysis.m"
    MR_Box analysis__conv0_FuncAnalysisMap_12;
#line 1014 "analysis.m"
    MR_Box analysis__conv1_IMDGEntries_13;

#line 1013 "analysis.m"
    {
#line 1013 "analysis.m"
      analysis__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &analysis_scalar_common_2[4], analysis__ModuleMap_7, ((MR_Box) (analysis__AnalysisName_8)), &analysis__conv0_FuncAnalysisMap_12);
    }
#line 1013 "analysis.m"
    if (analysis__succeeded)
#line 1013 "analysis.m"
      {
#line 1013 "analysis.m"
        analysis__FuncAnalysisMap_12 = ((MR_Word) analysis__conv0_FuncAnalysisMap_12);
#line 1013 "analysis.m"
        analysis__succeeded = MR_TRUE;
#line 1013 "analysis.m"
      }
#line 1013 "analysis.m"
    if (analysis__succeeded)
#line 1013 "analysis.m"
      {
#line 11564 "analysis.c"
        analysis__TypeCtorInfo_19_19 = (MR_Word) &analysis__analysis__type_ctor_info_func_id_0;
#line 11566 "analysis.c"
        analysis__TypeInfo_20_20 = (MR_Word) &analysis_scalar_common_1[2];
#line 1014 "analysis.m"
        {
#line 1014 "analysis.m"
          analysis__succeeded = mercury__map__search_3_p_0(analysis__TypeCtorInfo_19_19, analysis__TypeInfo_20_20, analysis__FuncAnalysisMap_12, ((MR_Box) (analysis__FuncId_9)), &analysis__conv1_IMDGEntries_13);
        }
#line 1014 "analysis.m"
        if (analysis__succeeded)
#line 1014 "analysis.m"
          {
#line 1014 "analysis.m"
            analysis__IMDGEntries_13 = ((MR_Word) analysis__conv1_IMDGEntries_13);
#line 1014 "analysis.m"
            analysis__succeeded = MR_TRUE;
#line 1014 "analysis.m"
          }
#line 1013 "analysis.m"
      }
#line 1011 "analysis.m"
    if (analysis__succeeded)
#line 1016 "analysis.m"
      {
#line 1016 "analysis.m"
        MR_Word analysis__TypeCtorInfo_21_21 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 1016 "analysis.m"
        MR_Word analysis__V_14_14;
#line 1016 "analysis.m"
        MR_Word analysis__V_15_15;

#line 1016 "analysis.m"
        {
#line 1016 "analysis.m"
          analysis__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1016 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__V_15_15, 0) = ((MR_Box) (&analysis_scalar_common_7[2]));
#line 1016 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__V_15_15, 1) = ((MR_Box) (analysis__imdg_dependent_modules_5_f_0_1));
#line 1016 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__V_15_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1016 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__V_15_15, 3) = ((MR_Box) (analysis__TypeClassInfo_for_call_pattern_16));
#line 1016 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__V_15_15, 4) = analysis__FuncInfo_10;
#line 1016 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__V_15_15, 5) = analysis__Call_11;
#line 1016 "analysis.m"
        }
#line 1016 "analysis.m"
        {
#line 1016 "analysis.m"
          analysis__V_14_14 = mercury__list__filter_map_2_f_0((MR_Word) &analysis__analysis__type_ctor_info_imdg_arc_0, analysis__TypeCtorInfo_21_21, analysis__V_15_15, analysis__IMDGEntries_13);
        }
#line 1016 "analysis.m"
        {
#line 1016 "analysis.m"
          analysis__HeadVar__6_6 = mercury__set__from_list_1_f_0(analysis__TypeCtorInfo_21_21, analysis__V_14_14);
        }
#line 1016 "analysis.m"
      }
#line 1011 "analysis.m"
    else
#line 1019 "analysis.m"
      {
#line 1019 "analysis.m"
        {
#line 1019 "analysis.m"
          analysis__HeadVar__6_6 = mercury__set__init_0_f_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0);
        }
#line 1019 "analysis.m"
      }
#line 1011 "analysis.m"
    return analysis__HeadVar__6_6;
#line 1011 "analysis.m"
  }
#line 1007 "analysis.m"
}

#line 985 "analysis.m"
void MR_CALL 
analysis__replace_result_in_list_6_p_0(
#line 985 "analysis.m"
  MR_Word analysis__TypeClassInfo_for_analysis_25,
#line 985 "analysis.m"
  MR_Box analysis__FuncInfo_7,
#line 985 "analysis.m"
  MR_Box analysis__Call_8,
#line 985 "analysis.m"
  MR_Box analysis__Answer_9,
#line 985 "analysis.m"
  MR_Word analysis__Status_10,
#line 985 "analysis.m"
  MR_Word analysis__Results0_11,
#line 985 "analysis.m"
  MR_Word * analysis__Results_12)
#line 985 "analysis.m"
{
#line 992 "analysis.m"
  {
#line 992 "analysis.m"
    MR_bool analysis__succeeded;

#line 992 "analysis.m"
    if ((analysis__Results0_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 992 "analysis.m"
      {
#line 993 "analysis.m"
        {
#line 993 "analysis.m"
          mercury__require__unexpected_3_p_0((MR_String) "analysis", (MR_String) "predicate \140analysis.replace_result_in_list\'/6", (MR_String) "found no result to replace");
#line 993 "analysis.m"
          return;
        }
#line 992 "analysis.m"
      }
#line 992 "analysis.m"
    else
#line 995 "analysis.m"
      {
#line 995 "analysis.m"
        MR_Word analysis__TypeInfo_26_26;
#line 995 "analysis.m"
        MR_Word analysis__TypeClassInfo_for_analysis_27;
#line 995 "analysis.m"
        MR_Word analysis__TypeInfo_30_30;
#line 995 "analysis.m"
        MR_Word analysis__H0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), analysis__Results0_11, (MR_Integer) 0)));
#line 995 "analysis.m"
        MR_Word analysis__T0_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), analysis__Results0_11, (MR_Integer) 1)));
#line 995 "analysis.m"
        MR_Box analysis__HCall_15;
#line 995 "analysis.m"
        MR_Word analysis__H_16;
#line 995 "analysis.m"
        MR_Word analysis__T_17;
#line 995 "analysis.m"
        MR_Word analysis__V_18_18;
#line 995 "analysis.m"
        MR_Box analysis__V_19_19;
#line 996 "analysis.m"
        MR_Box analysis__V_23_23;
#line 996 "analysis.m"
        MR_Word analysis__V_24_24;
#line 997 "analysis.m"
        MR_Word analysis__TypeClassInfo_for_call_pattern_31;
#line 997 "analysis.m"
        MR_Word analysis__TypeClassInfo_for_partial_order_33;
#line 137 "analysis.m"
        MR_bool MR_CALL (* analysis__func_0)(MR_Box, MR_Box, MR_Box, MR_Box);

#line 996 "analysis.m"
        analysis__TypeClassInfo_for_analysis_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__H0_13, (MR_Integer) 0)));
#line 996 "analysis.m"
        analysis__V_19_19 = (MR_hl_field(MR_mktag(0), analysis__H0_13, (MR_Integer) 1));
#line 996 "analysis.m"
        analysis__V_23_23 = (MR_hl_field(MR_mktag(0), analysis__H0_13, (MR_Integer) 2));
#line 996 "analysis.m"
        analysis__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__H0_13, (MR_Integer) 3)));
#line 996 "analysis.m"
        {
#line 996 "analysis.m"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_27, (MR_Integer) 4, &analysis__TypeInfo_26_26);
        }
#line 996 "analysis.m"
        {
#line 996 "analysis.m"
          analysis__V_18_18 = mercury__univ__univ_1_f_0(analysis__TypeInfo_26_26, analysis__V_19_19);
        }
#line 996 "analysis.m"
        {
#line 996 "analysis.m"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_25, (MR_Integer) 4, &analysis__TypeInfo_30_30);
        }
#line 996 "analysis.m"
        {
#line 996 "analysis.m"
          mercury__univ__det_univ_to_type_2_p_0(analysis__TypeInfo_30_30, analysis__V_18_18, &analysis__HCall_15);
        }
#line 11744 "analysis.c"
        {
#line 11746 "analysis.c"
          mercury__private_builtin__superclass_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_25, (MR_Integer) 1, &analysis__TypeClassInfo_for_call_pattern_31);
        }
#line 11749 "analysis.c"
        {
#line 11751 "analysis.c"
          mercury__private_builtin__superclass_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_call_pattern_31, (MR_Integer) 1, &analysis__TypeClassInfo_for_partial_order_33);
        }
#line 137 "analysis.m"
        analysis__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), analysis__TypeClassInfo_for_partial_order_33, (MR_Integer) 0)), (MR_Integer) 6)));
#line 137 "analysis.m"
        {
#line 137 "analysis.m"
          analysis__succeeded = analysis__func_0(((MR_Box) analysis__TypeClassInfo_for_partial_order_33), analysis__FuncInfo_7, analysis__Call_8, analysis__HCall_15);
        }
#line 1000 "analysis.m"
        if (analysis__succeeded)
#line 998 "analysis.m"
          {
#line 998 "analysis.m"
            {
#line 998 "analysis.m"
              analysis__H_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 998 "analysis.m"
              MR_hl_field(MR_mktag(0), analysis__H_16, 0) = ((MR_Box) (analysis__TypeClassInfo_for_analysis_25));
#line 998 "analysis.m"
              MR_hl_field(MR_mktag(0), analysis__H_16, 1) = analysis__Call_8;
#line 998 "analysis.m"
              MR_hl_field(MR_mktag(0), analysis__H_16, 2) = analysis__Answer_9;
#line 998 "analysis.m"
              MR_hl_field(MR_mktag(0), analysis__H_16, 3) = ((MR_Box) (analysis__Status_10));
#line 998 "analysis.m"
            }
#line 999 "analysis.m"
            analysis__T_17 = analysis__T0_14;
#line 998 "analysis.m"
          }
#line 1000 "analysis.m"
        else
#line 1001 "analysis.m"
          {
#line 1001 "analysis.m"
            analysis__H_16 = analysis__H0_13;
#line 1002 "analysis.m"
            {
#line 1002 "analysis.m"
              analysis__replace_result_in_list_6_p_0(analysis__TypeClassInfo_for_analysis_25, analysis__FuncInfo_7, analysis__Call_8, analysis__Answer_9, analysis__Status_10, analysis__T0_14, &analysis__T_17);
            }
#line 1001 "analysis.m"
          }
#line 1004 "analysis.m"
        {
#line 1004 "analysis.m"
          MR_Word base;
#line 1004 "analysis.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1004 "analysis.m"
          *analysis__Results_12 = base;
#line 1004 "analysis.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (analysis__H_16));
#line 1004 "analysis.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (analysis__T_17));
#line 1004 "analysis.m"
        }
#line 995 "analysis.m"
      }
#line 992 "analysis.m"
  }
#line 985 "analysis.m"
}

#line 967 "analysis.m"
void MR_CALL 
analysis__replace_result_in_analysis_map_8_p_0(
#line 967 "analysis.m"
  MR_Word analysis__TypeClassInfo_for_analysis_24,
#line 967 "analysis.m"
  MR_Word analysis__ModuleName_9,
#line 967 "analysis.m"
  MR_Word analysis__FuncId_10,
#line 967 "analysis.m"
  MR_Box analysis__FuncInfo_11,
#line 967 "analysis.m"
  MR_Box analysis__CallPattern_12,
#line 967 "analysis.m"
  MR_Box analysis__AnswerPattern_13,
#line 967 "analysis.m"
  MR_Word analysis__Status_14,
#line 967 "analysis.m"
  MR_Word analysis__Map0_15,
#line 967 "analysis.m"
  MR_Word * analysis__Map_16)
#line 967 "analysis.m"
{
#line 974 "analysis.m"
  {
#line 974 "analysis.m"
    MR_bool analysis__succeeded;
#line 974 "analysis.m"
    MR_Word analysis__TypeCtorInfo_25_25;
#line 974 "analysis.m"
    MR_Word analysis__TypeInfo_26_26;
#line 974 "analysis.m"
    MR_Word analysis__TypeCtorInfo_27_27;
#line 974 "analysis.m"
    MR_Word analysis__TypeInfo_28_28;
#line 974 "analysis.m"
    MR_Word analysis__TypeCtorInfo_29_29;
#line 974 "analysis.m"
    MR_Word analysis__TypeInfo_30_30;
#line 974 "analysis.m"
    MR_String analysis__AnalysisName_17;
#line 974 "analysis.m"
    MR_Word analysis__ModuleResults0_18;
#line 974 "analysis.m"
    MR_Word analysis__AnalysisResults0_19;
#line 974 "analysis.m"
    MR_Word analysis__FuncResults0_20;
#line 974 "analysis.m"
    MR_Word analysis__FuncResults_21;
#line 974 "analysis.m"
    MR_Word analysis__V_22_22;
#line 974 "analysis.m"
    MR_Word analysis__V_23_23;
#line 86 "analysis.m"
    MR_Box analysis__V_31_31;
#line 86 "analysis.m"
    MR_Box analysis__V_32_32;
#line 86 "analysis.m"
    MR_Box MR_CALL (* analysis__func_0)(MR_Box) = ((MR_Box MR_CALL (*)(MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), analysis__TypeClassInfo_for_analysis_24, (MR_Integer) 0)), (MR_Integer) 5)));
#line 86 "analysis.m"
    MR_Box analysis__conv1_AnalysisName_17;
#line 976 "analysis.m"
    MR_Box analysis__conv2_ModuleResults0_18;
#line 977 "analysis.m"
    MR_Box analysis__conv3_AnalysisResults0_19;
#line 978 "analysis.m"
    MR_Box analysis__conv4_FuncResults0_20;

#line 86 "analysis.m"
    {
#line 86 "analysis.m"
      analysis__conv1_AnalysisName_17 = analysis__func_0(((MR_Box) analysis__TypeClassInfo_for_analysis_24));
    }
#line 86 "analysis.m"
    analysis__AnalysisName_17 = ((MR_String) analysis__conv1_AnalysisName_17);
#line 11892 "analysis.c"
    analysis__TypeCtorInfo_25_25 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 11894 "analysis.c"
    analysis__TypeInfo_26_26 = (MR_Word) &analysis_scalar_common_2[3];
#line 976 "analysis.m"
    {
#line 976 "analysis.m"
      analysis__conv2_ModuleResults0_18 = mercury__map__lookup_2_f_0(analysis__TypeCtorInfo_25_25, analysis__TypeInfo_26_26, analysis__Map0_15, ((MR_Box) (analysis__ModuleName_9)));
    }
#line 976 "analysis.m"
    analysis__ModuleResults0_18 = ((MR_Word) analysis__conv2_ModuleResults0_18);
#line 11903 "analysis.c"
    analysis__TypeCtorInfo_27_27 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 11905 "analysis.c"
    analysis__TypeInfo_28_28 = (MR_Word) &analysis_scalar_common_2[2];
#line 977 "analysis.m"
    {
#line 977 "analysis.m"
      analysis__conv3_AnalysisResults0_19 = mercury__map__lookup_2_f_0(analysis__TypeCtorInfo_27_27, analysis__TypeInfo_28_28, analysis__ModuleResults0_18, ((MR_Box) (analysis__AnalysisName_17)));
    }
#line 977 "analysis.m"
    analysis__AnalysisResults0_19 = ((MR_Word) analysis__conv3_AnalysisResults0_19);
#line 11914 "analysis.c"
    analysis__TypeCtorInfo_29_29 = (MR_Word) &analysis__analysis__type_ctor_info_func_id_0;
#line 11916 "analysis.c"
    analysis__TypeInfo_30_30 = (MR_Word) &analysis_scalar_common_1[1];
#line 978 "analysis.m"
    {
#line 978 "analysis.m"
      analysis__conv4_FuncResults0_20 = mercury__map__lookup_2_f_0(analysis__TypeCtorInfo_29_29, analysis__TypeInfo_30_30, analysis__AnalysisResults0_19, ((MR_Box) (analysis__FuncId_10)));
    }
#line 978 "analysis.m"
    analysis__FuncResults0_20 = ((MR_Word) analysis__conv4_FuncResults0_20);
#line 979 "analysis.m"
    {
#line 979 "analysis.m"
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
#line 981 "analysis.m"
    {
#line 981 "analysis.m"
      *analysis__Map_16 = mercury__map__det_update_3_f_0(analysis__TypeCtorInfo_25_25, analysis__TypeInfo_26_26, analysis__Map0_15, ((MR_Box) (analysis__ModuleName_9)), ((MR_Box) (analysis__V_22_22)));
    }
#line 974 "analysis.m"
  }
#line 967 "analysis.m"
}

#line 957 "analysis.m"
static void MR_CALL 
analysis__update_analysis_registry_5_9_p_0_3(
#line 957 "analysis.m"
  MR_Box analysis__closure_arg,
#line 957 "analysis.m"
  MR_Box analysis__wrapper_arg_1,
#line 957 "analysis.m"
  MR_Box analysis__wrapper_arg_2,
#line 957 "analysis.m"
  MR_Box * analysis__wrapper_arg_3,
#line 957 "analysis.m"
  MR_Box analysis__wrapper_arg_4,
#line 957 "analysis.m"
  MR_Box * analysis__wrapper_arg_5)
#line 957 "analysis.m"
{
#line 957 "analysis.m"
  {
#line 957 "analysis.m"
    MR_Box analysis__closure = analysis__closure_arg;
#line 957 "analysis.m"
    MR_Word analysis__conv9_STATE_VARIABLE_Info_16;

#line 957 "analysis.m"
    {
#line 957 "analysis.m"
      analysis__taint_module_overall_status_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 4))), ((MR_Word) analysis__wrapper_arg_1), ((MR_Word) analysis__wrapper_arg_2), &analysis__conv9_STATE_VARIABLE_Info_16);
    }
#line 957 "analysis.m"
    *analysis__wrapper_arg_3 = ((MR_Box) (analysis__conv9_STATE_VARIABLE_Info_16));
#line 957 "analysis.m"
  }
#line 957 "analysis.m"
}

#line 952 "analysis.m"
static MR_bool MR_CALL 
analysis__update_analysis_registry_5_9_p_0_2(
#line 952 "analysis.m"
  MR_Box analysis__closure_arg,
#line 952 "analysis.m"
  MR_Box analysis__wrapper_arg_1,
#line 952 "analysis.m"
  MR_Box * analysis__wrapper_arg_2)
#line 952 "analysis.m"
{
#line 952 "analysis.m"
  {
#line 952 "analysis.m"
    MR_bool analysis__succeeded;
#line 952 "analysis.m"
    MR_Box analysis__closure = analysis__closure_arg;
#line 952 "analysis.m"
    MR_Word analysis__conv8_LambdaHeadVar__2_62;

#line 952 "analysis.m"
    {
#line 952 "analysis.m"
      analysis__succeeded = analysis__IntroducedFrom__func__update_analysis_registry_5__952__1_1_f_0(((MR_Word) analysis__wrapper_arg_1), &analysis__conv8_LambdaHeadVar__2_62);
    }
#line 952 "analysis.m"
    if (analysis__succeeded)
#line 952 "analysis.m"
      {
#line 952 "analysis.m"
        *analysis__wrapper_arg_2 = ((MR_Box) (analysis__conv8_LambdaHeadVar__2_62));
#line 952 "analysis.m"
        analysis__succeeded = MR_TRUE;
#line 952 "analysis.m"
      }
#line 952 "analysis.m"
    return analysis__succeeded;
#line 952 "analysis.m"
  }
#line 952 "analysis.m"
}

#line 925 "analysis.m"
static void MR_CALL 
analysis__update_analysis_registry_5_9_p_0_1(
#line 925 "analysis.m"
  MR_Box analysis__closure_arg,
#line 925 "analysis.m"
  MR_Box analysis__wrapper_arg_1,
#line 925 "analysis.m"
  MR_Box analysis__wrapper_arg_2,
#line 925 "analysis.m"
  MR_Box * analysis__wrapper_arg_3,
#line 925 "analysis.m"
  MR_Box analysis__wrapper_arg_4,
#line 925 "analysis.m"
  MR_Box * analysis__wrapper_arg_5)
#line 925 "analysis.m"
{
#line 925 "analysis.m"
  {
#line 925 "analysis.m"
    MR_Box analysis__closure = analysis__closure_arg;
#line 925 "analysis.m"
    MR_Word analysis__conv2_STATE_VARIABLE_Info_16;

#line 925 "analysis.m"
    {
#line 925 "analysis.m"
      analysis__taint_module_overall_status_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 4))), ((MR_Word) analysis__wrapper_arg_1), ((MR_Word) analysis__wrapper_arg_2), &analysis__conv2_STATE_VARIABLE_Info_16);
    }
#line 925 "analysis.m"
    *analysis__wrapper_arg_3 = ((MR_Box) (analysis__conv2_STATE_VARIABLE_Info_16));
#line 925 "analysis.m"
  }
#line 925 "analysis.m"
}

#line 877 "analysis.m"
void MR_CALL 
analysis__update_analysis_registry_5_9_p_0(
#line 877 "analysis.m"
  MR_Word analysis__ModuleInfo_10,
#line 877 "analysis.m"
  MR_Word analysis__ModuleName_11,
#line 877 "analysis.m"
  MR_String analysis__AnalysisName_12,
#line 877 "analysis.m"
  MR_Word analysis__FuncId_13,
#line 877 "analysis.m"
  MR_Word analysis__NewResult_14,
#line 877 "analysis.m"
  MR_Word analysis__STATE_VARIABLE_Info_0_40,
#line 877 "analysis.m"
  MR_Word * analysis__STATE_VARIABLE_Info_41)
#line 877 "analysis.m"
{
#line 882 "analysis.m"
  {
#line 882 "analysis.m"
    MR_bool analysis__succeeded;
#line 882 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_analysis_158 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__NewResult_14, (MR_Integer) 0)));
#line 882 "analysis.m"
    MR_Box analysis__Call_17 = (MR_hl_field(MR_mktag(0), analysis__NewResult_14, (MR_Integer) 1));
#line 882 "analysis.m"
    MR_Box analysis__NewAnswer_18 = (MR_hl_field(MR_mktag(0), analysis__NewResult_14, (MR_Integer) 2));
#line 882 "analysis.m"
    MR_Word analysis__NewStatus_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__NewResult_14, (MR_Integer) 3)));
#line 882 "analysis.m"
    MR_Box analysis__FuncInfo_20;
#line 882 "analysis.m"
    MR_Word analysis__MaybeResult_21;
#line 882 "analysis.m"
    MR_Word analysis__Globals_22;
#line 882 "analysis.m"
    MR_Word analysis__STATE_VARIABLE_Info_50_50;
#line 884 "analysis.m"
    MR_Box analysis__V_218_218;
#line 884 "analysis.m"
    MR_Box analysis__V_219_219;
#line 959 "analysis.m"
    MR_Word analysis__Requests_33;
#line 948 "analysis.m"
    MR_Word analysis__TypeCtorInfo_201_201;
#line 948 "analysis.m"
    MR_Word analysis__TypeInfo_202_202;
#line 948 "analysis.m"
    MR_Word analysis__TypeCtorInfo_203_203;
#line 948 "analysis.m"
    MR_Word analysis__TypeInfo_204_204;
#line 948 "analysis.m"
    MR_Word analysis__ModuleRequests_32;
#line 948 "analysis.m"
    MR_Word analysis__V_58_58;
#line 948 "analysis.m"
    MR_Word analysis__V_59_59;
#line 948 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_compiler_198;
#line 948 "analysis.m"
    MR_Box analysis__V_149_149;
#line 948 "analysis.m"
    MR_Word analysis__V_150_150;
#line 948 "analysis.m"
    MR_Word analysis__V_151_151;
#line 948 "analysis.m"
    MR_Word analysis__V_152_152;
#line 948 "analysis.m"
    MR_Word analysis__V_153_153;
#line 948 "analysis.m"
    MR_Word analysis__V_154_154;
#line 948 "analysis.m"
    MR_Word analysis__V_155_155;
#line 948 "analysis.m"
    MR_Word analysis__V_156_156;
#line 948 "analysis.m"
    MR_Word analysis__V_157_157;
#line 948 "analysis.m"
    MR_Box analysis__conv5_ModuleRequests_32;
#line 949 "analysis.m"
    MR_Box analysis__conv6_V_59_59;
#line 949 "analysis.m"
    MR_Box analysis__conv7_Requests_33;
#line 950 "analysis.m"
    MR_Word analysis__V_34_34;
#line 950 "analysis.m"
    MR_Word analysis__V_35_35;

#line 884 "analysis.m"
    {
#line 884 "analysis.m"
      analysis__get_func_info_6_p_0(analysis__TypeClassInfo_for_analysis_158, analysis__ModuleInfo_10, analysis__ModuleName_11, analysis__FuncId_13, &analysis__FuncInfo_20);
    }
#line 885 "analysis.m"
    {
#line 885 "analysis.m"
      analysis__lookup_exactly_matching_result_even_from_invalid_modules_6_p_0(analysis__TypeClassInfo_for_analysis_158, analysis__STATE_VARIABLE_Info_0_40, analysis__ModuleName_11, analysis__FuncId_13, analysis__FuncInfo_20, analysis__Call_17, &analysis__MaybeResult_21);
    }
#line 887 "analysis.m"
    {
#line 887 "analysis.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(analysis__ModuleInfo_10, &analysis__Globals_22);
    }
#line 928 "analysis.m"
    if ((analysis__MaybeResult_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 931 "analysis.m"
      {
#line 931 "analysis.m"
        MR_Word analysis__TypeCtorInfo_194_194 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 931 "analysis.m"
        MR_Word analysis__TypeInfo_195_195 = (MR_Word) &analysis_scalar_common_2[3];
#line 931 "analysis.m"
        MR_Word analysis__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 7)));
#line 931 "analysis.m"
        MR_Word analysis__V_46_46;
#line 931 "analysis.m"
        MR_Word analysis__V_47_47;
#line 931 "analysis.m"
        MR_Word analysis__OldMap0_70;
#line 931 "analysis.m"
        MR_Word analysis__OldMap_71;
#line 932 "analysis.m"
        MR_Word analysis__TypeClassInfo_for_compiler_193 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 0)));
#line 932 "analysis.m"
        MR_Box analysis__V_121_121 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 1));
#line 932 "analysis.m"
        MR_Word analysis__V_122_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 2)));
#line 932 "analysis.m"
        MR_Word analysis__V_123_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 3)));
#line 932 "analysis.m"
        MR_Word analysis__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 4)));
#line 932 "analysis.m"
        MR_Word analysis__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 5)));
#line 932 "analysis.m"
        MR_Word analysis__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 6)));
#line 932 "analysis.m"
        MR_Word analysis__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 8)));
#line 932 "analysis.m"
        MR_Word analysis__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 9)));
#line 932 "analysis.m"
        MR_Word analysis__V_129_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 10)));
#line 932 "analysis.m"
        MR_Box analysis__conv0_OldMap0_70;
#line 935 "analysis.m"
        MR_Word analysis__TypeClassInfo_for_compiler_196;
#line 935 "analysis.m"
        MR_Box analysis__V_130_130;
#line 935 "analysis.m"
        MR_Word analysis__V_131_131;
#line 935 "analysis.m"
        MR_Word analysis__V_132_132;
#line 935 "analysis.m"
        MR_Word analysis__V_133_133;
#line 935 "analysis.m"
        MR_Word analysis__V_134_134;
#line 935 "analysis.m"
        MR_Word analysis__V_135_135;
#line 935 "analysis.m"
        MR_Word analysis__V_136_136;
#line 935 "analysis.m"
        MR_Word analysis__V_137_137;
#line 935 "analysis.m"
        MR_Word analysis__V_138_138;
#line 935 "analysis.m"
        MR_Word analysis__TypeClassInfo_for_compiler_197;
#line 935 "analysis.m"
        MR_Box analysis__V_139_139;
#line 935 "analysis.m"
        MR_Word analysis__V_140_140;
#line 935 "analysis.m"
        MR_Word analysis__V_141_141;
#line 935 "analysis.m"
        MR_Word analysis__V_142_142;
#line 935 "analysis.m"
        MR_Word analysis__V_143_143;
#line 935 "analysis.m"
        MR_Word analysis__V_144_144;
#line 935 "analysis.m"
        MR_Word analysis__V_146_146;
#line 935 "analysis.m"
        MR_Word analysis__V_147_147;
#line 935 "analysis.m"
        MR_Word analysis__V_148_148;
#line 935 "analysis.m"
        MR_Word analysis__V_145_145;

#line 932 "analysis.m"
        {
#line 932 "analysis.m"
          analysis__conv0_OldMap0_70 = mercury__map__det_elem_2_f_0(analysis__TypeCtorInfo_194_194, analysis__TypeInfo_195_195, ((MR_Box) (analysis__ModuleName_11)), analysis__V_44_44);
        }
#line 932 "analysis.m"
        analysis__OldMap0_70 = ((MR_Word) analysis__conv0_OldMap0_70);
#line 933 "analysis.m"
        {
#line 933 "analysis.m"
          analysis__record_result_in_analysis_map_6_p_0(analysis__TypeClassInfo_for_analysis_158, analysis__FuncId_13, analysis__Call_17, analysis__NewAnswer_18, analysis__NewStatus_19, analysis__OldMap0_70, &analysis__OldMap_71);
        }
#line 935 "analysis.m"
        analysis__TypeClassInfo_for_compiler_196 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 0)));
#line 935 "analysis.m"
        analysis__V_130_130 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 1));
#line 935 "analysis.m"
        analysis__V_131_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 2)));
#line 935 "analysis.m"
        analysis__V_132_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 3)));
#line 935 "analysis.m"
        analysis__V_133_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 4)));
#line 935 "analysis.m"
        analysis__V_134_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 5)));
#line 935 "analysis.m"
        analysis__V_135_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 6)));
#line 935 "analysis.m"
        analysis__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 7)));
#line 935 "analysis.m"
        analysis__V_136_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 8)));
#line 935 "analysis.m"
        analysis__V_137_137 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 9)));
#line 935 "analysis.m"
        analysis__V_138_138 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 10)));
#line 935 "analysis.m"
        {
#line 935 "analysis.m"
          analysis__V_47_47 = mercury__map__f_101_108_101_109_32_58_61_3_f_0(analysis__TypeCtorInfo_194_194, analysis__TypeInfo_195_195, ((MR_Box) (analysis__ModuleName_11)), analysis__V_46_46, ((MR_Box) (analysis__OldMap_71)));
        }
#line 935 "analysis.m"
        analysis__TypeClassInfo_for_compiler_197 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 0)));
#line 935 "analysis.m"
        analysis__V_139_139 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 1));
#line 935 "analysis.m"
        analysis__V_140_140 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 2)));
#line 935 "analysis.m"
        analysis__V_141_141 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 3)));
#line 935 "analysis.m"
        analysis__V_142_142 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 4)));
#line 935 "analysis.m"
        analysis__V_143_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 5)));
#line 935 "analysis.m"
        analysis__V_144_144 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 6)));
#line 935 "analysis.m"
        analysis__V_145_145 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 7)));
#line 935 "analysis.m"
        analysis__V_146_146 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 8)));
#line 935 "analysis.m"
        analysis__V_147_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 9)));
#line 935 "analysis.m"
        analysis__V_148_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 10)));
#line 935 "analysis.m"
        {
#line 935 "analysis.m"
          analysis__STATE_VARIABLE_Info_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 935 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_50_50, 0) = ((MR_Box) (analysis__TypeClassInfo_for_compiler_197));
#line 935 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_50_50, 1) = analysis__V_139_139;
#line 935 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_50_50, 2) = ((MR_Box) (analysis__V_140_140));
#line 935 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_50_50, 3) = ((MR_Box) (analysis__V_141_141));
#line 935 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_50_50, 4) = ((MR_Box) (analysis__V_142_142));
#line 935 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_50_50, 5) = ((MR_Box) (analysis__V_143_143));
#line 935 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_50_50, 6) = ((MR_Box) (analysis__V_144_144));
#line 935 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_50_50, 7) = ((MR_Box) (analysis__V_47_47));
#line 935 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_50_50, 8) = ((MR_Box) (analysis__V_146_146));
#line 935 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_50_50, 9) = ((MR_Box) (analysis__V_147_147));
#line 935 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_50_50, 10) = ((MR_Box) (analysis__V_148_148));
#line 935 "analysis.m"
        }
#line 931 "analysis.m"
      }
#line 928 "analysis.m"
    else
#line 891 "analysis.m"
      {
#line 891 "analysis.m"
        MR_Word analysis__OldResult_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), analysis__MaybeResult_21, (MR_Integer) 0)));
#line 891 "analysis.m"
        MR_Box analysis__OldAnswer_25 = (MR_hl_field(MR_mktag(0), analysis__OldResult_23, (MR_Integer) 1));
#line 891 "analysis.m"
        MR_Word analysis__OldStatus_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__OldResult_23, (MR_Integer) 2)));
#line 892 "analysis.m"
        MR_Box analysis___OldCall_24 = (MR_hl_field(MR_mktag(0), analysis__OldResult_23, (MR_Integer) 0));
#line 893 "analysis.m"
        MR_Word analysis__TypeClassInfo_for_answer_pattern_159;
#line 893 "analysis.m"
        MR_Word analysis__TypeClassInfo_for_partial_order_161;

#line 12360 "analysis.c"
        {
#line 12362 "analysis.c"
          mercury__private_builtin__superclass_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_158, (MR_Integer) 2, &analysis__TypeClassInfo_for_answer_pattern_159);
        }
#line 12365 "analysis.c"
        {
#line 12367 "analysis.c"
          mercury__private_builtin__superclass_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_answer_pattern_159, (MR_Integer) 1, &analysis__TypeClassInfo_for_partial_order_161);
        }
#line 893 "analysis.m"
        {
#line 893 "analysis.m"
          analysis__succeeded = analysis__equivalent_3_p_0(analysis__TypeClassInfo_for_partial_order_161, analysis__FuncInfo_20, analysis__NewAnswer_18, analysis__OldAnswer_25);
        }
#line 904 "analysis.m"
        if (analysis__succeeded)
#line 895 "analysis.m"
          {
#line 894 "analysis.m"
            {
#line 894 "analysis.m"
              analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_109_115_103_95_95_104_111_52_95_95_91_54_93_95_48_3_p_0(analysis__TypeClassInfo_for_analysis_158, analysis__ModuleName_11, analysis__FuncId_13, analysis__Call_17, analysis__NewAnswer_18);
            }
#line 896 "analysis.m"
            analysis__succeeded = (analysis__NewStatus_19 == analysis__OldStatus_26);
#line 896 "analysis.m"
            analysis__succeeded = !(analysis__succeeded);
#line 901 "analysis.m"
            if (analysis__succeeded)
#line 897 "analysis.m"
              {
#line 897 "analysis.m"
                MR_Word analysis__OldMap0_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 7)));
#line 897 "analysis.m"
                MR_Word analysis__OldMap_28;
#line 897 "analysis.m"
                MR_Word analysis__TypeClassInfo_for_compiler_169 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 0)));
#line 897 "analysis.m"
                MR_Box analysis__V_74_74 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 1));
#line 897 "analysis.m"
                MR_Word analysis__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 2)));
#line 897 "analysis.m"
                MR_Word analysis__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 3)));
#line 897 "analysis.m"
                MR_Word analysis__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 4)));
#line 897 "analysis.m"
                MR_Word analysis__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 5)));
#line 897 "analysis.m"
                MR_Word analysis__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 6)));
#line 897 "analysis.m"
                MR_Word analysis__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 8)));
#line 897 "analysis.m"
                MR_Word analysis__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 9)));
#line 897 "analysis.m"
                MR_Word analysis__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 10)));
#line 900 "analysis.m"
                MR_Word analysis__TypeClassInfo_for_compiler_170;
#line 900 "analysis.m"
                MR_Box analysis__V_83_83;
#line 900 "analysis.m"
                MR_Word analysis__V_84_84;
#line 900 "analysis.m"
                MR_Word analysis__V_85_85;
#line 900 "analysis.m"
                MR_Word analysis__V_86_86;
#line 900 "analysis.m"
                MR_Word analysis__V_87_87;
#line 900 "analysis.m"
                MR_Word analysis__V_88_88;
#line 900 "analysis.m"
                MR_Word analysis__V_90_90;
#line 900 "analysis.m"
                MR_Word analysis__V_91_91;
#line 900 "analysis.m"
                MR_Word analysis__V_92_92;
#line 900 "analysis.m"
                MR_Word analysis__V_89_89;

#line 898 "analysis.m"
                {
#line 898 "analysis.m"
                  analysis__replace_result_in_analysis_map_8_p_0(analysis__TypeClassInfo_for_analysis_158, analysis__ModuleName_11, analysis__FuncId_13, analysis__FuncInfo_20, analysis__Call_17, analysis__NewAnswer_18, analysis__NewStatus_19, analysis__OldMap0_27, &analysis__OldMap_28);
                }
#line 900 "analysis.m"
                analysis__TypeClassInfo_for_compiler_170 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 0)));
#line 900 "analysis.m"
                analysis__V_83_83 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 1));
#line 900 "analysis.m"
                analysis__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 2)));
#line 900 "analysis.m"
                analysis__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 3)));
#line 900 "analysis.m"
                analysis__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 4)));
#line 900 "analysis.m"
                analysis__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 5)));
#line 900 "analysis.m"
                analysis__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 6)));
#line 900 "analysis.m"
                analysis__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 7)));
#line 900 "analysis.m"
                analysis__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 8)));
#line 900 "analysis.m"
                analysis__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 9)));
#line 900 "analysis.m"
                analysis__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 10)));
#line 900 "analysis.m"
                {
#line 900 "analysis.m"
                  analysis__STATE_VARIABLE_Info_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 900 "analysis.m"
                  MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_50_50, 0) = ((MR_Box) (analysis__TypeClassInfo_for_compiler_170));
#line 900 "analysis.m"
                  MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_50_50, 1) = analysis__V_83_83;
#line 900 "analysis.m"
                  MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_50_50, 2) = ((MR_Box) (analysis__V_84_84));
#line 900 "analysis.m"
                  MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_50_50, 3) = ((MR_Box) (analysis__V_85_85));
#line 900 "analysis.m"
                  MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_50_50, 4) = ((MR_Box) (analysis__V_86_86));
#line 900 "analysis.m"
                  MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_50_50, 5) = ((MR_Box) (analysis__V_87_87));
#line 900 "analysis.m"
                  MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_50_50, 6) = ((MR_Box) (analysis__V_88_88));
#line 900 "analysis.m"
                  MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_50_50, 7) = ((MR_Box) (analysis__OldMap_28));
#line 900 "analysis.m"
                  MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_50_50, 8) = ((MR_Box) (analysis__V_90_90));
#line 900 "analysis.m"
                  MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_50_50, 9) = ((MR_Box) (analysis__V_91_91));
#line 900 "analysis.m"
                  MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_50_50, 10) = ((MR_Box) (analysis__V_92_92));
#line 900 "analysis.m"
                }
#line 897 "analysis.m"
              }
#line 901 "analysis.m"
            else
#line 901 "analysis.m"
              analysis__STATE_VARIABLE_Info_50_50 = analysis__STATE_VARIABLE_Info_0_40;
#line 895 "analysis.m"
          }
#line 904 "analysis.m"
        else
#line 907 "analysis.m"
          {
#line 907 "analysis.m"
            MR_Word analysis__TypeCtorInfo_178_178;
#line 907 "analysis.m"
            MR_Word analysis__TypeClassInfo_for_call_pattern_180;
#line 907 "analysis.m"
            MR_Word analysis__Status_29;
#line 907 "analysis.m"
            MR_Word analysis__OldArcs_30;
#line 907 "analysis.m"
            MR_Word analysis__DepModules_31;
#line 907 "analysis.m"
            MR_Word analysis__STATE_VARIABLE_Info_51_51;
#line 907 "analysis.m"
            MR_Word analysis__V_52_52;
#line 907 "analysis.m"
            MR_Word analysis__V_55_55;
#line 907 "analysis.m"
            MR_Word analysis__OldMap0_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 7)));
#line 907 "analysis.m"
            MR_Word analysis__OldMap_69;
#line 907 "analysis.m"
            MR_Word analysis__TypeClassInfo_for_compiler_171 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 0)));
#line 907 "analysis.m"
            MR_Box analysis__V_93_93 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 1));
#line 907 "analysis.m"
            MR_Word analysis__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 2)));
#line 907 "analysis.m"
            MR_Word analysis__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 3)));
#line 907 "analysis.m"
            MR_Word analysis__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 4)));
#line 907 "analysis.m"
            MR_Word analysis__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 5)));
#line 907 "analysis.m"
            MR_Word analysis__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 6)));
#line 907 "analysis.m"
            MR_Word analysis__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 8)));
#line 907 "analysis.m"
            MR_Word analysis__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 9)));
#line 907 "analysis.m"
            MR_Word analysis__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 10)));
#line 910 "analysis.m"
            MR_Word analysis__TypeClassInfo_for_compiler_172;
#line 910 "analysis.m"
            MR_Box analysis__V_102_102;
#line 910 "analysis.m"
            MR_Word analysis__V_103_103;
#line 910 "analysis.m"
            MR_Word analysis__V_104_104;
#line 910 "analysis.m"
            MR_Word analysis__V_105_105;
#line 910 "analysis.m"
            MR_Word analysis__V_106_106;
#line 910 "analysis.m"
            MR_Word analysis__V_107_107;
#line 910 "analysis.m"
            MR_Word analysis__V_109_109;
#line 910 "analysis.m"
            MR_Word analysis__V_110_110;
#line 910 "analysis.m"
            MR_Word analysis__V_111_111;
#line 910 "analysis.m"
            MR_Word analysis__V_108_108;
#line 915 "analysis.m"
            MR_Word analysis__TypeClassInfo_for_answer_pattern_173;
#line 915 "analysis.m"
            MR_Word analysis__TypeClassInfo_for_partial_order_175;
#line 920 "analysis.m"
            MR_Word analysis__TypeClassInfo_for_compiler_177;
#line 920 "analysis.m"
            MR_Box analysis__V_112_112;
#line 920 "analysis.m"
            MR_Word analysis__V_113_113;
#line 920 "analysis.m"
            MR_Word analysis__V_114_114;
#line 920 "analysis.m"
            MR_Word analysis__V_115_115;
#line 920 "analysis.m"
            MR_Word analysis__V_116_116;
#line 920 "analysis.m"
            MR_Word analysis__V_117_117;
#line 920 "analysis.m"
            MR_Word analysis__V_118_118;
#line 920 "analysis.m"
            MR_Word analysis__V_119_119;
#line 920 "analysis.m"
            MR_Word analysis__V_120_120;
#line 920 "analysis.m"
            MR_Box analysis__conv1_OldArcs_30;
#line 925 "analysis.m"
            MR_Box analysis__conv4_STATE_VARIABLE_Info_50_50;
#line 925 "analysis.m"
            MR_Box analysis__conv3_STATE_VARIABLE_IO_49_49;

#line 908 "analysis.m"
            {
#line 908 "analysis.m"
              analysis__replace_result_in_analysis_map_8_p_0(analysis__TypeClassInfo_for_analysis_158, analysis__ModuleName_11, analysis__FuncId_13, analysis__FuncInfo_20, analysis__Call_17, analysis__NewAnswer_18, analysis__NewStatus_19, analysis__OldMap0_68, &analysis__OldMap_69);
            }
#line 910 "analysis.m"
            analysis__TypeClassInfo_for_compiler_172 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 0)));
#line 910 "analysis.m"
            analysis__V_102_102 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 1));
#line 910 "analysis.m"
            analysis__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 2)));
#line 910 "analysis.m"
            analysis__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 3)));
#line 910 "analysis.m"
            analysis__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 4)));
#line 910 "analysis.m"
            analysis__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 5)));
#line 910 "analysis.m"
            analysis__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 6)));
#line 910 "analysis.m"
            analysis__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 7)));
#line 910 "analysis.m"
            analysis__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 8)));
#line 910 "analysis.m"
            analysis__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 9)));
#line 910 "analysis.m"
            analysis__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_40, (MR_Integer) 10)));
#line 910 "analysis.m"
            {
#line 910 "analysis.m"
              analysis__STATE_VARIABLE_Info_51_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 910 "analysis.m"
              MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_51_51, 0) = ((MR_Box) (analysis__TypeClassInfo_for_compiler_172));
#line 910 "analysis.m"
              MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_51_51, 1) = analysis__V_102_102;
#line 910 "analysis.m"
              MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_51_51, 2) = ((MR_Box) (analysis__V_103_103));
#line 910 "analysis.m"
              MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_51_51, 3) = ((MR_Box) (analysis__V_104_104));
#line 910 "analysis.m"
              MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_51_51, 4) = ((MR_Box) (analysis__V_105_105));
#line 910 "analysis.m"
              MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_51_51, 5) = ((MR_Box) (analysis__V_106_106));
#line 910 "analysis.m"
              MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_51_51, 6) = ((MR_Box) (analysis__V_107_107));
#line 910 "analysis.m"
              MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_51_51, 7) = ((MR_Box) (analysis__OldMap_69));
#line 910 "analysis.m"
              MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_51_51, 8) = ((MR_Box) (analysis__V_109_109));
#line 910 "analysis.m"
              MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_51_51, 9) = ((MR_Box) (analysis__V_110_110));
#line 910 "analysis.m"
              MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_51_51, 10) = ((MR_Box) (analysis__V_111_111));
#line 910 "analysis.m"
            }
#line 12654 "analysis.c"
            {
#line 12656 "analysis.c"
              mercury__private_builtin__superclass_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_158, (MR_Integer) 2, &analysis__TypeClassInfo_for_answer_pattern_173);
            }
#line 12659 "analysis.c"
            {
#line 12661 "analysis.c"
              mercury__private_builtin__superclass_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_answer_pattern_173, (MR_Integer) 1, &analysis__TypeClassInfo_for_partial_order_175);
            }
#line 915 "analysis.m"
            {
#line 915 "analysis.m"
              analysis__succeeded = analysis__more_precise_than_3_p_0(analysis__TypeClassInfo_for_partial_order_175, analysis__FuncInfo_20, analysis__NewAnswer_18, analysis__OldAnswer_25);
            }
#line 917 "analysis.m"
            if (analysis__succeeded)
#line 916 "analysis.m"
              analysis__Status_29 = (MR_Integer) 1;
#line 917 "analysis.m"
            else
#line 918 "analysis.m"
              analysis__Status_29 = (MR_Integer) 0;
#line 920 "analysis.m"
            analysis__TypeClassInfo_for_compiler_177 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_51_51, (MR_Integer) 0)));
#line 920 "analysis.m"
            analysis__V_112_112 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_51_51, (MR_Integer) 1));
#line 920 "analysis.m"
            analysis__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_51_51, (MR_Integer) 2)));
#line 920 "analysis.m"
            analysis__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_51_51, (MR_Integer) 3)));
#line 920 "analysis.m"
            analysis__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_51_51, (MR_Integer) 4)));
#line 920 "analysis.m"
            analysis__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_51_51, (MR_Integer) 5)));
#line 920 "analysis.m"
            analysis__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_51_51, (MR_Integer) 6)));
#line 920 "analysis.m"
            analysis__V_118_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_51_51, (MR_Integer) 7)));
#line 920 "analysis.m"
            analysis__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_51_51, (MR_Integer) 8)));
#line 920 "analysis.m"
            analysis__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_51_51, (MR_Integer) 9)));
#line 920 "analysis.m"
            analysis__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_51_51, (MR_Integer) 10)));
#line 12699 "analysis.c"
            analysis__TypeCtorInfo_178_178 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 920 "analysis.m"
            {
#line 920 "analysis.m"
              analysis__conv1_OldArcs_30 = mercury__map__det_elem_2_f_0(analysis__TypeCtorInfo_178_178, (MR_Word) &analysis_scalar_common_2[5], ((MR_Box) (analysis__ModuleName_11)), analysis__V_52_52);
            }
#line 920 "analysis.m"
            analysis__OldArcs_30 = ((MR_Word) analysis__conv1_OldArcs_30);
#line 12708 "analysis.c"
            {
#line 12710 "analysis.c"
              mercury__private_builtin__superclass_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_158, (MR_Integer) 1, &analysis__TypeClassInfo_for_call_pattern_180);
            }
#line 921 "analysis.m"
            {
#line 921 "analysis.m"
              analysis__DepModules_31 = analysis__imdg_dependent_modules_5_f_0(analysis__TypeClassInfo_for_call_pattern_180, analysis__OldArcs_30, analysis__AnalysisName_12, analysis__FuncId_13, analysis__FuncInfo_20, analysis__Call_17);
            }
#line 923 "analysis.m"
            {
#line 923 "analysis.m"
              analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_109_115_103_95_95_104_111_51_95_95_91_54_93_95_48_3_p_0(analysis__TypeClassInfo_for_analysis_158, analysis__NewAnswer_18, analysis__OldAnswer_25, analysis__Status_29, analysis__DepModules_31);
            }
#line 925 "analysis.m"
            {
#line 925 "analysis.m"
              analysis__V_55_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 925 "analysis.m"
              MR_hl_field(MR_mktag(0), analysis__V_55_55, 0) = ((MR_Box) (&analysis_scalar_common_12[0]));
#line 925 "analysis.m"
              MR_hl_field(MR_mktag(0), analysis__V_55_55, 1) = ((MR_Box) (analysis__update_analysis_registry_5_9_p_0_1));
#line 925 "analysis.m"
              MR_hl_field(MR_mktag(0), analysis__V_55_55, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 925 "analysis.m"
              MR_hl_field(MR_mktag(0), analysis__V_55_55, 3) = ((MR_Box) (analysis__Globals_22));
#line 925 "analysis.m"
              MR_hl_field(MR_mktag(0), analysis__V_55_55, 4) = ((MR_Box) (analysis__Status_29));
#line 925 "analysis.m"
            }
#line 925 "analysis.m"
            {
#line 925 "analysis.m"
              mercury__set__fold2_6_p_2(analysis__TypeCtorInfo_178_178, (MR_Word) &analysis__analysis__type_ctor_info_analysis_info_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, analysis__V_55_55, analysis__DepModules_31, ((MR_Box) (analysis__STATE_VARIABLE_Info_51_51)), &analysis__conv4_STATE_VARIABLE_Info_50_50, ((MR_Box) ((MR_Integer) 0)), &analysis__conv3_STATE_VARIABLE_IO_49_49);
            }
#line 925 "analysis.m"
            analysis__STATE_VARIABLE_Info_50_50 = ((MR_Word) analysis__conv4_STATE_VARIABLE_Info_50_50);
#line 907 "analysis.m"
          }
#line 891 "analysis.m"
      }
#line 948 "analysis.m"
    analysis__TypeClassInfo_for_compiler_198 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_50_50, (MR_Integer) 0)));
#line 948 "analysis.m"
    analysis__V_149_149 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_50_50, (MR_Integer) 1));
#line 948 "analysis.m"
    analysis__V_150_150 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_50_50, (MR_Integer) 2)));
#line 948 "analysis.m"
    analysis__V_151_151 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_50_50, (MR_Integer) 3)));
#line 948 "analysis.m"
    analysis__V_152_152 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_50_50, (MR_Integer) 4)));
#line 948 "analysis.m"
    analysis__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_50_50, (MR_Integer) 5)));
#line 948 "analysis.m"
    analysis__V_153_153 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_50_50, (MR_Integer) 6)));
#line 948 "analysis.m"
    analysis__V_154_154 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_50_50, (MR_Integer) 7)));
#line 948 "analysis.m"
    analysis__V_155_155 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_50_50, (MR_Integer) 8)));
#line 948 "analysis.m"
    analysis__V_156_156 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_50_50, (MR_Integer) 9)));
#line 948 "analysis.m"
    analysis__V_157_157 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_50_50, (MR_Integer) 10)));
#line 948 "analysis.m"
    {
#line 948 "analysis.m"
      analysis__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &analysis_scalar_common_2[1], analysis__V_58_58, ((MR_Box) (analysis__ModuleName_11)), &analysis__conv5_ModuleRequests_32);
    }
#line 948 "analysis.m"
    if (analysis__succeeded)
#line 948 "analysis.m"
      {
#line 948 "analysis.m"
        analysis__ModuleRequests_32 = ((MR_Word) analysis__conv5_ModuleRequests_32);
#line 948 "analysis.m"
        analysis__succeeded = MR_TRUE;
#line 948 "analysis.m"
      }
#line 948 "analysis.m"
    if (analysis__succeeded)
#line 948 "analysis.m"
      {
#line 12791 "analysis.c"
        analysis__TypeCtorInfo_201_201 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 12793 "analysis.c"
        analysis__TypeInfo_202_202 = (MR_Word) &analysis_scalar_common_2[0];
#line 949 "analysis.m"
        {
#line 949 "analysis.m"
          analysis__succeeded = mercury__map__elem_2_f_0(analysis__TypeCtorInfo_201_201, analysis__TypeInfo_202_202, ((MR_Box) (analysis__AnalysisName_12)), analysis__ModuleRequests_32, &analysis__conv6_V_59_59);
        }
#line 949 "analysis.m"
        if (analysis__succeeded)
#line 949 "analysis.m"
          {
#line 949 "analysis.m"
            analysis__V_59_59 = ((MR_Word) analysis__conv6_V_59_59);
#line 949 "analysis.m"
            analysis__succeeded = MR_TRUE;
#line 949 "analysis.m"
          }
#line 948 "analysis.m"
        if (analysis__succeeded)
#line 948 "analysis.m"
          {
#line 12814 "analysis.c"
            analysis__TypeCtorInfo_203_203 = (MR_Word) &analysis__analysis__type_ctor_info_func_id_0;
#line 12816 "analysis.c"
            analysis__TypeInfo_204_204 = (MR_Word) &analysis_scalar_common_1[0];
#line 949 "analysis.m"
            {
#line 949 "analysis.m"
              analysis__succeeded = mercury__map__elem_2_f_0(analysis__TypeCtorInfo_203_203, analysis__TypeInfo_204_204, ((MR_Box) (analysis__FuncId_13)), analysis__V_59_59, &analysis__conv7_Requests_33);
            }
#line 949 "analysis.m"
            if (analysis__succeeded)
#line 949 "analysis.m"
              {
#line 949 "analysis.m"
                analysis__Requests_33 = ((MR_Word) analysis__conv7_Requests_33);
#line 949 "analysis.m"
                analysis__succeeded = MR_TRUE;
#line 949 "analysis.m"
              }
#line 948 "analysis.m"
            if (analysis__succeeded)
#line 948 "analysis.m"
              {
#line 950 "analysis.m"
                analysis__succeeded = ((MR_tag((MR_Word) analysis__Requests_33)) == (MR_mktag((MR_Integer) 1)));
#line 950 "analysis.m"
                if (analysis__succeeded)
#line 950 "analysis.m"
                  {
#line 950 "analysis.m"
                    analysis__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), analysis__Requests_33, (MR_Integer) 0)));
#line 950 "analysis.m"
                    analysis__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), analysis__Requests_33, (MR_Integer) 1)));
#line 950 "analysis.m"
                  }
#line 948 "analysis.m"
              }
#line 948 "analysis.m"
          }
#line 948 "analysis.m"
      }
#line 959 "analysis.m"
    if (analysis__succeeded)
#line 955 "analysis.m"
      {
#line 955 "analysis.m"
        MR_Word analysis__TypeCtorInfo_206_206 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 955 "analysis.m"
        MR_Word analysis__Callers0_36;
#line 955 "analysis.m"
        MR_Word analysis__Callers_39;
#line 955 "analysis.m"
        MR_Word analysis__V_64_64;
#line 957 "analysis.m"
        MR_Box analysis__conv11_STATE_VARIABLE_Info_41;
#line 957 "analysis.m"
        MR_Box analysis__conv10_STATE_VARIABLE_IO_43;

#line 952 "analysis.m"
        {
#line 952 "analysis.m"
          analysis__Callers0_36 = mercury__list__filter_map_2_f_0((MR_Word) &analysis__analysis__type_ctor_info_analysis_request_0, analysis__TypeCtorInfo_206_206, (MR_Word) &analysis_scalar_common_2[10], analysis__Requests_33);
        }
#line 956 "analysis.m"
        {
#line 956 "analysis.m"
          mercury__list__sort_and_remove_dups_2_p_0(analysis__TypeCtorInfo_206_206, analysis__Callers0_36, &analysis__Callers_39);
        }
#line 957 "analysis.m"
        {
#line 957 "analysis.m"
          analysis__V_64_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 957 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__V_64_64, 0) = ((MR_Box) (&analysis_scalar_common_12[0]));
#line 957 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__V_64_64, 1) = ((MR_Box) (analysis__update_analysis_registry_5_9_p_0_3));
#line 957 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__V_64_64, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 957 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__V_64_64, 3) = ((MR_Box) (analysis__Globals_22));
#line 957 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__V_64_64, 4) = ((MR_Box) ((MR_Integer) 1));
#line 957 "analysis.m"
        }
#line 957 "analysis.m"
        {
#line 957 "analysis.m"
          mercury__list__foldl2_6_p_2(analysis__TypeCtorInfo_206_206, (MR_Word) &analysis__analysis__type_ctor_info_analysis_info_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, analysis__V_64_64, analysis__Callers_39, ((MR_Box) (analysis__STATE_VARIABLE_Info_50_50)), &analysis__conv11_STATE_VARIABLE_Info_41, ((MR_Box) ((MR_Integer) 0)), &analysis__conv10_STATE_VARIABLE_IO_43);
        }
#line 957 "analysis.m"
        *analysis__STATE_VARIABLE_Info_41 = ((MR_Word) analysis__conv11_STATE_VARIABLE_Info_41);
#line 955 "analysis.m"
      }
#line 959 "analysis.m"
    else
#line 960 "analysis.m"
      *analysis__STATE_VARIABLE_Info_41 = analysis__STATE_VARIABLE_Info_50_50;
#line 882 "analysis.m"
  }
#line 877 "analysis.m"
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

#line 864 "analysis.m"
void MR_CALL 
analysis__update_analysis_registry_4_9_p_0(
#line 864 "analysis.m"
  MR_Word analysis__ModuleInfo_10,
#line 864 "analysis.m"
  MR_Word analysis__ModuleName_11,
#line 864 "analysis.m"
  MR_String analysis__AnalysisName_12,
#line 864 "analysis.m"
  MR_Word analysis__FuncId_13,
#line 864 "analysis.m"
  MR_Word analysis__NewResults_14,
#line 864 "analysis.m"
  MR_Word analysis__STATE_VARIABLE_Info_0_17,
#line 864 "analysis.m"
  MR_Word * analysis__STATE_VARIABLE_Info_18)
#line 864 "analysis.m"
{
#line 869 "analysis.m"
  {
#line 869 "analysis.m"
    MR_bool analysis__succeeded;
#line 869 "analysis.m"
    MR_Word analysis__V_21_21;
#line 872 "analysis.m"
    MR_Box analysis__conv2_STATE_VARIABLE_Info_18;
#line 872 "analysis.m"
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
#line 872 "analysis.m"
    {
#line 872 "analysis.m"
      mercury__list__foldl2_6_p_2((MR_Word) &analysis__analysis__type_ctor_info_some_analysis_result_0, (MR_Word) &analysis__analysis__type_ctor_info_analysis_info_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, analysis__V_21_21, analysis__NewResults_14, ((MR_Box) (analysis__STATE_VARIABLE_Info_0_17)), &analysis__conv2_STATE_VARIABLE_Info_18, ((MR_Box) ((MR_Integer) 0)), &analysis__conv1_STATE_VARIABLE_IO_20);
    }
#line 872 "analysis.m"
    *analysis__STATE_VARIABLE_Info_18 = ((MR_Word) analysis__conv2_STATE_VARIABLE_Info_18);
#line 869 "analysis.m"
  }
#line 864 "analysis.m"
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

#line 854 "analysis.m"
void MR_CALL 
analysis__update_analysis_registry_3_8_p_0(
#line 854 "analysis.m"
  MR_Word analysis__ModuleInfo_9,
#line 854 "analysis.m"
  MR_Word analysis__ModuleName_10,
#line 854 "analysis.m"
  MR_String analysis__AnalysisName_11,
#line 854 "analysis.m"
  MR_Word analysis__FuncMap_12,
#line 854 "analysis.m"
  MR_Word analysis__STATE_VARIABLE_Info_0_15,
#line 854 "analysis.m"
  MR_Word * analysis__STATE_VARIABLE_Info_16)
#line 854 "analysis.m"
{
#line 859 "analysis.m"
  {
#line 859 "analysis.m"
    MR_bool analysis__succeeded;
#line 859 "analysis.m"
    MR_Word analysis__V_19_19;
#line 860 "analysis.m"
    MR_Box analysis__conv2_STATE_VARIABLE_Info_16;
#line 860 "analysis.m"
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
#line 860 "analysis.m"
    {
#line 860 "analysis.m"
      mercury__map__foldl2_6_p_2((MR_Word) &analysis__analysis__type_ctor_info_func_id_0, (MR_Word) &analysis_scalar_common_1[1], (MR_Word) &analysis__analysis__type_ctor_info_analysis_info_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, analysis__V_19_19, analysis__FuncMap_12, ((MR_Box) (analysis__STATE_VARIABLE_Info_0_15)), &analysis__conv2_STATE_VARIABLE_Info_16, ((MR_Box) ((MR_Integer) 0)), &analysis__conv1_STATE_VARIABLE_IO_18);
    }
#line 860 "analysis.m"
    *analysis__STATE_VARIABLE_Info_16 = ((MR_Word) analysis__conv2_STATE_VARIABLE_Info_16);
#line 859 "analysis.m"
  }
#line 854 "analysis.m"
}

#line 851 "analysis.m"
static void MR_CALL 
analysis__update_analysis_registry_2_7_p_0_1(
#line 851 "analysis.m"
  MR_Box analysis__closure_arg,
#line 851 "analysis.m"
  MR_Box analysis__wrapper_arg_1,
#line 851 "analysis.m"
  MR_Box analysis__wrapper_arg_2,
#line 851 "analysis.m"
  MR_Box analysis__wrapper_arg_3,
#line 851 "analysis.m"
  MR_Box * analysis__wrapper_arg_4,
#line 851 "analysis.m"
  MR_Box analysis__wrapper_arg_5,
#line 851 "analysis.m"
  MR_Box * analysis__wrapper_arg_6)
#line 851 "analysis.m"
{
#line 851 "analysis.m"
  {
#line 851 "analysis.m"
    MR_Box analysis__closure = analysis__closure_arg;
#line 851 "analysis.m"
    MR_Word analysis__conv0_STATE_VARIABLE_Info_16;

#line 851 "analysis.m"
    {
#line 851 "analysis.m"
      analysis__update_analysis_registry_3_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 4))), ((MR_String) analysis__wrapper_arg_1), ((MR_Word) analysis__wrapper_arg_2), ((MR_Word) analysis__wrapper_arg_3), &analysis__conv0_STATE_VARIABLE_Info_16);
    }
#line 851 "analysis.m"
    *analysis__wrapper_arg_4 = ((MR_Box) (analysis__conv0_STATE_VARIABLE_Info_16));
#line 851 "analysis.m"
  }
#line 851 "analysis.m"
}

#line 846 "analysis.m"
void MR_CALL 
analysis__update_analysis_registry_2_7_p_0(
#line 846 "analysis.m"
  MR_Word analysis__ModuleInfo_8,
#line 846 "analysis.m"
  MR_Word analysis__ModuleName_9,
#line 846 "analysis.m"
  MR_Word analysis__ModuleMap_10,
#line 846 "analysis.m"
  MR_Word analysis__STATE_VARIABLE_Info_0_13,
#line 846 "analysis.m"
  MR_Word * analysis__STATE_VARIABLE_Info_14)
#line 846 "analysis.m"
{
#line 850 "analysis.m"
  {
#line 850 "analysis.m"
    MR_bool analysis__succeeded;
#line 850 "analysis.m"
    MR_Word analysis__V_17_17;
#line 851 "analysis.m"
    MR_Box analysis__conv2_STATE_VARIABLE_Info_14;
#line 851 "analysis.m"
    MR_Box analysis__conv1_STATE_VARIABLE_IO_16;

#line 851 "analysis.m"
    {
#line 851 "analysis.m"
      analysis__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 851 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_17_17, 0) = ((MR_Box) (&analysis_scalar_common_10[0]));
#line 851 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_17_17, 1) = ((MR_Box) (analysis__update_analysis_registry_2_7_p_0_1));
#line 851 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_17_17, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 851 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_17_17, 3) = ((MR_Box) (analysis__ModuleInfo_8));
#line 851 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_17_17, 4) = ((MR_Box) (analysis__ModuleName_9));
#line 851 "analysis.m"
    }
#line 851 "analysis.m"
    {
#line 851 "analysis.m"
      mercury__map__foldl2_6_p_2((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &analysis_scalar_common_2[2], (MR_Word) &analysis__analysis__type_ctor_info_analysis_info_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, analysis__V_17_17, analysis__ModuleMap_10, ((MR_Box) (analysis__STATE_VARIABLE_Info_0_13)), &analysis__conv2_STATE_VARIABLE_Info_14, ((MR_Box) ((MR_Integer) 0)), &analysis__conv1_STATE_VARIABLE_IO_16);
    }
#line 851 "analysis.m"
    *analysis__STATE_VARIABLE_Info_14 = ((MR_Word) analysis__conv2_STATE_VARIABLE_Info_14);
#line 850 "analysis.m"
  }
#line 846 "analysis.m"
}

#line 851 "analysis.m"
static void MR_CALL 
analysis__update_analysis_registry_5_p_0_1(
#line 851 "analysis.m"
  MR_Box analysis__closure_arg,
#line 851 "analysis.m"
  MR_Box analysis__wrapper_arg_1,
#line 851 "analysis.m"
  MR_Box analysis__wrapper_arg_2,
#line 851 "analysis.m"
  MR_Box analysis__wrapper_arg_3,
#line 851 "analysis.m"
  MR_Box * analysis__wrapper_arg_4,
#line 851 "analysis.m"
  MR_Box analysis__wrapper_arg_5,
#line 851 "analysis.m"
  MR_Box * analysis__wrapper_arg_6)
#line 851 "analysis.m"
{
#line 851 "analysis.m"
  {
#line 851 "analysis.m"
    MR_Box analysis__closure = analysis__closure_arg;
#line 851 "analysis.m"
    MR_Word analysis__conv0_STATE_VARIABLE_Info_16;

#line 851 "analysis.m"
    {
#line 851 "analysis.m"
      analysis__update_analysis_registry_3_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 4))), ((MR_String) analysis__wrapper_arg_1), ((MR_Word) analysis__wrapper_arg_2), ((MR_Word) analysis__wrapper_arg_3), &analysis__conv0_STATE_VARIABLE_Info_16);
    }
#line 851 "analysis.m"
    *analysis__wrapper_arg_4 = ((MR_Box) (analysis__conv0_STATE_VARIABLE_Info_16));
#line 851 "analysis.m"
  }
#line 851 "analysis.m"
}

#line 836 "analysis.m"
void MR_CALL 
analysis__update_analysis_registry_5_p_0(
#line 836 "analysis.m"
  MR_Word analysis__ModuleInfo_6,
#line 836 "analysis.m"
  MR_Word analysis__STATE_VARIABLE_Info_0_10,
#line 836 "analysis.m"
  MR_Word * analysis__STATE_VARIABLE_Info_11)
#line 836 "analysis.m"
{
#line 839 "analysis.m"
  {
#line 839 "analysis.m"
    MR_bool analysis__succeeded;
#line 839 "analysis.m"
    MR_Word analysis__NewResults_9;
#line 839 "analysis.m"
    MR_Word analysis__V_17_17;
#line 839 "analysis.m"
    MR_Word analysis__STATE_VARIABLE_Info_18_18;
#line 839 "analysis.m"
    MR_Word analysis__V_21_21;
#line 839 "analysis.m"
    MR_Word analysis__Debug_61;
#line 839 "analysis.m"
    MR_Word analysis__V_76_76;
#line 841 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_compiler_52;
#line 841 "analysis.m"
    MR_Box analysis__V_22_22;
#line 841 "analysis.m"
    MR_Word analysis__V_23_23;
#line 841 "analysis.m"
    MR_Word analysis__V_24_24;
#line 841 "analysis.m"
    MR_Word analysis__V_25_25;
#line 841 "analysis.m"
    MR_Word analysis__V_26_26;
#line 841 "analysis.m"
    MR_Word analysis__V_27_27;
#line 841 "analysis.m"
    MR_Word analysis__V_28_28;
#line 841 "analysis.m"
    MR_Word analysis__V_29_29;
#line 841 "analysis.m"
    MR_Word analysis__V_30_30;
#line 842 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_compiler_53;
#line 842 "analysis.m"
    MR_Box analysis__V_31_31;
#line 842 "analysis.m"
    MR_Word analysis__V_32_32;
#line 842 "analysis.m"
    MR_Word analysis__V_33_33;
#line 842 "analysis.m"
    MR_Word analysis__V_34_34;
#line 842 "analysis.m"
    MR_Word analysis__V_35_35;
#line 842 "analysis.m"
    MR_Word analysis__V_36_36;
#line 842 "analysis.m"
    MR_Word analysis__V_37_37;
#line 842 "analysis.m"
    MR_Word analysis__V_38_38;
#line 842 "analysis.m"
    MR_Word analysis__V_39_39;
#line 851 "analysis.m"
    MR_Box analysis__conv2_STATE_VARIABLE_Info_18_18;
#line 851 "analysis.m"
    MR_Box analysis__conv1_STATE_VARIABLE_IO_13;
#line 844 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_compiler_56;
#line 844 "analysis.m"
    MR_Box analysis__V_40_40;
#line 844 "analysis.m"
    MR_Word analysis__V_41_41;
#line 844 "analysis.m"
    MR_Word analysis__V_42_42;
#line 844 "analysis.m"
    MR_Word analysis__V_43_43;
#line 844 "analysis.m"
    MR_Word analysis__V_44_44;
#line 844 "analysis.m"
    MR_Word analysis__V_45_45;
#line 844 "analysis.m"
    MR_Word analysis__V_46_46;
#line 844 "analysis.m"
    MR_Word analysis__V_48_48;
#line 844 "analysis.m"
    MR_Word analysis__V_49_49;
#line 844 "analysis.m"
    MR_Word analysis__V_47_47;

#line 1380 "analysis.m"
{
#define MR_PROC_LABEL analysis__update_analysis_registry_5_p_0


		{
#line 1380 "analysis.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&analysis__mutable_variable_debug_analysis_lock,
                    "analysis__mutable_variable_debug_analysis_lock");
#endif

#line 13346 "analysis.c"

		;}
#undef MR_PROC_LABEL
#line 1380 "analysis.m"
}
#line 1380 "analysis.m"
{
#define MR_PROC_LABEL analysis__update_analysis_registry_5_p_0

	MR_Word X;

		{
#line 1380 "analysis.m"
X = analysis__mutable_variable_debug_analysis;

#line 13362 "analysis.c"

		;}
#undef MR_PROC_LABEL
	 analysis__Debug_61  = X;
#line 1380 "analysis.m"
}
#line 1380 "analysis.m"
{
#define MR_PROC_LABEL analysis__update_analysis_registry_5_p_0


		{
#line 1380 "analysis.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&analysis__mutable_variable_debug_analysis_lock,
                    "analysis__mutable_variable_debug_analysis_lock");
#endif

#line 13381 "analysis.c"

		;}
#undef MR_PROC_LABEL
#line 1380 "analysis.m"
}
#line 1393 "analysis.m"
#line 1393 "analysis.m"
    switch (analysis__Debug_61) {
#line 1393 "analysis.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1393 "analysis.m"
      case (MR_Integer) 0:
#line 1394 "analysis.m"
        {
#line 1394 "analysis.m"
        }
#line 1393 "analysis.m"
        break;
#line 1393 "analysis.m"
      case (MR_Integer) 1:
#line 1392 "analysis.m"
        {
#line 1392 "analysis.m"
          mercury__io__write_string_3_p_0((MR_String) "% Updating analysis registry.\n");
        }
#line 1393 "analysis.m"
        break;
#line 1393 "analysis.m"
    }
#line 841 "analysis.m"
    analysis__TypeClassInfo_for_compiler_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_10, (MR_Integer) 0)));
#line 841 "analysis.m"
    analysis__V_22_22 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_10, (MR_Integer) 1));
#line 841 "analysis.m"
    analysis__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_10, (MR_Integer) 2)));
#line 841 "analysis.m"
    analysis__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_10, (MR_Integer) 3)));
#line 841 "analysis.m"
    analysis__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_10, (MR_Integer) 4)));
#line 841 "analysis.m"
    analysis__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_10, (MR_Integer) 5)));
#line 841 "analysis.m"
    analysis__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_10, (MR_Integer) 6)));
#line 841 "analysis.m"
    analysis__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_10, (MR_Integer) 7)));
#line 841 "analysis.m"
    analysis__NewResults_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_10, (MR_Integer) 8)));
#line 841 "analysis.m"
    analysis__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_10, (MR_Integer) 9)));
#line 841 "analysis.m"
    analysis__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_10, (MR_Integer) 10)));
#line 842 "analysis.m"
    analysis__TypeClassInfo_for_compiler_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_10, (MR_Integer) 0)));
#line 842 "analysis.m"
    analysis__V_31_31 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_10, (MR_Integer) 1));
#line 842 "analysis.m"
    analysis__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_10, (MR_Integer) 2)));
#line 842 "analysis.m"
    analysis__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_10, (MR_Integer) 3)));
#line 842 "analysis.m"
    analysis__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_10, (MR_Integer) 4)));
#line 842 "analysis.m"
    analysis__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_10, (MR_Integer) 5)));
#line 842 "analysis.m"
    analysis__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_10, (MR_Integer) 6)));
#line 842 "analysis.m"
    analysis__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_10, (MR_Integer) 7)));
#line 842 "analysis.m"
    analysis__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_10, (MR_Integer) 8)));
#line 842 "analysis.m"
    analysis__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_10, (MR_Integer) 9)));
#line 842 "analysis.m"
    analysis__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_10, (MR_Integer) 10)));
#line 851 "analysis.m"
    {
#line 851 "analysis.m"
      analysis__V_76_76 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 851 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_76_76, 0) = ((MR_Box) (&analysis_scalar_common_10[0]));
#line 851 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_76_76, 1) = ((MR_Box) (analysis__update_analysis_registry_5_p_0_1));
#line 851 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_76_76, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 851 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_76_76, 3) = ((MR_Box) (analysis__ModuleInfo_6));
#line 851 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_76_76, 4) = ((MR_Box) (analysis__V_17_17));
#line 851 "analysis.m"
    }
#line 851 "analysis.m"
    {
#line 851 "analysis.m"
      mercury__map__foldl2_6_p_2((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &analysis_scalar_common_2[2], (MR_Word) &analysis__analysis__type_ctor_info_analysis_info_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, analysis__V_76_76, analysis__NewResults_9, ((MR_Box) (analysis__STATE_VARIABLE_Info_0_10)), &analysis__conv2_STATE_VARIABLE_Info_18_18, ((MR_Box) ((MR_Integer) 0)), &analysis__conv1_STATE_VARIABLE_IO_13);
    }
#line 851 "analysis.m"
    analysis__STATE_VARIABLE_Info_18_18 = ((MR_Word) analysis__conv2_STATE_VARIABLE_Info_18_18);
#line 844 "analysis.m"
    {
#line 844 "analysis.m"
      analysis__V_21_21 = mercury__map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &analysis_scalar_common_2[2]);
    }
#line 844 "analysis.m"
    analysis__TypeClassInfo_for_compiler_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_18_18, (MR_Integer) 0)));
#line 844 "analysis.m"
    analysis__V_40_40 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_18_18, (MR_Integer) 1));
#line 844 "analysis.m"
    analysis__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_18_18, (MR_Integer) 2)));
#line 844 "analysis.m"
    analysis__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_18_18, (MR_Integer) 3)));
#line 844 "analysis.m"
    analysis__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_18_18, (MR_Integer) 4)));
#line 844 "analysis.m"
    analysis__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_18_18, (MR_Integer) 5)));
#line 844 "analysis.m"
    analysis__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_18_18, (MR_Integer) 6)));
#line 844 "analysis.m"
    analysis__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_18_18, (MR_Integer) 7)));
#line 844 "analysis.m"
    analysis__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_18_18, (MR_Integer) 8)));
#line 844 "analysis.m"
    analysis__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_18_18, (MR_Integer) 9)));
#line 844 "analysis.m"
    analysis__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_18_18, (MR_Integer) 10)));
#line 844 "analysis.m"
    {
#line 844 "analysis.m"
      MR_Word base;
#line 844 "analysis.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 844 "analysis.m"
      *analysis__STATE_VARIABLE_Info_11 = base;
#line 844 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (analysis__TypeClassInfo_for_compiler_56));
#line 844 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 1) = analysis__V_40_40;
#line 844 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (analysis__V_41_41));
#line 844 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (analysis__V_42_42));
#line 844 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (analysis__V_43_43));
#line 844 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (analysis__V_44_44));
#line 844 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (analysis__V_45_45));
#line 844 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (analysis__V_46_46));
#line 844 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (analysis__V_21_21));
#line 844 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (analysis__V_48_48));
#line 844 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (analysis__V_49_49));
#line 844 "analysis.m"
    }
#line 839 "analysis.m"
  }
#line 836 "analysis.m"
}

#line 772 "analysis.m"
void MR_CALL 
analysis__record_dependency_2_7_p_0(
#line 772 "analysis.m"
  MR_Word analysis__TypeClassInfo_for_call_pattern_58,
#line 772 "analysis.m"
  MR_Word analysis__CallerModuleName_8,
#line 772 "analysis.m"
  MR_String analysis__AnalysisName_9,
#line 772 "analysis.m"
  MR_Word analysis__CalleeModuleName_10,
#line 772 "analysis.m"
  MR_Word analysis__FuncId_11,
#line 772 "analysis.m"
  MR_Box analysis__Call_12,
#line 772 "analysis.m"
  MR_Word analysis__STATE_VARIABLE_Info_0_22,
#line 772 "analysis.m"
  MR_Word * analysis__STATE_VARIABLE_Info_23)
#line 772 "analysis.m"
{
#line 778 "analysis.m"
  {
#line 778 "analysis.m"
    MR_bool analysis__succeeded;
#line 778 "analysis.m"
    MR_Word analysis__Analyses1_15;
#line 778 "analysis.m"
    MR_Word analysis__Funcs1_17;
#line 778 "analysis.m"
    MR_Word analysis__FuncArcs1_19;
#line 778 "analysis.m"
    MR_Word analysis__Dep_20;
#line 781 "analysis.m"
    MR_Word analysis__Analyses0_14;
#line 779 "analysis.m"
    MR_Word analysis__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 10)));
#line 779 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_compiler_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 0)));
#line 779 "analysis.m"
    MR_Box analysis__V_30_30 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 1));
#line 779 "analysis.m"
    MR_Word analysis__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 2)));
#line 779 "analysis.m"
    MR_Word analysis__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 3)));
#line 779 "analysis.m"
    MR_Word analysis__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 4)));
#line 779 "analysis.m"
    MR_Word analysis__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 5)));
#line 779 "analysis.m"
    MR_Word analysis__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 6)));
#line 779 "analysis.m"
    MR_Word analysis__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 7)));
#line 779 "analysis.m"
    MR_Word analysis__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 8)));
#line 779 "analysis.m"
    MR_Word analysis__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 9)));
#line 779 "analysis.m"
    MR_Box analysis__conv0_Analyses0_14;
#line 786 "analysis.m"
    MR_Word analysis__Funcs0_16;
#line 784 "analysis.m"
    MR_Box analysis__conv1_Funcs0_16;
#line 791 "analysis.m"
    MR_Word analysis__FuncArcs0_18;
#line 789 "analysis.m"
    MR_Box analysis__conv2_FuncArcs0_18;

#line 779 "analysis.m"
    {
#line 779 "analysis.m"
      analysis__succeeded = mercury__map__search_2_f_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &analysis_scalar_common_2[5], analysis__V_24_24, ((MR_Box) (analysis__CalleeModuleName_10)), &analysis__conv0_Analyses0_14);
    }
#line 779 "analysis.m"
    if (analysis__succeeded)
#line 779 "analysis.m"
      {
#line 779 "analysis.m"
        analysis__Analyses0_14 = ((MR_Word) analysis__conv0_Analyses0_14);
#line 779 "analysis.m"
        analysis__succeeded = MR_TRUE;
#line 779 "analysis.m"
      }
#line 781 "analysis.m"
    if (analysis__succeeded)
#line 780 "analysis.m"
      analysis__Analyses1_15 = analysis__Analyses0_14;
#line 781 "analysis.m"
    else
#line 782 "analysis.m"
      {
#line 782 "analysis.m"
        {
#line 782 "analysis.m"
          analysis__Analyses1_15 = mercury__map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &analysis_scalar_common_2[4]);
        }
#line 782 "analysis.m"
      }
#line 784 "analysis.m"
    {
#line 784 "analysis.m"
      analysis__succeeded = mercury__map__search_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &analysis_scalar_common_2[4], analysis__Analyses1_15, ((MR_Box) (analysis__AnalysisName_9)), &analysis__conv1_Funcs0_16);
    }
#line 784 "analysis.m"
    if (analysis__succeeded)
#line 784 "analysis.m"
      {
#line 784 "analysis.m"
        analysis__Funcs0_16 = ((MR_Word) analysis__conv1_Funcs0_16);
#line 784 "analysis.m"
        analysis__succeeded = MR_TRUE;
#line 784 "analysis.m"
      }
#line 786 "analysis.m"
    if (analysis__succeeded)
#line 785 "analysis.m"
      analysis__Funcs1_17 = analysis__Funcs0_16;
#line 786 "analysis.m"
    else
#line 787 "analysis.m"
      {
#line 787 "analysis.m"
        {
#line 787 "analysis.m"
          analysis__Funcs1_17 = mercury__map__init_0_f_0((MR_Word) &analysis__analysis__type_ctor_info_func_id_0, (MR_Word) &analysis_scalar_common_1[2]);
        }
#line 787 "analysis.m"
      }
#line 789 "analysis.m"
    {
#line 789 "analysis.m"
      analysis__succeeded = mercury__map__search_2_f_0((MR_Word) &analysis__analysis__type_ctor_info_func_id_0, (MR_Word) &analysis_scalar_common_1[2], analysis__Funcs1_17, ((MR_Box) (analysis__FuncId_11)), &analysis__conv2_FuncArcs0_18);
    }
#line 789 "analysis.m"
    if (analysis__succeeded)
#line 789 "analysis.m"
      {
#line 789 "analysis.m"
        analysis__FuncArcs0_18 = ((MR_Word) analysis__conv2_FuncArcs0_18);
#line 789 "analysis.m"
        analysis__succeeded = MR_TRUE;
#line 789 "analysis.m"
      }
#line 791 "analysis.m"
    if (analysis__succeeded)
#line 790 "analysis.m"
      analysis__FuncArcs1_19 = analysis__FuncArcs0_18;
#line 791 "analysis.m"
    else
#line 792 "analysis.m"
      analysis__FuncArcs1_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 794 "analysis.m"
    {
#line 794 "analysis.m"
      analysis__Dep_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 794 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__Dep_20, 0) = ((MR_Box) (analysis__TypeClassInfo_for_call_pattern_58));
#line 794 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__Dep_20, 1) = analysis__Call_12;
#line 794 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__Dep_20, 2) = ((MR_Box) (analysis__CallerModuleName_8));
#line 794 "analysis.m"
    }
#line 796 "analysis.m"
    {
#line 796 "analysis.m"
      analysis__succeeded = mercury__list__member_2_p_0((MR_Word) &analysis__analysis__type_ctor_info_imdg_arc_0, ((MR_Box) (analysis__Dep_20)), analysis__FuncArcs1_19);
    }
#line 798 "analysis.m"
    if (analysis__succeeded)
#line 798 "analysis.m"
      *analysis__STATE_VARIABLE_Info_23 = analysis__STATE_VARIABLE_Info_0_22;
#line 798 "analysis.m"
    else
#line 799 "analysis.m"
      {
#line 799 "analysis.m"
        MR_Word analysis__FuncArcs_21;
#line 799 "analysis.m"
        MR_Word analysis__V_26_26;
#line 799 "analysis.m"
        MR_Word analysis__V_27_27;
#line 799 "analysis.m"
        MR_Word analysis__V_28_28;
#line 799 "analysis.m"
        MR_Word analysis__V_29_29;
#line 801 "analysis.m"
        MR_Word analysis__TypeClassInfo_for_compiler_73;
#line 801 "analysis.m"
        MR_Box analysis__V_39_39;
#line 801 "analysis.m"
        MR_Word analysis__V_40_40;
#line 801 "analysis.m"
        MR_Word analysis__V_41_41;
#line 801 "analysis.m"
        MR_Word analysis__V_42_42;
#line 801 "analysis.m"
        MR_Word analysis__V_43_43;
#line 801 "analysis.m"
        MR_Word analysis__V_44_44;
#line 801 "analysis.m"
        MR_Word analysis__V_45_45;
#line 801 "analysis.m"
        MR_Word analysis__V_46_46;
#line 801 "analysis.m"
        MR_Word analysis__V_47_47;
#line 800 "analysis.m"
        MR_Word analysis__TypeClassInfo_for_compiler_78;
#line 800 "analysis.m"
        MR_Box analysis__V_48_48;
#line 800 "analysis.m"
        MR_Word analysis__V_49_49;
#line 800 "analysis.m"
        MR_Word analysis__V_50_50;
#line 800 "analysis.m"
        MR_Word analysis__V_51_51;
#line 800 "analysis.m"
        MR_Word analysis__V_52_52;
#line 800 "analysis.m"
        MR_Word analysis__V_53_53;
#line 800 "analysis.m"
        MR_Word analysis__V_54_54;
#line 800 "analysis.m"
        MR_Word analysis__V_55_55;
#line 800 "analysis.m"
        MR_Word analysis__V_56_56;
#line 800 "analysis.m"
        MR_Word analysis__V_57_57;

#line 799 "analysis.m"
        {
#line 799 "analysis.m"
          analysis__FuncArcs_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 799 "analysis.m"
          MR_hl_field(MR_mktag(1), analysis__FuncArcs_21, 0) = ((MR_Box) (analysis__Dep_20));
#line 799 "analysis.m"
          MR_hl_field(MR_mktag(1), analysis__FuncArcs_21, 1) = ((MR_Box) (analysis__FuncArcs1_19));
#line 799 "analysis.m"
        }
#line 801 "analysis.m"
        analysis__TypeClassInfo_for_compiler_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 0)));
#line 801 "analysis.m"
        analysis__V_39_39 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 1));
#line 801 "analysis.m"
        analysis__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 2)));
#line 801 "analysis.m"
        analysis__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 3)));
#line 801 "analysis.m"
        analysis__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 4)));
#line 801 "analysis.m"
        analysis__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 5)));
#line 801 "analysis.m"
        analysis__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 6)));
#line 801 "analysis.m"
        analysis__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 7)));
#line 801 "analysis.m"
        analysis__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 8)));
#line 801 "analysis.m"
        analysis__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 9)));
#line 801 "analysis.m"
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
          analysis__V_26_26 = mercury__map__set_3_f_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &analysis_scalar_common_2[5], analysis__V_27_27, ((MR_Box) (analysis__CalleeModuleName_10)), ((MR_Box) (analysis__V_28_28)));
        }
#line 800 "analysis.m"
        analysis__TypeClassInfo_for_compiler_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 0)));
#line 800 "analysis.m"
        analysis__V_48_48 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 1));
#line 800 "analysis.m"
        analysis__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 2)));
#line 800 "analysis.m"
        analysis__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 3)));
#line 800 "analysis.m"
        analysis__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 4)));
#line 800 "analysis.m"
        analysis__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 5)));
#line 800 "analysis.m"
        analysis__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 6)));
#line 800 "analysis.m"
        analysis__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 7)));
#line 800 "analysis.m"
        analysis__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 8)));
#line 800 "analysis.m"
        analysis__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 9)));
#line 800 "analysis.m"
        analysis__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 10)));
#line 800 "analysis.m"
        {
#line 800 "analysis.m"
          MR_Word base;
#line 800 "analysis.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 800 "analysis.m"
          *analysis__STATE_VARIABLE_Info_23 = base;
#line 800 "analysis.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (analysis__TypeClassInfo_for_compiler_78));
#line 800 "analysis.m"
          MR_hl_field(MR_mktag(0), base, 1) = analysis__V_48_48;
#line 800 "analysis.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (analysis__V_49_49));
#line 800 "analysis.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (analysis__V_50_50));
#line 800 "analysis.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (analysis__V_51_51));
#line 800 "analysis.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (analysis__V_52_52));
#line 800 "analysis.m"
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (analysis__V_53_53));
#line 800 "analysis.m"
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (analysis__V_54_54));
#line 800 "analysis.m"
          MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (analysis__V_55_55));
#line 800 "analysis.m"
          MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (analysis__V_56_56));
#line 800 "analysis.m"
          MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (analysis__V_26_26));
#line 800 "analysis.m"
        }
#line 799 "analysis.m"
      }
#line 778 "analysis.m"
  }
#line 772 "analysis.m"
}

#line 708 "analysis.m"
void MR_CALL 
analysis__record_request_2_7_p_0(
#line 708 "analysis.m"
  MR_Word analysis__TypeClassInfo_for_call_pattern_58,
#line 708 "analysis.m"
  MR_Word analysis__CallerModule_8,
#line 708 "analysis.m"
  MR_String analysis__AnalysisName_9,
#line 708 "analysis.m"
  MR_Word analysis__ModuleName_10,
#line 708 "analysis.m"
  MR_Word analysis__FuncId_11,
#line 708 "analysis.m"
  MR_Box analysis__CallPattern_12,
#line 708 "analysis.m"
  MR_Word analysis__STATE_VARIABLE_Info_0_22,
#line 708 "analysis.m"
  MR_Word * analysis__STATE_VARIABLE_Info_23)
#line 708 "analysis.m"
{
#line 713 "analysis.m"
  {
#line 713 "analysis.m"
    MR_bool analysis__succeeded;
#line 713 "analysis.m"
    MR_Word analysis__ModuleResults1_15;
#line 713 "analysis.m"
    MR_Word analysis__AnalysisResults1_17;
#line 713 "analysis.m"
    MR_Word analysis__FuncResults1_19;
#line 713 "analysis.m"
    MR_Word analysis__Request_20;
#line 713 "analysis.m"
    MR_Word analysis__FuncResults_21;
#line 713 "analysis.m"
    MR_Word analysis__V_26_26;
#line 713 "analysis.m"
    MR_Word analysis__V_27_27;
#line 713 "analysis.m"
    MR_Word analysis__V_28_28;
#line 713 "analysis.m"
    MR_Word analysis__V_29_29;
#line 716 "analysis.m"
    MR_Word analysis__ModuleResults0_14;
#line 714 "analysis.m"
    MR_Word analysis__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 5)));
#line 714 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_compiler_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 0)));
#line 714 "analysis.m"
    MR_Box analysis__V_30_30 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 1));
#line 714 "analysis.m"
    MR_Word analysis__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 2)));
#line 714 "analysis.m"
    MR_Word analysis__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 3)));
#line 714 "analysis.m"
    MR_Word analysis__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 4)));
#line 714 "analysis.m"
    MR_Word analysis__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 6)));
#line 714 "analysis.m"
    MR_Word analysis__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 7)));
#line 714 "analysis.m"
    MR_Word analysis__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 8)));
#line 714 "analysis.m"
    MR_Word analysis__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 9)));
#line 714 "analysis.m"
    MR_Word analysis__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 10)));
#line 714 "analysis.m"
    MR_Box analysis__conv0_ModuleResults0_14;
#line 721 "analysis.m"
    MR_Word analysis__AnalysisResults0_16;
#line 719 "analysis.m"
    MR_Box analysis__conv1_AnalysisResults0_16;
#line 726 "analysis.m"
    MR_Word analysis__FuncResults0_18;
#line 724 "analysis.m"
    MR_Box analysis__conv2_FuncResults0_18;
#line 732 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_compiler_72;
#line 732 "analysis.m"
    MR_Box analysis__V_39_39;
#line 732 "analysis.m"
    MR_Word analysis__V_40_40;
#line 732 "analysis.m"
    MR_Word analysis__V_41_41;
#line 732 "analysis.m"
    MR_Word analysis__V_42_42;
#line 732 "analysis.m"
    MR_Word analysis__V_43_43;
#line 732 "analysis.m"
    MR_Word analysis__V_44_44;
#line 732 "analysis.m"
    MR_Word analysis__V_45_45;
#line 732 "analysis.m"
    MR_Word analysis__V_46_46;
#line 732 "analysis.m"
    MR_Word analysis__V_47_47;
#line 731 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_compiler_77;
#line 731 "analysis.m"
    MR_Box analysis__V_48_48;
#line 731 "analysis.m"
    MR_Word analysis__V_49_49;
#line 731 "analysis.m"
    MR_Word analysis__V_50_50;
#line 731 "analysis.m"
    MR_Word analysis__V_51_51;
#line 731 "analysis.m"
    MR_Word analysis__V_53_53;
#line 731 "analysis.m"
    MR_Word analysis__V_54_54;
#line 731 "analysis.m"
    MR_Word analysis__V_55_55;
#line 731 "analysis.m"
    MR_Word analysis__V_56_56;
#line 731 "analysis.m"
    MR_Word analysis__V_57_57;
#line 731 "analysis.m"
    MR_Word analysis__V_52_52;

#line 714 "analysis.m"
    {
#line 714 "analysis.m"
      analysis__succeeded = mercury__map__search_2_f_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &analysis_scalar_common_2[1], analysis__V_24_24, ((MR_Box) (analysis__ModuleName_10)), &analysis__conv0_ModuleResults0_14);
    }
#line 714 "analysis.m"
    if (analysis__succeeded)
#line 714 "analysis.m"
      {
#line 714 "analysis.m"
        analysis__ModuleResults0_14 = ((MR_Word) analysis__conv0_ModuleResults0_14);
#line 714 "analysis.m"
        analysis__succeeded = MR_TRUE;
#line 714 "analysis.m"
      }
#line 716 "analysis.m"
    if (analysis__succeeded)
#line 715 "analysis.m"
      analysis__ModuleResults1_15 = analysis__ModuleResults0_14;
#line 716 "analysis.m"
    else
#line 717 "analysis.m"
      {
#line 717 "analysis.m"
        {
#line 717 "analysis.m"
          analysis__ModuleResults1_15 = mercury__map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &analysis_scalar_common_2[0]);
        }
#line 717 "analysis.m"
      }
#line 719 "analysis.m"
    {
#line 719 "analysis.m"
      analysis__succeeded = mercury__map__search_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &analysis_scalar_common_2[0], analysis__ModuleResults1_15, ((MR_Box) (analysis__AnalysisName_9)), &analysis__conv1_AnalysisResults0_16);
    }
#line 719 "analysis.m"
    if (analysis__succeeded)
#line 719 "analysis.m"
      {
#line 719 "analysis.m"
        analysis__AnalysisResults0_16 = ((MR_Word) analysis__conv1_AnalysisResults0_16);
#line 719 "analysis.m"
        analysis__succeeded = MR_TRUE;
#line 719 "analysis.m"
      }
#line 721 "analysis.m"
    if (analysis__succeeded)
#line 720 "analysis.m"
      analysis__AnalysisResults1_17 = analysis__AnalysisResults0_16;
#line 721 "analysis.m"
    else
#line 722 "analysis.m"
      {
#line 722 "analysis.m"
        {
#line 722 "analysis.m"
          analysis__AnalysisResults1_17 = mercury__map__init_0_f_0((MR_Word) &analysis__analysis__type_ctor_info_func_id_0, (MR_Word) &analysis_scalar_common_1[0]);
        }
#line 722 "analysis.m"
      }
#line 724 "analysis.m"
    {
#line 724 "analysis.m"
      analysis__succeeded = mercury__map__search_2_f_0((MR_Word) &analysis__analysis__type_ctor_info_func_id_0, (MR_Word) &analysis_scalar_common_1[0], analysis__AnalysisResults1_17, ((MR_Box) (analysis__FuncId_11)), &analysis__conv2_FuncResults0_18);
    }
#line 724 "analysis.m"
    if (analysis__succeeded)
#line 724 "analysis.m"
      {
#line 724 "analysis.m"
        analysis__FuncResults0_18 = ((MR_Word) analysis__conv2_FuncResults0_18);
#line 724 "analysis.m"
        analysis__succeeded = MR_TRUE;
#line 724 "analysis.m"
      }
#line 726 "analysis.m"
    if (analysis__succeeded)
#line 725 "analysis.m"
      analysis__FuncResults1_19 = analysis__FuncResults0_18;
#line 726 "analysis.m"
    else
#line 727 "analysis.m"
      analysis__FuncResults1_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 729 "analysis.m"
    {
#line 729 "analysis.m"
      analysis__Request_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 729 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__Request_20, 0) = ((MR_Box) (analysis__TypeClassInfo_for_call_pattern_58));
#line 729 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__Request_20, 1) = analysis__CallPattern_12;
#line 729 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__Request_20, 2) = ((MR_Box) (analysis__CallerModule_8));
#line 729 "analysis.m"
    }
#line 730 "analysis.m"
    {
#line 730 "analysis.m"
      analysis__FuncResults_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 730 "analysis.m"
      MR_hl_field(MR_mktag(1), analysis__FuncResults_21, 0) = ((MR_Box) (analysis__Request_20));
#line 730 "analysis.m"
      MR_hl_field(MR_mktag(1), analysis__FuncResults_21, 1) = ((MR_Box) (analysis__FuncResults1_19));
#line 730 "analysis.m"
    }
#line 732 "analysis.m"
    analysis__TypeClassInfo_for_compiler_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 0)));
#line 732 "analysis.m"
    analysis__V_39_39 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 1));
#line 732 "analysis.m"
    analysis__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 2)));
#line 732 "analysis.m"
    analysis__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 3)));
#line 732 "analysis.m"
    analysis__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 4)));
#line 732 "analysis.m"
    analysis__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 5)));
#line 732 "analysis.m"
    analysis__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 6)));
#line 732 "analysis.m"
    analysis__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 7)));
#line 732 "analysis.m"
    analysis__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 8)));
#line 732 "analysis.m"
    analysis__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 9)));
#line 732 "analysis.m"
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
      analysis__V_26_26 = mercury__map__set_3_f_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &analysis_scalar_common_2[1], analysis__V_27_27, ((MR_Box) (analysis__ModuleName_10)), ((MR_Box) (analysis__V_28_28)));
    }
#line 731 "analysis.m"
    analysis__TypeClassInfo_for_compiler_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 0)));
#line 731 "analysis.m"
    analysis__V_48_48 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 1));
#line 731 "analysis.m"
    analysis__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 2)));
#line 731 "analysis.m"
    analysis__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 3)));
#line 731 "analysis.m"
    analysis__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 4)));
#line 731 "analysis.m"
    analysis__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 5)));
#line 731 "analysis.m"
    analysis__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 6)));
#line 731 "analysis.m"
    analysis__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 7)));
#line 731 "analysis.m"
    analysis__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 8)));
#line 731 "analysis.m"
    analysis__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 9)));
#line 731 "analysis.m"
    analysis__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 10)));
#line 731 "analysis.m"
    {
#line 731 "analysis.m"
      MR_Word base;
#line 731 "analysis.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 731 "analysis.m"
      *analysis__STATE_VARIABLE_Info_23 = base;
#line 731 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (analysis__TypeClassInfo_for_compiler_77));
#line 731 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 1) = analysis__V_48_48;
#line 731 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (analysis__V_49_49));
#line 731 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (analysis__V_50_50));
#line 731 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (analysis__V_51_51));
#line 731 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (analysis__V_26_26));
#line 731 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (analysis__V_53_53));
#line 731 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (analysis__V_54_54));
#line 731 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (analysis__V_55_55));
#line 731 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (analysis__V_56_56));
#line 731 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (analysis__V_57_57));
#line 731 "analysis.m"
    }
#line 713 "analysis.m"
  }
#line 708 "analysis.m"
}

#line 640 "analysis.m"
void MR_CALL 
analysis__record_result_in_analysis_map_6_p_0(
#line 640 "analysis.m"
  MR_Word analysis__TypeClassInfo_for_analysis_21,
#line 640 "analysis.m"
  MR_Word analysis__FuncId_7,
#line 640 "analysis.m"
  MR_Box analysis__CallPattern_8,
#line 640 "analysis.m"
  MR_Box analysis__AnswerPattern_9,
#line 640 "analysis.m"
  MR_Word analysis__Status_10,
#line 640 "analysis.m"
  MR_Word analysis__ModuleResults0_11,
#line 640 "analysis.m"
  MR_Word * analysis__ModuleResults_12)
#line 640 "analysis.m"
{
#line 647 "analysis.m"
  {
#line 647 "analysis.m"
    MR_bool analysis__succeeded;
#line 647 "analysis.m"
    MR_String analysis__AnalysisName_13;
#line 647 "analysis.m"
    MR_Word analysis__AnalysisResults1_15;
#line 647 "analysis.m"
    MR_Word analysis__FuncResults1_17;
#line 647 "analysis.m"
    MR_Word analysis__Result_18;
#line 647 "analysis.m"
    MR_Word analysis__FuncResults_19;
#line 647 "analysis.m"
    MR_Word analysis__V_20_20;
#line 86 "analysis.m"
    MR_Box analysis__V_32_32;
#line 86 "analysis.m"
    MR_Box analysis__V_33_33;
#line 86 "analysis.m"
    MR_Box MR_CALL (* analysis__func_0)(MR_Box) = ((MR_Box MR_CALL (*)(MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), analysis__TypeClassInfo_for_analysis_21, (MR_Integer) 0)), (MR_Integer) 5)));
#line 86 "analysis.m"
    MR_Box analysis__conv1_AnalysisName_13;
#line 651 "analysis.m"
    MR_Word analysis__AnalysisResults0_14;
#line 649 "analysis.m"
    MR_Box analysis__conv2_AnalysisResults0_14;
#line 656 "analysis.m"
    MR_Word analysis__FuncResults0_16;
#line 654 "analysis.m"
    MR_Box analysis__conv3_FuncResults0_16;

#line 86 "analysis.m"
    {
#line 86 "analysis.m"
      analysis__conv1_AnalysisName_13 = analysis__func_0(((MR_Box) analysis__TypeClassInfo_for_analysis_21));
    }
#line 86 "analysis.m"
    analysis__AnalysisName_13 = ((MR_String) analysis__conv1_AnalysisName_13);
#line 649 "analysis.m"
    {
#line 649 "analysis.m"
      analysis__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &analysis_scalar_common_2[2], analysis__ModuleResults0_11, ((MR_Box) (analysis__AnalysisName_13)), &analysis__conv2_AnalysisResults0_14);
    }
#line 649 "analysis.m"
    if (analysis__succeeded)
#line 649 "analysis.m"
      {
#line 649 "analysis.m"
        analysis__AnalysisResults0_14 = ((MR_Word) analysis__conv2_AnalysisResults0_14);
#line 649 "analysis.m"
        analysis__succeeded = MR_TRUE;
#line 649 "analysis.m"
      }
#line 651 "analysis.m"
    if (analysis__succeeded)
#line 650 "analysis.m"
      analysis__AnalysisResults1_15 = analysis__AnalysisResults0_14;
#line 651 "analysis.m"
    else
#line 652 "analysis.m"
      {
#line 652 "analysis.m"
        {
#line 652 "analysis.m"
          analysis__AnalysisResults1_15 = mercury__map__init_0_f_0((MR_Word) &analysis__analysis__type_ctor_info_func_id_0, (MR_Word) &analysis_scalar_common_1[1]);
        }
#line 652 "analysis.m"
      }
#line 654 "analysis.m"
    {
#line 654 "analysis.m"
      analysis__succeeded = mercury__map__search_3_p_0((MR_Word) &analysis__analysis__type_ctor_info_func_id_0, (MR_Word) &analysis_scalar_common_1[1], analysis__AnalysisResults1_15, ((MR_Box) (analysis__FuncId_7)), &analysis__conv3_FuncResults0_16);
    }
#line 654 "analysis.m"
    if (analysis__succeeded)
#line 654 "analysis.m"
      {
#line 654 "analysis.m"
        analysis__FuncResults0_16 = ((MR_Word) analysis__conv3_FuncResults0_16);
#line 654 "analysis.m"
        analysis__succeeded = MR_TRUE;
#line 654 "analysis.m"
      }
#line 656 "analysis.m"
    if (analysis__succeeded)
#line 655 "analysis.m"
      analysis__FuncResults1_17 = analysis__FuncResults0_16;
#line 656 "analysis.m"
    else
#line 657 "analysis.m"
      analysis__FuncResults1_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 659 "analysis.m"
    {
#line 659 "analysis.m"
      analysis__Result_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 659 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__Result_18, 0) = ((MR_Box) (analysis__TypeClassInfo_for_analysis_21));
#line 659 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__Result_18, 1) = analysis__CallPattern_8;
#line 659 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__Result_18, 2) = analysis__AnswerPattern_9;
#line 659 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__Result_18, 3) = ((MR_Box) (analysis__Status_10));
#line 659 "analysis.m"
    }
#line 660 "analysis.m"
    {
#line 660 "analysis.m"
      analysis__FuncResults_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 660 "analysis.m"
      MR_hl_field(MR_mktag(1), analysis__FuncResults_19, 0) = ((MR_Box) (analysis__Result_18));
#line 660 "analysis.m"
      MR_hl_field(MR_mktag(1), analysis__FuncResults_19, 1) = ((MR_Box) (analysis__FuncResults1_17));
#line 660 "analysis.m"
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
#line 647 "analysis.m"
  }
#line 640 "analysis.m"
}

#line 603 "analysis.m"
static MR_bool MR_CALL 
analysis__lookup_exactly_matching_result_even_from_invalid_modules_6_p_0_1(
#line 603 "analysis.m"
  MR_Box analysis__closure_arg,
#line 603 "analysis.m"
  MR_Box analysis__wrapper_arg_1)
#line 603 "analysis.m"
{
#line 603 "analysis.m"
  {
#line 603 "analysis.m"
    MR_bool analysis__succeeded;
#line 603 "analysis.m"
    MR_Box analysis__closure = analysis__closure_arg;

#line 603 "analysis.m"
    {
#line 603 "analysis.m"
      return analysis__succeeded = analysis__IntroducedFrom__pred__lookup_exactly_matching_result_even_from_invalid_modules__603__1_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 3))), (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 4)), (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 5)), ((MR_Word) analysis__wrapper_arg_1));
    }
#line 603 "analysis.m"
    return analysis__succeeded;
#line 603 "analysis.m"
  }
#line 603 "analysis.m"
}

#line 593 "analysis.m"
void MR_CALL 
analysis__lookup_exactly_matching_result_even_from_invalid_modules_6_p_0(
#line 593 "analysis.m"
  MR_Word analysis__TypeClassInfo_for_analysis_32,
#line 593 "analysis.m"
  MR_Word analysis__Info_7,
#line 593 "analysis.m"
  MR_Word analysis__ModuleName_8,
#line 593 "analysis.m"
  MR_Word analysis__FuncId_9,
#line 593 "analysis.m"
  MR_Box analysis__FuncInfo_10,
#line 593 "analysis.m"
  MR_Box analysis__Call_11,
#line 593 "analysis.m"
  MR_Word * analysis__MaybeResult_12)
#line 593 "analysis.m"
{
#line 599 "analysis.m"
  {
#line 599 "analysis.m"
    MR_bool analysis__succeeded;
#line 599 "analysis.m"
    MR_Word analysis__TypeInfo_34_34;
#line 599 "analysis.m"
    MR_Word analysis__TypeInfo_36_36;
#line 599 "analysis.m"
    MR_Word analysis__TypeInfo_38_38;
#line 599 "analysis.m"
    MR_Word analysis__AllResultsList_14;
#line 599 "analysis.m"
    MR_Word analysis__ResultList_15;
#line 599 "analysis.m"
    MR_Word analysis__V_21_21;

#line 601 "analysis.m"
    {
#line 601 "analysis.m"
      analysis__lookup_results_1_5_p_0(analysis__TypeClassInfo_for_analysis_32, analysis__Info_7, analysis__ModuleName_8, analysis__FuncId_9, (MR_Integer) 1, &analysis__AllResultsList_14);
    }
#line 603 "analysis.m"
    {
#line 603 "analysis.m"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_32, (MR_Integer) 4, &analysis__TypeInfo_34_34);
    }
#line 603 "analysis.m"
    {
#line 603 "analysis.m"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_32, (MR_Integer) 5, &analysis__TypeInfo_36_36);
    }
#line 14430 "analysis.c"
    {
#line 14432 "analysis.c"
      analysis__TypeInfo_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 14434 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_38_38, 0) = ((MR_Box) (&analysis__analysis__type_ctor_info_analysis_result_2));
#line 14436 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_38_38, 1) = ((MR_Box) (analysis__TypeInfo_34_34));
#line 14438 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_38_38, 2) = ((MR_Box) (analysis__TypeInfo_36_36));
#line 14440 "analysis.c"
    }
#line 603 "analysis.m"
    {
#line 603 "analysis.m"
      analysis__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 603 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_21_21, 0) = ((MR_Box) (&analysis_scalar_common_6[0]));
#line 603 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_21_21, 1) = ((MR_Box) (analysis__lookup_exactly_matching_result_even_from_invalid_modules_6_p_0_1));
#line 603 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_21_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 603 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_21_21, 3) = ((MR_Box) (analysis__TypeClassInfo_for_analysis_32));
#line 603 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_21_21, 4) = analysis__FuncInfo_10;
#line 603 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_21_21, 5) = analysis__Call_11;
#line 603 "analysis.m"
    }
#line 603 "analysis.m"
    {
#line 603 "analysis.m"
      analysis__ResultList_15 = mercury__list__filter_2_f_0(analysis__TypeInfo_38_38, analysis__V_21_21, analysis__AllResultsList_14);
    }
#line 610 "analysis.m"
    if ((analysis__ResultList_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 608 "analysis.m"
      *analysis__MaybeResult_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 610 "analysis.m"
    else
#line 610 "analysis.m"
      {
#line 610 "analysis.m"
        MR_Word analysis__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), analysis__ResultList_15, (MR_Integer) 1)));
#line 610 "analysis.m"
        MR_Word analysis__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), analysis__ResultList_15, (MR_Integer) 0)));

#line 610 "analysis.m"
        if ((analysis__V_42_42 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 612 "analysis.m"
          {
#line 612 "analysis.m"
            MR_Word base;
#line 612 "analysis.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 612 "analysis.m"
            *analysis__MaybeResult_12 = base;
#line 612 "analysis.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (analysis__V_43_43));
#line 612 "analysis.m"
          }
#line 610 "analysis.m"
        else
#line 614 "analysis.m"
          {
#line 615 "analysis.m"
            {
#line 615 "analysis.m"
              mercury__require__unexpected_3_p_0((MR_String) "analysis", (MR_String) "predicate \140analysis.lookup_exactly_matching_result_even_from_invalid_modules\'/6", (MR_String) "zero or one exactly matching results expected");
#line 615 "analysis.m"
              return;
            }
#line 614 "analysis.m"
          }
#line 610 "analysis.m"
      }
#line 599 "analysis.m"
  }
#line 593 "analysis.m"
}

#line 579 "analysis.m"
void MR_CALL 
analysis__more_precise_answer_4_p_0(
#line 579 "analysis.m"
  MR_Word analysis__TypeClassInfo_for_analysis_15,
#line 579 "analysis.m"
  MR_Box analysis__FuncInfo_5,
#line 579 "analysis.m"
  MR_Word analysis__Result_6,
#line 579 "analysis.m"
  MR_Word analysis__Best0_7,
#line 579 "analysis.m"
  MR_Word * analysis__Best_8)
#line 579 "analysis.m"
{
#line 584 "analysis.m"
  {
#line 584 "analysis.m"
    MR_bool analysis__succeeded;
#line 584 "analysis.m"
    MR_Box analysis__ResultAnswer_9 = (MR_hl_field(MR_mktag(0), analysis__Result_6, (MR_Integer) 1));
#line 584 "analysis.m"
    MR_Box analysis__BestAnswer0_10 = (MR_hl_field(MR_mktag(0), analysis__Best0_7, (MR_Integer) 1));
#line 585 "analysis.m"
    MR_Box analysis__V_11_11 = (MR_hl_field(MR_mktag(0), analysis__Result_6, (MR_Integer) 0));
#line 585 "analysis.m"
    MR_Word analysis__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Result_6, (MR_Integer) 2)));
#line 586 "analysis.m"
    MR_Box analysis__V_13_13 = (MR_hl_field(MR_mktag(0), analysis__Best0_7, (MR_Integer) 0));
#line 586 "analysis.m"
    MR_Word analysis__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Best0_7, (MR_Integer) 2)));
#line 587 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_answer_pattern_16;
#line 587 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_partial_order_18;
#line 136 "analysis.m"
    MR_bool MR_CALL (* analysis__func_0)(MR_Box, MR_Box, MR_Box, MR_Box);

#line 14550 "analysis.c"
    {
#line 14552 "analysis.c"
      mercury__private_builtin__superclass_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_15, (MR_Integer) 2, &analysis__TypeClassInfo_for_answer_pattern_16);
    }
#line 14555 "analysis.c"
    {
#line 14557 "analysis.c"
      mercury__private_builtin__superclass_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_answer_pattern_16, (MR_Integer) 1, &analysis__TypeClassInfo_for_partial_order_18);
    }
#line 136 "analysis.m"
    analysis__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), analysis__TypeClassInfo_for_partial_order_18, (MR_Integer) 0)), (MR_Integer) 5)));
#line 136 "analysis.m"
    {
#line 136 "analysis.m"
      analysis__succeeded = analysis__func_0(((MR_Box) analysis__TypeClassInfo_for_partial_order_18), analysis__FuncInfo_5, analysis__ResultAnswer_9, analysis__BestAnswer0_10);
    }
#line 589 "analysis.m"
    if (analysis__succeeded)
#line 588 "analysis.m"
      *analysis__Best_8 = analysis__Result_6;
#line 589 "analysis.m"
    else
#line 590 "analysis.m"
      *analysis__Best_8 = analysis__Best0_7;
#line 584 "analysis.m"
  }
#line 579 "analysis.m"
}

#line 536 "analysis.m"
static MR_Box MR_CALL 
analysis__lookup_results_2_4_p_0_1(
#line 536 "analysis.m"
  MR_Box analysis__closure_arg,
#line 536 "analysis.m"
  MR_Box analysis__wrapper_arg_1)
#line 536 "analysis.m"
{
#line 536 "analysis.m"
  {
#line 536 "analysis.m"
    MR_Box analysis__wrapper_arg_2;
#line 536 "analysis.m"
    MR_Box analysis__closure = analysis__closure_arg;
#line 536 "analysis.m"
    MR_Word analysis__conv5_LambdaHeadVar__2_25;

#line 536 "analysis.m"
    {
#line 536 "analysis.m"
      analysis__conv5_LambdaHeadVar__2_25 = analysis__IntroducedFrom__func__lookup_results_2__536__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 3))), ((MR_Word) analysis__wrapper_arg_1));
    }
#line 536 "analysis.m"
    analysis__wrapper_arg_2 = ((MR_Box) (analysis__conv5_LambdaHeadVar__2_25));
#line 536 "analysis.m"
    return analysis__wrapper_arg_2;
#line 536 "analysis.m"
  }
#line 536 "analysis.m"
}

#line 524 "analysis.m"
void MR_CALL 
analysis__lookup_results_2_4_p_0(
#line 524 "analysis.m"
  MR_Word analysis__TypeClassInfo_for_analysis_29,
#line 524 "analysis.m"
  MR_Word analysis__Map_5,
#line 524 "analysis.m"
  MR_Word analysis__ModuleName_6,
#line 524 "analysis.m"
  MR_Word analysis__FuncId_7,
#line 524 "analysis.m"
  MR_Word * analysis__ResultList_8)
#line 524 "analysis.m"
{
#line 528 "analysis.m"
  {
#line 528 "analysis.m"
    MR_bool analysis__succeeded;
#line 528 "analysis.m"
    MR_String analysis__AnalysisName_9;
#line 86 "analysis.m"
    MR_Box analysis__V_20_20;
#line 86 "analysis.m"
    MR_Box analysis__V_21_21;
#line 86 "analysis.m"
    MR_Box MR_CALL (* analysis__func_0)(MR_Box) = ((MR_Box MR_CALL (*)(MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), analysis__TypeClassInfo_for_analysis_29, (MR_Integer) 0)), (MR_Integer) 5)));
#line 86 "analysis.m"
    MR_Box analysis__conv1_AnalysisName_9;
#line 542 "analysis.m"
    MR_Word analysis__Results_15;
#line 531 "analysis.m"
    MR_Word analysis__TypeCtorInfo_32_32;
#line 531 "analysis.m"
    MR_Word analysis__TypeInfo_33_33;
#line 531 "analysis.m"
    MR_Word analysis__TypeCtorInfo_34_34;
#line 531 "analysis.m"
    MR_Word analysis__TypeInfo_35_35;
#line 531 "analysis.m"
    MR_Word analysis__ModuleResults_14;
#line 531 "analysis.m"
    MR_Word analysis__V_22_22;
#line 531 "analysis.m"
    MR_Box analysis__conv2_ModuleResults_14;
#line 532 "analysis.m"
    MR_Box analysis__conv3_V_22_22;
#line 532 "analysis.m"
    MR_Box analysis__conv4_Results_15;

#line 86 "analysis.m"
    {
#line 86 "analysis.m"
      analysis__conv1_AnalysisName_9 = analysis__func_0(((MR_Box) analysis__TypeClassInfo_for_analysis_29));
    }
#line 86 "analysis.m"
    analysis__AnalysisName_9 = ((MR_String) analysis__conv1_AnalysisName_9);
#line 531 "analysis.m"
    {
#line 531 "analysis.m"
      analysis__succeeded = mercury__map__elem_2_f_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &analysis_scalar_common_2[3], ((MR_Box) (analysis__ModuleName_6)), analysis__Map_5, &analysis__conv2_ModuleResults_14);
    }
#line 531 "analysis.m"
    if (analysis__succeeded)
#line 531 "analysis.m"
      {
#line 531 "analysis.m"
        analysis__ModuleResults_14 = ((MR_Word) analysis__conv2_ModuleResults_14);
#line 531 "analysis.m"
        analysis__succeeded = MR_TRUE;
#line 531 "analysis.m"
      }
#line 531 "analysis.m"
    if (analysis__succeeded)
#line 531 "analysis.m"
      {
#line 14688 "analysis.c"
        analysis__TypeCtorInfo_32_32 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 14690 "analysis.c"
        analysis__TypeInfo_33_33 = (MR_Word) &analysis_scalar_common_2[2];
#line 532 "analysis.m"
        {
#line 532 "analysis.m"
          analysis__succeeded = mercury__map__elem_2_f_0(analysis__TypeCtorInfo_32_32, analysis__TypeInfo_33_33, ((MR_Box) (analysis__AnalysisName_9)), analysis__ModuleResults_14, &analysis__conv3_V_22_22);
        }
#line 532 "analysis.m"
        if (analysis__succeeded)
#line 532 "analysis.m"
          {
#line 532 "analysis.m"
            analysis__V_22_22 = ((MR_Word) analysis__conv3_V_22_22);
#line 532 "analysis.m"
            analysis__succeeded = MR_TRUE;
#line 532 "analysis.m"
          }
#line 531 "analysis.m"
        if (analysis__succeeded)
#line 531 "analysis.m"
          {
#line 14711 "analysis.c"
            analysis__TypeCtorInfo_34_34 = (MR_Word) &analysis__analysis__type_ctor_info_func_id_0;
#line 14713 "analysis.c"
            analysis__TypeInfo_35_35 = (MR_Word) &analysis_scalar_common_1[1];
#line 532 "analysis.m"
            {
#line 532 "analysis.m"
              analysis__succeeded = mercury__map__elem_2_f_0(analysis__TypeCtorInfo_34_34, analysis__TypeInfo_35_35, ((MR_Box) (analysis__FuncId_7)), analysis__V_22_22, &analysis__conv4_Results_15);
            }
#line 532 "analysis.m"
            if (analysis__succeeded)
#line 532 "analysis.m"
              {
#line 532 "analysis.m"
                analysis__Results_15 = ((MR_Word) analysis__conv4_Results_15);
#line 532 "analysis.m"
                analysis__succeeded = MR_TRUE;
#line 532 "analysis.m"
              }
#line 531 "analysis.m"
          }
#line 531 "analysis.m"
      }
#line 542 "analysis.m"
    if (analysis__succeeded)
#line 536 "analysis.m"
      {
#line 536 "analysis.m"
        MR_Word analysis__TypeInfo_38_38;
#line 536 "analysis.m"
        MR_Word analysis__TypeInfo_40_40;
#line 536 "analysis.m"
        MR_Word analysis__TypeInfo_42_42;
#line 536 "analysis.m"
        MR_Word analysis__V_23_23;
#line 536 "analysis.m"
        MR_Word analysis__conv6_ResultList_8;

#line 536 "analysis.m"
        {
#line 536 "analysis.m"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_29, (MR_Integer) 4, &analysis__TypeInfo_38_38);
        }
#line 536 "analysis.m"
        {
#line 536 "analysis.m"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_29, (MR_Integer) 5, &analysis__TypeInfo_40_40);
        }
#line 14759 "analysis.c"
        {
#line 14761 "analysis.c"
          analysis__TypeInfo_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 14763 "analysis.c"
          MR_hl_field(MR_mktag(0), analysis__TypeInfo_42_42, 0) = ((MR_Box) (&analysis__analysis__type_ctor_info_analysis_result_2));
#line 14765 "analysis.c"
          MR_hl_field(MR_mktag(0), analysis__TypeInfo_42_42, 1) = ((MR_Box) (analysis__TypeInfo_38_38));
#line 14767 "analysis.c"
          MR_hl_field(MR_mktag(0), analysis__TypeInfo_42_42, 2) = ((MR_Box) (analysis__TypeInfo_40_40));
#line 14769 "analysis.c"
        }
#line 536 "analysis.m"
        {
#line 536 "analysis.m"
          analysis__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 536 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__V_23_23, 0) = ((MR_Box) (&analysis_scalar_common_4[2]));
#line 536 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__V_23_23, 1) = ((MR_Box) (analysis__lookup_results_2_4_p_0_1));
#line 536 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__V_23_23, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 536 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__V_23_23, 3) = ((MR_Box) (analysis__TypeClassInfo_for_analysis_29));
#line 536 "analysis.m"
        }
#line 536 "analysis.m"
        {
#line 536 "analysis.m"
          analysis__conv6_ResultList_8 = mercury__list__map_2_f_0((MR_Word) &analysis__analysis__type_ctor_info_some_analysis_result_0, analysis__TypeInfo_42_42, (MR_Word) analysis__V_23_23, analysis__Results_15);
        }
#line 536 "analysis.m"
        *analysis__ResultList_8 = (MR_Word) analysis__conv6_ResultList_8;
#line 536 "analysis.m"
      }
#line 542 "analysis.m"
    else
#line 543 "analysis.m"
      *analysis__ResultList_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 528 "analysis.m"
  }
#line 524 "analysis.m"
}

#line 493 "analysis.m"
void MR_CALL 
analysis__lookup_results_1_5_p_0(
#line 493 "analysis.m"
  MR_Word analysis__TypeClassInfo_for_analysis_62,
#line 493 "analysis.m"
  MR_Word analysis__Info_6,
#line 493 "analysis.m"
  MR_Word analysis__ModuleName_7,
#line 493 "analysis.m"
  MR_Word analysis__FuncId_8,
#line 493 "analysis.m"
  MR_Word analysis__AllowInvalidModules_9,
#line 493 "analysis.m"
  MR_Word * analysis__ResultList_10)
#line 493 "analysis.m"
{
#line 497 "analysis.m"
  {
#line 497 "analysis.m"
    MR_bool analysis__succeeded;
#line 498 "analysis.m"
    MR_Word analysis__Debug_81;
#line 508 "analysis.m"
    MR_Word analysis__TypeCtorInfo_66_66;
#line 508 "analysis.m"
    MR_Word analysis__TypeCtorInfo_67_67;
#line 508 "analysis.m"
    MR_Word analysis__V_26_26;
#line 508 "analysis.m"
    MR_Word analysis__V_27_27;
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
    MR_Box analysis__conv0_V_26_26;

#line 1380 "analysis.m"
{
#define MR_PROC_LABEL analysis__lookup_results_1_5_p_0


		{
#line 1380 "analysis.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&analysis__mutable_variable_debug_analysis_lock,
                    "analysis__mutable_variable_debug_analysis_lock");
#endif

#line 14869 "analysis.c"

		;}
#undef MR_PROC_LABEL
#line 1380 "analysis.m"
}
#line 1380 "analysis.m"
{
#define MR_PROC_LABEL analysis__lookup_results_1_5_p_0

	MR_Word X;

		{
#line 1380 "analysis.m"
X = analysis__mutable_variable_debug_analysis;

#line 14885 "analysis.c"

		;}
#undef MR_PROC_LABEL
	 analysis__Debug_81  = X;
#line 1380 "analysis.m"
}
#line 1380 "analysis.m"
{
#define MR_PROC_LABEL analysis__lookup_results_1_5_p_0


		{
#line 1380 "analysis.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&analysis__mutable_variable_debug_analysis_lock,
                    "analysis__mutable_variable_debug_analysis_lock");
#endif

#line 14904 "analysis.c"

		;}
#undef MR_PROC_LABEL
#line 1380 "analysis.m"
}
#line 1393 "analysis.m"
#line 1393 "analysis.m"
    switch (analysis__Debug_81) {
#line 1393 "analysis.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1393 "analysis.m"
      case (MR_Integer) 0:
#line 1394 "analysis.m"
        {
#line 1394 "analysis.m"
        }
#line 1393 "analysis.m"
        break;
#line 1393 "analysis.m"
      case (MR_Integer) 1:
#line 1392 "analysis.m"
        {
#line 1392 "analysis.m"
          analysis__IntroducedFrom__pred__lookup_results_1__499__1_4_p_0(analysis__ModuleName_7, analysis__FuncId_8);
        }
#line 1393 "analysis.m"
        break;
#line 1393 "analysis.m"
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
        analysis__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 6)));
#line 509 "analysis.m"
        analysis__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 7)));
#line 509 "analysis.m"
        analysis__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 8)));
#line 509 "analysis.m"
        analysis__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 9)));
#line 509 "analysis.m"
        analysis__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 10)));
#line 14962 "analysis.c"
        analysis__TypeCtorInfo_66_66 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 14964 "analysis.c"
        analysis__TypeCtorInfo_67_67 = (MR_Word) &analysis__analysis__type_ctor_info_analysis_status_0;
#line 509 "analysis.m"
        {
#line 509 "analysis.m"
          analysis__succeeded = mercury__map__elem_2_f_0(analysis__TypeCtorInfo_66_66, analysis__TypeCtorInfo_67_67, ((MR_Box) (analysis__ModuleName_7)), analysis__V_27_27, &analysis__conv0_V_26_26);
        }
#line 509 "analysis.m"
        if (analysis__succeeded)
#line 509 "analysis.m"
          {
#line 509 "analysis.m"
            analysis__V_26_26 = ((MR_Word) analysis__conv0_V_26_26);
#line 509 "analysis.m"
            analysis__succeeded = MR_TRUE;
#line 509 "analysis.m"
          }
#line 508 "analysis.m"
        if (analysis__succeeded)
#line 509 "analysis.m"
          analysis__succeeded = (analysis__V_26_26 == (MR_Integer) 0);
#line 508 "analysis.m"
      }
#line 512 "analysis.m"
    if (analysis__succeeded)
#line 511 "analysis.m"
      *analysis__ResultList_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 512 "analysis.m"
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
#line 516 "analysis.m"
          return;
        }
#line 514 "analysis.m"
      }
#line 497 "analysis.m"
  }
#line 493 "analysis.m"
}

#line 312 "analysis.m"
void MR_CALL 
analysis__enable_debug_messages_3_p_0(
#line 312 "analysis.m"
  MR_Word analysis__Debug_4)
#line 312 "analysis.m"
{
#line 1380 "analysis.m"
  {
#line 1380 "analysis.m"
    MR_bool analysis__succeeded;

#line 1380 "analysis.m"
{
#define MR_PROC_LABEL analysis__enable_debug_messages_3_p_0


		{
#line 1380 "analysis.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&analysis__mutable_variable_debug_analysis_lock,
                    "analysis__mutable_variable_debug_analysis_lock");
#endif

#line 15061 "analysis.c"

		;}
#undef MR_PROC_LABEL
#line 1380 "analysis.m"
}
#line 1380 "analysis.m"
{
#define MR_PROC_LABEL analysis__enable_debug_messages_3_p_0

	MR_Word X;

	X =  analysis__Debug_4 ;
		{
#line 1380 "analysis.m"
analysis__mutable_variable_debug_analysis = X;

#line 15078 "analysis.c"

		;}
#undef MR_PROC_LABEL
#line 1380 "analysis.m"
}
#line 1380 "analysis.m"
{
#define MR_PROC_LABEL analysis__enable_debug_messages_3_p_0


		{
#line 1380 "analysis.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&analysis__mutable_variable_debug_analysis_lock,
                    "analysis__mutable_variable_debug_analysis_lock");
#endif

#line 15096 "analysis.c"

		;}
#undef MR_PROC_LABEL
#line 1380 "analysis.m"
}
#line 1380 "analysis.m"
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
#line 1335 "analysis.m"
  {
#line 1335 "analysis.m"
    MR_bool analysis__succeeded;

#line 1335 "analysis.m"
    {
#line 1335 "analysis.m"
      analysis__file__read_module_overall_status_6_p_0(analysis__TypeClassInfo_for_compiler_15, analysis__Compiler_7, analysis__Globals_8, analysis__ModuleName_9, analysis__ModuleStatus_10);
#line 1335 "analysis.m"
      return;
    }
#line 1335 "analysis.m"
  }
#line 308 "analysis.m"
}

#line 1280 "analysis.m"
static void MR_CALL 
analysis__write_analysis_files_7_p_0_4(
#line 1280 "analysis.m"
  MR_Box analysis__closure_arg,
#line 1280 "analysis.m"
  MR_Box analysis__wrapper_arg_1,
#line 1280 "analysis.m"
  MR_Box analysis__wrapper_arg_2,
#line 1280 "analysis.m"
  MR_Box * analysis__wrapper_arg_3)
#line 1280 "analysis.m"
{
#line 1280 "analysis.m"
  {
#line 1280 "analysis.m"
    MR_Box analysis__closure = analysis__closure_arg;

#line 1280 "analysis.m"
    {
#line 1280 "analysis.m"
      analysis__maybe_write_module_imdg_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 4))), ((MR_Word) analysis__wrapper_arg_1));
#line 1280 "analysis.m"
      return;
    }
#line 1280 "analysis.m"
  }
#line 1280 "analysis.m"
}

#line 1272 "analysis.m"
static void MR_CALL 
analysis__write_analysis_files_7_p_0_3(
#line 1272 "analysis.m"
  MR_Box analysis__closure_arg,
#line 1272 "analysis.m"
  MR_Box analysis__wrapper_arg_1,
#line 1272 "analysis.m"
  MR_Box analysis__wrapper_arg_2,
#line 1272 "analysis.m"
  MR_Box * analysis__wrapper_arg_3)
#line 1272 "analysis.m"
{
#line 1272 "analysis.m"
  {
#line 1272 "analysis.m"
    MR_Box analysis__closure = analysis__closure_arg;

#line 1272 "analysis.m"
    {
#line 1272 "analysis.m"
      analysis__maybe_write_module_requests_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 4))), ((MR_Word) analysis__wrapper_arg_1));
#line 1272 "analysis.m"
      return;
    }
#line 1272 "analysis.m"
  }
#line 1272 "analysis.m"
}

#line 1263 "analysis.m"
static void MR_CALL 
analysis__write_analysis_files_7_p_0_2(
#line 1263 "analysis.m"
  MR_Box analysis__closure_arg,
#line 1263 "analysis.m"
  MR_Box analysis__wrapper_arg_1,
#line 1263 "analysis.m"
  MR_Box analysis__wrapper_arg_2,
#line 1263 "analysis.m"
  MR_Box * analysis__wrapper_arg_3)
#line 1263 "analysis.m"
{
#line 1263 "analysis.m"
  {
#line 1263 "analysis.m"
    MR_Box analysis__closure = analysis__closure_arg;

#line 1263 "analysis.m"
    {
#line 1263 "analysis.m"
      analysis__maybe_write_module_overall_status_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 4))), ((MR_Word) analysis__wrapper_arg_1));
#line 1263 "analysis.m"
      return;
    }
#line 1263 "analysis.m"
  }
#line 1263 "analysis.m"
}

#line 1245 "analysis.m"
static void MR_CALL 
analysis__write_analysis_files_7_p_0_1(
#line 1245 "analysis.m"
  MR_Box analysis__closure_arg,
#line 1245 "analysis.m"
  MR_Box analysis__wrapper_arg_1,
#line 1245 "analysis.m"
  MR_Box analysis__wrapper_arg_2,
#line 1245 "analysis.m"
  MR_Box * analysis__wrapper_arg_3,
#line 1245 "analysis.m"
  MR_Box analysis__wrapper_arg_4,
#line 1245 "analysis.m"
  MR_Box * analysis__wrapper_arg_5)
#line 1245 "analysis.m"
{
#line 1245 "analysis.m"
  {
#line 1245 "analysis.m"
    MR_Box analysis__closure = analysis__closure_arg;
#line 1245 "analysis.m"
    MR_Word analysis__conv0_STATE_VARIABLE_Info_15;

#line 1245 "analysis.m"
    {
#line 1245 "analysis.m"
      analysis__load_module_imdg_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 3))), ((MR_Word) analysis__wrapper_arg_1), ((MR_Word) analysis__wrapper_arg_2), &analysis__conv0_STATE_VARIABLE_Info_15);
    }
#line 1245 "analysis.m"
    *analysis__wrapper_arg_3 = ((MR_Box) (analysis__conv0_STATE_VARIABLE_Info_15));
#line 1245 "analysis.m"
  }
#line 1245 "analysis.m"
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
#line 1236 "analysis.m"
  {
#line 1236 "analysis.m"
    MR_bool analysis__succeeded;
#line 1236 "analysis.m"
    MR_Word analysis__TypeCtorInfo_117_117 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 1236 "analysis.m"
    MR_Word analysis__TypeCtorInfo_125_125;
#line 1236 "analysis.m"
    MR_Word analysis__ThisModule_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 2)));
#line 1236 "analysis.m"
    MR_Word analysis__ImportedModules_14;
#line 1236 "analysis.m"
    MR_Word analysis__LocalModules_15;
#line 1236 "analysis.m"
    MR_Word analysis__LocalImportedModules_16;
#line 1236 "analysis.m"
    MR_Word analysis__Globals_17;
#line 1236 "analysis.m"
    MR_Word analysis__ModuleStatus_18;
#line 1236 "analysis.m"
    MR_Word analysis__ModuleResults_19;
#line 1236 "analysis.m"
    MR_String analysis__TimestampFileName_20;
#line 1236 "analysis.m"
    MR_Word analysis__V_25_25;
#line 1236 "analysis.m"
    MR_Word analysis__STATE_VARIABLE_Info_26_26;
#line 1236 "analysis.m"
    MR_Word analysis__STATE_VARIABLE_Info_28_28;
#line 1236 "analysis.m"
    MR_Word analysis__V_30_30;
#line 1236 "analysis.m"
    MR_Word analysis__STATE_VARIABLE_Info_31_31;
#line 1236 "analysis.m"
    MR_Word analysis__V_32_32;
#line 1236 "analysis.m"
    MR_Word analysis__V_33_33;
#line 1236 "analysis.m"
    MR_Word analysis__V_39_39;
#line 1236 "analysis.m"
    MR_Word analysis__V_41_41;
#line 1236 "analysis.m"
    MR_Word analysis__V_43_43;
#line 1236 "analysis.m"
    MR_Word analysis__V_46_46;
#line 1237 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_compiler_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 0)));
#line 1237 "analysis.m"
    MR_Box analysis__V_51_51 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 1));
#line 1237 "analysis.m"
    MR_Word analysis__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 3)));
#line 1237 "analysis.m"
    MR_Word analysis__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 4)));
#line 1237 "analysis.m"
    MR_Word analysis__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 5)));
#line 1237 "analysis.m"
    MR_Word analysis__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 6)));
#line 1237 "analysis.m"
    MR_Word analysis__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 7)));
#line 1237 "analysis.m"
    MR_Word analysis__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 8)));
#line 1237 "analysis.m"
    MR_Word analysis__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 9)));
#line 1237 "analysis.m"
    MR_Word analysis__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 10)));
#line 1240 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_compiler_118;
#line 1240 "analysis.m"
    MR_Box analysis__V_60_60;
#line 1240 "analysis.m"
    MR_Word analysis__V_61_61;
#line 1240 "analysis.m"
    MR_Word analysis__V_62_62;
#line 1240 "analysis.m"
    MR_Word analysis__V_63_63;
#line 1240 "analysis.m"
    MR_Word analysis__V_64_64;
#line 1240 "analysis.m"
    MR_Word analysis__V_65_65;
#line 1240 "analysis.m"
    MR_Word analysis__V_66_66;
#line 1240 "analysis.m"
    MR_Word analysis__V_67_67;
#line 1240 "analysis.m"
    MR_Word analysis__V_68_68;
#line 1245 "analysis.m"
    MR_Box analysis__conv2_STATE_VARIABLE_Info_26_26;
#line 1245 "analysis.m"
    MR_Box analysis__conv1_STATE_VARIABLE_IO_27_27;
#line 1251 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_compiler_126;
#line 1251 "analysis.m"
    MR_Box analysis__V_69_69;
#line 1251 "analysis.m"
    MR_Word analysis__V_70_70;
#line 1251 "analysis.m"
    MR_Word analysis__V_71_71;
#line 1251 "analysis.m"
    MR_Word analysis__V_72_72;
#line 1251 "analysis.m"
    MR_Word analysis__V_73_73;
#line 1251 "analysis.m"
    MR_Word analysis__V_74_74;
#line 1251 "analysis.m"
    MR_Word analysis__V_75_75;
#line 1251 "analysis.m"
    MR_Word analysis__V_76_76;
#line 1251 "analysis.m"
    MR_Word analysis__V_77_77;
#line 1252 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_compiler_127;
#line 1252 "analysis.m"
    MR_Box analysis__V_78_78;
#line 1252 "analysis.m"
    MR_Word analysis__V_79_79;
#line 1252 "analysis.m"
    MR_Word analysis__V_80_80;
#line 1252 "analysis.m"
    MR_Word analysis__V_81_81;
#line 1252 "analysis.m"
    MR_Word analysis__V_82_82;
#line 1252 "analysis.m"
    MR_Word analysis__V_83_83;
#line 1252 "analysis.m"
    MR_Word analysis__V_84_84;
#line 1252 "analysis.m"
    MR_Word analysis__V_85_85;
#line 1252 "analysis.m"
    MR_Word analysis__V_86_86;
#line 1252 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_compiler_129;
#line 1252 "analysis.m"
    MR_Box analysis__V_87_87;
#line 1252 "analysis.m"
    MR_Word analysis__V_88_88;
#line 1252 "analysis.m"
    MR_Word analysis__V_89_89;
#line 1252 "analysis.m"
    MR_Word analysis__V_90_90;
#line 1252 "analysis.m"
    MR_Word analysis__V_91_91;
#line 1252 "analysis.m"
    MR_Word analysis__V_93_93;
#line 1252 "analysis.m"
    MR_Word analysis__V_94_94;
#line 1252 "analysis.m"
    MR_Word analysis__V_95_95;
#line 1252 "analysis.m"
    MR_Word analysis__V_96_96;
#line 1252 "analysis.m"
    MR_Word analysis__V_92_92;
#line 1255 "analysis.m"
    MR_Word analysis__V_35_35;
#line 1255 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_compiler_130;
#line 1255 "analysis.m"
    MR_Box analysis__V_97_97;
#line 1255 "analysis.m"
    MR_Word analysis__V_98_98;
#line 1255 "analysis.m"
    MR_Word analysis__V_99_99;
#line 1255 "analysis.m"
    MR_Word analysis__V_100_100;
#line 1255 "analysis.m"
    MR_Word analysis__V_101_101;
#line 1255 "analysis.m"
    MR_Word analysis__V_102_102;
#line 1255 "analysis.m"
    MR_Word analysis__V_103_103;
#line 1255 "analysis.m"
    MR_Word analysis__V_104_104;
#line 1255 "analysis.m"
    MR_Word analysis__V_105_105;
#line 1263 "analysis.m"
    MR_Box analysis__conv3_STATE_VARIABLE_IO_40_40;
#line 1267 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_compiler_136;
#line 1267 "analysis.m"
    MR_Box analysis__V_106_106;
#line 1267 "analysis.m"
    MR_Word analysis__V_107_107;
#line 1267 "analysis.m"
    MR_Word analysis__V_108_108;
#line 1267 "analysis.m"
    MR_Word analysis__V_109_109;
#line 1267 "analysis.m"
    MR_Word analysis__V_110_110;
#line 1267 "analysis.m"
    MR_Word analysis__V_111_111;
#line 1267 "analysis.m"
    MR_Word analysis__V_112_112;
#line 1267 "analysis.m"
    MR_Word analysis__V_113_113;
#line 1267 "analysis.m"
    MR_Word analysis__V_114_114;
#line 1267 "analysis.m"
    MR_Box analysis__conv4_ModuleResults_19;
#line 1272 "analysis.m"
    MR_Box analysis__conv5_STATE_VARIABLE_IO_44_44;
#line 1280 "analysis.m"
    MR_Box analysis__conv6_STATE_VARIABLE_IO_47_47;

#line 1238 "analysis.m"
    {
#line 1238 "analysis.m"
      analysis__ImportedModules_14 = mercury__set__delete_2_f_0(analysis__TypeCtorInfo_117_117, analysis__ImportedModule0_10, ((MR_Box) (analysis__ThisModule_13)));
    }
#line 1240 "analysis.m"
    analysis__TypeClassInfo_for_compiler_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 0)));
#line 1240 "analysis.m"
    analysis__V_60_60 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 1));
#line 1240 "analysis.m"
    analysis__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 2)));
#line 1240 "analysis.m"
    analysis__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 3)));
#line 1240 "analysis.m"
    analysis__LocalModules_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 4)));
#line 1240 "analysis.m"
    analysis__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 5)));
#line 1240 "analysis.m"
    analysis__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 6)));
#line 1240 "analysis.m"
    analysis__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 7)));
#line 1240 "analysis.m"
    analysis__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 8)));
#line 1240 "analysis.m"
    analysis__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 9)));
#line 1240 "analysis.m"
    analysis__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 10)));
#line 1241 "analysis.m"
    {
#line 1241 "analysis.m"
      analysis__LocalImportedModules_16 = mercury__set__intersect_2_f_0(analysis__TypeCtorInfo_117_117, analysis__LocalModules_15, analysis__ImportedModules_14);
    }
#line 1244 "analysis.m"
    {
#line 1244 "analysis.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(analysis__ModuleInfo_9, &analysis__Globals_17);
    }
#line 1245 "analysis.m"
    {
#line 1245 "analysis.m"
      analysis__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1245 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_25_25, 0) = ((MR_Box) (&analysis_scalar_common_8[0]));
#line 1245 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_25_25, 1) = ((MR_Box) (analysis__write_analysis_files_7_p_0_1));
#line 1245 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_25_25, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1245 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_25_25, 3) = ((MR_Box) (analysis__Globals_17));
#line 1245 "analysis.m"
    }
#line 15536 "analysis.c"
    analysis__TypeCtorInfo_125_125 = (MR_Word) &mercury__io__io__type_ctor_info_state_0;
#line 1245 "analysis.m"
    {
#line 1245 "analysis.m"
      mercury__set__fold2_6_p_2(analysis__TypeCtorInfo_117_117, (MR_Word) &analysis__analysis__type_ctor_info_analysis_info_0, analysis__TypeCtorInfo_125_125, analysis__V_25_25, analysis__LocalModules_15, ((MR_Box) (analysis__STATE_VARIABLE_Info_0_21)), &analysis__conv2_STATE_VARIABLE_Info_26_26, ((MR_Box) ((MR_Integer) 0)), &analysis__conv1_STATE_VARIABLE_IO_27_27);
    }
#line 1245 "analysis.m"
    analysis__STATE_VARIABLE_Info_26_26 = ((MR_Word) analysis__conv2_STATE_VARIABLE_Info_26_26);
#line 1247 "analysis.m"
    {
#line 1247 "analysis.m"
      analysis__update_analysis_registry_5_p_0(analysis__ModuleInfo_9, analysis__STATE_VARIABLE_Info_26_26, &analysis__STATE_VARIABLE_Info_28_28);
    }
#line 1251 "analysis.m"
    analysis__TypeClassInfo_for_compiler_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_28_28, (MR_Integer) 0)));
#line 1251 "analysis.m"
    analysis__V_69_69 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_28_28, (MR_Integer) 1));
#line 1251 "analysis.m"
    analysis__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_28_28, (MR_Integer) 2)));
#line 1251 "analysis.m"
    analysis__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_28_28, (MR_Integer) 3)));
#line 1251 "analysis.m"
    analysis__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_28_28, (MR_Integer) 4)));
#line 1251 "analysis.m"
    analysis__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_28_28, (MR_Integer) 5)));
#line 1251 "analysis.m"
    analysis__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_28_28, (MR_Integer) 6)));
#line 1251 "analysis.m"
    analysis__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_28_28, (MR_Integer) 7)));
#line 1251 "analysis.m"
    analysis__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_28_28, (MR_Integer) 8)));
#line 1251 "analysis.m"
    analysis__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_28_28, (MR_Integer) 9)));
#line 1251 "analysis.m"
    analysis__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_28_28, (MR_Integer) 10)));
#line 1251 "analysis.m"
    {
#line 1251 "analysis.m"
      analysis__ModuleStatus_18 = analysis__lub_result_statuses_1_f_0(analysis__V_30_30);
    }
#line 1252 "analysis.m"
    analysis__TypeClassInfo_for_compiler_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_28_28, (MR_Integer) 0)));
#line 1252 "analysis.m"
    analysis__V_78_78 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_28_28, (MR_Integer) 1));
#line 1252 "analysis.m"
    analysis__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_28_28, (MR_Integer) 2)));
#line 1252 "analysis.m"
    analysis__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_28_28, (MR_Integer) 3)));
#line 1252 "analysis.m"
    analysis__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_28_28, (MR_Integer) 4)));
#line 1252 "analysis.m"
    analysis__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_28_28, (MR_Integer) 5)));
#line 1252 "analysis.m"
    analysis__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_28_28, (MR_Integer) 6)));
#line 1252 "analysis.m"
    analysis__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_28_28, (MR_Integer) 7)));
#line 1252 "analysis.m"
    analysis__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_28_28, (MR_Integer) 8)));
#line 1252 "analysis.m"
    analysis__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_28_28, (MR_Integer) 9)));
#line 1252 "analysis.m"
    analysis__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_28_28, (MR_Integer) 10)));
#line 1252 "analysis.m"
    {
#line 1252 "analysis.m"
      analysis__V_33_33 = mercury__map__f_101_108_101_109_32_58_61_3_f_0(analysis__TypeCtorInfo_117_117, (MR_Word) &analysis__analysis__type_ctor_info_analysis_status_0, ((MR_Box) (analysis__ThisModule_13)), analysis__V_32_32, ((MR_Box) (analysis__ModuleStatus_18)));
    }
#line 1252 "analysis.m"
    analysis__TypeClassInfo_for_compiler_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_28_28, (MR_Integer) 0)));
#line 1252 "analysis.m"
    analysis__V_87_87 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_28_28, (MR_Integer) 1));
#line 1252 "analysis.m"
    analysis__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_28_28, (MR_Integer) 2)));
#line 1252 "analysis.m"
    analysis__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_28_28, (MR_Integer) 3)));
#line 1252 "analysis.m"
    analysis__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_28_28, (MR_Integer) 4)));
#line 1252 "analysis.m"
    analysis__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_28_28, (MR_Integer) 5)));
#line 1252 "analysis.m"
    analysis__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_28_28, (MR_Integer) 6)));
#line 1252 "analysis.m"
    analysis__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_28_28, (MR_Integer) 7)));
#line 1252 "analysis.m"
    analysis__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_28_28, (MR_Integer) 8)));
#line 1252 "analysis.m"
    analysis__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_28_28, (MR_Integer) 9)));
#line 1252 "analysis.m"
    analysis__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_28_28, (MR_Integer) 10)));
#line 1252 "analysis.m"
    {
#line 1252 "analysis.m"
      analysis__STATE_VARIABLE_Info_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 1252 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_31_31, 0) = ((MR_Box) (analysis__TypeClassInfo_for_compiler_129));
#line 1252 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_31_31, 1) = analysis__V_87_87;
#line 1252 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_31_31, 2) = ((MR_Box) (analysis__V_88_88));
#line 1252 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_31_31, 3) = ((MR_Box) (analysis__V_89_89));
#line 1252 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_31_31, 4) = ((MR_Box) (analysis__V_90_90));
#line 1252 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_31_31, 5) = ((MR_Box) (analysis__V_91_91));
#line 1252 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_31_31, 6) = ((MR_Box) (analysis__V_33_33));
#line 1252 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_31_31, 7) = ((MR_Box) (analysis__V_93_93));
#line 1252 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_31_31, 8) = ((MR_Box) (analysis__V_94_94));
#line 1252 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_31_31, 9) = ((MR_Box) (analysis__V_95_95));
#line 1252 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_31_31, 10) = ((MR_Box) (analysis__V_96_96));
#line 1252 "analysis.m"
    }
#line 1254 "analysis.m"
    {
#line 1254 "analysis.m"
      analysis__update_intermodule_dependencies_4_p_0(analysis__ThisModule_13, analysis__LocalImportedModules_16, analysis__STATE_VARIABLE_Info_31_31, analysis__STATE_VARIABLE_Info_22);
    }
#line 1255 "analysis.m"
    analysis__TypeClassInfo_for_compiler_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), *analysis__STATE_VARIABLE_Info_22, (MR_Integer) 0)));
#line 1255 "analysis.m"
    analysis__V_97_97 = (MR_hl_field(MR_mktag(0), *analysis__STATE_VARIABLE_Info_22, (MR_Integer) 1));
#line 1255 "analysis.m"
    analysis__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), *analysis__STATE_VARIABLE_Info_22, (MR_Integer) 2)));
#line 1255 "analysis.m"
    analysis__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), *analysis__STATE_VARIABLE_Info_22, (MR_Integer) 3)));
#line 1255 "analysis.m"
    analysis__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), *analysis__STATE_VARIABLE_Info_22, (MR_Integer) 4)));
#line 1255 "analysis.m"
    analysis__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), *analysis__STATE_VARIABLE_Info_22, (MR_Integer) 5)));
#line 1255 "analysis.m"
    analysis__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), *analysis__STATE_VARIABLE_Info_22, (MR_Integer) 6)));
#line 1255 "analysis.m"
    analysis__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), *analysis__STATE_VARIABLE_Info_22, (MR_Integer) 7)));
#line 1255 "analysis.m"
    analysis__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), *analysis__STATE_VARIABLE_Info_22, (MR_Integer) 8)));
#line 1255 "analysis.m"
    analysis__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), *analysis__STATE_VARIABLE_Info_22, (MR_Integer) 9)));
#line 1255 "analysis.m"
    analysis__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), *analysis__STATE_VARIABLE_Info_22, (MR_Integer) 10)));
#line 1255 "analysis.m"
    {
#line 1255 "analysis.m"
      analysis__succeeded = mercury__map__is_empty_1_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &analysis_scalar_common_2[2], analysis__V_35_35);
    }
#line 1257 "analysis.m"
    if (analysis__succeeded)
#line 1256 "analysis.m"
      {
#line 1256 "analysis.m"
      }
#line 1257 "analysis.m"
    else
#line 1258 "analysis.m"
      {
#line 1258 "analysis.m"
        {
#line 1258 "analysis.m"
          mercury__require__unexpected_3_p_0((MR_String) "analysis", (MR_String) "predicate \140analysis.write_analysis_files\'/7", (MR_String) "new_analysis_results is not empty");
#line 1258 "analysis.m"
          return;
        }
#line 1258 "analysis.m"
      }
#line 1263 "analysis.m"
    {
#line 1263 "analysis.m"
      analysis__V_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1263 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_39_39, 0) = ((MR_Box) (&analysis_scalar_common_7[1]));
#line 1263 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_39_39, 1) = ((MR_Box) (analysis__write_analysis_files_7_p_0_2));
#line 1263 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_39_39, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1263 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_39_39, 3) = ((MR_Box) (*analysis__STATE_VARIABLE_Info_22));
#line 1263 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_39_39, 4) = ((MR_Box) (analysis__Globals_17));
#line 1263 "analysis.m"
    }
#line 1263 "analysis.m"
    {
#line 1263 "analysis.m"
      mercury__set__fold_4_p_2(analysis__TypeCtorInfo_117_117, analysis__TypeCtorInfo_125_125, analysis__V_39_39, analysis__LocalModules_15, ((MR_Box) ((MR_Integer) 0)), &analysis__conv3_STATE_VARIABLE_IO_40_40);
    }
#line 1267 "analysis.m"
    analysis__TypeClassInfo_for_compiler_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), *analysis__STATE_VARIABLE_Info_22, (MR_Integer) 0)));
#line 1267 "analysis.m"
    analysis__V_106_106 = (MR_hl_field(MR_mktag(0), *analysis__STATE_VARIABLE_Info_22, (MR_Integer) 1));
#line 1267 "analysis.m"
    analysis__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), *analysis__STATE_VARIABLE_Info_22, (MR_Integer) 2)));
#line 1267 "analysis.m"
    analysis__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), *analysis__STATE_VARIABLE_Info_22, (MR_Integer) 3)));
#line 1267 "analysis.m"
    analysis__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), *analysis__STATE_VARIABLE_Info_22, (MR_Integer) 4)));
#line 1267 "analysis.m"
    analysis__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), *analysis__STATE_VARIABLE_Info_22, (MR_Integer) 5)));
#line 1267 "analysis.m"
    analysis__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), *analysis__STATE_VARIABLE_Info_22, (MR_Integer) 6)));
#line 1267 "analysis.m"
    analysis__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), *analysis__STATE_VARIABLE_Info_22, (MR_Integer) 7)));
#line 1267 "analysis.m"
    analysis__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), *analysis__STATE_VARIABLE_Info_22, (MR_Integer) 8)));
#line 1267 "analysis.m"
    analysis__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), *analysis__STATE_VARIABLE_Info_22, (MR_Integer) 9)));
#line 1267 "analysis.m"
    analysis__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), *analysis__STATE_VARIABLE_Info_22, (MR_Integer) 10)));
#line 1267 "analysis.m"
    {
#line 1267 "analysis.m"
      analysis__conv4_ModuleResults_19 = mercury__map__det_elem_2_f_0(analysis__TypeCtorInfo_117_117, (MR_Word) &analysis_scalar_common_2[3], ((MR_Box) (analysis__ThisModule_13)), analysis__V_41_41);
    }
#line 1267 "analysis.m"
    analysis__ModuleResults_19 = ((MR_Word) analysis__conv4_ModuleResults_19);
#line 1268 "analysis.m"
    {
#line 1268 "analysis.m"
      analysis__file__write_module_analysis_results_6_p_0(*analysis__STATE_VARIABLE_Info_22, analysis__Globals_17, analysis__ThisModule_13, analysis__ModuleResults_19);
    }
#line 1272 "analysis.m"
    {
#line 1272 "analysis.m"
      analysis__V_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1272 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_43_43, 0) = ((MR_Box) (&analysis_scalar_common_7[1]));
#line 1272 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_43_43, 1) = ((MR_Box) (analysis__write_analysis_files_7_p_0_3));
#line 1272 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_43_43, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1272 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_43_43, 3) = ((MR_Box) (*analysis__STATE_VARIABLE_Info_22));
#line 1272 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_43_43, 4) = ((MR_Box) (analysis__Globals_17));
#line 1272 "analysis.m"
    }
#line 1272 "analysis.m"
    {
#line 1272 "analysis.m"
      mercury__set__fold_4_p_2(analysis__TypeCtorInfo_117_117, analysis__TypeCtorInfo_125_125, analysis__V_43_43, analysis__LocalImportedModules_16, ((MR_Box) ((MR_Integer) 0)), &analysis__conv5_STATE_VARIABLE_IO_44_44);
    }
#line 1277 "analysis.m"
    {
#line 1277 "analysis.m"
      analysis__file__empty_request_file_5_p_0(*analysis__STATE_VARIABLE_Info_22, analysis__Globals_17, analysis__ThisModule_13);
    }
#line 1280 "analysis.m"
    {
#line 1280 "analysis.m"
      analysis__V_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1280 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_46_46, 0) = ((MR_Box) (&analysis_scalar_common_7[1]));
#line 1280 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_46_46, 1) = ((MR_Box) (analysis__write_analysis_files_7_p_0_4));
#line 1280 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_46_46, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1280 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_46_46, 3) = ((MR_Box) (*analysis__STATE_VARIABLE_Info_22));
#line 1280 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_46_46, 4) = ((MR_Box) (analysis__Globals_17));
#line 1280 "analysis.m"
    }
#line 1280 "analysis.m"
    {
#line 1280 "analysis.m"
      mercury__set__fold_4_p_2(analysis__TypeCtorInfo_117_117, analysis__TypeCtorInfo_125_125, analysis__V_46_46, analysis__LocalImportedModules_16, ((MR_Box) ((MR_Integer) 0)), &analysis__conv6_STATE_VARIABLE_IO_47_47);
    }
#line 1285 "analysis.m"
    {
#line 1285 "analysis.m"
      analysis__module_name_to_write_file_name_7_p_0(analysis__TypeClassInfo_for_compiler_115, analysis__Compiler_8, analysis__Globals_17, analysis__ThisModule_13, (MR_String) ".analysis_date", &analysis__TimestampFileName_20);
    }
#line 1287 "analysis.m"
    {
#line 1287 "analysis.m"
      parse_tree__module_cmds__touch_datestamp_4_p_0(analysis__Globals_17, analysis__TimestampFileName_20);
#line 1287 "analysis.m"
      return;
    }
#line 1236 "analysis.m"
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
#line 1226 "analysis.m"
  {
#line 1226 "analysis.m"
    MR_bool analysis__succeeded;
#line 1224 "analysis.m"
    MR_Word analysis__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_4, (MR_Integer) 4)));
#line 1224 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_compiler_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_4, (MR_Integer) 0)));
#line 1224 "analysis.m"
    MR_Box analysis__V_8_8 = (MR_hl_field(MR_mktag(0), analysis__Info_4, (MR_Integer) 1));
#line 1224 "analysis.m"
    MR_Word analysis__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_4, (MR_Integer) 2)));
#line 1224 "analysis.m"
    MR_Word analysis__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_4, (MR_Integer) 3)));
#line 1224 "analysis.m"
    MR_Word analysis__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_4, (MR_Integer) 5)));
#line 1224 "analysis.m"
    MR_Word analysis__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_4, (MR_Integer) 6)));
#line 1224 "analysis.m"
    MR_Word analysis__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_4, (MR_Integer) 7)));
#line 1224 "analysis.m"
    MR_Word analysis__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_4, (MR_Integer) 8)));
#line 1224 "analysis.m"
    MR_Word analysis__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_4, (MR_Integer) 9)));
#line 1224 "analysis.m"
    MR_Word analysis__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_4, (MR_Integer) 10)));

#line 1224 "analysis.m"
    {
#line 1224 "analysis.m"
      analysis__succeeded = mercury__set__contains_2_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, analysis__V_7_7, ((MR_Box) (analysis__ModuleName_5)));
    }
#line 1226 "analysis.m"
    if (analysis__succeeded)
#line 1225 "analysis.m"
      *analysis__IsLocal_6 = (MR_Integer) 1;
#line 1226 "analysis.m"
    else
#line 1227 "analysis.m"
      *analysis__IsLocal_6 = (MR_Integer) 0;
#line 1226 "analysis.m"
  }
#line 290 "analysis.m"
}

#line 1195 "analysis.m"
static void MR_CALL 
analysis__prepare_intermodule_analysis_7_p_0_1(
#line 1195 "analysis.m"
  MR_Box analysis__closure_arg,
#line 1195 "analysis.m"
  MR_Box analysis__wrapper_arg_1,
#line 1195 "analysis.m"
  MR_Box analysis__wrapper_arg_2,
#line 1195 "analysis.m"
  MR_Box * analysis__wrapper_arg_3,
#line 1195 "analysis.m"
  MR_Box analysis__wrapper_arg_4,
#line 1195 "analysis.m"
  MR_Box * analysis__wrapper_arg_5)
#line 1195 "analysis.m"
{
#line 1195 "analysis.m"
  {
#line 1195 "analysis.m"
    MR_Box analysis__closure = analysis__closure_arg;
#line 1195 "analysis.m"
    MR_Word analysis__conv0_STATE_VARIABLE_Info_14;

#line 1195 "analysis.m"
    {
#line 1195 "analysis.m"
      analysis__load_module_analysis_results_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 3))), ((MR_Word) analysis__wrapper_arg_1), ((MR_Word) analysis__wrapper_arg_2), &analysis__conv0_STATE_VARIABLE_Info_14);
    }
#line 1195 "analysis.m"
    *analysis__wrapper_arg_3 = ((MR_Box) (analysis__conv0_STATE_VARIABLE_Info_14));
#line 1195 "analysis.m"
  }
#line 1195 "analysis.m"
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
#line 1188 "analysis.m"
  {
#line 1188 "analysis.m"
    MR_bool analysis__succeeded;
#line 1188 "analysis.m"
    MR_Word analysis__TypeCtorInfo_69_69 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 1188 "analysis.m"
    MR_Word analysis__ThisModule_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_16, (MR_Integer) 2)));
#line 1188 "analysis.m"
    MR_Word analysis__ImportedModuleNames_14;
#line 1188 "analysis.m"
    MR_Word analysis__ThisModuleRequests_15;
#line 1188 "analysis.m"
    MR_Word analysis__STATE_VARIABLE_Info_20_20;
#line 1188 "analysis.m"
    MR_Word analysis__V_21_21;
#line 1188 "analysis.m"
    MR_Word analysis__STATE_VARIABLE_Info_22_22;
#line 1188 "analysis.m"
    MR_Word analysis__STATE_VARIABLE_Info_24_24;
#line 1188 "analysis.m"
    MR_Word analysis__V_28_28;
#line 1188 "analysis.m"
    MR_Word analysis__V_29_29;
#line 1189 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_compiler_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_16, (MR_Integer) 0)));
#line 1189 "analysis.m"
    MR_Box analysis__V_30_30 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_16, (MR_Integer) 1));
#line 1189 "analysis.m"
    MR_Word analysis__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_16, (MR_Integer) 3)));
#line 1189 "analysis.m"
    MR_Word analysis__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_16, (MR_Integer) 4)));
#line 1189 "analysis.m"
    MR_Word analysis__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_16, (MR_Integer) 5)));
#line 1189 "analysis.m"
    MR_Word analysis__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_16, (MR_Integer) 6)));
#line 1189 "analysis.m"
    MR_Word analysis__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_16, (MR_Integer) 7)));
#line 1189 "analysis.m"
    MR_Word analysis__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_16, (MR_Integer) 8)));
#line 1189 "analysis.m"
    MR_Word analysis__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_16, (MR_Integer) 9)));
#line 1189 "analysis.m"
    MR_Word analysis__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_16, (MR_Integer) 10)));
#line 1192 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_compiler_70;
#line 1192 "analysis.m"
    MR_Box analysis__V_39_39;
#line 1192 "analysis.m"
    MR_Word analysis__V_40_40;
#line 1192 "analysis.m"
    MR_Word analysis__V_41_41;
#line 1192 "analysis.m"
    MR_Word analysis__V_43_43;
#line 1192 "analysis.m"
    MR_Word analysis__V_44_44;
#line 1192 "analysis.m"
    MR_Word analysis__V_45_45;
#line 1192 "analysis.m"
    MR_Word analysis__V_46_46;
#line 1192 "analysis.m"
    MR_Word analysis__V_47_47;
#line 1192 "analysis.m"
    MR_Word analysis__V_48_48;
#line 1192 "analysis.m"
    MR_Word analysis__V_42_42;
#line 1195 "analysis.m"
    MR_Box analysis__conv2_STATE_VARIABLE_Info_22_22;
#line 1195 "analysis.m"
    MR_Box analysis__conv1_STATE_VARIABLE_IO_23_23;
#line 1202 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_compiler_78;
#line 1202 "analysis.m"
    MR_Box analysis__V_49_49;
#line 1202 "analysis.m"
    MR_Word analysis__V_50_50;
#line 1202 "analysis.m"
    MR_Word analysis__V_51_51;
#line 1202 "analysis.m"
    MR_Word analysis__V_52_52;
#line 1202 "analysis.m"
    MR_Word analysis__V_53_53;
#line 1202 "analysis.m"
    MR_Word analysis__V_54_54;
#line 1202 "analysis.m"
    MR_Word analysis__V_55_55;
#line 1202 "analysis.m"
    MR_Word analysis__V_56_56;
#line 1202 "analysis.m"
    MR_Word analysis__V_57_57;
#line 1202 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_compiler_80;
#line 1202 "analysis.m"
    MR_Box analysis__V_58_58;
#line 1202 "analysis.m"
    MR_Word analysis__V_59_59;
#line 1202 "analysis.m"
    MR_Word analysis__V_60_60;
#line 1202 "analysis.m"
    MR_Word analysis__V_61_61;
#line 1202 "analysis.m"
    MR_Word analysis__V_63_63;
#line 1202 "analysis.m"
    MR_Word analysis__V_64_64;
#line 1202 "analysis.m"
    MR_Word analysis__V_65_65;
#line 1202 "analysis.m"
    MR_Word analysis__V_66_66;
#line 1202 "analysis.m"
    MR_Word analysis__V_67_67;
#line 1202 "analysis.m"
    MR_Word analysis__V_62_62;

#line 1190 "analysis.m"
    {
#line 1190 "analysis.m"
      analysis__ImportedModuleNames_14 = mercury__set__delete_2_f_0(analysis__TypeCtorInfo_69_69, analysis__ImportedModuleNames0_9, ((MR_Box) (analysis__ThisModule_13)));
    }
#line 1192 "analysis.m"
    analysis__TypeClassInfo_for_compiler_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_16, (MR_Integer) 0)));
#line 1192 "analysis.m"
    analysis__V_39_39 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_16, (MR_Integer) 1));
#line 1192 "analysis.m"
    analysis__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_16, (MR_Integer) 2)));
#line 1192 "analysis.m"
    analysis__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_16, (MR_Integer) 3)));
#line 1192 "analysis.m"
    analysis__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_16, (MR_Integer) 4)));
#line 1192 "analysis.m"
    analysis__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_16, (MR_Integer) 5)));
#line 1192 "analysis.m"
    analysis__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_16, (MR_Integer) 6)));
#line 1192 "analysis.m"
    analysis__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_16, (MR_Integer) 7)));
#line 1192 "analysis.m"
    analysis__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_16, (MR_Integer) 8)));
#line 1192 "analysis.m"
    analysis__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_16, (MR_Integer) 9)));
#line 1192 "analysis.m"
    analysis__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_16, (MR_Integer) 10)));
#line 1192 "analysis.m"
    {
#line 1192 "analysis.m"
      analysis__STATE_VARIABLE_Info_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 1192 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_20_20, 0) = ((MR_Box) (analysis__TypeClassInfo_for_compiler_70));
#line 1192 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_20_20, 1) = analysis__V_39_39;
#line 1192 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_20_20, 2) = ((MR_Box) (analysis__V_40_40));
#line 1192 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_20_20, 3) = ((MR_Box) (analysis__V_41_41));
#line 1192 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_20_20, 4) = ((MR_Box) (analysis__LocalModuleNames_10));
#line 1192 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_20_20, 5) = ((MR_Box) (analysis__V_43_43));
#line 1192 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_20_20, 6) = ((MR_Box) (analysis__V_44_44));
#line 1192 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_20_20, 7) = ((MR_Box) (analysis__V_45_45));
#line 1192 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_20_20, 8) = ((MR_Box) (analysis__V_46_46));
#line 1192 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_20_20, 9) = ((MR_Box) (analysis__V_47_47));
#line 1192 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_20_20, 10) = ((MR_Box) (analysis__V_48_48));
#line 1192 "analysis.m"
    }
#line 1195 "analysis.m"
    {
#line 1195 "analysis.m"
      analysis__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1195 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_21_21, 0) = ((MR_Box) (&analysis_scalar_common_8[0]));
#line 1195 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_21_21, 1) = ((MR_Box) (analysis__prepare_intermodule_analysis_7_p_0_1));
#line 1195 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_21_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1195 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_21_21, 3) = ((MR_Box) (analysis__Globals_8));
#line 1195 "analysis.m"
    }
#line 1195 "analysis.m"
    {
#line 1195 "analysis.m"
      mercury__set__fold2_6_p_2(analysis__TypeCtorInfo_69_69, (MR_Word) &analysis__analysis__type_ctor_info_analysis_info_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, analysis__V_21_21, analysis__ImportedModuleNames_14, ((MR_Box) (analysis__STATE_VARIABLE_Info_20_20)), &analysis__conv2_STATE_VARIABLE_Info_22_22, ((MR_Box) ((MR_Integer) 0)), &analysis__conv1_STATE_VARIABLE_IO_23_23);
    }
#line 1195 "analysis.m"
    analysis__STATE_VARIABLE_Info_22_22 = ((MR_Word) analysis__conv2_STATE_VARIABLE_Info_22_22);
#line 1199 "analysis.m"
    {
#line 1199 "analysis.m"
      analysis__load_module_analysis_results_6_p_0(analysis__Globals_8, analysis__ThisModule_13, analysis__STATE_VARIABLE_Info_22_22, &analysis__STATE_VARIABLE_Info_24_24);
    }
#line 1200 "analysis.m"
    {
#line 1200 "analysis.m"
      analysis__file__read_module_analysis_requests_6_p_0(analysis__STATE_VARIABLE_Info_24_24, analysis__Globals_8, analysis__ThisModule_13, &analysis__ThisModuleRequests_15);
    }
#line 1202 "analysis.m"
    analysis__TypeClassInfo_for_compiler_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_24_24, (MR_Integer) 0)));
#line 1202 "analysis.m"
    analysis__V_49_49 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_24_24, (MR_Integer) 1));
#line 1202 "analysis.m"
    analysis__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_24_24, (MR_Integer) 2)));
#line 1202 "analysis.m"
    analysis__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_24_24, (MR_Integer) 3)));
#line 1202 "analysis.m"
    analysis__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_24_24, (MR_Integer) 4)));
#line 1202 "analysis.m"
    analysis__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_24_24, (MR_Integer) 5)));
#line 1202 "analysis.m"
    analysis__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_24_24, (MR_Integer) 6)));
#line 1202 "analysis.m"
    analysis__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_24_24, (MR_Integer) 7)));
#line 1202 "analysis.m"
    analysis__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_24_24, (MR_Integer) 8)));
#line 1202 "analysis.m"
    analysis__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_24_24, (MR_Integer) 9)));
#line 1202 "analysis.m"
    analysis__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_24_24, (MR_Integer) 10)));
#line 1202 "analysis.m"
    {
#line 1202 "analysis.m"
      analysis__V_29_29 = mercury__map__f_101_108_101_109_32_58_61_3_f_0(analysis__TypeCtorInfo_69_69, (MR_Word) &analysis_scalar_common_2[1], ((MR_Box) (analysis__ThisModule_13)), analysis__V_28_28, ((MR_Box) (analysis__ThisModuleRequests_15)));
    }
#line 1202 "analysis.m"
    analysis__TypeClassInfo_for_compiler_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_24_24, (MR_Integer) 0)));
#line 1202 "analysis.m"
    analysis__V_58_58 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_24_24, (MR_Integer) 1));
#line 1202 "analysis.m"
    analysis__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_24_24, (MR_Integer) 2)));
#line 1202 "analysis.m"
    analysis__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_24_24, (MR_Integer) 3)));
#line 1202 "analysis.m"
    analysis__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_24_24, (MR_Integer) 4)));
#line 1202 "analysis.m"
    analysis__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_24_24, (MR_Integer) 5)));
#line 1202 "analysis.m"
    analysis__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_24_24, (MR_Integer) 6)));
#line 1202 "analysis.m"
    analysis__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_24_24, (MR_Integer) 7)));
#line 1202 "analysis.m"
    analysis__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_24_24, (MR_Integer) 8)));
#line 1202 "analysis.m"
    analysis__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_24_24, (MR_Integer) 9)));
#line 1202 "analysis.m"
    analysis__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_24_24, (MR_Integer) 10)));
#line 1202 "analysis.m"
    {
#line 1202 "analysis.m"
      MR_Word base;
#line 1202 "analysis.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 1202 "analysis.m"
      *analysis__STATE_VARIABLE_Info_17 = base;
#line 1202 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (analysis__TypeClassInfo_for_compiler_80));
#line 1202 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 1) = analysis__V_58_58;
#line 1202 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (analysis__V_59_59));
#line 1202 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (analysis__V_60_60));
#line 1202 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (analysis__V_61_61));
#line 1202 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (analysis__V_29_29));
#line 1202 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (analysis__V_63_63));
#line 1202 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (analysis__V_64_64));
#line 1202 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (analysis__V_65_65));
#line 1202 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (analysis__V_66_66));
#line 1202 "analysis.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (analysis__V_67_67));
#line 1202 "analysis.m"
    }
#line 1188 "analysis.m"
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
#line 688 "analysis.m"
  {
#line 688 "analysis.m"
    MR_bool analysis__succeeded;
#line 688 "analysis.m"
    MR_Word analysis__ThisModule_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_15, (MR_Integer) 2)));
#line 688 "analysis.m"
    MR_Word analysis__MakeAnalysisReg_13;
#line 688 "analysis.m"
    MR_Word analysis__IsLocal_14;
#line 689 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_compiler_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_15, (MR_Integer) 0)));
#line 689 "analysis.m"
    MR_Box analysis__V_21_21 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_15, (MR_Integer) 1));
#line 689 "analysis.m"
    MR_Word analysis__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_15, (MR_Integer) 3)));
#line 689 "analysis.m"
    MR_Word analysis__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_15, (MR_Integer) 4)));
#line 689 "analysis.m"
    MR_Word analysis__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_15, (MR_Integer) 5)));
#line 689 "analysis.m"
    MR_Word analysis__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_15, (MR_Integer) 6)));
#line 689 "analysis.m"
    MR_Word analysis__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_15, (MR_Integer) 7)));
#line 689 "analysis.m"
    MR_Word analysis__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_15, (MR_Integer) 8)));
#line 689 "analysis.m"
    MR_Word analysis__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_15, (MR_Integer) 9)));
#line 689 "analysis.m"
    MR_Word analysis__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_15, (MR_Integer) 10)));
#line 696 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_compiler_41;
#line 696 "analysis.m"
    MR_Box analysis__V_30_30;
#line 696 "analysis.m"
    MR_Word analysis__V_31_31;
#line 696 "analysis.m"
    MR_Word analysis__V_32_32;
#line 696 "analysis.m"
    MR_Word analysis__V_33_33;
#line 696 "analysis.m"
    MR_Word analysis__V_34_34;
#line 696 "analysis.m"
    MR_Word analysis__V_35_35;
#line 696 "analysis.m"
    MR_Word analysis__V_36_36;
#line 696 "analysis.m"
    MR_Word analysis__V_37_37;
#line 696 "analysis.m"
    MR_Word analysis__V_38_38;
#line 1224 "analysis.m"
    MR_Word analysis__V_46_46;
#line 1224 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_compiler_56;
#line 1224 "analysis.m"
    MR_Box analysis__V_47_47;
#line 1224 "analysis.m"
    MR_Word analysis__V_48_48;
#line 1224 "analysis.m"
    MR_Word analysis__V_49_49;
#line 1224 "analysis.m"
    MR_Word analysis__V_50_50;
#line 1224 "analysis.m"
    MR_Word analysis__V_51_51;
#line 1224 "analysis.m"
    MR_Word analysis__V_52_52;
#line 1224 "analysis.m"
    MR_Word analysis__V_53_53;
#line 1224 "analysis.m"
    MR_Word analysis__V_54_54;
#line 1224 "analysis.m"
    MR_Word analysis__V_55_55;

#line 690 "analysis.m"
    {
#line 690 "analysis.m"
      analysis__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(analysis__ThisModule_12, analysis__ModuleName_8);
    }
#line 692 "analysis.m"
    if (analysis__succeeded)
#line 691 "analysis.m"
      {
#line 691 "analysis.m"
        {
#line 691 "analysis.m"
          mercury__require__unexpected_3_p_0((MR_String) "analysis", (MR_String) "predicate \140analysis.record_request\'/6", (MR_String) "request on self");
#line 691 "analysis.m"
          return;
        }
#line 691 "analysis.m"
      }
#line 692 "analysis.m"
    else
#line 693 "analysis.m"
      {
#line 693 "analysis.m"
      }
#line 696 "analysis.m"
    analysis__TypeClassInfo_for_compiler_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_15, (MR_Integer) 0)));
#line 696 "analysis.m"
    analysis__V_30_30 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_15, (MR_Integer) 1));
#line 696 "analysis.m"
    analysis__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_15, (MR_Integer) 2)));
#line 696 "analysis.m"
    analysis__MakeAnalysisReg_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_15, (MR_Integer) 3)));
#line 696 "analysis.m"
    analysis__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_15, (MR_Integer) 4)));
#line 696 "analysis.m"
    analysis__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_15, (MR_Integer) 5)));
#line 696 "analysis.m"
    analysis__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_15, (MR_Integer) 6)));
#line 696 "analysis.m"
    analysis__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_15, (MR_Integer) 7)));
#line 696 "analysis.m"
    analysis__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_15, (MR_Integer) 8)));
#line 696 "analysis.m"
    analysis__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_15, (MR_Integer) 9)));
#line 696 "analysis.m"
    analysis__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_15, (MR_Integer) 10)));
#line 1224 "analysis.m"
    analysis__TypeClassInfo_for_compiler_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_15, (MR_Integer) 0)));
#line 1224 "analysis.m"
    analysis__V_47_47 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_15, (MR_Integer) 1));
#line 1224 "analysis.m"
    analysis__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_15, (MR_Integer) 2)));
#line 1224 "analysis.m"
    analysis__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_15, (MR_Integer) 3)));
#line 1224 "analysis.m"
    analysis__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_15, (MR_Integer) 4)));
#line 1224 "analysis.m"
    analysis__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_15, (MR_Integer) 5)));
#line 1224 "analysis.m"
    analysis__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_15, (MR_Integer) 6)));
#line 1224 "analysis.m"
    analysis__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_15, (MR_Integer) 7)));
#line 1224 "analysis.m"
    analysis__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_15, (MR_Integer) 8)));
#line 1224 "analysis.m"
    analysis__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_15, (MR_Integer) 9)));
#line 1224 "analysis.m"
    analysis__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_15, (MR_Integer) 10)));
#line 1224 "analysis.m"
    {
#line 1224 "analysis.m"
      analysis__succeeded = mercury__set__contains_2_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, analysis__V_46_46, ((MR_Box) (analysis__ModuleName_8)));
    }
#line 1226 "analysis.m"
    if (analysis__succeeded)
#line 1225 "analysis.m"
      analysis__IsLocal_14 = (MR_Integer) 1;
#line 1226 "analysis.m"
    else
#line 1227 "analysis.m"
      analysis__IsLocal_14 = (MR_Integer) 0;
#line 699 "analysis.m"
    analysis__succeeded = (analysis__MakeAnalysisReg_13 == (MR_Integer) 0);
#line 699 "analysis.m"
    if (analysis__succeeded)
#line 700 "analysis.m"
      analysis__succeeded = (analysis__IsLocal_14 == (MR_Integer) 1);
#line 704 "analysis.m"
    if (analysis__succeeded)
#line 702 "analysis.m"
      {
#line 702 "analysis.m"
        analysis__record_request_2_7_p_0(analysis__TypeClassInfo_for_call_pattern_39, analysis__ThisModule_12, analysis__AnalysisName_7, analysis__ModuleName_8, analysis__FuncId_9, analysis__CallPattern_10, analysis__STATE_VARIABLE_Info_0_15, analysis__STATE_VARIABLE_Info_16);
#line 702 "analysis.m"
        return;
      }
#line 704 "analysis.m"
    else
#line 704 "analysis.m"
      *analysis__STATE_VARIABLE_Info_16 = analysis__STATE_VARIABLE_Info_0_15;
#line 688 "analysis.m"
  }
#line 264 "analysis.m"
}

#line 677 "analysis.m"
static MR_bool MR_CALL 
analysis__lookup_requests_5_p_0_1(
#line 677 "analysis.m"
  MR_Box analysis__closure_arg,
#line 677 "analysis.m"
  MR_Box analysis__wrapper_arg_1,
#line 677 "analysis.m"
  MR_Box * analysis__wrapper_arg_2)
#line 677 "analysis.m"
{
#line 677 "analysis.m"
  {
#line 677 "analysis.m"
    MR_bool analysis__succeeded;
#line 677 "analysis.m"
    MR_Box analysis__closure = analysis__closure_arg;

#line 677 "analysis.m"
    {
#line 677 "analysis.m"
      return analysis__succeeded = analysis__IntroducedFrom__func__lookup_requests__677__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 3))), ((MR_Word) analysis__wrapper_arg_1), analysis__wrapper_arg_2);
    }
#line 677 "analysis.m"
    return analysis__succeeded;
#line 677 "analysis.m"
  }
#line 677 "analysis.m"
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
#line 667 "analysis.m"
  {
#line 667 "analysis.m"
    MR_bool analysis__succeeded;
#line 668 "analysis.m"
    MR_Word analysis__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 2)));
#line 668 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_compiler_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 0)));
#line 668 "analysis.m"
    MR_Box analysis__V_29_29 = (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 1));
#line 668 "analysis.m"
    MR_Word analysis__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 3)));
#line 668 "analysis.m"
    MR_Word analysis__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 4)));
#line 668 "analysis.m"
    MR_Word analysis__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 5)));
#line 668 "analysis.m"
    MR_Word analysis__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 6)));
#line 668 "analysis.m"
    MR_Word analysis__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 7)));
#line 668 "analysis.m"
    MR_Word analysis__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 8)));
#line 668 "analysis.m"
    MR_Word analysis__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 9)));
#line 668 "analysis.m"
    MR_Word analysis__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 10)));
#line 684 "analysis.m"
    MR_Word analysis__CallPatterns0_12;
#line 674 "analysis.m"
    MR_Word analysis__TypeCtorInfo_52_52;
#line 674 "analysis.m"
    MR_Word analysis__TypeInfo_53_53;
#line 674 "analysis.m"
    MR_Word analysis__TypeCtorInfo_54_54;
#line 674 "analysis.m"
    MR_Word analysis__TypeInfo_55_55;
#line 674 "analysis.m"
    MR_Word analysis__ModuleRequests_11;
#line 674 "analysis.m"
    MR_Word analysis__V_20_20;
#line 674 "analysis.m"
    MR_Word analysis__V_21_21;
#line 674 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_compiler_49;
#line 674 "analysis.m"
    MR_Box analysis__V_38_38;
#line 674 "analysis.m"
    MR_Word analysis__V_39_39;
#line 674 "analysis.m"
    MR_Word analysis__V_40_40;
#line 674 "analysis.m"
    MR_Word analysis__V_41_41;
#line 674 "analysis.m"
    MR_Word analysis__V_42_42;
#line 674 "analysis.m"
    MR_Word analysis__V_43_43;
#line 674 "analysis.m"
    MR_Word analysis__V_44_44;
#line 674 "analysis.m"
    MR_Word analysis__V_45_45;
#line 674 "analysis.m"
    MR_Word analysis__V_46_46;
#line 674 "analysis.m"
    MR_Box analysis__conv0_ModuleRequests_11;
#line 675 "analysis.m"
    MR_Box analysis__conv1_V_21_21;
#line 675 "analysis.m"
    MR_Box analysis__conv2_CallPatterns0_12;

#line 668 "analysis.m"
    {
#line 668 "analysis.m"
      analysis__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(analysis__ModuleName_8, analysis__V_64_64);
    }
#line 670 "analysis.m"
    if (analysis__succeeded)
#line 669 "analysis.m"
      {
#line 669 "analysis.m"
      }
#line 670 "analysis.m"
    else
#line 671 "analysis.m"
      {
#line 671 "analysis.m"
        {
#line 671 "analysis.m"
          mercury__require__unexpected_3_p_0((MR_String) "analysis", (MR_String) "predicate \140analysis.lookup_requests\'/5", (MR_String) "not this_module");
#line 671 "analysis.m"
          return;
        }
#line 671 "analysis.m"
      }
#line 674 "analysis.m"
    analysis__TypeClassInfo_for_compiler_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 0)));
#line 674 "analysis.m"
    analysis__V_38_38 = (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 1));
#line 674 "analysis.m"
    analysis__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 2)));
#line 674 "analysis.m"
    analysis__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 3)));
#line 674 "analysis.m"
    analysis__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 4)));
#line 674 "analysis.m"
    analysis__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 5)));
#line 674 "analysis.m"
    analysis__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 6)));
#line 674 "analysis.m"
    analysis__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 7)));
#line 674 "analysis.m"
    analysis__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 8)));
#line 674 "analysis.m"
    analysis__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 9)));
#line 674 "analysis.m"
    analysis__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 10)));
#line 674 "analysis.m"
    {
#line 674 "analysis.m"
      analysis__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &analysis_scalar_common_2[1], analysis__V_20_20, ((MR_Box) (analysis__ModuleName_8)), &analysis__conv0_ModuleRequests_11);
    }
#line 674 "analysis.m"
    if (analysis__succeeded)
#line 674 "analysis.m"
      {
#line 674 "analysis.m"
        analysis__ModuleRequests_11 = ((MR_Word) analysis__conv0_ModuleRequests_11);
#line 674 "analysis.m"
        analysis__succeeded = MR_TRUE;
#line 674 "analysis.m"
      }
#line 674 "analysis.m"
    if (analysis__succeeded)
#line 674 "analysis.m"
      {
#line 16594 "analysis.c"
        analysis__TypeCtorInfo_52_52 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 16596 "analysis.c"
        analysis__TypeInfo_53_53 = (MR_Word) &analysis_scalar_common_2[0];
#line 675 "analysis.m"
        {
#line 675 "analysis.m"
          analysis__succeeded = mercury__map__elem_2_f_0(analysis__TypeCtorInfo_52_52, analysis__TypeInfo_53_53, ((MR_Box) (analysis__AnalysisName_7)), analysis__ModuleRequests_11, &analysis__conv1_V_21_21);
        }
#line 675 "analysis.m"
        if (analysis__succeeded)
#line 675 "analysis.m"
          {
#line 675 "analysis.m"
            analysis__V_21_21 = ((MR_Word) analysis__conv1_V_21_21);
#line 675 "analysis.m"
            analysis__succeeded = MR_TRUE;
#line 675 "analysis.m"
          }
#line 674 "analysis.m"
        if (analysis__succeeded)
#line 674 "analysis.m"
          {
#line 16617 "analysis.c"
            analysis__TypeCtorInfo_54_54 = (MR_Word) &analysis__analysis__type_ctor_info_func_id_0;
#line 16619 "analysis.c"
            analysis__TypeInfo_55_55 = (MR_Word) &analysis_scalar_common_1[0];
#line 675 "analysis.m"
            {
#line 675 "analysis.m"
              analysis__succeeded = mercury__map__elem_2_f_0(analysis__TypeCtorInfo_54_54, analysis__TypeInfo_55_55, ((MR_Box) (analysis__FuncId_9)), analysis__V_21_21, &analysis__conv2_CallPatterns0_12);
            }
#line 675 "analysis.m"
            if (analysis__succeeded)
#line 675 "analysis.m"
              {
#line 675 "analysis.m"
                analysis__CallPatterns0_12 = ((MR_Word) analysis__conv2_CallPatterns0_12);
#line 675 "analysis.m"
                analysis__succeeded = MR_TRUE;
#line 675 "analysis.m"
              }
#line 674 "analysis.m"
          }
#line 674 "analysis.m"
      }
#line 684 "analysis.m"
    if (analysis__succeeded)
#line 680 "analysis.m"
      {
#line 680 "analysis.m"
        MR_Word analysis__TypeInfo_58_58;
#line 680 "analysis.m"
        MR_Word analysis__TypeInfo_63_63;
#line 680 "analysis.m"
        MR_Word analysis__CallPatterns1_13;
#line 680 "analysis.m"
        MR_Word analysis__V_22_22;

#line 677 "analysis.m"
        {
#line 677 "analysis.m"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_call_pattern_47, (MR_Integer) 4, &analysis__TypeInfo_58_58);
        }
#line 677 "analysis.m"
        {
#line 677 "analysis.m"
          analysis__V_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 677 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__V_22_22, 0) = ((MR_Box) (&analysis_scalar_common_4[1]));
#line 677 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__V_22_22, 1) = ((MR_Box) (analysis__lookup_requests_5_p_0_1));
#line 677 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__V_22_22, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 677 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__V_22_22, 3) = ((MR_Box) (analysis__TypeClassInfo_for_call_pattern_47));
#line 677 "analysis.m"
        }
#line 677 "analysis.m"
        {
#line 677 "analysis.m"
          analysis__CallPatterns1_13 = mercury__list__filter_map_2_f_0((MR_Word) &analysis__analysis__type_ctor_info_analysis_request_0, analysis__TypeInfo_58_58, analysis__V_22_22, analysis__CallPatterns0_12);
        }
#line 683 "analysis.m"
        {
#line 683 "analysis.m"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_call_pattern_47, (MR_Integer) 4, &analysis__TypeInfo_63_63);
        }
#line 683 "analysis.m"
        {
#line 683 "analysis.m"
          mercury__list__sort_and_remove_dups_2_p_0(analysis__TypeInfo_63_63, analysis__CallPatterns1_13, analysis__CallPatterns_10);
#line 683 "analysis.m"
          return;
        }
#line 680 "analysis.m"
      }
#line 684 "analysis.m"
    else
#line 685 "analysis.m"
      *analysis__CallPatterns_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 667 "analysis.m"
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
#line 739 "analysis.m"
  {
#line 739 "analysis.m"
    MR_bool analysis__succeeded;
#line 739 "analysis.m"
    MR_Word analysis__ThisModule_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 2)));
#line 739 "analysis.m"
    MR_Word analysis__MakeAnalysisReg_15;
#line 739 "analysis.m"
    MR_Word analysis__IsLocal_16;
#line 740 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_compiler_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 0)));
#line 740 "analysis.m"
    MR_Box analysis__V_29_29 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 1));
#line 740 "analysis.m"
    MR_Word analysis__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 3)));
#line 740 "analysis.m"
    MR_Word analysis__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 4)));
#line 740 "analysis.m"
    MR_Word analysis__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 5)));
#line 740 "analysis.m"
    MR_Word analysis__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 6)));
#line 740 "analysis.m"
    MR_Word analysis__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 7)));
#line 740 "analysis.m"
    MR_Word analysis__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 8)));
#line 740 "analysis.m"
    MR_Word analysis__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 9)));
#line 740 "analysis.m"
    MR_Word analysis__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 10)));
#line 747 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_compiler_49;
#line 747 "analysis.m"
    MR_Box analysis__V_38_38;
#line 747 "analysis.m"
    MR_Word analysis__V_39_39;
#line 747 "analysis.m"
    MR_Word analysis__V_40_40;
#line 747 "analysis.m"
    MR_Word analysis__V_41_41;
#line 747 "analysis.m"
    MR_Word analysis__V_42_42;
#line 747 "analysis.m"
    MR_Word analysis__V_43_43;
#line 747 "analysis.m"
    MR_Word analysis__V_44_44;
#line 747 "analysis.m"
    MR_Word analysis__V_45_45;
#line 747 "analysis.m"
    MR_Word analysis__V_46_46;
#line 1224 "analysis.m"
    MR_Word analysis__V_65_65;
#line 1224 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_compiler_75;
#line 1224 "analysis.m"
    MR_Box analysis__V_66_66;
#line 1224 "analysis.m"
    MR_Word analysis__V_67_67;
#line 1224 "analysis.m"
    MR_Word analysis__V_68_68;
#line 1224 "analysis.m"
    MR_Word analysis__V_69_69;
#line 1224 "analysis.m"
    MR_Word analysis__V_70_70;
#line 1224 "analysis.m"
    MR_Word analysis__V_71_71;
#line 1224 "analysis.m"
    MR_Word analysis__V_72_72;
#line 1224 "analysis.m"
    MR_Word analysis__V_73_73;
#line 1224 "analysis.m"
    MR_Word analysis__V_74_74;

#line 741 "analysis.m"
    {
#line 741 "analysis.m"
      analysis__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(analysis__ThisModule_14, analysis__CalleeModuleName_8);
    }
#line 743 "analysis.m"
    if (analysis__succeeded)
#line 742 "analysis.m"
      {
#line 742 "analysis.m"
        {
#line 742 "analysis.m"
          mercury__require__unexpected_3_p_0((MR_String) "analysis", (MR_String) "predicate \140analysis.record_dependency\'/7", (MR_String) "dependency on self");
#line 742 "analysis.m"
          return;
        }
#line 742 "analysis.m"
      }
#line 743 "analysis.m"
    else
#line 744 "analysis.m"
      {
#line 744 "analysis.m"
      }
#line 747 "analysis.m"
    analysis__TypeClassInfo_for_compiler_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 0)));
#line 747 "analysis.m"
    analysis__V_38_38 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 1));
#line 747 "analysis.m"
    analysis__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 2)));
#line 747 "analysis.m"
    analysis__MakeAnalysisReg_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 3)));
#line 747 "analysis.m"
    analysis__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 4)));
#line 747 "analysis.m"
    analysis__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 5)));
#line 747 "analysis.m"
    analysis__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 6)));
#line 747 "analysis.m"
    analysis__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 7)));
#line 747 "analysis.m"
    analysis__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 8)));
#line 747 "analysis.m"
    analysis__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 9)));
#line 747 "analysis.m"
    analysis__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 10)));
#line 1224 "analysis.m"
    analysis__TypeClassInfo_for_compiler_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 0)));
#line 1224 "analysis.m"
    analysis__V_66_66 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 1));
#line 1224 "analysis.m"
    analysis__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 2)));
#line 1224 "analysis.m"
    analysis__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 3)));
#line 1224 "analysis.m"
    analysis__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 4)));
#line 1224 "analysis.m"
    analysis__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 5)));
#line 1224 "analysis.m"
    analysis__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 6)));
#line 1224 "analysis.m"
    analysis__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 7)));
#line 1224 "analysis.m"
    analysis__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 8)));
#line 1224 "analysis.m"
    analysis__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 9)));
#line 1224 "analysis.m"
    analysis__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 10)));
#line 1224 "analysis.m"
    {
#line 1224 "analysis.m"
      analysis__succeeded = mercury__set__contains_2_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, analysis__V_65_65, ((MR_Box) (analysis__CalleeModuleName_8)));
    }
#line 1226 "analysis.m"
    if (analysis__succeeded)
#line 1225 "analysis.m"
      analysis__IsLocal_16 = (MR_Integer) 1;
#line 1226 "analysis.m"
    else
#line 1227 "analysis.m"
      analysis__IsLocal_16 = (MR_Integer) 0;
#line 750 "analysis.m"
    analysis__succeeded = (analysis__MakeAnalysisReg_15 == (MR_Integer) 0);
#line 750 "analysis.m"
    if (analysis__succeeded)
#line 751 "analysis.m"
      analysis__succeeded = (analysis__IsLocal_16 == (MR_Integer) 1);
#line 768 "analysis.m"
    if (analysis__succeeded)
#line 753 "analysis.m"
      {
#line 753 "analysis.m"
        MR_Word analysis__TypeClassInfo_for_call_pattern_50;
#line 753 "analysis.m"
        MR_String analysis__AnalysisName_17;
#line 753 "analysis.m"
        MR_Word analysis__MaybeResult_18;
#line 753 "analysis.m"
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
#line 16905 "analysis.c"
        {
#line 16907 "analysis.c"
          mercury__private_builtin__superclass_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_47, (MR_Integer) 1, &analysis__TypeClassInfo_for_call_pattern_50);
        }
#line 754 "analysis.m"
        {
#line 754 "analysis.m"
          analysis__record_dependency_2_7_p_0(analysis__TypeClassInfo_for_call_pattern_50, analysis__ThisModule_14, analysis__AnalysisName_17, analysis__CalleeModuleName_8, analysis__FuncId_9, analysis__Call_11, analysis__STATE_VARIABLE_Info_0_21, &analysis__STATE_VARIABLE_Info_26_26);
        }
#line 759 "analysis.m"
        {
#line 759 "analysis.m"
          analysis__lookup_exactly_matching_result_even_from_invalid_modules_6_p_0(analysis__TypeClassInfo_for_analysis_47, analysis__STATE_VARIABLE_Info_26_26, analysis__CalleeModuleName_8, analysis__FuncId_9, analysis__FuncInfo_10, analysis__Call_11, &analysis__MaybeResult_18);
        }
#line 764 "analysis.m"
        if ((analysis__MaybeResult_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 762 "analysis.m"
          {
#line 762 "analysis.m"
            MR_Word analysis__TypeClassInfo_for_call_pattern_52;

#line 16927 "analysis.c"
            {
#line 16929 "analysis.c"
              mercury__private_builtin__superclass_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_47, (MR_Integer) 1, &analysis__TypeClassInfo_for_call_pattern_52);
            }
#line 763 "analysis.m"
            {
#line 763 "analysis.m"
              analysis__record_request_6_p_0(analysis__TypeClassInfo_for_call_pattern_52, analysis__AnalysisName_17, analysis__CalleeModuleName_8, analysis__FuncId_9, analysis__Call_11, analysis__STATE_VARIABLE_Info_26_26, analysis__STATE_VARIABLE_Info_22);
#line 763 "analysis.m"
              return;
            }
#line 762 "analysis.m"
          }
#line 764 "analysis.m"
        else
#line 765 "analysis.m"
          {
#line 765 "analysis.m"
            MR_Word analysis__TypeInfo_54_54;
#line 765 "analysis.m"
            MR_Word analysis__TypeInfo_56_56;
#line 765 "analysis.m"
            MR_Word analysis__TypeInfo_58_58;
#line 766 "analysis.m"
            MR_Word analysis__V_27_27;
#line 766 "analysis.m"
            MR_Word analysis__V_60_60;

#line 766 "analysis.m"
            {
#line 766 "analysis.m"
              mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_47, (MR_Integer) 4, &analysis__TypeInfo_54_54);
            }
#line 766 "analysis.m"
            {
#line 766 "analysis.m"
              mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_47, (MR_Integer) 5, &analysis__TypeInfo_56_56);
            }
#line 16966 "analysis.c"
            {
#line 16968 "analysis.c"
              analysis__TypeInfo_58_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 16970 "analysis.c"
              MR_hl_field(MR_mktag(0), analysis__TypeInfo_58_58, 0) = ((MR_Box) (&analysis__analysis__type_ctor_info_analysis_result_2));
#line 16972 "analysis.c"
              MR_hl_field(MR_mktag(0), analysis__TypeInfo_58_58, 1) = ((MR_Box) (analysis__TypeInfo_54_54));
#line 16974 "analysis.c"
              MR_hl_field(MR_mktag(0), analysis__TypeInfo_58_58, 2) = ((MR_Box) (analysis__TypeInfo_56_56));
#line 16976 "analysis.c"
            }
#line 766 "analysis.m"
            {
#line 766 "analysis.m"
              mercury__type_desc__same_type_2_p_0(analysis__TypeInfo_58_58);
            }
#line 765 "analysis.m"
            *analysis__STATE_VARIABLE_Info_22 = analysis__STATE_VARIABLE_Info_26_26;
#line 765 "analysis.m"
          }
#line 753 "analysis.m"
      }
#line 768 "analysis.m"
    else
#line 768 "analysis.m"
      *analysis__STATE_VARIABLE_Info_22 = analysis__STATE_VARIABLE_Info_0_21;
#line 739 "analysis.m"
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
#line 621 "analysis.m"
  {
#line 621 "analysis.m"
    MR_bool analysis__succeeded;
#line 621 "analysis.m"
    MR_Word analysis__MakeAnalysisReg_14;
#line 622 "analysis.m"
    MR_Word analysis__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 2)));
#line 622 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_compiler_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 0)));
#line 622 "analysis.m"
    MR_Box analysis__V_23_23 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 1));
#line 622 "analysis.m"
    MR_Word analysis__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 3)));
#line 622 "analysis.m"
    MR_Word analysis__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 4)));
#line 622 "analysis.m"
    MR_Word analysis__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 5)));
#line 622 "analysis.m"
    MR_Word analysis__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 6)));
#line 622 "analysis.m"
    MR_Word analysis__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 7)));
#line 622 "analysis.m"
    MR_Word analysis__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 8)));
#line 622 "analysis.m"
    MR_Word analysis__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 9)));
#line 622 "analysis.m"
    MR_Word analysis__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 10)));
#line 629 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_compiler_62;
#line 629 "analysis.m"
    MR_Box analysis__V_32_32;
#line 629 "analysis.m"
    MR_Word analysis__V_33_33;
#line 629 "analysis.m"
    MR_Word analysis__V_34_34;
#line 629 "analysis.m"
    MR_Word analysis__V_35_35;
#line 629 "analysis.m"
    MR_Word analysis__V_36_36;
#line 629 "analysis.m"
    MR_Word analysis__V_37_37;
#line 629 "analysis.m"
    MR_Word analysis__V_38_38;
#line 629 "analysis.m"
    MR_Word analysis__V_39_39;
#line 629 "analysis.m"
    MR_Word analysis__V_40_40;

#line 622 "analysis.m"
    {
#line 622 "analysis.m"
      analysis__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(analysis__ModuleName_8, analysis__V_65_65);
    }
#line 624 "analysis.m"
    if (analysis__succeeded)
#line 623 "analysis.m"
      {
#line 623 "analysis.m"
      }
#line 624 "analysis.m"
    else
#line 625 "analysis.m"
      {
#line 625 "analysis.m"
        {
#line 625 "analysis.m"
          mercury__require__unexpected_3_p_0((MR_String) "analysis", (MR_String) "predicate \140analysis.record_result\'/7", (MR_String) "recording result for procedure defined in another module");
#line 625 "analysis.m"
          return;
        }
#line 625 "analysis.m"
      }
#line 629 "analysis.m"
    analysis__TypeClassInfo_for_compiler_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 0)));
#line 629 "analysis.m"
    analysis__V_32_32 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 1));
#line 629 "analysis.m"
    analysis__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 2)));
#line 629 "analysis.m"
    analysis__MakeAnalysisReg_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 3)));
#line 629 "analysis.m"
    analysis__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 4)));
#line 629 "analysis.m"
    analysis__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 5)));
#line 629 "analysis.m"
    analysis__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 6)));
#line 629 "analysis.m"
    analysis__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 7)));
#line 629 "analysis.m"
    analysis__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 8)));
#line 629 "analysis.m"
    analysis__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 9)));
#line 629 "analysis.m"
    analysis__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 10)));
#line 636 "analysis.m"
#line 636 "analysis.m"
    switch (analysis__MakeAnalysisReg_14) {
#line 636 "analysis.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 636 "analysis.m"
      case (MR_Integer) 0:
#line 631 "analysis.m"
        {
#line 631 "analysis.m"
          MR_Word analysis__Map0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 8)));
#line 631 "analysis.m"
          MR_Word analysis__Map_16;
#line 632 "analysis.m"
          MR_Word analysis__TypeClassInfo_for_compiler_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 0)));
#line 632 "analysis.m"
          MR_Box analysis__V_41_41 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 1));
#line 632 "analysis.m"
          MR_Word analysis__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 2)));
#line 632 "analysis.m"
          MR_Word analysis__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 3)));
#line 632 "analysis.m"
          MR_Word analysis__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 4)));
#line 632 "analysis.m"
          MR_Word analysis__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 5)));
#line 632 "analysis.m"
          MR_Word analysis__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 6)));
#line 632 "analysis.m"
          MR_Word analysis__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 7)));
#line 632 "analysis.m"
          MR_Word analysis__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 9)));
#line 632 "analysis.m"
          MR_Word analysis__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 10)));
#line 635 "analysis.m"
          MR_Word analysis__TypeClassInfo_for_compiler_64;
#line 635 "analysis.m"
          MR_Box analysis__V_50_50;
#line 635 "analysis.m"
          MR_Word analysis__V_51_51;
#line 635 "analysis.m"
          MR_Word analysis__V_52_52;
#line 635 "analysis.m"
          MR_Word analysis__V_53_53;
#line 635 "analysis.m"
          MR_Word analysis__V_54_54;
#line 635 "analysis.m"
          MR_Word analysis__V_55_55;
#line 635 "analysis.m"
          MR_Word analysis__V_56_56;
#line 635 "analysis.m"
          MR_Word analysis__V_58_58;
#line 635 "analysis.m"
          MR_Word analysis__V_59_59;
#line 635 "analysis.m"
          MR_Word analysis__V_57_57;

#line 633 "analysis.m"
          {
#line 633 "analysis.m"
            analysis__record_result_in_analysis_map_6_p_0(analysis__TypeClassInfo_for_analysis_60, analysis__FuncId_9, analysis__CallPattern_10, analysis__AnswerPattern_11, analysis__Status_12, analysis__Map0_15, &analysis__Map_16);
          }
#line 635 "analysis.m"
          analysis__TypeClassInfo_for_compiler_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 0)));
#line 635 "analysis.m"
          analysis__V_50_50 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 1));
#line 635 "analysis.m"
          analysis__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 2)));
#line 635 "analysis.m"
          analysis__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 3)));
#line 635 "analysis.m"
          analysis__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 4)));
#line 635 "analysis.m"
          analysis__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 5)));
#line 635 "analysis.m"
          analysis__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 6)));
#line 635 "analysis.m"
          analysis__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 7)));
#line 635 "analysis.m"
          analysis__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 8)));
#line 635 "analysis.m"
          analysis__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 9)));
#line 635 "analysis.m"
          analysis__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 10)));
#line 635 "analysis.m"
          {
#line 635 "analysis.m"
            MR_Word base;
#line 635 "analysis.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 635 "analysis.m"
            *analysis__STATE_VARIABLE_Info_18 = base;
#line 635 "analysis.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (analysis__TypeClassInfo_for_compiler_64));
#line 635 "analysis.m"
            MR_hl_field(MR_mktag(0), base, 1) = analysis__V_50_50;
#line 635 "analysis.m"
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (analysis__V_51_51));
#line 635 "analysis.m"
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (analysis__V_52_52));
#line 635 "analysis.m"
            MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (analysis__V_53_53));
#line 635 "analysis.m"
            MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (analysis__V_54_54));
#line 635 "analysis.m"
            MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (analysis__V_55_55));
#line 635 "analysis.m"
            MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (analysis__V_56_56));
#line 635 "analysis.m"
            MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (analysis__Map_16));
#line 635 "analysis.m"
            MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (analysis__V_58_58));
#line 635 "analysis.m"
            MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (analysis__V_59_59));
#line 635 "analysis.m"
          }
#line 631 "analysis.m"
        }
#line 636 "analysis.m"
        break;
#line 636 "analysis.m"
      case (MR_Integer) 1:
#line 637 "analysis.m"
        *analysis__STATE_VARIABLE_Info_18 = analysis__STATE_VARIABLE_Info_0_17;
#line 636 "analysis.m"
        break;
#line 636 "analysis.m"
    }
#line 621 "analysis.m"
  }
#line 237 "analysis.m"
}

#line 575 "analysis.m"
static void MR_CALL 
analysis__lookup_best_result_6_p_0_1(
#line 575 "analysis.m"
  MR_Box analysis__closure_arg,
#line 575 "analysis.m"
  MR_Box analysis__wrapper_arg_1,
#line 575 "analysis.m"
  MR_Box analysis__wrapper_arg_2,
#line 575 "analysis.m"
  MR_Box * analysis__wrapper_arg_3)
#line 575 "analysis.m"
{
#line 575 "analysis.m"
  {
#line 575 "analysis.m"
    MR_Box analysis__closure = analysis__closure_arg;
#line 575 "analysis.m"
    MR_Word analysis__conv0_Best_8;

#line 575 "analysis.m"
    {
#line 575 "analysis.m"
      analysis__more_precise_answer_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 3))), (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 4)), ((MR_Word) analysis__wrapper_arg_1), ((MR_Word) analysis__wrapper_arg_2), &analysis__conv0_Best_8);
    }
#line 575 "analysis.m"
    *analysis__wrapper_arg_3 = ((MR_Box) (analysis__conv0_Best_8));
#line 575 "analysis.m"
  }
#line 575 "analysis.m"
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
#line 558 "analysis.m"
  {
#line 558 "analysis.m"
    MR_bool analysis__succeeded;
#line 558 "analysis.m"
    MR_Word analysis__MatchingResults_14;
#line 559 "analysis.m"
    MR_Word analysis__Debug_51;

#line 1380 "analysis.m"
{
#define MR_PROC_LABEL analysis__lookup_best_result_6_p_0


		{
#line 1380 "analysis.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&analysis__mutable_variable_debug_analysis_lock,
                    "analysis__mutable_variable_debug_analysis_lock");
#endif

#line 17318 "analysis.c"

		;}
#undef MR_PROC_LABEL
#line 1380 "analysis.m"
}
#line 1380 "analysis.m"
{
#define MR_PROC_LABEL analysis__lookup_best_result_6_p_0

	MR_Word X;

		{
#line 1380 "analysis.m"
X = analysis__mutable_variable_debug_analysis;

#line 17334 "analysis.c"

		;}
#undef MR_PROC_LABEL
	 analysis__Debug_51  = X;
#line 1380 "analysis.m"
}
#line 1380 "analysis.m"
{
#define MR_PROC_LABEL analysis__lookup_best_result_6_p_0


		{
#line 1380 "analysis.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&analysis__mutable_variable_debug_analysis_lock,
                    "analysis__mutable_variable_debug_analysis_lock");
#endif

#line 17353 "analysis.c"

		;}
#undef MR_PROC_LABEL
#line 1380 "analysis.m"
}
#line 1393 "analysis.m"
#line 1393 "analysis.m"
    switch (analysis__Debug_51) {
#line 1393 "analysis.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1393 "analysis.m"
      case (MR_Integer) 0:
#line 1394 "analysis.m"
        {
#line 1394 "analysis.m"
        }
#line 1393 "analysis.m"
        break;
#line 1393 "analysis.m"
      case (MR_Integer) 1:
#line 1392 "analysis.m"
        {
#line 1392 "analysis.m"
          analysis__IntroducedFrom__pred__lookup_best_result__560__1_4_p_0(analysis__ModuleName_8, analysis__FuncId_9);
        }
#line 1393 "analysis.m"
        break;
#line 1393 "analysis.m"
    }
#line 568 "analysis.m"
    {
#line 568 "analysis.m"
      analysis__lookup_matching_results_6_p_0(analysis__TypeClassInfo_for_analysis_35, analysis__Info_7, analysis__ModuleName_8, analysis__FuncId_9, analysis__FuncInfo_10, analysis__Call_11, &analysis__MatchingResults_14);
    }
#line 573 "analysis.m"
    if ((analysis__MatchingResults_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 572 "analysis.m"
      *analysis__MaybeBestResult_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 573 "analysis.m"
    else
#line 574 "analysis.m"
      {
#line 574 "analysis.m"
        MR_Word analysis__TypeInfo_42_42;
#line 574 "analysis.m"
        MR_Word analysis__TypeInfo_44_44;
#line 574 "analysis.m"
        MR_Word analysis__TypeInfo_46_46;
#line 574 "analysis.m"
        MR_Word analysis__Result_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), analysis__MatchingResults_14, (MR_Integer) 0)));
#line 574 "analysis.m"
        MR_Word analysis__Results_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), analysis__MatchingResults_14, (MR_Integer) 1)));
#line 574 "analysis.m"
        MR_Word analysis__BestResult_17;
#line 574 "analysis.m"
        MR_Word analysis__V_32_32;
#line 575 "analysis.m"
        MR_Box analysis__conv1_BestResult_17;

#line 575 "analysis.m"
        {
#line 575 "analysis.m"
          analysis__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 575 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__V_32_32, 0) = ((MR_Box) (&analysis_scalar_common_7[0]));
#line 575 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__V_32_32, 1) = ((MR_Box) (analysis__lookup_best_result_6_p_0_1));
#line 575 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__V_32_32, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 575 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__V_32_32, 3) = ((MR_Box) (analysis__TypeClassInfo_for_analysis_35));
#line 575 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__V_32_32, 4) = analysis__FuncInfo_10;
#line 575 "analysis.m"
        }
#line 575 "analysis.m"
        {
#line 575 "analysis.m"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_35, (MR_Integer) 4, &analysis__TypeInfo_42_42);
        }
#line 575 "analysis.m"
        {
#line 575 "analysis.m"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_35, (MR_Integer) 5, &analysis__TypeInfo_44_44);
        }
#line 17439 "analysis.c"
        {
#line 17441 "analysis.c"
          analysis__TypeInfo_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 17443 "analysis.c"
          MR_hl_field(MR_mktag(0), analysis__TypeInfo_46_46, 0) = ((MR_Box) (&analysis__analysis__type_ctor_info_analysis_result_2));
#line 17445 "analysis.c"
          MR_hl_field(MR_mktag(0), analysis__TypeInfo_46_46, 1) = ((MR_Box) (analysis__TypeInfo_42_42));
#line 17447 "analysis.c"
          MR_hl_field(MR_mktag(0), analysis__TypeInfo_46_46, 2) = ((MR_Box) (analysis__TypeInfo_44_44));
#line 17449 "analysis.c"
        }
#line 575 "analysis.m"
        {
#line 575 "analysis.m"
          mercury__list__foldl_4_p_0(analysis__TypeInfo_46_46, analysis__TypeInfo_46_46, (MR_Word) analysis__V_32_32, analysis__Results_16, ((MR_Box) (analysis__Result_15)), &analysis__conv1_BestResult_17);
        }
#line 575 "analysis.m"
        analysis__BestResult_17 = ((MR_Word) analysis__conv1_BestResult_17);
#line 576 "analysis.m"
        {
#line 576 "analysis.m"
          MR_Word base;
#line 576 "analysis.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 576 "analysis.m"
          *analysis__MaybeBestResult_12 = base;
#line 576 "analysis.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (analysis__BestResult_17));
#line 576 "analysis.m"
        }
#line 574 "analysis.m"
      }
#line 558 "analysis.m"
  }
#line 229 "analysis.m"
}

#line 549 "analysis.m"
static MR_bool MR_CALL 
analysis__lookup_matching_results_6_p_0_1(
#line 549 "analysis.m"
  MR_Box analysis__closure_arg,
#line 549 "analysis.m"
  MR_Box analysis__wrapper_arg_1)
#line 549 "analysis.m"
{
#line 549 "analysis.m"
  {
#line 549 "analysis.m"
    MR_bool analysis__succeeded;
#line 549 "analysis.m"
    MR_Box analysis__closure = analysis__closure_arg;

#line 549 "analysis.m"
    {
#line 549 "analysis.m"
      return analysis__succeeded = analysis__IntroducedFrom__pred__lookup_matching_results__549__1_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 3))), (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 4)), (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 5)), ((MR_Word) analysis__wrapper_arg_1));
    }
#line 549 "analysis.m"
    return analysis__succeeded;
#line 549 "analysis.m"
  }
#line 549 "analysis.m"
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
#line 547 "analysis.m"
  {
#line 547 "analysis.m"
    MR_bool analysis__succeeded;
#line 547 "analysis.m"
    MR_Word analysis__TypeInfo_23_23;
#line 547 "analysis.m"
    MR_Word analysis__TypeInfo_25_25;
#line 547 "analysis.m"
    MR_Word analysis__TypeInfo_27_27;
#line 547 "analysis.m"
    MR_Word analysis__AllResultsList_13;
#line 547 "analysis.m"
    MR_Word analysis__V_16_16;

#line 490 "analysis.m"
    {
#line 490 "analysis.m"
      analysis__lookup_results_1_5_p_0(analysis__TypeClassInfo_for_analysis_21, analysis__Info_7, analysis__ModuleName_8, analysis__FuncId_9, (MR_Integer) 0, &analysis__AllResultsList_13);
    }
#line 549 "analysis.m"
    {
#line 549 "analysis.m"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_21, (MR_Integer) 4, &analysis__TypeInfo_23_23);
    }
#line 549 "analysis.m"
    {
#line 549 "analysis.m"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_21, (MR_Integer) 5, &analysis__TypeInfo_25_25);
    }
#line 17554 "analysis.c"
    {
#line 17556 "analysis.c"
      analysis__TypeInfo_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 17558 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_27_27, 0) = ((MR_Box) (&analysis__analysis__type_ctor_info_analysis_result_2));
#line 17560 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_27_27, 1) = ((MR_Box) (analysis__TypeInfo_23_23));
#line 17562 "analysis.c"
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_27_27, 2) = ((MR_Box) (analysis__TypeInfo_25_25));
#line 17564 "analysis.c"
    }
#line 549 "analysis.m"
    {
#line 549 "analysis.m"
      analysis__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 549 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_16_16, 0) = ((MR_Box) (&analysis_scalar_common_6[0]));
#line 549 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_16_16, 1) = ((MR_Box) (analysis__lookup_matching_results_6_p_0_1));
#line 549 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_16_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 549 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_16_16, 3) = ((MR_Box) (analysis__TypeClassInfo_for_analysis_21));
#line 549 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_16_16, 4) = analysis__FuncInfo_10;
#line 549 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__V_16_16, 5) = analysis__Call_11;
#line 549 "analysis.m"
    }
#line 549 "analysis.m"
    {
#line 549 "analysis.m"
      *analysis__ResultList_12 = mercury__list__filter_2_f_0(analysis__TypeInfo_27_27, analysis__V_16_16, analysis__AllResultsList_13);
    }
#line 547 "analysis.m"
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
#line 488 "analysis.m"
  {
#line 488 "analysis.m"
    MR_bool analysis__succeeded;

#line 490 "analysis.m"
    {
#line 490 "analysis.m"
      analysis__lookup_results_1_5_p_0(analysis__TypeClassInfo_for_analysis_10, analysis__Info_5, analysis__ModuleName_6, analysis__FuncId_7, (MR_Integer) 0, analysis__ResultList_8);
#line 490 "analysis.m"
      return;
    }
#line 488 "analysis.m"
  }
#line 203 "analysis.m"
}

#line 479 "analysis.m"
static MR_Box MR_CALL 
analysis__lookup_existing_call_patterns_5_p_0_1(
#line 479 "analysis.m"
  MR_Box analysis__closure_arg,
#line 479 "analysis.m"
  MR_Box analysis__wrapper_arg_1)
#line 479 "analysis.m"
{
#line 479 "analysis.m"
  {
#line 479 "analysis.m"
    MR_Box analysis__wrapper_arg_2;
#line 479 "analysis.m"
    MR_Box analysis__closure = analysis__closure_arg;

#line 479 "analysis.m"
    {
#line 479 "analysis.m"
      analysis__wrapper_arg_2 = analysis__IntroducedFrom__func__lookup_existing_call_patterns__479__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 3))), ((MR_Word) analysis__wrapper_arg_1));
    }
#line 479 "analysis.m"
    return analysis__wrapper_arg_2;
#line 479 "analysis.m"
  }
#line 479 "analysis.m"
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
#line 468 "analysis.m"
  {
#line 468 "analysis.m"
    MR_bool analysis__succeeded;
#line 468 "analysis.m"
    MR_Word analysis__Map_11;
#line 469 "analysis.m"
    MR_Word analysis__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 2)));
#line 469 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_compiler_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 0)));
#line 469 "analysis.m"
    MR_Box analysis__V_28_28 = (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 1));
#line 469 "analysis.m"
    MR_Word analysis__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 3)));
#line 469 "analysis.m"
    MR_Word analysis__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 4)));
#line 469 "analysis.m"
    MR_Word analysis__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 5)));
#line 469 "analysis.m"
    MR_Word analysis__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 6)));
#line 469 "analysis.m"
    MR_Word analysis__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 7)));
#line 469 "analysis.m"
    MR_Word analysis__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 8)));
#line 469 "analysis.m"
    MR_Word analysis__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 9)));
#line 469 "analysis.m"
    MR_Word analysis__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 10)));
#line 474 "analysis.m"
    MR_Word analysis__TypeClassInfo_for_compiler_48;
#line 474 "analysis.m"
    MR_Box analysis__V_37_37;
#line 474 "analysis.m"
    MR_Word analysis__V_38_38;
#line 474 "analysis.m"
    MR_Word analysis__V_39_39;
#line 474 "analysis.m"
    MR_Word analysis__V_40_40;
#line 474 "analysis.m"
    MR_Word analysis__V_41_41;
#line 474 "analysis.m"
    MR_Word analysis__V_42_42;
#line 474 "analysis.m"
    MR_Word analysis__V_43_43;
#line 474 "analysis.m"
    MR_Word analysis__V_44_44;
#line 474 "analysis.m"
    MR_Word analysis__V_45_45;
#line 484 "analysis.m"
    MR_Word analysis__Results_13;
#line 476 "analysis.m"
    MR_Word analysis__TypeCtorInfo_51_51;
#line 476 "analysis.m"
    MR_Word analysis__TypeInfo_52_52;
#line 476 "analysis.m"
    MR_Word analysis__TypeCtorInfo_53_53;
#line 476 "analysis.m"
    MR_Word analysis__TypeInfo_54_54;
#line 476 "analysis.m"
    MR_Word analysis__ModuleResults_12;
#line 476 "analysis.m"
    MR_Word analysis__V_22_22;
#line 476 "analysis.m"
    MR_Box analysis__conv0_ModuleResults_12;
#line 477 "analysis.m"
    MR_Box analysis__conv1_V_22_22;
#line 477 "analysis.m"
    MR_Box analysis__conv2_Results_13;

#line 469 "analysis.m"
    {
#line 469 "analysis.m"
      analysis__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(analysis__ModuleName_8, analysis__V_62_62);
    }
#line 471 "analysis.m"
    if (analysis__succeeded)
#line 470 "analysis.m"
      {
#line 470 "analysis.m"
      }
#line 471 "analysis.m"
    else
#line 472 "analysis.m"
      {
#line 472 "analysis.m"
        {
#line 472 "analysis.m"
          mercury__require__unexpected_3_p_0((MR_String) "analysis", (MR_String) "predicate \140analysis.lookup_existing_call_patterns\'/5", (MR_String) "not this_module");
#line 472 "analysis.m"
          return;
        }
#line 472 "analysis.m"
      }
#line 474 "analysis.m"
    analysis__TypeClassInfo_for_compiler_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 0)));
#line 474 "analysis.m"
    analysis__V_37_37 = (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 1));
#line 474 "analysis.m"
    analysis__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 2)));
#line 474 "analysis.m"
    analysis__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 3)));
#line 474 "analysis.m"
    analysis__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 4)));
#line 474 "analysis.m"
    analysis__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 5)));
#line 474 "analysis.m"
    analysis__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 6)));
#line 474 "analysis.m"
    analysis__Map_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 7)));
#line 474 "analysis.m"
    analysis__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 8)));
#line 474 "analysis.m"
    analysis__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 9)));
#line 474 "analysis.m"
    analysis__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 10)));
#line 476 "analysis.m"
    {
#line 476 "analysis.m"
      analysis__succeeded = mercury__map__elem_2_f_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &analysis_scalar_common_2[3], ((MR_Box) (analysis__ModuleName_8)), analysis__Map_11, &analysis__conv0_ModuleResults_12);
    }
#line 476 "analysis.m"
    if (analysis__succeeded)
#line 476 "analysis.m"
      {
#line 476 "analysis.m"
        analysis__ModuleResults_12 = ((MR_Word) analysis__conv0_ModuleResults_12);
#line 476 "analysis.m"
        analysis__succeeded = MR_TRUE;
#line 476 "analysis.m"
      }
#line 476 "analysis.m"
    if (analysis__succeeded)
#line 476 "analysis.m"
      {
#line 17805 "analysis.c"
        analysis__TypeCtorInfo_51_51 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 17807 "analysis.c"
        analysis__TypeInfo_52_52 = (MR_Word) &analysis_scalar_common_2[2];
#line 477 "analysis.m"
        {
#line 477 "analysis.m"
          analysis__succeeded = mercury__map__elem_2_f_0(analysis__TypeCtorInfo_51_51, analysis__TypeInfo_52_52, ((MR_Box) (analysis__AnalysisName_7)), analysis__ModuleResults_12, &analysis__conv1_V_22_22);
        }
#line 477 "analysis.m"
        if (analysis__succeeded)
#line 477 "analysis.m"
          {
#line 477 "analysis.m"
            analysis__V_22_22 = ((MR_Word) analysis__conv1_V_22_22);
#line 477 "analysis.m"
            analysis__succeeded = MR_TRUE;
#line 477 "analysis.m"
          }
#line 476 "analysis.m"
        if (analysis__succeeded)
#line 476 "analysis.m"
          {
#line 17828 "analysis.c"
            analysis__TypeCtorInfo_53_53 = (MR_Word) &analysis__analysis__type_ctor_info_func_id_0;
#line 17830 "analysis.c"
            analysis__TypeInfo_54_54 = (MR_Word) &analysis_scalar_common_1[1];
#line 477 "analysis.m"
            {
#line 477 "analysis.m"
              analysis__succeeded = mercury__map__elem_2_f_0(analysis__TypeCtorInfo_53_53, analysis__TypeInfo_54_54, ((MR_Box) (analysis__FuncId_9)), analysis__V_22_22, &analysis__conv2_Results_13);
            }
#line 477 "analysis.m"
            if (analysis__succeeded)
#line 477 "analysis.m"
              {
#line 477 "analysis.m"
                analysis__Results_13 = ((MR_Word) analysis__conv2_Results_13);
#line 477 "analysis.m"
                analysis__succeeded = MR_TRUE;
#line 477 "analysis.m"
              }
#line 476 "analysis.m"
          }
#line 476 "analysis.m"
      }
#line 484 "analysis.m"
    if (analysis__succeeded)
#line 479 "analysis.m"
      {
#line 479 "analysis.m"
        MR_Word analysis__TypeInfo_57_57;
#line 479 "analysis.m"
        MR_Word analysis__V_23_23;

#line 479 "analysis.m"
        {
#line 479 "analysis.m"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_call_pattern_46, (MR_Integer) 4, &analysis__TypeInfo_57_57);
        }
#line 479 "analysis.m"
        {
#line 479 "analysis.m"
          analysis__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 479 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__V_23_23, 0) = ((MR_Box) (&analysis_scalar_common_4[0]));
#line 479 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__V_23_23, 1) = ((MR_Box) (analysis__lookup_existing_call_patterns_5_p_0_1));
#line 479 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__V_23_23, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 479 "analysis.m"
          MR_hl_field(MR_mktag(0), analysis__V_23_23, 3) = ((MR_Box) (analysis__TypeClassInfo_for_call_pattern_46));
#line 479 "analysis.m"
        }
#line 479 "analysis.m"
        {
#line 479 "analysis.m"
          *analysis__Calls_10 = mercury__list__map_2_f_0((MR_Word) &analysis__analysis__type_ctor_info_some_analysis_result_0, analysis__TypeInfo_57_57, analysis__V_23_23, analysis__Results_13);
        }
#line 479 "analysis.m"
      }
#line 484 "analysis.m"
    else
#line 485 "analysis.m"
      *analysis__Calls_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 468 "analysis.m"
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
#line 455 "analysis.m"
  {
#line 455 "analysis.m"
    MR_bool analysis__succeeded;
#line 455 "analysis.m"
    MR_Word analysis__Info_8;
#line 455 "analysis.m"
    MR_Word analysis__TypeCtorInfo_18_18;
#line 455 "analysis.m"
    MR_Word analysis__TypeInfo_24_24;
#line 455 "analysis.m"
    MR_Word analysis__MakeAnalysisReg_9;
#line 455 "analysis.m"
    MR_Word analysis__V_10_10;
#line 455 "analysis.m"
    MR_Word analysis__V_11_11;
#line 455 "analysis.m"
    MR_Word analysis__V_12_12;
#line 455 "analysis.m"
    MR_Word analysis__V_13_13;
#line 455 "analysis.m"
    MR_Word analysis__V_14_14;
#line 455 "analysis.m"
    MR_Word analysis__V_15_15;
#line 455 "analysis.m"
    MR_Word analysis__V_16_16;

#line 459 "analysis.m"
#line 459 "analysis.m"
    switch (analysis__MakeAnalysisRegBool_7) {
#line 459 "analysis.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 459 "analysis.m"
      case (MR_Integer) 0:
#line 461 "analysis.m"
        analysis__MakeAnalysisReg_9 = (MR_Integer) 1;
#line 459 "analysis.m"
        break;
#line 459 "analysis.m"
      case (MR_Integer) 1:
#line 458 "analysis.m"
        analysis__MakeAnalysisReg_9 = (MR_Integer) 0;
#line 459 "analysis.m"
        break;
#line 459 "analysis.m"
    }
#line 17954 "analysis.c"
    analysis__TypeCtorInfo_18_18 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
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
#line 17981 "analysis.c"
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
#line 463 "analysis.m"
    {
#line 463 "analysis.m"
      analysis__Info_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 463 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__Info_8, 0) = ((MR_Box) (analysis__TypeClassInfo_for_compiler_17));
#line 463 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__Info_8, 1) = analysis__Compiler_5;
#line 463 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__Info_8, 2) = ((MR_Box) (analysis__ThisModuleName_6));
#line 463 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__Info_8, 3) = ((MR_Box) (analysis__MakeAnalysisReg_9));
#line 463 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__Info_8, 4) = ((MR_Box) (analysis__V_10_10));
#line 463 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__Info_8, 5) = ((MR_Box) (analysis__V_11_11));
#line 463 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__Info_8, 6) = ((MR_Box) (analysis__V_12_12));
#line 463 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__Info_8, 7) = ((MR_Box) (analysis__V_13_13));
#line 463 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__Info_8, 8) = ((MR_Box) (analysis__V_14_14));
#line 463 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__Info_8, 9) = ((MR_Box) (analysis__V_15_15));
#line 463 "analysis.m"
      MR_hl_field(MR_mktag(0), analysis__Info_8, 10) = ((MR_Box) (analysis__V_16_16));
#line 463 "analysis.m"
    }
#line 455 "analysis.m"
    return analysis__Info_8;
#line 455 "analysis.m"
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
#line 1341 "analysis.m"
  {
#line 1341 "analysis.m"
    MR_bool analysis__succeeded;
#line 1341 "analysis.m"
    MR_Word analysis__Status_6;
#line 1341 "analysis.m"
    MR_Word analysis__Cmp_7;
#line 1341 "analysis.m"
    MR_Integer analysis__V_9_9 = (MR_Integer) analysis__StatusA_4;
#line 1341 "analysis.m"
    MR_Integer analysis__V_10_10 = (MR_Integer) analysis__StatusB_5;

#line 1342 "analysis.m"
    {
#line 1342 "analysis.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(&analysis__Cmp_7, analysis__V_9_9, analysis__V_10_10);
    }
#line 1346 "analysis.m"
#line 1346 "analysis.m"
    switch (analysis__Cmp_7) {
#line 1346 "analysis.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1346 "analysis.m"
      case (MR_Integer) 1:
#line 1348 "analysis.m"
        analysis__Status_6 = analysis__StatusA_4;
#line 1346 "analysis.m"
        break;
#line 1346 "analysis.m"
      case (MR_Integer) 0:
#line 1345 "analysis.m"
        analysis__Status_6 = analysis__StatusA_4;
#line 1346 "analysis.m"
        break;
#line 1346 "analysis.m"
      case (MR_Integer) 2:
#line 1351 "analysis.m"
        analysis__Status_6 = analysis__StatusB_5;
#line 1346 "analysis.m"
        break;
#line 1346 "analysis.m"
    }
#line 1341 "analysis.m"
    return analysis__Status_6;
#line 1341 "analysis.m"
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
#line 142 "analysis.m"
  {
#line 142 "analysis.m"
    MR_bool analysis__succeeded;
#line 142 "analysis.m"
    MR_bool MR_CALL (* analysis__func_0)(MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), analysis__TypeClassInfo_for_to_term_3, (MR_Integer) 0)), (MR_Integer) 6)));

#line 142 "analysis.m"
    {
#line 142 "analysis.m"
      return analysis__succeeded = analysis__func_0(((MR_Box) analysis__TypeClassInfo_for_to_term_3), ((MR_Box) (analysis__HeadVar__1_1)), analysis__HeadVar__2_2);
    }
#line 142 "analysis.m"
    return analysis__succeeded;
#line 142 "analysis.m"
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
#line 141 "analysis.m"
  {
#line 141 "analysis.m"
    MR_bool analysis__succeeded;
#line 141 "analysis.m"
    MR_Word analysis__HeadVar__2_2;
#line 141 "analysis.m"
    MR_Box MR_CALL (* analysis__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), analysis__TypeClassInfo_for_to_term_3, (MR_Integer) 0)), (MR_Integer) 5)));
#line 141 "analysis.m"
    MR_Box analysis__conv1_HeadVar__2_2;

#line 141 "analysis.m"
    {
#line 141 "analysis.m"
      analysis__conv1_HeadVar__2_2 = analysis__func_0(((MR_Box) analysis__TypeClassInfo_for_to_term_3), analysis__HeadVar__1_1);
    }
#line 141 "analysis.m"
    analysis__HeadVar__2_2 = ((MR_Word) analysis__conv1_HeadVar__2_2);
#line 141 "analysis.m"
    return analysis__HeadVar__2_2;
#line 141 "analysis.m"
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
#line 137 "analysis.m"
  {
#line 137 "analysis.m"
    MR_bool analysis__succeeded;
#line 137 "analysis.m"
    MR_bool MR_CALL (* analysis__func_0)(MR_Box, MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), analysis__TypeClassInfo_for_partial_order_4, (MR_Integer) 0)), (MR_Integer) 6)));

#line 137 "analysis.m"
    {
#line 137 "analysis.m"
      return analysis__succeeded = analysis__func_0(((MR_Box) analysis__TypeClassInfo_for_partial_order_4), analysis__HeadVar__1_1, analysis__HeadVar__2_2, analysis__HeadVar__3_3);
    }
#line 137 "analysis.m"
    return analysis__succeeded;
#line 137 "analysis.m"
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
#line 136 "analysis.m"
  {
#line 136 "analysis.m"
    MR_bool analysis__succeeded;
#line 136 "analysis.m"
    MR_bool MR_CALL (* analysis__func_0)(MR_Box, MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), analysis__TypeClassInfo_for_partial_order_4, (MR_Integer) 0)), (MR_Integer) 5)));

#line 136 "analysis.m"
    {
#line 136 "analysis.m"
      return analysis__succeeded = analysis__func_0(((MR_Box) analysis__TypeClassInfo_for_partial_order_4), analysis__HeadVar__1_1, analysis__HeadVar__2_2, analysis__HeadVar__3_3);
    }
#line 136 "analysis.m"
    return analysis__succeeded;
#line 136 "analysis.m"
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
#line 102 "analysis.m"
      return;
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
      return analysis__HeadVar__3_3 = analysis__func_0(((MR_Box) analysis__TypeClassInfo_for_analysis_4), analysis__HeadVar__1_1);
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
      return analysis__HeadVar__3_3 = analysis__func_0(((MR_Box) analysis__TypeClassInfo_for_analysis_4), analysis__HeadVar__1_1);
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
