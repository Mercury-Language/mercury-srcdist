/*
** Automatically generated from `elds.m'
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
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 136 "erl_backend.elds.c"
static const MR_FA_PseudoTypeInfo_Struct1 erl_backend__elds__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 139 "erl_backend.elds.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__elds__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0;

#line 142 "erl_backend.elds.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__elds__list__ti_list_1parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0;

#line 145 "erl_backend.elds.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__elds__list__ti_list_1parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0;

#line 148 "erl_backend.elds.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__elds__list__ti_list_1erl_backend__elds__type_ctor_info_elds_defn_0;

#line 151 "erl_backend.elds.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__elds__list__ti_list_1erl_backend__elds__type_ctor_info_elds_foreign_export_defn_0;

#line 154 "erl_backend.elds.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__elds__list__ti_list_1erl_backend__elds__type_ctor_info_elds_rtti_defn_0;

#line 157 "erl_backend.elds.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__elds__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

#line 160 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_0_0[9];

#line 163 "erl_backend.elds.c"
static const MR_ConstString erl_backend__elds__erl_backend__elds__field_names_elds_0_0[9];

#line 166 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_0_0;

#line 169 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_0_0[1];

#line 172 "erl_backend.elds.c"
static const MR_DuPtagLayout erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_0[1];

#line 175 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_name_ordered_elds_0[1];

#line 178 "erl_backend.elds.c"
static const MR_Integer erl_backend__elds__erl_backend__elds__functor_number_map_elds_0[1];

#line 181 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_0;

#line 184 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_1;

#line 187 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_2;

#line 190 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_3;

#line 193 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_4;

#line 196 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_5;

#line 199 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_6;

#line 202 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_7;

#line 205 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_8;

#line 208 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_9;

#line 211 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_10;

#line 214 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_11;

#line 217 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_12;

#line 220 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_13;

#line 223 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_14;

#line 226 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_15;

#line 229 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_16;

#line 232 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_17;

#line 235 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_18;

#line 238 "erl_backend.elds.c"
static const MR_EnumFunctorDescPtr erl_backend__elds__erl_backend__elds__enum_value_ordered_elds_binop_0[19];

#line 241 "erl_backend.elds.c"
static const MR_EnumFunctorDescPtr erl_backend__elds__erl_backend__elds__enum_name_ordered_elds_binop_0[19];

#line 244 "erl_backend.elds.c"
static const MR_Integer erl_backend__elds__erl_backend__elds__functor_number_map_elds_binop_0[19];

#line 247 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_body_0_0[1];

#line 250 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_body_0_0;

#line 253 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_body_0_1[1];

#line 256 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_body_0_1;

#line 259 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_body_0_0[1];

#line 262 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_body_0_1[1];

#line 265 "erl_backend.elds.c"
static const MR_DuPtagLayout erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_body_0[2];

#line 268 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_name_ordered_elds_body_0[2];

#line 271 "erl_backend.elds.c"
static const MR_Integer erl_backend__elds__erl_backend__elds__functor_number_map_elds_body_0[2];

#line 274 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_call_target_0_0[1];

#line 277 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_call_target_0_0;

#line 280 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_call_target_0_1[1];

#line 283 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_call_target_0_1;

#line 286 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_call_target_0_2[1];

#line 289 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_call_target_0_2;

#line 292 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_call_target_0_0[1];

#line 295 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_call_target_0_1[1];

#line 298 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_call_target_0_2[1];

#line 301 "erl_backend.elds.c"
static const MR_DuPtagLayout erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_call_target_0[3];

#line 304 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_name_ordered_elds_call_target_0[3];

#line 307 "erl_backend.elds.c"
static const MR_Integer erl_backend__elds__erl_backend__elds__functor_number_map_elds_call_target_0[3];

#line 310 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_case_0_0[2];

#line 313 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_case_0_0;

#line 316 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_case_0_0[1];

#line 319 "erl_backend.elds.c"
static const MR_DuPtagLayout erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_case_0[1];

#line 322 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_name_ordered_elds_case_0[1];

#line 325 "erl_backend.elds.c"
static const MR_Integer erl_backend__elds__erl_backend__elds__functor_number_map_elds_case_0[1];

#line 328 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_catch_0_0[3];

#line 331 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_catch_0_0;

#line 334 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_catch_0_0[1];

#line 337 "erl_backend.elds.c"
static const MR_DuPtagLayout erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_catch_0[1];

#line 340 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_name_ordered_elds_catch_0[1];

#line 343 "erl_backend.elds.c"
static const MR_Integer erl_backend__elds__erl_backend__elds__functor_number_map_elds_catch_0[1];

#line 346 "erl_backend.elds.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__elds__list__ti_list_1erl_backend__elds__type_ctor_info_elds_term_0;

#line 349 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_clause_0_0[2];

#line 352 "erl_backend.elds.c"
static const MR_ConstString erl_backend__elds__erl_backend__elds__field_names_elds_clause_0_0[2];

#line 355 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_clause_0_0;

#line 358 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_clause_0_0[1];

#line 361 "erl_backend.elds.c"
static const MR_DuPtagLayout erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_clause_0[1];

#line 364 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_name_ordered_elds_clause_0[1];

#line 367 "erl_backend.elds.c"
static const MR_Integer erl_backend__elds__erl_backend__elds__functor_number_map_elds_clause_0[1];

#line 370 "erl_backend.elds.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__elds__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 373 "erl_backend.elds.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__elds__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0;

#line 376 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_defn_0_0[4];

#line 379 "erl_backend.elds.c"
static const MR_ConstString erl_backend__elds__erl_backend__elds__field_names_elds_defn_0_0[4];

#line 382 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_defn_0_0;

#line 385 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_defn_0_0[1];

#line 388 "erl_backend.elds.c"
static const MR_DuPtagLayout erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_defn_0[1];

#line 391 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_name_ordered_elds_defn_0[1];

#line 394 "erl_backend.elds.c"
static const MR_Integer erl_backend__elds__erl_backend__elds__functor_number_map_elds_defn_0[1];

#line 397 "erl_backend.elds.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__elds__list__ti_list_1erl_backend__elds__type_ctor_info_elds_expr_0;

#line 400 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_0[1];

#line 403 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_0;

#line 406 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_1[1];

#line 409 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_1;

#line 412 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_2[2];

#line 415 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_2;

#line 418 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_3[2];

#line 421 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_3;

#line 424 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_4[3];

#line 427 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_4;

#line 430 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_5[2];

#line 433 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_5;

#line 436 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_6[1];

#line 439 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_6;

#line 442 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_7[1];

#line 445 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_7;

#line 448 "erl_backend.elds.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__elds__list__ti_list_1erl_backend__elds__type_ctor_info_elds_case_0;

#line 451 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_8[2];

#line 454 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_8;

#line 457 "erl_backend.elds.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__elds__maybe__ti_maybe_1erl_backend__elds__type_ctor_info_elds_catch_0;

#line 460 "erl_backend.elds.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__elds__maybe__ti_maybe_1erl_backend__elds__type_ctor_info_elds_expr_0;

#line 463 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_9[4];

#line 466 "erl_backend.elds.c"
static const MR_ConstString erl_backend__elds__erl_backend__elds__field_names_elds_expr_0_9[4];

#line 469 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_9;

#line 472 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_10[1];

#line 475 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_10;

#line 478 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_11[2];

#line 481 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_11;

#line 484 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_12[2];

#line 487 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_12;

#line 490 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_13[1];

#line 493 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_13;

#line 496 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_expr_0_0[1];

#line 499 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_expr_0_1[1];

#line 502 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_expr_0_2[1];

#line 505 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_expr_0_3[11];

#line 508 "erl_backend.elds.c"
static const MR_DuPtagLayout erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_expr_0[4];

#line 511 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_name_ordered_elds_expr_0[14];

#line 514 "erl_backend.elds.c"
static const MR_Integer erl_backend__elds__erl_backend__elds__functor_number_map_elds_expr_0[14];

#line 517 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_foreign_export_defn_0_0[3];

#line 520 "erl_backend.elds.c"
static const MR_ConstString erl_backend__elds__erl_backend__elds__field_names_elds_foreign_export_defn_0_0[3];

#line 523 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_foreign_export_defn_0_0;

#line 526 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_foreign_export_defn_0_0[1];

#line 529 "erl_backend.elds.c"
static const MR_DuPtagLayout erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_foreign_export_defn_0[1];

#line 532 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_name_ordered_elds_foreign_export_defn_0[1];

#line 535 "erl_backend.elds.c"
static const MR_Integer erl_backend__elds__erl_backend__elds__functor_number_map_elds_foreign_export_defn_0[1];

#line 538 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_rtti_defn_0_0[4];

#line 541 "erl_backend.elds.c"
static const MR_ConstString erl_backend__elds__erl_backend__elds__field_names_elds_rtti_defn_0_0[4];

#line 544 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_rtti_defn_0_0;

#line 547 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_rtti_defn_0_0[1];

#line 550 "erl_backend.elds.c"
static const MR_DuPtagLayout erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_rtti_defn_0[1];

#line 553 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_name_ordered_elds_rtti_defn_0[1];

#line 556 "erl_backend.elds.c"
static const MR_Integer erl_backend__elds__erl_backend__elds__functor_number_map_elds_rtti_defn_0[1];

#line 559 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_rtti_id_0_0[1];

#line 562 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_rtti_id_0_0;

#line 565 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_rtti_id_0_1[1];

#line 568 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_rtti_id_0_1;

#line 571 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_rtti_id_0_2[1];

#line 574 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_rtti_id_0_2;

#line 577 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_rtti_id_0_3[3];

#line 580 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_rtti_id_0_3;

#line 583 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_rtti_id_0_0[1];

#line 586 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_rtti_id_0_1[1];

#line 589 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_rtti_id_0_2[1];

#line 592 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_rtti_id_0_3[1];

#line 595 "erl_backend.elds.c"
static const MR_DuPtagLayout erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_rtti_id_0[4];

#line 598 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_name_ordered_elds_rtti_id_0[4];

#line 601 "erl_backend.elds.c"
static const MR_Integer erl_backend__elds__erl_backend__elds__functor_number_map_elds_rtti_id_0[4];

#line 604 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_term_0_0[1];

#line 607 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_0;

#line 610 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_term_0_1[1];

#line 613 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_1;

#line 616 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_term_0_2[1];

#line 619 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_2;

#line 622 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_term_0_3[1];

#line 625 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_3;

#line 628 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_term_0_4[1];

#line 631 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_4;

#line 634 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_term_0_5[1];

#line 637 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_5;

#line 640 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_term_0_6[1];

#line 643 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_6;

#line 646 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_term_0_7[1];

#line 649 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_7;

#line 652 "erl_backend.elds.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__elds__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 655 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_term_0_8[1];

#line 658 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_8;

#line 661 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_9;

#line 664 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_term_0_10[1];

#line 667 "erl_backend.elds.c"
static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_10;

#line 670 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_term_0_0[1];

#line 673 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_term_0_1[1];

#line 676 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_term_0_2[1];

#line 679 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_term_0_3[8];

#line 682 "erl_backend.elds.c"
static const MR_DuPtagLayout erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_term_0[4];

#line 685 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_name_ordered_elds_term_0[11];

#line 688 "erl_backend.elds.c"
static const MR_Integer erl_backend__elds__erl_backend__elds__functor_number_map_elds_term_0[11];

#line 691 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_unop_0_0;

#line 694 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_unop_0_1;

#line 697 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_unop_0_2;

#line 700 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_unop_0_3;

#line 703 "erl_backend.elds.c"
static const MR_EnumFunctorDescPtr erl_backend__elds__erl_backend__elds__enum_value_ordered_elds_unop_0[4];

#line 706 "erl_backend.elds.c"
static const MR_EnumFunctorDescPtr erl_backend__elds__erl_backend__elds__enum_name_ordered_elds_unop_0[4];

#line 709 "erl_backend.elds.c"
static const MR_Integer erl_backend__elds__erl_backend__elds__functor_number_map_elds_unop_0[4];

#line 712 "erl_backend.elds.c"
static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_0_0_10001(
#line 715 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_1,
#line 717 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2);

#line 720 "erl_backend.elds.c"
static void MR_CALL 
erl_backend__elds____Compare____elds_0_0_10001(
#line 723 "erl_backend.elds.c"
  MR_Box * erl_backend__elds__wrapper_arg_1,
#line 725 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2,
#line 727 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_3);

#line 730 "erl_backend.elds.c"
static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_binop_0_0_10001(
#line 733 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_1,
#line 735 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2);

#line 738 "erl_backend.elds.c"
static void MR_CALL 
erl_backend__elds____Compare____elds_binop_0_0_10001(
#line 741 "erl_backend.elds.c"
  MR_Box * erl_backend__elds__wrapper_arg_1,
#line 743 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2,
#line 745 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_3);

#line 748 "erl_backend.elds.c"
static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_body_0_0_10001(
#line 751 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_1,
#line 753 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2);

#line 756 "erl_backend.elds.c"
static void MR_CALL 
erl_backend__elds____Compare____elds_body_0_0_10001(
#line 759 "erl_backend.elds.c"
  MR_Box * erl_backend__elds__wrapper_arg_1,
#line 761 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2,
#line 763 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_3);

#line 766 "erl_backend.elds.c"
static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_call_target_0_0_10001(
#line 769 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_1,
#line 771 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2);

#line 774 "erl_backend.elds.c"
static void MR_CALL 
erl_backend__elds____Compare____elds_call_target_0_0_10001(
#line 777 "erl_backend.elds.c"
  MR_Box * erl_backend__elds__wrapper_arg_1,
#line 779 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2,
#line 781 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_3);

#line 784 "erl_backend.elds.c"
static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_case_0_0_10001(
#line 787 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_1,
#line 789 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2);

#line 792 "erl_backend.elds.c"
static void MR_CALL 
erl_backend__elds____Compare____elds_case_0_0_10001(
#line 795 "erl_backend.elds.c"
  MR_Box * erl_backend__elds__wrapper_arg_1,
#line 797 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2,
#line 799 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_3);

#line 802 "erl_backend.elds.c"
static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_catch_0_0_10001(
#line 805 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_1,
#line 807 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2);

#line 810 "erl_backend.elds.c"
static void MR_CALL 
erl_backend__elds____Compare____elds_catch_0_0_10001(
#line 813 "erl_backend.elds.c"
  MR_Box * erl_backend__elds__wrapper_arg_1,
#line 815 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2,
#line 817 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_3);

#line 820 "erl_backend.elds.c"
static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_clause_0_0_10001(
#line 823 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_1,
#line 825 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2);

#line 828 "erl_backend.elds.c"
static void MR_CALL 
erl_backend__elds____Compare____elds_clause_0_0_10001(
#line 831 "erl_backend.elds.c"
  MR_Box * erl_backend__elds__wrapper_arg_1,
#line 833 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2,
#line 835 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_3);

#line 838 "erl_backend.elds.c"
static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_defn_0_0_10001(
#line 841 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_1,
#line 843 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2);

#line 846 "erl_backend.elds.c"
static void MR_CALL 
erl_backend__elds____Compare____elds_defn_0_0_10001(
#line 849 "erl_backend.elds.c"
  MR_Box * erl_backend__elds__wrapper_arg_1,
#line 851 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2,
#line 853 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_3);

#line 856 "erl_backend.elds.c"
static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_expr_0_0_10001(
#line 859 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_1,
#line 861 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2);

#line 864 "erl_backend.elds.c"
static void MR_CALL 
erl_backend__elds____Compare____elds_expr_0_0_10001(
#line 867 "erl_backend.elds.c"
  MR_Box * erl_backend__elds__wrapper_arg_1,
#line 869 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2,
#line 871 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_3);

#line 874 "erl_backend.elds.c"
static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_foreign_export_defn_0_0_10001(
#line 877 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_1,
#line 879 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2);

#line 882 "erl_backend.elds.c"
static void MR_CALL 
erl_backend__elds____Compare____elds_foreign_export_defn_0_0_10001(
#line 885 "erl_backend.elds.c"
  MR_Box * erl_backend__elds__wrapper_arg_1,
#line 887 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2,
#line 889 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_3);

#line 892 "erl_backend.elds.c"
static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_rtti_defn_0_0_10001(
#line 895 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_1,
#line 897 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2);

#line 900 "erl_backend.elds.c"
static void MR_CALL 
erl_backend__elds____Compare____elds_rtti_defn_0_0_10001(
#line 903 "erl_backend.elds.c"
  MR_Box * erl_backend__elds__wrapper_arg_1,
#line 905 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2,
#line 907 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_3);

#line 910 "erl_backend.elds.c"
static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_rtti_id_0_0_10001(
#line 913 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_1,
#line 915 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2);

#line 918 "erl_backend.elds.c"
static void MR_CALL 
erl_backend__elds____Compare____elds_rtti_id_0_0_10001(
#line 921 "erl_backend.elds.c"
  MR_Box * erl_backend__elds__wrapper_arg_1,
#line 923 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2,
#line 925 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_3);

#line 928 "erl_backend.elds.c"
static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_term_0_0_10001(
#line 931 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_1,
#line 933 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2);

#line 936 "erl_backend.elds.c"
static void MR_CALL 
erl_backend__elds____Compare____elds_term_0_0_10001(
#line 939 "erl_backend.elds.c"
  MR_Box * erl_backend__elds__wrapper_arg_1,
#line 941 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2,
#line 943 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_3);

#line 946 "erl_backend.elds.c"
static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_unop_0_0_10001(
#line 949 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_1,
#line 951 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2);

#line 954 "erl_backend.elds.c"
static void MR_CALL 
erl_backend__elds____Compare____elds_unop_0_0_10001(
#line 957 "erl_backend.elds.c"
  MR_Box * erl_backend__elds__wrapper_arg_1,
#line 959 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2,
#line 961 "erl_backend.elds.c"
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
#include "array.mh"
#include "array.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"



#line 1241 "erl_backend.elds.c"
static const MR_FA_PseudoTypeInfo_Struct1 erl_backend__elds__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1249 "erl_backend.elds.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__elds__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
  }
};

#line 1257 "erl_backend.elds.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__elds__list__ti_list_1parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0
  }
};

#line 1265 "erl_backend.elds.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__elds__list__ti_list_1parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0
  }
};

#line 1273 "erl_backend.elds.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__elds__list__ti_list_1erl_backend__elds__type_ctor_info_elds_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_defn_0
  }
};

#line 1281 "erl_backend.elds.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__elds__list__ti_list_1erl_backend__elds__type_ctor_info_elds_foreign_export_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_foreign_export_defn_0
  }
};

#line 1289 "erl_backend.elds.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__elds__list__ti_list_1erl_backend__elds__type_ctor_info_elds_rtti_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_rtti_defn_0
  }
};

#line 1297 "erl_backend.elds.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__elds__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

#line 1305 "erl_backend.elds.c"
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

#line 1318 "erl_backend.elds.c"
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

#line 1331 "erl_backend.elds.c"
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

#line 1346 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_0_0[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_0_0
};

#line 1351 "erl_backend.elds.c"
static const MR_DuPtagLayout erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_0_0
  }
};

#line 1360 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_name_ordered_elds_0[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_0_0
};

#line 1365 "erl_backend.elds.c"
static const MR_Integer erl_backend__elds__erl_backend__elds__functor_number_map_elds_0[1] = {
  (MR_Integer) 0
};

#line 1370 "erl_backend.elds.c"
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
  {     erl_backend__elds__erl_backend__elds__enum_name_ordered_elds_binop_0 },
  {     erl_backend__elds__erl_backend__elds__enum_value_ordered_elds_binop_0 },
  (MR_Integer) 19,
  (MR_Integer) 4,
  erl_backend__elds__erl_backend__elds__functor_number_map_elds_binop_0
};

#line 1587 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_body_0_0[1] = {
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_clause_0
};

#line 1592 "erl_backend.elds.c"
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

#line 1607 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_body_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1612 "erl_backend.elds.c"
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

#line 1627 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_body_0_0[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_body_0_0
};

#line 1632 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_body_0_1[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_body_0_1
};

#line 1637 "erl_backend.elds.c"
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

#line 1651 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_name_ordered_elds_body_0[2] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_body_0_0,
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_body_0_1
};

#line 1657 "erl_backend.elds.c"
static const MR_Integer erl_backend__elds__erl_backend__elds__functor_number_map_elds_body_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1663 "erl_backend.elds.c"
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

#line 1680 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_call_target_0_0[1] = {
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
};

#line 1685 "erl_backend.elds.c"
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

#line 1700 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_call_target_0_1[1] = {
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0
};

#line 1705 "erl_backend.elds.c"
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

#line 1720 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_call_target_0_2[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 1725 "erl_backend.elds.c"
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

#line 1740 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_call_target_0_0[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_call_target_0_0
};

#line 1745 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_call_target_0_1[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_call_target_0_1
};

#line 1750 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_call_target_0_2[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_call_target_0_2
};

#line 1755 "erl_backend.elds.c"
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

#line 1774 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_name_ordered_elds_call_target_0[3] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_call_target_0_2,
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_call_target_0_1,
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_call_target_0_0
};

#line 1781 "erl_backend.elds.c"
static const MR_Integer erl_backend__elds__erl_backend__elds__functor_number_map_elds_call_target_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1788 "erl_backend.elds.c"
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

#line 1805 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_case_0_0[2] = {
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_term_0,
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0
};

#line 1811 "erl_backend.elds.c"
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

#line 1826 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_case_0_0[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_case_0_0
};

#line 1831 "erl_backend.elds.c"
static const MR_DuPtagLayout erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_case_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_case_0_0
  }
};

#line 1840 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_name_ordered_elds_case_0[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_case_0_0
};

#line 1845 "erl_backend.elds.c"
static const MR_Integer erl_backend__elds__erl_backend__elds__functor_number_map_elds_case_0[1] = {
  (MR_Integer) 0
};

#line 1850 "erl_backend.elds.c"
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

#line 1867 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_catch_0_0[3] = {
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_term_0,
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_term_0,
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0
};

#line 1874 "erl_backend.elds.c"
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

#line 1889 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_catch_0_0[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_catch_0_0
};

#line 1894 "erl_backend.elds.c"
static const MR_DuPtagLayout erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_catch_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_catch_0_0
  }
};

#line 1903 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_name_ordered_elds_catch_0[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_catch_0_0
};

#line 1908 "erl_backend.elds.c"
static const MR_Integer erl_backend__elds__erl_backend__elds__functor_number_map_elds_catch_0[1] = {
  (MR_Integer) 0
};

#line 1913 "erl_backend.elds.c"
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

#line 1930 "erl_backend.elds.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__elds__list__ti_list_1erl_backend__elds__type_ctor_info_elds_term_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_term_0
  }
};

#line 1938 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_clause_0_0[2] = {
  (MR_PseudoTypeInfo) &erl_backend__elds__list__ti_list_1erl_backend__elds__type_ctor_info_elds_term_0,
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0
};

#line 1944 "erl_backend.elds.c"
static const MR_ConstString erl_backend__elds__erl_backend__elds__field_names_elds_clause_0_0[2] = {
  (MR_String) "clause_pattern",
  (MR_String) "clause_expr"
};

#line 1950 "erl_backend.elds.c"
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

#line 1965 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_clause_0_0[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_clause_0_0
};

#line 1970 "erl_backend.elds.c"
static const MR_DuPtagLayout erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_clause_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_clause_0_0
  }
};

#line 1979 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_name_ordered_elds_clause_0[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_clause_0_0
};

#line 1984 "erl_backend.elds.c"
static const MR_Integer erl_backend__elds__erl_backend__elds__functor_number_map_elds_clause_0[1] = {
  (MR_Integer) 0
};

#line 1989 "erl_backend.elds.c"
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

#line 2006 "erl_backend.elds.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__elds__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2014 "erl_backend.elds.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__elds__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 2022 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_defn_0_0[4] = {
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
  (MR_PseudoTypeInfo) &erl_backend__elds__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_body_0,
  (MR_PseudoTypeInfo) &erl_backend__elds__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0
};

#line 2030 "erl_backend.elds.c"
static const MR_ConstString erl_backend__elds__erl_backend__elds__field_names_elds_defn_0_0[4] = {
  (MR_String) "defn_proc_id",
  (MR_String) "defn_varset",
  (MR_String) "defn_body",
  (MR_String) "defn_env_vars"
};

#line 2038 "erl_backend.elds.c"
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

#line 2053 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_defn_0_0[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_defn_0_0
};

#line 2058 "erl_backend.elds.c"
static const MR_DuPtagLayout erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_defn_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_defn_0_0
  }
};

#line 2067 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_name_ordered_elds_defn_0[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_defn_0_0
};

#line 2072 "erl_backend.elds.c"
static const MR_Integer erl_backend__elds__erl_backend__elds__functor_number_map_elds_defn_0[1] = {
  (MR_Integer) 0
};

#line 2077 "erl_backend.elds.c"
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

#line 2094 "erl_backend.elds.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__elds__list__ti_list_1erl_backend__elds__type_ctor_info_elds_expr_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0
  }
};

#line 2102 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_0[1] = {
  (MR_PseudoTypeInfo) &erl_backend__elds__list__ti_list_1erl_backend__elds__type_ctor_info_elds_expr_0
};

#line 2107 "erl_backend.elds.c"
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

#line 2122 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_1[1] = {
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_term_0
};

#line 2127 "erl_backend.elds.c"
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

#line 2142 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_2[2] = {
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0,
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0
};

#line 2148 "erl_backend.elds.c"
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

#line 2163 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_3[2] = {
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_unop_0,
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0
};

#line 2169 "erl_backend.elds.c"
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

#line 2184 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_4[3] = {
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_binop_0,
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0,
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0
};

#line 2191 "erl_backend.elds.c"
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

#line 2206 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_5[2] = {
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_call_target_0,
  (MR_PseudoTypeInfo) &erl_backend__elds__list__ti_list_1erl_backend__elds__type_ctor_info_elds_expr_0
};

#line 2212 "erl_backend.elds.c"
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

#line 2227 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_6[1] = {
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_rtti_id_0
};

#line 2232 "erl_backend.elds.c"
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

#line 2247 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_7[1] = {
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_clause_0
};

#line 2252 "erl_backend.elds.c"
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

#line 2267 "erl_backend.elds.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__elds__list__ti_list_1erl_backend__elds__type_ctor_info_elds_case_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_case_0
  }
};

#line 2275 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_8[2] = {
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0,
  (MR_PseudoTypeInfo) &erl_backend__elds__list__ti_list_1erl_backend__elds__type_ctor_info_elds_case_0
};

#line 2281 "erl_backend.elds.c"
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

#line 2296 "erl_backend.elds.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__elds__maybe__ti_maybe_1erl_backend__elds__type_ctor_info_elds_catch_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_catch_0
  }
};

#line 2304 "erl_backend.elds.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__elds__maybe__ti_maybe_1erl_backend__elds__type_ctor_info_elds_expr_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0
  }
};

#line 2312 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_9[4] = {
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0,
  (MR_PseudoTypeInfo) &erl_backend__elds__list__ti_list_1erl_backend__elds__type_ctor_info_elds_case_0,
  (MR_PseudoTypeInfo) &erl_backend__elds__maybe__ti_maybe_1erl_backend__elds__type_ctor_info_elds_catch_0,
  (MR_PseudoTypeInfo) &erl_backend__elds__maybe__ti_maybe_1erl_backend__elds__type_ctor_info_elds_expr_0
};

#line 2320 "erl_backend.elds.c"
static const MR_ConstString erl_backend__elds__erl_backend__elds__field_names_elds_expr_0_9[4] = {
  (MR_String) "try_expr",
  (MR_String) "try_cases",
  (MR_String) "try_catch",
  (MR_String) "try_after"
};

#line 2328 "erl_backend.elds.c"
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

#line 2343 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_10[1] = {
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0
};

#line 2348 "erl_backend.elds.c"
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

#line 2363 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_11[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0
};

#line 2369 "erl_backend.elds.c"
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

#line 2384 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_12[2] = {
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0,
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0
};

#line 2390 "erl_backend.elds.c"
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

#line 2405 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_13[1] = {
  (MR_PseudoTypeInfo) &erl_backend__elds__list__ti_list_1erl_backend__elds__type_ctor_info_elds_case_0
};

#line 2410 "erl_backend.elds.c"
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

#line 2425 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_expr_0_0[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_7
};

#line 2430 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_expr_0_1[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_0
};

#line 2435 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_expr_0_2[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_1
};

#line 2440 "erl_backend.elds.c"
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

#line 2455 "erl_backend.elds.c"
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

#line 2479 "erl_backend.elds.c"
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

#line 2497 "erl_backend.elds.c"
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

#line 2515 "erl_backend.elds.c"
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

#line 2532 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_foreign_export_defn_0_0[3] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &erl_backend__elds__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_clause_0
};

#line 2539 "erl_backend.elds.c"
static const MR_ConstString erl_backend__elds__erl_backend__elds__field_names_elds_foreign_export_defn_0_0[3] = {
  (MR_String) "fe_defn_name",
  (MR_String) "fe_defn_varset",
  (MR_String) "fe_defn_clause"
};

#line 2546 "erl_backend.elds.c"
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

#line 2561 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_foreign_export_defn_0_0[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_foreign_export_defn_0_0
};

#line 2566 "erl_backend.elds.c"
static const MR_DuPtagLayout erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_foreign_export_defn_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_foreign_export_defn_0_0
  }
};

#line 2575 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_name_ordered_elds_foreign_export_defn_0[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_foreign_export_defn_0_0
};

#line 2580 "erl_backend.elds.c"
static const MR_Integer erl_backend__elds__erl_backend__elds__functor_number_map_elds_foreign_export_defn_0[1] = {
  (MR_Integer) 0
};

#line 2585 "erl_backend.elds.c"
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

#line 2602 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_rtti_defn_0_0[4] = {
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_rtti_id_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &erl_backend__elds__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_clause_0
};

#line 2610 "erl_backend.elds.c"
static const MR_ConstString erl_backend__elds__erl_backend__elds__field_names_elds_rtti_defn_0_0[4] = {
  (MR_String) "rtti_defn_id",
  (MR_String) "rtti_defn_exported",
  (MR_String) "rtti_defn_varset",
  (MR_String) "rtti_defn_clause"
};

#line 2618 "erl_backend.elds.c"
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

#line 2633 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_rtti_defn_0_0[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_rtti_defn_0_0
};

#line 2638 "erl_backend.elds.c"
static const MR_DuPtagLayout erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_rtti_defn_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_rtti_defn_0_0
  }
};

#line 2647 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_name_ordered_elds_rtti_defn_0[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_rtti_defn_0_0
};

#line 2652 "erl_backend.elds.c"
static const MR_Integer erl_backend__elds__erl_backend__elds__functor_number_map_elds_rtti_defn_0[1] = {
  (MR_Integer) 0
};

#line 2657 "erl_backend.elds.c"
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

#line 2674 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_rtti_id_0_0[1] = {
  (MR_PseudoTypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_type_ctor_0
};

#line 2679 "erl_backend.elds.c"
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

#line 2694 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_rtti_id_0_1[1] = {
  (MR_PseudoTypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_type_info_0
};

#line 2699 "erl_backend.elds.c"
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

#line 2714 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_rtti_id_0_2[1] = {
  (MR_PseudoTypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_pseudo_type_info_0
};

#line 2719 "erl_backend.elds.c"
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

#line 2734 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_rtti_id_0_3[3] = {
  (MR_PseudoTypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_tc_name_0,
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 2741 "erl_backend.elds.c"
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

#line 2756 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_rtti_id_0_0[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_rtti_id_0_0
};

#line 2761 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_rtti_id_0_1[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_rtti_id_0_1
};

#line 2766 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_rtti_id_0_2[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_rtti_id_0_2
};

#line 2771 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_rtti_id_0_3[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_rtti_id_0_3
};

#line 2776 "erl_backend.elds.c"
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

#line 2800 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_name_ordered_elds_rtti_id_0[4] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_rtti_id_0_3,
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_rtti_id_0_2,
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_rtti_id_0_0,
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_rtti_id_0_1
};

#line 2808 "erl_backend.elds.c"
static const MR_Integer erl_backend__elds__erl_backend__elds__functor_number_map_elds_rtti_id_0[4] = {
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 2816 "erl_backend.elds.c"
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

#line 2833 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_term_0_0[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_character_0
};

#line 2838 "erl_backend.elds.c"
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

#line 2853 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_term_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2858 "erl_backend.elds.c"
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

#line 2873 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_term_0_2[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0
};

#line 2878 "erl_backend.elds.c"
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

#line 2893 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_term_0_3[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 2898 "erl_backend.elds.c"
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

#line 2913 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_term_0_4[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 2918 "erl_backend.elds.c"
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

#line 2933 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_term_0_5[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 2938 "erl_backend.elds.c"
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

#line 2953 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_term_0_6[1] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
};

#line 2958 "erl_backend.elds.c"
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

#line 2973 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_term_0_7[1] = {
  (MR_PseudoTypeInfo) &erl_backend__elds__list__ti_list_1erl_backend__elds__type_ctor_info_elds_expr_0
};

#line 2978 "erl_backend.elds.c"
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

#line 2993 "erl_backend.elds.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__elds__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 3001 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_term_0_8[1] = {
  (MR_PseudoTypeInfo) &erl_backend__elds__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

#line 3006 "erl_backend.elds.c"
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

#line 3021 "erl_backend.elds.c"
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

#line 3036 "erl_backend.elds.c"
static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_term_0_10[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 3041 "erl_backend.elds.c"
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

#line 3056 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_term_0_0[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_9
};

#line 3061 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_term_0_1[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_0
};

#line 3066 "erl_backend.elds.c"
static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_term_0_2[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_1
};

#line 3071 "erl_backend.elds.c"
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

#line 3083 "erl_backend.elds.c"
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

#line 3107 "erl_backend.elds.c"
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

#line 3122 "erl_backend.elds.c"
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

#line 3137 "erl_backend.elds.c"
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

#line 3154 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_unop_0_0 = {
  (MR_String) "plus",
  (MR_Integer) 0
};

#line 3160 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_unop_0_1 = {
  (MR_String) "minus",
  (MR_Integer) 1
};

#line 3166 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_unop_0_2 = {
  (MR_String) "bnot",
  (MR_Integer) 2
};

#line 3172 "erl_backend.elds.c"
static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_unop_0_3 = {
  (MR_String) "logical_not",
  (MR_Integer) 3
};

#line 3178 "erl_backend.elds.c"
static const MR_EnumFunctorDescPtr erl_backend__elds__erl_backend__elds__enum_value_ordered_elds_unop_0[4] = {
  &erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_unop_0_0,
  &erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_unop_0_1,
  &erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_unop_0_2,
  &erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_unop_0_3
};

#line 3186 "erl_backend.elds.c"
static const MR_EnumFunctorDescPtr erl_backend__elds__erl_backend__elds__enum_name_ordered_elds_unop_0[4] = {
  &erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_unop_0_2,
  &erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_unop_0_3,
  &erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_unop_0_1,
  &erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_unop_0_0
};

#line 3194 "erl_backend.elds.c"
static const MR_Integer erl_backend__elds__erl_backend__elds__functor_number_map_elds_unop_0[4] = {
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 3202 "erl_backend.elds.c"
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

#line 3219 "erl_backend.elds.c"
static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_0_0_10001(
#line 3222 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_1,
#line 3224 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2)
#line 3226 "erl_backend.elds.c"
{
#line 3228 "erl_backend.elds.c"
  {
#line 3230 "erl_backend.elds.c"
    MR_bool erl_backend__elds__succeeded;

#line 3233 "erl_backend.elds.c"
    {
#line 3235 "erl_backend.elds.c"
      erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_0_0(((MR_Word) erl_backend__elds__wrapper_arg_1), ((MR_Word) erl_backend__elds__wrapper_arg_2));
    }
#line 3238 "erl_backend.elds.c"
    return erl_backend__elds__succeeded;
#line 3240 "erl_backend.elds.c"
  }
#line 3242 "erl_backend.elds.c"
}

#line 3245 "erl_backend.elds.c"
static void MR_CALL 
erl_backend__elds____Compare____elds_0_0_10001(
#line 3248 "erl_backend.elds.c"
  MR_Box * erl_backend__elds__wrapper_arg_1,
#line 3250 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2,
#line 3252 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_3)
#line 3254 "erl_backend.elds.c"
{
#line 3256 "erl_backend.elds.c"
  {
#line 3258 "erl_backend.elds.c"
    MR_Word erl_backend__elds__conv0_HeadVar__1_1;

#line 3261 "erl_backend.elds.c"
    {
#line 3263 "erl_backend.elds.c"
      erl_backend__elds____Compare____elds_0_0(&erl_backend__elds__conv0_HeadVar__1_1, ((MR_Word) erl_backend__elds__wrapper_arg_2), ((MR_Word) erl_backend__elds__wrapper_arg_3));
    }
#line 3266 "erl_backend.elds.c"
    *erl_backend__elds__wrapper_arg_1 = ((MR_Box) (erl_backend__elds__conv0_HeadVar__1_1));
#line 3268 "erl_backend.elds.c"
  }
#line 3270 "erl_backend.elds.c"
}

#line 3273 "erl_backend.elds.c"
static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_binop_0_0_10001(
#line 3276 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_1,
#line 3278 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2)
#line 3280 "erl_backend.elds.c"
{
#line 3282 "erl_backend.elds.c"
  {
#line 3284 "erl_backend.elds.c"
    MR_bool erl_backend__elds__succeeded;

#line 3287 "erl_backend.elds.c"
    {
#line 3289 "erl_backend.elds.c"
      erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_binop_0_0(((MR_Word) erl_backend__elds__wrapper_arg_1), ((MR_Word) erl_backend__elds__wrapper_arg_2));
    }
#line 3292 "erl_backend.elds.c"
    return erl_backend__elds__succeeded;
#line 3294 "erl_backend.elds.c"
  }
#line 3296 "erl_backend.elds.c"
}

#line 3299 "erl_backend.elds.c"
static void MR_CALL 
erl_backend__elds____Compare____elds_binop_0_0_10001(
#line 3302 "erl_backend.elds.c"
  MR_Box * erl_backend__elds__wrapper_arg_1,
#line 3304 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2,
#line 3306 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_3)
#line 3308 "erl_backend.elds.c"
{
#line 3310 "erl_backend.elds.c"
  {
#line 3312 "erl_backend.elds.c"
    MR_Word erl_backend__elds__conv0_HeadVar__1_1;

#line 3315 "erl_backend.elds.c"
    {
#line 3317 "erl_backend.elds.c"
      erl_backend__elds____Compare____elds_binop_0_0(&erl_backend__elds__conv0_HeadVar__1_1, ((MR_Word) erl_backend__elds__wrapper_arg_2), ((MR_Word) erl_backend__elds__wrapper_arg_3));
    }
#line 3320 "erl_backend.elds.c"
    *erl_backend__elds__wrapper_arg_1 = ((MR_Box) (erl_backend__elds__conv0_HeadVar__1_1));
#line 3322 "erl_backend.elds.c"
  }
#line 3324 "erl_backend.elds.c"
}

#line 3327 "erl_backend.elds.c"
static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_body_0_0_10001(
#line 3330 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_1,
#line 3332 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2)
#line 3334 "erl_backend.elds.c"
{
#line 3336 "erl_backend.elds.c"
  {
#line 3338 "erl_backend.elds.c"
    MR_bool erl_backend__elds__succeeded;

#line 3341 "erl_backend.elds.c"
    {
#line 3343 "erl_backend.elds.c"
      erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_body_0_0(((MR_Word) erl_backend__elds__wrapper_arg_1), ((MR_Word) erl_backend__elds__wrapper_arg_2));
    }
#line 3346 "erl_backend.elds.c"
    return erl_backend__elds__succeeded;
#line 3348 "erl_backend.elds.c"
  }
#line 3350 "erl_backend.elds.c"
}

#line 3353 "erl_backend.elds.c"
static void MR_CALL 
erl_backend__elds____Compare____elds_body_0_0_10001(
#line 3356 "erl_backend.elds.c"
  MR_Box * erl_backend__elds__wrapper_arg_1,
#line 3358 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2,
#line 3360 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_3)
#line 3362 "erl_backend.elds.c"
{
#line 3364 "erl_backend.elds.c"
  {
#line 3366 "erl_backend.elds.c"
    MR_Word erl_backend__elds__conv0_HeadVar__1_1;

#line 3369 "erl_backend.elds.c"
    {
#line 3371 "erl_backend.elds.c"
      erl_backend__elds____Compare____elds_body_0_0(&erl_backend__elds__conv0_HeadVar__1_1, ((MR_Word) erl_backend__elds__wrapper_arg_2), ((MR_Word) erl_backend__elds__wrapper_arg_3));
    }
#line 3374 "erl_backend.elds.c"
    *erl_backend__elds__wrapper_arg_1 = ((MR_Box) (erl_backend__elds__conv0_HeadVar__1_1));
#line 3376 "erl_backend.elds.c"
  }
#line 3378 "erl_backend.elds.c"
}

#line 3381 "erl_backend.elds.c"
static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_call_target_0_0_10001(
#line 3384 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_1,
#line 3386 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2)
#line 3388 "erl_backend.elds.c"
{
#line 3390 "erl_backend.elds.c"
  {
#line 3392 "erl_backend.elds.c"
    MR_bool erl_backend__elds__succeeded;

#line 3395 "erl_backend.elds.c"
    {
#line 3397 "erl_backend.elds.c"
      erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_call_target_0_0(((MR_Word) erl_backend__elds__wrapper_arg_1), ((MR_Word) erl_backend__elds__wrapper_arg_2));
    }
#line 3400 "erl_backend.elds.c"
    return erl_backend__elds__succeeded;
#line 3402 "erl_backend.elds.c"
  }
#line 3404 "erl_backend.elds.c"
}

#line 3407 "erl_backend.elds.c"
static void MR_CALL 
erl_backend__elds____Compare____elds_call_target_0_0_10001(
#line 3410 "erl_backend.elds.c"
  MR_Box * erl_backend__elds__wrapper_arg_1,
#line 3412 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2,
#line 3414 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_3)
#line 3416 "erl_backend.elds.c"
{
#line 3418 "erl_backend.elds.c"
  {
#line 3420 "erl_backend.elds.c"
    MR_Word erl_backend__elds__conv0_HeadVar__1_1;

#line 3423 "erl_backend.elds.c"
    {
#line 3425 "erl_backend.elds.c"
      erl_backend__elds____Compare____elds_call_target_0_0(&erl_backend__elds__conv0_HeadVar__1_1, ((MR_Word) erl_backend__elds__wrapper_arg_2), ((MR_Word) erl_backend__elds__wrapper_arg_3));
    }
#line 3428 "erl_backend.elds.c"
    *erl_backend__elds__wrapper_arg_1 = ((MR_Box) (erl_backend__elds__conv0_HeadVar__1_1));
#line 3430 "erl_backend.elds.c"
  }
#line 3432 "erl_backend.elds.c"
}

#line 3435 "erl_backend.elds.c"
static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_case_0_0_10001(
#line 3438 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_1,
#line 3440 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2)
#line 3442 "erl_backend.elds.c"
{
#line 3444 "erl_backend.elds.c"
  {
#line 3446 "erl_backend.elds.c"
    MR_bool erl_backend__elds__succeeded;

#line 3449 "erl_backend.elds.c"
    {
#line 3451 "erl_backend.elds.c"
      erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_case_0_0(((MR_Word) erl_backend__elds__wrapper_arg_1), ((MR_Word) erl_backend__elds__wrapper_arg_2));
    }
#line 3454 "erl_backend.elds.c"
    return erl_backend__elds__succeeded;
#line 3456 "erl_backend.elds.c"
  }
#line 3458 "erl_backend.elds.c"
}

#line 3461 "erl_backend.elds.c"
static void MR_CALL 
erl_backend__elds____Compare____elds_case_0_0_10001(
#line 3464 "erl_backend.elds.c"
  MR_Box * erl_backend__elds__wrapper_arg_1,
#line 3466 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2,
#line 3468 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_3)
#line 3470 "erl_backend.elds.c"
{
#line 3472 "erl_backend.elds.c"
  {
#line 3474 "erl_backend.elds.c"
    MR_Word erl_backend__elds__conv0_HeadVar__1_1;

#line 3477 "erl_backend.elds.c"
    {
#line 3479 "erl_backend.elds.c"
      erl_backend__elds____Compare____elds_case_0_0(&erl_backend__elds__conv0_HeadVar__1_1, ((MR_Word) erl_backend__elds__wrapper_arg_2), ((MR_Word) erl_backend__elds__wrapper_arg_3));
    }
#line 3482 "erl_backend.elds.c"
    *erl_backend__elds__wrapper_arg_1 = ((MR_Box) (erl_backend__elds__conv0_HeadVar__1_1));
#line 3484 "erl_backend.elds.c"
  }
#line 3486 "erl_backend.elds.c"
}

#line 3489 "erl_backend.elds.c"
static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_catch_0_0_10001(
#line 3492 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_1,
#line 3494 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2)
#line 3496 "erl_backend.elds.c"
{
#line 3498 "erl_backend.elds.c"
  {
#line 3500 "erl_backend.elds.c"
    MR_bool erl_backend__elds__succeeded;

#line 3503 "erl_backend.elds.c"
    {
#line 3505 "erl_backend.elds.c"
      erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_catch_0_0(((MR_Word) erl_backend__elds__wrapper_arg_1), ((MR_Word) erl_backend__elds__wrapper_arg_2));
    }
#line 3508 "erl_backend.elds.c"
    return erl_backend__elds__succeeded;
#line 3510 "erl_backend.elds.c"
  }
#line 3512 "erl_backend.elds.c"
}

#line 3515 "erl_backend.elds.c"
static void MR_CALL 
erl_backend__elds____Compare____elds_catch_0_0_10001(
#line 3518 "erl_backend.elds.c"
  MR_Box * erl_backend__elds__wrapper_arg_1,
#line 3520 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2,
#line 3522 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_3)
#line 3524 "erl_backend.elds.c"
{
#line 3526 "erl_backend.elds.c"
  {
#line 3528 "erl_backend.elds.c"
    MR_Word erl_backend__elds__conv0_HeadVar__1_1;

#line 3531 "erl_backend.elds.c"
    {
#line 3533 "erl_backend.elds.c"
      erl_backend__elds____Compare____elds_catch_0_0(&erl_backend__elds__conv0_HeadVar__1_1, ((MR_Word) erl_backend__elds__wrapper_arg_2), ((MR_Word) erl_backend__elds__wrapper_arg_3));
    }
#line 3536 "erl_backend.elds.c"
    *erl_backend__elds__wrapper_arg_1 = ((MR_Box) (erl_backend__elds__conv0_HeadVar__1_1));
#line 3538 "erl_backend.elds.c"
  }
#line 3540 "erl_backend.elds.c"
}

#line 3543 "erl_backend.elds.c"
static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_clause_0_0_10001(
#line 3546 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_1,
#line 3548 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2)
#line 3550 "erl_backend.elds.c"
{
#line 3552 "erl_backend.elds.c"
  {
#line 3554 "erl_backend.elds.c"
    MR_bool erl_backend__elds__succeeded;

#line 3557 "erl_backend.elds.c"
    {
#line 3559 "erl_backend.elds.c"
      erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_clause_0_0(((MR_Word) erl_backend__elds__wrapper_arg_1), ((MR_Word) erl_backend__elds__wrapper_arg_2));
    }
#line 3562 "erl_backend.elds.c"
    return erl_backend__elds__succeeded;
#line 3564 "erl_backend.elds.c"
  }
#line 3566 "erl_backend.elds.c"
}

#line 3569 "erl_backend.elds.c"
static void MR_CALL 
erl_backend__elds____Compare____elds_clause_0_0_10001(
#line 3572 "erl_backend.elds.c"
  MR_Box * erl_backend__elds__wrapper_arg_1,
#line 3574 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2,
#line 3576 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_3)
#line 3578 "erl_backend.elds.c"
{
#line 3580 "erl_backend.elds.c"
  {
#line 3582 "erl_backend.elds.c"
    MR_Word erl_backend__elds__conv0_HeadVar__1_1;

#line 3585 "erl_backend.elds.c"
    {
#line 3587 "erl_backend.elds.c"
      erl_backend__elds____Compare____elds_clause_0_0(&erl_backend__elds__conv0_HeadVar__1_1, ((MR_Word) erl_backend__elds__wrapper_arg_2), ((MR_Word) erl_backend__elds__wrapper_arg_3));
    }
#line 3590 "erl_backend.elds.c"
    *erl_backend__elds__wrapper_arg_1 = ((MR_Box) (erl_backend__elds__conv0_HeadVar__1_1));
#line 3592 "erl_backend.elds.c"
  }
#line 3594 "erl_backend.elds.c"
}

#line 3597 "erl_backend.elds.c"
static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_defn_0_0_10001(
#line 3600 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_1,
#line 3602 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2)
#line 3604 "erl_backend.elds.c"
{
#line 3606 "erl_backend.elds.c"
  {
#line 3608 "erl_backend.elds.c"
    MR_bool erl_backend__elds__succeeded;

#line 3611 "erl_backend.elds.c"
    {
#line 3613 "erl_backend.elds.c"
      erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_defn_0_0(((MR_Word) erl_backend__elds__wrapper_arg_1), ((MR_Word) erl_backend__elds__wrapper_arg_2));
    }
#line 3616 "erl_backend.elds.c"
    return erl_backend__elds__succeeded;
#line 3618 "erl_backend.elds.c"
  }
#line 3620 "erl_backend.elds.c"
}

#line 3623 "erl_backend.elds.c"
static void MR_CALL 
erl_backend__elds____Compare____elds_defn_0_0_10001(
#line 3626 "erl_backend.elds.c"
  MR_Box * erl_backend__elds__wrapper_arg_1,
#line 3628 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2,
#line 3630 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_3)
#line 3632 "erl_backend.elds.c"
{
#line 3634 "erl_backend.elds.c"
  {
#line 3636 "erl_backend.elds.c"
    MR_Word erl_backend__elds__conv0_HeadVar__1_1;

#line 3639 "erl_backend.elds.c"
    {
#line 3641 "erl_backend.elds.c"
      erl_backend__elds____Compare____elds_defn_0_0(&erl_backend__elds__conv0_HeadVar__1_1, ((MR_Word) erl_backend__elds__wrapper_arg_2), ((MR_Word) erl_backend__elds__wrapper_arg_3));
    }
#line 3644 "erl_backend.elds.c"
    *erl_backend__elds__wrapper_arg_1 = ((MR_Box) (erl_backend__elds__conv0_HeadVar__1_1));
#line 3646 "erl_backend.elds.c"
  }
#line 3648 "erl_backend.elds.c"
}

#line 3651 "erl_backend.elds.c"
static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_expr_0_0_10001(
#line 3654 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_1,
#line 3656 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2)
#line 3658 "erl_backend.elds.c"
{
#line 3660 "erl_backend.elds.c"
  {
#line 3662 "erl_backend.elds.c"
    MR_bool erl_backend__elds__succeeded;

#line 3665 "erl_backend.elds.c"
    {
#line 3667 "erl_backend.elds.c"
      erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_expr_0_0(((MR_Word) erl_backend__elds__wrapper_arg_1), ((MR_Word) erl_backend__elds__wrapper_arg_2));
    }
#line 3670 "erl_backend.elds.c"
    return erl_backend__elds__succeeded;
#line 3672 "erl_backend.elds.c"
  }
#line 3674 "erl_backend.elds.c"
}

#line 3677 "erl_backend.elds.c"
static void MR_CALL 
erl_backend__elds____Compare____elds_expr_0_0_10001(
#line 3680 "erl_backend.elds.c"
  MR_Box * erl_backend__elds__wrapper_arg_1,
#line 3682 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2,
#line 3684 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_3)
#line 3686 "erl_backend.elds.c"
{
#line 3688 "erl_backend.elds.c"
  {
#line 3690 "erl_backend.elds.c"
    MR_Word erl_backend__elds__conv0_HeadVar__1_1;

#line 3693 "erl_backend.elds.c"
    {
#line 3695 "erl_backend.elds.c"
      erl_backend__elds____Compare____elds_expr_0_0(&erl_backend__elds__conv0_HeadVar__1_1, ((MR_Word) erl_backend__elds__wrapper_arg_2), ((MR_Word) erl_backend__elds__wrapper_arg_3));
    }
#line 3698 "erl_backend.elds.c"
    *erl_backend__elds__wrapper_arg_1 = ((MR_Box) (erl_backend__elds__conv0_HeadVar__1_1));
#line 3700 "erl_backend.elds.c"
  }
#line 3702 "erl_backend.elds.c"
}

#line 3705 "erl_backend.elds.c"
static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_foreign_export_defn_0_0_10001(
#line 3708 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_1,
#line 3710 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2)
#line 3712 "erl_backend.elds.c"
{
#line 3714 "erl_backend.elds.c"
  {
#line 3716 "erl_backend.elds.c"
    MR_bool erl_backend__elds__succeeded;

#line 3719 "erl_backend.elds.c"
    {
#line 3721 "erl_backend.elds.c"
      erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_foreign_export_defn_0_0(((MR_Word) erl_backend__elds__wrapper_arg_1), ((MR_Word) erl_backend__elds__wrapper_arg_2));
    }
#line 3724 "erl_backend.elds.c"
    return erl_backend__elds__succeeded;
#line 3726 "erl_backend.elds.c"
  }
#line 3728 "erl_backend.elds.c"
}

#line 3731 "erl_backend.elds.c"
static void MR_CALL 
erl_backend__elds____Compare____elds_foreign_export_defn_0_0_10001(
#line 3734 "erl_backend.elds.c"
  MR_Box * erl_backend__elds__wrapper_arg_1,
#line 3736 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2,
#line 3738 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_3)
#line 3740 "erl_backend.elds.c"
{
#line 3742 "erl_backend.elds.c"
  {
#line 3744 "erl_backend.elds.c"
    MR_Word erl_backend__elds__conv0_HeadVar__1_1;

#line 3747 "erl_backend.elds.c"
    {
#line 3749 "erl_backend.elds.c"
      erl_backend__elds____Compare____elds_foreign_export_defn_0_0(&erl_backend__elds__conv0_HeadVar__1_1, ((MR_Word) erl_backend__elds__wrapper_arg_2), ((MR_Word) erl_backend__elds__wrapper_arg_3));
    }
#line 3752 "erl_backend.elds.c"
    *erl_backend__elds__wrapper_arg_1 = ((MR_Box) (erl_backend__elds__conv0_HeadVar__1_1));
#line 3754 "erl_backend.elds.c"
  }
#line 3756 "erl_backend.elds.c"
}

#line 3759 "erl_backend.elds.c"
static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_rtti_defn_0_0_10001(
#line 3762 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_1,
#line 3764 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2)
#line 3766 "erl_backend.elds.c"
{
#line 3768 "erl_backend.elds.c"
  {
#line 3770 "erl_backend.elds.c"
    MR_bool erl_backend__elds__succeeded;

#line 3773 "erl_backend.elds.c"
    {
#line 3775 "erl_backend.elds.c"
      erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_rtti_defn_0_0(((MR_Word) erl_backend__elds__wrapper_arg_1), ((MR_Word) erl_backend__elds__wrapper_arg_2));
    }
#line 3778 "erl_backend.elds.c"
    return erl_backend__elds__succeeded;
#line 3780 "erl_backend.elds.c"
  }
#line 3782 "erl_backend.elds.c"
}

#line 3785 "erl_backend.elds.c"
static void MR_CALL 
erl_backend__elds____Compare____elds_rtti_defn_0_0_10001(
#line 3788 "erl_backend.elds.c"
  MR_Box * erl_backend__elds__wrapper_arg_1,
#line 3790 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2,
#line 3792 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_3)
#line 3794 "erl_backend.elds.c"
{
#line 3796 "erl_backend.elds.c"
  {
#line 3798 "erl_backend.elds.c"
    MR_Word erl_backend__elds__conv0_HeadVar__1_1;

#line 3801 "erl_backend.elds.c"
    {
#line 3803 "erl_backend.elds.c"
      erl_backend__elds____Compare____elds_rtti_defn_0_0(&erl_backend__elds__conv0_HeadVar__1_1, ((MR_Word) erl_backend__elds__wrapper_arg_2), ((MR_Word) erl_backend__elds__wrapper_arg_3));
    }
#line 3806 "erl_backend.elds.c"
    *erl_backend__elds__wrapper_arg_1 = ((MR_Box) (erl_backend__elds__conv0_HeadVar__1_1));
#line 3808 "erl_backend.elds.c"
  }
#line 3810 "erl_backend.elds.c"
}

#line 3813 "erl_backend.elds.c"
static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_rtti_id_0_0_10001(
#line 3816 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_1,
#line 3818 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2)
#line 3820 "erl_backend.elds.c"
{
#line 3822 "erl_backend.elds.c"
  {
#line 3824 "erl_backend.elds.c"
    MR_bool erl_backend__elds__succeeded;

#line 3827 "erl_backend.elds.c"
    {
#line 3829 "erl_backend.elds.c"
      erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_rtti_id_0_0(((MR_Word) erl_backend__elds__wrapper_arg_1), ((MR_Word) erl_backend__elds__wrapper_arg_2));
    }
#line 3832 "erl_backend.elds.c"
    return erl_backend__elds__succeeded;
#line 3834 "erl_backend.elds.c"
  }
#line 3836 "erl_backend.elds.c"
}

#line 3839 "erl_backend.elds.c"
static void MR_CALL 
erl_backend__elds____Compare____elds_rtti_id_0_0_10001(
#line 3842 "erl_backend.elds.c"
  MR_Box * erl_backend__elds__wrapper_arg_1,
#line 3844 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2,
#line 3846 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_3)
#line 3848 "erl_backend.elds.c"
{
#line 3850 "erl_backend.elds.c"
  {
#line 3852 "erl_backend.elds.c"
    MR_Word erl_backend__elds__conv0_HeadVar__1_1;

#line 3855 "erl_backend.elds.c"
    {
#line 3857 "erl_backend.elds.c"
      erl_backend__elds____Compare____elds_rtti_id_0_0(&erl_backend__elds__conv0_HeadVar__1_1, ((MR_Word) erl_backend__elds__wrapper_arg_2), ((MR_Word) erl_backend__elds__wrapper_arg_3));
    }
#line 3860 "erl_backend.elds.c"
    *erl_backend__elds__wrapper_arg_1 = ((MR_Box) (erl_backend__elds__conv0_HeadVar__1_1));
#line 3862 "erl_backend.elds.c"
  }
#line 3864 "erl_backend.elds.c"
}

#line 3867 "erl_backend.elds.c"
static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_term_0_0_10001(
#line 3870 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_1,
#line 3872 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2)
#line 3874 "erl_backend.elds.c"
{
#line 3876 "erl_backend.elds.c"
  {
#line 3878 "erl_backend.elds.c"
    MR_bool erl_backend__elds__succeeded;

#line 3881 "erl_backend.elds.c"
    {
#line 3883 "erl_backend.elds.c"
      erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_term_0_0(((MR_Word) erl_backend__elds__wrapper_arg_1), ((MR_Word) erl_backend__elds__wrapper_arg_2));
    }
#line 3886 "erl_backend.elds.c"
    return erl_backend__elds__succeeded;
#line 3888 "erl_backend.elds.c"
  }
#line 3890 "erl_backend.elds.c"
}

#line 3893 "erl_backend.elds.c"
static void MR_CALL 
erl_backend__elds____Compare____elds_term_0_0_10001(
#line 3896 "erl_backend.elds.c"
  MR_Box * erl_backend__elds__wrapper_arg_1,
#line 3898 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2,
#line 3900 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_3)
#line 3902 "erl_backend.elds.c"
{
#line 3904 "erl_backend.elds.c"
  {
#line 3906 "erl_backend.elds.c"
    MR_Word erl_backend__elds__conv0_HeadVar__1_1;

#line 3909 "erl_backend.elds.c"
    {
#line 3911 "erl_backend.elds.c"
      erl_backend__elds____Compare____elds_term_0_0(&erl_backend__elds__conv0_HeadVar__1_1, ((MR_Word) erl_backend__elds__wrapper_arg_2), ((MR_Word) erl_backend__elds__wrapper_arg_3));
    }
#line 3914 "erl_backend.elds.c"
    *erl_backend__elds__wrapper_arg_1 = ((MR_Box) (erl_backend__elds__conv0_HeadVar__1_1));
#line 3916 "erl_backend.elds.c"
  }
#line 3918 "erl_backend.elds.c"
}

#line 3921 "erl_backend.elds.c"
static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_unop_0_0_10001(
#line 3924 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_1,
#line 3926 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2)
#line 3928 "erl_backend.elds.c"
{
#line 3930 "erl_backend.elds.c"
  {
#line 3932 "erl_backend.elds.c"
    MR_bool erl_backend__elds__succeeded;

#line 3935 "erl_backend.elds.c"
    {
#line 3937 "erl_backend.elds.c"
      erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_unop_0_0(((MR_Word) erl_backend__elds__wrapper_arg_1), ((MR_Word) erl_backend__elds__wrapper_arg_2));
    }
#line 3940 "erl_backend.elds.c"
    return erl_backend__elds__succeeded;
#line 3942 "erl_backend.elds.c"
  }
#line 3944 "erl_backend.elds.c"
}

#line 3947 "erl_backend.elds.c"
static void MR_CALL 
erl_backend__elds____Compare____elds_unop_0_0_10001(
#line 3950 "erl_backend.elds.c"
  MR_Box * erl_backend__elds__wrapper_arg_1,
#line 3952 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_2,
#line 3954 "erl_backend.elds.c"
  MR_Box erl_backend__elds__wrapper_arg_3)
#line 3956 "erl_backend.elds.c"
{
#line 3958 "erl_backend.elds.c"
  {
#line 3960 "erl_backend.elds.c"
    MR_Word erl_backend__elds__conv0_HeadVar__1_1;

#line 3963 "erl_backend.elds.c"
    {
#line 3965 "erl_backend.elds.c"
      erl_backend__elds____Compare____elds_unop_0_0(&erl_backend__elds__conv0_HeadVar__1_1, ((MR_Word) erl_backend__elds__wrapper_arg_2), ((MR_Word) erl_backend__elds__wrapper_arg_3));
    }
#line 3968 "erl_backend.elds.c"
    *erl_backend__elds__wrapper_arg_1 = ((MR_Box) (erl_backend__elds__conv0_HeadVar__1_1));
#line 3970 "erl_backend.elds.c"
  }
#line 3972 "erl_backend.elds.c"
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
#line 4088 "erl_backend.elds.c"
  {
#line 4090 "erl_backend.elds.c"
    MR_bool erl_backend__elds__succeeded = (erl_backend__elds__HeadVar__2_1 == erl_backend__elds__HeadVar__2_2);

#line 4093 "erl_backend.elds.c"
    return erl_backend__elds__succeeded;
#line 4095 "erl_backend.elds.c"
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
#line 4124 "erl_backend.elds.c"
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
#line 4148 "erl_backend.elds.c"
              *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
              break;
#line 211 "elds.m"
            case (MR_Integer) 2:
#line 4154 "erl_backend.elds.c"
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
#line 4167 "erl_backend.elds.c"
                  *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                  break;
#line 211 "elds.m"
                case (MR_Integer) 1:
#line 4173 "erl_backend.elds.c"
                  *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                  break;
#line 211 "elds.m"
                case (MR_Integer) 2:
#line 4179 "erl_backend.elds.c"
                  *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                  break;
#line 211 "elds.m"
                case (MR_Integer) 3:
#line 4185 "erl_backend.elds.c"
                  *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                  break;
#line 211 "elds.m"
                case (MR_Integer) 4:
#line 4191 "erl_backend.elds.c"
                  *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                  break;
#line 211 "elds.m"
                case (MR_Integer) 5:
#line 4197 "erl_backend.elds.c"
                  *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                  break;
#line 211 "elds.m"
                case (MR_Integer) 6:
#line 4203 "erl_backend.elds.c"
                  *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                  break;
#line 211 "elds.m"
                case (MR_Integer) 7:
#line 4209 "erl_backend.elds.c"
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
#line 4235 "erl_backend.elds.c"
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
#line 4259 "erl_backend.elds.c"
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
#line 4272 "erl_backend.elds.c"
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                    break;
#line 211 "elds.m"
                  case (MR_Integer) 1:
#line 4278 "erl_backend.elds.c"
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                    break;
#line 211 "elds.m"
                  case (MR_Integer) 2:
#line 4284 "erl_backend.elds.c"
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                    break;
#line 211 "elds.m"
                  case (MR_Integer) 3:
#line 4290 "erl_backend.elds.c"
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                    break;
#line 211 "elds.m"
                  case (MR_Integer) 4:
#line 4296 "erl_backend.elds.c"
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                    break;
#line 211 "elds.m"
                  case (MR_Integer) 5:
#line 4302 "erl_backend.elds.c"
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                    break;
#line 211 "elds.m"
                  case (MR_Integer) 6:
#line 4308 "erl_backend.elds.c"
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                    break;
#line 211 "elds.m"
                  case (MR_Integer) 7:
#line 4314 "erl_backend.elds.c"
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
#line 4342 "erl_backend.elds.c"
                *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                break;
#line 211 "elds.m"
              case (MR_Integer) 1:
#line 4348 "erl_backend.elds.c"
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
#line 4379 "erl_backend.elds.c"
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                    break;
#line 211 "elds.m"
                  case (MR_Integer) 1:
#line 4385 "erl_backend.elds.c"
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                    break;
#line 211 "elds.m"
                  case (MR_Integer) 2:
#line 4391 "erl_backend.elds.c"
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                    break;
#line 211 "elds.m"
                  case (MR_Integer) 3:
#line 4397 "erl_backend.elds.c"
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                    break;
#line 211 "elds.m"
                  case (MR_Integer) 4:
#line 4403 "erl_backend.elds.c"
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                    break;
#line 211 "elds.m"
                  case (MR_Integer) 5:
#line 4409 "erl_backend.elds.c"
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                    break;
#line 211 "elds.m"
                  case (MR_Integer) 6:
#line 4415 "erl_backend.elds.c"
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                    break;
#line 211 "elds.m"
                  case (MR_Integer) 7:
#line 4421 "erl_backend.elds.c"
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
#line 4456 "erl_backend.elds.c"
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                    break;
#line 211 "elds.m"
                  case (MR_Integer) 1:
#line 4462 "erl_backend.elds.c"
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                    break;
#line 211 "elds.m"
                  case (MR_Integer) 2:
#line 4468 "erl_backend.elds.c"
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
#line 4499 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                        break;
#line 211 "elds.m"
                      case (MR_Integer) 2:
#line 4505 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                        break;
#line 211 "elds.m"
                      case (MR_Integer) 3:
#line 4511 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                        break;
#line 211 "elds.m"
                      case (MR_Integer) 4:
#line 4517 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                        break;
#line 211 "elds.m"
                      case (MR_Integer) 5:
#line 4523 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                        break;
#line 211 "elds.m"
                      case (MR_Integer) 6:
#line 4529 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                        break;
#line 211 "elds.m"
                      case (MR_Integer) 7:
#line 4535 "erl_backend.elds.c"
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
#line 4563 "erl_backend.elds.c"
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                    break;
#line 211 "elds.m"
                  case (MR_Integer) 1:
#line 4569 "erl_backend.elds.c"
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                    break;
#line 211 "elds.m"
                  case (MR_Integer) 2:
#line 4575 "erl_backend.elds.c"
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
#line 4588 "erl_backend.elds.c"
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
#line 4612 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                        break;
#line 211 "elds.m"
                      case (MR_Integer) 3:
#line 4618 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                        break;
#line 211 "elds.m"
                      case (MR_Integer) 4:
#line 4624 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                        break;
#line 211 "elds.m"
                      case (MR_Integer) 5:
#line 4630 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                        break;
#line 211 "elds.m"
                      case (MR_Integer) 6:
#line 4636 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                        break;
#line 211 "elds.m"
                      case (MR_Integer) 7:
#line 4642 "erl_backend.elds.c"
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
#line 4670 "erl_backend.elds.c"
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                    break;
#line 211 "elds.m"
                  case (MR_Integer) 1:
#line 4676 "erl_backend.elds.c"
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                    break;
#line 211 "elds.m"
                  case (MR_Integer) 2:
#line 4682 "erl_backend.elds.c"
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
#line 4695 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                        break;
#line 211 "elds.m"
                      case (MR_Integer) 1:
#line 4701 "erl_backend.elds.c"
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
#line 4725 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                        break;
#line 211 "elds.m"
                      case (MR_Integer) 4:
#line 4731 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                        break;
#line 211 "elds.m"
                      case (MR_Integer) 5:
#line 4737 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                        break;
#line 211 "elds.m"
                      case (MR_Integer) 6:
#line 4743 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                        break;
#line 211 "elds.m"
                      case (MR_Integer) 7:
#line 4749 "erl_backend.elds.c"
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
#line 4777 "erl_backend.elds.c"
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                    break;
#line 211 "elds.m"
                  case (MR_Integer) 1:
#line 4783 "erl_backend.elds.c"
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                    break;
#line 211 "elds.m"
                  case (MR_Integer) 2:
#line 4789 "erl_backend.elds.c"
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
#line 4802 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                        break;
#line 211 "elds.m"
                      case (MR_Integer) 1:
#line 4808 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                        break;
#line 211 "elds.m"
                      case (MR_Integer) 2:
#line 4814 "erl_backend.elds.c"
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
#line 4838 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                        break;
#line 211 "elds.m"
                      case (MR_Integer) 5:
#line 4844 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                        break;
#line 211 "elds.m"
                      case (MR_Integer) 6:
#line 4850 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                        break;
#line 211 "elds.m"
                      case (MR_Integer) 7:
#line 4856 "erl_backend.elds.c"
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
#line 4884 "erl_backend.elds.c"
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                    break;
#line 211 "elds.m"
                  case (MR_Integer) 1:
#line 4890 "erl_backend.elds.c"
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                    break;
#line 211 "elds.m"
                  case (MR_Integer) 2:
#line 4896 "erl_backend.elds.c"
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
#line 4909 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                        break;
#line 211 "elds.m"
                      case (MR_Integer) 1:
#line 4915 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                        break;
#line 211 "elds.m"
                      case (MR_Integer) 2:
#line 4921 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                        break;
#line 211 "elds.m"
                      case (MR_Integer) 3:
#line 4927 "erl_backend.elds.c"
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
#line 4951 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                        break;
#line 211 "elds.m"
                      case (MR_Integer) 6:
#line 4957 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                        break;
#line 211 "elds.m"
                      case (MR_Integer) 7:
#line 4963 "erl_backend.elds.c"
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
#line 4991 "erl_backend.elds.c"
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                    break;
#line 211 "elds.m"
                  case (MR_Integer) 1:
#line 4997 "erl_backend.elds.c"
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                    break;
#line 211 "elds.m"
                  case (MR_Integer) 2:
#line 5003 "erl_backend.elds.c"
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
#line 5016 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                        break;
#line 211 "elds.m"
                      case (MR_Integer) 1:
#line 5022 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                        break;
#line 211 "elds.m"
                      case (MR_Integer) 2:
#line 5028 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                        break;
#line 211 "elds.m"
                      case (MR_Integer) 3:
#line 5034 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                        break;
#line 211 "elds.m"
                      case (MR_Integer) 4:
#line 5040 "erl_backend.elds.c"
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
#line 5064 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                        break;
#line 211 "elds.m"
                      case (MR_Integer) 7:
#line 5070 "erl_backend.elds.c"
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
#line 5098 "erl_backend.elds.c"
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 211 "elds.m"
                    break;
#line 211 "elds.m"
                  case (MR_Integer) 1:
#line 5104 "erl_backend.elds.c"
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                    break;
#line 211 "elds.m"
                  case (MR_Integer) 2:
#line 5110 "erl_backend.elds.c"
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
#line 5123 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                        break;
#line 211 "elds.m"
                      case (MR_Integer) 1:
#line 5129 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                        break;
#line 211 "elds.m"
                      case (MR_Integer) 2:
#line 5135 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                        break;
#line 211 "elds.m"
                      case (MR_Integer) 3:
#line 5141 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                        break;
#line 211 "elds.m"
                      case (MR_Integer) 4:
#line 5147 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                        break;
#line 211 "elds.m"
                      case (MR_Integer) 5:
#line 5153 "erl_backend.elds.c"
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
#line 5177 "erl_backend.elds.c"
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
#line 5205 "erl_backend.elds.c"
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                    break;
#line 211 "elds.m"
                  case (MR_Integer) 1:
#line 5211 "erl_backend.elds.c"
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                    break;
#line 211 "elds.m"
                  case (MR_Integer) 2:
#line 5217 "erl_backend.elds.c"
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
#line 5230 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                        break;
#line 211 "elds.m"
                      case (MR_Integer) 1:
#line 5236 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                        break;
#line 211 "elds.m"
                      case (MR_Integer) 2:
#line 5242 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                        break;
#line 211 "elds.m"
                      case (MR_Integer) 3:
#line 5248 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                        break;
#line 211 "elds.m"
                      case (MR_Integer) 4:
#line 5254 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                        break;
#line 211 "elds.m"
                      case (MR_Integer) 5:
#line 5260 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 211 "elds.m"
                        break;
#line 211 "elds.m"
                      case (MR_Integer) 6:
#line 5266 "erl_backend.elds.c"
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
#line 5372 "erl_backend.elds.c"
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
#line 5397 "erl_backend.elds.c"
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
#line 5429 "erl_backend.elds.c"
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
#line 5454 "erl_backend.elds.c"
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
#line 5479 "erl_backend.elds.c"
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
#line 5504 "erl_backend.elds.c"
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
#line 5529 "erl_backend.elds.c"
                    {
#line 5531 "erl_backend.elds.c"
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
#line 5559 "erl_backend.elds.c"
                    erl_backend__elds__TypeInfo_28_28 = (MR_Word) &erl_backend__elds_scalar_common_1[14];
#line 5561 "erl_backend.elds.c"
                    {
#line 5563 "erl_backend.elds.c"
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
#line 5591 "erl_backend.elds.c"
                    erl_backend__elds__TypeInfo_29_29 = (MR_Word) &erl_backend__elds_scalar_common_1[0];
#line 5593 "erl_backend.elds.c"
                    {
#line 5595 "erl_backend.elds.c"
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
#line 5621 "erl_backend.elds.c"
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
#line 5666 "erl_backend.elds.c"
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
#line 5707 "erl_backend.elds.c"
                *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 110 "elds.m"
                break;
#line 110 "elds.m"
              case (MR_Integer) 2:
#line 5713 "erl_backend.elds.c"
                *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 110 "elds.m"
                break;
#line 110 "elds.m"
              case (MR_Integer) 3:
#line 5719 "erl_backend.elds.c"
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
#line 5743 "erl_backend.elds.c"
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
#line 5767 "erl_backend.elds.c"
                *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 110 "elds.m"
                break;
#line 110 "elds.m"
              case (MR_Integer) 3:
#line 5773 "erl_backend.elds.c"
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
#line 5797 "erl_backend.elds.c"
                *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 110 "elds.m"
                break;
#line 110 "elds.m"
              case (MR_Integer) 1:
#line 5803 "erl_backend.elds.c"
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
#line 5827 "erl_backend.elds.c"
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
#line 5855 "erl_backend.elds.c"
                *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 110 "elds.m"
                break;
#line 110 "elds.m"
              case (MR_Integer) 1:
#line 5861 "erl_backend.elds.c"
                *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 110 "elds.m"
                break;
#line 110 "elds.m"
              case (MR_Integer) 2:
#line 5867 "erl_backend.elds.c"
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
#line 5889 "erl_backend.elds.c"
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
#line 5909 "erl_backend.elds.c"
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
#line 5993 "erl_backend.elds.c"
                {
#line 5995 "erl_backend.elds.c"
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
#line 6021 "erl_backend.elds.c"
                {
#line 6023 "erl_backend.elds.c"
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
#line 6049 "erl_backend.elds.c"
                {
#line 6051 "erl_backend.elds.c"
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
#line 6089 "erl_backend.elds.c"
                {
#line 6091 "erl_backend.elds.c"
                  erl_backend__elds__succeeded = backend_libs__rtti____Unify____tc_name_0_0(erl_backend__elds__V_9_9, erl_backend__elds__V_12_12);
                }
#line 110 "elds.m"
                if (erl_backend__elds__succeeded)
#line 110 "elds.m"
                  {
#line 6098 "erl_backend.elds.c"
                    {
#line 6100 "erl_backend.elds.c"
                      erl_backend__elds__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(erl_backend__elds__V_10_10, erl_backend__elds__V_13_13);
                    }
#line 110 "elds.m"
                    if (erl_backend__elds__succeeded)
#line 6105 "erl_backend.elds.c"
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
#line 6148 "erl_backend.elds.c"
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
#line 6178 "erl_backend.elds.c"
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
#line 6202 "erl_backend.elds.c"
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
#line 6222 "erl_backend.elds.c"
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

#line 6297 "erl_backend.elds.c"
        {
#line 6299 "erl_backend.elds.c"
          erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_rtti_id_0_0(erl_backend__elds__V_3_3, erl_backend__elds__V_7_7);
        }
#line 100 "elds.m"
        if (erl_backend__elds__succeeded)
#line 100 "elds.m"
          {
#line 6306 "erl_backend.elds.c"
            erl_backend__elds__succeeded = (erl_backend__elds__V_4_4 == erl_backend__elds__V_8_8);
#line 100 "elds.m"
            if (erl_backend__elds__succeeded)
#line 100 "elds.m"
              {
#line 6312 "erl_backend.elds.c"
                erl_backend__elds__TypeInfo_13_13 = (MR_Word) &erl_backend__elds_scalar_common_1[9];
#line 6314 "erl_backend.elds.c"
                {
#line 6316 "erl_backend.elds.c"
                  erl_backend__elds__succeeded = mercury__builtin__unify_2_p_0(erl_backend__elds__TypeInfo_13_13, ((MR_Box) (erl_backend__elds__V_5_5)), ((MR_Box) (erl_backend__elds__V_9_9)));
                }
#line 100 "elds.m"
                if (erl_backend__elds__succeeded)
#line 6321 "erl_backend.elds.c"
                  {
#line 6323 "erl_backend.elds.c"
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
#line 6363 "erl_backend.elds.c"
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
#line 6389 "erl_backend.elds.c"
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
#line 6409 "erl_backend.elds.c"
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

#line 6478 "erl_backend.elds.c"
        erl_backend__elds__succeeded = (strcmp(erl_backend__elds__V_3_3, erl_backend__elds__V_6_6) == 0);
#line 91 "elds.m"
        if (erl_backend__elds__succeeded)
#line 91 "elds.m"
          {
#line 6484 "erl_backend.elds.c"
            erl_backend__elds__TypeInfo_11_11 = (MR_Word) &erl_backend__elds_scalar_common_1[9];
#line 6486 "erl_backend.elds.c"
            {
#line 6488 "erl_backend.elds.c"
              erl_backend__elds__succeeded = mercury__builtin__unify_2_p_0(erl_backend__elds__TypeInfo_11_11, ((MR_Box) (erl_backend__elds__V_4_4)), ((MR_Box) (erl_backend__elds__V_7_7)));
            }
#line 91 "elds.m"
            if (erl_backend__elds__succeeded)
#line 6493 "erl_backend.elds.c"
              {
#line 6495 "erl_backend.elds.c"
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
#line 6539 "erl_backend.elds.c"
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
#line 6580 "erl_backend.elds.c"
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                    break;
#line 136 "elds.m"
                  case (MR_Integer) 2:
#line 6586 "erl_backend.elds.c"
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
#line 6599 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                        break;
#line 136 "elds.m"
                      case (MR_Integer) 1:
#line 6605 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                        break;
#line 136 "elds.m"
                      case (MR_Integer) 2:
#line 6611 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                        break;
#line 136 "elds.m"
                      case (MR_Integer) 3:
#line 6617 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                        break;
#line 136 "elds.m"
                      case (MR_Integer) 4:
#line 6623 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                        break;
#line 136 "elds.m"
                      case (MR_Integer) 5:
#line 6629 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                        break;
#line 136 "elds.m"
                      case (MR_Integer) 6:
#line 6635 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                        break;
#line 136 "elds.m"
                      case (MR_Integer) 7:
#line 6641 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                        break;
#line 136 "elds.m"
                      case (MR_Integer) 8:
#line 6647 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                        break;
#line 136 "elds.m"
                      case (MR_Integer) 9:
#line 6653 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                        break;
#line 136 "elds.m"
                      case (MR_Integer) 10:
#line 6659 "erl_backend.elds.c"
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
#line 6687 "erl_backend.elds.c"
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
#line 6711 "erl_backend.elds.c"
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
#line 6724 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                        break;
#line 136 "elds.m"
                      case (MR_Integer) 1:
#line 6730 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                        break;
#line 136 "elds.m"
                      case (MR_Integer) 2:
#line 6736 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                        break;
#line 136 "elds.m"
                      case (MR_Integer) 3:
#line 6742 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                        break;
#line 136 "elds.m"
                      case (MR_Integer) 4:
#line 6748 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                        break;
#line 136 "elds.m"
                      case (MR_Integer) 5:
#line 6754 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                        break;
#line 136 "elds.m"
                      case (MR_Integer) 6:
#line 6760 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                        break;
#line 136 "elds.m"
                      case (MR_Integer) 7:
#line 6766 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                        break;
#line 136 "elds.m"
                      case (MR_Integer) 8:
#line 6772 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                        break;
#line 136 "elds.m"
                      case (MR_Integer) 9:
#line 6778 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                        break;
#line 136 "elds.m"
                      case (MR_Integer) 10:
#line 6784 "erl_backend.elds.c"
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
#line 6812 "erl_backend.elds.c"
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                    break;
#line 136 "elds.m"
                  case (MR_Integer) 1:
#line 6818 "erl_backend.elds.c"
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
#line 6849 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                        break;
#line 136 "elds.m"
                      case (MR_Integer) 1:
#line 6855 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                        break;
#line 136 "elds.m"
                      case (MR_Integer) 2:
#line 6861 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                        break;
#line 136 "elds.m"
                      case (MR_Integer) 3:
#line 6867 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                        break;
#line 136 "elds.m"
                      case (MR_Integer) 4:
#line 6873 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                        break;
#line 136 "elds.m"
                      case (MR_Integer) 5:
#line 6879 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                        break;
#line 136 "elds.m"
                      case (MR_Integer) 6:
#line 6885 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                        break;
#line 136 "elds.m"
                      case (MR_Integer) 7:
#line 6891 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                        break;
#line 136 "elds.m"
                      case (MR_Integer) 8:
#line 6897 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                        break;
#line 136 "elds.m"
                      case (MR_Integer) 9:
#line 6903 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                        break;
#line 136 "elds.m"
                      case (MR_Integer) 10:
#line 6909 "erl_backend.elds.c"
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
#line 6946 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                        break;
#line 136 "elds.m"
                      case (MR_Integer) 1:
#line 6952 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                        break;
#line 136 "elds.m"
                      case (MR_Integer) 2:
#line 6958 "erl_backend.elds.c"
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
#line 6985 "erl_backend.elds.c"
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
#line 7022 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 2:
#line 7028 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 3:
#line 7034 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 4:
#line 7040 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 5:
#line 7046 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 6:
#line 7052 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 7:
#line 7058 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 8:
#line 7064 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 9:
#line 7070 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 10:
#line 7076 "erl_backend.elds.c"
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
#line 7106 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                        break;
#line 136 "elds.m"
                      case (MR_Integer) 1:
#line 7112 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                        break;
#line 136 "elds.m"
                      case (MR_Integer) 2:
#line 7118 "erl_backend.elds.c"
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
#line 7131 "erl_backend.elds.c"
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
#line 7155 "erl_backend.elds.c"
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
#line 7192 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 3:
#line 7198 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 4:
#line 7204 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 5:
#line 7210 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 6:
#line 7216 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 7:
#line 7222 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 8:
#line 7228 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 9:
#line 7234 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 10:
#line 7240 "erl_backend.elds.c"
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
#line 7272 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                        break;
#line 136 "elds.m"
                      case (MR_Integer) 1:
#line 7278 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                        break;
#line 136 "elds.m"
                      case (MR_Integer) 2:
#line 7284 "erl_backend.elds.c"
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
#line 7297 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 1:
#line 7303 "erl_backend.elds.c"
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
#line 7329 "erl_backend.elds.c"
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
#line 7349 "erl_backend.elds.c"
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
#line 7388 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 4:
#line 7394 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 5:
#line 7400 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 6:
#line 7406 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 7:
#line 7412 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 8:
#line 7418 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 9:
#line 7424 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 10:
#line 7430 "erl_backend.elds.c"
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
#line 7460 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                        break;
#line 136 "elds.m"
                      case (MR_Integer) 1:
#line 7466 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                        break;
#line 136 "elds.m"
                      case (MR_Integer) 2:
#line 7472 "erl_backend.elds.c"
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
#line 7485 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 1:
#line 7491 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 2:
#line 7497 "erl_backend.elds.c"
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
#line 7517 "erl_backend.elds.c"
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
#line 7544 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 5:
#line 7550 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 6:
#line 7556 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 7:
#line 7562 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 8:
#line 7568 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 9:
#line 7574 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 10:
#line 7580 "erl_backend.elds.c"
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
#line 7608 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                        break;
#line 136 "elds.m"
                      case (MR_Integer) 1:
#line 7614 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                        break;
#line 136 "elds.m"
                      case (MR_Integer) 2:
#line 7620 "erl_backend.elds.c"
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
#line 7633 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 1:
#line 7639 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 2:
#line 7645 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 3:
#line 7651 "erl_backend.elds.c"
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
#line 7675 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 6:
#line 7681 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 7:
#line 7687 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 8:
#line 7693 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 9:
#line 7699 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 10:
#line 7705 "erl_backend.elds.c"
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
#line 7735 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                        break;
#line 136 "elds.m"
                      case (MR_Integer) 1:
#line 7741 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                        break;
#line 136 "elds.m"
                      case (MR_Integer) 2:
#line 7747 "erl_backend.elds.c"
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
#line 7760 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 1:
#line 7766 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 2:
#line 7772 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 3:
#line 7778 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 4:
#line 7784 "erl_backend.elds.c"
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
#line 7804 "erl_backend.elds.c"
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
#line 7831 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 7:
#line 7837 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 8:
#line 7843 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 9:
#line 7849 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 10:
#line 7855 "erl_backend.elds.c"
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
#line 7889 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                        break;
#line 136 "elds.m"
                      case (MR_Integer) 1:
#line 7895 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                        break;
#line 136 "elds.m"
                      case (MR_Integer) 2:
#line 7901 "erl_backend.elds.c"
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
#line 7914 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 1:
#line 7920 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 2:
#line 7926 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 3:
#line 7932 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 4:
#line 7938 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 5:
#line 7944 "erl_backend.elds.c"
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
#line 7968 "erl_backend.elds.c"
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
#line 7988 "erl_backend.elds.c"
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
#line 8008 "erl_backend.elds.c"
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
#line 8039 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 8:
#line 8045 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 9:
#line 8051 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 10:
#line 8057 "erl_backend.elds.c"
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
#line 8085 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                        break;
#line 136 "elds.m"
                      case (MR_Integer) 1:
#line 8091 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                        break;
#line 136 "elds.m"
                      case (MR_Integer) 2:
#line 8097 "erl_backend.elds.c"
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
#line 8110 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 1:
#line 8116 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 2:
#line 8122 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 3:
#line 8128 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 4:
#line 8134 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 5:
#line 8140 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 6:
#line 8146 "erl_backend.elds.c"
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
#line 8180 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 9:
#line 8186 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 10:
#line 8192 "erl_backend.elds.c"
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
#line 8222 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                        break;
#line 136 "elds.m"
                      case (MR_Integer) 1:
#line 8228 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                        break;
#line 136 "elds.m"
                      case (MR_Integer) 2:
#line 8234 "erl_backend.elds.c"
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
#line 8247 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 1:
#line 8253 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 2:
#line 8259 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 3:
#line 8265 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 4:
#line 8271 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 5:
#line 8277 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 6:
#line 8283 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 7:
#line 8289 "erl_backend.elds.c"
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
#line 8309 "erl_backend.elds.c"
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
#line 8332 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 10:
#line 8338 "erl_backend.elds.c"
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
#line 8368 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                        break;
#line 136 "elds.m"
                      case (MR_Integer) 1:
#line 8374 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                        break;
#line 136 "elds.m"
                      case (MR_Integer) 2:
#line 8380 "erl_backend.elds.c"
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
#line 8393 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 1:
#line 8399 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 2:
#line 8405 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 3:
#line 8411 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 4:
#line 8417 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 5:
#line 8423 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 6:
#line 8429 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 7:
#line 8435 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 8:
#line 8441 "erl_backend.elds.c"
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
#line 8461 "erl_backend.elds.c"
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
#line 8498 "erl_backend.elds.c"
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
#line 8526 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                        break;
#line 136 "elds.m"
                      case (MR_Integer) 1:
#line 8532 "erl_backend.elds.c"
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                        break;
#line 136 "elds.m"
                      case (MR_Integer) 2:
#line 8538 "erl_backend.elds.c"
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
#line 8551 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 1:
#line 8557 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 2:
#line 8563 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 3:
#line 8569 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 4:
#line 8575 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 5:
#line 8581 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 6:
#line 8587 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 7:
#line 8593 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 8:
#line 8599 "erl_backend.elds.c"
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 136 "elds.m"
                            break;
#line 136 "elds.m"
                          case (MR_Integer) 9:
#line 8605 "erl_backend.elds.c"
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
#line 8706 "erl_backend.elds.c"
                    {
#line 8708 "erl_backend.elds.c"
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
#line 8736 "erl_backend.elds.c"
                    erl_backend__elds__TypeInfo_55_55 = (MR_Word) &erl_backend__elds_scalar_common_1[14];
#line 8738 "erl_backend.elds.c"
                    {
#line 8740 "erl_backend.elds.c"
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
#line 8766 "erl_backend.elds.c"
                    {
#line 8768 "erl_backend.elds.c"
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
#line 8807 "erl_backend.elds.c"
                        {
#line 8809 "erl_backend.elds.c"
                          erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_expr_0_0(erl_backend__elds__V_7_7, erl_backend__elds__V_9_9);
                        }
#line 136 "elds.m"
                        if (erl_backend__elds__succeeded)
#line 8814 "erl_backend.elds.c"
                          {
#line 8816 "erl_backend.elds.c"
                            /* direct tailcall eliminated */
