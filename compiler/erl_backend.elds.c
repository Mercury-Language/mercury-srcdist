/*
** Automatically generated from `elds.m'
** by the Mercury compiler,
** version rotd-2015-08-10
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
#include "hlds.vartypes.mih"
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
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.status.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 140 "erl_backend.elds.c"
static const MR_FA_PseudoTypeInfo_Struct1 erl_backend__elds__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 143 "erl_backend.elds.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__elds__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0;

#line 146 "erl_backend.elds.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__elds__list__ti_list_1parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0;

#line 149 "erl_backend.elds.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__elds__list__ti_list_1parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0;

#line 152 "erl_backend.elds.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__elds__list__ti_list_1erl_backend__elds__type_ctor_info_elds_defn_0;

#line 155 "erl_backend.elds.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__elds__list__ti_list_1erl_backend__elds__type_ctor_info_elds_foreign_export_defn_0;

#line 158 "erl_backend.elds.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__elds__list__ti_list_1erl_backend__elds__type_ctor_info_elds_rtti_defn_0;

#line 161 "erl_backend.elds.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__elds__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

#line 164 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_0_0[9];

#line 167 "erl_backend.elds.c"
static const MR_ConstString erl_backend__elds__erl_backend__elds__field_names_elds_0_0[9];

#line 170 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_0_0;

#line 173 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_0_0[1];

#line 176 "erl_backend.elds.c"
static const MR_DuPtagLayout erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_0[1];

#line 179 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_name_ordered_elds_0[1];

#line 182 "erl_backend.elds.c"
static const MR_Integer erl_backend__elds__erl_backend__elds__functor_number_map_elds_0[1];

#line 185 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_0;

#line 188 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_1;

#line 191 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_2;

#line 194 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_3;

#line 197 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_4;

#line 200 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_5;

#line 203 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_6;

#line 206 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_7;

#line 209 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_8;

#line 212 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_9;

#line 215 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_10;

#line 218 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_11;

#line 221 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_12;

#line 224 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_13;

#line 227 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_14;

#line 230 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_15;

#line 233 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_16;

#line 236 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_17;

#line 239 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_18;

#line 242 "erl_backend.elds.c"
static const MR_EnumFunctorDescPtr erl_backend__elds__erl_backend__elds__enum_value_ordered_elds_binop_0[19];

#line 245 "erl_backend.elds.c"
static const MR_EnumFunctorDescPtr erl_backend__elds__erl_backend__elds__enum_name_ordered_elds_binop_0[19];

#line 248 "erl_backend.elds.c"
static const MR_Integer erl_backend__elds__erl_backend__elds__functor_number_map_elds_binop_0[19];

#line 251 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_body_0_0[1];

#line 254 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_body_0_0;

#line 257 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_body_0_1[1];

#line 260 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_body_0_1;

#line 263 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_body_0_0[1];

#line 266 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_body_0_1[1];

#line 269 "erl_backend.elds.c"
static const MR_DuPtagLayout erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_body_0[2];

#line 272 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_name_ordered_elds_body_0[2];

#line 275 "erl_backend.elds.c"
static const MR_Integer erl_backend__elds__erl_backend__elds__functor_number_map_elds_body_0[2];

#line 278 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_call_target_0_0[1];

#line 281 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_call_target_0_0;

#line 284 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_call_target_0_1[1];

#line 287 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_call_target_0_1;

#line 290 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_call_target_0_2[1];

#line 293 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_call_target_0_2;

#line 296 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_call_target_0_0[1];

#line 299 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_call_target_0_1[1];

#line 302 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_call_target_0_2[1];

#line 305 "erl_backend.elds.c"
static const MR_DuPtagLayout erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_call_target_0[3];

#line 308 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_name_ordered_elds_call_target_0[3];

#line 311 "erl_backend.elds.c"
static const MR_Integer erl_backend__elds__erl_backend__elds__functor_number_map_elds_call_target_0[3];

#line 314 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_case_0_0[2];

#line 317 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_case_0_0;

#line 320 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_case_0_0[1];

#line 323 "erl_backend.elds.c"
static const MR_DuPtagLayout erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_case_0[1];

#line 326 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_name_ordered_elds_case_0[1];

#line 329 "erl_backend.elds.c"
static const MR_Integer erl_backend__elds__erl_backend__elds__functor_number_map_elds_case_0[1];

#line 332 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_catch_0_0[3];

#line 335 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_catch_0_0;

#line 338 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_catch_0_0[1];

#line 341 "erl_backend.elds.c"
static const MR_DuPtagLayout erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_catch_0[1];

#line 344 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_name_ordered_elds_catch_0[1];

#line 347 "erl_backend.elds.c"
static const MR_Integer erl_backend__elds__erl_backend__elds__functor_number_map_elds_catch_0[1];

#line 350 "erl_backend.elds.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__elds__list__ti_list_1erl_backend__elds__type_ctor_info_elds_term_0;

#line 353 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_clause_0_0[2];

#line 356 "erl_backend.elds.c"
static const MR_ConstString erl_backend__elds__erl_backend__elds__field_names_elds_clause_0_0[2];

#line 359 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_clause_0_0;

#line 362 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_clause_0_0[1];

#line 365 "erl_backend.elds.c"
static const MR_DuPtagLayout erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_clause_0[1];

#line 368 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_name_ordered_elds_clause_0[1];

#line 371 "erl_backend.elds.c"
static const MR_Integer erl_backend__elds__erl_backend__elds__functor_number_map_elds_clause_0[1];

#line 374 "erl_backend.elds.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__elds__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 377 "erl_backend.elds.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__elds__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0;

#line 380 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_defn_0_0[4];

#line 383 "erl_backend.elds.c"
static const MR_ConstString erl_backend__elds__erl_backend__elds__field_names_elds_defn_0_0[4];

#line 386 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_defn_0_0;

#line 389 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_defn_0_0[1];

#line 392 "erl_backend.elds.c"
static const MR_DuPtagLayout erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_defn_0[1];

#line 395 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_name_ordered_elds_defn_0[1];

#line 398 "erl_backend.elds.c"
static const MR_Integer erl_backend__elds__erl_backend__elds__functor_number_map_elds_defn_0[1];

#line 401 "erl_backend.elds.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__elds__list__ti_list_1erl_backend__elds__type_ctor_info_elds_expr_0;

#line 404 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_0[1];

#line 407 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_0;

#line 410 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_1[1];

#line 413 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_1;

#line 416 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_2[2];

#line 419 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_2;

#line 422 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_3[2];

#line 425 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_3;

#line 428 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_4[3];

#line 431 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_4;

#line 434 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_5[2];

#line 437 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_5;

#line 440 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_6[1];

#line 443 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_6;

#line 446 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_7[1];

#line 449 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_7;

#line 452 "erl_backend.elds.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__elds__list__ti_list_1erl_backend__elds__type_ctor_info_elds_case_0;

#line 455 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_8[2];

#line 458 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_8;

#line 461 "erl_backend.elds.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__elds__maybe__ti_maybe_1erl_backend__elds__type_ctor_info_elds_catch_0;

#line 464 "erl_backend.elds.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__elds__maybe__ti_maybe_1erl_backend__elds__type_ctor_info_elds_expr_0;

#line 467 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_9[4];

#line 470 "erl_backend.elds.c"
static const MR_ConstString erl_backend__elds__erl_backend__elds__field_names_elds_expr_0_9[4];

#line 473 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_9;

#line 476 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_10[1];

#line 479 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_10;

#line 482 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_11[2];

#line 485 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_11;

#line 488 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_12[2];

#line 491 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_12;

#line 494 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_13[1];

#line 497 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_13;

#line 500 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_expr_0_0[1];

#line 503 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_expr_0_1[1];

#line 506 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_expr_0_2[1];

#line 509 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_expr_0_3[11];

#line 512 "erl_backend.elds.c"
static const MR_DuPtagLayout erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_expr_0[4];

#line 515 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_name_ordered_elds_expr_0[14];

#line 518 "erl_backend.elds.c"
static const MR_Integer erl_backend__elds__erl_backend__elds__functor_number_map_elds_expr_0[14];

#line 521 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_foreign_export_defn_0_0[3];

#line 524 "erl_backend.elds.c"
static const MR_ConstString erl_backend__elds__erl_backend__elds__field_names_elds_foreign_export_defn_0_0[3];

#line 527 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_foreign_export_defn_0_0;

#line 530 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_foreign_export_defn_0_0[1];

#line 533 "erl_backend.elds.c"
static const MR_DuPtagLayout erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_foreign_export_defn_0[1];

#line 536 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_name_ordered_elds_foreign_export_defn_0[1];

#line 539 "erl_backend.elds.c"
static const MR_Integer erl_backend__elds__erl_backend__elds__functor_number_map_elds_foreign_export_defn_0[1];

#line 542 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_rtti_defn_0_0[4];

#line 545 "erl_backend.elds.c"
static const MR_ConstString erl_backend__elds__erl_backend__elds__field_names_elds_rtti_defn_0_0[4];

#line 548 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_rtti_defn_0_0;

#line 551 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_rtti_defn_0_0[1];

#line 554 "erl_backend.elds.c"
static const MR_DuPtagLayout erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_rtti_defn_0[1];

#line 557 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_name_ordered_elds_rtti_defn_0[1];

#line 560 "erl_backend.elds.c"
static const MR_Integer erl_backend__elds__erl_backend__elds__functor_number_map_elds_rtti_defn_0[1];

#line 563 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_rtti_id_0_0[1];

#line 566 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_rtti_id_0_0;

#line 569 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_rtti_id_0_1[1];

#line 572 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_rtti_id_0_1;

#line 575 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_rtti_id_0_2[1];

#line 578 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_rtti_id_0_2;

#line 581 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_rtti_id_0_3[3];

#line 584 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_rtti_id_0_3;

#line 587 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_rtti_id_0_0[1];

#line 590 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_rtti_id_0_1[1];

#line 593 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_rtti_id_0_2[1];

#line 596 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_rtti_id_0_3[1];

#line 599 "erl_backend.elds.c"
static const MR_DuPtagLayout erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_rtti_id_0[4];

#line 602 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_name_ordered_elds_rtti_id_0[4];

#line 605 "erl_backend.elds.c"
static const MR_Integer erl_backend__elds__erl_backend__elds__functor_number_map_elds_rtti_id_0[4];

#line 608 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_term_0_0[1];

#line 611 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_0;

#line 614 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_term_0_1[1];

#line 617 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_1;

#line 620 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_term_0_2[1];

#line 623 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_2;

#line 626 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_term_0_3[1];

#line 629 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_3;

#line 632 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_term_0_4[1];

#line 635 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_4;

#line 638 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_term_0_5[1];

#line 641 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_5;

#line 644 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_term_0_6[1];

#line 647 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_6;

#line 650 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_term_0_7[1];

#line 653 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_7;

#line 656 "erl_backend.elds.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__elds__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 659 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_term_0_8[1];

#line 662 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_8;

#line 665 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_9;

#line 668 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_term_0_10[1];

#line 671 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_10;

#line 674 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_term_0_0[1];

#line 677 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_term_0_1[1];

#line 680 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_term_0_2[1];

#line 683 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_term_0_3[8];

#line 686 "erl_backend.elds.c"
static const MR_DuPtagLayout erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_term_0[4];

#line 689 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_name_ordered_elds_term_0[11];

#line 692 "erl_backend.elds.c"
static const MR_Integer erl_backend__elds__erl_backend__elds__functor_number_map_elds_term_0[11];

#line 695 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_unop_0_0;

#line 698 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_unop_0_1;

#line 701 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_unop_0_2;

#line 704 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_unop_0_3;

#line 707 "erl_backend.elds.c"
static const MR_EnumFunctorDescPtr erl_backend__elds__erl_backend__elds__enum_value_ordered_elds_unop_0[4];

#line 710 "erl_backend.elds.c"
static const MR_EnumFunctorDescPtr erl_backend__elds__erl_backend__elds__enum_name_ordered_elds_unop_0[4];

#line 713 "erl_backend.elds.c"
static const MR_Integer erl_backend__elds__erl_backend__elds__functor_number_map_elds_unop_0[4];

#line 716 "erl_backend.elds.c"
static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_0_0_10001(
#line 719 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_1,
#line 721 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2);

#line 724 "erl_backend.elds.c"
static void MR_CALL 
erl_backend__elds____Compare____elds_0_0_10001(
#line 727 "erl_backend.elds.c"
  MR_Box * erl_backend__elds__wrapper_arg_1,
#line 729 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2,
#line 731 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_3);

#line 734 "erl_backend.elds.c"
static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_binop_0_0_10001(
#line 737 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_1,
#line 739 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2);

#line 742 "erl_backend.elds.c"
static void MR_CALL 
erl_backend__elds____Compare____elds_binop_0_0_10001(
#line 745 "erl_backend.elds.c"
  MR_Box * erl_backend__elds__wrapper_arg_1,
#line 747 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2,
#line 749 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_3);

#line 752 "erl_backend.elds.c"
static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_body_0_0_10001(
#line 755 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_1,
#line 757 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2);

#line 760 "erl_backend.elds.c"
static void MR_CALL 
erl_backend__elds____Compare____elds_body_0_0_10001(
#line 763 "erl_backend.elds.c"
  MR_Box * erl_backend__elds__wrapper_arg_1,
#line 765 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2,
#line 767 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_3);

#line 770 "erl_backend.elds.c"
static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_call_target_0_0_10001(
#line 773 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_1,
#line 775 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2);

#line 778 "erl_backend.elds.c"
static void MR_CALL 
erl_backend__elds____Compare____elds_call_target_0_0_10001(
#line 781 "erl_backend.elds.c"
  MR_Box * erl_backend__elds__wrapper_arg_1,
#line 783 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2,
#line 785 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_3);

#line 788 "erl_backend.elds.c"
static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_case_0_0_10001(
#line 791 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_1,
#line 793 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2);

#line 796 "erl_backend.elds.c"
static void MR_CALL 
erl_backend__elds____Compare____elds_case_0_0_10001(
#line 799 "erl_backend.elds.c"
  MR_Box * erl_backend__elds__wrapper_arg_1,
#line 801 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2,
#line 803 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_3);

#line 806 "erl_backend.elds.c"
static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_catch_0_0_10001(
#line 809 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_1,
#line 811 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2);

#line 814 "erl_backend.elds.c"
static void MR_CALL 
erl_backend__elds____Compare____elds_catch_0_0_10001(
#line 817 "erl_backend.elds.c"
  MR_Box * erl_backend__elds__wrapper_arg_1,
#line 819 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2,
#line 821 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_3);

#line 824 "erl_backend.elds.c"
static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_clause_0_0_10001(
#line 827 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_1,
#line 829 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2);

#line 832 "erl_backend.elds.c"
static void MR_CALL 
erl_backend__elds____Compare____elds_clause_0_0_10001(
#line 835 "erl_backend.elds.c"
  MR_Box * erl_backend__elds__wrapper_arg_1,
#line 837 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2,
#line 839 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_3);

#line 842 "erl_backend.elds.c"
static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_defn_0_0_10001(
#line 845 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_1,
#line 847 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2);

#line 850 "erl_backend.elds.c"
static void MR_CALL 
erl_backend__elds____Compare____elds_defn_0_0_10001(
#line 853 "erl_backend.elds.c"
  MR_Box * erl_backend__elds__wrapper_arg_1,
#line 855 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2,
#line 857 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_3);

#line 860 "erl_backend.elds.c"
static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_expr_0_0_10001(
#line 863 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_1,
#line 865 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2);

#line 868 "erl_backend.elds.c"
static void MR_CALL 
erl_backend__elds____Compare____elds_expr_0_0_10001(
#line 871 "erl_backend.elds.c"
  MR_Box * erl_backend__elds__wrapper_arg_1,
#line 873 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2,
#line 875 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_3);

#line 878 "erl_backend.elds.c"
static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_foreign_export_defn_0_0_10001(
#line 881 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_1,
#line 883 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2);

#line 886 "erl_backend.elds.c"
static void MR_CALL 
erl_backend__elds____Compare____elds_foreign_export_defn_0_0_10001(
#line 889 "erl_backend.elds.c"
  MR_Box * erl_backend__elds__wrapper_arg_1,
#line 891 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2,
#line 893 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_3);

#line 896 "erl_backend.elds.c"
static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_rtti_defn_0_0_10001(
#line 899 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_1,
#line 901 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2);

#line 904 "erl_backend.elds.c"
static void MR_CALL 
erl_backend__elds____Compare____elds_rtti_defn_0_0_10001(
#line 907 "erl_backend.elds.c"
  MR_Box * erl_backend__elds__wrapper_arg_1,
#line 909 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2,
#line 911 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_3);

#line 914 "erl_backend.elds.c"
static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_rtti_id_0_0_10001(
#line 917 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_1,
#line 919 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2);

#line 922 "erl_backend.elds.c"
static void MR_CALL 
erl_backend__elds____Compare____elds_rtti_id_0_0_10001(
#line 925 "erl_backend.elds.c"
  MR_Box * erl_backend__elds__wrapper_arg_1,
#line 927 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2,
#line 929 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_3);

#line 932 "erl_backend.elds.c"
static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_term_0_0_10001(
#line 935 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_1,
#line 937 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2);

#line 940 "erl_backend.elds.c"
static void MR_CALL 
erl_backend__elds____Compare____elds_term_0_0_10001(
#line 943 "erl_backend.elds.c"
  MR_Box * erl_backend__elds__wrapper_arg_1,
#line 945 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2,
#line 947 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_3);

#line 950 "erl_backend.elds.c"
static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_unop_0_0_10001(
#line 953 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_1,
#line 955 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2);

#line 958 "erl_backend.elds.c"
static void MR_CALL 
erl_backend__elds____Compare____elds_unop_0_0_10001(
#line 961 "erl_backend.elds.c"
  MR_Box * erl_backend__elds__wrapper_arg_1,
#line 963 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2,
#line 965 "erl_backend.elds.c"
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



#line 1239 "erl_backend.elds.c"
static const MR_FA_PseudoTypeInfo_Struct1 erl_backend__elds__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1247 "erl_backend.elds.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__elds__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
  }
};

#line 1255 "erl_backend.elds.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__elds__list__ti_list_1parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0
  }
};

#line 1263 "erl_backend.elds.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__elds__list__ti_list_1parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0
  }
};

#line 1271 "erl_backend.elds.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__elds__list__ti_list_1erl_backend__elds__type_ctor_info_elds_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_defn_0
  }
};

#line 1279 "erl_backend.elds.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__elds__list__ti_list_1erl_backend__elds__type_ctor_info_elds_foreign_export_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_foreign_export_defn_0
  }
};

#line 1287 "erl_backend.elds.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__elds__list__ti_list_1erl_backend__elds__type_ctor_info_elds_rtti_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_rtti_defn_0
  }
};

#line 1295 "erl_backend.elds.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__elds__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

#line 1303 "erl_backend.elds.c"
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

#line 1316 "erl_backend.elds.c"
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

#line 1329 "erl_backend.elds.c"
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

#line 1344 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_0_0[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_0_0
};

#line 1349 "erl_backend.elds.c"
static const MR_DuPtagLayout erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_0_0
  }
};

#line 1358 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_name_ordered_elds_0[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_0_0
};

#line 1363 "erl_backend.elds.c"
static const MR_Integer erl_backend__elds__erl_backend__elds__functor_number_map_elds_0[1] = {
  (MR_Integer) 0
};

#line 1368 "erl_backend.elds.c"
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

#line 1385 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_0 = {
  (MR_String) "mul",
  (MR_Integer) 0
};

#line 1391 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_1 = {
  (MR_String) "float_div",
  (MR_Integer) 1
};

#line 1397 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_2 = {
  (MR_String) "int_div",
  (MR_Integer) 2
};

#line 1403 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_3 = {
  (MR_String) "rem",
  (MR_Integer) 3
};

#line 1409 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_4 = {
  (MR_String) "band",
  (MR_Integer) 4
};

#line 1415 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_5 = {
  (MR_String) "add",
  (MR_Integer) 5
};

#line 1421 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_6 = {
  (MR_String) "sub",
  (MR_Integer) 6
};

#line 1427 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_7 = {
  (MR_String) "bor",
  (MR_Integer) 7
};

#line 1433 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_8 = {
  (MR_String) "bxor",
  (MR_Integer) 8
};

#line 1439 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_9 = {
  (MR_String) "bsl",
  (MR_Integer) 9
};

#line 1445 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_10 = {
  (MR_String) "bsr",
  (MR_Integer) 10
};

#line 1451 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_11 = {
  (MR_String) "=<",
  (MR_Integer) 11
};

#line 1457 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_12 = {
  (MR_String) "<",
  (MR_Integer) 12
};

#line 1463 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_13 = {
  (MR_String) ">=",
  (MR_Integer) 13
};

#line 1469 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_14 = {
  (MR_String) ">",
  (MR_Integer) 14
};

#line 1475 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_15 = {
  (MR_String) "=:=",
  (MR_Integer) 15
};

#line 1481 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_16 = {
  (MR_String) "=/=",
  (MR_Integer) 16
};

#line 1487 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_17 = {
  (MR_String) "andalso",
  (MR_Integer) 17
};

#line 1493 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_18 = {
  (MR_String) "orelse",
  (MR_Integer) 18
};

#line 1499 "erl_backend.elds.c"
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

#line 1522 "erl_backend.elds.c"
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

#line 1545 "erl_backend.elds.c"
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

#line 1568 "erl_backend.elds.c"
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

#line 1585 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_body_0_0[1] = {
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_clause_0
};

#line 1590 "erl_backend.elds.c"
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

#line 1605 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_body_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1610 "erl_backend.elds.c"
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

#line 1625 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_body_0_0[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_body_0_0
};

#line 1630 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_body_0_1[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_body_0_1
};

#line 1635 "erl_backend.elds.c"
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

#line 1649 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_name_ordered_elds_body_0[2] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_body_0_0,
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_body_0_1
};

#line 1655 "erl_backend.elds.c"
static const MR_Integer erl_backend__elds__erl_backend__elds__functor_number_map_elds_body_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1661 "erl_backend.elds.c"
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

#line 1678 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_call_target_0_0[1] = {
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
};

#line 1683 "erl_backend.elds.c"
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

#line 1698 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_call_target_0_1[1] = {
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0
};

#line 1703 "erl_backend.elds.c"
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

#line 1718 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_call_target_0_2[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 1723 "erl_backend.elds.c"
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

#line 1738 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_call_target_0_0[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_call_target_0_0
};

#line 1743 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_call_target_0_1[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_call_target_0_1
};

#line 1748 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_call_target_0_2[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_call_target_0_2
};

#line 1753 "erl_backend.elds.c"
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

#line 1772 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_name_ordered_elds_call_target_0[3] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_call_target_0_2,
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_call_target_0_1,
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_call_target_0_0
};

#line 1779 "erl_backend.elds.c"
static const MR_Integer erl_backend__elds__erl_backend__elds__functor_number_map_elds_call_target_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1786 "erl_backend.elds.c"
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

#line 1803 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_case_0_0[2] = {
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_term_0,
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0
};

#line 1809 "erl_backend.elds.c"
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

#line 1824 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_case_0_0[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_case_0_0
};

#line 1829 "erl_backend.elds.c"
static const MR_DuPtagLayout erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_case_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_case_0_0
  }
};

#line 1838 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_name_ordered_elds_case_0[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_case_0_0
};

#line 1843 "erl_backend.elds.c"
static const MR_Integer erl_backend__elds__erl_backend__elds__functor_number_map_elds_case_0[1] = {
  (MR_Integer) 0
};

#line 1848 "erl_backend.elds.c"
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

#line 1865 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_catch_0_0[3] = {
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_term_0,
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_term_0,
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0
};

#line 1872 "erl_backend.elds.c"
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

#line 1887 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_catch_0_0[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_catch_0_0
};

#line 1892 "erl_backend.elds.c"
static const MR_DuPtagLayout erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_catch_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_catch_0_0
  }
};

#line 1901 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_name_ordered_elds_catch_0[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_catch_0_0
};

#line 1906 "erl_backend.elds.c"
static const MR_Integer erl_backend__elds__erl_backend__elds__functor_number_map_elds_catch_0[1] = {
  (MR_Integer) 0
};

#line 1911 "erl_backend.elds.c"
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

#line 1928 "erl_backend.elds.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__elds__list__ti_list_1erl_backend__elds__type_ctor_info_elds_term_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_term_0
  }
};

#line 1936 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_clause_0_0[2] = {
  (MR_PseudoTypeInfo) &erl_backend__elds__list__ti_list_1erl_backend__elds__type_ctor_info_elds_term_0,
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0
};

#line 1942 "erl_backend.elds.c"
static const MR_ConstString erl_backend__elds__erl_backend__elds__field_names_elds_clause_0_0[2] = {
  (MR_String) "clause_pattern",
  (MR_String) "clause_expr"
};

#line 1948 "erl_backend.elds.c"
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

#line 1963 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_clause_0_0[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_clause_0_0
};

#line 1968 "erl_backend.elds.c"
static const MR_DuPtagLayout erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_clause_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_clause_0_0
  }
};

#line 1977 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_name_ordered_elds_clause_0[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_clause_0_0
};

#line 1982 "erl_backend.elds.c"
static const MR_Integer erl_backend__elds__erl_backend__elds__functor_number_map_elds_clause_0[1] = {
  (MR_Integer) 0
};

#line 1987 "erl_backend.elds.c"
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

#line 2004 "erl_backend.elds.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__elds__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2012 "erl_backend.elds.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__elds__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 2020 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_defn_0_0[4] = {
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
  (MR_PseudoTypeInfo) &erl_backend__elds__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_body_0,
  (MR_PseudoTypeInfo) &erl_backend__elds__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0
};

#line 2028 "erl_backend.elds.c"
static const MR_ConstString erl_backend__elds__erl_backend__elds__field_names_elds_defn_0_0[4] = {
  (MR_String) "defn_proc_id",
  (MR_String) "defn_varset",
  (MR_String) "defn_body",
  (MR_String) "defn_env_vars"
};

#line 2036 "erl_backend.elds.c"
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

#line 2051 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_defn_0_0[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_defn_0_0
};

#line 2056 "erl_backend.elds.c"
static const MR_DuPtagLayout erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_defn_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_defn_0_0
  }
};

#line 2065 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_name_ordered_elds_defn_0[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_defn_0_0
};

#line 2070 "erl_backend.elds.c"
static const MR_Integer erl_backend__elds__erl_backend__elds__functor_number_map_elds_defn_0[1] = {
  (MR_Integer) 0
};

#line 2075 "erl_backend.elds.c"
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

#line 2092 "erl_backend.elds.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__elds__list__ti_list_1erl_backend__elds__type_ctor_info_elds_expr_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0
  }
};

#line 2100 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_0[1] = {
  (MR_PseudoTypeInfo) &erl_backend__elds__list__ti_list_1erl_backend__elds__type_ctor_info_elds_expr_0
};

#line 2105 "erl_backend.elds.c"
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

#line 2120 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_1[1] = {
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_term_0
};

#line 2125 "erl_backend.elds.c"
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

#line 2140 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_2[2] = {
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0,
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0
};

#line 2146 "erl_backend.elds.c"
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

#line 2161 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_3[2] = {
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_unop_0,
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0
};

#line 2167 "erl_backend.elds.c"
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

#line 2182 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_4[3] = {
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_binop_0,
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0,
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0
};

#line 2189 "erl_backend.elds.c"
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

#line 2204 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_5[2] = {
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_call_target_0,
  (MR_PseudoTypeInfo) &erl_backend__elds__list__ti_list_1erl_backend__elds__type_ctor_info_elds_expr_0
};

#line 2210 "erl_backend.elds.c"
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

#line 2225 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_6[1] = {
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_rtti_id_0
};

#line 2230 "erl_backend.elds.c"
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

#line 2245 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_7[1] = {
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_clause_0
};

#line 2250 "erl_backend.elds.c"
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

#line 2265 "erl_backend.elds.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__elds__list__ti_list_1erl_backend__elds__type_ctor_info_elds_case_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_case_0
  }
};

#line 2273 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_8[2] = {
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0,
  (MR_PseudoTypeInfo) &erl_backend__elds__list__ti_list_1erl_backend__elds__type_ctor_info_elds_case_0
};

#line 2279 "erl_backend.elds.c"
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

#line 2294 "erl_backend.elds.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__elds__maybe__ti_maybe_1erl_backend__elds__type_ctor_info_elds_catch_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_catch_0
  }
};

#line 2302 "erl_backend.elds.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__elds__maybe__ti_maybe_1erl_backend__elds__type_ctor_info_elds_expr_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0
  }
};

#line 2310 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_9[4] = {
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0,
  (MR_PseudoTypeInfo) &erl_backend__elds__list__ti_list_1erl_backend__elds__type_ctor_info_elds_case_0,
  (MR_PseudoTypeInfo) &erl_backend__elds__maybe__ti_maybe_1erl_backend__elds__type_ctor_info_elds_catch_0,
  (MR_PseudoTypeInfo) &erl_backend__elds__maybe__ti_maybe_1erl_backend__elds__type_ctor_info_elds_expr_0
};

#line 2318 "erl_backend.elds.c"
static const MR_ConstString erl_backend__elds__erl_backend__elds__field_names_elds_expr_0_9[4] = {
  (MR_String) "try_expr",
  (MR_String) "try_cases",
  (MR_String) "try_catch",
  (MR_String) "try_after"
};

#line 2326 "erl_backend.elds.c"
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

#line 2341 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_10[1] = {
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0
};

#line 2346 "erl_backend.elds.c"
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

#line 2361 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_11[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0
};

#line 2367 "erl_backend.elds.c"
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

#line 2382 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_12[2] = {
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0,
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0
};

#line 2388 "erl_backend.elds.c"
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

#line 2403 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_13[1] = {
  (MR_PseudoTypeInfo) &erl_backend__elds__list__ti_list_1erl_backend__elds__type_ctor_info_elds_case_0
};

#line 2408 "erl_backend.elds.c"
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

#line 2423 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_expr_0_0[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_7
};

#line 2428 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_expr_0_1[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_0
};

#line 2433 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_expr_0_2[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_1
};

#line 2438 "erl_backend.elds.c"
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

#line 2453 "erl_backend.elds.c"
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

#line 2477 "erl_backend.elds.c"
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

#line 2495 "erl_backend.elds.c"
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

#line 2513 "erl_backend.elds.c"
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

#line 2530 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_foreign_export_defn_0_0[3] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &erl_backend__elds__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_clause_0
};

#line 2537 "erl_backend.elds.c"
static const MR_ConstString erl_backend__elds__erl_backend__elds__field_names_elds_foreign_export_defn_0_0[3] = {
  (MR_String) "fe_defn_name",
  (MR_String) "fe_defn_varset",
  (MR_String) "fe_defn_clause"
};

#line 2544 "erl_backend.elds.c"
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

#line 2559 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_foreign_export_defn_0_0[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_foreign_export_defn_0_0
};

#line 2564 "erl_backend.elds.c"
static const MR_DuPtagLayout erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_foreign_export_defn_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_foreign_export_defn_0_0
  }
};

#line 2573 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_name_ordered_elds_foreign_export_defn_0[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_foreign_export_defn_0_0
};

#line 2578 "erl_backend.elds.c"
static const MR_Integer erl_backend__elds__erl_backend__elds__functor_number_map_elds_foreign_export_defn_0[1] = {
  (MR_Integer) 0
};

#line 2583 "erl_backend.elds.c"
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

#line 2600 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_rtti_defn_0_0[4] = {
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_rtti_id_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &erl_backend__elds__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_clause_0
};

#line 2608 "erl_backend.elds.c"
static const MR_ConstString erl_backend__elds__erl_backend__elds__field_names_elds_rtti_defn_0_0[4] = {
  (MR_String) "rtti_defn_id",
  (MR_String) "rtti_defn_exported",
  (MR_String) "rtti_defn_varset",
  (MR_String) "rtti_defn_clause"
};

#line 2616 "erl_backend.elds.c"
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

#line 2631 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_rtti_defn_0_0[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_rtti_defn_0_0
};

#line 2636 "erl_backend.elds.c"
static const MR_DuPtagLayout erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_rtti_defn_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_rtti_defn_0_0
  }
};

#line 2645 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_name_ordered_elds_rtti_defn_0[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_rtti_defn_0_0
};

#line 2650 "erl_backend.elds.c"
static const MR_Integer erl_backend__elds__erl_backend__elds__functor_number_map_elds_rtti_defn_0[1] = {
  (MR_Integer) 0
};

#line 2655 "erl_backend.elds.c"
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

#line 2672 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_rtti_id_0_0[1] = {
  (MR_PseudoTypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_type_ctor_0
};

#line 2677 "erl_backend.elds.c"
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

#line 2692 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_rtti_id_0_1[1] = {
  (MR_PseudoTypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_type_info_0
};

#line 2697 "erl_backend.elds.c"
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

#line 2712 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_rtti_id_0_2[1] = {
  (MR_PseudoTypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_pseudo_type_info_0
};

#line 2717 "erl_backend.elds.c"
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

#line 2732 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_rtti_id_0_3[3] = {
  (MR_PseudoTypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_tc_name_0,
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 2739 "erl_backend.elds.c"
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

#line 2754 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_rtti_id_0_0[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_rtti_id_0_0
};

#line 2759 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_rtti_id_0_1[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_rtti_id_0_1
};

#line 2764 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_rtti_id_0_2[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_rtti_id_0_2
};

#line 2769 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_rtti_id_0_3[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_rtti_id_0_3
};

#line 2774 "erl_backend.elds.c"
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

#line 2798 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_name_ordered_elds_rtti_id_0[4] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_rtti_id_0_3,
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_rtti_id_0_2,
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_rtti_id_0_0,
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_rtti_id_0_1
};

#line 2806 "erl_backend.elds.c"
static const MR_Integer erl_backend__elds__erl_backend__elds__functor_number_map_elds_rtti_id_0[4] = {
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 2814 "erl_backend.elds.c"
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

#line 2831 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_term_0_0[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_character_0
};

#line 2836 "erl_backend.elds.c"
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

#line 2851 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_term_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2856 "erl_backend.elds.c"
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

#line 2871 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_term_0_2[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0
};

#line 2876 "erl_backend.elds.c"
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

#line 2891 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_term_0_3[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 2896 "erl_backend.elds.c"
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

#line 2911 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_term_0_4[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 2916 "erl_backend.elds.c"
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

#line 2931 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_term_0_5[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 2936 "erl_backend.elds.c"
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

#line 2951 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_term_0_6[1] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
};

#line 2956 "erl_backend.elds.c"
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

#line 2971 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_term_0_7[1] = {
  (MR_PseudoTypeInfo) &erl_backend__elds__list__ti_list_1erl_backend__elds__type_ctor_info_elds_expr_0
};

#line 2976 "erl_backend.elds.c"
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

#line 2991 "erl_backend.elds.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__elds__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2999 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_term_0_8[1] = {
  (MR_PseudoTypeInfo) &erl_backend__elds__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

#line 3004 "erl_backend.elds.c"
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

#line 3019 "erl_backend.elds.c"
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

#line 3034 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_term_0_10[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 3039 "erl_backend.elds.c"
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

#line 3054 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_term_0_0[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_9
};

#line 3059 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_term_0_1[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_0
};

#line 3064 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_term_0_2[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_1
};

#line 3069 "erl_backend.elds.c"
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

#line 3081 "erl_backend.elds.c"
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

#line 3105 "erl_backend.elds.c"
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

#line 3120 "erl_backend.elds.c"
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

#line 3135 "erl_backend.elds.c"
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

#line 3152 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_unop_0_0 = {
  (MR_String) "plus",
  (MR_Integer) 0
};

#line 3158 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_unop_0_1 = {
  (MR_String) "minus",
  (MR_Integer) 1
};

#line 3164 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_unop_0_2 = {
  (MR_String) "bnot",
  (MR_Integer) 2
};

#line 3170 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_unop_0_3 = {
  (MR_String) "logical_not",
  (MR_Integer) 3
};

#line 3176 "erl_backend.elds.c"
static const MR_EnumFunctorDescPtr erl_backend__elds__erl_backend__elds__enum_value_ordered_elds_unop_0[4] = {
  &erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_unop_0_0,
  &erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_unop_0_1,
  &erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_unop_0_2,
  &erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_unop_0_3
};

#line 3184 "erl_backend.elds.c"
static const MR_EnumFunctorDescPtr erl_backend__elds__erl_backend__elds__enum_name_ordered_elds_unop_0[4] = {
  &erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_unop_0_2,
  &erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_unop_0_3,
  &erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_unop_0_1,
  &erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_unop_0_0
};

#line 3192 "erl_backend.elds.c"
static const MR_Integer erl_backend__elds__erl_backend__elds__functor_number_map_elds_unop_0[4] = {
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 3200 "erl_backend.elds.c"
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

#line 3217 "erl_backend.elds.c"
static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_0_0_10001(
#line 3220 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_1,
#line 3222 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2)
#line 3224 "erl_backend.elds.c"
{
#line 3226 "erl_backend.elds.c"
  {
#line 3228 "erl_backend.elds.c"
    MR_bool erl_backend__elds__succeeded;

#line 3231 "erl_backend.elds.c"
    {
#line 3233 "erl_backend.elds.c"
      erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_0_0(((MR_Word) erl_backend__elds__wrapper_arg_1), ((MR_Word) erl_backend__elds__wrapper_arg_2));
    }
#line 3236 "erl_backend.elds.c"
    return erl_backend__elds__succeeded;
#line 3238 "erl_backend.elds.c"
  }
#line 3240 "erl_backend.elds.c"
}

#line 3243 "erl_backend.elds.c"
static void MR_CALL 
erl_backend__elds____Compare____elds_0_0_10001(
#line 3246 "erl_backend.elds.c"
  MR_Box * erl_backend__elds__wrapper_arg_1,
#line 3248 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2,
#line 3250 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_3)
#line 3252 "erl_backend.elds.c"
{
#line 3254 "erl_backend.elds.c"
  {
#line 3256 "erl_backend.elds.c"
    MR_Word erl_backend__elds__conv0_HeadVar__1_1;

#line 3259 "erl_backend.elds.c"
    {
#line 3261 "erl_backend.elds.c"
      erl_backend__elds____Compare____elds_0_0(&erl_backend__elds__conv0_HeadVar__1_1, ((MR_Word) erl_backend__elds__wrapper_arg_2), ((MR_Word) erl_backend__elds__wrapper_arg_3));
    }
#line 3264 "erl_backend.elds.c"
    *erl_backend__elds__wrapper_arg_1 = ((MR_Box) (erl_backend__elds__conv0_HeadVar__1_1));
#line 3266 "erl_backend.elds.c"
  }
#line 3268 "erl_backend.elds.c"
}

#line 3271 "erl_backend.elds.c"
static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_binop_0_0_10001(
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
      erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_binop_0_0(((MR_Word) erl_backend__elds__wrapper_arg_1), ((MR_Word) erl_backend__elds__wrapper_arg_2));
    }
#line 3290 "erl_backend.elds.c"
    return erl_backend__elds__succeeded;
#line 3292 "erl_backend.elds.c"
  }
#line 3294 "erl_backend.elds.c"
}

#line 3297 "erl_backend.elds.c"
static void MR_CALL 
erl_backend__elds____Compare____elds_binop_0_0_10001(
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
      erl_backend__elds____Compare____elds_binop_0_0(&erl_backend__elds__conv0_HeadVar__1_1, ((MR_Word) erl_backend__elds__wrapper_arg_2), ((MR_Word) erl_backend__elds__wrapper_arg_3));
    }
#line 3318 "erl_backend.elds.c"
    *erl_backend__elds__wrapper_arg_1 = ((MR_Box) (erl_backend__elds__conv0_HeadVar__1_1));
#line 3320 "erl_backend.elds.c"
  }
#line 3322 "erl_backend.elds.c"
}

#line 3325 "erl_backend.elds.c"
static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_body_0_0_10001(
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
      erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_body_0_0(((MR_Word) erl_backend__elds__wrapper_arg_1), ((MR_Word) erl_backend__elds__wrapper_arg_2));
    }
#line 3344 "erl_backend.elds.c"
    return erl_backend__elds__succeeded;
#line 3346 "erl_backend.elds.c"
  }
#line 3348 "erl_backend.elds.c"
}

#line 3351 "erl_backend.elds.c"
static void MR_CALL 
erl_backend__elds____Compare____elds_body_0_0_10001(
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
      erl_backend__elds____Compare____elds_body_0_0(&erl_backend__elds__conv0_HeadVar__1_1, ((MR_Word) erl_backend__elds__wrapper_arg_2), ((MR_Word) erl_backend__elds__wrapper_arg_3));
    }
#line 3372 "erl_backend.elds.c"
    *erl_backend__elds__wrapper_arg_1 = ((MR_Box) (erl_backend__elds__conv0_HeadVar__1_1));
#line 3374 "erl_backend.elds.c"
  }
#line 3376 "erl_backend.elds.c"
}

#line 3379 "erl_backend.elds.c"
static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_call_target_0_0_10001(
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
      erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_call_target_0_0(((MR_Word) erl_backend__elds__wrapper_arg_1), ((MR_Word) erl_backend__elds__wrapper_arg_2));
    }
#line 3398 "erl_backend.elds.c"
    return erl_backend__elds__succeeded;
#line 3400 "erl_backend.elds.c"
  }
#line 3402 "erl_backend.elds.c"
}

#line 3405 "erl_backend.elds.c"
static void MR_CALL 
erl_backend__elds____Compare____elds_call_target_0_0_10001(
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
      erl_backend__elds____Compare____elds_call_target_0_0(&erl_backend__elds__conv0_HeadVar__1_1, ((MR_Word) erl_backend__elds__wrapper_arg_2), ((MR_Word) erl_backend__elds__wrapper_arg_3));
    }
#line 3426 "erl_backend.elds.c"
    *erl_backend__elds__wrapper_arg_1 = ((MR_Box) (erl_backend__elds__conv0_HeadVar__1_1));
#line 3428 "erl_backend.elds.c"
  }
#line 3430 "erl_backend.elds.c"
}

#line 3433 "erl_backend.elds.c"
static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_case_0_0_10001(
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
      erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_case_0_0(((MR_Word) erl_backend__elds__wrapper_arg_1), ((MR_Word) erl_backend__elds__wrapper_arg_2));
    }
#line 3452 "erl_backend.elds.c"
    return erl_backend__elds__succeeded;
#line 3454 "erl_backend.elds.c"
  }
#line 3456 "erl_backend.elds.c"
}

#line 3459 "erl_backend.elds.c"
static void MR_CALL 
erl_backend__elds____Compare____elds_case_0_0_10001(
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
      erl_backend__elds____Compare____elds_case_0_0(&erl_backend__elds__conv0_HeadVar__1_1, ((MR_Word) erl_backend__elds__wrapper_arg_2), ((MR_Word) erl_backend__elds__wrapper_arg_3));
    }
#line 3480 "erl_backend.elds.c"
    *erl_backend__elds__wrapper_arg_1 = ((MR_Box) (erl_backend__elds__conv0_HeadVar__1_1));
#line 3482 "erl_backend.elds.c"
  }
#line 3484 "erl_backend.elds.c"
}

#line 3487 "erl_backend.elds.c"
static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_catch_0_0_10001(
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
      erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_catch_0_0(((MR_Word) erl_backend__elds__wrapper_arg_1), ((MR_Word) erl_backend__elds__wrapper_arg_2));
    }
#line 3506 "erl_backend.elds.c"
    return erl_backend__elds__succeeded;
#line 3508 "erl_backend.elds.c"
  }
#line 3510 "erl_backend.elds.c"
}

#line 3513 "erl_backend.elds.c"
static void MR_CALL 
erl_backend__elds____Compare____elds_catch_0_0_10001(
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
      erl_backend__elds____Compare____elds_catch_0_0(&erl_backend__elds__conv0_HeadVar__1_1, ((MR_Word) erl_backend__elds__wrapper_arg_2), ((MR_Word) erl_backend__elds__wrapper_arg_3));
    }
#line 3534 "erl_backend.elds.c"
    *erl_backend__elds__wrapper_arg_1 = ((MR_Box) (erl_backend__elds__conv0_HeadVar__1_1));
#line 3536 "erl_backend.elds.c"
  }
#line 3538 "erl_backend.elds.c"
}

#line 3541 "erl_backend.elds.c"
static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_clause_0_0_10001(
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
      erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_clause_0_0(((MR_Word) erl_backend__elds__wrapper_arg_1), ((MR_Word) erl_backend__elds__wrapper_arg_2));
    }
#line 3560 "erl_backend.elds.c"
    return erl_backend__elds__succeeded;
#line 3562 "erl_backend.elds.c"
  }
#line 3564 "erl_backend.elds.c"
}

#line 3567 "erl_backend.elds.c"
static void MR_CALL 
erl_backend__elds____Compare____elds_clause_0_0_10001(
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
      erl_backend__elds____Compare____elds_clause_0_0(&erl_backend__elds__conv0_HeadVar__1_1, ((MR_Word) erl_backend__elds__wrapper_arg_2), ((MR_Word) erl_backend__elds__wrapper_arg_3));
    }
#line 3588 "erl_backend.elds.c"
    *erl_backend__elds__wrapper_arg_1 = ((MR_Box) (erl_backend__elds__conv0_HeadVar__1_1));
#line 3590 "erl_backend.elds.c"
  }
#line 3592 "erl_backend.elds.c"
}

#line 3595 "erl_backend.elds.c"
static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_defn_0_0_10001(
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
      erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_defn_0_0(((MR_Word) erl_backend__elds__wrapper_arg_1), ((MR_Word) erl_backend__elds__wrapper_arg_2));
    }
#line 3614 "erl_backend.elds.c"
    return erl_backend__elds__succeeded;
#line 3616 "erl_backend.elds.c"
  }
#line 3618 "erl_backend.elds.c"
}

#line 3621 "erl_backend.elds.c"
static void MR_CALL 
erl_backend__elds____Compare____elds_defn_0_0_10001(
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
      erl_backend__elds____Compare____elds_defn_0_0(&erl_backend__elds__conv0_HeadVar__1_1, ((MR_Word) erl_backend__elds__wrapper_arg_2), ((MR_Word) erl_backend__elds__wrapper_arg_3));
    }
#line 3642 "erl_backend.elds.c"
    *erl_backend__elds__wrapper_arg_1 = ((MR_Box) (erl_backend__elds__conv0_HeadVar__1_1));
#line 3644 "erl_backend.elds.c"
  }
#line 3646 "erl_backend.elds.c"
}

#line 3649 "erl_backend.elds.c"
static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_expr_0_0_10001(
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
      erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_expr_0_0(((MR_Word) erl_backend__elds__wrapper_arg_1), ((MR_Word) erl_backend__elds__wrapper_arg_2));
    }
#line 3668 "erl_backend.elds.c"
    return erl_backend__elds__succeeded;
#line 3670 "erl_backend.elds.c"
  }
#line 3672 "erl_backend.elds.c"
}

#line 3675 "erl_backend.elds.c"
static void MR_CALL 
erl_backend__elds____Compare____elds_expr_0_0_10001(
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
      erl_backend__elds____Compare____elds_expr_0_0(&erl_backend__elds__conv0_HeadVar__1_1, ((MR_Word) erl_backend__elds__wrapper_arg_2), ((MR_Word) erl_backend__elds__wrapper_arg_3));
    }
#line 3696 "erl_backend.elds.c"
    *erl_backend__elds__wrapper_arg_1 = ((MR_Box) (erl_backend__elds__conv0_HeadVar__1_1));
#line 3698 "erl_backend.elds.c"
  }
#line 3700 "erl_backend.elds.c"
}

#line 3703 "erl_backend.elds.c"
static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_foreign_export_defn_0_0_10001(
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
      erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_foreign_export_defn_0_0(((MR_Word) erl_backend__elds__wrapper_arg_1), ((MR_Word) erl_backend__elds__wrapper_arg_2));
    }
#line 3722 "erl_backend.elds.c"
    return erl_backend__elds__succeeded;
#line 3724 "erl_backend.elds.c"
  }
#line 3726 "erl_backend.elds.c"
}

#line 3729 "erl_backend.elds.c"
static void MR_CALL 
erl_backend__elds____Compare____elds_foreign_export_defn_0_0_10001(
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
      erl_backend__elds____Compare____elds_foreign_export_defn_0_0(&erl_backend__elds__conv0_HeadVar__1_1, ((MR_Word) erl_backend__elds__wrapper_arg_2), ((MR_Word) erl_backend__elds__wrapper_arg_3));
    }
#line 3750 "erl_backend.elds.c"
    *erl_backend__elds__wrapper_arg_1 = ((MR_Box) (erl_backend__elds__conv0_HeadVar__1_1));
#line 3752 "erl_backend.elds.c"
  }
#line 3754 "erl_backend.elds.c"
}

#line 3757 "erl_backend.elds.c"
static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_rtti_defn_0_0_10001(
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
      erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_rtti_defn_0_0(((MR_Word) erl_backend__elds__wrapper_arg_1), ((MR_Word) erl_backend__elds__wrapper_arg_2));
    }
#line 3776 "erl_backend.elds.c"
    return erl_backend__elds__succeeded;
#line 3778 "erl_backend.elds.c"
  }
#line 3780 "erl_backend.elds.c"
}

#line 3783 "erl_backend.elds.c"
static void MR_CALL 
erl_backend__elds____Compare____elds_rtti_defn_0_0_10001(
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
      erl_backend__elds____Compare____elds_rtti_defn_0_0(&erl_backend__elds__conv0_HeadVar__1_1, ((MR_Word) erl_backend__elds__wrapper_arg_2), ((MR_Word) erl_backend__elds__wrapper_arg_3));
    }
#line 3804 "erl_backend.elds.c"
    *erl_backend__elds__wrapper_arg_1 = ((MR_Box) (erl_backend__elds__conv0_HeadVar__1_1));
#line 3806 "erl_backend.elds.c"
  }
#line 3808 "erl_backend.elds.c"
}

#line 3811 "erl_backend.elds.c"
static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_rtti_id_0_0_10001(
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
      erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_rtti_id_0_0(((MR_Word) erl_backend__elds__wrapper_arg_1), ((MR_Word) erl_backend__elds__wrapper_arg_2));
    }
#line 3830 "erl_backend.elds.c"
    return erl_backend__elds__succeeded;
#line 3832 "erl_backend.elds.c"
  }
#line 3834 "erl_backend.elds.c"
}

#line 3837 "erl_backend.elds.c"
static void MR_CALL 
erl_backend__elds____Compare____elds_rtti_id_0_0_10001(
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
      erl_backend__elds____Compare____elds_rtti_id_0_0(&erl_backend__elds__conv0_HeadVar__1_1, ((MR_Word) erl_backend__elds__wrapper_arg_2), ((MR_Word) erl_backend__elds__wrapper_arg_3));
    }
#line 3858 "erl_backend.elds.c"
    *erl_backend__elds__wrapper_arg_1 = ((MR_Box) (erl_backend__elds__conv0_HeadVar__1_1));
#line 3860 "erl_backend.elds.c"
  }
#line 3862 "erl_backend.elds.c"
}

#line 3865 "erl_backend.elds.c"
static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_term_0_0_10001(
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
      erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_term_0_0(((MR_Word) erl_backend__elds__wrapper_arg_1), ((MR_Word) erl_backend__elds__wrapper_arg_2));
    }
#line 3884 "erl_backend.elds.c"
    return erl_backend__elds__succeeded;
#line 3886 "erl_backend.elds.c"
  }
#line 3888 "erl_backend.elds.c"
}

#line 3891 "erl_backend.elds.c"
static void MR_CALL 
erl_backend__elds____Compare____elds_term_0_0_10001(
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
      erl_backend__elds____Compare____elds_term_0_0(&erl_backend__elds__conv0_HeadVar__1_1, ((MR_Word) erl_backend__elds__wrapper_arg_2), ((MR_Word) erl_backend__elds__wrapper_arg_3));
    }
#line 3912 "erl_backend.elds.c"
    *erl_backend__elds__wrapper_arg_1 = ((MR_Box) (erl_backend__elds__conv0_HeadVar__1_1));
#line 3914 "erl_backend.elds.c"
  }
#line 3916 "erl_backend.elds.c"
}

#line 3919 "erl_backend.elds.c"
static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_unop_0_0_10001(
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
      erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_unop_0_0(((MR_Word) erl_backend__elds__wrapper_arg_1), ((MR_Word) erl_backend__elds__wrapper_arg_2));
    }
#line 3938 "erl_backend.elds.c"
    return erl_backend__elds__succeeded;
#line 3940 "erl_backend.elds.c"
  }
#line 3942 "erl_backend.elds.c"
}

#line 3945 "erl_backend.elds.c"
static void MR_CALL 
erl_backend__elds____Compare____elds_unop_0_0_10001(
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
      erl_backend__elds____Compare____elds_unop_0_0(&erl_backend__elds__conv0_HeadVar__1_1, ((MR_Word) erl_backend__elds__wrapper_arg_2), ((MR_Word) erl_backend__elds__wrapper_arg_3));
    }
#line 3966 "erl_backend.elds.c"
    *erl_backend__elds__wrapper_arg_1 = ((MR_Box) (erl_backend__elds__conv0_HeadVar__1_1));
#line 3968 "erl_backend.elds.c"
  }
#line 3970 "erl_backend.elds.c"
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
#line 4086 "erl_backend.elds.c"
  {
#line 4088 "erl_backend.elds.c"
    MR_bool erl_backend__elds__succeeded = (erl_backend__elds__HeadVar__2_1 == erl_backend__elds__HeadVar__2_2);

#line 4091 "erl_backend.elds.c"
    return erl_backend__elds__succeeded;
#line 4093 "erl_backend.elds.c"
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
#line 4122 "erl_backend.elds.c"
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
#line 4146 "erl_backend.elds.c"
              *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
              break;
#line 211 "elds.m"
            case (MR_Integer) 2:
#line 4152 "erl_backend.elds.c"
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
#line 4165 "erl_backend.elds.c"
                  *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                  break;
#line 211 "elds.m"
                case (MR_Integer) 1:
#line 4171 "erl_backend.elds.c"
                  *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                  break;
#line 211 "elds.m"
                case (MR_Integer) 2:
#line 4177 "erl_backend.elds.c"
                  *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                  break;
#line 211 "elds.m"
                case (MR_Integer) 3:
#line 4183 "erl_backend.elds.c"
                  *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                  break;
#line 211 "elds.m"
                case (MR_Integer) 4:
#line 4189 "erl_backend.elds.c"
                  *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                  break;
#line 211 "elds.m"
                case (MR_Integer) 5:
#line 4195 "erl_backend.elds.c"
                  *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                  break;
#line 211 "elds.m"
                case (MR_Integer) 6:
#line 4201 "erl_backend.elds.c"
                  *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                  break;
#line 211 "elds.m"
                case (MR_Integer) 7:
#line 4207 "erl_backend.elds.c"
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
#line 4233 "erl_backend.elds.c"
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
#line 4257 "erl_backend.elds.c"
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
#line 4270 "erl_backend.elds.c"
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                    break;
#line 211 "elds.m"
                  case (MR_Integer) 1:
#line 4276 "erl_backend.elds.c"
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                    break;
#line 211 "elds.m"
                  case (MR_Integer) 2:
#line 4282 "erl_backend.elds.c"
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                    break;
#line 211 "elds.m"
                  case (MR_Integer) 3:
#line 4288 "erl_backend.elds.c"
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                    break;
#line 211 "elds.m"
                  case (MR_Integer) 4:
#line 4294 "erl_backend.elds.c"
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                    break;
#line 211 "elds.m"
                  case (MR_Integer) 5:
#line 4300 "erl_backend.elds.c"
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                    break;
#line 211 "elds.m"
                  case (MR_Integer) 6:
#line 4306 "erl_backend.elds.c"
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                    break;
#line 211 "elds.m"
                  case (MR_Integer) 7:
#line 4312 "erl_backend.elds.c"
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
#line 4340 "erl_backend.elds.c"
                *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                break;
#line 211 "elds.m"
              case (MR_Integer) 1:
#line 4346 "erl_backend.elds.c"
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
#line 4377 "erl_backend.elds.c"
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                    break;
#line 211 "elds.m"
                  case (MR_Integer) 1:
#line 4383 "erl_backend.elds.c"
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                    break;
#line 211 "elds.m"
                  case (MR_Integer) 2:
#line 4389 "erl_backend.elds.c"
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                    break;
#line 211 "elds.m"
                  case (MR_Integer) 3:
#line 4395 "erl_backend.elds.c"
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                    break;
#line 211 "elds.m"
                  case (MR_Integer) 4:
#line 4401 "erl_backend.elds.c"
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                    break;
#line 211 "elds.m"
                  case (MR_Integer) 5:
#line 4407 "erl_backend.elds.c"
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                    break;
#line 211 "elds.m"
                  case (MR_Integer) 6:
#line 4413 "erl_backend.elds.c"
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                    break;
#line 211 "elds.m"
                  case (MR_Integer) 7:
#line 4419 "erl_backend.elds.c"
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
#line 4454 "erl_backend.elds.c"
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                    break;
#line 211 "elds.m"
                  case (MR_Integer) 1:
#line 4460 "erl_backend.elds.c"
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                    break;
#line 211 "elds.m"
                  case (MR_Integer) 2:
#line 4466 "erl_backend.elds.c"
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
#line 4497 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                        break;
#line 211 "elds.m"
                      case (MR_Integer) 2:
#line 4503 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                        break;
#line 211 "elds.m"
                      case (MR_Integer) 3:
#line 4509 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                        break;
#line 211 "elds.m"
                      case (MR_Integer) 4:
#line 4515 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                        break;
#line 211 "elds.m"
                      case (MR_Integer) 5:
#line 4521 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                        break;
#line 211 "elds.m"
                      case (MR_Integer) 6:
#line 4527 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                        break;
#line 211 "elds.m"
                      case (MR_Integer) 7:
#line 4533 "erl_backend.elds.c"
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
#line 4561 "erl_backend.elds.c"
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                    break;
#line 211 "elds.m"
                  case (MR_Integer) 1:
#line 4567 "erl_backend.elds.c"
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                    break;
#line 211 "elds.m"
                  case (MR_Integer) 2:
#line 4573 "erl_backend.elds.c"
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
#line 4586 "erl_backend.elds.c"
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
#line 4610 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                        break;
#line 211 "elds.m"
                      case (MR_Integer) 3:
#line 4616 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                        break;
#line 211 "elds.m"
                      case (MR_Integer) 4:
#line 4622 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                        break;
#line 211 "elds.m"
                      case (MR_Integer) 5:
#line 4628 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                        break;
#line 211 "elds.m"
                      case (MR_Integer) 6:
#line 4634 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                        break;
#line 211 "elds.m"
                      case (MR_Integer) 7:
#line 4640 "erl_backend.elds.c"
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
#line 4668 "erl_backend.elds.c"
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                    break;
#line 211 "elds.m"
                  case (MR_Integer) 1:
#line 4674 "erl_backend.elds.c"
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                    break;
#line 211 "elds.m"
                  case (MR_Integer) 2:
#line 4680 "erl_backend.elds.c"
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
#line 4693 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                        break;
#line 211 "elds.m"
                      case (MR_Integer) 1:
#line 4699 "erl_backend.elds.c"
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
#line 4723 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                        break;
#line 211 "elds.m"
                      case (MR_Integer) 4:
#line 4729 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                        break;
#line 211 "elds.m"
                      case (MR_Integer) 5:
#line 4735 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                        break;
#line 211 "elds.m"
                      case (MR_Integer) 6:
#line 4741 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                        break;
#line 211 "elds.m"
                      case (MR_Integer) 7:
#line 4747 "erl_backend.elds.c"
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
#line 4775 "erl_backend.elds.c"
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                    break;
#line 211 "elds.m"
                  case (MR_Integer) 1:
#line 4781 "erl_backend.elds.c"
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                    break;
#line 211 "elds.m"
                  case (MR_Integer) 2:
#line 4787 "erl_backend.elds.c"
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
#line 4800 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                        break;
#line 211 "elds.m"
                      case (MR_Integer) 1:
#line 4806 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                        break;
#line 211 "elds.m"
                      case (MR_Integer) 2:
#line 4812 "erl_backend.elds.c"
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
#line 4836 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                        break;
#line 211 "elds.m"
                      case (MR_Integer) 5:
#line 4842 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                        break;
#line 211 "elds.m"
                      case (MR_Integer) 6:
#line 4848 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                        break;
#line 211 "elds.m"
                      case (MR_Integer) 7:
#line 4854 "erl_backend.elds.c"
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
#line 4882 "erl_backend.elds.c"
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                    break;
#line 211 "elds.m"
                  case (MR_Integer) 1:
#line 4888 "erl_backend.elds.c"
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                    break;
#line 211 "elds.m"
                  case (MR_Integer) 2:
#line 4894 "erl_backend.elds.c"
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
#line 4907 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                        break;
#line 211 "elds.m"
                      case (MR_Integer) 1:
#line 4913 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                        break;
#line 211 "elds.m"
                      case (MR_Integer) 2:
#line 4919 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                        break;
#line 211 "elds.m"
                      case (MR_Integer) 3:
#line 4925 "erl_backend.elds.c"
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
#line 4949 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                        break;
#line 211 "elds.m"
                      case (MR_Integer) 6:
#line 4955 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                        break;
#line 211 "elds.m"
                      case (MR_Integer) 7:
#line 4961 "erl_backend.elds.c"
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
#line 4989 "erl_backend.elds.c"
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                    break;
#line 211 "elds.m"
                  case (MR_Integer) 1:
#line 4995 "erl_backend.elds.c"
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                    break;
#line 211 "elds.m"
                  case (MR_Integer) 2:
#line 5001 "erl_backend.elds.c"
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
#line 5014 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                        break;
#line 211 "elds.m"
                      case (MR_Integer) 1:
#line 5020 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                        break;
#line 211 "elds.m"
                      case (MR_Integer) 2:
#line 5026 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                        break;
#line 211 "elds.m"
                      case (MR_Integer) 3:
#line 5032 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                        break;
#line 211 "elds.m"
                      case (MR_Integer) 4:
#line 5038 "erl_backend.elds.c"
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
#line 5062 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                        break;
#line 211 "elds.m"
                      case (MR_Integer) 7:
#line 5068 "erl_backend.elds.c"
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
#line 5096 "erl_backend.elds.c"
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                    break;
#line 211 "elds.m"
                  case (MR_Integer) 1:
#line 5102 "erl_backend.elds.c"
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                    break;
#line 211 "elds.m"
                  case (MR_Integer) 2:
#line 5108 "erl_backend.elds.c"
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
#line 5121 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                        break;
#line 211 "elds.m"
                      case (MR_Integer) 1:
#line 5127 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                        break;
#line 211 "elds.m"
                      case (MR_Integer) 2:
#line 5133 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                        break;
#line 211 "elds.m"
                      case (MR_Integer) 3:
#line 5139 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                        break;
#line 211 "elds.m"
                      case (MR_Integer) 4:
#line 5145 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                        break;
#line 211 "elds.m"
                      case (MR_Integer) 5:
#line 5151 "erl_backend.elds.c"
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
#line 5175 "erl_backend.elds.c"
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
#line 5203 "erl_backend.elds.c"
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                    break;
#line 211 "elds.m"
                  case (MR_Integer) 1:
#line 5209 "erl_backend.elds.c"
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                    break;
#line 211 "elds.m"
                  case (MR_Integer) 2:
#line 5215 "erl_backend.elds.c"
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
#line 5228 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                        break;
#line 211 "elds.m"
                      case (MR_Integer) 1:
#line 5234 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                        break;
#line 211 "elds.m"
                      case (MR_Integer) 2:
#line 5240 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                        break;
#line 211 "elds.m"
                      case (MR_Integer) 3:
#line 5246 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                        break;
#line 211 "elds.m"
                      case (MR_Integer) 4:
#line 5252 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                        break;
#line 211 "elds.m"
                      case (MR_Integer) 5:
#line 5258 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                        break;
#line 211 "elds.m"
                      case (MR_Integer) 6:
#line 5264 "erl_backend.elds.c"
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
#line 5370 "erl_backend.elds.c"
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
#line 5395 "erl_backend.elds.c"
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
#line 5427 "erl_backend.elds.c"
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
#line 5452 "erl_backend.elds.c"
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
#line 5477 "erl_backend.elds.c"
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
#line 5502 "erl_backend.elds.c"
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
#line 5527 "erl_backend.elds.c"
                    {
#line 5529 "erl_backend.elds.c"
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
#line 5557 "erl_backend.elds.c"
                    erl_backend__elds__TypeInfo_28_28 = (MR_Word) &erl_backend__elds_scalar_common_1[14];
#line 5559 "erl_backend.elds.c"
                    {
#line 5561 "erl_backend.elds.c"
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
#line 5589 "erl_backend.elds.c"
                    erl_backend__elds__TypeInfo_29_29 = (MR_Word) &erl_backend__elds_scalar_common_1[0];
#line 5591 "erl_backend.elds.c"
                    {
#line 5593 "erl_backend.elds.c"
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
#line 5619 "erl_backend.elds.c"
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
#line 5664 "erl_backend.elds.c"
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
#line 5705 "erl_backend.elds.c"
                *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 110 "elds.m"
                break;
#line 110 "elds.m"
              case (MR_Integer) 2:
#line 5711 "erl_backend.elds.c"
                *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 110 "elds.m"
                break;
#line 110 "elds.m"
              case (MR_Integer) 3:
#line 5717 "erl_backend.elds.c"
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
#line 5741 "erl_backend.elds.c"
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
#line 5765 "erl_backend.elds.c"
                *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 110 "elds.m"
                break;
#line 110 "elds.m"
              case (MR_Integer) 3:
#line 5771 "erl_backend.elds.c"
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
#line 5795 "erl_backend.elds.c"
                *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 110 "elds.m"
                break;
#line 110 "elds.m"
              case (MR_Integer) 1:
#line 5801 "erl_backend.elds.c"
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
#line 5825 "erl_backend.elds.c"
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
#line 5853 "erl_backend.elds.c"
                *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 110 "elds.m"
                break;
#line 110 "elds.m"
              case (MR_Integer) 1:
#line 5859 "erl_backend.elds.c"
                *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 110 "elds.m"
                break;
#line 110 "elds.m"
              case (MR_Integer) 2:
#line 5865 "erl_backend.elds.c"
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
#line 5887 "erl_backend.elds.c"
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
#line 5907 "erl_backend.elds.c"
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
#line 5991 "erl_backend.elds.c"
                {
#line 5993 "erl_backend.elds.c"
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
#line 6019 "erl_backend.elds.c"
                {
#line 6021 "erl_backend.elds.c"
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
#line 6047 "erl_backend.elds.c"
                {
#line 6049 "erl_backend.elds.c"
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
#line 6087 "erl_backend.elds.c"
                {
#line 6089 "erl_backend.elds.c"
                  erl_backend__elds__succeeded = backend_libs__rtti____Unify____tc_name_0_0(erl_backend__elds__V_9_9, erl_backend__elds__V_12_12);
                }
#line 110 "elds.m"
                if (erl_backend__elds__succeeded)
#line 110 "elds.m"
                  {
#line 6096 "erl_backend.elds.c"
                    {
#line 6098 "erl_backend.elds.c"
                      erl_backend__elds__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(erl_backend__elds__V_10_10, erl_backend__elds__V_13_13);
                    }
#line 110 "elds.m"
                    if (erl_backend__elds__succeeded)
#line 6103 "erl_backend.elds.c"
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
#line 6146 "erl_backend.elds.c"
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
#line 6176 "erl_backend.elds.c"
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
#line 6200 "erl_backend.elds.c"
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
#line 6220 "erl_backend.elds.c"
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

#line 6295 "erl_backend.elds.c"
        {
#line 6297 "erl_backend.elds.c"
          erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_rtti_id_0_0(erl_backend__elds__V_3_3, erl_backend__elds__V_7_7);
        }
#line 100 "elds.m"
        if (erl_backend__elds__succeeded)
#line 100 "elds.m"
          {
#line 6304 "erl_backend.elds.c"
            erl_backend__elds__succeeded = (erl_backend__elds__V_4_4 == erl_backend__elds__V_8_8);
#line 100 "elds.m"
            if (erl_backend__elds__succeeded)
#line 100 "elds.m"
              {
#line 6310 "erl_backend.elds.c"
                erl_backend__elds__TypeInfo_13_13 = (MR_Word) &erl_backend__elds_scalar_common_1[9];
#line 6312 "erl_backend.elds.c"
                {
#line 6314 "erl_backend.elds.c"
                  erl_backend__elds__succeeded = mercury__builtin__unify_2_p_0(erl_backend__elds__TypeInfo_13_13, ((MR_Box) (erl_backend__elds__V_5_5)), ((MR_Box) (erl_backend__elds__V_9_9)));
                }
#line 100 "elds.m"
                if (erl_backend__elds__succeeded)
#line 6319 "erl_backend.elds.c"
                  {
#line 6321 "erl_backend.elds.c"
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
#line 6361 "erl_backend.elds.c"
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
#line 6387 "erl_backend.elds.c"
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
#line 6407 "erl_backend.elds.c"
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

#line 6476 "erl_backend.elds.c"
        erl_backend__elds__succeeded = (strcmp(erl_backend__elds__V_3_3, erl_backend__elds__V_6_6) == 0);
#line 91 "elds.m"
        if (erl_backend__elds__succeeded)
#line 91 "elds.m"
          {
#line 6482 "erl_backend.elds.c"
            erl_backend__elds__TypeInfo_11_11 = (MR_Word) &erl_backend__elds_scalar_common_1[9];
#line 6484 "erl_backend.elds.c"
            {
#line 6486 "erl_backend.elds.c"
              erl_backend__elds__succeeded = mercury__builtin__unify_2_p_0(erl_backend__elds__TypeInfo_11_11, ((MR_Box) (erl_backend__elds__V_4_4)), ((MR_Box) (erl_backend__elds__V_7_7)));
            }
#line 91 "elds.m"
            if (erl_backend__elds__succeeded)
#line 6491 "erl_backend.elds.c"
              {
#line 6493 "erl_backend.elds.c"
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
#line 6537 "erl_backend.elds.c"
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
#line 6578 "erl_backend.elds.c"
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                    break;
#line 136 "elds.m"
                  case (MR_Integer) 2:
#line 6584 "erl_backend.elds.c"
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
#line 6597 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                        break;
#line 136 "elds.m"
                      case (MR_Integer) 1:
#line 6603 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                        break;
#line 136 "elds.m"
                      case (MR_Integer) 2:
#line 6609 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                        break;
#line 136 "elds.m"
                      case (MR_Integer) 3:
#line 6615 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                        break;
#line 136 "elds.m"
                      case (MR_Integer) 4:
#line 6621 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                        break;
#line 136 "elds.m"
                      case (MR_Integer) 5:
#line 6627 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                        break;
#line 136 "elds.m"
                      case (MR_Integer) 6:
#line 6633 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                        break;
#line 136 "elds.m"
                      case (MR_Integer) 7:
#line 6639 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                        break;
#line 136 "elds.m"
                      case (MR_Integer) 8:
#line 6645 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                        break;
#line 136 "elds.m"
                      case (MR_Integer) 9:
#line 6651 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                        break;
#line 136 "elds.m"
                      case (MR_Integer) 10:
#line 6657 "erl_backend.elds.c"
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
#line 6685 "erl_backend.elds.c"
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
#line 6709 "erl_backend.elds.c"
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
#line 6722 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                        break;
#line 136 "elds.m"
                      case (MR_Integer) 1:
#line 6728 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                        break;
#line 136 "elds.m"
                      case (MR_Integer) 2:
#line 6734 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                        break;
#line 136 "elds.m"
                      case (MR_Integer) 3:
#line 6740 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                        break;
#line 136 "elds.m"
                      case (MR_Integer) 4:
#line 6746 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                        break;
#line 136 "elds.m"
                      case (MR_Integer) 5:
#line 6752 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                        break;
#line 136 "elds.m"
                      case (MR_Integer) 6:
#line 6758 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                        break;
#line 136 "elds.m"
                      case (MR_Integer) 7:
#line 6764 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                        break;
#line 136 "elds.m"
                      case (MR_Integer) 8:
#line 6770 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                        break;
#line 136 "elds.m"
                      case (MR_Integer) 9:
#line 6776 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                        break;
#line 136 "elds.m"
                      case (MR_Integer) 10:
#line 6782 "erl_backend.elds.c"
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
#line 6810 "erl_backend.elds.c"
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                    break;
#line 136 "elds.m"
                  case (MR_Integer) 1:
#line 6816 "erl_backend.elds.c"
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
#line 6847 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                        break;
#line 136 "elds.m"
                      case (MR_Integer) 1:
#line 6853 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                        break;
#line 136 "elds.m"
                      case (MR_Integer) 2:
#line 6859 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                        break;
#line 136 "elds.m"
                      case (MR_Integer) 3:
#line 6865 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                        break;
#line 136 "elds.m"
                      case (MR_Integer) 4:
#line 6871 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                        break;
#line 136 "elds.m"
                      case (MR_Integer) 5:
#line 6877 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                        break;
#line 136 "elds.m"
                      case (MR_Integer) 6:
#line 6883 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                        break;
#line 136 "elds.m"
                      case (MR_Integer) 7:
#line 6889 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                        break;
#line 136 "elds.m"
                      case (MR_Integer) 8:
#line 6895 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                        break;
#line 136 "elds.m"
                      case (MR_Integer) 9:
#line 6901 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                        break;
#line 136 "elds.m"
                      case (MR_Integer) 10:
#line 6907 "erl_backend.elds.c"
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
#line 6944 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                        break;
#line 136 "elds.m"
                      case (MR_Integer) 1:
#line 6950 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                        break;
#line 136 "elds.m"
                      case (MR_Integer) 2:
#line 6956 "erl_backend.elds.c"
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
#line 6983 "erl_backend.elds.c"
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
#line 7020 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 2:
#line 7026 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 3:
#line 7032 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 4:
#line 7038 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 5:
#line 7044 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 6:
#line 7050 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 7:
#line 7056 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 8:
#line 7062 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 9:
#line 7068 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 10:
#line 7074 "erl_backend.elds.c"
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
#line 7104 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                        break;
#line 136 "elds.m"
                      case (MR_Integer) 1:
#line 7110 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                        break;
#line 136 "elds.m"
                      case (MR_Integer) 2:
#line 7116 "erl_backend.elds.c"
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
#line 7129 "erl_backend.elds.c"
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
#line 7153 "erl_backend.elds.c"
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
#line 7190 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 3:
#line 7196 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 4:
#line 7202 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 5:
#line 7208 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 6:
#line 7214 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 7:
#line 7220 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 8:
#line 7226 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 9:
#line 7232 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 10:
#line 7238 "erl_backend.elds.c"
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
#line 7270 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                        break;
#line 136 "elds.m"
                      case (MR_Integer) 1:
#line 7276 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                        break;
#line 136 "elds.m"
                      case (MR_Integer) 2:
#line 7282 "erl_backend.elds.c"
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
#line 7295 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 1:
#line 7301 "erl_backend.elds.c"
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
#line 7327 "erl_backend.elds.c"
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
#line 7347 "erl_backend.elds.c"
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
#line 7386 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 4:
#line 7392 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 5:
#line 7398 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 6:
#line 7404 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 7:
#line 7410 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 8:
#line 7416 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 9:
#line 7422 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 10:
#line 7428 "erl_backend.elds.c"
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
#line 7458 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                        break;
#line 136 "elds.m"
                      case (MR_Integer) 1:
#line 7464 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                        break;
#line 136 "elds.m"
                      case (MR_Integer) 2:
#line 7470 "erl_backend.elds.c"
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
#line 7483 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 1:
#line 7489 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 2:
#line 7495 "erl_backend.elds.c"
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
#line 7515 "erl_backend.elds.c"
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
#line 7542 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 5:
#line 7548 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 6:
#line 7554 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 7:
#line 7560 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 8:
#line 7566 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 9:
#line 7572 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 10:
#line 7578 "erl_backend.elds.c"
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
#line 7606 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                        break;
#line 136 "elds.m"
                      case (MR_Integer) 1:
#line 7612 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                        break;
#line 136 "elds.m"
                      case (MR_Integer) 2:
#line 7618 "erl_backend.elds.c"
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
#line 7631 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 1:
#line 7637 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 2:
#line 7643 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 3:
#line 7649 "erl_backend.elds.c"
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
#line 7673 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 6:
#line 7679 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 7:
#line 7685 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 8:
#line 7691 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 9:
#line 7697 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 10:
#line 7703 "erl_backend.elds.c"
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
#line 7733 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                        break;
#line 136 "elds.m"
                      case (MR_Integer) 1:
#line 7739 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                        break;
#line 136 "elds.m"
                      case (MR_Integer) 2:
#line 7745 "erl_backend.elds.c"
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
#line 7758 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 1:
#line 7764 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 2:
#line 7770 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 3:
#line 7776 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 4:
#line 7782 "erl_backend.elds.c"
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
#line 7802 "erl_backend.elds.c"
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
#line 7829 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 7:
#line 7835 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 8:
#line 7841 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 9:
#line 7847 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 10:
#line 7853 "erl_backend.elds.c"
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
#line 7887 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                        break;
#line 136 "elds.m"
                      case (MR_Integer) 1:
#line 7893 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                        break;
#line 136 "elds.m"
                      case (MR_Integer) 2:
#line 7899 "erl_backend.elds.c"
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
#line 7912 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 1:
#line 7918 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 2:
#line 7924 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 3:
#line 7930 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 4:
#line 7936 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 5:
#line 7942 "erl_backend.elds.c"
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
#line 7966 "erl_backend.elds.c"
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
#line 7986 "erl_backend.elds.c"
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
#line 8006 "erl_backend.elds.c"
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
#line 8037 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 8:
#line 8043 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 9:
#line 8049 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 10:
#line 8055 "erl_backend.elds.c"
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
#line 8083 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                        break;
#line 136 "elds.m"
                      case (MR_Integer) 1:
#line 8089 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                        break;
#line 136 "elds.m"
                      case (MR_Integer) 2:
#line 8095 "erl_backend.elds.c"
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
#line 8108 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 1:
#line 8114 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 2:
#line 8120 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 3:
#line 8126 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 4:
#line 8132 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 5:
#line 8138 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 6:
#line 8144 "erl_backend.elds.c"
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
#line 8178 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 9:
#line 8184 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 10:
#line 8190 "erl_backend.elds.c"
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
#line 8220 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                        break;
#line 136 "elds.m"
                      case (MR_Integer) 1:
#line 8226 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                        break;
#line 136 "elds.m"
                      case (MR_Integer) 2:
#line 8232 "erl_backend.elds.c"
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
#line 8245 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 1:
#line 8251 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 2:
#line 8257 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 3:
#line 8263 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 4:
#line 8269 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 5:
#line 8275 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 6:
#line 8281 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 7:
#line 8287 "erl_backend.elds.c"
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
#line 8307 "erl_backend.elds.c"
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
#line 8330 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 10:
#line 8336 "erl_backend.elds.c"
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
#line 8366 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                        break;
#line 136 "elds.m"
                      case (MR_Integer) 1:
#line 8372 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                        break;
#line 136 "elds.m"
                      case (MR_Integer) 2:
#line 8378 "erl_backend.elds.c"
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
#line 8391 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 1:
#line 8397 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 2:
#line 8403 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 3:
#line 8409 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 4:
#line 8415 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 5:
#line 8421 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 6:
#line 8427 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 7:
#line 8433 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 8:
#line 8439 "erl_backend.elds.c"
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
#line 8459 "erl_backend.elds.c"
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
#line 8496 "erl_backend.elds.c"
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
#line 8524 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                        break;
#line 136 "elds.m"
                      case (MR_Integer) 1:
#line 8530 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                        break;
#line 136 "elds.m"
                      case (MR_Integer) 2:
#line 8536 "erl_backend.elds.c"
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
#line 8549 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 1:
#line 8555 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 2:
#line 8561 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 3:
#line 8567 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 4:
#line 8573 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 5:
#line 8579 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 6:
#line 8585 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 7:
#line 8591 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 8:
#line 8597 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 9:
#line 8603 "erl_backend.elds.c"
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
#line 8704 "erl_backend.elds.c"
                    {
#line 8706 "erl_backend.elds.c"
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
#line 8734 "erl_backend.elds.c"
                    erl_backend__elds__TypeInfo_55_55 = (MR_Word) &erl_backend__elds_scalar_common_1[14];
#line 8736 "erl_backend.elds.c"
                    {
#line 8738 "erl_backend.elds.c"
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
#line 8764 "erl_backend.elds.c"
                    {
#line 8766 "erl_backend.elds.c"
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
#line 8805 "erl_backend.elds.c"
                        {
#line 8807 "erl_backend.elds.c"
                          erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_expr_0_0(erl_backend__elds__V_7_7, erl_backend__elds__V_9_9);
                        }
#line 136 "elds.m"
                        if (erl_backend__elds__succeeded)
#line 8812 "erl_backend.elds.c"
                          {
#line 8814 "erl_backend.elds.c"
                            /* direct tailcall eliminated */
