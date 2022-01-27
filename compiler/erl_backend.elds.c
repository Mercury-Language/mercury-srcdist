/*
** Automatically generated from `elds.m'
** by the Mercury compiler,
** version rotd-2015-07-28
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
#include "cord.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "erl_backend.mih"
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
#include "mdbcomp.sym_name.mih"
#include "mdbcomp.trace_counts.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
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




#line 137 "erl_backend.elds.c"
static const MR_FA_PseudoTypeInfo_Struct1 erl_backend__elds__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 140 "erl_backend.elds.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__elds__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0;

#line 143 "erl_backend.elds.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__elds__list__ti_list_1parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0;

#line 146 "erl_backend.elds.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__elds__list__ti_list_1parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0;

#line 149 "erl_backend.elds.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__elds__list__ti_list_1erl_backend__elds__type_ctor_info_elds_defn_0;

#line 152 "erl_backend.elds.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__elds__list__ti_list_1erl_backend__elds__type_ctor_info_elds_foreign_export_defn_0;

#line 155 "erl_backend.elds.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__elds__list__ti_list_1erl_backend__elds__type_ctor_info_elds_rtti_defn_0;

#line 158 "erl_backend.elds.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__elds__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

#line 161 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_0_0[9];

#line 164 "erl_backend.elds.c"
static const MR_ConstString erl_backend__elds__erl_backend__elds__field_names_elds_0_0[9];

#line 167 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_0_0;

#line 170 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_0_0[1];

#line 173 "erl_backend.elds.c"
static const MR_DuPtagLayout erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_0[1];

#line 176 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_name_ordered_elds_0[1];

#line 179 "erl_backend.elds.c"
static const MR_Integer erl_backend__elds__erl_backend__elds__functor_number_map_elds_0[1];

#line 182 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_0;

#line 185 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_1;

#line 188 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_2;

#line 191 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_3;

#line 194 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_4;

#line 197 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_5;

#line 200 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_6;

#line 203 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_7;

#line 206 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_8;

#line 209 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_9;

#line 212 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_10;

#line 215 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_11;

#line 218 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_12;

#line 221 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_13;

#line 224 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_14;

#line 227 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_15;

#line 230 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_16;

#line 233 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_17;

#line 236 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_18;

#line 239 "erl_backend.elds.c"
static const MR_EnumFunctorDescPtr erl_backend__elds__erl_backend__elds__enum_value_ordered_elds_binop_0[19];

#line 242 "erl_backend.elds.c"
static const MR_EnumFunctorDescPtr erl_backend__elds__erl_backend__elds__enum_name_ordered_elds_binop_0[19];

#line 245 "erl_backend.elds.c"
static const MR_Integer erl_backend__elds__erl_backend__elds__functor_number_map_elds_binop_0[19];

#line 248 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_body_0_0[1];

#line 251 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_body_0_0;

#line 254 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_body_0_1[1];

#line 257 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_body_0_1;

#line 260 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_body_0_0[1];

#line 263 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_body_0_1[1];

#line 266 "erl_backend.elds.c"
static const MR_DuPtagLayout erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_body_0[2];

#line 269 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_name_ordered_elds_body_0[2];

#line 272 "erl_backend.elds.c"
static const MR_Integer erl_backend__elds__erl_backend__elds__functor_number_map_elds_body_0[2];

#line 275 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_call_target_0_0[1];

#line 278 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_call_target_0_0;

#line 281 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_call_target_0_1[1];

#line 284 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_call_target_0_1;

#line 287 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_call_target_0_2[1];

#line 290 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_call_target_0_2;

#line 293 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_call_target_0_0[1];

#line 296 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_call_target_0_1[1];

#line 299 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_call_target_0_2[1];

#line 302 "erl_backend.elds.c"
static const MR_DuPtagLayout erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_call_target_0[3];

#line 305 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_name_ordered_elds_call_target_0[3];

#line 308 "erl_backend.elds.c"
static const MR_Integer erl_backend__elds__erl_backend__elds__functor_number_map_elds_call_target_0[3];

#line 311 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_case_0_0[2];

#line 314 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_case_0_0;

#line 317 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_case_0_0[1];

#line 320 "erl_backend.elds.c"
static const MR_DuPtagLayout erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_case_0[1];

#line 323 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_name_ordered_elds_case_0[1];

#line 326 "erl_backend.elds.c"
static const MR_Integer erl_backend__elds__erl_backend__elds__functor_number_map_elds_case_0[1];

#line 329 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_catch_0_0[3];

#line 332 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_catch_0_0;

#line 335 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_catch_0_0[1];

#line 338 "erl_backend.elds.c"
static const MR_DuPtagLayout erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_catch_0[1];

#line 341 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_name_ordered_elds_catch_0[1];

#line 344 "erl_backend.elds.c"
static const MR_Integer erl_backend__elds__erl_backend__elds__functor_number_map_elds_catch_0[1];

#line 347 "erl_backend.elds.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__elds__list__ti_list_1erl_backend__elds__type_ctor_info_elds_term_0;

#line 350 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_clause_0_0[2];

#line 353 "erl_backend.elds.c"
static const MR_ConstString erl_backend__elds__erl_backend__elds__field_names_elds_clause_0_0[2];

#line 356 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_clause_0_0;

#line 359 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_clause_0_0[1];

#line 362 "erl_backend.elds.c"
static const MR_DuPtagLayout erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_clause_0[1];

#line 365 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_name_ordered_elds_clause_0[1];

#line 368 "erl_backend.elds.c"
static const MR_Integer erl_backend__elds__erl_backend__elds__functor_number_map_elds_clause_0[1];

#line 371 "erl_backend.elds.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__elds__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 374 "erl_backend.elds.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__elds__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0;

#line 377 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_defn_0_0[4];

#line 380 "erl_backend.elds.c"
static const MR_ConstString erl_backend__elds__erl_backend__elds__field_names_elds_defn_0_0[4];

#line 383 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_defn_0_0;

#line 386 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_defn_0_0[1];

#line 389 "erl_backend.elds.c"
static const MR_DuPtagLayout erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_defn_0[1];

#line 392 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_name_ordered_elds_defn_0[1];

#line 395 "erl_backend.elds.c"
static const MR_Integer erl_backend__elds__erl_backend__elds__functor_number_map_elds_defn_0[1];

#line 398 "erl_backend.elds.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__elds__list__ti_list_1erl_backend__elds__type_ctor_info_elds_expr_0;

#line 401 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_0[1];

#line 404 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_0;

#line 407 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_1[1];

#line 410 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_1;

#line 413 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_2[2];

#line 416 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_2;

#line 419 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_3[2];

#line 422 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_3;

#line 425 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_4[3];

#line 428 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_4;

#line 431 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_5[2];

#line 434 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_5;

#line 437 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_6[1];

#line 440 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_6;

#line 443 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_7[1];

#line 446 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_7;

#line 449 "erl_backend.elds.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__elds__list__ti_list_1erl_backend__elds__type_ctor_info_elds_case_0;

#line 452 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_8[2];

#line 455 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_8;

#line 458 "erl_backend.elds.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__elds__maybe__ti_maybe_1erl_backend__elds__type_ctor_info_elds_catch_0;

#line 461 "erl_backend.elds.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__elds__maybe__ti_maybe_1erl_backend__elds__type_ctor_info_elds_expr_0;

#line 464 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_9[4];

#line 467 "erl_backend.elds.c"
static const MR_ConstString erl_backend__elds__erl_backend__elds__field_names_elds_expr_0_9[4];

#line 470 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_9;

#line 473 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_10[1];

#line 476 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_10;

#line 479 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_11[2];

#line 482 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_11;

#line 485 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_12[2];

#line 488 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_12;

#line 491 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_13[1];

#line 494 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_13;

#line 497 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_expr_0_0[1];

#line 500 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_expr_0_1[1];

#line 503 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_expr_0_2[1];

#line 506 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_expr_0_3[11];

#line 509 "erl_backend.elds.c"
static const MR_DuPtagLayout erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_expr_0[4];

#line 512 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_name_ordered_elds_expr_0[14];

#line 515 "erl_backend.elds.c"
static const MR_Integer erl_backend__elds__erl_backend__elds__functor_number_map_elds_expr_0[14];

#line 518 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_foreign_export_defn_0_0[3];

#line 521 "erl_backend.elds.c"
static const MR_ConstString erl_backend__elds__erl_backend__elds__field_names_elds_foreign_export_defn_0_0[3];

#line 524 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_foreign_export_defn_0_0;

#line 527 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_foreign_export_defn_0_0[1];

#line 530 "erl_backend.elds.c"
static const MR_DuPtagLayout erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_foreign_export_defn_0[1];

#line 533 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_name_ordered_elds_foreign_export_defn_0[1];

#line 536 "erl_backend.elds.c"
static const MR_Integer erl_backend__elds__erl_backend__elds__functor_number_map_elds_foreign_export_defn_0[1];

#line 539 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_rtti_defn_0_0[4];

#line 542 "erl_backend.elds.c"
static const MR_ConstString erl_backend__elds__erl_backend__elds__field_names_elds_rtti_defn_0_0[4];

#line 545 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_rtti_defn_0_0;

#line 548 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_rtti_defn_0_0[1];

#line 551 "erl_backend.elds.c"
static const MR_DuPtagLayout erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_rtti_defn_0[1];

#line 554 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_name_ordered_elds_rtti_defn_0[1];

#line 557 "erl_backend.elds.c"
static const MR_Integer erl_backend__elds__erl_backend__elds__functor_number_map_elds_rtti_defn_0[1];

#line 560 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_rtti_id_0_0[1];

#line 563 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_rtti_id_0_0;

#line 566 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_rtti_id_0_1[1];

#line 569 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_rtti_id_0_1;

#line 572 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_rtti_id_0_2[1];

#line 575 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_rtti_id_0_2;

#line 578 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_rtti_id_0_3[3];

#line 581 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_rtti_id_0_3;

#line 584 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_rtti_id_0_0[1];

#line 587 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_rtti_id_0_1[1];

#line 590 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_rtti_id_0_2[1];

#line 593 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_rtti_id_0_3[1];

#line 596 "erl_backend.elds.c"
static const MR_DuPtagLayout erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_rtti_id_0[4];

#line 599 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_name_ordered_elds_rtti_id_0[4];

#line 602 "erl_backend.elds.c"
static const MR_Integer erl_backend__elds__erl_backend__elds__functor_number_map_elds_rtti_id_0[4];

#line 605 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_term_0_0[1];

#line 608 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_0;

#line 611 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_term_0_1[1];

#line 614 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_1;

#line 617 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_term_0_2[1];

#line 620 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_2;

#line 623 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_term_0_3[1];

#line 626 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_3;

#line 629 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_term_0_4[1];

#line 632 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_4;

#line 635 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_term_0_5[1];

#line 638 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_5;

#line 641 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_term_0_6[1];

#line 644 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_6;

#line 647 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_term_0_7[1];

#line 650 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_7;

#line 653 "erl_backend.elds.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__elds__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 656 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_term_0_8[1];

#line 659 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_8;

#line 662 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_9;

#line 665 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_term_0_10[1];

#line 668 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_10;

#line 671 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_term_0_0[1];

#line 674 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_term_0_1[1];

#line 677 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_term_0_2[1];

#line 680 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_term_0_3[8];

#line 683 "erl_backend.elds.c"
static const MR_DuPtagLayout erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_term_0[4];

#line 686 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_name_ordered_elds_term_0[11];

#line 689 "erl_backend.elds.c"
static const MR_Integer erl_backend__elds__erl_backend__elds__functor_number_map_elds_term_0[11];

#line 692 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_unop_0_0;

#line 695 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_unop_0_1;

#line 698 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_unop_0_2;

#line 701 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_unop_0_3;

#line 704 "erl_backend.elds.c"
static const MR_EnumFunctorDescPtr erl_backend__elds__erl_backend__elds__enum_value_ordered_elds_unop_0[4];

#line 707 "erl_backend.elds.c"
static const MR_EnumFunctorDescPtr erl_backend__elds__erl_backend__elds__enum_name_ordered_elds_unop_0[4];

#line 710 "erl_backend.elds.c"
static const MR_Integer erl_backend__elds__erl_backend__elds__functor_number_map_elds_unop_0[4];

#line 713 "erl_backend.elds.c"
static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_0_0_10001(
#line 716 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_1,
#line 718 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2);

#line 721 "erl_backend.elds.c"
static void MR_CALL 
erl_backend__elds____Compare____elds_0_0_10001(
#line 724 "erl_backend.elds.c"
  MR_Box * erl_backend__elds__wrapper_arg_1,
#line 726 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2,
#line 728 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_3);

#line 731 "erl_backend.elds.c"
static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_binop_0_0_10001(
#line 734 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_1,
#line 736 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2);

#line 739 "erl_backend.elds.c"
static void MR_CALL 
erl_backend__elds____Compare____elds_binop_0_0_10001(
#line 742 "erl_backend.elds.c"
  MR_Box * erl_backend__elds__wrapper_arg_1,
#line 744 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2,
#line 746 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_3);

#line 749 "erl_backend.elds.c"
static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_body_0_0_10001(
#line 752 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_1,
#line 754 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2);

#line 757 "erl_backend.elds.c"
static void MR_CALL 
erl_backend__elds____Compare____elds_body_0_0_10001(
#line 760 "erl_backend.elds.c"
  MR_Box * erl_backend__elds__wrapper_arg_1,
#line 762 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2,
#line 764 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_3);

#line 767 "erl_backend.elds.c"
static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_call_target_0_0_10001(
#line 770 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_1,
#line 772 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2);

#line 775 "erl_backend.elds.c"
static void MR_CALL 
erl_backend__elds____Compare____elds_call_target_0_0_10001(
#line 778 "erl_backend.elds.c"
  MR_Box * erl_backend__elds__wrapper_arg_1,
#line 780 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2,
#line 782 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_3);

#line 785 "erl_backend.elds.c"
static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_case_0_0_10001(
#line 788 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_1,
#line 790 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2);

#line 793 "erl_backend.elds.c"
static void MR_CALL 
erl_backend__elds____Compare____elds_case_0_0_10001(
#line 796 "erl_backend.elds.c"
  MR_Box * erl_backend__elds__wrapper_arg_1,
#line 798 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2,
#line 800 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_3);

#line 803 "erl_backend.elds.c"
static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_catch_0_0_10001(
#line 806 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_1,
#line 808 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2);

#line 811 "erl_backend.elds.c"
static void MR_CALL 
erl_backend__elds____Compare____elds_catch_0_0_10001(
#line 814 "erl_backend.elds.c"
  MR_Box * erl_backend__elds__wrapper_arg_1,
#line 816 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2,
#line 818 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_3);

#line 821 "erl_backend.elds.c"
static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_clause_0_0_10001(
#line 824 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_1,
#line 826 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2);

#line 829 "erl_backend.elds.c"
static void MR_CALL 
erl_backend__elds____Compare____elds_clause_0_0_10001(
#line 832 "erl_backend.elds.c"
  MR_Box * erl_backend__elds__wrapper_arg_1,
#line 834 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2,
#line 836 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_3);

#line 839 "erl_backend.elds.c"
static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_defn_0_0_10001(
#line 842 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_1,
#line 844 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2);

#line 847 "erl_backend.elds.c"
static void MR_CALL 
erl_backend__elds____Compare____elds_defn_0_0_10001(
#line 850 "erl_backend.elds.c"
  MR_Box * erl_backend__elds__wrapper_arg_1,
#line 852 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2,
#line 854 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_3);

#line 857 "erl_backend.elds.c"
static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_expr_0_0_10001(
#line 860 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_1,
#line 862 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2);

#line 865 "erl_backend.elds.c"
static void MR_CALL 
erl_backend__elds____Compare____elds_expr_0_0_10001(
#line 868 "erl_backend.elds.c"
  MR_Box * erl_backend__elds__wrapper_arg_1,
#line 870 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2,
#line 872 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_3);

#line 875 "erl_backend.elds.c"
static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_foreign_export_defn_0_0_10001(
#line 878 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_1,
#line 880 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2);

#line 883 "erl_backend.elds.c"
static void MR_CALL 
erl_backend__elds____Compare____elds_foreign_export_defn_0_0_10001(
#line 886 "erl_backend.elds.c"
  MR_Box * erl_backend__elds__wrapper_arg_1,
#line 888 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2,
#line 890 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_3);

#line 893 "erl_backend.elds.c"
static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_rtti_defn_0_0_10001(
#line 896 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_1,
#line 898 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2);

#line 901 "erl_backend.elds.c"
static void MR_CALL 
erl_backend__elds____Compare____elds_rtti_defn_0_0_10001(
#line 904 "erl_backend.elds.c"
  MR_Box * erl_backend__elds__wrapper_arg_1,
#line 906 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2,
#line 908 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_3);

#line 911 "erl_backend.elds.c"
static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_rtti_id_0_0_10001(
#line 914 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_1,
#line 916 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2);

#line 919 "erl_backend.elds.c"
static void MR_CALL 
erl_backend__elds____Compare____elds_rtti_id_0_0_10001(
#line 922 "erl_backend.elds.c"
  MR_Box * erl_backend__elds__wrapper_arg_1,
#line 924 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2,
#line 926 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_3);

#line 929 "erl_backend.elds.c"
static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_term_0_0_10001(
#line 932 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_1,
#line 934 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2);

#line 937 "erl_backend.elds.c"
static void MR_CALL 
erl_backend__elds____Compare____elds_term_0_0_10001(
#line 940 "erl_backend.elds.c"
  MR_Box * erl_backend__elds__wrapper_arg_1,
#line 942 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2,
#line 944 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_3);

#line 947 "erl_backend.elds.c"
static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_unop_0_0_10001(
#line 950 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_1,
#line 952 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2);

#line 955 "erl_backend.elds.c"
static void MR_CALL 
erl_backend__elds____Compare____elds_unop_0_0_10001(
#line 958 "erl_backend.elds.c"
  MR_Box * erl_backend__elds__wrapper_arg_1,
#line 960 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2,
#line 962 "erl_backend.elds.c"
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
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
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
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 1236 "erl_backend.elds.c"
static const MR_FA_PseudoTypeInfo_Struct1 erl_backend__elds__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1244 "erl_backend.elds.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__elds__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
  }
};

#line 1252 "erl_backend.elds.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__elds__list__ti_list_1parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0
  }
};

#line 1260 "erl_backend.elds.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__elds__list__ti_list_1parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0
  }
};

#line 1268 "erl_backend.elds.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__elds__list__ti_list_1erl_backend__elds__type_ctor_info_elds_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_defn_0
  }
};

#line 1276 "erl_backend.elds.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__elds__list__ti_list_1erl_backend__elds__type_ctor_info_elds_foreign_export_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_foreign_export_defn_0
  }
};

#line 1284 "erl_backend.elds.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__elds__list__ti_list_1erl_backend__elds__type_ctor_info_elds_rtti_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_rtti_defn_0
  }
};

#line 1292 "erl_backend.elds.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__elds__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

#line 1300 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_0_0[9] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &erl_backend__elds__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &erl_backend__elds__list__ti_list_1parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0,
  (MR_PseudoTypeInfo) &erl_backend__elds__list__ti_list_1parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0,
  (MR_PseudoTypeInfo) &erl_backend__elds__list__ti_list_1erl_backend__elds__type_ctor_info_elds_defn_0,
  (MR_PseudoTypeInfo) &erl_backend__elds__list__ti_list_1erl_backend__elds__type_ctor_info_elds_foreign_export_defn_0,
  (MR_PseudoTypeInfo) &erl_backend__elds__list__ti_list_1erl_backend__elds__type_ctor_info_elds_rtti_defn_0,
  (MR_PseudoTypeInfo) &erl_backend__elds__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
  (MR_PseudoTypeInfo) &erl_backend__elds__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0
};

#line 1313 "erl_backend.elds.c"
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

#line 1326 "erl_backend.elds.c"
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

#line 1341 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_0_0[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_0_0
};

#line 1346 "erl_backend.elds.c"
static const MR_DuPtagLayout erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_0_0
  }
};

#line 1355 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_name_ordered_elds_0[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_0_0
};

#line 1360 "erl_backend.elds.c"
static const MR_Integer erl_backend__elds__erl_backend__elds__functor_number_map_elds_0[1] = {
  (MR_Integer) 0
};

#line 1365 "erl_backend.elds.c"
const MR_TypeCtorInfo_Struct erl_backend__elds__erl_backend__elds__type_ctor_info_elds_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (erl_backend__elds____Unify____elds_0_0_10001)),
  ((MR_Box) (erl_backend__elds____Compare____elds_0_0_10001)),
  (MR_String) "erl_backend.elds",
  (MR_String) "elds",
  {     erl_backend__elds__erl_backend__elds__du_name_ordered_elds_0 },
  {     erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  erl_backend__elds__erl_backend__elds__functor_number_map_elds_0
};

#line 1382 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_0 = {
  (MR_String) "mul",
  (MR_Integer) 0
};

#line 1388 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_1 = {
  (MR_String) "float_div",
  (MR_Integer) 1
};

#line 1394 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_2 = {
  (MR_String) "int_div",
  (MR_Integer) 2
};

#line 1400 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_3 = {
  (MR_String) "rem",
  (MR_Integer) 3
};

#line 1406 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_4 = {
  (MR_String) "band",
  (MR_Integer) 4
};

#line 1412 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_5 = {
  (MR_String) "add",
  (MR_Integer) 5
};

#line 1418 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_6 = {
  (MR_String) "sub",
  (MR_Integer) 6
};

#line 1424 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_7 = {
  (MR_String) "bor",
  (MR_Integer) 7
};

#line 1430 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_8 = {
  (MR_String) "bxor",
  (MR_Integer) 8
};

#line 1436 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_9 = {
  (MR_String) "bsl",
  (MR_Integer) 9
};

#line 1442 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_10 = {
  (MR_String) "bsr",
  (MR_Integer) 10
};

#line 1448 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_11 = {
  (MR_String) "=<",
  (MR_Integer) 11
};

#line 1454 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_12 = {
  (MR_String) "<",
  (MR_Integer) 12
};

#line 1460 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_13 = {
  (MR_String) ">=",
  (MR_Integer) 13
};

#line 1466 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_14 = {
  (MR_String) ">",
  (MR_Integer) 14
};

#line 1472 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_15 = {
  (MR_String) "=:=",
  (MR_Integer) 15
};

#line 1478 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_16 = {
  (MR_String) "=/=",
  (MR_Integer) 16
};

#line 1484 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_17 = {
  (MR_String) "andalso",
  (MR_Integer) 17
};

#line 1490 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_18 = {
  (MR_String) "orelse",
  (MR_Integer) 18
};

#line 1496 "erl_backend.elds.c"
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

#line 1519 "erl_backend.elds.c"
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

#line 1542 "erl_backend.elds.c"
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

#line 1565 "erl_backend.elds.c"
const MR_TypeCtorInfo_Struct erl_backend__elds__erl_backend__elds__type_ctor_info_elds_binop_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (erl_backend__elds____Unify____elds_binop_0_0_10001)),
  ((MR_Box) (erl_backend__elds____Compare____elds_binop_0_0_10001)),
  (MR_String) "erl_backend.elds",
  (MR_String) "elds_binop",
  {     erl_backend__elds__erl_backend__elds__enum_name_ordered_elds_binop_0 },
  {     erl_backend__elds__erl_backend__elds__enum_value_ordered_elds_binop_0 },
  (MR_Integer) 19,
  (MR_Integer) 4,
  erl_backend__elds__erl_backend__elds__functor_number_map_elds_binop_0
};

#line 1582 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_body_0_0[1] = {
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_clause_0
};

#line 1587 "erl_backend.elds.c"
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

#line 1602 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_body_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1607 "erl_backend.elds.c"
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

#line 1622 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_body_0_0[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_body_0_0
};

#line 1627 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_body_0_1[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_body_0_1
};

#line 1632 "erl_backend.elds.c"
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

#line 1646 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_name_ordered_elds_body_0[2] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_body_0_0,
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_body_0_1
};

#line 1652 "erl_backend.elds.c"
static const MR_Integer erl_backend__elds__erl_backend__elds__functor_number_map_elds_body_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1658 "erl_backend.elds.c"
const MR_TypeCtorInfo_Struct erl_backend__elds__erl_backend__elds__type_ctor_info_elds_body_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (erl_backend__elds____Unify____elds_body_0_0_10001)),
  ((MR_Box) (erl_backend__elds____Compare____elds_body_0_0_10001)),
  (MR_String) "erl_backend.elds",
  (MR_String) "elds_body",
  {     erl_backend__elds__erl_backend__elds__du_name_ordered_elds_body_0 },
  {     erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_body_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  erl_backend__elds__erl_backend__elds__functor_number_map_elds_body_0
};

#line 1675 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_call_target_0_0[1] = {
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
};

#line 1680 "erl_backend.elds.c"
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

#line 1695 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_call_target_0_1[1] = {
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0
};

#line 1700 "erl_backend.elds.c"
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

#line 1715 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_call_target_0_2[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 1720 "erl_backend.elds.c"
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

#line 1735 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_call_target_0_0[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_call_target_0_0
};

#line 1740 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_call_target_0_1[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_call_target_0_1
};

#line 1745 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_call_target_0_2[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_call_target_0_2
};

#line 1750 "erl_backend.elds.c"
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

#line 1769 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_name_ordered_elds_call_target_0[3] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_call_target_0_2,
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_call_target_0_1,
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_call_target_0_0
};

#line 1776 "erl_backend.elds.c"
static const MR_Integer erl_backend__elds__erl_backend__elds__functor_number_map_elds_call_target_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1783 "erl_backend.elds.c"
const MR_TypeCtorInfo_Struct erl_backend__elds__erl_backend__elds__type_ctor_info_elds_call_target_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 3,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (erl_backend__elds____Unify____elds_call_target_0_0_10001)),
  ((MR_Box) (erl_backend__elds____Compare____elds_call_target_0_0_10001)),
  (MR_String) "erl_backend.elds",
  (MR_String) "elds_call_target",
  {     erl_backend__elds__erl_backend__elds__du_name_ordered_elds_call_target_0 },
  {     erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_call_target_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  erl_backend__elds__erl_backend__elds__functor_number_map_elds_call_target_0
};

#line 1800 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_case_0_0[2] = {
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_term_0,
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0
};

#line 1806 "erl_backend.elds.c"
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

#line 1821 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_case_0_0[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_case_0_0
};

#line 1826 "erl_backend.elds.c"
static const MR_DuPtagLayout erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_case_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_case_0_0
  }
};

#line 1835 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_name_ordered_elds_case_0[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_case_0_0
};

#line 1840 "erl_backend.elds.c"
static const MR_Integer erl_backend__elds__erl_backend__elds__functor_number_map_elds_case_0[1] = {
  (MR_Integer) 0
};

#line 1845 "erl_backend.elds.c"
const MR_TypeCtorInfo_Struct erl_backend__elds__erl_backend__elds__type_ctor_info_elds_case_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (erl_backend__elds____Unify____elds_case_0_0_10001)),
  ((MR_Box) (erl_backend__elds____Compare____elds_case_0_0_10001)),
  (MR_String) "erl_backend.elds",
  (MR_String) "elds_case",
  {     erl_backend__elds__erl_backend__elds__du_name_ordered_elds_case_0 },
  {     erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_case_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  erl_backend__elds__erl_backend__elds__functor_number_map_elds_case_0
};

#line 1862 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_catch_0_0[3] = {
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_term_0,
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_term_0,
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0
};

#line 1869 "erl_backend.elds.c"
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

#line 1884 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_catch_0_0[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_catch_0_0
};

#line 1889 "erl_backend.elds.c"
static const MR_DuPtagLayout erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_catch_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_catch_0_0
  }
};

#line 1898 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_name_ordered_elds_catch_0[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_catch_0_0
};

#line 1903 "erl_backend.elds.c"
static const MR_Integer erl_backend__elds__erl_backend__elds__functor_number_map_elds_catch_0[1] = {
  (MR_Integer) 0
};

#line 1908 "erl_backend.elds.c"
const MR_TypeCtorInfo_Struct erl_backend__elds__erl_backend__elds__type_ctor_info_elds_catch_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (erl_backend__elds____Unify____elds_catch_0_0_10001)),
  ((MR_Box) (erl_backend__elds____Compare____elds_catch_0_0_10001)),
  (MR_String) "erl_backend.elds",
  (MR_String) "elds_catch",
  {     erl_backend__elds__erl_backend__elds__du_name_ordered_elds_catch_0 },
  {     erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_catch_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  erl_backend__elds__erl_backend__elds__functor_number_map_elds_catch_0
};

#line 1925 "erl_backend.elds.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__elds__list__ti_list_1erl_backend__elds__type_ctor_info_elds_term_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_term_0
  }
};

#line 1933 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_clause_0_0[2] = {
  (MR_PseudoTypeInfo) &erl_backend__elds__list__ti_list_1erl_backend__elds__type_ctor_info_elds_term_0,
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0
};

#line 1939 "erl_backend.elds.c"
static const MR_ConstString erl_backend__elds__erl_backend__elds__field_names_elds_clause_0_0[2] = {
  (MR_String) "clause_pattern",
  (MR_String) "clause_expr"
};

#line 1945 "erl_backend.elds.c"
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

#line 1960 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_clause_0_0[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_clause_0_0
};

#line 1965 "erl_backend.elds.c"
static const MR_DuPtagLayout erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_clause_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_clause_0_0
  }
};

#line 1974 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_name_ordered_elds_clause_0[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_clause_0_0
};

#line 1979 "erl_backend.elds.c"
static const MR_Integer erl_backend__elds__erl_backend__elds__functor_number_map_elds_clause_0[1] = {
  (MR_Integer) 0
};

#line 1984 "erl_backend.elds.c"
const MR_TypeCtorInfo_Struct erl_backend__elds__erl_backend__elds__type_ctor_info_elds_clause_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (erl_backend__elds____Unify____elds_clause_0_0_10001)),
  ((MR_Box) (erl_backend__elds____Compare____elds_clause_0_0_10001)),
  (MR_String) "erl_backend.elds",
  (MR_String) "elds_clause",
  {     erl_backend__elds__erl_backend__elds__du_name_ordered_elds_clause_0 },
  {     erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_clause_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  erl_backend__elds__erl_backend__elds__functor_number_map_elds_clause_0
};

#line 2001 "erl_backend.elds.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__elds__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2009 "erl_backend.elds.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__elds__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 2017 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_defn_0_0[4] = {
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
  (MR_PseudoTypeInfo) &erl_backend__elds__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_body_0,
  (MR_PseudoTypeInfo) &erl_backend__elds__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0
};

#line 2025 "erl_backend.elds.c"
static const MR_ConstString erl_backend__elds__erl_backend__elds__field_names_elds_defn_0_0[4] = {
  (MR_String) "defn_proc_id",
  (MR_String) "defn_varset",
  (MR_String) "defn_body",
  (MR_String) "defn_env_vars"
};

#line 2033 "erl_backend.elds.c"
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

#line 2048 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_defn_0_0[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_defn_0_0
};

#line 2053 "erl_backend.elds.c"
static const MR_DuPtagLayout erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_defn_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_defn_0_0
  }
};

#line 2062 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_name_ordered_elds_defn_0[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_defn_0_0
};

#line 2067 "erl_backend.elds.c"
static const MR_Integer erl_backend__elds__erl_backend__elds__functor_number_map_elds_defn_0[1] = {
  (MR_Integer) 0
};

#line 2072 "erl_backend.elds.c"
const MR_TypeCtorInfo_Struct erl_backend__elds__erl_backend__elds__type_ctor_info_elds_defn_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (erl_backend__elds____Unify____elds_defn_0_0_10001)),
  ((MR_Box) (erl_backend__elds____Compare____elds_defn_0_0_10001)),
  (MR_String) "erl_backend.elds",
  (MR_String) "elds_defn",
  {     erl_backend__elds__erl_backend__elds__du_name_ordered_elds_defn_0 },
  {     erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_defn_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  erl_backend__elds__erl_backend__elds__functor_number_map_elds_defn_0
};

#line 2089 "erl_backend.elds.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__elds__list__ti_list_1erl_backend__elds__type_ctor_info_elds_expr_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0
  }
};

#line 2097 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_0[1] = {
  (MR_PseudoTypeInfo) &erl_backend__elds__list__ti_list_1erl_backend__elds__type_ctor_info_elds_expr_0
};

#line 2102 "erl_backend.elds.c"
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

#line 2117 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_1[1] = {
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_term_0
};

#line 2122 "erl_backend.elds.c"
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

#line 2137 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_2[2] = {
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0,
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0
};

#line 2143 "erl_backend.elds.c"
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

#line 2158 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_3[2] = {
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_unop_0,
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0
};

#line 2164 "erl_backend.elds.c"
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

#line 2179 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_4[3] = {
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_binop_0,
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0,
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0
};

#line 2186 "erl_backend.elds.c"
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

#line 2201 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_5[2] = {
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_call_target_0,
  (MR_PseudoTypeInfo) &erl_backend__elds__list__ti_list_1erl_backend__elds__type_ctor_info_elds_expr_0
};

#line 2207 "erl_backend.elds.c"
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

#line 2222 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_6[1] = {
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_rtti_id_0
};

#line 2227 "erl_backend.elds.c"
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

#line 2242 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_7[1] = {
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_clause_0
};

#line 2247 "erl_backend.elds.c"
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

#line 2262 "erl_backend.elds.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__elds__list__ti_list_1erl_backend__elds__type_ctor_info_elds_case_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_case_0
  }
};

#line 2270 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_8[2] = {
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0,
  (MR_PseudoTypeInfo) &erl_backend__elds__list__ti_list_1erl_backend__elds__type_ctor_info_elds_case_0
};

#line 2276 "erl_backend.elds.c"
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

#line 2291 "erl_backend.elds.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__elds__maybe__ti_maybe_1erl_backend__elds__type_ctor_info_elds_catch_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_catch_0
  }
};

#line 2299 "erl_backend.elds.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__elds__maybe__ti_maybe_1erl_backend__elds__type_ctor_info_elds_expr_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0
  }
};

#line 2307 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_9[4] = {
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0,
  (MR_PseudoTypeInfo) &erl_backend__elds__list__ti_list_1erl_backend__elds__type_ctor_info_elds_case_0,
  (MR_PseudoTypeInfo) &erl_backend__elds__maybe__ti_maybe_1erl_backend__elds__type_ctor_info_elds_catch_0,
  (MR_PseudoTypeInfo) &erl_backend__elds__maybe__ti_maybe_1erl_backend__elds__type_ctor_info_elds_expr_0
};

#line 2315 "erl_backend.elds.c"
static const MR_ConstString erl_backend__elds__erl_backend__elds__field_names_elds_expr_0_9[4] = {
  (MR_String) "try_expr",
  (MR_String) "try_cases",
  (MR_String) "try_catch",
  (MR_String) "try_after"
};

#line 2323 "erl_backend.elds.c"
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

#line 2338 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_10[1] = {
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0
};

#line 2343 "erl_backend.elds.c"
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

#line 2358 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_11[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0
};

#line 2364 "erl_backend.elds.c"
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

#line 2379 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_12[2] = {
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0,
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0
};

#line 2385 "erl_backend.elds.c"
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

#line 2400 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_13[1] = {
  (MR_PseudoTypeInfo) &erl_backend__elds__list__ti_list_1erl_backend__elds__type_ctor_info_elds_case_0
};

#line 2405 "erl_backend.elds.c"
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

#line 2420 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_expr_0_0[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_7
};

#line 2425 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_expr_0_1[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_0
};

#line 2430 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_expr_0_2[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_1
};

#line 2435 "erl_backend.elds.c"
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

#line 2450 "erl_backend.elds.c"
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

#line 2474 "erl_backend.elds.c"
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

#line 2492 "erl_backend.elds.c"
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

#line 2510 "erl_backend.elds.c"
const MR_TypeCtorInfo_Struct erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (erl_backend__elds____Unify____elds_expr_0_0_10001)),
  ((MR_Box) (erl_backend__elds____Compare____elds_expr_0_0_10001)),
  (MR_String) "erl_backend.elds",
  (MR_String) "elds_expr",
  {     erl_backend__elds__erl_backend__elds__du_name_ordered_elds_expr_0 },
  {     erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_expr_0 },
  (MR_Integer) 14,
  (MR_Integer) 4,
  erl_backend__elds__erl_backend__elds__functor_number_map_elds_expr_0
};

#line 2527 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_foreign_export_defn_0_0[3] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &erl_backend__elds__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_clause_0
};

#line 2534 "erl_backend.elds.c"
static const MR_ConstString erl_backend__elds__erl_backend__elds__field_names_elds_foreign_export_defn_0_0[3] = {
  (MR_String) "fe_defn_name",
  (MR_String) "fe_defn_varset",
  (MR_String) "fe_defn_clause"
};

#line 2541 "erl_backend.elds.c"
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

#line 2556 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_foreign_export_defn_0_0[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_foreign_export_defn_0_0
};

#line 2561 "erl_backend.elds.c"
static const MR_DuPtagLayout erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_foreign_export_defn_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_foreign_export_defn_0_0
  }
};

#line 2570 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_name_ordered_elds_foreign_export_defn_0[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_foreign_export_defn_0_0
};

#line 2575 "erl_backend.elds.c"
static const MR_Integer erl_backend__elds__erl_backend__elds__functor_number_map_elds_foreign_export_defn_0[1] = {
  (MR_Integer) 0
};

#line 2580 "erl_backend.elds.c"
const MR_TypeCtorInfo_Struct erl_backend__elds__erl_backend__elds__type_ctor_info_elds_foreign_export_defn_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (erl_backend__elds____Unify____elds_foreign_export_defn_0_0_10001)),
  ((MR_Box) (erl_backend__elds____Compare____elds_foreign_export_defn_0_0_10001)),
  (MR_String) "erl_backend.elds",
  (MR_String) "elds_foreign_export_defn",
  {     erl_backend__elds__erl_backend__elds__du_name_ordered_elds_foreign_export_defn_0 },
  {     erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_foreign_export_defn_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  erl_backend__elds__erl_backend__elds__functor_number_map_elds_foreign_export_defn_0
};

#line 2597 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_rtti_defn_0_0[4] = {
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_rtti_id_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &erl_backend__elds__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_clause_0
};

#line 2605 "erl_backend.elds.c"
static const MR_ConstString erl_backend__elds__erl_backend__elds__field_names_elds_rtti_defn_0_0[4] = {
  (MR_String) "rtti_defn_id",
  (MR_String) "rtti_defn_exported",
  (MR_String) "rtti_defn_varset",
  (MR_String) "rtti_defn_clause"
};

#line 2613 "erl_backend.elds.c"
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

#line 2628 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_rtti_defn_0_0[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_rtti_defn_0_0
};

#line 2633 "erl_backend.elds.c"
static const MR_DuPtagLayout erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_rtti_defn_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_rtti_defn_0_0
  }
};

#line 2642 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_name_ordered_elds_rtti_defn_0[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_rtti_defn_0_0
};

#line 2647 "erl_backend.elds.c"
static const MR_Integer erl_backend__elds__erl_backend__elds__functor_number_map_elds_rtti_defn_0[1] = {
  (MR_Integer) 0
};

#line 2652 "erl_backend.elds.c"
const MR_TypeCtorInfo_Struct erl_backend__elds__erl_backend__elds__type_ctor_info_elds_rtti_defn_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (erl_backend__elds____Unify____elds_rtti_defn_0_0_10001)),
  ((MR_Box) (erl_backend__elds____Compare____elds_rtti_defn_0_0_10001)),
  (MR_String) "erl_backend.elds",
  (MR_String) "elds_rtti_defn",
  {     erl_backend__elds__erl_backend__elds__du_name_ordered_elds_rtti_defn_0 },
  {     erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_rtti_defn_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  erl_backend__elds__erl_backend__elds__functor_number_map_elds_rtti_defn_0
};

#line 2669 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_rtti_id_0_0[1] = {
  (MR_PseudoTypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_type_ctor_0
};

#line 2674 "erl_backend.elds.c"
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

#line 2689 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_rtti_id_0_1[1] = {
  (MR_PseudoTypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_type_info_0
};

#line 2694 "erl_backend.elds.c"
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

#line 2709 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_rtti_id_0_2[1] = {
  (MR_PseudoTypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_pseudo_type_info_0
};

#line 2714 "erl_backend.elds.c"
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

#line 2729 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_rtti_id_0_3[3] = {
  (MR_PseudoTypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_tc_name_0,
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 2736 "erl_backend.elds.c"
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

#line 2751 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_rtti_id_0_0[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_rtti_id_0_0
};

#line 2756 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_rtti_id_0_1[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_rtti_id_0_1
};

#line 2761 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_rtti_id_0_2[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_rtti_id_0_2
};

#line 2766 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_rtti_id_0_3[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_rtti_id_0_3
};

#line 2771 "erl_backend.elds.c"
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

#line 2795 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_name_ordered_elds_rtti_id_0[4] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_rtti_id_0_3,
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_rtti_id_0_2,
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_rtti_id_0_0,
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_rtti_id_0_1
};

#line 2803 "erl_backend.elds.c"
static const MR_Integer erl_backend__elds__erl_backend__elds__functor_number_map_elds_rtti_id_0[4] = {
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 2811 "erl_backend.elds.c"
const MR_TypeCtorInfo_Struct erl_backend__elds__erl_backend__elds__type_ctor_info_elds_rtti_id_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (erl_backend__elds____Unify____elds_rtti_id_0_0_10001)),
  ((MR_Box) (erl_backend__elds____Compare____elds_rtti_id_0_0_10001)),
  (MR_String) "erl_backend.elds",
  (MR_String) "elds_rtti_id",
  {     erl_backend__elds__erl_backend__elds__du_name_ordered_elds_rtti_id_0 },
  {     erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_rtti_id_0 },
  (MR_Integer) 4,
  (MR_Integer) 4,
  erl_backend__elds__erl_backend__elds__functor_number_map_elds_rtti_id_0
};

#line 2828 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_term_0_0[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_character_0
};

#line 2833 "erl_backend.elds.c"
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

#line 2848 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_term_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2853 "erl_backend.elds.c"
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

#line 2868 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_term_0_2[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0
};

#line 2873 "erl_backend.elds.c"
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

#line 2888 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_term_0_3[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 2893 "erl_backend.elds.c"
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

#line 2908 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_term_0_4[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 2913 "erl_backend.elds.c"
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

#line 2928 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_term_0_5[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 2933 "erl_backend.elds.c"
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

#line 2948 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_term_0_6[1] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
};

#line 2953 "erl_backend.elds.c"
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

#line 2968 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_term_0_7[1] = {
  (MR_PseudoTypeInfo) &erl_backend__elds__list__ti_list_1erl_backend__elds__type_ctor_info_elds_expr_0
};

#line 2973 "erl_backend.elds.c"
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

#line 2988 "erl_backend.elds.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__elds__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2996 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_term_0_8[1] = {
  (MR_PseudoTypeInfo) &erl_backend__elds__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

#line 3001 "erl_backend.elds.c"
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

#line 3016 "erl_backend.elds.c"
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

#line 3031 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_term_0_10[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 3036 "erl_backend.elds.c"
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

#line 3051 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_term_0_0[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_9
};

#line 3056 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_term_0_1[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_0
};

#line 3061 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_term_0_2[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_1
};

#line 3066 "erl_backend.elds.c"
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

#line 3078 "erl_backend.elds.c"
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

#line 3102 "erl_backend.elds.c"
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

#line 3117 "erl_backend.elds.c"
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

#line 3132 "erl_backend.elds.c"
const MR_TypeCtorInfo_Struct erl_backend__elds__erl_backend__elds__type_ctor_info_elds_term_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (erl_backend__elds____Unify____elds_term_0_0_10001)),
  ((MR_Box) (erl_backend__elds____Compare____elds_term_0_0_10001)),
  (MR_String) "erl_backend.elds",
  (MR_String) "elds_term",
  {     erl_backend__elds__erl_backend__elds__du_name_ordered_elds_term_0 },
  {     erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_term_0 },
  (MR_Integer) 11,
  (MR_Integer) 4,
  erl_backend__elds__erl_backend__elds__functor_number_map_elds_term_0
};

#line 3149 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_unop_0_0 = {
  (MR_String) "plus",
  (MR_Integer) 0
};

#line 3155 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_unop_0_1 = {
  (MR_String) "minus",
  (MR_Integer) 1
};

#line 3161 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_unop_0_2 = {
  (MR_String) "bnot",
  (MR_Integer) 2
};

#line 3167 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_unop_0_3 = {
  (MR_String) "logical_not",
  (MR_Integer) 3
};

#line 3173 "erl_backend.elds.c"
static const MR_EnumFunctorDescPtr erl_backend__elds__erl_backend__elds__enum_value_ordered_elds_unop_0[4] = {
  &erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_unop_0_0,
  &erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_unop_0_1,
  &erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_unop_0_2,
  &erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_unop_0_3
};

#line 3181 "erl_backend.elds.c"
static const MR_EnumFunctorDescPtr erl_backend__elds__erl_backend__elds__enum_name_ordered_elds_unop_0[4] = {
  &erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_unop_0_2,
  &erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_unop_0_3,
  &erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_unop_0_1,
  &erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_unop_0_0
};

#line 3189 "erl_backend.elds.c"
static const MR_Integer erl_backend__elds__erl_backend__elds__functor_number_map_elds_unop_0[4] = {
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 3197 "erl_backend.elds.c"
const MR_TypeCtorInfo_Struct erl_backend__elds__erl_backend__elds__type_ctor_info_elds_unop_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (erl_backend__elds____Unify____elds_unop_0_0_10001)),
  ((MR_Box) (erl_backend__elds____Compare____elds_unop_0_0_10001)),
  (MR_String) "erl_backend.elds",
  (MR_String) "elds_unop",
  {     erl_backend__elds__erl_backend__elds__enum_name_ordered_elds_unop_0 },
  {     erl_backend__elds__erl_backend__elds__enum_value_ordered_elds_unop_0 },
  (MR_Integer) 4,
  (MR_Integer) 4,
  erl_backend__elds__erl_backend__elds__functor_number_map_elds_unop_0
};

#line 3214 "erl_backend.elds.c"
static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_0_0_10001(
#line 3217 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_1,
#line 3219 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2)
#line 3221 "erl_backend.elds.c"
{
#line 3223 "erl_backend.elds.c"
  {
#line 3225 "erl_backend.elds.c"
    MR_bool erl_backend__elds__succeeded;

#line 3228 "erl_backend.elds.c"
    {
#line 3230 "erl_backend.elds.c"
      erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_0_0(((MR_Word) erl_backend__elds__wrapper_arg_1), ((MR_Word) erl_backend__elds__wrapper_arg_2));
    }
#line 3233 "erl_backend.elds.c"
    return erl_backend__elds__succeeded;
#line 3235 "erl_backend.elds.c"
  }
#line 3237 "erl_backend.elds.c"
}

#line 3240 "erl_backend.elds.c"
static void MR_CALL 
erl_backend__elds____Compare____elds_0_0_10001(
#line 3243 "erl_backend.elds.c"
  MR_Box * erl_backend__elds__wrapper_arg_1,
#line 3245 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2,
#line 3247 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_3)
#line 3249 "erl_backend.elds.c"
{
#line 3251 "erl_backend.elds.c"
  {
#line 3253 "erl_backend.elds.c"
    MR_Word erl_backend__elds__conv0_HeadVar__1_1;

#line 3256 "erl_backend.elds.c"
    {
#line 3258 "erl_backend.elds.c"
      erl_backend__elds____Compare____elds_0_0(&erl_backend__elds__conv0_HeadVar__1_1, ((MR_Word) erl_backend__elds__wrapper_arg_2), ((MR_Word) erl_backend__elds__wrapper_arg_3));
    }
#line 3261 "erl_backend.elds.c"
    *erl_backend__elds__wrapper_arg_1 = ((MR_Box) (erl_backend__elds__conv0_HeadVar__1_1));
#line 3263 "erl_backend.elds.c"
  }
#line 3265 "erl_backend.elds.c"
}

#line 3268 "erl_backend.elds.c"
static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_binop_0_0_10001(
#line 3271 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_1,
#line 3273 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2)
#line 3275 "erl_backend.elds.c"
{
#line 3277 "erl_backend.elds.c"
  {
#line 3279 "erl_backend.elds.c"
    MR_bool erl_backend__elds__succeeded;

#line 3282 "erl_backend.elds.c"
    {
#line 3284 "erl_backend.elds.c"
      erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_binop_0_0(((MR_Word) erl_backend__elds__wrapper_arg_1), ((MR_Word) erl_backend__elds__wrapper_arg_2));
    }
#line 3287 "erl_backend.elds.c"
    return erl_backend__elds__succeeded;
#line 3289 "erl_backend.elds.c"
  }
#line 3291 "erl_backend.elds.c"
}

#line 3294 "erl_backend.elds.c"
static void MR_CALL 
erl_backend__elds____Compare____elds_binop_0_0_10001(
#line 3297 "erl_backend.elds.c"
  MR_Box * erl_backend__elds__wrapper_arg_1,
#line 3299 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2,
#line 3301 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_3)
#line 3303 "erl_backend.elds.c"
{
#line 3305 "erl_backend.elds.c"
  {
#line 3307 "erl_backend.elds.c"
    MR_Word erl_backend__elds__conv0_HeadVar__1_1;

#line 3310 "erl_backend.elds.c"
    {
#line 3312 "erl_backend.elds.c"
      erl_backend__elds____Compare____elds_binop_0_0(&erl_backend__elds__conv0_HeadVar__1_1, ((MR_Word) erl_backend__elds__wrapper_arg_2), ((MR_Word) erl_backend__elds__wrapper_arg_3));
    }
#line 3315 "erl_backend.elds.c"
    *erl_backend__elds__wrapper_arg_1 = ((MR_Box) (erl_backend__elds__conv0_HeadVar__1_1));
#line 3317 "erl_backend.elds.c"
  }
#line 3319 "erl_backend.elds.c"
}

#line 3322 "erl_backend.elds.c"
static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_body_0_0_10001(
#line 3325 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_1,
#line 3327 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2)
#line 3329 "erl_backend.elds.c"
{
#line 3331 "erl_backend.elds.c"
  {
#line 3333 "erl_backend.elds.c"
    MR_bool erl_backend__elds__succeeded;

#line 3336 "erl_backend.elds.c"
    {
#line 3338 "erl_backend.elds.c"
      erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_body_0_0(((MR_Word) erl_backend__elds__wrapper_arg_1), ((MR_Word) erl_backend__elds__wrapper_arg_2));
    }
#line 3341 "erl_backend.elds.c"
    return erl_backend__elds__succeeded;
#line 3343 "erl_backend.elds.c"
  }
#line 3345 "erl_backend.elds.c"
}

#line 3348 "erl_backend.elds.c"
static void MR_CALL 
erl_backend__elds____Compare____elds_body_0_0_10001(
#line 3351 "erl_backend.elds.c"
  MR_Box * erl_backend__elds__wrapper_arg_1,
#line 3353 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2,
#line 3355 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_3)
#line 3357 "erl_backend.elds.c"
{
#line 3359 "erl_backend.elds.c"
  {
#line 3361 "erl_backend.elds.c"
    MR_Word erl_backend__elds__conv0_HeadVar__1_1;

#line 3364 "erl_backend.elds.c"
    {
#line 3366 "erl_backend.elds.c"
      erl_backend__elds____Compare____elds_body_0_0(&erl_backend__elds__conv0_HeadVar__1_1, ((MR_Word) erl_backend__elds__wrapper_arg_2), ((MR_Word) erl_backend__elds__wrapper_arg_3));
    }
#line 3369 "erl_backend.elds.c"
    *erl_backend__elds__wrapper_arg_1 = ((MR_Box) (erl_backend__elds__conv0_HeadVar__1_1));
#line 3371 "erl_backend.elds.c"
  }
#line 3373 "erl_backend.elds.c"
}

#line 3376 "erl_backend.elds.c"
static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_call_target_0_0_10001(
#line 3379 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_1,
#line 3381 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2)
#line 3383 "erl_backend.elds.c"
{
#line 3385 "erl_backend.elds.c"
  {
#line 3387 "erl_backend.elds.c"
    MR_bool erl_backend__elds__succeeded;

#line 3390 "erl_backend.elds.c"
    {
#line 3392 "erl_backend.elds.c"
      erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_call_target_0_0(((MR_Word) erl_backend__elds__wrapper_arg_1), ((MR_Word) erl_backend__elds__wrapper_arg_2));
    }
#line 3395 "erl_backend.elds.c"
    return erl_backend__elds__succeeded;
#line 3397 "erl_backend.elds.c"
  }
#line 3399 "erl_backend.elds.c"
}

#line 3402 "erl_backend.elds.c"
static void MR_CALL 
erl_backend__elds____Compare____elds_call_target_0_0_10001(
#line 3405 "erl_backend.elds.c"
  MR_Box * erl_backend__elds__wrapper_arg_1,
#line 3407 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2,
#line 3409 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_3)
#line 3411 "erl_backend.elds.c"
{
#line 3413 "erl_backend.elds.c"
  {
#line 3415 "erl_backend.elds.c"
    MR_Word erl_backend__elds__conv0_HeadVar__1_1;

#line 3418 "erl_backend.elds.c"
    {
#line 3420 "erl_backend.elds.c"
      erl_backend__elds____Compare____elds_call_target_0_0(&erl_backend__elds__conv0_HeadVar__1_1, ((MR_Word) erl_backend__elds__wrapper_arg_2), ((MR_Word) erl_backend__elds__wrapper_arg_3));
    }
#line 3423 "erl_backend.elds.c"
    *erl_backend__elds__wrapper_arg_1 = ((MR_Box) (erl_backend__elds__conv0_HeadVar__1_1));
#line 3425 "erl_backend.elds.c"
  }
#line 3427 "erl_backend.elds.c"
}

#line 3430 "erl_backend.elds.c"
static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_case_0_0_10001(
#line 3433 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_1,
#line 3435 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2)
#line 3437 "erl_backend.elds.c"
{
#line 3439 "erl_backend.elds.c"
  {
#line 3441 "erl_backend.elds.c"
    MR_bool erl_backend__elds__succeeded;

#line 3444 "erl_backend.elds.c"
    {
#line 3446 "erl_backend.elds.c"
      erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_case_0_0(((MR_Word) erl_backend__elds__wrapper_arg_1), ((MR_Word) erl_backend__elds__wrapper_arg_2));
    }
#line 3449 "erl_backend.elds.c"
    return erl_backend__elds__succeeded;
#line 3451 "erl_backend.elds.c"
  }
#line 3453 "erl_backend.elds.c"
}

#line 3456 "erl_backend.elds.c"
static void MR_CALL 
erl_backend__elds____Compare____elds_case_0_0_10001(
#line 3459 "erl_backend.elds.c"
  MR_Box * erl_backend__elds__wrapper_arg_1,
#line 3461 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2,
#line 3463 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_3)
#line 3465 "erl_backend.elds.c"
{
#line 3467 "erl_backend.elds.c"
  {
#line 3469 "erl_backend.elds.c"
    MR_Word erl_backend__elds__conv0_HeadVar__1_1;

#line 3472 "erl_backend.elds.c"
    {
#line 3474 "erl_backend.elds.c"
      erl_backend__elds____Compare____elds_case_0_0(&erl_backend__elds__conv0_HeadVar__1_1, ((MR_Word) erl_backend__elds__wrapper_arg_2), ((MR_Word) erl_backend__elds__wrapper_arg_3));
    }
#line 3477 "erl_backend.elds.c"
    *erl_backend__elds__wrapper_arg_1 = ((MR_Box) (erl_backend__elds__conv0_HeadVar__1_1));
#line 3479 "erl_backend.elds.c"
  }
#line 3481 "erl_backend.elds.c"
}

#line 3484 "erl_backend.elds.c"
static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_catch_0_0_10001(
#line 3487 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_1,
#line 3489 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2)
#line 3491 "erl_backend.elds.c"
{
#line 3493 "erl_backend.elds.c"
  {
#line 3495 "erl_backend.elds.c"
    MR_bool erl_backend__elds__succeeded;

#line 3498 "erl_backend.elds.c"
    {
#line 3500 "erl_backend.elds.c"
      erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_catch_0_0(((MR_Word) erl_backend__elds__wrapper_arg_1), ((MR_Word) erl_backend__elds__wrapper_arg_2));
    }
#line 3503 "erl_backend.elds.c"
    return erl_backend__elds__succeeded;
#line 3505 "erl_backend.elds.c"
  }
#line 3507 "erl_backend.elds.c"
}

#line 3510 "erl_backend.elds.c"
static void MR_CALL 
erl_backend__elds____Compare____elds_catch_0_0_10001(
#line 3513 "erl_backend.elds.c"
  MR_Box * erl_backend__elds__wrapper_arg_1,
#line 3515 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2,
#line 3517 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_3)
#line 3519 "erl_backend.elds.c"
{
#line 3521 "erl_backend.elds.c"
  {
#line 3523 "erl_backend.elds.c"
    MR_Word erl_backend__elds__conv0_HeadVar__1_1;

#line 3526 "erl_backend.elds.c"
    {
#line 3528 "erl_backend.elds.c"
      erl_backend__elds____Compare____elds_catch_0_0(&erl_backend__elds__conv0_HeadVar__1_1, ((MR_Word) erl_backend__elds__wrapper_arg_2), ((MR_Word) erl_backend__elds__wrapper_arg_3));
    }
#line 3531 "erl_backend.elds.c"
    *erl_backend__elds__wrapper_arg_1 = ((MR_Box) (erl_backend__elds__conv0_HeadVar__1_1));
#line 3533 "erl_backend.elds.c"
  }
#line 3535 "erl_backend.elds.c"
}

#line 3538 "erl_backend.elds.c"
static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_clause_0_0_10001(
#line 3541 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_1,
#line 3543 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2)
#line 3545 "erl_backend.elds.c"
{
#line 3547 "erl_backend.elds.c"
  {
#line 3549 "erl_backend.elds.c"
    MR_bool erl_backend__elds__succeeded;

#line 3552 "erl_backend.elds.c"
    {
#line 3554 "erl_backend.elds.c"
      erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_clause_0_0(((MR_Word) erl_backend__elds__wrapper_arg_1), ((MR_Word) erl_backend__elds__wrapper_arg_2));
    }
#line 3557 "erl_backend.elds.c"
    return erl_backend__elds__succeeded;
#line 3559 "erl_backend.elds.c"
  }
#line 3561 "erl_backend.elds.c"
}

#line 3564 "erl_backend.elds.c"
static void MR_CALL 
erl_backend__elds____Compare____elds_clause_0_0_10001(
#line 3567 "erl_backend.elds.c"
  MR_Box * erl_backend__elds__wrapper_arg_1,
#line 3569 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2,
#line 3571 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_3)
#line 3573 "erl_backend.elds.c"
{
#line 3575 "erl_backend.elds.c"
  {
#line 3577 "erl_backend.elds.c"
    MR_Word erl_backend__elds__conv0_HeadVar__1_1;

#line 3580 "erl_backend.elds.c"
    {
#line 3582 "erl_backend.elds.c"
      erl_backend__elds____Compare____elds_clause_0_0(&erl_backend__elds__conv0_HeadVar__1_1, ((MR_Word) erl_backend__elds__wrapper_arg_2), ((MR_Word) erl_backend__elds__wrapper_arg_3));
    }
#line 3585 "erl_backend.elds.c"
    *erl_backend__elds__wrapper_arg_1 = ((MR_Box) (erl_backend__elds__conv0_HeadVar__1_1));
#line 3587 "erl_backend.elds.c"
  }
#line 3589 "erl_backend.elds.c"
}

#line 3592 "erl_backend.elds.c"
static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_defn_0_0_10001(
#line 3595 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_1,
#line 3597 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2)
#line 3599 "erl_backend.elds.c"
{
#line 3601 "erl_backend.elds.c"
  {
#line 3603 "erl_backend.elds.c"
    MR_bool erl_backend__elds__succeeded;

#line 3606 "erl_backend.elds.c"
    {
#line 3608 "erl_backend.elds.c"
      erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_defn_0_0(((MR_Word) erl_backend__elds__wrapper_arg_1), ((MR_Word) erl_backend__elds__wrapper_arg_2));
    }
#line 3611 "erl_backend.elds.c"
    return erl_backend__elds__succeeded;
#line 3613 "erl_backend.elds.c"
  }
#line 3615 "erl_backend.elds.c"
}

#line 3618 "erl_backend.elds.c"
static void MR_CALL 
erl_backend__elds____Compare____elds_defn_0_0_10001(
#line 3621 "erl_backend.elds.c"
  MR_Box * erl_backend__elds__wrapper_arg_1,
#line 3623 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2,
#line 3625 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_3)
#line 3627 "erl_backend.elds.c"
{
#line 3629 "erl_backend.elds.c"
  {
#line 3631 "erl_backend.elds.c"
    MR_Word erl_backend__elds__conv0_HeadVar__1_1;

#line 3634 "erl_backend.elds.c"
    {
#line 3636 "erl_backend.elds.c"
      erl_backend__elds____Compare____elds_defn_0_0(&erl_backend__elds__conv0_HeadVar__1_1, ((MR_Word) erl_backend__elds__wrapper_arg_2), ((MR_Word) erl_backend__elds__wrapper_arg_3));
    }
#line 3639 "erl_backend.elds.c"
    *erl_backend__elds__wrapper_arg_1 = ((MR_Box) (erl_backend__elds__conv0_HeadVar__1_1));
#line 3641 "erl_backend.elds.c"
  }
#line 3643 "erl_backend.elds.c"
}

#line 3646 "erl_backend.elds.c"
static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_expr_0_0_10001(
#line 3649 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_1,
#line 3651 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2)
#line 3653 "erl_backend.elds.c"
{
#line 3655 "erl_backend.elds.c"
  {
#line 3657 "erl_backend.elds.c"
    MR_bool erl_backend__elds__succeeded;

#line 3660 "erl_backend.elds.c"
    {
#line 3662 "erl_backend.elds.c"
      erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_expr_0_0(((MR_Word) erl_backend__elds__wrapper_arg_1), ((MR_Word) erl_backend__elds__wrapper_arg_2));
    }
#line 3665 "erl_backend.elds.c"
    return erl_backend__elds__succeeded;
#line 3667 "erl_backend.elds.c"
  }
#line 3669 "erl_backend.elds.c"
}

#line 3672 "erl_backend.elds.c"
static void MR_CALL 
erl_backend__elds____Compare____elds_expr_0_0_10001(
#line 3675 "erl_backend.elds.c"
  MR_Box * erl_backend__elds__wrapper_arg_1,
#line 3677 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2,
#line 3679 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_3)
#line 3681 "erl_backend.elds.c"
{
#line 3683 "erl_backend.elds.c"
  {
#line 3685 "erl_backend.elds.c"
    MR_Word erl_backend__elds__conv0_HeadVar__1_1;

#line 3688 "erl_backend.elds.c"
    {
#line 3690 "erl_backend.elds.c"
      erl_backend__elds____Compare____elds_expr_0_0(&erl_backend__elds__conv0_HeadVar__1_1, ((MR_Word) erl_backend__elds__wrapper_arg_2), ((MR_Word) erl_backend__elds__wrapper_arg_3));
    }
#line 3693 "erl_backend.elds.c"
    *erl_backend__elds__wrapper_arg_1 = ((MR_Box) (erl_backend__elds__conv0_HeadVar__1_1));
#line 3695 "erl_backend.elds.c"
  }
#line 3697 "erl_backend.elds.c"
}

#line 3700 "erl_backend.elds.c"
static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_foreign_export_defn_0_0_10001(
#line 3703 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_1,
#line 3705 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2)
#line 3707 "erl_backend.elds.c"
{
#line 3709 "erl_backend.elds.c"
  {
#line 3711 "erl_backend.elds.c"
    MR_bool erl_backend__elds__succeeded;

#line 3714 "erl_backend.elds.c"
    {
#line 3716 "erl_backend.elds.c"
      erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_foreign_export_defn_0_0(((MR_Word) erl_backend__elds__wrapper_arg_1), ((MR_Word) erl_backend__elds__wrapper_arg_2));
    }
#line 3719 "erl_backend.elds.c"
    return erl_backend__elds__succeeded;
#line 3721 "erl_backend.elds.c"
  }
#line 3723 "erl_backend.elds.c"
}

#line 3726 "erl_backend.elds.c"
static void MR_CALL 
erl_backend__elds____Compare____elds_foreign_export_defn_0_0_10001(
#line 3729 "erl_backend.elds.c"
  MR_Box * erl_backend__elds__wrapper_arg_1,
#line 3731 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2,
#line 3733 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_3)
#line 3735 "erl_backend.elds.c"
{
#line 3737 "erl_backend.elds.c"
  {
#line 3739 "erl_backend.elds.c"
    MR_Word erl_backend__elds__conv0_HeadVar__1_1;

#line 3742 "erl_backend.elds.c"
    {
#line 3744 "erl_backend.elds.c"
      erl_backend__elds____Compare____elds_foreign_export_defn_0_0(&erl_backend__elds__conv0_HeadVar__1_1, ((MR_Word) erl_backend__elds__wrapper_arg_2), ((MR_Word) erl_backend__elds__wrapper_arg_3));
    }
#line 3747 "erl_backend.elds.c"
    *erl_backend__elds__wrapper_arg_1 = ((MR_Box) (erl_backend__elds__conv0_HeadVar__1_1));
#line 3749 "erl_backend.elds.c"
  }
#line 3751 "erl_backend.elds.c"
}

#line 3754 "erl_backend.elds.c"
static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_rtti_defn_0_0_10001(
#line 3757 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_1,
#line 3759 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2)
#line 3761 "erl_backend.elds.c"
{
#line 3763 "erl_backend.elds.c"
  {
#line 3765 "erl_backend.elds.c"
    MR_bool erl_backend__elds__succeeded;

#line 3768 "erl_backend.elds.c"
    {
#line 3770 "erl_backend.elds.c"
      erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_rtti_defn_0_0(((MR_Word) erl_backend__elds__wrapper_arg_1), ((MR_Word) erl_backend__elds__wrapper_arg_2));
    }
#line 3773 "erl_backend.elds.c"
    return erl_backend__elds__succeeded;
#line 3775 "erl_backend.elds.c"
  }
#line 3777 "erl_backend.elds.c"
}

#line 3780 "erl_backend.elds.c"
static void MR_CALL 
erl_backend__elds____Compare____elds_rtti_defn_0_0_10001(
#line 3783 "erl_backend.elds.c"
  MR_Box * erl_backend__elds__wrapper_arg_1,
#line 3785 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2,
#line 3787 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_3)
#line 3789 "erl_backend.elds.c"
{
#line 3791 "erl_backend.elds.c"
  {
#line 3793 "erl_backend.elds.c"
    MR_Word erl_backend__elds__conv0_HeadVar__1_1;

#line 3796 "erl_backend.elds.c"
    {
#line 3798 "erl_backend.elds.c"
      erl_backend__elds____Compare____elds_rtti_defn_0_0(&erl_backend__elds__conv0_HeadVar__1_1, ((MR_Word) erl_backend__elds__wrapper_arg_2), ((MR_Word) erl_backend__elds__wrapper_arg_3));
    }
#line 3801 "erl_backend.elds.c"
    *erl_backend__elds__wrapper_arg_1 = ((MR_Box) (erl_backend__elds__conv0_HeadVar__1_1));
#line 3803 "erl_backend.elds.c"
  }
#line 3805 "erl_backend.elds.c"
}

#line 3808 "erl_backend.elds.c"
static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_rtti_id_0_0_10001(
#line 3811 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_1,
#line 3813 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2)
#line 3815 "erl_backend.elds.c"
{
#line 3817 "erl_backend.elds.c"
  {
#line 3819 "erl_backend.elds.c"
    MR_bool erl_backend__elds__succeeded;

#line 3822 "erl_backend.elds.c"
    {
#line 3824 "erl_backend.elds.c"
      erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_rtti_id_0_0(((MR_Word) erl_backend__elds__wrapper_arg_1), ((MR_Word) erl_backend__elds__wrapper_arg_2));
    }
#line 3827 "erl_backend.elds.c"
    return erl_backend__elds__succeeded;
#line 3829 "erl_backend.elds.c"
  }
#line 3831 "erl_backend.elds.c"
}

#line 3834 "erl_backend.elds.c"
static void MR_CALL 
erl_backend__elds____Compare____elds_rtti_id_0_0_10001(
#line 3837 "erl_backend.elds.c"
  MR_Box * erl_backend__elds__wrapper_arg_1,
#line 3839 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2,
#line 3841 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_3)
#line 3843 "erl_backend.elds.c"
{
#line 3845 "erl_backend.elds.c"
  {
#line 3847 "erl_backend.elds.c"
    MR_Word erl_backend__elds__conv0_HeadVar__1_1;

#line 3850 "erl_backend.elds.c"
    {
#line 3852 "erl_backend.elds.c"
      erl_backend__elds____Compare____elds_rtti_id_0_0(&erl_backend__elds__conv0_HeadVar__1_1, ((MR_Word) erl_backend__elds__wrapper_arg_2), ((MR_Word) erl_backend__elds__wrapper_arg_3));
    }
#line 3855 "erl_backend.elds.c"
    *erl_backend__elds__wrapper_arg_1 = ((MR_Box) (erl_backend__elds__conv0_HeadVar__1_1));
#line 3857 "erl_backend.elds.c"
  }
#line 3859 "erl_backend.elds.c"
}

#line 3862 "erl_backend.elds.c"
static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_term_0_0_10001(
#line 3865 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_1,
#line 3867 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2)
#line 3869 "erl_backend.elds.c"
{
#line 3871 "erl_backend.elds.c"
  {
#line 3873 "erl_backend.elds.c"
    MR_bool erl_backend__elds__succeeded;

#line 3876 "erl_backend.elds.c"
    {
#line 3878 "erl_backend.elds.c"
      erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_term_0_0(((MR_Word) erl_backend__elds__wrapper_arg_1), ((MR_Word) erl_backend__elds__wrapper_arg_2));
    }
#line 3881 "erl_backend.elds.c"
    return erl_backend__elds__succeeded;
#line 3883 "erl_backend.elds.c"
  }
#line 3885 "erl_backend.elds.c"
}

#line 3888 "erl_backend.elds.c"
static void MR_CALL 
erl_backend__elds____Compare____elds_term_0_0_10001(
#line 3891 "erl_backend.elds.c"
  MR_Box * erl_backend__elds__wrapper_arg_1,
#line 3893 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2,
#line 3895 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_3)
#line 3897 "erl_backend.elds.c"
{
#line 3899 "erl_backend.elds.c"
  {
#line 3901 "erl_backend.elds.c"
    MR_Word erl_backend__elds__conv0_HeadVar__1_1;

#line 3904 "erl_backend.elds.c"
    {
#line 3906 "erl_backend.elds.c"
      erl_backend__elds____Compare____elds_term_0_0(&erl_backend__elds__conv0_HeadVar__1_1, ((MR_Word) erl_backend__elds__wrapper_arg_2), ((MR_Word) erl_backend__elds__wrapper_arg_3));
    }
#line 3909 "erl_backend.elds.c"
    *erl_backend__elds__wrapper_arg_1 = ((MR_Box) (erl_backend__elds__conv0_HeadVar__1_1));
#line 3911 "erl_backend.elds.c"
  }
#line 3913 "erl_backend.elds.c"
}

#line 3916 "erl_backend.elds.c"
static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_unop_0_0_10001(
#line 3919 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_1,
#line 3921 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2)
#line 3923 "erl_backend.elds.c"
{
#line 3925 "erl_backend.elds.c"
  {
#line 3927 "erl_backend.elds.c"
    MR_bool erl_backend__elds__succeeded;

#line 3930 "erl_backend.elds.c"
    {
#line 3932 "erl_backend.elds.c"
      erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_unop_0_0(((MR_Word) erl_backend__elds__wrapper_arg_1), ((MR_Word) erl_backend__elds__wrapper_arg_2));
    }
#line 3935 "erl_backend.elds.c"
    return erl_backend__elds__succeeded;
#line 3937 "erl_backend.elds.c"
  }
#line 3939 "erl_backend.elds.c"
}

#line 3942 "erl_backend.elds.c"
static void MR_CALL 
erl_backend__elds____Compare____elds_unop_0_0_10001(
#line 3945 "erl_backend.elds.c"
  MR_Box * erl_backend__elds__wrapper_arg_1,
#line 3947 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2,
#line 3949 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_3)
#line 3951 "erl_backend.elds.c"
{
#line 3953 "erl_backend.elds.c"
  {
#line 3955 "erl_backend.elds.c"
    MR_Word erl_backend__elds__conv0_HeadVar__1_1;

#line 3958 "erl_backend.elds.c"
    {
#line 3960 "erl_backend.elds.c"
      erl_backend__elds____Compare____elds_unop_0_0(&erl_backend__elds__conv0_HeadVar__1_1, ((MR_Word) erl_backend__elds__wrapper_arg_2), ((MR_Word) erl_backend__elds__wrapper_arg_3));
    }
#line 3963 "erl_backend.elds.c"
    *erl_backend__elds__wrapper_arg_1 = ((MR_Box) (erl_backend__elds__conv0_HeadVar__1_1));
#line 3965 "erl_backend.elds.c"
  }
#line 3967 "erl_backend.elds.c"
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
#line 4083 "erl_backend.elds.c"
  {
#line 4085 "erl_backend.elds.c"
    MR_bool erl_backend__elds__succeeded = (erl_backend__elds__HeadVar__2_1 == erl_backend__elds__HeadVar__2_2);

#line 4088 "erl_backend.elds.c"
    return erl_backend__elds__succeeded;
#line 4090 "erl_backend.elds.c"
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
#line 4119 "erl_backend.elds.c"
      *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 0;
#line 211 "elds.m"
    else
#line 211 "elds.m"
#line 211 "elds.m"
      switch (MR_tag((MR_Word) erl_backend__elds__HeadVar__2_2)) {
#line 211 "elds.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 211 "elds.m"
        case (MR_Integer) 0:
#line 211 "elds.m"
#line 211 "elds.m"
          switch (MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) {
#line 211 "elds.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 211 "elds.m"
            case (MR_Integer) 0:
#line 211 "elds.m"
              *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 0;
#line 211 "elds.m"
              break;
#line 211 "elds.m"
            case (MR_Integer) 1:
#line 4143 "erl_backend.elds.c"
              *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
              break;
#line 211 "elds.m"
            case (MR_Integer) 2:
#line 4149 "erl_backend.elds.c"
              *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
              break;
#line 211 "elds.m"
            case (MR_Integer) 3:
#line 211 "elds.m"
#line 211 "elds.m"
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) {
#line 211 "elds.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 211 "elds.m"
                case (MR_Integer) 0:
#line 4162 "erl_backend.elds.c"
                  *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                  break;
#line 211 "elds.m"
                case (MR_Integer) 1:
#line 4168 "erl_backend.elds.c"
                  *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                  break;
#line 211 "elds.m"
                case (MR_Integer) 2:
#line 4174 "erl_backend.elds.c"
                  *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                  break;
#line 211 "elds.m"
                case (MR_Integer) 3:
#line 4180 "erl_backend.elds.c"
                  *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                  break;
#line 211 "elds.m"
                case (MR_Integer) 4:
#line 4186 "erl_backend.elds.c"
                  *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                  break;
#line 211 "elds.m"
                case (MR_Integer) 5:
#line 4192 "erl_backend.elds.c"
                  *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                  break;
#line 211 "elds.m"
                case (MR_Integer) 6:
#line 4198 "erl_backend.elds.c"
                  *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                  break;
#line 211 "elds.m"
                case (MR_Integer) 7:
#line 4204 "erl_backend.elds.c"
                  *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                  break;
#line 211 "elds.m"
              }
#line 211 "elds.m"
              break;
#line 211 "elds.m"
          }
#line 211 "elds.m"
          break;
#line 211 "elds.m"
        case (MR_Integer) 1:
#line 211 "elds.m"
          {
#line 211 "elds.m"
            MR_Char erl_backend__elds__V_239_239 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)));

#line 211 "elds.m"
#line 211 "elds.m"
            switch (MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) {
#line 211 "elds.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 211 "elds.m"
              case (MR_Integer) 0:
#line 4230 "erl_backend.elds.c"
                *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                break;
#line 211 "elds.m"
              case (MR_Integer) 1:
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
                break;
#line 211 "elds.m"
              case (MR_Integer) 2:
#line 4254 "erl_backend.elds.c"
                *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                break;
#line 211 "elds.m"
              case (MR_Integer) 3:
#line 211 "elds.m"
#line 211 "elds.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) {
#line 211 "elds.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 211 "elds.m"
                  case (MR_Integer) 0:
#line 4267 "erl_backend.elds.c"
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                    break;
#line 211 "elds.m"
                  case (MR_Integer) 1:
#line 4273 "erl_backend.elds.c"
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                    break;
#line 211 "elds.m"
                  case (MR_Integer) 2:
#line 4279 "erl_backend.elds.c"
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                    break;
#line 211 "elds.m"
                  case (MR_Integer) 3:
#line 4285 "erl_backend.elds.c"
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                    break;
#line 211 "elds.m"
                  case (MR_Integer) 4:
#line 4291 "erl_backend.elds.c"
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                    break;
#line 211 "elds.m"
                  case (MR_Integer) 5:
#line 4297 "erl_backend.elds.c"
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                    break;
#line 211 "elds.m"
                  case (MR_Integer) 6:
#line 4303 "erl_backend.elds.c"
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                    break;
#line 211 "elds.m"
                  case (MR_Integer) 7:
#line 4309 "erl_backend.elds.c"
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                    break;
#line 211 "elds.m"
                }
#line 211 "elds.m"
                break;
#line 211 "elds.m"
            }
#line 211 "elds.m"
          }
#line 211 "elds.m"
          break;
#line 211 "elds.m"
        case (MR_Integer) 2:
#line 211 "elds.m"
          {
#line 211 "elds.m"
            MR_Integer erl_backend__elds__V_242_242 = ((MR_Integer) (MR_hl_field(MR_mktag(2), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)));

#line 211 "elds.m"
#line 211 "elds.m"
            switch (MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) {
#line 211 "elds.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 211 "elds.m"
              case (MR_Integer) 0:
#line 4337 "erl_backend.elds.c"
                *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                break;
#line 211 "elds.m"
              case (MR_Integer) 1:
#line 4343 "erl_backend.elds.c"
                *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                break;
#line 211 "elds.m"
              case (MR_Integer) 2:
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
                break;
#line 211 "elds.m"
              case (MR_Integer) 3:
#line 211 "elds.m"
#line 211 "elds.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) {
#line 211 "elds.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 211 "elds.m"
                  case (MR_Integer) 0:
#line 4374 "erl_backend.elds.c"
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                    break;
#line 211 "elds.m"
                  case (MR_Integer) 1:
#line 4380 "erl_backend.elds.c"
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                    break;
#line 211 "elds.m"
                  case (MR_Integer) 2:
#line 4386 "erl_backend.elds.c"
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                    break;
#line 211 "elds.m"
                  case (MR_Integer) 3:
#line 4392 "erl_backend.elds.c"
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                    break;
#line 211 "elds.m"
                  case (MR_Integer) 4:
#line 4398 "erl_backend.elds.c"
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                    break;
#line 211 "elds.m"
                  case (MR_Integer) 5:
#line 4404 "erl_backend.elds.c"
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                    break;
#line 211 "elds.m"
                  case (MR_Integer) 6:
#line 4410 "erl_backend.elds.c"
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                    break;
#line 211 "elds.m"
                  case (MR_Integer) 7:
#line 4416 "erl_backend.elds.c"
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                    break;
#line 211 "elds.m"
                }
#line 211 "elds.m"
                break;
#line 211 "elds.m"
            }
#line 211 "elds.m"
          }
#line 211 "elds.m"
          break;
#line 211 "elds.m"
        case (MR_Integer) 3:
#line 211 "elds.m"
#line 211 "elds.m"
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)))) {
#line 211 "elds.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 211 "elds.m"
            case (MR_Integer) 0:
#line 211 "elds.m"
              {
#line 211 "elds.m"
                MR_Float erl_backend__elds__V_241_241 = MR_unbox_float((MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 1)));

#line 211 "elds.m"
#line 211 "elds.m"
                switch (MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) {
#line 211 "elds.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 211 "elds.m"
                  case (MR_Integer) 0:
#line 4451 "erl_backend.elds.c"
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                    break;
#line 211 "elds.m"
                  case (MR_Integer) 1:
#line 4457 "erl_backend.elds.c"
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                    break;
#line 211 "elds.m"
                  case (MR_Integer) 2:
#line 4463 "erl_backend.elds.c"
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                    break;
#line 211 "elds.m"
                  case (MR_Integer) 3:
#line 211 "elds.m"
#line 211 "elds.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) {
#line 211 "elds.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 211 "elds.m"
                      case (MR_Integer) 0:
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
                        break;
#line 211 "elds.m"
                      case (MR_Integer) 1:
#line 4494 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                        break;
#line 211 "elds.m"
                      case (MR_Integer) 2:
#line 4500 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                        break;
#line 211 "elds.m"
                      case (MR_Integer) 3:
#line 4506 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                        break;
#line 211 "elds.m"
                      case (MR_Integer) 4:
#line 4512 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                        break;
#line 211 "elds.m"
                      case (MR_Integer) 5:
#line 4518 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                        break;
#line 211 "elds.m"
                      case (MR_Integer) 6:
#line 4524 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                        break;
#line 211 "elds.m"
                      case (MR_Integer) 7:
#line 4530 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                        break;
#line 211 "elds.m"
                    }
#line 211 "elds.m"
                    break;
#line 211 "elds.m"
                }
#line 211 "elds.m"
              }
#line 211 "elds.m"
              break;
#line 211 "elds.m"
            case (MR_Integer) 1:
#line 211 "elds.m"
              {
#line 211 "elds.m"
                MR_String erl_backend__elds__V_238_238 = ((MR_String) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 1)));

#line 211 "elds.m"
#line 211 "elds.m"
                switch (MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) {
#line 211 "elds.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 211 "elds.m"
                  case (MR_Integer) 0:
#line 4558 "erl_backend.elds.c"
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                    break;
#line 211 "elds.m"
                  case (MR_Integer) 1:
#line 4564 "erl_backend.elds.c"
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                    break;
#line 211 "elds.m"
                  case (MR_Integer) 2:
#line 4570 "erl_backend.elds.c"
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                    break;
#line 211 "elds.m"
                  case (MR_Integer) 3:
#line 211 "elds.m"
#line 211 "elds.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) {
#line 211 "elds.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 211 "elds.m"
                      case (MR_Integer) 0:
#line 4583 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                        break;
#line 211 "elds.m"
                      case (MR_Integer) 1:
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
                        break;
#line 211 "elds.m"
                      case (MR_Integer) 2:
#line 4607 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                        break;
#line 211 "elds.m"
                      case (MR_Integer) 3:
#line 4613 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                        break;
#line 211 "elds.m"
                      case (MR_Integer) 4:
#line 4619 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                        break;
#line 211 "elds.m"
                      case (MR_Integer) 5:
#line 4625 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                        break;
#line 211 "elds.m"
                      case (MR_Integer) 6:
#line 4631 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                        break;
#line 211 "elds.m"
                      case (MR_Integer) 7:
#line 4637 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                        break;
#line 211 "elds.m"
                    }
#line 211 "elds.m"
                    break;
#line 211 "elds.m"
                }
#line 211 "elds.m"
              }
#line 211 "elds.m"
              break;
#line 211 "elds.m"
            case (MR_Integer) 2:
#line 211 "elds.m"
              {
#line 211 "elds.m"
                MR_String erl_backend__elds__V_243_243 = ((MR_String) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 1)));

#line 211 "elds.m"
#line 211 "elds.m"
                switch (MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) {
#line 211 "elds.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 211 "elds.m"
                  case (MR_Integer) 0:
#line 4665 "erl_backend.elds.c"
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                    break;
#line 211 "elds.m"
                  case (MR_Integer) 1:
#line 4671 "erl_backend.elds.c"
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                    break;
#line 211 "elds.m"
                  case (MR_Integer) 2:
#line 4677 "erl_backend.elds.c"
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                    break;
#line 211 "elds.m"
                  case (MR_Integer) 3:
#line 211 "elds.m"
#line 211 "elds.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) {
#line 211 "elds.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 211 "elds.m"
                      case (MR_Integer) 0:
#line 4690 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                        break;
#line 211 "elds.m"
                      case (MR_Integer) 1:
#line 4696 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                        break;
#line 211 "elds.m"
                      case (MR_Integer) 2:
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
                        break;
#line 211 "elds.m"
                      case (MR_Integer) 3:
#line 4720 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                        break;
#line 211 "elds.m"
                      case (MR_Integer) 4:
#line 4726 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                        break;
#line 211 "elds.m"
                      case (MR_Integer) 5:
#line 4732 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                        break;
#line 211 "elds.m"
                      case (MR_Integer) 6:
#line 4738 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                        break;
#line 211 "elds.m"
                      case (MR_Integer) 7:
#line 4744 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                        break;
#line 211 "elds.m"
                    }
#line 211 "elds.m"
                    break;
#line 211 "elds.m"
                }
#line 211 "elds.m"
              }
#line 211 "elds.m"
              break;
#line 211 "elds.m"
            case (MR_Integer) 3:
#line 211 "elds.m"
              {
#line 211 "elds.m"
                MR_String erl_backend__elds__V_237_237 = ((MR_String) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 1)));

#line 211 "elds.m"
#line 211 "elds.m"
                switch (MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) {
#line 211 "elds.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 211 "elds.m"
                  case (MR_Integer) 0:
#line 4772 "erl_backend.elds.c"
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                    break;
#line 211 "elds.m"
                  case (MR_Integer) 1:
#line 4778 "erl_backend.elds.c"
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                    break;
#line 211 "elds.m"
                  case (MR_Integer) 2:
#line 4784 "erl_backend.elds.c"
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                    break;
#line 211 "elds.m"
                  case (MR_Integer) 3:
#line 211 "elds.m"
#line 211 "elds.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) {
#line 211 "elds.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 211 "elds.m"
                      case (MR_Integer) 0:
#line 4797 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                        break;
#line 211 "elds.m"
                      case (MR_Integer) 1:
#line 4803 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                        break;
#line 211 "elds.m"
                      case (MR_Integer) 2:
#line 4809 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                        break;
#line 211 "elds.m"
                      case (MR_Integer) 3:
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
                        break;
#line 211 "elds.m"
                      case (MR_Integer) 4:
#line 4833 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                        break;
#line 211 "elds.m"
                      case (MR_Integer) 5:
#line 4839 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                        break;
#line 211 "elds.m"
                      case (MR_Integer) 6:
#line 4845 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                        break;
#line 211 "elds.m"
                      case (MR_Integer) 7:
#line 4851 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                        break;
#line 211 "elds.m"
                    }
#line 211 "elds.m"
                    break;
#line 211 "elds.m"
                }
#line 211 "elds.m"
              }
#line 211 "elds.m"
              break;
#line 211 "elds.m"
            case (MR_Integer) 4:
#line 211 "elds.m"
              {
#line 211 "elds.m"
                MR_Word erl_backend__elds__V_236_236 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 1)));

#line 211 "elds.m"
#line 211 "elds.m"
                switch (MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) {
#line 211 "elds.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 211 "elds.m"
                  case (MR_Integer) 0:
#line 4879 "erl_backend.elds.c"
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                    break;
#line 211 "elds.m"
                  case (MR_Integer) 1:
#line 4885 "erl_backend.elds.c"
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                    break;
#line 211 "elds.m"
                  case (MR_Integer) 2:
#line 4891 "erl_backend.elds.c"
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                    break;
#line 211 "elds.m"
                  case (MR_Integer) 3:
#line 211 "elds.m"
#line 211 "elds.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) {
#line 211 "elds.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 211 "elds.m"
                      case (MR_Integer) 0:
#line 4904 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                        break;
#line 211 "elds.m"
                      case (MR_Integer) 1:
#line 4910 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                        break;
#line 211 "elds.m"
                      case (MR_Integer) 2:
#line 4916 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                        break;
#line 211 "elds.m"
                      case (MR_Integer) 3:
#line 4922 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                        break;
#line 211 "elds.m"
                      case (MR_Integer) 4:
#line 211 "elds.m"
                        {
#line 211 "elds.m"
                          MR_Word erl_backend__elds__V_143_143 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 1)));

#line 211 "elds.m"
                          {
#line 211 "elds.m"
                            mdbcomp__sym_name____Compare____sym_name_0_0(erl_backend__elds__HeadVar__1_1, erl_backend__elds__V_236_236, erl_backend__elds__V_143_143);
#line 211 "elds.m"
                            return;
                          }
#line 211 "elds.m"
                        }
#line 211 "elds.m"
                        break;
#line 211 "elds.m"
                      case (MR_Integer) 5:
#line 4946 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                        break;
#line 211 "elds.m"
                      case (MR_Integer) 6:
#line 4952 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                        break;
#line 211 "elds.m"
                      case (MR_Integer) 7:
#line 4958 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                        break;
#line 211 "elds.m"
                    }
#line 211 "elds.m"
                    break;
#line 211 "elds.m"
                }
#line 211 "elds.m"
              }
#line 211 "elds.m"
              break;
#line 211 "elds.m"
            case (MR_Integer) 5:
#line 211 "elds.m"
              {
#line 211 "elds.m"
                MR_Word erl_backend__elds__V_244_244 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 1)));

#line 211 "elds.m"
#line 211 "elds.m"
                switch (MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) {
#line 211 "elds.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 211 "elds.m"
                  case (MR_Integer) 0:
#line 4986 "erl_backend.elds.c"
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                    break;
#line 211 "elds.m"
                  case (MR_Integer) 1:
#line 4992 "erl_backend.elds.c"
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                    break;
#line 211 "elds.m"
                  case (MR_Integer) 2:
#line 4998 "erl_backend.elds.c"
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                    break;
#line 211 "elds.m"
                  case (MR_Integer) 3:
#line 211 "elds.m"
#line 211 "elds.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) {
#line 211 "elds.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 211 "elds.m"
                      case (MR_Integer) 0:
#line 5011 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                        break;
#line 211 "elds.m"
                      case (MR_Integer) 1:
#line 5017 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                        break;
#line 211 "elds.m"
                      case (MR_Integer) 2:
#line 5023 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                        break;
#line 211 "elds.m"
                      case (MR_Integer) 3:
#line 5029 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                        break;
#line 211 "elds.m"
                      case (MR_Integer) 4:
#line 5035 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                        break;
#line 211 "elds.m"
                      case (MR_Integer) 5:
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
                        break;
#line 211 "elds.m"
                      case (MR_Integer) 6:
#line 5059 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                        break;
#line 211 "elds.m"
                      case (MR_Integer) 7:
#line 5065 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                        break;
#line 211 "elds.m"
                    }
#line 211 "elds.m"
                    break;
#line 211 "elds.m"
                }
#line 211 "elds.m"
              }
#line 211 "elds.m"
              break;
#line 211 "elds.m"
            case (MR_Integer) 6:
#line 211 "elds.m"
              {
#line 211 "elds.m"
                MR_Word erl_backend__elds__V_245_245 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 1)));

#line 211 "elds.m"
#line 211 "elds.m"
                switch (MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) {
#line 211 "elds.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 211 "elds.m"
                  case (MR_Integer) 0:
#line 5093 "erl_backend.elds.c"
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                    break;
#line 211 "elds.m"
                  case (MR_Integer) 1:
#line 5099 "erl_backend.elds.c"
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                    break;
#line 211 "elds.m"
                  case (MR_Integer) 2:
#line 5105 "erl_backend.elds.c"
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                    break;
#line 211 "elds.m"
                  case (MR_Integer) 3:
#line 211 "elds.m"
#line 211 "elds.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) {
#line 211 "elds.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 211 "elds.m"
                      case (MR_Integer) 0:
#line 5118 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                        break;
#line 211 "elds.m"
                      case (MR_Integer) 1:
#line 5124 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                        break;
#line 211 "elds.m"
                      case (MR_Integer) 2:
#line 5130 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                        break;
#line 211 "elds.m"
                      case (MR_Integer) 3:
#line 5136 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                        break;
#line 211 "elds.m"
                      case (MR_Integer) 4:
#line 5142 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                        break;
#line 211 "elds.m"
                      case (MR_Integer) 5:
#line 5148 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                        break;
#line 211 "elds.m"
                      case (MR_Integer) 6:
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
                        break;
#line 211 "elds.m"
                      case (MR_Integer) 7:
#line 5172 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                        break;
#line 211 "elds.m"
                    }
#line 211 "elds.m"
                    break;
#line 211 "elds.m"
                }
#line 211 "elds.m"
              }
#line 211 "elds.m"
              break;
#line 211 "elds.m"
            case (MR_Integer) 7:
#line 211 "elds.m"
              {
#line 211 "elds.m"
                MR_String erl_backend__elds__V_240_240 = ((MR_String) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 1)));

#line 211 "elds.m"
#line 211 "elds.m"
                switch (MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) {
#line 211 "elds.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 211 "elds.m"
                  case (MR_Integer) 0:
#line 5200 "erl_backend.elds.c"
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                    break;
#line 211 "elds.m"
                  case (MR_Integer) 1:
#line 5206 "erl_backend.elds.c"
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                    break;
#line 211 "elds.m"
                  case (MR_Integer) 2:
#line 5212 "erl_backend.elds.c"
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                    break;
#line 211 "elds.m"
                  case (MR_Integer) 3:
#line 211 "elds.m"
#line 211 "elds.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) {
#line 211 "elds.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 211 "elds.m"
                      case (MR_Integer) 0:
#line 5225 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                        break;
#line 211 "elds.m"
                      case (MR_Integer) 1:
#line 5231 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                        break;
#line 211 "elds.m"
                      case (MR_Integer) 2:
#line 5237 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                        break;
#line 211 "elds.m"
                      case (MR_Integer) 3:
#line 5243 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                        break;
#line 211 "elds.m"
                      case (MR_Integer) 4:
#line 5249 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                        break;
#line 211 "elds.m"
                      case (MR_Integer) 5:
#line 5255 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                        break;
#line 211 "elds.m"
                      case (MR_Integer) 6:
#line 5261 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                        break;
#line 211 "elds.m"
                      case (MR_Integer) 7:
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
                        break;
#line 211 "elds.m"
                    }
#line 211 "elds.m"
                    break;
#line 211 "elds.m"
                }
#line 211 "elds.m"
              }
#line 211 "elds.m"
              break;
#line 211 "elds.m"
          }
#line 211 "elds.m"
          break;
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
#line 211 "elds.m"
      switch (MR_tag((MR_Word) erl_backend__elds__HeadVar__1_1)) {
#line 211 "elds.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 211 "elds.m"
        case (MR_Integer) 0:
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
          break;
#line 211 "elds.m"
        case (MR_Integer) 1:
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
#line 5367 "erl_backend.elds.c"
                erl_backend__elds__succeeded = (erl_backend__elds__V_3_3 == erl_backend__elds__V_4_4);
#line 211 "elds.m"
              }
#line 211 "elds.m"
          }
#line 211 "elds.m"
          break;
#line 211 "elds.m"
        case (MR_Integer) 2:
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
#line 5392 "erl_backend.elds.c"
                erl_backend__elds__succeeded = (erl_backend__elds__V_5_5 == erl_backend__elds__V_6_6);
#line 211 "elds.m"
              }
#line 211 "elds.m"
          }
#line 211 "elds.m"
          break;
#line 211 "elds.m"
        case (MR_Integer) 3:
#line 211 "elds.m"
#line 211 "elds.m"
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__1_1, (MR_Integer) 0)))) {
#line 211 "elds.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 211 "elds.m"
            case (MR_Integer) 0:
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
#line 5424 "erl_backend.elds.c"
                    erl_backend__elds__succeeded = (erl_backend__elds__V_7_7 == erl_backend__elds__V_8_8);
#line 211 "elds.m"
                  }
#line 211 "elds.m"
              }
#line 211 "elds.m"
              break;
#line 211 "elds.m"
            case (MR_Integer) 1:
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
#line 5449 "erl_backend.elds.c"
                    erl_backend__elds__succeeded = (strcmp(erl_backend__elds__V_9_9, erl_backend__elds__V_10_10) == 0);
#line 211 "elds.m"
                  }
#line 211 "elds.m"
              }
#line 211 "elds.m"
              break;
#line 211 "elds.m"
            case (MR_Integer) 2:
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
#line 5474 "erl_backend.elds.c"
                    erl_backend__elds__succeeded = (strcmp(erl_backend__elds__V_11_11, erl_backend__elds__V_12_12) == 0);
#line 211 "elds.m"
                  }
#line 211 "elds.m"
              }
#line 211 "elds.m"
              break;
#line 211 "elds.m"
            case (MR_Integer) 3:
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
#line 5499 "erl_backend.elds.c"
                    erl_backend__elds__succeeded = (strcmp(erl_backend__elds__V_13_13, erl_backend__elds__V_14_14) == 0);
#line 211 "elds.m"
                  }
#line 211 "elds.m"
              }
#line 211 "elds.m"
              break;
#line 211 "elds.m"
            case (MR_Integer) 4:
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
#line 5524 "erl_backend.elds.c"
                    {
#line 5526 "erl_backend.elds.c"
                      return erl_backend__elds__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(erl_backend__elds__V_15_15, erl_backend__elds__V_16_16);
                    }
#line 211 "elds.m"
                  }
#line 211 "elds.m"
              }
#line 211 "elds.m"
              break;
#line 211 "elds.m"
            case (MR_Integer) 5:
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
#line 5554 "erl_backend.elds.c"
                    erl_backend__elds__TypeInfo_28_28 = (MR_Word) &erl_backend__elds_scalar_common_1[14];
#line 5556 "erl_backend.elds.c"
                    {
#line 5558 "erl_backend.elds.c"
                      return erl_backend__elds__succeeded = mercury__builtin__unify_2_p_0(erl_backend__elds__TypeInfo_28_28, ((MR_Box) (erl_backend__elds__V_17_17)), ((MR_Box) (erl_backend__elds__V_18_18)));
                    }
#line 211 "elds.m"
                  }
#line 211 "elds.m"
              }
#line 211 "elds.m"
              break;
#line 211 "elds.m"
            case (MR_Integer) 6:
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
#line 5586 "erl_backend.elds.c"
                    erl_backend__elds__TypeInfo_29_29 = (MR_Word) &erl_backend__elds_scalar_common_1[0];
#line 5588 "erl_backend.elds.c"
                    {
#line 5590 "erl_backend.elds.c"
                      return erl_backend__elds__succeeded = mercury__builtin__unify_2_p_0(erl_backend__elds__TypeInfo_29_29, ((MR_Box) (erl_backend__elds__V_19_19)), ((MR_Box) (erl_backend__elds__V_20_20)));
                    }
#line 211 "elds.m"
                  }
#line 211 "elds.m"
              }
#line 211 "elds.m"
              break;
#line 211 "elds.m"
            case (MR_Integer) 7:
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
#line 5616 "erl_backend.elds.c"
                    erl_backend__elds__succeeded = (strcmp(erl_backend__elds__V_23_23, erl_backend__elds__V_24_24) == 0);
#line 211 "elds.m"
                  }
#line 211 "elds.m"
              }
#line 211 "elds.m"
              break;
#line 211 "elds.m"
          }
#line 211 "elds.m"
          break;
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
#line 5661 "erl_backend.elds.c"
      *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 0;
#line 110 "elds.m"
    else
#line 110 "elds.m"
#line 110 "elds.m"
      switch (MR_tag((MR_Word) erl_backend__elds__HeadVar__2_2)) {
#line 110 "elds.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 110 "elds.m"
        case (MR_Integer) 0:
#line 110 "elds.m"
          {
#line 110 "elds.m"
            MR_Word erl_backend__elds__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)));

#line 110 "elds.m"
#line 110 "elds.m"
            switch (MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) {
#line 110 "elds.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 110 "elds.m"
              case (MR_Integer) 0:
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
                break;
#line 110 "elds.m"
              case (MR_Integer) 1:
#line 5702 "erl_backend.elds.c"
                *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 110 "elds.m"
                break;
#line 110 "elds.m"
              case (MR_Integer) 2:
#line 5708 "erl_backend.elds.c"
                *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 110 "elds.m"
                break;
#line 110 "elds.m"
              case (MR_Integer) 3:
#line 5714 "erl_backend.elds.c"
                *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 110 "elds.m"
                break;
#line 110 "elds.m"
            }
#line 110 "elds.m"
          }
#line 110 "elds.m"
          break;
#line 110 "elds.m"
        case (MR_Integer) 1:
#line 110 "elds.m"
          {
#line 110 "elds.m"
            MR_Word erl_backend__elds__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)));

#line 110 "elds.m"
#line 110 "elds.m"
            switch (MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) {
#line 110 "elds.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 110 "elds.m"
              case (MR_Integer) 0:
#line 5738 "erl_backend.elds.c"
                *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 110 "elds.m"
                break;
#line 110 "elds.m"
              case (MR_Integer) 1:
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
                break;
#line 110 "elds.m"
              case (MR_Integer) 2:
#line 5762 "erl_backend.elds.c"
                *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 110 "elds.m"
                break;
#line 110 "elds.m"
              case (MR_Integer) 3:
#line 5768 "erl_backend.elds.c"
                *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 110 "elds.m"
                break;
#line 110 "elds.m"
            }
#line 110 "elds.m"
          }
#line 110 "elds.m"
          break;
#line 110 "elds.m"
        case (MR_Integer) 2:
#line 110 "elds.m"
          {
#line 110 "elds.m"
            MR_Word erl_backend__elds__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(2), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)));

#line 110 "elds.m"
#line 110 "elds.m"
            switch (MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) {
#line 110 "elds.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 110 "elds.m"
              case (MR_Integer) 0:
#line 5792 "erl_backend.elds.c"
                *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 110 "elds.m"
                break;
#line 110 "elds.m"
              case (MR_Integer) 1:
#line 5798 "erl_backend.elds.c"
                *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 110 "elds.m"
                break;
#line 110 "elds.m"
              case (MR_Integer) 2:
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
                break;
#line 110 "elds.m"
              case (MR_Integer) 3:
#line 5822 "erl_backend.elds.c"
                *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 110 "elds.m"
                break;
#line 110 "elds.m"
            }
#line 110 "elds.m"
          }
#line 110 "elds.m"
          break;
#line 110 "elds.m"
        case (MR_Integer) 3:
#line 110 "elds.m"
          {
#line 110 "elds.m"
            MR_String erl_backend__elds__V_62_62 = ((MR_String) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 2)));
#line 110 "elds.m"
            MR_Word erl_backend__elds__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 1)));
#line 110 "elds.m"
            MR_Word erl_backend__elds__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)));

#line 110 "elds.m"
#line 110 "elds.m"
            switch (MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) {
#line 110 "elds.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 110 "elds.m"
              case (MR_Integer) 0:
#line 5850 "erl_backend.elds.c"
                *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 110 "elds.m"
                break;
#line 110 "elds.m"
              case (MR_Integer) 1:
#line 5856 "erl_backend.elds.c"
                *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 110 "elds.m"
                break;
#line 110 "elds.m"
              case (MR_Integer) 2:
#line 5862 "erl_backend.elds.c"
                *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 110 "elds.m"
                break;
#line 110 "elds.m"
              case (MR_Integer) 3:
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
#line 5884 "erl_backend.elds.c"
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
                        mdbcomp__sym_name____Compare____sym_name_0_0(&erl_backend__elds__V_53_53, erl_backend__elds__V_63_63, erl_backend__elds__V_50_50);
                      }
#line 5904 "erl_backend.elds.c"
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
                break;
#line 110 "elds.m"
            }
#line 110 "elds.m"
          }
#line 110 "elds.m"
          break;
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
#line 110 "elds.m"
      switch (MR_tag((MR_Word) erl_backend__elds__HeadVar__1_1)) {
#line 110 "elds.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 110 "elds.m"
        case (MR_Integer) 0:
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
#line 5988 "erl_backend.elds.c"
                {
#line 5990 "erl_backend.elds.c"
                  return erl_backend__elds__succeeded = backend_libs__rtti____Unify____rtti_type_ctor_0_0(erl_backend__elds__V_3_3, erl_backend__elds__V_4_4);
                }
#line 110 "elds.m"
              }
#line 110 "elds.m"
          }
#line 110 "elds.m"
          break;
#line 110 "elds.m"
        case (MR_Integer) 1:
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
#line 6016 "erl_backend.elds.c"
                {
#line 6018 "erl_backend.elds.c"
                  return erl_backend__elds__succeeded = backend_libs__rtti____Unify____rtti_type_info_0_0(erl_backend__elds__V_5_5, erl_backend__elds__V_6_6);
                }
#line 110 "elds.m"
              }
#line 110 "elds.m"
          }
#line 110 "elds.m"
          break;
#line 110 "elds.m"
        case (MR_Integer) 2:
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
#line 6044 "erl_backend.elds.c"
                {
#line 6046 "erl_backend.elds.c"
                  return erl_backend__elds__succeeded = backend_libs__rtti____Unify____rtti_pseudo_type_info_0_0(erl_backend__elds__V_7_7, erl_backend__elds__V_8_8);
                }
#line 110 "elds.m"
              }
#line 110 "elds.m"
          }
#line 110 "elds.m"
          break;
#line 110 "elds.m"
        case (MR_Integer) 3:
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
#line 6084 "erl_backend.elds.c"
                {
#line 6086 "erl_backend.elds.c"
                  erl_backend__elds__succeeded = backend_libs__rtti____Unify____tc_name_0_0(erl_backend__elds__V_9_9, erl_backend__elds__V_12_12);
                }
#line 110 "elds.m"
                if (erl_backend__elds__succeeded)
#line 110 "elds.m"
                  {
#line 6093 "erl_backend.elds.c"
                    {
#line 6095 "erl_backend.elds.c"
                      erl_backend__elds__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(erl_backend__elds__V_10_10, erl_backend__elds__V_13_13);
                    }
#line 110 "elds.m"
                    if (erl_backend__elds__succeeded)
#line 6100 "erl_backend.elds.c"
                      erl_backend__elds__succeeded = (strcmp(erl_backend__elds__V_11_11, erl_backend__elds__V_14_14) == 0);
#line 110 "elds.m"
                  }
#line 110 "elds.m"
              }
#line 110 "elds.m"
          }
#line 110 "elds.m"
          break;
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
#line 6143 "erl_backend.elds.c"
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
#line 6173 "erl_backend.elds.c"
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
#line 6197 "erl_backend.elds.c"
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
#line 6217 "erl_backend.elds.c"
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

#line 6292 "erl_backend.elds.c"
        {
#line 6294 "erl_backend.elds.c"
          erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_rtti_id_0_0(erl_backend__elds__V_3_3, erl_backend__elds__V_7_7);
        }
#line 100 "elds.m"
        if (erl_backend__elds__succeeded)
#line 100 "elds.m"
          {
#line 6301 "erl_backend.elds.c"
            erl_backend__elds__succeeded = (erl_backend__elds__V_4_4 == erl_backend__elds__V_8_8);
#line 100 "elds.m"
            if (erl_backend__elds__succeeded)
#line 100 "elds.m"
              {
#line 6307 "erl_backend.elds.c"
                erl_backend__elds__TypeInfo_13_13 = (MR_Word) &erl_backend__elds_scalar_common_1[9];
#line 6309 "erl_backend.elds.c"
                {
#line 6311 "erl_backend.elds.c"
                  erl_backend__elds__succeeded = mercury__builtin__unify_2_p_0(erl_backend__elds__TypeInfo_13_13, ((MR_Box) (erl_backend__elds__V_5_5)), ((MR_Box) (erl_backend__elds__V_9_9)));
                }
#line 100 "elds.m"
                if (erl_backend__elds__succeeded)
#line 6316 "erl_backend.elds.c"
                  {
#line 6318 "erl_backend.elds.c"
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
#line 6358 "erl_backend.elds.c"
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
#line 6384 "erl_backend.elds.c"
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
#line 6404 "erl_backend.elds.c"
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

#line 6473 "erl_backend.elds.c"
        erl_backend__elds__succeeded = (strcmp(erl_backend__elds__V_3_3, erl_backend__elds__V_6_6) == 0);
#line 91 "elds.m"
        if (erl_backend__elds__succeeded)
#line 91 "elds.m"
          {
#line 6479 "erl_backend.elds.c"
            erl_backend__elds__TypeInfo_11_11 = (MR_Word) &erl_backend__elds_scalar_common_1[9];
#line 6481 "erl_backend.elds.c"
            {
#line 6483 "erl_backend.elds.c"
              erl_backend__elds__succeeded = mercury__builtin__unify_2_p_0(erl_backend__elds__TypeInfo_11_11, ((MR_Box) (erl_backend__elds__V_4_4)), ((MR_Box) (erl_backend__elds__V_7_7)));
            }
#line 91 "elds.m"
            if (erl_backend__elds__succeeded)
#line 6488 "erl_backend.elds.c"
              {
#line 6490 "erl_backend.elds.c"
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
#line 6534 "erl_backend.elds.c"
          *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 0;
#line 136 "elds.m"
        else
#line 136 "elds.m"
#line 136 "elds.m"
          switch (MR_tag((MR_Word) erl_backend__elds__HeadVar__2_2)) {
#line 136 "elds.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 136 "elds.m"
            case (MR_Integer) 0:
#line 136 "elds.m"
              {
#line 136 "elds.m"
                MR_Word erl_backend__elds__V_754_754 = (MR_Word) MR_body(((MR_Word) erl_backend__elds__HeadVar__2_2), (MR_Integer) 0);

#line 136 "elds.m"
#line 136 "elds.m"
                switch (MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) {
#line 136 "elds.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 136 "elds.m"
                  case (MR_Integer) 0:
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
                    break;
#line 136 "elds.m"
                  case (MR_Integer) 1:
#line 6575 "erl_backend.elds.c"
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                    break;
#line 136 "elds.m"
                  case (MR_Integer) 2:
#line 6581 "erl_backend.elds.c"
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                    break;
#line 136 "elds.m"
                  case (MR_Integer) 3:
#line 136 "elds.m"
#line 136 "elds.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) {
#line 136 "elds.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 136 "elds.m"
                      case (MR_Integer) 0:
#line 6594 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                        break;
#line 136 "elds.m"
                      case (MR_Integer) 1:
#line 6600 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                        break;
#line 136 "elds.m"
                      case (MR_Integer) 2:
#line 6606 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                        break;
#line 136 "elds.m"
                      case (MR_Integer) 3:
#line 6612 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                        break;
#line 136 "elds.m"
                      case (MR_Integer) 4:
#line 6618 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                        break;
#line 136 "elds.m"
                      case (MR_Integer) 5:
#line 6624 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                        break;
#line 136 "elds.m"
                      case (MR_Integer) 6:
#line 6630 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                        break;
#line 136 "elds.m"
                      case (MR_Integer) 7:
#line 6636 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                        break;
#line 136 "elds.m"
                      case (MR_Integer) 8:
#line 6642 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                        break;
#line 136 "elds.m"
                      case (MR_Integer) 9:
#line 6648 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                        break;
#line 136 "elds.m"
                      case (MR_Integer) 10:
#line 6654 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                        break;
#line 136 "elds.m"
                    }
#line 136 "elds.m"
                    break;
#line 136 "elds.m"
                }
#line 136 "elds.m"
              }
#line 136 "elds.m"
              break;
#line 136 "elds.m"
            case (MR_Integer) 1:
#line 136 "elds.m"
              {
#line 136 "elds.m"
                MR_Word erl_backend__elds__V_745_745 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)));

#line 136 "elds.m"
#line 136 "elds.m"
                switch (MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) {
#line 136 "elds.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 136 "elds.m"
                  case (MR_Integer) 0:
#line 6682 "erl_backend.elds.c"
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                    break;
#line 136 "elds.m"
                  case (MR_Integer) 1:
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
                    break;
#line 136 "elds.m"
                  case (MR_Integer) 2:
#line 6706 "erl_backend.elds.c"
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                    break;
#line 136 "elds.m"
                  case (MR_Integer) 3:
#line 136 "elds.m"
#line 136 "elds.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) {
#line 136 "elds.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 136 "elds.m"
                      case (MR_Integer) 0:
#line 6719 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                        break;
#line 136 "elds.m"
                      case (MR_Integer) 1:
#line 6725 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                        break;
#line 136 "elds.m"
                      case (MR_Integer) 2:
#line 6731 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                        break;
#line 136 "elds.m"
                      case (MR_Integer) 3:
#line 6737 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                        break;
#line 136 "elds.m"
                      case (MR_Integer) 4:
#line 6743 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                        break;
#line 136 "elds.m"
                      case (MR_Integer) 5:
#line 6749 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                        break;
#line 136 "elds.m"
                      case (MR_Integer) 6:
#line 6755 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                        break;
#line 136 "elds.m"
                      case (MR_Integer) 7:
#line 6761 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                        break;
#line 136 "elds.m"
                      case (MR_Integer) 8:
#line 6767 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                        break;
#line 136 "elds.m"
                      case (MR_Integer) 9:
#line 6773 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                        break;
#line 136 "elds.m"
                      case (MR_Integer) 10:
#line 6779 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                        break;
#line 136 "elds.m"
                    }
#line 136 "elds.m"
                    break;
#line 136 "elds.m"
                }
#line 136 "elds.m"
              }
#line 136 "elds.m"
              break;
#line 136 "elds.m"
            case (MR_Integer) 2:
#line 136 "elds.m"
              {
#line 136 "elds.m"
                MR_Word erl_backend__elds__V_759_759 = ((MR_Word) (MR_hl_field(MR_mktag(2), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)));

#line 136 "elds.m"
#line 136 "elds.m"
                switch (MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) {
#line 136 "elds.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 136 "elds.m"
                  case (MR_Integer) 0:
#line 6807 "erl_backend.elds.c"
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                    break;
#line 136 "elds.m"
                  case (MR_Integer) 1:
#line 6813 "erl_backend.elds.c"
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                    break;
#line 136 "elds.m"
                  case (MR_Integer) 2:
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
                    break;
#line 136 "elds.m"
                  case (MR_Integer) 3:
#line 136 "elds.m"
#line 136 "elds.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) {
#line 136 "elds.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 136 "elds.m"
                      case (MR_Integer) 0:
#line 6844 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                        break;
#line 136 "elds.m"
                      case (MR_Integer) 1:
#line 6850 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                        break;
#line 136 "elds.m"
                      case (MR_Integer) 2:
#line 6856 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                        break;
#line 136 "elds.m"
                      case (MR_Integer) 3:
#line 6862 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                        break;
#line 136 "elds.m"
                      case (MR_Integer) 4:
#line 6868 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                        break;
#line 136 "elds.m"
                      case (MR_Integer) 5:
#line 6874 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                        break;
#line 136 "elds.m"
                      case (MR_Integer) 6:
#line 6880 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                        break;
#line 136 "elds.m"
                      case (MR_Integer) 7:
#line 6886 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                        break;
#line 136 "elds.m"
                      case (MR_Integer) 8:
#line 6892 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                        break;
#line 136 "elds.m"
                      case (MR_Integer) 9:
#line 6898 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                        break;
#line 136 "elds.m"
                      case (MR_Integer) 10:
#line 6904 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                        break;
#line 136 "elds.m"
                    }
#line 136 "elds.m"
                    break;
#line 136 "elds.m"
                }
#line 136 "elds.m"
              }
#line 136 "elds.m"
              break;
#line 136 "elds.m"
            case (MR_Integer) 3:
#line 136 "elds.m"
#line 136 "elds.m"
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)))) {
#line 136 "elds.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 136 "elds.m"
                case (MR_Integer) 0:
#line 136 "elds.m"
                  {
#line 136 "elds.m"
                    MR_Word erl_backend__elds__V_750_750 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 2)));
#line 136 "elds.m"
                    MR_Word erl_backend__elds__V_751_751 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 1)));

#line 136 "elds.m"
#line 136 "elds.m"
                    switch (MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) {
#line 136 "elds.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 136 "elds.m"
                      case (MR_Integer) 0:
#line 6941 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                        break;
#line 136 "elds.m"
                      case (MR_Integer) 1:
#line 6947 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                        break;
#line 136 "elds.m"
                      case (MR_Integer) 2:
#line 6953 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                        break;
#line 136 "elds.m"
                      case (MR_Integer) 3:
#line 136 "elds.m"
#line 136 "elds.m"
                        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) {
#line 136 "elds.m"
                          default: /*NOTREACHED*/ MR_assert(0);
