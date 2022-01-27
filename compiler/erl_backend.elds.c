/*
** Automatically generated from `elds.m'
** by the Mercury compiler,
** version rotd-2014-09-01
** configured for x86_64-apple-darwin13.3.0.
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




#line 133 "erl_backend.elds.c"
static const MR_FA_PseudoTypeInfo_Struct1 erl_backend__elds__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 136 "erl_backend.elds.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__elds__set_ordlist__ti_set_ordlist_1mdbcomp__prim_data__type_ctor_info_sym_name_0;

#line 139 "erl_backend.elds.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__elds__list__ti_list_1parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0;

#line 142 "erl_backend.elds.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__elds__list__ti_list_1parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0;

#line 145 "erl_backend.elds.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__elds__list__ti_list_1erl_backend__elds__type_ctor_info_elds_defn_0;

#line 148 "erl_backend.elds.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__elds__list__ti_list_1erl_backend__elds__type_ctor_info_elds_foreign_export_defn_0;

#line 151 "erl_backend.elds.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__elds__list__ti_list_1erl_backend__elds__type_ctor_info_elds_rtti_defn_0;

#line 154 "erl_backend.elds.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__elds__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

#line 157 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_0_0[9];

#line 160 "erl_backend.elds.c"
static const MR_ConstString erl_backend__elds__erl_backend__elds__field_names_elds_0_0[9];

#line 163 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_0_0;

#line 166 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_0_0[1];

#line 169 "erl_backend.elds.c"
static const MR_DuPtagLayout erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_0[1];

#line 172 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_name_ordered_elds_0[1];

#line 175 "erl_backend.elds.c"
static const MR_Integer erl_backend__elds__erl_backend__elds__functor_number_map_elds_0[1];

#line 178 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_0;

#line 181 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_1;

#line 184 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_2;

#line 187 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_3;

#line 190 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_4;

#line 193 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_5;

#line 196 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_6;

#line 199 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_7;

#line 202 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_8;

#line 205 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_9;

#line 208 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_10;

#line 211 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_11;

#line 214 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_12;

#line 217 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_13;

#line 220 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_14;

#line 223 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_15;

#line 226 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_16;

#line 229 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_17;

#line 232 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_18;

#line 235 "erl_backend.elds.c"
static const MR_EnumFunctorDescPtr erl_backend__elds__erl_backend__elds__enum_value_ordered_elds_binop_0[19];

#line 238 "erl_backend.elds.c"
static const MR_EnumFunctorDescPtr erl_backend__elds__erl_backend__elds__enum_name_ordered_elds_binop_0[19];

#line 241 "erl_backend.elds.c"
static const MR_Integer erl_backend__elds__erl_backend__elds__functor_number_map_elds_binop_0[19];

#line 244 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_body_0_0[1];

#line 247 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_body_0_0;

#line 250 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_body_0_1[1];

#line 253 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_body_0_1;

#line 256 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_body_0_0[1];

#line 259 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_body_0_1[1];

#line 262 "erl_backend.elds.c"
static const MR_DuPtagLayout erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_body_0[2];

#line 265 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_name_ordered_elds_body_0[2];

#line 268 "erl_backend.elds.c"
static const MR_Integer erl_backend__elds__erl_backend__elds__functor_number_map_elds_body_0[2];

#line 271 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_call_target_0_0[1];

#line 274 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_call_target_0_0;

#line 277 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_call_target_0_1[1];

#line 280 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_call_target_0_1;

#line 283 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_call_target_0_2[1];

#line 286 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_call_target_0_2;

#line 289 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_call_target_0_0[1];

#line 292 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_call_target_0_1[1];

#line 295 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_call_target_0_2[1];

#line 298 "erl_backend.elds.c"
static const MR_DuPtagLayout erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_call_target_0[3];

#line 301 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_name_ordered_elds_call_target_0[3];

#line 304 "erl_backend.elds.c"
static const MR_Integer erl_backend__elds__erl_backend__elds__functor_number_map_elds_call_target_0[3];

#line 307 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_case_0_0[2];

#line 310 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_case_0_0;

#line 313 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_case_0_0[1];

#line 316 "erl_backend.elds.c"
static const MR_DuPtagLayout erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_case_0[1];

#line 319 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_name_ordered_elds_case_0[1];

#line 322 "erl_backend.elds.c"
static const MR_Integer erl_backend__elds__erl_backend__elds__functor_number_map_elds_case_0[1];

#line 325 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_catch_0_0[3];

#line 328 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_catch_0_0;

#line 331 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_catch_0_0[1];

#line 334 "erl_backend.elds.c"
static const MR_DuPtagLayout erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_catch_0[1];

#line 337 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_name_ordered_elds_catch_0[1];

#line 340 "erl_backend.elds.c"
static const MR_Integer erl_backend__elds__erl_backend__elds__functor_number_map_elds_catch_0[1];

#line 343 "erl_backend.elds.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__elds__list__ti_list_1erl_backend__elds__type_ctor_info_elds_term_0;

#line 346 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_clause_0_0[2];

#line 349 "erl_backend.elds.c"
static const MR_ConstString erl_backend__elds__erl_backend__elds__field_names_elds_clause_0_0[2];

#line 352 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_clause_0_0;

#line 355 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_clause_0_0[1];

#line 358 "erl_backend.elds.c"
static const MR_DuPtagLayout erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_clause_0[1];

#line 361 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_name_ordered_elds_clause_0[1];

#line 364 "erl_backend.elds.c"
static const MR_Integer erl_backend__elds__erl_backend__elds__functor_number_map_elds_clause_0[1];

#line 367 "erl_backend.elds.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__elds__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 370 "erl_backend.elds.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__elds__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0;

#line 373 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_defn_0_0[4];

#line 376 "erl_backend.elds.c"
static const MR_ConstString erl_backend__elds__erl_backend__elds__field_names_elds_defn_0_0[4];

#line 379 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_defn_0_0;

#line 382 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_defn_0_0[1];

#line 385 "erl_backend.elds.c"
static const MR_DuPtagLayout erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_defn_0[1];

#line 388 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_name_ordered_elds_defn_0[1];

#line 391 "erl_backend.elds.c"
static const MR_Integer erl_backend__elds__erl_backend__elds__functor_number_map_elds_defn_0[1];

#line 394 "erl_backend.elds.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__elds__list__ti_list_1erl_backend__elds__type_ctor_info_elds_expr_0;

#line 397 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_0[1];

#line 400 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_0;

#line 403 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_1[1];

#line 406 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_1;

#line 409 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_2[2];

#line 412 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_2;

#line 415 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_3[2];

#line 418 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_3;

#line 421 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_4[3];

#line 424 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_4;

#line 427 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_5[2];

#line 430 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_5;

#line 433 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_6[1];

#line 436 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_6;

#line 439 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_7[1];

#line 442 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_7;

#line 445 "erl_backend.elds.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__elds__list__ti_list_1erl_backend__elds__type_ctor_info_elds_case_0;

#line 448 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_8[2];

#line 451 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_8;

#line 454 "erl_backend.elds.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__elds__maybe__ti_maybe_1erl_backend__elds__type_ctor_info_elds_catch_0;

#line 457 "erl_backend.elds.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__elds__maybe__ti_maybe_1erl_backend__elds__type_ctor_info_elds_expr_0;

#line 460 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_9[4];

#line 463 "erl_backend.elds.c"
static const MR_ConstString erl_backend__elds__erl_backend__elds__field_names_elds_expr_0_9[4];

#line 466 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_9;

#line 469 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_10[1];

#line 472 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_10;

#line 475 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_11[2];

#line 478 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_11;

#line 481 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_12[2];

#line 484 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_12;

#line 487 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_13[1];

#line 490 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_13;

#line 493 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_expr_0_0[1];

#line 496 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_expr_0_1[1];

#line 499 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_expr_0_2[1];

#line 502 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_expr_0_3[11];

#line 505 "erl_backend.elds.c"
static const MR_DuPtagLayout erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_expr_0[4];

#line 508 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_name_ordered_elds_expr_0[14];

#line 511 "erl_backend.elds.c"
static const MR_Integer erl_backend__elds__erl_backend__elds__functor_number_map_elds_expr_0[14];

#line 514 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_foreign_export_defn_0_0[3];

#line 517 "erl_backend.elds.c"
static const MR_ConstString erl_backend__elds__erl_backend__elds__field_names_elds_foreign_export_defn_0_0[3];

#line 520 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_foreign_export_defn_0_0;

#line 523 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_foreign_export_defn_0_0[1];

#line 526 "erl_backend.elds.c"
static const MR_DuPtagLayout erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_foreign_export_defn_0[1];

#line 529 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_name_ordered_elds_foreign_export_defn_0[1];

#line 532 "erl_backend.elds.c"
static const MR_Integer erl_backend__elds__erl_backend__elds__functor_number_map_elds_foreign_export_defn_0[1];

#line 535 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_rtti_defn_0_0[4];

#line 538 "erl_backend.elds.c"
static const MR_ConstString erl_backend__elds__erl_backend__elds__field_names_elds_rtti_defn_0_0[4];

#line 541 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_rtti_defn_0_0;

#line 544 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_rtti_defn_0_0[1];

#line 547 "erl_backend.elds.c"
static const MR_DuPtagLayout erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_rtti_defn_0[1];

#line 550 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_name_ordered_elds_rtti_defn_0[1];

#line 553 "erl_backend.elds.c"
static const MR_Integer erl_backend__elds__erl_backend__elds__functor_number_map_elds_rtti_defn_0[1];

#line 556 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_rtti_id_0_0[1];

#line 559 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_rtti_id_0_0;

#line 562 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_rtti_id_0_1[1];

#line 565 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_rtti_id_0_1;

#line 568 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_rtti_id_0_2[1];

#line 571 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_rtti_id_0_2;

#line 574 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_rtti_id_0_3[3];

#line 577 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_rtti_id_0_3;

#line 580 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_rtti_id_0_0[1];

#line 583 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_rtti_id_0_1[1];

#line 586 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_rtti_id_0_2[1];

#line 589 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_rtti_id_0_3[1];

#line 592 "erl_backend.elds.c"
static const MR_DuPtagLayout erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_rtti_id_0[4];

#line 595 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_name_ordered_elds_rtti_id_0[4];

#line 598 "erl_backend.elds.c"
static const MR_Integer erl_backend__elds__erl_backend__elds__functor_number_map_elds_rtti_id_0[4];

#line 601 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_term_0_0[1];

#line 604 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_0;

#line 607 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_term_0_1[1];

#line 610 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_1;

#line 613 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_term_0_2[1];

#line 616 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_2;

#line 619 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_term_0_3[1];

#line 622 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_3;

#line 625 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_term_0_4[1];

#line 628 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_4;

#line 631 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_term_0_5[1];

#line 634 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_5;

#line 637 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_term_0_6[1];

#line 640 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_6;

#line 643 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_term_0_7[1];

#line 646 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_7;

#line 649 "erl_backend.elds.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__elds__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 652 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_term_0_8[1];

#line 655 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_8;

#line 658 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_9;

#line 661 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_term_0_10[1];

#line 664 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_10;

#line 667 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_term_0_0[1];

#line 670 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_term_0_1[1];

#line 673 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_term_0_2[1];

#line 676 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_term_0_3[8];

#line 679 "erl_backend.elds.c"
static const MR_DuPtagLayout erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_term_0[4];

#line 682 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_name_ordered_elds_term_0[11];

#line 685 "erl_backend.elds.c"
static const MR_Integer erl_backend__elds__erl_backend__elds__functor_number_map_elds_term_0[11];

#line 688 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_unop_0_0;

#line 691 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_unop_0_1;

#line 694 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_unop_0_2;

#line 697 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_unop_0_3;

#line 700 "erl_backend.elds.c"
static const MR_EnumFunctorDescPtr erl_backend__elds__erl_backend__elds__enum_value_ordered_elds_unop_0[4];

#line 703 "erl_backend.elds.c"
static const MR_EnumFunctorDescPtr erl_backend__elds__erl_backend__elds__enum_name_ordered_elds_unop_0[4];

#line 706 "erl_backend.elds.c"
static const MR_Integer erl_backend__elds__erl_backend__elds__functor_number_map_elds_unop_0[4];

#line 709 "erl_backend.elds.c"
static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_0_0_10001(
#line 712 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_1,
#line 714 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2);

#line 717 "erl_backend.elds.c"
static void MR_CALL 
erl_backend__elds____Compare____elds_0_0_10001(
#line 720 "erl_backend.elds.c"
  MR_Box * erl_backend__elds__wrapper_arg_1,
#line 722 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2,
#line 724 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_3);

#line 727 "erl_backend.elds.c"
static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_binop_0_0_10001(
#line 730 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_1,
#line 732 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2);

#line 735 "erl_backend.elds.c"
static void MR_CALL 
erl_backend__elds____Compare____elds_binop_0_0_10001(
#line 738 "erl_backend.elds.c"
  MR_Box * erl_backend__elds__wrapper_arg_1,
#line 740 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2,
#line 742 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_3);

#line 745 "erl_backend.elds.c"
static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_body_0_0_10001(
#line 748 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_1,
#line 750 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2);

#line 753 "erl_backend.elds.c"
static void MR_CALL 
erl_backend__elds____Compare____elds_body_0_0_10001(
#line 756 "erl_backend.elds.c"
  MR_Box * erl_backend__elds__wrapper_arg_1,
#line 758 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2,
#line 760 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_3);

#line 763 "erl_backend.elds.c"
static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_call_target_0_0_10001(
#line 766 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_1,
#line 768 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2);

#line 771 "erl_backend.elds.c"
static void MR_CALL 
erl_backend__elds____Compare____elds_call_target_0_0_10001(
#line 774 "erl_backend.elds.c"
  MR_Box * erl_backend__elds__wrapper_arg_1,
#line 776 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2,
#line 778 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_3);

#line 781 "erl_backend.elds.c"
static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_case_0_0_10001(
#line 784 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_1,
#line 786 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2);

#line 789 "erl_backend.elds.c"
static void MR_CALL 
erl_backend__elds____Compare____elds_case_0_0_10001(
#line 792 "erl_backend.elds.c"
  MR_Box * erl_backend__elds__wrapper_arg_1,
#line 794 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2,
#line 796 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_3);

#line 799 "erl_backend.elds.c"
static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_catch_0_0_10001(
#line 802 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_1,
#line 804 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2);

#line 807 "erl_backend.elds.c"
static void MR_CALL 
erl_backend__elds____Compare____elds_catch_0_0_10001(
#line 810 "erl_backend.elds.c"
  MR_Box * erl_backend__elds__wrapper_arg_1,
#line 812 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2,
#line 814 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_3);

#line 817 "erl_backend.elds.c"
static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_clause_0_0_10001(
#line 820 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_1,
#line 822 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2);

#line 825 "erl_backend.elds.c"
static void MR_CALL 
erl_backend__elds____Compare____elds_clause_0_0_10001(
#line 828 "erl_backend.elds.c"
  MR_Box * erl_backend__elds__wrapper_arg_1,
#line 830 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2,
#line 832 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_3);

#line 835 "erl_backend.elds.c"
static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_defn_0_0_10001(
#line 838 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_1,
#line 840 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2);

#line 843 "erl_backend.elds.c"
static void MR_CALL 
erl_backend__elds____Compare____elds_defn_0_0_10001(
#line 846 "erl_backend.elds.c"
  MR_Box * erl_backend__elds__wrapper_arg_1,
#line 848 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2,
#line 850 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_3);

#line 853 "erl_backend.elds.c"
static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_expr_0_0_10001(
#line 856 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_1,
#line 858 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2);

#line 861 "erl_backend.elds.c"
static void MR_CALL 
erl_backend__elds____Compare____elds_expr_0_0_10001(
#line 864 "erl_backend.elds.c"
  MR_Box * erl_backend__elds__wrapper_arg_1,
#line 866 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2,
#line 868 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_3);

#line 871 "erl_backend.elds.c"
static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_foreign_export_defn_0_0_10001(
#line 874 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_1,
#line 876 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2);

#line 879 "erl_backend.elds.c"
static void MR_CALL 
erl_backend__elds____Compare____elds_foreign_export_defn_0_0_10001(
#line 882 "erl_backend.elds.c"
  MR_Box * erl_backend__elds__wrapper_arg_1,
#line 884 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2,
#line 886 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_3);

#line 889 "erl_backend.elds.c"
static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_rtti_defn_0_0_10001(
#line 892 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_1,
#line 894 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2);

#line 897 "erl_backend.elds.c"
static void MR_CALL 
erl_backend__elds____Compare____elds_rtti_defn_0_0_10001(
#line 900 "erl_backend.elds.c"
  MR_Box * erl_backend__elds__wrapper_arg_1,
#line 902 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2,
#line 904 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_3);

#line 907 "erl_backend.elds.c"
static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_rtti_id_0_0_10001(
#line 910 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_1,
#line 912 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2);

#line 915 "erl_backend.elds.c"
static void MR_CALL 
erl_backend__elds____Compare____elds_rtti_id_0_0_10001(
#line 918 "erl_backend.elds.c"
  MR_Box * erl_backend__elds__wrapper_arg_1,
#line 920 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2,
#line 922 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_3);

#line 925 "erl_backend.elds.c"
static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_term_0_0_10001(
#line 928 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_1,
#line 930 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2);

#line 933 "erl_backend.elds.c"
static void MR_CALL 
erl_backend__elds____Compare____elds_term_0_0_10001(
#line 936 "erl_backend.elds.c"
  MR_Box * erl_backend__elds__wrapper_arg_1,
#line 938 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2,
#line 940 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_3);

#line 943 "erl_backend.elds.c"
static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_unop_0_0_10001(
#line 946 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_1,
#line 948 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2);

#line 951 "erl_backend.elds.c"
static void MR_CALL 
erl_backend__elds____Compare____elds_unop_0_0_10001(
#line 954 "erl_backend.elds.c"
  MR_Box * erl_backend__elds__wrapper_arg_1,
#line 956 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2,
#line 958 "erl_backend.elds.c"
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



#line 1238 "erl_backend.elds.c"
static const MR_FA_PseudoTypeInfo_Struct1 erl_backend__elds__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1246 "erl_backend.elds.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__elds__set_ordlist__ti_set_ordlist_1mdbcomp__prim_data__type_ctor_info_sym_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0
  }
};

#line 1254 "erl_backend.elds.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__elds__list__ti_list_1parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0
  }
};

#line 1262 "erl_backend.elds.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__elds__list__ti_list_1parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0
  }
};

#line 1270 "erl_backend.elds.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__elds__list__ti_list_1erl_backend__elds__type_ctor_info_elds_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_defn_0
  }
};

#line 1278 "erl_backend.elds.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__elds__list__ti_list_1erl_backend__elds__type_ctor_info_elds_foreign_export_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_foreign_export_defn_0
  }
};

#line 1286 "erl_backend.elds.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__elds__list__ti_list_1erl_backend__elds__type_ctor_info_elds_rtti_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_rtti_defn_0
  }
};

#line 1294 "erl_backend.elds.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__elds__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

#line 1302 "erl_backend.elds.c"
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

#line 1315 "erl_backend.elds.c"
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

#line 1328 "erl_backend.elds.c"
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

#line 1343 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_0_0[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_0_0
};

#line 1348 "erl_backend.elds.c"
static const MR_DuPtagLayout erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_0_0
  }
};

#line 1357 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_name_ordered_elds_0[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_0_0
};

#line 1362 "erl_backend.elds.c"
static const MR_Integer erl_backend__elds__erl_backend__elds__functor_number_map_elds_0[1] = {
  (MR_Integer) 0
};

#line 1367 "erl_backend.elds.c"
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

#line 1388 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_0 = {
  (MR_String) "mul",
  (MR_Integer) 0
};

#line 1394 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_1 = {
  (MR_String) "float_div",
  (MR_Integer) 1
};

#line 1400 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_2 = {
  (MR_String) "int_div",
  (MR_Integer) 2
};

#line 1406 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_3 = {
  (MR_String) "rem",
  (MR_Integer) 3
};

#line 1412 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_4 = {
  (MR_String) "band",
  (MR_Integer) 4
};

#line 1418 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_5 = {
  (MR_String) "add",
  (MR_Integer) 5
};

#line 1424 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_6 = {
  (MR_String) "sub",
  (MR_Integer) 6
};

#line 1430 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_7 = {
  (MR_String) "bor",
  (MR_Integer) 7
};

#line 1436 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_8 = {
  (MR_String) "bxor",
  (MR_Integer) 8
};

#line 1442 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_9 = {
  (MR_String) "bsl",
  (MR_Integer) 9
};

#line 1448 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_10 = {
  (MR_String) "bsr",
  (MR_Integer) 10
};

#line 1454 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_11 = {
  (MR_String) "=<",
  (MR_Integer) 11
};

#line 1460 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_12 = {
  (MR_String) "<",
  (MR_Integer) 12
};

#line 1466 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_13 = {
  (MR_String) ">=",
  (MR_Integer) 13
};

#line 1472 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_14 = {
  (MR_String) ">",
  (MR_Integer) 14
};

#line 1478 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_15 = {
  (MR_String) "=:=",
  (MR_Integer) 15
};

#line 1484 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_16 = {
  (MR_String) "=/=",
  (MR_Integer) 16
};

#line 1490 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_17 = {
  (MR_String) "andalso",
  (MR_Integer) 17
};

#line 1496 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_18 = {
  (MR_String) "orelse",
  (MR_Integer) 18
};

#line 1502 "erl_backend.elds.c"
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

#line 1525 "erl_backend.elds.c"
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

#line 1548 "erl_backend.elds.c"
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

#line 1571 "erl_backend.elds.c"
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

#line 1592 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_body_0_0[1] = {
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_clause_0
};

#line 1597 "erl_backend.elds.c"
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

#line 1612 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_body_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1617 "erl_backend.elds.c"
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

#line 1632 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_body_0_0[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_body_0_0
};

#line 1637 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_body_0_1[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_body_0_1
};

#line 1642 "erl_backend.elds.c"
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

#line 1656 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_name_ordered_elds_body_0[2] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_body_0_0,
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_body_0_1
};

#line 1662 "erl_backend.elds.c"
static const MR_Integer erl_backend__elds__erl_backend__elds__functor_number_map_elds_body_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1668 "erl_backend.elds.c"
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

#line 1689 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_call_target_0_0[1] = {
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
};

#line 1694 "erl_backend.elds.c"
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

#line 1709 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_call_target_0_1[1] = {
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0
};

#line 1714 "erl_backend.elds.c"
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

#line 1729 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_call_target_0_2[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 1734 "erl_backend.elds.c"
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

#line 1749 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_call_target_0_0[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_call_target_0_0
};

#line 1754 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_call_target_0_1[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_call_target_0_1
};

#line 1759 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_call_target_0_2[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_call_target_0_2
};

#line 1764 "erl_backend.elds.c"
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

#line 1783 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_name_ordered_elds_call_target_0[3] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_call_target_0_2,
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_call_target_0_1,
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_call_target_0_0
};

#line 1790 "erl_backend.elds.c"
static const MR_Integer erl_backend__elds__erl_backend__elds__functor_number_map_elds_call_target_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1797 "erl_backend.elds.c"
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

#line 1818 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_case_0_0[2] = {
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_term_0,
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0
};

#line 1824 "erl_backend.elds.c"
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

#line 1839 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_case_0_0[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_case_0_0
};

#line 1844 "erl_backend.elds.c"
static const MR_DuPtagLayout erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_case_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_case_0_0
  }
};

#line 1853 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_name_ordered_elds_case_0[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_case_0_0
};

#line 1858 "erl_backend.elds.c"
static const MR_Integer erl_backend__elds__erl_backend__elds__functor_number_map_elds_case_0[1] = {
  (MR_Integer) 0
};

#line 1863 "erl_backend.elds.c"
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

#line 1884 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_catch_0_0[3] = {
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_term_0,
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_term_0,
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0
};

#line 1891 "erl_backend.elds.c"
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

#line 1906 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_catch_0_0[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_catch_0_0
};

#line 1911 "erl_backend.elds.c"
static const MR_DuPtagLayout erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_catch_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_catch_0_0
  }
};

#line 1920 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_name_ordered_elds_catch_0[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_catch_0_0
};

#line 1925 "erl_backend.elds.c"
static const MR_Integer erl_backend__elds__erl_backend__elds__functor_number_map_elds_catch_0[1] = {
  (MR_Integer) 0
};

#line 1930 "erl_backend.elds.c"
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

#line 1951 "erl_backend.elds.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__elds__list__ti_list_1erl_backend__elds__type_ctor_info_elds_term_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_term_0
  }
};

#line 1959 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_clause_0_0[2] = {
  (MR_PseudoTypeInfo) &erl_backend__elds__list__ti_list_1erl_backend__elds__type_ctor_info_elds_term_0,
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0
};

#line 1965 "erl_backend.elds.c"
static const MR_ConstString erl_backend__elds__erl_backend__elds__field_names_elds_clause_0_0[2] = {
  (MR_String) "clause_pattern",
  (MR_String) "clause_expr"
};

#line 1971 "erl_backend.elds.c"
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

#line 1986 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_clause_0_0[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_clause_0_0
};

#line 1991 "erl_backend.elds.c"
static const MR_DuPtagLayout erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_clause_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_clause_0_0
  }
};

#line 2000 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_name_ordered_elds_clause_0[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_clause_0_0
};

#line 2005 "erl_backend.elds.c"
static const MR_Integer erl_backend__elds__erl_backend__elds__functor_number_map_elds_clause_0[1] = {
  (MR_Integer) 0
};

#line 2010 "erl_backend.elds.c"
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

#line 2031 "erl_backend.elds.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__elds__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2039 "erl_backend.elds.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__elds__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 2047 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_defn_0_0[4] = {
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
  (MR_PseudoTypeInfo) &erl_backend__elds__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_body_0,
  (MR_PseudoTypeInfo) &erl_backend__elds__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0
};

#line 2055 "erl_backend.elds.c"
static const MR_ConstString erl_backend__elds__erl_backend__elds__field_names_elds_defn_0_0[4] = {
  (MR_String) "defn_proc_id",
  (MR_String) "defn_varset",
  (MR_String) "defn_body",
  (MR_String) "defn_env_vars"
};

#line 2063 "erl_backend.elds.c"
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

#line 2078 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_defn_0_0[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_defn_0_0
};

#line 2083 "erl_backend.elds.c"
static const MR_DuPtagLayout erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_defn_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_defn_0_0
  }
};

#line 2092 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_name_ordered_elds_defn_0[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_defn_0_0
};

#line 2097 "erl_backend.elds.c"
static const MR_Integer erl_backend__elds__erl_backend__elds__functor_number_map_elds_defn_0[1] = {
  (MR_Integer) 0
};

#line 2102 "erl_backend.elds.c"
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

#line 2123 "erl_backend.elds.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__elds__list__ti_list_1erl_backend__elds__type_ctor_info_elds_expr_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0
  }
};

#line 2131 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_0[1] = {
  (MR_PseudoTypeInfo) &erl_backend__elds__list__ti_list_1erl_backend__elds__type_ctor_info_elds_expr_0
};

#line 2136 "erl_backend.elds.c"
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

#line 2151 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_1[1] = {
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_term_0
};

#line 2156 "erl_backend.elds.c"
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

#line 2171 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_2[2] = {
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0,
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0
};

#line 2177 "erl_backend.elds.c"
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

#line 2192 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_3[2] = {
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_unop_0,
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0
};

#line 2198 "erl_backend.elds.c"
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

#line 2213 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_4[3] = {
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_binop_0,
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0,
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0
};

#line 2220 "erl_backend.elds.c"
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

#line 2235 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_5[2] = {
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_call_target_0,
  (MR_PseudoTypeInfo) &erl_backend__elds__list__ti_list_1erl_backend__elds__type_ctor_info_elds_expr_0
};

#line 2241 "erl_backend.elds.c"
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

#line 2256 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_6[1] = {
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_rtti_id_0
};

#line 2261 "erl_backend.elds.c"
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

#line 2276 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_7[1] = {
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_clause_0
};

#line 2281 "erl_backend.elds.c"
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

#line 2296 "erl_backend.elds.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__elds__list__ti_list_1erl_backend__elds__type_ctor_info_elds_case_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_case_0
  }
};

#line 2304 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_8[2] = {
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0,
  (MR_PseudoTypeInfo) &erl_backend__elds__list__ti_list_1erl_backend__elds__type_ctor_info_elds_case_0
};

#line 2310 "erl_backend.elds.c"
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

#line 2325 "erl_backend.elds.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__elds__maybe__ti_maybe_1erl_backend__elds__type_ctor_info_elds_catch_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_catch_0
  }
};

#line 2333 "erl_backend.elds.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__elds__maybe__ti_maybe_1erl_backend__elds__type_ctor_info_elds_expr_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0
  }
};

#line 2341 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_9[4] = {
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0,
  (MR_PseudoTypeInfo) &erl_backend__elds__list__ti_list_1erl_backend__elds__type_ctor_info_elds_case_0,
  (MR_PseudoTypeInfo) &erl_backend__elds__maybe__ti_maybe_1erl_backend__elds__type_ctor_info_elds_catch_0,
  (MR_PseudoTypeInfo) &erl_backend__elds__maybe__ti_maybe_1erl_backend__elds__type_ctor_info_elds_expr_0
};

#line 2349 "erl_backend.elds.c"
static const MR_ConstString erl_backend__elds__erl_backend__elds__field_names_elds_expr_0_9[4] = {
  (MR_String) "try_expr",
  (MR_String) "try_cases",
  (MR_String) "try_catch",
  (MR_String) "try_after"
};

#line 2357 "erl_backend.elds.c"
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

#line 2372 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_10[1] = {
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0
};

#line 2377 "erl_backend.elds.c"
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

#line 2392 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_11[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0
};

#line 2398 "erl_backend.elds.c"
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

#line 2413 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_12[2] = {
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0,
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0
};

#line 2419 "erl_backend.elds.c"
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

#line 2434 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_13[1] = {
  (MR_PseudoTypeInfo) &erl_backend__elds__list__ti_list_1erl_backend__elds__type_ctor_info_elds_case_0
};

#line 2439 "erl_backend.elds.c"
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

#line 2454 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_expr_0_0[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_7
};

#line 2459 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_expr_0_1[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_0
};

#line 2464 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_expr_0_2[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_1
};

#line 2469 "erl_backend.elds.c"
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

#line 2484 "erl_backend.elds.c"
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

#line 2508 "erl_backend.elds.c"
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

#line 2526 "erl_backend.elds.c"
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

#line 2544 "erl_backend.elds.c"
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

#line 2565 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_foreign_export_defn_0_0[3] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &erl_backend__elds__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_clause_0
};

#line 2572 "erl_backend.elds.c"
static const MR_ConstString erl_backend__elds__erl_backend__elds__field_names_elds_foreign_export_defn_0_0[3] = {
  (MR_String) "fe_defn_name",
  (MR_String) "fe_defn_varset",
  (MR_String) "fe_defn_clause"
};

#line 2579 "erl_backend.elds.c"
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

#line 2594 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_foreign_export_defn_0_0[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_foreign_export_defn_0_0
};

#line 2599 "erl_backend.elds.c"
static const MR_DuPtagLayout erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_foreign_export_defn_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_foreign_export_defn_0_0
  }
};

#line 2608 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_name_ordered_elds_foreign_export_defn_0[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_foreign_export_defn_0_0
};

#line 2613 "erl_backend.elds.c"
static const MR_Integer erl_backend__elds__erl_backend__elds__functor_number_map_elds_foreign_export_defn_0[1] = {
  (MR_Integer) 0
};

#line 2618 "erl_backend.elds.c"
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

#line 2639 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_rtti_defn_0_0[4] = {
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_rtti_id_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &erl_backend__elds__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_clause_0
};

#line 2647 "erl_backend.elds.c"
static const MR_ConstString erl_backend__elds__erl_backend__elds__field_names_elds_rtti_defn_0_0[4] = {
  (MR_String) "rtti_defn_id",
  (MR_String) "rtti_defn_exported",
  (MR_String) "rtti_defn_varset",
  (MR_String) "rtti_defn_clause"
};

#line 2655 "erl_backend.elds.c"
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

#line 2670 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_rtti_defn_0_0[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_rtti_defn_0_0
};

#line 2675 "erl_backend.elds.c"
static const MR_DuPtagLayout erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_rtti_defn_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_rtti_defn_0_0
  }
};

#line 2684 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_name_ordered_elds_rtti_defn_0[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_rtti_defn_0_0
};

#line 2689 "erl_backend.elds.c"
static const MR_Integer erl_backend__elds__erl_backend__elds__functor_number_map_elds_rtti_defn_0[1] = {
  (MR_Integer) 0
};

#line 2694 "erl_backend.elds.c"
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

#line 2715 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_rtti_id_0_0[1] = {
  (MR_PseudoTypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_type_ctor_0
};

#line 2720 "erl_backend.elds.c"
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

#line 2735 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_rtti_id_0_1[1] = {
  (MR_PseudoTypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_type_info_0
};

#line 2740 "erl_backend.elds.c"
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

#line 2755 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_rtti_id_0_2[1] = {
  (MR_PseudoTypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_pseudo_type_info_0
};

#line 2760 "erl_backend.elds.c"
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

#line 2775 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_rtti_id_0_3[3] = {
  (MR_PseudoTypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_tc_name_0,
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 2782 "erl_backend.elds.c"
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

#line 2797 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_rtti_id_0_0[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_rtti_id_0_0
};

#line 2802 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_rtti_id_0_1[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_rtti_id_0_1
};

#line 2807 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_rtti_id_0_2[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_rtti_id_0_2
};

#line 2812 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_rtti_id_0_3[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_rtti_id_0_3
};

#line 2817 "erl_backend.elds.c"
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

#line 2841 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_name_ordered_elds_rtti_id_0[4] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_rtti_id_0_3,
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_rtti_id_0_2,
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_rtti_id_0_0,
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_rtti_id_0_1
};

#line 2849 "erl_backend.elds.c"
static const MR_Integer erl_backend__elds__erl_backend__elds__functor_number_map_elds_rtti_id_0[4] = {
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 2857 "erl_backend.elds.c"
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

#line 2878 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_term_0_0[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_character_0
};

#line 2883 "erl_backend.elds.c"
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

#line 2898 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_term_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2903 "erl_backend.elds.c"
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

#line 2918 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_term_0_2[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0
};

#line 2923 "erl_backend.elds.c"
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

#line 2938 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_term_0_3[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 2943 "erl_backend.elds.c"
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

#line 2958 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_term_0_4[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 2963 "erl_backend.elds.c"
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

#line 2978 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_term_0_5[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 2983 "erl_backend.elds.c"
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

#line 2998 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_term_0_6[1] = {
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0
};

#line 3003 "erl_backend.elds.c"
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

#line 3018 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_term_0_7[1] = {
  (MR_PseudoTypeInfo) &erl_backend__elds__list__ti_list_1erl_backend__elds__type_ctor_info_elds_expr_0
};

#line 3023 "erl_backend.elds.c"
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

#line 3038 "erl_backend.elds.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__elds__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 3046 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_term_0_8[1] = {
  (MR_PseudoTypeInfo) &erl_backend__elds__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

#line 3051 "erl_backend.elds.c"
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

#line 3066 "erl_backend.elds.c"
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

#line 3081 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_term_0_10[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 3086 "erl_backend.elds.c"
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

#line 3101 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_term_0_0[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_9
};

#line 3106 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_term_0_1[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_0
};

#line 3111 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_term_0_2[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_1
};

#line 3116 "erl_backend.elds.c"
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

#line 3128 "erl_backend.elds.c"
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

#line 3152 "erl_backend.elds.c"
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

#line 3167 "erl_backend.elds.c"
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

#line 3182 "erl_backend.elds.c"
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

#line 3203 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_unop_0_0 = {
  (MR_String) "plus",
  (MR_Integer) 0
};

#line 3209 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_unop_0_1 = {
  (MR_String) "minus",
  (MR_Integer) 1
};

#line 3215 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_unop_0_2 = {
  (MR_String) "bnot",
  (MR_Integer) 2
};

#line 3221 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_unop_0_3 = {
  (MR_String) "logical_not",
  (MR_Integer) 3
};

#line 3227 "erl_backend.elds.c"
static const MR_EnumFunctorDescPtr erl_backend__elds__erl_backend__elds__enum_value_ordered_elds_unop_0[4] = {
  &erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_unop_0_0,
  &erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_unop_0_1,
  &erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_unop_0_2,
  &erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_unop_0_3
};

#line 3235 "erl_backend.elds.c"
static const MR_EnumFunctorDescPtr erl_backend__elds__erl_backend__elds__enum_name_ordered_elds_unop_0[4] = {
  &erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_unop_0_2,
  &erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_unop_0_3,
  &erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_unop_0_1,
  &erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_unop_0_0
};

#line 3243 "erl_backend.elds.c"
static const MR_Integer erl_backend__elds__erl_backend__elds__functor_number_map_elds_unop_0[4] = {
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 3251 "erl_backend.elds.c"
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

#line 3272 "erl_backend.elds.c"
static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_0_0_10001(
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
      erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_0_0(((MR_Word) erl_backend__elds__wrapper_arg_1), ((MR_Word) erl_backend__elds__wrapper_arg_2));
    }
#line 3291 "erl_backend.elds.c"
    return erl_backend__elds__succeeded;
#line 3293 "erl_backend.elds.c"
  }
#line 3295 "erl_backend.elds.c"
}

#line 3298 "erl_backend.elds.c"
static void MR_CALL 
erl_backend__elds____Compare____elds_0_0_10001(
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
      erl_backend__elds____Compare____elds_0_0(&erl_backend__elds__conv0_HeadVar__1_1, ((MR_Word) erl_backend__elds__wrapper_arg_2), ((MR_Word) erl_backend__elds__wrapper_arg_3));
    }
#line 3319 "erl_backend.elds.c"
    *erl_backend__elds__wrapper_arg_1 = ((MR_Box) (erl_backend__elds__conv0_HeadVar__1_1));
#line 3321 "erl_backend.elds.c"
  }
#line 3323 "erl_backend.elds.c"
}

#line 3326 "erl_backend.elds.c"
static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_binop_0_0_10001(
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
      erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_binop_0_0(((MR_Word) erl_backend__elds__wrapper_arg_1), ((MR_Word) erl_backend__elds__wrapper_arg_2));
    }
#line 3345 "erl_backend.elds.c"
    return erl_backend__elds__succeeded;
#line 3347 "erl_backend.elds.c"
  }
#line 3349 "erl_backend.elds.c"
}

#line 3352 "erl_backend.elds.c"
static void MR_CALL 
erl_backend__elds____Compare____elds_binop_0_0_10001(
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
      erl_backend__elds____Compare____elds_binop_0_0(&erl_backend__elds__conv0_HeadVar__1_1, ((MR_Word) erl_backend__elds__wrapper_arg_2), ((MR_Word) erl_backend__elds__wrapper_arg_3));
    }
#line 3373 "erl_backend.elds.c"
    *erl_backend__elds__wrapper_arg_1 = ((MR_Box) (erl_backend__elds__conv0_HeadVar__1_1));
#line 3375 "erl_backend.elds.c"
  }
#line 3377 "erl_backend.elds.c"
}

#line 3380 "erl_backend.elds.c"
static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_body_0_0_10001(
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
      erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_body_0_0(((MR_Word) erl_backend__elds__wrapper_arg_1), ((MR_Word) erl_backend__elds__wrapper_arg_2));
    }
#line 3399 "erl_backend.elds.c"
    return erl_backend__elds__succeeded;
#line 3401 "erl_backend.elds.c"
  }
#line 3403 "erl_backend.elds.c"
}

#line 3406 "erl_backend.elds.c"
static void MR_CALL 
erl_backend__elds____Compare____elds_body_0_0_10001(
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
      erl_backend__elds____Compare____elds_body_0_0(&erl_backend__elds__conv0_HeadVar__1_1, ((MR_Word) erl_backend__elds__wrapper_arg_2), ((MR_Word) erl_backend__elds__wrapper_arg_3));
    }
#line 3427 "erl_backend.elds.c"
    *erl_backend__elds__wrapper_arg_1 = ((MR_Box) (erl_backend__elds__conv0_HeadVar__1_1));
#line 3429 "erl_backend.elds.c"
  }
#line 3431 "erl_backend.elds.c"
}

#line 3434 "erl_backend.elds.c"
static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_call_target_0_0_10001(
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
      erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_call_target_0_0(((MR_Word) erl_backend__elds__wrapper_arg_1), ((MR_Word) erl_backend__elds__wrapper_arg_2));
    }
#line 3453 "erl_backend.elds.c"
    return erl_backend__elds__succeeded;
#line 3455 "erl_backend.elds.c"
  }
#line 3457 "erl_backend.elds.c"
}

#line 3460 "erl_backend.elds.c"
static void MR_CALL 
erl_backend__elds____Compare____elds_call_target_0_0_10001(
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
      erl_backend__elds____Compare____elds_call_target_0_0(&erl_backend__elds__conv0_HeadVar__1_1, ((MR_Word) erl_backend__elds__wrapper_arg_2), ((MR_Word) erl_backend__elds__wrapper_arg_3));
    }
#line 3481 "erl_backend.elds.c"
    *erl_backend__elds__wrapper_arg_1 = ((MR_Box) (erl_backend__elds__conv0_HeadVar__1_1));
#line 3483 "erl_backend.elds.c"
  }
#line 3485 "erl_backend.elds.c"
}

#line 3488 "erl_backend.elds.c"
static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_case_0_0_10001(
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
      erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_case_0_0(((MR_Word) erl_backend__elds__wrapper_arg_1), ((MR_Word) erl_backend__elds__wrapper_arg_2));
    }
#line 3507 "erl_backend.elds.c"
    return erl_backend__elds__succeeded;
#line 3509 "erl_backend.elds.c"
  }
#line 3511 "erl_backend.elds.c"
}

#line 3514 "erl_backend.elds.c"
static void MR_CALL 
erl_backend__elds____Compare____elds_case_0_0_10001(
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
      erl_backend__elds____Compare____elds_case_0_0(&erl_backend__elds__conv0_HeadVar__1_1, ((MR_Word) erl_backend__elds__wrapper_arg_2), ((MR_Word) erl_backend__elds__wrapper_arg_3));
    }
#line 3535 "erl_backend.elds.c"
    *erl_backend__elds__wrapper_arg_1 = ((MR_Box) (erl_backend__elds__conv0_HeadVar__1_1));
#line 3537 "erl_backend.elds.c"
  }
#line 3539 "erl_backend.elds.c"
}

#line 3542 "erl_backend.elds.c"
static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_catch_0_0_10001(
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
      erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_catch_0_0(((MR_Word) erl_backend__elds__wrapper_arg_1), ((MR_Word) erl_backend__elds__wrapper_arg_2));
    }
#line 3561 "erl_backend.elds.c"
    return erl_backend__elds__succeeded;
#line 3563 "erl_backend.elds.c"
  }
#line 3565 "erl_backend.elds.c"
}

#line 3568 "erl_backend.elds.c"
static void MR_CALL 
erl_backend__elds____Compare____elds_catch_0_0_10001(
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
      erl_backend__elds____Compare____elds_catch_0_0(&erl_backend__elds__conv0_HeadVar__1_1, ((MR_Word) erl_backend__elds__wrapper_arg_2), ((MR_Word) erl_backend__elds__wrapper_arg_3));
    }
#line 3589 "erl_backend.elds.c"
    *erl_backend__elds__wrapper_arg_1 = ((MR_Box) (erl_backend__elds__conv0_HeadVar__1_1));
#line 3591 "erl_backend.elds.c"
  }
#line 3593 "erl_backend.elds.c"
}

#line 3596 "erl_backend.elds.c"
static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_clause_0_0_10001(
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
      erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_clause_0_0(((MR_Word) erl_backend__elds__wrapper_arg_1), ((MR_Word) erl_backend__elds__wrapper_arg_2));
    }
#line 3615 "erl_backend.elds.c"
    return erl_backend__elds__succeeded;
#line 3617 "erl_backend.elds.c"
  }
#line 3619 "erl_backend.elds.c"
}

#line 3622 "erl_backend.elds.c"
static void MR_CALL 
erl_backend__elds____Compare____elds_clause_0_0_10001(
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
      erl_backend__elds____Compare____elds_clause_0_0(&erl_backend__elds__conv0_HeadVar__1_1, ((MR_Word) erl_backend__elds__wrapper_arg_2), ((MR_Word) erl_backend__elds__wrapper_arg_3));
    }
#line 3643 "erl_backend.elds.c"
    *erl_backend__elds__wrapper_arg_1 = ((MR_Box) (erl_backend__elds__conv0_HeadVar__1_1));
#line 3645 "erl_backend.elds.c"
  }
#line 3647 "erl_backend.elds.c"
}

#line 3650 "erl_backend.elds.c"
static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_defn_0_0_10001(
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
      erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_defn_0_0(((MR_Word) erl_backend__elds__wrapper_arg_1), ((MR_Word) erl_backend__elds__wrapper_arg_2));
    }
#line 3669 "erl_backend.elds.c"
    return erl_backend__elds__succeeded;
#line 3671 "erl_backend.elds.c"
  }
#line 3673 "erl_backend.elds.c"
}

#line 3676 "erl_backend.elds.c"
static void MR_CALL 
erl_backend__elds____Compare____elds_defn_0_0_10001(
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
      erl_backend__elds____Compare____elds_defn_0_0(&erl_backend__elds__conv0_HeadVar__1_1, ((MR_Word) erl_backend__elds__wrapper_arg_2), ((MR_Word) erl_backend__elds__wrapper_arg_3));
    }
#line 3697 "erl_backend.elds.c"
    *erl_backend__elds__wrapper_arg_1 = ((MR_Box) (erl_backend__elds__conv0_HeadVar__1_1));
#line 3699 "erl_backend.elds.c"
  }
#line 3701 "erl_backend.elds.c"
}

#line 3704 "erl_backend.elds.c"
static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_expr_0_0_10001(
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
      erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_expr_0_0(((MR_Word) erl_backend__elds__wrapper_arg_1), ((MR_Word) erl_backend__elds__wrapper_arg_2));
    }
#line 3723 "erl_backend.elds.c"
    return erl_backend__elds__succeeded;
#line 3725 "erl_backend.elds.c"
  }
#line 3727 "erl_backend.elds.c"
}

#line 3730 "erl_backend.elds.c"
static void MR_CALL 
erl_backend__elds____Compare____elds_expr_0_0_10001(
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
      erl_backend__elds____Compare____elds_expr_0_0(&erl_backend__elds__conv0_HeadVar__1_1, ((MR_Word) erl_backend__elds__wrapper_arg_2), ((MR_Word) erl_backend__elds__wrapper_arg_3));
    }
#line 3751 "erl_backend.elds.c"
    *erl_backend__elds__wrapper_arg_1 = ((MR_Box) (erl_backend__elds__conv0_HeadVar__1_1));
#line 3753 "erl_backend.elds.c"
  }
#line 3755 "erl_backend.elds.c"
}

#line 3758 "erl_backend.elds.c"
static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_foreign_export_defn_0_0_10001(
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
      erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_foreign_export_defn_0_0(((MR_Word) erl_backend__elds__wrapper_arg_1), ((MR_Word) erl_backend__elds__wrapper_arg_2));
    }
#line 3777 "erl_backend.elds.c"
    return erl_backend__elds__succeeded;
#line 3779 "erl_backend.elds.c"
  }
#line 3781 "erl_backend.elds.c"
}

#line 3784 "erl_backend.elds.c"
static void MR_CALL 
erl_backend__elds____Compare____elds_foreign_export_defn_0_0_10001(
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
      erl_backend__elds____Compare____elds_foreign_export_defn_0_0(&erl_backend__elds__conv0_HeadVar__1_1, ((MR_Word) erl_backend__elds__wrapper_arg_2), ((MR_Word) erl_backend__elds__wrapper_arg_3));
    }
#line 3805 "erl_backend.elds.c"
    *erl_backend__elds__wrapper_arg_1 = ((MR_Box) (erl_backend__elds__conv0_HeadVar__1_1));
#line 3807 "erl_backend.elds.c"
  }
#line 3809 "erl_backend.elds.c"
}

#line 3812 "erl_backend.elds.c"
static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_rtti_defn_0_0_10001(
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
      erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_rtti_defn_0_0(((MR_Word) erl_backend__elds__wrapper_arg_1), ((MR_Word) erl_backend__elds__wrapper_arg_2));
    }
#line 3831 "erl_backend.elds.c"
    return erl_backend__elds__succeeded;
#line 3833 "erl_backend.elds.c"
  }
#line 3835 "erl_backend.elds.c"
}

#line 3838 "erl_backend.elds.c"
static void MR_CALL 
erl_backend__elds____Compare____elds_rtti_defn_0_0_10001(
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
      erl_backend__elds____Compare____elds_rtti_defn_0_0(&erl_backend__elds__conv0_HeadVar__1_1, ((MR_Word) erl_backend__elds__wrapper_arg_2), ((MR_Word) erl_backend__elds__wrapper_arg_3));
    }
#line 3859 "erl_backend.elds.c"
    *erl_backend__elds__wrapper_arg_1 = ((MR_Box) (erl_backend__elds__conv0_HeadVar__1_1));
#line 3861 "erl_backend.elds.c"
  }
#line 3863 "erl_backend.elds.c"
}

#line 3866 "erl_backend.elds.c"
static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_rtti_id_0_0_10001(
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
      erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_rtti_id_0_0(((MR_Word) erl_backend__elds__wrapper_arg_1), ((MR_Word) erl_backend__elds__wrapper_arg_2));
    }
#line 3885 "erl_backend.elds.c"
    return erl_backend__elds__succeeded;
#line 3887 "erl_backend.elds.c"
  }
#line 3889 "erl_backend.elds.c"
}

#line 3892 "erl_backend.elds.c"
static void MR_CALL 
erl_backend__elds____Compare____elds_rtti_id_0_0_10001(
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
      erl_backend__elds____Compare____elds_rtti_id_0_0(&erl_backend__elds__conv0_HeadVar__1_1, ((MR_Word) erl_backend__elds__wrapper_arg_2), ((MR_Word) erl_backend__elds__wrapper_arg_3));
    }
#line 3913 "erl_backend.elds.c"
    *erl_backend__elds__wrapper_arg_1 = ((MR_Box) (erl_backend__elds__conv0_HeadVar__1_1));
#line 3915 "erl_backend.elds.c"
  }
#line 3917 "erl_backend.elds.c"
}

#line 3920 "erl_backend.elds.c"
static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_term_0_0_10001(
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
      erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_term_0_0(((MR_Word) erl_backend__elds__wrapper_arg_1), ((MR_Word) erl_backend__elds__wrapper_arg_2));
    }
#line 3939 "erl_backend.elds.c"
    return erl_backend__elds__succeeded;
#line 3941 "erl_backend.elds.c"
  }
#line 3943 "erl_backend.elds.c"
}

#line 3946 "erl_backend.elds.c"
static void MR_CALL 
erl_backend__elds____Compare____elds_term_0_0_10001(
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
      erl_backend__elds____Compare____elds_term_0_0(&erl_backend__elds__conv0_HeadVar__1_1, ((MR_Word) erl_backend__elds__wrapper_arg_2), ((MR_Word) erl_backend__elds__wrapper_arg_3));
    }
#line 3967 "erl_backend.elds.c"
    *erl_backend__elds__wrapper_arg_1 = ((MR_Box) (erl_backend__elds__conv0_HeadVar__1_1));
#line 3969 "erl_backend.elds.c"
  }
#line 3971 "erl_backend.elds.c"
}

#line 3974 "erl_backend.elds.c"
static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_unop_0_0_10001(
#line 3977 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_1,
#line 3979 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2)
#line 3981 "erl_backend.elds.c"
{
#line 3983 "erl_backend.elds.c"
  {
#line 3985 "erl_backend.elds.c"
    MR_bool erl_backend__elds__succeeded;

#line 3988 "erl_backend.elds.c"
    {
#line 3990 "erl_backend.elds.c"
      erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_unop_0_0(((MR_Word) erl_backend__elds__wrapper_arg_1), ((MR_Word) erl_backend__elds__wrapper_arg_2));
    }
#line 3993 "erl_backend.elds.c"
    return erl_backend__elds__succeeded;
#line 3995 "erl_backend.elds.c"
  }
#line 3997 "erl_backend.elds.c"
}

#line 4000 "erl_backend.elds.c"
static void MR_CALL 
erl_backend__elds____Compare____elds_unop_0_0_10001(
#line 4003 "erl_backend.elds.c"
  MR_Box * erl_backend__elds__wrapper_arg_1,
#line 4005 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2,
#line 4007 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_3)
#line 4009 "erl_backend.elds.c"
{
#line 4011 "erl_backend.elds.c"
  {
#line 4013 "erl_backend.elds.c"
    MR_Word erl_backend__elds__conv0_HeadVar__1_1;

#line 4016 "erl_backend.elds.c"
    {
#line 4018 "erl_backend.elds.c"
      erl_backend__elds____Compare____elds_unop_0_0(&erl_backend__elds__conv0_HeadVar__1_1, ((MR_Word) erl_backend__elds__wrapper_arg_2), ((MR_Word) erl_backend__elds__wrapper_arg_3));
    }
#line 4021 "erl_backend.elds.c"
    *erl_backend__elds__wrapper_arg_1 = ((MR_Box) (erl_backend__elds__conv0_HeadVar__1_1));
#line 4023 "erl_backend.elds.c"
  }
#line 4025 "erl_backend.elds.c"
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
#line 4141 "erl_backend.elds.c"
  {
#line 4143 "erl_backend.elds.c"
    MR_bool erl_backend__elds__succeeded = (erl_backend__elds__HeadVar__2_1 == erl_backend__elds__HeadVar__2_2);

#line 4146 "erl_backend.elds.c"
    return erl_backend__elds__succeeded;
#line 4148 "erl_backend.elds.c"
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
#line 4177 "erl_backend.elds.c"
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
#line 4191 "erl_backend.elds.c"
            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
          else
#line 211 "elds.m"
            if (((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 4197 "erl_backend.elds.c"
              *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
            else
#line 211 "elds.m"
              if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 4203 "erl_backend.elds.c"
                *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
              else
#line 211 "elds.m"
                if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 4209 "erl_backend.elds.c"
                  *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                else
#line 211 "elds.m"
                  if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 4215 "erl_backend.elds.c"
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                  else
#line 211 "elds.m"
                    if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 4221 "erl_backend.elds.c"
                      *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                    else
#line 211 "elds.m"
                      if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 4227 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                      else
#line 211 "elds.m"
                        if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 4233 "erl_backend.elds.c"
                          *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                        else
#line 211 "elds.m"
                          if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 4239 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                          else
#line 4243 "erl_backend.elds.c"
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
#line 4256 "erl_backend.elds.c"
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
#line 4280 "erl_backend.elds.c"
                  *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                else
#line 211 "elds.m"
                  if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 4286 "erl_backend.elds.c"
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                  else
#line 211 "elds.m"
                    if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 4292 "erl_backend.elds.c"
                      *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                    else
#line 211 "elds.m"
                      if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 4298 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                      else
#line 211 "elds.m"
                        if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 4304 "erl_backend.elds.c"
                          *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                        else
#line 211 "elds.m"
                          if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 4310 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                          else
#line 211 "elds.m"
                            if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 4316 "erl_backend.elds.c"
                              *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                            else
#line 211 "elds.m"
                              if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 4322 "erl_backend.elds.c"
                                *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                              else
#line 4326 "erl_backend.elds.c"
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
#line 4341 "erl_backend.elds.c"
                *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
              else
#line 211 "elds.m"
                if (((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 4347 "erl_backend.elds.c"
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
#line 4371 "erl_backend.elds.c"
                      *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                    else
#line 211 "elds.m"
                      if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 4377 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                      else
#line 211 "elds.m"
                        if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 4383 "erl_backend.elds.c"
                          *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                        else
#line 211 "elds.m"
                          if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 4389 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                          else
#line 211 "elds.m"
                            if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 4395 "erl_backend.elds.c"
                              *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                            else
#line 211 "elds.m"
                              if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 4401 "erl_backend.elds.c"
                                *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                              else
#line 211 "elds.m"
                                if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 4407 "erl_backend.elds.c"
                                  *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                                else
#line 4411 "erl_backend.elds.c"
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
#line 4426 "erl_backend.elds.c"
                  *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                else
#line 211 "elds.m"
                  if (((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 4432 "erl_backend.elds.c"
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                  else
#line 211 "elds.m"
                    if (((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 4438 "erl_backend.elds.c"
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
#line 4462 "erl_backend.elds.c"
                          *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                        else
#line 211 "elds.m"
                          if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 4468 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                          else
#line 211 "elds.m"
                            if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 4474 "erl_backend.elds.c"
                              *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                            else
#line 211 "elds.m"
                              if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 4480 "erl_backend.elds.c"
                                *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                              else
#line 211 "elds.m"
                                if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 4486 "erl_backend.elds.c"
                                  *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                                else
#line 211 "elds.m"
                                  if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 4492 "erl_backend.elds.c"
                                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                                  else
#line 4496 "erl_backend.elds.c"
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
#line 4511 "erl_backend.elds.c"
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                  else
#line 211 "elds.m"
                    if (((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 4517 "erl_backend.elds.c"
                      *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                    else
#line 211 "elds.m"
                      if (((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 4523 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                      else
#line 211 "elds.m"
                        if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 4529 "erl_backend.elds.c"
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
#line 4553 "erl_backend.elds.c"
                              *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                            else
#line 211 "elds.m"
                              if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 4559 "erl_backend.elds.c"
                                *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                              else
#line 211 "elds.m"
                                if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 4565 "erl_backend.elds.c"
                                  *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                                else
#line 211 "elds.m"
                                  if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 4571 "erl_backend.elds.c"
                                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                                  else
#line 211 "elds.m"
                                    if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 4577 "erl_backend.elds.c"
                                      *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                                    else
#line 4581 "erl_backend.elds.c"
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
#line 4596 "erl_backend.elds.c"
                      *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                    else
#line 211 "elds.m"
                      if (((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 4602 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                      else
#line 211 "elds.m"
                        if (((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 4608 "erl_backend.elds.c"
                          *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                        else
#line 211 "elds.m"
                          if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 4614 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                          else
#line 211 "elds.m"
                            if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 4620 "erl_backend.elds.c"
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
#line 4644 "erl_backend.elds.c"
                                  *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                                else
#line 211 "elds.m"
                                  if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 4650 "erl_backend.elds.c"
                                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                                  else
#line 211 "elds.m"
                                    if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 4656 "erl_backend.elds.c"
                                      *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                                    else
#line 211 "elds.m"
                                      if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 4662 "erl_backend.elds.c"
                                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                                      else
#line 4666 "erl_backend.elds.c"
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
#line 4681 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                      else
#line 211 "elds.m"
                        if (((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 4687 "erl_backend.elds.c"
                          *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                        else
#line 211 "elds.m"
                          if (((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 4693 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                          else
#line 211 "elds.m"
                            if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 4699 "erl_backend.elds.c"
                              *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                            else
#line 211 "elds.m"
                              if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 4705 "erl_backend.elds.c"
                                *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                              else
#line 211 "elds.m"
                                if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 4711 "erl_backend.elds.c"
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
#line 4735 "erl_backend.elds.c"
                                      *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                                    else
#line 211 "elds.m"
                                      if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 4741 "erl_backend.elds.c"
                                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                                      else
#line 211 "elds.m"
                                        if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 4747 "erl_backend.elds.c"
                                          *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                                        else
#line 4751 "erl_backend.elds.c"
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
#line 4766 "erl_backend.elds.c"
                          *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                        else
#line 211 "elds.m"
                          if (((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 4772 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                          else
#line 211 "elds.m"
                            if (((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 4778 "erl_backend.elds.c"
                              *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                            else
#line 211 "elds.m"
                              if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 4784 "erl_backend.elds.c"
                                *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                              else
#line 211 "elds.m"
                                if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 4790 "erl_backend.elds.c"
                                  *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                                else
#line 211 "elds.m"
                                  if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 4796 "erl_backend.elds.c"
                                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                                  else
#line 211 "elds.m"
                                    if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 4802 "erl_backend.elds.c"
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
#line 4826 "erl_backend.elds.c"
                                          *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                                        else
#line 211 "elds.m"
                                          if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 4832 "erl_backend.elds.c"
                                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                                          else
#line 4836 "erl_backend.elds.c"
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
#line 4851 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                          else
#line 211 "elds.m"
                            if (((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 4857 "erl_backend.elds.c"
                              *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                            else
#line 211 "elds.m"
                              if (((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 4863 "erl_backend.elds.c"
                                *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                              else
#line 211 "elds.m"
                                if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 4869 "erl_backend.elds.c"
                                  *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                                else
#line 211 "elds.m"
                                  if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 4875 "erl_backend.elds.c"
                                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                                  else
#line 211 "elds.m"
                                    if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 4881 "erl_backend.elds.c"
                                      *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                                    else
#line 211 "elds.m"
                                      if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 4887 "erl_backend.elds.c"
                                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                                      else
#line 211 "elds.m"
                                        if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 4893 "erl_backend.elds.c"
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
#line 4917 "erl_backend.elds.c"
                                              *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                                            else
#line 4921 "erl_backend.elds.c"
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
#line 4936 "erl_backend.elds.c"
                              *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                            else
#line 211 "elds.m"
                              if (((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 4942 "erl_backend.elds.c"
                                *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                              else
#line 211 "elds.m"
                                if (((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 4948 "erl_backend.elds.c"
                                  *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                                else
#line 211 "elds.m"
                                  if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 4954 "erl_backend.elds.c"
                                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                                  else
#line 211 "elds.m"
                                    if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 4960 "erl_backend.elds.c"
                                      *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                                    else
#line 211 "elds.m"
                                      if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 4966 "erl_backend.elds.c"
                                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                                      else
#line 211 "elds.m"
                                        if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 4972 "erl_backend.elds.c"
                                          *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                                        else
#line 211 "elds.m"
                                          if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 4978 "erl_backend.elds.c"
                                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                                          else
#line 211 "elds.m"
                                            if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 4984 "erl_backend.elds.c"
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
#line 5006 "erl_backend.elds.c"
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
#line 5019 "erl_backend.elds.c"
                              *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                            else
#line 211 "elds.m"
                              if (((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 5025 "erl_backend.elds.c"
                                *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                              else
#line 211 "elds.m"
                                if (((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 5031 "erl_backend.elds.c"
                                  *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                                else
#line 211 "elds.m"
                                  if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 5037 "erl_backend.elds.c"
                                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                                  else
#line 211 "elds.m"
                                    if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 5043 "erl_backend.elds.c"
                                      *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                                    else
#line 211 "elds.m"
                                      if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 5049 "erl_backend.elds.c"
                                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                                      else
#line 211 "elds.m"
                                        if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 5055 "erl_backend.elds.c"
                                          *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                                        else
#line 211 "elds.m"
                                          if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 5061 "erl_backend.elds.c"
                                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                                          else
#line 211 "elds.m"
                                            if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 5067 "erl_backend.elds.c"
                                              *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                                            else
#line 211 "elds.m"
                                              if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 5073 "erl_backend.elds.c"
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
#line 5156 "erl_backend.elds.c"
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
#line 5181 "erl_backend.elds.c"
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
#line 5206 "erl_backend.elds.c"
                    {
#line 5208 "erl_backend.elds.c"
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
#line 5234 "erl_backend.elds.c"
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
#line 5259 "erl_backend.elds.c"
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
#line 5284 "erl_backend.elds.c"
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
#line 5309 "erl_backend.elds.c"
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
#line 5334 "erl_backend.elds.c"
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
#line 5361 "erl_backend.elds.c"
                                erl_backend__elds__TypeInfo_28_28 = (MR_Word) &erl_backend__elds_scalar_common_1[14];
#line 5363 "erl_backend.elds.c"
                                {
#line 5365 "erl_backend.elds.c"
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
#line 5391 "erl_backend.elds.c"
                                erl_backend__elds__TypeInfo_29_29 = (MR_Word) &erl_backend__elds_scalar_common_1[0];
#line 5393 "erl_backend.elds.c"
                                {
#line 5395 "erl_backend.elds.c"
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
#line 5433 "erl_backend.elds.c"
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
#line 5466 "erl_backend.elds.c"
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
#line 5486 "erl_backend.elds.c"
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
#line 5511 "erl_backend.elds.c"
              *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 110 "elds.m"
            else
#line 110 "elds.m"
              if (((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 5517 "erl_backend.elds.c"
                *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 110 "elds.m"
              else
#line 5521 "erl_backend.elds.c"
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
#line 5536 "erl_backend.elds.c"
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
#line 5560 "erl_backend.elds.c"
                  *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 110 "elds.m"
                else
#line 5564 "erl_backend.elds.c"
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
#line 5579 "erl_backend.elds.c"
                *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 110 "elds.m"
              else
#line 110 "elds.m"
                if (((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 5585 "erl_backend.elds.c"
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
#line 5607 "erl_backend.elds.c"
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
#line 5620 "erl_backend.elds.c"
                *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 110 "elds.m"
              else
#line 110 "elds.m"
                if (((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 5626 "erl_backend.elds.c"
                  *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 110 "elds.m"
                else
#line 110 "elds.m"
                  if (((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 5632 "erl_backend.elds.c"
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
#line 5712 "erl_backend.elds.c"
              {
#line 5714 "erl_backend.elds.c"
                erl_backend__elds__succeeded = backend_libs__rtti____Unify____tc_name_0_0(erl_backend__elds__V_9_9, erl_backend__elds__V_12_12);
              }
#line 110 "elds.m"
              if (erl_backend__elds__succeeded)
#line 110 "elds.m"
                {
#line 5721 "erl_backend.elds.c"
                  {
#line 5723 "erl_backend.elds.c"
                    erl_backend__elds__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(erl_backend__elds__V_10_10, erl_backend__elds__V_13_13);
                  }
#line 110 "elds.m"
                  if (erl_backend__elds__succeeded)
#line 5728 "erl_backend.elds.c"
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
#line 5755 "erl_backend.elds.c"
                {
#line 5757 "erl_backend.elds.c"
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
#line 5783 "erl_backend.elds.c"
                  {
#line 5785 "erl_backend.elds.c"
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
#line 5809 "erl_backend.elds.c"
                  {
#line 5811 "erl_backend.elds.c"
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
#line 5849 "erl_backend.elds.c"
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
#line 5879 "erl_backend.elds.c"
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
#line 5903 "erl_backend.elds.c"
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
#line 5923 "erl_backend.elds.c"
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

#line 5998 "erl_backend.elds.c"
        {
#line 6000 "erl_backend.elds.c"
          erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_rtti_id_0_0(erl_backend__elds__V_3_3, erl_backend__elds__V_7_7);
        }
#line 100 "elds.m"
        if (erl_backend__elds__succeeded)
#line 100 "elds.m"
          {
#line 6007 "erl_backend.elds.c"
            erl_backend__elds__succeeded = (erl_backend__elds__V_4_4 == erl_backend__elds__V_8_8);
#line 100 "elds.m"
            if (erl_backend__elds__succeeded)
#line 100 "elds.m"
              {
#line 6013 "erl_backend.elds.c"
                erl_backend__elds__TypeInfo_13_13 = (MR_Word) &erl_backend__elds_scalar_common_1[9];
#line 6015 "erl_backend.elds.c"
                {
#line 6017 "erl_backend.elds.c"
                  erl_backend__elds__succeeded = mercury__builtin__unify_2_p_0(erl_backend__elds__TypeInfo_13_13, ((MR_Box) (erl_backend__elds__V_5_5)), ((MR_Box) (erl_backend__elds__V_9_9)));
                }
#line 100 "elds.m"
                if (erl_backend__elds__succeeded)
#line 6022 "erl_backend.elds.c"
                  {
#line 6024 "erl_backend.elds.c"
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
#line 6064 "erl_backend.elds.c"
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
#line 6090 "erl_backend.elds.c"
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
#line 6110 "erl_backend.elds.c"
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

#line 6179 "erl_backend.elds.c"
        erl_backend__elds__succeeded = (strcmp(erl_backend__elds__V_3_3, erl_backend__elds__V_6_6) == 0);
#line 91 "elds.m"
        if (erl_backend__elds__succeeded)
#line 91 "elds.m"
          {
#line 6185 "erl_backend.elds.c"
            erl_backend__elds__TypeInfo_11_11 = (MR_Word) &erl_backend__elds_scalar_common_1[9];
#line 6187 "erl_backend.elds.c"
            {
#line 6189 "erl_backend.elds.c"
              erl_backend__elds__succeeded = mercury__builtin__unify_2_p_0(erl_backend__elds__TypeInfo_11_11, ((MR_Box) (erl_backend__elds__V_4_4)), ((MR_Box) (erl_backend__elds__V_7_7)));
            }
#line 91 "elds.m"
            if (erl_backend__elds__succeeded)
#line 6194 "erl_backend.elds.c"
              {
#line 6196 "erl_backend.elds.c"
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
#line 6240 "erl_backend.elds.c"
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
#line 6271 "erl_backend.elds.c"
                  *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                else
#line 136 "elds.m"
                  if (((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 6277 "erl_backend.elds.c"
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                  else
#line 136 "elds.m"
                    if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 6283 "erl_backend.elds.c"
                      *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                    else
#line 136 "elds.m"
                      if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 6289 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                      else
#line 136 "elds.m"
                        if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 6295 "erl_backend.elds.c"
                          *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                        else
#line 136 "elds.m"
                          if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 6301 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                          else
#line 136 "elds.m"
                            if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 6307 "erl_backend.elds.c"
                              *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                            else
#line 136 "elds.m"
                              if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 6313 "erl_backend.elds.c"
                                *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                              else
#line 136 "elds.m"
                                if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 6319 "erl_backend.elds.c"
                                  *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                                else
#line 136 "elds.m"
                                  if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 6325 "erl_backend.elds.c"
                                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                                  else
#line 136 "elds.m"
                                    if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 6331 "erl_backend.elds.c"
                                      *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                                    else
#line 136 "elds.m"
                                      if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 6337 "erl_backend.elds.c"
                                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                                      else
#line 6341 "erl_backend.elds.c"
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
#line 6356 "erl_backend.elds.c"
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
#line 6380 "erl_backend.elds.c"
                      *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                    else
#line 136 "elds.m"
                      if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 6386 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                      else
#line 136 "elds.m"
                        if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 6392 "erl_backend.elds.c"
                          *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                        else
#line 136 "elds.m"
                          if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 6398 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                          else
#line 136 "elds.m"
                            if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 6404 "erl_backend.elds.c"
                              *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                            else
#line 136 "elds.m"
                              if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 6410 "erl_backend.elds.c"
                                *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                              else
#line 136 "elds.m"
                                if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 6416 "erl_backend.elds.c"
                                  *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                                else
#line 136 "elds.m"
                                  if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 6422 "erl_backend.elds.c"
                                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                                  else
#line 136 "elds.m"
                                    if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 6428 "erl_backend.elds.c"
                                      *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                                    else
#line 136 "elds.m"
                                      if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 6434 "erl_backend.elds.c"
                                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                                      else
#line 136 "elds.m"
                                        if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 6440 "erl_backend.elds.c"
                                          *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                                        else
#line 6444 "erl_backend.elds.c"
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
#line 6459 "erl_backend.elds.c"
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                  else
#line 136 "elds.m"
                    if (((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 6465 "erl_backend.elds.c"
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
#line 6489 "erl_backend.elds.c"
                          *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                        else
#line 136 "elds.m"
                          if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 6495 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                          else
#line 136 "elds.m"
                            if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 6501 "erl_backend.elds.c"
                              *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                            else
#line 136 "elds.m"
                              if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 6507 "erl_backend.elds.c"
                                *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                              else
#line 136 "elds.m"
                                if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 6513 "erl_backend.elds.c"
                                  *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                                else
#line 136 "elds.m"
                                  if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 6519 "erl_backend.elds.c"
                                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                                  else
#line 136 "elds.m"
                                    if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 6525 "erl_backend.elds.c"
                                      *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                                    else
#line 136 "elds.m"
                                      if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 6531 "erl_backend.elds.c"
                                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                                      else
#line 136 "elds.m"
                                        if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 6537 "erl_backend.elds.c"
                                          *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                                        else
#line 136 "elds.m"
                                          if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 6543 "erl_backend.elds.c"
                                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                                          else
#line 6547 "erl_backend.elds.c"
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
#line 6566 "erl_backend.elds.c"
                      *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                    else
#line 136 "elds.m"
                      if (((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 6572 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                      else
#line 136 "elds.m"
                        if (((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 6578 "erl_backend.elds.c"
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
#line 6604 "erl_backend.elds.c"
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
#line 6624 "erl_backend.elds.c"
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
#line 6663 "erl_backend.elds.c"
                              *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                            else
#line 136 "elds.m"
                              if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 6669 "erl_backend.elds.c"
                                *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                              else
#line 136 "elds.m"
                                if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 6675 "erl_backend.elds.c"
                                  *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                                else
#line 136 "elds.m"
                                  if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 6681 "erl_backend.elds.c"
                                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                                  else
#line 136 "elds.m"
                                    if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 6687 "erl_backend.elds.c"
                                      *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                                    else
#line 136 "elds.m"
                                      if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 6693 "erl_backend.elds.c"
                                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                                      else
#line 136 "elds.m"
                                        if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 6699 "erl_backend.elds.c"
                                          *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                                        else
#line 136 "elds.m"
                                          if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 6705 "erl_backend.elds.c"
                                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                                          else
#line 136 "elds.m"
                                            if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 6711 "erl_backend.elds.c"
                                              *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                                            else
#line 6715 "erl_backend.elds.c"
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
#line 6732 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                      else
#line 136 "elds.m"
                        if (((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 6738 "erl_backend.elds.c"
                          *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                        else
#line 136 "elds.m"
                          if (((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 6744 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                          else
#line 136 "elds.m"
                            if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 6750 "erl_backend.elds.c"
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
#line 6770 "erl_backend.elds.c"
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
#line 6797 "erl_backend.elds.c"
                                  *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                                else
#line 136 "elds.m"
                                  if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 6803 "erl_backend.elds.c"
                                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                                  else
#line 136 "elds.m"
                                    if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 6809 "erl_backend.elds.c"
                                      *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                                    else
#line 136 "elds.m"
                                      if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 6815 "erl_backend.elds.c"
                                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                                      else
#line 136 "elds.m"
                                        if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 6821 "erl_backend.elds.c"
                                          *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                                        else
#line 136 "elds.m"
                                          if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 6827 "erl_backend.elds.c"
                                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                                          else
#line 136 "elds.m"
                                            if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 6833 "erl_backend.elds.c"
                                              *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                                            else
#line 136 "elds.m"
                                              if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 6839 "erl_backend.elds.c"
                                                *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                                              else
#line 6843 "erl_backend.elds.c"
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
#line 6860 "erl_backend.elds.c"
                          *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                        else
#line 136 "elds.m"
                          if (((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 6866 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                          else
#line 136 "elds.m"
                            if (((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 6872 "erl_backend.elds.c"
                              *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                            else
#line 136 "elds.m"
                              if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 6878 "erl_backend.elds.c"
                                *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                              else
#line 136 "elds.m"
                                if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 6884 "erl_backend.elds.c"
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
#line 6904 "erl_backend.elds.c"
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
#line 6931 "erl_backend.elds.c"
                                      *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                                    else
#line 136 "elds.m"
                                      if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 6937 "erl_backend.elds.c"
                                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                                      else
#line 136 "elds.m"
                                        if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 6943 "erl_backend.elds.c"
                                          *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                                        else
#line 136 "elds.m"
                                          if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 6949 "erl_backend.elds.c"
                                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                                          else
#line 136 "elds.m"
                                            if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 6955 "erl_backend.elds.c"
                                              *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                                            else
#line 136 "elds.m"
                                              if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 6961 "erl_backend.elds.c"
                                                *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                                              else
#line 136 "elds.m"
                                                if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 6967 "erl_backend.elds.c"
                                                  *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                                                else
#line 6971 "erl_backend.elds.c"
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
#line 6988 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                          else
#line 136 "elds.m"
                            if (((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 6994 "erl_backend.elds.c"
                              *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                            else
#line 136 "elds.m"
                              if (((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 7000 "erl_backend.elds.c"
                                *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                              else
#line 136 "elds.m"
                                if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 7006 "erl_backend.elds.c"
                                  *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                                else
#line 136 "elds.m"
                                  if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 7012 "erl_backend.elds.c"
                                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                                  else
#line 136 "elds.m"
                                    if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 7018 "erl_backend.elds.c"
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
#line 7038 "erl_backend.elds.c"
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
#line 7075 "erl_backend.elds.c"
                                          *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                                        else
#line 136 "elds.m"
                                          if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 7081 "erl_backend.elds.c"
                                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                                          else
#line 136 "elds.m"
                                            if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 7087 "erl_backend.elds.c"
                                              *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                                            else
#line 136 "elds.m"
                                              if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 7093 "erl_backend.elds.c"
                                                *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                                              else
#line 136 "elds.m"
                                                if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 7099 "erl_backend.elds.c"
                                                  *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                                                else
#line 136 "elds.m"
                                                  if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 7105 "erl_backend.elds.c"
                                                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                                                  else
#line 7109 "erl_backend.elds.c"
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
#line 7126 "erl_backend.elds.c"
                              *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                            else
#line 136 "elds.m"
                              if (((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 7132 "erl_backend.elds.c"
                                *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                              else
#line 136 "elds.m"
                                if (((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 7138 "erl_backend.elds.c"
                                  *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                                else
#line 136 "elds.m"
                                  if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 7144 "erl_backend.elds.c"
                                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                                  else
#line 136 "elds.m"
                                    if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 7150 "erl_backend.elds.c"
                                      *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                                    else
#line 136 "elds.m"
                                      if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 7156 "erl_backend.elds.c"
                                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                                      else
#line 136 "elds.m"
                                        if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 7162 "erl_backend.elds.c"
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
#line 7182 "erl_backend.elds.c"
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
#line 7205 "erl_backend.elds.c"
                                              *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                                            else
#line 136 "elds.m"
                                              if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 7211 "erl_backend.elds.c"
                                                *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                                              else
#line 136 "elds.m"
                                                if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 7217 "erl_backend.elds.c"
                                                  *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                                                else
#line 136 "elds.m"
                                                  if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 7223 "erl_backend.elds.c"
                                                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                                                  else
#line 136 "elds.m"
                                                    if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 7229 "erl_backend.elds.c"
                                                      *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                                                    else
#line 7233 "erl_backend.elds.c"
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
#line 7248 "erl_backend.elds.c"
                                *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                              else
#line 136 "elds.m"
                                if (((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 7254 "erl_backend.elds.c"
                                  *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                                else
#line 136 "elds.m"
                                  if (((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 7260 "erl_backend.elds.c"
                                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                                  else
#line 136 "elds.m"
                                    if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 7266 "erl_backend.elds.c"
                                      *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                                    else
#line 136 "elds.m"
                                      if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 7272 "erl_backend.elds.c"
                                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                                      else
#line 136 "elds.m"
                                        if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 7278 "erl_backend.elds.c"
                                          *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                                        else
#line 136 "elds.m"
                                          if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 7284 "erl_backend.elds.c"
                                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                                          else
#line 136 "elds.m"
                                            if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 7290 "erl_backend.elds.c"
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
#line 7314 "erl_backend.elds.c"
                                                  *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                                                else
#line 136 "elds.m"
                                                  if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 7320 "erl_backend.elds.c"
                                                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                                                  else
#line 136 "elds.m"
                                                    if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 7326 "erl_backend.elds.c"
                                                      *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                                                    else
#line 136 "elds.m"
                                                      if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 7332 "erl_backend.elds.c"
                                                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                                                      else
#line 7336 "erl_backend.elds.c"
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
#line 7351 "erl_backend.elds.c"
                                  *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                                else
#line 136 "elds.m"
                                  if (((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 7357 "erl_backend.elds.c"
                                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                                  else
#line 136 "elds.m"
                                    if (((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 7363 "erl_backend.elds.c"
                                      *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                                    else
#line 136 "elds.m"
                                      if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 7369 "erl_backend.elds.c"
                                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                                      else
#line 136 "elds.m"
                                        if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 7375 "erl_backend.elds.c"
                                          *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                                        else
#line 136 "elds.m"
                                          if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 7381 "erl_backend.elds.c"
                                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                                          else
#line 136 "elds.m"
                                            if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 7387 "erl_backend.elds.c"
                                              *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                                            else
#line 136 "elds.m"
                                              if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 7393 "erl_backend.elds.c"
                                                *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                                              else
#line 136 "elds.m"
                                                if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 7399 "erl_backend.elds.c"
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
#line 7423 "erl_backend.elds.c"
                                                      *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                                                    else
#line 136 "elds.m"
                                                      if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 7429 "erl_backend.elds.c"
                                                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                                                      else
#line 136 "elds.m"
                                                        if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 7435 "erl_backend.elds.c"
                                                          *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                                                        else
#line 7439 "erl_backend.elds.c"
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
#line 7456 "erl_backend.elds.c"
                                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                                  else
#line 136 "elds.m"
                                    if (((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 7462 "erl_backend.elds.c"
                                      *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                                    else
#line 136 "elds.m"
                                      if (((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 7468 "erl_backend.elds.c"
                                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                                      else
#line 136 "elds.m"
                                        if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 7474 "erl_backend.elds.c"
                                          *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                                        else
#line 136 "elds.m"
                                          if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 7480 "erl_backend.elds.c"
                                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                                          else
#line 136 "elds.m"
                                            if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 7486 "erl_backend.elds.c"
                                              *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                                            else
#line 136 "elds.m"
                                              if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 7492 "erl_backend.elds.c"
                                                *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                                              else
#line 136 "elds.m"
                                                if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 7498 "erl_backend.elds.c"
                                                  *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                                                else
#line 136 "elds.m"
                                                  if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 7504 "erl_backend.elds.c"
                                                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                                                  else
#line 136 "elds.m"
                                                    if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 7510 "erl_backend.elds.c"
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
#line 7530 "erl_backend.elds.c"
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
#line 7567 "erl_backend.elds.c"
                                                          *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                                                        else
#line 136 "elds.m"
                                                          if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 7573 "erl_backend.elds.c"
                                                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                                                          else
#line 7577 "erl_backend.elds.c"
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
#line 7592 "erl_backend.elds.c"
                                      *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                                    else
#line 136 "elds.m"
                                      if (((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 7598 "erl_backend.elds.c"
                                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                                      else
#line 136 "elds.m"
                                        if (((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 7604 "erl_backend.elds.c"
                                          *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                                        else
#line 136 "elds.m"
                                          if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 7610 "erl_backend.elds.c"
                                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                                          else
#line 136 "elds.m"
                                            if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 7616 "erl_backend.elds.c"
                                              *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                                            else
#line 136 "elds.m"
                                              if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 7622 "erl_backend.elds.c"
                                                *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                                              else
#line 136 "elds.m"
                                                if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 7628 "erl_backend.elds.c"
                                                  *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                                                else
#line 136 "elds.m"
                                                  if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 7634 "erl_backend.elds.c"
                                                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                                                  else
#line 136 "elds.m"
                                                    if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 7640 "erl_backend.elds.c"
                                                      *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                                                    else
#line 136 "elds.m"
                                                      if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 7646 "erl_backend.elds.c"
                                                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                                                      else
#line 136 "elds.m"
                                                        if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 7652 "erl_backend.elds.c"
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
#line 7686 "erl_backend.elds.c"
                                                              *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                                                            else
#line 7690 "erl_backend.elds.c"
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
#line 7711 "erl_backend.elds.c"
                                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                                      else
#line 136 "elds.m"
                                        if (((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 7717 "erl_backend.elds.c"
                                          *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                                        else
#line 136 "elds.m"
                                          if (((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 7723 "erl_backend.elds.c"
                                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                                          else
#line 136 "elds.m"
                                            if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 7729 "erl_backend.elds.c"
                                              *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                                            else
#line 136 "elds.m"
                                              if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 7735 "erl_backend.elds.c"
                                                *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                                              else
#line 136 "elds.m"
                                                if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 7741 "erl_backend.elds.c"
                                                  *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                                                else
#line 136 "elds.m"
                                                  if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 7747 "erl_backend.elds.c"
                                                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                                                  else
#line 136 "elds.m"
                                                    if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 7753 "erl_backend.elds.c"
                                                      *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                                                    else
#line 136 "elds.m"
                                                      if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 7759 "erl_backend.elds.c"
                                                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                                                      else
#line 136 "elds.m"
                                                        if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 7765 "erl_backend.elds.c"
                                                          *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                                                        else
#line 136 "elds.m"
                                                          if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 7771 "erl_backend.elds.c"
                                                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                                                          else
#line 136 "elds.m"
                                                            if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 7777 "erl_backend.elds.c"
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
#line 7801 "erl_backend.elds.c"
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
#line 7821 "erl_backend.elds.c"
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
#line 7841 "erl_backend.elds.c"
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
#line 7870 "erl_backend.elds.c"
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
#line 7885 "erl_backend.elds.c"
                                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                                      else
#line 136 "elds.m"
                                        if (((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 7891 "erl_backend.elds.c"
                                          *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                                        else
#line 136 "elds.m"
                                          if (((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 7897 "erl_backend.elds.c"
                                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                                          else
#line 136 "elds.m"
                                            if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 7903 "erl_backend.elds.c"
                                              *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                                            else
#line 136 "elds.m"
                                              if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 7909 "erl_backend.elds.c"
                                                *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                                              else
#line 136 "elds.m"
                                                if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 7915 "erl_backend.elds.c"
                                                  *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                                                else
#line 136 "elds.m"
                                                  if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 7921 "erl_backend.elds.c"
                                                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                                                  else
#line 136 "elds.m"
                                                    if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 7927 "erl_backend.elds.c"
                                                      *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                                                    else
#line 136 "elds.m"
                                                      if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 7933 "erl_backend.elds.c"
                                                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                                                      else
#line 136 "elds.m"
                                                        if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 7939 "erl_backend.elds.c"
                                                          *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                                                        else
#line 136 "elds.m"
                                                          if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 7945 "erl_backend.elds.c"
                                                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                                                          else
#line 136 "elds.m"
                                                            if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 7951 "erl_backend.elds.c"
                                                              *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                                                            else
#line 136 "elds.m"
                                                              if (((((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 7957 "erl_backend.elds.c"
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
#line 7979 "erl_backend.elds.c"
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
#line 8074 "erl_backend.elds.c"
                  erl_backend__elds__TypeInfo_55_55 = (MR_Word) &erl_backend__elds_scalar_common_1[14];
#line 8076 "erl_backend.elds.c"
                  {
#line 8078 "erl_backend.elds.c"
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
#line 8104 "erl_backend.elds.c"
                    {
#line 8106 "erl_backend.elds.c"
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
#line 8132 "erl_backend.elds.c"
                      {
#line 8134 "erl_backend.elds.c"
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
#line 8172 "erl_backend.elds.c"
                        erl_backend__elds__succeeded = (erl_backend__elds__V_15_15 == erl_backend__elds__V_18_18);
#line 136 "elds.m"
                        if (erl_backend__elds__succeeded)
#line 136 "elds.m"
                          {
#line 8178 "erl_backend.elds.c"
                            {
#line 8180 "erl_backend.elds.c"
                              erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_expr_0_0(erl_backend__elds__V_16_16, erl_backend__elds__V_19_19);
                            }
#line 136 "elds.m"
                            if (erl_backend__elds__succeeded)
#line 8185 "erl_backend.elds.c"
                              {
#line 8187 "erl_backend.elds.c"
                                /* direct tailcall eliminated */