#line 8818 "erl_backend.elds.c"
                            {
#line 8820 "erl_backend.elds.c"
                              MR_Word erl_backend__elds__HeadVar__1__tmp_copy_1 = erl_backend__elds__V_8_8;
#line 8822 "erl_backend.elds.c"
                              MR_Word erl_backend__elds__HeadVar__2__tmp_copy_2 = erl_backend__elds__V_10_10;

#line 8825 "erl_backend.elds.c"
                              erl_backend__elds__HeadVar__2_2 = erl_backend__elds__HeadVar__2__tmp_copy_2;
#line 8827 "erl_backend.elds.c"
                              erl_backend__elds__HeadVar__1_1 = erl_backend__elds__HeadVar__1__tmp_copy_1;
#line 8829 "erl_backend.elds.c"
                            }
#line 8831 "erl_backend.elds.c"
                            continue;
#line 8833 "erl_backend.elds.c"
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
#line 8864 "erl_backend.elds.c"
                        erl_backend__elds__succeeded = (erl_backend__elds__V_11_11 == erl_backend__elds__V_13_13);
#line 136 "elds.m"
                        if (erl_backend__elds__succeeded)
#line 8868 "erl_backend.elds.c"
                          {
#line 8870 "erl_backend.elds.c"
                            /* direct tailcall eliminated */
#line 8872 "erl_backend.elds.c"
                            {
#line 8874 "erl_backend.elds.c"
                              MR_Word erl_backend__elds__HeadVar__1__tmp_copy_1 = erl_backend__elds__V_12_12;
#line 8876 "erl_backend.elds.c"
                              MR_Word erl_backend__elds__HeadVar__2__tmp_copy_2 = erl_backend__elds__V_14_14;

#line 8879 "erl_backend.elds.c"
                              erl_backend__elds__HeadVar__2_2 = erl_backend__elds__HeadVar__2__tmp_copy_2;
#line 8881 "erl_backend.elds.c"
                              erl_backend__elds__HeadVar__1_1 = erl_backend__elds__HeadVar__1__tmp_copy_1;
#line 8883 "erl_backend.elds.c"
                            }
#line 8885 "erl_backend.elds.c"
                            continue;
#line 8887 "erl_backend.elds.c"
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
#line 8924 "erl_backend.elds.c"
                        erl_backend__elds__succeeded = (erl_backend__elds__V_15_15 == erl_backend__elds__V_18_18);
#line 136 "elds.m"
                        if (erl_backend__elds__succeeded)
#line 136 "elds.m"
                          {
#line 8930 "erl_backend.elds.c"
                            {
#line 8932 "erl_backend.elds.c"
                              erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_expr_0_0(erl_backend__elds__V_16_16, erl_backend__elds__V_19_19);
                            }
#line 136 "elds.m"
                            if (erl_backend__elds__succeeded)
#line 8937 "erl_backend.elds.c"
                              {
#line 8939 "erl_backend.elds.c"
                                /* direct tailcall eliminated */
#line 8941 "erl_backend.elds.c"
                                {
#line 8943 "erl_backend.elds.c"
                                  MR_Word erl_backend__elds__HeadVar__1__tmp_copy_1 = erl_backend__elds__V_17_17;
#line 8945 "erl_backend.elds.c"
                                  MR_Word erl_backend__elds__HeadVar__2__tmp_copy_2 = erl_backend__elds__V_20_20;

#line 8948 "erl_backend.elds.c"
                                  erl_backend__elds__HeadVar__2_2 = erl_backend__elds__HeadVar__2__tmp_copy_2;
#line 8950 "erl_backend.elds.c"
                                  erl_backend__elds__HeadVar__1_1 = erl_backend__elds__HeadVar__1__tmp_copy_1;
#line 8952 "erl_backend.elds.c"
                                }
#line 8954 "erl_backend.elds.c"
                                continue;
#line 8956 "erl_backend.elds.c"
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
#line 8991 "erl_backend.elds.c"
                        {
#line 8993 "erl_backend.elds.c"
                          erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_call_target_0_0(erl_backend__elds__V_21_21, erl_backend__elds__V_23_23);
                        }
#line 136 "elds.m"
                        if (erl_backend__elds__succeeded)
#line 136 "elds.m"
                          {
#line 9000 "erl_backend.elds.c"
                            erl_backend__elds__TypeInfo_56_56 = (MR_Word) &erl_backend__elds_scalar_common_1[14];
#line 9002 "erl_backend.elds.c"
                            {
#line 9004 "erl_backend.elds.c"
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
#line 9032 "erl_backend.elds.c"
                        {
#line 9034 "erl_backend.elds.c"
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
#line 9068 "erl_backend.elds.c"
                        {
#line 9070 "erl_backend.elds.c"
                          erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_expr_0_0(erl_backend__elds__V_29_29, erl_backend__elds__V_31_31);
                        }
#line 136 "elds.m"
                        if (erl_backend__elds__succeeded)
#line 136 "elds.m"
                          {
#line 9077 "erl_backend.elds.c"
                            erl_backend__elds__TypeInfo_57_57 = (MR_Word) &erl_backend__elds_scalar_common_1[11];
#line 9079 "erl_backend.elds.c"
                            {
#line 9081 "erl_backend.elds.c"
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
#line 9133 "erl_backend.elds.c"
                        {
#line 9135 "erl_backend.elds.c"
                          erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_expr_0_0(erl_backend__elds__V_33_33, erl_backend__elds__V_37_37);
                        }
#line 136 "elds.m"
                        if (erl_backend__elds__succeeded)
#line 136 "elds.m"
                          {
#line 9142 "erl_backend.elds.c"
                            erl_backend__elds__TypeInfo_60_60 = (MR_Word) &erl_backend__elds_scalar_common_1[11];
#line 9144 "erl_backend.elds.c"
                            {
#line 9146 "erl_backend.elds.c"
                              erl_backend__elds__succeeded = mercury__builtin__unify_2_p_0(erl_backend__elds__TypeInfo_60_60, ((MR_Box) (erl_backend__elds__V_34_34)), ((MR_Box) (erl_backend__elds__V_38_38)));
                            }
#line 136 "elds.m"
                            if (erl_backend__elds__succeeded)
#line 136 "elds.m"
                              {
#line 9153 "erl_backend.elds.c"
                                erl_backend__elds__TypeInfo_61_61 = (MR_Word) &erl_backend__elds_scalar_common_1[12];
#line 9155 "erl_backend.elds.c"
                                {
#line 9157 "erl_backend.elds.c"
                                  erl_backend__elds__succeeded = mercury__builtin__unify_2_p_0(erl_backend__elds__TypeInfo_61_61, ((MR_Box) (erl_backend__elds__V_35_35)), ((MR_Box) (erl_backend__elds__V_39_39)));
                                }
#line 136 "elds.m"
                                if (erl_backend__elds__succeeded)
#line 136 "elds.m"
                                  {
#line 9164 "erl_backend.elds.c"
                                    erl_backend__elds__TypeInfo_62_62 = (MR_Word) &erl_backend__elds_scalar_common_1[13];
#line 9166 "erl_backend.elds.c"
                                    {
#line 9168 "erl_backend.elds.c"
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
#line 9200 "erl_backend.elds.c"
                        /* direct tailcall eliminated */
#line 9202 "erl_backend.elds.c"
                        {
#line 9204 "erl_backend.elds.c"
                          MR_Word erl_backend__elds__HeadVar__1__tmp_copy_1 = erl_backend__elds__V_41_41;
#line 9206 "erl_backend.elds.c"
                          MR_Word erl_backend__elds__HeadVar__2__tmp_copy_2 = erl_backend__elds__V_42_42;

#line 9209 "erl_backend.elds.c"
                          erl_backend__elds__HeadVar__2_2 = erl_backend__elds__HeadVar__2__tmp_copy_2;
#line 9211 "erl_backend.elds.c"
                          erl_backend__elds__HeadVar__1_1 = erl_backend__elds__HeadVar__1__tmp_copy_1;
#line 9213 "erl_backend.elds.c"
                        }
#line 9215 "erl_backend.elds.c"
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
#line 9246 "erl_backend.elds.c"
                        erl_backend__elds__succeeded = (strcmp(erl_backend__elds__V_43_43, erl_backend__elds__V_45_45) == 0);
#line 136 "elds.m"
                        if (erl_backend__elds__succeeded)
#line 9250 "erl_backend.elds.c"
                          {
#line 9252 "erl_backend.elds.c"
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
#line 9284 "erl_backend.elds.c"
                        {
#line 9286 "erl_backend.elds.c"
                          erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_expr_0_0(erl_backend__elds__V_47_47, erl_backend__elds__V_49_49);
                        }
#line 136 "elds.m"
                        if (erl_backend__elds__succeeded)
#line 9291 "erl_backend.elds.c"
                          {
#line 9293 "erl_backend.elds.c"
                            /* direct tailcall eliminated */
#line 9295 "erl_backend.elds.c"
                            {
#line 9297 "erl_backend.elds.c"
                              MR_Word erl_backend__elds__HeadVar__1__tmp_copy_1 = erl_backend__elds__V_48_48;
#line 9299 "erl_backend.elds.c"
                              MR_Word erl_backend__elds__HeadVar__2__tmp_copy_2 = erl_backend__elds__V_50_50;

#line 9302 "erl_backend.elds.c"
                              erl_backend__elds__HeadVar__2_2 = erl_backend__elds__HeadVar__2__tmp_copy_2;
#line 9304 "erl_backend.elds.c"
                              erl_backend__elds__HeadVar__1_1 = erl_backend__elds__HeadVar__1__tmp_copy_1;
#line 9306 "erl_backend.elds.c"
                            }
#line 9308 "erl_backend.elds.c"
                            continue;
#line 9310 "erl_backend.elds.c"
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
#line 9337 "erl_backend.elds.c"
                        erl_backend__elds__TypeInfo_59_59 = (MR_Word) &erl_backend__elds_scalar_common_1[11];
#line 9339 "erl_backend.elds.c"
                        {
#line 9341 "erl_backend.elds.c"
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
#line 9391 "erl_backend.elds.c"
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
#line 9421 "erl_backend.elds.c"
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
#line 9441 "erl_backend.elds.c"
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
#line 9461 "erl_backend.elds.c"
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

#line 9542 "erl_backend.elds.c"
        {
#line 9544 "erl_backend.elds.c"
          erl_backend__elds__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(erl_backend__elds__V_3_3, erl_backend__elds__V_7_7);
        }
#line 73 "elds.m"
        if (erl_backend__elds__succeeded)
#line 73 "elds.m"
          {
#line 9551 "erl_backend.elds.c"
            erl_backend__elds__TypeInfo_14_14 = (MR_Word) &erl_backend__elds_scalar_common_1[9];
#line 9553 "erl_backend.elds.c"
            {
#line 9555 "erl_backend.elds.c"
              erl_backend__elds__succeeded = mercury__builtin__unify_2_p_0(erl_backend__elds__TypeInfo_14_14, ((MR_Box) (erl_backend__elds__V_4_4)), ((MR_Box) (erl_backend__elds__V_8_8)));
            }
#line 73 "elds.m"
            if (erl_backend__elds__succeeded)
#line 73 "elds.m"
              {
#line 9562 "erl_backend.elds.c"
                {
#line 9564 "erl_backend.elds.c"
                  erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_body_0_0(erl_backend__elds__V_5_5, erl_backend__elds__V_9_9);
                }
#line 73 "elds.m"
                if (erl_backend__elds__succeeded)
#line 73 "elds.m"
                  {
#line 9571 "erl_backend.elds.c"
                    erl_backend__elds__TypeInfo_15_15 = (MR_Word) &erl_backend__elds_scalar_common_1[10];
#line 9573 "erl_backend.elds.c"
                    {
#line 9575 "erl_backend.elds.c"
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
#line 9617 "erl_backend.elds.c"
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
#line 9639 "erl_backend.elds.c"
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

#line 9700 "erl_backend.elds.c"
        {
#line 9702 "erl_backend.elds.c"
          erl_backend__elds__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &erl_backend__elds_scalar_common_1[8], ((MR_Box) (erl_backend__elds__V_3_3)), ((MR_Box) (erl_backend__elds__V_5_5)));
        }
#line 128 "elds.m"
        if (erl_backend__elds__succeeded)
#line 9707 "erl_backend.elds.c"
          {
#line 9709 "erl_backend.elds.c"
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
#line 9745 "erl_backend.elds.c"
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
#line 9771 "erl_backend.elds.c"
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
#line 9791 "erl_backend.elds.c"
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

#line 9858 "erl_backend.elds.c"
        {
#line 9860 "erl_backend.elds.c"
          erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_term_0_0(erl_backend__elds__V_3_3, erl_backend__elds__V_6_6);
        }
#line 258 "elds.m"
        if (erl_backend__elds__succeeded)
#line 258 "elds.m"
          {
#line 9867 "erl_backend.elds.c"
            {
#line 9869 "erl_backend.elds.c"
              erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_term_0_0(erl_backend__elds__V_4_4, erl_backend__elds__V_7_7);
            }
#line 258 "elds.m"
            if (erl_backend__elds__succeeded)
#line 9874 "erl_backend.elds.c"
              {
#line 9876 "erl_backend.elds.c"
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
#line 9914 "erl_backend.elds.c"
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
#line 9936 "erl_backend.elds.c"
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

#line 9997 "erl_backend.elds.c"
        {
#line 9999 "erl_backend.elds.c"
          erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_term_0_0(erl_backend__elds__V_3_3, erl_backend__elds__V_5_5);
        }
#line 255 "elds.m"
        if (erl_backend__elds__succeeded)
#line 10004 "erl_backend.elds.c"
          {
#line 10006 "erl_backend.elds.c"
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
#line 10042 "erl_backend.elds.c"
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
#line 10083 "erl_backend.elds.c"
                *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
#line 250 "elds.m"
                break;
#line 250 "elds.m"
              case (MR_Integer) 2:
#line 10089 "erl_backend.elds.c"
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
#line 10113 "erl_backend.elds.c"
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
#line 10137 "erl_backend.elds.c"
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
#line 10161 "erl_backend.elds.c"
                *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
#line 250 "elds.m"
                break;
#line 250 "elds.m"
              case (MR_Integer) 1:
#line 10167 "erl_backend.elds.c"
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
#line 10250 "erl_backend.elds.c"
                {
#line 10252 "erl_backend.elds.c"
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
#line 10278 "erl_backend.elds.c"
                {
#line 10280 "erl_backend.elds.c"
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
#line 10306 "erl_backend.elds.c"
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
#line 10347 "erl_backend.elds.c"
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
#line 10376 "erl_backend.elds.c"
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
#line 10389 "erl_backend.elds.c"
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
#line 10457 "erl_backend.elds.c"
            {
#line 10459 "erl_backend.elds.c"
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
#line 10483 "erl_backend.elds.c"
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
#line 10537 "erl_backend.elds.c"
  {
#line 10539 "erl_backend.elds.c"
    MR_bool erl_backend__elds__succeeded = (erl_backend__elds__HeadVar__2_1 == erl_backend__elds__HeadVar__2_2);

#line 10542 "erl_backend.elds.c"
    return erl_backend__elds__succeeded;
#line 10544 "erl_backend.elds.c"
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
#line 10573 "erl_backend.elds.c"
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
#line 10623 "erl_backend.elds.c"
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
#line 10643 "erl_backend.elds.c"
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
#line 10663 "erl_backend.elds.c"
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
#line 10683 "erl_backend.elds.c"
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
#line 10703 "erl_backend.elds.c"
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
#line 10723 "erl_backend.elds.c"
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
#line 10743 "erl_backend.elds.c"
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
#line 10763 "erl_backend.elds.c"
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

#line 10886 "erl_backend.elds.c"
        {
#line 10888 "erl_backend.elds.c"
          erl_backend__elds__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(erl_backend__elds__V_3_3, erl_backend__elds__V_12_12);
        }
#line 43 "elds.m"
        if (erl_backend__elds__succeeded)
#line 43 "elds.m"
          {
#line 10895 "erl_backend.elds.c"
            erl_backend__elds__TypeInfo_24_24 = (MR_Word) &erl_backend__elds_scalar_common_1[1];
#line 10897 "erl_backend.elds.c"
            {
#line 10899 "erl_backend.elds.c"
              erl_backend__elds__succeeded = mercury__builtin__unify_2_p_0(erl_backend__elds__TypeInfo_24_24, ((MR_Box) (erl_backend__elds__V_4_4)), ((MR_Box) (erl_backend__elds__V_13_13)));
            }
#line 43 "elds.m"
            if (erl_backend__elds__succeeded)
#line 43 "elds.m"
              {
#line 10906 "erl_backend.elds.c"
                erl_backend__elds__TypeInfo_25_25 = (MR_Word) &erl_backend__elds_scalar_common_1[2];
#line 10908 "erl_backend.elds.c"
                {
#line 10910 "erl_backend.elds.c"
                  erl_backend__elds__succeeded = mercury__builtin__unify_2_p_0(erl_backend__elds__TypeInfo_25_25, ((MR_Box) (erl_backend__elds__V_5_5)), ((MR_Box) (erl_backend__elds__V_14_14)));
                }
#line 43 "elds.m"
                if (erl_backend__elds__succeeded)
#line 43 "elds.m"
                  {
#line 10917 "erl_backend.elds.c"
                    erl_backend__elds__TypeInfo_26_26 = (MR_Word) &erl_backend__elds_scalar_common_1[3];
#line 10919 "erl_backend.elds.c"
                    {
#line 10921 "erl_backend.elds.c"
                      erl_backend__elds__succeeded = mercury__builtin__unify_2_p_0(erl_backend__elds__TypeInfo_26_26, ((MR_Box) (erl_backend__elds__V_6_6)), ((MR_Box) (erl_backend__elds__V_15_15)));
                    }
#line 43 "elds.m"
                    if (erl_backend__elds__succeeded)
#line 43 "elds.m"
                      {
#line 10928 "erl_backend.elds.c"
                        erl_backend__elds__TypeInfo_27_27 = (MR_Word) &erl_backend__elds_scalar_common_1[4];
#line 10930 "erl_backend.elds.c"
                        {
#line 10932 "erl_backend.elds.c"
                          erl_backend__elds__succeeded = mercury__builtin__unify_2_p_0(erl_backend__elds__TypeInfo_27_27, ((MR_Box) (erl_backend__elds__V_7_7)), ((MR_Box) (erl_backend__elds__V_16_16)));
                        }
#line 43 "elds.m"
                        if (erl_backend__elds__succeeded)
#line 43 "elds.m"
                          {
#line 10939 "erl_backend.elds.c"
                            erl_backend__elds__TypeInfo_28_28 = (MR_Word) &erl_backend__elds_scalar_common_1[5];
#line 10941 "erl_backend.elds.c"
                            {
#line 10943 "erl_backend.elds.c"
                              erl_backend__elds__succeeded = mercury__builtin__unify_2_p_0(erl_backend__elds__TypeInfo_28_28, ((MR_Box) (erl_backend__elds__V_8_8)), ((MR_Box) (erl_backend__elds__V_17_17)));
                            }
#line 43 "elds.m"
                            if (erl_backend__elds__succeeded)
#line 43 "elds.m"
                              {
#line 10950 "erl_backend.elds.c"
                                erl_backend__elds__TypeInfo_29_29 = (MR_Word) &erl_backend__elds_scalar_common_1[6];
#line 10952 "erl_backend.elds.c"
                                {
#line 10954 "erl_backend.elds.c"
                                  erl_backend__elds__succeeded = mercury__builtin__unify_2_p_0(erl_backend__elds__TypeInfo_29_29, ((MR_Box) (erl_backend__elds__V_9_9)), ((MR_Box) (erl_backend__elds__V_18_18)));
                                }
#line 43 "elds.m"
                                if (erl_backend__elds__succeeded)
#line 43 "elds.m"
                                  {
#line 10961 "erl_backend.elds.c"
                                    erl_backend__elds__TypeInfo_30_30 = (MR_Word) &erl_backend__elds_scalar_common_1[7];
#line 10963 "erl_backend.elds.c"
                                    {
#line 10965 "erl_backend.elds.c"
                                      erl_backend__elds__succeeded = mercury__builtin__unify_2_p_0(erl_backend__elds__TypeInfo_30_30, ((MR_Box) (erl_backend__elds__V_10_10)), ((MR_Box) (erl_backend__elds__V_19_19)));
                                    }
#line 43 "elds.m"
                                    if (erl_backend__elds__succeeded)
#line 43 "elds.m"
                                      {
#line 10972 "erl_backend.elds.c"
                                        erl_backend__elds__TypeInfo_31_31 = (MR_Word) &erl_backend__elds_scalar_common_1[7];
#line 10974 "erl_backend.elds.c"
                                        {
#line 10976 "erl_backend.elds.c"
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