#line 136 "elds.m"
                          case (MR_Integer) 0:
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
#line 6980 "erl_backend.elds.c"
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
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 1:
#line 7017 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 2:
#line 7023 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 3:
#line 7029 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 4:
#line 7035 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 5:
#line 7041 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 6:
#line 7047 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 7:
#line 7053 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 8:
#line 7059 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 9:
#line 7065 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 10:
#line 7071 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                        }
#line 136 "elds.m"
                        break;
#line 136 "elds.m"
                    }
#line 136 "elds.m"
                  }
#line 136 "elds.m"
                  break;
#line 136 "elds.m"
                case (MR_Integer) 1:
#line 136 "elds.m"
                  {
#line 136 "elds.m"
                    MR_Word erl_backend__elds__V_765_765 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 2)));
#line 136 "elds.m"
                    MR_Word erl_backend__elds__V_766_766 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 1)));

#line 136 "elds.m"
#line 136 "elds.m"
                    switch (MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) {
#line 136 "elds.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 136 "elds.m"
                      case (MR_Integer) 0:
#line 7101 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                        break;
#line 136 "elds.m"
                      case (MR_Integer) 1:
#line 7107 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                        break;
#line 136 "elds.m"
                      case (MR_Integer) 2:
#line 7113 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                        break;
#line 136 "elds.m"
                      case (MR_Integer) 3:
#line 136 "elds.m"
#line 136 "elds.m"
                        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) {
#line 136 "elds.m"
                          default: /*NOTREACHED*/ MR_assert(0);
#line 136 "elds.m"
                          case (MR_Integer) 0:
#line 7126 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 1:
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
#line 7150 "erl_backend.elds.c"
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
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 2:
#line 7187 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 3:
#line 7193 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 4:
#line 7199 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 5:
#line 7205 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 6:
#line 7211 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 7:
#line 7217 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 8:
#line 7223 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 9:
#line 7229 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 10:
#line 7235 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                        }
#line 136 "elds.m"
                        break;
#line 136 "elds.m"
                    }