#line 8189 "erl_backend.elds.c"
                                {
#line 8191 "erl_backend.elds.c"
                                  MR_Word erl_backend__elds__HeadVar__1__tmp_copy_1 = erl_backend__elds__V_17_17;
#line 8193 "erl_backend.elds.c"
                                  MR_Word erl_backend__elds__HeadVar__2__tmp_copy_2 = erl_backend__elds__V_20_20;

#line 8196 "erl_backend.elds.c"
                                  erl_backend__elds__HeadVar__2_2 = erl_backend__elds__HeadVar__2__tmp_copy_2;
#line 8198 "erl_backend.elds.c"
                                  erl_backend__elds__HeadVar__1_1 = erl_backend__elds__HeadVar__1__tmp_copy_1;
#line 8200 "erl_backend.elds.c"
                                }
#line 8202 "erl_backend.elds.c"
                                continue;
#line 8204 "erl_backend.elds.c"
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
#line 8239 "erl_backend.elds.c"
                          {
#line 8241 "erl_backend.elds.c"
                            erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_call_target_0_0(erl_backend__elds__V_21_21, erl_backend__elds__V_23_23);
                          }
#line 136 "elds.m"
                          if (erl_backend__elds__succeeded)
#line 136 "elds.m"
                            {
#line 8248 "erl_backend.elds.c"
                              erl_backend__elds__TypeInfo_56_56 = (MR_Word) &erl_backend__elds_scalar_common_1[14];
#line 8250 "erl_backend.elds.c"
                              {
#line 8252 "erl_backend.elds.c"
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
#line 8288 "erl_backend.elds.c"
                            {
#line 8290 "erl_backend.elds.c"
                              erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_expr_0_0(erl_backend__elds__V_29_29, erl_backend__elds__V_31_31);
                            }
#line 136 "elds.m"
                            if (erl_backend__elds__succeeded)
#line 136 "elds.m"
                              {
#line 8297 "erl_backend.elds.c"
                                erl_backend__elds__TypeInfo_57_57 = (MR_Word) &erl_backend__elds_scalar_common_1[11];
#line 8299 "erl_backend.elds.c"
                                {
#line 8301 "erl_backend.elds.c"
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
#line 8335 "erl_backend.elds.c"
                              {
#line 8337 "erl_backend.elds.c"
                                erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_expr_0_0(erl_backend__elds__V_7_7, erl_backend__elds__V_9_9);
                              }
#line 136 "elds.m"
                              if (erl_backend__elds__succeeded)
#line 8342 "erl_backend.elds.c"
                                {
#line 8344 "erl_backend.elds.c"
                                  /* direct tailcall eliminated */
#line 8346 "erl_backend.elds.c"
                                  {
#line 8348 "erl_backend.elds.c"
                                    MR_Word erl_backend__elds__HeadVar__1__tmp_copy_1 = erl_backend__elds__V_8_8;
#line 8350 "erl_backend.elds.c"
                                    MR_Word erl_backend__elds__HeadVar__2__tmp_copy_2 = erl_backend__elds__V_10_10;

#line 8353 "erl_backend.elds.c"
                                    erl_backend__elds__HeadVar__2_2 = erl_backend__elds__HeadVar__2__tmp_copy_2;
#line 8355 "erl_backend.elds.c"
                                    erl_backend__elds__HeadVar__1_1 = erl_backend__elds__HeadVar__1__tmp_copy_1;
#line 8357 "erl_backend.elds.c"
                                  }
#line 8359 "erl_backend.elds.c"
                                  continue;
#line 8361 "erl_backend.elds.c"
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
#line 8392 "erl_backend.elds.c"
                                erl_backend__elds__succeeded = (strcmp(erl_backend__elds__V_43_43, erl_backend__elds__V_45_45) == 0);
#line 136 "elds.m"
                                if (erl_backend__elds__succeeded)
#line 8396 "erl_backend.elds.c"
                                  {
#line 8398 "erl_backend.elds.c"
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
#line 8426 "erl_backend.elds.c"
                                  erl_backend__elds__TypeInfo_59_59 = (MR_Word) &erl_backend__elds_scalar_common_1[11];
#line 8428 "erl_backend.elds.c"
                                  {
#line 8430 "erl_backend.elds.c"
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
#line 8456 "erl_backend.elds.c"
                                    {
#line 8458 "erl_backend.elds.c"
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
#line 8490 "erl_backend.elds.c"
                                      {
#line 8492 "erl_backend.elds.c"
                                        erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_expr_0_0(erl_backend__elds__V_47_47, erl_backend__elds__V_49_49);
                                      }
#line 136 "elds.m"
                                      if (erl_backend__elds__succeeded)
#line 8497 "erl_backend.elds.c"
                                        {
#line 8499 "erl_backend.elds.c"
                                          /* direct tailcall eliminated */
#line 8501 "erl_backend.elds.c"
                                          {
#line 8503 "erl_backend.elds.c"
                                            MR_Word erl_backend__elds__HeadVar__1__tmp_copy_1 = erl_backend__elds__V_48_48;
#line 8505 "erl_backend.elds.c"
                                            MR_Word erl_backend__elds__HeadVar__2__tmp_copy_2 = erl_backend__elds__V_50_50;

#line 8508 "erl_backend.elds.c"
                                            erl_backend__elds__HeadVar__2_2 = erl_backend__elds__HeadVar__2__tmp_copy_2;
#line 8510 "erl_backend.elds.c"
                                            erl_backend__elds__HeadVar__1_1 = erl_backend__elds__HeadVar__1__tmp_copy_1;
#line 8512 "erl_backend.elds.c"
                                          }
#line 8514 "erl_backend.elds.c"
                                          continue;
#line 8516 "erl_backend.elds.c"
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
#line 8541 "erl_backend.elds.c"
                                        /* direct tailcall eliminated */
#line 8543 "erl_backend.elds.c"
                                        {
#line 8545 "erl_backend.elds.c"
                                          MR_Word erl_backend__elds__HeadVar__1__tmp_copy_1 = erl_backend__elds__V_41_41;
#line 8547 "erl_backend.elds.c"
                                          MR_Word erl_backend__elds__HeadVar__2__tmp_copy_2 = erl_backend__elds__V_42_42;

#line 8550 "erl_backend.elds.c"
                                          erl_backend__elds__HeadVar__2_2 = erl_backend__elds__HeadVar__2__tmp_copy_2;
#line 8552 "erl_backend.elds.c"
                                          erl_backend__elds__HeadVar__1_1 = erl_backend__elds__HeadVar__1__tmp_copy_1;
#line 8554 "erl_backend.elds.c"
                                        }
#line 8556 "erl_backend.elds.c"
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
#line 8605 "erl_backend.elds.c"
                                          {
#line 8607 "erl_backend.elds.c"
                                            erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_expr_0_0(erl_backend__elds__V_33_33, erl_backend__elds__V_37_37);
                                          }
#line 136 "elds.m"
                                          if (erl_backend__elds__succeeded)
#line 136 "elds.m"
                                            {
#line 8614 "erl_backend.elds.c"
                                              erl_backend__elds__TypeInfo_60_60 = (MR_Word) &erl_backend__elds_scalar_common_1[11];
#line 8616 "erl_backend.elds.c"
                                              {
#line 8618 "erl_backend.elds.c"
                                                erl_backend__elds__succeeded = mercury__builtin__unify_2_p_0(erl_backend__elds__TypeInfo_60_60, ((MR_Box) (erl_backend__elds__V_34_34)), ((MR_Box) (erl_backend__elds__V_38_38)));
                                              }
#line 136 "elds.m"
                                              if (erl_backend__elds__succeeded)
#line 136 "elds.m"
                                                {
#line 8625 "erl_backend.elds.c"
                                                  erl_backend__elds__TypeInfo_61_61 = (MR_Word) &erl_backend__elds_scalar_common_1[12];
#line 8627 "erl_backend.elds.c"
                                                  {
#line 8629 "erl_backend.elds.c"
                                                    erl_backend__elds__succeeded = mercury__builtin__unify_2_p_0(erl_backend__elds__TypeInfo_61_61, ((MR_Box) (erl_backend__elds__V_35_35)), ((MR_Box) (erl_backend__elds__V_39_39)));
                                                  }
#line 136 "elds.m"
                                                  if (erl_backend__elds__succeeded)
#line 136 "elds.m"
                                                    {
#line 8636 "erl_backend.elds.c"
                                                      erl_backend__elds__TypeInfo_62_62 = (MR_Word) &erl_backend__elds_scalar_common_1[13];
#line 8638 "erl_backend.elds.c"
                                                      {
#line 8640 "erl_backend.elds.c"
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
#line 8676 "erl_backend.elds.c"
                                          erl_backend__elds__succeeded = (erl_backend__elds__V_11_11 == erl_backend__elds__V_13_13);
#line 136 "elds.m"
                                          if (erl_backend__elds__succeeded)
#line 8680 "erl_backend.elds.c"
                                            {
#line 8682 "erl_backend.elds.c"
                                              /* direct tailcall eliminated */
#line 8684 "erl_backend.elds.c"
                                              {
#line 8686 "erl_backend.elds.c"
                                                MR_Word erl_backend__elds__HeadVar__1__tmp_copy_1 = erl_backend__elds__V_12_12;
#line 8688 "erl_backend.elds.c"
                                                MR_Word erl_backend__elds__HeadVar__2__tmp_copy_2 = erl_backend__elds__V_14_14;

#line 8691 "erl_backend.elds.c"
                                                erl_backend__elds__HeadVar__2_2 = erl_backend__elds__HeadVar__2__tmp_copy_2;
#line 8693 "erl_backend.elds.c"
                                                erl_backend__elds__HeadVar__1_1 = erl_backend__elds__HeadVar__1__tmp_copy_1;
#line 8695 "erl_backend.elds.c"
                                              }
#line 8697 "erl_backend.elds.c"
                                              continue;
#line 8699 "erl_backend.elds.c"
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
#line 8740 "erl_backend.elds.c"
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
#line 8770 "erl_backend.elds.c"
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
#line 8790 "erl_backend.elds.c"
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
#line 8810 "erl_backend.elds.c"
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

#line 8891 "erl_backend.elds.c"
        {
#line 8893 "erl_backend.elds.c"
          erl_backend__elds__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(erl_backend__elds__V_3_3, erl_backend__elds__V_7_7);
        }
#line 73 "elds.m"
        if (erl_backend__elds__succeeded)
#line 73 "elds.m"
          {
#line 8900 "erl_backend.elds.c"
            erl_backend__elds__TypeInfo_14_14 = (MR_Word) &erl_backend__elds_scalar_common_1[9];
#line 8902 "erl_backend.elds.c"
            {
#line 8904 "erl_backend.elds.c"
              erl_backend__elds__succeeded = mercury__builtin__unify_2_p_0(erl_backend__elds__TypeInfo_14_14, ((MR_Box) (erl_backend__elds__V_4_4)), ((MR_Box) (erl_backend__elds__V_8_8)));
            }
#line 73 "elds.m"
            if (erl_backend__elds__succeeded)
#line 73 "elds.m"
              {
#line 8911 "erl_backend.elds.c"
                {
#line 8913 "erl_backend.elds.c"
                  erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_body_0_0(erl_backend__elds__V_5_5, erl_backend__elds__V_9_9);
                }
#line 73 "elds.m"
                if (erl_backend__elds__succeeded)
#line 73 "elds.m"
                  {
#line 8920 "erl_backend.elds.c"
                    erl_backend__elds__TypeInfo_15_15 = (MR_Word) &erl_backend__elds_scalar_common_1[10];
#line 8922 "erl_backend.elds.c"
                    {
#line 8924 "erl_backend.elds.c"
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
#line 8966 "erl_backend.elds.c"
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
#line 8988 "erl_backend.elds.c"
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

#line 9049 "erl_backend.elds.c"
        {
#line 9051 "erl_backend.elds.c"
          erl_backend__elds__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &erl_backend__elds_scalar_common_1[8], ((MR_Box) (erl_backend__elds__V_3_3)), ((MR_Box) (erl_backend__elds__V_5_5)));
        }
#line 128 "elds.m"
        if (erl_backend__elds__succeeded)
#line 9056 "erl_backend.elds.c"
          {
#line 9058 "erl_backend.elds.c"
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
#line 9094 "erl_backend.elds.c"
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
#line 9120 "erl_backend.elds.c"
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
#line 9140 "erl_backend.elds.c"
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

#line 9207 "erl_backend.elds.c"
        {
#line 9209 "erl_backend.elds.c"
          erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_term_0_0(erl_backend__elds__V_3_3, erl_backend__elds__V_6_6);
        }
#line 258 "elds.m"
        if (erl_backend__elds__succeeded)
#line 258 "elds.m"
          {
#line 9216 "erl_backend.elds.c"
            {
#line 9218 "erl_backend.elds.c"
              erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_term_0_0(erl_backend__elds__V_4_4, erl_backend__elds__V_7_7);
            }
#line 258 "elds.m"
            if (erl_backend__elds__succeeded)
#line 9223 "erl_backend.elds.c"
              {
#line 9225 "erl_backend.elds.c"
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
#line 9263 "erl_backend.elds.c"
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
#line 9285 "erl_backend.elds.c"
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

#line 9346 "erl_backend.elds.c"
        {
#line 9348 "erl_backend.elds.c"
          erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_term_0_0(erl_backend__elds__V_3_3, erl_backend__elds__V_5_5);
        }
#line 255 "elds.m"
        if (erl_backend__elds__succeeded)
#line 9353 "erl_backend.elds.c"
          {
#line 9355 "erl_backend.elds.c"
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
#line 9391 "erl_backend.elds.c"
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
#line 9422 "erl_backend.elds.c"
              *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 250 "elds.m"
            else
#line 9426 "erl_backend.elds.c"
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
#line 9441 "erl_backend.elds.c"
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
#line 9463 "erl_backend.elds.c"
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
#line 9476 "erl_backend.elds.c"
              *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 250 "elds.m"
            else
#line 250 "elds.m"
              if (((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 9482 "erl_backend.elds.c"
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
#line 9550 "erl_backend.elds.c"
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
#line 9575 "erl_backend.elds.c"
                {
#line 9577 "erl_backend.elds.c"
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
#line 9601 "erl_backend.elds.c"
                {
#line 9603 "erl_backend.elds.c"
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
#line 9641 "erl_backend.elds.c"
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
#line 9670 "erl_backend.elds.c"
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
#line 9683 "erl_backend.elds.c"
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
#line 9751 "erl_backend.elds.c"
              {
#line 9753 "erl_backend.elds.c"
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
#line 9777 "erl_backend.elds.c"
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
#line 9831 "erl_backend.elds.c"
  {
#line 9833 "erl_backend.elds.c"
    MR_bool erl_backend__elds__succeeded = (erl_backend__elds__HeadVar__2_1 == erl_backend__elds__HeadVar__2_2);

#line 9836 "erl_backend.elds.c"
    return erl_backend__elds__succeeded;
#line 9838 "erl_backend.elds.c"
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
#line 9867 "erl_backend.elds.c"
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
#line 9917 "erl_backend.elds.c"
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
#line 9937 "erl_backend.elds.c"
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
#line 9957 "erl_backend.elds.c"
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
#line 9977 "erl_backend.elds.c"
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
#line 9997 "erl_backend.elds.c"
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
#line 10017 "erl_backend.elds.c"
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
#line 10037 "erl_backend.elds.c"
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
#line 10057 "erl_backend.elds.c"
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

#line 10180 "erl_backend.elds.c"
        {
#line 10182 "erl_backend.elds.c"
          erl_backend__elds__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(erl_backend__elds__V_3_3, erl_backend__elds__V_12_12);
        }
#line 43 "elds.m"
        if (erl_backend__elds__succeeded)
#line 43 "elds.m"
          {
#line 10189 "erl_backend.elds.c"
            erl_backend__elds__TypeInfo_24_24 = (MR_Word) &erl_backend__elds_scalar_common_1[1];
#line 10191 "erl_backend.elds.c"
            {
#line 10193 "erl_backend.elds.c"
              erl_backend__elds__succeeded = mercury__builtin__unify_2_p_0(erl_backend__elds__TypeInfo_24_24, ((MR_Box) (erl_backend__elds__V_4_4)), ((MR_Box) (erl_backend__elds__V_13_13)));
            }
#line 43 "elds.m"
            if (erl_backend__elds__succeeded)
#line 43 "elds.m"
              {
#line 10200 "erl_backend.elds.c"
                erl_backend__elds__TypeInfo_25_25 = (MR_Word) &erl_backend__elds_scalar_common_1[2];
#line 10202 "erl_backend.elds.c"
                {
#line 10204 "erl_backend.elds.c"
                  erl_backend__elds__succeeded = mercury__builtin__unify_2_p_0(erl_backend__elds__TypeInfo_25_25, ((MR_Box) (erl_backend__elds__V_5_5)), ((MR_Box) (erl_backend__elds__V_14_14)));
                }
#line 43 "elds.m"
                if (erl_backend__elds__succeeded)
#line 43 "elds.m"
                  {
#line 10211 "erl_backend.elds.c"
                    erl_backend__elds__TypeInfo_26_26 = (MR_Word) &erl_backend__elds_scalar_common_1[3];
#line 10213 "erl_backend.elds.c"
                    {
#line 10215 "erl_backend.elds.c"
                      erl_backend__elds__succeeded = mercury__builtin__unify_2_p_0(erl_backend__elds__TypeInfo_26_26, ((MR_Box) (erl_backend__elds__V_6_6)), ((MR_Box) (erl_backend__elds__V_15_15)));
                    }
#line 43 "elds.m"
                    if (erl_backend__elds__succeeded)
#line 43 "elds.m"
                      {
#line 10222 "erl_backend.elds.c"
                        erl_backend__elds__TypeInfo_27_27 = (MR_Word) &erl_backend__elds_scalar_common_1[4];
#line 10224 "erl_backend.elds.c"
                        {
#line 10226 "erl_backend.elds.c"
                          erl_backend__elds__succeeded = mercury__builtin__unify_2_p_0(erl_backend__elds__TypeInfo_27_27, ((MR_Box) (erl_backend__elds__V_7_7)), ((MR_Box) (erl_backend__elds__V_16_16)));
                        }
#line 43 "elds.m"
                        if (erl_backend__elds__succeeded)
#line 43 "elds.m"
                          {
#line 10233 "erl_backend.elds.c"
                            erl_backend__elds__TypeInfo_28_28 = (MR_Word) &erl_backend__elds_scalar_common_1[5];
#line 10235 "erl_backend.elds.c"
                            {
#line 10237 "erl_backend.elds.c"
                              erl_backend__elds__succeeded = mercury__builtin__unify_2_p_0(erl_backend__elds__TypeInfo_28_28, ((MR_Box) (erl_backend__elds__V_8_8)), ((MR_Box) (erl_backend__elds__V_17_17)));
                            }
#line 43 "elds.m"
                            if (erl_backend__elds__succeeded)
#line 43 "elds.m"
                              {
#line 10244 "erl_backend.elds.c"
                                erl_backend__elds__TypeInfo_29_29 = (MR_Word) &erl_backend__elds_scalar_common_1[6];
#line 10246 "erl_backend.elds.c"
                                {
#line 10248 "erl_backend.elds.c"
                                  erl_backend__elds__succeeded = mercury__builtin__unify_2_p_0(erl_backend__elds__TypeInfo_29_29, ((MR_Box) (erl_backend__elds__V_9_9)), ((MR_Box) (erl_backend__elds__V_18_18)));
                                }
#line 43 "elds.m"
                                if (erl_backend__elds__succeeded)
#line 43 "elds.m"
                                  {
#line 10255 "erl_backend.elds.c"
                                    erl_backend__elds__TypeInfo_30_30 = (MR_Word) &erl_backend__elds_scalar_common_1[7];
#line 10257 "erl_backend.elds.c"
                                    {
#line 10259 "erl_backend.elds.c"
                                      erl_backend__elds__succeeded = mercury__builtin__unify_2_p_0(erl_backend__elds__TypeInfo_30_30, ((MR_Box) (erl_backend__elds__V_10_10)), ((MR_Box) (erl_backend__elds__V_19_19)));
                                    }
#line 43 "elds.m"
                                    if (erl_backend__elds__succeeded)
#line 43 "elds.m"
                                      {
#line 10266 "erl_backend.elds.c"
                                        erl_backend__elds__TypeInfo_31_31 = (MR_Word) &erl_backend__elds_scalar_common_1[7];
#line 10268 "erl_backend.elds.c"
                                        {
#line 10270 "erl_backend.elds.c"
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
