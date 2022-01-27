/*
** Automatically generated from `elds.m'
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


/* :- module erl_backend.elds. */
/* :- implementation. */

/*
INIT mercury__erl_backend__elds__init
ENDINIT
*/

#include "erl_backend.elds.mih"


#include "analysis.mih"
#include "backend_libs.mih"
#include "check_hlds.mih"
#include "erl_backend.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
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




#line 143 "erl_backend.elds.c"
static const MR_FA_PseudoTypeInfo_Struct1 erl_backend__elds__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 146 "erl_backend.elds.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__elds__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0;

#line 149 "erl_backend.elds.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__elds__list__ti_list_1parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0;

#line 152 "erl_backend.elds.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__elds__list__ti_list_1parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0;

#line 155 "erl_backend.elds.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__elds__list__ti_list_1erl_backend__elds__type_ctor_info_elds_defn_0;

#line 158 "erl_backend.elds.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__elds__list__ti_list_1erl_backend__elds__type_ctor_info_elds_foreign_export_defn_0;

#line 161 "erl_backend.elds.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__elds__list__ti_list_1erl_backend__elds__type_ctor_info_elds_rtti_defn_0;

#line 164 "erl_backend.elds.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__elds__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

#line 167 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_0_0[9];

#line 170 "erl_backend.elds.c"
static const MR_ConstString erl_backend__elds__erl_backend__elds__field_names_elds_0_0[9];

#line 173 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_0_0;

#line 176 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_0_0[1];

#line 179 "erl_backend.elds.c"
static const MR_DuPtagLayout erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_0[1];

#line 182 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_name_ordered_elds_0[1];

#line 185 "erl_backend.elds.c"
static const MR_Integer erl_backend__elds__erl_backend__elds__functor_number_map_elds_0[1];

#line 188 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_0;

#line 191 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_1;

#line 194 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_2;

#line 197 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_3;

#line 200 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_4;

#line 203 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_5;

#line 206 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_6;

#line 209 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_7;

#line 212 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_8;

#line 215 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_9;

#line 218 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_10;

#line 221 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_11;

#line 224 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_12;

#line 227 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_13;

#line 230 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_14;

#line 233 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_15;

#line 236 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_16;

#line 239 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_17;

#line 242 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_18;

#line 245 "erl_backend.elds.c"
static const MR_EnumFunctorDescPtr erl_backend__elds__erl_backend__elds__enum_value_ordered_elds_binop_0[19];

#line 248 "erl_backend.elds.c"
static const MR_EnumFunctorDescPtr erl_backend__elds__erl_backend__elds__enum_name_ordered_elds_binop_0[19];

#line 251 "erl_backend.elds.c"
static const MR_Integer erl_backend__elds__erl_backend__elds__functor_number_map_elds_binop_0[19];

#line 254 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_body_0_0[1];

#line 257 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_body_0_0;

#line 260 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_body_0_1[1];

#line 263 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_body_0_1;

#line 266 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_body_0_0[1];

#line 269 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_body_0_1[1];

#line 272 "erl_backend.elds.c"
static const MR_DuPtagLayout erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_body_0[2];

#line 275 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_name_ordered_elds_body_0[2];

#line 278 "erl_backend.elds.c"
static const MR_Integer erl_backend__elds__erl_backend__elds__functor_number_map_elds_body_0[2];

#line 281 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_call_target_0_0[1];

#line 284 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_call_target_0_0;

#line 287 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_call_target_0_1[1];

#line 290 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_call_target_0_1;

#line 293 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_call_target_0_2[1];

#line 296 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_call_target_0_2;

#line 299 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_call_target_0_0[1];

#line 302 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_call_target_0_1[1];

#line 305 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_call_target_0_2[1];

#line 308 "erl_backend.elds.c"
static const MR_DuPtagLayout erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_call_target_0[3];

#line 311 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_name_ordered_elds_call_target_0[3];

#line 314 "erl_backend.elds.c"
static const MR_Integer erl_backend__elds__erl_backend__elds__functor_number_map_elds_call_target_0[3];

#line 317 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_case_0_0[2];

#line 320 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_case_0_0;

#line 323 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_case_0_0[1];

#line 326 "erl_backend.elds.c"
static const MR_DuPtagLayout erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_case_0[1];

#line 329 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_name_ordered_elds_case_0[1];

#line 332 "erl_backend.elds.c"
static const MR_Integer erl_backend__elds__erl_backend__elds__functor_number_map_elds_case_0[1];

#line 335 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_catch_0_0[3];

#line 338 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_catch_0_0;

#line 341 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_catch_0_0[1];

#line 344 "erl_backend.elds.c"
static const MR_DuPtagLayout erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_catch_0[1];

#line 347 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_name_ordered_elds_catch_0[1];

#line 350 "erl_backend.elds.c"
static const MR_Integer erl_backend__elds__erl_backend__elds__functor_number_map_elds_catch_0[1];

#line 353 "erl_backend.elds.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__elds__list__ti_list_1erl_backend__elds__type_ctor_info_elds_term_0;

#line 356 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_clause_0_0[2];

#line 359 "erl_backend.elds.c"
static const MR_ConstString erl_backend__elds__erl_backend__elds__field_names_elds_clause_0_0[2];

#line 362 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_clause_0_0;

#line 365 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_clause_0_0[1];

#line 368 "erl_backend.elds.c"
static const MR_DuPtagLayout erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_clause_0[1];

#line 371 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_name_ordered_elds_clause_0[1];

#line 374 "erl_backend.elds.c"
static const MR_Integer erl_backend__elds__erl_backend__elds__functor_number_map_elds_clause_0[1];

#line 377 "erl_backend.elds.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__elds__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 380 "erl_backend.elds.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__elds__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0;

#line 383 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_defn_0_0[4];

#line 386 "erl_backend.elds.c"
static const MR_ConstString erl_backend__elds__erl_backend__elds__field_names_elds_defn_0_0[4];

#line 389 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_defn_0_0;

#line 392 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_defn_0_0[1];

#line 395 "erl_backend.elds.c"
static const MR_DuPtagLayout erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_defn_0[1];

#line 398 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_name_ordered_elds_defn_0[1];

#line 401 "erl_backend.elds.c"
static const MR_Integer erl_backend__elds__erl_backend__elds__functor_number_map_elds_defn_0[1];

#line 404 "erl_backend.elds.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__elds__list__ti_list_1erl_backend__elds__type_ctor_info_elds_expr_0;

#line 407 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_0[1];

#line 410 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_0;

#line 413 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_1[1];

#line 416 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_1;

#line 419 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_2[2];

#line 422 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_2;

#line 425 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_3[2];

#line 428 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_3;

#line 431 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_4[3];

#line 434 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_4;

#line 437 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_5[2];

#line 440 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_5;

#line 443 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_6[1];

#line 446 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_6;

#line 449 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_7[1];

#line 452 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_7;

#line 455 "erl_backend.elds.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__elds__list__ti_list_1erl_backend__elds__type_ctor_info_elds_case_0;

#line 458 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_8[2];

#line 461 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_8;

#line 464 "erl_backend.elds.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__elds__maybe__ti_maybe_1erl_backend__elds__type_ctor_info_elds_catch_0;

#line 467 "erl_backend.elds.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__elds__maybe__ti_maybe_1erl_backend__elds__type_ctor_info_elds_expr_0;

#line 470 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_9[4];

#line 473 "erl_backend.elds.c"
static const MR_ConstString erl_backend__elds__erl_backend__elds__field_names_elds_expr_0_9[4];

#line 476 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_9;

#line 479 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_10[1];

#line 482 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_10;

#line 485 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_11[2];

#line 488 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_11;

#line 491 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_12[2];

#line 494 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_12;

#line 497 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_13[1];

#line 500 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_13;

#line 503 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_expr_0_0[1];

#line 506 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_expr_0_1[1];

#line 509 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_expr_0_2[1];

#line 512 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_expr_0_3[11];

#line 515 "erl_backend.elds.c"
static const MR_DuPtagLayout erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_expr_0[4];

#line 518 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_name_ordered_elds_expr_0[14];

#line 521 "erl_backend.elds.c"
static const MR_Integer erl_backend__elds__erl_backend__elds__functor_number_map_elds_expr_0[14];

#line 524 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_foreign_export_defn_0_0[3];

#line 527 "erl_backend.elds.c"
static const MR_ConstString erl_backend__elds__erl_backend__elds__field_names_elds_foreign_export_defn_0_0[3];

#line 530 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_foreign_export_defn_0_0;

#line 533 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_foreign_export_defn_0_0[1];

#line 536 "erl_backend.elds.c"
static const MR_DuPtagLayout erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_foreign_export_defn_0[1];

#line 539 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_name_ordered_elds_foreign_export_defn_0[1];

#line 542 "erl_backend.elds.c"
static const MR_Integer erl_backend__elds__erl_backend__elds__functor_number_map_elds_foreign_export_defn_0[1];

#line 545 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_rtti_defn_0_0[4];

#line 548 "erl_backend.elds.c"
static const MR_ConstString erl_backend__elds__erl_backend__elds__field_names_elds_rtti_defn_0_0[4];

#line 551 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_rtti_defn_0_0;

#line 554 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_rtti_defn_0_0[1];

#line 557 "erl_backend.elds.c"
static const MR_DuPtagLayout erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_rtti_defn_0[1];

#line 560 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_name_ordered_elds_rtti_defn_0[1];

#line 563 "erl_backend.elds.c"
static const MR_Integer erl_backend__elds__erl_backend__elds__functor_number_map_elds_rtti_defn_0[1];

#line 566 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_rtti_id_0_0[1];

#line 569 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_rtti_id_0_0;

#line 572 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_rtti_id_0_1[1];

#line 575 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_rtti_id_0_1;

#line 578 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_rtti_id_0_2[1];

#line 581 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_rtti_id_0_2;

#line 584 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_rtti_id_0_3[3];

#line 587 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_rtti_id_0_3;

#line 590 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_rtti_id_0_0[1];

#line 593 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_rtti_id_0_1[1];

#line 596 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_rtti_id_0_2[1];

#line 599 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_rtti_id_0_3[1];

#line 602 "erl_backend.elds.c"
static const MR_DuPtagLayout erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_rtti_id_0[4];

#line 605 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_name_ordered_elds_rtti_id_0[4];

#line 608 "erl_backend.elds.c"
static const MR_Integer erl_backend__elds__erl_backend__elds__functor_number_map_elds_rtti_id_0[4];

#line 611 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_term_0_0[1];

#line 614 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_0;

#line 617 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_term_0_1[1];

#line 620 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_1;

#line 623 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_term_0_2[1];

#line 626 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_2;

#line 629 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_term_0_3[1];

#line 632 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_3;

#line 635 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_term_0_4[1];

#line 638 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_4;

#line 641 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_term_0_5[1];

#line 644 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_5;

#line 647 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_term_0_6[1];

#line 650 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_6;

#line 653 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_term_0_7[1];

#line 656 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_7;

#line 659 "erl_backend.elds.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__elds__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 662 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_term_0_8[1];

#line 665 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_8;

#line 668 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_9;

#line 671 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_term_0_10[1];

#line 674 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_10;

#line 677 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_term_0_0[1];

#line 680 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_term_0_1[1];

#line 683 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_term_0_2[1];

#line 686 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_term_0_3[8];

#line 689 "erl_backend.elds.c"
static const MR_DuPtagLayout erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_term_0[4];

#line 692 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_name_ordered_elds_term_0[11];

#line 695 "erl_backend.elds.c"
static const MR_Integer erl_backend__elds__erl_backend__elds__functor_number_map_elds_term_0[11];

#line 698 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_unop_0_0;

#line 701 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_unop_0_1;

#line 704 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_unop_0_2;

#line 707 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_unop_0_3;

#line 710 "erl_backend.elds.c"
static const MR_EnumFunctorDescPtr erl_backend__elds__erl_backend__elds__enum_value_ordered_elds_unop_0[4];

#line 713 "erl_backend.elds.c"
static const MR_EnumFunctorDescPtr erl_backend__elds__erl_backend__elds__enum_name_ordered_elds_unop_0[4];

#line 716 "erl_backend.elds.c"
static const MR_Integer erl_backend__elds__erl_backend__elds__functor_number_map_elds_unop_0[4];

#line 719 "erl_backend.elds.c"
static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_0_0_10001(
#line 722 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_1,
#line 724 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2);

#line 727 "erl_backend.elds.c"
static void MR_CALL 
erl_backend__elds____Compare____elds_0_0_10001(
#line 730 "erl_backend.elds.c"
  MR_Box * erl_backend__elds__wrapper_arg_1,
#line 732 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2,
#line 734 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_3);

#line 737 "erl_backend.elds.c"
static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_binop_0_0_10001(
#line 740 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_1,
#line 742 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2);

#line 745 "erl_backend.elds.c"
static void MR_CALL 
erl_backend__elds____Compare____elds_binop_0_0_10001(
#line 748 "erl_backend.elds.c"
  MR_Box * erl_backend__elds__wrapper_arg_1,
#line 750 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2,
#line 752 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_3);

#line 755 "erl_backend.elds.c"
static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_body_0_0_10001(
#line 758 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_1,
#line 760 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2);

#line 763 "erl_backend.elds.c"
static void MR_CALL 
erl_backend__elds____Compare____elds_body_0_0_10001(
#line 766 "erl_backend.elds.c"
  MR_Box * erl_backend__elds__wrapper_arg_1,
#line 768 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2,
#line 770 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_3);

#line 773 "erl_backend.elds.c"
static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_call_target_0_0_10001(
#line 776 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_1,
#line 778 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2);

#line 781 "erl_backend.elds.c"
static void MR_CALL 
erl_backend__elds____Compare____elds_call_target_0_0_10001(
#line 784 "erl_backend.elds.c"
  MR_Box * erl_backend__elds__wrapper_arg_1,
#line 786 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2,
#line 788 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_3);

#line 791 "erl_backend.elds.c"
static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_case_0_0_10001(
#line 794 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_1,
#line 796 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2);

#line 799 "erl_backend.elds.c"
static void MR_CALL 
erl_backend__elds____Compare____elds_case_0_0_10001(
#line 802 "erl_backend.elds.c"
  MR_Box * erl_backend__elds__wrapper_arg_1,
#line 804 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2,
#line 806 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_3);

#line 809 "erl_backend.elds.c"
static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_catch_0_0_10001(
#line 812 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_1,
#line 814 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2);

#line 817 "erl_backend.elds.c"
static void MR_CALL 
erl_backend__elds____Compare____elds_catch_0_0_10001(
#line 820 "erl_backend.elds.c"
  MR_Box * erl_backend__elds__wrapper_arg_1,
#line 822 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2,
#line 824 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_3);

#line 827 "erl_backend.elds.c"
static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_clause_0_0_10001(
#line 830 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_1,
#line 832 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2);

#line 835 "erl_backend.elds.c"
static void MR_CALL 
erl_backend__elds____Compare____elds_clause_0_0_10001(
#line 838 "erl_backend.elds.c"
  MR_Box * erl_backend__elds__wrapper_arg_1,
#line 840 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2,
#line 842 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_3);

#line 845 "erl_backend.elds.c"
static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_defn_0_0_10001(
#line 848 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_1,
#line 850 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2);

#line 853 "erl_backend.elds.c"
static void MR_CALL 
erl_backend__elds____Compare____elds_defn_0_0_10001(
#line 856 "erl_backend.elds.c"
  MR_Box * erl_backend__elds__wrapper_arg_1,
#line 858 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2,
#line 860 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_3);

#line 863 "erl_backend.elds.c"
static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_expr_0_0_10001(
#line 866 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_1,
#line 868 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2);

#line 871 "erl_backend.elds.c"
static void MR_CALL 
erl_backend__elds____Compare____elds_expr_0_0_10001(
#line 874 "erl_backend.elds.c"
  MR_Box * erl_backend__elds__wrapper_arg_1,
#line 876 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2,
#line 878 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_3);

#line 881 "erl_backend.elds.c"
static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_foreign_export_defn_0_0_10001(
#line 884 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_1,
#line 886 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2);

#line 889 "erl_backend.elds.c"
static void MR_CALL 
erl_backend__elds____Compare____elds_foreign_export_defn_0_0_10001(
#line 892 "erl_backend.elds.c"
  MR_Box * erl_backend__elds__wrapper_arg_1,
#line 894 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2,
#line 896 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_3);

#line 899 "erl_backend.elds.c"
static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_rtti_defn_0_0_10001(
#line 902 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_1,
#line 904 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2);

#line 907 "erl_backend.elds.c"
static void MR_CALL 
erl_backend__elds____Compare____elds_rtti_defn_0_0_10001(
#line 910 "erl_backend.elds.c"
  MR_Box * erl_backend__elds__wrapper_arg_1,
#line 912 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2,
#line 914 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_3);

#line 917 "erl_backend.elds.c"
static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_rtti_id_0_0_10001(
#line 920 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_1,
#line 922 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2);

#line 925 "erl_backend.elds.c"
static void MR_CALL 
erl_backend__elds____Compare____elds_rtti_id_0_0_10001(
#line 928 "erl_backend.elds.c"
  MR_Box * erl_backend__elds__wrapper_arg_1,
#line 930 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2,
#line 932 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_3);

#line 935 "erl_backend.elds.c"
static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_term_0_0_10001(
#line 938 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_1,
#line 940 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2);

#line 943 "erl_backend.elds.c"
static void MR_CALL 
erl_backend__elds____Compare____elds_term_0_0_10001(
#line 946 "erl_backend.elds.c"
  MR_Box * erl_backend__elds__wrapper_arg_1,
#line 948 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2,
#line 950 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_3);

#line 953 "erl_backend.elds.c"
static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_unop_0_0_10001(
#line 956 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_1,
#line 958 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2);

#line 961 "erl_backend.elds.c"
static void MR_CALL 
erl_backend__elds____Compare____elds_unop_0_0_10001(
#line 964 "erl_backend.elds.c"
  MR_Box * erl_backend__elds__wrapper_arg_1,
#line 966 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2,
#line 968 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_3);

#line 423 "elds.m"
static MR_Word MR_CALL 
erl_backend__elds__IntroducedFrom__func__exprs_from_fixed_vars__423__1_1_f_0(
#line 423 "elds.m"
  MR_String erl_backend__elds__LambdaHeadVar__1_6);

#line 421 "elds.m"
static MR_Word MR_CALL 
erl_backend__elds__IntroducedFrom__func__terms_from_fixed_vars__421__1_1_f_0(
#line 421 "elds.m"
  MR_String erl_backend__elds__LambdaHeadVar__1_6);

#line 423 "elds.m"
static MR_Box MR_CALL 
erl_backend__elds__exprs_from_fixed_vars_1_f_0_1(
#line 423 "elds.m"
  MR_Box erl_backend__elds__closure_arg,
#line 423 "elds.m"
  MR_Box erl_backend__elds__wrapper_arg_1);

#line 421 "elds.m"
static MR_Box MR_CALL 
erl_backend__elds__terms_from_fixed_vars_1_f_0_1(
#line 421 "elds.m"
  MR_Box erl_backend__elds__closure_arg,
#line 421 "elds.m"
  MR_Box erl_backend__elds__wrapper_arg_1);

#line 418 "elds.m"
static MR_Box MR_CALL 
erl_backend__elds__exprs_from_vars_1_f_0_1(
#line 418 "elds.m"
  MR_Box erl_backend__elds__closure_arg,
#line 418 "elds.m"
  MR_Box erl_backend__elds__wrapper_arg_1);

#line 415 "elds.m"
static MR_Box MR_CALL 
erl_backend__elds__terms_from_vars_1_f_0_1(
#line 415 "elds.m"
  MR_Box erl_backend__elds__closure_arg,
#line 415 "elds.m"
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
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 1240 "erl_backend.elds.c"
static const MR_FA_PseudoTypeInfo_Struct1 erl_backend__elds__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1248 "erl_backend.elds.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__elds__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
  }
};

#line 1256 "erl_backend.elds.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__elds__list__ti_list_1parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0
  }
};

#line 1264 "erl_backend.elds.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__elds__list__ti_list_1parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0
  }
};

#line 1272 "erl_backend.elds.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__elds__list__ti_list_1erl_backend__elds__type_ctor_info_elds_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_defn_0
  }
};

#line 1280 "erl_backend.elds.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__elds__list__ti_list_1erl_backend__elds__type_ctor_info_elds_foreign_export_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_foreign_export_defn_0
  }
};

#line 1288 "erl_backend.elds.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__elds__list__ti_list_1erl_backend__elds__type_ctor_info_elds_rtti_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_rtti_defn_0
  }
};

#line 1296 "erl_backend.elds.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__elds__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

#line 1304 "erl_backend.elds.c"
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

#line 1317 "erl_backend.elds.c"
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

#line 1330 "erl_backend.elds.c"
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

#line 1345 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_0_0[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_0_0
};

#line 1350 "erl_backend.elds.c"
static const MR_DuPtagLayout erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_0_0
  }
};

#line 1359 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_name_ordered_elds_0[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_0_0
};

#line 1364 "erl_backend.elds.c"
static const MR_Integer erl_backend__elds__erl_backend__elds__functor_number_map_elds_0[1] = {
  (MR_Integer) 0
};

#line 1369 "erl_backend.elds.c"
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

#line 1386 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_0 = {
  (MR_String) "mul",
  (MR_Integer) 0
};

#line 1392 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_1 = {
  (MR_String) "float_div",
  (MR_Integer) 1
};

#line 1398 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_2 = {
  (MR_String) "int_div",
  (MR_Integer) 2
};

#line 1404 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_3 = {
  (MR_String) "rem",
  (MR_Integer) 3
};

#line 1410 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_4 = {
  (MR_String) "band",
  (MR_Integer) 4
};

#line 1416 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_5 = {
  (MR_String) "add",
  (MR_Integer) 5
};

#line 1422 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_6 = {
  (MR_String) "sub",
  (MR_Integer) 6
};

#line 1428 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_7 = {
  (MR_String) "bor",
  (MR_Integer) 7
};

#line 1434 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_8 = {
  (MR_String) "bxor",
  (MR_Integer) 8
};

#line 1440 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_9 = {
  (MR_String) "bsl",
  (MR_Integer) 9
};

#line 1446 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_10 = {
  (MR_String) "bsr",
  (MR_Integer) 10
};

#line 1452 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_11 = {
  (MR_String) "=<",
  (MR_Integer) 11
};

#line 1458 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_12 = {
  (MR_String) "<",
  (MR_Integer) 12
};

#line 1464 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_13 = {
  (MR_String) ">=",
  (MR_Integer) 13
};

#line 1470 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_14 = {
  (MR_String) ">",
  (MR_Integer) 14
};

#line 1476 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_15 = {
  (MR_String) "=:=",
  (MR_Integer) 15
};

#line 1482 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_16 = {
  (MR_String) "=/=",
  (MR_Integer) 16
};

#line 1488 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_17 = {
  (MR_String) "andalso",
  (MR_Integer) 17
};

#line 1494 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_18 = {
  (MR_String) "orelse",
  (MR_Integer) 18
};

#line 1500 "erl_backend.elds.c"
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

#line 1523 "erl_backend.elds.c"
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

#line 1546 "erl_backend.elds.c"
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

#line 1569 "erl_backend.elds.c"
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

#line 1586 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_body_0_0[1] = {
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_clause_0
};

#line 1591 "erl_backend.elds.c"
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

#line 1606 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_body_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1611 "erl_backend.elds.c"
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

#line 1626 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_body_0_0[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_body_0_0
};

#line 1631 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_body_0_1[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_body_0_1
};

#line 1636 "erl_backend.elds.c"
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

#line 1650 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_name_ordered_elds_body_0[2] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_body_0_0,
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_body_0_1
};

#line 1656 "erl_backend.elds.c"
static const MR_Integer erl_backend__elds__erl_backend__elds__functor_number_map_elds_body_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1662 "erl_backend.elds.c"
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

#line 1679 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_call_target_0_0[1] = {
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
};

#line 1684 "erl_backend.elds.c"
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

#line 1699 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_call_target_0_1[1] = {
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0
};

#line 1704 "erl_backend.elds.c"
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

#line 1719 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_call_target_0_2[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 1724 "erl_backend.elds.c"
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

#line 1739 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_call_target_0_0[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_call_target_0_0
};

#line 1744 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_call_target_0_1[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_call_target_0_1
};

#line 1749 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_call_target_0_2[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_call_target_0_2
};

#line 1754 "erl_backend.elds.c"
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

#line 1773 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_name_ordered_elds_call_target_0[3] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_call_target_0_2,
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_call_target_0_1,
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_call_target_0_0
};

#line 1780 "erl_backend.elds.c"
static const MR_Integer erl_backend__elds__erl_backend__elds__functor_number_map_elds_call_target_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1787 "erl_backend.elds.c"
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

#line 1804 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_case_0_0[2] = {
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_term_0,
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0
};

#line 1810 "erl_backend.elds.c"
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

#line 1825 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_case_0_0[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_case_0_0
};

#line 1830 "erl_backend.elds.c"
static const MR_DuPtagLayout erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_case_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_case_0_0
  }
};

#line 1839 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_name_ordered_elds_case_0[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_case_0_0
};

#line 1844 "erl_backend.elds.c"
static const MR_Integer erl_backend__elds__erl_backend__elds__functor_number_map_elds_case_0[1] = {
  (MR_Integer) 0
};

#line 1849 "erl_backend.elds.c"
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

#line 1866 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_catch_0_0[3] = {
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_term_0,
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_term_0,
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0
};

#line 1873 "erl_backend.elds.c"
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

#line 1888 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_catch_0_0[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_catch_0_0
};

#line 1893 "erl_backend.elds.c"
static const MR_DuPtagLayout erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_catch_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_catch_0_0
  }
};

#line 1902 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_name_ordered_elds_catch_0[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_catch_0_0
};

#line 1907 "erl_backend.elds.c"
static const MR_Integer erl_backend__elds__erl_backend__elds__functor_number_map_elds_catch_0[1] = {
  (MR_Integer) 0
};

#line 1912 "erl_backend.elds.c"
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

#line 1929 "erl_backend.elds.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__elds__list__ti_list_1erl_backend__elds__type_ctor_info_elds_term_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_term_0
  }
};

#line 1937 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_clause_0_0[2] = {
  (MR_PseudoTypeInfo) &erl_backend__elds__list__ti_list_1erl_backend__elds__type_ctor_info_elds_term_0,
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0
};

#line 1943 "erl_backend.elds.c"
static const MR_ConstString erl_backend__elds__erl_backend__elds__field_names_elds_clause_0_0[2] = {
  (MR_String) "clause_pattern",
  (MR_String) "clause_expr"
};

#line 1949 "erl_backend.elds.c"
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

#line 1964 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_clause_0_0[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_clause_0_0
};

#line 1969 "erl_backend.elds.c"
static const MR_DuPtagLayout erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_clause_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_clause_0_0
  }
};

#line 1978 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_name_ordered_elds_clause_0[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_clause_0_0
};

#line 1983 "erl_backend.elds.c"
static const MR_Integer erl_backend__elds__erl_backend__elds__functor_number_map_elds_clause_0[1] = {
  (MR_Integer) 0
};

#line 1988 "erl_backend.elds.c"
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

#line 2005 "erl_backend.elds.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__elds__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2013 "erl_backend.elds.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__elds__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 2021 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_defn_0_0[4] = {
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
  (MR_PseudoTypeInfo) &erl_backend__elds__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_body_0,
  (MR_PseudoTypeInfo) &erl_backend__elds__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0
};

#line 2029 "erl_backend.elds.c"
static const MR_ConstString erl_backend__elds__erl_backend__elds__field_names_elds_defn_0_0[4] = {
  (MR_String) "defn_proc_id",
  (MR_String) "defn_varset",
  (MR_String) "defn_body",
  (MR_String) "defn_env_vars"
};

#line 2037 "erl_backend.elds.c"
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

#line 2052 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_defn_0_0[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_defn_0_0
};

#line 2057 "erl_backend.elds.c"
static const MR_DuPtagLayout erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_defn_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_defn_0_0
  }
};

#line 2066 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_name_ordered_elds_defn_0[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_defn_0_0
};

#line 2071 "erl_backend.elds.c"
static const MR_Integer erl_backend__elds__erl_backend__elds__functor_number_map_elds_defn_0[1] = {
  (MR_Integer) 0
};

#line 2076 "erl_backend.elds.c"
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

#line 2093 "erl_backend.elds.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__elds__list__ti_list_1erl_backend__elds__type_ctor_info_elds_expr_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0
  }
};

#line 2101 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_0[1] = {
  (MR_PseudoTypeInfo) &erl_backend__elds__list__ti_list_1erl_backend__elds__type_ctor_info_elds_expr_0
};

#line 2106 "erl_backend.elds.c"
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

#line 2121 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_1[1] = {
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_term_0
};

#line 2126 "erl_backend.elds.c"
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

#line 2141 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_2[2] = {
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0,
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0
};

#line 2147 "erl_backend.elds.c"
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

#line 2162 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_3[2] = {
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_unop_0,
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0
};

#line 2168 "erl_backend.elds.c"
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

#line 2183 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_4[3] = {
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_binop_0,
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0,
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0
};

#line 2190 "erl_backend.elds.c"
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

#line 2205 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_5[2] = {
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_call_target_0,
  (MR_PseudoTypeInfo) &erl_backend__elds__list__ti_list_1erl_backend__elds__type_ctor_info_elds_expr_0
};

#line 2211 "erl_backend.elds.c"
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

#line 2226 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_6[1] = {
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_rtti_id_0
};

#line 2231 "erl_backend.elds.c"
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

#line 2246 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_7[1] = {
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_clause_0
};

#line 2251 "erl_backend.elds.c"
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

#line 2266 "erl_backend.elds.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__elds__list__ti_list_1erl_backend__elds__type_ctor_info_elds_case_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_case_0
  }
};

#line 2274 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_8[2] = {
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0,
  (MR_PseudoTypeInfo) &erl_backend__elds__list__ti_list_1erl_backend__elds__type_ctor_info_elds_case_0
};

#line 2280 "erl_backend.elds.c"
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

#line 2295 "erl_backend.elds.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__elds__maybe__ti_maybe_1erl_backend__elds__type_ctor_info_elds_catch_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_catch_0
  }
};

#line 2303 "erl_backend.elds.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__elds__maybe__ti_maybe_1erl_backend__elds__type_ctor_info_elds_expr_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0
  }
};

#line 2311 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_9[4] = {
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0,
  (MR_PseudoTypeInfo) &erl_backend__elds__list__ti_list_1erl_backend__elds__type_ctor_info_elds_case_0,
  (MR_PseudoTypeInfo) &erl_backend__elds__maybe__ti_maybe_1erl_backend__elds__type_ctor_info_elds_catch_0,
  (MR_PseudoTypeInfo) &erl_backend__elds__maybe__ti_maybe_1erl_backend__elds__type_ctor_info_elds_expr_0
};

#line 2319 "erl_backend.elds.c"
static const MR_ConstString erl_backend__elds__erl_backend__elds__field_names_elds_expr_0_9[4] = {
  (MR_String) "try_expr",
  (MR_String) "try_cases",
  (MR_String) "try_catch",
  (MR_String) "try_after"
};

#line 2327 "erl_backend.elds.c"
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

#line 2342 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_10[1] = {
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0
};

#line 2347 "erl_backend.elds.c"
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

#line 2362 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_11[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0
};

#line 2368 "erl_backend.elds.c"
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

#line 2383 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_12[2] = {
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0,
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0
};

#line 2389 "erl_backend.elds.c"
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

#line 2404 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_13[1] = {
  (MR_PseudoTypeInfo) &erl_backend__elds__list__ti_list_1erl_backend__elds__type_ctor_info_elds_case_0
};

#line 2409 "erl_backend.elds.c"
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

#line 2424 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_expr_0_0[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_7
};

#line 2429 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_expr_0_1[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_0
};

#line 2434 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_expr_0_2[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_1
};

#line 2439 "erl_backend.elds.c"
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

#line 2454 "erl_backend.elds.c"
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

#line 2478 "erl_backend.elds.c"
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

#line 2496 "erl_backend.elds.c"
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

#line 2514 "erl_backend.elds.c"
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

#line 2531 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_foreign_export_defn_0_0[3] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &erl_backend__elds__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_clause_0
};

#line 2538 "erl_backend.elds.c"
static const MR_ConstString erl_backend__elds__erl_backend__elds__field_names_elds_foreign_export_defn_0_0[3] = {
  (MR_String) "fe_defn_name",
  (MR_String) "fe_defn_varset",
  (MR_String) "fe_defn_clause"
};

#line 2545 "erl_backend.elds.c"
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

#line 2560 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_foreign_export_defn_0_0[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_foreign_export_defn_0_0
};

#line 2565 "erl_backend.elds.c"
static const MR_DuPtagLayout erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_foreign_export_defn_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_foreign_export_defn_0_0
  }
};

#line 2574 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_name_ordered_elds_foreign_export_defn_0[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_foreign_export_defn_0_0
};

#line 2579 "erl_backend.elds.c"
static const MR_Integer erl_backend__elds__erl_backend__elds__functor_number_map_elds_foreign_export_defn_0[1] = {
  (MR_Integer) 0
};

#line 2584 "erl_backend.elds.c"
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

#line 2601 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_rtti_defn_0_0[4] = {
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_rtti_id_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &erl_backend__elds__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_clause_0
};

#line 2609 "erl_backend.elds.c"
static const MR_ConstString erl_backend__elds__erl_backend__elds__field_names_elds_rtti_defn_0_0[4] = {
  (MR_String) "rtti_defn_id",
  (MR_String) "rtti_defn_exported",
  (MR_String) "rtti_defn_varset",
  (MR_String) "rtti_defn_clause"
};

#line 2617 "erl_backend.elds.c"
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

#line 2632 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_rtti_defn_0_0[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_rtti_defn_0_0
};

#line 2637 "erl_backend.elds.c"
static const MR_DuPtagLayout erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_rtti_defn_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_rtti_defn_0_0
  }
};

#line 2646 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_name_ordered_elds_rtti_defn_0[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_rtti_defn_0_0
};

#line 2651 "erl_backend.elds.c"
static const MR_Integer erl_backend__elds__erl_backend__elds__functor_number_map_elds_rtti_defn_0[1] = {
  (MR_Integer) 0
};

#line 2656 "erl_backend.elds.c"
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

#line 2673 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_rtti_id_0_0[1] = {
  (MR_PseudoTypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_type_ctor_0
};

#line 2678 "erl_backend.elds.c"
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

#line 2693 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_rtti_id_0_1[1] = {
  (MR_PseudoTypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_type_info_0
};

#line 2698 "erl_backend.elds.c"
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

#line 2713 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_rtti_id_0_2[1] = {
  (MR_PseudoTypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_pseudo_type_info_0
};

#line 2718 "erl_backend.elds.c"
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

#line 2733 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_rtti_id_0_3[3] = {
  (MR_PseudoTypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_tc_name_0,
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 2740 "erl_backend.elds.c"
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

#line 2755 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_rtti_id_0_0[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_rtti_id_0_0
};

#line 2760 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_rtti_id_0_1[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_rtti_id_0_1
};

#line 2765 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_rtti_id_0_2[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_rtti_id_0_2
};

#line 2770 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_rtti_id_0_3[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_rtti_id_0_3
};

#line 2775 "erl_backend.elds.c"
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

#line 2799 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_name_ordered_elds_rtti_id_0[4] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_rtti_id_0_3,
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_rtti_id_0_2,
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_rtti_id_0_0,
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_rtti_id_0_1
};

#line 2807 "erl_backend.elds.c"
static const MR_Integer erl_backend__elds__erl_backend__elds__functor_number_map_elds_rtti_id_0[4] = {
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 2815 "erl_backend.elds.c"
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

#line 2832 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_term_0_0[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_character_0
};

#line 2837 "erl_backend.elds.c"
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

#line 2852 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_term_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2857 "erl_backend.elds.c"
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

#line 2872 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_term_0_2[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0
};

#line 2877 "erl_backend.elds.c"
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

#line 2892 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_term_0_3[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 2897 "erl_backend.elds.c"
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

#line 2912 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_term_0_4[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 2917 "erl_backend.elds.c"
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

#line 2932 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_term_0_5[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 2937 "erl_backend.elds.c"
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

#line 2952 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_term_0_6[1] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
};

#line 2957 "erl_backend.elds.c"
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

#line 2972 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_term_0_7[1] = {
  (MR_PseudoTypeInfo) &erl_backend__elds__list__ti_list_1erl_backend__elds__type_ctor_info_elds_expr_0
};

#line 2977 "erl_backend.elds.c"
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

#line 2992 "erl_backend.elds.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__elds__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 3000 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_term_0_8[1] = {
  (MR_PseudoTypeInfo) &erl_backend__elds__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

#line 3005 "erl_backend.elds.c"
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

#line 3020 "erl_backend.elds.c"
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

#line 3035 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_term_0_10[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 3040 "erl_backend.elds.c"
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

#line 3055 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_term_0_0[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_9
};

#line 3060 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_term_0_1[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_0
};

#line 3065 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_term_0_2[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_1
};

#line 3070 "erl_backend.elds.c"
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

#line 3082 "erl_backend.elds.c"
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

#line 3106 "erl_backend.elds.c"
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

#line 3121 "erl_backend.elds.c"
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

#line 3136 "erl_backend.elds.c"
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

#line 3153 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_unop_0_0 = {
  (MR_String) "plus",
  (MR_Integer) 0
};

#line 3159 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_unop_0_1 = {
  (MR_String) "minus",
  (MR_Integer) 1
};

#line 3165 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_unop_0_2 = {
  (MR_String) "bnot",
  (MR_Integer) 2
};

#line 3171 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_unop_0_3 = {
  (MR_String) "logical_not",
  (MR_Integer) 3
};

#line 3177 "erl_backend.elds.c"
static const MR_EnumFunctorDescPtr erl_backend__elds__erl_backend__elds__enum_value_ordered_elds_unop_0[4] = {
  &erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_unop_0_0,
  &erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_unop_0_1,
  &erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_unop_0_2,
  &erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_unop_0_3
};

#line 3185 "erl_backend.elds.c"
static const MR_EnumFunctorDescPtr erl_backend__elds__erl_backend__elds__enum_name_ordered_elds_unop_0[4] = {
  &erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_unop_0_2,
  &erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_unop_0_3,
  &erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_unop_0_1,
  &erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_unop_0_0
};

#line 3193 "erl_backend.elds.c"
static const MR_Integer erl_backend__elds__erl_backend__elds__functor_number_map_elds_unop_0[4] = {
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 3201 "erl_backend.elds.c"
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

#line 3218 "erl_backend.elds.c"
static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_0_0_10001(
#line 3221 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_1,
#line 3223 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2)
#line 3225 "erl_backend.elds.c"
{
#line 3227 "erl_backend.elds.c"
  {
#line 3229 "erl_backend.elds.c"
    MR_bool erl_backend__elds__succeeded;

#line 3232 "erl_backend.elds.c"
    {
#line 3234 "erl_backend.elds.c"
      erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_0_0(((MR_Word) erl_backend__elds__wrapper_arg_1), ((MR_Word) erl_backend__elds__wrapper_arg_2));
    }
#line 3237 "erl_backend.elds.c"
    return erl_backend__elds__succeeded;
#line 3239 "erl_backend.elds.c"
  }
#line 3241 "erl_backend.elds.c"
}

#line 3244 "erl_backend.elds.c"
static void MR_CALL 
erl_backend__elds____Compare____elds_0_0_10001(
#line 3247 "erl_backend.elds.c"
  MR_Box * erl_backend__elds__wrapper_arg_1,
#line 3249 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2,
#line 3251 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_3)
#line 3253 "erl_backend.elds.c"
{
#line 3255 "erl_backend.elds.c"
  {
#line 3257 "erl_backend.elds.c"
    MR_Word erl_backend__elds__conv0_HeadVar__1_1;

#line 3260 "erl_backend.elds.c"
    {
#line 3262 "erl_backend.elds.c"
      erl_backend__elds____Compare____elds_0_0(&erl_backend__elds__conv0_HeadVar__1_1, ((MR_Word) erl_backend__elds__wrapper_arg_2), ((MR_Word) erl_backend__elds__wrapper_arg_3));
    }
#line 3265 "erl_backend.elds.c"
    *erl_backend__elds__wrapper_arg_1 = ((MR_Box) (erl_backend__elds__conv0_HeadVar__1_1));
#line 3267 "erl_backend.elds.c"
  }
#line 3269 "erl_backend.elds.c"
}

#line 3272 "erl_backend.elds.c"
static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_binop_0_0_10001(
#line 3275 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_1,
#line 3277 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2)
#line 3279 "erl_backend.elds.c"
{
#line 3281 "erl_backend.elds.c"
  {
#line 3283 "erl_backend.elds.c"
    MR_bool erl_backend__elds__succeeded;

#line 3286 "erl_backend.elds.c"
    {
#line 3288 "erl_backend.elds.c"
      erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_binop_0_0(((MR_Word) erl_backend__elds__wrapper_arg_1), ((MR_Word) erl_backend__elds__wrapper_arg_2));
    }
#line 3291 "erl_backend.elds.c"
    return erl_backend__elds__succeeded;
#line 3293 "erl_backend.elds.c"
  }
#line 3295 "erl_backend.elds.c"
}

#line 3298 "erl_backend.elds.c"
static void MR_CALL 
erl_backend__elds____Compare____elds_binop_0_0_10001(
#line 3301 "erl_backend.elds.c"
  MR_Box * erl_backend__elds__wrapper_arg_1,
#line 3303 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2,
#line 3305 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_3)
#line 3307 "erl_backend.elds.c"
{
#line 3309 "erl_backend.elds.c"
  {
#line 3311 "erl_backend.elds.c"
    MR_Word erl_backend__elds__conv0_HeadVar__1_1;

#line 3314 "erl_backend.elds.c"
    {
#line 3316 "erl_backend.elds.c"
      erl_backend__elds____Compare____elds_binop_0_0(&erl_backend__elds__conv0_HeadVar__1_1, ((MR_Word) erl_backend__elds__wrapper_arg_2), ((MR_Word) erl_backend__elds__wrapper_arg_3));
    }
#line 3319 "erl_backend.elds.c"
    *erl_backend__elds__wrapper_arg_1 = ((MR_Box) (erl_backend__elds__conv0_HeadVar__1_1));
#line 3321 "erl_backend.elds.c"
  }
#line 3323 "erl_backend.elds.c"
}

#line 3326 "erl_backend.elds.c"
static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_body_0_0_10001(
#line 3329 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_1,
#line 3331 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2)
#line 3333 "erl_backend.elds.c"
{
#line 3335 "erl_backend.elds.c"
  {
#line 3337 "erl_backend.elds.c"
    MR_bool erl_backend__elds__succeeded;

#line 3340 "erl_backend.elds.c"
    {
#line 3342 "erl_backend.elds.c"
      erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_body_0_0(((MR_Word) erl_backend__elds__wrapper_arg_1), ((MR_Word) erl_backend__elds__wrapper_arg_2));
    }
#line 3345 "erl_backend.elds.c"
    return erl_backend__elds__succeeded;
#line 3347 "erl_backend.elds.c"
  }
#line 3349 "erl_backend.elds.c"
}

#line 3352 "erl_backend.elds.c"
static void MR_CALL 
erl_backend__elds____Compare____elds_body_0_0_10001(
#line 3355 "erl_backend.elds.c"
  MR_Box * erl_backend__elds__wrapper_arg_1,
#line 3357 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2,
#line 3359 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_3)
#line 3361 "erl_backend.elds.c"
{
#line 3363 "erl_backend.elds.c"
  {
#line 3365 "erl_backend.elds.c"
    MR_Word erl_backend__elds__conv0_HeadVar__1_1;

#line 3368 "erl_backend.elds.c"
    {
#line 3370 "erl_backend.elds.c"
      erl_backend__elds____Compare____elds_body_0_0(&erl_backend__elds__conv0_HeadVar__1_1, ((MR_Word) erl_backend__elds__wrapper_arg_2), ((MR_Word) erl_backend__elds__wrapper_arg_3));
    }
#line 3373 "erl_backend.elds.c"
    *erl_backend__elds__wrapper_arg_1 = ((MR_Box) (erl_backend__elds__conv0_HeadVar__1_1));
#line 3375 "erl_backend.elds.c"
  }
#line 3377 "erl_backend.elds.c"
}

#line 3380 "erl_backend.elds.c"
static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_call_target_0_0_10001(
#line 3383 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_1,
#line 3385 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2)
#line 3387 "erl_backend.elds.c"
{
#line 3389 "erl_backend.elds.c"
  {
#line 3391 "erl_backend.elds.c"
    MR_bool erl_backend__elds__succeeded;

#line 3394 "erl_backend.elds.c"
    {
#line 3396 "erl_backend.elds.c"
      erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_call_target_0_0(((MR_Word) erl_backend__elds__wrapper_arg_1), ((MR_Word) erl_backend__elds__wrapper_arg_2));
    }
#line 3399 "erl_backend.elds.c"
    return erl_backend__elds__succeeded;
#line 3401 "erl_backend.elds.c"
  }
#line 3403 "erl_backend.elds.c"
}

#line 3406 "erl_backend.elds.c"
static void MR_CALL 
erl_backend__elds____Compare____elds_call_target_0_0_10001(
#line 3409 "erl_backend.elds.c"
  MR_Box * erl_backend__elds__wrapper_arg_1,
#line 3411 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2,
#line 3413 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_3)
#line 3415 "erl_backend.elds.c"
{
#line 3417 "erl_backend.elds.c"
  {
#line 3419 "erl_backend.elds.c"
    MR_Word erl_backend__elds__conv0_HeadVar__1_1;

#line 3422 "erl_backend.elds.c"
    {
#line 3424 "erl_backend.elds.c"
      erl_backend__elds____Compare____elds_call_target_0_0(&erl_backend__elds__conv0_HeadVar__1_1, ((MR_Word) erl_backend__elds__wrapper_arg_2), ((MR_Word) erl_backend__elds__wrapper_arg_3));
    }
#line 3427 "erl_backend.elds.c"
    *erl_backend__elds__wrapper_arg_1 = ((MR_Box) (erl_backend__elds__conv0_HeadVar__1_1));
#line 3429 "erl_backend.elds.c"
  }
#line 3431 "erl_backend.elds.c"
}

#line 3434 "erl_backend.elds.c"
static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_case_0_0_10001(
#line 3437 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_1,
#line 3439 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2)
#line 3441 "erl_backend.elds.c"
{
#line 3443 "erl_backend.elds.c"
  {
#line 3445 "erl_backend.elds.c"
    MR_bool erl_backend__elds__succeeded;

#line 3448 "erl_backend.elds.c"
    {
#line 3450 "erl_backend.elds.c"
      erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_case_0_0(((MR_Word) erl_backend__elds__wrapper_arg_1), ((MR_Word) erl_backend__elds__wrapper_arg_2));
    }
#line 3453 "erl_backend.elds.c"
    return erl_backend__elds__succeeded;
#line 3455 "erl_backend.elds.c"
  }
#line 3457 "erl_backend.elds.c"
}

#line 3460 "erl_backend.elds.c"
static void MR_CALL 
erl_backend__elds____Compare____elds_case_0_0_10001(
#line 3463 "erl_backend.elds.c"
  MR_Box * erl_backend__elds__wrapper_arg_1,
#line 3465 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2,
#line 3467 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_3)
#line 3469 "erl_backend.elds.c"
{
#line 3471 "erl_backend.elds.c"
  {
#line 3473 "erl_backend.elds.c"
    MR_Word erl_backend__elds__conv0_HeadVar__1_1;

#line 3476 "erl_backend.elds.c"
    {
#line 3478 "erl_backend.elds.c"
      erl_backend__elds____Compare____elds_case_0_0(&erl_backend__elds__conv0_HeadVar__1_1, ((MR_Word) erl_backend__elds__wrapper_arg_2), ((MR_Word) erl_backend__elds__wrapper_arg_3));
    }
#line 3481 "erl_backend.elds.c"
    *erl_backend__elds__wrapper_arg_1 = ((MR_Box) (erl_backend__elds__conv0_HeadVar__1_1));
#line 3483 "erl_backend.elds.c"
  }
#line 3485 "erl_backend.elds.c"
}

#line 3488 "erl_backend.elds.c"
static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_catch_0_0_10001(
#line 3491 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_1,
#line 3493 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2)
#line 3495 "erl_backend.elds.c"
{
#line 3497 "erl_backend.elds.c"
  {
#line 3499 "erl_backend.elds.c"
    MR_bool erl_backend__elds__succeeded;

#line 3502 "erl_backend.elds.c"
    {
#line 3504 "erl_backend.elds.c"
      erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_catch_0_0(((MR_Word) erl_backend__elds__wrapper_arg_1), ((MR_Word) erl_backend__elds__wrapper_arg_2));
    }
#line 3507 "erl_backend.elds.c"
    return erl_backend__elds__succeeded;
#line 3509 "erl_backend.elds.c"
  }
#line 3511 "erl_backend.elds.c"
}

#line 3514 "erl_backend.elds.c"
static void MR_CALL 
erl_backend__elds____Compare____elds_catch_0_0_10001(
#line 3517 "erl_backend.elds.c"
  MR_Box * erl_backend__elds__wrapper_arg_1,
#line 3519 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2,
#line 3521 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_3)
#line 3523 "erl_backend.elds.c"
{
#line 3525 "erl_backend.elds.c"
  {
#line 3527 "erl_backend.elds.c"
    MR_Word erl_backend__elds__conv0_HeadVar__1_1;

#line 3530 "erl_backend.elds.c"
    {
#line 3532 "erl_backend.elds.c"
      erl_backend__elds____Compare____elds_catch_0_0(&erl_backend__elds__conv0_HeadVar__1_1, ((MR_Word) erl_backend__elds__wrapper_arg_2), ((MR_Word) erl_backend__elds__wrapper_arg_3));
    }
#line 3535 "erl_backend.elds.c"
    *erl_backend__elds__wrapper_arg_1 = ((MR_Box) (erl_backend__elds__conv0_HeadVar__1_1));
#line 3537 "erl_backend.elds.c"
  }
#line 3539 "erl_backend.elds.c"
}

#line 3542 "erl_backend.elds.c"
static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_clause_0_0_10001(
#line 3545 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_1,
#line 3547 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2)
#line 3549 "erl_backend.elds.c"
{
#line 3551 "erl_backend.elds.c"
  {
#line 3553 "erl_backend.elds.c"
    MR_bool erl_backend__elds__succeeded;

#line 3556 "erl_backend.elds.c"
    {
#line 3558 "erl_backend.elds.c"
      erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_clause_0_0(((MR_Word) erl_backend__elds__wrapper_arg_1), ((MR_Word) erl_backend__elds__wrapper_arg_2));
    }
#line 3561 "erl_backend.elds.c"
    return erl_backend__elds__succeeded;
#line 3563 "erl_backend.elds.c"
  }
#line 3565 "erl_backend.elds.c"
}

#line 3568 "erl_backend.elds.c"
static void MR_CALL 
erl_backend__elds____Compare____elds_clause_0_0_10001(
#line 3571 "erl_backend.elds.c"
  MR_Box * erl_backend__elds__wrapper_arg_1,
#line 3573 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2,
#line 3575 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_3)
#line 3577 "erl_backend.elds.c"
{
#line 3579 "erl_backend.elds.c"
  {
#line 3581 "erl_backend.elds.c"
    MR_Word erl_backend__elds__conv0_HeadVar__1_1;

#line 3584 "erl_backend.elds.c"
    {
#line 3586 "erl_backend.elds.c"
      erl_backend__elds____Compare____elds_clause_0_0(&erl_backend__elds__conv0_HeadVar__1_1, ((MR_Word) erl_backend__elds__wrapper_arg_2), ((MR_Word) erl_backend__elds__wrapper_arg_3));
    }
#line 3589 "erl_backend.elds.c"
    *erl_backend__elds__wrapper_arg_1 = ((MR_Box) (erl_backend__elds__conv0_HeadVar__1_1));
#line 3591 "erl_backend.elds.c"
  }
#line 3593 "erl_backend.elds.c"
}

#line 3596 "erl_backend.elds.c"
static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_defn_0_0_10001(
#line 3599 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_1,
#line 3601 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2)
#line 3603 "erl_backend.elds.c"
{
#line 3605 "erl_backend.elds.c"
  {
#line 3607 "erl_backend.elds.c"
    MR_bool erl_backend__elds__succeeded;

#line 3610 "erl_backend.elds.c"
    {
#line 3612 "erl_backend.elds.c"
      erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_defn_0_0(((MR_Word) erl_backend__elds__wrapper_arg_1), ((MR_Word) erl_backend__elds__wrapper_arg_2));
    }
#line 3615 "erl_backend.elds.c"
    return erl_backend__elds__succeeded;
#line 3617 "erl_backend.elds.c"
  }
#line 3619 "erl_backend.elds.c"
}

#line 3622 "erl_backend.elds.c"
static void MR_CALL 
erl_backend__elds____Compare____elds_defn_0_0_10001(
#line 3625 "erl_backend.elds.c"
  MR_Box * erl_backend__elds__wrapper_arg_1,
#line 3627 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2,
#line 3629 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_3)
#line 3631 "erl_backend.elds.c"
{
#line 3633 "erl_backend.elds.c"
  {
#line 3635 "erl_backend.elds.c"
    MR_Word erl_backend__elds__conv0_HeadVar__1_1;

#line 3638 "erl_backend.elds.c"
    {
#line 3640 "erl_backend.elds.c"
      erl_backend__elds____Compare____elds_defn_0_0(&erl_backend__elds__conv0_HeadVar__1_1, ((MR_Word) erl_backend__elds__wrapper_arg_2), ((MR_Word) erl_backend__elds__wrapper_arg_3));
    }
#line 3643 "erl_backend.elds.c"
    *erl_backend__elds__wrapper_arg_1 = ((MR_Box) (erl_backend__elds__conv0_HeadVar__1_1));
#line 3645 "erl_backend.elds.c"
  }
#line 3647 "erl_backend.elds.c"
}

#line 3650 "erl_backend.elds.c"
static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_expr_0_0_10001(
#line 3653 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_1,
#line 3655 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2)
#line 3657 "erl_backend.elds.c"
{
#line 3659 "erl_backend.elds.c"
  {
#line 3661 "erl_backend.elds.c"
    MR_bool erl_backend__elds__succeeded;

#line 3664 "erl_backend.elds.c"
    {
#line 3666 "erl_backend.elds.c"
      erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_expr_0_0(((MR_Word) erl_backend__elds__wrapper_arg_1), ((MR_Word) erl_backend__elds__wrapper_arg_2));
    }
#line 3669 "erl_backend.elds.c"
    return erl_backend__elds__succeeded;
#line 3671 "erl_backend.elds.c"
  }
#line 3673 "erl_backend.elds.c"
}

#line 3676 "erl_backend.elds.c"
static void MR_CALL 
erl_backend__elds____Compare____elds_expr_0_0_10001(
#line 3679 "erl_backend.elds.c"
  MR_Box * erl_backend__elds__wrapper_arg_1,
#line 3681 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2,
#line 3683 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_3)
#line 3685 "erl_backend.elds.c"
{
#line 3687 "erl_backend.elds.c"
  {
#line 3689 "erl_backend.elds.c"
    MR_Word erl_backend__elds__conv0_HeadVar__1_1;

#line 3692 "erl_backend.elds.c"
    {
#line 3694 "erl_backend.elds.c"
      erl_backend__elds____Compare____elds_expr_0_0(&erl_backend__elds__conv0_HeadVar__1_1, ((MR_Word) erl_backend__elds__wrapper_arg_2), ((MR_Word) erl_backend__elds__wrapper_arg_3));
    }
#line 3697 "erl_backend.elds.c"
    *erl_backend__elds__wrapper_arg_1 = ((MR_Box) (erl_backend__elds__conv0_HeadVar__1_1));
#line 3699 "erl_backend.elds.c"
  }
#line 3701 "erl_backend.elds.c"
}

#line 3704 "erl_backend.elds.c"
static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_foreign_export_defn_0_0_10001(
#line 3707 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_1,
#line 3709 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2)
#line 3711 "erl_backend.elds.c"
{
#line 3713 "erl_backend.elds.c"
  {
#line 3715 "erl_backend.elds.c"
    MR_bool erl_backend__elds__succeeded;

#line 3718 "erl_backend.elds.c"
    {
#line 3720 "erl_backend.elds.c"
      erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_foreign_export_defn_0_0(((MR_Word) erl_backend__elds__wrapper_arg_1), ((MR_Word) erl_backend__elds__wrapper_arg_2));
    }
#line 3723 "erl_backend.elds.c"
    return erl_backend__elds__succeeded;
#line 3725 "erl_backend.elds.c"
  }
#line 3727 "erl_backend.elds.c"
}

#line 3730 "erl_backend.elds.c"
static void MR_CALL 
erl_backend__elds____Compare____elds_foreign_export_defn_0_0_10001(
#line 3733 "erl_backend.elds.c"
  MR_Box * erl_backend__elds__wrapper_arg_1,
#line 3735 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2,
#line 3737 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_3)
#line 3739 "erl_backend.elds.c"
{
#line 3741 "erl_backend.elds.c"
  {
#line 3743 "erl_backend.elds.c"
    MR_Word erl_backend__elds__conv0_HeadVar__1_1;

#line 3746 "erl_backend.elds.c"
    {
#line 3748 "erl_backend.elds.c"
      erl_backend__elds____Compare____elds_foreign_export_defn_0_0(&erl_backend__elds__conv0_HeadVar__1_1, ((MR_Word) erl_backend__elds__wrapper_arg_2), ((MR_Word) erl_backend__elds__wrapper_arg_3));
    }
#line 3751 "erl_backend.elds.c"
    *erl_backend__elds__wrapper_arg_1 = ((MR_Box) (erl_backend__elds__conv0_HeadVar__1_1));
#line 3753 "erl_backend.elds.c"
  }
#line 3755 "erl_backend.elds.c"
}

#line 3758 "erl_backend.elds.c"
static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_rtti_defn_0_0_10001(
#line 3761 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_1,
#line 3763 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2)
#line 3765 "erl_backend.elds.c"
{
#line 3767 "erl_backend.elds.c"
  {
#line 3769 "erl_backend.elds.c"
    MR_bool erl_backend__elds__succeeded;

#line 3772 "erl_backend.elds.c"
    {
#line 3774 "erl_backend.elds.c"
      erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_rtti_defn_0_0(((MR_Word) erl_backend__elds__wrapper_arg_1), ((MR_Word) erl_backend__elds__wrapper_arg_2));
    }
#line 3777 "erl_backend.elds.c"
    return erl_backend__elds__succeeded;
#line 3779 "erl_backend.elds.c"
  }
#line 3781 "erl_backend.elds.c"
}

#line 3784 "erl_backend.elds.c"
static void MR_CALL 
erl_backend__elds____Compare____elds_rtti_defn_0_0_10001(
#line 3787 "erl_backend.elds.c"
  MR_Box * erl_backend__elds__wrapper_arg_1,
#line 3789 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2,
#line 3791 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_3)
#line 3793 "erl_backend.elds.c"
{
#line 3795 "erl_backend.elds.c"
  {
#line 3797 "erl_backend.elds.c"
    MR_Word erl_backend__elds__conv0_HeadVar__1_1;

#line 3800 "erl_backend.elds.c"
    {
#line 3802 "erl_backend.elds.c"
      erl_backend__elds____Compare____elds_rtti_defn_0_0(&erl_backend__elds__conv0_HeadVar__1_1, ((MR_Word) erl_backend__elds__wrapper_arg_2), ((MR_Word) erl_backend__elds__wrapper_arg_3));
    }
#line 3805 "erl_backend.elds.c"
    *erl_backend__elds__wrapper_arg_1 = ((MR_Box) (erl_backend__elds__conv0_HeadVar__1_1));
#line 3807 "erl_backend.elds.c"
  }
#line 3809 "erl_backend.elds.c"
}

#line 3812 "erl_backend.elds.c"
static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_rtti_id_0_0_10001(
#line 3815 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_1,
#line 3817 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2)
#line 3819 "erl_backend.elds.c"
{
#line 3821 "erl_backend.elds.c"
  {
#line 3823 "erl_backend.elds.c"
    MR_bool erl_backend__elds__succeeded;

#line 3826 "erl_backend.elds.c"
    {
#line 3828 "erl_backend.elds.c"
      erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_rtti_id_0_0(((MR_Word) erl_backend__elds__wrapper_arg_1), ((MR_Word) erl_backend__elds__wrapper_arg_2));
    }
#line 3831 "erl_backend.elds.c"
    return erl_backend__elds__succeeded;
#line 3833 "erl_backend.elds.c"
  }
#line 3835 "erl_backend.elds.c"
}

#line 3838 "erl_backend.elds.c"
static void MR_CALL 
erl_backend__elds____Compare____elds_rtti_id_0_0_10001(
#line 3841 "erl_backend.elds.c"
  MR_Box * erl_backend__elds__wrapper_arg_1,
#line 3843 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2,
#line 3845 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_3)
#line 3847 "erl_backend.elds.c"
{
#line 3849 "erl_backend.elds.c"
  {
#line 3851 "erl_backend.elds.c"
    MR_Word erl_backend__elds__conv0_HeadVar__1_1;

#line 3854 "erl_backend.elds.c"
    {
#line 3856 "erl_backend.elds.c"
      erl_backend__elds____Compare____elds_rtti_id_0_0(&erl_backend__elds__conv0_HeadVar__1_1, ((MR_Word) erl_backend__elds__wrapper_arg_2), ((MR_Word) erl_backend__elds__wrapper_arg_3));
    }
#line 3859 "erl_backend.elds.c"
    *erl_backend__elds__wrapper_arg_1 = ((MR_Box) (erl_backend__elds__conv0_HeadVar__1_1));
#line 3861 "erl_backend.elds.c"
  }
#line 3863 "erl_backend.elds.c"
}

#line 3866 "erl_backend.elds.c"
static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_term_0_0_10001(
#line 3869 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_1,
#line 3871 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2)
#line 3873 "erl_backend.elds.c"
{
#line 3875 "erl_backend.elds.c"
  {
#line 3877 "erl_backend.elds.c"
    MR_bool erl_backend__elds__succeeded;

#line 3880 "erl_backend.elds.c"
    {
#line 3882 "erl_backend.elds.c"
      erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_term_0_0(((MR_Word) erl_backend__elds__wrapper_arg_1), ((MR_Word) erl_backend__elds__wrapper_arg_2));
    }
#line 3885 "erl_backend.elds.c"
    return erl_backend__elds__succeeded;
#line 3887 "erl_backend.elds.c"
  }
#line 3889 "erl_backend.elds.c"
}

#line 3892 "erl_backend.elds.c"
static void MR_CALL 
erl_backend__elds____Compare____elds_term_0_0_10001(
#line 3895 "erl_backend.elds.c"
  MR_Box * erl_backend__elds__wrapper_arg_1,
#line 3897 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2,
#line 3899 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_3)
#line 3901 "erl_backend.elds.c"
{
#line 3903 "erl_backend.elds.c"
  {
#line 3905 "erl_backend.elds.c"
    MR_Word erl_backend__elds__conv0_HeadVar__1_1;

#line 3908 "erl_backend.elds.c"
    {
#line 3910 "erl_backend.elds.c"
      erl_backend__elds____Compare____elds_term_0_0(&erl_backend__elds__conv0_HeadVar__1_1, ((MR_Word) erl_backend__elds__wrapper_arg_2), ((MR_Word) erl_backend__elds__wrapper_arg_3));
    }
#line 3913 "erl_backend.elds.c"
    *erl_backend__elds__wrapper_arg_1 = ((MR_Box) (erl_backend__elds__conv0_HeadVar__1_1));
#line 3915 "erl_backend.elds.c"
  }
#line 3917 "erl_backend.elds.c"
}

#line 3920 "erl_backend.elds.c"
static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_unop_0_0_10001(
#line 3923 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_1,
#line 3925 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2)
#line 3927 "erl_backend.elds.c"
{
#line 3929 "erl_backend.elds.c"
  {
#line 3931 "erl_backend.elds.c"
    MR_bool erl_backend__elds__succeeded;

#line 3934 "erl_backend.elds.c"
    {
#line 3936 "erl_backend.elds.c"
      erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_unop_0_0(((MR_Word) erl_backend__elds__wrapper_arg_1), ((MR_Word) erl_backend__elds__wrapper_arg_2));
    }
#line 3939 "erl_backend.elds.c"
    return erl_backend__elds__succeeded;
#line 3941 "erl_backend.elds.c"
  }
#line 3943 "erl_backend.elds.c"
}

#line 3946 "erl_backend.elds.c"
static void MR_CALL 
erl_backend__elds____Compare____elds_unop_0_0_10001(
#line 3949 "erl_backend.elds.c"
  MR_Box * erl_backend__elds__wrapper_arg_1,
#line 3951 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2,
#line 3953 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_3)
#line 3955 "erl_backend.elds.c"
{
#line 3957 "erl_backend.elds.c"
  {
#line 3959 "erl_backend.elds.c"
    MR_Word erl_backend__elds__conv0_HeadVar__1_1;

#line 3962 "erl_backend.elds.c"
    {
#line 3964 "erl_backend.elds.c"
      erl_backend__elds____Compare____elds_unop_0_0(&erl_backend__elds__conv0_HeadVar__1_1, ((MR_Word) erl_backend__elds__wrapper_arg_2), ((MR_Word) erl_backend__elds__wrapper_arg_3));
    }
#line 3967 "erl_backend.elds.c"
    *erl_backend__elds__wrapper_arg_1 = ((MR_Box) (erl_backend__elds__conv0_HeadVar__1_1));
#line 3969 "erl_backend.elds.c"
  }
#line 3971 "erl_backend.elds.c"
}

#line 423 "elds.m"
static MR_Word MR_CALL 
erl_backend__elds__IntroducedFrom__func__exprs_from_fixed_vars__423__1_1_f_0(
#line 423 "elds.m"
  MR_String erl_backend__elds__LambdaHeadVar__1_6)
#line 423 "elds.m"
{
#line 423 "elds.m"
  {
#line 423 "elds.m"
    MR_bool erl_backend__elds__succeeded;
#line 423 "elds.m"
    MR_Word erl_backend__elds__LambdaHeadVar__2_7;
#line 423 "elds.m"
    MR_Word erl_backend__elds__V_8_8;

#line 423 "elds.m"
    {
#line 423 "elds.m"
      erl_backend__elds__V_8_8 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 423 "elds.m"
      MR_hl_field(MR_mktag(3), erl_backend__elds__V_8_8, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 423 "elds.m"
      MR_hl_field(MR_mktag(3), erl_backend__elds__V_8_8, 1) = ((MR_Box) (erl_backend__elds__LambdaHeadVar__1_6));
#line 423 "elds.m"
    }
#line 423 "elds.m"
    {
#line 423 "elds.m"
      erl_backend__elds__LambdaHeadVar__2_7 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 423 "elds.m"
      MR_hl_field(MR_mktag(2), erl_backend__elds__LambdaHeadVar__2_7, 0) = ((MR_Box) (erl_backend__elds__V_8_8));
#line 423 "elds.m"
    }
#line 423 "elds.m"
    return erl_backend__elds__LambdaHeadVar__2_7;
#line 423 "elds.m"
  }
#line 423 "elds.m"
}

#line 421 "elds.m"
static MR_Word MR_CALL 
erl_backend__elds__IntroducedFrom__func__terms_from_fixed_vars__421__1_1_f_0(
#line 421 "elds.m"
  MR_String erl_backend__elds__LambdaHeadVar__1_6)
#line 421 "elds.m"
{
#line 421 "elds.m"
  {
#line 421 "elds.m"
    MR_bool erl_backend__elds__succeeded;
#line 421 "elds.m"
    MR_Word erl_backend__elds__LambdaHeadVar__2_7;

#line 421 "elds.m"
    {
#line 421 "elds.m"
      erl_backend__elds__LambdaHeadVar__2_7 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 421 "elds.m"
      MR_hl_field(MR_mktag(3), erl_backend__elds__LambdaHeadVar__2_7, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 421 "elds.m"
      MR_hl_field(MR_mktag(3), erl_backend__elds__LambdaHeadVar__2_7, 1) = ((MR_Box) (erl_backend__elds__LambdaHeadVar__1_6));
#line 421 "elds.m"
    }
#line 421 "elds.m"
    return erl_backend__elds__LambdaHeadVar__2_7;
#line 421 "elds.m"
  }
#line 421 "elds.m"
}

#line 264 "elds.m"
void MR_CALL 
erl_backend__elds____Compare____elds_unop_0_0(
#line 264 "elds.m"
  MR_Word * erl_backend__elds__HeadVar__1_1,
#line 264 "elds.m"
  MR_Word erl_backend__elds__HeadVar__2_2,
#line 264 "elds.m"
  MR_Word erl_backend__elds__HeadVar__3_3)
#line 264 "elds.m"
{
#line 264 "elds.m"
  {
#line 264 "elds.m"
    MR_bool erl_backend__elds__succeeded;
#line 264 "elds.m"
    MR_Integer erl_backend__elds__Cast_HeadVar1_4 = (MR_Integer) erl_backend__elds__HeadVar__2_2;
#line 264 "elds.m"
    MR_Integer erl_backend__elds__Cast_HeadVar2_5 = (MR_Integer) erl_backend__elds__HeadVar__3_3;

#line 264 "elds.m"
    {
#line 264 "elds.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(erl_backend__elds__HeadVar__1_1, erl_backend__elds__Cast_HeadVar1_4, erl_backend__elds__Cast_HeadVar2_5);
    }
#line 264 "elds.m"
  }
#line 264 "elds.m"
}

#line 264 "elds.m"
MR_bool MR_CALL 
erl_backend__elds____Unify____elds_unop_0_0(
#line 264 "elds.m"
  MR_Word erl_backend__elds__HeadVar__2_1,
#line 264 "elds.m"
  MR_Word erl_backend__elds__HeadVar__2_2)
#line 264 "elds.m"
{
#line 4085 "erl_backend.elds.c"
  {
#line 4087 "erl_backend.elds.c"
    MR_bool erl_backend__elds__succeeded = (erl_backend__elds__HeadVar__2_1 == erl_backend__elds__HeadVar__2_2);

#line 4090 "erl_backend.elds.c"
    return erl_backend__elds__succeeded;
#line 4092 "erl_backend.elds.c"
  }
#line 264 "elds.m"
}

#line 214 "elds.m"
void MR_CALL 
erl_backend__elds____Compare____elds_term_0_0(
#line 214 "elds.m"
  MR_Word * erl_backend__elds__HeadVar__1_1,
#line 214 "elds.m"
  MR_Word erl_backend__elds__HeadVar__2_2,
#line 214 "elds.m"
  MR_Word erl_backend__elds__HeadVar__3_3)
#line 214 "elds.m"
{
#line 214 "elds.m"
  {
#line 214 "elds.m"
    MR_bool erl_backend__elds__succeeded;
#line 214 "elds.m"
    MR_Integer erl_backend__elds__CastX_224 = (MR_Integer) erl_backend__elds__HeadVar__2_2;
#line 214 "elds.m"
    MR_Integer erl_backend__elds__CastY_225 = (MR_Integer) erl_backend__elds__HeadVar__3_3;

#line 214 "elds.m"
    erl_backend__elds__succeeded = (erl_backend__elds__CastX_224 == erl_backend__elds__CastY_225);
#line 214 "elds.m"
    if (erl_backend__elds__succeeded)
#line 4121 "erl_backend.elds.c"
      *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 0;
#line 214 "elds.m"
    else
#line 214 "elds.m"
#line 214 "elds.m"
      switch (MR_tag((MR_Word) erl_backend__elds__HeadVar__2_2)) {
#line 214 "elds.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 214 "elds.m"
        case (MR_Integer) 0:
#line 214 "elds.m"
#line 214 "elds.m"
          switch (MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) {
#line 214 "elds.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 214 "elds.m"
            case (MR_Integer) 0:
#line 214 "elds.m"
              *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 0;
#line 214 "elds.m"
              break;
#line 214 "elds.m"
            case (MR_Integer) 1:
#line 4145 "erl_backend.elds.c"
              *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 214 "elds.m"
              break;
#line 214 "elds.m"
            case (MR_Integer) 2:
#line 4151 "erl_backend.elds.c"
              *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 214 "elds.m"
              break;
#line 214 "elds.m"
            case (MR_Integer) 3:
#line 214 "elds.m"
#line 214 "elds.m"
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) {
#line 214 "elds.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 214 "elds.m"
                case (MR_Integer) 0:
#line 4164 "erl_backend.elds.c"
                  *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 214 "elds.m"
                  break;
#line 214 "elds.m"
                case (MR_Integer) 1:
#line 4170 "erl_backend.elds.c"
                  *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 214 "elds.m"
                  break;
#line 214 "elds.m"
                case (MR_Integer) 2:
#line 4176 "erl_backend.elds.c"
                  *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 214 "elds.m"
                  break;
#line 214 "elds.m"
                case (MR_Integer) 3:
#line 4182 "erl_backend.elds.c"
                  *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 214 "elds.m"
                  break;
#line 214 "elds.m"
                case (MR_Integer) 4:
#line 4188 "erl_backend.elds.c"
                  *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 214 "elds.m"
                  break;
#line 214 "elds.m"
                case (MR_Integer) 5:
#line 4194 "erl_backend.elds.c"
                  *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 214 "elds.m"
                  break;
#line 214 "elds.m"
                case (MR_Integer) 6:
#line 4200 "erl_backend.elds.c"
                  *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 214 "elds.m"
                  break;
#line 214 "elds.m"
                case (MR_Integer) 7:
#line 4206 "erl_backend.elds.c"
                  *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 214 "elds.m"
                  break;
#line 214 "elds.m"
              }
#line 214 "elds.m"
              break;
#line 214 "elds.m"
          }
#line 214 "elds.m"
          break;
#line 214 "elds.m"
        case (MR_Integer) 1:
#line 214 "elds.m"
          {
#line 214 "elds.m"
            MR_Char erl_backend__elds__V_239_239 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)));

#line 214 "elds.m"
#line 214 "elds.m"
            switch (MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) {
#line 214 "elds.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 214 "elds.m"
              case (MR_Integer) 0:
#line 4232 "erl_backend.elds.c"
                *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 214 "elds.m"
                break;
#line 214 "elds.m"
              case (MR_Integer) 1:
#line 214 "elds.m"
                {
#line 214 "elds.m"
                  MR_Char erl_backend__elds__V_5_5 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)));

#line 214 "elds.m"
                  {
#line 214 "elds.m"
                    mercury__private_builtin__builtin_compare_character_3_p_0(erl_backend__elds__HeadVar__1_1, erl_backend__elds__V_239_239, erl_backend__elds__V_5_5);
                  }
#line 214 "elds.m"
                }
#line 214 "elds.m"
                break;
#line 214 "elds.m"
              case (MR_Integer) 2:
#line 4254 "erl_backend.elds.c"
                *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 214 "elds.m"
                break;
#line 214 "elds.m"
              case (MR_Integer) 3:
#line 214 "elds.m"
#line 214 "elds.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) {
#line 214 "elds.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 214 "elds.m"
                  case (MR_Integer) 0:
#line 4267 "erl_backend.elds.c"
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 214 "elds.m"
                    break;
#line 214 "elds.m"
                  case (MR_Integer) 1:
#line 4273 "erl_backend.elds.c"
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 214 "elds.m"
                    break;
#line 214 "elds.m"
                  case (MR_Integer) 2:
#line 4279 "erl_backend.elds.c"
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 214 "elds.m"
                    break;
#line 214 "elds.m"
                  case (MR_Integer) 3:
#line 4285 "erl_backend.elds.c"
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 214 "elds.m"
                    break;
#line 214 "elds.m"
                  case (MR_Integer) 4:
#line 4291 "erl_backend.elds.c"
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 214 "elds.m"
                    break;
#line 214 "elds.m"
                  case (MR_Integer) 5:
#line 4297 "erl_backend.elds.c"
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 214 "elds.m"
                    break;
#line 214 "elds.m"
                  case (MR_Integer) 6:
#line 4303 "erl_backend.elds.c"
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 214 "elds.m"
                    break;
#line 214 "elds.m"
                  case (MR_Integer) 7:
#line 4309 "erl_backend.elds.c"
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 214 "elds.m"
                    break;
#line 214 "elds.m"
                }
#line 214 "elds.m"
                break;
#line 214 "elds.m"
            }
#line 214 "elds.m"
          }
#line 214 "elds.m"
          break;
#line 214 "elds.m"
        case (MR_Integer) 2:
#line 214 "elds.m"
          {
#line 214 "elds.m"
            MR_Integer erl_backend__elds__V_242_242 = ((MR_Integer) (MR_hl_field(MR_mktag(2), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)));

#line 214 "elds.m"
#line 214 "elds.m"
            switch (MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) {
#line 214 "elds.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 214 "elds.m"
              case (MR_Integer) 0:
#line 4337 "erl_backend.elds.c"
                *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 214 "elds.m"
                break;
#line 214 "elds.m"
              case (MR_Integer) 1:
#line 4343 "erl_backend.elds.c"
                *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 214 "elds.m"
                break;
#line 214 "elds.m"
              case (MR_Integer) 2:
#line 214 "elds.m"
                {
#line 214 "elds.m"
                  MR_Integer erl_backend__elds__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(2), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)));

#line 214 "elds.m"
                  {
#line 214 "elds.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(erl_backend__elds__HeadVar__1_1, erl_backend__elds__V_242_242, erl_backend__elds__V_28_28);
                  }
#line 214 "elds.m"
                }
#line 214 "elds.m"
                break;
#line 214 "elds.m"
              case (MR_Integer) 3:
#line 214 "elds.m"
#line 214 "elds.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) {
#line 214 "elds.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 214 "elds.m"
                  case (MR_Integer) 0:
#line 4372 "erl_backend.elds.c"
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 214 "elds.m"
                    break;
#line 214 "elds.m"
                  case (MR_Integer) 1:
#line 4378 "erl_backend.elds.c"
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 214 "elds.m"
                    break;
#line 214 "elds.m"
                  case (MR_Integer) 2:
#line 4384 "erl_backend.elds.c"
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 214 "elds.m"
                    break;
#line 214 "elds.m"
                  case (MR_Integer) 3:
#line 4390 "erl_backend.elds.c"
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 214 "elds.m"
                    break;
#line 214 "elds.m"
                  case (MR_Integer) 4:
#line 4396 "erl_backend.elds.c"
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 214 "elds.m"
                    break;
#line 214 "elds.m"
                  case (MR_Integer) 5:
#line 4402 "erl_backend.elds.c"
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 214 "elds.m"
                    break;
#line 214 "elds.m"
                  case (MR_Integer) 6:
#line 4408 "erl_backend.elds.c"
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 214 "elds.m"
                    break;
#line 214 "elds.m"
                  case (MR_Integer) 7:
#line 4414 "erl_backend.elds.c"
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 214 "elds.m"
                    break;
#line 214 "elds.m"
                }
#line 214 "elds.m"
                break;
#line 214 "elds.m"
            }
#line 214 "elds.m"
          }
#line 214 "elds.m"
          break;
#line 214 "elds.m"
        case (MR_Integer) 3:
#line 214 "elds.m"
#line 214 "elds.m"
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)))) {
#line 214 "elds.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 214 "elds.m"
            case (MR_Integer) 0:
#line 214 "elds.m"
              {
#line 214 "elds.m"
                MR_Float erl_backend__elds__V_241_241 = MR_unbox_float((MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 1)));

#line 214 "elds.m"
#line 214 "elds.m"
                switch (MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) {
#line 214 "elds.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 214 "elds.m"
                  case (MR_Integer) 0:
#line 4449 "erl_backend.elds.c"
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 214 "elds.m"
                    break;
#line 214 "elds.m"
                  case (MR_Integer) 1:
#line 4455 "erl_backend.elds.c"
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 214 "elds.m"
                    break;
#line 214 "elds.m"
                  case (MR_Integer) 2:
#line 4461 "erl_backend.elds.c"
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 214 "elds.m"
                    break;
#line 214 "elds.m"
                  case (MR_Integer) 3:
#line 214 "elds.m"
#line 214 "elds.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) {
#line 214 "elds.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 214 "elds.m"
                      case (MR_Integer) 0:
#line 214 "elds.m"
                        {
#line 214 "elds.m"
                          MR_Float erl_backend__elds__V_51_51 = MR_unbox_float((MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 1)));

#line 214 "elds.m"
                          {
#line 214 "elds.m"
                            mercury__private_builtin__builtin_compare_float_3_p_0(erl_backend__elds__HeadVar__1_1, erl_backend__elds__V_241_241, erl_backend__elds__V_51_51);
                          }
#line 214 "elds.m"
                        }
#line 214 "elds.m"
                        break;
#line 214 "elds.m"
                      case (MR_Integer) 1:
#line 4490 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 214 "elds.m"
                        break;
#line 214 "elds.m"
                      case (MR_Integer) 2:
#line 4496 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 214 "elds.m"
                        break;
#line 214 "elds.m"
                      case (MR_Integer) 3:
#line 4502 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 214 "elds.m"
                        break;
#line 214 "elds.m"
                      case (MR_Integer) 4:
#line 4508 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 214 "elds.m"
                        break;
#line 214 "elds.m"
                      case (MR_Integer) 5:
#line 4514 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 214 "elds.m"
                        break;
#line 214 "elds.m"
                      case (MR_Integer) 6:
#line 4520 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 214 "elds.m"
                        break;
#line 214 "elds.m"
                      case (MR_Integer) 7:
#line 4526 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 214 "elds.m"
                        break;
#line 214 "elds.m"
                    }
#line 214 "elds.m"
                    break;
#line 214 "elds.m"
                }
#line 214 "elds.m"
              }
#line 214 "elds.m"
              break;
#line 214 "elds.m"
            case (MR_Integer) 1:
#line 214 "elds.m"
              {
#line 214 "elds.m"
                MR_String erl_backend__elds__V_238_238 = ((MR_String) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 1)));

#line 214 "elds.m"
#line 214 "elds.m"
                switch (MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) {
#line 214 "elds.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 214 "elds.m"
                  case (MR_Integer) 0:
#line 4554 "erl_backend.elds.c"
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 214 "elds.m"
                    break;
#line 214 "elds.m"
                  case (MR_Integer) 1:
#line 4560 "erl_backend.elds.c"
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 214 "elds.m"
                    break;
#line 214 "elds.m"
                  case (MR_Integer) 2:
#line 4566 "erl_backend.elds.c"
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 214 "elds.m"
                    break;
#line 214 "elds.m"
                  case (MR_Integer) 3:
#line 214 "elds.m"
#line 214 "elds.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) {
#line 214 "elds.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 214 "elds.m"
                      case (MR_Integer) 0:
#line 4579 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 214 "elds.m"
                        break;
#line 214 "elds.m"
                      case (MR_Integer) 1:
#line 214 "elds.m"
                        {
#line 214 "elds.m"
                          MR_String erl_backend__elds__V_74_74 = ((MR_String) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 1)));

#line 214 "elds.m"
                          {
#line 214 "elds.m"
                            mercury__private_builtin__builtin_compare_string_3_p_0(erl_backend__elds__HeadVar__1_1, erl_backend__elds__V_238_238, erl_backend__elds__V_74_74);
                          }
#line 214 "elds.m"
                        }
#line 214 "elds.m"
                        break;
#line 214 "elds.m"
                      case (MR_Integer) 2:
#line 4601 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 214 "elds.m"
                        break;
#line 214 "elds.m"
                      case (MR_Integer) 3:
#line 4607 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 214 "elds.m"
                        break;
#line 214 "elds.m"
                      case (MR_Integer) 4:
#line 4613 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 214 "elds.m"
                        break;
#line 214 "elds.m"
                      case (MR_Integer) 5:
#line 4619 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 214 "elds.m"
                        break;
#line 214 "elds.m"
                      case (MR_Integer) 6:
#line 4625 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 214 "elds.m"
                        break;
#line 214 "elds.m"
                      case (MR_Integer) 7:
#line 4631 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 214 "elds.m"
                        break;
#line 214 "elds.m"
                    }
#line 214 "elds.m"
                    break;
#line 214 "elds.m"
                }
#line 214 "elds.m"
              }
#line 214 "elds.m"
              break;
#line 214 "elds.m"
            case (MR_Integer) 2:
#line 214 "elds.m"
              {
#line 214 "elds.m"
                MR_String erl_backend__elds__V_243_243 = ((MR_String) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 1)));

#line 214 "elds.m"
#line 214 "elds.m"
                switch (MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) {
#line 214 "elds.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 214 "elds.m"
                  case (MR_Integer) 0:
#line 4659 "erl_backend.elds.c"
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 214 "elds.m"
                    break;
#line 214 "elds.m"
                  case (MR_Integer) 1:
#line 4665 "erl_backend.elds.c"
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 214 "elds.m"
                    break;
#line 214 "elds.m"
                  case (MR_Integer) 2:
#line 4671 "erl_backend.elds.c"
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 214 "elds.m"
                    break;
#line 214 "elds.m"
                  case (MR_Integer) 3:
#line 214 "elds.m"
#line 214 "elds.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) {
#line 214 "elds.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 214 "elds.m"
                      case (MR_Integer) 0:
#line 4684 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 214 "elds.m"
                        break;
#line 214 "elds.m"
                      case (MR_Integer) 1:
#line 4690 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 214 "elds.m"
                        break;
#line 214 "elds.m"
                      case (MR_Integer) 2:
#line 214 "elds.m"
                        {
#line 214 "elds.m"
                          MR_String erl_backend__elds__V_97_97 = ((MR_String) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 1)));

#line 214 "elds.m"
                          {
#line 214 "elds.m"
                            mercury__private_builtin__builtin_compare_string_3_p_0(erl_backend__elds__HeadVar__1_1, erl_backend__elds__V_243_243, erl_backend__elds__V_97_97);
                          }
#line 214 "elds.m"
                        }
#line 214 "elds.m"
                        break;
#line 214 "elds.m"
                      case (MR_Integer) 3:
#line 4712 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 214 "elds.m"
                        break;
#line 214 "elds.m"
                      case (MR_Integer) 4:
#line 4718 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 214 "elds.m"
                        break;
#line 214 "elds.m"
                      case (MR_Integer) 5:
#line 4724 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 214 "elds.m"
                        break;
#line 214 "elds.m"
                      case (MR_Integer) 6:
#line 4730 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 214 "elds.m"
                        break;
#line 214 "elds.m"
                      case (MR_Integer) 7:
#line 4736 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 214 "elds.m"
                        break;
#line 214 "elds.m"
                    }
#line 214 "elds.m"
                    break;
#line 214 "elds.m"
                }
#line 214 "elds.m"
              }
#line 214 "elds.m"
              break;
#line 214 "elds.m"
            case (MR_Integer) 3:
#line 214 "elds.m"
              {
#line 214 "elds.m"
                MR_String erl_backend__elds__V_237_237 = ((MR_String) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 1)));

#line 214 "elds.m"
#line 214 "elds.m"
                switch (MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) {
#line 214 "elds.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 214 "elds.m"
                  case (MR_Integer) 0:
#line 4764 "erl_backend.elds.c"
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 214 "elds.m"
                    break;
#line 214 "elds.m"
                  case (MR_Integer) 1:
#line 4770 "erl_backend.elds.c"
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 214 "elds.m"
                    break;
#line 214 "elds.m"
                  case (MR_Integer) 2:
#line 4776 "erl_backend.elds.c"
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 214 "elds.m"
                    break;
#line 214 "elds.m"
                  case (MR_Integer) 3:
#line 214 "elds.m"
#line 214 "elds.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) {
#line 214 "elds.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 214 "elds.m"
                      case (MR_Integer) 0:
#line 4789 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 214 "elds.m"
                        break;
#line 214 "elds.m"
                      case (MR_Integer) 1:
#line 4795 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 214 "elds.m"
                        break;
#line 214 "elds.m"
                      case (MR_Integer) 2:
#line 4801 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 214 "elds.m"
                        break;
#line 214 "elds.m"
                      case (MR_Integer) 3:
#line 214 "elds.m"
                        {
#line 214 "elds.m"
                          MR_String erl_backend__elds__V_120_120 = ((MR_String) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 1)));

#line 214 "elds.m"
                          {
#line 214 "elds.m"
                            mercury__private_builtin__builtin_compare_string_3_p_0(erl_backend__elds__HeadVar__1_1, erl_backend__elds__V_237_237, erl_backend__elds__V_120_120);
                          }
#line 214 "elds.m"
                        }
#line 214 "elds.m"
                        break;
#line 214 "elds.m"
                      case (MR_Integer) 4:
#line 4823 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 214 "elds.m"
                        break;
#line 214 "elds.m"
                      case (MR_Integer) 5:
#line 4829 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 214 "elds.m"
                        break;
#line 214 "elds.m"
                      case (MR_Integer) 6:
#line 4835 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 214 "elds.m"
                        break;
#line 214 "elds.m"
                      case (MR_Integer) 7:
#line 4841 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 214 "elds.m"
                        break;
#line 214 "elds.m"
                    }
#line 214 "elds.m"
                    break;
#line 214 "elds.m"
                }
#line 214 "elds.m"
              }
#line 214 "elds.m"
              break;
#line 214 "elds.m"
            case (MR_Integer) 4:
#line 214 "elds.m"
              {
#line 214 "elds.m"
                MR_Word erl_backend__elds__V_236_236 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 1)));

#line 214 "elds.m"
#line 214 "elds.m"
                switch (MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) {
#line 214 "elds.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 214 "elds.m"
                  case (MR_Integer) 0:
#line 4869 "erl_backend.elds.c"
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 214 "elds.m"
                    break;
#line 214 "elds.m"
                  case (MR_Integer) 1:
#line 4875 "erl_backend.elds.c"
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 214 "elds.m"
                    break;
#line 214 "elds.m"
                  case (MR_Integer) 2:
#line 4881 "erl_backend.elds.c"
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 214 "elds.m"
                    break;
#line 214 "elds.m"
                  case (MR_Integer) 3:
#line 214 "elds.m"
#line 214 "elds.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) {
#line 214 "elds.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 214 "elds.m"
                      case (MR_Integer) 0:
#line 4894 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 214 "elds.m"
                        break;
#line 214 "elds.m"
                      case (MR_Integer) 1:
#line 4900 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 214 "elds.m"
                        break;
#line 214 "elds.m"
                      case (MR_Integer) 2:
#line 4906 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 214 "elds.m"
                        break;
#line 214 "elds.m"
                      case (MR_Integer) 3:
#line 4912 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 214 "elds.m"
                        break;
#line 214 "elds.m"
                      case (MR_Integer) 4:
#line 214 "elds.m"
                        {
#line 214 "elds.m"
                          MR_Word erl_backend__elds__V_143_143 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 1)));

#line 214 "elds.m"
                          {
#line 214 "elds.m"
                            mdbcomp__sym_name____Compare____sym_name_0_0(erl_backend__elds__HeadVar__1_1, erl_backend__elds__V_236_236, erl_backend__elds__V_143_143);
                          }
#line 214 "elds.m"
                        }
#line 214 "elds.m"
                        break;
#line 214 "elds.m"
                      case (MR_Integer) 5:
#line 4934 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 214 "elds.m"
                        break;
#line 214 "elds.m"
                      case (MR_Integer) 6:
#line 4940 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 214 "elds.m"
                        break;
#line 214 "elds.m"
                      case (MR_Integer) 7:
#line 4946 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 214 "elds.m"
                        break;
#line 214 "elds.m"
                    }
#line 214 "elds.m"
                    break;
#line 214 "elds.m"
                }
#line 214 "elds.m"
              }
#line 214 "elds.m"
              break;
#line 214 "elds.m"
            case (MR_Integer) 5:
#line 214 "elds.m"
              {
#line 214 "elds.m"
                MR_Word erl_backend__elds__V_244_244 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 1)));

#line 214 "elds.m"
#line 214 "elds.m"
                switch (MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) {
#line 214 "elds.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 214 "elds.m"
                  case (MR_Integer) 0:
#line 4974 "erl_backend.elds.c"
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 214 "elds.m"
                    break;
#line 214 "elds.m"
                  case (MR_Integer) 1:
#line 4980 "erl_backend.elds.c"
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 214 "elds.m"
                    break;
#line 214 "elds.m"
                  case (MR_Integer) 2:
#line 4986 "erl_backend.elds.c"
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 214 "elds.m"
                    break;
#line 214 "elds.m"
                  case (MR_Integer) 3:
#line 214 "elds.m"
#line 214 "elds.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) {
#line 214 "elds.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 214 "elds.m"
                      case (MR_Integer) 0:
#line 4999 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 214 "elds.m"
                        break;
#line 214 "elds.m"
                      case (MR_Integer) 1:
#line 5005 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 214 "elds.m"
                        break;
#line 214 "elds.m"
                      case (MR_Integer) 2:
#line 5011 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 214 "elds.m"
                        break;
#line 214 "elds.m"
                      case (MR_Integer) 3:
#line 5017 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 214 "elds.m"
                        break;
#line 214 "elds.m"
                      case (MR_Integer) 4:
#line 5023 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 214 "elds.m"
                        break;
#line 214 "elds.m"
                      case (MR_Integer) 5:
#line 214 "elds.m"
                        {
#line 214 "elds.m"
                          MR_Word erl_backend__elds__V_166_166 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 1)));

#line 214 "elds.m"
                          {
#line 214 "elds.m"
                            mercury__builtin__compare_3_p_0((MR_Word) &erl_backend__elds_scalar_common_1[14], erl_backend__elds__HeadVar__1_1, ((MR_Box) (erl_backend__elds__V_244_244)), ((MR_Box) (erl_backend__elds__V_166_166)));
                          }
#line 214 "elds.m"
                        }
#line 214 "elds.m"
                        break;
#line 214 "elds.m"
                      case (MR_Integer) 6:
#line 5045 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 214 "elds.m"
                        break;
#line 214 "elds.m"
                      case (MR_Integer) 7:
#line 5051 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 214 "elds.m"
                        break;
#line 214 "elds.m"
                    }
#line 214 "elds.m"
                    break;
#line 214 "elds.m"
                }
#line 214 "elds.m"
              }
#line 214 "elds.m"
              break;
#line 214 "elds.m"
            case (MR_Integer) 6:
#line 214 "elds.m"
              {
#line 214 "elds.m"
                MR_Word erl_backend__elds__V_245_245 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 1)));

#line 214 "elds.m"
#line 214 "elds.m"
                switch (MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) {
#line 214 "elds.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 214 "elds.m"
                  case (MR_Integer) 0:
#line 5079 "erl_backend.elds.c"
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 214 "elds.m"
                    break;
#line 214 "elds.m"
                  case (MR_Integer) 1:
#line 5085 "erl_backend.elds.c"
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 214 "elds.m"
                    break;
#line 214 "elds.m"
                  case (MR_Integer) 2:
#line 5091 "erl_backend.elds.c"
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 214 "elds.m"
                    break;
#line 214 "elds.m"
                  case (MR_Integer) 3:
#line 214 "elds.m"
#line 214 "elds.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) {
#line 214 "elds.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 214 "elds.m"
                      case (MR_Integer) 0:
#line 5104 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 214 "elds.m"
                        break;
#line 214 "elds.m"
                      case (MR_Integer) 1:
#line 5110 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 214 "elds.m"
                        break;
#line 214 "elds.m"
                      case (MR_Integer) 2:
#line 5116 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 214 "elds.m"
                        break;
#line 214 "elds.m"
                      case (MR_Integer) 3:
#line 5122 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 214 "elds.m"
                        break;
#line 214 "elds.m"
                      case (MR_Integer) 4:
#line 5128 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 214 "elds.m"
                        break;
#line 214 "elds.m"
                      case (MR_Integer) 5:
#line 5134 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 214 "elds.m"
                        break;
#line 214 "elds.m"
                      case (MR_Integer) 6:
#line 214 "elds.m"
                        {
#line 214 "elds.m"
                          MR_Word erl_backend__elds__V_189_189 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 1)));

#line 214 "elds.m"
                          {
#line 214 "elds.m"
                            mercury__builtin__compare_3_p_0((MR_Word) &erl_backend__elds_scalar_common_1[0], erl_backend__elds__HeadVar__1_1, ((MR_Box) (erl_backend__elds__V_245_245)), ((MR_Box) (erl_backend__elds__V_189_189)));
                          }
#line 214 "elds.m"
                        }
#line 214 "elds.m"
                        break;
#line 214 "elds.m"
                      case (MR_Integer) 7:
#line 5156 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 214 "elds.m"
                        break;
#line 214 "elds.m"
                    }
#line 214 "elds.m"
                    break;
#line 214 "elds.m"
                }
#line 214 "elds.m"
              }
#line 214 "elds.m"
              break;
#line 214 "elds.m"
            case (MR_Integer) 7:
#line 214 "elds.m"
              {
#line 214 "elds.m"
                MR_String erl_backend__elds__V_240_240 = ((MR_String) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 1)));

#line 214 "elds.m"
#line 214 "elds.m"
                switch (MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) {
#line 214 "elds.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 214 "elds.m"
                  case (MR_Integer) 0:
#line 5184 "erl_backend.elds.c"
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 214 "elds.m"
                    break;
#line 214 "elds.m"
                  case (MR_Integer) 1:
#line 5190 "erl_backend.elds.c"
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 214 "elds.m"
                    break;
#line 214 "elds.m"
                  case (MR_Integer) 2:
#line 5196 "erl_backend.elds.c"
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 214 "elds.m"
                    break;
#line 214 "elds.m"
                  case (MR_Integer) 3:
#line 214 "elds.m"
#line 214 "elds.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) {
#line 214 "elds.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 214 "elds.m"
                      case (MR_Integer) 0:
#line 5209 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 214 "elds.m"
                        break;
#line 214 "elds.m"
                      case (MR_Integer) 1:
#line 5215 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 214 "elds.m"
                        break;
#line 214 "elds.m"
                      case (MR_Integer) 2:
#line 5221 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 214 "elds.m"
                        break;
#line 214 "elds.m"
                      case (MR_Integer) 3:
#line 5227 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 214 "elds.m"
                        break;
#line 214 "elds.m"
                      case (MR_Integer) 4:
#line 5233 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 214 "elds.m"
                        break;
#line 214 "elds.m"
                      case (MR_Integer) 5:
#line 5239 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 214 "elds.m"
                        break;
#line 214 "elds.m"
                      case (MR_Integer) 6:
#line 5245 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 214 "elds.m"
                        break;
#line 214 "elds.m"
                      case (MR_Integer) 7:
#line 214 "elds.m"
                        {
#line 214 "elds.m"
                          MR_String erl_backend__elds__V_223_223 = ((MR_String) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 1)));

#line 214 "elds.m"
                          {
#line 214 "elds.m"
                            mercury__private_builtin__builtin_compare_string_3_p_0(erl_backend__elds__HeadVar__1_1, erl_backend__elds__V_240_240, erl_backend__elds__V_223_223);
                          }
#line 214 "elds.m"
                        }
#line 214 "elds.m"
                        break;
#line 214 "elds.m"
                    }
#line 214 "elds.m"
                    break;
#line 214 "elds.m"
                }
#line 214 "elds.m"
              }
#line 214 "elds.m"
              break;
#line 214 "elds.m"
          }
#line 214 "elds.m"
          break;
#line 214 "elds.m"
      }
#line 214 "elds.m"
  }
#line 214 "elds.m"
}

#line 214 "elds.m"
MR_bool MR_CALL 
erl_backend__elds____Unify____elds_term_0_0(
#line 214 "elds.m"
  MR_Word erl_backend__elds__HeadVar__1_1,
#line 214 "elds.m"
  MR_Word erl_backend__elds__HeadVar__2_2)
#line 214 "elds.m"
{
#line 214 "elds.m"
  {
#line 214 "elds.m"
    MR_bool erl_backend__elds__succeeded;
#line 214 "elds.m"
    MR_Integer erl_backend__elds__CastX_25 = (MR_Integer) erl_backend__elds__HeadVar__1_1;
#line 214 "elds.m"
    MR_Integer erl_backend__elds__CastY_26 = (MR_Integer) erl_backend__elds__HeadVar__2_2;

#line 214 "elds.m"
    erl_backend__elds__succeeded = (erl_backend__elds__CastX_25 == erl_backend__elds__CastY_26);
#line 214 "elds.m"
    if (erl_backend__elds__succeeded)
#line 214 "elds.m"
      erl_backend__elds__succeeded = MR_TRUE;
#line 214 "elds.m"
    else
#line 214 "elds.m"
#line 214 "elds.m"
      switch (MR_tag((MR_Word) erl_backend__elds__HeadVar__1_1)) {
#line 214 "elds.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 214 "elds.m"
        case (MR_Integer) 0:
#line 214 "elds.m"
          {
#line 214 "elds.m"
            MR_Integer erl_backend__elds__CastX_21 = (MR_Integer) erl_backend__elds__HeadVar__1_1;
#line 214 "elds.m"
            MR_Integer erl_backend__elds__CastY_22 = (MR_Integer) erl_backend__elds__HeadVar__2_2;

#line 214 "elds.m"
            erl_backend__elds__succeeded = (erl_backend__elds__CastY_22 == erl_backend__elds__CastX_21);
#line 214 "elds.m"
          }
#line 214 "elds.m"
          break;
#line 214 "elds.m"
        case (MR_Integer) 1:
#line 214 "elds.m"
          {
#line 214 "elds.m"
            MR_Char erl_backend__elds__V_3_3 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds__HeadVar__1_1, (MR_Integer) 0)));
#line 214 "elds.m"
            MR_Char erl_backend__elds__V_4_4;

#line 214 "elds.m"
            erl_backend__elds__succeeded = ((MR_tag((MR_Word) erl_backend__elds__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 214 "elds.m"
            if (erl_backend__elds__succeeded)
#line 214 "elds.m"
              {
#line 214 "elds.m"
                erl_backend__elds__V_4_4 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)));
#line 5349 "erl_backend.elds.c"
                erl_backend__elds__succeeded = (erl_backend__elds__V_3_3 == erl_backend__elds__V_4_4);
#line 214 "elds.m"
              }
#line 214 "elds.m"
          }
#line 214 "elds.m"
          break;
#line 214 "elds.m"
        case (MR_Integer) 2:
#line 214 "elds.m"
          {
#line 214 "elds.m"
            MR_Integer erl_backend__elds__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(2), erl_backend__elds__HeadVar__1_1, (MR_Integer) 0)));
#line 214 "elds.m"
            MR_Integer erl_backend__elds__V_6_6;

#line 214 "elds.m"
            erl_backend__elds__succeeded = ((MR_tag((MR_Word) erl_backend__elds__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 214 "elds.m"
            if (erl_backend__elds__succeeded)
#line 214 "elds.m"
              {
#line 214 "elds.m"
                erl_backend__elds__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(2), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)));
#line 5374 "erl_backend.elds.c"
                erl_backend__elds__succeeded = (erl_backend__elds__V_5_5 == erl_backend__elds__V_6_6);
#line 214 "elds.m"
              }
#line 214 "elds.m"
          }
#line 214 "elds.m"
          break;
#line 214 "elds.m"
        case (MR_Integer) 3:
#line 214 "elds.m"
#line 214 "elds.m"
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__1_1, (MR_Integer) 0)))) {
#line 214 "elds.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 214 "elds.m"
            case (MR_Integer) 0:
#line 214 "elds.m"
              {
#line 214 "elds.m"
                MR_Float erl_backend__elds__V_7_7 = MR_unbox_float((MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__1_1, (MR_Integer) 1)));
#line 214 "elds.m"
                MR_Float erl_backend__elds__V_8_8;

#line 214 "elds.m"
                erl_backend__elds__succeeded = ((((MR_tag((MR_Word) erl_backend__elds__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 214 "elds.m"
                if (erl_backend__elds__succeeded)
#line 214 "elds.m"
                  {
#line 214 "elds.m"
                    erl_backend__elds__V_8_8 = MR_unbox_float((MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 1)));
#line 5406 "erl_backend.elds.c"
                    erl_backend__elds__succeeded = (erl_backend__elds__V_7_7 == erl_backend__elds__V_8_8);
#line 214 "elds.m"
                  }
#line 214 "elds.m"
              }
#line 214 "elds.m"
              break;
#line 214 "elds.m"
            case (MR_Integer) 1:
#line 214 "elds.m"
              {
#line 214 "elds.m"
                MR_String erl_backend__elds__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__1_1, (MR_Integer) 1)));
#line 214 "elds.m"
                MR_String erl_backend__elds__V_10_10;

#line 214 "elds.m"
                erl_backend__elds__succeeded = ((((MR_tag((MR_Word) erl_backend__elds__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 214 "elds.m"
                if (erl_backend__elds__succeeded)
#line 214 "elds.m"
                  {
#line 214 "elds.m"
                    erl_backend__elds__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 1)));
#line 5431 "erl_backend.elds.c"
                    erl_backend__elds__succeeded = (strcmp(erl_backend__elds__V_9_9, erl_backend__elds__V_10_10) == 0);
#line 214 "elds.m"
                  }
#line 214 "elds.m"
              }
#line 214 "elds.m"
              break;
#line 214 "elds.m"
            case (MR_Integer) 2:
#line 214 "elds.m"
              {
#line 214 "elds.m"
                MR_String erl_backend__elds__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__1_1, (MR_Integer) 1)));
#line 214 "elds.m"
                MR_String erl_backend__elds__V_12_12;

#line 214 "elds.m"
                erl_backend__elds__succeeded = ((((MR_tag((MR_Word) erl_backend__elds__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 214 "elds.m"
                if (erl_backend__elds__succeeded)
#line 214 "elds.m"
                  {
#line 214 "elds.m"
                    erl_backend__elds__V_12_12 = ((MR_String) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 1)));
#line 5456 "erl_backend.elds.c"
                    erl_backend__elds__succeeded = (strcmp(erl_backend__elds__V_11_11, erl_backend__elds__V_12_12) == 0);
#line 214 "elds.m"
                  }
#line 214 "elds.m"
              }
#line 214 "elds.m"
              break;
#line 214 "elds.m"
            case (MR_Integer) 3:
#line 214 "elds.m"
              {
#line 214 "elds.m"
                MR_String erl_backend__elds__V_13_13 = ((MR_String) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__1_1, (MR_Integer) 1)));
#line 214 "elds.m"
                MR_String erl_backend__elds__V_14_14;

#line 214 "elds.m"
                erl_backend__elds__succeeded = ((((MR_tag((MR_Word) erl_backend__elds__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 214 "elds.m"
                if (erl_backend__elds__succeeded)
#line 214 "elds.m"
                  {
#line 214 "elds.m"
                    erl_backend__elds__V_14_14 = ((MR_String) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 1)));
#line 5481 "erl_backend.elds.c"
                    erl_backend__elds__succeeded = (strcmp(erl_backend__elds__V_13_13, erl_backend__elds__V_14_14) == 0);
#line 214 "elds.m"
                  }
#line 214 "elds.m"
              }
#line 214 "elds.m"
              break;
#line 214 "elds.m"
            case (MR_Integer) 4:
#line 214 "elds.m"
              {
#line 214 "elds.m"
                MR_Word erl_backend__elds__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__1_1, (MR_Integer) 1)));
#line 214 "elds.m"
                MR_Word erl_backend__elds__V_16_16;

#line 214 "elds.m"
                erl_backend__elds__succeeded = ((((MR_tag((MR_Word) erl_backend__elds__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 214 "elds.m"
                if (erl_backend__elds__succeeded)
#line 214 "elds.m"
                  {
#line 214 "elds.m"
                    erl_backend__elds__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 1)));
#line 5506 "erl_backend.elds.c"
                    {
#line 5508 "erl_backend.elds.c"
                      erl_backend__elds__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(erl_backend__elds__V_15_15, erl_backend__elds__V_16_16);
                    }
#line 214 "elds.m"
                  }
#line 214 "elds.m"
              }
#line 214 "elds.m"
              break;
#line 214 "elds.m"
            case (MR_Integer) 5:
#line 214 "elds.m"
              {
#line 214 "elds.m"
                MR_Word erl_backend__elds__TypeInfo_28_28;
#line 214 "elds.m"
                MR_Word erl_backend__elds__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__1_1, (MR_Integer) 1)));
#line 214 "elds.m"
                MR_Word erl_backend__elds__V_18_18;

#line 214 "elds.m"
                erl_backend__elds__succeeded = ((((MR_tag((MR_Word) erl_backend__elds__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 214 "elds.m"
                if (erl_backend__elds__succeeded)
#line 214 "elds.m"
                  {
#line 214 "elds.m"
                    erl_backend__elds__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 1)));
#line 5536 "erl_backend.elds.c"
                    erl_backend__elds__TypeInfo_28_28 = (MR_Word) &erl_backend__elds_scalar_common_1[14];
#line 5538 "erl_backend.elds.c"
                    {
#line 5540 "erl_backend.elds.c"
                      erl_backend__elds__succeeded = mercury__builtin__unify_2_p_0(erl_backend__elds__TypeInfo_28_28, ((MR_Box) (erl_backend__elds__V_17_17)), ((MR_Box) (erl_backend__elds__V_18_18)));
                    }
#line 214 "elds.m"
                  }
#line 214 "elds.m"
              }
#line 214 "elds.m"
              break;
#line 214 "elds.m"
            case (MR_Integer) 6:
#line 214 "elds.m"
              {
#line 214 "elds.m"
                MR_Word erl_backend__elds__TypeInfo_29_29;
#line 214 "elds.m"
                MR_Word erl_backend__elds__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__1_1, (MR_Integer) 1)));
#line 214 "elds.m"
                MR_Word erl_backend__elds__V_20_20;

#line 214 "elds.m"
                erl_backend__elds__succeeded = ((((MR_tag((MR_Word) erl_backend__elds__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 214 "elds.m"
                if (erl_backend__elds__succeeded)
#line 214 "elds.m"
                  {
#line 214 "elds.m"
                    erl_backend__elds__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 1)));
#line 5568 "erl_backend.elds.c"
                    erl_backend__elds__TypeInfo_29_29 = (MR_Word) &erl_backend__elds_scalar_common_1[0];
#line 5570 "erl_backend.elds.c"
                    {
#line 5572 "erl_backend.elds.c"
                      erl_backend__elds__succeeded = mercury__builtin__unify_2_p_0(erl_backend__elds__TypeInfo_29_29, ((MR_Box) (erl_backend__elds__V_19_19)), ((MR_Box) (erl_backend__elds__V_20_20)));
                    }
#line 214 "elds.m"
                  }
#line 214 "elds.m"
              }
#line 214 "elds.m"
              break;
#line 214 "elds.m"
            case (MR_Integer) 7:
#line 214 "elds.m"
              {
#line 214 "elds.m"
                MR_String erl_backend__elds__V_23_23 = ((MR_String) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__1_1, (MR_Integer) 1)));
#line 214 "elds.m"
                MR_String erl_backend__elds__V_24_24;

#line 214 "elds.m"
                erl_backend__elds__succeeded = ((((MR_tag((MR_Word) erl_backend__elds__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 7)));
#line 214 "elds.m"
                if (erl_backend__elds__succeeded)
#line 214 "elds.m"
                  {
#line 214 "elds.m"
                    erl_backend__elds__V_24_24 = ((MR_String) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 1)));
#line 5598 "erl_backend.elds.c"
                    erl_backend__elds__succeeded = (strcmp(erl_backend__elds__V_23_23, erl_backend__elds__V_24_24) == 0);
#line 214 "elds.m"
                  }
#line 214 "elds.m"
              }
#line 214 "elds.m"
              break;
#line 214 "elds.m"
          }
#line 214 "elds.m"
          break;
#line 214 "elds.m"
      }
#line 214 "elds.m"
    return erl_backend__elds__succeeded;
#line 214 "elds.m"
  }
#line 214 "elds.m"
}

#line 113 "elds.m"
void MR_CALL 
erl_backend__elds____Compare____elds_rtti_id_0_0(
#line 113 "elds.m"
  MR_Word * erl_backend__elds__HeadVar__1_1,
#line 113 "elds.m"
  MR_Word erl_backend__elds__HeadVar__2_2,
#line 113 "elds.m"
  MR_Word erl_backend__elds__HeadVar__3_3)
#line 113 "elds.m"
{
#line 113 "elds.m"
  {
#line 113 "elds.m"
    MR_bool erl_backend__elds__succeeded;
#line 113 "elds.m"
    MR_Integer erl_backend__elds__CastX_54 = (MR_Integer) erl_backend__elds__HeadVar__2_2;
#line 113 "elds.m"
    MR_Integer erl_backend__elds__CastY_55 = (MR_Integer) erl_backend__elds__HeadVar__3_3;

#line 113 "elds.m"
    erl_backend__elds__succeeded = (erl_backend__elds__CastX_54 == erl_backend__elds__CastY_55);
#line 113 "elds.m"
    if (erl_backend__elds__succeeded)
#line 5643 "erl_backend.elds.c"
      *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 0;
#line 113 "elds.m"
    else
#line 113 "elds.m"
#line 113 "elds.m"
      switch (MR_tag((MR_Word) erl_backend__elds__HeadVar__2_2)) {
#line 113 "elds.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 113 "elds.m"
        case (MR_Integer) 0:
#line 113 "elds.m"
          {
#line 113 "elds.m"
            MR_Word erl_backend__elds__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)));

#line 113 "elds.m"
#line 113 "elds.m"
            switch (MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) {
#line 113 "elds.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 113 "elds.m"
              case (MR_Integer) 0:
#line 113 "elds.m"
                {
#line 113 "elds.m"
                  MR_Word erl_backend__elds__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)));

#line 113 "elds.m"
                  {
#line 113 "elds.m"
                    backend_libs__rtti____Compare____rtti_type_ctor_0_0(erl_backend__elds__HeadVar__1_1, erl_backend__elds__V_66_66, erl_backend__elds__V_5_5);
                  }
#line 113 "elds.m"
                }
#line 113 "elds.m"
                break;
#line 113 "elds.m"
              case (MR_Integer) 1:
#line 5682 "erl_backend.elds.c"
                *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 113 "elds.m"
                break;
#line 113 "elds.m"
              case (MR_Integer) 2:
#line 5688 "erl_backend.elds.c"
                *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 113 "elds.m"
                break;
#line 113 "elds.m"
              case (MR_Integer) 3:
#line 5694 "erl_backend.elds.c"
                *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 113 "elds.m"
                break;
#line 113 "elds.m"
            }
#line 113 "elds.m"
          }
#line 113 "elds.m"
          break;
#line 113 "elds.m"
        case (MR_Integer) 1:
#line 113 "elds.m"
          {
#line 113 "elds.m"
            MR_Word erl_backend__elds__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)));

#line 113 "elds.m"
#line 113 "elds.m"
            switch (MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) {
#line 113 "elds.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 113 "elds.m"
              case (MR_Integer) 0:
#line 5718 "erl_backend.elds.c"
                *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 113 "elds.m"
                break;
#line 113 "elds.m"
              case (MR_Integer) 1:
#line 113 "elds.m"
                {
#line 113 "elds.m"
                  MR_Word erl_backend__elds__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)));

#line 113 "elds.m"
                  {
#line 113 "elds.m"
                    backend_libs__rtti____Compare____rtti_type_info_0_0(erl_backend__elds__HeadVar__1_1, erl_backend__elds__V_67_67, erl_backend__elds__V_17_17);
                  }
#line 113 "elds.m"
                }
#line 113 "elds.m"
                break;
#line 113 "elds.m"
              case (MR_Integer) 2:
#line 5740 "erl_backend.elds.c"
                *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 113 "elds.m"
                break;
#line 113 "elds.m"
              case (MR_Integer) 3:
#line 5746 "erl_backend.elds.c"
                *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 113 "elds.m"
                break;
#line 113 "elds.m"
            }
#line 113 "elds.m"
          }
#line 113 "elds.m"
          break;
#line 113 "elds.m"
        case (MR_Integer) 2:
#line 113 "elds.m"
          {
#line 113 "elds.m"
            MR_Word erl_backend__elds__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(2), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)));

#line 113 "elds.m"
#line 113 "elds.m"
            switch (MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) {
#line 113 "elds.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 113 "elds.m"
              case (MR_Integer) 0:
#line 5770 "erl_backend.elds.c"
                *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 113 "elds.m"
                break;
#line 113 "elds.m"
              case (MR_Integer) 1:
#line 5776 "erl_backend.elds.c"
                *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 113 "elds.m"
                break;
#line 113 "elds.m"
              case (MR_Integer) 2:
#line 113 "elds.m"
                {
#line 113 "elds.m"
                  MR_Word erl_backend__elds__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(2), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)));

#line 113 "elds.m"
                  {
#line 113 "elds.m"
                    backend_libs__rtti____Compare____rtti_pseudo_type_info_0_0(erl_backend__elds__HeadVar__1_1, erl_backend__elds__V_65_65, erl_backend__elds__V_29_29);
                  }
#line 113 "elds.m"
                }
#line 113 "elds.m"
                break;
#line 113 "elds.m"
              case (MR_Integer) 3:
#line 5798 "erl_backend.elds.c"
                *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 113 "elds.m"
                break;
#line 113 "elds.m"
            }
#line 113 "elds.m"
          }
#line 113 "elds.m"
          break;
#line 113 "elds.m"
        case (MR_Integer) 3:
#line 113 "elds.m"
          {
#line 113 "elds.m"
            MR_String erl_backend__elds__V_62_62 = ((MR_String) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 2)));
#line 113 "elds.m"
            MR_Word erl_backend__elds__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 1)));
#line 113 "elds.m"
            MR_Word erl_backend__elds__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)));

#line 113 "elds.m"
#line 113 "elds.m"
            switch (MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) {
#line 113 "elds.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 113 "elds.m"
              case (MR_Integer) 0:
#line 5826 "erl_backend.elds.c"
                *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 113 "elds.m"
                break;
#line 113 "elds.m"
              case (MR_Integer) 1:
#line 5832 "erl_backend.elds.c"
                *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 113 "elds.m"
                break;
#line 113 "elds.m"
              case (MR_Integer) 2:
#line 5838 "erl_backend.elds.c"
                *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 113 "elds.m"
                break;
#line 113 "elds.m"
              case (MR_Integer) 3:
#line 113 "elds.m"
                {
#line 113 "elds.m"
                  MR_Word erl_backend__elds__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)));
#line 113 "elds.m"
                  MR_Word erl_backend__elds__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 1)));
#line 113 "elds.m"
                  MR_String erl_backend__elds__V_51_51 = ((MR_String) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 2)));
#line 113 "elds.m"
                  MR_Word erl_backend__elds__V_52_52;

#line 113 "elds.m"
                  {
#line 113 "elds.m"
                    backend_libs__rtti____Compare____tc_name_0_0(&erl_backend__elds__V_52_52, erl_backend__elds__V_64_64, erl_backend__elds__V_49_49);
                  }
#line 5860 "erl_backend.elds.c"
                  erl_backend__elds__succeeded = (erl_backend__elds__V_52_52 == (MR_Integer) 0);
#line 113 "elds.m"
                  erl_backend__elds__succeeded = !(erl_backend__elds__succeeded);
#line 113 "elds.m"
                  if (erl_backend__elds__succeeded)
#line 113 "elds.m"
                    *erl_backend__elds__HeadVar__1_1 = erl_backend__elds__V_52_52;
#line 113 "elds.m"
                  else
#line 113 "elds.m"
                    {
#line 113 "elds.m"
                      MR_Word erl_backend__elds__V_53_53;

#line 113 "elds.m"
                      {
#line 113 "elds.m"
                        mdbcomp__sym_name____Compare____sym_name_0_0(&erl_backend__elds__V_53_53, erl_backend__elds__V_63_63, erl_backend__elds__V_50_50);
                      }
#line 5880 "erl_backend.elds.c"
                      erl_backend__elds__succeeded = (erl_backend__elds__V_53_53 == (MR_Integer) 0);
#line 113 "elds.m"
                      erl_backend__elds__succeeded = !(erl_backend__elds__succeeded);
#line 113 "elds.m"
                      if (erl_backend__elds__succeeded)
#line 113 "elds.m"
                        *erl_backend__elds__HeadVar__1_1 = erl_backend__elds__V_53_53;
#line 113 "elds.m"
                      else
#line 113 "elds.m"
                        {
#line 113 "elds.m"
                          mercury__private_builtin__builtin_compare_string_3_p_0(erl_backend__elds__HeadVar__1_1, erl_backend__elds__V_62_62, erl_backend__elds__V_51_51);
                        }
#line 113 "elds.m"
                    }
#line 113 "elds.m"
                }
#line 113 "elds.m"
                break;
#line 113 "elds.m"
            }
#line 113 "elds.m"
          }
#line 113 "elds.m"
          break;
#line 113 "elds.m"
      }
#line 113 "elds.m"
  }
#line 113 "elds.m"
}

#line 113 "elds.m"
MR_bool MR_CALL 
erl_backend__elds____Unify____elds_rtti_id_0_0(
#line 113 "elds.m"
  MR_Word erl_backend__elds__HeadVar__1_1,
#line 113 "elds.m"
  MR_Word erl_backend__elds__HeadVar__2_2)
#line 113 "elds.m"
{
#line 113 "elds.m"
  {
#line 113 "elds.m"
    MR_bool erl_backend__elds__succeeded;
#line 113 "elds.m"
    MR_Integer erl_backend__elds__CastX_15 = (MR_Integer) erl_backend__elds__HeadVar__1_1;
#line 113 "elds.m"
    MR_Integer erl_backend__elds__CastY_16 = (MR_Integer) erl_backend__elds__HeadVar__2_2;

#line 113 "elds.m"
    erl_backend__elds__succeeded = (erl_backend__elds__CastX_15 == erl_backend__elds__CastY_16);
#line 113 "elds.m"
    if (erl_backend__elds__succeeded)
#line 113 "elds.m"
      erl_backend__elds__succeeded = MR_TRUE;
#line 113 "elds.m"
    else
#line 113 "elds.m"
#line 113 "elds.m"
      switch (MR_tag((MR_Word) erl_backend__elds__HeadVar__1_1)) {
#line 113 "elds.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 113 "elds.m"
        case (MR_Integer) 0:
#line 113 "elds.m"
          {
#line 113 "elds.m"
            MR_Word erl_backend__elds__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__1_1, (MR_Integer) 0)));
#line 113 "elds.m"
            MR_Word erl_backend__elds__V_4_4;

#line 113 "elds.m"
            erl_backend__elds__succeeded = ((MR_tag((MR_Word) erl_backend__elds__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 113 "elds.m"
            if (erl_backend__elds__succeeded)
#line 113 "elds.m"
              {
#line 113 "elds.m"
                erl_backend__elds__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)));
#line 5962 "erl_backend.elds.c"
                {
#line 5964 "erl_backend.elds.c"
                  erl_backend__elds__succeeded = backend_libs__rtti____Unify____rtti_type_ctor_0_0(erl_backend__elds__V_3_3, erl_backend__elds__V_4_4);
                }
#line 113 "elds.m"
              }
#line 113 "elds.m"
          }
#line 113 "elds.m"
          break;
#line 113 "elds.m"
        case (MR_Integer) 1:
#line 113 "elds.m"
          {
#line 113 "elds.m"
            MR_Word erl_backend__elds__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds__HeadVar__1_1, (MR_Integer) 0)));
#line 113 "elds.m"
            MR_Word erl_backend__elds__V_6_6;

#line 113 "elds.m"
            erl_backend__elds__succeeded = ((MR_tag((MR_Word) erl_backend__elds__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 113 "elds.m"
            if (erl_backend__elds__succeeded)
#line 113 "elds.m"
              {
#line 113 "elds.m"
                erl_backend__elds__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)));
#line 5990 "erl_backend.elds.c"
                {
#line 5992 "erl_backend.elds.c"
                  erl_backend__elds__succeeded = backend_libs__rtti____Unify____rtti_type_info_0_0(erl_backend__elds__V_5_5, erl_backend__elds__V_6_6);
                }
#line 113 "elds.m"
              }
#line 113 "elds.m"
          }
#line 113 "elds.m"
          break;
#line 113 "elds.m"
        case (MR_Integer) 2:
#line 113 "elds.m"
          {
#line 113 "elds.m"
            MR_Word erl_backend__elds__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), erl_backend__elds__HeadVar__1_1, (MR_Integer) 0)));
#line 113 "elds.m"
            MR_Word erl_backend__elds__V_8_8;

#line 113 "elds.m"
            erl_backend__elds__succeeded = ((MR_tag((MR_Word) erl_backend__elds__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 113 "elds.m"
            if (erl_backend__elds__succeeded)
#line 113 "elds.m"
              {
#line 113 "elds.m"
                erl_backend__elds__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)));
#line 6018 "erl_backend.elds.c"
                {
#line 6020 "erl_backend.elds.c"
                  erl_backend__elds__succeeded = backend_libs__rtti____Unify____rtti_pseudo_type_info_0_0(erl_backend__elds__V_7_7, erl_backend__elds__V_8_8);
                }
#line 113 "elds.m"
              }
#line 113 "elds.m"
          }
#line 113 "elds.m"
          break;
#line 113 "elds.m"
        case (MR_Integer) 3:
#line 113 "elds.m"
          {
#line 113 "elds.m"
            MR_Word erl_backend__elds__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__1_1, (MR_Integer) 0)));
#line 113 "elds.m"
            MR_Word erl_backend__elds__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__1_1, (MR_Integer) 1)));
#line 113 "elds.m"
            MR_String erl_backend__elds__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__1_1, (MR_Integer) 2)));
#line 113 "elds.m"
            MR_Word erl_backend__elds__V_12_12;
#line 113 "elds.m"
            MR_Word erl_backend__elds__V_13_13;
#line 113 "elds.m"
            MR_String erl_backend__elds__V_14_14;

#line 113 "elds.m"
            erl_backend__elds__succeeded = ((MR_tag((MR_Word) erl_backend__elds__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)));
#line 113 "elds.m"
            if (erl_backend__elds__succeeded)
#line 113 "elds.m"
              {
#line 113 "elds.m"
                erl_backend__elds__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)));
#line 113 "elds.m"
                erl_backend__elds__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 1)));
#line 113 "elds.m"
                erl_backend__elds__V_14_14 = ((MR_String) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 2)));
#line 6058 "erl_backend.elds.c"
                {
#line 6060 "erl_backend.elds.c"
                  erl_backend__elds__succeeded = backend_libs__rtti____Unify____tc_name_0_0(erl_backend__elds__V_9_9, erl_backend__elds__V_12_12);
                }
#line 113 "elds.m"
                if (erl_backend__elds__succeeded)
#line 113 "elds.m"
                  {
#line 6067 "erl_backend.elds.c"
                    {
#line 6069 "erl_backend.elds.c"
                      erl_backend__elds__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(erl_backend__elds__V_10_10, erl_backend__elds__V_13_13);
                    }
#line 113 "elds.m"
                    if (erl_backend__elds__succeeded)
#line 6074 "erl_backend.elds.c"
                      erl_backend__elds__succeeded = (strcmp(erl_backend__elds__V_11_11, erl_backend__elds__V_14_14) == 0);
#line 113 "elds.m"
                  }
#line 113 "elds.m"
              }
#line 113 "elds.m"
          }
#line 113 "elds.m"
          break;
#line 113 "elds.m"
      }
#line 113 "elds.m"
    return erl_backend__elds__succeeded;
#line 113 "elds.m"
  }
#line 113 "elds.m"
}

#line 103 "elds.m"
void MR_CALL 
erl_backend__elds____Compare____elds_rtti_defn_0_0(
#line 103 "elds.m"
  MR_Word * erl_backend__elds__HeadVar__1_1,
#line 103 "elds.m"
  MR_Word erl_backend__elds__HeadVar__2_2,
#line 103 "elds.m"
  MR_Word erl_backend__elds__HeadVar__3_3)
#line 103 "elds.m"
{
#line 103 "elds.m"
  {
#line 103 "elds.m"
    MR_bool erl_backend__elds__succeeded;
#line 103 "elds.m"
    MR_Integer erl_backend__elds__CastX_15 = (MR_Integer) erl_backend__elds__HeadVar__2_2;
#line 103 "elds.m"
    MR_Integer erl_backend__elds__CastY_16 = (MR_Integer) erl_backend__elds__HeadVar__3_3;

#line 103 "elds.m"
    erl_backend__elds__succeeded = (erl_backend__elds__CastX_15 == erl_backend__elds__CastY_16);
#line 103 "elds.m"
    if (erl_backend__elds__succeeded)
#line 6117 "erl_backend.elds.c"
      *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 0;
#line 103 "elds.m"
    else
#line 103 "elds.m"
      {
#line 103 "elds.m"
        MR_Word erl_backend__elds__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)));
#line 103 "elds.m"
        MR_Word erl_backend__elds__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__2_2, (MR_Integer) 1)));
#line 103 "elds.m"
        MR_Word erl_backend__elds__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__2_2, (MR_Integer) 2)));
#line 103 "elds.m"
        MR_Word erl_backend__elds__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__2_2, (MR_Integer) 3)));
#line 103 "elds.m"
        MR_Word erl_backend__elds__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)));
#line 103 "elds.m"
        MR_Word erl_backend__elds__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__3_3, (MR_Integer) 1)));
#line 103 "elds.m"
        MR_Word erl_backend__elds__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__3_3, (MR_Integer) 2)));
#line 103 "elds.m"
        MR_Word erl_backend__elds__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__3_3, (MR_Integer) 3)));
#line 103 "elds.m"
        MR_Word erl_backend__elds__V_12_12;

#line 103 "elds.m"
        {
#line 103 "elds.m"
          erl_backend__elds____Compare____elds_rtti_id_0_0(&erl_backend__elds__V_12_12, erl_backend__elds__V_4_4, erl_backend__elds__V_8_8);
        }
#line 6147 "erl_backend.elds.c"
        erl_backend__elds__succeeded = (erl_backend__elds__V_12_12 == (MR_Integer) 0);
#line 103 "elds.m"
        erl_backend__elds__succeeded = !(erl_backend__elds__succeeded);
#line 103 "elds.m"
        if (erl_backend__elds__succeeded)
#line 103 "elds.m"
          *erl_backend__elds__HeadVar__1_1 = erl_backend__elds__V_12_12;
#line 103 "elds.m"
        else
#line 103 "elds.m"
          {
#line 103 "elds.m"
            MR_Word erl_backend__elds__V_13_13;
#line 103 "elds.m"
            MR_Integer erl_backend__elds__V_21_21 = (MR_Integer) erl_backend__elds__V_5_5;
#line 103 "elds.m"
            MR_Integer erl_backend__elds__V_22_22 = (MR_Integer) erl_backend__elds__V_9_9;

#line 103 "elds.m"
            {
#line 103 "elds.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&erl_backend__elds__V_13_13, erl_backend__elds__V_21_21, erl_backend__elds__V_22_22);
            }
#line 6171 "erl_backend.elds.c"
            erl_backend__elds__succeeded = (erl_backend__elds__V_13_13 == (MR_Integer) 0);
#line 103 "elds.m"
            erl_backend__elds__succeeded = !(erl_backend__elds__succeeded);
#line 103 "elds.m"
            if (erl_backend__elds__succeeded)
#line 103 "elds.m"
              *erl_backend__elds__HeadVar__1_1 = erl_backend__elds__V_13_13;
#line 103 "elds.m"
            else
#line 103 "elds.m"
              {
#line 103 "elds.m"
                MR_Word erl_backend__elds__V_14_14;

#line 103 "elds.m"
                {
#line 103 "elds.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &erl_backend__elds_scalar_common_1[9], &erl_backend__elds__V_14_14, ((MR_Box) (erl_backend__elds__V_6_6)), ((MR_Box) (erl_backend__elds__V_10_10)));
                }
#line 6191 "erl_backend.elds.c"
                erl_backend__elds__succeeded = (erl_backend__elds__V_14_14 == (MR_Integer) 0);
#line 103 "elds.m"
                erl_backend__elds__succeeded = !(erl_backend__elds__succeeded);
#line 103 "elds.m"
                if (erl_backend__elds__succeeded)
#line 103 "elds.m"
                  *erl_backend__elds__HeadVar__1_1 = erl_backend__elds__V_14_14;
#line 103 "elds.m"
                else
#line 103 "elds.m"
                  {
#line 103 "elds.m"
                    erl_backend__elds____Compare____elds_clause_0_0(erl_backend__elds__HeadVar__1_1, erl_backend__elds__V_7_7, erl_backend__elds__V_11_11);
                  }
#line 103 "elds.m"
              }
#line 103 "elds.m"
          }
#line 103 "elds.m"
      }
#line 103 "elds.m"
  }
#line 103 "elds.m"
}

#line 103 "elds.m"
MR_bool MR_CALL 
erl_backend__elds____Unify____elds_rtti_defn_0_0(
#line 103 "elds.m"
  MR_Word erl_backend__elds__HeadVar__1_1,
#line 103 "elds.m"
  MR_Word erl_backend__elds__HeadVar__2_2)
#line 103 "elds.m"
{
#line 103 "elds.m"
  {
#line 103 "elds.m"
    MR_bool erl_backend__elds__succeeded;
#line 103 "elds.m"
    MR_Integer erl_backend__elds__CastX_11 = (MR_Integer) erl_backend__elds__HeadVar__1_1;
#line 103 "elds.m"
    MR_Integer erl_backend__elds__CastY_12 = (MR_Integer) erl_backend__elds__HeadVar__2_2;

#line 103 "elds.m"
    erl_backend__elds__succeeded = (erl_backend__elds__CastX_11 == erl_backend__elds__CastY_12);
#line 103 "elds.m"
    if (erl_backend__elds__succeeded)
#line 103 "elds.m"
      erl_backend__elds__succeeded = MR_TRUE;
#line 103 "elds.m"
    else
#line 103 "elds.m"
      {
#line 103 "elds.m"
        MR_Word erl_backend__elds__TypeInfo_13_13;
#line 103 "elds.m"
        MR_Word erl_backend__elds__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__1_1, (MR_Integer) 0)));
#line 103 "elds.m"
        MR_Word erl_backend__elds__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__1_1, (MR_Integer) 1)));
#line 103 "elds.m"
        MR_Word erl_backend__elds__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__1_1, (MR_Integer) 2)));
#line 103 "elds.m"
        MR_Word erl_backend__elds__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__1_1, (MR_Integer) 3)));
#line 103 "elds.m"
        MR_Word erl_backend__elds__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)));
#line 103 "elds.m"
        MR_Word erl_backend__elds__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__2_2, (MR_Integer) 1)));
#line 103 "elds.m"
        MR_Word erl_backend__elds__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__2_2, (MR_Integer) 2)));
#line 103 "elds.m"
        MR_Word erl_backend__elds__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__2_2, (MR_Integer) 3)));

#line 6264 "erl_backend.elds.c"
        {
#line 6266 "erl_backend.elds.c"
          erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_rtti_id_0_0(erl_backend__elds__V_3_3, erl_backend__elds__V_7_7);
        }
#line 103 "elds.m"
        if (erl_backend__elds__succeeded)
#line 103 "elds.m"
          {
#line 6273 "erl_backend.elds.c"
            erl_backend__elds__succeeded = (erl_backend__elds__V_4_4 == erl_backend__elds__V_8_8);
#line 103 "elds.m"
            if (erl_backend__elds__succeeded)
#line 103 "elds.m"
              {
#line 6279 "erl_backend.elds.c"
                erl_backend__elds__TypeInfo_13_13 = (MR_Word) &erl_backend__elds_scalar_common_1[9];
#line 6281 "erl_backend.elds.c"
                {
#line 6283 "erl_backend.elds.c"
                  erl_backend__elds__succeeded = mercury__builtin__unify_2_p_0(erl_backend__elds__TypeInfo_13_13, ((MR_Box) (erl_backend__elds__V_5_5)), ((MR_Box) (erl_backend__elds__V_9_9)));
                }
#line 103 "elds.m"
                if (erl_backend__elds__succeeded)
#line 6288 "erl_backend.elds.c"
                  {
#line 6290 "erl_backend.elds.c"
                    erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_clause_0_0(erl_backend__elds__V_6_6, erl_backend__elds__V_10_10);
                  }
#line 103 "elds.m"
              }
#line 103 "elds.m"
          }
#line 103 "elds.m"
      }
#line 103 "elds.m"
    return erl_backend__elds__succeeded;
#line 103 "elds.m"
  }
#line 103 "elds.m"
}

#line 94 "elds.m"
void MR_CALL 
erl_backend__elds____Compare____elds_foreign_export_defn_0_0(
#line 94 "elds.m"
  MR_Word * erl_backend__elds__HeadVar__1_1,
#line 94 "elds.m"
  MR_Word erl_backend__elds__HeadVar__2_2,
#line 94 "elds.m"
  MR_Word erl_backend__elds__HeadVar__3_3)
#line 94 "elds.m"
{
#line 94 "elds.m"
  {
#line 94 "elds.m"
    MR_bool erl_backend__elds__succeeded;
#line 94 "elds.m"
    MR_Integer erl_backend__elds__CastX_12 = (MR_Integer) erl_backend__elds__HeadVar__2_2;
#line 94 "elds.m"
    MR_Integer erl_backend__elds__CastY_13 = (MR_Integer) erl_backend__elds__HeadVar__3_3;

#line 94 "elds.m"
    erl_backend__elds__succeeded = (erl_backend__elds__CastX_12 == erl_backend__elds__CastY_13);
#line 94 "elds.m"
    if (erl_backend__elds__succeeded)
#line 6330 "erl_backend.elds.c"
      *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 0;
#line 94 "elds.m"
    else
#line 94 "elds.m"
      {
#line 94 "elds.m"
        MR_String erl_backend__elds__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)));
#line 94 "elds.m"
        MR_Word erl_backend__elds__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__2_2, (MR_Integer) 1)));
#line 94 "elds.m"
        MR_Word erl_backend__elds__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__2_2, (MR_Integer) 2)));
#line 94 "elds.m"
        MR_String erl_backend__elds__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)));
#line 94 "elds.m"
        MR_Word erl_backend__elds__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__3_3, (MR_Integer) 1)));
#line 94 "elds.m"
        MR_Word erl_backend__elds__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__3_3, (MR_Integer) 2)));
#line 94 "elds.m"
        MR_Word erl_backend__elds__V_10_10;

#line 94 "elds.m"
        {
#line 94 "elds.m"
          mercury__private_builtin__builtin_compare_string_3_p_0(&erl_backend__elds__V_10_10, erl_backend__elds__V_4_4, erl_backend__elds__V_7_7);
        }
#line 6356 "erl_backend.elds.c"
        erl_backend__elds__succeeded = (erl_backend__elds__V_10_10 == (MR_Integer) 0);
#line 94 "elds.m"
        erl_backend__elds__succeeded = !(erl_backend__elds__succeeded);
#line 94 "elds.m"
        if (erl_backend__elds__succeeded)
#line 94 "elds.m"
          *erl_backend__elds__HeadVar__1_1 = erl_backend__elds__V_10_10;
#line 94 "elds.m"
        else
#line 94 "elds.m"
          {
#line 94 "elds.m"
            MR_Word erl_backend__elds__V_11_11;

#line 94 "elds.m"
            {
#line 94 "elds.m"
              mercury__builtin__compare_3_p_0((MR_Word) &erl_backend__elds_scalar_common_1[9], &erl_backend__elds__V_11_11, ((MR_Box) (erl_backend__elds__V_5_5)), ((MR_Box) (erl_backend__elds__V_8_8)));
            }
#line 6376 "erl_backend.elds.c"
            erl_backend__elds__succeeded = (erl_backend__elds__V_11_11 == (MR_Integer) 0);
#line 94 "elds.m"
            erl_backend__elds__succeeded = !(erl_backend__elds__succeeded);
#line 94 "elds.m"
            if (erl_backend__elds__succeeded)
#line 94 "elds.m"
              *erl_backend__elds__HeadVar__1_1 = erl_backend__elds__V_11_11;
#line 94 "elds.m"
            else
#line 94 "elds.m"
              {
#line 94 "elds.m"
                erl_backend__elds____Compare____elds_clause_0_0(erl_backend__elds__HeadVar__1_1, erl_backend__elds__V_6_6, erl_backend__elds__V_9_9);
              }
#line 94 "elds.m"
          }
#line 94 "elds.m"
      }
#line 94 "elds.m"
  }
#line 94 "elds.m"
}

#line 94 "elds.m"
MR_bool MR_CALL 
erl_backend__elds____Unify____elds_foreign_export_defn_0_0(
#line 94 "elds.m"
  MR_Word erl_backend__elds__HeadVar__1_1,
#line 94 "elds.m"
  MR_Word erl_backend__elds__HeadVar__2_2)
#line 94 "elds.m"
{
#line 94 "elds.m"
  {
#line 94 "elds.m"
    MR_bool erl_backend__elds__succeeded;
#line 94 "elds.m"
    MR_Integer erl_backend__elds__CastX_9 = (MR_Integer) erl_backend__elds__HeadVar__1_1;
#line 94 "elds.m"
    MR_Integer erl_backend__elds__CastY_10 = (MR_Integer) erl_backend__elds__HeadVar__2_2;

#line 94 "elds.m"
    erl_backend__elds__succeeded = (erl_backend__elds__CastX_9 == erl_backend__elds__CastY_10);
#line 94 "elds.m"
    if (erl_backend__elds__succeeded)
#line 94 "elds.m"
      erl_backend__elds__succeeded = MR_TRUE;
#line 94 "elds.m"
    else
#line 94 "elds.m"
      {
#line 94 "elds.m"
        MR_Word erl_backend__elds__TypeInfo_11_11;
#line 94 "elds.m"
        MR_String erl_backend__elds__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__1_1, (MR_Integer) 0)));
#line 94 "elds.m"
        MR_Word erl_backend__elds__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__1_1, (MR_Integer) 1)));
#line 94 "elds.m"
        MR_Word erl_backend__elds__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__1_1, (MR_Integer) 2)));
#line 94 "elds.m"
        MR_String erl_backend__elds__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)));
#line 94 "elds.m"
        MR_Word erl_backend__elds__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__2_2, (MR_Integer) 1)));
#line 94 "elds.m"
        MR_Word erl_backend__elds__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__2_2, (MR_Integer) 2)));

#line 6443 "erl_backend.elds.c"
        erl_backend__elds__succeeded = (strcmp(erl_backend__elds__V_3_3, erl_backend__elds__V_6_6) == 0);
#line 94 "elds.m"
        if (erl_backend__elds__succeeded)
#line 94 "elds.m"
          {
#line 6449 "erl_backend.elds.c"
            erl_backend__elds__TypeInfo_11_11 = (MR_Word) &erl_backend__elds_scalar_common_1[9];
#line 6451 "erl_backend.elds.c"
            {
#line 6453 "erl_backend.elds.c"
              erl_backend__elds__succeeded = mercury__builtin__unify_2_p_0(erl_backend__elds__TypeInfo_11_11, ((MR_Box) (erl_backend__elds__V_4_4)), ((MR_Box) (erl_backend__elds__V_7_7)));
            }
#line 94 "elds.m"
            if (erl_backend__elds__succeeded)
#line 6458 "erl_backend.elds.c"
              {
#line 6460 "erl_backend.elds.c"
                erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_clause_0_0(erl_backend__elds__V_5_5, erl_backend__elds__V_8_8);
              }
#line 94 "elds.m"
          }
#line 94 "elds.m"
      }
#line 94 "elds.m"
    return erl_backend__elds__succeeded;
#line 94 "elds.m"
  }
#line 94 "elds.m"
}

#line 139 "elds.m"
void MR_CALL 
erl_backend__elds____Compare____elds_expr_0_0(
#line 139 "elds.m"
  MR_Word * erl_backend__elds__HeadVar__1_1,
#line 139 "elds.m"
  MR_Word erl_backend__elds__HeadVar__2_2,
#line 139 "elds.m"
  MR_Word erl_backend__elds__HeadVar__3_3)
#line 139 "elds.m"
{
#line 139 "elds.m"
  while (MR_TRUE)
#line 139 "elds.m"
    {
#line 139 "elds.m"
      /* tailcall optimized into a loop */
#line 139 "elds.m"
      {
#line 139 "elds.m"
        MR_bool erl_backend__elds__succeeded;
#line 139 "elds.m"
        MR_Integer erl_backend__elds__CastX_715 = (MR_Integer) erl_backend__elds__HeadVar__2_2;
#line 139 "elds.m"
        MR_Integer erl_backend__elds__CastY_716 = (MR_Integer) erl_backend__elds__HeadVar__3_3;

#line 139 "elds.m"
        erl_backend__elds__succeeded = (erl_backend__elds__CastX_715 == erl_backend__elds__CastY_716);
#line 139 "elds.m"
        if (erl_backend__elds__succeeded)
#line 6504 "erl_backend.elds.c"
          *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 0;
#line 139 "elds.m"
        else
#line 139 "elds.m"
#line 139 "elds.m"
          switch (MR_tag((MR_Word) erl_backend__elds__HeadVar__2_2)) {
#line 139 "elds.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 139 "elds.m"
            case (MR_Integer) 0:
#line 139 "elds.m"
              {
#line 139 "elds.m"
                MR_Word erl_backend__elds__V_754_754 = (MR_Word) MR_body(((MR_Word) erl_backend__elds__HeadVar__2_2), (MR_Integer) 0);

#line 139 "elds.m"
#line 139 "elds.m"
                switch (MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) {
#line 139 "elds.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 139 "elds.m"
                  case (MR_Integer) 0:
#line 139 "elds.m"
                    {
#line 139 "elds.m"
                      MR_Word erl_backend__elds__V_372_372 = (MR_Word) MR_body(((MR_Word) erl_backend__elds__HeadVar__3_3), (MR_Integer) 0);

#line 139 "elds.m"
                      {
#line 139 "elds.m"
                        erl_backend__elds____Compare____elds_clause_0_0(erl_backend__elds__HeadVar__1_1, erl_backend__elds__V_754_754, erl_backend__elds__V_372_372);
                      }
#line 139 "elds.m"
                    }
#line 139 "elds.m"
                    break;
#line 139 "elds.m"
                  case (MR_Integer) 1:
#line 6543 "erl_backend.elds.c"
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 139 "elds.m"
                    break;
#line 139 "elds.m"
                  case (MR_Integer) 2:
#line 6549 "erl_backend.elds.c"
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 139 "elds.m"
                    break;
#line 139 "elds.m"
                  case (MR_Integer) 3:
#line 139 "elds.m"
#line 139 "elds.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) {
#line 139 "elds.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 139 "elds.m"
                      case (MR_Integer) 0:
#line 6562 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 139 "elds.m"
                        break;
#line 139 "elds.m"
                      case (MR_Integer) 1:
#line 6568 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 139 "elds.m"
                        break;
#line 139 "elds.m"
                      case (MR_Integer) 2:
#line 6574 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 139 "elds.m"
                        break;
#line 139 "elds.m"
                      case (MR_Integer) 3:
#line 6580 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 139 "elds.m"
                        break;
#line 139 "elds.m"
                      case (MR_Integer) 4:
#line 6586 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 139 "elds.m"
                        break;
#line 139 "elds.m"
                      case (MR_Integer) 5:
#line 6592 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 139 "elds.m"
                        break;
#line 139 "elds.m"
                      case (MR_Integer) 6:
#line 6598 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 139 "elds.m"
                        break;
#line 139 "elds.m"
                      case (MR_Integer) 7:
#line 6604 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 139 "elds.m"
                        break;
#line 139 "elds.m"
                      case (MR_Integer) 8:
#line 6610 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 139 "elds.m"
                        break;
#line 139 "elds.m"
                      case (MR_Integer) 9:
#line 6616 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 139 "elds.m"
                        break;
#line 139 "elds.m"
                      case (MR_Integer) 10:
#line 6622 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 139 "elds.m"
                        break;
#line 139 "elds.m"
                    }
#line 139 "elds.m"
                    break;
#line 139 "elds.m"
                }
#line 139 "elds.m"
              }
#line 139 "elds.m"
              break;
#line 139 "elds.m"
            case (MR_Integer) 1:
#line 139 "elds.m"
              {
#line 139 "elds.m"
                MR_Word erl_backend__elds__V_745_745 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)));

#line 139 "elds.m"
#line 139 "elds.m"
                switch (MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) {
#line 139 "elds.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 139 "elds.m"
                  case (MR_Integer) 0:
#line 6650 "erl_backend.elds.c"
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 139 "elds.m"
                    break;
#line 139 "elds.m"
                  case (MR_Integer) 1:
#line 139 "elds.m"
                    {
#line 139 "elds.m"
                      MR_Word erl_backend__elds__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)));

#line 139 "elds.m"
                      {
#line 139 "elds.m"
                        mercury__builtin__compare_3_p_0((MR_Word) &erl_backend__elds_scalar_common_1[14], erl_backend__elds__HeadVar__1_1, ((MR_Box) (erl_backend__elds__V_745_745)), ((MR_Box) (erl_backend__elds__V_5_5)));
                      }
#line 139 "elds.m"
                    }
#line 139 "elds.m"
                    break;
#line 139 "elds.m"
                  case (MR_Integer) 2:
#line 6672 "erl_backend.elds.c"
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 139 "elds.m"
                    break;
#line 139 "elds.m"
                  case (MR_Integer) 3:
#line 139 "elds.m"
#line 139 "elds.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) {
#line 139 "elds.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 139 "elds.m"
                      case (MR_Integer) 0:
#line 6685 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 139 "elds.m"
                        break;
#line 139 "elds.m"
                      case (MR_Integer) 1:
#line 6691 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 139 "elds.m"
                        break;
#line 139 "elds.m"
                      case (MR_Integer) 2:
#line 6697 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 139 "elds.m"
                        break;
#line 139 "elds.m"
                      case (MR_Integer) 3:
#line 6703 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 139 "elds.m"
                        break;
#line 139 "elds.m"
                      case (MR_Integer) 4:
#line 6709 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 139 "elds.m"
                        break;
#line 139 "elds.m"
                      case (MR_Integer) 5:
#line 6715 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 139 "elds.m"
                        break;
#line 139 "elds.m"
                      case (MR_Integer) 6:
#line 6721 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 139 "elds.m"
                        break;
#line 139 "elds.m"
                      case (MR_Integer) 7:
#line 6727 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 139 "elds.m"
                        break;
#line 139 "elds.m"
                      case (MR_Integer) 8:
#line 6733 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 139 "elds.m"
                        break;
#line 139 "elds.m"
                      case (MR_Integer) 9:
#line 6739 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 139 "elds.m"
                        break;
#line 139 "elds.m"
                      case (MR_Integer) 10:
#line 6745 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 139 "elds.m"
                        break;
#line 139 "elds.m"
                    }
#line 139 "elds.m"
                    break;
#line 139 "elds.m"
                }
#line 139 "elds.m"
              }
#line 139 "elds.m"
              break;
#line 139 "elds.m"
            case (MR_Integer) 2:
#line 139 "elds.m"
              {
#line 139 "elds.m"
                MR_Word erl_backend__elds__V_759_759 = ((MR_Word) (MR_hl_field(MR_mktag(2), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)));

#line 139 "elds.m"
#line 139 "elds.m"
                switch (MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) {
#line 139 "elds.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 139 "elds.m"
                  case (MR_Integer) 0:
#line 6773 "erl_backend.elds.c"
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 139 "elds.m"
                    break;
#line 139 "elds.m"
                  case (MR_Integer) 1:
#line 6779 "erl_backend.elds.c"
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 139 "elds.m"
                    break;
#line 139 "elds.m"
                  case (MR_Integer) 2:
#line 139 "elds.m"
                    {
#line 139 "elds.m"
                      MR_Word erl_backend__elds__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(2), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)));

#line 139 "elds.m"
                      {
#line 139 "elds.m"
                        erl_backend__elds____Compare____elds_term_0_0(erl_backend__elds__HeadVar__1_1, erl_backend__elds__V_759_759, erl_backend__elds__V_46_46);
                      }
#line 139 "elds.m"
                    }
#line 139 "elds.m"
                    break;
#line 139 "elds.m"
                  case (MR_Integer) 3:
#line 139 "elds.m"
#line 139 "elds.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) {
#line 139 "elds.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 139 "elds.m"
                      case (MR_Integer) 0:
#line 6808 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 139 "elds.m"
                        break;
#line 139 "elds.m"
                      case (MR_Integer) 1:
#line 6814 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 139 "elds.m"
                        break;
#line 139 "elds.m"
                      case (MR_Integer) 2:
#line 6820 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 139 "elds.m"
                        break;
#line 139 "elds.m"
                      case (MR_Integer) 3:
#line 6826 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 139 "elds.m"
                        break;
#line 139 "elds.m"
                      case (MR_Integer) 4:
#line 6832 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 139 "elds.m"
                        break;
#line 139 "elds.m"
                      case (MR_Integer) 5:
#line 6838 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 139 "elds.m"
                        break;
#line 139 "elds.m"
                      case (MR_Integer) 6:
#line 6844 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 139 "elds.m"
                        break;
#line 139 "elds.m"
                      case (MR_Integer) 7:
#line 6850 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 139 "elds.m"
                        break;
#line 139 "elds.m"
                      case (MR_Integer) 8:
#line 6856 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 139 "elds.m"
                        break;
#line 139 "elds.m"
                      case (MR_Integer) 9:
#line 6862 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 139 "elds.m"
                        break;
#line 139 "elds.m"
                      case (MR_Integer) 10:
#line 6868 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 139 "elds.m"
                        break;
#line 139 "elds.m"
                    }
#line 139 "elds.m"
                    break;
#line 139 "elds.m"
                }
#line 139 "elds.m"
              }
#line 139 "elds.m"
              break;
#line 139 "elds.m"
            case (MR_Integer) 3:
#line 139 "elds.m"
#line 139 "elds.m"
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)))) {
#line 139 "elds.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 139 "elds.m"
                case (MR_Integer) 0:
#line 139 "elds.m"
                  {
#line 139 "elds.m"
                    MR_Word erl_backend__elds__V_750_750 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 2)));
#line 139 "elds.m"
                    MR_Word erl_backend__elds__V_751_751 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 1)));

#line 139 "elds.m"
#line 139 "elds.m"
                    switch (MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) {
#line 139 "elds.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 139 "elds.m"
                      case (MR_Integer) 0:
#line 6905 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 139 "elds.m"
                        break;
#line 139 "elds.m"
                      case (MR_Integer) 1:
#line 6911 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 139 "elds.m"
                        break;
#line 139 "elds.m"
                      case (MR_Integer) 2:
#line 6917 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 139 "elds.m"
                        break;
#line 139 "elds.m"
                      case (MR_Integer) 3:
#line 139 "elds.m"
#line 139 "elds.m"
                        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) {
#line 139 "elds.m"
                          default: /*NOTREACHED*/ MR_assert(0);
#line 139 "elds.m"
                          case (MR_Integer) 0:
#line 139 "elds.m"
                            {
#line 139 "elds.m"
                              MR_Word erl_backend__elds__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 1)));
#line 139 "elds.m"
                              MR_Word erl_backend__elds__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 2)));
#line 139 "elds.m"
                              MR_Word erl_backend__elds__V_92_92;

#line 139 "elds.m"
                              {
#line 139 "elds.m"
                                erl_backend__elds____Compare____elds_expr_0_0(&erl_backend__elds__V_92_92, erl_backend__elds__V_751_751, erl_backend__elds__V_90_90);
                              }
#line 6944 "erl_backend.elds.c"
                              erl_backend__elds__succeeded = (erl_backend__elds__V_92_92 == (MR_Integer) 0);
#line 139 "elds.m"
                              erl_backend__elds__succeeded = !(erl_backend__elds__succeeded);
#line 139 "elds.m"
                              if (erl_backend__elds__succeeded)
#line 139 "elds.m"
                                *erl_backend__elds__HeadVar__1_1 = erl_backend__elds__V_92_92;
#line 139 "elds.m"
                              else
#line 139 "elds.m"
                                {
#line 139 "elds.m"
                                  /* direct tailcall eliminated */
#line 139 "elds.m"
                                  {
#line 139 "elds.m"
                                    MR_Word erl_backend__elds__HeadVar__2__tmp_copy_2 = erl_backend__elds__V_750_750;
#line 139 "elds.m"
                                    MR_Word erl_backend__elds__HeadVar__3__tmp_copy_3 = erl_backend__elds__V_91_91;

#line 139 "elds.m"
                                    erl_backend__elds__HeadVar__3_3 = erl_backend__elds__HeadVar__3__tmp_copy_3;
#line 139 "elds.m"
                                    erl_backend__elds__HeadVar__2_2 = erl_backend__elds__HeadVar__2__tmp_copy_2;
#line 139 "elds.m"
                                  }
#line 139 "elds.m"
                                  continue;
#line 139 "elds.m"
                                }
#line 139 "elds.m"
                            }
#line 139 "elds.m"
                            break;
#line 139 "elds.m"
                          case (MR_Integer) 1:
#line 6981 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 139 "elds.m"
                            break;
#line 139 "elds.m"
                          case (MR_Integer) 2:
#line 6987 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 139 "elds.m"
                            break;
#line 139 "elds.m"
                          case (MR_Integer) 3:
#line 6993 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 139 "elds.m"
                            break;
#line 139 "elds.m"
                          case (MR_Integer) 4:
#line 6999 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 139 "elds.m"
                            break;
#line 139 "elds.m"
                          case (MR_Integer) 5:
#line 7005 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 139 "elds.m"
                            break;
#line 139 "elds.m"
                          case (MR_Integer) 6:
#line 7011 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 139 "elds.m"
                            break;
#line 139 "elds.m"
                          case (MR_Integer) 7:
#line 7017 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 139 "elds.m"
                            break;
#line 139 "elds.m"
                          case (MR_Integer) 8:
#line 7023 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 139 "elds.m"
                            break;
#line 139 "elds.m"
                          case (MR_Integer) 9:
#line 7029 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 139 "elds.m"
                            break;
#line 139 "elds.m"
                          case (MR_Integer) 10:
#line 7035 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 139 "elds.m"
                            break;
#line 139 "elds.m"
                        }
#line 139 "elds.m"
                        break;
#line 139 "elds.m"
                    }
#line 139 "elds.m"
                  }
#line 139 "elds.m"
                  break;
#line 139 "elds.m"
                case (MR_Integer) 1:
#line 139 "elds.m"
                  {
#line 139 "elds.m"
                    MR_Word erl_backend__elds__V_765_765 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 2)));
#line 139 "elds.m"
                    MR_Word erl_backend__elds__V_766_766 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 1)));

#line 139 "elds.m"
#line 139 "elds.m"
                    switch (MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) {
#line 139 "elds.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 139 "elds.m"
                      case (MR_Integer) 0:
#line 7065 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 139 "elds.m"
                        break;
#line 139 "elds.m"
                      case (MR_Integer) 1:
#line 7071 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 139 "elds.m"
                        break;
#line 139 "elds.m"
                      case (MR_Integer) 2:
#line 7077 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 139 "elds.m"
                        break;
#line 139 "elds.m"
                      case (MR_Integer) 3:
#line 139 "elds.m"
#line 139 "elds.m"
                        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) {
#line 139 "elds.m"
                          default: /*NOTREACHED*/ MR_assert(0);
#line 139 "elds.m"
                          case (MR_Integer) 0:
#line 7090 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 139 "elds.m"
                            break;
#line 139 "elds.m"
                          case (MR_Integer) 1:
#line 139 "elds.m"
                            {
#line 139 "elds.m"
                              MR_Word erl_backend__elds__V_148_148 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 1)));
#line 139 "elds.m"
                              MR_Word erl_backend__elds__V_149_149 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 2)));
#line 139 "elds.m"
                              MR_Word erl_backend__elds__V_150_150;
#line 139 "elds.m"
                              MR_Integer erl_backend__elds__V_769_769 = (MR_Integer) erl_backend__elds__V_766_766;
#line 139 "elds.m"
                              MR_Integer erl_backend__elds__V_770_770 = (MR_Integer) erl_backend__elds__V_148_148;

#line 139 "elds.m"
                              {
#line 139 "elds.m"
                                mercury__private_builtin__builtin_compare_int_3_p_0(&erl_backend__elds__V_150_150, erl_backend__elds__V_769_769, erl_backend__elds__V_770_770);
                              }
#line 7114 "erl_backend.elds.c"
                              erl_backend__elds__succeeded = (erl_backend__elds__V_150_150 == (MR_Integer) 0);
#line 139 "elds.m"
                              erl_backend__elds__succeeded = !(erl_backend__elds__succeeded);
#line 139 "elds.m"
                              if (erl_backend__elds__succeeded)
#line 139 "elds.m"
                                *erl_backend__elds__HeadVar__1_1 = erl_backend__elds__V_150_150;
#line 139 "elds.m"
                              else
#line 139 "elds.m"
                                {
#line 139 "elds.m"
                                  /* direct tailcall eliminated */
#line 139 "elds.m"
                                  {
#line 139 "elds.m"
                                    MR_Word erl_backend__elds__HeadVar__2__tmp_copy_2 = erl_backend__elds__V_765_765;
#line 139 "elds.m"
                                    MR_Word erl_backend__elds__HeadVar__3__tmp_copy_3 = erl_backend__elds__V_149_149;

#line 139 "elds.m"
                                    erl_backend__elds__HeadVar__3_3 = erl_backend__elds__HeadVar__3__tmp_copy_3;
#line 139 "elds.m"
                                    erl_backend__elds__HeadVar__2_2 = erl_backend__elds__HeadVar__2__tmp_copy_2;
#line 139 "elds.m"
                                  }
#line 139 "elds.m"
                                  continue;
#line 139 "elds.m"
                                }
#line 139 "elds.m"
                            }
#line 139 "elds.m"
                            break;
#line 139 "elds.m"
                          case (MR_Integer) 2:
#line 7151 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 139 "elds.m"
                            break;
#line 139 "elds.m"
                          case (MR_Integer) 3:
#line 7157 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 139 "elds.m"
                            break;
#line 139 "elds.m"
                          case (MR_Integer) 4:
#line 7163 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 139 "elds.m"
                            break;
#line 139 "elds.m"
                          case (MR_Integer) 5:
#line 7169 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 139 "elds.m"
                            break;
#line 139 "elds.m"
                          case (MR_Integer) 6:
#line 7175 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 139 "elds.m"
                            break;
#line 139 "elds.m"
                          case (MR_Integer) 7:
#line 7181 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 139 "elds.m"
                            break;
#line 139 "elds.m"
                          case (MR_Integer) 8:
#line 7187 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 139 "elds.m"
                            break;
#line 139 "elds.m"
                          case (MR_Integer) 9:
#line 7193 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 139 "elds.m"
                            break;
#line 139 "elds.m"
                          case (MR_Integer) 10:
#line 7199 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 139 "elds.m"
                            break;
#line 139 "elds.m"
                        }
#line 139 "elds.m"
                        break;
#line 139 "elds.m"
                    }
#line 139 "elds.m"
                  }
#line 139 "elds.m"
                  break;
#line 139 "elds.m"
                case (MR_Integer) 2:
#line 139 "elds.m"
                  {
#line 139 "elds.m"
                    MR_Word erl_backend__elds__V_742_742 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 3)));
#line 139 "elds.m"
                    MR_Word erl_backend__elds__V_743_743 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 2)));
#line 139 "elds.m"
                    MR_Word erl_backend__elds__V_744_744 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 1)));

#line 139 "elds.m"
#line 139 "elds.m"
                    switch (MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) {
#line 139 "elds.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 139 "elds.m"
                      case (MR_Integer) 0:
#line 7231 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 139 "elds.m"
                        break;
#line 139 "elds.m"
                      case (MR_Integer) 1:
#line 7237 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 139 "elds.m"
                        break;
#line 139 "elds.m"
                      case (MR_Integer) 2:
#line 7243 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 139 "elds.m"
                        break;
#line 139 "elds.m"
                      case (MR_Integer) 3:
#line 139 "elds.m"
#line 139 "elds.m"
                        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) {
#line 139 "elds.m"
                          default: /*NOTREACHED*/ MR_assert(0);
#line 139 "elds.m"
                          case (MR_Integer) 0:
#line 7256 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 139 "elds.m"
                            break;
#line 139 "elds.m"
                          case (MR_Integer) 1:
#line 7262 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 139 "elds.m"
                            break;
#line 139 "elds.m"
                          case (MR_Integer) 2:
#line 139 "elds.m"
                            {
#line 139 "elds.m"
                              MR_Word erl_backend__elds__V_211_211 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 1)));
#line 139 "elds.m"
                              MR_Word erl_backend__elds__V_212_212 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 2)));
#line 139 "elds.m"
                              MR_Word erl_backend__elds__V_213_213 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 3)));
#line 139 "elds.m"
                              MR_Word erl_backend__elds__V_214_214;
#line 139 "elds.m"
                              MR_Integer erl_backend__elds__V_767_767 = (MR_Integer) erl_backend__elds__V_744_744;
#line 139 "elds.m"
                              MR_Integer erl_backend__elds__V_768_768 = (MR_Integer) erl_backend__elds__V_211_211;

#line 139 "elds.m"
                              {
#line 139 "elds.m"
                                mercury__private_builtin__builtin_compare_int_3_p_0(&erl_backend__elds__V_214_214, erl_backend__elds__V_767_767, erl_backend__elds__V_768_768);
                              }
#line 7288 "erl_backend.elds.c"
                              erl_backend__elds__succeeded = (erl_backend__elds__V_214_214 == (MR_Integer) 0);
#line 139 "elds.m"
                              erl_backend__elds__succeeded = !(erl_backend__elds__succeeded);
#line 139 "elds.m"
                              if (erl_backend__elds__succeeded)
#line 139 "elds.m"
                                *erl_backend__elds__HeadVar__1_1 = erl_backend__elds__V_214_214;
#line 139 "elds.m"
                              else
#line 139 "elds.m"
                                {
#line 139 "elds.m"
                                  MR_Word erl_backend__elds__V_215_215;

#line 139 "elds.m"
                                  {
#line 139 "elds.m"
                                    erl_backend__elds____Compare____elds_expr_0_0(&erl_backend__elds__V_215_215, erl_backend__elds__V_743_743, erl_backend__elds__V_212_212);
                                  }
#line 7308 "erl_backend.elds.c"
                                  erl_backend__elds__succeeded = (erl_backend__elds__V_215_215 == (MR_Integer) 0);
#line 139 "elds.m"
                                  erl_backend__elds__succeeded = !(erl_backend__elds__succeeded);
#line 139 "elds.m"
                                  if (erl_backend__elds__succeeded)
#line 139 "elds.m"
                                    *erl_backend__elds__HeadVar__1_1 = erl_backend__elds__V_215_215;
#line 139 "elds.m"
                                  else
#line 139 "elds.m"
                                    {
#line 139 "elds.m"
                                      /* direct tailcall eliminated */
#line 139 "elds.m"
                                      {
#line 139 "elds.m"
                                        MR_Word erl_backend__elds__HeadVar__2__tmp_copy_2 = erl_backend__elds__V_742_742;
#line 139 "elds.m"
                                        MR_Word erl_backend__elds__HeadVar__3__tmp_copy_3 = erl_backend__elds__V_213_213;

#line 139 "elds.m"
                                        erl_backend__elds__HeadVar__3_3 = erl_backend__elds__HeadVar__3__tmp_copy_3;
#line 139 "elds.m"
                                        erl_backend__elds__HeadVar__2_2 = erl_backend__elds__HeadVar__2__tmp_copy_2;
#line 139 "elds.m"
                                      }
#line 139 "elds.m"
                                      continue;
#line 139 "elds.m"
                                    }
#line 139 "elds.m"
                                }
#line 139 "elds.m"
                            }
#line 139 "elds.m"
                            break;
#line 139 "elds.m"
                          case (MR_Integer) 3:
#line 7347 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 139 "elds.m"
                            break;
#line 139 "elds.m"
                          case (MR_Integer) 4:
#line 7353 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 139 "elds.m"
                            break;
#line 139 "elds.m"
                          case (MR_Integer) 5:
#line 7359 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 139 "elds.m"
                            break;
#line 139 "elds.m"
                          case (MR_Integer) 6:
#line 7365 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 139 "elds.m"
                            break;
#line 139 "elds.m"
                          case (MR_Integer) 7:
#line 7371 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 139 "elds.m"
                            break;
#line 139 "elds.m"
                          case (MR_Integer) 8:
#line 7377 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 139 "elds.m"
                            break;
#line 139 "elds.m"
                          case (MR_Integer) 9:
#line 7383 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 139 "elds.m"
                            break;
#line 139 "elds.m"
                          case (MR_Integer) 10:
#line 7389 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 139 "elds.m"
                            break;
#line 139 "elds.m"
                        }
#line 139 "elds.m"
                        break;
#line 139 "elds.m"
                    }
#line 139 "elds.m"
                  }
#line 139 "elds.m"
                  break;
#line 139 "elds.m"
                case (MR_Integer) 3:
#line 139 "elds.m"
                  {
#line 139 "elds.m"
                    MR_Word erl_backend__elds__V_746_746 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 2)));
#line 139 "elds.m"
                    MR_Word erl_backend__elds__V_747_747 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 1)));

#line 139 "elds.m"
#line 139 "elds.m"
                    switch (MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) {
#line 139 "elds.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 139 "elds.m"
                      case (MR_Integer) 0:
#line 7419 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 139 "elds.m"
                        break;
#line 139 "elds.m"
                      case (MR_Integer) 1:
#line 7425 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 139 "elds.m"
                        break;
#line 139 "elds.m"
                      case (MR_Integer) 2:
#line 7431 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 139 "elds.m"
                        break;
#line 139 "elds.m"
                      case (MR_Integer) 3:
#line 139 "elds.m"
#line 139 "elds.m"
                        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) {
#line 139 "elds.m"
                          default: /*NOTREACHED*/ MR_assert(0);
#line 139 "elds.m"
                          case (MR_Integer) 0:
#line 7444 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 139 "elds.m"
                            break;
#line 139 "elds.m"
                          case (MR_Integer) 1:
#line 7450 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 139 "elds.m"
                            break;
#line 139 "elds.m"
                          case (MR_Integer) 2:
#line 7456 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 139 "elds.m"
                            break;
#line 139 "elds.m"
                          case (MR_Integer) 3:
#line 139 "elds.m"
                            {
#line 139 "elds.m"
                              MR_Word erl_backend__elds__V_280_280 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 1)));
#line 139 "elds.m"
                              MR_Word erl_backend__elds__V_281_281 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 2)));
#line 139 "elds.m"
                              MR_Word erl_backend__elds__V_282_282;

#line 139 "elds.m"
                              {
#line 139 "elds.m"
                                erl_backend__elds____Compare____elds_call_target_0_0(&erl_backend__elds__V_282_282, erl_backend__elds__V_747_747, erl_backend__elds__V_280_280);
                              }
#line 7476 "erl_backend.elds.c"
                              erl_backend__elds__succeeded = (erl_backend__elds__V_282_282 == (MR_Integer) 0);
#line 139 "elds.m"
                              erl_backend__elds__succeeded = !(erl_backend__elds__succeeded);
#line 139 "elds.m"
                              if (erl_backend__elds__succeeded)
#line 139 "elds.m"
                                *erl_backend__elds__HeadVar__1_1 = erl_backend__elds__V_282_282;
#line 139 "elds.m"
                              else
#line 139 "elds.m"
                                {
#line 139 "elds.m"
                                  {
#line 139 "elds.m"
                                    mercury__builtin__compare_3_p_0((MR_Word) &erl_backend__elds_scalar_common_1[14], erl_backend__elds__HeadVar__1_1, ((MR_Box) (erl_backend__elds__V_746_746)), ((MR_Box) (erl_backend__elds__V_281_281)));
                                  }
#line 139 "elds.m"
                                }
#line 139 "elds.m"
                            }
#line 139 "elds.m"
                            break;
#line 139 "elds.m"
                          case (MR_Integer) 4:
#line 7501 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 139 "elds.m"
                            break;
#line 139 "elds.m"
                          case (MR_Integer) 5:
#line 7507 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 139 "elds.m"
                            break;
#line 139 "elds.m"
                          case (MR_Integer) 6:
#line 7513 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 139 "elds.m"
                            break;
#line 139 "elds.m"
                          case (MR_Integer) 7:
#line 7519 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 139 "elds.m"
                            break;
#line 139 "elds.m"
                          case (MR_Integer) 8:
#line 7525 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 139 "elds.m"
                            break;
#line 139 "elds.m"
                          case (MR_Integer) 9:
#line 7531 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 139 "elds.m"
                            break;
#line 139 "elds.m"
                          case (MR_Integer) 10:
#line 7537 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 139 "elds.m"
                            break;
#line 139 "elds.m"
                        }
#line 139 "elds.m"
                        break;
#line 139 "elds.m"
                    }
#line 139 "elds.m"
                  }
#line 139 "elds.m"
                  break;
#line 139 "elds.m"
                case (MR_Integer) 4:
#line 139 "elds.m"
                  {
#line 139 "elds.m"
                    MR_Word erl_backend__elds__V_756_756 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 1)));

#line 139 "elds.m"
#line 139 "elds.m"
                    switch (MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) {
#line 139 "elds.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 139 "elds.m"
                      case (MR_Integer) 0:
#line 7565 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 139 "elds.m"
                        break;
#line 139 "elds.m"
                      case (MR_Integer) 1:
#line 7571 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 139 "elds.m"
                        break;
#line 139 "elds.m"
                      case (MR_Integer) 2:
#line 7577 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 139 "elds.m"
                        break;
#line 139 "elds.m"
                      case (MR_Integer) 3:
#line 139 "elds.m"
#line 139 "elds.m"
                        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) {
#line 139 "elds.m"
                          default: /*NOTREACHED*/ MR_assert(0);
#line 139 "elds.m"
                          case (MR_Integer) 0:
#line 7590 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 139 "elds.m"
                            break;
#line 139 "elds.m"
                          case (MR_Integer) 1:
#line 7596 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 139 "elds.m"
                            break;
#line 139 "elds.m"
                          case (MR_Integer) 2:
#line 7602 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 139 "elds.m"
                            break;
#line 139 "elds.m"
                          case (MR_Integer) 3:
#line 7608 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 139 "elds.m"
                            break;
#line 139 "elds.m"
                          case (MR_Integer) 4:
#line 139 "elds.m"
                            {
#line 139 "elds.m"
                              MR_Word erl_backend__elds__V_331_331 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 1)));

#line 139 "elds.m"
                              {
#line 139 "elds.m"
                                erl_backend__elds____Compare____elds_rtti_id_0_0(erl_backend__elds__HeadVar__1_1, erl_backend__elds__V_756_756, erl_backend__elds__V_331_331);
                              }
#line 139 "elds.m"
                            }
#line 139 "elds.m"
                            break;
#line 139 "elds.m"
                          case (MR_Integer) 5:
#line 7630 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 139 "elds.m"
                            break;
#line 139 "elds.m"
                          case (MR_Integer) 6:
#line 7636 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 139 "elds.m"
                            break;
#line 139 "elds.m"
                          case (MR_Integer) 7:
#line 7642 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 139 "elds.m"
                            break;
#line 139 "elds.m"
                          case (MR_Integer) 8:
#line 7648 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 139 "elds.m"
                            break;
#line 139 "elds.m"
                          case (MR_Integer) 9:
#line 7654 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 139 "elds.m"
                            break;
#line 139 "elds.m"
                          case (MR_Integer) 10:
#line 7660 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 139 "elds.m"
                            break;
#line 139 "elds.m"
                        }
#line 139 "elds.m"
                        break;
#line 139 "elds.m"
                    }
#line 139 "elds.m"
                  }
#line 139 "elds.m"
                  break;
#line 139 "elds.m"
                case (MR_Integer) 5:
#line 139 "elds.m"
                  {
#line 139 "elds.m"
                    MR_Word erl_backend__elds__V_748_748 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 2)));
#line 139 "elds.m"
                    MR_Word erl_backend__elds__V_749_749 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 1)));

#line 139 "elds.m"
#line 139 "elds.m"
                    switch (MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) {
#line 139 "elds.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 139 "elds.m"
                      case (MR_Integer) 0:
#line 7690 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 139 "elds.m"
                        break;
#line 139 "elds.m"
                      case (MR_Integer) 1:
#line 7696 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 139 "elds.m"
                        break;
#line 139 "elds.m"
                      case (MR_Integer) 2:
#line 7702 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 139 "elds.m"
                        break;
#line 139 "elds.m"
                      case (MR_Integer) 3:
#line 139 "elds.m"
#line 139 "elds.m"
                        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) {
#line 139 "elds.m"
                          default: /*NOTREACHED*/ MR_assert(0);
#line 139 "elds.m"
                          case (MR_Integer) 0:
#line 7715 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 139 "elds.m"
                            break;
#line 139 "elds.m"
                          case (MR_Integer) 1:
#line 7721 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 139 "elds.m"
                            break;
#line 139 "elds.m"
                          case (MR_Integer) 2:
#line 7727 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 139 "elds.m"
                            break;
#line 139 "elds.m"
                          case (MR_Integer) 3:
#line 7733 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 139 "elds.m"
                            break;
#line 139 "elds.m"
                          case (MR_Integer) 4:
#line 7739 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 139 "elds.m"
                            break;
#line 139 "elds.m"
                          case (MR_Integer) 5:
#line 139 "elds.m"
                            {
#line 139 "elds.m"
                              MR_Word erl_backend__elds__V_422_422 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 1)));
#line 139 "elds.m"
                              MR_Word erl_backend__elds__V_423_423 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 2)));
#line 139 "elds.m"
                              MR_Word erl_backend__elds__V_424_424;

#line 139 "elds.m"
                              {
#line 139 "elds.m"
                                erl_backend__elds____Compare____elds_expr_0_0(&erl_backend__elds__V_424_424, erl_backend__elds__V_749_749, erl_backend__elds__V_422_422);
                              }
#line 7759 "erl_backend.elds.c"
                              erl_backend__elds__succeeded = (erl_backend__elds__V_424_424 == (MR_Integer) 0);
#line 139 "elds.m"
                              erl_backend__elds__succeeded = !(erl_backend__elds__succeeded);
#line 139 "elds.m"
                              if (erl_backend__elds__succeeded)
#line 139 "elds.m"
                                *erl_backend__elds__HeadVar__1_1 = erl_backend__elds__V_424_424;
#line 139 "elds.m"
                              else
#line 139 "elds.m"
                                {
#line 139 "elds.m"
                                  {
#line 139 "elds.m"
                                    mercury__builtin__compare_3_p_0((MR_Word) &erl_backend__elds_scalar_common_1[11], erl_backend__elds__HeadVar__1_1, ((MR_Box) (erl_backend__elds__V_748_748)), ((MR_Box) (erl_backend__elds__V_423_423)));
                                  }
#line 139 "elds.m"
                                }
#line 139 "elds.m"
                            }
#line 139 "elds.m"
                            break;
#line 139 "elds.m"
                          case (MR_Integer) 6:
#line 7784 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 139 "elds.m"
                            break;
#line 139 "elds.m"
                          case (MR_Integer) 7:
#line 7790 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 139 "elds.m"
                            break;
#line 139 "elds.m"
                          case (MR_Integer) 8:
#line 7796 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 139 "elds.m"
                            break;
#line 139 "elds.m"
                          case (MR_Integer) 9:
#line 7802 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 139 "elds.m"
                            break;
#line 139 "elds.m"
                          case (MR_Integer) 10:
#line 7808 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 139 "elds.m"
                            break;
#line 139 "elds.m"
                        }
#line 139 "elds.m"
                        break;
#line 139 "elds.m"
                    }
#line 139 "elds.m"
                  }
#line 139 "elds.m"
                  break;
#line 139 "elds.m"
                case (MR_Integer) 6:
#line 139 "elds.m"
                  {
#line 139 "elds.m"
                    MR_Word erl_backend__elds__V_761_761 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 4)));
#line 139 "elds.m"
                    MR_Word erl_backend__elds__V_762_762 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 3)));
#line 139 "elds.m"
                    MR_Word erl_backend__elds__V_763_763 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 2)));
#line 139 "elds.m"
                    MR_Word erl_backend__elds__V_764_764 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 1)));

#line 139 "elds.m"
#line 139 "elds.m"
                    switch (MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) {
#line 139 "elds.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 139 "elds.m"
                      case (MR_Integer) 0:
#line 7842 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 139 "elds.m"
                        break;
#line 139 "elds.m"
                      case (MR_Integer) 1:
#line 7848 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 139 "elds.m"
                        break;
#line 139 "elds.m"
                      case (MR_Integer) 2:
#line 7854 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 139 "elds.m"
                        break;
#line 139 "elds.m"
                      case (MR_Integer) 3:
#line 139 "elds.m"
#line 139 "elds.m"
                        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) {
#line 139 "elds.m"
                          default: /*NOTREACHED*/ MR_assert(0);
#line 139 "elds.m"
                          case (MR_Integer) 0:
#line 7867 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 139 "elds.m"
                            break;
#line 139 "elds.m"
                          case (MR_Integer) 1:
#line 7873 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 139 "elds.m"
                            break;
#line 139 "elds.m"
                          case (MR_Integer) 2:
#line 7879 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 139 "elds.m"
                            break;
#line 139 "elds.m"
                          case (MR_Integer) 3:
#line 7885 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 139 "elds.m"
                            break;
#line 139 "elds.m"
                          case (MR_Integer) 4:
#line 7891 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 139 "elds.m"
                            break;
#line 139 "elds.m"
                          case (MR_Integer) 5:
#line 7897 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 139 "elds.m"
                            break;
#line 139 "elds.m"
                          case (MR_Integer) 6:
#line 139 "elds.m"
                            {
#line 139 "elds.m"
                              MR_Word erl_backend__elds__V_500_500 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 1)));
#line 139 "elds.m"
                              MR_Word erl_backend__elds__V_501_501 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 2)));
#line 139 "elds.m"
                              MR_Word erl_backend__elds__V_502_502 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 3)));
#line 139 "elds.m"
                              MR_Word erl_backend__elds__V_503_503 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 4)));
#line 139 "elds.m"
                              MR_Word erl_backend__elds__V_504_504;

#line 139 "elds.m"
                              {
#line 139 "elds.m"
                                erl_backend__elds____Compare____elds_expr_0_0(&erl_backend__elds__V_504_504, erl_backend__elds__V_764_764, erl_backend__elds__V_500_500);
                              }
#line 7921 "erl_backend.elds.c"
                              erl_backend__elds__succeeded = (erl_backend__elds__V_504_504 == (MR_Integer) 0);
#line 139 "elds.m"
                              erl_backend__elds__succeeded = !(erl_backend__elds__succeeded);
#line 139 "elds.m"
                              if (erl_backend__elds__succeeded)
#line 139 "elds.m"
                                *erl_backend__elds__HeadVar__1_1 = erl_backend__elds__V_504_504;
#line 139 "elds.m"
                              else
#line 139 "elds.m"
                                {
#line 139 "elds.m"
                                  MR_Word erl_backend__elds__V_505_505;

#line 139 "elds.m"
                                  {
#line 139 "elds.m"
                                    mercury__builtin__compare_3_p_0((MR_Word) &erl_backend__elds_scalar_common_1[11], &erl_backend__elds__V_505_505, ((MR_Box) (erl_backend__elds__V_763_763)), ((MR_Box) (erl_backend__elds__V_501_501)));
                                  }
#line 7941 "erl_backend.elds.c"
                                  erl_backend__elds__succeeded = (erl_backend__elds__V_505_505 == (MR_Integer) 0);
#line 139 "elds.m"
                                  erl_backend__elds__succeeded = !(erl_backend__elds__succeeded);
#line 139 "elds.m"
                                  if (erl_backend__elds__succeeded)
#line 139 "elds.m"
                                    *erl_backend__elds__HeadVar__1_1 = erl_backend__elds__V_505_505;
#line 139 "elds.m"
                                  else
#line 139 "elds.m"
                                    {
#line 139 "elds.m"
                                      MR_Word erl_backend__elds__V_506_506;

#line 139 "elds.m"
                                      {
#line 139 "elds.m"
                                        mercury__builtin__compare_3_p_0((MR_Word) &erl_backend__elds_scalar_common_1[12], &erl_backend__elds__V_506_506, ((MR_Box) (erl_backend__elds__V_762_762)), ((MR_Box) (erl_backend__elds__V_502_502)));
                                      }
#line 7961 "erl_backend.elds.c"
                                      erl_backend__elds__succeeded = (erl_backend__elds__V_506_506 == (MR_Integer) 0);
#line 139 "elds.m"
                                      erl_backend__elds__succeeded = !(erl_backend__elds__succeeded);
#line 139 "elds.m"
                                      if (erl_backend__elds__succeeded)
#line 139 "elds.m"
                                        *erl_backend__elds__HeadVar__1_1 = erl_backend__elds__V_506_506;
#line 139 "elds.m"
                                      else
#line 139 "elds.m"
                                        {
#line 139 "elds.m"
                                          {
#line 139 "elds.m"
                                            mercury__builtin__compare_3_p_0((MR_Word) &erl_backend__elds_scalar_common_1[13], erl_backend__elds__HeadVar__1_1, ((MR_Box) (erl_backend__elds__V_761_761)), ((MR_Box) (erl_backend__elds__V_503_503)));
                                          }
#line 139 "elds.m"
                                        }
#line 139 "elds.m"
                                    }
#line 139 "elds.m"
                                }
#line 139 "elds.m"
                            }
#line 139 "elds.m"
                            break;
#line 139 "elds.m"
                          case (MR_Integer) 7:
#line 7990 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 139 "elds.m"
                            break;
#line 139 "elds.m"
                          case (MR_Integer) 8:
#line 7996 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 139 "elds.m"
                            break;
#line 139 "elds.m"
                          case (MR_Integer) 9:
#line 8002 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 139 "elds.m"
                            break;
#line 139 "elds.m"
                          case (MR_Integer) 10:
#line 8008 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 139 "elds.m"
                            break;
#line 139 "elds.m"
                        }
#line 139 "elds.m"
                        break;
#line 139 "elds.m"
                    }
#line 139 "elds.m"
                  }
#line 139 "elds.m"
                  break;
#line 139 "elds.m"
                case (MR_Integer) 7:
#line 139 "elds.m"
                  {
#line 139 "elds.m"
                    MR_Word erl_backend__elds__V_760_760 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 1)));

#line 139 "elds.m"
#line 139 "elds.m"
                    switch (MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) {
#line 139 "elds.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 139 "elds.m"
                      case (MR_Integer) 0:
#line 8036 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 139 "elds.m"
                        break;
#line 139 "elds.m"
                      case (MR_Integer) 1:
#line 8042 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 139 "elds.m"
                        break;
#line 139 "elds.m"
                      case (MR_Integer) 2:
#line 8048 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 139 "elds.m"
                        break;
#line 139 "elds.m"
                      case (MR_Integer) 3:
#line 139 "elds.m"
#line 139 "elds.m"
                        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) {
#line 139 "elds.m"
                          default: /*NOTREACHED*/ MR_assert(0);
#line 139 "elds.m"
                          case (MR_Integer) 0:
#line 8061 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 139 "elds.m"
                            break;
#line 139 "elds.m"
                          case (MR_Integer) 1:
#line 8067 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 139 "elds.m"
                            break;
#line 139 "elds.m"
                          case (MR_Integer) 2:
#line 8073 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 139 "elds.m"
                            break;
#line 139 "elds.m"
                          case (MR_Integer) 3:
#line 8079 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 139 "elds.m"
                            break;
#line 139 "elds.m"
                          case (MR_Integer) 4:
#line 8085 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 139 "elds.m"
                            break;
#line 139 "elds.m"
                          case (MR_Integer) 5:
#line 8091 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 139 "elds.m"
                            break;
#line 139 "elds.m"
                          case (MR_Integer) 6:
#line 8097 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 139 "elds.m"
                            break;
#line 139 "elds.m"
                          case (MR_Integer) 7:
#line 139 "elds.m"
                            {
#line 139 "elds.m"
                              MR_Word erl_backend__elds__V_559_559 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 1)));

#line 139 "elds.m"
                              /* direct tailcall eliminated */
#line 139 "elds.m"
                              {
#line 139 "elds.m"
                                MR_Word erl_backend__elds__HeadVar__2__tmp_copy_2 = erl_backend__elds__V_760_760;
#line 139 "elds.m"
                                MR_Word erl_backend__elds__HeadVar__3__tmp_copy_3 = erl_backend__elds__V_559_559;

#line 139 "elds.m"
                                erl_backend__elds__HeadVar__3_3 = erl_backend__elds__HeadVar__3__tmp_copy_3;
#line 139 "elds.m"
                                erl_backend__elds__HeadVar__2_2 = erl_backend__elds__HeadVar__2__tmp_copy_2;
#line 139 "elds.m"
                              }
#line 139 "elds.m"
                              continue;
#line 139 "elds.m"
                            }
#line 139 "elds.m"
                            break;
#line 139 "elds.m"
                          case (MR_Integer) 8:
#line 8131 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 139 "elds.m"
                            break;
#line 139 "elds.m"
                          case (MR_Integer) 9:
#line 8137 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 139 "elds.m"
                            break;
#line 139 "elds.m"
                          case (MR_Integer) 10:
#line 8143 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 139 "elds.m"
                            break;
#line 139 "elds.m"
                        }
#line 139 "elds.m"
                        break;
#line 139 "elds.m"
                    }
#line 139 "elds.m"
                  }
#line 139 "elds.m"
                  break;
#line 139 "elds.m"
                case (MR_Integer) 8:
#line 139 "elds.m"
                  {
#line 139 "elds.m"
                    MR_Word erl_backend__elds__V_752_752 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 2)));
#line 139 "elds.m"
                    MR_String erl_backend__elds__V_753_753 = ((MR_String) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 1)));

#line 139 "elds.m"
#line 139 "elds.m"
                    switch (MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) {
#line 139 "elds.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 139 "elds.m"
                      case (MR_Integer) 0:
#line 8173 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 139 "elds.m"
                        break;
#line 139 "elds.m"
                      case (MR_Integer) 1:
#line 8179 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 139 "elds.m"
                        break;
#line 139 "elds.m"
                      case (MR_Integer) 2:
#line 8185 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 139 "elds.m"
                        break;
#line 139 "elds.m"
                      case (MR_Integer) 3:
#line 139 "elds.m"
#line 139 "elds.m"
                        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) {
#line 139 "elds.m"
                          default: /*NOTREACHED*/ MR_assert(0);
#line 139 "elds.m"
                          case (MR_Integer) 0:
#line 8198 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 139 "elds.m"
                            break;
#line 139 "elds.m"
                          case (MR_Integer) 1:
#line 8204 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 139 "elds.m"
                            break;
#line 139 "elds.m"
                          case (MR_Integer) 2:
#line 8210 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 139 "elds.m"
                            break;
#line 139 "elds.m"
                          case (MR_Integer) 3:
#line 8216 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 139 "elds.m"
                            break;
#line 139 "elds.m"
                          case (MR_Integer) 4:
#line 8222 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 139 "elds.m"
                            break;
#line 139 "elds.m"
                          case (MR_Integer) 5:
#line 8228 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 139 "elds.m"
                            break;
#line 139 "elds.m"
                          case (MR_Integer) 6:
#line 8234 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 139 "elds.m"
                            break;
#line 139 "elds.m"
                          case (MR_Integer) 7:
#line 8240 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 139 "elds.m"
                            break;
#line 139 "elds.m"
                          case (MR_Integer) 8:
#line 139 "elds.m"
                            {
#line 139 "elds.m"
                              MR_String erl_backend__elds__V_612_612 = ((MR_String) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 1)));
#line 139 "elds.m"
                              MR_Word erl_backend__elds__V_613_613 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 2)));
#line 139 "elds.m"
                              MR_Word erl_backend__elds__V_614_614;

#line 139 "elds.m"
                              {
#line 139 "elds.m"
                                mercury__private_builtin__builtin_compare_string_3_p_0(&erl_backend__elds__V_614_614, erl_backend__elds__V_753_753, erl_backend__elds__V_612_612);
                              }
#line 8260 "erl_backend.elds.c"
                              erl_backend__elds__succeeded = (erl_backend__elds__V_614_614 == (MR_Integer) 0);
#line 139 "elds.m"
                              erl_backend__elds__succeeded = !(erl_backend__elds__succeeded);
#line 139 "elds.m"
                              if (erl_backend__elds__succeeded)
#line 139 "elds.m"
                                *erl_backend__elds__HeadVar__1_1 = erl_backend__elds__V_614_614;
#line 139 "elds.m"
                              else
#line 139 "elds.m"
                                {
#line 139 "elds.m"
                                  mercury__term____Compare____context_0_0(erl_backend__elds__HeadVar__1_1, erl_backend__elds__V_752_752, erl_backend__elds__V_613_613);
                                }
#line 139 "elds.m"
                            }
#line 139 "elds.m"
                            break;
#line 139 "elds.m"
                          case (MR_Integer) 9:
#line 8281 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 139 "elds.m"
                            break;
#line 139 "elds.m"
                          case (MR_Integer) 10:
#line 8287 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 139 "elds.m"
                            break;
#line 139 "elds.m"
                        }
#line 139 "elds.m"
                        break;
#line 139 "elds.m"
                    }
#line 139 "elds.m"
                  }
#line 139 "elds.m"
                  break;
#line 139 "elds.m"
                case (MR_Integer) 9:
#line 139 "elds.m"
                  {
#line 139 "elds.m"
                    MR_Word erl_backend__elds__V_757_757 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 2)));
#line 139 "elds.m"
                    MR_Word erl_backend__elds__V_758_758 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 1)));

#line 139 "elds.m"
#line 139 "elds.m"
                    switch (MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) {
#line 139 "elds.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 139 "elds.m"
                      case (MR_Integer) 0:
#line 8317 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 139 "elds.m"
                        break;
#line 139 "elds.m"
                      case (MR_Integer) 1:
#line 8323 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 139 "elds.m"
                        break;
#line 139 "elds.m"
                      case (MR_Integer) 2:
#line 8329 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 139 "elds.m"
                        break;
#line 139 "elds.m"
                      case (MR_Integer) 3:
#line 139 "elds.m"
#line 139 "elds.m"
                        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) {
#line 139 "elds.m"
                          default: /*NOTREACHED*/ MR_assert(0);
#line 139 "elds.m"
                          case (MR_Integer) 0:
#line 8342 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 139 "elds.m"
                            break;
#line 139 "elds.m"
                          case (MR_Integer) 1:
#line 8348 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 139 "elds.m"
                            break;
#line 139 "elds.m"
                          case (MR_Integer) 2:
#line 8354 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 139 "elds.m"
                            break;
#line 139 "elds.m"
                          case (MR_Integer) 3:
#line 8360 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 139 "elds.m"
                            break;
#line 139 "elds.m"
                          case (MR_Integer) 4:
#line 8366 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 139 "elds.m"
                            break;
#line 139 "elds.m"
                          case (MR_Integer) 5:
#line 8372 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 139 "elds.m"
                            break;
#line 139 "elds.m"
                          case (MR_Integer) 6:
#line 8378 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 139 "elds.m"
                            break;
#line 139 "elds.m"
                          case (MR_Integer) 7:
#line 8384 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 139 "elds.m"
                            break;
#line 139 "elds.m"
                          case (MR_Integer) 8:
#line 8390 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 139 "elds.m"
                            break;
#line 139 "elds.m"
                          case (MR_Integer) 9:
#line 139 "elds.m"
                            {
#line 139 "elds.m"
                              MR_Word erl_backend__elds__V_670_670 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 1)));
#line 139 "elds.m"
                              MR_Word erl_backend__elds__V_671_671 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 2)));
#line 139 "elds.m"
                              MR_Word erl_backend__elds__V_672_672;

#line 139 "elds.m"
                              {
#line 139 "elds.m"
                                erl_backend__elds____Compare____elds_expr_0_0(&erl_backend__elds__V_672_672, erl_backend__elds__V_758_758, erl_backend__elds__V_670_670);
                              }
#line 8410 "erl_backend.elds.c"
                              erl_backend__elds__succeeded = (erl_backend__elds__V_672_672 == (MR_Integer) 0);
#line 139 "elds.m"
                              erl_backend__elds__succeeded = !(erl_backend__elds__succeeded);
#line 139 "elds.m"
                              if (erl_backend__elds__succeeded)
#line 139 "elds.m"
                                *erl_backend__elds__HeadVar__1_1 = erl_backend__elds__V_672_672;
#line 139 "elds.m"
                              else
#line 139 "elds.m"
                                {
#line 139 "elds.m"
                                  /* direct tailcall eliminated */
#line 139 "elds.m"
                                  {
#line 139 "elds.m"
                                    MR_Word erl_backend__elds__HeadVar__2__tmp_copy_2 = erl_backend__elds__V_757_757;
#line 139 "elds.m"
                                    MR_Word erl_backend__elds__HeadVar__3__tmp_copy_3 = erl_backend__elds__V_671_671;

#line 139 "elds.m"
                                    erl_backend__elds__HeadVar__3_3 = erl_backend__elds__HeadVar__3__tmp_copy_3;
#line 139 "elds.m"
                                    erl_backend__elds__HeadVar__2_2 = erl_backend__elds__HeadVar__2__tmp_copy_2;
#line 139 "elds.m"
                                  }
#line 139 "elds.m"
                                  continue;
#line 139 "elds.m"
                                }
#line 139 "elds.m"
                            }
#line 139 "elds.m"
                            break;
#line 139 "elds.m"
                          case (MR_Integer) 10:
#line 8447 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 139 "elds.m"
                            break;
#line 139 "elds.m"
                        }
#line 139 "elds.m"
                        break;
#line 139 "elds.m"
                    }
#line 139 "elds.m"
                  }
#line 139 "elds.m"
                  break;
#line 139 "elds.m"
                case (MR_Integer) 10:
#line 139 "elds.m"
                  {
#line 139 "elds.m"
                    MR_Word erl_backend__elds__V_755_755 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 1)));

#line 139 "elds.m"
#line 139 "elds.m"
                    switch (MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) {
#line 139 "elds.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 139 "elds.m"
                      case (MR_Integer) 0:
#line 8475 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 139 "elds.m"
                        break;
#line 139 "elds.m"
                      case (MR_Integer) 1:
#line 8481 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 139 "elds.m"
                        break;
#line 139 "elds.m"
                      case (MR_Integer) 2:
#line 8487 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 139 "elds.m"
                        break;
#line 139 "elds.m"
                      case (MR_Integer) 3:
#line 139 "elds.m"
#line 139 "elds.m"
                        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) {
#line 139 "elds.m"
                          default: /*NOTREACHED*/ MR_assert(0);
#line 139 "elds.m"
                          case (MR_Integer) 0:
#line 8500 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 139 "elds.m"
                            break;
#line 139 "elds.m"
                          case (MR_Integer) 1:
#line 8506 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 139 "elds.m"
                            break;
#line 139 "elds.m"
                          case (MR_Integer) 2:
#line 8512 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 139 "elds.m"
                            break;
#line 139 "elds.m"
                          case (MR_Integer) 3:
#line 8518 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 139 "elds.m"
                            break;
#line 139 "elds.m"
                          case (MR_Integer) 4:
#line 8524 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 139 "elds.m"
                            break;
#line 139 "elds.m"
                          case (MR_Integer) 5:
#line 8530 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 139 "elds.m"
                            break;
#line 139 "elds.m"
                          case (MR_Integer) 6:
#line 8536 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 139 "elds.m"
                            break;
#line 139 "elds.m"
                          case (MR_Integer) 7:
#line 8542 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 139 "elds.m"
                            break;
#line 139 "elds.m"
                          case (MR_Integer) 8:
#line 8548 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 139 "elds.m"
                            break;
#line 139 "elds.m"
                          case (MR_Integer) 9:
#line 8554 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 139 "elds.m"
                            break;
#line 139 "elds.m"
                          case (MR_Integer) 10:
#line 139 "elds.m"
                            {
#line 139 "elds.m"
                              MR_Word erl_backend__elds__V_714_714 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 1)));

#line 139 "elds.m"
                              {
#line 139 "elds.m"
                                mercury__builtin__compare_3_p_0((MR_Word) &erl_backend__elds_scalar_common_1[11], erl_backend__elds__HeadVar__1_1, ((MR_Box) (erl_backend__elds__V_755_755)), ((MR_Box) (erl_backend__elds__V_714_714)));
                              }
#line 139 "elds.m"
                            }
#line 139 "elds.m"
                            break;
#line 139 "elds.m"
                        }
#line 139 "elds.m"
                        break;
#line 139 "elds.m"
                    }
#line 139 "elds.m"
                  }
#line 139 "elds.m"
                  break;
#line 139 "elds.m"
              }
#line 139 "elds.m"
              break;
#line 139 "elds.m"
          }
#line 139 "elds.m"
      }
#line 139 "elds.m"
      break;
#line 139 "elds.m"
    }
#line 139 "elds.m"
}

#line 139 "elds.m"
MR_bool MR_CALL 
erl_backend__elds____Unify____elds_expr_0_0(
#line 139 "elds.m"
  MR_Word erl_backend__elds__HeadVar__1_1,
#line 139 "elds.m"
  MR_Word erl_backend__elds__HeadVar__2_2)
#line 139 "elds.m"
{
#line 139 "elds.m"
  while (MR_TRUE)
#line 139 "elds.m"
    {
#line 139 "elds.m"
      /* tailcall optimized into a loop */
#line 139 "elds.m"
      {
#line 139 "elds.m"
        MR_bool erl_backend__elds__succeeded;
#line 139 "elds.m"
        MR_Integer erl_backend__elds__CastX_53 = (MR_Integer) erl_backend__elds__HeadVar__1_1;
#line 139 "elds.m"
        MR_Integer erl_backend__elds__CastY_54 = (MR_Integer) erl_backend__elds__HeadVar__2_2;

#line 139 "elds.m"
        erl_backend__elds__succeeded = (erl_backend__elds__CastX_53 == erl_backend__elds__CastY_54);
#line 139 "elds.m"
        if (erl_backend__elds__succeeded)
#line 139 "elds.m"
          erl_backend__elds__succeeded = MR_TRUE;
#line 139 "elds.m"
        else
#line 139 "elds.m"
#line 139 "elds.m"
          switch (MR_tag((MR_Word) erl_backend__elds__HeadVar__1_1)) {
#line 139 "elds.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 139 "elds.m"
            case (MR_Integer) 0:
#line 139 "elds.m"
              {
#line 139 "elds.m"
                MR_Word erl_backend__elds__V_27_27 = (MR_Word) MR_body(((MR_Word) erl_backend__elds__HeadVar__1_1), (MR_Integer) 0);
#line 139 "elds.m"
                MR_Word erl_backend__elds__V_28_28;

#line 139 "elds.m"
                erl_backend__elds__succeeded = ((MR_tag((MR_Word) erl_backend__elds__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 139 "elds.m"
                if (erl_backend__elds__succeeded)
#line 139 "elds.m"
                  {
#line 139 "elds.m"
                    erl_backend__elds__V_28_28 = (MR_Word) MR_body(((MR_Word) erl_backend__elds__HeadVar__2_2), (MR_Integer) 0);
#line 8653 "erl_backend.elds.c"
                    {
#line 8655 "erl_backend.elds.c"
                      erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_clause_0_0(erl_backend__elds__V_27_27, erl_backend__elds__V_28_28);
                    }
#line 139 "elds.m"
                  }
#line 139 "elds.m"
              }
#line 139 "elds.m"
              break;
#line 139 "elds.m"
            case (MR_Integer) 1:
#line 139 "elds.m"
              {
#line 139 "elds.m"
                MR_Word erl_backend__elds__TypeInfo_55_55;
#line 139 "elds.m"
                MR_Word erl_backend__elds__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds__HeadVar__1_1, (MR_Integer) 0)));
#line 139 "elds.m"
                MR_Word erl_backend__elds__V_4_4;

#line 139 "elds.m"
                erl_backend__elds__succeeded = ((MR_tag((MR_Word) erl_backend__elds__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 139 "elds.m"
                if (erl_backend__elds__succeeded)
#line 139 "elds.m"
                  {
#line 139 "elds.m"
                    erl_backend__elds__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)));
#line 8683 "erl_backend.elds.c"
                    erl_backend__elds__TypeInfo_55_55 = (MR_Word) &erl_backend__elds_scalar_common_1[14];
#line 8685 "erl_backend.elds.c"
                    {
#line 8687 "erl_backend.elds.c"
                      erl_backend__elds__succeeded = mercury__builtin__unify_2_p_0(erl_backend__elds__TypeInfo_55_55, ((MR_Box) (erl_backend__elds__V_3_3)), ((MR_Box) (erl_backend__elds__V_4_4)));
                    }
#line 139 "elds.m"
                  }
#line 139 "elds.m"
              }
#line 139 "elds.m"
              break;
#line 139 "elds.m"
            case (MR_Integer) 2:
#line 139 "elds.m"
              {
#line 139 "elds.m"
                MR_Word erl_backend__elds__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(2), erl_backend__elds__HeadVar__1_1, (MR_Integer) 0)));
#line 139 "elds.m"
                MR_Word erl_backend__elds__V_6_6;

#line 139 "elds.m"
                erl_backend__elds__succeeded = ((MR_tag((MR_Word) erl_backend__elds__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 139 "elds.m"
                if (erl_backend__elds__succeeded)
#line 139 "elds.m"
                  {
#line 139 "elds.m"
                    erl_backend__elds__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(2), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)));
#line 8713 "erl_backend.elds.c"
                    {
#line 8715 "erl_backend.elds.c"
                      erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_term_0_0(erl_backend__elds__V_5_5, erl_backend__elds__V_6_6);
                    }
#line 139 "elds.m"
                  }
#line 139 "elds.m"
              }
#line 139 "elds.m"
              break;
#line 139 "elds.m"
            case (MR_Integer) 3:
#line 139 "elds.m"
#line 139 "elds.m"
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__1_1, (MR_Integer) 0)))) {
#line 139 "elds.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 139 "elds.m"
                case (MR_Integer) 0:
#line 139 "elds.m"
                  {
#line 139 "elds.m"
                    MR_Word erl_backend__elds__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__1_1, (MR_Integer) 1)));
#line 139 "elds.m"
                    MR_Word erl_backend__elds__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__1_1, (MR_Integer) 2)));
#line 139 "elds.m"
                    MR_Word erl_backend__elds__V_9_9;
#line 139 "elds.m"
                    MR_Word erl_backend__elds__V_10_10;

#line 139 "elds.m"
                    erl_backend__elds__succeeded = ((((MR_tag((MR_Word) erl_backend__elds__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 139 "elds.m"
                    if (erl_backend__elds__succeeded)
#line 139 "elds.m"
                      {
#line 139 "elds.m"
                        erl_backend__elds__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 1)));
#line 139 "elds.m"
                        erl_backend__elds__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 2)));
#line 8754 "erl_backend.elds.c"
                        {
#line 8756 "erl_backend.elds.c"
                          erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_expr_0_0(erl_backend__elds__V_7_7, erl_backend__elds__V_9_9);
                        }
#line 139 "elds.m"
                        if (erl_backend__elds__succeeded)
#line 8761 "erl_backend.elds.c"
                          {
#line 8763 "erl_backend.elds.c"
                            /* direct tailcall eliminated */
#line 8765 "erl_backend.elds.c"
                            {
#line 8767 "erl_backend.elds.c"
                              MR_Word erl_backend__elds__HeadVar__1__tmp_copy_1 = erl_backend__elds__V_8_8;
#line 8769 "erl_backend.elds.c"
                              MR_Word erl_backend__elds__HeadVar__2__tmp_copy_2 = erl_backend__elds__V_10_10;

#line 8772 "erl_backend.elds.c"
                              erl_backend__elds__HeadVar__2_2 = erl_backend__elds__HeadVar__2__tmp_copy_2;
#line 8774 "erl_backend.elds.c"
                              erl_backend__elds__HeadVar__1_1 = erl_backend__elds__HeadVar__1__tmp_copy_1;
#line 8776 "erl_backend.elds.c"
                            }
#line 8778 "erl_backend.elds.c"
                            continue;
#line 8780 "erl_backend.elds.c"
                          }
#line 139 "elds.m"
                      }
#line 139 "elds.m"
                  }
#line 139 "elds.m"
                  break;
#line 139 "elds.m"
                case (MR_Integer) 1:
#line 139 "elds.m"
                  {
#line 139 "elds.m"
                    MR_Word erl_backend__elds__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__1_1, (MR_Integer) 1)));
#line 139 "elds.m"
                    MR_Word erl_backend__elds__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__1_1, (MR_Integer) 2)));
#line 139 "elds.m"
                    MR_Word erl_backend__elds__V_13_13;
#line 139 "elds.m"
                    MR_Word erl_backend__elds__V_14_14;

#line 139 "elds.m"
                    erl_backend__elds__succeeded = ((((MR_tag((MR_Word) erl_backend__elds__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 139 "elds.m"
                    if (erl_backend__elds__succeeded)
#line 139 "elds.m"
                      {
#line 139 "elds.m"
                        erl_backend__elds__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 1)));
#line 139 "elds.m"
                        erl_backend__elds__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 2)));
#line 8811 "erl_backend.elds.c"
                        erl_backend__elds__succeeded = (erl_backend__elds__V_11_11 == erl_backend__elds__V_13_13);
#line 139 "elds.m"
                        if (erl_backend__elds__succeeded)
#line 8815 "erl_backend.elds.c"
                          {
#line 8817 "erl_backend.elds.c"
                            /* direct tailcall eliminated */
#line 8819 "erl_backend.elds.c"
                            {
#line 8821 "erl_backend.elds.c"
                              MR_Word erl_backend__elds__HeadVar__1__tmp_copy_1 = erl_backend__elds__V_12_12;
#line 8823 "erl_backend.elds.c"
                              MR_Word erl_backend__elds__HeadVar__2__tmp_copy_2 = erl_backend__elds__V_14_14;

#line 8826 "erl_backend.elds.c"
                              erl_backend__elds__HeadVar__2_2 = erl_backend__elds__HeadVar__2__tmp_copy_2;
#line 8828 "erl_backend.elds.c"
                              erl_backend__elds__HeadVar__1_1 = erl_backend__elds__HeadVar__1__tmp_copy_1;
#line 8830 "erl_backend.elds.c"
                            }
#line 8832 "erl_backend.elds.c"
                            continue;
#line 8834 "erl_backend.elds.c"
                          }
#line 139 "elds.m"
                      }
#line 139 "elds.m"
                  }
#line 139 "elds.m"
                  break;
#line 139 "elds.m"
                case (MR_Integer) 2:
#line 139 "elds.m"
                  {
#line 139 "elds.m"
                    MR_Word erl_backend__elds__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__1_1, (MR_Integer) 1)));
#line 139 "elds.m"
                    MR_Word erl_backend__elds__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__1_1, (MR_Integer) 2)));
#line 139 "elds.m"
                    MR_Word erl_backend__elds__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__1_1, (MR_Integer) 3)));
#line 139 "elds.m"
                    MR_Word erl_backend__elds__V_18_18;
#line 139 "elds.m"
                    MR_Word erl_backend__elds__V_19_19;
#line 139 "elds.m"
                    MR_Word erl_backend__elds__V_20_20;

#line 139 "elds.m"
                    erl_backend__elds__succeeded = ((((MR_tag((MR_Word) erl_backend__elds__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 139 "elds.m"
                    if (erl_backend__elds__succeeded)
#line 139 "elds.m"
                      {
#line 139 "elds.m"
                        erl_backend__elds__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 1)));
#line 139 "elds.m"
                        erl_backend__elds__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 2)));
#line 139 "elds.m"
                        erl_backend__elds__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 3)));
#line 8871 "erl_backend.elds.c"
                        erl_backend__elds__succeeded = (erl_backend__elds__V_15_15 == erl_backend__elds__V_18_18);
#line 139 "elds.m"
                        if (erl_backend__elds__succeeded)
#line 139 "elds.m"
                          {
#line 8877 "erl_backend.elds.c"
                            {
#line 8879 "erl_backend.elds.c"
                              erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_expr_0_0(erl_backend__elds__V_16_16, erl_backend__elds__V_19_19);
                            }
#line 139 "elds.m"
                            if (erl_backend__elds__succeeded)
#line 8884 "erl_backend.elds.c"
                              {
#line 8886 "erl_backend.elds.c"
                                /* direct tailcall eliminated */
#line 8888 "erl_backend.elds.c"
                                {
#line 8890 "erl_backend.elds.c"
                                  MR_Word erl_backend__elds__HeadVar__1__tmp_copy_1 = erl_backend__elds__V_17_17;
#line 8892 "erl_backend.elds.c"
                                  MR_Word erl_backend__elds__HeadVar__2__tmp_copy_2 = erl_backend__elds__V_20_20;

#line 8895 "erl_backend.elds.c"
                                  erl_backend__elds__HeadVar__2_2 = erl_backend__elds__HeadVar__2__tmp_copy_2;
#line 8897 "erl_backend.elds.c"
                                  erl_backend__elds__HeadVar__1_1 = erl_backend__elds__HeadVar__1__tmp_copy_1;
#line 8899 "erl_backend.elds.c"
                                }
#line 8901 "erl_backend.elds.c"
                                continue;
#line 8903 "erl_backend.elds.c"
                              }
#line 139 "elds.m"
                          }
#line 139 "elds.m"
                      }
#line 139 "elds.m"
                  }
#line 139 "elds.m"
                  break;
#line 139 "elds.m"
                case (MR_Integer) 3:
#line 139 "elds.m"
                  {
#line 139 "elds.m"
                    MR_Word erl_backend__elds__TypeInfo_56_56;
#line 139 "elds.m"
                    MR_Word erl_backend__elds__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__1_1, (MR_Integer) 1)));
#line 139 "elds.m"
                    MR_Word erl_backend__elds__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__1_1, (MR_Integer) 2)));
#line 139 "elds.m"
                    MR_Word erl_backend__elds__V_23_23;
#line 139 "elds.m"
                    MR_Word erl_backend__elds__V_24_24;

#line 139 "elds.m"
                    erl_backend__elds__succeeded = ((((MR_tag((MR_Word) erl_backend__elds__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 139 "elds.m"
                    if (erl_backend__elds__succeeded)
#line 139 "elds.m"
                      {
#line 139 "elds.m"
                        erl_backend__elds__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 1)));
#line 139 "elds.m"
                        erl_backend__elds__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 2)));
#line 8938 "erl_backend.elds.c"
                        {
#line 8940 "erl_backend.elds.c"
                          erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_call_target_0_0(erl_backend__elds__V_21_21, erl_backend__elds__V_23_23);
                        }
#line 139 "elds.m"
                        if (erl_backend__elds__succeeded)
#line 139 "elds.m"
                          {
#line 8947 "erl_backend.elds.c"
                            erl_backend__elds__TypeInfo_56_56 = (MR_Word) &erl_backend__elds_scalar_common_1[14];
#line 8949 "erl_backend.elds.c"
                            {
#line 8951 "erl_backend.elds.c"
                              erl_backend__elds__succeeded = mercury__builtin__unify_2_p_0(erl_backend__elds__TypeInfo_56_56, ((MR_Box) (erl_backend__elds__V_22_22)), ((MR_Box) (erl_backend__elds__V_24_24)));
                            }
#line 139 "elds.m"
                          }
#line 139 "elds.m"
                      }
#line 139 "elds.m"
                  }
#line 139 "elds.m"
                  break;
#line 139 "elds.m"
                case (MR_Integer) 4:
#line 139 "elds.m"
                  {
#line 139 "elds.m"
                    MR_Word erl_backend__elds__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__1_1, (MR_Integer) 1)));
#line 139 "elds.m"
                    MR_Word erl_backend__elds__V_26_26;

#line 139 "elds.m"
                    erl_backend__elds__succeeded = ((((MR_tag((MR_Word) erl_backend__elds__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 139 "elds.m"
                    if (erl_backend__elds__succeeded)
#line 139 "elds.m"
                      {
#line 139 "elds.m"
                        erl_backend__elds__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 1)));
#line 8979 "erl_backend.elds.c"
                        {
#line 8981 "erl_backend.elds.c"
                          erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_rtti_id_0_0(erl_backend__elds__V_25_25, erl_backend__elds__V_26_26);
                        }
#line 139 "elds.m"
                      }
#line 139 "elds.m"
                  }
#line 139 "elds.m"
                  break;
#line 139 "elds.m"
                case (MR_Integer) 5:
#line 139 "elds.m"
                  {
#line 139 "elds.m"
                    MR_Word erl_backend__elds__TypeInfo_57_57;
#line 139 "elds.m"
                    MR_Word erl_backend__elds__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__1_1, (MR_Integer) 1)));
#line 139 "elds.m"
                    MR_Word erl_backend__elds__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__1_1, (MR_Integer) 2)));
#line 139 "elds.m"
                    MR_Word erl_backend__elds__V_31_31;
#line 139 "elds.m"
                    MR_Word erl_backend__elds__V_32_32;

#line 139 "elds.m"
                    erl_backend__elds__succeeded = ((((MR_tag((MR_Word) erl_backend__elds__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 139 "elds.m"
                    if (erl_backend__elds__succeeded)
#line 139 "elds.m"
                      {
#line 139 "elds.m"
                        erl_backend__elds__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 1)));
#line 139 "elds.m"
                        erl_backend__elds__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 2)));
#line 9015 "erl_backend.elds.c"
                        {
#line 9017 "erl_backend.elds.c"
                          erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_expr_0_0(erl_backend__elds__V_29_29, erl_backend__elds__V_31_31);
                        }
#line 139 "elds.m"
                        if (erl_backend__elds__succeeded)
#line 139 "elds.m"
                          {
#line 9024 "erl_backend.elds.c"
                            erl_backend__elds__TypeInfo_57_57 = (MR_Word) &erl_backend__elds_scalar_common_1[11];
#line 9026 "erl_backend.elds.c"
                            {
#line 9028 "erl_backend.elds.c"
                              erl_backend__elds__succeeded = mercury__builtin__unify_2_p_0(erl_backend__elds__TypeInfo_57_57, ((MR_Box) (erl_backend__elds__V_30_30)), ((MR_Box) (erl_backend__elds__V_32_32)));
                            }
#line 139 "elds.m"
                          }
#line 139 "elds.m"
                      }
#line 139 "elds.m"
                  }
#line 139 "elds.m"
                  break;
#line 139 "elds.m"
                case (MR_Integer) 6:
#line 139 "elds.m"
                  {
#line 139 "elds.m"
                    MR_Word erl_backend__elds__TypeInfo_60_60;
#line 139 "elds.m"
                    MR_Word erl_backend__elds__TypeInfo_61_61;
#line 139 "elds.m"
                    MR_Word erl_backend__elds__TypeInfo_62_62;
#line 139 "elds.m"
                    MR_Word erl_backend__elds__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__1_1, (MR_Integer) 1)));
#line 139 "elds.m"
                    MR_Word erl_backend__elds__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__1_1, (MR_Integer) 2)));
#line 139 "elds.m"
                    MR_Word erl_backend__elds__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__1_1, (MR_Integer) 3)));
#line 139 "elds.m"
                    MR_Word erl_backend__elds__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__1_1, (MR_Integer) 4)));
#line 139 "elds.m"
                    MR_Word erl_backend__elds__V_37_37;
#line 139 "elds.m"
                    MR_Word erl_backend__elds__V_38_38;
#line 139 "elds.m"
                    MR_Word erl_backend__elds__V_39_39;
#line 139 "elds.m"
                    MR_Word erl_backend__elds__V_40_40;

#line 139 "elds.m"
                    erl_backend__elds__succeeded = ((((MR_tag((MR_Word) erl_backend__elds__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 139 "elds.m"
                    if (erl_backend__elds__succeeded)
#line 139 "elds.m"
                      {
#line 139 "elds.m"
                        erl_backend__elds__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 1)));
#line 139 "elds.m"
                        erl_backend__elds__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 2)));
#line 139 "elds.m"
                        erl_backend__elds__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 3)));
#line 139 "elds.m"
                        erl_backend__elds__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 4)));
#line 9080 "erl_backend.elds.c"
                        {
#line 9082 "erl_backend.elds.c"
                          erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_expr_0_0(erl_backend__elds__V_33_33, erl_backend__elds__V_37_37);
                        }
#line 139 "elds.m"
                        if (erl_backend__elds__succeeded)
#line 139 "elds.m"
                          {
#line 9089 "erl_backend.elds.c"
                            erl_backend__elds__TypeInfo_60_60 = (MR_Word) &erl_backend__elds_scalar_common_1[11];
#line 9091 "erl_backend.elds.c"
                            {
#line 9093 "erl_backend.elds.c"
                              erl_backend__elds__succeeded = mercury__builtin__unify_2_p_0(erl_backend__elds__TypeInfo_60_60, ((MR_Box) (erl_backend__elds__V_34_34)), ((MR_Box) (erl_backend__elds__V_38_38)));
                            }
#line 139 "elds.m"
                            if (erl_backend__elds__succeeded)
#line 139 "elds.m"
                              {
#line 9100 "erl_backend.elds.c"
                                erl_backend__elds__TypeInfo_61_61 = (MR_Word) &erl_backend__elds_scalar_common_1[12];
#line 9102 "erl_backend.elds.c"
                                {
#line 9104 "erl_backend.elds.c"
                                  erl_backend__elds__succeeded = mercury__builtin__unify_2_p_0(erl_backend__elds__TypeInfo_61_61, ((MR_Box) (erl_backend__elds__V_35_35)), ((MR_Box) (erl_backend__elds__V_39_39)));
                                }
#line 139 "elds.m"
                                if (erl_backend__elds__succeeded)
#line 139 "elds.m"
                                  {
#line 9111 "erl_backend.elds.c"
                                    erl_backend__elds__TypeInfo_62_62 = (MR_Word) &erl_backend__elds_scalar_common_1[13];
#line 9113 "erl_backend.elds.c"
                                    {
#line 9115 "erl_backend.elds.c"
                                      erl_backend__elds__succeeded = mercury__builtin__unify_2_p_0(erl_backend__elds__TypeInfo_62_62, ((MR_Box) (erl_backend__elds__V_36_36)), ((MR_Box) (erl_backend__elds__V_40_40)));
                                    }
#line 139 "elds.m"
                                  }
#line 139 "elds.m"
                              }
#line 139 "elds.m"
                          }
#line 139 "elds.m"
                      }
#line 139 "elds.m"
                  }
#line 139 "elds.m"
                  break;
#line 139 "elds.m"
                case (MR_Integer) 7:
#line 139 "elds.m"
                  {
#line 139 "elds.m"
                    MR_Word erl_backend__elds__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__1_1, (MR_Integer) 1)));
#line 139 "elds.m"
                    MR_Word erl_backend__elds__V_42_42;

#line 139 "elds.m"
                    erl_backend__elds__succeeded = ((((MR_tag((MR_Word) erl_backend__elds__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 7)));
#line 139 "elds.m"
                    if (erl_backend__elds__succeeded)
#line 139 "elds.m"
                      {
#line 139 "elds.m"
                        erl_backend__elds__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 1)));
#line 9147 "erl_backend.elds.c"
                        /* direct tailcall eliminated */
#line 9149 "erl_backend.elds.c"
                        {
#line 9151 "erl_backend.elds.c"
                          MR_Word erl_backend__elds__HeadVar__1__tmp_copy_1 = erl_backend__elds__V_41_41;
#line 9153 "erl_backend.elds.c"
                          MR_Word erl_backend__elds__HeadVar__2__tmp_copy_2 = erl_backend__elds__V_42_42;

#line 9156 "erl_backend.elds.c"
                          erl_backend__elds__HeadVar__2_2 = erl_backend__elds__HeadVar__2__tmp_copy_2;
#line 9158 "erl_backend.elds.c"
                          erl_backend__elds__HeadVar__1_1 = erl_backend__elds__HeadVar__1__tmp_copy_1;
#line 9160 "erl_backend.elds.c"
                        }
#line 9162 "erl_backend.elds.c"
                        continue;
#line 139 "elds.m"
                      }
#line 139 "elds.m"
                  }
#line 139 "elds.m"
                  break;
#line 139 "elds.m"
                case (MR_Integer) 8:
#line 139 "elds.m"
                  {
#line 139 "elds.m"
                    MR_String erl_backend__elds__V_43_43 = ((MR_String) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__1_1, (MR_Integer) 1)));
#line 139 "elds.m"
                    MR_Word erl_backend__elds__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__1_1, (MR_Integer) 2)));
#line 139 "elds.m"
                    MR_String erl_backend__elds__V_45_45;
#line 139 "elds.m"
                    MR_Word erl_backend__elds__V_46_46;

#line 139 "elds.m"
                    erl_backend__elds__succeeded = ((((MR_tag((MR_Word) erl_backend__elds__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 8)));
#line 139 "elds.m"
                    if (erl_backend__elds__succeeded)
#line 139 "elds.m"
                      {
#line 139 "elds.m"
                        erl_backend__elds__V_45_45 = ((MR_String) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 1)));
#line 139 "elds.m"
                        erl_backend__elds__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 2)));
#line 9193 "erl_backend.elds.c"
                        erl_backend__elds__succeeded = (strcmp(erl_backend__elds__V_43_43, erl_backend__elds__V_45_45) == 0);
#line 139 "elds.m"
                        if (erl_backend__elds__succeeded)
#line 9197 "erl_backend.elds.c"
                          {
#line 9199 "erl_backend.elds.c"
                            erl_backend__elds__succeeded = mercury__term____Unify____context_0_0(erl_backend__elds__V_44_44, erl_backend__elds__V_46_46);
                          }
#line 139 "elds.m"
                      }
#line 139 "elds.m"
                  }
#line 139 "elds.m"
                  break;
#line 139 "elds.m"
                case (MR_Integer) 9:
#line 139 "elds.m"
                  {
#line 139 "elds.m"
                    MR_Word erl_backend__elds__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__1_1, (MR_Integer) 1)));
#line 139 "elds.m"
                    MR_Word erl_backend__elds__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__1_1, (MR_Integer) 2)));
#line 139 "elds.m"
                    MR_Word erl_backend__elds__V_49_49;
#line 139 "elds.m"
                    MR_Word erl_backend__elds__V_50_50;

#line 139 "elds.m"
                    erl_backend__elds__succeeded = ((((MR_tag((MR_Word) erl_backend__elds__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 9)));
#line 139 "elds.m"
                    if (erl_backend__elds__succeeded)
#line 139 "elds.m"
                      {
#line 139 "elds.m"
                        erl_backend__elds__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 1)));
#line 139 "elds.m"
                        erl_backend__elds__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 2)));
#line 9231 "erl_backend.elds.c"
                        {
#line 9233 "erl_backend.elds.c"
                          erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_expr_0_0(erl_backend__elds__V_47_47, erl_backend__elds__V_49_49);
                        }
#line 139 "elds.m"
                        if (erl_backend__elds__succeeded)
#line 9238 "erl_backend.elds.c"
                          {
#line 9240 "erl_backend.elds.c"
                            /* direct tailcall eliminated */
#line 9242 "erl_backend.elds.c"
                            {
#line 9244 "erl_backend.elds.c"
                              MR_Word erl_backend__elds__HeadVar__1__tmp_copy_1 = erl_backend__elds__V_48_48;
#line 9246 "erl_backend.elds.c"
                              MR_Word erl_backend__elds__HeadVar__2__tmp_copy_2 = erl_backend__elds__V_50_50;

#line 9249 "erl_backend.elds.c"
                              erl_backend__elds__HeadVar__2_2 = erl_backend__elds__HeadVar__2__tmp_copy_2;
#line 9251 "erl_backend.elds.c"
                              erl_backend__elds__HeadVar__1_1 = erl_backend__elds__HeadVar__1__tmp_copy_1;
#line 9253 "erl_backend.elds.c"
                            }
#line 9255 "erl_backend.elds.c"
                            continue;
#line 9257 "erl_backend.elds.c"
                          }
#line 139 "elds.m"
                      }
#line 139 "elds.m"
                  }
#line 139 "elds.m"
                  break;
#line 139 "elds.m"
                case (MR_Integer) 10:
#line 139 "elds.m"
                  {
#line 139 "elds.m"
                    MR_Word erl_backend__elds__TypeInfo_59_59;
#line 139 "elds.m"
                    MR_Word erl_backend__elds__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__1_1, (MR_Integer) 1)));
#line 139 "elds.m"
                    MR_Word erl_backend__elds__V_52_52;

#line 139 "elds.m"
                    erl_backend__elds__succeeded = ((((MR_tag((MR_Word) erl_backend__elds__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 10)));
#line 139 "elds.m"
                    if (erl_backend__elds__succeeded)
#line 139 "elds.m"
                      {
#line 139 "elds.m"
                        erl_backend__elds__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 1)));
#line 9284 "erl_backend.elds.c"
                        erl_backend__elds__TypeInfo_59_59 = (MR_Word) &erl_backend__elds_scalar_common_1[11];
#line 9286 "erl_backend.elds.c"
                        {
#line 9288 "erl_backend.elds.c"
                          erl_backend__elds__succeeded = mercury__builtin__unify_2_p_0(erl_backend__elds__TypeInfo_59_59, ((MR_Box) (erl_backend__elds__V_51_51)), ((MR_Box) (erl_backend__elds__V_52_52)));
                        }
#line 139 "elds.m"
                      }
#line 139 "elds.m"
                  }
#line 139 "elds.m"
                  break;
#line 139 "elds.m"
              }
#line 139 "elds.m"
              break;
#line 139 "elds.m"
          }
#line 139 "elds.m"
        return erl_backend__elds__succeeded;
#line 139 "elds.m"
      }
#line 139 "elds.m"
      break;
#line 139 "elds.m"
    }
#line 139 "elds.m"
}

#line 76 "elds.m"
void MR_CALL 
erl_backend__elds____Compare____elds_defn_0_0(
#line 76 "elds.m"
  MR_Word * erl_backend__elds__HeadVar__1_1,
#line 76 "elds.m"
  MR_Word erl_backend__elds__HeadVar__2_2,
#line 76 "elds.m"
  MR_Word erl_backend__elds__HeadVar__3_3)
#line 76 "elds.m"
{
#line 76 "elds.m"
  {
#line 76 "elds.m"
    MR_bool erl_backend__elds__succeeded;
#line 76 "elds.m"
    MR_Integer erl_backend__elds__CastX_15 = (MR_Integer) erl_backend__elds__HeadVar__2_2;
#line 76 "elds.m"
    MR_Integer erl_backend__elds__CastY_16 = (MR_Integer) erl_backend__elds__HeadVar__3_3;

#line 76 "elds.m"
    erl_backend__elds__succeeded = (erl_backend__elds__CastX_15 == erl_backend__elds__CastY_16);
#line 76 "elds.m"
    if (erl_backend__elds__succeeded)
#line 9338 "erl_backend.elds.c"
      *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 0;
#line 76 "elds.m"
    else
#line 76 "elds.m"
      {
#line 76 "elds.m"
        MR_Word erl_backend__elds__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)));
#line 76 "elds.m"
        MR_Word erl_backend__elds__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__2_2, (MR_Integer) 1)));
#line 76 "elds.m"
        MR_Word erl_backend__elds__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__2_2, (MR_Integer) 2)));
#line 76 "elds.m"
        MR_Word erl_backend__elds__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__2_2, (MR_Integer) 3)));
#line 76 "elds.m"
        MR_Word erl_backend__elds__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)));
#line 76 "elds.m"
        MR_Word erl_backend__elds__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__3_3, (MR_Integer) 1)));
#line 76 "elds.m"
        MR_Word erl_backend__elds__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__3_3, (MR_Integer) 2)));
#line 76 "elds.m"
        MR_Word erl_backend__elds__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__3_3, (MR_Integer) 3)));
#line 76 "elds.m"
        MR_Word erl_backend__elds__V_12_12;

#line 76 "elds.m"
        {
#line 76 "elds.m"
          hlds__hlds_pred____Compare____pred_proc_id_0_0(&erl_backend__elds__V_12_12, erl_backend__elds__V_4_4, erl_backend__elds__V_8_8);
        }
#line 9368 "erl_backend.elds.c"
        erl_backend__elds__succeeded = (erl_backend__elds__V_12_12 == (MR_Integer) 0);
#line 76 "elds.m"
        erl_backend__elds__succeeded = !(erl_backend__elds__succeeded);
#line 76 "elds.m"
        if (erl_backend__elds__succeeded)
#line 76 "elds.m"
          *erl_backend__elds__HeadVar__1_1 = erl_backend__elds__V_12_12;
#line 76 "elds.m"
        else
#line 76 "elds.m"
          {
#line 76 "elds.m"
            MR_Word erl_backend__elds__V_13_13;

#line 76 "elds.m"
            {
#line 76 "elds.m"
              mercury__builtin__compare_3_p_0((MR_Word) &erl_backend__elds_scalar_common_1[9], &erl_backend__elds__V_13_13, ((MR_Box) (erl_backend__elds__V_5_5)), ((MR_Box) (erl_backend__elds__V_9_9)));
            }
#line 9388 "erl_backend.elds.c"
            erl_backend__elds__succeeded = (erl_backend__elds__V_13_13 == (MR_Integer) 0);
#line 76 "elds.m"
            erl_backend__elds__succeeded = !(erl_backend__elds__succeeded);
#line 76 "elds.m"
            if (erl_backend__elds__succeeded)
#line 76 "elds.m"
              *erl_backend__elds__HeadVar__1_1 = erl_backend__elds__V_13_13;
#line 76 "elds.m"
            else
#line 76 "elds.m"
              {
#line 76 "elds.m"
                MR_Word erl_backend__elds__V_14_14;

#line 76 "elds.m"
                {
#line 76 "elds.m"
                  erl_backend__elds____Compare____elds_body_0_0(&erl_backend__elds__V_14_14, erl_backend__elds__V_6_6, erl_backend__elds__V_10_10);
                }
#line 9408 "erl_backend.elds.c"
                erl_backend__elds__succeeded = (erl_backend__elds__V_14_14 == (MR_Integer) 0);
#line 76 "elds.m"
                erl_backend__elds__succeeded = !(erl_backend__elds__succeeded);
#line 76 "elds.m"
                if (erl_backend__elds__succeeded)
#line 76 "elds.m"
                  *erl_backend__elds__HeadVar__1_1 = erl_backend__elds__V_14_14;
#line 76 "elds.m"
                else
#line 76 "elds.m"
                  {
#line 76 "elds.m"
                    {
#line 76 "elds.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &erl_backend__elds_scalar_common_1[10], erl_backend__elds__HeadVar__1_1, ((MR_Box) (erl_backend__elds__V_7_7)), ((MR_Box) (erl_backend__elds__V_11_11)));
                    }
#line 76 "elds.m"
                  }
#line 76 "elds.m"
              }
#line 76 "elds.m"
          }
#line 76 "elds.m"
      }
#line 76 "elds.m"
  }
#line 76 "elds.m"
}

#line 76 "elds.m"
MR_bool MR_CALL 
erl_backend__elds____Unify____elds_defn_0_0(
#line 76 "elds.m"
  MR_Word erl_backend__elds__HeadVar__1_1,
#line 76 "elds.m"
  MR_Word erl_backend__elds__HeadVar__2_2)
#line 76 "elds.m"
{
#line 76 "elds.m"
  {
#line 76 "elds.m"
    MR_bool erl_backend__elds__succeeded;
#line 76 "elds.m"
    MR_Integer erl_backend__elds__CastX_11 = (MR_Integer) erl_backend__elds__HeadVar__1_1;
#line 76 "elds.m"
    MR_Integer erl_backend__elds__CastY_12 = (MR_Integer) erl_backend__elds__HeadVar__2_2;

#line 76 "elds.m"
    erl_backend__elds__succeeded = (erl_backend__elds__CastX_11 == erl_backend__elds__CastY_12);
#line 76 "elds.m"
    if (erl_backend__elds__succeeded)
#line 76 "elds.m"
      erl_backend__elds__succeeded = MR_TRUE;
#line 76 "elds.m"
    else
#line 76 "elds.m"
      {
#line 76 "elds.m"
        MR_Word erl_backend__elds__TypeInfo_14_14;
#line 76 "elds.m"
        MR_Word erl_backend__elds__TypeInfo_15_15;
#line 76 "elds.m"
        MR_Word erl_backend__elds__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__1_1, (MR_Integer) 0)));
#line 76 "elds.m"
        MR_Word erl_backend__elds__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__1_1, (MR_Integer) 1)));
#line 76 "elds.m"
        MR_Word erl_backend__elds__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__1_1, (MR_Integer) 2)));
#line 76 "elds.m"
        MR_Word erl_backend__elds__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__1_1, (MR_Integer) 3)));
#line 76 "elds.m"
        MR_Word erl_backend__elds__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)));
#line 76 "elds.m"
        MR_Word erl_backend__elds__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__2_2, (MR_Integer) 1)));
#line 76 "elds.m"
        MR_Word erl_backend__elds__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__2_2, (MR_Integer) 2)));
#line 76 "elds.m"
        MR_Word erl_backend__elds__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__2_2, (MR_Integer) 3)));

#line 9487 "erl_backend.elds.c"
        {
#line 9489 "erl_backend.elds.c"
          erl_backend__elds__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(erl_backend__elds__V_3_3, erl_backend__elds__V_7_7);
        }
#line 76 "elds.m"
        if (erl_backend__elds__succeeded)
#line 76 "elds.m"
          {
#line 9496 "erl_backend.elds.c"
            erl_backend__elds__TypeInfo_14_14 = (MR_Word) &erl_backend__elds_scalar_common_1[9];
#line 9498 "erl_backend.elds.c"
            {
#line 9500 "erl_backend.elds.c"
              erl_backend__elds__succeeded = mercury__builtin__unify_2_p_0(erl_backend__elds__TypeInfo_14_14, ((MR_Box) (erl_backend__elds__V_4_4)), ((MR_Box) (erl_backend__elds__V_8_8)));
            }
#line 76 "elds.m"
            if (erl_backend__elds__succeeded)
#line 76 "elds.m"
              {
#line 9507 "erl_backend.elds.c"
                {
#line 9509 "erl_backend.elds.c"
                  erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_body_0_0(erl_backend__elds__V_5_5, erl_backend__elds__V_9_9);
                }
#line 76 "elds.m"
                if (erl_backend__elds__succeeded)
#line 76 "elds.m"
                  {
#line 9516 "erl_backend.elds.c"
                    erl_backend__elds__TypeInfo_15_15 = (MR_Word) &erl_backend__elds_scalar_common_1[10];
#line 9518 "erl_backend.elds.c"
                    {
#line 9520 "erl_backend.elds.c"
                      erl_backend__elds__succeeded = mercury__builtin__unify_2_p_0(erl_backend__elds__TypeInfo_15_15, ((MR_Box) (erl_backend__elds__V_6_6)), ((MR_Box) (erl_backend__elds__V_10_10)));
                    }
#line 76 "elds.m"
                  }
#line 76 "elds.m"
              }
#line 76 "elds.m"
          }
#line 76 "elds.m"
      }
#line 76 "elds.m"
    return erl_backend__elds__succeeded;
#line 76 "elds.m"
  }
#line 76 "elds.m"
}

#line 131 "elds.m"
void MR_CALL 
erl_backend__elds____Compare____elds_clause_0_0(
#line 131 "elds.m"
  MR_Word * erl_backend__elds__HeadVar__1_1,
#line 131 "elds.m"
  MR_Word erl_backend__elds__HeadVar__2_2,
#line 131 "elds.m"
  MR_Word erl_backend__elds__HeadVar__3_3)
#line 131 "elds.m"
{
#line 131 "elds.m"
  {
#line 131 "elds.m"
    MR_bool erl_backend__elds__succeeded;
#line 131 "elds.m"
    MR_Integer erl_backend__elds__CastX_9 = (MR_Integer) erl_backend__elds__HeadVar__2_2;
#line 131 "elds.m"
    MR_Integer erl_backend__elds__CastY_10 = (MR_Integer) erl_backend__elds__HeadVar__3_3;

#line 131 "elds.m"
    erl_backend__elds__succeeded = (erl_backend__elds__CastX_9 == erl_backend__elds__CastY_10);
#line 131 "elds.m"
    if (erl_backend__elds__succeeded)
#line 9562 "erl_backend.elds.c"
      *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 0;
#line 131 "elds.m"
    else
#line 131 "elds.m"
      {
#line 131 "elds.m"
        MR_Word erl_backend__elds__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)));
#line 131 "elds.m"
        MR_Word erl_backend__elds__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__2_2, (MR_Integer) 1)));
#line 131 "elds.m"
        MR_Word erl_backend__elds__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)));
#line 131 "elds.m"
        MR_Word erl_backend__elds__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__3_3, (MR_Integer) 1)));
#line 131 "elds.m"
        MR_Word erl_backend__elds__V_8_8;

#line 131 "elds.m"
        {
#line 131 "elds.m"
          mercury__builtin__compare_3_p_0((MR_Word) &erl_backend__elds_scalar_common_1[8], &erl_backend__elds__V_8_8, ((MR_Box) (erl_backend__elds__V_4_4)), ((MR_Box) (erl_backend__elds__V_6_6)));
        }
#line 9584 "erl_backend.elds.c"
        erl_backend__elds__succeeded = (erl_backend__elds__V_8_8 == (MR_Integer) 0);
#line 131 "elds.m"
        erl_backend__elds__succeeded = !(erl_backend__elds__succeeded);
#line 131 "elds.m"
        if (erl_backend__elds__succeeded)
#line 131 "elds.m"
          *erl_backend__elds__HeadVar__1_1 = erl_backend__elds__V_8_8;
#line 131 "elds.m"
        else
#line 131 "elds.m"
          {
#line 131 "elds.m"
            erl_backend__elds____Compare____elds_expr_0_0(erl_backend__elds__HeadVar__1_1, erl_backend__elds__V_5_5, erl_backend__elds__V_7_7);
          }
#line 131 "elds.m"
      }
#line 131 "elds.m"
  }
#line 131 "elds.m"
}

#line 131 "elds.m"
MR_bool MR_CALL 
erl_backend__elds____Unify____elds_clause_0_0(
#line 131 "elds.m"
  MR_Word erl_backend__elds__HeadVar__1_1,
#line 131 "elds.m"
  MR_Word erl_backend__elds__HeadVar__2_2)
#line 131 "elds.m"
{
#line 131 "elds.m"
  {
#line 131 "elds.m"
    MR_bool erl_backend__elds__succeeded;
#line 131 "elds.m"
    MR_Integer erl_backend__elds__CastX_7 = (MR_Integer) erl_backend__elds__HeadVar__1_1;
#line 131 "elds.m"
    MR_Integer erl_backend__elds__CastY_8 = (MR_Integer) erl_backend__elds__HeadVar__2_2;

#line 131 "elds.m"
    erl_backend__elds__succeeded = (erl_backend__elds__CastX_7 == erl_backend__elds__CastY_8);
#line 131 "elds.m"
    if (erl_backend__elds__succeeded)
#line 131 "elds.m"
      erl_backend__elds__succeeded = MR_TRUE;
#line 131 "elds.m"
    else
#line 131 "elds.m"
      {
#line 131 "elds.m"
        MR_Word erl_backend__elds__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__1_1, (MR_Integer) 0)));
#line 131 "elds.m"
        MR_Word erl_backend__elds__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__1_1, (MR_Integer) 1)));
#line 131 "elds.m"
        MR_Word erl_backend__elds__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)));
#line 131 "elds.m"
        MR_Word erl_backend__elds__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__2_2, (MR_Integer) 1)));

#line 9643 "erl_backend.elds.c"
        {
#line 9645 "erl_backend.elds.c"
          erl_backend__elds__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &erl_backend__elds_scalar_common_1[8], ((MR_Box) (erl_backend__elds__V_3_3)), ((MR_Box) (erl_backend__elds__V_5_5)));
        }
#line 131 "elds.m"
        if (erl_backend__elds__succeeded)
#line 9650 "erl_backend.elds.c"
          {
#line 9652 "erl_backend.elds.c"
            erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_expr_0_0(erl_backend__elds__V_4_4, erl_backend__elds__V_6_6);
          }
#line 131 "elds.m"
      }
#line 131 "elds.m"
    return erl_backend__elds__succeeded;
#line 131 "elds.m"
  }
#line 131 "elds.m"
}

#line 261 "elds.m"
void MR_CALL 
erl_backend__elds____Compare____elds_catch_0_0(
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
    MR_Integer erl_backend__elds__CastX_12 = (MR_Integer) erl_backend__elds__HeadVar__2_2;
#line 261 "elds.m"
    MR_Integer erl_backend__elds__CastY_13 = (MR_Integer) erl_backend__elds__HeadVar__3_3;

#line 261 "elds.m"
    erl_backend__elds__succeeded = (erl_backend__elds__CastX_12 == erl_backend__elds__CastY_13);
#line 261 "elds.m"
    if (erl_backend__elds__succeeded)
#line 9688 "erl_backend.elds.c"
      *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 0;
#line 261 "elds.m"
    else
#line 261 "elds.m"
      {
#line 261 "elds.m"
        MR_Word erl_backend__elds__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)));
#line 261 "elds.m"
        MR_Word erl_backend__elds__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__2_2, (MR_Integer) 1)));
#line 261 "elds.m"
        MR_Word erl_backend__elds__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__2_2, (MR_Integer) 2)));
#line 261 "elds.m"
        MR_Word erl_backend__elds__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)));
#line 261 "elds.m"
        MR_Word erl_backend__elds__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__3_3, (MR_Integer) 1)));
#line 261 "elds.m"
        MR_Word erl_backend__elds__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__3_3, (MR_Integer) 2)));
#line 261 "elds.m"
        MR_Word erl_backend__elds__V_10_10;

#line 261 "elds.m"
        {
#line 261 "elds.m"
          erl_backend__elds____Compare____elds_term_0_0(&erl_backend__elds__V_10_10, erl_backend__elds__V_4_4, erl_backend__elds__V_7_7);
        }
#line 9714 "erl_backend.elds.c"
        erl_backend__elds__succeeded = (erl_backend__elds__V_10_10 == (MR_Integer) 0);
#line 261 "elds.m"
        erl_backend__elds__succeeded = !(erl_backend__elds__succeeded);
#line 261 "elds.m"
        if (erl_backend__elds__succeeded)
#line 261 "elds.m"
          *erl_backend__elds__HeadVar__1_1 = erl_backend__elds__V_10_10;
#line 261 "elds.m"
        else
#line 261 "elds.m"
          {
#line 261 "elds.m"
            MR_Word erl_backend__elds__V_11_11;

#line 261 "elds.m"
            {
#line 261 "elds.m"
              erl_backend__elds____Compare____elds_term_0_0(&erl_backend__elds__V_11_11, erl_backend__elds__V_5_5, erl_backend__elds__V_8_8);
            }
#line 9734 "erl_backend.elds.c"
            erl_backend__elds__succeeded = (erl_backend__elds__V_11_11 == (MR_Integer) 0);
#line 261 "elds.m"
            erl_backend__elds__succeeded = !(erl_backend__elds__succeeded);
#line 261 "elds.m"
            if (erl_backend__elds__succeeded)
#line 261 "elds.m"
              *erl_backend__elds__HeadVar__1_1 = erl_backend__elds__V_11_11;
#line 261 "elds.m"
            else
#line 261 "elds.m"
              {
#line 261 "elds.m"
                erl_backend__elds____Compare____elds_expr_0_0(erl_backend__elds__HeadVar__1_1, erl_backend__elds__V_6_6, erl_backend__elds__V_9_9);
              }
#line 261 "elds.m"
          }
#line 261 "elds.m"
      }
#line 261 "elds.m"
  }
#line 261 "elds.m"
}

#line 261 "elds.m"
MR_bool MR_CALL 
erl_backend__elds____Unify____elds_catch_0_0(
#line 261 "elds.m"
  MR_Word erl_backend__elds__HeadVar__1_1,
#line 261 "elds.m"
  MR_Word erl_backend__elds__HeadVar__2_2)
#line 261 "elds.m"
{
#line 261 "elds.m"
  {
#line 261 "elds.m"
    MR_bool erl_backend__elds__succeeded;
#line 261 "elds.m"
    MR_Integer erl_backend__elds__CastX_9 = (MR_Integer) erl_backend__elds__HeadVar__1_1;
#line 261 "elds.m"
    MR_Integer erl_backend__elds__CastY_10 = (MR_Integer) erl_backend__elds__HeadVar__2_2;

#line 261 "elds.m"
    erl_backend__elds__succeeded = (erl_backend__elds__CastX_9 == erl_backend__elds__CastY_10);
#line 261 "elds.m"
    if (erl_backend__elds__succeeded)
#line 261 "elds.m"
      erl_backend__elds__succeeded = MR_TRUE;
#line 261 "elds.m"
    else
#line 261 "elds.m"
      {
#line 261 "elds.m"
        MR_Word erl_backend__elds__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__1_1, (MR_Integer) 0)));
#line 261 "elds.m"
        MR_Word erl_backend__elds__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__1_1, (MR_Integer) 1)));
#line 261 "elds.m"
        MR_Word erl_backend__elds__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__1_1, (MR_Integer) 2)));
#line 261 "elds.m"
        MR_Word erl_backend__elds__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)));
#line 261 "elds.m"
        MR_Word erl_backend__elds__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__2_2, (MR_Integer) 1)));
#line 261 "elds.m"
        MR_Word erl_backend__elds__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__2_2, (MR_Integer) 2)));

#line 9799 "erl_backend.elds.c"
        {
#line 9801 "erl_backend.elds.c"
          erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_term_0_0(erl_backend__elds__V_3_3, erl_backend__elds__V_6_6);
        }
#line 261 "elds.m"
        if (erl_backend__elds__succeeded)
#line 261 "elds.m"
          {
#line 9808 "erl_backend.elds.c"
            {
#line 9810 "erl_backend.elds.c"
              erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_term_0_0(erl_backend__elds__V_4_4, erl_backend__elds__V_7_7);
            }
#line 261 "elds.m"
            if (erl_backend__elds__succeeded)
#line 9815 "erl_backend.elds.c"
              {
#line 9817 "erl_backend.elds.c"
                erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_expr_0_0(erl_backend__elds__V_5_5, erl_backend__elds__V_8_8);
              }
#line 261 "elds.m"
          }
#line 261 "elds.m"
      }
#line 261 "elds.m"
    return erl_backend__elds__succeeded;
#line 261 "elds.m"
  }
#line 261 "elds.m"
}

#line 258 "elds.m"
void MR_CALL 
erl_backend__elds____Compare____elds_case_0_0(
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
    MR_Integer erl_backend__elds__CastX_9 = (MR_Integer) erl_backend__elds__HeadVar__2_2;
#line 258 "elds.m"
    MR_Integer erl_backend__elds__CastY_10 = (MR_Integer) erl_backend__elds__HeadVar__3_3;

#line 258 "elds.m"
    erl_backend__elds__succeeded = (erl_backend__elds__CastX_9 == erl_backend__elds__CastY_10);
#line 258 "elds.m"
    if (erl_backend__elds__succeeded)
#line 9855 "erl_backend.elds.c"
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
        MR_Word erl_backend__elds__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)));
#line 258 "elds.m"
        MR_Word erl_backend__elds__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__3_3, (MR_Integer) 1)));
#line 258 "elds.m"
        MR_Word erl_backend__elds__V_8_8;

#line 258 "elds.m"
        {
#line 258 "elds.m"
          erl_backend__elds____Compare____elds_term_0_0(&erl_backend__elds__V_8_8, erl_backend__elds__V_4_4, erl_backend__elds__V_6_6);
        }
#line 9877 "erl_backend.elds.c"
        erl_backend__elds__succeeded = (erl_backend__elds__V_8_8 == (MR_Integer) 0);
#line 258 "elds.m"
        erl_backend__elds__succeeded = !(erl_backend__elds__succeeded);
#line 258 "elds.m"
        if (erl_backend__elds__succeeded)
#line 258 "elds.m"
          *erl_backend__elds__HeadVar__1_1 = erl_backend__elds__V_8_8;
#line 258 "elds.m"
        else
#line 258 "elds.m"
          {
#line 258 "elds.m"
            erl_backend__elds____Compare____elds_expr_0_0(erl_backend__elds__HeadVar__1_1, erl_backend__elds__V_5_5, erl_backend__elds__V_7_7);
          }
#line 258 "elds.m"
      }
#line 258 "elds.m"
  }
#line 258 "elds.m"
}

#line 258 "elds.m"
MR_bool MR_CALL 
erl_backend__elds____Unify____elds_case_0_0(
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
    MR_Integer erl_backend__elds__CastX_7 = (MR_Integer) erl_backend__elds__HeadVar__1_1;
#line 258 "elds.m"
    MR_Integer erl_backend__elds__CastY_8 = (MR_Integer) erl_backend__elds__HeadVar__2_2;

#line 258 "elds.m"
    erl_backend__elds__succeeded = (erl_backend__elds__CastX_7 == erl_backend__elds__CastY_8);
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
        MR_Word erl_backend__elds__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)));
#line 258 "elds.m"
        MR_Word erl_backend__elds__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__2_2, (MR_Integer) 1)));

#line 9936 "erl_backend.elds.c"
        {
#line 9938 "erl_backend.elds.c"
          erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_term_0_0(erl_backend__elds__V_3_3, erl_backend__elds__V_5_5);
        }
#line 258 "elds.m"
        if (erl_backend__elds__succeeded)
#line 9943 "erl_backend.elds.c"
          {
#line 9945 "erl_backend.elds.c"
            erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_expr_0_0(erl_backend__elds__V_4_4, erl_backend__elds__V_6_6);
          }
#line 258 "elds.m"
      }
#line 258 "elds.m"
    return erl_backend__elds__succeeded;
#line 258 "elds.m"
  }
#line 258 "elds.m"
}

#line 253 "elds.m"
void MR_CALL 
erl_backend__elds____Compare____elds_call_target_0_0(
#line 253 "elds.m"
  MR_Word * erl_backend__elds__HeadVar__1_1,
#line 253 "elds.m"
  MR_Word erl_backend__elds__HeadVar__2_2,
#line 253 "elds.m"
  MR_Word erl_backend__elds__HeadVar__3_3)
#line 253 "elds.m"
{
#line 253 "elds.m"
  {
#line 253 "elds.m"
    MR_bool erl_backend__elds__succeeded;
#line 253 "elds.m"
    MR_Integer erl_backend__elds__CastX_22 = (MR_Integer) erl_backend__elds__HeadVar__2_2;
#line 253 "elds.m"
    MR_Integer erl_backend__elds__CastY_23 = (MR_Integer) erl_backend__elds__HeadVar__3_3;

#line 253 "elds.m"
    erl_backend__elds__succeeded = (erl_backend__elds__CastX_22 == erl_backend__elds__CastY_23);
#line 253 "elds.m"
    if (erl_backend__elds__succeeded)
#line 9981 "erl_backend.elds.c"
      *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 0;
#line 253 "elds.m"
    else
#line 253 "elds.m"
#line 253 "elds.m"
      switch (MR_tag((MR_Word) erl_backend__elds__HeadVar__2_2)) {
#line 253 "elds.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 253 "elds.m"
        case (MR_Integer) 0:
#line 253 "elds.m"
          {
#line 253 "elds.m"
            MR_Word erl_backend__elds__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)));

#line 253 "elds.m"
#line 253 "elds.m"
            switch (MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) {
#line 253 "elds.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 253 "elds.m"
              case (MR_Integer) 0:
#line 253 "elds.m"
                {
#line 253 "elds.m"
                  MR_Word erl_backend__elds__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)));

#line 253 "elds.m"
                  {
#line 253 "elds.m"
                    hlds__hlds_pred____Compare____pred_proc_id_0_0(erl_backend__elds__HeadVar__1_1, erl_backend__elds__V_29_29, erl_backend__elds__V_5_5);
                  }
#line 253 "elds.m"
                }
#line 253 "elds.m"
                break;
#line 253 "elds.m"
              case (MR_Integer) 1:
#line 10020 "erl_backend.elds.c"
                *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 253 "elds.m"
                break;
#line 253 "elds.m"
              case (MR_Integer) 2:
#line 10026 "erl_backend.elds.c"
                *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 253 "elds.m"
                break;
#line 253 "elds.m"
            }
#line 253 "elds.m"
          }
#line 253 "elds.m"
          break;
#line 253 "elds.m"
        case (MR_Integer) 1:
#line 253 "elds.m"
          {
#line 253 "elds.m"
            MR_Word erl_backend__elds__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)));

#line 253 "elds.m"
#line 253 "elds.m"
            switch (MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) {
#line 253 "elds.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 253 "elds.m"
              case (MR_Integer) 0:
#line 10050 "erl_backend.elds.c"
                *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 253 "elds.m"
                break;
#line 253 "elds.m"
              case (MR_Integer) 1:
#line 253 "elds.m"
                {
#line 253 "elds.m"
                  MR_Word erl_backend__elds__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)));

#line 253 "elds.m"
                  {
#line 253 "elds.m"
                    erl_backend__elds____Compare____elds_expr_0_0(erl_backend__elds__HeadVar__1_1, erl_backend__elds__V_28_28, erl_backend__elds__V_13_13);
                  }
#line 253 "elds.m"
                }
#line 253 "elds.m"
                break;
#line 253 "elds.m"
              case (MR_Integer) 2:
#line 10072 "erl_backend.elds.c"
                *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 253 "elds.m"
                break;
#line 253 "elds.m"
            }
#line 253 "elds.m"
          }
#line 253 "elds.m"
          break;
#line 253 "elds.m"
        case (MR_Integer) 2:
#line 253 "elds.m"
          {
#line 253 "elds.m"
            MR_String erl_backend__elds__V_27_27 = ((MR_String) (MR_hl_field(MR_mktag(2), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)));

#line 253 "elds.m"
#line 253 "elds.m"
            switch (MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) {
#line 253 "elds.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 253 "elds.m"
              case (MR_Integer) 0:
#line 10096 "erl_backend.elds.c"
                *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 253 "elds.m"
                break;
#line 253 "elds.m"
              case (MR_Integer) 1:
#line 10102 "erl_backend.elds.c"
                *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 253 "elds.m"
                break;
#line 253 "elds.m"
              case (MR_Integer) 2:
#line 253 "elds.m"
                {
#line 253 "elds.m"
                  MR_String erl_backend__elds__V_21_21 = ((MR_String) (MR_hl_field(MR_mktag(2), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)));

#line 253 "elds.m"
                  {
#line 253 "elds.m"
                    mercury__private_builtin__builtin_compare_string_3_p_0(erl_backend__elds__HeadVar__1_1, erl_backend__elds__V_27_27, erl_backend__elds__V_21_21);
                  }
#line 253 "elds.m"
                }
#line 253 "elds.m"
                break;
#line 253 "elds.m"
            }
#line 253 "elds.m"
          }
#line 253 "elds.m"
          break;
#line 253 "elds.m"
      }
#line 253 "elds.m"
  }
#line 253 "elds.m"
}

#line 253 "elds.m"
MR_bool MR_CALL 
erl_backend__elds____Unify____elds_call_target_0_0(
#line 253 "elds.m"
  MR_Word erl_backend__elds__HeadVar__1_1,
#line 253 "elds.m"
  MR_Word erl_backend__elds__HeadVar__2_2)
#line 253 "elds.m"
{
#line 253 "elds.m"
  {
#line 253 "elds.m"
    MR_bool erl_backend__elds__succeeded;
#line 253 "elds.m"
    MR_Integer erl_backend__elds__CastX_9 = (MR_Integer) erl_backend__elds__HeadVar__1_1;
#line 253 "elds.m"
    MR_Integer erl_backend__elds__CastY_10 = (MR_Integer) erl_backend__elds__HeadVar__2_2;

#line 253 "elds.m"
    erl_backend__elds__succeeded = (erl_backend__elds__CastX_9 == erl_backend__elds__CastY_10);
#line 253 "elds.m"
    if (erl_backend__elds__succeeded)
#line 253 "elds.m"
      erl_backend__elds__succeeded = MR_TRUE;
#line 253 "elds.m"
    else
#line 253 "elds.m"
#line 253 "elds.m"
      switch (MR_tag((MR_Word) erl_backend__elds__HeadVar__1_1)) {
#line 253 "elds.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 253 "elds.m"
        case (MR_Integer) 0:
#line 253 "elds.m"
          {
#line 253 "elds.m"
            MR_Word erl_backend__elds__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__1_1, (MR_Integer) 0)));
#line 253 "elds.m"
            MR_Word erl_backend__elds__V_4_4;

#line 253 "elds.m"
            erl_backend__elds__succeeded = ((MR_tag((MR_Word) erl_backend__elds__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 253 "elds.m"
            if (erl_backend__elds__succeeded)
#line 253 "elds.m"
              {
#line 253 "elds.m"
                erl_backend__elds__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)));
#line 10183 "erl_backend.elds.c"
                {
#line 10185 "erl_backend.elds.c"
                  erl_backend__elds__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(erl_backend__elds__V_3_3, erl_backend__elds__V_4_4);
                }
#line 253 "elds.m"
              }
#line 253 "elds.m"
          }
#line 253 "elds.m"
          break;
#line 253 "elds.m"
        case (MR_Integer) 1:
#line 253 "elds.m"
          {
#line 253 "elds.m"
            MR_Word erl_backend__elds__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds__HeadVar__1_1, (MR_Integer) 0)));
#line 253 "elds.m"
            MR_Word erl_backend__elds__V_6_6;

#line 253 "elds.m"
            erl_backend__elds__succeeded = ((MR_tag((MR_Word) erl_backend__elds__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 253 "elds.m"
            if (erl_backend__elds__succeeded)
#line 253 "elds.m"
              {
#line 253 "elds.m"
                erl_backend__elds__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)));
#line 10211 "erl_backend.elds.c"
                {
#line 10213 "erl_backend.elds.c"
                  erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_expr_0_0(erl_backend__elds__V_5_5, erl_backend__elds__V_6_6);
                }
#line 253 "elds.m"
              }
#line 253 "elds.m"
          }
#line 253 "elds.m"
          break;
#line 253 "elds.m"
        case (MR_Integer) 2:
#line 253 "elds.m"
          {
#line 253 "elds.m"
            MR_String erl_backend__elds__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(2), erl_backend__elds__HeadVar__1_1, (MR_Integer) 0)));
#line 253 "elds.m"
            MR_String erl_backend__elds__V_8_8;

#line 253 "elds.m"
            erl_backend__elds__succeeded = ((MR_tag((MR_Word) erl_backend__elds__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 253 "elds.m"
            if (erl_backend__elds__succeeded)
#line 253 "elds.m"
              {
#line 253 "elds.m"
                erl_backend__elds__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(2), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)));
#line 10239 "erl_backend.elds.c"
                erl_backend__elds__succeeded = (strcmp(erl_backend__elds__V_7_7, erl_backend__elds__V_8_8) == 0);
#line 253 "elds.m"
              }
#line 253 "elds.m"
          }
#line 253 "elds.m"
          break;
#line 253 "elds.m"
      }
#line 253 "elds.m"
    return erl_backend__elds__succeeded;
#line 253 "elds.m"
  }
#line 253 "elds.m"
}

#line 86 "elds.m"
void MR_CALL 
erl_backend__elds____Compare____elds_body_0_0(
#line 86 "elds.m"
  MR_Word * erl_backend__elds__HeadVar__1_1,
#line 86 "elds.m"
  MR_Word erl_backend__elds__HeadVar__2_2,
#line 86 "elds.m"
  MR_Word erl_backend__elds__HeadVar__3_3)
#line 86 "elds.m"
{
#line 86 "elds.m"
  {
#line 86 "elds.m"
    MR_bool erl_backend__elds__succeeded;
#line 86 "elds.m"
    MR_Integer erl_backend__elds__CastX_12 = (MR_Integer) erl_backend__elds__HeadVar__2_2;
#line 86 "elds.m"
    MR_Integer erl_backend__elds__CastY_13 = (MR_Integer) erl_backend__elds__HeadVar__3_3;

#line 86 "elds.m"
    erl_backend__elds__succeeded = (erl_backend__elds__CastX_12 == erl_backend__elds__CastY_13);
#line 86 "elds.m"
    if (erl_backend__elds__succeeded)
#line 10280 "erl_backend.elds.c"
      *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 0;
#line 86 "elds.m"
    else
#line 86 "elds.m"
    if (((MR_tag((MR_Word) erl_backend__elds__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 86 "elds.m"
      {
#line 86 "elds.m"
        MR_Word erl_backend__elds__V_16_16 = (MR_Word) MR_body(((MR_Word) erl_backend__elds__HeadVar__2_2), (MR_Integer) 0);

#line 86 "elds.m"
        if (((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 86 "elds.m"
          {
#line 86 "elds.m"
            MR_Word erl_backend__elds__V_5_5 = (MR_Word) MR_body(((MR_Word) erl_backend__elds__HeadVar__3_3), (MR_Integer) 0);

#line 86 "elds.m"
            {
#line 86 "elds.m"
              erl_backend__elds____Compare____elds_clause_0_0(erl_backend__elds__HeadVar__1_1, erl_backend__elds__V_16_16, erl_backend__elds__V_5_5);
            }
#line 86 "elds.m"
          }
#line 86 "elds.m"
        else
#line 10307 "erl_backend.elds.c"
          *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 86 "elds.m"
      }
#line 86 "elds.m"
    else
#line 86 "elds.m"
      {
#line 86 "elds.m"
        MR_Integer erl_backend__elds__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(1), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)));

#line 86 "elds.m"
        if (((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 10320 "erl_backend.elds.c"
          *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 86 "elds.m"
        else
#line 86 "elds.m"
          {
#line 86 "elds.m"
            MR_Integer erl_backend__elds__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)));

#line 86 "elds.m"
            {
#line 86 "elds.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(erl_backend__elds__HeadVar__1_1, erl_backend__elds__V_17_17, erl_backend__elds__V_11_11);
            }
#line 86 "elds.m"
          }
#line 86 "elds.m"
      }
#line 86 "elds.m"
  }
#line 86 "elds.m"
}

#line 86 "elds.m"
MR_bool MR_CALL 
erl_backend__elds____Unify____elds_body_0_0(
#line 86 "elds.m"
  MR_Word erl_backend__elds__HeadVar__1_1,
#line 86 "elds.m"
  MR_Word erl_backend__elds__HeadVar__2_2)
#line 86 "elds.m"
{
#line 86 "elds.m"
  {
#line 86 "elds.m"
    MR_bool erl_backend__elds__succeeded;
#line 86 "elds.m"
    MR_Integer erl_backend__elds__CastX_7 = (MR_Integer) erl_backend__elds__HeadVar__1_1;
#line 86 "elds.m"
    MR_Integer erl_backend__elds__CastY_8 = (MR_Integer) erl_backend__elds__HeadVar__2_2;

#line 86 "elds.m"
    erl_backend__elds__succeeded = (erl_backend__elds__CastX_7 == erl_backend__elds__CastY_8);
#line 86 "elds.m"
    if (erl_backend__elds__succeeded)
#line 86 "elds.m"
      erl_backend__elds__succeeded = MR_TRUE;
#line 86 "elds.m"
    else
#line 86 "elds.m"
    if (((MR_tag((MR_Word) erl_backend__elds__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 86 "elds.m"
      {
#line 86 "elds.m"
        MR_Word erl_backend__elds__V_3_3 = (MR_Word) MR_body(((MR_Word) erl_backend__elds__HeadVar__1_1), (MR_Integer) 0);
#line 86 "elds.m"
        MR_Word erl_backend__elds__V_4_4;

#line 86 "elds.m"
        erl_backend__elds__succeeded = ((MR_tag((MR_Word) erl_backend__elds__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 86 "elds.m"
        if (erl_backend__elds__succeeded)
#line 86 "elds.m"
          {
#line 86 "elds.m"
            erl_backend__elds__V_4_4 = (MR_Word) MR_body(((MR_Word) erl_backend__elds__HeadVar__2_2), (MR_Integer) 0);
#line 10386 "erl_backend.elds.c"
            {
#line 10388 "erl_backend.elds.c"
              erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_clause_0_0(erl_backend__elds__V_3_3, erl_backend__elds__V_4_4);
            }
#line 86 "elds.m"
          }
#line 86 "elds.m"
      }
#line 86 "elds.m"
    else
#line 86 "elds.m"
      {
#line 86 "elds.m"
        MR_Integer erl_backend__elds__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), erl_backend__elds__HeadVar__1_1, (MR_Integer) 0)));
#line 86 "elds.m"
        MR_Integer erl_backend__elds__V_6_6;

#line 86 "elds.m"
        erl_backend__elds__succeeded = ((MR_tag((MR_Word) erl_backend__elds__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 86 "elds.m"
        if (erl_backend__elds__succeeded)
#line 86 "elds.m"
          {
#line 86 "elds.m"
            erl_backend__elds__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)));
#line 10412 "erl_backend.elds.c"
            erl_backend__elds__succeeded = (erl_backend__elds__V_5_5 == erl_backend__elds__V_6_6);
#line 86 "elds.m"
          }
#line 86 "elds.m"
      }
#line 86 "elds.m"
    return erl_backend__elds__succeeded;
#line 86 "elds.m"
  }
#line 86 "elds.m"
}

#line 270 "elds.m"
void MR_CALL 
erl_backend__elds____Compare____elds_binop_0_0(
#line 270 "elds.m"
  MR_Word * erl_backend__elds__HeadVar__1_1,
#line 270 "elds.m"
  MR_Word erl_backend__elds__HeadVar__2_2,
#line 270 "elds.m"
  MR_Word erl_backend__elds__HeadVar__3_3)
#line 270 "elds.m"
{
#line 270 "elds.m"
  {
#line 270 "elds.m"
    MR_bool erl_backend__elds__succeeded;
#line 270 "elds.m"
    MR_Integer erl_backend__elds__Cast_HeadVar1_4 = (MR_Integer) erl_backend__elds__HeadVar__2_2;
#line 270 "elds.m"
    MR_Integer erl_backend__elds__Cast_HeadVar2_5 = (MR_Integer) erl_backend__elds__HeadVar__3_3;

#line 270 "elds.m"
    {
#line 270 "elds.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(erl_backend__elds__HeadVar__1_1, erl_backend__elds__Cast_HeadVar1_4, erl_backend__elds__Cast_HeadVar2_5);
    }
#line 270 "elds.m"
  }
#line 270 "elds.m"
}

#line 270 "elds.m"
MR_bool MR_CALL 
erl_backend__elds____Unify____elds_binop_0_0(
#line 270 "elds.m"
  MR_Word erl_backend__elds__HeadVar__2_1,
#line 270 "elds.m"
  MR_Word erl_backend__elds__HeadVar__2_2)
#line 270 "elds.m"
{
#line 10464 "erl_backend.elds.c"
  {
#line 10466 "erl_backend.elds.c"
    MR_bool erl_backend__elds__succeeded = (erl_backend__elds__HeadVar__2_1 == erl_backend__elds__HeadVar__2_2);

#line 10469 "erl_backend.elds.c"
    return erl_backend__elds__succeeded;
#line 10471 "erl_backend.elds.c"
  }
#line 270 "elds.m"
}

#line 46 "elds.m"
void MR_CALL 
erl_backend__elds____Compare____elds_0_0(
#line 46 "elds.m"
  MR_Word * erl_backend__elds__HeadVar__1_1,
#line 46 "elds.m"
  MR_Word erl_backend__elds__HeadVar__2_2,
#line 46 "elds.m"
  MR_Word erl_backend__elds__HeadVar__3_3)
#line 46 "elds.m"
{
#line 46 "elds.m"
  {
#line 46 "elds.m"
    MR_bool erl_backend__elds__succeeded;
#line 46 "elds.m"
    MR_Integer erl_backend__elds__CastX_30 = (MR_Integer) erl_backend__elds__HeadVar__2_2;
#line 46 "elds.m"
    MR_Integer erl_backend__elds__CastY_31 = (MR_Integer) erl_backend__elds__HeadVar__3_3;

#line 46 "elds.m"
    erl_backend__elds__succeeded = (erl_backend__elds__CastX_30 == erl_backend__elds__CastY_31);
#line 46 "elds.m"
    if (erl_backend__elds__succeeded)
#line 10500 "erl_backend.elds.c"
      *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 0;
#line 46 "elds.m"
    else
#line 46 "elds.m"
      {
#line 46 "elds.m"
        MR_Word erl_backend__elds__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)));
#line 46 "elds.m"
        MR_Word erl_backend__elds__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__2_2, (MR_Integer) 1)));
#line 46 "elds.m"
        MR_Word erl_backend__elds__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__2_2, (MR_Integer) 2)));
#line 46 "elds.m"
        MR_Word erl_backend__elds__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__2_2, (MR_Integer) 3)));
#line 46 "elds.m"
        MR_Word erl_backend__elds__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__2_2, (MR_Integer) 4)));
#line 46 "elds.m"
        MR_Word erl_backend__elds__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__2_2, (MR_Integer) 5)));
#line 46 "elds.m"
        MR_Word erl_backend__elds__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__2_2, (MR_Integer) 6)));
#line 46 "elds.m"
        MR_Word erl_backend__elds__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__2_2, (MR_Integer) 7)));
#line 46 "elds.m"
        MR_Word erl_backend__elds__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__2_2, (MR_Integer) 8)));
#line 46 "elds.m"
        MR_Word erl_backend__elds__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)));
#line 46 "elds.m"
        MR_Word erl_backend__elds__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__3_3, (MR_Integer) 1)));
#line 46 "elds.m"
        MR_Word erl_backend__elds__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__3_3, (MR_Integer) 2)));
#line 46 "elds.m"
        MR_Word erl_backend__elds__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__3_3, (MR_Integer) 3)));
#line 46 "elds.m"
        MR_Word erl_backend__elds__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__3_3, (MR_Integer) 4)));
#line 46 "elds.m"
        MR_Word erl_backend__elds__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__3_3, (MR_Integer) 5)));
#line 46 "elds.m"
        MR_Word erl_backend__elds__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__3_3, (MR_Integer) 6)));
#line 46 "elds.m"
        MR_Word erl_backend__elds__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__3_3, (MR_Integer) 7)));
#line 46 "elds.m"
        MR_Word erl_backend__elds__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__3_3, (MR_Integer) 8)));
#line 46 "elds.m"
        MR_Word erl_backend__elds__V_22_22;

#line 46 "elds.m"
        {
#line 46 "elds.m"
          mdbcomp__sym_name____Compare____sym_name_0_0(&erl_backend__elds__V_22_22, erl_backend__elds__V_4_4, erl_backend__elds__V_13_13);
        }
#line 10550 "erl_backend.elds.c"
        erl_backend__elds__succeeded = (erl_backend__elds__V_22_22 == (MR_Integer) 0);
#line 46 "elds.m"
        erl_backend__elds__succeeded = !(erl_backend__elds__succeeded);
#line 46 "elds.m"
        if (erl_backend__elds__succeeded)
#line 46 "elds.m"
          *erl_backend__elds__HeadVar__1_1 = erl_backend__elds__V_22_22;
#line 46 "elds.m"
        else
#line 46 "elds.m"
          {
#line 46 "elds.m"
            MR_Word erl_backend__elds__V_23_23;

#line 46 "elds.m"
            {
#line 46 "elds.m"
              mercury__builtin__compare_3_p_0((MR_Word) &erl_backend__elds_scalar_common_1[1], &erl_backend__elds__V_23_23, ((MR_Box) (erl_backend__elds__V_5_5)), ((MR_Box) (erl_backend__elds__V_14_14)));
            }
#line 10570 "erl_backend.elds.c"
            erl_backend__elds__succeeded = (erl_backend__elds__V_23_23 == (MR_Integer) 0);
#line 46 "elds.m"
            erl_backend__elds__succeeded = !(erl_backend__elds__succeeded);
#line 46 "elds.m"
            if (erl_backend__elds__succeeded)
#line 46 "elds.m"
              *erl_backend__elds__HeadVar__1_1 = erl_backend__elds__V_23_23;
#line 46 "elds.m"
            else
#line 46 "elds.m"
              {
#line 46 "elds.m"
                MR_Word erl_backend__elds__V_24_24;

#line 46 "elds.m"
                {
#line 46 "elds.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &erl_backend__elds_scalar_common_1[2], &erl_backend__elds__V_24_24, ((MR_Box) (erl_backend__elds__V_6_6)), ((MR_Box) (erl_backend__elds__V_15_15)));
                }
#line 10590 "erl_backend.elds.c"
                erl_backend__elds__succeeded = (erl_backend__elds__V_24_24 == (MR_Integer) 0);
#line 46 "elds.m"
                erl_backend__elds__succeeded = !(erl_backend__elds__succeeded);
#line 46 "elds.m"
                if (erl_backend__elds__succeeded)
#line 46 "elds.m"
                  *erl_backend__elds__HeadVar__1_1 = erl_backend__elds__V_24_24;
#line 46 "elds.m"
                else
#line 46 "elds.m"
                  {
#line 46 "elds.m"
                    MR_Word erl_backend__elds__V_25_25;

#line 46 "elds.m"
                    {
#line 46 "elds.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &erl_backend__elds_scalar_common_1[3], &erl_backend__elds__V_25_25, ((MR_Box) (erl_backend__elds__V_7_7)), ((MR_Box) (erl_backend__elds__V_16_16)));
                    }
#line 10610 "erl_backend.elds.c"
                    erl_backend__elds__succeeded = (erl_backend__elds__V_25_25 == (MR_Integer) 0);
#line 46 "elds.m"
                    erl_backend__elds__succeeded = !(erl_backend__elds__succeeded);
#line 46 "elds.m"
                    if (erl_backend__elds__succeeded)
#line 46 "elds.m"
                      *erl_backend__elds__HeadVar__1_1 = erl_backend__elds__V_25_25;
#line 46 "elds.m"
                    else
#line 46 "elds.m"
                      {
#line 46 "elds.m"
                        MR_Word erl_backend__elds__V_26_26;

#line 46 "elds.m"
                        {
#line 46 "elds.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &erl_backend__elds_scalar_common_1[4], &erl_backend__elds__V_26_26, ((MR_Box) (erl_backend__elds__V_8_8)), ((MR_Box) (erl_backend__elds__V_17_17)));
                        }
#line 10630 "erl_backend.elds.c"
                        erl_backend__elds__succeeded = (erl_backend__elds__V_26_26 == (MR_Integer) 0);
#line 46 "elds.m"
                        erl_backend__elds__succeeded = !(erl_backend__elds__succeeded);
#line 46 "elds.m"
                        if (erl_backend__elds__succeeded)
#line 46 "elds.m"
                          *erl_backend__elds__HeadVar__1_1 = erl_backend__elds__V_26_26;
#line 46 "elds.m"
                        else
#line 46 "elds.m"
                          {
#line 46 "elds.m"
                            MR_Word erl_backend__elds__V_27_27;

#line 46 "elds.m"
                            {
#line 46 "elds.m"
                              mercury__builtin__compare_3_p_0((MR_Word) &erl_backend__elds_scalar_common_1[5], &erl_backend__elds__V_27_27, ((MR_Box) (erl_backend__elds__V_9_9)), ((MR_Box) (erl_backend__elds__V_18_18)));
                            }
#line 10650 "erl_backend.elds.c"
                            erl_backend__elds__succeeded = (erl_backend__elds__V_27_27 == (MR_Integer) 0);
#line 46 "elds.m"
                            erl_backend__elds__succeeded = !(erl_backend__elds__succeeded);
#line 46 "elds.m"
                            if (erl_backend__elds__succeeded)
#line 46 "elds.m"
                              *erl_backend__elds__HeadVar__1_1 = erl_backend__elds__V_27_27;
#line 46 "elds.m"
                            else
#line 46 "elds.m"
                              {
#line 46 "elds.m"
                                MR_Word erl_backend__elds__V_28_28;

#line 46 "elds.m"
                                {
#line 46 "elds.m"
                                  mercury__builtin__compare_3_p_0((MR_Word) &erl_backend__elds_scalar_common_1[6], &erl_backend__elds__V_28_28, ((MR_Box) (erl_backend__elds__V_10_10)), ((MR_Box) (erl_backend__elds__V_19_19)));
                                }
#line 10670 "erl_backend.elds.c"
                                erl_backend__elds__succeeded = (erl_backend__elds__V_28_28 == (MR_Integer) 0);
#line 46 "elds.m"
                                erl_backend__elds__succeeded = !(erl_backend__elds__succeeded);
#line 46 "elds.m"
                                if (erl_backend__elds__succeeded)
#line 46 "elds.m"
                                  *erl_backend__elds__HeadVar__1_1 = erl_backend__elds__V_28_28;
#line 46 "elds.m"
                                else
#line 46 "elds.m"
                                  {
#line 46 "elds.m"
                                    MR_Word erl_backend__elds__V_29_29;

#line 46 "elds.m"
                                    {
#line 46 "elds.m"
                                      mercury__builtin__compare_3_p_0((MR_Word) &erl_backend__elds_scalar_common_1[7], &erl_backend__elds__V_29_29, ((MR_Box) (erl_backend__elds__V_11_11)), ((MR_Box) (erl_backend__elds__V_20_20)));
                                    }
#line 10690 "erl_backend.elds.c"
                                    erl_backend__elds__succeeded = (erl_backend__elds__V_29_29 == (MR_Integer) 0);
#line 46 "elds.m"
                                    erl_backend__elds__succeeded = !(erl_backend__elds__succeeded);
#line 46 "elds.m"
                                    if (erl_backend__elds__succeeded)
#line 46 "elds.m"
                                      *erl_backend__elds__HeadVar__1_1 = erl_backend__elds__V_29_29;
#line 46 "elds.m"
                                    else
#line 46 "elds.m"
                                      {
#line 46 "elds.m"
                                        {
#line 46 "elds.m"
                                          mercury__builtin__compare_3_p_0((MR_Word) &erl_backend__elds_scalar_common_1[7], erl_backend__elds__HeadVar__1_1, ((MR_Box) (erl_backend__elds__V_12_12)), ((MR_Box) (erl_backend__elds__V_21_21)));
                                        }
#line 46 "elds.m"
                                      }
#line 46 "elds.m"
                                  }
#line 46 "elds.m"
                              }
#line 46 "elds.m"
                          }
#line 46 "elds.m"
                      }
#line 46 "elds.m"
                  }
#line 46 "elds.m"
              }
#line 46 "elds.m"
          }
#line 46 "elds.m"
      }
#line 46 "elds.m"
  }
#line 46 "elds.m"
}

#line 46 "elds.m"
MR_bool MR_CALL 
erl_backend__elds____Unify____elds_0_0(
#line 46 "elds.m"
  MR_Word erl_backend__elds__HeadVar__1_1,
#line 46 "elds.m"
  MR_Word erl_backend__elds__HeadVar__2_2)
#line 46 "elds.m"
{
#line 46 "elds.m"
  {
#line 46 "elds.m"
    MR_bool erl_backend__elds__succeeded;
#line 46 "elds.m"
    MR_Integer erl_backend__elds__CastX_21 = (MR_Integer) erl_backend__elds__HeadVar__1_1;
#line 46 "elds.m"
    MR_Integer erl_backend__elds__CastY_22 = (MR_Integer) erl_backend__elds__HeadVar__2_2;

#line 46 "elds.m"
    erl_backend__elds__succeeded = (erl_backend__elds__CastX_21 == erl_backend__elds__CastY_22);
#line 46 "elds.m"
    if (erl_backend__elds__succeeded)
#line 46 "elds.m"
      erl_backend__elds__succeeded = MR_TRUE;
#line 46 "elds.m"
    else
#line 46 "elds.m"
      {
#line 46 "elds.m"
        MR_Word erl_backend__elds__TypeInfo_24_24;
#line 46 "elds.m"
        MR_Word erl_backend__elds__TypeInfo_25_25;
#line 46 "elds.m"
        MR_Word erl_backend__elds__TypeInfo_26_26;
#line 46 "elds.m"
        MR_Word erl_backend__elds__TypeInfo_27_27;
#line 46 "elds.m"
        MR_Word erl_backend__elds__TypeInfo_28_28;
#line 46 "elds.m"
        MR_Word erl_backend__elds__TypeInfo_29_29;
#line 46 "elds.m"
        MR_Word erl_backend__elds__TypeInfo_30_30;
#line 46 "elds.m"
        MR_Word erl_backend__elds__TypeInfo_31_31;
#line 46 "elds.m"
        MR_Word erl_backend__elds__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__1_1, (MR_Integer) 0)));
#line 46 "elds.m"
        MR_Word erl_backend__elds__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__1_1, (MR_Integer) 1)));
#line 46 "elds.m"
        MR_Word erl_backend__elds__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__1_1, (MR_Integer) 2)));
#line 46 "elds.m"
        MR_Word erl_backend__elds__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__1_1, (MR_Integer) 3)));
#line 46 "elds.m"
        MR_Word erl_backend__elds__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__1_1, (MR_Integer) 4)));
#line 46 "elds.m"
        MR_Word erl_backend__elds__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__1_1, (MR_Integer) 5)));
#line 46 "elds.m"
        MR_Word erl_backend__elds__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__1_1, (MR_Integer) 6)));
#line 46 "elds.m"
        MR_Word erl_backend__elds__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__1_1, (MR_Integer) 7)));
#line 46 "elds.m"
        MR_Word erl_backend__elds__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__1_1, (MR_Integer) 8)));
#line 46 "elds.m"
        MR_Word erl_backend__elds__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)));
#line 46 "elds.m"
        MR_Word erl_backend__elds__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__2_2, (MR_Integer) 1)));
#line 46 "elds.m"
        MR_Word erl_backend__elds__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__2_2, (MR_Integer) 2)));
#line 46 "elds.m"
        MR_Word erl_backend__elds__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__2_2, (MR_Integer) 3)));
#line 46 "elds.m"
        MR_Word erl_backend__elds__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__2_2, (MR_Integer) 4)));
#line 46 "elds.m"
        MR_Word erl_backend__elds__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__2_2, (MR_Integer) 5)));
#line 46 "elds.m"
        MR_Word erl_backend__elds__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__2_2, (MR_Integer) 6)));
#line 46 "elds.m"
        MR_Word erl_backend__elds__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__2_2, (MR_Integer) 7)));
#line 46 "elds.m"
        MR_Word erl_backend__elds__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__2_2, (MR_Integer) 8)));

#line 10811 "erl_backend.elds.c"
        {
#line 10813 "erl_backend.elds.c"
          erl_backend__elds__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(erl_backend__elds__V_3_3, erl_backend__elds__V_12_12);
        }
#line 46 "elds.m"
        if (erl_backend__elds__succeeded)
#line 46 "elds.m"
          {
#line 10820 "erl_backend.elds.c"
            erl_backend__elds__TypeInfo_24_24 = (MR_Word) &erl_backend__elds_scalar_common_1[1];
#line 10822 "erl_backend.elds.c"
            {
#line 10824 "erl_backend.elds.c"
              erl_backend__elds__succeeded = mercury__builtin__unify_2_p_0(erl_backend__elds__TypeInfo_24_24, ((MR_Box) (erl_backend__elds__V_4_4)), ((MR_Box) (erl_backend__elds__V_13_13)));
            }
#line 46 "elds.m"
            if (erl_backend__elds__succeeded)
#line 46 "elds.m"
              {
#line 10831 "erl_backend.elds.c"
                erl_backend__elds__TypeInfo_25_25 = (MR_Word) &erl_backend__elds_scalar_common_1[2];
#line 10833 "erl_backend.elds.c"
                {
#line 10835 "erl_backend.elds.c"
                  erl_backend__elds__succeeded = mercury__builtin__unify_2_p_0(erl_backend__elds__TypeInfo_25_25, ((MR_Box) (erl_backend__elds__V_5_5)), ((MR_Box) (erl_backend__elds__V_14_14)));
                }
#line 46 "elds.m"
                if (erl_backend__elds__succeeded)
#line 46 "elds.m"
                  {
#line 10842 "erl_backend.elds.c"
                    erl_backend__elds__TypeInfo_26_26 = (MR_Word) &erl_backend__elds_scalar_common_1[3];
#line 10844 "erl_backend.elds.c"
                    {
#line 10846 "erl_backend.elds.c"
                      erl_backend__elds__succeeded = mercury__builtin__unify_2_p_0(erl_backend__elds__TypeInfo_26_26, ((MR_Box) (erl_backend__elds__V_6_6)), ((MR_Box) (erl_backend__elds__V_15_15)));
                    }
#line 46 "elds.m"
                    if (erl_backend__elds__succeeded)
#line 46 "elds.m"
                      {
#line 10853 "erl_backend.elds.c"
                        erl_backend__elds__TypeInfo_27_27 = (MR_Word) &erl_backend__elds_scalar_common_1[4];
#line 10855 "erl_backend.elds.c"
                        {
#line 10857 "erl_backend.elds.c"
                          erl_backend__elds__succeeded = mercury__builtin__unify_2_p_0(erl_backend__elds__TypeInfo_27_27, ((MR_Box) (erl_backend__elds__V_7_7)), ((MR_Box) (erl_backend__elds__V_16_16)));
                        }
#line 46 "elds.m"
                        if (erl_backend__elds__succeeded)
#line 46 "elds.m"
                          {
#line 10864 "erl_backend.elds.c"
                            erl_backend__elds__TypeInfo_28_28 = (MR_Word) &erl_backend__elds_scalar_common_1[5];
#line 10866 "erl_backend.elds.c"
                            {
#line 10868 "erl_backend.elds.c"
                              erl_backend__elds__succeeded = mercury__builtin__unify_2_p_0(erl_backend__elds__TypeInfo_28_28, ((MR_Box) (erl_backend__elds__V_8_8)), ((MR_Box) (erl_backend__elds__V_17_17)));
                            }
#line 46 "elds.m"
                            if (erl_backend__elds__succeeded)
#line 46 "elds.m"
                              {
#line 10875 "erl_backend.elds.c"
                                erl_backend__elds__TypeInfo_29_29 = (MR_Word) &erl_backend__elds_scalar_common_1[6];
#line 10877 "erl_backend.elds.c"
                                {
#line 10879 "erl_backend.elds.c"
                                  erl_backend__elds__succeeded = mercury__builtin__unify_2_p_0(erl_backend__elds__TypeInfo_29_29, ((MR_Box) (erl_backend__elds__V_9_9)), ((MR_Box) (erl_backend__elds__V_18_18)));
                                }
#line 46 "elds.m"
                                if (erl_backend__elds__succeeded)
#line 46 "elds.m"
                                  {
#line 10886 "erl_backend.elds.c"
                                    erl_backend__elds__TypeInfo_30_30 = (MR_Word) &erl_backend__elds_scalar_common_1[7];
#line 10888 "erl_backend.elds.c"
                                    {
#line 10890 "erl_backend.elds.c"
                                      erl_backend__elds__succeeded = mercury__builtin__unify_2_p_0(erl_backend__elds__TypeInfo_30_30, ((MR_Box) (erl_backend__elds__V_10_10)), ((MR_Box) (erl_backend__elds__V_19_19)));
                                    }
#line 46 "elds.m"
                                    if (erl_backend__elds__succeeded)
#line 46 "elds.m"
                                      {
#line 10897 "erl_backend.elds.c"
                                        erl_backend__elds__TypeInfo_31_31 = (MR_Word) &erl_backend__elds_scalar_common_1[7];
#line 10899 "erl_backend.elds.c"
                                        {
#line 10901 "erl_backend.elds.c"
                                          erl_backend__elds__succeeded = mercury__builtin__unify_2_p_0(erl_backend__elds__TypeInfo_31_31, ((MR_Box) (erl_backend__elds__V_11_11)), ((MR_Box) (erl_backend__elds__V_20_20)));
                                        }
#line 46 "elds.m"
                                      }
#line 46 "elds.m"
                                  }
#line 46 "elds.m"
                              }
#line 46 "elds.m"
                          }
#line 46 "elds.m"
                      }
#line 46 "elds.m"
                  }
#line 46 "elds.m"
              }
#line 46 "elds.m"
          }
#line 46 "elds.m"
      }
#line 46 "elds.m"
    return erl_backend__elds__succeeded;
#line 46 "elds.m"
  }
#line 46 "elds.m"
}

#line 384 "elds.m"
MR_Word MR_CALL 
erl_backend__elds__make_enum_alternative_1_f_0(
#line 384 "elds.m"
  MR_String erl_backend__elds__F_3)
#line 384 "elds.m"
{
#line 475 "elds.m"
  {
#line 475 "elds.m"
    MR_bool erl_backend__elds__succeeded;
#line 475 "elds.m"
    MR_Word erl_backend__elds__HeadVar__2_2;
#line 475 "elds.m"
    MR_Word erl_backend__elds__V_4_4;
#line 475 "elds.m"
    MR_Word erl_backend__elds__V_5_5;
#line 475 "elds.m"
    MR_Word erl_backend__elds__V_6_6;
#line 475 "elds.m"
    MR_Word erl_backend__elds__V_7_7;

#line 475 "elds.m"
    {
#line 475 "elds.m"
      erl_backend__elds__V_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 475 "elds.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds__V_7_7, 0) = ((MR_Box) (erl_backend__elds__F_3));
#line 475 "elds.m"
    }
#line 475 "elds.m"
    {
#line 475 "elds.m"
      erl_backend__elds__V_6_6 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 475 "elds.m"
      MR_hl_field(MR_mktag(3), erl_backend__elds__V_6_6, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 475 "elds.m"
      MR_hl_field(MR_mktag(3), erl_backend__elds__V_6_6, 1) = ((MR_Box) (erl_backend__elds__V_7_7));
#line 475 "elds.m"
    }
#line 475 "elds.m"
    {
#line 475 "elds.m"
      erl_backend__elds__V_5_5 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 475 "elds.m"
      MR_hl_field(MR_mktag(2), erl_backend__elds__V_5_5, 0) = ((MR_Box) (erl_backend__elds__V_6_6));
#line 475 "elds.m"
    }
#line 475 "elds.m"
    {
#line 475 "elds.m"
      erl_backend__elds__V_4_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 475 "elds.m"
      MR_hl_field(MR_mktag(1), erl_backend__elds__V_4_4, 0) = ((MR_Box) (erl_backend__elds__V_5_5));
#line 475 "elds.m"
      MR_hl_field(MR_mktag(1), erl_backend__elds__V_4_4, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 475 "elds.m"
    }
#line 475 "elds.m"
    {
#line 475 "elds.m"
      erl_backend__elds__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 475 "elds.m"
      MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 475 "elds.m"
      MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, 1) = ((MR_Box) (erl_backend__elds__V_4_4));
#line 475 "elds.m"
    }
#line 475 "elds.m"
    return erl_backend__elds__HeadVar__2_2;
#line 475 "elds.m"
  }
#line 384 "elds.m"
}

#line 374 "elds.m"
MR_Word MR_CALL 
erl_backend__elds__tuple_or_single_expr_1_f_0(
#line 374 "elds.m"
  MR_Word erl_backend__elds__List_3)
#line 374 "elds.m"
{
#line 468 "elds.m"
  {
#line 468 "elds.m"
    MR_bool erl_backend__elds__succeeded = ((MR_tag((MR_Word) erl_backend__elds__List_3)) == (MR_mktag((MR_Integer) 1)));
#line 468 "elds.m"
    MR_Word erl_backend__elds__HeadVar__2_2;
#line 468 "elds.m"
    MR_Word erl_backend__elds__SingleExpr_4;
#line 469 "elds.m"
    MR_Word erl_backend__elds__V_5_5;

#line 469 "elds.m"
    if (erl_backend__elds__succeeded)
#line 469 "elds.m"
      {
#line 469 "elds.m"
        erl_backend__elds__SingleExpr_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds__List_3, (MR_Integer) 0)));
#line 469 "elds.m"
        erl_backend__elds__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds__List_3, (MR_Integer) 1)));
#line 469 "elds.m"
        erl_backend__elds__succeeded = (erl_backend__elds__V_5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 469 "elds.m"
      }
#line 468 "elds.m"
    if (erl_backend__elds__succeeded)
#line 470 "elds.m"
      erl_backend__elds__HeadVar__2_2 = erl_backend__elds__SingleExpr_4;
#line 468 "elds.m"
    else
#line 472 "elds.m"
      {
#line 472 "elds.m"
        MR_Word erl_backend__elds__V_6_6;

#line 472 "elds.m"
        {
#line 472 "elds.m"
          erl_backend__elds__V_6_6 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 472 "elds.m"
          MR_hl_field(MR_mktag(3), erl_backend__elds__V_6_6, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 472 "elds.m"
          MR_hl_field(MR_mktag(3), erl_backend__elds__V_6_6, 1) = ((MR_Box) (erl_backend__elds__List_3));
#line 472 "elds.m"
        }
#line 472 "elds.m"
        {
#line 472 "elds.m"
          erl_backend__elds__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 472 "elds.m"
          MR_hl_field(MR_mktag(2), erl_backend__elds__HeadVar__2_2, 0) = ((MR_Box) (erl_backend__elds__V_6_6));
#line 472 "elds.m"
        }
#line 472 "elds.m"
      }
#line 468 "elds.m"
    return erl_backend__elds__HeadVar__2_2;
#line 468 "elds.m"
  }
#line 374 "elds.m"
}

#line 368 "elds.m"
MR_Integer MR_CALL 
erl_backend__elds__elds_clause_arity_1_f_0(
#line 368 "elds.m"
  MR_Word erl_backend__elds__HeadVar__1_1)
#line 368 "elds.m"
{
#line 466 "elds.m"
  {
#line 466 "elds.m"
    MR_bool erl_backend__elds__succeeded;
#line 466 "elds.m"
    MR_Integer erl_backend__elds__HeadVar__2_2;
#line 466 "elds.m"
    MR_Word erl_backend__elds__Args_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__1_1, (MR_Integer) 0)));
#line 466 "elds.m"
    MR_Word erl_backend__elds___Expr_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__1_1, (MR_Integer) 1)));

#line 466 "elds.m"
    {
#line 466 "elds.m"
      erl_backend__elds__HeadVar__2_2 = mercury__list__length_1_f_0((MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_term_0, erl_backend__elds__Args_3);
    }
#line 466 "elds.m"
    return erl_backend__elds__HeadVar__2_2;
#line 466 "elds.m"
  }
#line 368 "elds.m"
}

#line 366 "elds.m"
MR_Integer MR_CALL 
erl_backend__elds__elds_body_arity_1_f_0(
#line 366 "elds.m"
  MR_Word erl_backend__elds__HeadVar__1_1)
#line 366 "elds.m"
{
#line 463 "elds.m"
  {
#line 463 "elds.m"
    MR_bool erl_backend__elds__succeeded;
#line 463 "elds.m"
    MR_Integer erl_backend__elds__HeadVar__2_2;

#line 463 "elds.m"
    if (((MR_tag((MR_Word) erl_backend__elds__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 463 "elds.m"
      {
#line 463 "elds.m"
        MR_Word erl_backend__elds__Clause_3 = (MR_Word) MR_body(((MR_Word) erl_backend__elds__HeadVar__1_1), (MR_Integer) 0);
#line 463 "elds.m"
        MR_Word erl_backend__elds__Args_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__Clause_3, (MR_Integer) 0)));
#line 466 "elds.m"
        MR_Word erl_backend__elds___Expr_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__Clause_3, (MR_Integer) 1)));

#line 466 "elds.m"
        {
#line 466 "elds.m"
          erl_backend__elds__HeadVar__2_2 = mercury__list__length_1_f_0((MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_term_0, erl_backend__elds__Args_5);
        }
#line 463 "elds.m"
      }
#line 463 "elds.m"
    else
#line 464 "elds.m"
      erl_backend__elds__HeadVar__2_2 = ((MR_Integer) (MR_hl_field(MR_mktag(1), erl_backend__elds__HeadVar__1_1, (MR_Integer) 0)));
#line 463 "elds.m"
    return erl_backend__elds__HeadVar__2_2;
#line 463 "elds.m"
  }
#line 366 "elds.m"
}

#line 364 "elds.m"
MR_Word MR_CALL 
erl_backend__elds__det_expr_1_f_0(
#line 364 "elds.m"
  MR_Word erl_backend__elds__HeadVar__1_1)
#line 364 "elds.m"
{
#line 459 "elds.m"
  {
#line 459 "elds.m"
    MR_bool erl_backend__elds__succeeded;
#line 459 "elds.m"
    MR_Word erl_backend__elds__Expr_2;

#line 459 "elds.m"
    if ((erl_backend__elds__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 460 "elds.m"
      {
#line 461 "elds.m"
        {
#line 461 "elds.m"
          mercury__require__unexpected_3_p_0((MR_String) "erl_backend.elds", (MR_String) "function \140erl_backend.elds.det_expr\'/1", (MR_String) "no expression");
        }
#line 460 "elds.m"
      }
#line 459 "elds.m"
    else
#line 459 "elds.m"
      erl_backend__elds__Expr_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds__HeadVar__1_1, (MR_Integer) 0)));
#line 459 "elds.m"
    return erl_backend__elds__Expr_2;
#line 459 "elds.m"
  }
#line 364 "elds.m"
}

#line 358 "elds.m"
MR_Word MR_CALL 
erl_backend__elds__expr_or_void_1_f_0(
#line 358 "elds.m"
  MR_Word erl_backend__elds__HeadVar__1_1)
#line 358 "elds.m"
{
#line 456 "elds.m"
  {
#line 456 "elds.m"
    MR_bool erl_backend__elds__succeeded;
#line 456 "elds.m"
    MR_Word erl_backend__elds__HeadVar__2_2;

#line 456 "elds.m"
    if ((erl_backend__elds__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 457 "elds.m"
      {
#line 457 "elds.m"
        erl_backend__elds__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(2), &erl_backend__elds_scalar_common_2[4]);
#line 457 "elds.m"
      }
#line 456 "elds.m"
    else
#line 456 "elds.m"
      erl_backend__elds__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds__HeadVar__1_1, (MR_Integer) 0)));
#line 456 "elds.m"
    return erl_backend__elds__HeadVar__2_2;
#line 456 "elds.m"
  }
#line 358 "elds.m"
}

#line 350 "elds.m"
MR_Word MR_CALL 
erl_backend__elds__maybe_join_exprs1_2_f_0(
#line 350 "elds.m"
  MR_Word erl_backend__elds__HeadVar__1_1,
#line 350 "elds.m"
  MR_Word erl_backend__elds__HeadVar__2_2)
#line 350 "elds.m"
{
#line 453 "elds.m"
  {
#line 453 "elds.m"
    MR_bool erl_backend__elds__succeeded;
#line 453 "elds.m"
    MR_Word erl_backend__elds__HeadVar__3_3;

#line 453 "elds.m"
    if ((erl_backend__elds__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 454 "elds.m"
      erl_backend__elds__HeadVar__3_3 = erl_backend__elds__HeadVar__2_2;
#line 453 "elds.m"
    else
#line 453 "elds.m"
      {
#line 453 "elds.m"
        MR_Word erl_backend__elds__ExprA_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds__HeadVar__1_1, (MR_Integer) 0)));

#line 453 "elds.m"
        {
#line 453 "elds.m"
          erl_backend__elds__HeadVar__3_3 = erl_backend__elds__join_exprs_2_f_0(erl_backend__elds__ExprA_4, erl_backend__elds__HeadVar__2_2);
        }
#line 453 "elds.m"
      }
#line 453 "elds.m"
    return erl_backend__elds__HeadVar__3_3;
#line 453 "elds.m"
  }
#line 350 "elds.m"
}

#line 343 "elds.m"
MR_Word MR_CALL 
erl_backend__elds__maybe_join_exprs_2_f_0(
#line 343 "elds.m"
  MR_Word erl_backend__elds__HeadVar__1_1,
#line 343 "elds.m"
  MR_Word erl_backend__elds__HeadVar__2_2)
#line 343 "elds.m"
{
#line 450 "elds.m"
  {
#line 450 "elds.m"
    MR_bool erl_backend__elds__succeeded;
#line 450 "elds.m"
    MR_Word erl_backend__elds__HeadVar__3_3;

#line 450 "elds.m"
    if ((erl_backend__elds__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 451 "elds.m"
      erl_backend__elds__HeadVar__3_3 = erl_backend__elds__HeadVar__1_1;
#line 450 "elds.m"
    else
#line 450 "elds.m"
      {
#line 450 "elds.m"
        MR_Word erl_backend__elds__ExprB_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)));

#line 450 "elds.m"
        {
#line 450 "elds.m"
          erl_backend__elds__HeadVar__3_3 = erl_backend__elds__join_exprs_2_f_0(erl_backend__elds__HeadVar__1_1, erl_backend__elds__ExprB_5);
        }
#line 450 "elds.m"
      }
#line 450 "elds.m"
    return erl_backend__elds__HeadVar__3_3;
#line 450 "elds.m"
  }
#line 343 "elds.m"
}

#line 336 "elds.m"
MR_Word MR_CALL 
erl_backend__elds__join_exprs_2_f_0(
#line 336 "elds.m"
  MR_Word erl_backend__elds__ExprA_4,
#line 336 "elds.m"
  MR_Word erl_backend__elds__ExprB_5)
#line 336 "elds.m"
{
#line 432 "elds.m"
  {
#line 432 "elds.m"
    MR_bool erl_backend__elds__succeeded = ((MR_tag((MR_Word) erl_backend__elds__ExprA_4)) == (MR_mktag((MR_Integer) 1)));
#line 432 "elds.m"
    MR_Word erl_backend__elds__Expr_6;
#line 432 "elds.m"
    MR_Word erl_backend__elds__As_8;
#line 432 "elds.m"
    MR_Word erl_backend__elds__Bs_10;
#line 432 "elds.m"
    MR_Word erl_backend__elds__AsBs_11;
#line 435 "elds.m"
    MR_Word erl_backend__elds__As0_7;
#line 440 "elds.m"
    MR_Word erl_backend__elds__Bs0_9;
#line 446 "elds.m"
    MR_Word erl_backend__elds__SingleExpr_12;
#line 444 "elds.m"
    MR_Word erl_backend__elds__V_15_15;

#line 433 "elds.m"
    if (erl_backend__elds__succeeded)
#line 433 "elds.m"
      {
#line 433 "elds.m"
        erl_backend__elds__As0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds__ExprA_4, (MR_Integer) 0)));
#line 434 "elds.m"
        erl_backend__elds__As_8 = erl_backend__elds__As0_7;
#line 433 "elds.m"
      }
#line 433 "elds.m"
    else
#line 436 "elds.m"
      {
#line 436 "elds.m"
        {
#line 436 "elds.m"
          erl_backend__elds__As_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 436 "elds.m"
          MR_hl_field(MR_mktag(1), erl_backend__elds__As_8, 0) = ((MR_Box) (erl_backend__elds__ExprA_4));
#line 436 "elds.m"
          MR_hl_field(MR_mktag(1), erl_backend__elds__As_8, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 436 "elds.m"
        }
#line 436 "elds.m"
      }
#line 438 "elds.m"
    erl_backend__elds__succeeded = ((MR_tag((MR_Word) erl_backend__elds__ExprB_5)) == (MR_mktag((MR_Integer) 1)));
#line 438 "elds.m"
    if (erl_backend__elds__succeeded)
#line 438 "elds.m"
      {
#line 438 "elds.m"
        erl_backend__elds__Bs0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds__ExprB_5, (MR_Integer) 0)));
#line 439 "elds.m"
        erl_backend__elds__Bs_10 = erl_backend__elds__Bs0_9;
#line 438 "elds.m"
      }
#line 438 "elds.m"
    else
#line 441 "elds.m"
      {
#line 441 "elds.m"
        {
#line 441 "elds.m"
          erl_backend__elds__Bs_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 441 "elds.m"
          MR_hl_field(MR_mktag(1), erl_backend__elds__Bs_10, 0) = ((MR_Box) (erl_backend__elds__ExprB_5));
#line 441 "elds.m"
          MR_hl_field(MR_mktag(1), erl_backend__elds__Bs_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 441 "elds.m"
        }
#line 441 "elds.m"
      }
#line 443 "elds.m"
    {
#line 443 "elds.m"
      erl_backend__elds__AsBs_11 = mercury__list__f_43_43_2_f_0((MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0, erl_backend__elds__As_8, erl_backend__elds__Bs_10);
    }
#line 444 "elds.m"
    erl_backend__elds__succeeded = ((MR_tag((MR_Word) erl_backend__elds__AsBs_11)) == (MR_mktag((MR_Integer) 1)));
#line 444 "elds.m"
    if (erl_backend__elds__succeeded)
#line 444 "elds.m"
      {
#line 444 "elds.m"
        erl_backend__elds__SingleExpr_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds__AsBs_11, (MR_Integer) 0)));
#line 444 "elds.m"
        erl_backend__elds__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds__AsBs_11, (MR_Integer) 1)));
#line 444 "elds.m"
        erl_backend__elds__succeeded = (erl_backend__elds__V_15_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 444 "elds.m"
      }
#line 446 "elds.m"
    if (erl_backend__elds__succeeded)
#line 445 "elds.m"
      erl_backend__elds__Expr_6 = erl_backend__elds__SingleExpr_12;
#line 446 "elds.m"
    else
#line 447 "elds.m"
      {
#line 447 "elds.m"
        erl_backend__elds__Expr_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 447 "elds.m"
        MR_hl_field(MR_mktag(1), erl_backend__elds__Expr_6, 0) = ((MR_Box) (erl_backend__elds__AsBs_11));
#line 447 "elds.m"
      }
#line 432 "elds.m"
    return erl_backend__elds__Expr_6;
#line 432 "elds.m"
  }
#line 336 "elds.m"
}

#line 331 "elds.m"
MR_Word MR_CALL 
erl_backend__elds__expr_to_term_1_f_0(
#line 331 "elds.m"
  MR_Word erl_backend__elds__Expr_3)
#line 331 "elds.m"
{
#line 428 "elds.m"
  {
#line 428 "elds.m"
    MR_bool erl_backend__elds__succeeded = ((MR_tag((MR_Word) erl_backend__elds__Expr_3)) == (MR_mktag((MR_Integer) 2)));
#line 428 "elds.m"
    MR_Word erl_backend__elds__Term_4;
#line 428 "elds.m"
    MR_Word erl_backend__elds__Term0_5;

#line 426 "elds.m"
    if (erl_backend__elds__succeeded)
#line 426 "elds.m"
      {
#line 426 "elds.m"
        erl_backend__elds__Term0_5 = ((MR_Word) (MR_hl_field(MR_mktag(2), erl_backend__elds__Expr_3, (MR_Integer) 0)));
#line 427 "elds.m"
        erl_backend__elds__Term_4 = erl_backend__elds__Term0_5;
#line 426 "elds.m"
      }
#line 426 "elds.m"
    else
#line 429 "elds.m"
      {
#line 429 "elds.m"
        {
#line 429 "elds.m"
          mercury__require__unexpected_3_p_0((MR_String) "erl_backend.elds", (MR_String) "function \140erl_backend.elds.expr_to_term\'/1", (MR_String) "unable to convert elds_expr to elds_term");
        }
#line 429 "elds.m"
      }
#line 428 "elds.m"
    return erl_backend__elds__Term_4;
#line 428 "elds.m"
  }
#line 331 "elds.m"
}

#line 423 "elds.m"
static MR_Box MR_CALL 
erl_backend__elds__exprs_from_fixed_vars_1_f_0_1(
#line 423 "elds.m"
  MR_Box erl_backend__elds__closure_arg,
#line 423 "elds.m"
  MR_Box erl_backend__elds__wrapper_arg_1)
#line 423 "elds.m"
{
#line 423 "elds.m"
  {
#line 423 "elds.m"
    MR_Box erl_backend__elds__wrapper_arg_2;
#line 423 "elds.m"
    MR_Box erl_backend__elds__closure = erl_backend__elds__closure_arg;
#line 423 "elds.m"
    MR_Word erl_backend__elds__conv0_LambdaHeadVar__2_7;

#line 423 "elds.m"
    {
#line 423 "elds.m"
      erl_backend__elds__conv0_LambdaHeadVar__2_7 = erl_backend__elds__IntroducedFrom__func__exprs_from_fixed_vars__423__1_1_f_0(((MR_String) erl_backend__elds__wrapper_arg_1));
    }
#line 423 "elds.m"
    erl_backend__elds__wrapper_arg_2 = ((MR_Box) (erl_backend__elds__conv0_LambdaHeadVar__2_7));
#line 423 "elds.m"
    return erl_backend__elds__wrapper_arg_2;
#line 423 "elds.m"
  }
#line 423 "elds.m"
}

#line 327 "elds.m"
MR_Word MR_CALL 
erl_backend__elds__exprs_from_fixed_vars_1_f_0(
#line 327 "elds.m"
  MR_Word erl_backend__elds__Names_3)
#line 327 "elds.m"
{
#line 422 "elds.m"
  {
#line 422 "elds.m"
    MR_bool erl_backend__elds__succeeded;
#line 422 "elds.m"
    MR_Word erl_backend__elds__HeadVar__2_2;

#line 423 "elds.m"
    {
#line 423 "elds.m"
      erl_backend__elds__HeadVar__2_2 = mercury__list__map_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0, (MR_Word) &erl_backend__elds_scalar_common_3[4], erl_backend__elds__Names_3);
    }
#line 422 "elds.m"
    return erl_backend__elds__HeadVar__2_2;
#line 422 "elds.m"
  }
#line 327 "elds.m"
}

#line 421 "elds.m"
static MR_Box MR_CALL 
erl_backend__elds__terms_from_fixed_vars_1_f_0_1(
#line 421 "elds.m"
  MR_Box erl_backend__elds__closure_arg,
#line 421 "elds.m"
  MR_Box erl_backend__elds__wrapper_arg_1)
#line 421 "elds.m"
{
#line 421 "elds.m"
  {
#line 421 "elds.m"
    MR_Box erl_backend__elds__wrapper_arg_2;
#line 421 "elds.m"
    MR_Box erl_backend__elds__closure = erl_backend__elds__closure_arg;
#line 421 "elds.m"
    MR_Word erl_backend__elds__conv0_LambdaHeadVar__2_7;

#line 421 "elds.m"
    {
#line 421 "elds.m"
      erl_backend__elds__conv0_LambdaHeadVar__2_7 = erl_backend__elds__IntroducedFrom__func__terms_from_fixed_vars__421__1_1_f_0(((MR_String) erl_backend__elds__wrapper_arg_1));
    }
#line 421 "elds.m"
    erl_backend__elds__wrapper_arg_2 = ((MR_Box) (erl_backend__elds__conv0_LambdaHeadVar__2_7));
#line 421 "elds.m"
    return erl_backend__elds__wrapper_arg_2;
#line 421 "elds.m"
  }
#line 421 "elds.m"
}

#line 326 "elds.m"
MR_Word MR_CALL 
erl_backend__elds__terms_from_fixed_vars_1_f_0(
#line 326 "elds.m"
  MR_Word erl_backend__elds__Names_3)
#line 326 "elds.m"
{
#line 420 "elds.m"
  {
#line 420 "elds.m"
    MR_bool erl_backend__elds__succeeded;
#line 420 "elds.m"
    MR_Word erl_backend__elds__HeadVar__2_2;

#line 421 "elds.m"
    {
#line 421 "elds.m"
      erl_backend__elds__HeadVar__2_2 = mercury__list__map_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_term_0, (MR_Word) &erl_backend__elds_scalar_common_3[3], erl_backend__elds__Names_3);
    }
#line 420 "elds.m"
    return erl_backend__elds__HeadVar__2_2;
#line 420 "elds.m"
  }
#line 326 "elds.m"
}

#line 418 "elds.m"
static MR_Box MR_CALL 
erl_backend__elds__exprs_from_vars_1_f_0_1(
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
    MR_Word erl_backend__elds__conv0_HeadVar__2_2;

#line 418 "elds.m"
    {
#line 418 "elds.m"
      erl_backend__elds__conv0_HeadVar__2_2 = erl_backend__elds__expr_from_var_1_f_0(((MR_Word) erl_backend__elds__wrapper_arg_1));
    }
#line 418 "elds.m"
    erl_backend__elds__wrapper_arg_2 = ((MR_Box) (erl_backend__elds__conv0_HeadVar__2_2));
#line 418 "elds.m"
    return erl_backend__elds__wrapper_arg_2;
#line 418 "elds.m"
  }
#line 418 "elds.m"
}

#line 324 "elds.m"
MR_Word MR_CALL 
erl_backend__elds__exprs_from_vars_1_f_0(
#line 324 "elds.m"
  MR_Word erl_backend__elds__Vars_3)
#line 324 "elds.m"
{
#line 418 "elds.m"
  {
#line 418 "elds.m"
    MR_bool erl_backend__elds__succeeded;
#line 418 "elds.m"
    MR_Word erl_backend__elds__HeadVar__2_2;

#line 418 "elds.m"
    {
#line 418 "elds.m"
      erl_backend__elds__HeadVar__2_2 = mercury__list__map_2_f_0((MR_Word) &erl_backend__elds_scalar_common_1[0], (MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0, (MR_Word) &erl_backend__elds_scalar_common_3[2], erl_backend__elds__Vars_3);
    }
#line 418 "elds.m"
    return erl_backend__elds__HeadVar__2_2;
#line 418 "elds.m"
  }
#line 324 "elds.m"
}

#line 323 "elds.m"
MR_Word MR_CALL 
erl_backend__elds__expr_from_var_1_f_0(
#line 323 "elds.m"
  MR_Word erl_backend__elds__Var_3)
#line 323 "elds.m"
{
#line 417 "elds.m"
  {
#line 417 "elds.m"
    MR_bool erl_backend__elds__succeeded;
#line 417 "elds.m"
    MR_Word erl_backend__elds__HeadVar__2_2;
#line 417 "elds.m"
    MR_Word erl_backend__elds__V_4_4;

#line 417 "elds.m"
    {
#line 417 "elds.m"
      erl_backend__elds__V_4_4 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 417 "elds.m"
      MR_hl_field(MR_mktag(3), erl_backend__elds__V_4_4, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 417 "elds.m"
      MR_hl_field(MR_mktag(3), erl_backend__elds__V_4_4, 1) = ((MR_Box) (erl_backend__elds__Var_3));
#line 417 "elds.m"
    }
#line 417 "elds.m"
    {
#line 417 "elds.m"
      erl_backend__elds__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 417 "elds.m"
      MR_hl_field(MR_mktag(2), erl_backend__elds__HeadVar__2_2, 0) = ((MR_Box) (erl_backend__elds__V_4_4));
#line 417 "elds.m"
    }
#line 417 "elds.m"
    return erl_backend__elds__HeadVar__2_2;
#line 417 "elds.m"
  }
#line 323 "elds.m"
}

#line 415 "elds.m"
static MR_Box MR_CALL 
erl_backend__elds__terms_from_vars_1_f_0_1(
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
      erl_backend__elds__conv0_HeadVar__2_2 = erl_backend__elds__term_from_var_1_f_0(((MR_Word) erl_backend__elds__wrapper_arg_1));
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
erl_backend__elds__terms_from_vars_1_f_0(
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
      erl_backend__elds__HeadVar__2_2 = mercury__list__map_2_f_0((MR_Word) &erl_backend__elds_scalar_common_1[0], (MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_term_0, (MR_Word) &erl_backend__elds_scalar_common_3[1], erl_backend__elds__Vars_3);
    }
#line 415 "elds.m"
    return erl_backend__elds__HeadVar__2_2;
#line 415 "elds.m"
  }
#line 321 "elds.m"
}

#line 320 "elds.m"
MR_Word MR_CALL 
erl_backend__elds__term_from_var_1_f_0(
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
    {
#line 414 "elds.m"
      erl_backend__elds__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 414 "elds.m"
      MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 414 "elds.m"
      MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, 1) = ((MR_Box) (erl_backend__elds__Var_3));
#line 414 "elds.m"
    }
#line 414 "elds.m"
    return erl_backend__elds__HeadVar__2_2;
#line 414 "elds.m"
  }
#line 320 "elds.m"
}

#line 318 "elds.m"
MR_Word MR_CALL 
erl_backend__elds__var_eq_false_1_f_0(
#line 318 "elds.m"
  MR_Word erl_backend__elds__Var_3)
#line 318 "elds.m"
{
#line 412 "elds.m"
  {
#line 412 "elds.m"
    MR_bool erl_backend__elds__succeeded;
#line 412 "elds.m"
    MR_Word erl_backend__elds__HeadVar__2_2;
#line 412 "elds.m"
    MR_Word erl_backend__elds__V_4_4;
#line 412 "elds.m"
    MR_Word erl_backend__elds__V_8_8;

#line 417 "elds.m"
    {
#line 417 "elds.m"
      erl_backend__elds__V_8_8 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 417 "elds.m"
      MR_hl_field(MR_mktag(3), erl_backend__elds__V_8_8, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 417 "elds.m"
      MR_hl_field(MR_mktag(3), erl_backend__elds__V_8_8, 1) = ((MR_Box) (erl_backend__elds__Var_3));
#line 417 "elds.m"
    }
#line 417 "elds.m"
    {
#line 417 "elds.m"
      erl_backend__elds__V_4_4 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 417 "elds.m"
      MR_hl_field(MR_mktag(2), erl_backend__elds__V_4_4, 0) = ((MR_Box) (erl_backend__elds__V_8_8));
#line 417 "elds.m"
    }
#line 412 "elds.m"
    {
#line 412 "elds.m"
      erl_backend__elds__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 412 "elds.m"
      MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 412 "elds.m"
      MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, 1) = ((MR_Box) (erl_backend__elds__V_4_4));
#line 412 "elds.m"
      MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, 2) = ((MR_Box) (MR_mkword(MR_mktag(2), &erl_backend__elds_scalar_common_2[3])));
#line 412 "elds.m"
    }
#line 412 "elds.m"
    return erl_backend__elds__HeadVar__2_2;
#line 412 "elds.m"
  }
#line 318 "elds.m"
}

#line 316 "elds.m"
MR_Word MR_CALL 
erl_backend__elds__elds_call_self_0_f_0(void)
#line 316 "elds.m"
{
#line 410 "elds.m"
  {
#line 410 "elds.m"
    MR_bool erl_backend__elds__succeeded;

#line 410 "elds.m"
    return (MR_Word) MR_mkword(MR_mktag(3), &erl_backend__elds_scalar_common_3[0]);
#line 410 "elds.m"
  }
#line 316 "elds.m"
}

#line 315 "elds.m"
MR_Word MR_CALL 
erl_backend__elds__elds_call_element_2_f_0(
#line 315 "elds.m"
  MR_Word erl_backend__elds__Var_4,
#line 315 "elds.m"
  MR_Integer erl_backend__elds__Index_5)
#line 315 "elds.m"
{
#line 407 "elds.m"
  {
#line 407 "elds.m"
    MR_bool erl_backend__elds__succeeded;
#line 407 "elds.m"
    MR_Word erl_backend__elds__HeadVar__3_3;
#line 407 "elds.m"
    MR_Word erl_backend__elds__V_7_7;
#line 407 "elds.m"
    MR_Word erl_backend__elds__V_8_8;
#line 407 "elds.m"
    MR_Word erl_backend__elds__V_9_9;
#line 407 "elds.m"
    MR_Word erl_backend__elds__V_10_10;
#line 407 "elds.m"
    MR_Word erl_backend__elds__V_11_11;
#line 407 "elds.m"
    MR_Word erl_backend__elds__V_14_14;

#line 408 "elds.m"
    {
#line 408 "elds.m"
      erl_backend__elds__V_9_9 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 408 "elds.m"
      MR_hl_field(MR_mktag(2), erl_backend__elds__V_9_9, 0) = ((MR_Box) (erl_backend__elds__Index_5));
#line 408 "elds.m"
    }
#line 408 "elds.m"
    {
#line 408 "elds.m"
      erl_backend__elds__V_8_8 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 408 "elds.m"
      MR_hl_field(MR_mktag(2), erl_backend__elds__V_8_8, 0) = ((MR_Box) (erl_backend__elds__V_9_9));
#line 408 "elds.m"
    }
#line 417 "elds.m"
    {
#line 417 "elds.m"
      erl_backend__elds__V_14_14 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 417 "elds.m"
      MR_hl_field(MR_mktag(3), erl_backend__elds__V_14_14, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 417 "elds.m"
      MR_hl_field(MR_mktag(3), erl_backend__elds__V_14_14, 1) = ((MR_Box) (erl_backend__elds__Var_4));
#line 417 "elds.m"
    }
#line 417 "elds.m"
    {
#line 417 "elds.m"
      erl_backend__elds__V_11_11 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 417 "elds.m"
      MR_hl_field(MR_mktag(2), erl_backend__elds__V_11_11, 0) = ((MR_Box) (erl_backend__elds__V_14_14));
#line 417 "elds.m"
    }
#line 408 "elds.m"
    {
#line 408 "elds.m"
      erl_backend__elds__V_10_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 408 "elds.m"
      MR_hl_field(MR_mktag(1), erl_backend__elds__V_10_10, 0) = ((MR_Box) (erl_backend__elds__V_11_11));
#line 408 "elds.m"
      MR_hl_field(MR_mktag(1), erl_backend__elds__V_10_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 408 "elds.m"
    }
#line 408 "elds.m"
    {
#line 408 "elds.m"
      erl_backend__elds__V_7_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 408 "elds.m"
      MR_hl_field(MR_mktag(1), erl_backend__elds__V_7_7, 0) = ((MR_Box) (erl_backend__elds__V_8_8));
#line 408 "elds.m"
      MR_hl_field(MR_mktag(1), erl_backend__elds__V_7_7, 1) = ((MR_Box) (erl_backend__elds__V_10_10));
#line 408 "elds.m"
    }
#line 404 "elds.m"
    {
#line 404 "elds.m"
      erl_backend__elds__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 404 "elds.m"
      MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 404 "elds.m"
      MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &erl_backend__elds_scalar_common_2[1])));
#line 404 "elds.m"
      MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, 2) = ((MR_Box) (erl_backend__elds__V_7_7));
#line 404 "elds.m"
    }
#line 407 "elds.m"
    return erl_backend__elds__HeadVar__3_3;
#line 407 "elds.m"
  }
#line 315 "elds.m"
}

#line 314 "elds.m"
MR_Word MR_CALL 
erl_backend__elds__elds_call_builtin_2_f_0(
#line 314 "elds.m"
  MR_String erl_backend__elds__FunName_4,
#line 314 "elds.m"
  MR_Word erl_backend__elds__Exprs_5)
#line 314 "elds.m"
{
#line 403 "elds.m"
  {
#line 403 "elds.m"
    MR_bool erl_backend__elds__succeeded;
#line 403 "elds.m"
    MR_Word erl_backend__elds__HeadVar__3_3;
#line 403 "elds.m"
    MR_Word erl_backend__elds__V_6_6;

#line 404 "elds.m"
    {
#line 404 "elds.m"
      erl_backend__elds__V_6_6 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 404 "elds.m"
      MR_hl_field(MR_mktag(2), erl_backend__elds__V_6_6, 0) = ((MR_Box) (erl_backend__elds__FunName_4));
#line 404 "elds.m"
    }
#line 404 "elds.m"
    {
#line 404 "elds.m"
      erl_backend__elds__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 404 "elds.m"
      MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 404 "elds.m"
      MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, 1) = ((MR_Box) (erl_backend__elds__V_6_6));
#line 404 "elds.m"
      MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, 2) = ((MR_Box) (erl_backend__elds__Exprs_5));
#line 404 "elds.m"
    }
#line 403 "elds.m"
    return erl_backend__elds__HeadVar__3_3;
#line 403 "elds.m"
  }
#line 314 "elds.m"
}

#line 312 "elds.m"
MR_Word MR_CALL 
erl_backend__elds__elds_commit_marker_0_f_0(void)
#line 312 "elds.m"
{
#line 401 "elds.m"
  {
#line 401 "elds.m"
    MR_bool erl_backend__elds__succeeded;

#line 401 "elds.m"
    return (MR_Word) MR_mkword(MR_mktag(2), &erl_backend__elds_scalar_common_2[0]);
#line 401 "elds.m"
  }
#line 312 "elds.m"
}

#line 307 "elds.m"
MR_Word MR_CALL 
erl_backend__elds__elds_empty_tuple_0_f_0(void)
#line 307 "elds.m"
{
#line 399 "elds.m"
  {
#line 399 "elds.m"
    MR_bool erl_backend__elds__succeeded;

#line 399 "elds.m"
    return (MR_Word) MR_mkword(MR_mktag(3), &erl_backend__elds_scalar_common_1[19]);
#line 399 "elds.m"
  }
#line 307 "elds.m"
}

#line 306 "elds.m"
MR_Word MR_CALL 
erl_backend__elds__elds_throw_atom_0_f_0(void)
#line 306 "elds.m"
{
#line 398 "elds.m"
  {
#line 398 "elds.m"
    MR_bool erl_backend__elds__succeeded;

#line 398 "elds.m"
    return (MR_Word) MR_mkword(MR_mktag(3), &erl_backend__elds_scalar_common_1[18]);
#line 398 "elds.m"
  }
#line 306 "elds.m"
}

#line 305 "elds.m"
MR_Word MR_CALL 
erl_backend__elds__elds_fail_0_f_0(void)
#line 305 "elds.m"
{
#line 397 "elds.m"
  {
#line 397 "elds.m"
    MR_bool erl_backend__elds__succeeded;

#line 397 "elds.m"
    return (MR_Word) MR_mkword(MR_mktag(3), &erl_backend__elds_scalar_common_1[17]);
#line 397 "elds.m"
  }
#line 305 "elds.m"
}

#line 304 "elds.m"
MR_Word MR_CALL 
erl_backend__elds__elds_false_0_f_0(void)
#line 304 "elds.m"
{
#line 396 "elds.m"
  {
#line 396 "elds.m"
    MR_bool erl_backend__elds__succeeded;

#line 396 "elds.m"
    return (MR_Word) MR_mkword(MR_mktag(3), &erl_backend__elds_scalar_common_1[16]);
#line 396 "elds.m"
  }
#line 304 "elds.m"
}

#line 303 "elds.m"
MR_Word MR_CALL 
erl_backend__elds__elds_true_0_f_0(void)
#line 303 "elds.m"
{
#line 395 "elds.m"
  {
#line 395 "elds.m"
    MR_bool erl_backend__elds__succeeded;

#line 395 "elds.m"
    return (MR_Word) MR_mkword(MR_mktag(3), &erl_backend__elds_scalar_common_1[15]);
#line 395 "elds.m"
  }
#line 303 "elds.m"
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