#line 136 "elds.m"
                  }
#line 136 "elds.m"
                  break;
#line 136 "elds.m"
                case (MR_Integer) 2:
#line 136 "elds.m"
                  {
#line 136 "elds.m"
                    MR_Word erl_backend__elds__V_742_742 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 3)));
#line 136 "elds.m"
                    MR_Word erl_backend__elds__V_743_743 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 2)));
#line 136 "elds.m"
                    MR_Word erl_backend__elds__V_744_744 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 1)));

#line 136 "elds.m"
#line 136 "elds.m"
                    switch (MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) {
#line 136 "elds.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 136 "elds.m"
                      case (MR_Integer) 0:
#line 7267 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                        break;
#line 136 "elds.m"
                      case (MR_Integer) 1:
#line 7273 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                        break;
#line 136 "elds.m"
                      case (MR_Integer) 2:
#line 7279 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                        break;
#line 136 "elds.m"
                      case (MR_Integer) 3:
#line 136 "elds.m"
#line 136 "elds.m"
                        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) {
#line 136 "elds.m"
                          default: /*NOTREACHED*/ MR_assert(0);
#line 136 "elds.m"
                          case (MR_Integer) 0:
#line 7292 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 1:
#line 7298 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 2:
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
#line 7324 "erl_backend.elds.c"
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
#line 7344 "erl_backend.elds.c"
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
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 3:
#line 7383 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 4:
#line 7389 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 5:
#line 7395 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 6:
#line 7401 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 7:
#line 7407 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 8:
#line 7413 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 9:
#line 7419 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 10:
#line 7425 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                        }
#line 136 "elds.m"
                        break;
#line 136 "elds.m"
                    }
