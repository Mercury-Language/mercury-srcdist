/*
** Automatically generated from `elds.m'
** by the Mercury compiler,
** version 14.01.2-beta-2015-02-18, configured for x86_64-apple-darwin13.4.0.
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


/* :- module erl_backend.elds. */
/* :- implementation. */

/*
INIT mercury__erl_backend__elds__init
ENDINIT
*/

#include "erl_backend.elds.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "backend_libs.mih"
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
#include "erl_backend.mih"
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
#include "backend_libs.rtti.mih"
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
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 132 "erl_backend.elds.c"
static const MR_FA_PseudoTypeInfo_Struct1 erl_backend__elds__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 135 "erl_backend.elds.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__elds__set_ordlist__ti_set_ordlist_1mdbcomp__prim_data__type_ctor_info_sym_name_0;

#line 138 "erl_backend.elds.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__elds__list__ti_list_1parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0;

#line 141 "erl_backend.elds.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__elds__list__ti_list_1parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0;

#line 144 "erl_backend.elds.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__elds__list__ti_list_1erl_backend__elds__type_ctor_info_elds_defn_0;

#line 147 "erl_backend.elds.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__elds__list__ti_list_1erl_backend__elds__type_ctor_info_elds_foreign_export_defn_0;

#line 150 "erl_backend.elds.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__elds__list__ti_list_1erl_backend__elds__type_ctor_info_elds_rtti_defn_0;

#line 153 "erl_backend.elds.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__elds__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

#line 156 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_0_0[9];

#line 159 "erl_backend.elds.c"
static const MR_ConstString erl_backend__elds__erl_backend__elds__field_names_elds_0_0[9];

#line 162 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_0_0;

#line 165 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_0_0[1];

#line 168 "erl_backend.elds.c"
static const MR_DuPtagLayout erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_0[1];

#line 171 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_name_ordered_elds_0[1];

#line 174 "erl_backend.elds.c"
static const MR_Integer erl_backend__elds__erl_backend__elds__functor_number_map_elds_0[1];

#line 177 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_0;

#line 180 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_1;

#line 183 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_2;

#line 186 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_3;

#line 189 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_4;

#line 192 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_5;

#line 195 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_6;

#line 198 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_7;

#line 201 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_8;

#line 204 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_9;

#line 207 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_10;

#line 210 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_11;

#line 213 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_12;

#line 216 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_13;

#line 219 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_14;

#line 222 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_15;

#line 225 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_16;

#line 228 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_17;

#line 231 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_18;

#line 234 "erl_backend.elds.c"
static const MR_EnumFunctorDescPtr erl_backend__elds__erl_backend__elds__enum_value_ordered_elds_binop_0[19];

#line 237 "erl_backend.elds.c"
static const MR_EnumFunctorDescPtr erl_backend__elds__erl_backend__elds__enum_name_ordered_elds_binop_0[19];

#line 240 "erl_backend.elds.c"
static const MR_Integer erl_backend__elds__erl_backend__elds__functor_number_map_elds_binop_0[19];

#line 243 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_body_0_0[1];

#line 246 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_body_0_0;

#line 249 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_body_0_1[1];

#line 252 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_body_0_1;

#line 255 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_body_0_0[1];

#line 258 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_body_0_1[1];

#line 261 "erl_backend.elds.c"
static const MR_DuPtagLayout erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_body_0[2];

#line 264 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_name_ordered_elds_body_0[2];

#line 267 "erl_backend.elds.c"
static const MR_Integer erl_backend__elds__erl_backend__elds__functor_number_map_elds_body_0[2];

#line 270 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_call_target_0_0[1];

#line 273 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_call_target_0_0;

#line 276 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_call_target_0_1[1];

#line 279 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_call_target_0_1;

#line 282 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_call_target_0_2[1];

#line 285 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_call_target_0_2;

#line 288 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_call_target_0_0[1];

#line 291 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_call_target_0_1[1];

#line 294 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_call_target_0_2[1];

#line 297 "erl_backend.elds.c"
static const MR_DuPtagLayout erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_call_target_0[3];

#line 300 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_name_ordered_elds_call_target_0[3];

#line 303 "erl_backend.elds.c"
static const MR_Integer erl_backend__elds__erl_backend__elds__functor_number_map_elds_call_target_0[3];

#line 306 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_case_0_0[2];

#line 309 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_case_0_0;

#line 312 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_case_0_0[1];

#line 315 "erl_backend.elds.c"
static const MR_DuPtagLayout erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_case_0[1];

#line 318 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_name_ordered_elds_case_0[1];

#line 321 "erl_backend.elds.c"
static const MR_Integer erl_backend__elds__erl_backend__elds__functor_number_map_elds_case_0[1];

#line 324 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_catch_0_0[3];

#line 327 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_catch_0_0;

#line 330 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_catch_0_0[1];

#line 333 "erl_backend.elds.c"
static const MR_DuPtagLayout erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_catch_0[1];

#line 336 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_name_ordered_elds_catch_0[1];

#line 339 "erl_backend.elds.c"
static const MR_Integer erl_backend__elds__erl_backend__elds__functor_number_map_elds_catch_0[1];

#line 342 "erl_backend.elds.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__elds__list__ti_list_1erl_backend__elds__type_ctor_info_elds_term_0;

#line 345 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_clause_0_0[2];

#line 348 "erl_backend.elds.c"
static const MR_ConstString erl_backend__elds__erl_backend__elds__field_names_elds_clause_0_0[2];

#line 351 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_clause_0_0;

#line 354 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_clause_0_0[1];

#line 357 "erl_backend.elds.c"
static const MR_DuPtagLayout erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_clause_0[1];

#line 360 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_name_ordered_elds_clause_0[1];

#line 363 "erl_backend.elds.c"
static const MR_Integer erl_backend__elds__erl_backend__elds__functor_number_map_elds_clause_0[1];

#line 366 "erl_backend.elds.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__elds__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 369 "erl_backend.elds.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__elds__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0;

#line 372 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_defn_0_0[4];

#line 375 "erl_backend.elds.c"
static const MR_ConstString erl_backend__elds__erl_backend__elds__field_names_elds_defn_0_0[4];

#line 378 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_defn_0_0;

#line 381 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_defn_0_0[1];

#line 384 "erl_backend.elds.c"
static const MR_DuPtagLayout erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_defn_0[1];

#line 387 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_name_ordered_elds_defn_0[1];

#line 390 "erl_backend.elds.c"
static const MR_Integer erl_backend__elds__erl_backend__elds__functor_number_map_elds_defn_0[1];

#line 393 "erl_backend.elds.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__elds__list__ti_list_1erl_backend__elds__type_ctor_info_elds_expr_0;

#line 396 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_0[1];

#line 399 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_0;

#line 402 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_1[1];

#line 405 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_1;

#line 408 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_2[2];

#line 411 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_2;

#line 414 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_3[2];

#line 417 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_3;

#line 420 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_4[3];

#line 423 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_4;

#line 426 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_5[2];

#line 429 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_5;

#line 432 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_6[1];

#line 435 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_6;

#line 438 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_7[1];

#line 441 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_7;

#line 444 "erl_backend.elds.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__elds__list__ti_list_1erl_backend__elds__type_ctor_info_elds_case_0;

#line 447 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_8[2];

#line 450 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_8;

#line 453 "erl_backend.elds.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__elds__maybe__ti_maybe_1erl_backend__elds__type_ctor_info_elds_catch_0;

#line 456 "erl_backend.elds.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__elds__maybe__ti_maybe_1erl_backend__elds__type_ctor_info_elds_expr_0;

#line 459 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_9[4];

#line 462 "erl_backend.elds.c"
static const MR_ConstString erl_backend__elds__erl_backend__elds__field_names_elds_expr_0_9[4];

#line 465 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_9;

#line 468 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_10[1];

#line 471 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_10;

#line 474 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_11[2];

#line 477 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_11;

#line 480 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_12[2];

#line 483 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_12;

#line 486 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_13[1];

#line 489 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_13;

#line 492 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_expr_0_0[1];

#line 495 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_expr_0_1[1];

#line 498 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_expr_0_2[1];

#line 501 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_expr_0_3[11];

#line 504 "erl_backend.elds.c"
static const MR_DuPtagLayout erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_expr_0[4];

#line 507 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_name_ordered_elds_expr_0[14];

#line 510 "erl_backend.elds.c"
static const MR_Integer erl_backend__elds__erl_backend__elds__functor_number_map_elds_expr_0[14];

#line 513 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_foreign_export_defn_0_0[3];

#line 516 "erl_backend.elds.c"
static const MR_ConstString erl_backend__elds__erl_backend__elds__field_names_elds_foreign_export_defn_0_0[3];

#line 519 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_foreign_export_defn_0_0;

#line 522 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_foreign_export_defn_0_0[1];

#line 525 "erl_backend.elds.c"
static const MR_DuPtagLayout erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_foreign_export_defn_0[1];

#line 528 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_name_ordered_elds_foreign_export_defn_0[1];

#line 531 "erl_backend.elds.c"
static const MR_Integer erl_backend__elds__erl_backend__elds__functor_number_map_elds_foreign_export_defn_0[1];

#line 534 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_rtti_defn_0_0[4];

#line 537 "erl_backend.elds.c"
static const MR_ConstString erl_backend__elds__erl_backend__elds__field_names_elds_rtti_defn_0_0[4];

#line 540 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_rtti_defn_0_0;

#line 543 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_rtti_defn_0_0[1];

#line 546 "erl_backend.elds.c"
static const MR_DuPtagLayout erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_rtti_defn_0[1];

#line 549 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_name_ordered_elds_rtti_defn_0[1];

#line 552 "erl_backend.elds.c"
static const MR_Integer erl_backend__elds__erl_backend__elds__functor_number_map_elds_rtti_defn_0[1];

#line 555 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_rtti_id_0_0[1];

#line 558 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_rtti_id_0_0;

#line 561 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_rtti_id_0_1[1];

#line 564 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_rtti_id_0_1;

#line 567 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_rtti_id_0_2[1];

#line 570 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_rtti_id_0_2;

#line 573 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_rtti_id_0_3[3];

#line 576 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_rtti_id_0_3;

#line 579 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_rtti_id_0_0[1];

#line 582 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_rtti_id_0_1[1];

#line 585 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_rtti_id_0_2[1];

#line 588 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_rtti_id_0_3[1];

#line 591 "erl_backend.elds.c"
static const MR_DuPtagLayout erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_rtti_id_0[4];

#line 594 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_name_ordered_elds_rtti_id_0[4];

#line 597 "erl_backend.elds.c"
static const MR_Integer erl_backend__elds__erl_backend__elds__functor_number_map_elds_rtti_id_0[4];

#line 600 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_term_0_0[1];

#line 603 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_0;

#line 606 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_term_0_1[1];

#line 609 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_1;

#line 612 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_term_0_2[1];

#line 615 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_2;

#line 618 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_term_0_3[1];

#line 621 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_3;

#line 624 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_term_0_4[1];

#line 627 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_4;

#line 630 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_term_0_5[1];

#line 633 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_5;

#line 636 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_term_0_6[1];

#line 639 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_6;

#line 642 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_term_0_7[1];

#line 645 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_7;

#line 648 "erl_backend.elds.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__elds__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 651 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_term_0_8[1];

#line 654 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_8;

#line 657 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_9;

#line 660 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_term_0_10[1];

#line 663 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_10;

#line 666 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_term_0_0[1];

#line 669 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_term_0_1[1];

#line 672 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_term_0_2[1];

#line 675 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_term_0_3[8];

#line 678 "erl_backend.elds.c"
static const MR_DuPtagLayout erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_term_0[4];

#line 681 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_name_ordered_elds_term_0[11];

#line 684 "erl_backend.elds.c"
static const MR_Integer erl_backend__elds__erl_backend__elds__functor_number_map_elds_term_0[11];

#line 687 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_unop_0_0;

#line 690 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_unop_0_1;

#line 693 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_unop_0_2;

#line 696 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_unop_0_3;

#line 699 "erl_backend.elds.c"
static const MR_EnumFunctorDescPtr erl_backend__elds__erl_backend__elds__enum_value_ordered_elds_unop_0[4];

#line 702 "erl_backend.elds.c"
static const MR_EnumFunctorDescPtr erl_backend__elds__erl_backend__elds__enum_name_ordered_elds_unop_0[4];

#line 705 "erl_backend.elds.c"
static const MR_Integer erl_backend__elds__erl_backend__elds__functor_number_map_elds_unop_0[4];

#line 708 "erl_backend.elds.c"
static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_0_0_10001(
#line 711 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_1,
#line 713 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2);

#line 716 "erl_backend.elds.c"
static void MR_CALL 
erl_backend__elds____Compare____elds_0_0_10001(
#line 719 "erl_backend.elds.c"
  MR_Box * erl_backend__elds__wrapper_arg_1,
#line 721 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2,
#line 723 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_3);

#line 726 "erl_backend.elds.c"
static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_binop_0_0_10001(
#line 729 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_1,
#line 731 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2);

#line 734 "erl_backend.elds.c"
static void MR_CALL 
erl_backend__elds____Compare____elds_binop_0_0_10001(
#line 737 "erl_backend.elds.c"
  MR_Box * erl_backend__elds__wrapper_arg_1,
#line 739 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2,
#line 741 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_3);

#line 744 "erl_backend.elds.c"
static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_body_0_0_10001(
#line 747 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_1,
#line 749 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2);

#line 752 "erl_backend.elds.c"
static void MR_CALL 
erl_backend__elds____Compare____elds_body_0_0_10001(
#line 755 "erl_backend.elds.c"
  MR_Box * erl_backend__elds__wrapper_arg_1,
#line 757 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2,
#line 759 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_3);

#line 762 "erl_backend.elds.c"
static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_call_target_0_0_10001(
#line 765 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_1,
#line 767 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2);

#line 770 "erl_backend.elds.c"
static void MR_CALL 
erl_backend__elds____Compare____elds_call_target_0_0_10001(
#line 773 "erl_backend.elds.c"
  MR_Box * erl_backend__elds__wrapper_arg_1,
#line 775 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2,
#line 777 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_3);

#line 780 "erl_backend.elds.c"
static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_case_0_0_10001(
#line 783 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_1,
#line 785 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2);

#line 788 "erl_backend.elds.c"
static void MR_CALL 
erl_backend__elds____Compare____elds_case_0_0_10001(
#line 791 "erl_backend.elds.c"
  MR_Box * erl_backend__elds__wrapper_arg_1,
#line 793 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2,
#line 795 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_3);

#line 798 "erl_backend.elds.c"
static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_catch_0_0_10001(
#line 801 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_1,
#line 803 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2);

#line 806 "erl_backend.elds.c"
static void MR_CALL 
erl_backend__elds____Compare____elds_catch_0_0_10001(
#line 809 "erl_backend.elds.c"
  MR_Box * erl_backend__elds__wrapper_arg_1,
#line 811 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2,
#line 813 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_3);

#line 816 "erl_backend.elds.c"
static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_clause_0_0_10001(
#line 819 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_1,
#line 821 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2);

#line 824 "erl_backend.elds.c"
static void MR_CALL 
erl_backend__elds____Compare____elds_clause_0_0_10001(
#line 827 "erl_backend.elds.c"
  MR_Box * erl_backend__elds__wrapper_arg_1,
#line 829 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2,
#line 831 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_3);

#line 834 "erl_backend.elds.c"
static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_defn_0_0_10001(
#line 837 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_1,
#line 839 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2);

#line 842 "erl_backend.elds.c"
static void MR_CALL 
erl_backend__elds____Compare____elds_defn_0_0_10001(
#line 845 "erl_backend.elds.c"
  MR_Box * erl_backend__elds__wrapper_arg_1,
#line 847 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2,
#line 849 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_3);

#line 852 "erl_backend.elds.c"
static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_expr_0_0_10001(
#line 855 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_1,
#line 857 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2);

#line 860 "erl_backend.elds.c"
static void MR_CALL 
erl_backend__elds____Compare____elds_expr_0_0_10001(
#line 863 "erl_backend.elds.c"
  MR_Box * erl_backend__elds__wrapper_arg_1,
#line 865 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2,
#line 867 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_3);

#line 870 "erl_backend.elds.c"
static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_foreign_export_defn_0_0_10001(
#line 873 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_1,
#line 875 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2);

#line 878 "erl_backend.elds.c"
static void MR_CALL 
erl_backend__elds____Compare____elds_foreign_export_defn_0_0_10001(
#line 881 "erl_backend.elds.c"
  MR_Box * erl_backend__elds__wrapper_arg_1,
#line 883 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2,
#line 885 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_3);

#line 888 "erl_backend.elds.c"
static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_rtti_defn_0_0_10001(
#line 891 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_1,
#line 893 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2);

#line 896 "erl_backend.elds.c"
static void MR_CALL 
erl_backend__elds____Compare____elds_rtti_defn_0_0_10001(
#line 899 "erl_backend.elds.c"
  MR_Box * erl_backend__elds__wrapper_arg_1,
#line 901 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2,
#line 903 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_3);

#line 906 "erl_backend.elds.c"
static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_rtti_id_0_0_10001(
#line 909 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_1,
#line 911 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2);

#line 914 "erl_backend.elds.c"
static void MR_CALL 
erl_backend__elds____Compare____elds_rtti_id_0_0_10001(
#line 917 "erl_backend.elds.c"
  MR_Box * erl_backend__elds__wrapper_arg_1,
#line 919 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2,
#line 921 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_3);

#line 924 "erl_backend.elds.c"
static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_term_0_0_10001(
#line 927 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_1,
#line 929 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2);

#line 932 "erl_backend.elds.c"
static void MR_CALL 
erl_backend__elds____Compare____elds_term_0_0_10001(
#line 935 "erl_backend.elds.c"
  MR_Box * erl_backend__elds__wrapper_arg_1,
#line 937 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2,
#line 939 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_3);

#line 942 "erl_backend.elds.c"
static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_unop_0_0_10001(
#line 945 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_1,
#line 947 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2);

#line 950 "erl_backend.elds.c"
static void MR_CALL 
erl_backend__elds____Compare____elds_unop_0_0_10001(
#line 953 "erl_backend.elds.c"
  MR_Box * erl_backend__elds__wrapper_arg_1,
#line 955 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2,
#line 957 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_3);

#line 420 "elds.m"
static MR_Word MR_CALL 
erl_backend__elds__IntroducedFrom__func__exprs_from_fixed_vars__420__1_1_f_0(
#line 420 "elds.m"
  MR_String erl_backend__elds__HeadVar__1_6);

#line 418 "elds.m"
static MR_Word MR_CALL 
erl_backend__elds__IntroducedFrom__func__terms_from_fixed_vars__418__1_1_f_0(
#line 418 "elds.m"
  MR_String erl_backend__elds__HeadVar__1_6);

#line 420 "elds.m"
static MR_Box MR_CALL 
erl_backend__elds__exprs_from_fixed_vars_1_f_0_1(
#line 420 "elds.m"
  MR_Box erl_backend__elds__closure_arg,
#line 420 "elds.m"
  MR_Box erl_backend__elds__wrapper_arg_1);

#line 418 "elds.m"
static MR_Box MR_CALL 
erl_backend__elds__terms_from_fixed_vars_1_f_0_1(
#line 418 "elds.m"
  MR_Box erl_backend__elds__closure_arg,
#line 418 "elds.m"
  MR_Box erl_backend__elds__wrapper_arg_1);

#line 415 "elds.m"
static MR_Box MR_CALL 
erl_backend__elds__exprs_from_vars_1_f_0_1(
#line 415 "elds.m"
  MR_Box erl_backend__elds__closure_arg,
#line 415 "elds.m"
  MR_Box erl_backend__elds__wrapper_arg_1);

#line 412 "elds.m"
static MR_Box MR_CALL 
erl_backend__elds__terms_from_vars_1_f_0_1(
#line 412 "elds.m"
  MR_Box erl_backend__elds__closure_arg,
#line 412 "elds.m"
  MR_Box erl_backend__elds__wrapper_arg_1);


static /* final */ const MR_Box erl_backend__elds_scalar_common_1[22][2];

static /* final */ const MR_Box erl_backend__elds_scalar_common_2[5][1];

static /* final */ const MR_Box erl_backend__elds_scalar_common_3[5][3];

static /* final */ const MR_Box erl_backend__elds_scalar_common_4[4][5];




static /* final */ const MR_Box erl_backend__elds_scalar_common_1[22][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_defn_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_foreign_export_defn_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_rtti_defn_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
  /* row 8 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_term_0))
  },
  /* row 9 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 10 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 11 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_case_0))
  },
  /* row 12 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_catch_0))
  },
  /* row 13 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0))
  },
  /* row 14 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) ((MR_String) "true"))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) ((MR_String) "false"))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) ((MR_String) "fail"))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) ((MR_String) "throw"))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) ((MR_String) "MERCURY_COMMIT"))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) ((MR_String) "void"))
  },
};

static /* final */ const MR_Box erl_backend__elds_scalar_common_2[5][1] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &erl_backend__elds_scalar_common_1[20])))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) "element"))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_String) "self"))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &erl_backend__elds_scalar_common_1[16])))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &erl_backend__elds_scalar_common_1[21])))
  },
};

static /* final */ const MR_Box erl_backend__elds_scalar_common_3[5][3] = {
  /* row 0 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (MR_mkword(MR_mktag(2), &erl_backend__elds_scalar_common_2[2]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 1 */
  {
    ((MR_Box) (&erl_backend__elds_scalar_common_4[0])),
    ((MR_Box) (erl_backend__elds__terms_from_vars_1_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&erl_backend__elds_scalar_common_4[1])),
    ((MR_Box) (erl_backend__elds__exprs_from_vars_1_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&erl_backend__elds_scalar_common_4[2])),
    ((MR_Box) (erl_backend__elds__terms_from_fixed_vars_1_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&erl_backend__elds_scalar_common_4[3])),
    ((MR_Box) (erl_backend__elds__exprs_from_fixed_vars_1_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box erl_backend__elds_scalar_common_4[4][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&erl_backend__elds__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_term_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&erl_backend__elds__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_term_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0))
  },
};



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



#line 1237 "erl_backend.elds.c"
static const MR_FA_PseudoTypeInfo_Struct1 erl_backend__elds__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1245 "erl_backend.elds.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__elds__set_ordlist__ti_set_ordlist_1mdbcomp__prim_data__type_ctor_info_sym_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0
  }
};

#line 1253 "erl_backend.elds.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__elds__list__ti_list_1parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0
  }
};

#line 1261 "erl_backend.elds.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__elds__list__ti_list_1parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0
  }
};

#line 1269 "erl_backend.elds.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__elds__list__ti_list_1erl_backend__elds__type_ctor_info_elds_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_defn_0
  }
};

#line 1277 "erl_backend.elds.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__elds__list__ti_list_1erl_backend__elds__type_ctor_info_elds_foreign_export_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_foreign_export_defn_0
  }
};

#line 1285 "erl_backend.elds.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__elds__list__ti_list_1erl_backend__elds__type_ctor_info_elds_rtti_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_rtti_defn_0
  }
};

#line 1293 "erl_backend.elds.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__elds__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

#line 1301 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_0_0[9] = {
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &erl_backend__elds__set_ordlist__ti_set_ordlist_1mdbcomp__prim_data__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &erl_backend__elds__list__ti_list_1parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0,
  (MR_PseudoTypeInfo) &erl_backend__elds__list__ti_list_1parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0,
  (MR_PseudoTypeInfo) &erl_backend__elds__list__ti_list_1erl_backend__elds__type_ctor_info_elds_defn_0,
  (MR_PseudoTypeInfo) &erl_backend__elds__list__ti_list_1erl_backend__elds__type_ctor_info_elds_foreign_export_defn_0,
  (MR_PseudoTypeInfo) &erl_backend__elds__list__ti_list_1erl_backend__elds__type_ctor_info_elds_rtti_defn_0,
  (MR_PseudoTypeInfo) &erl_backend__elds__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
  (MR_PseudoTypeInfo) &erl_backend__elds__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0
};

#line 1314 "erl_backend.elds.c"
static const MR_ConstString erl_backend__elds__erl_backend__elds__field_names_elds_0_0[9] = {
  (MR_String) "elds_name",
  (MR_String) "elds_imports",
  (MR_String) "elds_foreign_decls",
  (MR_String) "elds_foreign_bodies",
  (MR_String) "elds_funcs",
  (MR_String) "elds_fe_funcs",
  (MR_String) "elds_rtti_funcs",
  (MR_String) "elds_init_preds",
  (MR_String) "elds_final_preds"
};

#line 1327 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_0_0 = {
  (MR_String) "elds",
  (MR_Integer) 9,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  erl_backend__elds__erl_backend__elds__field_types_elds_0_0,
  erl_backend__elds__erl_backend__elds__field_names_elds_0_0,
  NULL,
  NULL
};

#line 1342 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_0_0[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_0_0
};

#line 1347 "erl_backend.elds.c"
static const MR_DuPtagLayout erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_0_0
  }
};

#line 1356 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_name_ordered_elds_0[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_0_0
};

#line 1361 "erl_backend.elds.c"
static const MR_Integer erl_backend__elds__erl_backend__elds__functor_number_map_elds_0[1] = {
  (MR_Integer) 0
};

#line 1366 "erl_backend.elds.c"
const MR_TypeCtorInfo_Struct erl_backend__elds__erl_backend__elds__type_ctor_info_elds_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (erl_backend__elds____Unify____elds_0_0_10001)),
  ((MR_Box) (erl_backend__elds____Compare____elds_0_0_10001)),
  (MR_String) "erl_backend.elds",
  (MR_String) "elds",
  {
    erl_backend__elds__erl_backend__elds__du_name_ordered_elds_0
  },
  {
    erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  erl_backend__elds__erl_backend__elds__functor_number_map_elds_0
};

#line 1387 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_0 = {
  (MR_String) "mul",
  (MR_Integer) 0
};

#line 1393 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_1 = {
  (MR_String) "float_div",
  (MR_Integer) 1
};

#line 1399 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_2 = {
  (MR_String) "int_div",
  (MR_Integer) 2
};

#line 1405 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_3 = {
  (MR_String) "rem",
  (MR_Integer) 3
};

#line 1411 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_4 = {
  (MR_String) "band",
  (MR_Integer) 4
};

#line 1417 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_5 = {
  (MR_String) "add",
  (MR_Integer) 5
};

#line 1423 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_6 = {
  (MR_String) "sub",
  (MR_Integer) 6
};

#line 1429 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_7 = {
  (MR_String) "bor",
  (MR_Integer) 7
};

#line 1435 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_8 = {
  (MR_String) "bxor",
  (MR_Integer) 8
};

#line 1441 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_9 = {
  (MR_String) "bsl",
  (MR_Integer) 9
};

#line 1447 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_10 = {
  (MR_String) "bsr",
  (MR_Integer) 10
};

#line 1453 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_11 = {
  (MR_String) "=<",
  (MR_Integer) 11
};

#line 1459 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_12 = {
  (MR_String) "<",
  (MR_Integer) 12
};

#line 1465 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_13 = {
  (MR_String) ">=",
  (MR_Integer) 13
};

#line 1471 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_14 = {
  (MR_String) ">",
  (MR_Integer) 14
};

#line 1477 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_15 = {
  (MR_String) "=:=",
  (MR_Integer) 15
};

#line 1483 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_16 = {
  (MR_String) "=/=",
  (MR_Integer) 16
};

#line 1489 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_17 = {
  (MR_String) "andalso",
  (MR_Integer) 17
};

#line 1495 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_18 = {
  (MR_String) "orelse",
  (MR_Integer) 18
};

#line 1501 "erl_backend.elds.c"
static const MR_EnumFunctorDescPtr erl_backend__elds__erl_backend__elds__enum_value_ordered_elds_binop_0[19] = {
  &erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_0,
  &erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_1,
  &erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_2,
  &erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_3,
  &erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_4,
  &erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_5,
  &erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_6,
  &erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_7,
  &erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_8,
  &erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_9,
  &erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_10,
  &erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_11,
  &erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_12,
  &erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_13,
  &erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_14,
  &erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_15,
  &erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_16,
  &erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_17,
  &erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_18
};

#line 1524 "erl_backend.elds.c"
static const MR_EnumFunctorDescPtr erl_backend__elds__erl_backend__elds__enum_name_ordered_elds_binop_0[19] = {
  &erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_12,
  &erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_16,
  &erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_15,
  &erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_11,
  &erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_14,
  &erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_13,
  &erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_5,
  &erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_17,
  &erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_4,
  &erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_7,
  &erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_9,
  &erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_10,
  &erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_8,
  &erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_1,
  &erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_2,
  &erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_0,
  &erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_18,
  &erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_3,
  &erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_6
};

#line 1547 "erl_backend.elds.c"
static const MR_Integer erl_backend__elds__erl_backend__elds__functor_number_map_elds_binop_0[19] = {
  (MR_Integer) 15,
  (MR_Integer) 13,
  (MR_Integer) 14,
  (MR_Integer) 17,
  (MR_Integer) 8,
  (MR_Integer) 6,
  (MR_Integer) 18,
  (MR_Integer) 9,
  (MR_Integer) 12,
  (MR_Integer) 10,
  (MR_Integer) 11,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 5,
  (MR_Integer) 4,
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 7,
  (MR_Integer) 16
};

#line 1570 "erl_backend.elds.c"
const MR_TypeCtorInfo_Struct erl_backend__elds__erl_backend__elds__type_ctor_info_elds_binop_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (erl_backend__elds____Unify____elds_binop_0_0_10001)),
  ((MR_Box) (erl_backend__elds____Compare____elds_binop_0_0_10001)),
  (MR_String) "erl_backend.elds",
  (MR_String) "elds_binop",
  {
    erl_backend__elds__erl_backend__elds__enum_name_ordered_elds_binop_0
  },
  {
    erl_backend__elds__erl_backend__elds__enum_value_ordered_elds_binop_0
  },
  (MR_Integer) 19,
  (MR_Integer) 4,
  erl_backend__elds__erl_backend__elds__functor_number_map_elds_binop_0
};

#line 1591 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_body_0_0[1] = {
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_clause_0
};

#line 1596 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_body_0_0 = {
  (MR_String) "body_defined_here",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE_DIRECT_ARG,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  erl_backend__elds__erl_backend__elds__field_types_elds_body_0_0,
  NULL,
  NULL,
  NULL
};

#line 1611 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_body_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1616 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_body_0_1 = {
  (MR_String) "body_external",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  erl_backend__elds__erl_backend__elds__field_types_elds_body_0_1,
  NULL,
  NULL,
  NULL
};

#line 1631 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_body_0_0[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_body_0_0
};

#line 1636 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_body_0_1[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_body_0_1
};

#line 1641 "erl_backend.elds.c"
static const MR_DuPtagLayout erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_body_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE_DIRECT_ARG,
    erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_body_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_body_0_1
  }
};

#line 1655 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_name_ordered_elds_body_0[2] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_body_0_0,
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_body_0_1
};

#line 1661 "erl_backend.elds.c"
static const MR_Integer erl_backend__elds__erl_backend__elds__functor_number_map_elds_body_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1667 "erl_backend.elds.c"
const MR_TypeCtorInfo_Struct erl_backend__elds__erl_backend__elds__type_ctor_info_elds_body_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (erl_backend__elds____Unify____elds_body_0_0_10001)),
  ((MR_Box) (erl_backend__elds____Compare____elds_body_0_0_10001)),
  (MR_String) "erl_backend.elds",
  (MR_String) "elds_body",
  {
    erl_backend__elds__erl_backend__elds__du_name_ordered_elds_body_0
  },
  {
    erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_body_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  erl_backend__elds__erl_backend__elds__functor_number_map_elds_body_0
};

#line 1688 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_call_target_0_0[1] = {
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
};

#line 1693 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_call_target_0_0 = {
  (MR_String) "elds_call_plain",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  erl_backend__elds__erl_backend__elds__field_types_elds_call_target_0_0,
  NULL,
  NULL,
  NULL
};

#line 1708 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_call_target_0_1[1] = {
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0
};

#line 1713 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_call_target_0_1 = {
  (MR_String) "elds_call_ho",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  erl_backend__elds__erl_backend__elds__field_types_elds_call_target_0_1,
  NULL,
  NULL,
  NULL
};

#line 1728 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_call_target_0_2[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 1733 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_call_target_0_2 = {
  (MR_String) "elds_call_builtin",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  erl_backend__elds__erl_backend__elds__field_types_elds_call_target_0_2,
  NULL,
  NULL,
  NULL
};

#line 1748 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_call_target_0_0[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_call_target_0_0
};

#line 1753 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_call_target_0_1[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_call_target_0_1
};

#line 1758 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_call_target_0_2[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_call_target_0_2
};

#line 1763 "erl_backend.elds.c"
static const MR_DuPtagLayout erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_call_target_0[3] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_call_target_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_call_target_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_call_target_0_2
  }
};

#line 1782 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_name_ordered_elds_call_target_0[3] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_call_target_0_2,
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_call_target_0_1,
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_call_target_0_0
};

#line 1789 "erl_backend.elds.c"
static const MR_Integer erl_backend__elds__erl_backend__elds__functor_number_map_elds_call_target_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1796 "erl_backend.elds.c"
const MR_TypeCtorInfo_Struct erl_backend__elds__erl_backend__elds__type_ctor_info_elds_call_target_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 3,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (erl_backend__elds____Unify____elds_call_target_0_0_10001)),
  ((MR_Box) (erl_backend__elds____Compare____elds_call_target_0_0_10001)),
  (MR_String) "erl_backend.elds",
  (MR_String) "elds_call_target",
  {
    erl_backend__elds__erl_backend__elds__du_name_ordered_elds_call_target_0
  },
  {
    erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_call_target_0
  },
  (MR_Integer) 3,
  (MR_Integer) 4,
  erl_backend__elds__erl_backend__elds__functor_number_map_elds_call_target_0
};

#line 1817 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_case_0_0[2] = {
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_term_0,
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0
};

#line 1823 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_case_0_0 = {
  (MR_String) "elds_case",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  erl_backend__elds__erl_backend__elds__field_types_elds_case_0_0,
  NULL,
  NULL,
  NULL
};

#line 1838 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_case_0_0[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_case_0_0
};

#line 1843 "erl_backend.elds.c"
static const MR_DuPtagLayout erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_case_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_case_0_0
  }
};

#line 1852 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_name_ordered_elds_case_0[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_case_0_0
};

#line 1857 "erl_backend.elds.c"
static const MR_Integer erl_backend__elds__erl_backend__elds__functor_number_map_elds_case_0[1] = {
  (MR_Integer) 0
};

#line 1862 "erl_backend.elds.c"
const MR_TypeCtorInfo_Struct erl_backend__elds__erl_backend__elds__type_ctor_info_elds_case_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (erl_backend__elds____Unify____elds_case_0_0_10001)),
  ((MR_Box) (erl_backend__elds____Compare____elds_case_0_0_10001)),
  (MR_String) "erl_backend.elds",
  (MR_String) "elds_case",
  {
    erl_backend__elds__erl_backend__elds__du_name_ordered_elds_case_0
  },
  {
    erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_case_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  erl_backend__elds__erl_backend__elds__functor_number_map_elds_case_0
};

#line 1883 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_catch_0_0[3] = {
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_term_0,
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_term_0,
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0
};

#line 1890 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_catch_0_0 = {
  (MR_String) "elds_catch",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  erl_backend__elds__erl_backend__elds__field_types_elds_catch_0_0,
  NULL,
  NULL,
  NULL
};

#line 1905 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_catch_0_0[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_catch_0_0
};

#line 1910 "erl_backend.elds.c"
static const MR_DuPtagLayout erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_catch_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_catch_0_0
  }
};

#line 1919 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_name_ordered_elds_catch_0[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_catch_0_0
};

#line 1924 "erl_backend.elds.c"
static const MR_Integer erl_backend__elds__erl_backend__elds__functor_number_map_elds_catch_0[1] = {
  (MR_Integer) 0
};

#line 1929 "erl_backend.elds.c"
const MR_TypeCtorInfo_Struct erl_backend__elds__erl_backend__elds__type_ctor_info_elds_catch_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (erl_backend__elds____Unify____elds_catch_0_0_10001)),
  ((MR_Box) (erl_backend__elds____Compare____elds_catch_0_0_10001)),
  (MR_String) "erl_backend.elds",
  (MR_String) "elds_catch",
  {
    erl_backend__elds__erl_backend__elds__du_name_ordered_elds_catch_0
  },
  {
    erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_catch_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  erl_backend__elds__erl_backend__elds__functor_number_map_elds_catch_0
};

#line 1950 "erl_backend.elds.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__elds__list__ti_list_1erl_backend__elds__type_ctor_info_elds_term_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_term_0
  }
};

#line 1958 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_clause_0_0[2] = {
  (MR_PseudoTypeInfo) &erl_backend__elds__list__ti_list_1erl_backend__elds__type_ctor_info_elds_term_0,
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0
};

#line 1964 "erl_backend.elds.c"
static const MR_ConstString erl_backend__elds__erl_backend__elds__field_names_elds_clause_0_0[2] = {
  (MR_String) "clause_pattern",
  (MR_String) "clause_expr"
};

#line 1970 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_clause_0_0 = {
  (MR_String) "elds_clause",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  erl_backend__elds__erl_backend__elds__field_types_elds_clause_0_0,
  erl_backend__elds__erl_backend__elds__field_names_elds_clause_0_0,
  NULL,
  NULL
};

#line 1985 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_clause_0_0[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_clause_0_0
};

#line 1990 "erl_backend.elds.c"
static const MR_DuPtagLayout erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_clause_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_clause_0_0
  }
};

#line 1999 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_name_ordered_elds_clause_0[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_clause_0_0
};

#line 2004 "erl_backend.elds.c"
static const MR_Integer erl_backend__elds__erl_backend__elds__functor_number_map_elds_clause_0[1] = {
  (MR_Integer) 0
};

#line 2009 "erl_backend.elds.c"
const MR_TypeCtorInfo_Struct erl_backend__elds__erl_backend__elds__type_ctor_info_elds_clause_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (erl_backend__elds____Unify____elds_clause_0_0_10001)),
  ((MR_Box) (erl_backend__elds____Compare____elds_clause_0_0_10001)),
  (MR_String) "erl_backend.elds",
  (MR_String) "elds_clause",
  {
    erl_backend__elds__erl_backend__elds__du_name_ordered_elds_clause_0
  },
  {
    erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_clause_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  erl_backend__elds__erl_backend__elds__functor_number_map_elds_clause_0
};

#line 2030 "erl_backend.elds.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__elds__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2038 "erl_backend.elds.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__elds__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 2046 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_defn_0_0[4] = {
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
  (MR_PseudoTypeInfo) &erl_backend__elds__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_body_0,
  (MR_PseudoTypeInfo) &erl_backend__elds__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0
};

#line 2054 "erl_backend.elds.c"
static const MR_ConstString erl_backend__elds__erl_backend__elds__field_names_elds_defn_0_0[4] = {
  (MR_String) "defn_proc_id",
  (MR_String) "defn_varset",
  (MR_String) "defn_body",
  (MR_String) "defn_env_vars"
};

#line 2062 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_defn_0_0 = {
  (MR_String) "elds_defn",
  (MR_Integer) 4,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  erl_backend__elds__erl_backend__elds__field_types_elds_defn_0_0,
  erl_backend__elds__erl_backend__elds__field_names_elds_defn_0_0,
  NULL,
  NULL
};

#line 2077 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_defn_0_0[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_defn_0_0
};

#line 2082 "erl_backend.elds.c"
static const MR_DuPtagLayout erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_defn_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_defn_0_0
  }
};

#line 2091 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_name_ordered_elds_defn_0[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_defn_0_0
};

#line 2096 "erl_backend.elds.c"
static const MR_Integer erl_backend__elds__erl_backend__elds__functor_number_map_elds_defn_0[1] = {
  (MR_Integer) 0
};

#line 2101 "erl_backend.elds.c"
const MR_TypeCtorInfo_Struct erl_backend__elds__erl_backend__elds__type_ctor_info_elds_defn_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (erl_backend__elds____Unify____elds_defn_0_0_10001)),
  ((MR_Box) (erl_backend__elds____Compare____elds_defn_0_0_10001)),
  (MR_String) "erl_backend.elds",
  (MR_String) "elds_defn",
  {
    erl_backend__elds__erl_backend__elds__du_name_ordered_elds_defn_0
  },
  {
    erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_defn_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  erl_backend__elds__erl_backend__elds__functor_number_map_elds_defn_0
};

#line 2122 "erl_backend.elds.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__elds__list__ti_list_1erl_backend__elds__type_ctor_info_elds_expr_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0
  }
};

#line 2130 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_0[1] = {
  (MR_PseudoTypeInfo) &erl_backend__elds__list__ti_list_1erl_backend__elds__type_ctor_info_elds_expr_0
};

#line 2135 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_0 = {
  (MR_String) "elds_block",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_0,
  NULL,
  NULL,
  NULL
};

#line 2150 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_1[1] = {
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_term_0
};

#line 2155 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_1 = {
  (MR_String) "elds_term",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 1,
  erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_1,
  NULL,
  NULL,
  NULL
};

#line 2170 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_2[2] = {
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0,
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0
};

#line 2176 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_2 = {
  (MR_String) "elds_eq",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 2,
  erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_2,
  NULL,
  NULL,
  NULL
};

#line 2191 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_3[2] = {
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_unop_0,
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0
};

#line 2197 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_3 = {
  (MR_String) "elds_unop",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 3,
  erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_3,
  NULL,
  NULL,
  NULL
};

#line 2212 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_4[3] = {
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_binop_0,
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0,
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0
};

#line 2219 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_4 = {
  (MR_String) "elds_binop",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 4,
  erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_4,
  NULL,
  NULL,
  NULL
};

#line 2234 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_5[2] = {
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_call_target_0,
  (MR_PseudoTypeInfo) &erl_backend__elds__list__ti_list_1erl_backend__elds__type_ctor_info_elds_expr_0
};

#line 2240 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_5 = {
  (MR_String) "elds_call",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 3,
  (MR_Integer) 5,
  erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_5,
  NULL,
  NULL,
  NULL
};

#line 2255 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_6[1] = {
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_rtti_id_0
};

#line 2260 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_6 = {
  (MR_String) "elds_rtti_ref",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 4,
  (MR_Integer) 6,
  erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_6,
  NULL,
  NULL,
  NULL
};

#line 2275 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_7[1] = {
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_clause_0
};

#line 2280 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_7 = {
  (MR_String) "elds_fun",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE_DIRECT_ARG,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 7,
  erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_7,
  NULL,
  NULL,
  NULL
};

#line 2295 "erl_backend.elds.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__elds__list__ti_list_1erl_backend__elds__type_ctor_info_elds_case_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_case_0
  }
};

#line 2303 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_8[2] = {
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0,
  (MR_PseudoTypeInfo) &erl_backend__elds__list__ti_list_1erl_backend__elds__type_ctor_info_elds_case_0
};

#line 2309 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_8 = {
  (MR_String) "elds_case_expr",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 5,
  (MR_Integer) 8,
  erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_8,
  NULL,
  NULL,
  NULL
};

#line 2324 "erl_backend.elds.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__elds__maybe__ti_maybe_1erl_backend__elds__type_ctor_info_elds_catch_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_catch_0
  }
};

#line 2332 "erl_backend.elds.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__elds__maybe__ti_maybe_1erl_backend__elds__type_ctor_info_elds_expr_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0
  }
};

#line 2340 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_9[4] = {
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0,
  (MR_PseudoTypeInfo) &erl_backend__elds__list__ti_list_1erl_backend__elds__type_ctor_info_elds_case_0,
  (MR_PseudoTypeInfo) &erl_backend__elds__maybe__ti_maybe_1erl_backend__elds__type_ctor_info_elds_catch_0,
  (MR_PseudoTypeInfo) &erl_backend__elds__maybe__ti_maybe_1erl_backend__elds__type_ctor_info_elds_expr_0
};

#line 2348 "erl_backend.elds.c"
static const MR_ConstString erl_backend__elds__erl_backend__elds__field_names_elds_expr_0_9[4] = {
  (MR_String) "try_expr",
  (MR_String) "try_cases",
  (MR_String) "try_catch",
  (MR_String) "try_after"
};

#line 2356 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_9 = {
  (MR_String) "elds_try",
  (MR_Integer) 4,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 6,
  (MR_Integer) 9,
  erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_9,
  erl_backend__elds__erl_backend__elds__field_names_elds_expr_0_9,
  NULL,
  NULL
};

#line 2371 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_10[1] = {
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0
};

#line 2376 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_10 = {
  (MR_String) "elds_throw",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 7,
  (MR_Integer) 10,
  erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_10,
  NULL,
  NULL,
  NULL
};

#line 2391 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_11[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0
};

#line 2397 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_11 = {
  (MR_String) "elds_foreign_code",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 8,
  (MR_Integer) 11,
  erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_11,
  NULL,
  NULL,
  NULL
};

#line 2412 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_12[2] = {
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0,
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0
};

#line 2418 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_12 = {
  (MR_String) "elds_send",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 9,
  (MR_Integer) 12,
  erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_12,
  NULL,
  NULL,
  NULL
};

#line 2433 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_13[1] = {
  (MR_PseudoTypeInfo) &erl_backend__elds__list__ti_list_1erl_backend__elds__type_ctor_info_elds_case_0
};

#line 2438 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_13 = {
  (MR_String) "elds_receive",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 10,
  (MR_Integer) 13,
  erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_13,
  NULL,
  NULL,
  NULL
};

#line 2453 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_expr_0_0[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_7
};

#line 2458 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_expr_0_1[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_0
};

#line 2463 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_expr_0_2[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_1
};

#line 2468 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_expr_0_3[11] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_2,
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_3,
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_4,
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_5,
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_6,
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_8,
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_9,
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_10,
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_11,
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_12,
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_13
};

#line 2483 "erl_backend.elds.c"
static const MR_DuPtagLayout erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_expr_0[4] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE_DIRECT_ARG,
    erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_expr_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_expr_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_expr_0_2
  },
  {
    (MR_Integer) 11,
    mercury__private_builtin__MR_SECTAG_REMOTE,
    erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_expr_0_3
  }
};

#line 2507 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_name_ordered_elds_expr_0[14] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_4,
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_0,
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_5,
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_8,
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_2,
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_11,
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_7,
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_13,
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_6,
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_12,
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_1,
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_10,
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_9,
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_3
};

#line 2525 "erl_backend.elds.c"
static const MR_Integer erl_backend__elds__erl_backend__elds__functor_number_map_elds_expr_0[14] = {
  (MR_Integer) 1,
  (MR_Integer) 10,
  (MR_Integer) 4,
  (MR_Integer) 13,
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 8,
  (MR_Integer) 6,
  (MR_Integer) 3,
  (MR_Integer) 12,
  (MR_Integer) 11,
  (MR_Integer) 5,
  (MR_Integer) 9,
  (MR_Integer) 7
};

#line 2543 "erl_backend.elds.c"
const MR_TypeCtorInfo_Struct erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (erl_backend__elds____Unify____elds_expr_0_0_10001)),
  ((MR_Box) (erl_backend__elds____Compare____elds_expr_0_0_10001)),
  (MR_String) "erl_backend.elds",
  (MR_String) "elds_expr",
  {
    erl_backend__elds__erl_backend__elds__du_name_ordered_elds_expr_0
  },
  {
    erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_expr_0
  },
  (MR_Integer) 14,
  (MR_Integer) 4,
  erl_backend__elds__erl_backend__elds__functor_number_map_elds_expr_0
};

#line 2564 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_foreign_export_defn_0_0[3] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &erl_backend__elds__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_clause_0
};

#line 2571 "erl_backend.elds.c"
static const MR_ConstString erl_backend__elds__erl_backend__elds__field_names_elds_foreign_export_defn_0_0[3] = {
  (MR_String) "fe_defn_name",
  (MR_String) "fe_defn_varset",
  (MR_String) "fe_defn_clause"
};

#line 2578 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_foreign_export_defn_0_0 = {
  (MR_String) "elds_foreign_export_defn",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  erl_backend__elds__erl_backend__elds__field_types_elds_foreign_export_defn_0_0,
  erl_backend__elds__erl_backend__elds__field_names_elds_foreign_export_defn_0_0,
  NULL,
  NULL
};

#line 2593 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_foreign_export_defn_0_0[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_foreign_export_defn_0_0
};

#line 2598 "erl_backend.elds.c"
static const MR_DuPtagLayout erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_foreign_export_defn_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_foreign_export_defn_0_0
  }
};

#line 2607 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_name_ordered_elds_foreign_export_defn_0[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_foreign_export_defn_0_0
};

#line 2612 "erl_backend.elds.c"
static const MR_Integer erl_backend__elds__erl_backend__elds__functor_number_map_elds_foreign_export_defn_0[1] = {
  (MR_Integer) 0
};

#line 2617 "erl_backend.elds.c"
const MR_TypeCtorInfo_Struct erl_backend__elds__erl_backend__elds__type_ctor_info_elds_foreign_export_defn_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (erl_backend__elds____Unify____elds_foreign_export_defn_0_0_10001)),
  ((MR_Box) (erl_backend__elds____Compare____elds_foreign_export_defn_0_0_10001)),
  (MR_String) "erl_backend.elds",
  (MR_String) "elds_foreign_export_defn",
  {
    erl_backend__elds__erl_backend__elds__du_name_ordered_elds_foreign_export_defn_0
  },
  {
    erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_foreign_export_defn_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  erl_backend__elds__erl_backend__elds__functor_number_map_elds_foreign_export_defn_0
};

#line 2638 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_rtti_defn_0_0[4] = {
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_rtti_id_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &erl_backend__elds__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_clause_0
};

#line 2646 "erl_backend.elds.c"
static const MR_ConstString erl_backend__elds__erl_backend__elds__field_names_elds_rtti_defn_0_0[4] = {
  (MR_String) "rtti_defn_id",
  (MR_String) "rtti_defn_exported",
  (MR_String) "rtti_defn_varset",
  (MR_String) "rtti_defn_clause"
};

#line 2654 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_rtti_defn_0_0 = {
  (MR_String) "elds_rtti_defn",
  (MR_Integer) 4,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  erl_backend__elds__erl_backend__elds__field_types_elds_rtti_defn_0_0,
  erl_backend__elds__erl_backend__elds__field_names_elds_rtti_defn_0_0,
  NULL,
  NULL
};

#line 2669 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_rtti_defn_0_0[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_rtti_defn_0_0
};

#line 2674 "erl_backend.elds.c"
static const MR_DuPtagLayout erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_rtti_defn_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_rtti_defn_0_0
  }
};

#line 2683 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_name_ordered_elds_rtti_defn_0[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_rtti_defn_0_0
};

#line 2688 "erl_backend.elds.c"
static const MR_Integer erl_backend__elds__erl_backend__elds__functor_number_map_elds_rtti_defn_0[1] = {
  (MR_Integer) 0
};

#line 2693 "erl_backend.elds.c"
const MR_TypeCtorInfo_Struct erl_backend__elds__erl_backend__elds__type_ctor_info_elds_rtti_defn_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (erl_backend__elds____Unify____elds_rtti_defn_0_0_10001)),
  ((MR_Box) (erl_backend__elds____Compare____elds_rtti_defn_0_0_10001)),
  (MR_String) "erl_backend.elds",
  (MR_String) "elds_rtti_defn",
  {
    erl_backend__elds__erl_backend__elds__du_name_ordered_elds_rtti_defn_0
  },
  {
    erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_rtti_defn_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  erl_backend__elds__erl_backend__elds__functor_number_map_elds_rtti_defn_0
};

#line 2714 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_rtti_id_0_0[1] = {
  (MR_PseudoTypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_type_ctor_0
};

#line 2719 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_rtti_id_0_0 = {
  (MR_String) "elds_rtti_type_ctor_id",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  erl_backend__elds__erl_backend__elds__field_types_elds_rtti_id_0_0,
  NULL,
  NULL,
  NULL
};

#line 2734 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_rtti_id_0_1[1] = {
  (MR_PseudoTypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_type_info_0
};

#line 2739 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_rtti_id_0_1 = {
  (MR_String) "elds_rtti_type_info_id",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  erl_backend__elds__erl_backend__elds__field_types_elds_rtti_id_0_1,
  NULL,
  NULL,
  NULL
};

#line 2754 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_rtti_id_0_2[1] = {
  (MR_PseudoTypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_pseudo_type_info_0
};

#line 2759 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_rtti_id_0_2 = {
  (MR_String) "elds_rtti_pseudo_type_info_id",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  erl_backend__elds__erl_backend__elds__field_types_elds_rtti_id_0_2,
  NULL,
  NULL,
  NULL
};

#line 2774 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_rtti_id_0_3[3] = {
  (MR_PseudoTypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_tc_name_0,
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 2781 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_rtti_id_0_3 = {
  (MR_String) "elds_rtti_base_typeclass_id",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 3,
  (MR_Integer) -1,
  (MR_Integer) 3,
  erl_backend__elds__erl_backend__elds__field_types_elds_rtti_id_0_3,
  NULL,
  NULL,
  NULL
};

#line 2796 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_rtti_id_0_0[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_rtti_id_0_0
};

#line 2801 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_rtti_id_0_1[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_rtti_id_0_1
};

#line 2806 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_rtti_id_0_2[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_rtti_id_0_2
};

#line 2811 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_rtti_id_0_3[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_rtti_id_0_3
};

#line 2816 "erl_backend.elds.c"
static const MR_DuPtagLayout erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_rtti_id_0[4] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_rtti_id_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_rtti_id_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_rtti_id_0_2
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_rtti_id_0_3
  }
};

#line 2840 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_name_ordered_elds_rtti_id_0[4] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_rtti_id_0_3,
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_rtti_id_0_2,
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_rtti_id_0_0,
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_rtti_id_0_1
};

#line 2848 "erl_backend.elds.c"
static const MR_Integer erl_backend__elds__erl_backend__elds__functor_number_map_elds_rtti_id_0[4] = {
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 2856 "erl_backend.elds.c"
const MR_TypeCtorInfo_Struct erl_backend__elds__erl_backend__elds__type_ctor_info_elds_rtti_id_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (erl_backend__elds____Unify____elds_rtti_id_0_0_10001)),
  ((MR_Box) (erl_backend__elds____Compare____elds_rtti_id_0_0_10001)),
  (MR_String) "erl_backend.elds",
  (MR_String) "elds_rtti_id",
  {
    erl_backend__elds__erl_backend__elds__du_name_ordered_elds_rtti_id_0
  },
  {
    erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_rtti_id_0
  },
  (MR_Integer) 4,
  (MR_Integer) 4,
  erl_backend__elds__erl_backend__elds__functor_number_map_elds_rtti_id_0
};

#line 2877 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_term_0_0[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_character_0
};

#line 2882 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_0 = {
  (MR_String) "elds_char",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  erl_backend__elds__erl_backend__elds__field_types_elds_term_0_0,
  NULL,
  NULL,
  NULL
};

#line 2897 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_term_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2902 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_1 = {
  (MR_String) "elds_int",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 1,
  erl_backend__elds__erl_backend__elds__field_types_elds_term_0_1,
  NULL,
  NULL,
  NULL
};

#line 2917 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_term_0_2[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0
};

#line 2922 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_2 = {
  (MR_String) "elds_float",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 2,
  erl_backend__elds__erl_backend__elds__field_types_elds_term_0_2,
  NULL,
  NULL,
  NULL
};

#line 2937 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_term_0_3[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 2942 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_3 = {
  (MR_String) "elds_binary",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 3,
  erl_backend__elds__erl_backend__elds__field_types_elds_term_0_3,
  NULL,
  NULL,
  NULL
};

#line 2957 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_term_0_4[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 2962 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_4 = {
  (MR_String) "elds_list_of_ints",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 4,
  erl_backend__elds__erl_backend__elds__field_types_elds_term_0_4,
  NULL,
  NULL,
  NULL
};

#line 2977 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_term_0_5[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 2982 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_5 = {
  (MR_String) "elds_atom_raw",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 3,
  (MR_Integer) 5,
  erl_backend__elds__erl_backend__elds__field_types_elds_term_0_5,
  NULL,
  NULL,
  NULL
};

#line 2997 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_term_0_6[1] = {
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0
};

#line 3002 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_6 = {
  (MR_String) "elds_atom",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 4,
  (MR_Integer) 6,
  erl_backend__elds__erl_backend__elds__field_types_elds_term_0_6,
  NULL,
  NULL,
  NULL
};

#line 3017 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_term_0_7[1] = {
  (MR_PseudoTypeInfo) &erl_backend__elds__list__ti_list_1erl_backend__elds__type_ctor_info_elds_expr_0
};

#line 3022 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_7 = {
  (MR_String) "elds_tuple",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 5,
  (MR_Integer) 7,
  erl_backend__elds__erl_backend__elds__field_types_elds_term_0_7,
  NULL,
  NULL,
  NULL
};

#line 3037 "erl_backend.elds.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__elds__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 3045 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_term_0_8[1] = {
  (MR_PseudoTypeInfo) &erl_backend__elds__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

#line 3050 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_8 = {
  (MR_String) "elds_var",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 6,
  (MR_Integer) 8,
  erl_backend__elds__erl_backend__elds__field_types_elds_term_0_8,
  NULL,
  NULL,
  NULL
};

#line 3065 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_9 = {
  (MR_String) "elds_anon_var",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 9,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 3080 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_term_0_10[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 3085 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_10 = {
  (MR_String) "elds_fixed_name_var",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 7,
  (MR_Integer) 10,
  erl_backend__elds__erl_backend__elds__field_types_elds_term_0_10,
  NULL,
  NULL,
  NULL
};

#line 3100 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_term_0_0[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_9
};

#line 3105 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_term_0_1[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_0
};

#line 3110 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_term_0_2[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_1
};

#line 3115 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_term_0_3[8] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_2,
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_3,
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_4,
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_5,
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_6,
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_7,
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_8,
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_10
};

#line 3127 "erl_backend.elds.c"
static const MR_DuPtagLayout erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_term_0[4] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_term_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_term_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_term_0_2
  },
  {
    (MR_Integer) 8,
    mercury__private_builtin__MR_SECTAG_REMOTE,
    erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_term_0_3
  }
};

#line 3151 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_name_ordered_elds_term_0[11] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_9,
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_6,
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_5,
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_3,
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_0,
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_10,
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_2,
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_1,
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_4,
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_7,
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_8
};

#line 3166 "erl_backend.elds.c"
static const MR_Integer erl_backend__elds__erl_backend__elds__functor_number_map_elds_term_0[11] = {
  (MR_Integer) 4,
  (MR_Integer) 7,
  (MR_Integer) 6,
  (MR_Integer) 3,
  (MR_Integer) 8,
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 9,
  (MR_Integer) 10,
  (MR_Integer) 0,
  (MR_Integer) 5
};

#line 3181 "erl_backend.elds.c"
const MR_TypeCtorInfo_Struct erl_backend__elds__erl_backend__elds__type_ctor_info_elds_term_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (erl_backend__elds____Unify____elds_term_0_0_10001)),
  ((MR_Box) (erl_backend__elds____Compare____elds_term_0_0_10001)),
  (MR_String) "erl_backend.elds",
  (MR_String) "elds_term",
  {
    erl_backend__elds__erl_backend__elds__du_name_ordered_elds_term_0
  },
  {
    erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_term_0
  },
  (MR_Integer) 11,
  (MR_Integer) 4,
  erl_backend__elds__erl_backend__elds__functor_number_map_elds_term_0
};

#line 3202 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_unop_0_0 = {
  (MR_String) "plus",
  (MR_Integer) 0
};

#line 3208 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_unop_0_1 = {
  (MR_String) "minus",
  (MR_Integer) 1
};

#line 3214 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_unop_0_2 = {
  (MR_String) "bnot",
  (MR_Integer) 2
};

#line 3220 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_unop_0_3 = {
  (MR_String) "logical_not",
  (MR_Integer) 3
};

#line 3226 "erl_backend.elds.c"
static const MR_EnumFunctorDescPtr erl_backend__elds__erl_backend__elds__enum_value_ordered_elds_unop_0[4] = {
  &erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_unop_0_0,
  &erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_unop_0_1,
  &erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_unop_0_2,
  &erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_unop_0_3
};

#line 3234 "erl_backend.elds.c"
static const MR_EnumFunctorDescPtr erl_backend__elds__erl_backend__elds__enum_name_ordered_elds_unop_0[4] = {
  &erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_unop_0_2,
  &erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_unop_0_3,
  &erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_unop_0_1,
  &erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_unop_0_0
};

#line 3242 "erl_backend.elds.c"
static const MR_Integer erl_backend__elds__erl_backend__elds__functor_number_map_elds_unop_0[4] = {
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 3250 "erl_backend.elds.c"
const MR_TypeCtorInfo_Struct erl_backend__elds__erl_backend__elds__type_ctor_info_elds_unop_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (erl_backend__elds____Unify____elds_unop_0_0_10001)),
  ((MR_Box) (erl_backend__elds____Compare____elds_unop_0_0_10001)),
  (MR_String) "erl_backend.elds",
  (MR_String) "elds_unop",
  {
    erl_backend__elds__erl_backend__elds__enum_name_ordered_elds_unop_0
  },
  {
    erl_backend__elds__erl_backend__elds__enum_value_ordered_elds_unop_0
  },
  (MR_Integer) 4,
  (MR_Integer) 4,
  erl_backend__elds__erl_backend__elds__functor_number_map_elds_unop_0
};

#line 3271 "erl_backend.elds.c"
static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_0_0_10001(
#line 3274 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_1,
#line 3276 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2)
#line 3278 "erl_backend.elds.c"
{
#line 3280 "erl_backend.elds.c"
  {
#line 3282 "erl_backend.elds.c"
    MR_bool erl_backend__elds__succeeded;

#line 3285 "erl_backend.elds.c"
    {
#line 3287 "erl_backend.elds.c"
      erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_0_0(((MR_Word) erl_backend__elds__wrapper_arg_1), ((MR_Word) erl_backend__elds__wrapper_arg_2));
    }
#line 3290 "erl_backend.elds.c"
    return erl_backend__elds__succeeded;
#line 3292 "erl_backend.elds.c"
  }
#line 3294 "erl_backend.elds.c"
}

#line 3297 "erl_backend.elds.c"
static void MR_CALL 
erl_backend__elds____Compare____elds_0_0_10001(
#line 3300 "erl_backend.elds.c"
  MR_Box * erl_backend__elds__wrapper_arg_1,
#line 3302 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2,
#line 3304 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_3)
#line 3306 "erl_backend.elds.c"
{
#line 3308 "erl_backend.elds.c"
  {
#line 3310 "erl_backend.elds.c"
    MR_Word erl_backend__elds__conv0_HeadVar__1_1;

#line 3313 "erl_backend.elds.c"
    {
#line 3315 "erl_backend.elds.c"
      erl_backend__elds____Compare____elds_0_0(&erl_backend__elds__conv0_HeadVar__1_1, ((MR_Word) erl_backend__elds__wrapper_arg_2), ((MR_Word) erl_backend__elds__wrapper_arg_3));
    }
#line 3318 "erl_backend.elds.c"
    *erl_backend__elds__wrapper_arg_1 = ((MR_Box) (erl_backend__elds__conv0_HeadVar__1_1));
#line 3320 "erl_backend.elds.c"
  }
#line 3322 "erl_backend.elds.c"
}

#line 3325 "erl_backend.elds.c"
static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_binop_0_0_10001(
#line 3328 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_1,
#line 3330 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2)
#line 3332 "erl_backend.elds.c"
{
#line 3334 "erl_backend.elds.c"
  {
#line 3336 "erl_backend.elds.c"
    MR_bool erl_backend__elds__succeeded;

#line 3339 "erl_backend.elds.c"
    {
#line 3341 "erl_backend.elds.c"
      erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_binop_0_0(((MR_Word) erl_backend__elds__wrapper_arg_1), ((MR_Word) erl_backend__elds__wrapper_arg_2));
    }
#line 3344 "erl_backend.elds.c"
    return erl_backend__elds__succeeded;
#line 3346 "erl_backend.elds.c"
  }
#line 3348 "erl_backend.elds.c"
}

#line 3351 "erl_backend.elds.c"
static void MR_CALL 
erl_backend__elds____Compare____elds_binop_0_0_10001(
#line 3354 "erl_backend.elds.c"
  MR_Box * erl_backend__elds__wrapper_arg_1,
#line 3356 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2,
#line 3358 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_3)
#line 3360 "erl_backend.elds.c"
{
#line 3362 "erl_backend.elds.c"
  {
#line 3364 "erl_backend.elds.c"
    MR_Word erl_backend__elds__conv0_HeadVar__1_1;

#line 3367 "erl_backend.elds.c"
    {
#line 3369 "erl_backend.elds.c"
      erl_backend__elds____Compare____elds_binop_0_0(&erl_backend__elds__conv0_HeadVar__1_1, ((MR_Word) erl_backend__elds__wrapper_arg_2), ((MR_Word) erl_backend__elds__wrapper_arg_3));
    }
#line 3372 "erl_backend.elds.c"
    *erl_backend__elds__wrapper_arg_1 = ((MR_Box) (erl_backend__elds__conv0_HeadVar__1_1));
#line 3374 "erl_backend.elds.c"
  }
#line 3376 "erl_backend.elds.c"
}

#line 3379 "erl_backend.elds.c"
static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_body_0_0_10001(
#line 3382 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_1,
#line 3384 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2)
#line 3386 "erl_backend.elds.c"
{
#line 3388 "erl_backend.elds.c"
  {
#line 3390 "erl_backend.elds.c"
    MR_bool erl_backend__elds__succeeded;

#line 3393 "erl_backend.elds.c"
    {
#line 3395 "erl_backend.elds.c"
      erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_body_0_0(((MR_Word) erl_backend__elds__wrapper_arg_1), ((MR_Word) erl_backend__elds__wrapper_arg_2));
    }
#line 3398 "erl_backend.elds.c"
    return erl_backend__elds__succeeded;
#line 3400 "erl_backend.elds.c"
  }
#line 3402 "erl_backend.elds.c"
}

#line 3405 "erl_backend.elds.c"
static void MR_CALL 
erl_backend__elds____Compare____elds_body_0_0_10001(
#line 3408 "erl_backend.elds.c"
  MR_Box * erl_backend__elds__wrapper_arg_1,
#line 3410 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2,
#line 3412 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_3)
#line 3414 "erl_backend.elds.c"
{
#line 3416 "erl_backend.elds.c"
  {
#line 3418 "erl_backend.elds.c"
    MR_Word erl_backend__elds__conv0_HeadVar__1_1;

#line 3421 "erl_backend.elds.c"
    {
#line 3423 "erl_backend.elds.c"
      erl_backend__elds____Compare____elds_body_0_0(&erl_backend__elds__conv0_HeadVar__1_1, ((MR_Word) erl_backend__elds__wrapper_arg_2), ((MR_Word) erl_backend__elds__wrapper_arg_3));
    }
#line 3426 "erl_backend.elds.c"
    *erl_backend__elds__wrapper_arg_1 = ((MR_Box) (erl_backend__elds__conv0_HeadVar__1_1));
#line 3428 "erl_backend.elds.c"
  }
#line 3430 "erl_backend.elds.c"
}

#line 3433 "erl_backend.elds.c"
static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_call_target_0_0_10001(
#line 3436 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_1,
#line 3438 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2)
#line 3440 "erl_backend.elds.c"
{
#line 3442 "erl_backend.elds.c"
  {
#line 3444 "erl_backend.elds.c"
    MR_bool erl_backend__elds__succeeded;

#line 3447 "erl_backend.elds.c"
    {
#line 3449 "erl_backend.elds.c"
      erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_call_target_0_0(((MR_Word) erl_backend__elds__wrapper_arg_1), ((MR_Word) erl_backend__elds__wrapper_arg_2));
    }
#line 3452 "erl_backend.elds.c"
    return erl_backend__elds__succeeded;
#line 3454 "erl_backend.elds.c"
  }
#line 3456 "erl_backend.elds.c"
}

#line 3459 "erl_backend.elds.c"
static void MR_CALL 
erl_backend__elds____Compare____elds_call_target_0_0_10001(
#line 3462 "erl_backend.elds.c"
  MR_Box * erl_backend__elds__wrapper_arg_1,
#line 3464 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2,
#line 3466 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_3)
#line 3468 "erl_backend.elds.c"
{
#line 3470 "erl_backend.elds.c"
  {
#line 3472 "erl_backend.elds.c"
    MR_Word erl_backend__elds__conv0_HeadVar__1_1;

#line 3475 "erl_backend.elds.c"
    {
#line 3477 "erl_backend.elds.c"
      erl_backend__elds____Compare____elds_call_target_0_0(&erl_backend__elds__conv0_HeadVar__1_1, ((MR_Word) erl_backend__elds__wrapper_arg_2), ((MR_Word) erl_backend__elds__wrapper_arg_3));
    }
#line 3480 "erl_backend.elds.c"
    *erl_backend__elds__wrapper_arg_1 = ((MR_Box) (erl_backend__elds__conv0_HeadVar__1_1));
#line 3482 "erl_backend.elds.c"
  }
#line 3484 "erl_backend.elds.c"
}

#line 3487 "erl_backend.elds.c"
static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_case_0_0_10001(
#line 3490 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_1,
#line 3492 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2)
#line 3494 "erl_backend.elds.c"
{
#line 3496 "erl_backend.elds.c"
  {
#line 3498 "erl_backend.elds.c"
    MR_bool erl_backend__elds__succeeded;

#line 3501 "erl_backend.elds.c"
    {
#line 3503 "erl_backend.elds.c"
      erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_case_0_0(((MR_Word) erl_backend__elds__wrapper_arg_1), ((MR_Word) erl_backend__elds__wrapper_arg_2));
    }
#line 3506 "erl_backend.elds.c"
    return erl_backend__elds__succeeded;
#line 3508 "erl_backend.elds.c"
  }
#line 3510 "erl_backend.elds.c"
}

#line 3513 "erl_backend.elds.c"
static void MR_CALL 
erl_backend__elds____Compare____elds_case_0_0_10001(
#line 3516 "erl_backend.elds.c"
  MR_Box * erl_backend__elds__wrapper_arg_1,
#line 3518 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2,
#line 3520 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_3)
#line 3522 "erl_backend.elds.c"
{
#line 3524 "erl_backend.elds.c"
  {
#line 3526 "erl_backend.elds.c"
    MR_Word erl_backend__elds__conv0_HeadVar__1_1;

#line 3529 "erl_backend.elds.c"
    {
#line 3531 "erl_backend.elds.c"
      erl_backend__elds____Compare____elds_case_0_0(&erl_backend__elds__conv0_HeadVar__1_1, ((MR_Word) erl_backend__elds__wrapper_arg_2), ((MR_Word) erl_backend__elds__wrapper_arg_3));
    }
#line 3534 "erl_backend.elds.c"
    *erl_backend__elds__wrapper_arg_1 = ((MR_Box) (erl_backend__elds__conv0_HeadVar__1_1));
#line 3536 "erl_backend.elds.c"
  }
#line 3538 "erl_backend.elds.c"
}

#line 3541 "erl_backend.elds.c"
static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_catch_0_0_10001(
#line 3544 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_1,
#line 3546 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2)
#line 3548 "erl_backend.elds.c"
{
#line 3550 "erl_backend.elds.c"
  {
#line 3552 "erl_backend.elds.c"
    MR_bool erl_backend__elds__succeeded;

#line 3555 "erl_backend.elds.c"
    {
#line 3557 "erl_backend.elds.c"
      erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_catch_0_0(((MR_Word) erl_backend__elds__wrapper_arg_1), ((MR_Word) erl_backend__elds__wrapper_arg_2));
    }
#line 3560 "erl_backend.elds.c"
    return erl_backend__elds__succeeded;
#line 3562 "erl_backend.elds.c"
  }
#line 3564 "erl_backend.elds.c"
}

#line 3567 "erl_backend.elds.c"
static void MR_CALL 
erl_backend__elds____Compare____elds_catch_0_0_10001(
#line 3570 "erl_backend.elds.c"
  MR_Box * erl_backend__elds__wrapper_arg_1,
#line 3572 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2,
#line 3574 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_3)
#line 3576 "erl_backend.elds.c"
{
#line 3578 "erl_backend.elds.c"
  {
#line 3580 "erl_backend.elds.c"
    MR_Word erl_backend__elds__conv0_HeadVar__1_1;

#line 3583 "erl_backend.elds.c"
    {
#line 3585 "erl_backend.elds.c"
      erl_backend__elds____Compare____elds_catch_0_0(&erl_backend__elds__conv0_HeadVar__1_1, ((MR_Word) erl_backend__elds__wrapper_arg_2), ((MR_Word) erl_backend__elds__wrapper_arg_3));
    }
#line 3588 "erl_backend.elds.c"
    *erl_backend__elds__wrapper_arg_1 = ((MR_Box) (erl_backend__elds__conv0_HeadVar__1_1));
#line 3590 "erl_backend.elds.c"
  }
#line 3592 "erl_backend.elds.c"
}

#line 3595 "erl_backend.elds.c"
static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_clause_0_0_10001(
#line 3598 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_1,
#line 3600 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2)
#line 3602 "erl_backend.elds.c"
{
#line 3604 "erl_backend.elds.c"
  {
#line 3606 "erl_backend.elds.c"
    MR_bool erl_backend__elds__succeeded;

#line 3609 "erl_backend.elds.c"
    {
#line 3611 "erl_backend.elds.c"
      erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_clause_0_0(((MR_Word) erl_backend__elds__wrapper_arg_1), ((MR_Word) erl_backend__elds__wrapper_arg_2));
    }
#line 3614 "erl_backend.elds.c"
    return erl_backend__elds__succeeded;
#line 3616 "erl_backend.elds.c"
  }
#line 3618 "erl_backend.elds.c"
}

#line 3621 "erl_backend.elds.c"
static void MR_CALL 
erl_backend__elds____Compare____elds_clause_0_0_10001(
#line 3624 "erl_backend.elds.c"
  MR_Box * erl_backend__elds__wrapper_arg_1,
#line 3626 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2,
#line 3628 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_3)
#line 3630 "erl_backend.elds.c"
{
#line 3632 "erl_backend.elds.c"
  {
#line 3634 "erl_backend.elds.c"
    MR_Word erl_backend__elds__conv0_HeadVar__1_1;

#line 3637 "erl_backend.elds.c"
    {
#line 3639 "erl_backend.elds.c"
      erl_backend__elds____Compare____elds_clause_0_0(&erl_backend__elds__conv0_HeadVar__1_1, ((MR_Word) erl_backend__elds__wrapper_arg_2), ((MR_Word) erl_backend__elds__wrapper_arg_3));
    }
#line 3642 "erl_backend.elds.c"
    *erl_backend__elds__wrapper_arg_1 = ((MR_Box) (erl_backend__elds__conv0_HeadVar__1_1));
#line 3644 "erl_backend.elds.c"
  }
#line 3646 "erl_backend.elds.c"
}

#line 3649 "erl_backend.elds.c"
static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_defn_0_0_10001(
#line 3652 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_1,
#line 3654 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2)
#line 3656 "erl_backend.elds.c"
{
#line 3658 "erl_backend.elds.c"
  {
#line 3660 "erl_backend.elds.c"
    MR_bool erl_backend__elds__succeeded;

#line 3663 "erl_backend.elds.c"
    {
#line 3665 "erl_backend.elds.c"
      erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_defn_0_0(((MR_Word) erl_backend__elds__wrapper_arg_1), ((MR_Word) erl_backend__elds__wrapper_arg_2));
    }
#line 3668 "erl_backend.elds.c"
    return erl_backend__elds__succeeded;
#line 3670 "erl_backend.elds.c"
  }
#line 3672 "erl_backend.elds.c"
}

#line 3675 "erl_backend.elds.c"
static void MR_CALL 
erl_backend__elds____Compare____elds_defn_0_0_10001(
#line 3678 "erl_backend.elds.c"
  MR_Box * erl_backend__elds__wrapper_arg_1,
#line 3680 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2,
#line 3682 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_3)
#line 3684 "erl_backend.elds.c"
{
#line 3686 "erl_backend.elds.c"
  {
#line 3688 "erl_backend.elds.c"
    MR_Word erl_backend__elds__conv0_HeadVar__1_1;

#line 3691 "erl_backend.elds.c"
    {
#line 3693 "erl_backend.elds.c"
      erl_backend__elds____Compare____elds_defn_0_0(&erl_backend__elds__conv0_HeadVar__1_1, ((MR_Word) erl_backend__elds__wrapper_arg_2), ((MR_Word) erl_backend__elds__wrapper_arg_3));
    }
#line 3696 "erl_backend.elds.c"
    *erl_backend__elds__wrapper_arg_1 = ((MR_Box) (erl_backend__elds__conv0_HeadVar__1_1));
#line 3698 "erl_backend.elds.c"
  }
#line 3700 "erl_backend.elds.c"
}

#line 3703 "erl_backend.elds.c"
static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_expr_0_0_10001(
#line 3706 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_1,
#line 3708 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2)
#line 3710 "erl_backend.elds.c"
{
#line 3712 "erl_backend.elds.c"
  {
#line 3714 "erl_backend.elds.c"
    MR_bool erl_backend__elds__succeeded;

#line 3717 "erl_backend.elds.c"
    {
#line 3719 "erl_backend.elds.c"
      erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_expr_0_0(((MR_Word) erl_backend__elds__wrapper_arg_1), ((MR_Word) erl_backend__elds__wrapper_arg_2));
    }
#line 3722 "erl_backend.elds.c"
    return erl_backend__elds__succeeded;
#line 3724 "erl_backend.elds.c"
  }
#line 3726 "erl_backend.elds.c"
}

#line 3729 "erl_backend.elds.c"
static void MR_CALL 
erl_backend__elds____Compare____elds_expr_0_0_10001(
#line 3732 "erl_backend.elds.c"
  MR_Box * erl_backend__elds__wrapper_arg_1,
#line 3734 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2,
#line 3736 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_3)
#line 3738 "erl_backend.elds.c"
{
#line 3740 "erl_backend.elds.c"
  {
#line 3742 "erl_backend.elds.c"
    MR_Word erl_backend__elds__conv0_HeadVar__1_1;

#line 3745 "erl_backend.elds.c"
    {
#line 3747 "erl_backend.elds.c"
      erl_backend__elds____Compare____elds_expr_0_0(&erl_backend__elds__conv0_HeadVar__1_1, ((MR_Word) erl_backend__elds__wrapper_arg_2), ((MR_Word) erl_backend__elds__wrapper_arg_3));
    }
#line 3750 "erl_backend.elds.c"
    *erl_backend__elds__wrapper_arg_1 = ((MR_Box) (erl_backend__elds__conv0_HeadVar__1_1));
#line 3752 "erl_backend.elds.c"
  }
#line 3754 "erl_backend.elds.c"
}

#line 3757 "erl_backend.elds.c"
static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_foreign_export_defn_0_0_10001(
#line 3760 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_1,
#line 3762 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2)
#line 3764 "erl_backend.elds.c"
{
#line 3766 "erl_backend.elds.c"
  {
#line 3768 "erl_backend.elds.c"
    MR_bool erl_backend__elds__succeeded;

#line 3771 "erl_backend.elds.c"
    {
#line 3773 "erl_backend.elds.c"
      erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_foreign_export_defn_0_0(((MR_Word) erl_backend__elds__wrapper_arg_1), ((MR_Word) erl_backend__elds__wrapper_arg_2));
    }
#line 3776 "erl_backend.elds.c"
    return erl_backend__elds__succeeded;
#line 3778 "erl_backend.elds.c"
  }
#line 3780 "erl_backend.elds.c"
}

#line 3783 "erl_backend.elds.c"
static void MR_CALL 
erl_backend__elds____Compare____elds_foreign_export_defn_0_0_10001(
#line 3786 "erl_backend.elds.c"
  MR_Box * erl_backend__elds__wrapper_arg_1,
#line 3788 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2,
#line 3790 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_3)
#line 3792 "erl_backend.elds.c"
{
#line 3794 "erl_backend.elds.c"
  {
#line 3796 "erl_backend.elds.c"
    MR_Word erl_backend__elds__conv0_HeadVar__1_1;

#line 3799 "erl_backend.elds.c"
    {
#line 3801 "erl_backend.elds.c"
      erl_backend__elds____Compare____elds_foreign_export_defn_0_0(&erl_backend__elds__conv0_HeadVar__1_1, ((MR_Word) erl_backend__elds__wrapper_arg_2), ((MR_Word) erl_backend__elds__wrapper_arg_3));
    }
#line 3804 "erl_backend.elds.c"
    *erl_backend__elds__wrapper_arg_1 = ((MR_Box) (erl_backend__elds__conv0_HeadVar__1_1));
#line 3806 "erl_backend.elds.c"
  }
#line 3808 "erl_backend.elds.c"
}

#line 3811 "erl_backend.elds.c"
static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_rtti_defn_0_0_10001(
#line 3814 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_1,
#line 3816 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2)
#line 3818 "erl_backend.elds.c"
{
#line 3820 "erl_backend.elds.c"
  {
#line 3822 "erl_backend.elds.c"
    MR_bool erl_backend__elds__succeeded;

#line 3825 "erl_backend.elds.c"
    {
#line 3827 "erl_backend.elds.c"
      erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_rtti_defn_0_0(((MR_Word) erl_backend__elds__wrapper_arg_1), ((MR_Word) erl_backend__elds__wrapper_arg_2));
    }
#line 3830 "erl_backend.elds.c"
    return erl_backend__elds__succeeded;
#line 3832 "erl_backend.elds.c"
  }
#line 3834 "erl_backend.elds.c"
}

#line 3837 "erl_backend.elds.c"
static void MR_CALL 
erl_backend__elds____Compare____elds_rtti_defn_0_0_10001(
#line 3840 "erl_backend.elds.c"
  MR_Box * erl_backend__elds__wrapper_arg_1,
#line 3842 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2,
#line 3844 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_3)
#line 3846 "erl_backend.elds.c"
{
#line 3848 "erl_backend.elds.c"
  {
#line 3850 "erl_backend.elds.c"
    MR_Word erl_backend__elds__conv0_HeadVar__1_1;

#line 3853 "erl_backend.elds.c"
    {
#line 3855 "erl_backend.elds.c"
      erl_backend__elds____Compare____elds_rtti_defn_0_0(&erl_backend__elds__conv0_HeadVar__1_1, ((MR_Word) erl_backend__elds__wrapper_arg_2), ((MR_Word) erl_backend__elds__wrapper_arg_3));
    }
#line 3858 "erl_backend.elds.c"
    *erl_backend__elds__wrapper_arg_1 = ((MR_Box) (erl_backend__elds__conv0_HeadVar__1_1));
#line 3860 "erl_backend.elds.c"
  }
#line 3862 "erl_backend.elds.c"
}

#line 3865 "erl_backend.elds.c"
static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_rtti_id_0_0_10001(
#line 3868 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_1,
#line 3870 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2)
#line 3872 "erl_backend.elds.c"
{
#line 3874 "erl_backend.elds.c"
  {
#line 3876 "erl_backend.elds.c"
    MR_bool erl_backend__elds__succeeded;

#line 3879 "erl_backend.elds.c"
    {
#line 3881 "erl_backend.elds.c"
      erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_rtti_id_0_0(((MR_Word) erl_backend__elds__wrapper_arg_1), ((MR_Word) erl_backend__elds__wrapper_arg_2));
    }
#line 3884 "erl_backend.elds.c"
    return erl_backend__elds__succeeded;
#line 3886 "erl_backend.elds.c"
  }
#line 3888 "erl_backend.elds.c"
}

#line 3891 "erl_backend.elds.c"
static void MR_CALL 
erl_backend__elds____Compare____elds_rtti_id_0_0_10001(
#line 3894 "erl_backend.elds.c"
  MR_Box * erl_backend__elds__wrapper_arg_1,
#line 3896 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2,
#line 3898 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_3)
#line 3900 "erl_backend.elds.c"
{
#line 3902 "erl_backend.elds.c"
  {
#line 3904 "erl_backend.elds.c"
    MR_Word erl_backend__elds__conv0_HeadVar__1_1;

#line 3907 "erl_backend.elds.c"
    {
#line 3909 "erl_backend.elds.c"
      erl_backend__elds____Compare____elds_rtti_id_0_0(&erl_backend__elds__conv0_HeadVar__1_1, ((MR_Word) erl_backend__elds__wrapper_arg_2), ((MR_Word) erl_backend__elds__wrapper_arg_3));
    }
#line 3912 "erl_backend.elds.c"
    *erl_backend__elds__wrapper_arg_1 = ((MR_Box) (erl_backend__elds__conv0_HeadVar__1_1));
#line 3914 "erl_backend.elds.c"
  }
#line 3916 "erl_backend.elds.c"
}

#line 3919 "erl_backend.elds.c"
static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_term_0_0_10001(
#line 3922 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_1,
#line 3924 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2)
#line 3926 "erl_backend.elds.c"
{
#line 3928 "erl_backend.elds.c"
  {
#line 3930 "erl_backend.elds.c"
    MR_bool erl_backend__elds__succeeded;

#line 3933 "erl_backend.elds.c"
    {
#line 3935 "erl_backend.elds.c"
      erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_term_0_0(((MR_Word) erl_backend__elds__wrapper_arg_1), ((MR_Word) erl_backend__elds__wrapper_arg_2));
    }
#line 3938 "erl_backend.elds.c"
    return erl_backend__elds__succeeded;
#line 3940 "erl_backend.elds.c"
  }
#line 3942 "erl_backend.elds.c"
}

#line 3945 "erl_backend.elds.c"
static void MR_CALL 
erl_backend__elds____Compare____elds_term_0_0_10001(
#line 3948 "erl_backend.elds.c"
  MR_Box * erl_backend__elds__wrapper_arg_1,
#line 3950 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2,
#line 3952 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_3)
#line 3954 "erl_backend.elds.c"
{
#line 3956 "erl_backend.elds.c"
  {
#line 3958 "erl_backend.elds.c"
    MR_Word erl_backend__elds__conv0_HeadVar__1_1;

#line 3961 "erl_backend.elds.c"
    {
#line 3963 "erl_backend.elds.c"
      erl_backend__elds____Compare____elds_term_0_0(&erl_backend__elds__conv0_HeadVar__1_1, ((MR_Word) erl_backend__elds__wrapper_arg_2), ((MR_Word) erl_backend__elds__wrapper_arg_3));
    }
#line 3966 "erl_backend.elds.c"
    *erl_backend__elds__wrapper_arg_1 = ((MR_Box) (erl_backend__elds__conv0_HeadVar__1_1));
#line 3968 "erl_backend.elds.c"
  }
#line 3970 "erl_backend.elds.c"
}

#line 3973 "erl_backend.elds.c"
static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_unop_0_0_10001(
#line 3976 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_1,
#line 3978 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2)
#line 3980 "erl_backend.elds.c"
{
#line 3982 "erl_backend.elds.c"
  {
#line 3984 "erl_backend.elds.c"
    MR_bool erl_backend__elds__succeeded;

#line 3987 "erl_backend.elds.c"
    {
#line 3989 "erl_backend.elds.c"
      erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_unop_0_0(((MR_Word) erl_backend__elds__wrapper_arg_1), ((MR_Word) erl_backend__elds__wrapper_arg_2));
    }
#line 3992 "erl_backend.elds.c"
    return erl_backend__elds__succeeded;
#line 3994 "erl_backend.elds.c"
  }
#line 3996 "erl_backend.elds.c"
}

#line 3999 "erl_backend.elds.c"
static void MR_CALL 
erl_backend__elds____Compare____elds_unop_0_0_10001(
#line 4002 "erl_backend.elds.c"
  MR_Box * erl_backend__elds__wrapper_arg_1,
#line 4004 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2,
#line 4006 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_3)
#line 4008 "erl_backend.elds.c"
{
#line 4010 "erl_backend.elds.c"
  {
#line 4012 "erl_backend.elds.c"
    MR_Word erl_backend__elds__conv0_HeadVar__1_1;

#line 4015 "erl_backend.elds.c"
    {
#line 4017 "erl_backend.elds.c"
      erl_backend__elds____Compare____elds_unop_0_0(&erl_backend__elds__conv0_HeadVar__1_1, ((MR_Word) erl_backend__elds__wrapper_arg_2), ((MR_Word) erl_backend__elds__wrapper_arg_3));
    }
#line 4020 "erl_backend.elds.c"
    *erl_backend__elds__wrapper_arg_1 = ((MR_Box) (erl_backend__elds__conv0_HeadVar__1_1));
#line 4022 "erl_backend.elds.c"
  }
#line 4024 "erl_backend.elds.c"
}

#line 420 "elds.m"
static MR_Word MR_CALL 
erl_backend__elds__IntroducedFrom__func__exprs_from_fixed_vars__420__1_1_f_0(
#line 420 "elds.m"
  MR_String erl_backend__elds__HeadVar__1_6)
#line 420 "elds.m"
{
#line 420 "elds.m"
  {
#line 420 "elds.m"
    MR_bool erl_backend__elds__succeeded;
#line 420 "elds.m"
    MR_Word erl_backend__elds__HeadVar__2_7;
#line 420 "elds.m"
    MR_Word erl_backend__elds__V_8_8;

#line 420 "elds.m"
    {
#line 420 "elds.m"
      erl_backend__elds__V_8_8 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 420 "elds.m"
      MR_hl_field(MR_mktag(3), erl_backend__elds__V_8_8, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 420 "elds.m"
      MR_hl_field(MR_mktag(3), erl_backend__elds__V_8_8, 1) = ((MR_Box) (erl_backend__elds__HeadVar__1_6));
#line 420 "elds.m"
    }
#line 420 "elds.m"
    {
#line 420 "elds.m"
      erl_backend__elds__HeadVar__2_7 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 420 "elds.m"
      MR_hl_field(MR_mktag(2), erl_backend__elds__HeadVar__2_7, 0) = ((MR_Box) (erl_backend__elds__V_8_8));
#line 420 "elds.m"
    }
#line 420 "elds.m"
    return erl_backend__elds__HeadVar__2_7;
#line 420 "elds.m"
  }
#line 420 "elds.m"
}

#line 418 "elds.m"
static MR_Word MR_CALL 
erl_backend__elds__IntroducedFrom__func__terms_from_fixed_vars__418__1_1_f_0(
#line 418 "elds.m"
  MR_String erl_backend__elds__HeadVar__1_6)
#line 418 "elds.m"
{
#line 418 "elds.m"
  {
#line 418 "elds.m"
    MR_bool erl_backend__elds__succeeded;
#line 418 "elds.m"
    MR_Word erl_backend__elds__HeadVar__2_7;

#line 418 "elds.m"
    {
#line 418 "elds.m"
      erl_backend__elds__HeadVar__2_7 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 418 "elds.m"
      MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_7, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 418 "elds.m"
      MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_7, 1) = ((MR_Box) (erl_backend__elds__HeadVar__1_6));
#line 418 "elds.m"
    }
#line 418 "elds.m"
    return erl_backend__elds__HeadVar__2_7;
#line 418 "elds.m"
  }
#line 418 "elds.m"
}

#line 261 "elds.m"
void MR_CALL 
erl_backend__elds____Compare____elds_unop_0_0(
#line 261 "elds.m"
  MR_Word * erl_backend__elds__HeadVar__1_1,
#line 261 "elds.m"
  MR_Word erl_backend__elds__HeadVar__2_2,
#line 261 "elds.m"
  MR_Word erl_backend__elds__HeadVar__3_3)
#line 261 "elds.m"
{
#line 261 "elds.m"
  {
#line 261 "elds.m"
    MR_bool erl_backend__elds__succeeded;
#line 261 "elds.m"
    MR_Integer erl_backend__elds__Cast_HeadVar1_4 = (MR_Integer) erl_backend__elds__HeadVar__2_2;
#line 261 "elds.m"
    MR_Integer erl_backend__elds__Cast_HeadVar2_5 = (MR_Integer) erl_backend__elds__HeadVar__3_3;

#line 261 "elds.m"
    {
#line 261 "elds.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(erl_backend__elds__HeadVar__1_1, erl_backend__elds__Cast_HeadVar1_4, erl_backend__elds__Cast_HeadVar2_5);
#line 261 "elds.m"
      return;
    }
#line 261 "elds.m"
  }
#line 261 "elds.m"
}

#line 261 "elds.m"
MR_bool MR_CALL 
erl_backend__elds____Unify____elds_unop_0_0(
#line 261 "elds.m"
  MR_Word erl_backend__elds__HeadVar__2_1,
#line 261 "elds.m"
  MR_Word erl_backend__elds__HeadVar__2_2)
#line 261 "elds.m"
{
#line 4140 "erl_backend.elds.c"
  {
#line 4142 "erl_backend.elds.c"
    MR_bool erl_backend__elds__succeeded = (erl_backend__elds__HeadVar__2_1 == erl_backend__elds__HeadVar__2_2);

#line 4145 "erl_backend.elds.c"
    return erl_backend__elds__succeeded;
#line 4147 "erl_backend.elds.c"
  }
#line 261 "elds.m"
}

#line 211 "elds.m"
void MR_CALL 
erl_backend__elds____Compare____elds_term_0_0(
#line 211 "elds.m"
  MR_Word * erl_backend__elds__HeadVar__1_1,
#line 211 "elds.m"
  MR_Word erl_backend__elds__HeadVar__2_2,
#line 211 "elds.m"
  MR_Word erl_backend__elds__HeadVar__3_3)
#line 211 "elds.m"
{
#line 211 "elds.m"
  {
#line 211 "elds.m"
    MR_bool erl_backend__elds__succeeded;
#line 211 "elds.m"
    MR_Integer erl_backend__elds__CastX_224 = (MR_Integer) erl_backend__elds__HeadVar__2_2;
#line 211 "elds.m"
    MR_Integer erl_backend__elds__CastY_225 = (MR_Integer) erl_backend__elds__HeadVar__3_3;

#line 211 "elds.m"
    erl_backend__elds__succeeded = (erl_backend__elds__CastX_224 == erl_backend__elds__CastY_225);
#line 211 "elds.m"
    if (erl_backend__elds__succeeded)
#line 4176 "erl_backend.elds.c"
      *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 0;
#line 211 "elds.m"
    else
#line 211 "elds.m"
      if ((erl_backend__elds__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 211 "elds.m"
        if ((erl_backend__elds__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 211 "elds.m"
          *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 0;
#line 211 "elds.m"
        else
#line 211 "elds.m"
          if (((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 4190 "erl_backend.elds.c"
            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
          else
#line 211 "elds.m"
            if (((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 4196 "erl_backend.elds.c"
              *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
            else
#line 211 "elds.m"
              if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 4202 "erl_backend.elds.c"
                *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
              else
#line 211 "elds.m"
                if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 4208 "erl_backend.elds.c"
                  *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                else
#line 211 "elds.m"
                  if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 4214 "erl_backend.elds.c"
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                  else
#line 211 "elds.m"
                    if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 4220 "erl_backend.elds.c"
                      *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                    else
#line 211 "elds.m"
                      if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 4226 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                      else
#line 211 "elds.m"
                        if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 4232 "erl_backend.elds.c"
                          *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                        else
#line 211 "elds.m"
                          if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 4238 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                          else
#line 4242 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
      else
#line 211 "elds.m"
        if (((MR_tag((MR_Word) erl_backend__elds__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 211 "elds.m"
          {
#line 211 "elds.m"
            MR_Char erl_backend__elds__V_239_239 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)));

#line 211 "elds.m"
            if ((erl_backend__elds__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4255 "erl_backend.elds.c"
              *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
            else
#line 211 "elds.m"
              if (((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 211 "elds.m"
                {
#line 211 "elds.m"
                  MR_Char erl_backend__elds__V_5_5 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)));

#line 211 "elds.m"
                  {
#line 211 "elds.m"
                    mercury__private_builtin__builtin_compare_character_3_p_0(erl_backend__elds__HeadVar__1_1, erl_backend__elds__V_239_239, erl_backend__elds__V_5_5);
#line 211 "elds.m"
                    return;
                  }
#line 211 "elds.m"
                }
#line 211 "elds.m"
              else
#line 211 "elds.m"
                if (((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 4279 "erl_backend.elds.c"
                  *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                else
#line 211 "elds.m"
                  if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 4285 "erl_backend.elds.c"
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                  else
#line 211 "elds.m"
                    if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 4291 "erl_backend.elds.c"
                      *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                    else
#line 211 "elds.m"
                      if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 4297 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                      else
#line 211 "elds.m"
                        if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 4303 "erl_backend.elds.c"
                          *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                        else
#line 211 "elds.m"
                          if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 4309 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                          else
#line 211 "elds.m"
                            if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 4315 "erl_backend.elds.c"
                              *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                            else
#line 211 "elds.m"
                              if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 4321 "erl_backend.elds.c"
                                *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                              else
#line 4325 "erl_backend.elds.c"
                                *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
          }
#line 211 "elds.m"
        else
#line 211 "elds.m"
          if (((MR_tag((MR_Word) erl_backend__elds__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 211 "elds.m"
            {
#line 211 "elds.m"
              MR_Integer erl_backend__elds__V_242_242 = ((MR_Integer) (MR_hl_field(MR_mktag(2), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)));

#line 211 "elds.m"
              if ((erl_backend__elds__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4340 "erl_backend.elds.c"
                *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
              else
#line 211 "elds.m"
                if (((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 4346 "erl_backend.elds.c"
                  *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                else
#line 211 "elds.m"
                  if (((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 211 "elds.m"
                    {
#line 211 "elds.m"
                      MR_Integer erl_backend__elds__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(2), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)));

#line 211 "elds.m"
                      {
#line 211 "elds.m"
                        mercury__private_builtin__builtin_compare_int_3_p_0(erl_backend__elds__HeadVar__1_1, erl_backend__elds__V_242_242, erl_backend__elds__V_28_28);
#line 211 "elds.m"
                        return;
                      }
#line 211 "elds.m"
                    }
#line 211 "elds.m"
                  else
#line 211 "elds.m"
                    if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 4370 "erl_backend.elds.c"
                      *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                    else
#line 211 "elds.m"
                      if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 4376 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                      else
#line 211 "elds.m"
                        if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 4382 "erl_backend.elds.c"
                          *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                        else
#line 211 "elds.m"
                          if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 4388 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                          else
#line 211 "elds.m"
                            if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 4394 "erl_backend.elds.c"
                              *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                            else
#line 211 "elds.m"
                              if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 4400 "erl_backend.elds.c"
                                *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                              else
#line 211 "elds.m"
                                if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 4406 "erl_backend.elds.c"
                                  *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                                else
#line 4410 "erl_backend.elds.c"
                                  *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
            }
#line 211 "elds.m"
          else
#line 211 "elds.m"
            if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 211 "elds.m"
              {
#line 211 "elds.m"
                MR_Word erl_backend__elds__V_236_236 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 1)));

#line 211 "elds.m"
                if ((erl_backend__elds__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4425 "erl_backend.elds.c"
                  *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                else
#line 211 "elds.m"
                  if (((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 4431 "erl_backend.elds.c"
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                  else
#line 211 "elds.m"
                    if (((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 4437 "erl_backend.elds.c"
                      *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                    else
#line 211 "elds.m"
                      if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 211 "elds.m"
                        {
#line 211 "elds.m"
                          MR_Word erl_backend__elds__V_143_143 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 1)));

#line 211 "elds.m"
                          {
#line 211 "elds.m"
                            mdbcomp__prim_data____Compare____sym_name_0_0(erl_backend__elds__HeadVar__1_1, erl_backend__elds__V_236_236, erl_backend__elds__V_143_143);
#line 211 "elds.m"
                            return;
                          }
#line 211 "elds.m"
                        }
#line 211 "elds.m"
                      else
#line 211 "elds.m"
                        if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 4461 "erl_backend.elds.c"
                          *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                        else
#line 211 "elds.m"
                          if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 4467 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                          else
#line 211 "elds.m"
                            if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 4473 "erl_backend.elds.c"
                              *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                            else
#line 211 "elds.m"
                              if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 4479 "erl_backend.elds.c"
                                *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                              else
#line 211 "elds.m"
                                if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 4485 "erl_backend.elds.c"
                                  *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                                else
#line 211 "elds.m"
                                  if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 4491 "erl_backend.elds.c"
                                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                                  else
#line 4495 "erl_backend.elds.c"
                                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
              }
#line 211 "elds.m"
            else
#line 211 "elds.m"
              if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 211 "elds.m"
                {
#line 211 "elds.m"
                  MR_String erl_backend__elds__V_237_237 = ((MR_String) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 1)));

#line 211 "elds.m"
                  if ((erl_backend__elds__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4510 "erl_backend.elds.c"
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                  else
#line 211 "elds.m"
                    if (((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 4516 "erl_backend.elds.c"
                      *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                    else
#line 211 "elds.m"
                      if (((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 4522 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                      else
#line 211 "elds.m"
                        if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 4528 "erl_backend.elds.c"
                          *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                        else
#line 211 "elds.m"
                          if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 211 "elds.m"
                            {
#line 211 "elds.m"
                              MR_String erl_backend__elds__V_120_120 = ((MR_String) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 1)));

#line 211 "elds.m"
                              {
#line 211 "elds.m"
                                mercury__private_builtin__builtin_compare_string_3_p_0(erl_backend__elds__HeadVar__1_1, erl_backend__elds__V_237_237, erl_backend__elds__V_120_120);
#line 211 "elds.m"
                                return;
                              }
#line 211 "elds.m"
                            }
#line 211 "elds.m"
                          else
#line 211 "elds.m"
                            if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 4552 "erl_backend.elds.c"
                              *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                            else
#line 211 "elds.m"
                              if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 4558 "erl_backend.elds.c"
                                *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                              else
#line 211 "elds.m"
                                if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 4564 "erl_backend.elds.c"
                                  *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                                else
#line 211 "elds.m"
                                  if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 4570 "erl_backend.elds.c"
                                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                                  else
#line 211 "elds.m"
                                    if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 4576 "erl_backend.elds.c"
                                      *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                                    else
#line 4580 "erl_backend.elds.c"
                                      *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                }
#line 211 "elds.m"
              else
#line 211 "elds.m"
                if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 211 "elds.m"
                  {
#line 211 "elds.m"
                    MR_String erl_backend__elds__V_238_238 = ((MR_String) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 1)));

#line 211 "elds.m"
                    if ((erl_backend__elds__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4595 "erl_backend.elds.c"
                      *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                    else
#line 211 "elds.m"
                      if (((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 4601 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                      else
#line 211 "elds.m"
                        if (((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 4607 "erl_backend.elds.c"
                          *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                        else
#line 211 "elds.m"
                          if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 4613 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                          else
#line 211 "elds.m"
                            if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 4619 "erl_backend.elds.c"
                              *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                            else
#line 211 "elds.m"
                              if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 211 "elds.m"
                                {
#line 211 "elds.m"
                                  MR_String erl_backend__elds__V_74_74 = ((MR_String) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 1)));

#line 211 "elds.m"
                                  {
#line 211 "elds.m"
                                    mercury__private_builtin__builtin_compare_string_3_p_0(erl_backend__elds__HeadVar__1_1, erl_backend__elds__V_238_238, erl_backend__elds__V_74_74);
#line 211 "elds.m"
                                    return;
                                  }
#line 211 "elds.m"
                                }
#line 211 "elds.m"
                              else
#line 211 "elds.m"
                                if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 4643 "erl_backend.elds.c"
                                  *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                                else
#line 211 "elds.m"
                                  if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 4649 "erl_backend.elds.c"
                                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                                  else
#line 211 "elds.m"
                                    if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 4655 "erl_backend.elds.c"
                                      *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                                    else
#line 211 "elds.m"
                                      if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 4661 "erl_backend.elds.c"
                                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                                      else
#line 4665 "erl_backend.elds.c"
                                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                  }
#line 211 "elds.m"
                else
#line 211 "elds.m"
                  if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 211 "elds.m"
                    {
#line 211 "elds.m"
                      MR_String erl_backend__elds__V_240_240 = ((MR_String) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 1)));

#line 211 "elds.m"
                      if ((erl_backend__elds__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4680 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                      else
#line 211 "elds.m"
                        if (((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 4686 "erl_backend.elds.c"
                          *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                        else
#line 211 "elds.m"
                          if (((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 4692 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                          else
#line 211 "elds.m"
                            if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 4698 "erl_backend.elds.c"
                              *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                            else
#line 211 "elds.m"
                              if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 4704 "erl_backend.elds.c"
                                *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                              else
#line 211 "elds.m"
                                if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 4710 "erl_backend.elds.c"
                                  *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                                else
#line 211 "elds.m"
                                  if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 211 "elds.m"
                                    {
#line 211 "elds.m"
                                      MR_String erl_backend__elds__V_223_223 = ((MR_String) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 1)));

#line 211 "elds.m"
                                      {
#line 211 "elds.m"
                                        mercury__private_builtin__builtin_compare_string_3_p_0(erl_backend__elds__HeadVar__1_1, erl_backend__elds__V_240_240, erl_backend__elds__V_223_223);
#line 211 "elds.m"
                                        return;
                                      }
#line 211 "elds.m"
                                    }
#line 211 "elds.m"
                                  else
#line 211 "elds.m"
                                    if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 4734 "erl_backend.elds.c"
                                      *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                                    else
#line 211 "elds.m"
                                      if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 4740 "erl_backend.elds.c"
                                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                                      else
#line 211 "elds.m"
                                        if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 4746 "erl_backend.elds.c"
                                          *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                                        else
#line 4750 "erl_backend.elds.c"
                                          *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                    }
#line 211 "elds.m"
                  else
#line 211 "elds.m"
                    if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 211 "elds.m"
                      {
#line 211 "elds.m"
                        MR_Float erl_backend__elds__V_241_241 = MR_unbox_float((MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 1)));

#line 211 "elds.m"
                        if ((erl_backend__elds__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4765 "erl_backend.elds.c"
                          *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                        else
#line 211 "elds.m"
                          if (((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 4771 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                          else
#line 211 "elds.m"
                            if (((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 4777 "erl_backend.elds.c"
                              *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                            else
#line 211 "elds.m"
                              if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 4783 "erl_backend.elds.c"
                                *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                              else
#line 211 "elds.m"
                                if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 4789 "erl_backend.elds.c"
                                  *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                                else
#line 211 "elds.m"
                                  if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 4795 "erl_backend.elds.c"
                                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                                  else
#line 211 "elds.m"
                                    if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 4801 "erl_backend.elds.c"
                                      *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                                    else
#line 211 "elds.m"
                                      if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 211 "elds.m"
                                        {
#line 211 "elds.m"
                                          MR_Float erl_backend__elds__V_51_51 = MR_unbox_float((MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 1)));

#line 211 "elds.m"
                                          {
#line 211 "elds.m"
                                            mercury__private_builtin__builtin_compare_float_3_p_0(erl_backend__elds__HeadVar__1_1, erl_backend__elds__V_241_241, erl_backend__elds__V_51_51);
#line 211 "elds.m"
                                            return;
                                          }
#line 211 "elds.m"
                                        }
#line 211 "elds.m"
                                      else
#line 211 "elds.m"
                                        if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 4825 "erl_backend.elds.c"
                                          *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                                        else
#line 211 "elds.m"
                                          if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 4831 "erl_backend.elds.c"
                                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                                          else
#line 4835 "erl_backend.elds.c"
                                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                      }
#line 211 "elds.m"
                    else
#line 211 "elds.m"
                      if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 211 "elds.m"
                        {
#line 211 "elds.m"
                          MR_String erl_backend__elds__V_243_243 = ((MR_String) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 1)));

#line 211 "elds.m"
                          if ((erl_backend__elds__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4850 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                          else
#line 211 "elds.m"
                            if (((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 4856 "erl_backend.elds.c"
                              *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                            else
#line 211 "elds.m"
                              if (((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 4862 "erl_backend.elds.c"
                                *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                              else
#line 211 "elds.m"
                                if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 4868 "erl_backend.elds.c"
                                  *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                                else
#line 211 "elds.m"
                                  if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 4874 "erl_backend.elds.c"
                                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                                  else
#line 211 "elds.m"
                                    if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 4880 "erl_backend.elds.c"
                                      *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                                    else
#line 211 "elds.m"
                                      if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 4886 "erl_backend.elds.c"
                                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                                      else
#line 211 "elds.m"
                                        if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 4892 "erl_backend.elds.c"
                                          *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                                        else
#line 211 "elds.m"
                                          if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 211 "elds.m"
                                            {
#line 211 "elds.m"
                                              MR_String erl_backend__elds__V_97_97 = ((MR_String) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 1)));

#line 211 "elds.m"
                                              {
#line 211 "elds.m"
                                                mercury__private_builtin__builtin_compare_string_3_p_0(erl_backend__elds__HeadVar__1_1, erl_backend__elds__V_243_243, erl_backend__elds__V_97_97);
#line 211 "elds.m"
                                                return;
                                              }
#line 211 "elds.m"
                                            }
#line 211 "elds.m"
                                          else
#line 211 "elds.m"
                                            if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 4916 "erl_backend.elds.c"
                                              *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                                            else
#line 4920 "erl_backend.elds.c"
                                              *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                        }
#line 211 "elds.m"
                      else
#line 211 "elds.m"
                        if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 211 "elds.m"
                          {
#line 211 "elds.m"
                            MR_Word erl_backend__elds__V_244_244 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 1)));

#line 211 "elds.m"
                            if ((erl_backend__elds__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4935 "erl_backend.elds.c"
                              *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                            else
#line 211 "elds.m"
                              if (((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 4941 "erl_backend.elds.c"
                                *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                              else
#line 211 "elds.m"
                                if (((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 4947 "erl_backend.elds.c"
                                  *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                                else
#line 211 "elds.m"
                                  if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 4953 "erl_backend.elds.c"
                                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                                  else
#line 211 "elds.m"
                                    if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 4959 "erl_backend.elds.c"
                                      *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                                    else
#line 211 "elds.m"
                                      if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 4965 "erl_backend.elds.c"
                                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                                      else
#line 211 "elds.m"
                                        if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 4971 "erl_backend.elds.c"
                                          *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                                        else
#line 211 "elds.m"
                                          if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 4977 "erl_backend.elds.c"
                                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                                          else
#line 211 "elds.m"
                                            if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 4983 "erl_backend.elds.c"
                                              *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                                            else
#line 211 "elds.m"
                                              if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 211 "elds.m"
                                                {
#line 211 "elds.m"
                                                  MR_Word erl_backend__elds__V_166_166 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 1)));

#line 211 "elds.m"
                                                  {
#line 211 "elds.m"
                                                    mercury__builtin__compare_3_p_0((MR_Word) &erl_backend__elds_scalar_common_1[14], erl_backend__elds__HeadVar__1_1, ((MR_Box) (erl_backend__elds__V_244_244)), ((MR_Box) (erl_backend__elds__V_166_166)));
#line 211 "elds.m"
                                                    return;
                                                  }
#line 211 "elds.m"
                                                }
#line 211 "elds.m"
                                              else
#line 5005 "erl_backend.elds.c"
                                                *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                          }
#line 211 "elds.m"
                        else
#line 211 "elds.m"
                          {
#line 211 "elds.m"
                            MR_Word erl_backend__elds__V_245_245 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 1)));

#line 211 "elds.m"
                            if ((erl_backend__elds__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 5018 "erl_backend.elds.c"
                              *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                            else
#line 211 "elds.m"
                              if (((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 5024 "erl_backend.elds.c"
                                *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                              else
#line 211 "elds.m"
                                if (((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 5030 "erl_backend.elds.c"
                                  *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                                else
#line 211 "elds.m"
                                  if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 5036 "erl_backend.elds.c"
                                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                                  else
#line 211 "elds.m"
                                    if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 5042 "erl_backend.elds.c"
                                      *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                                    else
#line 211 "elds.m"
                                      if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 5048 "erl_backend.elds.c"
                                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                                      else
#line 211 "elds.m"
                                        if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 5054 "erl_backend.elds.c"
                                          *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                                        else
#line 211 "elds.m"
                                          if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 5060 "erl_backend.elds.c"
                                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                                          else
#line 211 "elds.m"
                                            if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 5066 "erl_backend.elds.c"
                                              *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                                            else
#line 211 "elds.m"
                                              if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 5072 "erl_backend.elds.c"
                                                *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                                              else
#line 211 "elds.m"
                                                {
#line 211 "elds.m"
                                                  MR_Word erl_backend__elds__V_189_189 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 1)));

#line 211 "elds.m"
                                                  {
#line 211 "elds.m"
                                                    mercury__builtin__compare_3_p_0((MR_Word) &erl_backend__elds_scalar_common_1[0], erl_backend__elds__HeadVar__1_1, ((MR_Box) (erl_backend__elds__V_245_245)), ((MR_Box) (erl_backend__elds__V_189_189)));
#line 211 "elds.m"
                                                    return;
                                                  }
#line 211 "elds.m"
                                                }
#line 211 "elds.m"
                          }
#line 211 "elds.m"
  }
#line 211 "elds.m"
}

#line 211 "elds.m"
MR_bool MR_CALL 
erl_backend__elds____Unify____elds_term_0_0(
#line 211 "elds.m"
  MR_Word erl_backend__elds__HeadVar__1_1,
#line 211 "elds.m"
  MR_Word erl_backend__elds__HeadVar__2_2)
#line 211 "elds.m"
{
#line 211 "elds.m"
  {
#line 211 "elds.m"
    MR_bool erl_backend__elds__succeeded;
#line 211 "elds.m"
    MR_Integer erl_backend__elds__CastX_25 = (MR_Integer) erl_backend__elds__HeadVar__1_1;
#line 211 "elds.m"
    MR_Integer erl_backend__elds__CastY_26 = (MR_Integer) erl_backend__elds__HeadVar__2_2;

#line 211 "elds.m"
    erl_backend__elds__succeeded = (erl_backend__elds__CastX_25 == erl_backend__elds__CastY_26);
#line 211 "elds.m"
    if (erl_backend__elds__succeeded)
#line 211 "elds.m"
      erl_backend__elds__succeeded = MR_TRUE;
#line 211 "elds.m"
    else
#line 211 "elds.m"
      if ((erl_backend__elds__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 211 "elds.m"
        {
#line 211 "elds.m"
          MR_Integer erl_backend__elds__CastX_21 = (MR_Integer) erl_backend__elds__HeadVar__1_1;
#line 211 "elds.m"
          MR_Integer erl_backend__elds__CastY_22 = (MR_Integer) erl_backend__elds__HeadVar__2_2;

#line 211 "elds.m"
          erl_backend__elds__succeeded = (erl_backend__elds__CastY_22 == erl_backend__elds__CastX_21);
#line 211 "elds.m"
        }
#line 211 "elds.m"
      else
#line 211 "elds.m"
        if (((MR_tag((MR_Word) erl_backend__elds__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 211 "elds.m"
          {
#line 211 "elds.m"
            MR_Char erl_backend__elds__V_3_3 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds__HeadVar__1_1, (MR_Integer) 0)));
#line 211 "elds.m"
            MR_Char erl_backend__elds__V_4_4;

#line 211 "elds.m"
            erl_backend__elds__succeeded = ((MR_tag((MR_Word) erl_backend__elds__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 211 "elds.m"
            if (erl_backend__elds__succeeded)
#line 211 "elds.m"
              {
#line 211 "elds.m"
                erl_backend__elds__V_4_4 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)));
#line 5155 "erl_backend.elds.c"
                erl_backend__elds__succeeded = (erl_backend__elds__V_3_3 == erl_backend__elds__V_4_4);
#line 211 "elds.m"
              }
#line 211 "elds.m"
          }
#line 211 "elds.m"
        else
#line 211 "elds.m"
          if (((MR_tag((MR_Word) erl_backend__elds__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 211 "elds.m"
            {
#line 211 "elds.m"
              MR_Integer erl_backend__elds__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(2), erl_backend__elds__HeadVar__1_1, (MR_Integer) 0)));
#line 211 "elds.m"
              MR_Integer erl_backend__elds__V_6_6;

#line 211 "elds.m"
              erl_backend__elds__succeeded = ((MR_tag((MR_Word) erl_backend__elds__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 211 "elds.m"
              if (erl_backend__elds__succeeded)
#line 211 "elds.m"
                {
#line 211 "elds.m"
                  erl_backend__elds__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(2), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)));
#line 5180 "erl_backend.elds.c"
                  erl_backend__elds__succeeded = (erl_backend__elds__V_5_5 == erl_backend__elds__V_6_6);
#line 211 "elds.m"
                }
#line 211 "elds.m"
            }
#line 211 "elds.m"
          else
#line 211 "elds.m"
            if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 211 "elds.m"
              {
#line 211 "elds.m"
                MR_Word erl_backend__elds__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__1_1, (MR_Integer) 1)));
#line 211 "elds.m"
                MR_Word erl_backend__elds__V_16_16;

#line 211 "elds.m"
                erl_backend__elds__succeeded = ((((MR_tag((MR_Word) erl_backend__elds__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 211 "elds.m"
                if (erl_backend__elds__succeeded)
#line 211 "elds.m"
                  {
#line 211 "elds.m"
                    erl_backend__elds__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 1)));
#line 5205 "erl_backend.elds.c"
                    {
#line 5207 "erl_backend.elds.c"
                      return erl_backend__elds__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(erl_backend__elds__V_15_15, erl_backend__elds__V_16_16);
                    }
#line 211 "elds.m"
                  }
#line 211 "elds.m"
              }
#line 211 "elds.m"
            else
#line 211 "elds.m"
              if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 211 "elds.m"
                {
#line 211 "elds.m"
                  MR_String erl_backend__elds__V_13_13 = ((MR_String) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__1_1, (MR_Integer) 1)));
#line 211 "elds.m"
                  MR_String erl_backend__elds__V_14_14;

#line 211 "elds.m"
                  erl_backend__elds__succeeded = ((((MR_tag((MR_Word) erl_backend__elds__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 211 "elds.m"
                  if (erl_backend__elds__succeeded)
#line 211 "elds.m"
                    {
#line 211 "elds.m"
                      erl_backend__elds__V_14_14 = ((MR_String) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 1)));
#line 5233 "erl_backend.elds.c"
                      erl_backend__elds__succeeded = (strcmp(erl_backend__elds__V_13_13, erl_backend__elds__V_14_14) == 0);
#line 211 "elds.m"
                    }
#line 211 "elds.m"
                }
#line 211 "elds.m"
              else
#line 211 "elds.m"
                if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 211 "elds.m"
                  {
#line 211 "elds.m"
                    MR_String erl_backend__elds__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__1_1, (MR_Integer) 1)));
#line 211 "elds.m"
                    MR_String erl_backend__elds__V_10_10;

#line 211 "elds.m"
                    erl_backend__elds__succeeded = ((((MR_tag((MR_Word) erl_backend__elds__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 211 "elds.m"
                    if (erl_backend__elds__succeeded)
#line 211 "elds.m"
                      {
#line 211 "elds.m"
                        erl_backend__elds__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 1)));
#line 5258 "erl_backend.elds.c"
                        erl_backend__elds__succeeded = (strcmp(erl_backend__elds__V_9_9, erl_backend__elds__V_10_10) == 0);
#line 211 "elds.m"
                      }
#line 211 "elds.m"
                  }
#line 211 "elds.m"
                else
#line 211 "elds.m"
                  if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 211 "elds.m"
                    {
#line 211 "elds.m"
                      MR_String erl_backend__elds__V_23_23 = ((MR_String) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__1_1, (MR_Integer) 1)));
#line 211 "elds.m"
                      MR_String erl_backend__elds__V_24_24;

#line 211 "elds.m"
                      erl_backend__elds__succeeded = ((((MR_tag((MR_Word) erl_backend__elds__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 7)));
#line 211 "elds.m"
                      if (erl_backend__elds__succeeded)
#line 211 "elds.m"
                        {
#line 211 "elds.m"
                          erl_backend__elds__V_24_24 = ((MR_String) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 1)));
#line 5283 "erl_backend.elds.c"
                          erl_backend__elds__succeeded = (strcmp(erl_backend__elds__V_23_23, erl_backend__elds__V_24_24) == 0);
#line 211 "elds.m"
                        }
#line 211 "elds.m"
                    }
#line 211 "elds.m"
                  else
#line 211 "elds.m"
                    if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 211 "elds.m"
                      {
#line 211 "elds.m"
                        MR_Float erl_backend__elds__V_7_7 = MR_unbox_float((MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__1_1, (MR_Integer) 1)));
#line 211 "elds.m"
                        MR_Float erl_backend__elds__V_8_8;

#line 211 "elds.m"
                        erl_backend__elds__succeeded = ((((MR_tag((MR_Word) erl_backend__elds__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 211 "elds.m"
                        if (erl_backend__elds__succeeded)
#line 211 "elds.m"
                          {
#line 211 "elds.m"
                            erl_backend__elds__V_8_8 = MR_unbox_float((MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 1)));
#line 5308 "erl_backend.elds.c"
                            erl_backend__elds__succeeded = (erl_backend__elds__V_7_7 == erl_backend__elds__V_8_8);
#line 211 "elds.m"
                          }
#line 211 "elds.m"
                      }
#line 211 "elds.m"
                    else
#line 211 "elds.m"
                      if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 211 "elds.m"
                        {
#line 211 "elds.m"
                          MR_String erl_backend__elds__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__1_1, (MR_Integer) 1)));
#line 211 "elds.m"
                          MR_String erl_backend__elds__V_12_12;

#line 211 "elds.m"
                          erl_backend__elds__succeeded = ((((MR_tag((MR_Word) erl_backend__elds__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 211 "elds.m"
                          if (erl_backend__elds__succeeded)
#line 211 "elds.m"
                            {
#line 211 "elds.m"
                              erl_backend__elds__V_12_12 = ((MR_String) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 1)));
#line 5333 "erl_backend.elds.c"
                              erl_backend__elds__succeeded = (strcmp(erl_backend__elds__V_11_11, erl_backend__elds__V_12_12) == 0);
#line 211 "elds.m"
                            }
#line 211 "elds.m"
                        }
#line 211 "elds.m"
                      else
#line 211 "elds.m"
                        if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 211 "elds.m"
                          {
#line 211 "elds.m"
                            MR_Word erl_backend__elds__TypeInfo_28_28;
#line 211 "elds.m"
                            MR_Word erl_backend__elds__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__1_1, (MR_Integer) 1)));
#line 211 "elds.m"
                            MR_Word erl_backend__elds__V_18_18;

#line 211 "elds.m"
                            erl_backend__elds__succeeded = ((((MR_tag((MR_Word) erl_backend__elds__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 211 "elds.m"
                            if (erl_backend__elds__succeeded)
#line 211 "elds.m"
                              {
#line 211 "elds.m"
                                erl_backend__elds__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 1)));
#line 5360 "erl_backend.elds.c"
                                erl_backend__elds__TypeInfo_28_28 = (MR_Word) &erl_backend__elds_scalar_common_1[14];
#line 5362 "erl_backend.elds.c"
                                {
#line 5364 "erl_backend.elds.c"
                                  return erl_backend__elds__succeeded = mercury__builtin__unify_2_p_0(erl_backend__elds__TypeInfo_28_28, ((MR_Box) (erl_backend__elds__V_17_17)), ((MR_Box) (erl_backend__elds__V_18_18)));
                                }
#line 211 "elds.m"
                              }
#line 211 "elds.m"
                          }
#line 211 "elds.m"
                        else
#line 211 "elds.m"
                          {
#line 211 "elds.m"
                            MR_Word erl_backend__elds__TypeInfo_29_29;
#line 211 "elds.m"
                            MR_Word erl_backend__elds__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__1_1, (MR_Integer) 1)));
#line 211 "elds.m"
                            MR_Word erl_backend__elds__V_20_20;

#line 211 "elds.m"
                            erl_backend__elds__succeeded = ((((MR_tag((MR_Word) erl_backend__elds__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 211 "elds.m"
                            if (erl_backend__elds__succeeded)
#line 211 "elds.m"
                              {
#line 211 "elds.m"
                                erl_backend__elds__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 1)));
#line 5390 "erl_backend.elds.c"
                                erl_backend__elds__TypeInfo_29_29 = (MR_Word) &erl_backend__elds_scalar_common_1[0];
#line 5392 "erl_backend.elds.c"
                                {
#line 5394 "erl_backend.elds.c"
                                  return erl_backend__elds__succeeded = mercury__builtin__unify_2_p_0(erl_backend__elds__TypeInfo_29_29, ((MR_Box) (erl_backend__elds__V_19_19)), ((MR_Box) (erl_backend__elds__V_20_20)));
                                }
#line 211 "elds.m"
                              }
#line 211 "elds.m"
                          }
#line 211 "elds.m"
    return erl_backend__elds__succeeded;
#line 211 "elds.m"
  }
#line 211 "elds.m"
}

#line 110 "elds.m"
void MR_CALL 
erl_backend__elds____Compare____elds_rtti_id_0_0(
#line 110 "elds.m"
  MR_Word * erl_backend__elds__HeadVar__1_1,
#line 110 "elds.m"
  MR_Word erl_backend__elds__HeadVar__2_2,
#line 110 "elds.m"
  MR_Word erl_backend__elds__HeadVar__3_3)
#line 110 "elds.m"
{
#line 110 "elds.m"
  {
#line 110 "elds.m"
    MR_bool erl_backend__elds__succeeded;
#line 110 "elds.m"
    MR_Integer erl_backend__elds__CastX_54 = (MR_Integer) erl_backend__elds__HeadVar__2_2;
#line 110 "elds.m"
    MR_Integer erl_backend__elds__CastY_55 = (MR_Integer) erl_backend__elds__HeadVar__3_3;

#line 110 "elds.m"
    erl_backend__elds__succeeded = (erl_backend__elds__CastX_54 == erl_backend__elds__CastY_55);
#line 110 "elds.m"
    if (erl_backend__elds__succeeded)
#line 5432 "erl_backend.elds.c"
      *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 0;
#line 110 "elds.m"
    else
#line 110 "elds.m"
      if (((MR_tag((MR_Word) erl_backend__elds__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3))))
#line 110 "elds.m"
        {
#line 110 "elds.m"
          MR_String erl_backend__elds__V_62_62 = ((MR_String) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 2)));
#line 110 "elds.m"
          MR_Word erl_backend__elds__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 1)));
#line 110 "elds.m"
          MR_Word erl_backend__elds__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)));

#line 110 "elds.m"
          if (((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 110 "elds.m"
            {
#line 110 "elds.m"
              MR_Word erl_backend__elds__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)));
#line 110 "elds.m"
              MR_Word erl_backend__elds__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 1)));
#line 110 "elds.m"
              MR_String erl_backend__elds__V_51_51 = ((MR_String) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 2)));
#line 110 "elds.m"
              MR_Word erl_backend__elds__V_52_52;

#line 110 "elds.m"
              {
#line 110 "elds.m"
                backend_libs__rtti____Compare____tc_name_0_0(&erl_backend__elds__V_52_52, erl_backend__elds__V_64_64, erl_backend__elds__V_49_49);
              }
#line 5465 "erl_backend.elds.c"
              erl_backend__elds__succeeded = (erl_backend__elds__V_52_52 == (MR_Integer) 0);
#line 110 "elds.m"
              erl_backend__elds__succeeded = !(erl_backend__elds__succeeded);
#line 110 "elds.m"
              if (erl_backend__elds__succeeded)
#line 110 "elds.m"
                *erl_backend__elds__HeadVar__1_1 = erl_backend__elds__V_52_52;
#line 110 "elds.m"
              else
#line 110 "elds.m"
                {
#line 110 "elds.m"
                  MR_Word erl_backend__elds__V_53_53;

#line 110 "elds.m"
                  {
#line 110 "elds.m"
                    mdbcomp__prim_data____Compare____sym_name_0_0(&erl_backend__elds__V_53_53, erl_backend__elds__V_63_63, erl_backend__elds__V_50_50);
                  }
#line 5485 "erl_backend.elds.c"
                  erl_backend__elds__succeeded = (erl_backend__elds__V_53_53 == (MR_Integer) 0);
#line 110 "elds.m"
                  erl_backend__elds__succeeded = !(erl_backend__elds__succeeded);
#line 110 "elds.m"
                  if (erl_backend__elds__succeeded)
#line 110 "elds.m"
                    *erl_backend__elds__HeadVar__1_1 = erl_backend__elds__V_53_53;
#line 110 "elds.m"
                  else
#line 110 "elds.m"
                    {
#line 110 "elds.m"
                      mercury__private_builtin__builtin_compare_string_3_p_0(erl_backend__elds__HeadVar__1_1, erl_backend__elds__V_62_62, erl_backend__elds__V_51_51);
#line 110 "elds.m"
                      return;
                    }
#line 110 "elds.m"
                }
#line 110 "elds.m"
            }
#line 110 "elds.m"
          else
#line 110 "elds.m"
            if (((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 5510 "erl_backend.elds.c"
              *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 110 "elds.m"
            else
#line 110 "elds.m"
              if (((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 5516 "erl_backend.elds.c"
                *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 110 "elds.m"
              else
#line 5520 "erl_backend.elds.c"
                *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 110 "elds.m"
        }
#line 110 "elds.m"
      else
#line 110 "elds.m"
        if (((MR_tag((MR_Word) erl_backend__elds__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 110 "elds.m"
          {
#line 110 "elds.m"
            MR_Word erl_backend__elds__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(2), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)));

#line 110 "elds.m"
            if (((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 5535 "erl_backend.elds.c"
              *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 110 "elds.m"
            else
#line 110 "elds.m"
              if (((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 110 "elds.m"
                {
#line 110 "elds.m"
                  MR_Word erl_backend__elds__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(2), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)));

#line 110 "elds.m"
                  {
#line 110 "elds.m"
                    backend_libs__rtti____Compare____rtti_pseudo_type_info_0_0(erl_backend__elds__HeadVar__1_1, erl_backend__elds__V_65_65, erl_backend__elds__V_29_29);
#line 110 "elds.m"
                    return;
                  }
#line 110 "elds.m"
                }
#line 110 "elds.m"
              else
#line 110 "elds.m"
                if (((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 5559 "erl_backend.elds.c"
                  *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 110 "elds.m"
                else
#line 5563 "erl_backend.elds.c"
                  *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 110 "elds.m"
          }
#line 110 "elds.m"
        else
#line 110 "elds.m"
          if (((MR_tag((MR_Word) erl_backend__elds__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 110 "elds.m"
            {
#line 110 "elds.m"
              MR_Word erl_backend__elds__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)));

#line 110 "elds.m"
              if (((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 5578 "erl_backend.elds.c"
                *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 110 "elds.m"
              else
#line 110 "elds.m"
                if (((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 5584 "erl_backend.elds.c"
                  *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 110 "elds.m"
                else
#line 110 "elds.m"
                  if (((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 110 "elds.m"
                    {
#line 110 "elds.m"
                      MR_Word erl_backend__elds__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)));

#line 110 "elds.m"
                      {
#line 110 "elds.m"
                        backend_libs__rtti____Compare____rtti_type_ctor_0_0(erl_backend__elds__HeadVar__1_1, erl_backend__elds__V_66_66, erl_backend__elds__V_5_5);
#line 110 "elds.m"
                        return;
                      }
#line 110 "elds.m"
                    }
#line 110 "elds.m"
                  else
#line 5606 "erl_backend.elds.c"
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 110 "elds.m"
            }
#line 110 "elds.m"
          else
#line 110 "elds.m"
            {
#line 110 "elds.m"
              MR_Word erl_backend__elds__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)));

#line 110 "elds.m"
              if (((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 5619 "erl_backend.elds.c"
                *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 110 "elds.m"
              else
#line 110 "elds.m"
                if (((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 5625 "erl_backend.elds.c"
                  *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 110 "elds.m"
                else
#line 110 "elds.m"
                  if (((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 5631 "erl_backend.elds.c"
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 110 "elds.m"
                  else
#line 110 "elds.m"
                    {
#line 110 "elds.m"
                      MR_Word erl_backend__elds__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)));

#line 110 "elds.m"
                      {
#line 110 "elds.m"
                        backend_libs__rtti____Compare____rtti_type_info_0_0(erl_backend__elds__HeadVar__1_1, erl_backend__elds__V_67_67, erl_backend__elds__V_17_17);
#line 110 "elds.m"
                        return;
                      }
#line 110 "elds.m"
                    }
#line 110 "elds.m"
            }
#line 110 "elds.m"
  }
#line 110 "elds.m"
}

#line 110 "elds.m"
MR_bool MR_CALL 
erl_backend__elds____Unify____elds_rtti_id_0_0(
#line 110 "elds.m"
  MR_Word erl_backend__elds__HeadVar__1_1,
#line 110 "elds.m"
  MR_Word erl_backend__elds__HeadVar__2_2)
#line 110 "elds.m"
{
#line 110 "elds.m"
  {
#line 110 "elds.m"
    MR_bool erl_backend__elds__succeeded;
#line 110 "elds.m"
    MR_Integer erl_backend__elds__CastX_15 = (MR_Integer) erl_backend__elds__HeadVar__1_1;
#line 110 "elds.m"
    MR_Integer erl_backend__elds__CastY_16 = (MR_Integer) erl_backend__elds__HeadVar__2_2;

#line 110 "elds.m"
    erl_backend__elds__succeeded = (erl_backend__elds__CastX_15 == erl_backend__elds__CastY_16);
#line 110 "elds.m"
    if (erl_backend__elds__succeeded)
#line 110 "elds.m"
      erl_backend__elds__succeeded = MR_TRUE;
#line 110 "elds.m"
    else
#line 110 "elds.m"
      if (((MR_tag((MR_Word) erl_backend__elds__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3))))
#line 110 "elds.m"
        {
#line 110 "elds.m"
          MR_Word erl_backend__elds__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__1_1, (MR_Integer) 0)));
#line 110 "elds.m"
          MR_Word erl_backend__elds__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__1_1, (MR_Integer) 1)));
#line 110 "elds.m"
          MR_String erl_backend__elds__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__1_1, (MR_Integer) 2)));
#line 110 "elds.m"
          MR_Word erl_backend__elds__V_12_12;
#line 110 "elds.m"
          MR_Word erl_backend__elds__V_13_13;
#line 110 "elds.m"
          MR_String erl_backend__elds__V_14_14;

#line 110 "elds.m"
          erl_backend__elds__succeeded = ((MR_tag((MR_Word) erl_backend__elds__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)));
#line 110 "elds.m"
          if (erl_backend__elds__succeeded)
#line 110 "elds.m"
            {
#line 110 "elds.m"
              erl_backend__elds__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)));
#line 110 "elds.m"
              erl_backend__elds__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 1)));
#line 110 "elds.m"
              erl_backend__elds__V_14_14 = ((MR_String) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 2)));
#line 5711 "erl_backend.elds.c"
              {
#line 5713 "erl_backend.elds.c"
                erl_backend__elds__succeeded = backend_libs__rtti____Unify____tc_name_0_0(erl_backend__elds__V_9_9, erl_backend__elds__V_12_12);
              }
#line 110 "elds.m"
              if (erl_backend__elds__succeeded)
#line 110 "elds.m"
                {
#line 5720 "erl_backend.elds.c"
                  {
#line 5722 "erl_backend.elds.c"
                    erl_backend__elds__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(erl_backend__elds__V_10_10, erl_backend__elds__V_13_13);
                  }
#line 110 "elds.m"
                  if (erl_backend__elds__succeeded)
#line 5727 "erl_backend.elds.c"
                    erl_backend__elds__succeeded = (strcmp(erl_backend__elds__V_11_11, erl_backend__elds__V_14_14) == 0);
#line 110 "elds.m"
                }
#line 110 "elds.m"
            }
#line 110 "elds.m"
        }
#line 110 "elds.m"
      else
#line 110 "elds.m"
        if (((MR_tag((MR_Word) erl_backend__elds__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 110 "elds.m"
          {
#line 110 "elds.m"
            MR_Word erl_backend__elds__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), erl_backend__elds__HeadVar__1_1, (MR_Integer) 0)));
#line 110 "elds.m"
            MR_Word erl_backend__elds__V_8_8;

#line 110 "elds.m"
            erl_backend__elds__succeeded = ((MR_tag((MR_Word) erl_backend__elds__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 110 "elds.m"
            if (erl_backend__elds__succeeded)
#line 110 "elds.m"
              {
#line 110 "elds.m"
                erl_backend__elds__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)));
#line 5754 "erl_backend.elds.c"
                {
#line 5756 "erl_backend.elds.c"
                  return erl_backend__elds__succeeded = backend_libs__rtti____Unify____rtti_pseudo_type_info_0_0(erl_backend__elds__V_7_7, erl_backend__elds__V_8_8);
                }
#line 110 "elds.m"
              }
#line 110 "elds.m"
          }
#line 110 "elds.m"
        else
#line 110 "elds.m"
          if (((MR_tag((MR_Word) erl_backend__elds__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 110 "elds.m"
            {
#line 110 "elds.m"
              MR_Word erl_backend__elds__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__1_1, (MR_Integer) 0)));
#line 110 "elds.m"
              MR_Word erl_backend__elds__V_4_4;

#line 110 "elds.m"
              erl_backend__elds__succeeded = ((MR_tag((MR_Word) erl_backend__elds__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 110 "elds.m"
              if (erl_backend__elds__succeeded)
#line 110 "elds.m"
                {
#line 110 "elds.m"
                  erl_backend__elds__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)));
#line 5782 "erl_backend.elds.c"
                  {
#line 5784 "erl_backend.elds.c"
                    return erl_backend__elds__succeeded = backend_libs__rtti____Unify____rtti_type_ctor_0_0(erl_backend__elds__V_3_3, erl_backend__elds__V_4_4);
                  }
#line 110 "elds.m"
                }
#line 110 "elds.m"
            }
#line 110 "elds.m"
          else
#line 110 "elds.m"
            {
#line 110 "elds.m"
              MR_Word erl_backend__elds__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds__HeadVar__1_1, (MR_Integer) 0)));
#line 110 "elds.m"
              MR_Word erl_backend__elds__V_6_6;

#line 110 "elds.m"
              erl_backend__elds__succeeded = ((MR_tag((MR_Word) erl_backend__elds__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 110 "elds.m"
              if (erl_backend__elds__succeeded)
#line 110 "elds.m"
                {
#line 110 "elds.m"
                  erl_backend__elds__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)));
#line 5808 "erl_backend.elds.c"
                  {
#line 5810 "erl_backend.elds.c"
                    return erl_backend__elds__succeeded = backend_libs__rtti____Unify____rtti_type_info_0_0(erl_backend__elds__V_5_5, erl_backend__elds__V_6_6);
                  }
#line 110 "elds.m"
                }
#line 110 "elds.m"
            }
#line 110 "elds.m"
    return erl_backend__elds__succeeded;
#line 110 "elds.m"
  }
#line 110 "elds.m"
}

#line 100 "elds.m"
void MR_CALL 
erl_backend__elds____Compare____elds_rtti_defn_0_0(
#line 100 "elds.m"
  MR_Word * erl_backend__elds__HeadVar__1_1,
#line 100 "elds.m"
  MR_Word erl_backend__elds__HeadVar__2_2,
#line 100 "elds.m"
  MR_Word erl_backend__elds__HeadVar__3_3)
#line 100 "elds.m"
{
#line 100 "elds.m"
  {
#line 100 "elds.m"
    MR_bool erl_backend__elds__succeeded;
#line 100 "elds.m"
    MR_Integer erl_backend__elds__CastX_15 = (MR_Integer) erl_backend__elds__HeadVar__2_2;
#line 100 "elds.m"
    MR_Integer erl_backend__elds__CastY_16 = (MR_Integer) erl_backend__elds__HeadVar__3_3;

#line 100 "elds.m"
    erl_backend__elds__succeeded = (erl_backend__elds__CastX_15 == erl_backend__elds__CastY_16);
#line 100 "elds.m"
    if (erl_backend__elds__succeeded)
#line 5848 "erl_backend.elds.c"
      *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 0;
#line 100 "elds.m"
    else
#line 100 "elds.m"
      {
#line 100 "elds.m"
        MR_Word erl_backend__elds__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)));
#line 100 "elds.m"
        MR_Word erl_backend__elds__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__2_2, (MR_Integer) 1)));
#line 100 "elds.m"
        MR_Word erl_backend__elds__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__2_2, (MR_Integer) 2)));
#line 100 "elds.m"
        MR_Word erl_backend__elds__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__2_2, (MR_Integer) 3)));
#line 100 "elds.m"
        MR_Word erl_backend__elds__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)));
#line 100 "elds.m"
        MR_Word erl_backend__elds__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__3_3, (MR_Integer) 1)));
#line 100 "elds.m"
        MR_Word erl_backend__elds__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__3_3, (MR_Integer) 2)));
#line 100 "elds.m"
        MR_Word erl_backend__elds__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__3_3, (MR_Integer) 3)));
#line 100 "elds.m"
        MR_Word erl_backend__elds__V_12_12;

#line 100 "elds.m"
        {
#line 100 "elds.m"
          erl_backend__elds____Compare____elds_rtti_id_0_0(&erl_backend__elds__V_12_12, erl_backend__elds__V_4_4, erl_backend__elds__V_8_8);
        }
#line 5878 "erl_backend.elds.c"
        erl_backend__elds__succeeded = (erl_backend__elds__V_12_12 == (MR_Integer) 0);
#line 100 "elds.m"
        erl_backend__elds__succeeded = !(erl_backend__elds__succeeded);
#line 100 "elds.m"
        if (erl_backend__elds__succeeded)
#line 100 "elds.m"
          *erl_backend__elds__HeadVar__1_1 = erl_backend__elds__V_12_12;
#line 100 "elds.m"
        else
#line 100 "elds.m"
          {
#line 100 "elds.m"
            MR_Word erl_backend__elds__V_13_13;
#line 100 "elds.m"
            MR_Integer erl_backend__elds__V_21_21 = (MR_Integer) erl_backend__elds__V_5_5;
#line 100 "elds.m"
            MR_Integer erl_backend__elds__V_22_22 = (MR_Integer) erl_backend__elds__V_9_9;

#line 100 "elds.m"
            {
#line 100 "elds.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&erl_backend__elds__V_13_13, erl_backend__elds__V_21_21, erl_backend__elds__V_22_22);
            }
#line 5902 "erl_backend.elds.c"
            erl_backend__elds__succeeded = (erl_backend__elds__V_13_13 == (MR_Integer) 0);
#line 100 "elds.m"
            erl_backend__elds__succeeded = !(erl_backend__elds__succeeded);
#line 100 "elds.m"
            if (erl_backend__elds__succeeded)
#line 100 "elds.m"
              *erl_backend__elds__HeadVar__1_1 = erl_backend__elds__V_13_13;
#line 100 "elds.m"
            else
#line 100 "elds.m"
              {
#line 100 "elds.m"
                MR_Word erl_backend__elds__V_14_14;

#line 100 "elds.m"
                {
#line 100 "elds.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &erl_backend__elds_scalar_common_1[9], &erl_backend__elds__V_14_14, ((MR_Box) (erl_backend__elds__V_6_6)), ((MR_Box) (erl_backend__elds__V_10_10)));
                }
#line 5922 "erl_backend.elds.c"
                erl_backend__elds__succeeded = (erl_backend__elds__V_14_14 == (MR_Integer) 0);
#line 100 "elds.m"
                erl_backend__elds__succeeded = !(erl_backend__elds__succeeded);
#line 100 "elds.m"
                if (erl_backend__elds__succeeded)
#line 100 "elds.m"
                  *erl_backend__elds__HeadVar__1_1 = erl_backend__elds__V_14_14;
#line 100 "elds.m"
                else
#line 100 "elds.m"
                  {
#line 100 "elds.m"
                    erl_backend__elds____Compare____elds_clause_0_0(erl_backend__elds__HeadVar__1_1, erl_backend__elds__V_7_7, erl_backend__elds__V_11_11);
#line 100 "elds.m"
                    return;
                  }
#line 100 "elds.m"
              }
#line 100 "elds.m"
          }
#line 100 "elds.m"
      }
#line 100 "elds.m"
  }
#line 100 "elds.m"
}

#line 100 "elds.m"
MR_bool MR_CALL 
erl_backend__elds____Unify____elds_rtti_defn_0_0(
#line 100 "elds.m"
  MR_Word erl_backend__elds__HeadVar__1_1,
#line 100 "elds.m"
  MR_Word erl_backend__elds__HeadVar__2_2)
#line 100 "elds.m"
{
#line 100 "elds.m"
  {
#line 100 "elds.m"
    MR_bool erl_backend__elds__succeeded;
#line 100 "elds.m"
    MR_Integer erl_backend__elds__CastX_11 = (MR_Integer) erl_backend__elds__HeadVar__1_1;
#line 100 "elds.m"
    MR_Integer erl_backend__elds__CastY_12 = (MR_Integer) erl_backend__elds__HeadVar__2_2;

#line 100 "elds.m"
    erl_backend__elds__succeeded = (erl_backend__elds__CastX_11 == erl_backend__elds__CastY_12);
#line 100 "elds.m"
    if (erl_backend__elds__succeeded)
#line 100 "elds.m"
      erl_backend__elds__succeeded = MR_TRUE;
#line 100 "elds.m"
    else
#line 100 "elds.m"
      {
#line 100 "elds.m"
        MR_Word erl_backend__elds__TypeInfo_13_13;
#line 100 "elds.m"
        MR_Word erl_backend__elds__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__1_1, (MR_Integer) 0)));
#line 100 "elds.m"
        MR_Word erl_backend__elds__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__1_1, (MR_Integer) 1)));
#line 100 "elds.m"
        MR_Word erl_backend__elds__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__1_1, (MR_Integer) 2)));
#line 100 "elds.m"
        MR_Word erl_backend__elds__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__1_1, (MR_Integer) 3)));
#line 100 "elds.m"
        MR_Word erl_backend__elds__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)));
#line 100 "elds.m"
        MR_Word erl_backend__elds__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__2_2, (MR_Integer) 1)));
#line 100 "elds.m"
        MR_Word erl_backend__elds__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__2_2, (MR_Integer) 2)));
#line 100 "elds.m"
        MR_Word erl_backend__elds__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__2_2, (MR_Integer) 3)));

#line 5997 "erl_backend.elds.c"
        {
#line 5999 "erl_backend.elds.c"
          erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_rtti_id_0_0(erl_backend__elds__V_3_3, erl_backend__elds__V_7_7);
        }
#line 100 "elds.m"
        if (erl_backend__elds__succeeded)
#line 100 "elds.m"
          {
#line 6006 "erl_backend.elds.c"
            erl_backend__elds__succeeded = (erl_backend__elds__V_4_4 == erl_backend__elds__V_8_8);
#line 100 "elds.m"
            if (erl_backend__elds__succeeded)
#line 100 "elds.m"
              {
#line 6012 "erl_backend.elds.c"
                erl_backend__elds__TypeInfo_13_13 = (MR_Word) &erl_backend__elds_scalar_common_1[9];
#line 6014 "erl_backend.elds.c"
                {
#line 6016 "erl_backend.elds.c"
                  erl_backend__elds__succeeded = mercury__builtin__unify_2_p_0(erl_backend__elds__TypeInfo_13_13, ((MR_Box) (erl_backend__elds__V_5_5)), ((MR_Box) (erl_backend__elds__V_9_9)));
                }
#line 100 "elds.m"
                if (erl_backend__elds__succeeded)
#line 6021 "erl_backend.elds.c"
                  {
#line 6023 "erl_backend.elds.c"
                    return erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_clause_0_0(erl_backend__elds__V_6_6, erl_backend__elds__V_10_10);
                  }
#line 100 "elds.m"
              }
#line 100 "elds.m"
          }
#line 100 "elds.m"
      }
#line 100 "elds.m"
    return erl_backend__elds__succeeded;
#line 100 "elds.m"
  }
#line 100 "elds.m"
}

#line 91 "elds.m"
void MR_CALL 
erl_backend__elds____Compare____elds_foreign_export_defn_0_0(
#line 91 "elds.m"
  MR_Word * erl_backend__elds__HeadVar__1_1,
#line 91 "elds.m"
  MR_Word erl_backend__elds__HeadVar__2_2,
#line 91 "elds.m"
  MR_Word erl_backend__elds__HeadVar__3_3)
#line 91 "elds.m"
{
#line 91 "elds.m"
  {
#line 91 "elds.m"
    MR_bool erl_backend__elds__succeeded;
#line 91 "elds.m"
    MR_Integer erl_backend__elds__CastX_12 = (MR_Integer) erl_backend__elds__HeadVar__2_2;
#line 91 "elds.m"
    MR_Integer erl_backend__elds__CastY_13 = (MR_Integer) erl_backend__elds__HeadVar__3_3;

#line 91 "elds.m"
    erl_backend__elds__succeeded = (erl_backend__elds__CastX_12 == erl_backend__elds__CastY_13);
#line 91 "elds.m"
    if (erl_backend__elds__succeeded)
#line 6063 "erl_backend.elds.c"
      *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 0;
#line 91 "elds.m"
    else
#line 91 "elds.m"
      {
#line 91 "elds.m"
        MR_String erl_backend__elds__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)));
#line 91 "elds.m"
        MR_Word erl_backend__elds__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__2_2, (MR_Integer) 1)));
#line 91 "elds.m"
        MR_Word erl_backend__elds__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__2_2, (MR_Integer) 2)));
#line 91 "elds.m"
        MR_String erl_backend__elds__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)));
#line 91 "elds.m"
        MR_Word erl_backend__elds__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__3_3, (MR_Integer) 1)));
#line 91 "elds.m"
        MR_Word erl_backend__elds__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__3_3, (MR_Integer) 2)));
#line 91 "elds.m"
        MR_Word erl_backend__elds__V_10_10;

#line 91 "elds.m"
        {
#line 91 "elds.m"
          mercury__private_builtin__builtin_compare_string_3_p_0(&erl_backend__elds__V_10_10, erl_backend__elds__V_4_4, erl_backend__elds__V_7_7);
        }
#line 6089 "erl_backend.elds.c"
        erl_backend__elds__succeeded = (erl_backend__elds__V_10_10 == (MR_Integer) 0);
#line 91 "elds.m"
        erl_backend__elds__succeeded = !(erl_backend__elds__succeeded);
#line 91 "elds.m"
        if (erl_backend__elds__succeeded)
#line 91 "elds.m"
          *erl_backend__elds__HeadVar__1_1 = erl_backend__elds__V_10_10;
#line 91 "elds.m"
        else
#line 91 "elds.m"
          {
#line 91 "elds.m"
            MR_Word erl_backend__elds__V_11_11;

#line 91 "elds.m"
            {
#line 91 "elds.m"
              mercury__builtin__compare_3_p_0((MR_Word) &erl_backend__elds_scalar_common_1[9], &erl_backend__elds__V_11_11, ((MR_Box) (erl_backend__elds__V_5_5)), ((MR_Box) (erl_backend__elds__V_8_8)));
            }
#line 6109 "erl_backend.elds.c"
            erl_backend__elds__succeeded = (erl_backend__elds__V_11_11 == (MR_Integer) 0);
#line 91 "elds.m"
            erl_backend__elds__succeeded = !(erl_backend__elds__succeeded);
#line 91 "elds.m"
            if (erl_backend__elds__succeeded)
#line 91 "elds.m"
              *erl_backend__elds__HeadVar__1_1 = erl_backend__elds__V_11_11;
#line 91 "elds.m"
            else
#line 91 "elds.m"
              {
#line 91 "elds.m"
                erl_backend__elds____Compare____elds_clause_0_0(erl_backend__elds__HeadVar__1_1, erl_backend__elds__V_6_6, erl_backend__elds__V_9_9);
#line 91 "elds.m"
                return;
              }
#line 91 "elds.m"
          }
#line 91 "elds.m"
      }
#line 91 "elds.m"
  }
#line 91 "elds.m"
}

#line 91 "elds.m"
MR_bool MR_CALL 
erl_backend__elds____Unify____elds_foreign_export_defn_0_0(
#line 91 "elds.m"
  MR_Word erl_backend__elds__HeadVar__1_1,
#line 91 "elds.m"
  MR_Word erl_backend__elds__HeadVar__2_2)
#line 91 "elds.m"
{
#line 91 "elds.m"
  {
#line 91 "elds.m"
    MR_bool erl_backend__elds__succeeded;
#line 91 "elds.m"
    MR_Integer erl_backend__elds__CastX_9 = (MR_Integer) erl_backend__elds__HeadVar__1_1;
#line 91 "elds.m"
    MR_Integer erl_backend__elds__CastY_10 = (MR_Integer) erl_backend__elds__HeadVar__2_2;

#line 91 "elds.m"
    erl_backend__elds__succeeded = (erl_backend__elds__CastX_9 == erl_backend__elds__CastY_10);
#line 91 "elds.m"
    if (erl_backend__elds__succeeded)
#line 91 "elds.m"
      erl_backend__elds__succeeded = MR_TRUE;
#line 91 "elds.m"
    else
#line 91 "elds.m"
      {
#line 91 "elds.m"
        MR_Word erl_backend__elds__TypeInfo_11_11;
#line 91 "elds.m"
        MR_String erl_backend__elds__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__1_1, (MR_Integer) 0)));
#line 91 "elds.m"
        MR_Word erl_backend__elds__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__1_1, (MR_Integer) 1)));
#line 91 "elds.m"
        MR_Word erl_backend__elds__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__1_1, (MR_Integer) 2)));
#line 91 "elds.m"
        MR_String erl_backend__elds__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)));
#line 91 "elds.m"
        MR_Word erl_backend__elds__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__2_2, (MR_Integer) 1)));
#line 91 "elds.m"
        MR_Word erl_backend__elds__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__2_2, (MR_Integer) 2)));

#line 6178 "erl_backend.elds.c"
        erl_backend__elds__succeeded = (strcmp(erl_backend__elds__V_3_3, erl_backend__elds__V_6_6) == 0);
#line 91 "elds.m"
        if (erl_backend__elds__succeeded)
#line 91 "elds.m"
          {
#line 6184 "erl_backend.elds.c"
            erl_backend__elds__TypeInfo_11_11 = (MR_Word) &erl_backend__elds_scalar_common_1[9];
#line 6186 "erl_backend.elds.c"
            {
#line 6188 "erl_backend.elds.c"
              erl_backend__elds__succeeded = mercury__builtin__unify_2_p_0(erl_backend__elds__TypeInfo_11_11, ((MR_Box) (erl_backend__elds__V_4_4)), ((MR_Box) (erl_backend__elds__V_7_7)));
            }
#line 91 "elds.m"
            if (erl_backend__elds__succeeded)
#line 6193 "erl_backend.elds.c"
              {
#line 6195 "erl_backend.elds.c"
                return erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_clause_0_0(erl_backend__elds__V_5_5, erl_backend__elds__V_8_8);
              }
#line 91 "elds.m"
          }
#line 91 "elds.m"
      }
#line 91 "elds.m"
    return erl_backend__elds__succeeded;
#line 91 "elds.m"
  }
#line 91 "elds.m"
}

#line 136 "elds.m"
void MR_CALL 
erl_backend__elds____Compare____elds_expr_0_0(
#line 136 "elds.m"
  MR_Word * erl_backend__elds__HeadVar__1_1,
#line 136 "elds.m"
  MR_Word erl_backend__elds__HeadVar__2_2,
#line 136 "elds.m"
  MR_Word erl_backend__elds__HeadVar__3_3)
#line 136 "elds.m"
{
#line 136 "elds.m"
  while (MR_TRUE)
#line 136 "elds.m"
    {
#line 136 "elds.m"
      /* tailcall optimized into a loop */
#line 136 "elds.m"
      {
#line 136 "elds.m"
        MR_bool erl_backend__elds__succeeded;
#line 136 "elds.m"
        MR_Integer erl_backend__elds__CastX_715 = (MR_Integer) erl_backend__elds__HeadVar__2_2;
#line 136 "elds.m"
        MR_Integer erl_backend__elds__CastY_716 = (MR_Integer) erl_backend__elds__HeadVar__3_3;

#line 136 "elds.m"
        erl_backend__elds__succeeded = (erl_backend__elds__CastX_715 == erl_backend__elds__CastY_716);
#line 136 "elds.m"
        if (erl_backend__elds__succeeded)
#line 6239 "erl_backend.elds.c"
          *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 0;
#line 136 "elds.m"
        else
#line 136 "elds.m"
          if (((MR_tag((MR_Word) erl_backend__elds__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 136 "elds.m"
            {
#line 136 "elds.m"
              MR_Word erl_backend__elds__V_745_745 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)));

#line 136 "elds.m"
              if (((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 136 "elds.m"
                {
#line 136 "elds.m"
                  MR_Word erl_backend__elds__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)));

#line 136 "elds.m"
                  {
#line 136 "elds.m"
                    mercury__builtin__compare_3_p_0((MR_Word) &erl_backend__elds_scalar_common_1[14], erl_backend__elds__HeadVar__1_1, ((MR_Box) (erl_backend__elds__V_745_745)), ((MR_Box) (erl_backend__elds__V_5_5)));
#line 136 "elds.m"
                    return;
                  }
#line 136 "elds.m"
                }
#line 136 "elds.m"
              else
#line 136 "elds.m"
                if (((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 6270 "erl_backend.elds.c"
                  *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                else
#line 136 "elds.m"
                  if (((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 6276 "erl_backend.elds.c"
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                  else
#line 136 "elds.m"
                    if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 6282 "erl_backend.elds.c"
                      *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                    else
#line 136 "elds.m"
                      if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 6288 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                      else
#line 136 "elds.m"
                        if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 6294 "erl_backend.elds.c"
                          *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                        else
#line 136 "elds.m"
                          if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 6300 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                          else
#line 136 "elds.m"
                            if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 6306 "erl_backend.elds.c"
                              *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                            else
#line 136 "elds.m"
                              if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 6312 "erl_backend.elds.c"
                                *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                              else
#line 136 "elds.m"
                                if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 6318 "erl_backend.elds.c"
                                  *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                                else
#line 136 "elds.m"
                                  if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 6324 "erl_backend.elds.c"
                                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                                  else
#line 136 "elds.m"
                                    if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 6330 "erl_backend.elds.c"
                                      *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                                    else
#line 136 "elds.m"
                                      if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 6336 "erl_backend.elds.c"
                                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                                      else
#line 6340 "erl_backend.elds.c"
                                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
            }
#line 136 "elds.m"
          else
#line 136 "elds.m"
            if (((MR_tag((MR_Word) erl_backend__elds__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 136 "elds.m"
              {
#line 136 "elds.m"
                MR_Word erl_backend__elds__V_754_754 = (MR_Word) MR_body(((MR_Word) erl_backend__elds__HeadVar__2_2), (MR_Integer) 0);

#line 136 "elds.m"
                if (((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 6355 "erl_backend.elds.c"
                  *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                else
#line 136 "elds.m"
                  if (((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 136 "elds.m"
                    {
#line 136 "elds.m"
                      MR_Word erl_backend__elds__V_372_372 = (MR_Word) MR_body(((MR_Word) erl_backend__elds__HeadVar__3_3), (MR_Integer) 0);

#line 136 "elds.m"
                      {
#line 136 "elds.m"
                        erl_backend__elds____Compare____elds_clause_0_0(erl_backend__elds__HeadVar__1_1, erl_backend__elds__V_754_754, erl_backend__elds__V_372_372);
#line 136 "elds.m"
                        return;
                      }
#line 136 "elds.m"
                    }
#line 136 "elds.m"
                  else
#line 136 "elds.m"
                    if (((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 6379 "erl_backend.elds.c"
                      *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                    else
#line 136 "elds.m"
                      if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 6385 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                      else
#line 136 "elds.m"
                        if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 6391 "erl_backend.elds.c"
                          *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                        else
#line 136 "elds.m"
                          if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 6397 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                          else
#line 136 "elds.m"
                            if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 6403 "erl_backend.elds.c"
                              *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                            else
#line 136 "elds.m"
                              if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 6409 "erl_backend.elds.c"
                                *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                              else
#line 136 "elds.m"
                                if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 6415 "erl_backend.elds.c"
                                  *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                                else
#line 136 "elds.m"
                                  if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 6421 "erl_backend.elds.c"
                                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                                  else
#line 136 "elds.m"
                                    if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 6427 "erl_backend.elds.c"
                                      *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                                    else
#line 136 "elds.m"
                                      if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 6433 "erl_backend.elds.c"
                                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                                      else
#line 136 "elds.m"
                                        if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 6439 "erl_backend.elds.c"
                                          *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                                        else
#line 6443 "erl_backend.elds.c"
                                          *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
              }
#line 136 "elds.m"
            else
#line 136 "elds.m"
              if (((MR_tag((MR_Word) erl_backend__elds__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 136 "elds.m"
                {
#line 136 "elds.m"
                  MR_Word erl_backend__elds__V_759_759 = ((MR_Word) (MR_hl_field(MR_mktag(2), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)));

#line 136 "elds.m"
                  if (((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 6458 "erl_backend.elds.c"
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                  else
#line 136 "elds.m"
                    if (((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 6464 "erl_backend.elds.c"
                      *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                    else
#line 136 "elds.m"
                      if (((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 136 "elds.m"
                        {
#line 136 "elds.m"
                          MR_Word erl_backend__elds__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(2), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)));

#line 136 "elds.m"
                          {
#line 136 "elds.m"
                            erl_backend__elds____Compare____elds_term_0_0(erl_backend__elds__HeadVar__1_1, erl_backend__elds__V_759_759, erl_backend__elds__V_46_46);
#line 136 "elds.m"
                            return;
                          }
#line 136 "elds.m"
                        }
#line 136 "elds.m"
                      else
#line 136 "elds.m"
                        if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 6488 "erl_backend.elds.c"
                          *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                        else
#line 136 "elds.m"
                          if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 6494 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                          else
#line 136 "elds.m"
                            if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 6500 "erl_backend.elds.c"
                              *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                            else
#line 136 "elds.m"
                              if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 6506 "erl_backend.elds.c"
                                *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                              else
#line 136 "elds.m"
                                if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 6512 "erl_backend.elds.c"
                                  *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                                else
#line 136 "elds.m"
                                  if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 6518 "erl_backend.elds.c"
                                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                                  else
#line 136 "elds.m"
                                    if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 6524 "erl_backend.elds.c"
                                      *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                                    else
#line 136 "elds.m"
                                      if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 6530 "erl_backend.elds.c"
                                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                                      else
#line 136 "elds.m"
                                        if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 6536 "erl_backend.elds.c"
                                          *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                                        else
#line 136 "elds.m"
                                          if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 6542 "erl_backend.elds.c"
                                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                                          else
#line 6546 "erl_backend.elds.c"
                                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                }
#line 136 "elds.m"
              else
#line 136 "elds.m"
                if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 136 "elds.m"
                  {
#line 136 "elds.m"
                    MR_Word erl_backend__elds__V_742_742 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 3)));
#line 136 "elds.m"
                    MR_Word erl_backend__elds__V_743_743 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 2)));
#line 136 "elds.m"
                    MR_Word erl_backend__elds__V_744_744 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 1)));

#line 136 "elds.m"
                    if (((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 6565 "erl_backend.elds.c"
                      *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                    else
#line 136 "elds.m"
                      if (((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 6571 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                      else
#line 136 "elds.m"
                        if (((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 6577 "erl_backend.elds.c"
                          *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                        else
#line 136 "elds.m"
                          if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 136 "elds.m"
                            {
#line 136 "elds.m"
                              MR_Word erl_backend__elds__V_211_211 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 1)));
#line 136 "elds.m"
                              MR_Word erl_backend__elds__V_212_212 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 2)));
#line 136 "elds.m"
                              MR_Word erl_backend__elds__V_213_213 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 3)));
#line 136 "elds.m"
                              MR_Word erl_backend__elds__V_214_214;
#line 136 "elds.m"
                              MR_Integer erl_backend__elds__V_767_767 = (MR_Integer) erl_backend__elds__V_744_744;
#line 136 "elds.m"
                              MR_Integer erl_backend__elds__V_768_768 = (MR_Integer) erl_backend__elds__V_211_211;

#line 136 "elds.m"
                              {
#line 136 "elds.m"
                                mercury__private_builtin__builtin_compare_int_3_p_0(&erl_backend__elds__V_214_214, erl_backend__elds__V_767_767, erl_backend__elds__V_768_768);
                              }
#line 6603 "erl_backend.elds.c"
                              erl_backend__elds__succeeded = (erl_backend__elds__V_214_214 == (MR_Integer) 0);
#line 136 "elds.m"
                              erl_backend__elds__succeeded = !(erl_backend__elds__succeeded);
#line 136 "elds.m"
                              if (erl_backend__elds__succeeded)
#line 136 "elds.m"
                                *erl_backend__elds__HeadVar__1_1 = erl_backend__elds__V_214_214;
#line 136 "elds.m"
                              else
#line 136 "elds.m"
                                {
#line 136 "elds.m"
                                  MR_Word erl_backend__elds__V_215_215;

#line 136 "elds.m"
                                  {
#line 136 "elds.m"
                                    erl_backend__elds____Compare____elds_expr_0_0(&erl_backend__elds__V_215_215, erl_backend__elds__V_743_743, erl_backend__elds__V_212_212);
                                  }
#line 6623 "erl_backend.elds.c"
                                  erl_backend__elds__succeeded = (erl_backend__elds__V_215_215 == (MR_Integer) 0);
#line 136 "elds.m"
                                  erl_backend__elds__succeeded = !(erl_backend__elds__succeeded);
#line 136 "elds.m"
                                  if (erl_backend__elds__succeeded)
#line 136 "elds.m"
                                    *erl_backend__elds__HeadVar__1_1 = erl_backend__elds__V_215_215;
#line 136 "elds.m"
                                  else
#line 136 "elds.m"
                                    {
#line 136 "elds.m"
                                      /* direct tailcall eliminated */
#line 136 "elds.m"
                                      {
#line 136 "elds.m"
                                        MR_Word erl_backend__elds__HeadVar__2__tmp_copy_2 = erl_backend__elds__V_742_742;
#line 136 "elds.m"
                                        MR_Word erl_backend__elds__HeadVar__3__tmp_copy_3 = erl_backend__elds__V_213_213;

#line 136 "elds.m"
                                        erl_backend__elds__HeadVar__3_3 = erl_backend__elds__HeadVar__3__tmp_copy_3;
#line 136 "elds.m"
                                        erl_backend__elds__HeadVar__2_2 = erl_backend__elds__HeadVar__2__tmp_copy_2;
#line 136 "elds.m"
                                      }
#line 136 "elds.m"
                                      continue;
#line 136 "elds.m"
                                    }
#line 136 "elds.m"
                                }
#line 136 "elds.m"
                            }
#line 136 "elds.m"
                          else
#line 136 "elds.m"
                            if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 6662 "erl_backend.elds.c"
                              *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                            else
#line 136 "elds.m"
                              if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 6668 "erl_backend.elds.c"
                                *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                              else
#line 136 "elds.m"
                                if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 6674 "erl_backend.elds.c"
                                  *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                                else
#line 136 "elds.m"
                                  if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 6680 "erl_backend.elds.c"
                                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                                  else
#line 136 "elds.m"
                                    if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 6686 "erl_backend.elds.c"
                                      *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                                    else
#line 136 "elds.m"
                                      if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 6692 "erl_backend.elds.c"
                                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                                      else
#line 136 "elds.m"
                                        if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 6698 "erl_backend.elds.c"
                                          *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                                        else
#line 136 "elds.m"
                                          if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 6704 "erl_backend.elds.c"
                                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                                          else
#line 136 "elds.m"
                                            if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 6710 "erl_backend.elds.c"
                                              *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                                            else
#line 6714 "erl_backend.elds.c"
                                              *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                  }
#line 136 "elds.m"
                else
#line 136 "elds.m"
                  if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 136 "elds.m"
                    {
#line 136 "elds.m"
                      MR_Word erl_backend__elds__V_746_746 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 2)));
#line 136 "elds.m"
                      MR_Word erl_backend__elds__V_747_747 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 1)));

#line 136 "elds.m"
                      if (((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 6731 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                      else
#line 136 "elds.m"
                        if (((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 6737 "erl_backend.elds.c"
                          *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                        else
#line 136 "elds.m"
                          if (((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 6743 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                          else
#line 136 "elds.m"
                            if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 6749 "erl_backend.elds.c"
                              *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                            else
#line 136 "elds.m"
                              if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 136 "elds.m"
                                {
#line 136 "elds.m"
                                  MR_Word erl_backend__elds__V_280_280 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 1)));
#line 136 "elds.m"
                                  MR_Word erl_backend__elds__V_281_281 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 2)));
#line 136 "elds.m"
                                  MR_Word erl_backend__elds__V_282_282;

#line 136 "elds.m"
                                  {
#line 136 "elds.m"
                                    erl_backend__elds____Compare____elds_call_target_0_0(&erl_backend__elds__V_282_282, erl_backend__elds__V_747_747, erl_backend__elds__V_280_280);
                                  }
#line 6769 "erl_backend.elds.c"
                                  erl_backend__elds__succeeded = (erl_backend__elds__V_282_282 == (MR_Integer) 0);
#line 136 "elds.m"
                                  erl_backend__elds__succeeded = !(erl_backend__elds__succeeded);
#line 136 "elds.m"
                                  if (erl_backend__elds__succeeded)
#line 136 "elds.m"
                                    *erl_backend__elds__HeadVar__1_1 = erl_backend__elds__V_282_282;
#line 136 "elds.m"
                                  else
#line 136 "elds.m"
                                    {
#line 136 "elds.m"
                                      {
#line 136 "elds.m"
                                        mercury__builtin__compare_3_p_0((MR_Word) &erl_backend__elds_scalar_common_1[14], erl_backend__elds__HeadVar__1_1, ((MR_Box) (erl_backend__elds__V_746_746)), ((MR_Box) (erl_backend__elds__V_281_281)));
#line 136 "elds.m"
                                        return;
                                      }
#line 136 "elds.m"
                                    }
#line 136 "elds.m"
                                }
#line 136 "elds.m"
                              else
#line 136 "elds.m"
                                if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 6796 "erl_backend.elds.c"
                                  *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                                else
#line 136 "elds.m"
                                  if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 6802 "erl_backend.elds.c"
                                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                                  else
#line 136 "elds.m"
                                    if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 6808 "erl_backend.elds.c"
                                      *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                                    else
#line 136 "elds.m"
                                      if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 6814 "erl_backend.elds.c"
                                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                                      else
#line 136 "elds.m"
                                        if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 6820 "erl_backend.elds.c"
                                          *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                                        else
#line 136 "elds.m"
                                          if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 6826 "erl_backend.elds.c"
                                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                                          else
#line 136 "elds.m"
                                            if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 6832 "erl_backend.elds.c"
                                              *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                                            else
#line 136 "elds.m"
                                              if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 6838 "erl_backend.elds.c"
                                                *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                                              else
#line 6842 "erl_backend.elds.c"
                                                *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                    }
#line 136 "elds.m"
                  else
#line 136 "elds.m"
                    if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 136 "elds.m"
                      {
#line 136 "elds.m"
                        MR_Word erl_backend__elds__V_748_748 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 2)));
#line 136 "elds.m"
                        MR_Word erl_backend__elds__V_749_749 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 1)));

#line 136 "elds.m"
                        if (((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 6859 "erl_backend.elds.c"
                          *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                        else
#line 136 "elds.m"
                          if (((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 6865 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                          else
#line 136 "elds.m"
                            if (((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 6871 "erl_backend.elds.c"
                              *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                            else
#line 136 "elds.m"
                              if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 6877 "erl_backend.elds.c"
                                *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                              else
#line 136 "elds.m"
                                if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 6883 "erl_backend.elds.c"
                                  *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                                else
#line 136 "elds.m"
                                  if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 136 "elds.m"
                                    {
#line 136 "elds.m"
                                      MR_Word erl_backend__elds__V_422_422 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 1)));
#line 136 "elds.m"
                                      MR_Word erl_backend__elds__V_423_423 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 2)));
#line 136 "elds.m"
                                      MR_Word erl_backend__elds__V_424_424;

#line 136 "elds.m"
                                      {
#line 136 "elds.m"
                                        erl_backend__elds____Compare____elds_expr_0_0(&erl_backend__elds__V_424_424, erl_backend__elds__V_749_749, erl_backend__elds__V_422_422);
                                      }
#line 6903 "erl_backend.elds.c"
                                      erl_backend__elds__succeeded = (erl_backend__elds__V_424_424 == (MR_Integer) 0);
#line 136 "elds.m"
                                      erl_backend__elds__succeeded = !(erl_backend__elds__succeeded);
#line 136 "elds.m"
                                      if (erl_backend__elds__succeeded)
#line 136 "elds.m"
                                        *erl_backend__elds__HeadVar__1_1 = erl_backend__elds__V_424_424;
#line 136 "elds.m"
                                      else
#line 136 "elds.m"
                                        {
#line 136 "elds.m"
                                          {
#line 136 "elds.m"
                                            mercury__builtin__compare_3_p_0((MR_Word) &erl_backend__elds_scalar_common_1[11], erl_backend__elds__HeadVar__1_1, ((MR_Box) (erl_backend__elds__V_748_748)), ((MR_Box) (erl_backend__elds__V_423_423)));
#line 136 "elds.m"
                                            return;
                                          }
#line 136 "elds.m"
                                        }
#line 136 "elds.m"
                                    }
#line 136 "elds.m"
                                  else
#line 136 "elds.m"
                                    if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 6930 "erl_backend.elds.c"
                                      *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                                    else
#line 136 "elds.m"
                                      if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 6936 "erl_backend.elds.c"
                                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                                      else
#line 136 "elds.m"
                                        if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 6942 "erl_backend.elds.c"
                                          *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                                        else
#line 136 "elds.m"
                                          if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 6948 "erl_backend.elds.c"
                                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                                          else
#line 136 "elds.m"
                                            if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 6954 "erl_backend.elds.c"
                                              *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                                            else
#line 136 "elds.m"
                                              if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 6960 "erl_backend.elds.c"
                                                *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                                              else
#line 136 "elds.m"
                                                if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 6966 "erl_backend.elds.c"
                                                  *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                                                else
#line 6970 "erl_backend.elds.c"
                                                  *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                      }
#line 136 "elds.m"
                    else
#line 136 "elds.m"
                      if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 136 "elds.m"
                        {
#line 136 "elds.m"
                          MR_Word erl_backend__elds__V_750_750 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 2)));
#line 136 "elds.m"
                          MR_Word erl_backend__elds__V_751_751 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 1)));

#line 136 "elds.m"
                          if (((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 6987 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                          else
#line 136 "elds.m"
                            if (((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 6993 "erl_backend.elds.c"
                              *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                            else
#line 136 "elds.m"
                              if (((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 6999 "erl_backend.elds.c"
                                *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                              else
#line 136 "elds.m"
                                if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 7005 "erl_backend.elds.c"
                                  *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                                else
#line 136 "elds.m"
                                  if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 7011 "erl_backend.elds.c"
                                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                                  else
#line 136 "elds.m"
                                    if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 7017 "erl_backend.elds.c"
                                      *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                                    else
#line 136 "elds.m"
                                      if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 136 "elds.m"
                                        {
#line 136 "elds.m"
                                          MR_Word erl_backend__elds__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 1)));
#line 136 "elds.m"
                                          MR_Word erl_backend__elds__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 2)));
#line 136 "elds.m"
                                          MR_Word erl_backend__elds__V_92_92;

#line 136 "elds.m"
                                          {
#line 136 "elds.m"
                                            erl_backend__elds____Compare____elds_expr_0_0(&erl_backend__elds__V_92_92, erl_backend__elds__V_751_751, erl_backend__elds__V_90_90);
                                          }
#line 7037 "erl_backend.elds.c"
                                          erl_backend__elds__succeeded = (erl_backend__elds__V_92_92 == (MR_Integer) 0);
#line 136 "elds.m"
                                          erl_backend__elds__succeeded = !(erl_backend__elds__succeeded);
#line 136 "elds.m"
                                          if (erl_backend__elds__succeeded)
#line 136 "elds.m"
                                            *erl_backend__elds__HeadVar__1_1 = erl_backend__elds__V_92_92;
#line 136 "elds.m"
                                          else
#line 136 "elds.m"
                                            {
#line 136 "elds.m"
                                              /* direct tailcall eliminated */
#line 136 "elds.m"
                                              {
#line 136 "elds.m"
                                                MR_Word erl_backend__elds__HeadVar__2__tmp_copy_2 = erl_backend__elds__V_750_750;
#line 136 "elds.m"
                                                MR_Word erl_backend__elds__HeadVar__3__tmp_copy_3 = erl_backend__elds__V_91_91;

#line 136 "elds.m"
                                                erl_backend__elds__HeadVar__3_3 = erl_backend__elds__HeadVar__3__tmp_copy_3;
#line 136 "elds.m"
                                                erl_backend__elds__HeadVar__2_2 = erl_backend__elds__HeadVar__2__tmp_copy_2;
#line 136 "elds.m"
                                              }
#line 136 "elds.m"
                                              continue;
#line 136 "elds.m"
                                            }
#line 136 "elds.m"
                                        }
#line 136 "elds.m"
                                      else
#line 136 "elds.m"
                                        if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 7074 "erl_backend.elds.c"
                                          *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                                        else
#line 136 "elds.m"
                                          if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 7080 "erl_backend.elds.c"
                                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                                          else
#line 136 "elds.m"
                                            if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 7086 "erl_backend.elds.c"
                                              *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                                            else
#line 136 "elds.m"
                                              if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 7092 "erl_backend.elds.c"
                                                *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                                              else
#line 136 "elds.m"
                                                if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 7098 "erl_backend.elds.c"
                                                  *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                                                else
#line 136 "elds.m"
                                                  if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 7104 "erl_backend.elds.c"
                                                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                                                  else
#line 7108 "erl_backend.elds.c"
                                                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                        }
#line 136 "elds.m"
                      else
#line 136 "elds.m"
                        if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 136 "elds.m"
                          {
#line 136 "elds.m"
                            MR_Word erl_backend__elds__V_752_752 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 2)));
#line 136 "elds.m"
                            MR_String erl_backend__elds__V_753_753 = ((MR_String) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 1)));

#line 136 "elds.m"
                            if (((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 7125 "erl_backend.elds.c"
                              *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                            else
#line 136 "elds.m"
                              if (((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 7131 "erl_backend.elds.c"
                                *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                              else
#line 136 "elds.m"
                                if (((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 7137 "erl_backend.elds.c"
                                  *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                                else
#line 136 "elds.m"
                                  if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 7143 "erl_backend.elds.c"
                                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                                  else
#line 136 "elds.m"
                                    if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 7149 "erl_backend.elds.c"
                                      *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                                    else
#line 136 "elds.m"
                                      if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 7155 "erl_backend.elds.c"
                                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                                      else
#line 136 "elds.m"
                                        if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 7161 "erl_backend.elds.c"
                                          *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                                        else
#line 136 "elds.m"
                                          if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 136 "elds.m"
                                            {
#line 136 "elds.m"
                                              MR_String erl_backend__elds__V_612_612 = ((MR_String) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 1)));
#line 136 "elds.m"
                                              MR_Word erl_backend__elds__V_613_613 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 2)));
#line 136 "elds.m"
                                              MR_Word erl_backend__elds__V_614_614;

#line 136 "elds.m"
                                              {
#line 136 "elds.m"
                                                mercury__private_builtin__builtin_compare_string_3_p_0(&erl_backend__elds__V_614_614, erl_backend__elds__V_753_753, erl_backend__elds__V_612_612);
                                              }
#line 7181 "erl_backend.elds.c"
                                              erl_backend__elds__succeeded = (erl_backend__elds__V_614_614 == (MR_Integer) 0);
#line 136 "elds.m"
                                              erl_backend__elds__succeeded = !(erl_backend__elds__succeeded);
#line 136 "elds.m"
                                              if (erl_backend__elds__succeeded)
#line 136 "elds.m"
                                                *erl_backend__elds__HeadVar__1_1 = erl_backend__elds__V_614_614;
#line 136 "elds.m"
                                              else
#line 136 "elds.m"
                                                {
#line 136 "elds.m"
                                                  mercury__term____Compare____context_0_0(erl_backend__elds__HeadVar__1_1, erl_backend__elds__V_752_752, erl_backend__elds__V_613_613);
#line 136 "elds.m"
                                                  return;
                                                }
#line 136 "elds.m"
                                            }
#line 136 "elds.m"
                                          else
#line 136 "elds.m"
                                            if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 7204 "erl_backend.elds.c"
                                              *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                                            else
#line 136 "elds.m"
                                              if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 7210 "erl_backend.elds.c"
                                                *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                                              else
#line 136 "elds.m"
                                                if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 7216 "erl_backend.elds.c"
                                                  *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                                                else
#line 136 "elds.m"
                                                  if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 7222 "erl_backend.elds.c"
                                                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                                                  else
#line 136 "elds.m"
                                                    if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 7228 "erl_backend.elds.c"
                                                      *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                                                    else
#line 7232 "erl_backend.elds.c"
                                                      *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                          }
#line 136 "elds.m"
                        else
#line 136 "elds.m"
                          if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 136 "elds.m"
                            {
#line 136 "elds.m"
                              MR_Word erl_backend__elds__V_755_755 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 1)));

#line 136 "elds.m"
                              if (((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 7247 "erl_backend.elds.c"
                                *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                              else
#line 136 "elds.m"
                                if (((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 7253 "erl_backend.elds.c"
                                  *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                                else
#line 136 "elds.m"
                                  if (((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 7259 "erl_backend.elds.c"
                                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                                  else
#line 136 "elds.m"
                                    if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 7265 "erl_backend.elds.c"
                                      *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                                    else
#line 136 "elds.m"
                                      if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 7271 "erl_backend.elds.c"
                                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                                      else
#line 136 "elds.m"
                                        if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 7277 "erl_backend.elds.c"
                                          *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                                        else
#line 136 "elds.m"
                                          if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 7283 "erl_backend.elds.c"
                                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                                          else
#line 136 "elds.m"
                                            if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 7289 "erl_backend.elds.c"
                                              *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                                            else
#line 136 "elds.m"
                                              if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 136 "elds.m"
                                                {
#line 136 "elds.m"
                                                  MR_Word erl_backend__elds__V_714_714 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 1)));

#line 136 "elds.m"
                                                  {
#line 136 "elds.m"
                                                    mercury__builtin__compare_3_p_0((MR_Word) &erl_backend__elds_scalar_common_1[11], erl_backend__elds__HeadVar__1_1, ((MR_Box) (erl_backend__elds__V_755_755)), ((MR_Box) (erl_backend__elds__V_714_714)));
#line 136 "elds.m"
                                                    return;
                                                  }
#line 136 "elds.m"
                                                }
#line 136 "elds.m"
                                              else
#line 136 "elds.m"
                                                if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 7313 "erl_backend.elds.c"
                                                  *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                                                else
#line 136 "elds.m"
                                                  if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 7319 "erl_backend.elds.c"
                                                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                                                  else
#line 136 "elds.m"
                                                    if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 7325 "erl_backend.elds.c"
                                                      *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                                                    else
#line 136 "elds.m"
                                                      if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 7331 "erl_backend.elds.c"
                                                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                                                      else
#line 7335 "erl_backend.elds.c"
                                                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                            }
#line 136 "elds.m"
                          else
#line 136 "elds.m"
                            if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 136 "elds.m"
                              {
#line 136 "elds.m"
                                MR_Word erl_backend__elds__V_756_756 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 1)));

#line 136 "elds.m"
                                if (((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 7350 "erl_backend.elds.c"
                                  *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                                else
#line 136 "elds.m"
                                  if (((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 7356 "erl_backend.elds.c"
                                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                                  else
#line 136 "elds.m"
                                    if (((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 7362 "erl_backend.elds.c"
                                      *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                                    else
#line 136 "elds.m"
                                      if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 7368 "erl_backend.elds.c"
                                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                                      else
#line 136 "elds.m"
                                        if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 7374 "erl_backend.elds.c"
                                          *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                                        else
#line 136 "elds.m"
                                          if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 7380 "erl_backend.elds.c"
                                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                                          else
#line 136 "elds.m"
                                            if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 7386 "erl_backend.elds.c"
                                              *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                                            else
#line 136 "elds.m"
                                              if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 7392 "erl_backend.elds.c"
                                                *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                                              else
#line 136 "elds.m"
                                                if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 7398 "erl_backend.elds.c"
                                                  *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                                                else
#line 136 "elds.m"
                                                  if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 136 "elds.m"
                                                    {
#line 136 "elds.m"
                                                      MR_Word erl_backend__elds__V_331_331 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 1)));

#line 136 "elds.m"
                                                      {
#line 136 "elds.m"
                                                        erl_backend__elds____Compare____elds_rtti_id_0_0(erl_backend__elds__HeadVar__1_1, erl_backend__elds__V_756_756, erl_backend__elds__V_331_331);
#line 136 "elds.m"
                                                        return;
                                                      }
#line 136 "elds.m"
                                                    }
#line 136 "elds.m"
                                                  else
#line 136 "elds.m"
                                                    if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 7422 "erl_backend.elds.c"
                                                      *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                                                    else
#line 136 "elds.m"
                                                      if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 7428 "erl_backend.elds.c"
                                                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                                                      else
#line 136 "elds.m"
                                                        if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 7434 "erl_backend.elds.c"
                                                          *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                                                        else
#line 7438 "erl_backend.elds.c"
                                                          *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                              }
#line 136 "elds.m"
                            else
#line 136 "elds.m"
                              if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 136 "elds.m"
                                {
#line 136 "elds.m"
                                  MR_Word erl_backend__elds__V_757_757 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 2)));
#line 136 "elds.m"
                                  MR_Word erl_backend__elds__V_758_758 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 1)));

#line 136 "elds.m"
                                  if (((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 7455 "erl_backend.elds.c"
                                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                                  else
#line 136 "elds.m"
                                    if (((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 7461 "erl_backend.elds.c"
                                      *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                                    else
#line 136 "elds.m"
                                      if (((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 7467 "erl_backend.elds.c"
                                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                                      else
#line 136 "elds.m"
                                        if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 7473 "erl_backend.elds.c"
                                          *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                                        else
#line 136 "elds.m"
                                          if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 7479 "erl_backend.elds.c"
                                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                                          else
#line 136 "elds.m"
                                            if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 7485 "erl_backend.elds.c"
                                              *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                                            else
#line 136 "elds.m"
                                              if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 7491 "erl_backend.elds.c"
                                                *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                                              else
#line 136 "elds.m"
                                                if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 7497 "erl_backend.elds.c"
                                                  *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                                                else
#line 136 "elds.m"
                                                  if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 7503 "erl_backend.elds.c"
                                                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                                                  else
#line 136 "elds.m"
                                                    if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 7509 "erl_backend.elds.c"
                                                      *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                                                    else
#line 136 "elds.m"
                                                      if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 136 "elds.m"
                                                        {
#line 136 "elds.m"
                                                          MR_Word erl_backend__elds__V_670_670 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 1)));
#line 136 "elds.m"
                                                          MR_Word erl_backend__elds__V_671_671 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 2)));
#line 136 "elds.m"
                                                          MR_Word erl_backend__elds__V_672_672;

#line 136 "elds.m"
                                                          {
#line 136 "elds.m"
                                                            erl_backend__elds____Compare____elds_expr_0_0(&erl_backend__elds__V_672_672, erl_backend__elds__V_758_758, erl_backend__elds__V_670_670);
                                                          }
#line 7529 "erl_backend.elds.c"
                                                          erl_backend__elds__succeeded = (erl_backend__elds__V_672_672 == (MR_Integer) 0);
#line 136 "elds.m"
                                                          erl_backend__elds__succeeded = !(erl_backend__elds__succeeded);
#line 136 "elds.m"
                                                          if (erl_backend__elds__succeeded)
#line 136 "elds.m"
                                                            *erl_backend__elds__HeadVar__1_1 = erl_backend__elds__V_672_672;
#line 136 "elds.m"
                                                          else
#line 136 "elds.m"
                                                            {
#line 136 "elds.m"
                                                              /* direct tailcall eliminated */
#line 136 "elds.m"
                                                              {
#line 136 "elds.m"
                                                                MR_Word erl_backend__elds__HeadVar__2__tmp_copy_2 = erl_backend__elds__V_757_757;
#line 136 "elds.m"
                                                                MR_Word erl_backend__elds__HeadVar__3__tmp_copy_3 = erl_backend__elds__V_671_671;

#line 136 "elds.m"
                                                                erl_backend__elds__HeadVar__3_3 = erl_backend__elds__HeadVar__3__tmp_copy_3;
#line 136 "elds.m"
                                                                erl_backend__elds__HeadVar__2_2 = erl_backend__elds__HeadVar__2__tmp_copy_2;
#line 136 "elds.m"
                                                              }
#line 136 "elds.m"
                                                              continue;
#line 136 "elds.m"
                                                            }
#line 136 "elds.m"
                                                        }
#line 136 "elds.m"
                                                      else
#line 136 "elds.m"
                                                        if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 7566 "erl_backend.elds.c"
                                                          *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                                                        else
#line 136 "elds.m"
                                                          if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 7572 "erl_backend.elds.c"
                                                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                                                          else
#line 7576 "erl_backend.elds.c"
                                                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                                }
#line 136 "elds.m"
                              else
#line 136 "elds.m"
                                if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 136 "elds.m"
                                  {
#line 136 "elds.m"
                                    MR_Word erl_backend__elds__V_760_760 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 1)));

#line 136 "elds.m"
                                    if (((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 7591 "erl_backend.elds.c"
                                      *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                                    else
#line 136 "elds.m"
                                      if (((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 7597 "erl_backend.elds.c"
                                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                                      else
#line 136 "elds.m"
                                        if (((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 7603 "erl_backend.elds.c"
                                          *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                                        else
#line 136 "elds.m"
                                          if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 7609 "erl_backend.elds.c"
                                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                                          else
#line 136 "elds.m"
                                            if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 7615 "erl_backend.elds.c"
                                              *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                                            else
#line 136 "elds.m"
                                              if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 7621 "erl_backend.elds.c"
                                                *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                                              else
#line 136 "elds.m"
                                                if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 7627 "erl_backend.elds.c"
                                                  *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                                                else
#line 136 "elds.m"
                                                  if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 7633 "erl_backend.elds.c"
                                                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                                                  else
#line 136 "elds.m"
                                                    if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 7639 "erl_backend.elds.c"
                                                      *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                                                    else
#line 136 "elds.m"
                                                      if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 7645 "erl_backend.elds.c"
                                                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                                                      else
#line 136 "elds.m"
                                                        if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 7651 "erl_backend.elds.c"
                                                          *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                                                        else
#line 136 "elds.m"
                                                          if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 136 "elds.m"
                                                            {
#line 136 "elds.m"
                                                              MR_Word erl_backend__elds__V_559_559 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 1)));

#line 136 "elds.m"
                                                              /* direct tailcall eliminated */
#line 136 "elds.m"
                                                              {
#line 136 "elds.m"
                                                                MR_Word erl_backend__elds__HeadVar__2__tmp_copy_2 = erl_backend__elds__V_760_760;
#line 136 "elds.m"
                                                                MR_Word erl_backend__elds__HeadVar__3__tmp_copy_3 = erl_backend__elds__V_559_559;

#line 136 "elds.m"
                                                                erl_backend__elds__HeadVar__3_3 = erl_backend__elds__HeadVar__3__tmp_copy_3;
#line 136 "elds.m"
                                                                erl_backend__elds__HeadVar__2_2 = erl_backend__elds__HeadVar__2__tmp_copy_2;
#line 136 "elds.m"
                                                              }
#line 136 "elds.m"
                                                              continue;
#line 136 "elds.m"
                                                            }
#line 136 "elds.m"
                                                          else
#line 136 "elds.m"
                                                            if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 7685 "erl_backend.elds.c"
                                                              *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                                                            else
#line 7689 "erl_backend.elds.c"
                                                              *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                                  }
#line 136 "elds.m"
                                else
#line 136 "elds.m"
                                  if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 136 "elds.m"
                                    {
#line 136 "elds.m"
                                      MR_Word erl_backend__elds__V_761_761 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 4)));
#line 136 "elds.m"
                                      MR_Word erl_backend__elds__V_762_762 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 3)));
#line 136 "elds.m"
                                      MR_Word erl_backend__elds__V_763_763 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 2)));
#line 136 "elds.m"
                                      MR_Word erl_backend__elds__V_764_764 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 1)));

#line 136 "elds.m"
                                      if (((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 7710 "erl_backend.elds.c"
                                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                                      else
#line 136 "elds.m"
                                        if (((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 7716 "erl_backend.elds.c"
                                          *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                                        else
#line 136 "elds.m"
                                          if (((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 7722 "erl_backend.elds.c"
                                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                                          else
#line 136 "elds.m"
                                            if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 7728 "erl_backend.elds.c"
                                              *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                                            else
#line 136 "elds.m"
                                              if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 7734 "erl_backend.elds.c"
                                                *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                                              else
#line 136 "elds.m"
                                                if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 7740 "erl_backend.elds.c"
                                                  *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                                                else
#line 136 "elds.m"
                                                  if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 7746 "erl_backend.elds.c"
                                                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                                                  else
#line 136 "elds.m"
                                                    if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 7752 "erl_backend.elds.c"
                                                      *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                                                    else
#line 136 "elds.m"
                                                      if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 7758 "erl_backend.elds.c"
                                                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                                                      else
#line 136 "elds.m"
                                                        if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 7764 "erl_backend.elds.c"
                                                          *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                                                        else
#line 136 "elds.m"
                                                          if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 7770 "erl_backend.elds.c"
                                                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                                                          else
#line 136 "elds.m"
                                                            if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 7776 "erl_backend.elds.c"
                                                              *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                                                            else
#line 136 "elds.m"
                                                              if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 136 "elds.m"
                                                                {
#line 136 "elds.m"
                                                                  MR_Word erl_backend__elds__V_500_500 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 1)));
#line 136 "elds.m"
                                                                  MR_Word erl_backend__elds__V_501_501 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 2)));
#line 136 "elds.m"
                                                                  MR_Word erl_backend__elds__V_502_502 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 3)));
#line 136 "elds.m"
                                                                  MR_Word erl_backend__elds__V_503_503 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 4)));
#line 136 "elds.m"
                                                                  MR_Word erl_backend__elds__V_504_504;

#line 136 "elds.m"
                                                                  {
#line 136 "elds.m"
                                                                    erl_backend__elds____Compare____elds_expr_0_0(&erl_backend__elds__V_504_504, erl_backend__elds__V_764_764, erl_backend__elds__V_500_500);
                                                                  }
#line 7800 "erl_backend.elds.c"
                                                                  erl_backend__elds__succeeded = (erl_backend__elds__V_504_504 == (MR_Integer) 0);
#line 136 "elds.m"
                                                                  erl_backend__elds__succeeded = !(erl_backend__elds__succeeded);
#line 136 "elds.m"
                                                                  if (erl_backend__elds__succeeded)
#line 136 "elds.m"
                                                                    *erl_backend__elds__HeadVar__1_1 = erl_backend__elds__V_504_504;
#line 136 "elds.m"
                                                                  else
#line 136 "elds.m"
                                                                    {
#line 136 "elds.m"
                                                                      MR_Word erl_backend__elds__V_505_505;

#line 136 "elds.m"
                                                                      {
#line 136 "elds.m"
                                                                        mercury__builtin__compare_3_p_0((MR_Word) &erl_backend__elds_scalar_common_1[11], &erl_backend__elds__V_505_505, ((MR_Box) (erl_backend__elds__V_763_763)), ((MR_Box) (erl_backend__elds__V_501_501)));
                                                                      }
#line 7820 "erl_backend.elds.c"
                                                                      erl_backend__elds__succeeded = (erl_backend__elds__V_505_505 == (MR_Integer) 0);
#line 136 "elds.m"
                                                                      erl_backend__elds__succeeded = !(erl_backend__elds__succeeded);
#line 136 "elds.m"
                                                                      if (erl_backend__elds__succeeded)
#line 136 "elds.m"
                                                                        *erl_backend__elds__HeadVar__1_1 = erl_backend__elds__V_505_505;
#line 136 "elds.m"
                                                                      else
#line 136 "elds.m"
                                                                        {
#line 136 "elds.m"
                                                                          MR_Word erl_backend__elds__V_506_506;

#line 136 "elds.m"
                                                                          {
#line 136 "elds.m"
                                                                            mercury__builtin__compare_3_p_0((MR_Word) &erl_backend__elds_scalar_common_1[12], &erl_backend__elds__V_506_506, ((MR_Box) (erl_backend__elds__V_762_762)), ((MR_Box) (erl_backend__elds__V_502_502)));
                                                                          }
#line 7840 "erl_backend.elds.c"
                                                                          erl_backend__elds__succeeded = (erl_backend__elds__V_506_506 == (MR_Integer) 0);
#line 136 "elds.m"
                                                                          erl_backend__elds__succeeded = !(erl_backend__elds__succeeded);
#line 136 "elds.m"
                                                                          if (erl_backend__elds__succeeded)
#line 136 "elds.m"
                                                                            *erl_backend__elds__HeadVar__1_1 = erl_backend__elds__V_506_506;
#line 136 "elds.m"
                                                                          else
#line 136 "elds.m"
                                                                            {
#line 136 "elds.m"
                                                                              {
#line 136 "elds.m"
                                                                                mercury__builtin__compare_3_p_0((MR_Word) &erl_backend__elds_scalar_common_1[13], erl_backend__elds__HeadVar__1_1, ((MR_Box) (erl_backend__elds__V_761_761)), ((MR_Box) (erl_backend__elds__V_503_503)));
#line 136 "elds.m"
                                                                                return;
                                                                              }
#line 136 "elds.m"
                                                                            }
#line 136 "elds.m"
                                                                        }
#line 136 "elds.m"
                                                                    }
#line 136 "elds.m"
                                                                }
#line 136 "elds.m"
                                                              else
#line 7869 "erl_backend.elds.c"
                                                                *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                                    }
#line 136 "elds.m"
                                  else
#line 136 "elds.m"
                                    {
#line 136 "elds.m"
                                      MR_Word erl_backend__elds__V_765_765 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 2)));
#line 136 "elds.m"
                                      MR_Word erl_backend__elds__V_766_766 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 1)));

#line 136 "elds.m"
                                      if (((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 7884 "erl_backend.elds.c"
                                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                                      else
#line 136 "elds.m"
                                        if (((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 7890 "erl_backend.elds.c"
                                          *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                                        else
#line 136 "elds.m"
                                          if (((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 7896 "erl_backend.elds.c"
                                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                                          else
#line 136 "elds.m"
                                            if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 7902 "erl_backend.elds.c"
                                              *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                                            else
#line 136 "elds.m"
                                              if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 7908 "erl_backend.elds.c"
                                                *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                                              else
#line 136 "elds.m"
                                                if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 7914 "erl_backend.elds.c"
                                                  *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                                                else
#line 136 "elds.m"
                                                  if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 7920 "erl_backend.elds.c"
                                                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                                                  else
#line 136 "elds.m"
                                                    if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 7926 "erl_backend.elds.c"
                                                      *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                                                    else
#line 136 "elds.m"
                                                      if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 7932 "erl_backend.elds.c"
                                                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                                                      else
#line 136 "elds.m"
                                                        if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 7938 "erl_backend.elds.c"
                                                          *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                                                        else
#line 136 "elds.m"
                                                          if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 7944 "erl_backend.elds.c"
                                                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                                                          else
#line 136 "elds.m"
                                                            if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 7950 "erl_backend.elds.c"
                                                              *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                                                            else
#line 136 "elds.m"
                                                              if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 7956 "erl_backend.elds.c"
                                                                *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                                                              else
#line 136 "elds.m"
                                                                {
#line 136 "elds.m"
                                                                  MR_Word erl_backend__elds__V_148_148 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 1)));
#line 136 "elds.m"
                                                                  MR_Word erl_backend__elds__V_149_149 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 2)));
#line 136 "elds.m"
                                                                  MR_Word erl_backend__elds__V_150_150;
#line 136 "elds.m"
                                                                  MR_Integer erl_backend__elds__V_769_769 = (MR_Integer) erl_backend__elds__V_766_766;
#line 136 "elds.m"
                                                                  MR_Integer erl_backend__elds__V_770_770 = (MR_Integer) erl_backend__elds__V_148_148;

#line 136 "elds.m"
                                                                  {
#line 136 "elds.m"
                                                                    mercury__private_builtin__builtin_compare_int_3_p_0(&erl_backend__elds__V_150_150, erl_backend__elds__V_769_769, erl_backend__elds__V_770_770);
                                                                  }
#line 7978 "erl_backend.elds.c"
                                                                  erl_backend__elds__succeeded = (erl_backend__elds__V_150_150 == (MR_Integer) 0);
#line 136 "elds.m"
                                                                  erl_backend__elds__succeeded = !(erl_backend__elds__succeeded);
#line 136 "elds.m"
                                                                  if (erl_backend__elds__succeeded)
#line 136 "elds.m"
                                                                    *erl_backend__elds__HeadVar__1_1 = erl_backend__elds__V_150_150;
#line 136 "elds.m"
                                                                  else
#line 136 "elds.m"
                                                                    {
#line 136 "elds.m"
                                                                      /* direct tailcall eliminated */
#line 136 "elds.m"
                                                                      {
#line 136 "elds.m"
                                                                        MR_Word erl_backend__elds__HeadVar__2__tmp_copy_2 = erl_backend__elds__V_765_765;
#line 136 "elds.m"
                                                                        MR_Word erl_backend__elds__HeadVar__3__tmp_copy_3 = erl_backend__elds__V_149_149;

#line 136 "elds.m"
                                                                        erl_backend__elds__HeadVar__3_3 = erl_backend__elds__HeadVar__3__tmp_copy_3;
#line 136 "elds.m"
                                                                        erl_backend__elds__HeadVar__2_2 = erl_backend__elds__HeadVar__2__tmp_copy_2;
#line 136 "elds.m"
                                                                      }
#line 136 "elds.m"
                                                                      continue;
#line 136 "elds.m"
                                                                    }
#line 136 "elds.m"
                                                                }
#line 136 "elds.m"
                                    }
#line 136 "elds.m"
      }
#line 136 "elds.m"
      break;
#line 136 "elds.m"
    }
#line 136 "elds.m"
}

#line 136 "elds.m"
MR_bool MR_CALL 
erl_backend__elds____Unify____elds_expr_0_0(
#line 136 "elds.m"
  MR_Word erl_backend__elds__HeadVar__1_1,
#line 136 "elds.m"
  MR_Word erl_backend__elds__HeadVar__2_2)
#line 136 "elds.m"
{
#line 136 "elds.m"
  while (MR_TRUE)
#line 136 "elds.m"
    {
#line 136 "elds.m"
      /* tailcall optimized into a loop */
#line 136 "elds.m"
      {
#line 136 "elds.m"
        MR_bool erl_backend__elds__succeeded;
#line 136 "elds.m"
        MR_Integer erl_backend__elds__CastX_53 = (MR_Integer) erl_backend__elds__HeadVar__1_1;
#line 136 "elds.m"
        MR_Integer erl_backend__elds__CastY_54 = (MR_Integer) erl_backend__elds__HeadVar__2_2;

#line 136 "elds.m"
        erl_backend__elds__succeeded = (erl_backend__elds__CastX_53 == erl_backend__elds__CastY_54);
#line 136 "elds.m"
        if (erl_backend__elds__succeeded)
#line 136 "elds.m"
          erl_backend__elds__succeeded = MR_TRUE;
#line 136 "elds.m"
        else
#line 136 "elds.m"
          if (((MR_tag((MR_Word) erl_backend__elds__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 136 "elds.m"
            {
#line 136 "elds.m"
              MR_Word erl_backend__elds__TypeInfo_55_55;
#line 136 "elds.m"
              MR_Word erl_backend__elds__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds__HeadVar__1_1, (MR_Integer) 0)));
#line 136 "elds.m"
              MR_Word erl_backend__elds__V_4_4;

#line 136 "elds.m"
              erl_backend__elds__succeeded = ((MR_tag((MR_Word) erl_backend__elds__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 136 "elds.m"
              if (erl_backend__elds__succeeded)
#line 136 "elds.m"
                {
#line 136 "elds.m"
                  erl_backend__elds__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)));
#line 8073 "erl_backend.elds.c"
                  erl_backend__elds__TypeInfo_55_55 = (MR_Word) &erl_backend__elds_scalar_common_1[14];
#line 8075 "erl_backend.elds.c"
                  {
#line 8077 "erl_backend.elds.c"
                    return erl_backend__elds__succeeded = mercury__builtin__unify_2_p_0(erl_backend__elds__TypeInfo_55_55, ((MR_Box) (erl_backend__elds__V_3_3)), ((MR_Box) (erl_backend__elds__V_4_4)));
                  }
#line 136 "elds.m"
                }
#line 136 "elds.m"
            }
#line 136 "elds.m"
          else
#line 136 "elds.m"
            if (((MR_tag((MR_Word) erl_backend__elds__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 136 "elds.m"
              {
#line 136 "elds.m"
                MR_Word erl_backend__elds__V_27_27 = (MR_Word) MR_body(((MR_Word) erl_backend__elds__HeadVar__1_1), (MR_Integer) 0);
#line 136 "elds.m"
                MR_Word erl_backend__elds__V_28_28;

#line 136 "elds.m"
                erl_backend__elds__succeeded = ((MR_tag((MR_Word) erl_backend__elds__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 136 "elds.m"
                if (erl_backend__elds__succeeded)
#line 136 "elds.m"
                  {
#line 136 "elds.m"
                    erl_backend__elds__V_28_28 = (MR_Word) MR_body(((MR_Word) erl_backend__elds__HeadVar__2_2), (MR_Integer) 0);
#line 8103 "erl_backend.elds.c"
                    {
#line 8105 "erl_backend.elds.c"
                      return erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_clause_0_0(erl_backend__elds__V_27_27, erl_backend__elds__V_28_28);
                    }
#line 136 "elds.m"
                  }
#line 136 "elds.m"
              }
#line 136 "elds.m"
            else
#line 136 "elds.m"
              if (((MR_tag((MR_Word) erl_backend__elds__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 136 "elds.m"
                {
#line 136 "elds.m"
                  MR_Word erl_backend__elds__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(2), erl_backend__elds__HeadVar__1_1, (MR_Integer) 0)));
#line 136 "elds.m"
                  MR_Word erl_backend__elds__V_6_6;

#line 136 "elds.m"
                  erl_backend__elds__succeeded = ((MR_tag((MR_Word) erl_backend__elds__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 136 "elds.m"
                  if (erl_backend__elds__succeeded)
#line 136 "elds.m"
                    {
#line 136 "elds.m"
                      erl_backend__elds__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(2), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)));
#line 8131 "erl_backend.elds.c"
                      {
#line 8133 "erl_backend.elds.c"
                        return erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_term_0_0(erl_backend__elds__V_5_5, erl_backend__elds__V_6_6);
                      }
#line 136 "elds.m"
                    }
#line 136 "elds.m"
                }
#line 136 "elds.m"
              else
#line 136 "elds.m"
                if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 136 "elds.m"
                  {
#line 136 "elds.m"
                    MR_Word erl_backend__elds__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__1_1, (MR_Integer) 1)));
#line 136 "elds.m"
                    MR_Word erl_backend__elds__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__1_1, (MR_Integer) 2)));
#line 136 "elds.m"
                    MR_Word erl_backend__elds__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__1_1, (MR_Integer) 3)));
#line 136 "elds.m"
                    MR_Word erl_backend__elds__V_18_18;
#line 136 "elds.m"
                    MR_Word erl_backend__elds__V_19_19;
#line 136 "elds.m"
                    MR_Word erl_backend__elds__V_20_20;

#line 136 "elds.m"
                    erl_backend__elds__succeeded = ((((MR_tag((MR_Word) erl_backend__elds__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 136 "elds.m"
                    if (erl_backend__elds__succeeded)
#line 136 "elds.m"
                      {
#line 136 "elds.m"
                        erl_backend__elds__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 1)));
#line 136 "elds.m"
                        erl_backend__elds__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 2)));
#line 136 "elds.m"
                        erl_backend__elds__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 3)));
#line 8171 "erl_backend.elds.c"
                        erl_backend__elds__succeeded = (erl_backend__elds__V_15_15 == erl_backend__elds__V_18_18);
#line 136 "elds.m"
                        if (erl_backend__elds__succeeded)
#line 136 "elds.m"
                          {
#line 8177 "erl_backend.elds.c"
                            {
#line 8179 "erl_backend.elds.c"
                              erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_expr_0_0(erl_backend__elds__V_16_16, erl_backend__elds__V_19_19);
                            }
#line 136 "elds.m"
                            if (erl_backend__elds__succeeded)
#line 8184 "erl_backend.elds.c"
                              {
#line 8186 "erl_backend.elds.c"
                                /* direct tailcall eliminated */
#line 8188 "erl_backend.elds.c"
                                {
#line 8190 "erl_backend.elds.c"
                                  MR_Word erl_backend__elds__HeadVar__1__tmp_copy_1 = erl_backend__elds__V_17_17;
#line 8192 "erl_backend.elds.c"
                                  MR_Word erl_backend__elds__HeadVar__2__tmp_copy_2 = erl_backend__elds__V_20_20;

#line 8195 "erl_backend.elds.c"
                                  erl_backend__elds__HeadVar__2_2 = erl_backend__elds__HeadVar__2__tmp_copy_2;
#line 8197 "erl_backend.elds.c"
                                  erl_backend__elds__HeadVar__1_1 = erl_backend__elds__HeadVar__1__tmp_copy_1;
#line 8199 "erl_backend.elds.c"
                                }
#line 8201 "erl_backend.elds.c"
                                continue;
#line 8203 "erl_backend.elds.c"
                              }
#line 136 "elds.m"
                          }
#line 136 "elds.m"
                      }
#line 136 "elds.m"
                  }
#line 136 "elds.m"
                else
#line 136 "elds.m"
                  if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 136 "elds.m"
                    {
#line 136 "elds.m"
                      MR_Word erl_backend__elds__TypeInfo_56_56;
#line 136 "elds.m"
                      MR_Word erl_backend__elds__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__1_1, (MR_Integer) 1)));
#line 136 "elds.m"
                      MR_Word erl_backend__elds__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__1_1, (MR_Integer) 2)));
#line 136 "elds.m"
                      MR_Word erl_backend__elds__V_23_23;
#line 136 "elds.m"
                      MR_Word erl_backend__elds__V_24_24;

#line 136 "elds.m"
                      erl_backend__elds__succeeded = ((((MR_tag((MR_Word) erl_backend__elds__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 136 "elds.m"
                      if (erl_backend__elds__succeeded)
#line 136 "elds.m"
                        {
#line 136 "elds.m"
                          erl_backend__elds__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 1)));
#line 136 "elds.m"
                          erl_backend__elds__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 2)));
#line 8238 "erl_backend.elds.c"
                          {
#line 8240 "erl_backend.elds.c"
                            erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_call_target_0_0(erl_backend__elds__V_21_21, erl_backend__elds__V_23_23);
                          }
#line 136 "elds.m"
                          if (erl_backend__elds__succeeded)
#line 136 "elds.m"
                            {
#line 8247 "erl_backend.elds.c"
                              erl_backend__elds__TypeInfo_56_56 = (MR_Word) &erl_backend__elds_scalar_common_1[14];
#line 8249 "erl_backend.elds.c"
                              {
#line 8251 "erl_backend.elds.c"
                                return erl_backend__elds__succeeded = mercury__builtin__unify_2_p_0(erl_backend__elds__TypeInfo_56_56, ((MR_Box) (erl_backend__elds__V_22_22)), ((MR_Box) (erl_backend__elds__V_24_24)));
                              }
#line 136 "elds.m"
                            }
#line 136 "elds.m"
                        }
#line 136 "elds.m"
                    }
#line 136 "elds.m"
                  else
#line 136 "elds.m"
                    if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 136 "elds.m"
                      {
#line 136 "elds.m"
                        MR_Word erl_backend__elds__TypeInfo_57_57;
#line 136 "elds.m"
                        MR_Word erl_backend__elds__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__1_1, (MR_Integer) 1)));
#line 136 "elds.m"
                        MR_Word erl_backend__elds__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__1_1, (MR_Integer) 2)));
#line 136 "elds.m"
                        MR_Word erl_backend__elds__V_31_31;
#line 136 "elds.m"
                        MR_Word erl_backend__elds__V_32_32;

#line 136 "elds.m"
                        erl_backend__elds__succeeded = ((((MR_tag((MR_Word) erl_backend__elds__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 136 "elds.m"
                        if (erl_backend__elds__succeeded)
#line 136 "elds.m"
                          {
#line 136 "elds.m"
                            erl_backend__elds__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 1)));
#line 136 "elds.m"
                            erl_backend__elds__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 2)));
#line 8287 "erl_backend.elds.c"
                            {
#line 8289 "erl_backend.elds.c"
                              erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_expr_0_0(erl_backend__elds__V_29_29, erl_backend__elds__V_31_31);
                            }
#line 136 "elds.m"
                            if (erl_backend__elds__succeeded)
#line 136 "elds.m"
                              {
#line 8296 "erl_backend.elds.c"
                                erl_backend__elds__TypeInfo_57_57 = (MR_Word) &erl_backend__elds_scalar_common_1[11];
#line 8298 "erl_backend.elds.c"
                                {
#line 8300 "erl_backend.elds.c"
                                  return erl_backend__elds__succeeded = mercury__builtin__unify_2_p_0(erl_backend__elds__TypeInfo_57_57, ((MR_Box) (erl_backend__elds__V_30_30)), ((MR_Box) (erl_backend__elds__V_32_32)));
                                }
#line 136 "elds.m"
                              }
#line 136 "elds.m"
                          }
#line 136 "elds.m"
                      }
#line 136 "elds.m"
                    else
#line 136 "elds.m"
                      if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 136 "elds.m"
                        {
#line 136 "elds.m"
                          MR_Word erl_backend__elds__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__1_1, (MR_Integer) 1)));
#line 136 "elds.m"
                          MR_Word erl_backend__elds__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__1_1, (MR_Integer) 2)));
#line 136 "elds.m"
                          MR_Word erl_backend__elds__V_9_9;
#line 136 "elds.m"
                          MR_Word erl_backend__elds__V_10_10;

#line 136 "elds.m"
                          erl_backend__elds__succeeded = ((((MR_tag((MR_Word) erl_backend__elds__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 136 "elds.m"
                          if (erl_backend__elds__succeeded)
#line 136 "elds.m"
                            {
#line 136 "elds.m"
                              erl_backend__elds__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 1)));
#line 136 "elds.m"
                              erl_backend__elds__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 2)));
#line 8334 "erl_backend.elds.c"
                              {
#line 8336 "erl_backend.elds.c"
                                erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_expr_0_0(erl_backend__elds__V_7_7, erl_backend__elds__V_9_9);
                              }
#line 136 "elds.m"
                              if (erl_backend__elds__succeeded)
#line 8341 "erl_backend.elds.c"
                                {
#line 8343 "erl_backend.elds.c"
                                  /* direct tailcall eliminated */
#line 8345 "erl_backend.elds.c"
                                  {
#line 8347 "erl_backend.elds.c"
                                    MR_Word erl_backend__elds__HeadVar__1__tmp_copy_1 = erl_backend__elds__V_8_8;
#line 8349 "erl_backend.elds.c"
                                    MR_Word erl_backend__elds__HeadVar__2__tmp_copy_2 = erl_backend__elds__V_10_10;

#line 8352 "erl_backend.elds.c"
                                    erl_backend__elds__HeadVar__2_2 = erl_backend__elds__HeadVar__2__tmp_copy_2;
#line 8354 "erl_backend.elds.c"
                                    erl_backend__elds__HeadVar__1_1 = erl_backend__elds__HeadVar__1__tmp_copy_1;
#line 8356 "erl_backend.elds.c"
                                  }
#line 8358 "erl_backend.elds.c"
                                  continue;
#line 8360 "erl_backend.elds.c"
                                }
#line 136 "elds.m"
                            }
#line 136 "elds.m"
                        }
#line 136 "elds.m"
                      else
#line 136 "elds.m"
                        if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 136 "elds.m"
                          {
#line 136 "elds.m"
                            MR_String erl_backend__elds__V_43_43 = ((MR_String) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__1_1, (MR_Integer) 1)));
#line 136 "elds.m"
                            MR_Word erl_backend__elds__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__1_1, (MR_Integer) 2)));
#line 136 "elds.m"
                            MR_String erl_backend__elds__V_45_45;
#line 136 "elds.m"
                            MR_Word erl_backend__elds__V_46_46;

#line 136 "elds.m"
                            erl_backend__elds__succeeded = ((((MR_tag((MR_Word) erl_backend__elds__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 8)));
#line 136 "elds.m"
                            if (erl_backend__elds__succeeded)
#line 136 "elds.m"
                              {
#line 136 "elds.m"
                                erl_backend__elds__V_45_45 = ((MR_String) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 1)));
#line 136 "elds.m"
                                erl_backend__elds__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 2)));
#line 8391 "erl_backend.elds.c"
                                erl_backend__elds__succeeded = (strcmp(erl_backend__elds__V_43_43, erl_backend__elds__V_45_45) == 0);
#line 136 "elds.m"
                                if (erl_backend__elds__succeeded)
#line 8395 "erl_backend.elds.c"
                                  {
#line 8397 "erl_backend.elds.c"
                                    return erl_backend__elds__succeeded = mercury__term____Unify____context_0_0(erl_backend__elds__V_44_44, erl_backend__elds__V_46_46);
                                  }
#line 136 "elds.m"
                              }
#line 136 "elds.m"
                          }
#line 136 "elds.m"
                        else
#line 136 "elds.m"
                          if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 136 "elds.m"
                            {
#line 136 "elds.m"
                              MR_Word erl_backend__elds__TypeInfo_59_59;
#line 136 "elds.m"
                              MR_Word erl_backend__elds__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__1_1, (MR_Integer) 1)));
#line 136 "elds.m"
                              MR_Word erl_backend__elds__V_52_52;

#line 136 "elds.m"
                              erl_backend__elds__succeeded = ((((MR_tag((MR_Word) erl_backend__elds__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 10)));
#line 136 "elds.m"
                              if (erl_backend__elds__succeeded)
#line 136 "elds.m"
                                {
#line 136 "elds.m"
                                  erl_backend__elds__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 1)));
#line 8425 "erl_backend.elds.c"
                                  erl_backend__elds__TypeInfo_59_59 = (MR_Word) &erl_backend__elds_scalar_common_1[11];
#line 8427 "erl_backend.elds.c"
                                  {
#line 8429 "erl_backend.elds.c"
                                    return erl_backend__elds__succeeded = mercury__builtin__unify_2_p_0(erl_backend__elds__TypeInfo_59_59, ((MR_Box) (erl_backend__elds__V_51_51)), ((MR_Box) (erl_backend__elds__V_52_52)));
                                  }
#line 136 "elds.m"
                                }
#line 136 "elds.m"
                            }
#line 136 "elds.m"
                          else
#line 136 "elds.m"
                            if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 136 "elds.m"
                              {
#line 136 "elds.m"
                                MR_Word erl_backend__elds__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__1_1, (MR_Integer) 1)));
#line 136 "elds.m"
                                MR_Word erl_backend__elds__V_26_26;

#line 136 "elds.m"
                                erl_backend__elds__succeeded = ((((MR_tag((MR_Word) erl_backend__elds__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 136 "elds.m"
                                if (erl_backend__elds__succeeded)
#line 136 "elds.m"
                                  {
#line 136 "elds.m"
                                    erl_backend__elds__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 1)));
#line 8455 "erl_backend.elds.c"
                                    {
#line 8457 "erl_backend.elds.c"
                                      return erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_rtti_id_0_0(erl_backend__elds__V_25_25, erl_backend__elds__V_26_26);
                                    }
#line 136 "elds.m"
                                  }
#line 136 "elds.m"
                              }
#line 136 "elds.m"
                            else
#line 136 "elds.m"
                              if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 136 "elds.m"
                                {
#line 136 "elds.m"
                                  MR_Word erl_backend__elds__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__1_1, (MR_Integer) 1)));
#line 136 "elds.m"
                                  MR_Word erl_backend__elds__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__1_1, (MR_Integer) 2)));
#line 136 "elds.m"
                                  MR_Word erl_backend__elds__V_49_49;
#line 136 "elds.m"
                                  MR_Word erl_backend__elds__V_50_50;

#line 136 "elds.m"
                                  erl_backend__elds__succeeded = ((((MR_tag((MR_Word) erl_backend__elds__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 9)));
#line 136 "elds.m"
                                  if (erl_backend__elds__succeeded)
#line 136 "elds.m"
                                    {
#line 136 "elds.m"
                                      erl_backend__elds__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 1)));
#line 136 "elds.m"
                                      erl_backend__elds__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 2)));
#line 8489 "erl_backend.elds.c"
                                      {
#line 8491 "erl_backend.elds.c"
                                        erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_expr_0_0(erl_backend__elds__V_47_47, erl_backend__elds__V_49_49);
                                      }
#line 136 "elds.m"
                                      if (erl_backend__elds__succeeded)
#line 8496 "erl_backend.elds.c"
                                        {
#line 8498 "erl_backend.elds.c"
                                          /* direct tailcall eliminated */
#line 8500 "erl_backend.elds.c"
                                          {
#line 8502 "erl_backend.elds.c"
                                            MR_Word erl_backend__elds__HeadVar__1__tmp_copy_1 = erl_backend__elds__V_48_48;
#line 8504 "erl_backend.elds.c"
                                            MR_Word erl_backend__elds__HeadVar__2__tmp_copy_2 = erl_backend__elds__V_50_50;

#line 8507 "erl_backend.elds.c"
                                            erl_backend__elds__HeadVar__2_2 = erl_backend__elds__HeadVar__2__tmp_copy_2;
#line 8509 "erl_backend.elds.c"
                                            erl_backend__elds__HeadVar__1_1 = erl_backend__elds__HeadVar__1__tmp_copy_1;
#line 8511 "erl_backend.elds.c"
                                          }
#line 8513 "erl_backend.elds.c"
                                          continue;
#line 8515 "erl_backend.elds.c"
                                        }
#line 136 "elds.m"
                                    }
#line 136 "elds.m"
                                }
#line 136 "elds.m"
                              else
#line 136 "elds.m"
                                if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 136 "elds.m"
                                  {
#line 136 "elds.m"
                                    MR_Word erl_backend__elds__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__1_1, (MR_Integer) 1)));
#line 136 "elds.m"
                                    MR_Word erl_backend__elds__V_42_42;

#line 136 "elds.m"
                                    erl_backend__elds__succeeded = ((((MR_tag((MR_Word) erl_backend__elds__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 7)));
#line 136 "elds.m"
                                    if (erl_backend__elds__succeeded)
#line 136 "elds.m"
                                      {
#line 136 "elds.m"
                                        erl_backend__elds__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 1)));
#line 8540 "erl_backend.elds.c"
                                        /* direct tailcall eliminated */
#line 8542 "erl_backend.elds.c"
                                        {
#line 8544 "erl_backend.elds.c"
                                          MR_Word erl_backend__elds__HeadVar__1__tmp_copy_1 = erl_backend__elds__V_41_41;
#line 8546 "erl_backend.elds.c"
                                          MR_Word erl_backend__elds__HeadVar__2__tmp_copy_2 = erl_backend__elds__V_42_42;

#line 8549 "erl_backend.elds.c"
                                          erl_backend__elds__HeadVar__2_2 = erl_backend__elds__HeadVar__2__tmp_copy_2;
#line 8551 "erl_backend.elds.c"
                                          erl_backend__elds__HeadVar__1_1 = erl_backend__elds__HeadVar__1__tmp_copy_1;
#line 8553 "erl_backend.elds.c"
                                        }
#line 8555 "erl_backend.elds.c"
                                        continue;
#line 136 "elds.m"
                                      }
#line 136 "elds.m"
                                  }
#line 136 "elds.m"
                                else
#line 136 "elds.m"
                                  if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 136 "elds.m"
                                    {
#line 136 "elds.m"
                                      MR_Word erl_backend__elds__TypeInfo_60_60;
#line 136 "elds.m"
                                      MR_Word erl_backend__elds__TypeInfo_61_61;
#line 136 "elds.m"
                                      MR_Word erl_backend__elds__TypeInfo_62_62;
#line 136 "elds.m"
                                      MR_Word erl_backend__elds__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__1_1, (MR_Integer) 1)));
#line 136 "elds.m"
                                      MR_Word erl_backend__elds__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__1_1, (MR_Integer) 2)));
#line 136 "elds.m"
                                      MR_Word erl_backend__elds__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__1_1, (MR_Integer) 3)));
#line 136 "elds.m"
                                      MR_Word erl_backend__elds__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__1_1, (MR_Integer) 4)));
#line 136 "elds.m"
                                      MR_Word erl_backend__elds__V_37_37;
#line 136 "elds.m"
                                      MR_Word erl_backend__elds__V_38_38;
#line 136 "elds.m"
                                      MR_Word erl_backend__elds__V_39_39;
#line 136 "elds.m"
                                      MR_Word erl_backend__elds__V_40_40;

#line 136 "elds.m"
                                      erl_backend__elds__succeeded = ((((MR_tag((MR_Word) erl_backend__elds__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 136 "elds.m"
                                      if (erl_backend__elds__succeeded)
#line 136 "elds.m"
                                        {
#line 136 "elds.m"
                                          erl_backend__elds__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 1)));
#line 136 "elds.m"
                                          erl_backend__elds__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 2)));
#line 136 "elds.m"
                                          erl_backend__elds__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 3)));
#line 136 "elds.m"
                                          erl_backend__elds__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 4)));
#line 8604 "erl_backend.elds.c"
                                          {
#line 8606 "erl_backend.elds.c"
                                            erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_expr_0_0(erl_backend__elds__V_33_33, erl_backend__elds__V_37_37);
                                          }
#line 136 "elds.m"
                                          if (erl_backend__elds__succeeded)
#line 136 "elds.m"
                                            {
#line 8613 "erl_backend.elds.c"
                                              erl_backend__elds__TypeInfo_60_60 = (MR_Word) &erl_backend__elds_scalar_common_1[11];
#line 8615 "erl_backend.elds.c"
                                              {
#line 8617 "erl_backend.elds.c"
                                                erl_backend__elds__succeeded = mercury__builtin__unify_2_p_0(erl_backend__elds__TypeInfo_60_60, ((MR_Box) (erl_backend__elds__V_34_34)), ((MR_Box) (erl_backend__elds__V_38_38)));
                                              }
#line 136 "elds.m"
                                              if (erl_backend__elds__succeeded)
#line 136 "elds.m"
                                                {
#line 8624 "erl_backend.elds.c"
                                                  erl_backend__elds__TypeInfo_61_61 = (MR_Word) &erl_backend__elds_scalar_common_1[12];
#line 8626 "erl_backend.elds.c"
                                                  {
#line 8628 "erl_backend.elds.c"
                                                    erl_backend__elds__succeeded = mercury__builtin__unify_2_p_0(erl_backend__elds__TypeInfo_61_61, ((MR_Box) (erl_backend__elds__V_35_35)), ((MR_Box) (erl_backend__elds__V_39_39)));
                                                  }
#line 136 "elds.m"
                                                  if (erl_backend__elds__succeeded)
#line 136 "elds.m"
                                                    {
#line 8635 "erl_backend.elds.c"
                                                      erl_backend__elds__TypeInfo_62_62 = (MR_Word) &erl_backend__elds_scalar_common_1[13];
#line 8637 "erl_backend.elds.c"
                                                      {
#line 8639 "erl_backend.elds.c"
                                                        return erl_backend__elds__succeeded = mercury__builtin__unify_2_p_0(erl_backend__elds__TypeInfo_62_62, ((MR_Box) (erl_backend__elds__V_36_36)), ((MR_Box) (erl_backend__elds__V_40_40)));
                                                      }
#line 136 "elds.m"
                                                    }
#line 136 "elds.m"
                                                }
#line 136 "elds.m"
                                            }
#line 136 "elds.m"
                                        }
#line 136 "elds.m"
                                    }
#line 136 "elds.m"
                                  else
#line 136 "elds.m"
                                    {
#line 136 "elds.m"
                                      MR_Word erl_backend__elds__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__1_1, (MR_Integer) 1)));
#line 136 "elds.m"
                                      MR_Word erl_backend__elds__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__1_1, (MR_Integer) 2)));
#line 136 "elds.m"
                                      MR_Word erl_backend__elds__V_13_13;
#line 136 "elds.m"
                                      MR_Word erl_backend__elds__V_14_14;

#line 136 "elds.m"
                                      erl_backend__elds__succeeded = ((((MR_tag((MR_Word) erl_backend__elds__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 136 "elds.m"
                                      if (erl_backend__elds__succeeded)
#line 136 "elds.m"
                                        {
#line 136 "elds.m"
                                          erl_backend__elds__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 1)));
#line 136 "elds.m"
                                          erl_backend__elds__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 2)));
#line 8675 "erl_backend.elds.c"
                                          erl_backend__elds__succeeded = (erl_backend__elds__V_11_11 == erl_backend__elds__V_13_13);
#line 136 "elds.m"
                                          if (erl_backend__elds__succeeded)
#line 8679 "erl_backend.elds.c"
                                            {
#line 8681 "erl_backend.elds.c"
                                              /* direct tailcall eliminated */
#line 8683 "erl_backend.elds.c"
                                              {
#line 8685 "erl_backend.elds.c"
                                                MR_Word erl_backend__elds__HeadVar__1__tmp_copy_1 = erl_backend__elds__V_12_12;
#line 8687 "erl_backend.elds.c"
                                                MR_Word erl_backend__elds__HeadVar__2__tmp_copy_2 = erl_backend__elds__V_14_14;

#line 8690 "erl_backend.elds.c"
                                                erl_backend__elds__HeadVar__2_2 = erl_backend__elds__HeadVar__2__tmp_copy_2;
#line 8692 "erl_backend.elds.c"
                                                erl_backend__elds__HeadVar__1_1 = erl_backend__elds__HeadVar__1__tmp_copy_1;
#line 8694 "erl_backend.elds.c"
                                              }
#line 8696 "erl_backend.elds.c"
                                              continue;
#line 8698 "erl_backend.elds.c"
                                            }
#line 136 "elds.m"
                                        }
#line 136 "elds.m"
                                    }
#line 136 "elds.m"
        return erl_backend__elds__succeeded;
#line 136 "elds.m"
      }
#line 136 "elds.m"
      break;
#line 136 "elds.m"
    }
#line 136 "elds.m"
}

#line 73 "elds.m"
void MR_CALL 
erl_backend__elds____Compare____elds_defn_0_0(
#line 73 "elds.m"
  MR_Word * erl_backend__elds__HeadVar__1_1,
#line 73 "elds.m"
  MR_Word erl_backend__elds__HeadVar__2_2,
#line 73 "elds.m"
  MR_Word erl_backend__elds__HeadVar__3_3)
#line 73 "elds.m"
{
#line 73 "elds.m"
  {
#line 73 "elds.m"
    MR_bool erl_backend__elds__succeeded;
#line 73 "elds.m"
    MR_Integer erl_backend__elds__CastX_15 = (MR_Integer) erl_backend__elds__HeadVar__2_2;
#line 73 "elds.m"
    MR_Integer erl_backend__elds__CastY_16 = (MR_Integer) erl_backend__elds__HeadVar__3_3;

#line 73 "elds.m"
    erl_backend__elds__succeeded = (erl_backend__elds__CastX_15 == erl_backend__elds__CastY_16);
#line 73 "elds.m"
    if (erl_backend__elds__succeeded)
#line 8739 "erl_backend.elds.c"
      *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 0;
#line 73 "elds.m"
    else
#line 73 "elds.m"
      {
#line 73 "elds.m"
        MR_Word erl_backend__elds__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)));
#line 73 "elds.m"
        MR_Word erl_backend__elds__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__2_2, (MR_Integer) 1)));
#line 73 "elds.m"
        MR_Word erl_backend__elds__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__2_2, (MR_Integer) 2)));
#line 73 "elds.m"
        MR_Word erl_backend__elds__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__2_2, (MR_Integer) 3)));
#line 73 "elds.m"
        MR_Word erl_backend__elds__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)));
#line 73 "elds.m"
        MR_Word erl_backend__elds__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__3_3, (MR_Integer) 1)));
#line 73 "elds.m"
        MR_Word erl_backend__elds__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__3_3, (MR_Integer) 2)));
#line 73 "elds.m"
        MR_Word erl_backend__elds__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__3_3, (MR_Integer) 3)));
#line 73 "elds.m"
        MR_Word erl_backend__elds__V_12_12;

#line 73 "elds.m"
        {
#line 73 "elds.m"
          hlds__hlds_pred____Compare____pred_proc_id_0_0(&erl_backend__elds__V_12_12, erl_backend__elds__V_4_4, erl_backend__elds__V_8_8);
        }
#line 8769 "erl_backend.elds.c"
        erl_backend__elds__succeeded = (erl_backend__elds__V_12_12 == (MR_Integer) 0);
#line 73 "elds.m"
        erl_backend__elds__succeeded = !(erl_backend__elds__succeeded);
#line 73 "elds.m"
        if (erl_backend__elds__succeeded)
#line 73 "elds.m"
          *erl_backend__elds__HeadVar__1_1 = erl_backend__elds__V_12_12;
#line 73 "elds.m"
        else
#line 73 "elds.m"
          {
#line 73 "elds.m"
            MR_Word erl_backend__elds__V_13_13;

#line 73 "elds.m"
            {
#line 73 "elds.m"
              mercury__builtin__compare_3_p_0((MR_Word) &erl_backend__elds_scalar_common_1[9], &erl_backend__elds__V_13_13, ((MR_Box) (erl_backend__elds__V_5_5)), ((MR_Box) (erl_backend__elds__V_9_9)));
            }
#line 8789 "erl_backend.elds.c"
            erl_backend__elds__succeeded = (erl_backend__elds__V_13_13 == (MR_Integer) 0);
#line 73 "elds.m"
            erl_backend__elds__succeeded = !(erl_backend__elds__succeeded);
#line 73 "elds.m"
            if (erl_backend__elds__succeeded)
#line 73 "elds.m"
              *erl_backend__elds__HeadVar__1_1 = erl_backend__elds__V_13_13;
#line 73 "elds.m"
            else
#line 73 "elds.m"
              {
#line 73 "elds.m"
                MR_Word erl_backend__elds__V_14_14;

#line 73 "elds.m"
                {
#line 73 "elds.m"
                  erl_backend__elds____Compare____elds_body_0_0(&erl_backend__elds__V_14_14, erl_backend__elds__V_6_6, erl_backend__elds__V_10_10);
                }
#line 8809 "erl_backend.elds.c"
                erl_backend__elds__succeeded = (erl_backend__elds__V_14_14 == (MR_Integer) 0);
#line 73 "elds.m"
                erl_backend__elds__succeeded = !(erl_backend__elds__succeeded);
#line 73 "elds.m"
                if (erl_backend__elds__succeeded)
#line 73 "elds.m"
                  *erl_backend__elds__HeadVar__1_1 = erl_backend__elds__V_14_14;
#line 73 "elds.m"
                else
#line 73 "elds.m"
                  {
#line 73 "elds.m"
                    {
#line 73 "elds.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &erl_backend__elds_scalar_common_1[10], erl_backend__elds__HeadVar__1_1, ((MR_Box) (erl_backend__elds__V_7_7)), ((MR_Box) (erl_backend__elds__V_11_11)));
#line 73 "elds.m"
                      return;
                    }
#line 73 "elds.m"
                  }
#line 73 "elds.m"
              }
#line 73 "elds.m"
          }
#line 73 "elds.m"
      }
#line 73 "elds.m"
  }
#line 73 "elds.m"
}

#line 73 "elds.m"
MR_bool MR_CALL 
erl_backend__elds____Unify____elds_defn_0_0(
#line 73 "elds.m"
  MR_Word erl_backend__elds__HeadVar__1_1,
#line 73 "elds.m"
  MR_Word erl_backend__elds__HeadVar__2_2)
#line 73 "elds.m"
{
#line 73 "elds.m"
  {
#line 73 "elds.m"
    MR_bool erl_backend__elds__succeeded;
#line 73 "elds.m"
    MR_Integer erl_backend__elds__CastX_11 = (MR_Integer) erl_backend__elds__HeadVar__1_1;
#line 73 "elds.m"
    MR_Integer erl_backend__elds__CastY_12 = (MR_Integer) erl_backend__elds__HeadVar__2_2;

#line 73 "elds.m"
    erl_backend__elds__succeeded = (erl_backend__elds__CastX_11 == erl_backend__elds__CastY_12);
#line 73 "elds.m"
    if (erl_backend__elds__succeeded)
#line 73 "elds.m"
      erl_backend__elds__succeeded = MR_TRUE;
#line 73 "elds.m"
    else
#line 73 "elds.m"
      {
#line 73 "elds.m"
        MR_Word erl_backend__elds__TypeInfo_14_14;
#line 73 "elds.m"
        MR_Word erl_backend__elds__TypeInfo_15_15;
#line 73 "elds.m"
        MR_Word erl_backend__elds__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__1_1, (MR_Integer) 0)));
#line 73 "elds.m"
        MR_Word erl_backend__elds__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__1_1, (MR_Integer) 1)));
#line 73 "elds.m"
        MR_Word erl_backend__elds__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__1_1, (MR_Integer) 2)));
#line 73 "elds.m"
        MR_Word erl_backend__elds__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__1_1, (MR_Integer) 3)));
#line 73 "elds.m"
        MR_Word erl_backend__elds__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)));
#line 73 "elds.m"
        MR_Word erl_backend__elds__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__2_2, (MR_Integer) 1)));
#line 73 "elds.m"
        MR_Word erl_backend__elds__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__2_2, (MR_Integer) 2)));
#line 73 "elds.m"
        MR_Word erl_backend__elds__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__2_2, (MR_Integer) 3)));

#line 8890 "erl_backend.elds.c"
        {
#line 8892 "erl_backend.elds.c"
          erl_backend__elds__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(erl_backend__elds__V_3_3, erl_backend__elds__V_7_7);
        }
#line 73 "elds.m"
        if (erl_backend__elds__succeeded)
#line 73 "elds.m"
          {
#line 8899 "erl_backend.elds.c"
            erl_backend__elds__TypeInfo_14_14 = (MR_Word) &erl_backend__elds_scalar_common_1[9];
#line 8901 "erl_backend.elds.c"
            {
#line 8903 "erl_backend.elds.c"
              erl_backend__elds__succeeded = mercury__builtin__unify_2_p_0(erl_backend__elds__TypeInfo_14_14, ((MR_Box) (erl_backend__elds__V_4_4)), ((MR_Box) (erl_backend__elds__V_8_8)));
            }
#line 73 "elds.m"
            if (erl_backend__elds__succeeded)
#line 73 "elds.m"
              {
#line 8910 "erl_backend.elds.c"
                {
#line 8912 "erl_backend.elds.c"
                  erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_body_0_0(erl_backend__elds__V_5_5, erl_backend__elds__V_9_9);
                }
#line 73 "elds.m"
                if (erl_backend__elds__succeeded)
#line 73 "elds.m"
                  {
#line 8919 "erl_backend.elds.c"
                    erl_backend__elds__TypeInfo_15_15 = (MR_Word) &erl_backend__elds_scalar_common_1[10];
#line 8921 "erl_backend.elds.c"
                    {
#line 8923 "erl_backend.elds.c"
                      return erl_backend__elds__succeeded = mercury__builtin__unify_2_p_0(erl_backend__elds__TypeInfo_15_15, ((MR_Box) (erl_backend__elds__V_6_6)), ((MR_Box) (erl_backend__elds__V_10_10)));
                    }
#line 73 "elds.m"
                  }
#line 73 "elds.m"
              }
#line 73 "elds.m"
          }
#line 73 "elds.m"
      }
#line 73 "elds.m"
    return erl_backend__elds__succeeded;
#line 73 "elds.m"
  }
#line 73 "elds.m"
}

#line 128 "elds.m"
void MR_CALL 
erl_backend__elds____Compare____elds_clause_0_0(
#line 128 "elds.m"
  MR_Word * erl_backend__elds__HeadVar__1_1,
#line 128 "elds.m"
  MR_Word erl_backend__elds__HeadVar__2_2,
#line 128 "elds.m"
  MR_Word erl_backend__elds__HeadVar__3_3)
#line 128 "elds.m"
{
#line 128 "elds.m"
  {
#line 128 "elds.m"
    MR_bool erl_backend__elds__succeeded;
#line 128 "elds.m"
    MR_Integer erl_backend__elds__CastX_9 = (MR_Integer) erl_backend__elds__HeadVar__2_2;
#line 128 "elds.m"
    MR_Integer erl_backend__elds__CastY_10 = (MR_Integer) erl_backend__elds__HeadVar__3_3;

#line 128 "elds.m"
    erl_backend__elds__succeeded = (erl_backend__elds__CastX_9 == erl_backend__elds__CastY_10);
#line 128 "elds.m"
    if (erl_backend__elds__succeeded)
#line 8965 "erl_backend.elds.c"
      *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 0;
#line 128 "elds.m"
    else
#line 128 "elds.m"
      {
#line 128 "elds.m"
        MR_Word erl_backend__elds__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)));
#line 128 "elds.m"
        MR_Word erl_backend__elds__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__2_2, (MR_Integer) 1)));
#line 128 "elds.m"
        MR_Word erl_backend__elds__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)));
#line 128 "elds.m"
        MR_Word erl_backend__elds__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__3_3, (MR_Integer) 1)));
#line 128 "elds.m"
        MR_Word erl_backend__elds__V_8_8;

#line 128 "elds.m"
        {
#line 128 "elds.m"
          mercury__builtin__compare_3_p_0((MR_Word) &erl_backend__elds_scalar_common_1[8], &erl_backend__elds__V_8_8, ((MR_Box) (erl_backend__elds__V_4_4)), ((MR_Box) (erl_backend__elds__V_6_6)));
        }
#line 8987 "erl_backend.elds.c"
        erl_backend__elds__succeeded = (erl_backend__elds__V_8_8 == (MR_Integer) 0);
#line 128 "elds.m"
        erl_backend__elds__succeeded = !(erl_backend__elds__succeeded);
#line 128 "elds.m"
        if (erl_backend__elds__succeeded)
#line 128 "elds.m"
          *erl_backend__elds__HeadVar__1_1 = erl_backend__elds__V_8_8;
#line 128 "elds.m"
        else
#line 128 "elds.m"
          {
#line 128 "elds.m"
            erl_backend__elds____Compare____elds_expr_0_0(erl_backend__elds__HeadVar__1_1, erl_backend__elds__V_5_5, erl_backend__elds__V_7_7);
#line 128 "elds.m"
            return;
          }
#line 128 "elds.m"
      }
#line 128 "elds.m"
  }
#line 128 "elds.m"
}

#line 128 "elds.m"
MR_bool MR_CALL 
erl_backend__elds____Unify____elds_clause_0_0(
#line 128 "elds.m"
  MR_Word erl_backend__elds__HeadVar__1_1,
#line 128 "elds.m"
  MR_Word erl_backend__elds__HeadVar__2_2)
#line 128 "elds.m"
{
#line 128 "elds.m"
  {
#line 128 "elds.m"
    MR_bool erl_backend__elds__succeeded;
#line 128 "elds.m"
    MR_Integer erl_backend__elds__CastX_7 = (MR_Integer) erl_backend__elds__HeadVar__1_1;
#line 128 "elds.m"
    MR_Integer erl_backend__elds__CastY_8 = (MR_Integer) erl_backend__elds__HeadVar__2_2;

#line 128 "elds.m"
    erl_backend__elds__succeeded = (erl_backend__elds__CastX_7 == erl_backend__elds__CastY_8);
#line 128 "elds.m"
    if (erl_backend__elds__succeeded)
#line 128 "elds.m"
      erl_backend__elds__succeeded = MR_TRUE;
#line 128 "elds.m"
    else
#line 128 "elds.m"
      {
#line 128 "elds.m"
        MR_Word erl_backend__elds__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__1_1, (MR_Integer) 0)));
#line 128 "elds.m"
        MR_Word erl_backend__elds__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__1_1, (MR_Integer) 1)));
#line 128 "elds.m"
        MR_Word erl_backend__elds__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)));
#line 128 "elds.m"
        MR_Word erl_backend__elds__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__2_2, (MR_Integer) 1)));

#line 9048 "erl_backend.elds.c"
        {
#line 9050 "erl_backend.elds.c"
          erl_backend__elds__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &erl_backend__elds_scalar_common_1[8], ((MR_Box) (erl_backend__elds__V_3_3)), ((MR_Box) (erl_backend__elds__V_5_5)));
        }
#line 128 "elds.m"
        if (erl_backend__elds__succeeded)
#line 9055 "erl_backend.elds.c"
          {
#line 9057 "erl_backend.elds.c"
            return erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_expr_0_0(erl_backend__elds__V_4_4, erl_backend__elds__V_6_6);
          }
#line 128 "elds.m"
      }
#line 128 "elds.m"
    return erl_backend__elds__succeeded;
#line 128 "elds.m"
  }
#line 128 "elds.m"
}

#line 258 "elds.m"
void MR_CALL 
erl_backend__elds____Compare____elds_catch_0_0(
#line 258 "elds.m"
  MR_Word * erl_backend__elds__HeadVar__1_1,
#line 258 "elds.m"
  MR_Word erl_backend__elds__HeadVar__2_2,
#line 258 "elds.m"
  MR_Word erl_backend__elds__HeadVar__3_3)
#line 258 "elds.m"
{
#line 258 "elds.m"
  {
#line 258 "elds.m"
    MR_bool erl_backend__elds__succeeded;
#line 258 "elds.m"
    MR_Integer erl_backend__elds__CastX_12 = (MR_Integer) erl_backend__elds__HeadVar__2_2;
#line 258 "elds.m"
    MR_Integer erl_backend__elds__CastY_13 = (MR_Integer) erl_backend__elds__HeadVar__3_3;

#line 258 "elds.m"
    erl_backend__elds__succeeded = (erl_backend__elds__CastX_12 == erl_backend__elds__CastY_13);
#line 258 "elds.m"
    if (erl_backend__elds__succeeded)
#line 9093 "erl_backend.elds.c"
      *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 0;
#line 258 "elds.m"
    else
#line 258 "elds.m"
      {
#line 258 "elds.m"
        MR_Word erl_backend__elds__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)));
#line 258 "elds.m"
        MR_Word erl_backend__elds__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__2_2, (MR_Integer) 1)));
#line 258 "elds.m"
        MR_Word erl_backend__elds__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__2_2, (MR_Integer) 2)));
#line 258 "elds.m"
        MR_Word erl_backend__elds__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)));
#line 258 "elds.m"
        MR_Word erl_backend__elds__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__3_3, (MR_Integer) 1)));
#line 258 "elds.m"
        MR_Word erl_backend__elds__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__3_3, (MR_Integer) 2)));
#line 258 "elds.m"
        MR_Word erl_backend__elds__V_10_10;

#line 258 "elds.m"
        {
#line 258 "elds.m"
          erl_backend__elds____Compare____elds_term_0_0(&erl_backend__elds__V_10_10, erl_backend__elds__V_4_4, erl_backend__elds__V_7_7);
        }
#line 9119 "erl_backend.elds.c"
        erl_backend__elds__succeeded = (erl_backend__elds__V_10_10 == (MR_Integer) 0);
#line 258 "elds.m"
        erl_backend__elds__succeeded = !(erl_backend__elds__succeeded);
#line 258 "elds.m"
        if (erl_backend__elds__succeeded)
#line 258 "elds.m"
          *erl_backend__elds__HeadVar__1_1 = erl_backend__elds__V_10_10;
#line 258 "elds.m"
        else
#line 258 "elds.m"
          {
#line 258 "elds.m"
            MR_Word erl_backend__elds__V_11_11;

#line 258 "elds.m"
            {
#line 258 "elds.m"
              erl_backend__elds____Compare____elds_term_0_0(&erl_backend__elds__V_11_11, erl_backend__elds__V_5_5, erl_backend__elds__V_8_8);
            }
#line 9139 "erl_backend.elds.c"
            erl_backend__elds__succeeded = (erl_backend__elds__V_11_11 == (MR_Integer) 0);
#line 258 "elds.m"
            erl_backend__elds__succeeded = !(erl_backend__elds__succeeded);
#line 258 "elds.m"
            if (erl_backend__elds__succeeded)
#line 258 "elds.m"
              *erl_backend__elds__HeadVar__1_1 = erl_backend__elds__V_11_11;
#line 258 "elds.m"
            else
#line 258 "elds.m"
              {
#line 258 "elds.m"
                erl_backend__elds____Compare____elds_expr_0_0(erl_backend__elds__HeadVar__1_1, erl_backend__elds__V_6_6, erl_backend__elds__V_9_9);
#line 258 "elds.m"
                return;
              }
#line 258 "elds.m"
          }
#line 258 "elds.m"
      }
#line 258 "elds.m"
  }
#line 258 "elds.m"
}

#line 258 "elds.m"
MR_bool MR_CALL 
erl_backend__elds____Unify____elds_catch_0_0(
#line 258 "elds.m"
  MR_Word erl_backend__elds__HeadVar__1_1,
#line 258 "elds.m"
  MR_Word erl_backend__elds__HeadVar__2_2)
#line 258 "elds.m"
{
#line 258 "elds.m"
  {
#line 258 "elds.m"
    MR_bool erl_backend__elds__succeeded;
#line 258 "elds.m"
    MR_Integer erl_backend__elds__CastX_9 = (MR_Integer) erl_backend__elds__HeadVar__1_1;
#line 258 "elds.m"
    MR_Integer erl_backend__elds__CastY_10 = (MR_Integer) erl_backend__elds__HeadVar__2_2;

#line 258 "elds.m"
    erl_backend__elds__succeeded = (erl_backend__elds__CastX_9 == erl_backend__elds__CastY_10);
#line 258 "elds.m"
    if (erl_backend__elds__succeeded)
#line 258 "elds.m"
      erl_backend__elds__succeeded = MR_TRUE;
#line 258 "elds.m"
    else
#line 258 "elds.m"
      {
#line 258 "elds.m"
        MR_Word erl_backend__elds__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__1_1, (MR_Integer) 0)));
#line 258 "elds.m"
        MR_Word erl_backend__elds__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__1_1, (MR_Integer) 1)));
#line 258 "elds.m"
        MR_Word erl_backend__elds__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__1_1, (MR_Integer) 2)));
#line 258 "elds.m"
        MR_Word erl_backend__elds__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)));
#line 258 "elds.m"
        MR_Word erl_backend__elds__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__2_2, (MR_Integer) 1)));
#line 258 "elds.m"
        MR_Word erl_backend__elds__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__2_2, (MR_Integer) 2)));

#line 9206 "erl_backend.elds.c"
        {
#line 9208 "erl_backend.elds.c"
          erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_term_0_0(erl_backend__elds__V_3_3, erl_backend__elds__V_6_6);
        }
#line 258 "elds.m"
        if (erl_backend__elds__succeeded)
#line 258 "elds.m"
          {
#line 9215 "erl_backend.elds.c"
            {
#line 9217 "erl_backend.elds.c"
              erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_term_0_0(erl_backend__elds__V_4_4, erl_backend__elds__V_7_7);
            }
#line 258 "elds.m"
            if (erl_backend__elds__succeeded)
#line 9222 "erl_backend.elds.c"
              {
#line 9224 "erl_backend.elds.c"
                return erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_expr_0_0(erl_backend__elds__V_5_5, erl_backend__elds__V_8_8);
              }
#line 258 "elds.m"
          }
#line 258 "elds.m"
      }
#line 258 "elds.m"
    return erl_backend__elds__succeeded;
#line 258 "elds.m"
  }
#line 258 "elds.m"
}

#line 255 "elds.m"
void MR_CALL 
erl_backend__elds____Compare____elds_case_0_0(
#line 255 "elds.m"
  MR_Word * erl_backend__elds__HeadVar__1_1,
#line 255 "elds.m"
  MR_Word erl_backend__elds__HeadVar__2_2,
#line 255 "elds.m"
  MR_Word erl_backend__elds__HeadVar__3_3)
#line 255 "elds.m"
{
#line 255 "elds.m"
  {
#line 255 "elds.m"
    MR_bool erl_backend__elds__succeeded;
#line 255 "elds.m"
    MR_Integer erl_backend__elds__CastX_9 = (MR_Integer) erl_backend__elds__HeadVar__2_2;
#line 255 "elds.m"
    MR_Integer erl_backend__elds__CastY_10 = (MR_Integer) erl_backend__elds__HeadVar__3_3;

#line 255 "elds.m"
    erl_backend__elds__succeeded = (erl_backend__elds__CastX_9 == erl_backend__elds__CastY_10);
#line 255 "elds.m"
    if (erl_backend__elds__succeeded)
#line 9262 "erl_backend.elds.c"
      *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 0;
#line 255 "elds.m"
    else
#line 255 "elds.m"
      {
#line 255 "elds.m"
        MR_Word erl_backend__elds__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)));
#line 255 "elds.m"
        MR_Word erl_backend__elds__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__2_2, (MR_Integer) 1)));
#line 255 "elds.m"
        MR_Word erl_backend__elds__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)));
#line 255 "elds.m"
        MR_Word erl_backend__elds__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__3_3, (MR_Integer) 1)));
#line 255 "elds.m"
        MR_Word erl_backend__elds__V_8_8;

#line 255 "elds.m"
        {
#line 255 "elds.m"
          erl_backend__elds____Compare____elds_term_0_0(&erl_backend__elds__V_8_8, erl_backend__elds__V_4_4, erl_backend__elds__V_6_6);
        }
#line 9284 "erl_backend.elds.c"
        erl_backend__elds__succeeded = (erl_backend__elds__V_8_8 == (MR_Integer) 0);
#line 255 "elds.m"
        erl_backend__elds__succeeded = !(erl_backend__elds__succeeded);
#line 255 "elds.m"
        if (erl_backend__elds__succeeded)
#line 255 "elds.m"
          *erl_backend__elds__HeadVar__1_1 = erl_backend__elds__V_8_8;
#line 255 "elds.m"
        else
#line 255 "elds.m"
          {
#line 255 "elds.m"
            erl_backend__elds____Compare____elds_expr_0_0(erl_backend__elds__HeadVar__1_1, erl_backend__elds__V_5_5, erl_backend__elds__V_7_7);
#line 255 "elds.m"
            return;
          }
#line 255 "elds.m"
      }
#line 255 "elds.m"
  }
#line 255 "elds.m"
}

#line 255 "elds.m"
MR_bool MR_CALL 
erl_backend__elds____Unify____elds_case_0_0(
#line 255 "elds.m"
  MR_Word erl_backend__elds__HeadVar__1_1,
#line 255 "elds.m"
  MR_Word erl_backend__elds__HeadVar__2_2)
#line 255 "elds.m"
{
#line 255 "elds.m"
  {
#line 255 "elds.m"
    MR_bool erl_backend__elds__succeeded;
#line 255 "elds.m"
    MR_Integer erl_backend__elds__CastX_7 = (MR_Integer) erl_backend__elds__HeadVar__1_1;
#line 255 "elds.m"
    MR_Integer erl_backend__elds__CastY_8 = (MR_Integer) erl_backend__elds__HeadVar__2_2;

#line 255 "elds.m"
    erl_backend__elds__succeeded = (erl_backend__elds__CastX_7 == erl_backend__elds__CastY_8);
#line 255 "elds.m"
    if (erl_backend__elds__succeeded)
#line 255 "elds.m"
      erl_backend__elds__succeeded = MR_TRUE;
#line 255 "elds.m"
    else
#line 255 "elds.m"
      {
#line 255 "elds.m"
        MR_Word erl_backend__elds__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__1_1, (MR_Integer) 0)));
#line 255 "elds.m"
        MR_Word erl_backend__elds__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__1_1, (MR_Integer) 1)));
#line 255 "elds.m"
        MR_Word erl_backend__elds__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)));
#line 255 "elds.m"
        MR_Word erl_backend__elds__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__2_2, (MR_Integer) 1)));

#line 9345 "erl_backend.elds.c"
        {
#line 9347 "erl_backend.elds.c"
          erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_term_0_0(erl_backend__elds__V_3_3, erl_backend__elds__V_5_5);
        }
#line 255 "elds.m"
        if (erl_backend__elds__succeeded)
#line 9352 "erl_backend.elds.c"
          {
#line 9354 "erl_backend.elds.c"
            return erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_expr_0_0(erl_backend__elds__V_4_4, erl_backend__elds__V_6_6);
          }
#line 255 "elds.m"
      }
#line 255 "elds.m"
    return erl_backend__elds__succeeded;
#line 255 "elds.m"
  }
#line 255 "elds.m"
}

#line 250 "elds.m"
void MR_CALL 
erl_backend__elds____Compare____elds_call_target_0_0(
#line 250 "elds.m"
  MR_Word * erl_backend__elds__HeadVar__1_1,
#line 250 "elds.m"
  MR_Word erl_backend__elds__HeadVar__2_2,
#line 250 "elds.m"
  MR_Word erl_backend__elds__HeadVar__3_3)
#line 250 "elds.m"
{
#line 250 "elds.m"
  {
#line 250 "elds.m"
    MR_bool erl_backend__elds__succeeded;
#line 250 "elds.m"
    MR_Integer erl_backend__elds__CastX_22 = (MR_Integer) erl_backend__elds__HeadVar__2_2;
#line 250 "elds.m"
    MR_Integer erl_backend__elds__CastY_23 = (MR_Integer) erl_backend__elds__HeadVar__3_3;

#line 250 "elds.m"
    erl_backend__elds__succeeded = (erl_backend__elds__CastX_22 == erl_backend__elds__CastY_23);
#line 250 "elds.m"
    if (erl_backend__elds__succeeded)
#line 9390 "erl_backend.elds.c"
      *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 0;
#line 250 "elds.m"
    else
#line 250 "elds.m"
      if (((MR_tag((MR_Word) erl_backend__elds__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 250 "elds.m"
        {
#line 250 "elds.m"
          MR_String erl_backend__elds__V_27_27 = ((MR_String) (MR_hl_field(MR_mktag(2), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)));

#line 250 "elds.m"
          if (((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 250 "elds.m"
            {
#line 250 "elds.m"
              MR_String erl_backend__elds__V_21_21 = ((MR_String) (MR_hl_field(MR_mktag(2), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)));

#line 250 "elds.m"
              {
#line 250 "elds.m"
                mercury__private_builtin__builtin_compare_string_3_p_0(erl_backend__elds__HeadVar__1_1, erl_backend__elds__V_27_27, erl_backend__elds__V_21_21);
#line 250 "elds.m"
                return;
              }
#line 250 "elds.m"
            }
#line 250 "elds.m"
          else
#line 250 "elds.m"
            if (((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 9421 "erl_backend.elds.c"
              *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 250 "elds.m"
            else
#line 9425 "erl_backend.elds.c"
              *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 250 "elds.m"
        }
#line 250 "elds.m"
      else
#line 250 "elds.m"
        if (((MR_tag((MR_Word) erl_backend__elds__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 250 "elds.m"
          {
#line 250 "elds.m"
            MR_Word erl_backend__elds__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)));

#line 250 "elds.m"
            if (((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 9440 "erl_backend.elds.c"
              *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 250 "elds.m"
            else
#line 250 "elds.m"
              if (((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 250 "elds.m"
                {
#line 250 "elds.m"
                  MR_Word erl_backend__elds__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)));

#line 250 "elds.m"
                  {
#line 250 "elds.m"
                    erl_backend__elds____Compare____elds_expr_0_0(erl_backend__elds__HeadVar__1_1, erl_backend__elds__V_28_28, erl_backend__elds__V_13_13);
#line 250 "elds.m"
                    return;
                  }
#line 250 "elds.m"
                }
#line 250 "elds.m"
              else
#line 9462 "erl_backend.elds.c"
                *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 250 "elds.m"
          }
#line 250 "elds.m"
        else
#line 250 "elds.m"
          {
#line 250 "elds.m"
            MR_Word erl_backend__elds__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)));

#line 250 "elds.m"
            if (((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 9475 "erl_backend.elds.c"
              *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 250 "elds.m"
            else
#line 250 "elds.m"
              if (((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 9481 "erl_backend.elds.c"
                *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 250 "elds.m"
              else
#line 250 "elds.m"
                {
#line 250 "elds.m"
                  MR_Word erl_backend__elds__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)));

#line 250 "elds.m"
                  {
#line 250 "elds.m"
                    hlds__hlds_pred____Compare____pred_proc_id_0_0(erl_backend__elds__HeadVar__1_1, erl_backend__elds__V_29_29, erl_backend__elds__V_5_5);
#line 250 "elds.m"
                    return;
                  }
#line 250 "elds.m"
                }
#line 250 "elds.m"
          }
#line 250 "elds.m"
  }
#line 250 "elds.m"
}

#line 250 "elds.m"
MR_bool MR_CALL 
erl_backend__elds____Unify____elds_call_target_0_0(
#line 250 "elds.m"
  MR_Word erl_backend__elds__HeadVar__1_1,
#line 250 "elds.m"
  MR_Word erl_backend__elds__HeadVar__2_2)
#line 250 "elds.m"
{
#line 250 "elds.m"
  {
#line 250 "elds.m"
    MR_bool erl_backend__elds__succeeded;
#line 250 "elds.m"
    MR_Integer erl_backend__elds__CastX_9 = (MR_Integer) erl_backend__elds__HeadVar__1_1;
#line 250 "elds.m"
    MR_Integer erl_backend__elds__CastY_10 = (MR_Integer) erl_backend__elds__HeadVar__2_2;

#line 250 "elds.m"
    erl_backend__elds__succeeded = (erl_backend__elds__CastX_9 == erl_backend__elds__CastY_10);
#line 250 "elds.m"
    if (erl_backend__elds__succeeded)
#line 250 "elds.m"
      erl_backend__elds__succeeded = MR_TRUE;
#line 250 "elds.m"
    else
#line 250 "elds.m"
      if (((MR_tag((MR_Word) erl_backend__elds__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 250 "elds.m"
        {
#line 250 "elds.m"
          MR_String erl_backend__elds__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(2), erl_backend__elds__HeadVar__1_1, (MR_Integer) 0)));
#line 250 "elds.m"
          MR_String erl_backend__elds__V_8_8;

#line 250 "elds.m"
          erl_backend__elds__succeeded = ((MR_tag((MR_Word) erl_backend__elds__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 250 "elds.m"
          if (erl_backend__elds__succeeded)
#line 250 "elds.m"
            {
#line 250 "elds.m"
              erl_backend__elds__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(2), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)));
#line 9549 "erl_backend.elds.c"
              erl_backend__elds__succeeded = (strcmp(erl_backend__elds__V_7_7, erl_backend__elds__V_8_8) == 0);
#line 250 "elds.m"
            }
#line 250 "elds.m"
        }
#line 250 "elds.m"
      else
#line 250 "elds.m"
        if (((MR_tag((MR_Word) erl_backend__elds__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 250 "elds.m"
          {
#line 250 "elds.m"
            MR_Word erl_backend__elds__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds__HeadVar__1_1, (MR_Integer) 0)));
#line 250 "elds.m"
            MR_Word erl_backend__elds__V_6_6;

#line 250 "elds.m"
            erl_backend__elds__succeeded = ((MR_tag((MR_Word) erl_backend__elds__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 250 "elds.m"
            if (erl_backend__elds__succeeded)
#line 250 "elds.m"
              {
#line 250 "elds.m"
                erl_backend__elds__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)));
#line 9574 "erl_backend.elds.c"
                {
#line 9576 "erl_backend.elds.c"
                  return erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_expr_0_0(erl_backend__elds__V_5_5, erl_backend__elds__V_6_6);
                }
#line 250 "elds.m"
              }
#line 250 "elds.m"
          }
#line 250 "elds.m"
        else
#line 250 "elds.m"
          {
#line 250 "elds.m"
            MR_Word erl_backend__elds__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__1_1, (MR_Integer) 0)));
#line 250 "elds.m"
            MR_Word erl_backend__elds__V_4_4;

#line 250 "elds.m"
            erl_backend__elds__succeeded = ((MR_tag((MR_Word) erl_backend__elds__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 250 "elds.m"
            if (erl_backend__elds__succeeded)
#line 250 "elds.m"
              {
#line 250 "elds.m"
                erl_backend__elds__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)));
#line 9600 "erl_backend.elds.c"
                {
#line 9602 "erl_backend.elds.c"
                  return erl_backend__elds__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(erl_backend__elds__V_3_3, erl_backend__elds__V_4_4);
                }
#line 250 "elds.m"
              }
#line 250 "elds.m"
          }
#line 250 "elds.m"
    return erl_backend__elds__succeeded;
#line 250 "elds.m"
  }
#line 250 "elds.m"
}

#line 83 "elds.m"
void MR_CALL 
erl_backend__elds____Compare____elds_body_0_0(
#line 83 "elds.m"
  MR_Word * erl_backend__elds__HeadVar__1_1,
#line 83 "elds.m"
  MR_Word erl_backend__elds__HeadVar__2_2,
#line 83 "elds.m"
  MR_Word erl_backend__elds__HeadVar__3_3)
#line 83 "elds.m"
{
#line 83 "elds.m"
  {
#line 83 "elds.m"
    MR_bool erl_backend__elds__succeeded;
#line 83 "elds.m"
    MR_Integer erl_backend__elds__CastX_12 = (MR_Integer) erl_backend__elds__HeadVar__2_2;
#line 83 "elds.m"
    MR_Integer erl_backend__elds__CastY_13 = (MR_Integer) erl_backend__elds__HeadVar__3_3;

#line 83 "elds.m"
    erl_backend__elds__succeeded = (erl_backend__elds__CastX_12 == erl_backend__elds__CastY_13);
#line 83 "elds.m"
    if (erl_backend__elds__succeeded)
#line 9640 "erl_backend.elds.c"
      *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 0;
#line 83 "elds.m"
    else
#line 83 "elds.m"
      if (((MR_tag((MR_Word) erl_backend__elds__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 83 "elds.m"
        {
#line 83 "elds.m"
          MR_Word erl_backend__elds__V_16_16 = (MR_Word) MR_body(((MR_Word) erl_backend__elds__HeadVar__2_2), (MR_Integer) 0);

#line 83 "elds.m"
          if (((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 83 "elds.m"
            {
#line 83 "elds.m"
              MR_Word erl_backend__elds__V_5_5 = (MR_Word) MR_body(((MR_Word) erl_backend__elds__HeadVar__3_3), (MR_Integer) 0);

#line 83 "elds.m"
              {
#line 83 "elds.m"
                erl_backend__elds____Compare____elds_clause_0_0(erl_backend__elds__HeadVar__1_1, erl_backend__elds__V_16_16, erl_backend__elds__V_5_5);
#line 83 "elds.m"
                return;
              }
#line 83 "elds.m"
            }
#line 83 "elds.m"
          else
#line 9669 "erl_backend.elds.c"
            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 83 "elds.m"
        }
#line 83 "elds.m"
      else
#line 83 "elds.m"
        {
#line 83 "elds.m"
          MR_Integer erl_backend__elds__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(1), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)));

#line 83 "elds.m"
          if (((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 9682 "erl_backend.elds.c"
            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 83 "elds.m"
          else
#line 83 "elds.m"
            {
#line 83 "elds.m"
              MR_Integer erl_backend__elds__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)));

#line 83 "elds.m"
              {
#line 83 "elds.m"
                mercury__private_builtin__builtin_compare_int_3_p_0(erl_backend__elds__HeadVar__1_1, erl_backend__elds__V_17_17, erl_backend__elds__V_11_11);
#line 83 "elds.m"
                return;
              }
#line 83 "elds.m"
            }
#line 83 "elds.m"
        }
#line 83 "elds.m"
  }
#line 83 "elds.m"
}

#line 83 "elds.m"
MR_bool MR_CALL 
erl_backend__elds____Unify____elds_body_0_0(
#line 83 "elds.m"
  MR_Word erl_backend__elds__HeadVar__1_1,
#line 83 "elds.m"
  MR_Word erl_backend__elds__HeadVar__2_2)
#line 83 "elds.m"
{
#line 83 "elds.m"
  {
#line 83 "elds.m"
    MR_bool erl_backend__elds__succeeded;
#line 83 "elds.m"
    MR_Integer erl_backend__elds__CastX_7 = (MR_Integer) erl_backend__elds__HeadVar__1_1;
#line 83 "elds.m"
    MR_Integer erl_backend__elds__CastY_8 = (MR_Integer) erl_backend__elds__HeadVar__2_2;

#line 83 "elds.m"
    erl_backend__elds__succeeded = (erl_backend__elds__CastX_7 == erl_backend__elds__CastY_8);
#line 83 "elds.m"
    if (erl_backend__elds__succeeded)
#line 83 "elds.m"
      erl_backend__elds__succeeded = MR_TRUE;
#line 83 "elds.m"
    else
#line 83 "elds.m"
      if (((MR_tag((MR_Word) erl_backend__elds__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 83 "elds.m"
        {
#line 83 "elds.m"
          MR_Word erl_backend__elds__V_3_3 = (MR_Word) MR_body(((MR_Word) erl_backend__elds__HeadVar__1_1), (MR_Integer) 0);
#line 83 "elds.m"
          MR_Word erl_backend__elds__V_4_4;

#line 83 "elds.m"
          erl_backend__elds__succeeded = ((MR_tag((MR_Word) erl_backend__elds__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 83 "elds.m"
          if (erl_backend__elds__succeeded)
#line 83 "elds.m"
            {
#line 83 "elds.m"
              erl_backend__elds__V_4_4 = (MR_Word) MR_body(((MR_Word) erl_backend__elds__HeadVar__2_2), (MR_Integer) 0);
#line 9750 "erl_backend.elds.c"
              {
#line 9752 "erl_backend.elds.c"
                return erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_clause_0_0(erl_backend__elds__V_3_3, erl_backend__elds__V_4_4);
              }
#line 83 "elds.m"
            }
#line 83 "elds.m"
        }
#line 83 "elds.m"
      else
#line 83 "elds.m"
        {
#line 83 "elds.m"
          MR_Integer erl_backend__elds__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), erl_backend__elds__HeadVar__1_1, (MR_Integer) 0)));
#line 83 "elds.m"
          MR_Integer erl_backend__elds__V_6_6;

#line 83 "elds.m"
          erl_backend__elds__succeeded = ((MR_tag((MR_Word) erl_backend__elds__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 83 "elds.m"
          if (erl_backend__elds__succeeded)
#line 83 "elds.m"
            {
#line 83 "elds.m"
              erl_backend__elds__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)));
#line 9776 "erl_backend.elds.c"
              erl_backend__elds__succeeded = (erl_backend__elds__V_5_5 == erl_backend__elds__V_6_6);
#line 83 "elds.m"
            }
#line 83 "elds.m"
        }
#line 83 "elds.m"
    return erl_backend__elds__succeeded;
#line 83 "elds.m"
  }
#line 83 "elds.m"
}

#line 267 "elds.m"
void MR_CALL 
erl_backend__elds____Compare____elds_binop_0_0(
#line 267 "elds.m"
  MR_Word * erl_backend__elds__HeadVar__1_1,
#line 267 "elds.m"
  MR_Word erl_backend__elds__HeadVar__2_2,
#line 267 "elds.m"
  MR_Word erl_backend__elds__HeadVar__3_3)
#line 267 "elds.m"
{
#line 267 "elds.m"
  {
#line 267 "elds.m"
    MR_bool erl_backend__elds__succeeded;
#line 267 "elds.m"
    MR_Integer erl_backend__elds__Cast_HeadVar1_4 = (MR_Integer) erl_backend__elds__HeadVar__2_2;
#line 267 "elds.m"
    MR_Integer erl_backend__elds__Cast_HeadVar2_5 = (MR_Integer) erl_backend__elds__HeadVar__3_3;

#line 267 "elds.m"
    {
#line 267 "elds.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(erl_backend__elds__HeadVar__1_1, erl_backend__elds__Cast_HeadVar1_4, erl_backend__elds__Cast_HeadVar2_5);
#line 267 "elds.m"
      return;
    }
#line 267 "elds.m"
  }
#line 267 "elds.m"
}

#line 267 "elds.m"
MR_bool MR_CALL 
erl_backend__elds____Unify____elds_binop_0_0(
#line 267 "elds.m"
  MR_Word erl_backend__elds__HeadVar__2_1,
#line 267 "elds.m"
  MR_Word erl_backend__elds__HeadVar__2_2)
#line 267 "elds.m"
{
#line 9830 "erl_backend.elds.c"
  {
#line 9832 "erl_backend.elds.c"
    MR_bool erl_backend__elds__succeeded = (erl_backend__elds__HeadVar__2_1 == erl_backend__elds__HeadVar__2_2);

#line 9835 "erl_backend.elds.c"
    return erl_backend__elds__succeeded;
#line 9837 "erl_backend.elds.c"
  }
#line 267 "elds.m"
}

#line 43 "elds.m"
void MR_CALL 
erl_backend__elds____Compare____elds_0_0(
#line 43 "elds.m"
  MR_Word * erl_backend__elds__HeadVar__1_1,
#line 43 "elds.m"
  MR_Word erl_backend__elds__HeadVar__2_2,
#line 43 "elds.m"
  MR_Word erl_backend__elds__HeadVar__3_3)
#line 43 "elds.m"
{
#line 43 "elds.m"
  {
#line 43 "elds.m"
    MR_bool erl_backend__elds__succeeded;
#line 43 "elds.m"
    MR_Integer erl_backend__elds__CastX_30 = (MR_Integer) erl_backend__elds__HeadVar__2_2;
#line 43 "elds.m"
    MR_Integer erl_backend__elds__CastY_31 = (MR_Integer) erl_backend__elds__HeadVar__3_3;

#line 43 "elds.m"
    erl_backend__elds__succeeded = (erl_backend__elds__CastX_30 == erl_backend__elds__CastY_31);
#line 43 "elds.m"
    if (erl_backend__elds__succeeded)
#line 9866 "erl_backend.elds.c"
      *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 0;
#line 43 "elds.m"
    else
#line 43 "elds.m"
      {
#line 43 "elds.m"
        MR_Word erl_backend__elds__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)));
#line 43 "elds.m"
        MR_Word erl_backend__elds__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__2_2, (MR_Integer) 1)));
#line 43 "elds.m"
        MR_Word erl_backend__elds__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__2_2, (MR_Integer) 2)));
#line 43 "elds.m"
        MR_Word erl_backend__elds__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__2_2, (MR_Integer) 3)));
#line 43 "elds.m"
        MR_Word erl_backend__elds__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__2_2, (MR_Integer) 4)));
#line 43 "elds.m"
        MR_Word erl_backend__elds__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__2_2, (MR_Integer) 5)));
#line 43 "elds.m"
        MR_Word erl_backend__elds__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__2_2, (MR_Integer) 6)));
#line 43 "elds.m"
        MR_Word erl_backend__elds__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__2_2, (MR_Integer) 7)));
#line 43 "elds.m"
        MR_Word erl_backend__elds__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__2_2, (MR_Integer) 8)));
#line 43 "elds.m"
        MR_Word erl_backend__elds__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)));
#line 43 "elds.m"
        MR_Word erl_backend__elds__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__3_3, (MR_Integer) 1)));
#line 43 "elds.m"
        MR_Word erl_backend__elds__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__3_3, (MR_Integer) 2)));
#line 43 "elds.m"
        MR_Word erl_backend__elds__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__3_3, (MR_Integer) 3)));
#line 43 "elds.m"
        MR_Word erl_backend__elds__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__3_3, (MR_Integer) 4)));
#line 43 "elds.m"
        MR_Word erl_backend__elds__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__3_3, (MR_Integer) 5)));
#line 43 "elds.m"
        MR_Word erl_backend__elds__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__3_3, (MR_Integer) 6)));
#line 43 "elds.m"
        MR_Word erl_backend__elds__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__3_3, (MR_Integer) 7)));
#line 43 "elds.m"
        MR_Word erl_backend__elds__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__3_3, (MR_Integer) 8)));
#line 43 "elds.m"
        MR_Word erl_backend__elds__V_22_22;

#line 43 "elds.m"
        {
#line 43 "elds.m"
          mdbcomp__prim_data____Compare____sym_name_0_0(&erl_backend__elds__V_22_22, erl_backend__elds__V_4_4, erl_backend__elds__V_13_13);
        }
#line 9916 "erl_backend.elds.c"
        erl_backend__elds__succeeded = (erl_backend__elds__V_22_22 == (MR_Integer) 0);
#line 43 "elds.m"
        erl_backend__elds__succeeded = !(erl_backend__elds__succeeded);
#line 43 "elds.m"
        if (erl_backend__elds__succeeded)
#line 43 "elds.m"
          *erl_backend__elds__HeadVar__1_1 = erl_backend__elds__V_22_22;
#line 43 "elds.m"
        else
#line 43 "elds.m"
          {
#line 43 "elds.m"
            MR_Word erl_backend__elds__V_23_23;

#line 43 "elds.m"
            {
#line 43 "elds.m"
              mercury__builtin__compare_3_p_0((MR_Word) &erl_backend__elds_scalar_common_1[1], &erl_backend__elds__V_23_23, ((MR_Box) (erl_backend__elds__V_5_5)), ((MR_Box) (erl_backend__elds__V_14_14)));
            }
#line 9936 "erl_backend.elds.c"
            erl_backend__elds__succeeded = (erl_backend__elds__V_23_23 == (MR_Integer) 0);
#line 43 "elds.m"
            erl_backend__elds__succeeded = !(erl_backend__elds__succeeded);
#line 43 "elds.m"
            if (erl_backend__elds__succeeded)
#line 43 "elds.m"
              *erl_backend__elds__HeadVar__1_1 = erl_backend__elds__V_23_23;
#line 43 "elds.m"
            else
#line 43 "elds.m"
              {
#line 43 "elds.m"
                MR_Word erl_backend__elds__V_24_24;

#line 43 "elds.m"
                {
#line 43 "elds.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &erl_backend__elds_scalar_common_1[2], &erl_backend__elds__V_24_24, ((MR_Box) (erl_backend__elds__V_6_6)), ((MR_Box) (erl_backend__elds__V_15_15)));
                }
#line 9956 "erl_backend.elds.c"
                erl_backend__elds__succeeded = (erl_backend__elds__V_24_24 == (MR_Integer) 0);
#line 43 "elds.m"
                erl_backend__elds__succeeded = !(erl_backend__elds__succeeded);
#line 43 "elds.m"
                if (erl_backend__elds__succeeded)
#line 43 "elds.m"
                  *erl_backend__elds__HeadVar__1_1 = erl_backend__elds__V_24_24;
#line 43 "elds.m"
                else
#line 43 "elds.m"
                  {
#line 43 "elds.m"
                    MR_Word erl_backend__elds__V_25_25;

#line 43 "elds.m"
                    {
#line 43 "elds.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &erl_backend__elds_scalar_common_1[3], &erl_backend__elds__V_25_25, ((MR_Box) (erl_backend__elds__V_7_7)), ((MR_Box) (erl_backend__elds__V_16_16)));
                    }
#line 9976 "erl_backend.elds.c"
                    erl_backend__elds__succeeded = (erl_backend__elds__V_25_25 == (MR_Integer) 0);
#line 43 "elds.m"
                    erl_backend__elds__succeeded = !(erl_backend__elds__succeeded);
#line 43 "elds.m"
                    if (erl_backend__elds__succeeded)
#line 43 "elds.m"
                      *erl_backend__elds__HeadVar__1_1 = erl_backend__elds__V_25_25;
#line 43 "elds.m"
                    else
#line 43 "elds.m"
                      {
#line 43 "elds.m"
                        MR_Word erl_backend__elds__V_26_26;

#line 43 "elds.m"
                        {
#line 43 "elds.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &erl_backend__elds_scalar_common_1[4], &erl_backend__elds__V_26_26, ((MR_Box) (erl_backend__elds__V_8_8)), ((MR_Box) (erl_backend__elds__V_17_17)));
                        }
#line 9996 "erl_backend.elds.c"
                        erl_backend__elds__succeeded = (erl_backend__elds__V_26_26 == (MR_Integer) 0);
#line 43 "elds.m"
                        erl_backend__elds__succeeded = !(erl_backend__elds__succeeded);
#line 43 "elds.m"
                        if (erl_backend__elds__succeeded)
#line 43 "elds.m"
                          *erl_backend__elds__HeadVar__1_1 = erl_backend__elds__V_26_26;
#line 43 "elds.m"
                        else
#line 43 "elds.m"
                          {
#line 43 "elds.m"
                            MR_Word erl_backend__elds__V_27_27;

#line 43 "elds.m"
                            {
#line 43 "elds.m"
                              mercury__builtin__compare_3_p_0((MR_Word) &erl_backend__elds_scalar_common_1[5], &erl_backend__elds__V_27_27, ((MR_Box) (erl_backend__elds__V_9_9)), ((MR_Box) (erl_backend__elds__V_18_18)));
                            }
#line 10016 "erl_backend.elds.c"
                            erl_backend__elds__succeeded = (erl_backend__elds__V_27_27 == (MR_Integer) 0);
#line 43 "elds.m"
                            erl_backend__elds__succeeded = !(erl_backend__elds__succeeded);
#line 43 "elds.m"
                            if (erl_backend__elds__succeeded)
#line 43 "elds.m"
                              *erl_backend__elds__HeadVar__1_1 = erl_backend__elds__V_27_27;
#line 43 "elds.m"
                            else
#line 43 "elds.m"
                              {
#line 43 "elds.m"
                                MR_Word erl_backend__elds__V_28_28;

#line 43 "elds.m"
                                {
#line 43 "elds.m"
                                  mercury__builtin__compare_3_p_0((MR_Word) &erl_backend__elds_scalar_common_1[6], &erl_backend__elds__V_28_28, ((MR_Box) (erl_backend__elds__V_10_10)), ((MR_Box) (erl_backend__elds__V_19_19)));
                                }
#line 10036 "erl_backend.elds.c"
                                erl_backend__elds__succeeded = (erl_backend__elds__V_28_28 == (MR_Integer) 0);
#line 43 "elds.m"
                                erl_backend__elds__succeeded = !(erl_backend__elds__succeeded);
#line 43 "elds.m"
                                if (erl_backend__elds__succeeded)
#line 43 "elds.m"
                                  *erl_backend__elds__HeadVar__1_1 = erl_backend__elds__V_28_28;
#line 43 "elds.m"
                                else
#line 43 "elds.m"
                                  {
#line 43 "elds.m"
                                    MR_Word erl_backend__elds__V_29_29;

#line 43 "elds.m"
                                    {
#line 43 "elds.m"
                                      mercury__builtin__compare_3_p_0((MR_Word) &erl_backend__elds_scalar_common_1[7], &erl_backend__elds__V_29_29, ((MR_Box) (erl_backend__elds__V_11_11)), ((MR_Box) (erl_backend__elds__V_20_20)));
                                    }
#line 10056 "erl_backend.elds.c"
                                    erl_backend__elds__succeeded = (erl_backend__elds__V_29_29 == (MR_Integer) 0);
#line 43 "elds.m"
                                    erl_backend__elds__succeeded = !(erl_backend__elds__succeeded);
#line 43 "elds.m"
                                    if (erl_backend__elds__succeeded)
#line 43 "elds.m"
                                      *erl_backend__elds__HeadVar__1_1 = erl_backend__elds__V_29_29;
#line 43 "elds.m"
                                    else
#line 43 "elds.m"
                                      {
#line 43 "elds.m"
                                        {
#line 43 "elds.m"
                                          mercury__builtin__compare_3_p_0((MR_Word) &erl_backend__elds_scalar_common_1[7], erl_backend__elds__HeadVar__1_1, ((MR_Box) (erl_backend__elds__V_12_12)), ((MR_Box) (erl_backend__elds__V_21_21)));
#line 43 "elds.m"
                                          return;
                                        }
#line 43 "elds.m"
                                      }
#line 43 "elds.m"
                                  }
#line 43 "elds.m"
                              }
#line 43 "elds.m"
                          }
#line 43 "elds.m"
                      }
#line 43 "elds.m"
                  }
#line 43 "elds.m"
              }
#line 43 "elds.m"
          }
#line 43 "elds.m"
      }
#line 43 "elds.m"
  }
#line 43 "elds.m"
}

#line 43 "elds.m"
MR_bool MR_CALL 
erl_backend__elds____Unify____elds_0_0(
#line 43 "elds.m"
  MR_Word erl_backend__elds__HeadVar__1_1,
#line 43 "elds.m"
  MR_Word erl_backend__elds__HeadVar__2_2)
#line 43 "elds.m"
{
#line 43 "elds.m"
  {
#line 43 "elds.m"
    MR_bool erl_backend__elds__succeeded;
#line 43 "elds.m"
    MR_Integer erl_backend__elds__CastX_21 = (MR_Integer) erl_backend__elds__HeadVar__1_1;
#line 43 "elds.m"
    MR_Integer erl_backend__elds__CastY_22 = (MR_Integer) erl_backend__elds__HeadVar__2_2;

#line 43 "elds.m"
    erl_backend__elds__succeeded = (erl_backend__elds__CastX_21 == erl_backend__elds__CastY_22);
#line 43 "elds.m"
    if (erl_backend__elds__succeeded)
#line 43 "elds.m"
      erl_backend__elds__succeeded = MR_TRUE;
#line 43 "elds.m"
    else
#line 43 "elds.m"
      {
#line 43 "elds.m"
        MR_Word erl_backend__elds__TypeInfo_24_24;
#line 43 "elds.m"
        MR_Word erl_backend__elds__TypeInfo_25_25;
#line 43 "elds.m"
        MR_Word erl_backend__elds__TypeInfo_26_26;
#line 43 "elds.m"
        MR_Word erl_backend__elds__TypeInfo_27_27;
#line 43 "elds.m"
        MR_Word erl_backend__elds__TypeInfo_28_28;
#line 43 "elds.m"
        MR_Word erl_backend__elds__TypeInfo_29_29;
#line 43 "elds.m"
        MR_Word erl_backend__elds__TypeInfo_30_30;
#line 43 "elds.m"
        MR_Word erl_backend__elds__TypeInfo_31_31;
#line 43 "elds.m"
        MR_Word erl_backend__elds__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__1_1, (MR_Integer) 0)));
#line 43 "elds.m"
        MR_Word erl_backend__elds__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__1_1, (MR_Integer) 1)));
#line 43 "elds.m"
        MR_Word erl_backend__elds__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__1_1, (MR_Integer) 2)));
#line 43 "elds.m"
        MR_Word erl_backend__elds__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__1_1, (MR_Integer) 3)));
#line 43 "elds.m"
        MR_Word erl_backend__elds__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__1_1, (MR_Integer) 4)));
#line 43 "elds.m"
        MR_Word erl_backend__elds__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__1_1, (MR_Integer) 5)));
#line 43 "elds.m"
        MR_Word erl_backend__elds__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__1_1, (MR_Integer) 6)));
#line 43 "elds.m"
        MR_Word erl_backend__elds__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__1_1, (MR_Integer) 7)));
#line 43 "elds.m"
        MR_Word erl_backend__elds__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__1_1, (MR_Integer) 8)));
#line 43 "elds.m"
        MR_Word erl_backend__elds__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)));
#line 43 "elds.m"
        MR_Word erl_backend__elds__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__2_2, (MR_Integer) 1)));
#line 43 "elds.m"
        MR_Word erl_backend__elds__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__2_2, (MR_Integer) 2)));
#line 43 "elds.m"
        MR_Word erl_backend__elds__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__2_2, (MR_Integer) 3)));
#line 43 "elds.m"
        MR_Word erl_backend__elds__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__2_2, (MR_Integer) 4)));
#line 43 "elds.m"
        MR_Word erl_backend__elds__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__2_2, (MR_Integer) 5)));
#line 43 "elds.m"
        MR_Word erl_backend__elds__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__2_2, (MR_Integer) 6)));
#line 43 "elds.m"
        MR_Word erl_backend__elds__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__2_2, (MR_Integer) 7)));
#line 43 "elds.m"
        MR_Word erl_backend__elds__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__2_2, (MR_Integer) 8)));

#line 10179 "erl_backend.elds.c"
        {
#line 10181 "erl_backend.elds.c"
          erl_backend__elds__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(erl_backend__elds__V_3_3, erl_backend__elds__V_12_12);
        }
#line 43 "elds.m"
        if (erl_backend__elds__succeeded)
#line 43 "elds.m"
          {
#line 10188 "erl_backend.elds.c"
            erl_backend__elds__TypeInfo_24_24 = (MR_Word) &erl_backend__elds_scalar_common_1[1];
#line 10190 "erl_backend.elds.c"
            {
#line 10192 "erl_backend.elds.c"
              erl_backend__elds__succeeded = mercury__builtin__unify_2_p_0(erl_backend__elds__TypeInfo_24_24, ((MR_Box) (erl_backend__elds__V_4_4)), ((MR_Box) (erl_backend__elds__V_13_13)));
            }
#line 43 "elds.m"
            if (erl_backend__elds__succeeded)
#line 43 "elds.m"
              {
#line 10199 "erl_backend.elds.c"
                erl_backend__elds__TypeInfo_25_25 = (MR_Word) &erl_backend__elds_scalar_common_1[2];
#line 10201 "erl_backend.elds.c"
                {
#line 10203 "erl_backend.elds.c"
                  erl_backend__elds__succeeded = mercury__builtin__unify_2_p_0(erl_backend__elds__TypeInfo_25_25, ((MR_Box) (erl_backend__elds__V_5_5)), ((MR_Box) (erl_backend__elds__V_14_14)));
                }
#line 43 "elds.m"
                if (erl_backend__elds__succeeded)
#line 43 "elds.m"
                  {
#line 10210 "erl_backend.elds.c"
                    erl_backend__elds__TypeInfo_26_26 = (MR_Word) &erl_backend__elds_scalar_common_1[3];
#line 10212 "erl_backend.elds.c"
                    {
#line 10214 "erl_backend.elds.c"
                      erl_backend__elds__succeeded = mercury__builtin__unify_2_p_0(erl_backend__elds__TypeInfo_26_26, ((MR_Box) (erl_backend__elds__V_6_6)), ((MR_Box) (erl_backend__elds__V_15_15)));
                    }
#line 43 "elds.m"
                    if (erl_backend__elds__succeeded)
#line 43 "elds.m"
                      {
#line 10221 "erl_backend.elds.c"
                        erl_backend__elds__TypeInfo_27_27 = (MR_Word) &erl_backend__elds_scalar_common_1[4];
#line 10223 "erl_backend.elds.c"
                        {
#line 10225 "erl_backend.elds.c"
                          erl_backend__elds__succeeded = mercury__builtin__unify_2_p_0(erl_backend__elds__TypeInfo_27_27, ((MR_Box) (erl_backend__elds__V_7_7)), ((MR_Box) (erl_backend__elds__V_16_16)));
                        }
#line 43 "elds.m"
                        if (erl_backend__elds__succeeded)
#line 43 "elds.m"
                          {
#line 10232 "erl_backend.elds.c"
                            erl_backend__elds__TypeInfo_28_28 = (MR_Word) &erl_backend__elds_scalar_common_1[5];
#line 10234 "erl_backend.elds.c"
                            {
#line 10236 "erl_backend.elds.c"
                              erl_backend__elds__succeeded = mercury__builtin__unify_2_p_0(erl_backend__elds__TypeInfo_28_28, ((MR_Box) (erl_backend__elds__V_8_8)), ((MR_Box) (erl_backend__elds__V_17_17)));
                            }
#line 43 "elds.m"
                            if (erl_backend__elds__succeeded)
#line 43 "elds.m"
                              {
#line 10243 "erl_backend.elds.c"
                                erl_backend__elds__TypeInfo_29_29 = (MR_Word) &erl_backend__elds_scalar_common_1[6];
#line 10245 "erl_backend.elds.c"
                                {
#line 10247 "erl_backend.elds.c"
                                  erl_backend__elds__succeeded = mercury__builtin__unify_2_p_0(erl_backend__elds__TypeInfo_29_29, ((MR_Box) (erl_backend__elds__V_9_9)), ((MR_Box) (erl_backend__elds__V_18_18)));
                                }
#line 43 "elds.m"
                                if (erl_backend__elds__succeeded)
#line 43 "elds.m"
                                  {
#line 10254 "erl_backend.elds.c"
                                    erl_backend__elds__TypeInfo_30_30 = (MR_Word) &erl_backend__elds_scalar_common_1[7];
#line 10256 "erl_backend.elds.c"
                                    {
#line 10258 "erl_backend.elds.c"
                                      erl_backend__elds__succeeded = mercury__builtin__unify_2_p_0(erl_backend__elds__TypeInfo_30_30, ((MR_Box) (erl_backend__elds__V_10_10)), ((MR_Box) (erl_backend__elds__V_19_19)));
                                    }
#line 43 "elds.m"
                                    if (erl_backend__elds__succeeded)
#line 43 "elds.m"
                                      {
#line 10265 "erl_backend.elds.c"
                                        erl_backend__elds__TypeInfo_31_31 = (MR_Word) &erl_backend__elds_scalar_common_1[7];
#line 10267 "erl_backend.elds.c"
                                        {
#line 10269 "erl_backend.elds.c"
                                          return erl_backend__elds__succeeded = mercury__builtin__unify_2_p_0(erl_backend__elds__TypeInfo_31_31, ((MR_Box) (erl_backend__elds__V_11_11)), ((MR_Box) (erl_backend__elds__V_20_20)));
                                        }
#line 43 "elds.m"
                                      }
#line 43 "elds.m"
                                  }
#line 43 "elds.m"
                              }
#line 43 "elds.m"
                          }
#line 43 "elds.m"
                      }
#line 43 "elds.m"
                  }
#line 43 "elds.m"
              }
#line 43 "elds.m"
          }
#line 43 "elds.m"
      }
#line 43 "elds.m"
    return erl_backend__elds__succeeded;
#line 43 "elds.m"
  }
#line 43 "elds.m"
}

#line 381 "elds.m"
MR_Word MR_CALL 
erl_backend__elds__make_enum_alternative_1_f_0(
#line 381 "elds.m"
  MR_String erl_backend__elds__F_3)
#line 381 "elds.m"
{
#line 472 "elds.m"
  {
#line 472 "elds.m"
    MR_bool erl_backend__elds__succeeded;
#line 472 "elds.m"
    MR_Word erl_backend__elds__HeadVar__2_2;
#line 472 "elds.m"
    MR_Word erl_backend__elds__V_4_4;
#line 472 "elds.m"
    MR_Word erl_backend__elds__V_5_5;
#line 472 "elds.m"
    MR_Word erl_backend__elds__V_6_6;
#line 472 "elds.m"
    MR_Word erl_backend__elds__V_7_7;

#line 472 "elds.m"
    {
#line 472 "elds.m"
      erl_backend__elds__V_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 472 "elds.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds__V_7_7, 0) = ((MR_Box) (erl_backend__elds__F_3));
#line 472 "elds.m"
    }
#line 472 "elds.m"
    {
#line 472 "elds.m"
      erl_backend__elds__V_6_6 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 472 "elds.m"
      MR_hl_field(MR_mktag(3), erl_backend__elds__V_6_6, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 472 "elds.m"
      MR_hl_field(MR_mktag(3), erl_backend__elds__V_6_6, 1) = ((MR_Box) (erl_backend__elds__V_7_7));
#line 472 "elds.m"
    }
#line 472 "elds.m"
    {
#line 472 "elds.m"
      erl_backend__elds__V_5_5 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 472 "elds.m"
      MR_hl_field(MR_mktag(2), erl_backend__elds__V_5_5, 0) = ((MR_Box) (erl_backend__elds__V_6_6));
#line 472 "elds.m"
    }
#line 472 "elds.m"
    {
#line 472 "elds.m"
      erl_backend__elds__V_4_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 472 "elds.m"
      MR_hl_field(MR_mktag(1), erl_backend__elds__V_4_4, 0) = ((MR_Box) (erl_backend__elds__V_5_5));
#line 472 "elds.m"
      MR_hl_field(MR_mktag(1), erl_backend__elds__V_4_4, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 472 "elds.m"
    }
#line 472 "elds.m"
    {
#line 472 "elds.m"
      erl_backend__elds__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 472 "elds.m"
      MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 472 "elds.m"
      MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, 1) = ((MR_Box) (erl_backend__elds__V_4_4));
#line 472 "elds.m"
    }
#line 472 "elds.m"
    return erl_backend__elds__HeadVar__2_2;
#line 472 "elds.m"
  }
#line 381 "elds.m"
}

#line 371 "elds.m"
MR_Word MR_CALL 
erl_backend__elds__tuple_or_single_expr_1_f_0(
#line 371 "elds.m"
  MR_Word erl_backend__elds__List_3)
#line 371 "elds.m"
{
#line 465 "elds.m"
  {
#line 465 "elds.m"
    MR_bool erl_backend__elds__succeeded = ((MR_tag((MR_Word) erl_backend__elds__List_3)) == (MR_mktag((MR_Integer) 1)));
#line 465 "elds.m"
    MR_Word erl_backend__elds__HeadVar__2_2;
#line 465 "elds.m"
    MR_Word erl_backend__elds__SingleExpr_4;
#line 466 "elds.m"
    MR_Word erl_backend__elds__V_5_5;

#line 466 "elds.m"
    if (erl_backend__elds__succeeded)
#line 466 "elds.m"
      {
#line 466 "elds.m"
        erl_backend__elds__SingleExpr_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds__List_3, (MR_Integer) 0)));
#line 466 "elds.m"
        erl_backend__elds__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds__List_3, (MR_Integer) 1)));
#line 466 "elds.m"
        erl_backend__elds__succeeded = (erl_backend__elds__V_5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 466 "elds.m"
      }
#line 465 "elds.m"
    if (erl_backend__elds__succeeded)
#line 465 "elds.m"
      erl_backend__elds__HeadVar__2_2 = erl_backend__elds__SingleExpr_4;
#line 465 "elds.m"
    else
#line 469 "elds.m"
      {
#line 469 "elds.m"
        MR_Word erl_backend__elds__V_6_6;

#line 469 "elds.m"
        {
#line 469 "elds.m"
          erl_backend__elds__V_6_6 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 469 "elds.m"
          MR_hl_field(MR_mktag(3), erl_backend__elds__V_6_6, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 469 "elds.m"
          MR_hl_field(MR_mktag(3), erl_backend__elds__V_6_6, 1) = ((MR_Box) (erl_backend__elds__List_3));
#line 469 "elds.m"
        }
#line 465 "elds.m"
        {
#line 465 "elds.m"
          erl_backend__elds__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 465 "elds.m"
          MR_hl_field(MR_mktag(2), erl_backend__elds__HeadVar__2_2, 0) = ((MR_Box) (erl_backend__elds__V_6_6));
#line 465 "elds.m"
        }
#line 469 "elds.m"
      }
#line 465 "elds.m"
    return erl_backend__elds__HeadVar__2_2;
#line 465 "elds.m"
  }
#line 371 "elds.m"
}

#line 365 "elds.m"
MR_Integer MR_CALL 
erl_backend__elds__elds_clause_arity_1_f_0(
#line 365 "elds.m"
  MR_Word erl_backend__elds__HeadVar__1_1)
#line 365 "elds.m"
{
#line 463 "elds.m"
  {
#line 463 "elds.m"
    MR_bool erl_backend__elds__succeeded;
#line 463 "elds.m"
    MR_Integer erl_backend__elds__HeadVar__2_2;
#line 463 "elds.m"
    MR_Word erl_backend__elds__Args_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__1_1, (MR_Integer) 0)));
#line 463 "elds.m"
    MR_Word erl_backend__elds___Expr_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__1_1, (MR_Integer) 1)));

#line 463 "elds.m"
    {
#line 463 "elds.m"
      return erl_backend__elds__HeadVar__2_2 = mercury__list__length_1_f_0((MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_term_0, erl_backend__elds__Args_3);
    }
#line 463 "elds.m"
    return erl_backend__elds__HeadVar__2_2;
#line 463 "elds.m"
  }
#line 365 "elds.m"
}

#line 363 "elds.m"
MR_Integer MR_CALL 
erl_backend__elds__elds_body_arity_1_f_0(
#line 363 "elds.m"
  MR_Word erl_backend__elds__HeadVar__1_1)
#line 363 "elds.m"
{
#line 460 "elds.m"
  {
#line 460 "elds.m"
    MR_bool erl_backend__elds__succeeded;
#line 460 "elds.m"
    MR_Integer erl_backend__elds__HeadVar__2_2;

#line 460 "elds.m"
    if (((MR_tag((MR_Word) erl_backend__elds__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 460 "elds.m"
      {
#line 460 "elds.m"
        MR_Word erl_backend__elds__Clause_3 = (MR_Word) MR_body(((MR_Word) erl_backend__elds__HeadVar__1_1), (MR_Integer) 0);
#line 460 "elds.m"
        MR_Word erl_backend__elds__Args_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__Clause_3, (MR_Integer) 0)));
#line 463 "elds.m"
        MR_Word erl_backend__elds___Expr_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__Clause_3, (MR_Integer) 1)));

#line 463 "elds.m"
        {
#line 463 "elds.m"
          return erl_backend__elds__HeadVar__2_2 = mercury__list__length_1_f_0((MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_term_0, erl_backend__elds__Args_5);
        }
#line 460 "elds.m"
      }
#line 460 "elds.m"
    else
#line 461 "elds.m"
      erl_backend__elds__HeadVar__2_2 = ((MR_Integer) (MR_hl_field(MR_mktag(1), erl_backend__elds__HeadVar__1_1, (MR_Integer) 0)));
#line 460 "elds.m"
    return erl_backend__elds__HeadVar__2_2;
#line 460 "elds.m"
  }
#line 363 "elds.m"
}

#line 361 "elds.m"
MR_Word MR_CALL 
erl_backend__elds__det_expr_1_f_0(
#line 361 "elds.m"
  MR_Word erl_backend__elds__HeadVar__1_1)
#line 361 "elds.m"
{
#line 456 "elds.m"
  {
#line 456 "elds.m"
    MR_bool erl_backend__elds__succeeded;
#line 456 "elds.m"
    MR_Word erl_backend__elds__Expr_2;

#line 456 "elds.m"
    if ((erl_backend__elds__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 457 "elds.m"
      {
#line 458 "elds.m"
        {
#line 458 "elds.m"
          mercury__require__unexpected_3_p_0((MR_String) "erl_backend.elds", (MR_String) "function \140erl_backend.elds.det_expr\'/1", (MR_String) "no expression");
        }
#line 457 "elds.m"
      }
#line 456 "elds.m"
    else
#line 456 "elds.m"
      erl_backend__elds__Expr_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds__HeadVar__1_1, (MR_Integer) 0)));
#line 456 "elds.m"
    return erl_backend__elds__Expr_2;
#line 456 "elds.m"
  }
#line 361 "elds.m"
}

#line 355 "elds.m"
MR_Word MR_CALL 
erl_backend__elds__expr_or_void_1_f_0(
#line 355 "elds.m"
  MR_Word erl_backend__elds__HeadVar__1_1)
#line 355 "elds.m"
{
#line 453 "elds.m"
  {
#line 453 "elds.m"
    MR_bool erl_backend__elds__succeeded;
#line 453 "elds.m"
    MR_Word erl_backend__elds__HeadVar__2_2;

#line 453 "elds.m"
    if ((erl_backend__elds__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 454 "elds.m"
      {
#line 454 "elds.m"
        erl_backend__elds__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(2), &erl_backend__elds_scalar_common_2[4]);
#line 454 "elds.m"
      }
#line 453 "elds.m"
    else
#line 453 "elds.m"
      erl_backend__elds__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds__HeadVar__1_1, (MR_Integer) 0)));
#line 453 "elds.m"
    return erl_backend__elds__HeadVar__2_2;
#line 453 "elds.m"
  }
#line 355 "elds.m"
}

#line 347 "elds.m"
MR_Word MR_CALL 
erl_backend__elds__maybe_join_exprs1_2_f_0(
#line 347 "elds.m"
  MR_Word erl_backend__elds__HeadVar__1_1,
#line 347 "elds.m"
  MR_Word erl_backend__elds__HeadVar__2_2)
#line 347 "elds.m"
{
#line 450 "elds.m"
  {
#line 450 "elds.m"
    MR_bool erl_backend__elds__succeeded;
#line 450 "elds.m"
    MR_Word erl_backend__elds__HeadVar__3_3;

#line 450 "elds.m"
    if ((erl_backend__elds__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 451 "elds.m"
      erl_backend__elds__HeadVar__3_3 = erl_backend__elds__HeadVar__2_2;
#line 450 "elds.m"
    else
#line 450 "elds.m"
      {
#line 450 "elds.m"
        MR_Word erl_backend__elds__ExprA_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds__HeadVar__1_1, (MR_Integer) 0)));

#line 450 "elds.m"
        {
#line 450 "elds.m"
          return erl_backend__elds__HeadVar__3_3 = erl_backend__elds__join_exprs_2_f_0(erl_backend__elds__ExprA_4, erl_backend__elds__HeadVar__2_2);
        }
#line 450 "elds.m"
      }
#line 450 "elds.m"
    return erl_backend__elds__HeadVar__3_3;
#line 450 "elds.m"
  }
#line 347 "elds.m"
}

#line 340 "elds.m"
MR_Word MR_CALL 
erl_backend__elds__maybe_join_exprs_2_f_0(
#line 340 "elds.m"
  MR_Word erl_backend__elds__HeadVar__1_1,
#line 340 "elds.m"
  MR_Word erl_backend__elds__HeadVar__2_2)
#line 340 "elds.m"
{
#line 447 "elds.m"
  {
#line 447 "elds.m"
    MR_bool erl_backend__elds__succeeded;
#line 447 "elds.m"
    MR_Word erl_backend__elds__HeadVar__3_3;

#line 447 "elds.m"
    if ((erl_backend__elds__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 448 "elds.m"
      erl_backend__elds__HeadVar__3_3 = erl_backend__elds__HeadVar__1_1;
#line 447 "elds.m"
    else
#line 447 "elds.m"
      {
#line 447 "elds.m"
        MR_Word erl_backend__elds__ExprB_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)));

#line 447 "elds.m"
        {
#line 447 "elds.m"
          return erl_backend__elds__HeadVar__3_3 = erl_backend__elds__join_exprs_2_f_0(erl_backend__elds__HeadVar__1_1, erl_backend__elds__ExprB_5);
        }
#line 447 "elds.m"
      }
#line 447 "elds.m"
    return erl_backend__elds__HeadVar__3_3;
#line 447 "elds.m"
  }
#line 340 "elds.m"
}

#line 333 "elds.m"
MR_Word MR_CALL 
erl_backend__elds__join_exprs_2_f_0(
#line 333 "elds.m"
  MR_Word erl_backend__elds__ExprA_4,
#line 333 "elds.m"
  MR_Word erl_backend__elds__ExprB_5)
#line 333 "elds.m"
{
#line 429 "elds.m"
  {
#line 429 "elds.m"
    MR_bool erl_backend__elds__succeeded = ((MR_tag((MR_Word) erl_backend__elds__ExprA_4)) == (MR_mktag((MR_Integer) 1)));
#line 429 "elds.m"
    MR_Word erl_backend__elds__Expr_6;
#line 429 "elds.m"
    MR_Word erl_backend__elds__As_8;
#line 429 "elds.m"
    MR_Word erl_backend__elds__Bs_10;
#line 429 "elds.m"
    MR_Word erl_backend__elds__AsBs_11;
#line 432 "elds.m"
    MR_Word erl_backend__elds__As0_7;
#line 437 "elds.m"
    MR_Word erl_backend__elds__Bs0_9;
#line 443 "elds.m"
    MR_Word erl_backend__elds__SingleExpr_12;
#line 441 "elds.m"
    MR_Word erl_backend__elds__V_15_15;

#line 430 "elds.m"
    if (erl_backend__elds__succeeded)
#line 430 "elds.m"
      {
#line 430 "elds.m"
        erl_backend__elds__As0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds__ExprA_4, (MR_Integer) 0)));
#line 431 "elds.m"
        erl_backend__elds__As_8 = erl_backend__elds__As0_7;
#line 430 "elds.m"
      }
#line 430 "elds.m"
    else
#line 433 "elds.m"
      {
#line 433 "elds.m"
        {
#line 433 "elds.m"
          erl_backend__elds__As_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 433 "elds.m"
          MR_hl_field(MR_mktag(1), erl_backend__elds__As_8, 0) = ((MR_Box) (erl_backend__elds__ExprA_4));
#line 433 "elds.m"
          MR_hl_field(MR_mktag(1), erl_backend__elds__As_8, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 433 "elds.m"
        }
#line 433 "elds.m"
      }
#line 435 "elds.m"
    erl_backend__elds__succeeded = ((MR_tag((MR_Word) erl_backend__elds__ExprB_5)) == (MR_mktag((MR_Integer) 1)));
#line 435 "elds.m"
    if (erl_backend__elds__succeeded)
#line 435 "elds.m"
      {
#line 435 "elds.m"
        erl_backend__elds__Bs0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds__ExprB_5, (MR_Integer) 0)));
#line 436 "elds.m"
        erl_backend__elds__Bs_10 = erl_backend__elds__Bs0_9;
#line 435 "elds.m"
      }
#line 435 "elds.m"
    else
#line 438 "elds.m"
      {
#line 438 "elds.m"
        {
#line 438 "elds.m"
          erl_backend__elds__Bs_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 438 "elds.m"
          MR_hl_field(MR_mktag(1), erl_backend__elds__Bs_10, 0) = ((MR_Box) (erl_backend__elds__ExprB_5));
#line 438 "elds.m"
          MR_hl_field(MR_mktag(1), erl_backend__elds__Bs_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 438 "elds.m"
        }
#line 438 "elds.m"
      }
#line 440 "elds.m"
    {
#line 440 "elds.m"
      erl_backend__elds__AsBs_11 = mercury__list__f_43_43_2_f_0((MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0, erl_backend__elds__As_8, erl_backend__elds__Bs_10);
    }
#line 441 "elds.m"
    erl_backend__elds__succeeded = ((MR_tag((MR_Word) erl_backend__elds__AsBs_11)) == (MR_mktag((MR_Integer) 1)));
#line 441 "elds.m"
    if (erl_backend__elds__succeeded)
#line 441 "elds.m"
      {
#line 441 "elds.m"
        erl_backend__elds__SingleExpr_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds__AsBs_11, (MR_Integer) 0)));
#line 441 "elds.m"
        erl_backend__elds__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds__AsBs_11, (MR_Integer) 1)));
#line 441 "elds.m"
        erl_backend__elds__succeeded = (erl_backend__elds__V_15_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 441 "elds.m"
      }
#line 443 "elds.m"
    if (erl_backend__elds__succeeded)
#line 442 "elds.m"
      erl_backend__elds__Expr_6 = erl_backend__elds__SingleExpr_12;
#line 443 "elds.m"
    else
#line 444 "elds.m"
      {
#line 444 "elds.m"
        erl_backend__elds__Expr_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 444 "elds.m"
        MR_hl_field(MR_mktag(1), erl_backend__elds__Expr_6, 0) = ((MR_Box) (erl_backend__elds__AsBs_11));
#line 444 "elds.m"
      }
#line 429 "elds.m"
    return erl_backend__elds__Expr_6;
#line 429 "elds.m"
  }
#line 333 "elds.m"
}

#line 328 "elds.m"
MR_Word MR_CALL 
erl_backend__elds__expr_to_term_1_f_0(
#line 328 "elds.m"
  MR_Word erl_backend__elds__Expr_3)
#line 328 "elds.m"
{
#line 425 "elds.m"
  {
#line 425 "elds.m"
    MR_bool erl_backend__elds__succeeded = ((MR_tag((MR_Word) erl_backend__elds__Expr_3)) == (MR_mktag((MR_Integer) 2)));
#line 425 "elds.m"
    MR_Word erl_backend__elds__Term_4;
#line 425 "elds.m"
    MR_Word erl_backend__elds__Term0_5;

#line 423 "elds.m"
    if (erl_backend__elds__succeeded)
#line 423 "elds.m"
      {
#line 423 "elds.m"
        erl_backend__elds__Term0_5 = ((MR_Word) (MR_hl_field(MR_mktag(2), erl_backend__elds__Expr_3, (MR_Integer) 0)));
#line 424 "elds.m"
        erl_backend__elds__Term_4 = erl_backend__elds__Term0_5;
#line 423 "elds.m"
      }
#line 423 "elds.m"
    else
#line 426 "elds.m"
      {
#line 426 "elds.m"
        {
#line 426 "elds.m"
          mercury__require__unexpected_3_p_0((MR_String) "erl_backend.elds", (MR_String) "function \140erl_backend.elds.expr_to_term\'/1", (MR_String) "unable to convert elds_expr to elds_term");
        }
#line 426 "elds.m"
      }
#line 425 "elds.m"
    return erl_backend__elds__Term_4;
#line 425 "elds.m"
  }
#line 328 "elds.m"
}

#line 420 "elds.m"
static MR_Box MR_CALL 
erl_backend__elds__exprs_from_fixed_vars_1_f_0_1(
#line 420 "elds.m"
  MR_Box erl_backend__elds__closure_arg,
#line 420 "elds.m"
  MR_Box erl_backend__elds__wrapper_arg_1)
#line 420 "elds.m"
{
#line 420 "elds.m"
  {
#line 420 "elds.m"
    MR_Box erl_backend__elds__wrapper_arg_2;
#line 420 "elds.m"
    MR_Box erl_backend__elds__closure = erl_backend__elds__closure_arg;
#line 420 "elds.m"
    MR_Word erl_backend__elds__conv0_HeadVar__2_7;

#line 420 "elds.m"
    {
#line 420 "elds.m"
      erl_backend__elds__conv0_HeadVar__2_7 = erl_backend__elds__IntroducedFrom__func__exprs_from_fixed_vars__420__1_1_f_0(((MR_String) erl_backend__elds__wrapper_arg_1));
    }
#line 420 "elds.m"
    erl_backend__elds__wrapper_arg_2 = ((MR_Box) (erl_backend__elds__conv0_HeadVar__2_7));
#line 420 "elds.m"
    return erl_backend__elds__wrapper_arg_2;
#line 420 "elds.m"
  }
#line 420 "elds.m"
}

#line 324 "elds.m"
MR_Word MR_CALL 
erl_backend__elds__exprs_from_fixed_vars_1_f_0(
#line 324 "elds.m"
  MR_Word erl_backend__elds__Names_3)
#line 324 "elds.m"
{
#line 419 "elds.m"
  {
#line 419 "elds.m"
    MR_bool erl_backend__elds__succeeded;
#line 419 "elds.m"
    MR_Word erl_backend__elds__HeadVar__2_2;

#line 419 "elds.m"
    {
#line 419 "elds.m"
      erl_backend__elds__HeadVar__2_2 = mercury__list__map_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0, (MR_Word) &erl_backend__elds_scalar_common_3[4], erl_backend__elds__Names_3);
    }
#line 419 "elds.m"
    return erl_backend__elds__HeadVar__2_2;
#line 419 "elds.m"
  }
#line 324 "elds.m"
}

#line 418 "elds.m"
static MR_Box MR_CALL 
erl_backend__elds__terms_from_fixed_vars_1_f_0_1(
#line 418 "elds.m"
  MR_Box erl_backend__elds__closure_arg,
#line 418 "elds.m"
  MR_Box erl_backend__elds__wrapper_arg_1)
#line 418 "elds.m"
{
#line 418 "elds.m"
  {
#line 418 "elds.m"
    MR_Box erl_backend__elds__wrapper_arg_2;
#line 418 "elds.m"
    MR_Box erl_backend__elds__closure = erl_backend__elds__closure_arg;
#line 418 "elds.m"
    MR_Word erl_backend__elds__conv0_HeadVar__2_7;

#line 418 "elds.m"
    {
#line 418 "elds.m"
      erl_backend__elds__conv0_HeadVar__2_7 = erl_backend__elds__IntroducedFrom__func__terms_from_fixed_vars__418__1_1_f_0(((MR_String) erl_backend__elds__wrapper_arg_1));
    }
#line 418 "elds.m"
    erl_backend__elds__wrapper_arg_2 = ((MR_Box) (erl_backend__elds__conv0_HeadVar__2_7));
#line 418 "elds.m"
    return erl_backend__elds__wrapper_arg_2;
#line 418 "elds.m"
  }
#line 418 "elds.m"
}

#line 323 "elds.m"
MR_Word MR_CALL 
erl_backend__elds__terms_from_fixed_vars_1_f_0(
#line 323 "elds.m"
  MR_Word erl_backend__elds__Names_3)
#line 323 "elds.m"
{
#line 417 "elds.m"
  {
#line 417 "elds.m"
    MR_bool erl_backend__elds__succeeded;
#line 417 "elds.m"
    MR_Word erl_backend__elds__HeadVar__2_2;

#line 417 "elds.m"
    {
#line 417 "elds.m"
      erl_backend__elds__HeadVar__2_2 = mercury__list__map_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_term_0, (MR_Word) &erl_backend__elds_scalar_common_3[3], erl_backend__elds__Names_3);
    }
#line 417 "elds.m"
    return erl_backend__elds__HeadVar__2_2;
#line 417 "elds.m"
  }
#line 323 "elds.m"
}

#line 415 "elds.m"
static MR_Box MR_CALL 
erl_backend__elds__exprs_from_vars_1_f_0_1(
#line 415 "elds.m"
  MR_Box erl_backend__elds__closure_arg,
#line 415 "elds.m"
  MR_Box erl_backend__elds__wrapper_arg_1)
#line 415 "elds.m"
{
#line 415 "elds.m"
  {
#line 415 "elds.m"
    MR_Box erl_backend__elds__wrapper_arg_2;
#line 415 "elds.m"
    MR_Box erl_backend__elds__closure = erl_backend__elds__closure_arg;
#line 415 "elds.m"
    MR_Word erl_backend__elds__conv0_HeadVar__2_2;

#line 415 "elds.m"
    {
#line 415 "elds.m"
      erl_backend__elds__conv0_HeadVar__2_2 = erl_backend__elds__expr_from_var_1_f_0(((MR_Word) erl_backend__elds__wrapper_arg_1));
    }
#line 415 "elds.m"
    erl_backend__elds__wrapper_arg_2 = ((MR_Box) (erl_backend__elds__conv0_HeadVar__2_2));
#line 415 "elds.m"
    return erl_backend__elds__wrapper_arg_2;
#line 415 "elds.m"
  }
#line 415 "elds.m"
}

#line 321 "elds.m"
MR_Word MR_CALL 
erl_backend__elds__exprs_from_vars_1_f_0(
#line 321 "elds.m"
  MR_Word erl_backend__elds__Vars_3)
#line 321 "elds.m"
{
#line 415 "elds.m"
  {
#line 415 "elds.m"
    MR_bool erl_backend__elds__succeeded;
#line 415 "elds.m"
    MR_Word erl_backend__elds__HeadVar__2_2;

#line 415 "elds.m"
    {
#line 415 "elds.m"
      erl_backend__elds__HeadVar__2_2 = mercury__list__map_2_f_0((MR_Word) &erl_backend__elds_scalar_common_1[0], (MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0, (MR_Word) &erl_backend__elds_scalar_common_3[2], erl_backend__elds__Vars_3);
    }
#line 415 "elds.m"
    return erl_backend__elds__HeadVar__2_2;
#line 415 "elds.m"
  }
#line 321 "elds.m"
}

#line 320 "elds.m"
MR_Word MR_CALL 
erl_backend__elds__expr_from_var_1_f_0(
#line 320 "elds.m"
  MR_Word erl_backend__elds__Var_3)
#line 320 "elds.m"
{
#line 414 "elds.m"
  {
#line 414 "elds.m"
    MR_bool erl_backend__elds__succeeded;
#line 414 "elds.m"
    MR_Word erl_backend__elds__HeadVar__2_2;
#line 414 "elds.m"
    MR_Word erl_backend__elds__V_4_4;

#line 414 "elds.m"
    {
#line 414 "elds.m"
      erl_backend__elds__V_4_4 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 414 "elds.m"
      MR_hl_field(MR_mktag(3), erl_backend__elds__V_4_4, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 414 "elds.m"
      MR_hl_field(MR_mktag(3), erl_backend__elds__V_4_4, 1) = ((MR_Box) (erl_backend__elds__Var_3));
#line 414 "elds.m"
    }
#line 414 "elds.m"
    {
#line 414 "elds.m"
      erl_backend__elds__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 414 "elds.m"
      MR_hl_field(MR_mktag(2), erl_backend__elds__HeadVar__2_2, 0) = ((MR_Box) (erl_backend__elds__V_4_4));
#line 414 "elds.m"
    }
#line 414 "elds.m"
    return erl_backend__elds__HeadVar__2_2;
#line 414 "elds.m"
  }
#line 320 "elds.m"
}

#line 412 "elds.m"
static MR_Box MR_CALL 
erl_backend__elds__terms_from_vars_1_f_0_1(
#line 412 "elds.m"
  MR_Box erl_backend__elds__closure_arg,
#line 412 "elds.m"
  MR_Box erl_backend__elds__wrapper_arg_1)
#line 412 "elds.m"
{
#line 412 "elds.m"
  {
#line 412 "elds.m"
    MR_Box erl_backend__elds__wrapper_arg_2;
#line 412 "elds.m"
    MR_Box erl_backend__elds__closure = erl_backend__elds__closure_arg;
#line 412 "elds.m"
    MR_Word erl_backend__elds__conv0_HeadVar__2_2;

#line 412 "elds.m"
    {
#line 412 "elds.m"
      erl_backend__elds__conv0_HeadVar__2_2 = erl_backend__elds__term_from_var_1_f_0(((MR_Word) erl_backend__elds__wrapper_arg_1));
    }
#line 412 "elds.m"
    erl_backend__elds__wrapper_arg_2 = ((MR_Box) (erl_backend__elds__conv0_HeadVar__2_2));
#line 412 "elds.m"
    return erl_backend__elds__wrapper_arg_2;
#line 412 "elds.m"
  }
#line 412 "elds.m"
}

#line 318 "elds.m"
MR_Word MR_CALL 
erl_backend__elds__terms_from_vars_1_f_0(
#line 318 "elds.m"
  MR_Word erl_backend__elds__Vars_3)
#line 318 "elds.m"
{
#line 412 "elds.m"
  {
#line 412 "elds.m"
    MR_bool erl_backend__elds__succeeded;
#line 412 "elds.m"
    MR_Word erl_backend__elds__HeadVar__2_2;

#line 412 "elds.m"
    {
#line 412 "elds.m"
      erl_backend__elds__HeadVar__2_2 = mercury__list__map_2_f_0((MR_Word) &erl_backend__elds_scalar_common_1[0], (MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_term_0, (MR_Word) &erl_backend__elds_scalar_common_3[1], erl_backend__elds__Vars_3);
    }
#line 412 "elds.m"
    return erl_backend__elds__HeadVar__2_2;
#line 412 "elds.m"
  }
#line 318 "elds.m"
}

#line 317 "elds.m"
MR_Word MR_CALL 
erl_backend__elds__term_from_var_1_f_0(
#line 317 "elds.m"
  MR_Word erl_backend__elds__Var_3)
#line 317 "elds.m"
{
#line 411 "elds.m"
  {
#line 411 "elds.m"
    MR_bool erl_backend__elds__succeeded;
#line 411 "elds.m"
    MR_Word erl_backend__elds__HeadVar__2_2;

#line 411 "elds.m"
    {
#line 411 "elds.m"
      erl_backend__elds__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 411 "elds.m"
      MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 411 "elds.m"
      MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, 1) = ((MR_Box) (erl_backend__elds__Var_3));
#line 411 "elds.m"
    }
#line 411 "elds.m"
    return erl_backend__elds__HeadVar__2_2;
#line 411 "elds.m"
  }
#line 317 "elds.m"
}

#line 315 "elds.m"
MR_Word MR_CALL 
erl_backend__elds__var_eq_false_1_f_0(
#line 315 "elds.m"
  MR_Word erl_backend__elds__Var_3)
#line 315 "elds.m"
{
#line 409 "elds.m"
  {
#line 409 "elds.m"
    MR_bool erl_backend__elds__succeeded;
#line 409 "elds.m"
    MR_Word erl_backend__elds__HeadVar__2_2;
#line 409 "elds.m"
    MR_Word erl_backend__elds__V_4_4;
#line 409 "elds.m"
    MR_Word erl_backend__elds__V_8_8;

#line 414 "elds.m"
    {
#line 414 "elds.m"
      erl_backend__elds__V_8_8 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 414 "elds.m"
      MR_hl_field(MR_mktag(3), erl_backend__elds__V_8_8, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 414 "elds.m"
      MR_hl_field(MR_mktag(3), erl_backend__elds__V_8_8, 1) = ((MR_Box) (erl_backend__elds__Var_3));
#line 414 "elds.m"
    }
#line 414 "elds.m"
    {
#line 414 "elds.m"
      erl_backend__elds__V_4_4 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 414 "elds.m"
      MR_hl_field(MR_mktag(2), erl_backend__elds__V_4_4, 0) = ((MR_Box) (erl_backend__elds__V_8_8));
#line 414 "elds.m"
    }
#line 409 "elds.m"
    {
#line 409 "elds.m"
      erl_backend__elds__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 409 "elds.m"
      MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 409 "elds.m"
      MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, 1) = ((MR_Box) (erl_backend__elds__V_4_4));
#line 409 "elds.m"
      MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, 2) = ((MR_Box) (MR_mkword(MR_mktag(2), &erl_backend__elds_scalar_common_2[3])));
#line 409 "elds.m"
    }
#line 409 "elds.m"
    return erl_backend__elds__HeadVar__2_2;
#line 409 "elds.m"
  }
#line 315 "elds.m"
}

#line 313 "elds.m"
MR_Word MR_CALL 
erl_backend__elds__elds_call_self_0_f_0(void)
#line 313 "elds.m"
{
#line 407 "elds.m"
  {
#line 407 "elds.m"
    MR_bool erl_backend__elds__succeeded;

#line 407 "elds.m"
    return (MR_Word) MR_mkword(MR_mktag(3), &erl_backend__elds_scalar_common_3[0]);
#line 407 "elds.m"
  }
#line 313 "elds.m"
}

#line 312 "elds.m"
MR_Word MR_CALL 
erl_backend__elds__elds_call_element_2_f_0(
#line 312 "elds.m"
  MR_Word erl_backend__elds__Var_4,
#line 312 "elds.m"
  MR_Integer erl_backend__elds__Index_5)
#line 312 "elds.m"
{
#line 404 "elds.m"
  {
#line 404 "elds.m"
    MR_bool erl_backend__elds__succeeded;
#line 404 "elds.m"
    MR_Word erl_backend__elds__HeadVar__3_3;
#line 404 "elds.m"
    MR_Word erl_backend__elds__V_7_7;
#line 404 "elds.m"
    MR_Word erl_backend__elds__V_8_8;
#line 404 "elds.m"
    MR_Word erl_backend__elds__V_9_9;
#line 404 "elds.m"
    MR_Word erl_backend__elds__V_10_10;
#line 404 "elds.m"
    MR_Word erl_backend__elds__V_11_11;
#line 404 "elds.m"
    MR_Word erl_backend__elds__V_14_14;

#line 405 "elds.m"
    {
#line 405 "elds.m"
      erl_backend__elds__V_9_9 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 405 "elds.m"
      MR_hl_field(MR_mktag(2), erl_backend__elds__V_9_9, 0) = ((MR_Box) (erl_backend__elds__Index_5));
#line 405 "elds.m"
    }
#line 405 "elds.m"
    {
#line 405 "elds.m"
      erl_backend__elds__V_8_8 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 405 "elds.m"
      MR_hl_field(MR_mktag(2), erl_backend__elds__V_8_8, 0) = ((MR_Box) (erl_backend__elds__V_9_9));
#line 405 "elds.m"
    }
#line 414 "elds.m"
    {
#line 414 "elds.m"
      erl_backend__elds__V_14_14 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 414 "elds.m"
      MR_hl_field(MR_mktag(3), erl_backend__elds__V_14_14, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 414 "elds.m"
      MR_hl_field(MR_mktag(3), erl_backend__elds__V_14_14, 1) = ((MR_Box) (erl_backend__elds__Var_4));
#line 414 "elds.m"
    }
#line 414 "elds.m"
    {
#line 414 "elds.m"
      erl_backend__elds__V_11_11 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 414 "elds.m"
      MR_hl_field(MR_mktag(2), erl_backend__elds__V_11_11, 0) = ((MR_Box) (erl_backend__elds__V_14_14));
#line 414 "elds.m"
    }
#line 405 "elds.m"
    {
#line 405 "elds.m"
      erl_backend__elds__V_10_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 405 "elds.m"
      MR_hl_field(MR_mktag(1), erl_backend__elds__V_10_10, 0) = ((MR_Box) (erl_backend__elds__V_11_11));
#line 405 "elds.m"
      MR_hl_field(MR_mktag(1), erl_backend__elds__V_10_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 405 "elds.m"
    }
#line 404 "elds.m"
    {
#line 404 "elds.m"
      erl_backend__elds__V_7_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 404 "elds.m"
      MR_hl_field(MR_mktag(1), erl_backend__elds__V_7_7, 0) = ((MR_Box) (erl_backend__elds__V_8_8));
#line 404 "elds.m"
      MR_hl_field(MR_mktag(1), erl_backend__elds__V_7_7, 1) = ((MR_Box) (erl_backend__elds__V_10_10));
#line 404 "elds.m"
    }
#line 400 "elds.m"
    {
#line 400 "elds.m"
      erl_backend__elds__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 400 "elds.m"
      MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 400 "elds.m"
      MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &erl_backend__elds_scalar_common_2[1])));
#line 400 "elds.m"
      MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, 2) = ((MR_Box) (erl_backend__elds__V_7_7));
#line 400 "elds.m"
    }
#line 404 "elds.m"
    return erl_backend__elds__HeadVar__3_3;
#line 404 "elds.m"
  }
#line 312 "elds.m"
}

#line 311 "elds.m"
MR_Word MR_CALL 
erl_backend__elds__elds_call_builtin_2_f_0(
#line 311 "elds.m"
  MR_String erl_backend__elds__FunName_4,
#line 311 "elds.m"
  MR_Word erl_backend__elds__Exprs_5)
#line 311 "elds.m"
{
#line 400 "elds.m"
  {
#line 400 "elds.m"
    MR_bool erl_backend__elds__succeeded;
#line 400 "elds.m"
    MR_Word erl_backend__elds__HeadVar__3_3;
#line 400 "elds.m"
    MR_Word erl_backend__elds__V_6_6;

#line 401 "elds.m"
    {
#line 401 "elds.m"
      erl_backend__elds__V_6_6 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 401 "elds.m"
      MR_hl_field(MR_mktag(2), erl_backend__elds__V_6_6, 0) = ((MR_Box) (erl_backend__elds__FunName_4));
#line 401 "elds.m"
    }
#line 400 "elds.m"
    {
#line 400 "elds.m"
      erl_backend__elds__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 400 "elds.m"
      MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 400 "elds.m"
      MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, 1) = ((MR_Box) (erl_backend__elds__V_6_6));
#line 400 "elds.m"
      MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, 2) = ((MR_Box) (erl_backend__elds__Exprs_5));
#line 400 "elds.m"
    }
#line 400 "elds.m"
    return erl_backend__elds__HeadVar__3_3;
#line 400 "elds.m"
  }
#line 311 "elds.m"
}

#line 309 "elds.m"
MR_Word MR_CALL 
erl_backend__elds__elds_commit_marker_0_f_0(void)
#line 309 "elds.m"
{
#line 398 "elds.m"
  {
#line 398 "elds.m"
    MR_bool erl_backend__elds__succeeded;

#line 398 "elds.m"
    return (MR_Word) MR_mkword(MR_mktag(2), &erl_backend__elds_scalar_common_2[0]);
#line 398 "elds.m"
  }
#line 309 "elds.m"
}

#line 304 "elds.m"
MR_Word MR_CALL 
erl_backend__elds__elds_empty_tuple_0_f_0(void)
#line 304 "elds.m"
{
#line 396 "elds.m"
  {
#line 396 "elds.m"
    MR_bool erl_backend__elds__succeeded;

#line 396 "elds.m"
    return (MR_Word) MR_mkword(MR_mktag(3), &erl_backend__elds_scalar_common_1[19]);
#line 396 "elds.m"
  }
#line 304 "elds.m"
}

#line 303 "elds.m"
MR_Word MR_CALL 
erl_backend__elds__elds_throw_atom_0_f_0(void)
#line 303 "elds.m"
{
#line 395 "elds.m"
  {
#line 395 "elds.m"
    MR_bool erl_backend__elds__succeeded;

#line 395 "elds.m"
    return (MR_Word) MR_mkword(MR_mktag(3), &erl_backend__elds_scalar_common_1[18]);
#line 395 "elds.m"
  }
#line 303 "elds.m"
}

#line 302 "elds.m"
MR_Word MR_CALL 
erl_backend__elds__elds_fail_0_f_0(void)
#line 302 "elds.m"
{
#line 394 "elds.m"
  {
#line 394 "elds.m"
    MR_bool erl_backend__elds__succeeded;

#line 394 "elds.m"
    return (MR_Word) MR_mkword(MR_mktag(3), &erl_backend__elds_scalar_common_1[17]);
#line 394 "elds.m"
  }
#line 302 "elds.m"
}

#line 301 "elds.m"
MR_Word MR_CALL 
erl_backend__elds__elds_false_0_f_0(void)
#line 301 "elds.m"
{
#line 393 "elds.m"
  {
#line 393 "elds.m"
    MR_bool erl_backend__elds__succeeded;

#line 393 "elds.m"
    return (MR_Word) MR_mkword(MR_mktag(3), &erl_backend__elds_scalar_common_1[16]);
#line 393 "elds.m"
  }
#line 301 "elds.m"
}

#line 300 "elds.m"
MR_Word MR_CALL 
erl_backend__elds__elds_true_0_f_0(void)
#line 300 "elds.m"
{
#line 392 "elds.m"
  {
#line 392 "elds.m"
    MR_bool erl_backend__elds__succeeded;

#line 392 "elds.m"
    return (MR_Word) MR_mkword(MR_mktag(3), &erl_backend__elds_scalar_common_1[15]);
#line 392 "elds.m"
  }
#line 300 "elds.m"
}

void mercury__erl_backend__elds__init(void)
{
}

void mercury__erl_backend__elds__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_0);
	MR_register_type_ctor_info(&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_binop_0);
	MR_register_type_ctor_info(&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_body_0);
	MR_register_type_ctor_info(&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_call_target_0);
	MR_register_type_ctor_info(&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_case_0);
	MR_register_type_ctor_info(&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_catch_0);
	MR_register_type_ctor_info(&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_clause_0);
	MR_register_type_ctor_info(&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_defn_0);
	MR_register_type_ctor_info(&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0);
	MR_register_type_ctor_info(&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_foreign_export_defn_0);
	MR_register_type_ctor_info(&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_rtti_defn_0);
	MR_register_type_ctor_info(&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_rtti_id_0);
	MR_register_type_ctor_info(&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_term_0);
	MR_register_type_ctor_info(&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_unop_0);
}

void mercury__erl_backend__elds__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module erl_backend.elds. */