#line 8816 "erl_backend.elds.c"
                            {
#line 8818 "erl_backend.elds.c"
                              MR_Word erl_backend__elds__HeadVar__1__tmp_copy_1 = erl_backend__elds__V_8_8;
#line 8820 "erl_backend.elds.c"
                              MR_Word erl_backend__elds__HeadVar__2__tmp_copy_2 = erl_backend__elds__V_10_10;

#line 8823 "erl_backend.elds.c"
                              erl_backend__elds__HeadVar__2_2 = erl_backend__elds__HeadVar__2__tmp_copy_2;
#line 8825 "erl_backend.elds.c"
                              erl_backend__elds__HeadVar__1_1 = erl_backend__elds__HeadVar__1__tmp_copy_1;
#line 8827 "erl_backend.elds.c"
                            }
#line 8829 "erl_backend.elds.c"
                            continue;
#line 8831 "erl_backend.elds.c"
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
#line 8862 "erl_backend.elds.c"
                        erl_backend__elds__succeeded = (erl_backend__elds__V_11_11 == erl_backend__elds__V_13_13);
#line 136 "elds.m"
                        if (erl_backend__elds__succeeded)
#line 8866 "erl_backend.elds.c"
                          {
#line 8868 "erl_backend.elds.c"
                            /* direct tailcall eliminated */
#line 8870 "erl_backend.elds.c"
                            {
#line 8872 "erl_backend.elds.c"
                              MR_Word erl_backend__elds__HeadVar__1__tmp_copy_1 = erl_backend__elds__V_12_12;
#line 8874 "erl_backend.elds.c"
                              MR_Word erl_backend__elds__HeadVar__2__tmp_copy_2 = erl_backend__elds__V_14_14;

#line 8877 "erl_backend.elds.c"
                              erl_backend__elds__HeadVar__2_2 = erl_backend__elds__HeadVar__2__tmp_copy_2;
#line 8879 "erl_backend.elds.c"
                              erl_backend__elds__HeadVar__1_1 = erl_backend__elds__HeadVar__1__tmp_copy_1;
#line 8881 "erl_backend.elds.c"
                            }
#line 8883 "erl_backend.elds.c"
                            continue;
#line 8885 "erl_backend.elds.c"
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
#line 8922 "erl_backend.elds.c"
                        erl_backend__elds__succeeded = (erl_backend__elds__V_15_15 == erl_backend__elds__V_18_18);
#line 136 "elds.m"
                        if (erl_backend__elds__succeeded)
#line 136 "elds.m"
                          {
#line 8928 "erl_backend.elds.c"
                            {
#line 8930 "erl_backend.elds.c"
                              erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_expr_0_0(erl_backend__elds__V_16_16, erl_backend__elds__V_19_19);
                            }
#line 136 "elds.m"
                            if (erl_backend__elds__succeeded)
#line 8935 "erl_backend.elds.c"
                              {
#line 8937 "erl_backend.elds.c"
                                /* direct tailcall eliminated */
#line 8939 "erl_backend.elds.c"
                                {
#line 8941 "erl_backend.elds.c"
                                  MR_Word erl_backend__elds__HeadVar__1__tmp_copy_1 = erl_backend__elds__V_17_17;
#line 8943 "erl_backend.elds.c"
                                  MR_Word erl_backend__elds__HeadVar__2__tmp_copy_2 = erl_backend__elds__V_20_20;

#line 8946 "erl_backend.elds.c"
                                  erl_backend__elds__HeadVar__2_2 = erl_backend__elds__HeadVar__2__tmp_copy_2;
#line 8948 "erl_backend.elds.c"
                                  erl_backend__elds__HeadVar__1_1 = erl_backend__elds__HeadVar__1__tmp_copy_1;
#line 8950 "erl_backend.elds.c"
                                }
#line 8952 "erl_backend.elds.c"
                                continue;
#line 8954 "erl_backend.elds.c"
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
#line 8989 "erl_backend.elds.c"
                        {
#line 8991 "erl_backend.elds.c"
                          erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_call_target_0_0(erl_backend__elds__V_21_21, erl_backend__elds__V_23_23);
                        }
#line 136 "elds.m"
                        if (erl_backend__elds__succeeded)
#line 136 "elds.m"
                          {
#line 8998 "erl_backend.elds.c"
                            erl_backend__elds__TypeInfo_56_56 = (MR_Word) &erl_backend__elds_scalar_common_1[14];
#line 9000 "erl_backend.elds.c"
                            {
#line 9002 "erl_backend.elds.c"
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
#line 9030 "erl_backend.elds.c"
                        {
#line 9032 "erl_backend.elds.c"
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
#line 9066 "erl_backend.elds.c"
                        {
#line 9068 "erl_backend.elds.c"
                          erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_expr_0_0(erl_backend__elds__V_29_29, erl_backend__elds__V_31_31);
                        }
#line 136 "elds.m"
                        if (erl_backend__elds__succeeded)
#line 136 "elds.m"
                          {
#line 9075 "erl_backend.elds.c"
                            erl_backend__elds__TypeInfo_57_57 = (MR_Word) &erl_backend__elds_scalar_common_1[11];
#line 9077 "erl_backend.elds.c"
                            {
#line 9079 "erl_backend.elds.c"
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
#line 9131 "erl_backend.elds.c"
                        {
#line 9133 "erl_backend.elds.c"
                          erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_expr_0_0(erl_backend__elds__V_33_33, erl_backend__elds__V_37_37);
                        }
#line 136 "elds.m"
                        if (erl_backend__elds__succeeded)
#line 136 "elds.m"
                          {
#line 9140 "erl_backend.elds.c"
                            erl_backend__elds__TypeInfo_60_60 = (MR_Word) &erl_backend__elds_scalar_common_1[11];
#line 9142 "erl_backend.elds.c"
                            {
#line 9144 "erl_backend.elds.c"
                              erl_backend__elds__succeeded = mercury__builtin__unify_2_p_0(erl_backend__elds__TypeInfo_60_60, ((MR_Box) (erl_backend__elds__V_34_34)), ((MR_Box) (erl_backend__elds__V_38_38)));
                            }
#line 136 "elds.m"
                            if (erl_backend__elds__succeeded)
#line 136 "elds.m"
                              {
#line 9151 "erl_backend.elds.c"
                                erl_backend__elds__TypeInfo_61_61 = (MR_Word) &erl_backend__elds_scalar_common_1[12];
#line 9153 "erl_backend.elds.c"
                                {
#line 9155 "erl_backend.elds.c"
                                  erl_backend__elds__succeeded = mercury__builtin__unify_2_p_0(erl_backend__elds__TypeInfo_61_61, ((MR_Box) (erl_backend__elds__V_35_35)), ((MR_Box) (erl_backend__elds__V_39_39)));
                                }
#line 136 "elds.m"
                                if (erl_backend__elds__succeeded)
#line 136 "elds.m"
                                  {
#line 9162 "erl_backend.elds.c"
                                    erl_backend__elds__TypeInfo_62_62 = (MR_Word) &erl_backend__elds_scalar_common_1[13];
#line 9164 "erl_backend.elds.c"
                                    {
#line 9166 "erl_backend.elds.c"
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
#line 9198 "erl_backend.elds.c"
                        /* direct tailcall eliminated */
#line 9200 "erl_backend.elds.c"
                        {
#line 9202 "erl_backend.elds.c"
                          MR_Word erl_backend__elds__HeadVar__1__tmp_copy_1 = erl_backend__elds__V_41_41;
#line 9204 "erl_backend.elds.c"
                          MR_Word erl_backend__elds__HeadVar__2__tmp_copy_2 = erl_backend__elds__V_42_42;

#line 9207 "erl_backend.elds.c"
                          erl_backend__elds__HeadVar__2_2 = erl_backend__elds__HeadVar__2__tmp_copy_2;
#line 9209 "erl_backend.elds.c"
                          erl_backend__elds__HeadVar__1_1 = erl_backend__elds__HeadVar__1__tmp_copy_1;
#line 9211 "erl_backend.elds.c"
                        }
#line 9213 "erl_backend.elds.c"
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
#line 9244 "erl_backend.elds.c"
                        erl_backend__elds__succeeded = (strcmp(erl_backend__elds__V_43_43, erl_backend__elds__V_45_45) == 0);
#line 136 "elds.m"
                        if (erl_backend__elds__succeeded)
#line 9248 "erl_backend.elds.c"
                          {
#line 9250 "erl_backend.elds.c"
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
#line 9282 "erl_backend.elds.c"
                        {
#line 9284 "erl_backend.elds.c"
                          erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_expr_0_0(erl_backend__elds__V_47_47, erl_backend__elds__V_49_49);
                        }
#line 136 "elds.m"
                        if (erl_backend__elds__succeeded)
#line 9289 "erl_backend.elds.c"
                          {
#line 9291 "erl_backend.elds.c"
                            /* direct tailcall eliminated */
#line 9293 "erl_backend.elds.c"
                            {
#line 9295 "erl_backend.elds.c"
                              MR_Word erl_backend__elds__HeadVar__1__tmp_copy_1 = erl_backend__elds__V_48_48;
#line 9297 "erl_backend.elds.c"
                              MR_Word erl_backend__elds__HeadVar__2__tmp_copy_2 = erl_backend__elds__V_50_50;

#line 9300 "erl_backend.elds.c"
                              erl_backend__elds__HeadVar__2_2 = erl_backend__elds__HeadVar__2__tmp_copy_2;
#line 9302 "erl_backend.elds.c"
                              erl_backend__elds__HeadVar__1_1 = erl_backend__elds__HeadVar__1__tmp_copy_1;
#line 9304 "erl_backend.elds.c"
                            }
#line 9306 "erl_backend.elds.c"
                            continue;
#line 9308 "erl_backend.elds.c"
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
#line 9335 "erl_backend.elds.c"
                        erl_backend__elds__TypeInfo_59_59 = (MR_Word) &erl_backend__elds_scalar_common_1[11];
#line 9337 "erl_backend.elds.c"
                        {
#line 9339 "erl_backend.elds.c"
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
#line 9389 "erl_backend.elds.c"
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
#line 9419 "erl_backend.elds.c"
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
#line 9439 "erl_backend.elds.c"
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
#line 9459 "erl_backend.elds.c"
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

#line 9540 "erl_backend.elds.c"
        {
#line 9542 "erl_backend.elds.c"
          erl_backend__elds__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(erl_backend__elds__V_3_3, erl_backend__elds__V_7_7);
        }
#line 73 "elds.m"
        if (erl_backend__elds__succeeded)
#line 73 "elds.m"
          {
#line 9549 "erl_backend.elds.c"
            erl_backend__elds__TypeInfo_14_14 = (MR_Word) &erl_backend__elds_scalar_common_1[9];
#line 9551 "erl_backend.elds.c"
            {
#line 9553 "erl_backend.elds.c"
              erl_backend__elds__succeeded = mercury__builtin__unify_2_p_0(erl_backend__elds__TypeInfo_14_14, ((MR_Box) (erl_backend__elds__V_4_4)), ((MR_Box) (erl_backend__elds__V_8_8)));
            }
#line 73 "elds.m"
            if (erl_backend__elds__succeeded)
#line 73 "elds.m"
              {
#line 9560 "erl_backend.elds.c"
                {
#line 9562 "erl_backend.elds.c"
                  erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_body_0_0(erl_backend__elds__V_5_5, erl_backend__elds__V_9_9);
                }
#line 73 "elds.m"
                if (erl_backend__elds__succeeded)
#line 73 "elds.m"
                  {
#line 9569 "erl_backend.elds.c"
                    erl_backend__elds__TypeInfo_15_15 = (MR_Word) &erl_backend__elds_scalar_common_1[10];
#line 9571 "erl_backend.elds.c"
                    {
#line 9573 "erl_backend.elds.c"
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
#line 9615 "erl_backend.elds.c"
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
#line 9637 "erl_backend.elds.c"
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

#line 9698 "erl_backend.elds.c"
        {
#line 9700 "erl_backend.elds.c"
          erl_backend__elds__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &erl_backend__elds_scalar_common_1[8], ((MR_Box) (erl_backend__elds__V_3_3)), ((MR_Box) (erl_backend__elds__V_5_5)));
        }
#line 128 "elds.m"
        if (erl_backend__elds__succeeded)
#line 9705 "erl_backend.elds.c"
          {
#line 9707 "erl_backend.elds.c"
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
#line 9743 "erl_backend.elds.c"
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
#line 9769 "erl_backend.elds.c"
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
#line 9789 "erl_backend.elds.c"
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

#line 9856 "erl_backend.elds.c"
        {
#line 9858 "erl_backend.elds.c"
          erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_term_0_0(erl_backend__elds__V_3_3, erl_backend__elds__V_6_6);
        }
#line 258 "elds.m"
        if (erl_backend__elds__succeeded)
#line 258 "elds.m"
          {
#line 9865 "erl_backend.elds.c"
            {
#line 9867 "erl_backend.elds.c"
              erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_term_0_0(erl_backend__elds__V_4_4, erl_backend__elds__V_7_7);
            }
#line 258 "elds.m"
            if (erl_backend__elds__succeeded)
#line 9872 "erl_backend.elds.c"
              {
#line 9874 "erl_backend.elds.c"
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
#line 9912 "erl_backend.elds.c"
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
#line 9934 "erl_backend.elds.c"
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

#line 9995 "erl_backend.elds.c"
        {
#line 9997 "erl_backend.elds.c"
          erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_term_0_0(erl_backend__elds__V_3_3, erl_backend__elds__V_5_5);
        }
#line 255 "elds.m"
        if (erl_backend__elds__succeeded)
#line 10002 "erl_backend.elds.c"
          {
#line 10004 "erl_backend.elds.c"
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
#line 10040 "erl_backend.elds.c"
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
#line 10081 "erl_backend.elds.c"
                *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 250 "elds.m"
                break;
#line 250 "elds.m"
              case (MR_Integer) 2:
#line 10087 "erl_backend.elds.c"
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
#line 10111 "erl_backend.elds.c"
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
#line 10135 "erl_backend.elds.c"
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
#line 10159 "erl_backend.elds.c"
                *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 250 "elds.m"
                break;
#line 250 "elds.m"
              case (MR_Integer) 1:
#line 10165 "erl_backend.elds.c"
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
#line 10248 "erl_backend.elds.c"
                {
#line 10250 "erl_backend.elds.c"
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
#line 10276 "erl_backend.elds.c"
                {
#line 10278 "erl_backend.elds.c"
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
#line 10304 "erl_backend.elds.c"
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
#line 10345 "erl_backend.elds.c"
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
#line 10374 "erl_backend.elds.c"
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
#line 10387 "erl_backend.elds.c"
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
#line 10455 "erl_backend.elds.c"
            {
#line 10457 "erl_backend.elds.c"
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
#line 10481 "erl_backend.elds.c"
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
#line 10535 "erl_backend.elds.c"
  {
#line 10537 "erl_backend.elds.c"
    MR_bool erl_backend__elds__succeeded = (erl_backend__elds__HeadVar__2_1 == erl_backend__elds__HeadVar__2_2);

#line 10540 "erl_backend.elds.c"
    return erl_backend__elds__succeeded;
#line 10542 "erl_backend.elds.c"
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
#line 10571 "erl_backend.elds.c"
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
#line 10621 "erl_backend.elds.c"
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
#line 10641 "erl_backend.elds.c"
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
#line 10661 "erl_backend.elds.c"
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
#line 10681 "erl_backend.elds.c"
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
#line 10701 "erl_backend.elds.c"
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
#line 10721 "erl_backend.elds.c"
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
#line 10741 "erl_backend.elds.c"
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
#line 10761 "erl_backend.elds.c"
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

#line 10884 "erl_backend.elds.c"
        {
#line 10886 "erl_backend.elds.c"
          erl_backend__elds__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(erl_backend__elds__V_3_3, erl_backend__elds__V_12_12);
        }
#line 43 "elds.m"
        if (erl_backend__elds__succeeded)
#line 43 "elds.m"
          {
#line 10893 "erl_backend.elds.c"
            erl_backend__elds__TypeInfo_24_24 = (MR_Word) &erl_backend__elds_scalar_common_1[1];
#line 10895 "erl_backend.elds.c"
            {
#line 10897 "erl_backend.elds.c"
              erl_backend__elds__succeeded = mercury__builtin__unify_2_p_0(erl_backend__elds__TypeInfo_24_24, ((MR_Box) (erl_backend__elds__V_4_4)), ((MR_Box) (erl_backend__elds__V_13_13)));
            }
#line 43 "elds.m"
            if (erl_backend__elds__succeeded)
#line 43 "elds.m"
              {
#line 10904 "erl_backend.elds.c"
                erl_backend__elds__TypeInfo_25_25 = (MR_Word) &erl_backend__elds_scalar_common_1[2];
#line 10906 "erl_backend.elds.c"
                {
#line 10908 "erl_backend.elds.c"
                  erl_backend__elds__succeeded = mercury__builtin__unify_2_p_0(erl_backend__elds__TypeInfo_25_25, ((MR_Box) (erl_backend__elds__V_5_5)), ((MR_Box) (erl_backend__elds__V_14_14)));
                }
#line 43 "elds.m"
                if (erl_backend__elds__succeeded)
#line 43 "elds.m"
                  {
#line 10915 "erl_backend.elds.c"
                    erl_backend__elds__TypeInfo_26_26 = (MR_Word) &erl_backend__elds_scalar_common_1[3];
#line 10917 "erl_backend.elds.c"
                    {
#line 10919 "erl_backend.elds.c"
                      erl_backend__elds__succeeded = mercury__builtin__unify_2_p_0(erl_backend__elds__TypeInfo_26_26, ((MR_Box) (erl_backend__elds__V_6_6)), ((MR_Box) (erl_backend__elds__V_15_15)));
                    }
#line 43 "elds.m"
                    if (erl_backend__elds__succeeded)
#line 43 "elds.m"
                      {
#line 10926 "erl_backend.elds.c"
                        erl_backend__elds__TypeInfo_27_27 = (MR_Word) &erl_backend__elds_scalar_common_1[4];
#line 10928 "erl_backend.elds.c"
                        {
#line 10930 "erl_backend.elds.c"
                          erl_backend__elds__succeeded = mercury__builtin__unify_2_p_0(erl_backend__elds__TypeInfo_27_27, ((MR_Box) (erl_backend__elds__V_7_7)), ((MR_Box) (erl_backend__elds__V_16_16)));
                        }
#line 43 "elds.m"
                        if (erl_backend__elds__succeeded)
#line 43 "elds.m"
                          {
#line 10937 "erl_backend.elds.c"
                            erl_backend__elds__TypeInfo_28_28 = (MR_Word) &erl_backend__elds_scalar_common_1[5];
#line 10939 "erl_backend.elds.c"
                            {
#line 10941 "erl_backend.elds.c"
                              erl_backend__elds__succeeded = mercury__builtin__unify_2_p_0(erl_backend__elds__TypeInfo_28_28, ((MR_Box) (erl_backend__elds__V_8_8)), ((MR_Box) (erl_backend__elds__V_17_17)));
                            }
#line 43 "elds.m"
                            if (erl_backend__elds__succeeded)
#line 43 "elds.m"
                              {
#line 10948 "erl_backend.elds.c"
                                erl_backend__elds__TypeInfo_29_29 = (MR_Word) &erl_backend__elds_scalar_common_1[6];
#line 10950 "erl_backend.elds.c"
                                {
#line 10952 "erl_backend.elds.c"
                                  erl_backend__elds__succeeded = mercury__builtin__unify_2_p_0(erl_backend__elds__TypeInfo_29_29, ((MR_Box) (erl_backend__elds__V_9_9)), ((MR_Box) (erl_backend__elds__V_18_18)));
                                }
#line 43 "elds.m"
                                if (erl_backend__elds__succeeded)
#line 43 "elds.m"
                                  {
#line 10959 "erl_backend.elds.c"
                                    erl_backend__elds__TypeInfo_30_30 = (MR_Word) &erl_backend__elds_scalar_common_1[7];
#line 10961 "erl_backend.elds.c"
                                    {
#line 10963 "erl_backend.elds.c"
                                      erl_backend__elds__succeeded = mercury__builtin__unify_2_p_0(erl_backend__elds__TypeInfo_30_30, ((MR_Box) (erl_backend__elds__V_10_10)), ((MR_Box) (erl_backend__elds__V_19_19)));
                                    }
#line 43 "elds.m"
                                    if (erl_backend__elds__succeeded)
#line 43 "elds.m"
                                      {
#line 10970 "erl_backend.elds.c"
                                        erl_backend__elds__TypeInfo_31_31 = (MR_Word) &erl_backend__elds_scalar_common_1[7];
#line 10972 "erl_backend.elds.c"
                                        {
#line 10974 "erl_backend.elds.c"
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