#line 136 "elds.m"
                  }
#line 136 "elds.m"
                  break;
#line 136 "elds.m"
                case (MR_Integer) 3:
#line 136 "elds.m"
                  {
#line 136 "elds.m"
                    MR_Word erl_backend__elds__V_746_746 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 2)));
#line 136 "elds.m"
                    MR_Word erl_backend__elds__V_747_747 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 1)));

#line 136 "elds.m"
#line 136 "elds.m"
                    switch (MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) {
#line 136 "elds.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 136 "elds.m"
                      case (MR_Integer) 0:
#line 7455 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                        break;
#line 136 "elds.m"
                      case (MR_Integer) 1:
#line 7461 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                        break;
#line 136 "elds.m"
                      case (MR_Integer) 2:
#line 7467 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                        break;
#line 136 "elds.m"
                      case (MR_Integer) 3:
#line 136 "elds.m"
#line 136 "elds.m"
                        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) {
#line 136 "elds.m"
                          default: /*NOTREACHED*/ MR_assert(0);
#line 136 "elds.m"
                          case (MR_Integer) 0:
#line 7480 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 1:
#line 7486 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 2:
#line 7492 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 3:
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
#line 7512 "erl_backend.elds.c"
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
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 4:
#line 7539 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 5:
#line 7545 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 6:
#line 7551 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 7:
#line 7557 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 8:
#line 7563 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 9:
#line 7569 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 10:
#line 7575 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                        }
#line 136 "elds.m"
                        break;
#line 136 "elds.m"
                    }
#line 136 "elds.m"
                  }
#line 136 "elds.m"
                  break;
#line 136 "elds.m"
                case (MR_Integer) 4:
#line 136 "elds.m"
                  {
#line 136 "elds.m"
                    MR_Word erl_backend__elds__V_756_756 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 1)));

#line 136 "elds.m"
#line 136 "elds.m"
                    switch (MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) {
#line 136 "elds.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 136 "elds.m"
                      case (MR_Integer) 0:
#line 7603 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                        break;
#line 136 "elds.m"
                      case (MR_Integer) 1:
#line 7609 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                        break;
#line 136 "elds.m"
                      case (MR_Integer) 2:
#line 7615 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                        break;
#line 136 "elds.m"
                      case (MR_Integer) 3:
#line 136 "elds.m"
#line 136 "elds.m"
                        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) {
#line 136 "elds.m"
                          default: /*NOTREACHED*/ MR_assert(0);
#line 136 "elds.m"
                          case (MR_Integer) 0:
#line 7628 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 1:
#line 7634 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 2:
#line 7640 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 3:
#line 7646 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 4:
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
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 5:
#line 7670 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 6:
#line 7676 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 7:
#line 7682 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 8:
#line 7688 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 9:
#line 7694 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 10:
#line 7700 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                        }
#line 136 "elds.m"
                        break;
#line 136 "elds.m"
                    }
#line 136 "elds.m"
                  }
#line 136 "elds.m"
                  break;
#line 136 "elds.m"
                case (MR_Integer) 5:
#line 136 "elds.m"
                  {
#line 136 "elds.m"
                    MR_Word erl_backend__elds__V_748_748 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 2)));
#line 136 "elds.m"
                    MR_Word erl_backend__elds__V_749_749 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 1)));

#line 136 "elds.m"
#line 136 "elds.m"
                    switch (MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) {
#line 136 "elds.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 136 "elds.m"
                      case (MR_Integer) 0:
#line 7730 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                        break;
#line 136 "elds.m"
                      case (MR_Integer) 1:
#line 7736 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                        break;
#line 136 "elds.m"
                      case (MR_Integer) 2:
#line 7742 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                        break;
#line 136 "elds.m"
                      case (MR_Integer) 3:
#line 136 "elds.m"
#line 136 "elds.m"
                        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) {
#line 136 "elds.m"
                          default: /*NOTREACHED*/ MR_assert(0);
#line 136 "elds.m"
                          case (MR_Integer) 0:
#line 7755 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 1:
#line 7761 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 2:
#line 7767 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 3:
#line 7773 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 4:
#line 7779 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 5:
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
#line 7799 "erl_backend.elds.c"
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
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 6:
#line 7826 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 7:
#line 7832 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 8:
#line 7838 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 9:
#line 7844 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 10:
#line 7850 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                        }
#line 136 "elds.m"
                        break;
#line 136 "elds.m"
                    }
#line 136 "elds.m"
                  }
#line 136 "elds.m"
                  break;
#line 136 "elds.m"
                case (MR_Integer) 6:
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
#line 136 "elds.m"
                    switch (MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) {
#line 136 "elds.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 136 "elds.m"
                      case (MR_Integer) 0:
#line 7884 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                        break;
#line 136 "elds.m"
                      case (MR_Integer) 1:
#line 7890 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                        break;
#line 136 "elds.m"
                      case (MR_Integer) 2:
#line 7896 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                        break;
#line 136 "elds.m"
                      case (MR_Integer) 3:
#line 136 "elds.m"
#line 136 "elds.m"
                        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) {
#line 136 "elds.m"
                          default: /*NOTREACHED*/ MR_assert(0);
#line 136 "elds.m"
                          case (MR_Integer) 0:
#line 7909 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 1:
#line 7915 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 2:
#line 7921 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 3:
#line 7927 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 4:
#line 7933 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 5:
#line 7939 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 6:
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
#line 7963 "erl_backend.elds.c"
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
#line 7983 "erl_backend.elds.c"
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
#line 8003 "erl_backend.elds.c"
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
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 7:
#line 8034 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 8:
#line 8040 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 9:
#line 8046 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 10:
#line 8052 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                        }
#line 136 "elds.m"
                        break;
#line 136 "elds.m"
                    }
#line 136 "elds.m"
                  }
#line 136 "elds.m"
                  break;
#line 136 "elds.m"
                case (MR_Integer) 7:
#line 136 "elds.m"
                  {
#line 136 "elds.m"
                    MR_Word erl_backend__elds__V_760_760 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 1)));

#line 136 "elds.m"
#line 136 "elds.m"
                    switch (MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) {
#line 136 "elds.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 136 "elds.m"
                      case (MR_Integer) 0:
#line 8080 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                        break;
#line 136 "elds.m"
                      case (MR_Integer) 1:
#line 8086 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                        break;
#line 136 "elds.m"
                      case (MR_Integer) 2:
#line 8092 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                        break;
#line 136 "elds.m"
                      case (MR_Integer) 3:
#line 136 "elds.m"
#line 136 "elds.m"
                        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) {
#line 136 "elds.m"
                          default: /*NOTREACHED*/ MR_assert(0);
#line 136 "elds.m"
                          case (MR_Integer) 0:
#line 8105 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 1:
#line 8111 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 2:
#line 8117 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 3:
#line 8123 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 4:
#line 8129 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 5:
#line 8135 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 6:
#line 8141 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 7:
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
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 8:
#line 8175 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 9:
#line 8181 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 10:
#line 8187 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                        }
#line 136 "elds.m"
                        break;
#line 136 "elds.m"
                    }
#line 136 "elds.m"
                  }
#line 136 "elds.m"
                  break;
#line 136 "elds.m"
                case (MR_Integer) 8:
#line 136 "elds.m"
                  {
#line 136 "elds.m"
                    MR_Word erl_backend__elds__V_752_752 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 2)));
#line 136 "elds.m"
                    MR_String erl_backend__elds__V_753_753 = ((MR_String) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 1)));

#line 136 "elds.m"
#line 136 "elds.m"
                    switch (MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) {
#line 136 "elds.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 136 "elds.m"
                      case (MR_Integer) 0:
#line 8217 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                        break;
#line 136 "elds.m"
                      case (MR_Integer) 1:
#line 8223 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                        break;
#line 136 "elds.m"
                      case (MR_Integer) 2:
#line 8229 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                        break;
#line 136 "elds.m"
                      case (MR_Integer) 3:
#line 136 "elds.m"
#line 136 "elds.m"
                        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) {
#line 136 "elds.m"
                          default: /*NOTREACHED*/ MR_assert(0);
#line 136 "elds.m"
                          case (MR_Integer) 0:
#line 8242 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 1:
#line 8248 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 2:
#line 8254 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 3:
#line 8260 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 4:
#line 8266 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 5:
#line 8272 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 6:
#line 8278 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 7:
#line 8284 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 8:
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
#line 8304 "erl_backend.elds.c"
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
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 9:
#line 8327 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 10:
#line 8333 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                        }
#line 136 "elds.m"
                        break;
#line 136 "elds.m"
                    }
#line 136 "elds.m"
                  }
#line 136 "elds.m"
                  break;
#line 136 "elds.m"
                case (MR_Integer) 9:
#line 136 "elds.m"
                  {
#line 136 "elds.m"
                    MR_Word erl_backend__elds__V_757_757 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 2)));
#line 136 "elds.m"
                    MR_Word erl_backend__elds__V_758_758 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 1)));

#line 136 "elds.m"
#line 136 "elds.m"
                    switch (MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) {
#line 136 "elds.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 136 "elds.m"
                      case (MR_Integer) 0:
#line 8363 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                        break;
#line 136 "elds.m"
                      case (MR_Integer) 1:
#line 8369 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                        break;
#line 136 "elds.m"
                      case (MR_Integer) 2:
#line 8375 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                        break;
#line 136 "elds.m"
                      case (MR_Integer) 3:
#line 136 "elds.m"
#line 136 "elds.m"
                        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) {
#line 136 "elds.m"
                          default: /*NOTREACHED*/ MR_assert(0);
#line 136 "elds.m"
                          case (MR_Integer) 0:
#line 8388 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 1:
#line 8394 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 2:
#line 8400 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 3:
#line 8406 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 4:
#line 8412 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 5:
#line 8418 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 6:
#line 8424 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 7:
#line 8430 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 8:
#line 8436 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 9:
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
#line 8456 "erl_backend.elds.c"
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
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 10:
#line 8493 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                        }
#line 136 "elds.m"
                        break;
#line 136 "elds.m"
                    }
#line 136 "elds.m"
                  }
#line 136 "elds.m"
                  break;
#line 136 "elds.m"
                case (MR_Integer) 10:
#line 136 "elds.m"
                  {
#line 136 "elds.m"
                    MR_Word erl_backend__elds__V_755_755 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 1)));

#line 136 "elds.m"
#line 136 "elds.m"
                    switch (MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) {
#line 136 "elds.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 136 "elds.m"
                      case (MR_Integer) 0:
#line 8521 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                        break;
#line 136 "elds.m"
                      case (MR_Integer) 1:
#line 8527 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                        break;
#line 136 "elds.m"
                      case (MR_Integer) 2:
#line 8533 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                        break;
#line 136 "elds.m"
                      case (MR_Integer) 3:
#line 136 "elds.m"
#line 136 "elds.m"
                        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) {
#line 136 "elds.m"
                          default: /*NOTREACHED*/ MR_assert(0);
#line 136 "elds.m"
                          case (MR_Integer) 0:
#line 8546 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 1:
#line 8552 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 2:
#line 8558 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 3:
#line 8564 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 4:
#line 8570 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 5:
#line 8576 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 6:
#line 8582 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 7:
#line 8588 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 8:
#line 8594 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 9:
#line 8600 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 10:
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
                            break;
#line 136 "elds.m"
                        }
#line 136 "elds.m"
                        break;
#line 136 "elds.m"
                    }
#line 136 "elds.m"
                  }
#line 136 "elds.m"
                  break;
#line 136 "elds.m"
              }
#line 136 "elds.m"
              break;
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
#line 136 "elds.m"
          switch (MR_tag((MR_Word) erl_backend__elds__HeadVar__1_1)) {
#line 136 "elds.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 136 "elds.m"
            case (MR_Integer) 0:
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
#line 8701 "erl_backend.elds.c"
                    {
#line 8703 "erl_backend.elds.c"
                      return erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_clause_0_0(erl_backend__elds__V_27_27, erl_backend__elds__V_28_28);
                    }
#line 136 "elds.m"
                  }
#line 136 "elds.m"
              }
#line 136 "elds.m"
              break;
#line 136 "elds.m"
            case (MR_Integer) 1:
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
#line 8731 "erl_backend.elds.c"
                    erl_backend__elds__TypeInfo_55_55 = (MR_Word) &erl_backend__elds_scalar_common_1[14];
#line 8733 "erl_backend.elds.c"
                    {
#line 8735 "erl_backend.elds.c"
                      return erl_backend__elds__succeeded = mercury__builtin__unify_2_p_0(erl_backend__elds__TypeInfo_55_55, ((MR_Box) (erl_backend__elds__V_3_3)), ((MR_Box) (erl_backend__elds__V_4_4)));
                    }
#line 136 "elds.m"
                  }
#line 136 "elds.m"
              }
#line 136 "elds.m"
              break;
#line 136 "elds.m"
            case (MR_Integer) 2:
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
#line 8761 "erl_backend.elds.c"
                    {
#line 8763 "erl_backend.elds.c"
                      return erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_term_0_0(erl_backend__elds__V_5_5, erl_backend__elds__V_6_6);
                    }
#line 136 "elds.m"
                  }
#line 136 "elds.m"
              }
#line 136 "elds.m"
              break;
#line 136 "elds.m"
            case (MR_Integer) 3:
#line 136 "elds.m"
#line 136 "elds.m"
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__1_1, (MR_Integer) 0)))) {
#line 136 "elds.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 136 "elds.m"
                case (MR_Integer) 0:
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
#line 8802 "erl_backend.elds.c"
                        {
#line 8804 "erl_backend.elds.c"
                          erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_expr_0_0(erl_backend__elds__V_7_7, erl_backend__elds__V_9_9);
                        }
#line 136 "elds.m"
                        if (erl_backend__elds__succeeded)
#line 8809 "erl_backend.elds.c"
                          {
#line 8811 "erl_backend.elds.c"
                            /* direct tailcall eliminated */
#line 8813 "erl_backend.elds.c"
                            {
#line 8815 "erl_backend.elds.c"
                              MR_Word erl_backend__elds__HeadVar__1__tmp_copy_1 = erl_backend__elds__V_8_8;
#line 8817 "erl_backend.elds.c"
                              MR_Word erl_backend__elds__HeadVar__2__tmp_copy_2 = erl_backend__elds__V_10_10;

#line 8820 "erl_backend.elds.c"
                              erl_backend__elds__HeadVar__2_2 = erl_backend__elds__HeadVar__2__tmp_copy_2;
#line 8822 "erl_backend.elds.c"
                              erl_backend__elds__HeadVar__1_1 = erl_backend__elds__HeadVar__1__tmp_copy_1;
#line 8824 "erl_backend.elds.c"
                            }
#line 8826 "erl_backend.elds.c"
                            continue;
#line 8828 "erl_backend.elds.c"
                          }
#line 136 "elds.m"
                      }
#line 136 "elds.m"
                  }
#line 136 "elds.m"
                  break;
#line 136 "elds.m"
                case (MR_Integer) 1:
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
#line 8859 "erl_backend.elds.c"
                        erl_backend__elds__succeeded = (erl_backend__elds__V_11_11 == erl_backend__elds__V_13_13);
#line 136 "elds.m"
                        if (erl_backend__elds__succeeded)
#line 8863 "erl_backend.elds.c"
                          {
#line 8865 "erl_backend.elds.c"
                            /* direct tailcall eliminated */
#line 8867 "erl_backend.elds.c"
                            {
#line 8869 "erl_backend.elds.c"
                              MR_Word erl_backend__elds__HeadVar__1__tmp_copy_1 = erl_backend__elds__V_12_12;
#line 8871 "erl_backend.elds.c"
                              MR_Word erl_backend__elds__HeadVar__2__tmp_copy_2 = erl_backend__elds__V_14_14;

#line 8874 "erl_backend.elds.c"
                              erl_backend__elds__HeadVar__2_2 = erl_backend__elds__HeadVar__2__tmp_copy_2;
#line 8876 "erl_backend.elds.c"
                              erl_backend__elds__HeadVar__1_1 = erl_backend__elds__HeadVar__1__tmp_copy_1;
#line 8878 "erl_backend.elds.c"
                            }
#line 8880 "erl_backend.elds.c"
                            continue;
#line 8882 "erl_backend.elds.c"
                          }
#line 136 "elds.m"
                      }
#line 136 "elds.m"
                  }
#line 136 "elds.m"
                  break;
#line 136 "elds.m"
                case (MR_Integer) 2:
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
#line 8919 "erl_backend.elds.c"
                        erl_backend__elds__succeeded = (erl_backend__elds__V_15_15 == erl_backend__elds__V_18_18);
#line 136 "elds.m"
                        if (erl_backend__elds__succeeded)
#line 136 "elds.m"
                          {
#line 8925 "erl_backend.elds.c"
                            {
#line 8927 "erl_backend.elds.c"
                              erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_expr_0_0(erl_backend__elds__V_16_16, erl_backend__elds__V_19_19);
                            }
#line 136 "elds.m"
                            if (erl_backend__elds__succeeded)
#line 8932 "erl_backend.elds.c"
                              {
#line 8934 "erl_backend.elds.c"
                                /* direct tailcall eliminated */
#line 8936 "erl_backend.elds.c"
                                {
#line 8938 "erl_backend.elds.c"
                                  MR_Word erl_backend__elds__HeadVar__1__tmp_copy_1 = erl_backend__elds__V_17_17;
#line 8940 "erl_backend.elds.c"
                                  MR_Word erl_backend__elds__HeadVar__2__tmp_copy_2 = erl_backend__elds__V_20_20;

#line 8943 "erl_backend.elds.c"
                                  erl_backend__elds__HeadVar__2_2 = erl_backend__elds__HeadVar__2__tmp_copy_2;
#line 8945 "erl_backend.elds.c"
                                  erl_backend__elds__HeadVar__1_1 = erl_backend__elds__HeadVar__1__tmp_copy_1;
#line 8947 "erl_backend.elds.c"
                                }
#line 8949 "erl_backend.elds.c"
                                continue;
#line 8951 "erl_backend.elds.c"
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
                case (MR_Integer) 3:
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
#line 8986 "erl_backend.elds.c"
                        {
#line 8988 "erl_backend.elds.c"
                          erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_call_target_0_0(erl_backend__elds__V_21_21, erl_backend__elds__V_23_23);
                        }
#line 136 "elds.m"
                        if (erl_backend__elds__succeeded)
#line 136 "elds.m"
                          {
#line 8995 "erl_backend.elds.c"
                            erl_backend__elds__TypeInfo_56_56 = (MR_Word) &erl_backend__elds_scalar_common_1[14];
#line 8997 "erl_backend.elds.c"
                            {
#line 8999 "erl_backend.elds.c"
                              return erl_backend__elds__succeeded = mercury__builtin__unify_2_p_0(erl_backend__elds__TypeInfo_56_56, ((MR_Box) (erl_backend__elds__V_22_22)), ((MR_Box) (erl_backend__elds__V_24_24)));
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
                case (MR_Integer) 4:
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
#line 9027 "erl_backend.elds.c"
                        {
#line 9029 "erl_backend.elds.c"
                          return erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_rtti_id_0_0(erl_backend__elds__V_25_25, erl_backend__elds__V_26_26);
                        }
#line 136 "elds.m"
                      }
#line 136 "elds.m"
                  }
#line 136 "elds.m"
                  break;
#line 136 "elds.m"
                case (MR_Integer) 5:
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
#line 9063 "erl_backend.elds.c"
                        {
#line 9065 "erl_backend.elds.c"
                          erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_expr_0_0(erl_backend__elds__V_29_29, erl_backend__elds__V_31_31);
                        }
#line 136 "elds.m"
                        if (erl_backend__elds__succeeded)
#line 136 "elds.m"
                          {
#line 9072 "erl_backend.elds.c"
                            erl_backend__elds__TypeInfo_57_57 = (MR_Word) &erl_backend__elds_scalar_common_1[11];
#line 9074 "erl_backend.elds.c"
                            {
#line 9076 "erl_backend.elds.c"
                              return erl_backend__elds__succeeded = mercury__builtin__unify_2_p_0(erl_backend__elds__TypeInfo_57_57, ((MR_Box) (erl_backend__elds__V_30_30)), ((MR_Box) (erl_backend__elds__V_32_32)));
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
                case (MR_Integer) 6:
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
#line 9128 "erl_backend.elds.c"
                        {
#line 9130 "erl_backend.elds.c"
                          erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_expr_0_0(erl_backend__elds__V_33_33, erl_backend__elds__V_37_37);
                        }
#line 136 "elds.m"
                        if (erl_backend__elds__succeeded)
#line 136 "elds.m"
                          {
#line 9137 "erl_backend.elds.c"
                            erl_backend__elds__TypeInfo_60_60 = (MR_Word) &erl_backend__elds_scalar_common_1[11];
#line 9139 "erl_backend.elds.c"
                            {
#line 9141 "erl_backend.elds.c"
                              erl_backend__elds__succeeded = mercury__builtin__unify_2_p_0(erl_backend__elds__TypeInfo_60_60, ((MR_Box) (erl_backend__elds__V_34_34)), ((MR_Box) (erl_backend__elds__V_38_38)));
                            }
#line 136 "elds.m"
                            if (erl_backend__elds__succeeded)
#line 136 "elds.m"
                              {
#line 9148 "erl_backend.elds.c"
                                erl_backend__elds__TypeInfo_61_61 = (MR_Word) &erl_backend__elds_scalar_common_1[12];
#line 9150 "erl_backend.elds.c"
                                {
#line 9152 "erl_backend.elds.c"
                                  erl_backend__elds__succeeded = mercury__builtin__unify_2_p_0(erl_backend__elds__TypeInfo_61_61, ((MR_Box) (erl_backend__elds__V_35_35)), ((MR_Box) (erl_backend__elds__V_39_39)));
                                }
#line 136 "elds.m"
                                if (erl_backend__elds__succeeded)
#line 136 "elds.m"
                                  {
#line 9159 "erl_backend.elds.c"
                                    erl_backend__elds__TypeInfo_62_62 = (MR_Word) &erl_backend__elds_scalar_common_1[13];
#line 9161 "erl_backend.elds.c"
                                    {
#line 9163 "erl_backend.elds.c"
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
                  break;
#line 136 "elds.m"
                case (MR_Integer) 7:
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
#line 9195 "erl_backend.elds.c"
                        /* direct tailcall eliminated */
#line 9197 "erl_backend.elds.c"
                        {
#line 9199 "erl_backend.elds.c"
                          MR_Word erl_backend__elds__HeadVar__1__tmp_copy_1 = erl_backend__elds__V_41_41;
#line 9201 "erl_backend.elds.c"
                          MR_Word erl_backend__elds__HeadVar__2__tmp_copy_2 = erl_backend__elds__V_42_42;

#line 9204 "erl_backend.elds.c"
                          erl_backend__elds__HeadVar__2_2 = erl_backend__elds__HeadVar__2__tmp_copy_2;
#line 9206 "erl_backend.elds.c"
                          erl_backend__elds__HeadVar__1_1 = erl_backend__elds__HeadVar__1__tmp_copy_1;
#line 9208 "erl_backend.elds.c"
                        }
#line 9210 "erl_backend.elds.c"
                        continue;
#line 136 "elds.m"
                      }
#line 136 "elds.m"
                  }
#line 136 "elds.m"
                  break;
#line 136 "elds.m"
                case (MR_Integer) 8:
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
#line 9241 "erl_backend.elds.c"
                        erl_backend__elds__succeeded = (strcmp(erl_backend__elds__V_43_43, erl_backend__elds__V_45_45) == 0);
#line 136 "elds.m"
                        if (erl_backend__elds__succeeded)
#line 9245 "erl_backend.elds.c"
                          {
#line 9247 "erl_backend.elds.c"
                            return erl_backend__elds__succeeded = mercury__term____Unify____context_0_0(erl_backend__elds__V_44_44, erl_backend__elds__V_46_46);
                          }
#line 136 "elds.m"
                      }
#line 136 "elds.m"
                  }
#line 136 "elds.m"
                  break;
#line 136 "elds.m"
                case (MR_Integer) 9:
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
#line 9279 "erl_backend.elds.c"
                        {
#line 9281 "erl_backend.elds.c"
                          erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_expr_0_0(erl_backend__elds__V_47_47, erl_backend__elds__V_49_49);
                        }
#line 136 "elds.m"
                        if (erl_backend__elds__succeeded)
#line 9286 "erl_backend.elds.c"
                          {
#line 9288 "erl_backend.elds.c"
                            /* direct tailcall eliminated */
#line 9290 "erl_backend.elds.c"
                            {
#line 9292 "erl_backend.elds.c"
                              MR_Word erl_backend__elds__HeadVar__1__tmp_copy_1 = erl_backend__elds__V_48_48;
#line 9294 "erl_backend.elds.c"
                              MR_Word erl_backend__elds__HeadVar__2__tmp_copy_2 = erl_backend__elds__V_50_50;

#line 9297 "erl_backend.elds.c"
                              erl_backend__elds__HeadVar__2_2 = erl_backend__elds__HeadVar__2__tmp_copy_2;
#line 9299 "erl_backend.elds.c"
                              erl_backend__elds__HeadVar__1_1 = erl_backend__elds__HeadVar__1__tmp_copy_1;
#line 9301 "erl_backend.elds.c"
                            }
#line 9303 "erl_backend.elds.c"
                            continue;
#line 9305 "erl_backend.elds.c"
                          }
#line 136 "elds.m"
                      }
#line 136 "elds.m"
                  }
#line 136 "elds.m"
                  break;
#line 136 "elds.m"
                case (MR_Integer) 10:
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
#line 9332 "erl_backend.elds.c"
                        erl_backend__elds__TypeInfo_59_59 = (MR_Word) &erl_backend__elds_scalar_common_1[11];
#line 9334 "erl_backend.elds.c"
                        {
#line 9336 "erl_backend.elds.c"
                          return erl_backend__elds__succeeded = mercury__builtin__unify_2_p_0(erl_backend__elds__TypeInfo_59_59, ((MR_Box) (erl_backend__elds__V_51_51)), ((MR_Box) (erl_backend__elds__V_52_52)));
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
              break;
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
#line 9386 "erl_backend.elds.c"
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
#line 9416 "erl_backend.elds.c"
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
#line 9436 "erl_backend.elds.c"
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
#line 9456 "erl_backend.elds.c"
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

#line 9537 "erl_backend.elds.c"
        {
#line 9539 "erl_backend.elds.c"
          erl_backend__elds__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(erl_backend__elds__V_3_3, erl_backend__elds__V_7_7);
        }
#line 73 "elds.m"
        if (erl_backend__elds__succeeded)
#line 73 "elds.m"
          {
#line 9546 "erl_backend.elds.c"
            erl_backend__elds__TypeInfo_14_14 = (MR_Word) &erl_backend__elds_scalar_common_1[9];
#line 9548 "erl_backend.elds.c"
            {
#line 9550 "erl_backend.elds.c"
              erl_backend__elds__succeeded = mercury__builtin__unify_2_p_0(erl_backend__elds__TypeInfo_14_14, ((MR_Box) (erl_backend__elds__V_4_4)), ((MR_Box) (erl_backend__elds__V_8_8)));
            }
#line 73 "elds.m"
            if (erl_backend__elds__succeeded)
#line 73 "elds.m"
              {
#line 9557 "erl_backend.elds.c"
                {
#line 9559 "erl_backend.elds.c"
                  erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_body_0_0(erl_backend__elds__V_5_5, erl_backend__elds__V_9_9);
                }
#line 73 "elds.m"
                if (erl_backend__elds__succeeded)
#line 73 "elds.m"
                  {
#line 9566 "erl_backend.elds.c"
                    erl_backend__elds__TypeInfo_15_15 = (MR_Word) &erl_backend__elds_scalar_common_1[10];
#line 9568 "erl_backend.elds.c"
                    {
#line 9570 "erl_backend.elds.c"
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
#line 9612 "erl_backend.elds.c"
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
#line 9634 "erl_backend.elds.c"
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

#line 9695 "erl_backend.elds.c"
        {
#line 9697 "erl_backend.elds.c"
          erl_backend__elds__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &erl_backend__elds_scalar_common_1[8], ((MR_Box) (erl_backend__elds__V_3_3)), ((MR_Box) (erl_backend__elds__V_5_5)));
        }
#line 128 "elds.m"
        if (erl_backend__elds__succeeded)
#line 9702 "erl_backend.elds.c"
          {
#line 9704 "erl_backend.elds.c"
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
#line 9740 "erl_backend.elds.c"
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
#line 9766 "erl_backend.elds.c"
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
#line 9786 "erl_backend.elds.c"
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

#line 9853 "erl_backend.elds.c"
        {
#line 9855 "erl_backend.elds.c"
          erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_term_0_0(erl_backend__elds__V_3_3, erl_backend__elds__V_6_6);
        }
#line 258 "elds.m"
        if (erl_backend__elds__succeeded)
#line 258 "elds.m"
          {
#line 9862 "erl_backend.elds.c"
            {
#line 9864 "erl_backend.elds.c"
              erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_term_0_0(erl_backend__elds__V_4_4, erl_backend__elds__V_7_7);
            }
#line 258 "elds.m"
            if (erl_backend__elds__succeeded)
#line 9869 "erl_backend.elds.c"
              {
#line 9871 "erl_backend.elds.c"
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
#line 9909 "erl_backend.elds.c"
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
#line 9931 "erl_backend.elds.c"
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

#line 9992 "erl_backend.elds.c"
        {
#line 9994 "erl_backend.elds.c"
          erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_term_0_0(erl_backend__elds__V_3_3, erl_backend__elds__V_5_5);
        }
#line 255 "elds.m"
        if (erl_backend__elds__succeeded)
#line 9999 "erl_backend.elds.c"
          {
#line 10001 "erl_backend.elds.c"
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
#line 10037 "erl_backend.elds.c"
      *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 0;
#line 250 "elds.m"
    else
#line 250 "elds.m"
#line 250 "elds.m"
      switch (MR_tag((MR_Word) erl_backend__elds__HeadVar__2_2)) {
#line 250 "elds.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 250 "elds.m"
        case (MR_Integer) 0:
#line 250 "elds.m"
          {
#line 250 "elds.m"
            MR_Word erl_backend__elds__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)));

#line 250 "elds.m"
#line 250 "elds.m"
            switch (MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) {
#line 250 "elds.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 250 "elds.m"
              case (MR_Integer) 0:
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
                break;
#line 250 "elds.m"
              case (MR_Integer) 1:
#line 10078 "erl_backend.elds.c"
                *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 250 "elds.m"
                break;
#line 250 "elds.m"
              case (MR_Integer) 2:
#line 10084 "erl_backend.elds.c"
                *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 250 "elds.m"
                break;
#line 250 "elds.m"
            }
#line 250 "elds.m"
          }
#line 250 "elds.m"
          break;
#line 250 "elds.m"
        case (MR_Integer) 1:
#line 250 "elds.m"
          {
#line 250 "elds.m"
            MR_Word erl_backend__elds__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)));

#line 250 "elds.m"
#line 250 "elds.m"
            switch (MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) {
#line 250 "elds.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 250 "elds.m"
              case (MR_Integer) 0:
#line 10108 "erl_backend.elds.c"
                *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 250 "elds.m"
                break;
#line 250 "elds.m"
              case (MR_Integer) 1:
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
                break;
#line 250 "elds.m"
              case (MR_Integer) 2:
#line 10132 "erl_backend.elds.c"
                *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 250 "elds.m"
                break;
#line 250 "elds.m"
            }
#line 250 "elds.m"
          }
#line 250 "elds.m"
          break;
#line 250 "elds.m"
        case (MR_Integer) 2:
#line 250 "elds.m"
          {
#line 250 "elds.m"
            MR_String erl_backend__elds__V_27_27 = ((MR_String) (MR_hl_field(MR_mktag(2), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)));

#line 250 "elds.m"
#line 250 "elds.m"
            switch (MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) {
#line 250 "elds.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 250 "elds.m"
              case (MR_Integer) 0:
#line 10156 "erl_backend.elds.c"
                *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 250 "elds.m"
                break;
#line 250 "elds.m"
              case (MR_Integer) 1:
#line 10162 "erl_backend.elds.c"
                *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 250 "elds.m"
                break;
#line 250 "elds.m"
              case (MR_Integer) 2:
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
                break;
#line 250 "elds.m"
            }
#line 250 "elds.m"
          }
#line 250 "elds.m"
          break;
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
#line 250 "elds.m"
      switch (MR_tag((MR_Word) erl_backend__elds__HeadVar__1_1)) {
#line 250 "elds.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 250 "elds.m"
        case (MR_Integer) 0:
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
#line 10245 "erl_backend.elds.c"
                {
#line 10247 "erl_backend.elds.c"
                  return erl_backend__elds__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(erl_backend__elds__V_3_3, erl_backend__elds__V_4_4);
                }
#line 250 "elds.m"
              }
#line 250 "elds.m"
          }
#line 250 "elds.m"
          break;
#line 250 "elds.m"
        case (MR_Integer) 1:
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
#line 10273 "erl_backend.elds.c"
                {
#line 10275 "erl_backend.elds.c"
                  return erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_expr_0_0(erl_backend__elds__V_5_5, erl_backend__elds__V_6_6);
                }
#line 250 "elds.m"
              }
#line 250 "elds.m"
          }
#line 250 "elds.m"
          break;
#line 250 "elds.m"
        case (MR_Integer) 2:
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
#line 10301 "erl_backend.elds.c"
                erl_backend__elds__succeeded = (strcmp(erl_backend__elds__V_7_7, erl_backend__elds__V_8_8) == 0);
#line 250 "elds.m"
              }
#line 250 "elds.m"
          }
#line 250 "elds.m"
          break;
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
#line 10342 "erl_backend.elds.c"
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
#line 10371 "erl_backend.elds.c"
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
#line 10384 "erl_backend.elds.c"
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
#line 10452 "erl_backend.elds.c"
            {
#line 10454 "erl_backend.elds.c"
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
#line 10478 "erl_backend.elds.c"
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
#line 10532 "erl_backend.elds.c"
  {
#line 10534 "erl_backend.elds.c"
    MR_bool erl_backend__elds__succeeded = (erl_backend__elds__HeadVar__2_1 == erl_backend__elds__HeadVar__2_2);

#line 10537 "erl_backend.elds.c"
    return erl_backend__elds__succeeded;
#line 10539 "erl_backend.elds.c"
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
#line 10568 "erl_backend.elds.c"
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
          mdbcomp__sym_name____Compare____sym_name_0_0(&erl_backend__elds__V_22_22, erl_backend__elds__V_4_4, erl_backend__elds__V_13_13);
        }
#line 10618 "erl_backend.elds.c"
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
#line 10638 "erl_backend.elds.c"
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
#line 10658 "erl_backend.elds.c"
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
#line 10678 "erl_backend.elds.c"
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
#line 10698 "erl_backend.elds.c"
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
#line 10718 "erl_backend.elds.c"
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
#line 10738 "erl_backend.elds.c"
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
#line 10758 "erl_backend.elds.c"
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

#line 10881 "erl_backend.elds.c"
        {
#line 10883 "erl_backend.elds.c"
          erl_backend__elds__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(erl_backend__elds__V_3_3, erl_backend__elds__V_12_12);
        }
#line 43 "elds.m"
        if (erl_backend__elds__succeeded)
#line 43 "elds.m"
          {
#line 10890 "erl_backend.elds.c"
            erl_backend__elds__TypeInfo_24_24 = (MR_Word) &erl_backend__elds_scalar_common_1[1];
#line 10892 "erl_backend.elds.c"
            {
#line 10894 "erl_backend.elds.c"
              erl_backend__elds__succeeded = mercury__builtin__unify_2_p_0(erl_backend__elds__TypeInfo_24_24, ((MR_Box) (erl_backend__elds__V_4_4)), ((MR_Box) (erl_backend__elds__V_13_13)));
            }
#line 43 "elds.m"
            if (erl_backend__elds__succeeded)
#line 43 "elds.m"
              {
#line 10901 "erl_backend.elds.c"
                erl_backend__elds__TypeInfo_25_25 = (MR_Word) &erl_backend__elds_scalar_common_1[2];
#line 10903 "erl_backend.elds.c"
                {
#line 10905 "erl_backend.elds.c"
                  erl_backend__elds__succeeded = mercury__builtin__unify_2_p_0(erl_backend__elds__TypeInfo_25_25, ((MR_Box) (erl_backend__elds__V_5_5)), ((MR_Box) (erl_backend__elds__V_14_14)));
                }
#line 43 "elds.m"
                if (erl_backend__elds__succeeded)
#line 43 "elds.m"
                  {
#line 10912 "erl_backend.elds.c"
                    erl_backend__elds__TypeInfo_26_26 = (MR_Word) &erl_backend__elds_scalar_common_1[3];
#line 10914 "erl_backend.elds.c"
                    {
#line 10916 "erl_backend.elds.c"
                      erl_backend__elds__succeeded = mercury__builtin__unify_2_p_0(erl_backend__elds__TypeInfo_26_26, ((MR_Box) (erl_backend__elds__V_6_6)), ((MR_Box) (erl_backend__elds__V_15_15)));
                    }
#line 43 "elds.m"
                    if (erl_backend__elds__succeeded)
#line 43 "elds.m"
                      {
#line 10923 "erl_backend.elds.c"
                        erl_backend__elds__TypeInfo_27_27 = (MR_Word) &erl_backend__elds_scalar_common_1[4];
#line 10925 "erl_backend.elds.c"
                        {
#line 10927 "erl_backend.elds.c"
                          erl_backend__elds__succeeded = mercury__builtin__unify_2_p_0(erl_backend__elds__TypeInfo_27_27, ((MR_Box) (erl_backend__elds__V_7_7)), ((MR_Box) (erl_backend__elds__V_16_16)));
                        }
#line 43 "elds.m"
                        if (erl_backend__elds__succeeded)
#line 43 "elds.m"
                          {
#line 10934 "erl_backend.elds.c"
                            erl_backend__elds__TypeInfo_28_28 = (MR_Word) &erl_backend__elds_scalar_common_1[5];
#line 10936 "erl_backend.elds.c"
                            {
#line 10938 "erl_backend.elds.c"
                              erl_backend__elds__succeeded = mercury__builtin__unify_2_p_0(erl_backend__elds__TypeInfo_28_28, ((MR_Box) (erl_backend__elds__V_8_8)), ((MR_Box) (erl_backend__elds__V_17_17)));
                            }
#line 43 "elds.m"
                            if (erl_backend__elds__succeeded)
#line 43 "elds.m"
                              {
#line 10945 "erl_backend.elds.c"
                                erl_backend__elds__TypeInfo_29_29 = (MR_Word) &erl_backend__elds_scalar_common_1[6];
#line 10947 "erl_backend.elds.c"
                                {
#line 10949 "erl_backend.elds.c"
                                  erl_backend__elds__succeeded = mercury__builtin__unify_2_p_0(erl_backend__elds__TypeInfo_29_29, ((MR_Box) (erl_backend__elds__V_9_9)), ((MR_Box) (erl_backend__elds__V_18_18)));
                                }
#line 43 "elds.m"
                                if (erl_backend__elds__succeeded)
#line 43 "elds.m"
                                  {
#line 10956 "erl_backend.elds.c"
                                    erl_backend__elds__TypeInfo_30_30 = (MR_Word) &erl_backend__elds_scalar_common_1[7];
#line 10958 "erl_backend.elds.c"
                                    {
#line 10960 "erl_backend.elds.c"
                                      erl_backend__elds__succeeded = mercury__builtin__unify_2_p_0(erl_backend__elds__TypeInfo_30_30, ((MR_Box) (erl_backend__elds__V_10_10)), ((MR_Box) (erl_backend__elds__V_19_19)));
                                    }
#line 43 "elds.m"
                                    if (erl_backend__elds__succeeded)
#line 43 "elds.m"
                                      {
#line 10967 "erl_backend.elds.c"
                                        erl_backend__elds__TypeInfo_31_31 = (MR_Word) &erl_backend__elds_scalar_common_1[7];
#line 10969 "erl_backend.elds.c"
                                        {
#line 10971 "erl_backend.elds.c"
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
#line 467 "elds.m"
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
#line 469 "elds.m"
        {
#line 469 "elds.m"
          erl_backend__elds__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 469 "elds.m"
          MR_hl_field(MR_mktag(2), erl_backend__elds__HeadVar__2_2, 0) = ((MR_Box) (erl_backend__elds__V_6_6));
#line 469 "elds.m"
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

#line 420 "elds.m"
    {
#line 420 "elds.m"
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

#line 418 "elds.m"
    {
#line 418 "elds.m"
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
#line 405 "elds.m"
    {
#line 405 "elds.m"
      erl_backend__elds__V_7_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 405 "elds.m"
      MR_hl_field(MR_mktag(1), erl_backend__elds__V_7_7, 0) = ((MR_Box) (erl_backend__elds__V_8_8));
#line 405 "elds.m"
      MR_hl_field(MR_mktag(1), erl_backend__elds__V_7_7, 1) = ((MR_Box) (erl_backend__elds__V_10_10));
#line 405 "elds.m"
    }
#line 401 "elds.m"
    {
#line 401 "elds.m"
      erl_backend__elds__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 401 "elds.m"
      MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 401 "elds.m"
      MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &erl_backend__elds_scalar_common_2[1])));
#line 401 "elds.m"
      MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, 2) = ((MR_Box) (erl_backend__elds__V_7_7));
#line 401 "elds.m"
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
#line 401 "elds.m"
    {
#line 401 "elds.m"
      erl_backend__elds__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 401 "elds.m"
      MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 401 "elds.m"
      MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, 1) = ((MR_Box) (erl_backend__elds__V_6_6));
#line 401 "elds.m"
      MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, 2) = ((MR_Box) (erl_backend__elds__Exprs_5));
#line 401 "elds.m"
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
