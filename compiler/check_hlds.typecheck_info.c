/*
** Automatically generated from `typecheck_info.m'
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


/* :- module check_hlds.typecheck_info. */
/* :- implementation. */

/*
INIT mercury__check_hlds__typecheck_info__init
ENDINIT
*/

#include "check_hlds.typecheck_info.mih"


#include "analysis.mih"
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
#include "int.mih"
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
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.type_util.mih"
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
#include "parse_tree.mercury_to_mercury.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_type_subst.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 136 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 139 "check_hlds.typecheck_info.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__typecheck_info__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 142 "check_hlds.typecheck_info.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_info__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 145 "check_hlds.typecheck_info.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__typecheck_info__tree234__pti_tree234_2__plain_hlds__hlds_data__type_ctor_info_constraint_id_0__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0;

#line 148 "check_hlds.typecheck_info.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__typecheck_info__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 151 "check_hlds.typecheck_info.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_info__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 154 "check_hlds.typecheck_info.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_info__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 157 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 160 "check_hlds.typecheck_info.c"
static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_args_type_assign_0_0[3];

#line 163 "check_hlds.typecheck_info.c"
static const MR_ConstString check_hlds__typecheck_info__check_hlds__typecheck_info__field_names_args_type_assign_0_0[3];

#line 166 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDesc check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_args_type_assign_0_0;

#line 169 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_args_type_assign_0_0[1];

#line 172 "check_hlds.typecheck_info.c"
static const MR_DuPtagLayout check_hlds__typecheck_info__check_hlds__typecheck_info__du_ptag_ordered_args_type_assign_0[1];

#line 175 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_name_ordered_args_type_assign_0[1];

#line 178 "check_hlds.typecheck_info.c"
static const MR_Integer check_hlds__typecheck_info__check_hlds__typecheck_info__functor_number_map_args_type_assign_0[1];

#line 181 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__list__ti_list_1check_hlds__typecheck_info__type_ctor_info_args_type_assign_0;

#line 184 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 187 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 190 "check_hlds.typecheck_info.c"
static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_cons_type_info_0_0[6];

#line 193 "check_hlds.typecheck_info.c"
static const MR_ConstString check_hlds__typecheck_info__check_hlds__typecheck_info__field_names_cons_type_info_0_0[6];

#line 196 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDesc check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_cons_type_info_0_0;

#line 199 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_cons_type_info_0_0[1];

#line 202 "check_hlds.typecheck_info.c"
static const MR_DuPtagLayout check_hlds__typecheck_info__check_hlds__typecheck_info__du_ptag_ordered_cons_type_info_0[1];

#line 205 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_name_ordered_cons_type_info_0[1];

#line 208 "check_hlds.typecheck_info.c"
static const MR_Integer check_hlds__typecheck_info__check_hlds__typecheck_info__functor_number_map_cons_type_info_0[1];

#line 211 "check_hlds.typecheck_info.c"
static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_cons_type_info_source_0_0[1];

#line 214 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDesc check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_cons_type_info_source_0_0;

#line 217 "check_hlds.typecheck_info.c"
static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_cons_type_info_source_0_1[1];

#line 220 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDesc check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_cons_type_info_source_0_1;

#line 223 "check_hlds.typecheck_info.c"
static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_cons_type_info_source_0_2[1];

#line 226 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDesc check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_cons_type_info_source_0_2;

#line 229 "check_hlds.typecheck_info.c"
static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_cons_type_info_source_0_3[1];

#line 232 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDesc check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_cons_type_info_source_0_3;

#line 235 "check_hlds.typecheck_info.c"
static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_cons_type_info_source_0_4[1];

#line 238 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDesc check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_cons_type_info_source_0_4;

#line 241 "check_hlds.typecheck_info.c"
static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_cons_type_info_source_0_5[1];

#line 244 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDesc check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_cons_type_info_source_0_5;

#line 247 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_cons_type_info_source_0_0[1];

#line 250 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_cons_type_info_source_0_1[1];

#line 253 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_cons_type_info_source_0_2[1];

#line 256 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_cons_type_info_source_0_3[3];

#line 259 "check_hlds.typecheck_info.c"
static const MR_DuPtagLayout check_hlds__typecheck_info__check_hlds__typecheck_info__du_ptag_ordered_cons_type_info_source_0[4];

#line 262 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_name_ordered_cons_type_info_source_0[6];

#line 265 "check_hlds.typecheck_info.c"
static const MR_Integer check_hlds__typecheck_info__check_hlds__typecheck_info__functor_number_map_cons_type_info_source_0[6];

#line 268 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0;

#line 271 "check_hlds.typecheck_info.c"
static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_overloaded_symbol_0_0[2];

#line 274 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDesc check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_overloaded_symbol_0_0;

#line 277 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__list__ti_list_1check_hlds__typecheck_info__type_ctor_info_cons_type_info_source_0;

#line 280 "check_hlds.typecheck_info.c"
static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_overloaded_symbol_0_1[2];

#line 283 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDesc check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_overloaded_symbol_0_1;

#line 286 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_overloaded_symbol_0_0[1];

#line 289 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_overloaded_symbol_0_1[1];

#line 292 "check_hlds.typecheck_info.c"
static const MR_DuPtagLayout check_hlds__typecheck_info__check_hlds__typecheck_info__du_ptag_ordered_overloaded_symbol_0[2];

#line 295 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_name_ordered_overloaded_symbol_0[2];

#line 298 "check_hlds.typecheck_info.c"
static const MR_Integer check_hlds__typecheck_info__check_hlds__typecheck_info__functor_number_map_overloaded_symbol_0[2];

#line 301 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__list__ti_list_1term__type_ctor_info_context_0;

#line 304 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__typecheck_info__tree234__ti_tree234_2check_hlds__typecheck_info__type_ctor_info_overloaded_symbol_0list__ti_list_1term__type_ctor_info_context_0;

#line 307 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 310 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__typecheck_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 313 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__typecheck_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 316 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__typecheck_info__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_prog_constraint_0hlds__hlds_data__type_ctor_info_constraint_proof_0;

#line 319 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__typecheck_info__tree234__ti_tree234_2hlds__hlds_data__type_ctor_info_constraint_id_0parse_tree__prog_data__type_ctor_info_prog_constraint_0;

#line 322 "check_hlds.typecheck_info.c"
static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_type_assign_0_0[7];

#line 325 "check_hlds.typecheck_info.c"
static const MR_ConstString check_hlds__typecheck_info__check_hlds__typecheck_info__field_names_type_assign_0_0[7];

#line 328 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDesc check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_type_assign_0_0;

#line 331 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_type_assign_0_0[1];

#line 334 "check_hlds.typecheck_info.c"
static const MR_DuPtagLayout check_hlds__typecheck_info__check_hlds__typecheck_info__du_ptag_ordered_type_assign_0[1];

#line 337 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_name_ordered_type_assign_0[1];

#line 340 "check_hlds.typecheck_info.c"
static const MR_Integer check_hlds__typecheck_info__check_hlds__typecheck_info__functor_number_map_type_assign_0[1];

#line 343 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__list__ti_list_1check_hlds__typecheck_info__type_ctor_info_type_assign_0;

#line 346 "check_hlds.typecheck_info.c"
static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_typecheck_info_0_0[8];

#line 349 "check_hlds.typecheck_info.c"
static const MR_ConstString check_hlds__typecheck_info__check_hlds__typecheck_info__field_names_typecheck_info_0_0[8];

#line 352 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDesc check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_typecheck_info_0_0;

#line 355 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_typecheck_info_0_0[1];

#line 358 "check_hlds.typecheck_info.c"
static const MR_DuPtagLayout check_hlds__typecheck_info__check_hlds__typecheck_info__du_ptag_ordered_typecheck_info_0[1];

#line 361 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_name_ordered_typecheck_info_0[1];

#line 364 "check_hlds.typecheck_info.c"
static const MR_Integer check_hlds__typecheck_info__check_hlds__typecheck_info__functor_number_map_typecheck_info_0[1];

#line 367 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__list__ti_list_1hlds__hlds_pred__type_ctor_info_marker_0;

#line 370 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 373 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0;

#line 376 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__maybe__ti_maybe_1parse_tree__error_util__type_ctor_info_error_spec_0;

#line 379 "check_hlds.typecheck_info.c"
static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_typecheck_sub_info_0_0[9];

#line 382 "check_hlds.typecheck_info.c"
static const MR_ConstString check_hlds__typecheck_info__check_hlds__typecheck_info__field_names_typecheck_sub_info_0_0[9];

#line 385 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDesc check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_typecheck_sub_info_0_0;

#line 388 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_typecheck_sub_info_0_0[1];

#line 391 "check_hlds.typecheck_info.c"
static const MR_DuPtagLayout check_hlds__typecheck_info__check_hlds__typecheck_info__du_ptag_ordered_typecheck_sub_info_0[1];

#line 394 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_name_ordered_typecheck_sub_info_0[1];

#line 397 "check_hlds.typecheck_info.c"
static const MR_Integer check_hlds__typecheck_info__check_hlds__typecheck_info__functor_number_map_typecheck_sub_info_0[1];

#line 400 "check_hlds.typecheck_info.c"
static MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____args_type_assign_0_0_10001(
#line 403 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_1,
#line 405 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2);

#line 408 "check_hlds.typecheck_info.c"
static void MR_CALL 
check_hlds__typecheck_info____Compare____args_type_assign_0_0_10001(
#line 411 "check_hlds.typecheck_info.c"
  MR_Box * check_hlds__typecheck_info__wrapper_arg_1,
#line 413 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2,
#line 415 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_3);

#line 418 "check_hlds.typecheck_info.c"
static MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____args_type_assign_set_0_0_10001(
#line 421 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_1,
#line 423 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2);

#line 426 "check_hlds.typecheck_info.c"
static void MR_CALL 
check_hlds__typecheck_info____Compare____args_type_assign_set_0_0_10001(
#line 429 "check_hlds.typecheck_info.c"
  MR_Box * check_hlds__typecheck_info__wrapper_arg_1,
#line 431 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2,
#line 433 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_3);

#line 436 "check_hlds.typecheck_info.c"
static MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____cons_type_info_0_0_10001(
#line 439 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_1,
#line 441 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2);

#line 444 "check_hlds.typecheck_info.c"
static void MR_CALL 
check_hlds__typecheck_info____Compare____cons_type_info_0_0_10001(
#line 447 "check_hlds.typecheck_info.c"
  MR_Box * check_hlds__typecheck_info__wrapper_arg_1,
#line 449 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2,
#line 451 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_3);

#line 454 "check_hlds.typecheck_info.c"
static MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____cons_type_info_source_0_0_10001(
#line 457 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_1,
#line 459 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2);

#line 462 "check_hlds.typecheck_info.c"
static void MR_CALL 
check_hlds__typecheck_info____Compare____cons_type_info_source_0_0_10001(
#line 465 "check_hlds.typecheck_info.c"
  MR_Box * check_hlds__typecheck_info__wrapper_arg_1,
#line 467 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2,
#line 469 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_3);

#line 472 "check_hlds.typecheck_info.c"
static MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____overloaded_symbol_0_0_10001(
#line 475 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_1,
#line 477 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2);

#line 480 "check_hlds.typecheck_info.c"
static void MR_CALL 
check_hlds__typecheck_info____Compare____overloaded_symbol_0_0_10001(
#line 483 "check_hlds.typecheck_info.c"
  MR_Box * check_hlds__typecheck_info__wrapper_arg_1,
#line 485 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2,
#line 487 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_3);

#line 490 "check_hlds.typecheck_info.c"
static MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____overloaded_symbol_map_0_0_10001(
#line 493 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_1,
#line 495 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2);

#line 498 "check_hlds.typecheck_info.c"
static void MR_CALL 
check_hlds__typecheck_info____Compare____overloaded_symbol_map_0_0_10001(
#line 501 "check_hlds.typecheck_info.c"
  MR_Box * check_hlds__typecheck_info__wrapper_arg_1,
#line 503 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2,
#line 505 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_3);

#line 508 "check_hlds.typecheck_info.c"
static MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____type_assign_0_0_10001(
#line 511 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_1,
#line 513 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2);

#line 516 "check_hlds.typecheck_info.c"
static void MR_CALL 
check_hlds__typecheck_info____Compare____type_assign_0_0_10001(
#line 519 "check_hlds.typecheck_info.c"
  MR_Box * check_hlds__typecheck_info__wrapper_arg_1,
#line 521 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2,
#line 523 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_3);

#line 526 "check_hlds.typecheck_info.c"
static MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____type_assign_set_0_0_10001(
#line 529 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_1,
#line 531 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2);

#line 534 "check_hlds.typecheck_info.c"
static void MR_CALL 
check_hlds__typecheck_info____Compare____type_assign_set_0_0_10001(
#line 537 "check_hlds.typecheck_info.c"
  MR_Box * check_hlds__typecheck_info__wrapper_arg_1,
#line 539 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2,
#line 541 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_3);

#line 544 "check_hlds.typecheck_info.c"
static MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____typecheck_info_0_0_10001(
#line 547 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_1,
#line 549 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2);

#line 552 "check_hlds.typecheck_info.c"
static void MR_CALL 
check_hlds__typecheck_info____Compare____typecheck_info_0_0_10001(
#line 555 "check_hlds.typecheck_info.c"
  MR_Box * check_hlds__typecheck_info__wrapper_arg_1,
#line 557 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2,
#line 559 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_3);

#line 562 "check_hlds.typecheck_info.c"
static MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____typecheck_sub_info_0_0_10001(
#line 565 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_1,
#line 567 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2);

#line 570 "check_hlds.typecheck_info.c"
static void MR_CALL 
check_hlds__typecheck_info____Compare____typecheck_sub_info_0_0_10001(
#line 573 "check_hlds.typecheck_info.c"
  MR_Box * check_hlds__typecheck_info__wrapper_arg_1,
#line 575 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2,
#line 577 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_3);

#line 1017 "typecheck_info.m"
static void MR_CALL 
check_hlds__typecheck_info__do_type_checkpoint_4_p_0(
#line 1017 "typecheck_info.m"
  MR_String check_hlds__typecheck_info__Msg_5,
#line 1017 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__Info_6);

#line 966 "typecheck_info.m"
static MR_Word MR_CALL 
check_hlds__typecheck_info__type_assign_constraints_to_pieces_list_5_f_0(
#line 966 "typecheck_info.m"
  MR_String check_hlds__typecheck_info__Operator_1,
#line 966 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__HeadVar__2_2,
#line 966 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__TypeBindings_3,
#line 966 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__TypeVarSet_4,
#line 966 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__FoundOne_5);

#line 947 "typecheck_info.m"
static void MR_CALL 
check_hlds__typecheck_info__write_type_assign_constraints_7_p_0(
#line 947 "typecheck_info.m"
  MR_String check_hlds__typecheck_info__Operator_1,
#line 947 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__HeadVar__2_2,
#line 947 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__TypeBindings_3,
#line 947 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__TypeVarSet_4,
#line 947 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__FoundOne_5);

#line 933 "typecheck_info.m"
static MR_Word MR_CALL 
check_hlds__typecheck_info__type_assign_hlds_constraints_to_pieces_3_f_0(
#line 933 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__Constraints_5,
#line 933 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__TypeBindings_6,
#line 933 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__TypeVarSet_7);

#line 889 "typecheck_info.m"
static MR_Word MR_CALL 
check_hlds__typecheck_info__type_assign_types_to_pieces_6_f_0(
#line 889 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__HeadVar__1_1,
#line 889 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__VarSet_2,
#line 889 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__VarTypes_3,
#line 889 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__TypeBindings_4,
#line 889 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__TypeVarSet_5,
#line 889 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__FoundOne_6);

#line 860 "typecheck_info.m"
static void MR_CALL 
check_hlds__typecheck_info__write_type_assign_types_8_p_0(
#line 860 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__HeadVar__1_1,
#line 860 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__VarSet_2,
#line 860 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__VarTypes_3,
#line 860 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__TypeBindings_4,
#line 860 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__TypeVarSet_5,
#line 860 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__FoundOne_6);

#line 824 "typecheck_info.m"
static MR_Word MR_CALL 
check_hlds__typecheck_info__type_assign_to_pieces_3_f_0(
#line 824 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__TypeAssign_5,
#line 824 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__MaybeSeq_6,
#line 824 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__VarSet_7);

#line 800 "typecheck_info.m"
static void MR_CALL 
check_hlds__typecheck_info__write_type_assign_4_p_0(
#line 800 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__TypeAssign_5,
#line 800 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__VarSet_6);

#line 573 "typecheck_info.m"
static MR_bool MR_CALL 
check_hlds__typecheck_info__tvar_maps_to_tvar_3_p_0(
#line 573 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__TypeBindings_4,
#line 573 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__TVar0_5,
#line 573 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__TVar_6);

#line 559 "typecheck_info.m"
static void MR_CALL 
check_hlds__typecheck_info__get_existq_tvar_renaming_2_5_p_0(
#line 559 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__OldHeadTypeParams_6,
#line 559 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__TypeBindings_7,
#line 559 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__TVar_8,
#line 559 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__STATE_VARIABLE_Renaming_0_11,
#line 559 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__STATE_VARIABLE_Renaming_12);

#line 556 "typecheck_info.m"
static void MR_CALL 
check_hlds__typecheck_info__get_existq_tvar_renaming_4_p_0_1(
#line 556 "typecheck_info.m"
  MR_Box check_hlds__typecheck_info__closure_arg,
#line 556 "typecheck_info.m"
  MR_Box check_hlds__typecheck_info__wrapper_arg_1,
#line 556 "typecheck_info.m"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2,
#line 556 "typecheck_info.m"
  MR_Box * check_hlds__typecheck_info__wrapper_arg_3);

#line 551 "typecheck_info.m"
static void MR_CALL 
check_hlds__typecheck_info__get_existq_tvar_renaming_4_p_0(
#line 551 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__OldHeadTypeParams_5,
#line 551 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__ExistQVars_6,
#line 551 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__TypeBindings_7,
#line 551 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__ExistTypeRenaming_8);

#line 539 "typecheck_info.m"
static void MR_CALL 
check_hlds__typecheck_info__expand_types_5_p_0(
#line 539 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__TypeSubst_6,
#line 539 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__Type0_7,
#line 539 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__Type_8,
#line 539 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__STATE_VARIABLE_TypeVarsSet_0_11,
#line 539 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__STATE_VARIABLE_TypeVarsSet_12);

#line 520 "typecheck_info.m"
static void MR_CALL 
check_hlds__typecheck_info__typecheck_info_get_final_info_12_p_0_4(
#line 520 "typecheck_info.m"
  MR_Box check_hlds__typecheck_info__closure_arg,
#line 520 "typecheck_info.m"
  MR_Box check_hlds__typecheck_info__wrapper_arg_1,
#line 520 "typecheck_info.m"
  MR_Box * check_hlds__typecheck_info__wrapper_arg_2);

#line 468 "typecheck_info.m"
static void MR_CALL 
check_hlds__typecheck_info__typecheck_info_get_final_info_12_p_0_3(
#line 468 "typecheck_info.m"
  MR_Box check_hlds__typecheck_info__closure_arg,
#line 468 "typecheck_info.m"
  MR_Box check_hlds__typecheck_info__wrapper_arg_1,
#line 468 "typecheck_info.m"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2,
#line 468 "typecheck_info.m"
  MR_Box * check_hlds__typecheck_info__wrapper_arg_3);

#line 466 "typecheck_info.m"
static void MR_CALL 
check_hlds__typecheck_info__typecheck_info_get_final_info_12_p_0_2(
#line 466 "typecheck_info.m"
  MR_Box check_hlds__typecheck_info__closure_arg,
#line 466 "typecheck_info.m"
  MR_Box check_hlds__typecheck_info__wrapper_arg_1,
#line 466 "typecheck_info.m"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2,
#line 466 "typecheck_info.m"
  MR_Box * check_hlds__typecheck_info__wrapper_arg_3);

#line 446 "typecheck_info.m"
static void MR_CALL 
check_hlds__typecheck_info__typecheck_info_get_final_info_12_p_0_1(
#line 446 "typecheck_info.m"
  MR_Box check_hlds__typecheck_info__closure_arg,
#line 446 "typecheck_info.m"
  MR_Box check_hlds__typecheck_info__wrapper_arg_1,
#line 446 "typecheck_info.m"
  MR_Box * check_hlds__typecheck_info__wrapper_arg_2,
#line 446 "typecheck_info.m"
  MR_Box check_hlds__typecheck_info__wrapper_arg_3,
#line 446 "typecheck_info.m"
  MR_Box * check_hlds__typecheck_info__wrapper_arg_4);


static /* final */ const MR_Box check_hlds__typecheck_info_scalar_common_1[23][2];

static /* final */ const MR_Box check_hlds__typecheck_info_scalar_common_2[8][3];

static /* final */ const MR_Box check_hlds__typecheck_info_scalar_common_3[2][1];

static /* final */ const MR_Box check_hlds__typecheck_info_scalar_common_4[2][8];

static /* final */ const MR_Box check_hlds__typecheck_info_scalar_common_5[2][6];




static /* final */ const MR_Box check_hlds__typecheck_info_scalar_common_1[23][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&check_hlds__typecheck_info_scalar_common_1[0]))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_args_type_assign_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__typecheck_info_scalar_common_1[0]))
  },
  /* row 8 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_cons_type_info_source_0))
  },
  /* row 9 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
  /* row 10 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_type_assign_0))
  },
  /* row 11 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 12 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 13 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_info_scalar_common_1[15]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_info_scalar_common_1[14])))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Type assignment"))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "(No variables were assigned a type)"))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_info_scalar_common_1[19]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 22 */
  {
    ((MR_Box) ((MR_String) " ")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box check_hlds__typecheck_info_scalar_common_2[8][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_id_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&check_hlds__typecheck_info_scalar_common_1[0])),
    ((MR_Box) (&check_hlds__typecheck_info_scalar_common_1[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_overloaded_symbol_0)),
    ((MR_Box) (&check_hlds__typecheck_info_scalar_common_1[1]))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&check_hlds__typecheck_info_scalar_common_1[0])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_proof_0))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (&check_hlds__typecheck_info_scalar_common_3[0])),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&check_hlds__typecheck_info_scalar_common_5[0])),
    ((MR_Box) (check_hlds__typecheck_info__typecheck_info_get_final_info_12_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&check_hlds__typecheck_info_scalar_common_5[0])),
    ((MR_Box) (check_hlds__typecheck_info__typecheck_info_get_final_info_12_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__typecheck_info_scalar_common_3[2][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) ""))
  },
  /* row 1 */
  {
    ((MR_Box) (&check_hlds__typecheck_info_scalar_common_2[5]))
  },
};

static /* final */ const MR_Box check_hlds__typecheck_info_scalar_common_4[2][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&check_hlds__typecheck_info__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&check_hlds__typecheck_info__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__typecheck_info__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&check_hlds__typecheck_info__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__typecheck_info__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&check_hlds__typecheck_info__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__typecheck_info__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__typecheck_info__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
};

static /* final */ const MR_Box check_hlds__typecheck_info_scalar_common_5[2][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_constraint_0)),
    ((MR_Box) (&check_hlds__typecheck_info__tree234__pti_tree234_2__plain_hlds__hlds_data__type_ctor_info_constraint_id_0__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&check_hlds__typecheck_info__tree234__pti_tree234_2__plain_hlds__hlds_data__type_ctor_info_constraint_id_0__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__typecheck_info__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
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



#line 1043 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1051 "check_hlds.typecheck_info.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__typecheck_info__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &check_hlds__typecheck_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 1060 "check_hlds.typecheck_info.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_info__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__typecheck_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1068 "check_hlds.typecheck_info.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__typecheck_info__tree234__pti_tree234_2__plain_hlds__hlds_data__type_ctor_info_constraint_id_0__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_id_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0
  }
};

#line 1077 "check_hlds.typecheck_info.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__typecheck_info__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &check_hlds__typecheck_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
    (MR_PseudoTypeInfo) &check_hlds__typecheck_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1086 "check_hlds.typecheck_info.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_info__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__typecheck_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1094 "check_hlds.typecheck_info.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_info__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1102 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 1110 "check_hlds.typecheck_info.c"
static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_args_type_assign_0_0[3] = {
  (MR_PseudoTypeInfo) &check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_type_assign_0,
  (MR_PseudoTypeInfo) &check_hlds__typecheck_info__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_constraints_0
};

#line 1117 "check_hlds.typecheck_info.c"
static const MR_ConstString check_hlds__typecheck_info__check_hlds__typecheck_info__field_names_args_type_assign_0_0[3] = {
  (MR_String) "ata_caller_arg_assign",
  (MR_String) "ata_callee_arg_types",
  (MR_String) "ata_callee_constraints"
};

#line 1124 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDesc check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_args_type_assign_0_0 = {
  (MR_String) "args_type_assign",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_args_type_assign_0_0,
  check_hlds__typecheck_info__check_hlds__typecheck_info__field_names_args_type_assign_0_0,
  NULL,
  NULL
};

#line 1139 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_args_type_assign_0_0[1] = {
  &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_args_type_assign_0_0
};

#line 1144 "check_hlds.typecheck_info.c"
static const MR_DuPtagLayout check_hlds__typecheck_info__check_hlds__typecheck_info__du_ptag_ordered_args_type_assign_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_args_type_assign_0_0
  }
};

#line 1153 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_name_ordered_args_type_assign_0[1] = {
  &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_args_type_assign_0_0
};

#line 1158 "check_hlds.typecheck_info.c"
static const MR_Integer check_hlds__typecheck_info__check_hlds__typecheck_info__functor_number_map_args_type_assign_0[1] = {
  (MR_Integer) 0
};

#line 1163 "check_hlds.typecheck_info.c"
const MR_TypeCtorInfo_Struct check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_args_type_assign_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__typecheck_info____Unify____args_type_assign_0_0_10001)),
  ((MR_Box) (check_hlds__typecheck_info____Compare____args_type_assign_0_0_10001)),
  (MR_String) "check_hlds.typecheck_info",
  (MR_String) "args_type_assign",
  {
    check_hlds__typecheck_info__check_hlds__typecheck_info__du_name_ordered_args_type_assign_0
  },
  {
    check_hlds__typecheck_info__check_hlds__typecheck_info__du_ptag_ordered_args_type_assign_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__typecheck_info__check_hlds__typecheck_info__functor_number_map_args_type_assign_0
};

#line 1184 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__list__ti_list_1check_hlds__typecheck_info__type_ctor_info_args_type_assign_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_args_type_assign_0
  }
};

#line 1192 "check_hlds.typecheck_info.c"
const MR_TypeCtorInfo_Struct check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_args_type_assign_set_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__typecheck_info____Unify____args_type_assign_set_0_0_10001)),
  ((MR_Box) (check_hlds__typecheck_info____Compare____args_type_assign_set_0_0_10001)),
  (MR_String) "check_hlds.typecheck_info",
  (MR_String) "args_type_assign_set",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &check_hlds__typecheck_info__list__ti_list_1check_hlds__typecheck_info__type_ctor_info_args_type_assign_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1213 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1221 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &check_hlds__typecheck_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1229 "check_hlds.typecheck_info.c"
static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_cons_type_info_0_0[6] = {
  (MR_PseudoTypeInfo) &check_hlds__typecheck_info__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
  (MR_PseudoTypeInfo) &check_hlds__typecheck_info__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &check_hlds__typecheck_info__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_constraints_0,
  (MR_PseudoTypeInfo) &check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_cons_type_info_source_0
};

#line 1239 "check_hlds.typecheck_info.c"
static const MR_ConstString check_hlds__typecheck_info__check_hlds__typecheck_info__field_names_cons_type_info_0_0[6] = {
  (MR_String) "cti_varset",
  (MR_String) "cti_exit_tvars",
  (MR_String) "cti_result_type",
  (MR_String) "cti_arg_types",
  (MR_String) "cti_constraints",
  (MR_String) "cti_source"
};

#line 1249 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDesc check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_cons_type_info_0_0 = {
  (MR_String) "cons_type_info",
  (MR_Integer) 6,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_cons_type_info_0_0,
  check_hlds__typecheck_info__check_hlds__typecheck_info__field_names_cons_type_info_0_0,
  NULL,
  NULL
};

#line 1264 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_cons_type_info_0_0[1] = {
  &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_cons_type_info_0_0
};

#line 1269 "check_hlds.typecheck_info.c"
static const MR_DuPtagLayout check_hlds__typecheck_info__check_hlds__typecheck_info__du_ptag_ordered_cons_type_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_cons_type_info_0_0
  }
};

#line 1278 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_name_ordered_cons_type_info_0[1] = {
  &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_cons_type_info_0_0
};

#line 1283 "check_hlds.typecheck_info.c"
static const MR_Integer check_hlds__typecheck_info__check_hlds__typecheck_info__functor_number_map_cons_type_info_0[1] = {
  (MR_Integer) 0
};

#line 1288 "check_hlds.typecheck_info.c"
const MR_TypeCtorInfo_Struct check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_cons_type_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__typecheck_info____Unify____cons_type_info_0_0_10001)),
  ((MR_Box) (check_hlds__typecheck_info____Compare____cons_type_info_0_0_10001)),
  (MR_String) "check_hlds.typecheck_info",
  (MR_String) "cons_type_info",
  {
    check_hlds__typecheck_info__check_hlds__typecheck_info__du_name_ordered_cons_type_info_0
  },
  {
    check_hlds__typecheck_info__check_hlds__typecheck_info__du_ptag_ordered_cons_type_info_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__typecheck_info__check_hlds__typecheck_info__functor_number_map_cons_type_info_0
};

#line 1309 "check_hlds.typecheck_info.c"
static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_cons_type_info_source_0_0[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0
};

#line 1314 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDesc check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_cons_type_info_source_0_0 = {
  (MR_String) "source_type",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_cons_type_info_source_0_0,
  NULL,
  NULL,
  NULL
};

#line 1329 "check_hlds.typecheck_info.c"
static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_cons_type_info_source_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 1334 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDesc check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_cons_type_info_source_0_1 = {
  (MR_String) "source_builtin_type",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_cons_type_info_source_0_1,
  NULL,
  NULL,
  NULL
};

#line 1349 "check_hlds.typecheck_info.c"
static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_cons_type_info_source_0_2[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0
};

#line 1354 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDesc check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_cons_type_info_source_0_2 = {
  (MR_String) "source_get_field_access",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_cons_type_info_source_0_2,
  NULL,
  NULL,
  NULL
};

#line 1369 "check_hlds.typecheck_info.c"
static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_cons_type_info_source_0_3[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0
};

#line 1374 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDesc check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_cons_type_info_source_0_3 = {
  (MR_String) "source_set_field_access",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 3,
  check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_cons_type_info_source_0_3,
  NULL,
  NULL,
  NULL
};

#line 1389 "check_hlds.typecheck_info.c"
static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_cons_type_info_source_0_4[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 1394 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDesc check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_cons_type_info_source_0_4 = {
  (MR_String) "source_apply",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_cons_type_info_source_0_4,
  NULL,
  NULL,
  NULL
};

#line 1409 "check_hlds.typecheck_info.c"
static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_cons_type_info_source_0_5[1] = {
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0
};

#line 1414 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDesc check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_cons_type_info_source_0_5 = {
  (MR_String) "source_pred",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 5,
  check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_cons_type_info_source_0_5,
  NULL,
  NULL,
  NULL
};

#line 1429 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_cons_type_info_source_0_0[1] = {
  &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_cons_type_info_source_0_0
};

#line 1434 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_cons_type_info_source_0_1[1] = {
  &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_cons_type_info_source_0_1
};

#line 1439 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_cons_type_info_source_0_2[1] = {
  &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_cons_type_info_source_0_2
};

#line 1444 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_cons_type_info_source_0_3[3] = {
  &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_cons_type_info_source_0_3,
  &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_cons_type_info_source_0_4,
  &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_cons_type_info_source_0_5
};

#line 1451 "check_hlds.typecheck_info.c"
static const MR_DuPtagLayout check_hlds__typecheck_info__check_hlds__typecheck_info__du_ptag_ordered_cons_type_info_source_0[4] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_cons_type_info_source_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_cons_type_info_source_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_cons_type_info_source_0_2
  },
  {
    (MR_Integer) 3,
    mercury__private_builtin__MR_SECTAG_REMOTE,
    check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_cons_type_info_source_0_3
  }
};

#line 1475 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_name_ordered_cons_type_info_source_0[6] = {
  &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_cons_type_info_source_0_4,
  &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_cons_type_info_source_0_1,
  &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_cons_type_info_source_0_2,
  &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_cons_type_info_source_0_5,
  &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_cons_type_info_source_0_3,
  &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_cons_type_info_source_0_0
};

#line 1485 "check_hlds.typecheck_info.c"
static const MR_Integer check_hlds__typecheck_info__check_hlds__typecheck_info__functor_number_map_cons_type_info_source_0[6] = {
  (MR_Integer) 5,
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 4,
  (MR_Integer) 0,
  (MR_Integer) 3
};

#line 1495 "check_hlds.typecheck_info.c"
const MR_TypeCtorInfo_Struct check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_cons_type_info_source_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__typecheck_info____Unify____cons_type_info_source_0_0_10001)),
  ((MR_Box) (check_hlds__typecheck_info____Compare____cons_type_info_source_0_0_10001)),
  (MR_String) "check_hlds.typecheck_info",
  (MR_String) "cons_type_info_source",
  {
    check_hlds__typecheck_info__check_hlds__typecheck_info__du_name_ordered_cons_type_info_source_0
  },
  {
    check_hlds__typecheck_info__check_hlds__typecheck_info__du_ptag_ordered_cons_type_info_source_0
  },
  (MR_Integer) 6,
  (MR_Integer) 4,
  check_hlds__typecheck_info__check_hlds__typecheck_info__functor_number_map_cons_type_info_source_0
};

#line 1516 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0
  }
};

#line 1524 "check_hlds.typecheck_info.c"
static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_overloaded_symbol_0_0[2] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_simple_call_id_0,
  (MR_PseudoTypeInfo) &check_hlds__typecheck_info__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0
};

#line 1530 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDesc check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_overloaded_symbol_0_0 = {
  (MR_String) "overloaded_pred",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_overloaded_symbol_0_0,
  NULL,
  NULL,
  NULL
};

#line 1545 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__list__ti_list_1check_hlds__typecheck_info__type_ctor_info_cons_type_info_source_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_cons_type_info_source_0
  }
};

#line 1553 "check_hlds.typecheck_info.c"
static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_overloaded_symbol_0_1[2] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0,
  (MR_PseudoTypeInfo) &check_hlds__typecheck_info__list__ti_list_1check_hlds__typecheck_info__type_ctor_info_cons_type_info_source_0
};

#line 1559 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDesc check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_overloaded_symbol_0_1 = {
  (MR_String) "overloaded_func",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_overloaded_symbol_0_1,
  NULL,
  NULL,
  NULL
};

#line 1574 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_overloaded_symbol_0_0[1] = {
  &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_overloaded_symbol_0_0
};

#line 1579 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_overloaded_symbol_0_1[1] = {
  &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_overloaded_symbol_0_1
};

#line 1584 "check_hlds.typecheck_info.c"
static const MR_DuPtagLayout check_hlds__typecheck_info__check_hlds__typecheck_info__du_ptag_ordered_overloaded_symbol_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_overloaded_symbol_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_overloaded_symbol_0_1
  }
};

#line 1598 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_name_ordered_overloaded_symbol_0[2] = {
  &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_overloaded_symbol_0_1,
  &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_overloaded_symbol_0_0
};

#line 1604 "check_hlds.typecheck_info.c"
static const MR_Integer check_hlds__typecheck_info__check_hlds__typecheck_info__functor_number_map_overloaded_symbol_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1610 "check_hlds.typecheck_info.c"
const MR_TypeCtorInfo_Struct check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_overloaded_symbol_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__typecheck_info____Unify____overloaded_symbol_0_0_10001)),
  ((MR_Box) (check_hlds__typecheck_info____Compare____overloaded_symbol_0_0_10001)),
  (MR_String) "check_hlds.typecheck_info",
  (MR_String) "overloaded_symbol",
  {
    check_hlds__typecheck_info__check_hlds__typecheck_info__du_name_ordered_overloaded_symbol_0
  },
  {
    check_hlds__typecheck_info__check_hlds__typecheck_info__du_ptag_ordered_overloaded_symbol_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  check_hlds__typecheck_info__check_hlds__typecheck_info__functor_number_map_overloaded_symbol_0
};

#line 1631 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__list__ti_list_1term__type_ctor_info_context_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__term__term__type_ctor_info_context_0
  }
};

#line 1639 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__typecheck_info__tree234__ti_tree234_2check_hlds__typecheck_info__type_ctor_info_overloaded_symbol_0list__ti_list_1term__type_ctor_info_context_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_overloaded_symbol_0,
    (MR_TypeInfo) &check_hlds__typecheck_info__list__ti_list_1term__type_ctor_info_context_0
  }
};

#line 1648 "check_hlds.typecheck_info.c"
const MR_TypeCtorInfo_Struct check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_overloaded_symbol_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__typecheck_info____Unify____overloaded_symbol_map_0_0_10001)),
  ((MR_Box) (check_hlds__typecheck_info____Compare____overloaded_symbol_map_0_0_10001)),
  (MR_String) "check_hlds.typecheck_info",
  (MR_String) "overloaded_symbol_map",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &check_hlds__typecheck_info__tree234__ti_tree234_2check_hlds__typecheck_info__type_ctor_info_overloaded_symbol_0list__ti_list_1term__type_ctor_info_context_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1669 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1677 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__typecheck_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &check_hlds__typecheck_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 1686 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__typecheck_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &check_hlds__typecheck_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 1695 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__typecheck_info__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_prog_constraint_0hlds__hlds_data__type_ctor_info_constraint_proof_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0,
    (MR_TypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_proof_0
  }
};

#line 1704 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__typecheck_info__tree234__ti_tree234_2hlds__hlds_data__type_ctor_info_constraint_id_0parse_tree__prog_data__type_ctor_info_prog_constraint_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_id_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0
  }
};

#line 1713 "check_hlds.typecheck_info.c"
static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_type_assign_0_0[7] = {
  (MR_PseudoTypeInfo) &check_hlds__typecheck_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &check_hlds__typecheck_info__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
  (MR_PseudoTypeInfo) &check_hlds__typecheck_info__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
  (MR_PseudoTypeInfo) &check_hlds__typecheck_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_constraints_0,
  (MR_PseudoTypeInfo) &check_hlds__typecheck_info__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_prog_constraint_0hlds__hlds_data__type_ctor_info_constraint_proof_0,
  (MR_PseudoTypeInfo) &check_hlds__typecheck_info__tree234__ti_tree234_2hlds__hlds_data__type_ctor_info_constraint_id_0parse_tree__prog_data__type_ctor_info_prog_constraint_0
};

#line 1724 "check_hlds.typecheck_info.c"
static const MR_ConstString check_hlds__typecheck_info__check_hlds__typecheck_info__field_names_type_assign_0_0[7] = {
  (MR_String) "ta_var_types",
  (MR_String) "ta_type_varset",
  (MR_String) "ta_head_type_params",
  (MR_String) "ta_type_bindings",
  (MR_String) "ta_class_constraints",
  (MR_String) "ta_constraint_proofs",
  (MR_String) "ta_constraint_map"
};

#line 1735 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDesc check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_type_assign_0_0 = {
  (MR_String) "type_assign",
  (MR_Integer) 7,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_type_assign_0_0,
  check_hlds__typecheck_info__check_hlds__typecheck_info__field_names_type_assign_0_0,
  NULL,
  NULL
};

#line 1750 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_type_assign_0_0[1] = {
  &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_type_assign_0_0
};

#line 1755 "check_hlds.typecheck_info.c"
static const MR_DuPtagLayout check_hlds__typecheck_info__check_hlds__typecheck_info__du_ptag_ordered_type_assign_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_type_assign_0_0
  }
};

#line 1764 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_name_ordered_type_assign_0[1] = {
  &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_type_assign_0_0
};

#line 1769 "check_hlds.typecheck_info.c"
static const MR_Integer check_hlds__typecheck_info__check_hlds__typecheck_info__functor_number_map_type_assign_0[1] = {
  (MR_Integer) 0
};

#line 1774 "check_hlds.typecheck_info.c"
const MR_TypeCtorInfo_Struct check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_type_assign_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__typecheck_info____Unify____type_assign_0_0_10001)),
  ((MR_Box) (check_hlds__typecheck_info____Compare____type_assign_0_0_10001)),
  (MR_String) "check_hlds.typecheck_info",
  (MR_String) "type_assign",
  {
    check_hlds__typecheck_info__check_hlds__typecheck_info__du_name_ordered_type_assign_0
  },
  {
    check_hlds__typecheck_info__check_hlds__typecheck_info__du_ptag_ordered_type_assign_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__typecheck_info__check_hlds__typecheck_info__functor_number_map_type_assign_0
};

#line 1795 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__list__ti_list_1check_hlds__typecheck_info__type_ctor_info_type_assign_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_type_assign_0
  }
};

#line 1803 "check_hlds.typecheck_info.c"
const MR_TypeCtorInfo_Struct check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_type_assign_set_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__typecheck_info____Unify____type_assign_set_0_0_10001)),
  ((MR_Box) (check_hlds__typecheck_info____Compare____type_assign_set_0_0_10001)),
  (MR_String) "check_hlds.typecheck_info",
  (MR_String) "type_assign_set",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &check_hlds__typecheck_info__list__ti_list_1check_hlds__typecheck_info__type_ctor_info_type_assign_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1824 "check_hlds.typecheck_info.c"
static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_typecheck_info_0_0[8] = {
  (MR_PseudoTypeInfo) &check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_typecheck_sub_info_0,
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_call_id_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_context_0,
  (MR_PseudoTypeInfo) &check_hlds__typecheck_info__list__ti_list_1check_hlds__typecheck_info__type_ctor_info_type_assign_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1836 "check_hlds.typecheck_info.c"
static const MR_ConstString check_hlds__typecheck_info__check_hlds__typecheck_info__field_names_typecheck_info_0_0[8] = {
  (MR_String) "tc_info_sub_info",
  (MR_String) "tc_info_module_info",
  (MR_String) "tc_info_call_id",
  (MR_String) "tc_info_arg_num",
  (MR_String) "tc_info_context",
  (MR_String) "tc_info_unify_context",
  (MR_String) "tc_info_type_assign_set",
  (MR_String) "tc_info_ambiguity_warn_limit"
};

#line 1848 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDesc check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_typecheck_info_0_0 = {
  (MR_String) "typecheck_info",
  (MR_Integer) 8,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_typecheck_info_0_0,
  check_hlds__typecheck_info__check_hlds__typecheck_info__field_names_typecheck_info_0_0,
  NULL,
  NULL
};

#line 1863 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_typecheck_info_0_0[1] = {
  &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_typecheck_info_0_0
};

#line 1868 "check_hlds.typecheck_info.c"
static const MR_DuPtagLayout check_hlds__typecheck_info__check_hlds__typecheck_info__du_ptag_ordered_typecheck_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_typecheck_info_0_0
  }
};

#line 1877 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_name_ordered_typecheck_info_0[1] = {
  &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_typecheck_info_0_0
};

#line 1882 "check_hlds.typecheck_info.c"
static const MR_Integer check_hlds__typecheck_info__check_hlds__typecheck_info__functor_number_map_typecheck_info_0[1] = {
  (MR_Integer) 0
};

#line 1887 "check_hlds.typecheck_info.c"
const MR_TypeCtorInfo_Struct check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_typecheck_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__typecheck_info____Unify____typecheck_info_0_0_10001)),
  ((MR_Box) (check_hlds__typecheck_info____Compare____typecheck_info_0_0_10001)),
  (MR_String) "check_hlds.typecheck_info",
  (MR_String) "typecheck_info",
  {
    check_hlds__typecheck_info__check_hlds__typecheck_info__du_name_ordered_typecheck_info_0
  },
  {
    check_hlds__typecheck_info__check_hlds__typecheck_info__du_ptag_ordered_typecheck_info_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__typecheck_info__check_hlds__typecheck_info__functor_number_map_typecheck_info_0
};

#line 1908 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__list__ti_list_1hlds__hlds_pred__type_ctor_info_marker_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_marker_0
  }
};

#line 1916 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1924 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 1932 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__maybe__ti_maybe_1parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 1940 "check_hlds.typecheck_info.c"
static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_typecheck_sub_info_0_0[9] = {
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_import_status_0,
  (MR_PseudoTypeInfo) &check_hlds__typecheck_info__list__ti_list_1hlds__hlds_pred__type_ctor_info_marker_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &check_hlds__typecheck_info__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &check_hlds__typecheck_info__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0,
  (MR_PseudoTypeInfo) &check_hlds__typecheck_info__maybe__ti_maybe_1parse_tree__error_util__type_ctor_info_error_spec_0,
  (MR_PseudoTypeInfo) &check_hlds__typecheck_info__tree234__ti_tree234_2check_hlds__typecheck_info__type_ctor_info_overloaded_symbol_0list__ti_list_1term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1953 "check_hlds.typecheck_info.c"
static const MR_ConstString check_hlds__typecheck_info__check_hlds__typecheck_info__field_names_typecheck_sub_info_0_0[9] = {
  (MR_String) "tc_sub_info_pred_id",
  (MR_String) "tc_sub_info_pred_import_status",
  (MR_String) "tc_sub_info_pred_markers",
  (MR_String) "tc_sub_info_is_field_access_function",
  (MR_String) "tc_sub_info_varset",
  (MR_String) "tc_sub_info_non_overload_errors",
  (MR_String) "tc_sub_info_overload_error",
  (MR_String) "tc_sub_info_overloaded_symbols",
  (MR_String) "tc_sub_info_ambiguity_error_limit"
};

#line 1966 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDesc check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_typecheck_sub_info_0_0 = {
  (MR_String) "typecheck_sub_info",
  (MR_Integer) 9,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_typecheck_sub_info_0_0,
  check_hlds__typecheck_info__check_hlds__typecheck_info__field_names_typecheck_sub_info_0_0,
  NULL,
  NULL
};

#line 1981 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_typecheck_sub_info_0_0[1] = {
  &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_typecheck_sub_info_0_0
};

#line 1986 "check_hlds.typecheck_info.c"
static const MR_DuPtagLayout check_hlds__typecheck_info__check_hlds__typecheck_info__du_ptag_ordered_typecheck_sub_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_typecheck_sub_info_0_0
  }
};

#line 1995 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_name_ordered_typecheck_sub_info_0[1] = {
  &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_typecheck_sub_info_0_0
};

#line 2000 "check_hlds.typecheck_info.c"
static const MR_Integer check_hlds__typecheck_info__check_hlds__typecheck_info__functor_number_map_typecheck_sub_info_0[1] = {
  (MR_Integer) 0
};

#line 2005 "check_hlds.typecheck_info.c"
const MR_TypeCtorInfo_Struct check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_typecheck_sub_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__typecheck_info____Unify____typecheck_sub_info_0_0_10001)),
  ((MR_Box) (check_hlds__typecheck_info____Compare____typecheck_sub_info_0_0_10001)),
  (MR_String) "check_hlds.typecheck_info",
  (MR_String) "typecheck_sub_info",
  {
    check_hlds__typecheck_info__check_hlds__typecheck_info__du_name_ordered_typecheck_sub_info_0
  },
  {
    check_hlds__typecheck_info__check_hlds__typecheck_info__du_ptag_ordered_typecheck_sub_info_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__typecheck_info__check_hlds__typecheck_info__functor_number_map_typecheck_sub_info_0
};

#line 2026 "check_hlds.typecheck_info.c"
static MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____args_type_assign_0_0_10001(
#line 2029 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_1,
#line 2031 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2)
#line 2033 "check_hlds.typecheck_info.c"
{
#line 2035 "check_hlds.typecheck_info.c"
  {
#line 2037 "check_hlds.typecheck_info.c"
    MR_bool check_hlds__typecheck_info__succeeded;

#line 2040 "check_hlds.typecheck_info.c"
    {
#line 2042 "check_hlds.typecheck_info.c"
      check_hlds__typecheck_info__succeeded = check_hlds__typecheck_info____Unify____args_type_assign_0_0(((MR_Word) check_hlds__typecheck_info__wrapper_arg_1), ((MR_Word) check_hlds__typecheck_info__wrapper_arg_2));
    }
#line 2045 "check_hlds.typecheck_info.c"
    return check_hlds__typecheck_info__succeeded;
#line 2047 "check_hlds.typecheck_info.c"
  }
#line 2049 "check_hlds.typecheck_info.c"
}

#line 2052 "check_hlds.typecheck_info.c"
static void MR_CALL 
check_hlds__typecheck_info____Compare____args_type_assign_0_0_10001(
#line 2055 "check_hlds.typecheck_info.c"
  MR_Box * check_hlds__typecheck_info__wrapper_arg_1,
#line 2057 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2,
#line 2059 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_3)
#line 2061 "check_hlds.typecheck_info.c"
{
#line 2063 "check_hlds.typecheck_info.c"
  {
#line 2065 "check_hlds.typecheck_info.c"
    MR_Word check_hlds__typecheck_info__conv0_HeadVar__1_1;

#line 2068 "check_hlds.typecheck_info.c"
    {
#line 2070 "check_hlds.typecheck_info.c"
      check_hlds__typecheck_info____Compare____args_type_assign_0_0(&check_hlds__typecheck_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__typecheck_info__wrapper_arg_2), ((MR_Word) check_hlds__typecheck_info__wrapper_arg_3));
    }
#line 2073 "check_hlds.typecheck_info.c"
    *check_hlds__typecheck_info__wrapper_arg_1 = ((MR_Box) (check_hlds__typecheck_info__conv0_HeadVar__1_1));
#line 2075 "check_hlds.typecheck_info.c"
  }
#line 2077 "check_hlds.typecheck_info.c"
}

#line 2080 "check_hlds.typecheck_info.c"
static MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____args_type_assign_set_0_0_10001(
#line 2083 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_1,
#line 2085 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2)
#line 2087 "check_hlds.typecheck_info.c"
{
#line 2089 "check_hlds.typecheck_info.c"
  {
#line 2091 "check_hlds.typecheck_info.c"
    MR_bool check_hlds__typecheck_info__succeeded;

#line 2094 "check_hlds.typecheck_info.c"
    {
#line 2096 "check_hlds.typecheck_info.c"
      check_hlds__typecheck_info__succeeded = check_hlds__typecheck_info____Unify____args_type_assign_set_0_0(((MR_Word) check_hlds__typecheck_info__wrapper_arg_1), ((MR_Word) check_hlds__typecheck_info__wrapper_arg_2));
    }
#line 2099 "check_hlds.typecheck_info.c"
    return check_hlds__typecheck_info__succeeded;
#line 2101 "check_hlds.typecheck_info.c"
  }
#line 2103 "check_hlds.typecheck_info.c"
}

#line 2106 "check_hlds.typecheck_info.c"
static void MR_CALL 
check_hlds__typecheck_info____Compare____args_type_assign_set_0_0_10001(
#line 2109 "check_hlds.typecheck_info.c"
  MR_Box * check_hlds__typecheck_info__wrapper_arg_1,
#line 2111 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2,
#line 2113 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_3)
#line 2115 "check_hlds.typecheck_info.c"
{
#line 2117 "check_hlds.typecheck_info.c"
  {
#line 2119 "check_hlds.typecheck_info.c"
    MR_Word check_hlds__typecheck_info__conv0_HeadVar__1_1;

#line 2122 "check_hlds.typecheck_info.c"
    {
#line 2124 "check_hlds.typecheck_info.c"
      check_hlds__typecheck_info____Compare____args_type_assign_set_0_0(&check_hlds__typecheck_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__typecheck_info__wrapper_arg_2), ((MR_Word) check_hlds__typecheck_info__wrapper_arg_3));
    }
#line 2127 "check_hlds.typecheck_info.c"
    *check_hlds__typecheck_info__wrapper_arg_1 = ((MR_Box) (check_hlds__typecheck_info__conv0_HeadVar__1_1));
#line 2129 "check_hlds.typecheck_info.c"
  }
#line 2131 "check_hlds.typecheck_info.c"
}

#line 2134 "check_hlds.typecheck_info.c"
static MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____cons_type_info_0_0_10001(
#line 2137 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_1,
#line 2139 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2)
#line 2141 "check_hlds.typecheck_info.c"
{
#line 2143 "check_hlds.typecheck_info.c"
  {
#line 2145 "check_hlds.typecheck_info.c"
    MR_bool check_hlds__typecheck_info__succeeded;

#line 2148 "check_hlds.typecheck_info.c"
    {
#line 2150 "check_hlds.typecheck_info.c"
      check_hlds__typecheck_info__succeeded = check_hlds__typecheck_info____Unify____cons_type_info_0_0(((MR_Word) check_hlds__typecheck_info__wrapper_arg_1), ((MR_Word) check_hlds__typecheck_info__wrapper_arg_2));
    }
#line 2153 "check_hlds.typecheck_info.c"
    return check_hlds__typecheck_info__succeeded;
#line 2155 "check_hlds.typecheck_info.c"
  }
#line 2157 "check_hlds.typecheck_info.c"
}

#line 2160 "check_hlds.typecheck_info.c"
static void MR_CALL 
check_hlds__typecheck_info____Compare____cons_type_info_0_0_10001(
#line 2163 "check_hlds.typecheck_info.c"
  MR_Box * check_hlds__typecheck_info__wrapper_arg_1,
#line 2165 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2,
#line 2167 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_3)
#line 2169 "check_hlds.typecheck_info.c"
{
#line 2171 "check_hlds.typecheck_info.c"
  {
#line 2173 "check_hlds.typecheck_info.c"
    MR_Word check_hlds__typecheck_info__conv0_HeadVar__1_1;

#line 2176 "check_hlds.typecheck_info.c"
    {
#line 2178 "check_hlds.typecheck_info.c"
      check_hlds__typecheck_info____Compare____cons_type_info_0_0(&check_hlds__typecheck_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__typecheck_info__wrapper_arg_2), ((MR_Word) check_hlds__typecheck_info__wrapper_arg_3));
    }
#line 2181 "check_hlds.typecheck_info.c"
    *check_hlds__typecheck_info__wrapper_arg_1 = ((MR_Box) (check_hlds__typecheck_info__conv0_HeadVar__1_1));
#line 2183 "check_hlds.typecheck_info.c"
  }
#line 2185 "check_hlds.typecheck_info.c"
}

#line 2188 "check_hlds.typecheck_info.c"
static MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____cons_type_info_source_0_0_10001(
#line 2191 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_1,
#line 2193 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2)
#line 2195 "check_hlds.typecheck_info.c"
{
#line 2197 "check_hlds.typecheck_info.c"
  {
#line 2199 "check_hlds.typecheck_info.c"
    MR_bool check_hlds__typecheck_info__succeeded;

#line 2202 "check_hlds.typecheck_info.c"
    {
#line 2204 "check_hlds.typecheck_info.c"
      check_hlds__typecheck_info__succeeded = check_hlds__typecheck_info____Unify____cons_type_info_source_0_0(((MR_Word) check_hlds__typecheck_info__wrapper_arg_1), ((MR_Word) check_hlds__typecheck_info__wrapper_arg_2));
    }
#line 2207 "check_hlds.typecheck_info.c"
    return check_hlds__typecheck_info__succeeded;
#line 2209 "check_hlds.typecheck_info.c"
  }
#line 2211 "check_hlds.typecheck_info.c"
}

#line 2214 "check_hlds.typecheck_info.c"
static void MR_CALL 
check_hlds__typecheck_info____Compare____cons_type_info_source_0_0_10001(
#line 2217 "check_hlds.typecheck_info.c"
  MR_Box * check_hlds__typecheck_info__wrapper_arg_1,
#line 2219 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2,
#line 2221 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_3)
#line 2223 "check_hlds.typecheck_info.c"
{
#line 2225 "check_hlds.typecheck_info.c"
  {
#line 2227 "check_hlds.typecheck_info.c"
    MR_Word check_hlds__typecheck_info__conv0_HeadVar__1_1;

#line 2230 "check_hlds.typecheck_info.c"
    {
#line 2232 "check_hlds.typecheck_info.c"
      check_hlds__typecheck_info____Compare____cons_type_info_source_0_0(&check_hlds__typecheck_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__typecheck_info__wrapper_arg_2), ((MR_Word) check_hlds__typecheck_info__wrapper_arg_3));
    }
#line 2235 "check_hlds.typecheck_info.c"
    *check_hlds__typecheck_info__wrapper_arg_1 = ((MR_Box) (check_hlds__typecheck_info__conv0_HeadVar__1_1));
#line 2237 "check_hlds.typecheck_info.c"
  }
#line 2239 "check_hlds.typecheck_info.c"
}

#line 2242 "check_hlds.typecheck_info.c"
static MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____overloaded_symbol_0_0_10001(
#line 2245 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_1,
#line 2247 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2)
#line 2249 "check_hlds.typecheck_info.c"
{
#line 2251 "check_hlds.typecheck_info.c"
  {
#line 2253 "check_hlds.typecheck_info.c"
    MR_bool check_hlds__typecheck_info__succeeded;

#line 2256 "check_hlds.typecheck_info.c"
    {
#line 2258 "check_hlds.typecheck_info.c"
      check_hlds__typecheck_info__succeeded = check_hlds__typecheck_info____Unify____overloaded_symbol_0_0(((MR_Word) check_hlds__typecheck_info__wrapper_arg_1), ((MR_Word) check_hlds__typecheck_info__wrapper_arg_2));
    }
#line 2261 "check_hlds.typecheck_info.c"
    return check_hlds__typecheck_info__succeeded;
#line 2263 "check_hlds.typecheck_info.c"
  }
#line 2265 "check_hlds.typecheck_info.c"
}

#line 2268 "check_hlds.typecheck_info.c"
static void MR_CALL 
check_hlds__typecheck_info____Compare____overloaded_symbol_0_0_10001(
#line 2271 "check_hlds.typecheck_info.c"
  MR_Box * check_hlds__typecheck_info__wrapper_arg_1,
#line 2273 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2,
#line 2275 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_3)
#line 2277 "check_hlds.typecheck_info.c"
{
#line 2279 "check_hlds.typecheck_info.c"
  {
#line 2281 "check_hlds.typecheck_info.c"
    MR_Word check_hlds__typecheck_info__conv0_HeadVar__1_1;

#line 2284 "check_hlds.typecheck_info.c"
    {
#line 2286 "check_hlds.typecheck_info.c"
      check_hlds__typecheck_info____Compare____overloaded_symbol_0_0(&check_hlds__typecheck_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__typecheck_info__wrapper_arg_2), ((MR_Word) check_hlds__typecheck_info__wrapper_arg_3));
    }
#line 2289 "check_hlds.typecheck_info.c"
    *check_hlds__typecheck_info__wrapper_arg_1 = ((MR_Box) (check_hlds__typecheck_info__conv0_HeadVar__1_1));
#line 2291 "check_hlds.typecheck_info.c"
  }
#line 2293 "check_hlds.typecheck_info.c"
}

#line 2296 "check_hlds.typecheck_info.c"
static MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____overloaded_symbol_map_0_0_10001(
#line 2299 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_1,
#line 2301 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2)
#line 2303 "check_hlds.typecheck_info.c"
{
#line 2305 "check_hlds.typecheck_info.c"
  {
#line 2307 "check_hlds.typecheck_info.c"
    MR_bool check_hlds__typecheck_info__succeeded;

#line 2310 "check_hlds.typecheck_info.c"
    {
#line 2312 "check_hlds.typecheck_info.c"
      check_hlds__typecheck_info__succeeded = check_hlds__typecheck_info____Unify____overloaded_symbol_map_0_0(((MR_Word) check_hlds__typecheck_info__wrapper_arg_1), ((MR_Word) check_hlds__typecheck_info__wrapper_arg_2));
    }
#line 2315 "check_hlds.typecheck_info.c"
    return check_hlds__typecheck_info__succeeded;
#line 2317 "check_hlds.typecheck_info.c"
  }
#line 2319 "check_hlds.typecheck_info.c"
}

#line 2322 "check_hlds.typecheck_info.c"
static void MR_CALL 
check_hlds__typecheck_info____Compare____overloaded_symbol_map_0_0_10001(
#line 2325 "check_hlds.typecheck_info.c"
  MR_Box * check_hlds__typecheck_info__wrapper_arg_1,
#line 2327 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2,
#line 2329 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_3)
#line 2331 "check_hlds.typecheck_info.c"
{
#line 2333 "check_hlds.typecheck_info.c"
  {
#line 2335 "check_hlds.typecheck_info.c"
    MR_Word check_hlds__typecheck_info__conv0_HeadVar__1_1;

#line 2338 "check_hlds.typecheck_info.c"
    {
#line 2340 "check_hlds.typecheck_info.c"
      check_hlds__typecheck_info____Compare____overloaded_symbol_map_0_0(&check_hlds__typecheck_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__typecheck_info__wrapper_arg_2), ((MR_Word) check_hlds__typecheck_info__wrapper_arg_3));
    }
#line 2343 "check_hlds.typecheck_info.c"
    *check_hlds__typecheck_info__wrapper_arg_1 = ((MR_Box) (check_hlds__typecheck_info__conv0_HeadVar__1_1));
#line 2345 "check_hlds.typecheck_info.c"
  }
#line 2347 "check_hlds.typecheck_info.c"
}

#line 2350 "check_hlds.typecheck_info.c"
static MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____type_assign_0_0_10001(
#line 2353 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_1,
#line 2355 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2)
#line 2357 "check_hlds.typecheck_info.c"
{
#line 2359 "check_hlds.typecheck_info.c"
  {
#line 2361 "check_hlds.typecheck_info.c"
    MR_bool check_hlds__typecheck_info__succeeded;

#line 2364 "check_hlds.typecheck_info.c"
    {
#line 2366 "check_hlds.typecheck_info.c"
      check_hlds__typecheck_info__succeeded = check_hlds__typecheck_info____Unify____type_assign_0_0(((MR_Word) check_hlds__typecheck_info__wrapper_arg_1), ((MR_Word) check_hlds__typecheck_info__wrapper_arg_2));
    }
#line 2369 "check_hlds.typecheck_info.c"
    return check_hlds__typecheck_info__succeeded;
#line 2371 "check_hlds.typecheck_info.c"
  }
#line 2373 "check_hlds.typecheck_info.c"
}

#line 2376 "check_hlds.typecheck_info.c"
static void MR_CALL 
check_hlds__typecheck_info____Compare____type_assign_0_0_10001(
#line 2379 "check_hlds.typecheck_info.c"
  MR_Box * check_hlds__typecheck_info__wrapper_arg_1,
#line 2381 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2,
#line 2383 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_3)
#line 2385 "check_hlds.typecheck_info.c"
{
#line 2387 "check_hlds.typecheck_info.c"
  {
#line 2389 "check_hlds.typecheck_info.c"
    MR_Word check_hlds__typecheck_info__conv0_HeadVar__1_1;

#line 2392 "check_hlds.typecheck_info.c"
    {
#line 2394 "check_hlds.typecheck_info.c"
      check_hlds__typecheck_info____Compare____type_assign_0_0(&check_hlds__typecheck_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__typecheck_info__wrapper_arg_2), ((MR_Word) check_hlds__typecheck_info__wrapper_arg_3));
    }
#line 2397 "check_hlds.typecheck_info.c"
    *check_hlds__typecheck_info__wrapper_arg_1 = ((MR_Box) (check_hlds__typecheck_info__conv0_HeadVar__1_1));
#line 2399 "check_hlds.typecheck_info.c"
  }
#line 2401 "check_hlds.typecheck_info.c"
}

#line 2404 "check_hlds.typecheck_info.c"
static MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____type_assign_set_0_0_10001(
#line 2407 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_1,
#line 2409 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2)
#line 2411 "check_hlds.typecheck_info.c"
{
#line 2413 "check_hlds.typecheck_info.c"
  {
#line 2415 "check_hlds.typecheck_info.c"
    MR_bool check_hlds__typecheck_info__succeeded;

#line 2418 "check_hlds.typecheck_info.c"
    {
#line 2420 "check_hlds.typecheck_info.c"
      check_hlds__typecheck_info__succeeded = check_hlds__typecheck_info____Unify____type_assign_set_0_0(((MR_Word) check_hlds__typecheck_info__wrapper_arg_1), ((MR_Word) check_hlds__typecheck_info__wrapper_arg_2));
    }
#line 2423 "check_hlds.typecheck_info.c"
    return check_hlds__typecheck_info__succeeded;
#line 2425 "check_hlds.typecheck_info.c"
  }
#line 2427 "check_hlds.typecheck_info.c"
}

#line 2430 "check_hlds.typecheck_info.c"
static void MR_CALL 
check_hlds__typecheck_info____Compare____type_assign_set_0_0_10001(
#line 2433 "check_hlds.typecheck_info.c"
  MR_Box * check_hlds__typecheck_info__wrapper_arg_1,
#line 2435 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2,
#line 2437 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_3)
#line 2439 "check_hlds.typecheck_info.c"
{
#line 2441 "check_hlds.typecheck_info.c"
  {
#line 2443 "check_hlds.typecheck_info.c"
    MR_Word check_hlds__typecheck_info__conv0_HeadVar__1_1;

#line 2446 "check_hlds.typecheck_info.c"
    {
#line 2448 "check_hlds.typecheck_info.c"
      check_hlds__typecheck_info____Compare____type_assign_set_0_0(&check_hlds__typecheck_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__typecheck_info__wrapper_arg_2), ((MR_Word) check_hlds__typecheck_info__wrapper_arg_3));
    }
#line 2451 "check_hlds.typecheck_info.c"
    *check_hlds__typecheck_info__wrapper_arg_1 = ((MR_Box) (check_hlds__typecheck_info__conv0_HeadVar__1_1));
#line 2453 "check_hlds.typecheck_info.c"
  }
#line 2455 "check_hlds.typecheck_info.c"
}

#line 2458 "check_hlds.typecheck_info.c"
static MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____typecheck_info_0_0_10001(
#line 2461 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_1,
#line 2463 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2)
#line 2465 "check_hlds.typecheck_info.c"
{
#line 2467 "check_hlds.typecheck_info.c"
  {
#line 2469 "check_hlds.typecheck_info.c"
    MR_bool check_hlds__typecheck_info__succeeded;

#line 2472 "check_hlds.typecheck_info.c"
    {
#line 2474 "check_hlds.typecheck_info.c"
      check_hlds__typecheck_info__succeeded = check_hlds__typecheck_info____Unify____typecheck_info_0_0(((MR_Word) check_hlds__typecheck_info__wrapper_arg_1), ((MR_Word) check_hlds__typecheck_info__wrapper_arg_2));
    }
#line 2477 "check_hlds.typecheck_info.c"
    return check_hlds__typecheck_info__succeeded;
#line 2479 "check_hlds.typecheck_info.c"
  }
#line 2481 "check_hlds.typecheck_info.c"
}

#line 2484 "check_hlds.typecheck_info.c"
static void MR_CALL 
check_hlds__typecheck_info____Compare____typecheck_info_0_0_10001(
#line 2487 "check_hlds.typecheck_info.c"
  MR_Box * check_hlds__typecheck_info__wrapper_arg_1,
#line 2489 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2,
#line 2491 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_3)
#line 2493 "check_hlds.typecheck_info.c"
{
#line 2495 "check_hlds.typecheck_info.c"
  {
#line 2497 "check_hlds.typecheck_info.c"
    MR_Word check_hlds__typecheck_info__conv0_HeadVar__1_1;

#line 2500 "check_hlds.typecheck_info.c"
    {
#line 2502 "check_hlds.typecheck_info.c"
      check_hlds__typecheck_info____Compare____typecheck_info_0_0(&check_hlds__typecheck_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__typecheck_info__wrapper_arg_2), ((MR_Word) check_hlds__typecheck_info__wrapper_arg_3));
    }
#line 2505 "check_hlds.typecheck_info.c"
    *check_hlds__typecheck_info__wrapper_arg_1 = ((MR_Box) (check_hlds__typecheck_info__conv0_HeadVar__1_1));
#line 2507 "check_hlds.typecheck_info.c"
  }
#line 2509 "check_hlds.typecheck_info.c"
}

#line 2512 "check_hlds.typecheck_info.c"
static MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____typecheck_sub_info_0_0_10001(
#line 2515 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_1,
#line 2517 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2)
#line 2519 "check_hlds.typecheck_info.c"
{
#line 2521 "check_hlds.typecheck_info.c"
  {
#line 2523 "check_hlds.typecheck_info.c"
    MR_bool check_hlds__typecheck_info__succeeded;

#line 2526 "check_hlds.typecheck_info.c"
    {
#line 2528 "check_hlds.typecheck_info.c"
      check_hlds__typecheck_info__succeeded = check_hlds__typecheck_info____Unify____typecheck_sub_info_0_0(((MR_Word) check_hlds__typecheck_info__wrapper_arg_1), ((MR_Word) check_hlds__typecheck_info__wrapper_arg_2));
    }
#line 2531 "check_hlds.typecheck_info.c"
    return check_hlds__typecheck_info__succeeded;
#line 2533 "check_hlds.typecheck_info.c"
  }
#line 2535 "check_hlds.typecheck_info.c"
}

#line 2538 "check_hlds.typecheck_info.c"
static void MR_CALL 
check_hlds__typecheck_info____Compare____typecheck_sub_info_0_0_10001(
#line 2541 "check_hlds.typecheck_info.c"
  MR_Box * check_hlds__typecheck_info__wrapper_arg_1,
#line 2543 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2,
#line 2545 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_3)
#line 2547 "check_hlds.typecheck_info.c"
{
#line 2549 "check_hlds.typecheck_info.c"
  {
#line 2551 "check_hlds.typecheck_info.c"
    MR_Word check_hlds__typecheck_info__conv0_HeadVar__1_1;

#line 2554 "check_hlds.typecheck_info.c"
    {
#line 2556 "check_hlds.typecheck_info.c"
      check_hlds__typecheck_info____Compare____typecheck_sub_info_0_0(&check_hlds__typecheck_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__typecheck_info__wrapper_arg_2), ((MR_Word) check_hlds__typecheck_info__wrapper_arg_3));
    }
#line 2559 "check_hlds.typecheck_info.c"
    *check_hlds__typecheck_info__wrapper_arg_1 = ((MR_Box) (check_hlds__typecheck_info__conv0_HeadVar__1_1));
#line 2561 "check_hlds.typecheck_info.c"
  }
#line 2563 "check_hlds.typecheck_info.c"
}

#line 43 "typecheck_info.m"
void MR_CALL 
check_hlds__typecheck_info____Compare____typecheck_sub_info_0_0(
#line 43 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__HeadVar__1_1,
#line 43 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__HeadVar__2_2,
#line 43 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__HeadVar__3_3)
#line 43 "typecheck_info.m"
{
#line 43 "typecheck_info.m"
  {
#line 43 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 43 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__CastX_30 = (MR_Integer) check_hlds__typecheck_info__HeadVar__2_2;
#line 43 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__CastY_31 = (MR_Integer) check_hlds__typecheck_info__HeadVar__3_3;

#line 43 "typecheck_info.m"
    check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__CastX_30 == check_hlds__typecheck_info__CastY_31);
#line 43 "typecheck_info.m"
    if (check_hlds__typecheck_info__succeeded)
#line 2590 "check_hlds.typecheck_info.c"
      *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 0;
#line 43 "typecheck_info.m"
    else
#line 43 "typecheck_info.m"
      {
#line 43 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 0)));
#line 43 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 1)));
#line 43 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 2)));
#line 43 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 3)));
#line 43 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 4)));
#line 43 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 5)));
#line 43 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 6)));
#line 43 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 7)));
#line 43 "typecheck_info.m"
        MR_Integer check_hlds__typecheck_info__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 8)));
#line 43 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 0)));
#line 43 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 1)));
#line 43 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 2)));
#line 43 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 3)));
#line 43 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 4)));
#line 43 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 5)));
#line 43 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 6)));
#line 43 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 7)));
#line 43 "typecheck_info.m"
        MR_Integer check_hlds__typecheck_info__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 8)));
#line 43 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_22_22;

#line 43 "typecheck_info.m"
        {
#line 43 "typecheck_info.m"
          hlds__hlds_pred____Compare____pred_id_0_0(&check_hlds__typecheck_info__V_22_22, check_hlds__typecheck_info__V_4_4, check_hlds__typecheck_info__V_13_13);
        }
#line 2640 "check_hlds.typecheck_info.c"
        check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__V_22_22 == (MR_Integer) 0);
#line 43 "typecheck_info.m"
        check_hlds__typecheck_info__succeeded = !(check_hlds__typecheck_info__succeeded);
#line 43 "typecheck_info.m"
        if (check_hlds__typecheck_info__succeeded)
#line 43 "typecheck_info.m"
          *check_hlds__typecheck_info__HeadVar__1_1 = check_hlds__typecheck_info__V_22_22;
#line 43 "typecheck_info.m"
        else
#line 43 "typecheck_info.m"
          {
#line 43 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__V_23_23;

#line 43 "typecheck_info.m"
            {
#line 43 "typecheck_info.m"
              hlds__hlds_pred____Compare____import_status_0_0(&check_hlds__typecheck_info__V_23_23, check_hlds__typecheck_info__V_5_5, check_hlds__typecheck_info__V_14_14);
            }
#line 2660 "check_hlds.typecheck_info.c"
            check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__V_23_23 == (MR_Integer) 0);
#line 43 "typecheck_info.m"
            check_hlds__typecheck_info__succeeded = !(check_hlds__typecheck_info__succeeded);
#line 43 "typecheck_info.m"
            if (check_hlds__typecheck_info__succeeded)
#line 43 "typecheck_info.m"
              *check_hlds__typecheck_info__HeadVar__1_1 = check_hlds__typecheck_info__V_23_23;
#line 43 "typecheck_info.m"
            else
#line 43 "typecheck_info.m"
              {
#line 43 "typecheck_info.m"
                MR_Word check_hlds__typecheck_info__V_24_24;

#line 43 "typecheck_info.m"
                {
#line 43 "typecheck_info.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_markers_0, &check_hlds__typecheck_info__V_24_24, ((MR_Box) (check_hlds__typecheck_info__V_6_6)), ((MR_Box) (check_hlds__typecheck_info__V_15_15)));
                }
#line 2680 "check_hlds.typecheck_info.c"
                check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__V_24_24 == (MR_Integer) 0);
#line 43 "typecheck_info.m"
                check_hlds__typecheck_info__succeeded = !(check_hlds__typecheck_info__succeeded);
#line 43 "typecheck_info.m"
                if (check_hlds__typecheck_info__succeeded)
#line 43 "typecheck_info.m"
                  *check_hlds__typecheck_info__HeadVar__1_1 = check_hlds__typecheck_info__V_24_24;
#line 43 "typecheck_info.m"
                else
#line 43 "typecheck_info.m"
                  {
#line 43 "typecheck_info.m"
                    MR_Word check_hlds__typecheck_info__V_25_25;
#line 43 "typecheck_info.m"
                    MR_Integer check_hlds__typecheck_info__V_41_41 = (MR_Integer) check_hlds__typecheck_info__V_7_7;
#line 43 "typecheck_info.m"
                    MR_Integer check_hlds__typecheck_info__V_42_42 = (MR_Integer) check_hlds__typecheck_info__V_16_16;

#line 43 "typecheck_info.m"
                    {
#line 43 "typecheck_info.m"
                      mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__typecheck_info__V_25_25, check_hlds__typecheck_info__V_41_41, check_hlds__typecheck_info__V_42_42);
                    }
#line 2704 "check_hlds.typecheck_info.c"
                    check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__V_25_25 == (MR_Integer) 0);
#line 43 "typecheck_info.m"
                    check_hlds__typecheck_info__succeeded = !(check_hlds__typecheck_info__succeeded);
#line 43 "typecheck_info.m"
                    if (check_hlds__typecheck_info__succeeded)
#line 43 "typecheck_info.m"
                      *check_hlds__typecheck_info__HeadVar__1_1 = check_hlds__typecheck_info__V_25_25;
#line 43 "typecheck_info.m"
                    else
#line 43 "typecheck_info.m"
                      {
#line 43 "typecheck_info.m"
                        MR_Word check_hlds__typecheck_info__V_26_26;

#line 43 "typecheck_info.m"
                        {
#line 43 "typecheck_info.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__typecheck_info_scalar_common_1[11], &check_hlds__typecheck_info__V_26_26, ((MR_Box) (check_hlds__typecheck_info__V_8_8)), ((MR_Box) (check_hlds__typecheck_info__V_17_17)));
                        }
#line 2724 "check_hlds.typecheck_info.c"
                        check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__V_26_26 == (MR_Integer) 0);
#line 43 "typecheck_info.m"
                        check_hlds__typecheck_info__succeeded = !(check_hlds__typecheck_info__succeeded);
#line 43 "typecheck_info.m"
                        if (check_hlds__typecheck_info__succeeded)
#line 43 "typecheck_info.m"
                          *check_hlds__typecheck_info__HeadVar__1_1 = check_hlds__typecheck_info__V_26_26;
#line 43 "typecheck_info.m"
                        else
#line 43 "typecheck_info.m"
                          {
#line 43 "typecheck_info.m"
                            MR_Word check_hlds__typecheck_info__V_27_27;

#line 43 "typecheck_info.m"
                            {
#line 43 "typecheck_info.m"
                              mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__typecheck_info_scalar_common_1[12], &check_hlds__typecheck_info__V_27_27, ((MR_Box) (check_hlds__typecheck_info__V_9_9)), ((MR_Box) (check_hlds__typecheck_info__V_18_18)));
                            }
#line 2744 "check_hlds.typecheck_info.c"
                            check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__V_27_27 == (MR_Integer) 0);
#line 43 "typecheck_info.m"
                            check_hlds__typecheck_info__succeeded = !(check_hlds__typecheck_info__succeeded);
#line 43 "typecheck_info.m"
                            if (check_hlds__typecheck_info__succeeded)
#line 43 "typecheck_info.m"
                              *check_hlds__typecheck_info__HeadVar__1_1 = check_hlds__typecheck_info__V_27_27;
#line 43 "typecheck_info.m"
                            else
#line 43 "typecheck_info.m"
                              {
#line 43 "typecheck_info.m"
                                MR_Word check_hlds__typecheck_info__V_28_28;

#line 43 "typecheck_info.m"
                                {
#line 43 "typecheck_info.m"
                                  mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__typecheck_info_scalar_common_1[13], &check_hlds__typecheck_info__V_28_28, ((MR_Box) (check_hlds__typecheck_info__V_10_10)), ((MR_Box) (check_hlds__typecheck_info__V_19_19)));
                                }
#line 2764 "check_hlds.typecheck_info.c"
                                check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__V_28_28 == (MR_Integer) 0);
#line 43 "typecheck_info.m"
                                check_hlds__typecheck_info__succeeded = !(check_hlds__typecheck_info__succeeded);
#line 43 "typecheck_info.m"
                                if (check_hlds__typecheck_info__succeeded)
#line 43 "typecheck_info.m"
                                  *check_hlds__typecheck_info__HeadVar__1_1 = check_hlds__typecheck_info__V_28_28;
#line 43 "typecheck_info.m"
                                else
#line 43 "typecheck_info.m"
                                  {
#line 43 "typecheck_info.m"
                                    MR_Word check_hlds__typecheck_info__V_29_29;

#line 43 "typecheck_info.m"
                                    {
#line 43 "typecheck_info.m"
                                      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__typecheck_info_scalar_common_2[2], &check_hlds__typecheck_info__V_29_29, ((MR_Box) (check_hlds__typecheck_info__V_11_11)), ((MR_Box) (check_hlds__typecheck_info__V_20_20)));
                                    }
#line 2784 "check_hlds.typecheck_info.c"
                                    check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__V_29_29 == (MR_Integer) 0);
#line 43 "typecheck_info.m"
                                    check_hlds__typecheck_info__succeeded = !(check_hlds__typecheck_info__succeeded);
#line 43 "typecheck_info.m"
                                    if (check_hlds__typecheck_info__succeeded)
#line 43 "typecheck_info.m"
                                      *check_hlds__typecheck_info__HeadVar__1_1 = check_hlds__typecheck_info__V_29_29;
#line 43 "typecheck_info.m"
                                    else
#line 43 "typecheck_info.m"
                                      {
#line 43 "typecheck_info.m"
                                        mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__typecheck_info__HeadVar__1_1, check_hlds__typecheck_info__V_12_12, check_hlds__typecheck_info__V_21_21);
#line 43 "typecheck_info.m"
                                        return;
                                      }
#line 43 "typecheck_info.m"
                                  }
#line 43 "typecheck_info.m"
                              }
#line 43 "typecheck_info.m"
                          }
#line 43 "typecheck_info.m"
                      }
#line 43 "typecheck_info.m"
                  }
#line 43 "typecheck_info.m"
              }
#line 43 "typecheck_info.m"
          }
#line 43 "typecheck_info.m"
      }
#line 43 "typecheck_info.m"
  }
#line 43 "typecheck_info.m"
}

#line 43 "typecheck_info.m"
MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____typecheck_sub_info_0_0(
#line 43 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__HeadVar__1_1,
#line 43 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__HeadVar__2_2)
#line 43 "typecheck_info.m"
{
#line 43 "typecheck_info.m"
  {
#line 43 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 43 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__CastX_21 = (MR_Integer) check_hlds__typecheck_info__HeadVar__1_1;
#line 43 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__CastY_22 = (MR_Integer) check_hlds__typecheck_info__HeadVar__2_2;

#line 43 "typecheck_info.m"
    check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__CastX_21 == check_hlds__typecheck_info__CastY_22);
#line 43 "typecheck_info.m"
    if (check_hlds__typecheck_info__succeeded)
#line 43 "typecheck_info.m"
      check_hlds__typecheck_info__succeeded = MR_TRUE;
#line 43 "typecheck_info.m"
    else
#line 43 "typecheck_info.m"
      {
#line 43 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__TypeCtorInfo_25_25;
#line 43 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__TypeInfo_26_26;
#line 43 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__TypeInfo_27_27;
#line 43 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__TypeInfo_28_28;
#line 43 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__TypeInfo_29_29;
#line 43 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 0)));
#line 43 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 1)));
#line 43 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 2)));
#line 43 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 3)));
#line 43 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 4)));
#line 43 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 5)));
#line 43 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 6)));
#line 43 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 7)));
#line 43 "typecheck_info.m"
        MR_Integer check_hlds__typecheck_info__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 8)));
#line 43 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 0)));
#line 43 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 1)));
#line 43 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 2)));
#line 43 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 3)));
#line 43 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 4)));
#line 43 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 5)));
#line 43 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 6)));
#line 43 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 7)));
#line 43 "typecheck_info.m"
        MR_Integer check_hlds__typecheck_info__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 8)));

#line 2897 "check_hlds.typecheck_info.c"
        {
#line 2899 "check_hlds.typecheck_info.c"
          check_hlds__typecheck_info__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(check_hlds__typecheck_info__V_3_3, check_hlds__typecheck_info__V_12_12);
        }
#line 43 "typecheck_info.m"
        if (check_hlds__typecheck_info__succeeded)
#line 43 "typecheck_info.m"
          {
#line 2906 "check_hlds.typecheck_info.c"
            {
#line 2908 "check_hlds.typecheck_info.c"
              check_hlds__typecheck_info__succeeded = hlds__hlds_pred____Unify____import_status_0_0(check_hlds__typecheck_info__V_4_4, check_hlds__typecheck_info__V_13_13);
            }
#line 43 "typecheck_info.m"
            if (check_hlds__typecheck_info__succeeded)
#line 43 "typecheck_info.m"
              {
#line 2915 "check_hlds.typecheck_info.c"
                check_hlds__typecheck_info__TypeCtorInfo_25_25 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_markers_0;
#line 2917 "check_hlds.typecheck_info.c"
                {
#line 2919 "check_hlds.typecheck_info.c"
                  check_hlds__typecheck_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__typecheck_info__TypeCtorInfo_25_25, ((MR_Box) (check_hlds__typecheck_info__V_5_5)), ((MR_Box) (check_hlds__typecheck_info__V_14_14)));
                }
#line 43 "typecheck_info.m"
                if (check_hlds__typecheck_info__succeeded)
#line 43 "typecheck_info.m"
                  {
#line 2926 "check_hlds.typecheck_info.c"
                    check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__V_6_6 == check_hlds__typecheck_info__V_15_15);
#line 43 "typecheck_info.m"
                    if (check_hlds__typecheck_info__succeeded)
#line 43 "typecheck_info.m"
                      {
#line 2932 "check_hlds.typecheck_info.c"
                        check_hlds__typecheck_info__TypeInfo_26_26 = (MR_Word) &check_hlds__typecheck_info_scalar_common_1[11];
#line 2934 "check_hlds.typecheck_info.c"
                        {
#line 2936 "check_hlds.typecheck_info.c"
                          check_hlds__typecheck_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__typecheck_info__TypeInfo_26_26, ((MR_Box) (check_hlds__typecheck_info__V_7_7)), ((MR_Box) (check_hlds__typecheck_info__V_16_16)));
                        }
#line 43 "typecheck_info.m"
                        if (check_hlds__typecheck_info__succeeded)
#line 43 "typecheck_info.m"
                          {
#line 2943 "check_hlds.typecheck_info.c"
                            check_hlds__typecheck_info__TypeInfo_27_27 = (MR_Word) &check_hlds__typecheck_info_scalar_common_1[12];
#line 2945 "check_hlds.typecheck_info.c"
                            {
#line 2947 "check_hlds.typecheck_info.c"
                              check_hlds__typecheck_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__typecheck_info__TypeInfo_27_27, ((MR_Box) (check_hlds__typecheck_info__V_8_8)), ((MR_Box) (check_hlds__typecheck_info__V_17_17)));
                            }
#line 43 "typecheck_info.m"
                            if (check_hlds__typecheck_info__succeeded)
#line 43 "typecheck_info.m"
                              {
#line 2954 "check_hlds.typecheck_info.c"
                                check_hlds__typecheck_info__TypeInfo_28_28 = (MR_Word) &check_hlds__typecheck_info_scalar_common_1[13];
#line 2956 "check_hlds.typecheck_info.c"
                                {
#line 2958 "check_hlds.typecheck_info.c"
                                  check_hlds__typecheck_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__typecheck_info__TypeInfo_28_28, ((MR_Box) (check_hlds__typecheck_info__V_9_9)), ((MR_Box) (check_hlds__typecheck_info__V_18_18)));
                                }
#line 43 "typecheck_info.m"
                                if (check_hlds__typecheck_info__succeeded)
#line 43 "typecheck_info.m"
                                  {
#line 2965 "check_hlds.typecheck_info.c"
                                    check_hlds__typecheck_info__TypeInfo_29_29 = (MR_Word) &check_hlds__typecheck_info_scalar_common_2[2];
#line 2967 "check_hlds.typecheck_info.c"
                                    {
#line 2969 "check_hlds.typecheck_info.c"
                                      check_hlds__typecheck_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__typecheck_info__TypeInfo_29_29, ((MR_Box) (check_hlds__typecheck_info__V_10_10)), ((MR_Box) (check_hlds__typecheck_info__V_19_19)));
                                    }
#line 43 "typecheck_info.m"
                                    if (check_hlds__typecheck_info__succeeded)
#line 2974 "check_hlds.typecheck_info.c"
                                      check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__V_11_11 == check_hlds__typecheck_info__V_20_20);
#line 43 "typecheck_info.m"
                                  }
#line 43 "typecheck_info.m"
                              }
#line 43 "typecheck_info.m"
                          }
#line 43 "typecheck_info.m"
                      }
#line 43 "typecheck_info.m"
                  }
#line 43 "typecheck_info.m"
              }
#line 43 "typecheck_info.m"
          }
#line 43 "typecheck_info.m"
      }
#line 43 "typecheck_info.m"
    return check_hlds__typecheck_info__succeeded;
#line 43 "typecheck_info.m"
  }
#line 43 "typecheck_info.m"
}

#line 80 "typecheck_info.m"
void MR_CALL 
check_hlds__typecheck_info____Compare____typecheck_info_0_0(
#line 80 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__HeadVar__1_1,
#line 80 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__HeadVar__2_2,
#line 80 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__HeadVar__3_3)
#line 80 "typecheck_info.m"
{
#line 80 "typecheck_info.m"
  {
#line 80 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 80 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__CastX_27 = (MR_Integer) check_hlds__typecheck_info__HeadVar__2_2;
#line 80 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__CastY_28 = (MR_Integer) check_hlds__typecheck_info__HeadVar__3_3;

#line 80 "typecheck_info.m"
    check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__CastX_27 == check_hlds__typecheck_info__CastY_28);
#line 80 "typecheck_info.m"
    if (check_hlds__typecheck_info__succeeded)
#line 3023 "check_hlds.typecheck_info.c"
      *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 0;
#line 80 "typecheck_info.m"
    else
#line 80 "typecheck_info.m"
      {
#line 80 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 0)));
#line 80 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 1)));
#line 80 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 2)));
#line 80 "typecheck_info.m"
        MR_Integer check_hlds__typecheck_info__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 3)));
#line 80 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 4)));
#line 80 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 5)));
#line 80 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 6)));
#line 80 "typecheck_info.m"
        MR_Integer check_hlds__typecheck_info__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 7)));
#line 80 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 0)));
#line 80 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 1)));
#line 80 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 2)));
#line 80 "typecheck_info.m"
        MR_Integer check_hlds__typecheck_info__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 3)));
#line 80 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 4)));
#line 80 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 5)));
#line 80 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 6)));
#line 80 "typecheck_info.m"
        MR_Integer check_hlds__typecheck_info__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 7)));
#line 80 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_20_20;

#line 80 "typecheck_info.m"
        {
#line 80 "typecheck_info.m"
          check_hlds__typecheck_info____Compare____typecheck_sub_info_0_0(&check_hlds__typecheck_info__V_20_20, check_hlds__typecheck_info__V_4_4, check_hlds__typecheck_info__V_12_12);
        }
#line 3069 "check_hlds.typecheck_info.c"
        check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__V_20_20 == (MR_Integer) 0);
#line 80 "typecheck_info.m"
        check_hlds__typecheck_info__succeeded = !(check_hlds__typecheck_info__succeeded);
#line 80 "typecheck_info.m"
        if (check_hlds__typecheck_info__succeeded)
#line 80 "typecheck_info.m"
          *check_hlds__typecheck_info__HeadVar__1_1 = check_hlds__typecheck_info__V_20_20;
#line 80 "typecheck_info.m"
        else
#line 80 "typecheck_info.m"
          {
#line 80 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__V_21_21;

#line 80 "typecheck_info.m"
            {
#line 80 "typecheck_info.m"
              hlds__hlds_module____Compare____module_info_0_0(&check_hlds__typecheck_info__V_21_21, check_hlds__typecheck_info__V_5_5, check_hlds__typecheck_info__V_13_13);
            }
#line 3089 "check_hlds.typecheck_info.c"
            check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__V_21_21 == (MR_Integer) 0);
#line 80 "typecheck_info.m"
            check_hlds__typecheck_info__succeeded = !(check_hlds__typecheck_info__succeeded);
#line 80 "typecheck_info.m"
            if (check_hlds__typecheck_info__succeeded)
#line 80 "typecheck_info.m"
              *check_hlds__typecheck_info__HeadVar__1_1 = check_hlds__typecheck_info__V_21_21;
#line 80 "typecheck_info.m"
            else
#line 80 "typecheck_info.m"
              {
#line 80 "typecheck_info.m"
                MR_Word check_hlds__typecheck_info__V_22_22;

#line 80 "typecheck_info.m"
                {
#line 80 "typecheck_info.m"
                  hlds__hlds_pred____Compare____call_id_0_0(&check_hlds__typecheck_info__V_22_22, check_hlds__typecheck_info__V_6_6, check_hlds__typecheck_info__V_14_14);
                }
#line 3109 "check_hlds.typecheck_info.c"
                check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__V_22_22 == (MR_Integer) 0);
#line 80 "typecheck_info.m"
                check_hlds__typecheck_info__succeeded = !(check_hlds__typecheck_info__succeeded);
#line 80 "typecheck_info.m"
                if (check_hlds__typecheck_info__succeeded)
#line 80 "typecheck_info.m"
                  *check_hlds__typecheck_info__HeadVar__1_1 = check_hlds__typecheck_info__V_22_22;
#line 80 "typecheck_info.m"
                else
#line 80 "typecheck_info.m"
                  {
#line 80 "typecheck_info.m"
                    MR_Word check_hlds__typecheck_info__V_23_23;

#line 80 "typecheck_info.m"
                    {
#line 80 "typecheck_info.m"
                      mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__typecheck_info__V_23_23, check_hlds__typecheck_info__V_7_7, check_hlds__typecheck_info__V_15_15);
                    }
#line 3129 "check_hlds.typecheck_info.c"
                    check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__V_23_23 == (MR_Integer) 0);
#line 80 "typecheck_info.m"
                    check_hlds__typecheck_info__succeeded = !(check_hlds__typecheck_info__succeeded);
#line 80 "typecheck_info.m"
                    if (check_hlds__typecheck_info__succeeded)
#line 80 "typecheck_info.m"
                      *check_hlds__typecheck_info__HeadVar__1_1 = check_hlds__typecheck_info__V_23_23;
#line 80 "typecheck_info.m"
                    else
#line 80 "typecheck_info.m"
                      {
#line 80 "typecheck_info.m"
                        MR_Word check_hlds__typecheck_info__V_24_24;

#line 80 "typecheck_info.m"
                        {
#line 80 "typecheck_info.m"
                          mercury__term____Compare____context_0_0(&check_hlds__typecheck_info__V_24_24, check_hlds__typecheck_info__V_8_8, check_hlds__typecheck_info__V_16_16);
                        }
#line 3149 "check_hlds.typecheck_info.c"
                        check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__V_24_24 == (MR_Integer) 0);
#line 80 "typecheck_info.m"
                        check_hlds__typecheck_info__succeeded = !(check_hlds__typecheck_info__succeeded);
#line 80 "typecheck_info.m"
                        if (check_hlds__typecheck_info__succeeded)
#line 80 "typecheck_info.m"
                          *check_hlds__typecheck_info__HeadVar__1_1 = check_hlds__typecheck_info__V_24_24;
#line 80 "typecheck_info.m"
                        else
#line 80 "typecheck_info.m"
                          {
#line 80 "typecheck_info.m"
                            MR_Word check_hlds__typecheck_info__V_25_25;

#line 80 "typecheck_info.m"
                            {
#line 80 "typecheck_info.m"
                              hlds__hlds_goal____Compare____unify_context_0_0(&check_hlds__typecheck_info__V_25_25, check_hlds__typecheck_info__V_9_9, check_hlds__typecheck_info__V_17_17);
                            }
#line 3169 "check_hlds.typecheck_info.c"
                            check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__V_25_25 == (MR_Integer) 0);
#line 80 "typecheck_info.m"
                            check_hlds__typecheck_info__succeeded = !(check_hlds__typecheck_info__succeeded);
#line 80 "typecheck_info.m"
                            if (check_hlds__typecheck_info__succeeded)
#line 80 "typecheck_info.m"
                              *check_hlds__typecheck_info__HeadVar__1_1 = check_hlds__typecheck_info__V_25_25;
#line 80 "typecheck_info.m"
                            else
#line 80 "typecheck_info.m"
                              {
#line 80 "typecheck_info.m"
                                MR_Word check_hlds__typecheck_info__V_26_26;

#line 80 "typecheck_info.m"
                                {
#line 80 "typecheck_info.m"
                                  mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__typecheck_info_scalar_common_1[10], &check_hlds__typecheck_info__V_26_26, ((MR_Box) (check_hlds__typecheck_info__V_10_10)), ((MR_Box) (check_hlds__typecheck_info__V_18_18)));
                                }
#line 3189 "check_hlds.typecheck_info.c"
                                check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__V_26_26 == (MR_Integer) 0);
#line 80 "typecheck_info.m"
                                check_hlds__typecheck_info__succeeded = !(check_hlds__typecheck_info__succeeded);
#line 80 "typecheck_info.m"
                                if (check_hlds__typecheck_info__succeeded)
#line 80 "typecheck_info.m"
                                  *check_hlds__typecheck_info__HeadVar__1_1 = check_hlds__typecheck_info__V_26_26;
#line 80 "typecheck_info.m"
                                else
#line 80 "typecheck_info.m"
                                  {
#line 80 "typecheck_info.m"
                                    mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__typecheck_info__HeadVar__1_1, check_hlds__typecheck_info__V_11_11, check_hlds__typecheck_info__V_19_19);
#line 80 "typecheck_info.m"
                                    return;
                                  }
#line 80 "typecheck_info.m"
                              }
#line 80 "typecheck_info.m"
                          }
#line 80 "typecheck_info.m"
                      }
#line 80 "typecheck_info.m"
                  }
#line 80 "typecheck_info.m"
              }
#line 80 "typecheck_info.m"
          }
#line 80 "typecheck_info.m"
      }
#line 80 "typecheck_info.m"
  }
#line 80 "typecheck_info.m"
}

#line 80 "typecheck_info.m"
MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____typecheck_info_0_0(
#line 80 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__HeadVar__1_1,
#line 80 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__HeadVar__2_2)
#line 80 "typecheck_info.m"
{
#line 80 "typecheck_info.m"
  {
#line 80 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 80 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__CastX_19 = (MR_Integer) check_hlds__typecheck_info__HeadVar__1_1;
#line 80 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__CastY_20 = (MR_Integer) check_hlds__typecheck_info__HeadVar__2_2;

#line 80 "typecheck_info.m"
    check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__CastX_19 == check_hlds__typecheck_info__CastY_20);
#line 80 "typecheck_info.m"
    if (check_hlds__typecheck_info__succeeded)
#line 80 "typecheck_info.m"
      check_hlds__typecheck_info__succeeded = MR_TRUE;
#line 80 "typecheck_info.m"
    else
#line 80 "typecheck_info.m"
      {
#line 80 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__TypeInfo_25_25;
#line 80 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 0)));
#line 80 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 1)));
#line 80 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 2)));
#line 80 "typecheck_info.m"
        MR_Integer check_hlds__typecheck_info__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 3)));
#line 80 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 4)));
#line 80 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 5)));
#line 80 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 6)));
#line 80 "typecheck_info.m"
        MR_Integer check_hlds__typecheck_info__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 7)));
#line 80 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 0)));
#line 80 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 1)));
#line 80 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 2)));
#line 80 "typecheck_info.m"
        MR_Integer check_hlds__typecheck_info__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 3)));
#line 80 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 4)));
#line 80 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 5)));
#line 80 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 6)));
#line 80 "typecheck_info.m"
        MR_Integer check_hlds__typecheck_info__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 7)));

#line 3288 "check_hlds.typecheck_info.c"
        {
#line 3290 "check_hlds.typecheck_info.c"
          check_hlds__typecheck_info__succeeded = check_hlds__typecheck_info____Unify____typecheck_sub_info_0_0(check_hlds__typecheck_info__V_3_3, check_hlds__typecheck_info__V_11_11);
        }
#line 80 "typecheck_info.m"
        if (check_hlds__typecheck_info__succeeded)
#line 80 "typecheck_info.m"
          {
#line 3297 "check_hlds.typecheck_info.c"
            {
#line 3299 "check_hlds.typecheck_info.c"
              check_hlds__typecheck_info__succeeded = hlds__hlds_module____Unify____module_info_0_0(check_hlds__typecheck_info__V_4_4, check_hlds__typecheck_info__V_12_12);
            }
#line 80 "typecheck_info.m"
            if (check_hlds__typecheck_info__succeeded)
#line 80 "typecheck_info.m"
              {
#line 3306 "check_hlds.typecheck_info.c"
                {
#line 3308 "check_hlds.typecheck_info.c"
                  check_hlds__typecheck_info__succeeded = hlds__hlds_pred____Unify____call_id_0_0(check_hlds__typecheck_info__V_5_5, check_hlds__typecheck_info__V_13_13);
                }
#line 80 "typecheck_info.m"
                if (check_hlds__typecheck_info__succeeded)
#line 80 "typecheck_info.m"
                  {
#line 3315 "check_hlds.typecheck_info.c"
                    check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__V_6_6 == check_hlds__typecheck_info__V_14_14);
#line 80 "typecheck_info.m"
                    if (check_hlds__typecheck_info__succeeded)
#line 80 "typecheck_info.m"
                      {
#line 3321 "check_hlds.typecheck_info.c"
                        {
#line 3323 "check_hlds.typecheck_info.c"
                          check_hlds__typecheck_info__succeeded = mercury__term____Unify____context_0_0(check_hlds__typecheck_info__V_7_7, check_hlds__typecheck_info__V_15_15);
                        }
#line 80 "typecheck_info.m"
                        if (check_hlds__typecheck_info__succeeded)
#line 80 "typecheck_info.m"
                          {
#line 3330 "check_hlds.typecheck_info.c"
                            {
#line 3332 "check_hlds.typecheck_info.c"
                              check_hlds__typecheck_info__succeeded = hlds__hlds_goal____Unify____unify_context_0_0(check_hlds__typecheck_info__V_8_8, check_hlds__typecheck_info__V_16_16);
                            }
#line 80 "typecheck_info.m"
                            if (check_hlds__typecheck_info__succeeded)
#line 80 "typecheck_info.m"
                              {
#line 3339 "check_hlds.typecheck_info.c"
                                check_hlds__typecheck_info__TypeInfo_25_25 = (MR_Word) &check_hlds__typecheck_info_scalar_common_1[10];
#line 3341 "check_hlds.typecheck_info.c"
                                {
#line 3343 "check_hlds.typecheck_info.c"
                                  check_hlds__typecheck_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__typecheck_info__TypeInfo_25_25, ((MR_Box) (check_hlds__typecheck_info__V_9_9)), ((MR_Box) (check_hlds__typecheck_info__V_17_17)));
                                }
#line 80 "typecheck_info.m"
                                if (check_hlds__typecheck_info__succeeded)
#line 3348 "check_hlds.typecheck_info.c"
                                  check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__V_10_10 == check_hlds__typecheck_info__V_18_18);
#line 80 "typecheck_info.m"
                              }
#line 80 "typecheck_info.m"
                          }
#line 80 "typecheck_info.m"
                      }
#line 80 "typecheck_info.m"
                  }
#line 80 "typecheck_info.m"
              }
#line 80 "typecheck_info.m"
          }
#line 80 "typecheck_info.m"
      }
#line 80 "typecheck_info.m"
    return check_hlds__typecheck_info__succeeded;
#line 80 "typecheck_info.m"
  }
#line 80 "typecheck_info.m"
}

#line 227 "typecheck_info.m"
void MR_CALL 
check_hlds__typecheck_info____Compare____type_assign_set_0_0(
#line 227 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__HeadVar__1_1,
#line 227 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__HeadVar__2_2,
#line 227 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__HeadVar__3_3)
#line 227 "typecheck_info.m"
{
#line 227 "typecheck_info.m"
  {
#line 227 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 227 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__Cast_HeadVar1_4 = check_hlds__typecheck_info__HeadVar__2_2;
#line 227 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__Cast_HeadVar2_5 = check_hlds__typecheck_info__HeadVar__3_3;

#line 227 "typecheck_info.m"
    {
#line 227 "typecheck_info.m"
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__typecheck_info_scalar_common_1[10], check_hlds__typecheck_info__HeadVar__1_1, ((MR_Box) (check_hlds__typecheck_info__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__typecheck_info__Cast_HeadVar2_5)));
#line 227 "typecheck_info.m"
      return;
    }
#line 227 "typecheck_info.m"
  }
#line 227 "typecheck_info.m"
}

#line 227 "typecheck_info.m"
MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____type_assign_set_0_0(
#line 227 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__HeadVar__1_1,
#line 227 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__HeadVar__2_2)
#line 227 "typecheck_info.m"
{
#line 227 "typecheck_info.m"
  {
#line 227 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 227 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__Cast_HeadVar1_3 = check_hlds__typecheck_info__HeadVar__1_1;
#line 227 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__Cast_HeadVar2_4 = check_hlds__typecheck_info__HeadVar__2_2;

#line 227 "typecheck_info.m"
    {
#line 227 "typecheck_info.m"
      return check_hlds__typecheck_info__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__typecheck_info_scalar_common_1[10], ((MR_Box) (check_hlds__typecheck_info__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__typecheck_info__Cast_HeadVar2_4)));
    }
#line 227 "typecheck_info.m"
    return check_hlds__typecheck_info__succeeded;
#line 227 "typecheck_info.m"
  }
#line 227 "typecheck_info.m"
}

#line 229 "typecheck_info.m"
void MR_CALL 
check_hlds__typecheck_info____Compare____type_assign_0_0(
#line 229 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__HeadVar__1_1,
#line 229 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__HeadVar__2_2,
#line 229 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__HeadVar__3_3)
#line 229 "typecheck_info.m"
{
#line 229 "typecheck_info.m"
  {
#line 229 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 229 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__CastX_24 = (MR_Integer) check_hlds__typecheck_info__HeadVar__2_2;
#line 229 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__CastY_25 = (MR_Integer) check_hlds__typecheck_info__HeadVar__3_3;

#line 229 "typecheck_info.m"
    check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__CastX_24 == check_hlds__typecheck_info__CastY_25);
#line 229 "typecheck_info.m"
    if (check_hlds__typecheck_info__succeeded)
#line 3457 "check_hlds.typecheck_info.c"
      *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 0;
#line 229 "typecheck_info.m"
    else
#line 229 "typecheck_info.m"
      {
#line 229 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 0)));
#line 229 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 1)));
#line 229 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 2)));
#line 229 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 3)));
#line 229 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 4)));
#line 229 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 5)));
#line 229 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 6)));
#line 229 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 0)));
#line 229 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 1)));
#line 229 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 2)));
#line 229 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 3)));
#line 229 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 4)));
#line 229 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 5)));
#line 229 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 6)));
#line 229 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_18_18;

#line 229 "typecheck_info.m"
        {
#line 229 "typecheck_info.m"
          mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_vartypes_0, &check_hlds__typecheck_info__V_18_18, ((MR_Box) (check_hlds__typecheck_info__V_4_4)), ((MR_Box) (check_hlds__typecheck_info__V_11_11)));
        }
#line 3499 "check_hlds.typecheck_info.c"
        check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__V_18_18 == (MR_Integer) 0);
#line 229 "typecheck_info.m"
        check_hlds__typecheck_info__succeeded = !(check_hlds__typecheck_info__succeeded);
#line 229 "typecheck_info.m"
        if (check_hlds__typecheck_info__succeeded)
#line 229 "typecheck_info.m"
          *check_hlds__typecheck_info__HeadVar__1_1 = check_hlds__typecheck_info__V_18_18;
#line 229 "typecheck_info.m"
        else
#line 229 "typecheck_info.m"
          {
#line 229 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__V_19_19;

#line 229 "typecheck_info.m"
            {
#line 229 "typecheck_info.m"
              mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__typecheck_info_scalar_common_1[6], &check_hlds__typecheck_info__V_19_19, ((MR_Box) (check_hlds__typecheck_info__V_5_5)), ((MR_Box) (check_hlds__typecheck_info__V_12_12)));
            }
#line 3519 "check_hlds.typecheck_info.c"
            check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__V_19_19 == (MR_Integer) 0);
#line 229 "typecheck_info.m"
            check_hlds__typecheck_info__succeeded = !(check_hlds__typecheck_info__succeeded);
#line 229 "typecheck_info.m"
            if (check_hlds__typecheck_info__succeeded)
#line 229 "typecheck_info.m"
              *check_hlds__typecheck_info__HeadVar__1_1 = check_hlds__typecheck_info__V_19_19;
#line 229 "typecheck_info.m"
            else
#line 229 "typecheck_info.m"
              {
#line 229 "typecheck_info.m"
                MR_Word check_hlds__typecheck_info__V_20_20;

#line 229 "typecheck_info.m"
                {
#line 229 "typecheck_info.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__typecheck_info_scalar_common_1[7], &check_hlds__typecheck_info__V_20_20, ((MR_Box) (check_hlds__typecheck_info__V_6_6)), ((MR_Box) (check_hlds__typecheck_info__V_13_13)));
                }
#line 3539 "check_hlds.typecheck_info.c"
                check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__V_20_20 == (MR_Integer) 0);
#line 229 "typecheck_info.m"
                check_hlds__typecheck_info__succeeded = !(check_hlds__typecheck_info__succeeded);
#line 229 "typecheck_info.m"
                if (check_hlds__typecheck_info__succeeded)
#line 229 "typecheck_info.m"
                  *check_hlds__typecheck_info__HeadVar__1_1 = check_hlds__typecheck_info__V_20_20;
#line 229 "typecheck_info.m"
                else
#line 229 "typecheck_info.m"
                  {
#line 229 "typecheck_info.m"
                    MR_Word check_hlds__typecheck_info__V_21_21;

#line 229 "typecheck_info.m"
                    {
#line 229 "typecheck_info.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__typecheck_info_scalar_common_2[3], &check_hlds__typecheck_info__V_21_21, ((MR_Box) (check_hlds__typecheck_info__V_7_7)), ((MR_Box) (check_hlds__typecheck_info__V_14_14)));
                    }
#line 3559 "check_hlds.typecheck_info.c"
                    check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__V_21_21 == (MR_Integer) 0);
#line 229 "typecheck_info.m"
                    check_hlds__typecheck_info__succeeded = !(check_hlds__typecheck_info__succeeded);
#line 229 "typecheck_info.m"
                    if (check_hlds__typecheck_info__succeeded)
#line 229 "typecheck_info.m"
                      *check_hlds__typecheck_info__HeadVar__1_1 = check_hlds__typecheck_info__V_21_21;
#line 229 "typecheck_info.m"
                    else
#line 229 "typecheck_info.m"
                      {
#line 229 "typecheck_info.m"
                        MR_Word check_hlds__typecheck_info__V_22_22;

#line 229 "typecheck_info.m"
                        {
#line 229 "typecheck_info.m"
                          hlds__hlds_data____Compare____hlds_constraints_0_0(&check_hlds__typecheck_info__V_22_22, check_hlds__typecheck_info__V_8_8, check_hlds__typecheck_info__V_15_15);
                        }
#line 3579 "check_hlds.typecheck_info.c"
                        check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__V_22_22 == (MR_Integer) 0);
#line 229 "typecheck_info.m"
                        check_hlds__typecheck_info__succeeded = !(check_hlds__typecheck_info__succeeded);
#line 229 "typecheck_info.m"
                        if (check_hlds__typecheck_info__succeeded)
#line 229 "typecheck_info.m"
                          *check_hlds__typecheck_info__HeadVar__1_1 = check_hlds__typecheck_info__V_22_22;
#line 229 "typecheck_info.m"
                        else
#line 229 "typecheck_info.m"
                          {
#line 229 "typecheck_info.m"
                            MR_Word check_hlds__typecheck_info__V_23_23;

#line 229 "typecheck_info.m"
                            {
#line 229 "typecheck_info.m"
                              mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__typecheck_info_scalar_common_2[4], &check_hlds__typecheck_info__V_23_23, ((MR_Box) (check_hlds__typecheck_info__V_9_9)), ((MR_Box) (check_hlds__typecheck_info__V_16_16)));
                            }
#line 3599 "check_hlds.typecheck_info.c"
                            check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__V_23_23 == (MR_Integer) 0);
#line 229 "typecheck_info.m"
                            check_hlds__typecheck_info__succeeded = !(check_hlds__typecheck_info__succeeded);
#line 229 "typecheck_info.m"
                            if (check_hlds__typecheck_info__succeeded)
#line 229 "typecheck_info.m"
                              *check_hlds__typecheck_info__HeadVar__1_1 = check_hlds__typecheck_info__V_23_23;
#line 229 "typecheck_info.m"
                            else
#line 229 "typecheck_info.m"
                              {
#line 229 "typecheck_info.m"
                                {
#line 229 "typecheck_info.m"
                                  mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__typecheck_info_scalar_common_2[0], check_hlds__typecheck_info__HeadVar__1_1, ((MR_Box) (check_hlds__typecheck_info__V_10_10)), ((MR_Box) (check_hlds__typecheck_info__V_17_17)));
#line 229 "typecheck_info.m"
                                  return;
                                }
#line 229 "typecheck_info.m"
                              }
#line 229 "typecheck_info.m"
                          }
#line 229 "typecheck_info.m"
                      }
#line 229 "typecheck_info.m"
                  }
#line 229 "typecheck_info.m"
              }
#line 229 "typecheck_info.m"
          }
#line 229 "typecheck_info.m"
      }
#line 229 "typecheck_info.m"
  }
#line 229 "typecheck_info.m"
}

#line 229 "typecheck_info.m"
MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____type_assign_0_0(
#line 229 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__HeadVar__1_1,
#line 229 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__HeadVar__2_2)
#line 229 "typecheck_info.m"
{
#line 229 "typecheck_info.m"
  {
#line 229 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 229 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__CastX_17 = (MR_Integer) check_hlds__typecheck_info__HeadVar__1_1;
#line 229 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__CastY_18 = (MR_Integer) check_hlds__typecheck_info__HeadVar__2_2;

#line 229 "typecheck_info.m"
    check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__CastX_17 == check_hlds__typecheck_info__CastY_18);
#line 229 "typecheck_info.m"
    if (check_hlds__typecheck_info__succeeded)
#line 229 "typecheck_info.m"
      check_hlds__typecheck_info__succeeded = MR_TRUE;
#line 229 "typecheck_info.m"
    else
#line 229 "typecheck_info.m"
      {
#line 229 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__TypeInfo_20_20;
#line 229 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__TypeInfo_21_21;
#line 229 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__TypeInfo_22_22;
#line 229 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__TypeInfo_24_24;
#line 229 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__TypeInfo_25_25;
#line 229 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 0)));
#line 229 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 1)));
#line 229 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 2)));
#line 229 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 3)));
#line 229 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 4)));
#line 229 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 5)));
#line 229 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 6)));
#line 229 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 0)));
#line 229 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 1)));
#line 229 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 2)));
#line 229 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 3)));
#line 229 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 4)));
#line 229 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 5)));
#line 229 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 6)));

#line 3704 "check_hlds.typecheck_info.c"
        {
#line 3706 "check_hlds.typecheck_info.c"
          check_hlds__typecheck_info__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_vartypes_0, ((MR_Box) (check_hlds__typecheck_info__V_3_3)), ((MR_Box) (check_hlds__typecheck_info__V_10_10)));
        }
#line 229 "typecheck_info.m"
        if (check_hlds__typecheck_info__succeeded)
#line 229 "typecheck_info.m"
          {
#line 3713 "check_hlds.typecheck_info.c"
            check_hlds__typecheck_info__TypeInfo_20_20 = (MR_Word) &check_hlds__typecheck_info_scalar_common_1[6];
#line 3715 "check_hlds.typecheck_info.c"
            {
#line 3717 "check_hlds.typecheck_info.c"
              check_hlds__typecheck_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__typecheck_info__TypeInfo_20_20, ((MR_Box) (check_hlds__typecheck_info__V_4_4)), ((MR_Box) (check_hlds__typecheck_info__V_11_11)));
            }
#line 229 "typecheck_info.m"
            if (check_hlds__typecheck_info__succeeded)
#line 229 "typecheck_info.m"
              {
#line 3724 "check_hlds.typecheck_info.c"
                check_hlds__typecheck_info__TypeInfo_21_21 = (MR_Word) &check_hlds__typecheck_info_scalar_common_1[7];
#line 3726 "check_hlds.typecheck_info.c"
                {
#line 3728 "check_hlds.typecheck_info.c"
                  check_hlds__typecheck_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__typecheck_info__TypeInfo_21_21, ((MR_Box) (check_hlds__typecheck_info__V_5_5)), ((MR_Box) (check_hlds__typecheck_info__V_12_12)));
                }
#line 229 "typecheck_info.m"
                if (check_hlds__typecheck_info__succeeded)
#line 229 "typecheck_info.m"
                  {
#line 3735 "check_hlds.typecheck_info.c"
                    check_hlds__typecheck_info__TypeInfo_22_22 = (MR_Word) &check_hlds__typecheck_info_scalar_common_2[3];
#line 3737 "check_hlds.typecheck_info.c"
                    {
#line 3739 "check_hlds.typecheck_info.c"
                      check_hlds__typecheck_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__typecheck_info__TypeInfo_22_22, ((MR_Box) (check_hlds__typecheck_info__V_6_6)), ((MR_Box) (check_hlds__typecheck_info__V_13_13)));
                    }
#line 229 "typecheck_info.m"
                    if (check_hlds__typecheck_info__succeeded)
#line 229 "typecheck_info.m"
                      {
#line 3746 "check_hlds.typecheck_info.c"
                        {
#line 3748 "check_hlds.typecheck_info.c"
                          check_hlds__typecheck_info__succeeded = hlds__hlds_data____Unify____hlds_constraints_0_0(check_hlds__typecheck_info__V_7_7, check_hlds__typecheck_info__V_14_14);
                        }
#line 229 "typecheck_info.m"
                        if (check_hlds__typecheck_info__succeeded)
#line 229 "typecheck_info.m"
                          {
#line 3755 "check_hlds.typecheck_info.c"
                            check_hlds__typecheck_info__TypeInfo_24_24 = (MR_Word) &check_hlds__typecheck_info_scalar_common_2[4];
#line 3757 "check_hlds.typecheck_info.c"
                            {
#line 3759 "check_hlds.typecheck_info.c"
                              check_hlds__typecheck_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__typecheck_info__TypeInfo_24_24, ((MR_Box) (check_hlds__typecheck_info__V_8_8)), ((MR_Box) (check_hlds__typecheck_info__V_15_15)));
                            }
#line 229 "typecheck_info.m"
                            if (check_hlds__typecheck_info__succeeded)
#line 229 "typecheck_info.m"
                              {
#line 3766 "check_hlds.typecheck_info.c"
                                check_hlds__typecheck_info__TypeInfo_25_25 = (MR_Word) &check_hlds__typecheck_info_scalar_common_2[0];
#line 3768 "check_hlds.typecheck_info.c"
                                {
#line 3770 "check_hlds.typecheck_info.c"
                                  return check_hlds__typecheck_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__typecheck_info__TypeInfo_25_25, ((MR_Box) (check_hlds__typecheck_info__V_9_9)), ((MR_Box) (check_hlds__typecheck_info__V_16_16)));
                                }
#line 229 "typecheck_info.m"
                              }
#line 229 "typecheck_info.m"
                          }
#line 229 "typecheck_info.m"
                      }
#line 229 "typecheck_info.m"
                  }
#line 229 "typecheck_info.m"
              }
#line 229 "typecheck_info.m"
          }
#line 229 "typecheck_info.m"
      }
#line 229 "typecheck_info.m"
    return check_hlds__typecheck_info__succeeded;
#line 229 "typecheck_info.m"
  }
#line 229 "typecheck_info.m"
}

#line 106 "typecheck_info.m"
void MR_CALL 
check_hlds__typecheck_info____Compare____overloaded_symbol_map_0_0(
#line 106 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__HeadVar__1_1,
#line 106 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__HeadVar__2_2,
#line 106 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__HeadVar__3_3)
#line 106 "typecheck_info.m"
{
#line 106 "typecheck_info.m"
  {
#line 106 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 106 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__Cast_HeadVar1_4 = check_hlds__typecheck_info__HeadVar__2_2;
#line 106 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__Cast_HeadVar2_5 = check_hlds__typecheck_info__HeadVar__3_3;

#line 106 "typecheck_info.m"
    {
#line 106 "typecheck_info.m"
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__typecheck_info_scalar_common_2[2], check_hlds__typecheck_info__HeadVar__1_1, ((MR_Box) (check_hlds__typecheck_info__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__typecheck_info__Cast_HeadVar2_5)));
#line 106 "typecheck_info.m"
      return;
    }
#line 106 "typecheck_info.m"
  }
#line 106 "typecheck_info.m"
}

#line 106 "typecheck_info.m"
MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____overloaded_symbol_map_0_0(
#line 106 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__HeadVar__1_1,
#line 106 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__HeadVar__2_2)
#line 106 "typecheck_info.m"
{
#line 106 "typecheck_info.m"
  {
#line 106 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 106 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__Cast_HeadVar1_3 = check_hlds__typecheck_info__HeadVar__1_1;
#line 106 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__Cast_HeadVar2_4 = check_hlds__typecheck_info__HeadVar__2_2;

#line 106 "typecheck_info.m"
    {
#line 106 "typecheck_info.m"
      return check_hlds__typecheck_info__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__typecheck_info_scalar_common_2[2], ((MR_Box) (check_hlds__typecheck_info__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__typecheck_info__Cast_HeadVar2_4)));
    }
#line 106 "typecheck_info.m"
    return check_hlds__typecheck_info__succeeded;
#line 106 "typecheck_info.m"
  }
#line 106 "typecheck_info.m"
}

#line 108 "typecheck_info.m"
void MR_CALL 
check_hlds__typecheck_info____Compare____overloaded_symbol_0_0(
#line 108 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__HeadVar__1_1,
#line 108 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__HeadVar__2_2,
#line 108 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__HeadVar__3_3)
#line 108 "typecheck_info.m"
{
#line 108 "typecheck_info.m"
  {
#line 108 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 108 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__CastX_22 = (MR_Integer) check_hlds__typecheck_info__HeadVar__2_2;
#line 108 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__CastY_23 = (MR_Integer) check_hlds__typecheck_info__HeadVar__3_3;

#line 108 "typecheck_info.m"
    check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__CastX_22 == check_hlds__typecheck_info__CastY_23);
#line 108 "typecheck_info.m"
    if (check_hlds__typecheck_info__succeeded)
#line 3880 "check_hlds.typecheck_info.c"
      *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 0;
#line 108 "typecheck_info.m"
    else
#line 108 "typecheck_info.m"
      if (((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 108 "typecheck_info.m"
        {
#line 108 "typecheck_info.m"
          MR_Word check_hlds__typecheck_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 1)));
#line 108 "typecheck_info.m"
          MR_Word check_hlds__typecheck_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 0)));

#line 108 "typecheck_info.m"
          if (((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 108 "typecheck_info.m"
            {
#line 108 "typecheck_info.m"
              MR_Word check_hlds__typecheck_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 0)));
#line 108 "typecheck_info.m"
              MR_Word check_hlds__typecheck_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 1)));
#line 108 "typecheck_info.m"
              MR_Word check_hlds__typecheck_info__V_21_21;

#line 108 "typecheck_info.m"
              {
#line 108 "typecheck_info.m"
                parse_tree__prog_data____Compare____cons_id_0_0(&check_hlds__typecheck_info__V_21_21, check_hlds__typecheck_info__V_29_29, check_hlds__typecheck_info__V_19_19);
              }
#line 3909 "check_hlds.typecheck_info.c"
              check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__V_21_21 == (MR_Integer) 0);
#line 108 "typecheck_info.m"
              check_hlds__typecheck_info__succeeded = !(check_hlds__typecheck_info__succeeded);
#line 108 "typecheck_info.m"
              if (check_hlds__typecheck_info__succeeded)
#line 108 "typecheck_info.m"
                *check_hlds__typecheck_info__HeadVar__1_1 = check_hlds__typecheck_info__V_21_21;
#line 108 "typecheck_info.m"
              else
#line 108 "typecheck_info.m"
                {
#line 108 "typecheck_info.m"
                  {
#line 108 "typecheck_info.m"
                    mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__typecheck_info_scalar_common_1[8], check_hlds__typecheck_info__HeadVar__1_1, ((MR_Box) (check_hlds__typecheck_info__V_28_28)), ((MR_Box) (check_hlds__typecheck_info__V_20_20)));
#line 108 "typecheck_info.m"
                    return;
                  }
#line 108 "typecheck_info.m"
                }
#line 108 "typecheck_info.m"
            }
#line 108 "typecheck_info.m"
          else
#line 3934 "check_hlds.typecheck_info.c"
            *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 2;
#line 108 "typecheck_info.m"
        }
#line 108 "typecheck_info.m"
      else
#line 108 "typecheck_info.m"
        {
#line 108 "typecheck_info.m"
          MR_Word check_hlds__typecheck_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 1)));
#line 108 "typecheck_info.m"
          MR_Word check_hlds__typecheck_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 0)));

#line 108 "typecheck_info.m"
          if (((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 3949 "check_hlds.typecheck_info.c"
            *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 1;
#line 108 "typecheck_info.m"
          else
#line 108 "typecheck_info.m"
            {
#line 108 "typecheck_info.m"
              MR_Word check_hlds__typecheck_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 0)));
#line 108 "typecheck_info.m"
              MR_Word check_hlds__typecheck_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 1)));
#line 108 "typecheck_info.m"
              MR_Word check_hlds__typecheck_info__V_8_8;

#line 108 "typecheck_info.m"
              {
#line 108 "typecheck_info.m"
                parse_tree__prog_data____Compare____simple_call_id_0_0(&check_hlds__typecheck_info__V_8_8, check_hlds__typecheck_info__V_31_31, check_hlds__typecheck_info__V_6_6);
              }
#line 3967 "check_hlds.typecheck_info.c"
              check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__V_8_8 == (MR_Integer) 0);
#line 108 "typecheck_info.m"
              check_hlds__typecheck_info__succeeded = !(check_hlds__typecheck_info__succeeded);
#line 108 "typecheck_info.m"
              if (check_hlds__typecheck_info__succeeded)
#line 108 "typecheck_info.m"
                *check_hlds__typecheck_info__HeadVar__1_1 = check_hlds__typecheck_info__V_8_8;
#line 108 "typecheck_info.m"
              else
#line 108 "typecheck_info.m"
                {
#line 108 "typecheck_info.m"
                  {
#line 108 "typecheck_info.m"
                    mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__typecheck_info_scalar_common_1[9], check_hlds__typecheck_info__HeadVar__1_1, ((MR_Box) (check_hlds__typecheck_info__V_30_30)), ((MR_Box) (check_hlds__typecheck_info__V_7_7)));
#line 108 "typecheck_info.m"
                    return;
                  }
#line 108 "typecheck_info.m"
                }
#line 108 "typecheck_info.m"
            }
#line 108 "typecheck_info.m"
        }
#line 108 "typecheck_info.m"
  }
#line 108 "typecheck_info.m"
}

#line 108 "typecheck_info.m"
MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____overloaded_symbol_0_0(
#line 108 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__HeadVar__1_1,
#line 108 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__HeadVar__2_2)
#line 108 "typecheck_info.m"
{
#line 108 "typecheck_info.m"
  {
#line 108 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 108 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__CastX_11 = (MR_Integer) check_hlds__typecheck_info__HeadVar__1_1;
#line 108 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__CastY_12 = (MR_Integer) check_hlds__typecheck_info__HeadVar__2_2;

#line 108 "typecheck_info.m"
    check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__CastX_11 == check_hlds__typecheck_info__CastY_12);
#line 108 "typecheck_info.m"
    if (check_hlds__typecheck_info__succeeded)
#line 108 "typecheck_info.m"
      check_hlds__typecheck_info__succeeded = MR_TRUE;
#line 108 "typecheck_info.m"
    else
#line 108 "typecheck_info.m"
      if (((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 108 "typecheck_info.m"
        {
#line 108 "typecheck_info.m"
          MR_Word check_hlds__typecheck_info__TypeInfo_14_14;
#line 108 "typecheck_info.m"
          MR_Word check_hlds__typecheck_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 0)));
#line 108 "typecheck_info.m"
          MR_Word check_hlds__typecheck_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 1)));
#line 108 "typecheck_info.m"
          MR_Word check_hlds__typecheck_info__V_9_9;
#line 108 "typecheck_info.m"
          MR_Word check_hlds__typecheck_info__V_10_10;

#line 108 "typecheck_info.m"
          check_hlds__typecheck_info__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 108 "typecheck_info.m"
          if (check_hlds__typecheck_info__succeeded)
#line 108 "typecheck_info.m"
            {
#line 108 "typecheck_info.m"
              check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 0)));
#line 108 "typecheck_info.m"
              check_hlds__typecheck_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 1)));
#line 4048 "check_hlds.typecheck_info.c"
              {
#line 4050 "check_hlds.typecheck_info.c"
                check_hlds__typecheck_info__succeeded = parse_tree__prog_data____Unify____cons_id_0_0(check_hlds__typecheck_info__V_7_7, check_hlds__typecheck_info__V_9_9);
              }
#line 108 "typecheck_info.m"
              if (check_hlds__typecheck_info__succeeded)
#line 108 "typecheck_info.m"
                {
#line 4057 "check_hlds.typecheck_info.c"
                  check_hlds__typecheck_info__TypeInfo_14_14 = (MR_Word) &check_hlds__typecheck_info_scalar_common_1[8];
#line 4059 "check_hlds.typecheck_info.c"
                  {
#line 4061 "check_hlds.typecheck_info.c"
                    return check_hlds__typecheck_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__typecheck_info__TypeInfo_14_14, ((MR_Box) (check_hlds__typecheck_info__V_8_8)), ((MR_Box) (check_hlds__typecheck_info__V_10_10)));
                  }
#line 108 "typecheck_info.m"
                }
#line 108 "typecheck_info.m"
            }
#line 108 "typecheck_info.m"
        }
#line 108 "typecheck_info.m"
      else
#line 108 "typecheck_info.m"
        {
#line 108 "typecheck_info.m"
          MR_Word check_hlds__typecheck_info__TypeInfo_16_16;
#line 108 "typecheck_info.m"
          MR_Word check_hlds__typecheck_info__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 0)));
#line 108 "typecheck_info.m"
          MR_Word check_hlds__typecheck_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 1)));
#line 108 "typecheck_info.m"
          MR_Word check_hlds__typecheck_info__V_5_5;
#line 108 "typecheck_info.m"
          MR_Word check_hlds__typecheck_info__V_6_6;

#line 108 "typecheck_info.m"
          check_hlds__typecheck_info__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 108 "typecheck_info.m"
          if (check_hlds__typecheck_info__succeeded)
#line 108 "typecheck_info.m"
            {
#line 108 "typecheck_info.m"
              check_hlds__typecheck_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 0)));
#line 108 "typecheck_info.m"
              check_hlds__typecheck_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 1)));
#line 4095 "check_hlds.typecheck_info.c"
              {
#line 4097 "check_hlds.typecheck_info.c"
                check_hlds__typecheck_info__succeeded = parse_tree__prog_data____Unify____simple_call_id_0_0(check_hlds__typecheck_info__V_3_3, check_hlds__typecheck_info__V_5_5);
              }
#line 108 "typecheck_info.m"
              if (check_hlds__typecheck_info__succeeded)
#line 108 "typecheck_info.m"
                {
#line 4104 "check_hlds.typecheck_info.c"
                  check_hlds__typecheck_info__TypeInfo_16_16 = (MR_Word) &check_hlds__typecheck_info_scalar_common_1[9];
#line 4106 "check_hlds.typecheck_info.c"
                  {
#line 4108 "check_hlds.typecheck_info.c"
                    return check_hlds__typecheck_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__typecheck_info__TypeInfo_16_16, ((MR_Box) (check_hlds__typecheck_info__V_4_4)), ((MR_Box) (check_hlds__typecheck_info__V_6_6)));
                  }
#line 108 "typecheck_info.m"
                }
#line 108 "typecheck_info.m"
            }
#line 108 "typecheck_info.m"
        }
#line 108 "typecheck_info.m"
    return check_hlds__typecheck_info__succeeded;
#line 108 "typecheck_info.m"
  }
#line 108 "typecheck_info.m"
}

#line 343 "typecheck_info.m"
void MR_CALL 
check_hlds__typecheck_info____Compare____cons_type_info_source_0_0(
#line 343 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__HeadVar__1_1,
#line 343 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__HeadVar__2_2,
#line 343 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__HeadVar__3_3)
#line 343 "typecheck_info.m"
{
#line 343 "typecheck_info.m"
  {
#line 343 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 343 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__CastX_76 = (MR_Integer) check_hlds__typecheck_info__HeadVar__2_2;
#line 343 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__CastY_77 = (MR_Integer) check_hlds__typecheck_info__HeadVar__3_3;

#line 343 "typecheck_info.m"
    check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__CastX_76 == check_hlds__typecheck_info__CastY_77);
#line 343 "typecheck_info.m"
    if (check_hlds__typecheck_info__succeeded)
#line 4148 "check_hlds.typecheck_info.c"
      *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 0;
#line 343 "typecheck_info.m"
    else
#line 343 "typecheck_info.m"
      if (((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 343 "typecheck_info.m"
        {
#line 343 "typecheck_info.m"
          MR_String check_hlds__typecheck_info__V_85_85 = ((MR_String) (MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 0)));

#line 343 "typecheck_info.m"
          if (((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 343 "typecheck_info.m"
            {
#line 343 "typecheck_info.m"
              MR_String check_hlds__typecheck_info__V_19_19 = ((MR_String) (MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 0)));

#line 343 "typecheck_info.m"
              {
#line 343 "typecheck_info.m"
                mercury__private_builtin__builtin_compare_string_3_p_0(check_hlds__typecheck_info__HeadVar__1_1, check_hlds__typecheck_info__V_85_85, check_hlds__typecheck_info__V_19_19);
#line 343 "typecheck_info.m"
                return;
              }
#line 343 "typecheck_info.m"
            }
#line 343 "typecheck_info.m"
          else
#line 343 "typecheck_info.m"
            if (((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 4179 "check_hlds.typecheck_info.c"
              *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 1;
#line 343 "typecheck_info.m"
            else
#line 343 "typecheck_info.m"
              if (((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 4185 "check_hlds.typecheck_info.c"
                *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 2;
#line 343 "typecheck_info.m"
              else
#line 343 "typecheck_info.m"
                if (((((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 4191 "check_hlds.typecheck_info.c"
                  *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 1;
#line 343 "typecheck_info.m"
                else
#line 343 "typecheck_info.m"
                  if (((((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 4197 "check_hlds.typecheck_info.c"
                    *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 1;
#line 343 "typecheck_info.m"
                  else
#line 4201 "check_hlds.typecheck_info.c"
                    *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 1;
#line 343 "typecheck_info.m"
        }
#line 343 "typecheck_info.m"
      else
#line 343 "typecheck_info.m"
        if (((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 343 "typecheck_info.m"
          {
#line 343 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 0)));

#line 343 "typecheck_info.m"
            if (((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 4216 "check_hlds.typecheck_info.c"
              *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 2;
#line 343 "typecheck_info.m"
            else
#line 343 "typecheck_info.m"
              if (((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 343 "typecheck_info.m"
                {
#line 343 "typecheck_info.m"
                  MR_Word check_hlds__typecheck_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 0)));

#line 343 "typecheck_info.m"
                  {
#line 343 "typecheck_info.m"
                    parse_tree__prog_data____Compare____type_ctor_0_0(check_hlds__typecheck_info__HeadVar__1_1, check_hlds__typecheck_info__V_86_86, check_hlds__typecheck_info__V_33_33);
#line 343 "typecheck_info.m"
                    return;
                  }
#line 343 "typecheck_info.m"
                }
#line 343 "typecheck_info.m"
              else
#line 343 "typecheck_info.m"
                if (((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 4240 "check_hlds.typecheck_info.c"
                  *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 2;
#line 343 "typecheck_info.m"
                else
#line 343 "typecheck_info.m"
                  if (((((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 4246 "check_hlds.typecheck_info.c"
                    *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 1;
#line 343 "typecheck_info.m"
                  else
#line 343 "typecheck_info.m"
                    if (((((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 4252 "check_hlds.typecheck_info.c"
                      *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 1;
#line 343 "typecheck_info.m"
                    else
#line 4256 "check_hlds.typecheck_info.c"
                      *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 1;
#line 343 "typecheck_info.m"
          }
#line 343 "typecheck_info.m"
        else
#line 343 "typecheck_info.m"
          if (((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 343 "typecheck_info.m"
            {
#line 343 "typecheck_info.m"
              MR_Word check_hlds__typecheck_info__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 0)));

#line 343 "typecheck_info.m"
              if (((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 4271 "check_hlds.typecheck_info.c"
                *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 1;
#line 343 "typecheck_info.m"
              else
#line 343 "typecheck_info.m"
                if (((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 4277 "check_hlds.typecheck_info.c"
                  *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 1;
#line 343 "typecheck_info.m"
                else
#line 343 "typecheck_info.m"
                  if (((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 343 "typecheck_info.m"
                    {
#line 343 "typecheck_info.m"
                      MR_Word check_hlds__typecheck_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 0)));

#line 343 "typecheck_info.m"
                      {
#line 343 "typecheck_info.m"
                        parse_tree__prog_data____Compare____type_ctor_0_0(check_hlds__typecheck_info__HeadVar__1_1, check_hlds__typecheck_info__V_89_89, check_hlds__typecheck_info__V_5_5);
#line 343 "typecheck_info.m"
                        return;
                      }
#line 343 "typecheck_info.m"
                    }
#line 343 "typecheck_info.m"
                  else
#line 343 "typecheck_info.m"
                    if (((((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 4301 "check_hlds.typecheck_info.c"
                      *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 1;
#line 343 "typecheck_info.m"
                    else
#line 343 "typecheck_info.m"
                      if (((((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 4307 "check_hlds.typecheck_info.c"
                        *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 1;
#line 343 "typecheck_info.m"
                      else
#line 4311 "check_hlds.typecheck_info.c"
                        *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 1;
#line 343 "typecheck_info.m"
            }
#line 343 "typecheck_info.m"
          else
#line 343 "typecheck_info.m"
            if (((((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 343 "typecheck_info.m"
              {
#line 343 "typecheck_info.m"
                MR_String check_hlds__typecheck_info__V_84_84 = ((MR_String) (MR_hl_field(MR_mktag(3), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 1)));

#line 343 "typecheck_info.m"
                if (((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 4326 "check_hlds.typecheck_info.c"
                  *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 2;
#line 343 "typecheck_info.m"
                else
#line 343 "typecheck_info.m"
                  if (((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 4332 "check_hlds.typecheck_info.c"
                    *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 2;
#line 343 "typecheck_info.m"
                  else
#line 343 "typecheck_info.m"
                    if (((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 4338 "check_hlds.typecheck_info.c"
                      *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 2;
#line 343 "typecheck_info.m"
                    else
#line 343 "typecheck_info.m"
                      if (((((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 343 "typecheck_info.m"
                        {
#line 343 "typecheck_info.m"
                          MR_String check_hlds__typecheck_info__V_61_61 = ((MR_String) (MR_hl_field(MR_mktag(3), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 1)));

#line 343 "typecheck_info.m"
                          {
#line 343 "typecheck_info.m"
                            mercury__private_builtin__builtin_compare_string_3_p_0(check_hlds__typecheck_info__HeadVar__1_1, check_hlds__typecheck_info__V_84_84, check_hlds__typecheck_info__V_61_61);
#line 343 "typecheck_info.m"
                            return;
                          }
#line 343 "typecheck_info.m"
                        }
#line 343 "typecheck_info.m"
                      else
#line 343 "typecheck_info.m"
                        if (((((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 4362 "check_hlds.typecheck_info.c"
                          *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 1;
#line 343 "typecheck_info.m"
                        else
#line 4366 "check_hlds.typecheck_info.c"
                          *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 2;
#line 343 "typecheck_info.m"
              }
#line 343 "typecheck_info.m"
            else
#line 343 "typecheck_info.m"
              if (((((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 343 "typecheck_info.m"
                {
#line 343 "typecheck_info.m"
                  MR_Word check_hlds__typecheck_info__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 1)));

#line 343 "typecheck_info.m"
                  if (((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 4381 "check_hlds.typecheck_info.c"
                    *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 2;
#line 343 "typecheck_info.m"
                  else
#line 343 "typecheck_info.m"
                    if (((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 4387 "check_hlds.typecheck_info.c"
                      *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 2;
#line 343 "typecheck_info.m"
                    else
#line 343 "typecheck_info.m"
                      if (((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 4393 "check_hlds.typecheck_info.c"
                        *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 2;
#line 343 "typecheck_info.m"
                      else
#line 343 "typecheck_info.m"
                        if (((((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 4399 "check_hlds.typecheck_info.c"
                          *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 2;
#line 343 "typecheck_info.m"
                        else
#line 343 "typecheck_info.m"
                          if (((((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 343 "typecheck_info.m"
                            {
#line 343 "typecheck_info.m"
                              MR_Word check_hlds__typecheck_info__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 1)));

#line 343 "typecheck_info.m"
                              {
#line 343 "typecheck_info.m"
                                hlds__hlds_pred____Compare____pred_id_0_0(check_hlds__typecheck_info__HeadVar__1_1, check_hlds__typecheck_info__V_87_87, check_hlds__typecheck_info__V_75_75);
#line 343 "typecheck_info.m"
                                return;
                              }
#line 343 "typecheck_info.m"
                            }
#line 343 "typecheck_info.m"
                          else
#line 4421 "check_hlds.typecheck_info.c"
                            *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 2;
#line 343 "typecheck_info.m"
                }
#line 343 "typecheck_info.m"
              else
#line 343 "typecheck_info.m"
                {
#line 343 "typecheck_info.m"
                  MR_Word check_hlds__typecheck_info__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 1)));

#line 343 "typecheck_info.m"
                  if (((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 4434 "check_hlds.typecheck_info.c"
                    *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 2;
#line 343 "typecheck_info.m"
                  else
#line 343 "typecheck_info.m"
                    if (((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 4440 "check_hlds.typecheck_info.c"
                      *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 2;
#line 343 "typecheck_info.m"
                    else
#line 343 "typecheck_info.m"
                      if (((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 4446 "check_hlds.typecheck_info.c"
                        *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 2;
#line 343 "typecheck_info.m"
                      else
#line 343 "typecheck_info.m"
                        if (((((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 4452 "check_hlds.typecheck_info.c"
                          *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 1;
#line 343 "typecheck_info.m"
                        else
#line 343 "typecheck_info.m"
                          if (((((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 4458 "check_hlds.typecheck_info.c"
                            *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 1;
#line 343 "typecheck_info.m"
                          else
#line 343 "typecheck_info.m"
                            {
#line 343 "typecheck_info.m"
                              MR_Word check_hlds__typecheck_info__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 1)));

#line 343 "typecheck_info.m"
                              {
#line 343 "typecheck_info.m"
                                parse_tree__prog_data____Compare____type_ctor_0_0(check_hlds__typecheck_info__HeadVar__1_1, check_hlds__typecheck_info__V_88_88, check_hlds__typecheck_info__V_47_47);
#line 343 "typecheck_info.m"
                                return;
                              }
#line 343 "typecheck_info.m"
                            }
#line 343 "typecheck_info.m"
                }
#line 343 "typecheck_info.m"
  }
#line 343 "typecheck_info.m"
}

#line 343 "typecheck_info.m"
MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____cons_type_info_source_0_0(
#line 343 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__HeadVar__1_1,
#line 343 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__HeadVar__2_2)
#line 343 "typecheck_info.m"
{
#line 343 "typecheck_info.m"
  {
#line 343 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 343 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__CastX_15 = (MR_Integer) check_hlds__typecheck_info__HeadVar__1_1;
#line 343 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__CastY_16 = (MR_Integer) check_hlds__typecheck_info__HeadVar__2_2;

#line 343 "typecheck_info.m"
    check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__CastX_15 == check_hlds__typecheck_info__CastY_16);
#line 343 "typecheck_info.m"
    if (check_hlds__typecheck_info__succeeded)
#line 343 "typecheck_info.m"
      check_hlds__typecheck_info__succeeded = MR_TRUE;
#line 343 "typecheck_info.m"
    else
#line 343 "typecheck_info.m"
      if (((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 343 "typecheck_info.m"
        {
#line 343 "typecheck_info.m"
          MR_String check_hlds__typecheck_info__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 0)));
#line 343 "typecheck_info.m"
          MR_String check_hlds__typecheck_info__V_6_6;

#line 343 "typecheck_info.m"
          check_hlds__typecheck_info__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 343 "typecheck_info.m"
          if (check_hlds__typecheck_info__succeeded)
#line 343 "typecheck_info.m"
            {
#line 343 "typecheck_info.m"
              check_hlds__typecheck_info__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 0)));
#line 4526 "check_hlds.typecheck_info.c"
              check_hlds__typecheck_info__succeeded = (strcmp(check_hlds__typecheck_info__V_5_5, check_hlds__typecheck_info__V_6_6) == 0);
#line 343 "typecheck_info.m"
            }
#line 343 "typecheck_info.m"
        }
#line 343 "typecheck_info.m"
      else
#line 343 "typecheck_info.m"
        if (((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 343 "typecheck_info.m"
          {
#line 343 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 0)));
#line 343 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__V_8_8;

#line 343 "typecheck_info.m"
            check_hlds__typecheck_info__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 343 "typecheck_info.m"
            if (check_hlds__typecheck_info__succeeded)
#line 343 "typecheck_info.m"
              {
#line 343 "typecheck_info.m"
                check_hlds__typecheck_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 0)));
#line 4551 "check_hlds.typecheck_info.c"
                {
#line 4553 "check_hlds.typecheck_info.c"
                  return check_hlds__typecheck_info__succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(check_hlds__typecheck_info__V_7_7, check_hlds__typecheck_info__V_8_8);
                }
#line 343 "typecheck_info.m"
              }
#line 343 "typecheck_info.m"
          }
#line 343 "typecheck_info.m"
        else
#line 343 "typecheck_info.m"
          if (((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 343 "typecheck_info.m"
            {
#line 343 "typecheck_info.m"
              MR_Word check_hlds__typecheck_info__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 0)));
#line 343 "typecheck_info.m"
              MR_Word check_hlds__typecheck_info__V_4_4;

#line 343 "typecheck_info.m"
              check_hlds__typecheck_info__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 343 "typecheck_info.m"
              if (check_hlds__typecheck_info__succeeded)
#line 343 "typecheck_info.m"
                {
#line 343 "typecheck_info.m"
                  check_hlds__typecheck_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 0)));
#line 4579 "check_hlds.typecheck_info.c"
                  {
#line 4581 "check_hlds.typecheck_info.c"
                    return check_hlds__typecheck_info__succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(check_hlds__typecheck_info__V_3_3, check_hlds__typecheck_info__V_4_4);
                  }
#line 343 "typecheck_info.m"
                }
#line 343 "typecheck_info.m"
            }
#line 343 "typecheck_info.m"
          else
#line 343 "typecheck_info.m"
            if (((((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 343 "typecheck_info.m"
              {
#line 343 "typecheck_info.m"
                MR_String check_hlds__typecheck_info__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(3), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 1)));
#line 343 "typecheck_info.m"
                MR_String check_hlds__typecheck_info__V_12_12;

#line 343 "typecheck_info.m"
                check_hlds__typecheck_info__succeeded = ((((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 343 "typecheck_info.m"
                if (check_hlds__typecheck_info__succeeded)
#line 343 "typecheck_info.m"
                  {
#line 343 "typecheck_info.m"
                    check_hlds__typecheck_info__V_12_12 = ((MR_String) (MR_hl_field(MR_mktag(3), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 1)));
#line 4607 "check_hlds.typecheck_info.c"
                    check_hlds__typecheck_info__succeeded = (strcmp(check_hlds__typecheck_info__V_11_11, check_hlds__typecheck_info__V_12_12) == 0);
#line 343 "typecheck_info.m"
                  }
#line 343 "typecheck_info.m"
              }
#line 343 "typecheck_info.m"
            else
#line 343 "typecheck_info.m"
              if (((((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 343 "typecheck_info.m"
                {
#line 343 "typecheck_info.m"
                  MR_Word check_hlds__typecheck_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 1)));
#line 343 "typecheck_info.m"
                  MR_Word check_hlds__typecheck_info__V_14_14;

#line 343 "typecheck_info.m"
                  check_hlds__typecheck_info__succeeded = ((((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 343 "typecheck_info.m"
                  if (check_hlds__typecheck_info__succeeded)
#line 343 "typecheck_info.m"
                    {
#line 343 "typecheck_info.m"
                      check_hlds__typecheck_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 1)));
#line 4632 "check_hlds.typecheck_info.c"
                      {
#line 4634 "check_hlds.typecheck_info.c"
                        return check_hlds__typecheck_info__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(check_hlds__typecheck_info__V_13_13, check_hlds__typecheck_info__V_14_14);
                      }
#line 343 "typecheck_info.m"
                    }
#line 343 "typecheck_info.m"
                }
#line 343 "typecheck_info.m"
              else
#line 343 "typecheck_info.m"
                {
#line 343 "typecheck_info.m"
                  MR_Word check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 1)));
#line 343 "typecheck_info.m"
                  MR_Word check_hlds__typecheck_info__V_10_10;

#line 343 "typecheck_info.m"
                  check_hlds__typecheck_info__succeeded = ((((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 343 "typecheck_info.m"
                  if (check_hlds__typecheck_info__succeeded)
#line 343 "typecheck_info.m"
                    {
#line 343 "typecheck_info.m"
                      check_hlds__typecheck_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 1)));
#line 4658 "check_hlds.typecheck_info.c"
                      {
#line 4660 "check_hlds.typecheck_info.c"
                        return check_hlds__typecheck_info__succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(check_hlds__typecheck_info__V_9_9, check_hlds__typecheck_info__V_10_10);
                      }
#line 343 "typecheck_info.m"
                    }
#line 343 "typecheck_info.m"
                }
#line 343 "typecheck_info.m"
    return check_hlds__typecheck_info__succeeded;
#line 343 "typecheck_info.m"
  }
#line 343 "typecheck_info.m"
}

#line 321 "typecheck_info.m"
void MR_CALL 
check_hlds__typecheck_info____Compare____cons_type_info_0_0(
#line 321 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__HeadVar__1_1,
#line 321 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__HeadVar__2_2,
#line 321 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__HeadVar__3_3)
#line 321 "typecheck_info.m"
{
#line 321 "typecheck_info.m"
  {
#line 321 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 321 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__CastX_21 = (MR_Integer) check_hlds__typecheck_info__HeadVar__2_2;
#line 321 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__CastY_22 = (MR_Integer) check_hlds__typecheck_info__HeadVar__3_3;

#line 321 "typecheck_info.m"
    check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__CastX_21 == check_hlds__typecheck_info__CastY_22);
#line 321 "typecheck_info.m"
    if (check_hlds__typecheck_info__succeeded)
#line 4698 "check_hlds.typecheck_info.c"
      *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 0;
#line 321 "typecheck_info.m"
    else
#line 321 "typecheck_info.m"
      {
#line 321 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 0)));
#line 321 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 1)));
#line 321 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 2)));
#line 321 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 3)));
#line 321 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 4)));
#line 321 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 5)));
#line 321 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 0)));
#line 321 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 1)));
#line 321 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 2)));
#line 321 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 3)));
#line 321 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 4)));
#line 321 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 5)));
#line 321 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_16_16;

#line 321 "typecheck_info.m"
        {
#line 321 "typecheck_info.m"
          mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__typecheck_info_scalar_common_1[6], &check_hlds__typecheck_info__V_16_16, ((MR_Box) (check_hlds__typecheck_info__V_4_4)), ((MR_Box) (check_hlds__typecheck_info__V_10_10)));
        }
#line 4736 "check_hlds.typecheck_info.c"
        check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__V_16_16 == (MR_Integer) 0);
#line 321 "typecheck_info.m"
        check_hlds__typecheck_info__succeeded = !(check_hlds__typecheck_info__succeeded);
#line 321 "typecheck_info.m"
        if (check_hlds__typecheck_info__succeeded)
#line 321 "typecheck_info.m"
          *check_hlds__typecheck_info__HeadVar__1_1 = check_hlds__typecheck_info__V_16_16;
#line 321 "typecheck_info.m"
        else
#line 321 "typecheck_info.m"
          {
#line 321 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__V_17_17;

#line 321 "typecheck_info.m"
            {
#line 321 "typecheck_info.m"
              mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__typecheck_info_scalar_common_1[7], &check_hlds__typecheck_info__V_17_17, ((MR_Box) (check_hlds__typecheck_info__V_5_5)), ((MR_Box) (check_hlds__typecheck_info__V_11_11)));
            }
#line 4756 "check_hlds.typecheck_info.c"
            check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__V_17_17 == (MR_Integer) 0);
#line 321 "typecheck_info.m"
            check_hlds__typecheck_info__succeeded = !(check_hlds__typecheck_info__succeeded);
#line 321 "typecheck_info.m"
            if (check_hlds__typecheck_info__succeeded)
#line 321 "typecheck_info.m"
              *check_hlds__typecheck_info__HeadVar__1_1 = check_hlds__typecheck_info__V_17_17;
#line 321 "typecheck_info.m"
            else
#line 321 "typecheck_info.m"
              {
#line 321 "typecheck_info.m"
                MR_Word check_hlds__typecheck_info__V_18_18;

#line 321 "typecheck_info.m"
                {
#line 321 "typecheck_info.m"
                  parse_tree__prog_data____Compare____mer_type_0_0(&check_hlds__typecheck_info__V_18_18, check_hlds__typecheck_info__V_6_6, check_hlds__typecheck_info__V_12_12);
                }
#line 4776 "check_hlds.typecheck_info.c"
                check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__V_18_18 == (MR_Integer) 0);
#line 321 "typecheck_info.m"
                check_hlds__typecheck_info__succeeded = !(check_hlds__typecheck_info__succeeded);
#line 321 "typecheck_info.m"
                if (check_hlds__typecheck_info__succeeded)
#line 321 "typecheck_info.m"
                  *check_hlds__typecheck_info__HeadVar__1_1 = check_hlds__typecheck_info__V_18_18;
#line 321 "typecheck_info.m"
                else
#line 321 "typecheck_info.m"
                  {
#line 321 "typecheck_info.m"
                    MR_Word check_hlds__typecheck_info__V_19_19;

#line 321 "typecheck_info.m"
                    {
#line 321 "typecheck_info.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__typecheck_info_scalar_common_1[4], &check_hlds__typecheck_info__V_19_19, ((MR_Box) (check_hlds__typecheck_info__V_7_7)), ((MR_Box) (check_hlds__typecheck_info__V_13_13)));
                    }
#line 4796 "check_hlds.typecheck_info.c"
                    check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__V_19_19 == (MR_Integer) 0);
#line 321 "typecheck_info.m"
                    check_hlds__typecheck_info__succeeded = !(check_hlds__typecheck_info__succeeded);
#line 321 "typecheck_info.m"
                    if (check_hlds__typecheck_info__succeeded)
#line 321 "typecheck_info.m"
                      *check_hlds__typecheck_info__HeadVar__1_1 = check_hlds__typecheck_info__V_19_19;
#line 321 "typecheck_info.m"
                    else
#line 321 "typecheck_info.m"
                      {
#line 321 "typecheck_info.m"
                        MR_Word check_hlds__typecheck_info__V_20_20;

#line 321 "typecheck_info.m"
                        {
#line 321 "typecheck_info.m"
                          hlds__hlds_data____Compare____hlds_constraints_0_0(&check_hlds__typecheck_info__V_20_20, check_hlds__typecheck_info__V_8_8, check_hlds__typecheck_info__V_14_14);
                        }
#line 4816 "check_hlds.typecheck_info.c"
                        check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__V_20_20 == (MR_Integer) 0);
#line 321 "typecheck_info.m"
                        check_hlds__typecheck_info__succeeded = !(check_hlds__typecheck_info__succeeded);
#line 321 "typecheck_info.m"
                        if (check_hlds__typecheck_info__succeeded)
#line 321 "typecheck_info.m"
                          *check_hlds__typecheck_info__HeadVar__1_1 = check_hlds__typecheck_info__V_20_20;
#line 321 "typecheck_info.m"
                        else
#line 321 "typecheck_info.m"
                          {
#line 321 "typecheck_info.m"
                            check_hlds__typecheck_info____Compare____cons_type_info_source_0_0(check_hlds__typecheck_info__HeadVar__1_1, check_hlds__typecheck_info__V_9_9, check_hlds__typecheck_info__V_15_15);
#line 321 "typecheck_info.m"
                            return;
                          }
#line 321 "typecheck_info.m"
                      }
#line 321 "typecheck_info.m"
                  }
#line 321 "typecheck_info.m"
              }
#line 321 "typecheck_info.m"
          }
#line 321 "typecheck_info.m"
      }
#line 321 "typecheck_info.m"
  }
#line 321 "typecheck_info.m"
}

#line 321 "typecheck_info.m"
MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____cons_type_info_0_0(
#line 321 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__HeadVar__1_1,
#line 321 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__HeadVar__2_2)
#line 321 "typecheck_info.m"
{
#line 321 "typecheck_info.m"
  {
#line 321 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 321 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__CastX_15 = (MR_Integer) check_hlds__typecheck_info__HeadVar__1_1;
#line 321 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__CastY_16 = (MR_Integer) check_hlds__typecheck_info__HeadVar__2_2;

#line 321 "typecheck_info.m"
    check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__CastX_15 == check_hlds__typecheck_info__CastY_16);
#line 321 "typecheck_info.m"
    if (check_hlds__typecheck_info__succeeded)
#line 321 "typecheck_info.m"
      check_hlds__typecheck_info__succeeded = MR_TRUE;
#line 321 "typecheck_info.m"
    else
#line 321 "typecheck_info.m"
      {
#line 321 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__TypeInfo_18_18;
#line 321 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__TypeInfo_20_20;
#line 321 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 0)));
#line 321 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 1)));
#line 321 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 2)));
#line 321 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 3)));
#line 321 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 4)));
#line 321 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 5)));
#line 321 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 0)));
#line 321 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 1)));
#line 321 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 2)));
#line 321 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 3)));
#line 321 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 4)));
#line 321 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 5)));

#line 4905 "check_hlds.typecheck_info.c"
        {
#line 4907 "check_hlds.typecheck_info.c"
          check_hlds__typecheck_info__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__typecheck_info_scalar_common_1[6], ((MR_Box) (check_hlds__typecheck_info__V_3_3)), ((MR_Box) (check_hlds__typecheck_info__V_9_9)));
        }
#line 321 "typecheck_info.m"
        if (check_hlds__typecheck_info__succeeded)
#line 321 "typecheck_info.m"
          {
#line 4914 "check_hlds.typecheck_info.c"
            check_hlds__typecheck_info__TypeInfo_18_18 = (MR_Word) &check_hlds__typecheck_info_scalar_common_1[7];
#line 4916 "check_hlds.typecheck_info.c"
            {
#line 4918 "check_hlds.typecheck_info.c"
              check_hlds__typecheck_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__typecheck_info__TypeInfo_18_18, ((MR_Box) (check_hlds__typecheck_info__V_4_4)), ((MR_Box) (check_hlds__typecheck_info__V_10_10)));
            }
#line 321 "typecheck_info.m"
            if (check_hlds__typecheck_info__succeeded)
#line 321 "typecheck_info.m"
              {
#line 4925 "check_hlds.typecheck_info.c"
                {
#line 4927 "check_hlds.typecheck_info.c"
                  check_hlds__typecheck_info__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(check_hlds__typecheck_info__V_5_5, check_hlds__typecheck_info__V_11_11);
                }
#line 321 "typecheck_info.m"
                if (check_hlds__typecheck_info__succeeded)
#line 321 "typecheck_info.m"
                  {
#line 4934 "check_hlds.typecheck_info.c"
                    check_hlds__typecheck_info__TypeInfo_20_20 = (MR_Word) &check_hlds__typecheck_info_scalar_common_1[4];
#line 4936 "check_hlds.typecheck_info.c"
                    {
#line 4938 "check_hlds.typecheck_info.c"
                      check_hlds__typecheck_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__typecheck_info__TypeInfo_20_20, ((MR_Box) (check_hlds__typecheck_info__V_6_6)), ((MR_Box) (check_hlds__typecheck_info__V_12_12)));
                    }
#line 321 "typecheck_info.m"
                    if (check_hlds__typecheck_info__succeeded)
#line 321 "typecheck_info.m"
                      {
#line 4945 "check_hlds.typecheck_info.c"
                        {
#line 4947 "check_hlds.typecheck_info.c"
                          check_hlds__typecheck_info__succeeded = hlds__hlds_data____Unify____hlds_constraints_0_0(check_hlds__typecheck_info__V_7_7, check_hlds__typecheck_info__V_13_13);
                        }
#line 321 "typecheck_info.m"
                        if (check_hlds__typecheck_info__succeeded)
#line 4952 "check_hlds.typecheck_info.c"
                          {
#line 4954 "check_hlds.typecheck_info.c"
                            return check_hlds__typecheck_info__succeeded = check_hlds__typecheck_info____Unify____cons_type_info_source_0_0(check_hlds__typecheck_info__V_8_8, check_hlds__typecheck_info__V_14_14);
                          }
#line 321 "typecheck_info.m"
                      }
#line 321 "typecheck_info.m"
                  }
#line 321 "typecheck_info.m"
              }
#line 321 "typecheck_info.m"
          }
#line 321 "typecheck_info.m"
      }
#line 321 "typecheck_info.m"
    return check_hlds__typecheck_info__succeeded;
#line 321 "typecheck_info.m"
  }
#line 321 "typecheck_info.m"
}

#line 291 "typecheck_info.m"
void MR_CALL 
check_hlds__typecheck_info____Compare____args_type_assign_set_0_0(
#line 291 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__HeadVar__1_1,
#line 291 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__HeadVar__2_2,
#line 291 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__HeadVar__3_3)
#line 291 "typecheck_info.m"
{
#line 291 "typecheck_info.m"
  {
#line 291 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 291 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__Cast_HeadVar1_4 = check_hlds__typecheck_info__HeadVar__2_2;
#line 291 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__Cast_HeadVar2_5 = check_hlds__typecheck_info__HeadVar__3_3;

#line 291 "typecheck_info.m"
    {
#line 291 "typecheck_info.m"
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__typecheck_info_scalar_common_1[5], check_hlds__typecheck_info__HeadVar__1_1, ((MR_Box) (check_hlds__typecheck_info__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__typecheck_info__Cast_HeadVar2_5)));
#line 291 "typecheck_info.m"
      return;
    }
#line 291 "typecheck_info.m"
  }
#line 291 "typecheck_info.m"
}

#line 291 "typecheck_info.m"
MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____args_type_assign_set_0_0(
#line 291 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__HeadVar__1_1,
#line 291 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__HeadVar__2_2)
#line 291 "typecheck_info.m"
{
#line 291 "typecheck_info.m"
  {
#line 291 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 291 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__Cast_HeadVar1_3 = check_hlds__typecheck_info__HeadVar__1_1;
#line 291 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__Cast_HeadVar2_4 = check_hlds__typecheck_info__HeadVar__2_2;

#line 291 "typecheck_info.m"
    {
#line 291 "typecheck_info.m"
      return check_hlds__typecheck_info__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__typecheck_info_scalar_common_1[5], ((MR_Box) (check_hlds__typecheck_info__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__typecheck_info__Cast_HeadVar2_4)));
    }
#line 291 "typecheck_info.m"
    return check_hlds__typecheck_info__succeeded;
#line 291 "typecheck_info.m"
  }
#line 291 "typecheck_info.m"
}

#line 293 "typecheck_info.m"
void MR_CALL 
check_hlds__typecheck_info____Compare____args_type_assign_0_0(
#line 293 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__HeadVar__1_1,
#line 293 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__HeadVar__2_2,
#line 293 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__HeadVar__3_3)
#line 293 "typecheck_info.m"
{
#line 293 "typecheck_info.m"
  {
#line 293 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 293 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__CastX_12 = (MR_Integer) check_hlds__typecheck_info__HeadVar__2_2;
#line 293 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__CastY_13 = (MR_Integer) check_hlds__typecheck_info__HeadVar__3_3;

#line 293 "typecheck_info.m"
    check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__CastX_12 == check_hlds__typecheck_info__CastY_13);
#line 293 "typecheck_info.m"
    if (check_hlds__typecheck_info__succeeded)
#line 5060 "check_hlds.typecheck_info.c"
      *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 0;
#line 293 "typecheck_info.m"
    else
#line 293 "typecheck_info.m"
      {
#line 293 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 0)));
#line 293 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 1)));
#line 293 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 2)));
#line 293 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 0)));
#line 293 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 1)));
#line 293 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 2)));
#line 293 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_10_10;

#line 293 "typecheck_info.m"
        {
#line 293 "typecheck_info.m"
          check_hlds__typecheck_info____Compare____type_assign_0_0(&check_hlds__typecheck_info__V_10_10, check_hlds__typecheck_info__V_4_4, check_hlds__typecheck_info__V_7_7);
        }
#line 5086 "check_hlds.typecheck_info.c"
        check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__V_10_10 == (MR_Integer) 0);
#line 293 "typecheck_info.m"
        check_hlds__typecheck_info__succeeded = !(check_hlds__typecheck_info__succeeded);
#line 293 "typecheck_info.m"
        if (check_hlds__typecheck_info__succeeded)
#line 293 "typecheck_info.m"
          *check_hlds__typecheck_info__HeadVar__1_1 = check_hlds__typecheck_info__V_10_10;
#line 293 "typecheck_info.m"
        else
#line 293 "typecheck_info.m"
          {
#line 293 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__V_11_11;

#line 293 "typecheck_info.m"
            {
#line 293 "typecheck_info.m"
              mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__typecheck_info_scalar_common_1[4], &check_hlds__typecheck_info__V_11_11, ((MR_Box) (check_hlds__typecheck_info__V_5_5)), ((MR_Box) (check_hlds__typecheck_info__V_8_8)));
            }
#line 5106 "check_hlds.typecheck_info.c"
            check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__V_11_11 == (MR_Integer) 0);
#line 293 "typecheck_info.m"
            check_hlds__typecheck_info__succeeded = !(check_hlds__typecheck_info__succeeded);
#line 293 "typecheck_info.m"
            if (check_hlds__typecheck_info__succeeded)
#line 293 "typecheck_info.m"
              *check_hlds__typecheck_info__HeadVar__1_1 = check_hlds__typecheck_info__V_11_11;
#line 293 "typecheck_info.m"
            else
#line 293 "typecheck_info.m"
              {
#line 293 "typecheck_info.m"
                hlds__hlds_data____Compare____hlds_constraints_0_0(check_hlds__typecheck_info__HeadVar__1_1, check_hlds__typecheck_info__V_6_6, check_hlds__typecheck_info__V_9_9);
#line 293 "typecheck_info.m"
                return;
              }
#line 293 "typecheck_info.m"
          }
#line 293 "typecheck_info.m"
      }
#line 293 "typecheck_info.m"
  }
#line 293 "typecheck_info.m"
}

#line 293 "typecheck_info.m"
MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____args_type_assign_0_0(
#line 293 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__HeadVar__1_1,
#line 293 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__HeadVar__2_2)
#line 293 "typecheck_info.m"
{
#line 293 "typecheck_info.m"
  {
#line 293 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 293 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__CastX_9 = (MR_Integer) check_hlds__typecheck_info__HeadVar__1_1;
#line 293 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__CastY_10 = (MR_Integer) check_hlds__typecheck_info__HeadVar__2_2;

#line 293 "typecheck_info.m"
    check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__CastX_9 == check_hlds__typecheck_info__CastY_10);
#line 293 "typecheck_info.m"
    if (check_hlds__typecheck_info__succeeded)
#line 293 "typecheck_info.m"
      check_hlds__typecheck_info__succeeded = MR_TRUE;
#line 293 "typecheck_info.m"
    else
#line 293 "typecheck_info.m"
      {
#line 293 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__TypeInfo_11_11;
#line 293 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 0)));
#line 293 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 1)));
#line 293 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 2)));
#line 293 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 0)));
#line 293 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 1)));
#line 293 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 2)));

#line 5175 "check_hlds.typecheck_info.c"
        {
#line 5177 "check_hlds.typecheck_info.c"
          check_hlds__typecheck_info__succeeded = check_hlds__typecheck_info____Unify____type_assign_0_0(check_hlds__typecheck_info__V_3_3, check_hlds__typecheck_info__V_6_6);
        }
#line 293 "typecheck_info.m"
        if (check_hlds__typecheck_info__succeeded)
#line 293 "typecheck_info.m"
          {
#line 5184 "check_hlds.typecheck_info.c"
            check_hlds__typecheck_info__TypeInfo_11_11 = (MR_Word) &check_hlds__typecheck_info_scalar_common_1[4];
#line 5186 "check_hlds.typecheck_info.c"
            {
#line 5188 "check_hlds.typecheck_info.c"
              check_hlds__typecheck_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__typecheck_info__TypeInfo_11_11, ((MR_Box) (check_hlds__typecheck_info__V_4_4)), ((MR_Box) (check_hlds__typecheck_info__V_7_7)));
            }
#line 293 "typecheck_info.m"
            if (check_hlds__typecheck_info__succeeded)
#line 5193 "check_hlds.typecheck_info.c"
              {
#line 5195 "check_hlds.typecheck_info.c"
                return check_hlds__typecheck_info__succeeded = hlds__hlds_data____Unify____hlds_constraints_0_0(check_hlds__typecheck_info__V_5_5, check_hlds__typecheck_info__V_8_8);
              }
#line 293 "typecheck_info.m"
          }
#line 293 "typecheck_info.m"
      }
#line 293 "typecheck_info.m"
    return check_hlds__typecheck_info__succeeded;
#line 293 "typecheck_info.m"
  }
#line 293 "typecheck_info.m"
}

#line 1017 "typecheck_info.m"
static void MR_CALL 
check_hlds__typecheck_info__do_type_checkpoint_4_p_0(
#line 1017 "typecheck_info.m"
  MR_String check_hlds__typecheck_info__Msg_5,
#line 1017 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__Info_6)
#line 1017 "typecheck_info.m"
{
#line 1020 "typecheck_info.m"
  {
#line 1020 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 1020 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__ModuleInfo_8;
#line 1020 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__Globals_9;
#line 1020 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__Statistics_10;
#line 1020 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__TypeAssignSet_11;
#line 1020 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__VarSet_16;
#line 1024 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_33_33;
#line 1024 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_34_34;
#line 1024 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_35_35;
#line 1024 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_36_36;
#line 1024 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_37_37;
#line 1024 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_38_38;
#line 1024 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_39_39;
#line 1029 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_40_40;
#line 1029 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_41_41;
#line 1029 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_42_42;
#line 1029 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_43_43;
#line 1029 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_44_44;
#line 1029 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_45_45;
#line 1029 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_46_46;
#line 5260 "check_hlds.typecheck_info.c"
    MR_Word check_hlds__typecheck_info__TypeAssign_12;
#line 1032 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_13_13;

#line 1021 "typecheck_info.m"
    {
#line 1021 "typecheck_info.m"
      mercury__io__write_string_3_p_0((MR_String) "At ");
    }
#line 1022 "typecheck_info.m"
    {
#line 1022 "typecheck_info.m"
      mercury__io__write_string_3_p_0(check_hlds__typecheck_info__Msg_5);
    }
#line 1023 "typecheck_info.m"
    {
#line 1023 "typecheck_info.m"
      mercury__io__write_string_3_p_0((MR_String) ": ");
    }
#line 1024 "typecheck_info.m"
    check_hlds__typecheck_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_6, (MR_Integer) 0)));
#line 1024 "typecheck_info.m"
    check_hlds__typecheck_info__ModuleInfo_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_6, (MR_Integer) 1)));
#line 1024 "typecheck_info.m"
    check_hlds__typecheck_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_6, (MR_Integer) 2)));
#line 1024 "typecheck_info.m"
    check_hlds__typecheck_info__V_35_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_6, (MR_Integer) 3)));
#line 1024 "typecheck_info.m"
    check_hlds__typecheck_info__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_6, (MR_Integer) 4)));
#line 1024 "typecheck_info.m"
    check_hlds__typecheck_info__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_6, (MR_Integer) 5)));
#line 1024 "typecheck_info.m"
    check_hlds__typecheck_info__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_6, (MR_Integer) 6)));
#line 1024 "typecheck_info.m"
    check_hlds__typecheck_info__V_39_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_6, (MR_Integer) 7)));
#line 1025 "typecheck_info.m"
    {
#line 1025 "typecheck_info.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__typecheck_info__ModuleInfo_8, &check_hlds__typecheck_info__Globals_9);
    }
#line 1026 "typecheck_info.m"
    {
#line 1026 "typecheck_info.m"
      libs__globals__lookup_bool_option_3_p_0(check_hlds__typecheck_info__Globals_9, (MR_Integer) 55, &check_hlds__typecheck_info__Statistics_10);
    }
#line 1027 "typecheck_info.m"
    {
#line 1027 "typecheck_info.m"
      libs__file_util__maybe_report_stats_3_p_0(check_hlds__typecheck_info__Statistics_10);
    }
#line 1028 "typecheck_info.m"
    {
#line 1028 "typecheck_info.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
#line 1029 "typecheck_info.m"
    check_hlds__typecheck_info__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_6, (MR_Integer) 0)));
#line 1029 "typecheck_info.m"
    check_hlds__typecheck_info__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_6, (MR_Integer) 1)));
#line 1029 "typecheck_info.m"
    check_hlds__typecheck_info__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_6, (MR_Integer) 2)));
#line 1029 "typecheck_info.m"
    check_hlds__typecheck_info__V_43_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_6, (MR_Integer) 3)));
#line 1029 "typecheck_info.m"
    check_hlds__typecheck_info__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_6, (MR_Integer) 4)));
#line 1029 "typecheck_info.m"
    check_hlds__typecheck_info__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_6, (MR_Integer) 5)));
#line 1029 "typecheck_info.m"
    check_hlds__typecheck_info__TypeAssignSet_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_6, (MR_Integer) 6)));
#line 1029 "typecheck_info.m"
    check_hlds__typecheck_info__V_46_46 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_6, (MR_Integer) 7)));
#line 1041 "typecheck_info.m"
    {
#line 1041 "typecheck_info.m"
      check_hlds__typecheck_info__typecheck_info_get_varset_2_p_0(check_hlds__typecheck_info__Info_6, &check_hlds__typecheck_info__VarSet_16);
    }
#line 1031 "typecheck_info.m"
    check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__Statistics_10 == (MR_Integer) 1);
#line 1031 "typecheck_info.m"
    if (check_hlds__typecheck_info__succeeded)
#line 1031 "typecheck_info.m"
      {
#line 1032 "typecheck_info.m"
        check_hlds__typecheck_info__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck_info__TypeAssignSet_11)) == (MR_mktag((MR_Integer) 1)));
#line 1032 "typecheck_info.m"
        if (check_hlds__typecheck_info__succeeded)
#line 1032 "typecheck_info.m"
          {
#line 1032 "typecheck_info.m"
            check_hlds__typecheck_info__TypeAssign_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__TypeAssignSet_11, (MR_Integer) 0)));
#line 1032 "typecheck_info.m"
            check_hlds__typecheck_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__TypeAssignSet_11, (MR_Integer) 1)));
#line 1032 "typecheck_info.m"
          }
#line 1031 "typecheck_info.m"
      }
#line 5357 "check_hlds.typecheck_info.c"
    if (check_hlds__typecheck_info__succeeded)
#line 5359 "check_hlds.typecheck_info.c"
      {
#line 5361 "check_hlds.typecheck_info.c"
        MR_Word check_hlds__typecheck_info__VarTypes_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TypeAssign_12, (MR_Integer) 0)));
#line 5363 "check_hlds.typecheck_info.c"
        MR_Word check_hlds__typecheck_info__TypeBindings_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TypeAssign_12, (MR_Integer) 3)));
#line 5365 "check_hlds.typecheck_info.c"
        MR_Integer check_hlds__typecheck_info__Count_61;
#line 5367 "check_hlds.typecheck_info.c"
        MR_Integer check_hlds__typecheck_info__Count_80;
#line 680 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TypeAssign_12, (MR_Integer) 1)));
#line 680 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TypeAssign_12, (MR_Integer) 2)));
#line 680 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TypeAssign_12, (MR_Integer) 4)));
#line 680 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TypeAssign_12, (MR_Integer) 5)));
#line 680 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TypeAssign_12, (MR_Integer) 6)));

#line 1058 "typecheck_info.m"
        {
#line 1058 "typecheck_info.m"
          parse_tree__prog_data__vartypes_count_2_p_0(check_hlds__typecheck_info__VarTypes_14, &check_hlds__typecheck_info__Count_61);
        }
#line 1059 "typecheck_info.m"
        {
#line 1059 "typecheck_info.m"
          mercury__io__write_string_3_p_0((MR_String) "\t\140var -> type\' map");
        }
#line 1060 "typecheck_info.m"
        {
#line 1060 "typecheck_info.m"
          mercury__io__write_string_3_p_0((MR_String) ": count = ");
        }
#line 1061 "typecheck_info.m"
        {
#line 1061 "typecheck_info.m"
          mercury__io__write_int_3_p_0(check_hlds__typecheck_info__Count_61);
        }
#line 1062 "typecheck_info.m"
        {
#line 1062 "typecheck_info.m"
          mercury__io__write_string_3_p_0((MR_String) "\n");
        }
#line 1048 "typecheck_info.m"
        {
#line 1048 "typecheck_info.m"
          mercury__map__count_2_p_0((MR_Word) &check_hlds__typecheck_info_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, check_hlds__typecheck_info__TypeBindings_15, &check_hlds__typecheck_info__Count_80);
        }
#line 1049 "typecheck_info.m"
        {
#line 1049 "typecheck_info.m"
          mercury__io__write_string_3_p_0((MR_String) "\t\140type var -> type\' map");
        }
#line 1050 "typecheck_info.m"
        {
#line 1050 "typecheck_info.m"
          mercury__io__write_string_3_p_0((MR_String) ": count = ");
        }
#line 1051 "typecheck_info.m"
        {
#line 1051 "typecheck_info.m"
          mercury__io__write_int_3_p_0(check_hlds__typecheck_info__Count_80);
        }
#line 1052 "typecheck_info.m"
        {
#line 1052 "typecheck_info.m"
          mercury__io__write_string_3_p_0((MR_String) "\n");
        }
#line 1042 "typecheck_info.m"
        {
#line 1042 "typecheck_info.m"
          check_hlds__typecheck_info__write_type_assign_set_4_p_0(check_hlds__typecheck_info__TypeAssignSet_11, check_hlds__typecheck_info__VarSet_16);
#line 1042 "typecheck_info.m"
          return;
        }
#line 5437 "check_hlds.typecheck_info.c"
      }
#line 5439 "check_hlds.typecheck_info.c"
    else
#line 1042 "typecheck_info.m"
      {
#line 1042 "typecheck_info.m"
        check_hlds__typecheck_info__write_type_assign_set_4_p_0(check_hlds__typecheck_info__TypeAssignSet_11, check_hlds__typecheck_info__VarSet_16);
#line 1042 "typecheck_info.m"
        return;
      }
#line 1020 "typecheck_info.m"
  }
#line 1017 "typecheck_info.m"
}

#line 966 "typecheck_info.m"
static MR_Word MR_CALL 
check_hlds__typecheck_info__type_assign_constraints_to_pieces_list_5_f_0(
#line 966 "typecheck_info.m"
  MR_String check_hlds__typecheck_info__Operator_1,
#line 966 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__HeadVar__2_2,
#line 966 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__TypeBindings_3,
#line 966 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__TypeVarSet_4,
#line 966 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__FoundOne_5)
#line 966 "typecheck_info.m"
{
#line 969 "typecheck_info.m"
  {
#line 969 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 969 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__HeadVar__6_6;

#line 969 "typecheck_info.m"
    if ((check_hlds__typecheck_info__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 969 "typecheck_info.m"
      check_hlds__typecheck_info__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 969 "typecheck_info.m"
    else
#line 971 "typecheck_info.m"
      {
#line 971 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__Constraint_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 0)));
#line 971 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__Constraints_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 1)));
#line 971 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__ThisPieces_17;
#line 971 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__TailPieceLists_18;
#line 971 "typecheck_info.m"
        MR_String check_hlds__typecheck_info__Prefix_19;
#line 971 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__BoundConstraint_20;
#line 971 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__ProgConstraint_21;
#line 971 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_22_22;
#line 971 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_25_25;
#line 971 "typecheck_info.m"
        MR_String check_hlds__typecheck_info__V_26_26;
#line 971 "typecheck_info.m"
        MR_String check_hlds__typecheck_info__V_27_27;

#line 975 "typecheck_info.m"
        if ((check_hlds__typecheck_info__FoundOne_5 == (MR_Integer) 0))
#line 973 "typecheck_info.m"
          {
#line 974 "typecheck_info.m"
            {
#line 974 "typecheck_info.m"
              check_hlds__typecheck_info__Prefix_19 = mercury__string__f_43_43_2_f_0(check_hlds__typecheck_info__Operator_1, (MR_String) " ");
            }
#line 973 "typecheck_info.m"
          }
#line 975 "typecheck_info.m"
        else
#line 977 "typecheck_info.m"
          check_hlds__typecheck_info__Prefix_19 = (MR_String) "   ";
#line 979 "typecheck_info.m"
        {
#line 979 "typecheck_info.m"
          check_hlds__type_util__apply_rec_subst_to_constraint_3_p_0(check_hlds__typecheck_info__TypeBindings_3, check_hlds__typecheck_info__Constraint_12, &check_hlds__typecheck_info__BoundConstraint_20);
        }
#line 980 "typecheck_info.m"
        {
#line 980 "typecheck_info.m"
          hlds__hlds_data__retrieve_prog_constraint_2_p_0(check_hlds__typecheck_info__BoundConstraint_20, &check_hlds__typecheck_info__ProgConstraint_21);
        }
#line 982 "typecheck_info.m"
        {
#line 982 "typecheck_info.m"
          check_hlds__typecheck_info__V_27_27 = parse_tree__mercury_to_mercury__mercury_constraint_to_string_2_f_0(check_hlds__typecheck_info__TypeVarSet_4, check_hlds__typecheck_info__ProgConstraint_21);
        }
#line 981 "typecheck_info.m"
        {
#line 981 "typecheck_info.m"
          check_hlds__typecheck_info__V_26_26 = mercury__string__f_43_43_2_f_0(check_hlds__typecheck_info__Prefix_19, check_hlds__typecheck_info__V_27_27);
        }
#line 981 "typecheck_info.m"
        {
#line 981 "typecheck_info.m"
          check_hlds__typecheck_info__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 981 "typecheck_info.m"
          MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__V_25_25, 0) = ((MR_Box) (check_hlds__typecheck_info__V_26_26));
#line 981 "typecheck_info.m"
        }
#line 982 "typecheck_info.m"
        {
#line 982 "typecheck_info.m"
          check_hlds__typecheck_info__ThisPieces_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 982 "typecheck_info.m"
          MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__ThisPieces_17, 0) = ((MR_Box) (check_hlds__typecheck_info__V_25_25));
#line 982 "typecheck_info.m"
          MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__ThisPieces_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 982 "typecheck_info.m"
        }
#line 971 "typecheck_info.m"
        {
#line 971 "typecheck_info.m"
          check_hlds__typecheck_info__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 971 "typecheck_info.m"
          MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__V_22_22, 0) = ((MR_Box) (check_hlds__typecheck_info__ThisPieces_17));
#line 971 "typecheck_info.m"
          MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__V_22_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 971 "typecheck_info.m"
        }
#line 983 "typecheck_info.m"
        {
#line 983 "typecheck_info.m"
          check_hlds__typecheck_info__TailPieceLists_18 = check_hlds__typecheck_info__type_assign_constraints_to_pieces_list_5_f_0(check_hlds__typecheck_info__Operator_1, check_hlds__typecheck_info__Constraints_13, check_hlds__typecheck_info__TypeBindings_3, check_hlds__typecheck_info__TypeVarSet_4, (MR_Integer) 1);
        }
#line 971 "typecheck_info.m"
        {
#line 971 "typecheck_info.m"
          check_hlds__typecheck_info__HeadVar__6_6 = mercury__list__f_43_43_2_f_0((MR_Word) &check_hlds__typecheck_info_scalar_common_1[3], check_hlds__typecheck_info__V_22_22, check_hlds__typecheck_info__TailPieceLists_18);
        }
#line 971 "typecheck_info.m"
      }
#line 969 "typecheck_info.m"
    return check_hlds__typecheck_info__HeadVar__6_6;
#line 969 "typecheck_info.m"
  }
#line 966 "typecheck_info.m"
}

#line 947 "typecheck_info.m"
static void MR_CALL 
check_hlds__typecheck_info__write_type_assign_constraints_7_p_0(
#line 947 "typecheck_info.m"
  MR_String check_hlds__typecheck_info__Operator_1,
#line 947 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__HeadVar__2_2,
#line 947 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__TypeBindings_3,
#line 947 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__TypeVarSet_4,
#line 947 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__FoundOne_5)
#line 947 "typecheck_info.m"
{
#line 950 "typecheck_info.m"
  while (MR_TRUE)
#line 950 "typecheck_info.m"
    {
#line 950 "typecheck_info.m"
      /* tailcall optimized into a loop */
#line 950 "typecheck_info.m"
      {
#line 950 "typecheck_info.m"
        MR_bool check_hlds__typecheck_info__succeeded;

#line 950 "typecheck_info.m"
        if ((check_hlds__typecheck_info__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 950 "typecheck_info.m"
          {
#line 950 "typecheck_info.m"
          }
#line 950 "typecheck_info.m"
        else
#line 952 "typecheck_info.m"
          {
#line 952 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__Constraint_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 0)));
#line 952 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__Constraints_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 1)));
#line 952 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__BoundConstraint_22;
#line 952 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__ProgConstraint_23;

#line 956 "typecheck_info.m"
            if ((check_hlds__typecheck_info__FoundOne_5 == (MR_Integer) 0))
#line 954 "typecheck_info.m"
              {
#line 954 "typecheck_info.m"
                MR_Word check_hlds__typecheck_info__V_28_28;
#line 954 "typecheck_info.m"
                MR_Word check_hlds__typecheck_info__V_31_31;

#line 955 "typecheck_info.m"
                {
#line 955 "typecheck_info.m"
                  check_hlds__typecheck_info__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 955 "typecheck_info.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__V_31_31, 0) = ((MR_Box) (check_hlds__typecheck_info__Operator_1));
#line 955 "typecheck_info.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__V_31_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_info_scalar_common_1[22])));
#line 955 "typecheck_info.m"
                }
#line 955 "typecheck_info.m"
                {
#line 955 "typecheck_info.m"
                  check_hlds__typecheck_info__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 955 "typecheck_info.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__V_28_28, 0) = ((MR_Box) ((MR_String) "\n\t"));
#line 955 "typecheck_info.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__V_28_28, 1) = ((MR_Box) (check_hlds__typecheck_info__V_31_31));
#line 955 "typecheck_info.m"
                }
#line 955 "typecheck_info.m"
                {
#line 955 "typecheck_info.m"
                  mercury__io__write_strings_3_p_0(check_hlds__typecheck_info__V_28_28);
                }
#line 954 "typecheck_info.m"
              }
#line 956 "typecheck_info.m"
            else
#line 957 "typecheck_info.m"
              {
#line 958 "typecheck_info.m"
                {
#line 958 "typecheck_info.m"
                  mercury__io__write_string_3_p_0((MR_String) ",\n\t   ");
                }
#line 957 "typecheck_info.m"
              }
#line 960 "typecheck_info.m"
            {
#line 960 "typecheck_info.m"
              check_hlds__type_util__apply_rec_subst_to_constraint_3_p_0(check_hlds__typecheck_info__TypeBindings_3, check_hlds__typecheck_info__Constraint_16, &check_hlds__typecheck_info__BoundConstraint_22);
            }
#line 961 "typecheck_info.m"
            {
#line 961 "typecheck_info.m"
              hlds__hlds_data__retrieve_prog_constraint_2_p_0(check_hlds__typecheck_info__BoundConstraint_22, &check_hlds__typecheck_info__ProgConstraint_23);
            }
#line 962 "typecheck_info.m"
            {
#line 962 "typecheck_info.m"
              parse_tree__mercury_to_mercury__mercury_output_constraint_5_p_0(check_hlds__typecheck_info__TypeVarSet_4, (MR_Integer) 1, check_hlds__typecheck_info__ProgConstraint_23);
            }
#line 963 "typecheck_info.m"
            /* direct tailcall eliminated */
#line 963 "typecheck_info.m"
            {
#line 963 "typecheck_info.m"
              MR_Word check_hlds__typecheck_info__HeadVar__2__tmp_copy_2 = check_hlds__typecheck_info__Constraints_17;

#line 963 "typecheck_info.m"
              check_hlds__typecheck_info__FoundOne_5 = (MR_Integer) 1;
#line 963 "typecheck_info.m"
              check_hlds__typecheck_info__HeadVar__2_2 = check_hlds__typecheck_info__HeadVar__2__tmp_copy_2;
#line 963 "typecheck_info.m"
            }
#line 963 "typecheck_info.m"
            continue;
#line 952 "typecheck_info.m"
          }
#line 950 "typecheck_info.m"
      }
#line 950 "typecheck_info.m"
      break;
#line 950 "typecheck_info.m"
    }
#line 947 "typecheck_info.m"
}

#line 933 "typecheck_info.m"
static MR_Word MR_CALL 
check_hlds__typecheck_info__type_assign_hlds_constraints_to_pieces_3_f_0(
#line 933 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__Constraints_5,
#line 933 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__TypeBindings_6,
#line 933 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__TypeVarSet_7)
#line 933 "typecheck_info.m"
{
#line 937 "typecheck_info.m"
  {
#line 937 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 937 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__HeadVar__4_4;
#line 937 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__Pieces1_8;
#line 937 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__Pieces2_9;
#line 937 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__ConstraintsToProve_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Constraints_5, (MR_Integer) 0)));
#line 937 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__AssumedConstraints_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Constraints_5, (MR_Integer) 1)));
#line 937 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__PiecesList1_14;
#line 937 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__PiecesList2_15;
#line 938 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Constraints_5, (MR_Integer) 2)));
#line 938 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Constraints_5, (MR_Integer) 3)));

#line 940 "typecheck_info.m"
    {
#line 940 "typecheck_info.m"
      check_hlds__typecheck_info__PiecesList1_14 = check_hlds__typecheck_info__type_assign_constraints_to_pieces_list_5_f_0((MR_String) "&", check_hlds__typecheck_info__AssumedConstraints_11, check_hlds__typecheck_info__TypeBindings_6, check_hlds__typecheck_info__TypeVarSet_7, (MR_Integer) 0);
    }
#line 942 "typecheck_info.m"
    {
#line 942 "typecheck_info.m"
      check_hlds__typecheck_info__PiecesList2_15 = check_hlds__typecheck_info__type_assign_constraints_to_pieces_list_5_f_0((MR_String) "<=", check_hlds__typecheck_info__ConstraintsToProve_10, check_hlds__typecheck_info__TypeBindings_6, check_hlds__typecheck_info__TypeVarSet_7, (MR_Integer) 0);
    }
#line 944 "typecheck_info.m"
    {
#line 944 "typecheck_info.m"
      check_hlds__typecheck_info__Pieces1_8 = parse_tree__error_util__component_list_to_line_pieces_2_f_0(check_hlds__typecheck_info__PiecesList1_14, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
    }
#line 945 "typecheck_info.m"
    {
#line 945 "typecheck_info.m"
      check_hlds__typecheck_info__Pieces2_9 = parse_tree__error_util__component_list_to_line_pieces_2_f_0(check_hlds__typecheck_info__PiecesList2_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
    }
#line 937 "typecheck_info.m"
    {
#line 937 "typecheck_info.m"
      check_hlds__typecheck_info__HeadVar__4_4 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, check_hlds__typecheck_info__Pieces1_8, check_hlds__typecheck_info__Pieces2_9);
    }
#line 937 "typecheck_info.m"
    return check_hlds__typecheck_info__HeadVar__4_4;
#line 937 "typecheck_info.m"
  }
#line 933 "typecheck_info.m"
}

#line 889 "typecheck_info.m"
static MR_Word MR_CALL 
check_hlds__typecheck_info__type_assign_types_to_pieces_6_f_0(
#line 889 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__HeadVar__1_1,
#line 889 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__VarSet_2,
#line 889 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__VarTypes_3,
#line 889 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__TypeBindings_4,
#line 889 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__TypeVarSet_5,
#line 889 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__FoundOne_6)
#line 889 "typecheck_info.m"
{
#line 892 "typecheck_info.m"
  while (MR_TRUE)
#line 892 "typecheck_info.m"
    {
#line 892 "typecheck_info.m"
      /* tailcall optimized into a loop */
#line 892 "typecheck_info.m"
      {
#line 892 "typecheck_info.m"
        MR_bool check_hlds__typecheck_info__succeeded;
#line 892 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__Pieces_7;

#line 892 "typecheck_info.m"
        if ((check_hlds__typecheck_info__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 896 "typecheck_info.m"
          if ((check_hlds__typecheck_info__FoundOne_6 == (MR_Integer) 0))
#line 894 "typecheck_info.m"
            {
#line 895 "typecheck_info.m"
              check_hlds__typecheck_info__Pieces_7 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__typecheck_info_scalar_common_1[20]);
#line 894 "typecheck_info.m"
            }
#line 896 "typecheck_info.m"
          else
#line 898 "typecheck_info.m"
            check_hlds__typecheck_info__Pieces_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 892 "typecheck_info.m"
        else
#line 901 "typecheck_info.m"
          {
#line 901 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 0)));
#line 901 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__Vars_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 1)));
#line 916 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__Type_25;

#line 902 "typecheck_info.m"
            {
#line 902 "typecheck_info.m"
              check_hlds__typecheck_info__succeeded = parse_tree__prog_data__search_var_type_3_p_0(check_hlds__typecheck_info__VarTypes_3, check_hlds__typecheck_info__Var_17, &check_hlds__typecheck_info__Type_25);
            }
#line 916 "typecheck_info.m"
            if (check_hlds__typecheck_info__succeeded)
#line 909 "typecheck_info.m"
              {
#line 909 "typecheck_info.m"
                MR_Word check_hlds__typecheck_info__TypeCtorInfo_44_44;
#line 909 "typecheck_info.m"
                MR_Word check_hlds__typecheck_info__PrefixPieces_26;
#line 909 "typecheck_info.m"
                MR_String check_hlds__typecheck_info__VarStr_27;
#line 909 "typecheck_info.m"
                MR_String check_hlds__typecheck_info__TypeStr_28;
#line 909 "typecheck_info.m"
                MR_Word check_hlds__typecheck_info__AssignPieces_29;
#line 909 "typecheck_info.m"
                MR_Word check_hlds__typecheck_info__TailPieces_30;
#line 909 "typecheck_info.m"
                MR_Word check_hlds__typecheck_info__V_34_34;
#line 909 "typecheck_info.m"
                MR_Word check_hlds__typecheck_info__V_35_35;
#line 909 "typecheck_info.m"
                MR_Word check_hlds__typecheck_info__V_38_38;
#line 909 "typecheck_info.m"
                MR_Word check_hlds__typecheck_info__V_39_39;
#line 909 "typecheck_info.m"
                MR_Word check_hlds__typecheck_info__V_42_42;
#line 909 "typecheck_info.m"
                MR_Word check_hlds__typecheck_info__Type1_49;
#line 909 "typecheck_info.m"
                MR_Word check_hlds__typecheck_info__Type_50;

#line 906 "typecheck_info.m"
                if ((check_hlds__typecheck_info__FoundOne_6 == (MR_Integer) 0))
#line 908 "typecheck_info.m"
                  check_hlds__typecheck_info__PrefixPieces_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 906 "typecheck_info.m"
                else
#line 904 "typecheck_info.m"
                  {
#line 905 "typecheck_info.m"
                    check_hlds__typecheck_info__PrefixPieces_26 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__typecheck_info_scalar_common_1[14]);
#line 904 "typecheck_info.m"
                  }
#line 910 "typecheck_info.m"
                {
#line 910 "typecheck_info.m"
                  check_hlds__typecheck_info__VarStr_27 = parse_tree__mercury_to_mercury__mercury_var_to_string_3_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__typecheck_info__VarSet_2, (MR_Integer) 1, check_hlds__typecheck_info__Var_17);
                }
#line 1000 "typecheck_info.m"
                {
#line 1000 "typecheck_info.m"
                  parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(check_hlds__typecheck_info__TypeBindings_4, check_hlds__typecheck_info__Type_25, &check_hlds__typecheck_info__Type1_49);
                }
#line 1001 "typecheck_info.m"
                {
#line 1001 "typecheck_info.m"
                  parse_tree__prog_type__strip_builtin_qualifiers_from_type_2_p_0(check_hlds__typecheck_info__Type1_49, &check_hlds__typecheck_info__Type_50);
                }
#line 1002 "typecheck_info.m"
                {
#line 1002 "typecheck_info.m"
                  check_hlds__typecheck_info__TypeStr_28 = parse_tree__mercury_to_mercury__mercury_type_to_string_3_f_0(check_hlds__typecheck_info__TypeVarSet_5, (MR_Integer) 0, check_hlds__typecheck_info__Type_50);
                }
#line 912 "typecheck_info.m"
                {
#line 912 "typecheck_info.m"
                  check_hlds__typecheck_info__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 912 "typecheck_info.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__V_34_34, 0) = ((MR_Box) (check_hlds__typecheck_info__VarStr_27));
#line 912 "typecheck_info.m"
                }
#line 912 "typecheck_info.m"
                {
#line 912 "typecheck_info.m"
                  check_hlds__typecheck_info__V_39_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 912 "typecheck_info.m"
                  MR_hl_field(MR_mktag(3), check_hlds__typecheck_info__V_39_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 912 "typecheck_info.m"
                  MR_hl_field(MR_mktag(3), check_hlds__typecheck_info__V_39_39, 1) = ((MR_Box) (check_hlds__typecheck_info__TypeStr_28));
#line 912 "typecheck_info.m"
                }
#line 912 "typecheck_info.m"
                {
#line 912 "typecheck_info.m"
                  check_hlds__typecheck_info__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 912 "typecheck_info.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__V_38_38, 0) = ((MR_Box) (check_hlds__typecheck_info__V_39_39));
#line 912 "typecheck_info.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__V_38_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 912 "typecheck_info.m"
                }
#line 912 "typecheck_info.m"
                {
#line 912 "typecheck_info.m"
                  check_hlds__typecheck_info__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 912 "typecheck_info.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__V_35_35, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_info_scalar_common_1[21])));
#line 912 "typecheck_info.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__V_35_35, 1) = ((MR_Box) (check_hlds__typecheck_info__V_38_38));
#line 912 "typecheck_info.m"
                }
#line 912 "typecheck_info.m"
                {
#line 912 "typecheck_info.m"
                  check_hlds__typecheck_info__AssignPieces_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 912 "typecheck_info.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__AssignPieces_29, 0) = ((MR_Box) (check_hlds__typecheck_info__V_34_34));
#line 912 "typecheck_info.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__AssignPieces_29, 1) = ((MR_Box) (check_hlds__typecheck_info__V_35_35));
#line 912 "typecheck_info.m"
                }
#line 913 "typecheck_info.m"
                {
#line 913 "typecheck_info.m"
                  check_hlds__typecheck_info__TailPieces_30 = check_hlds__typecheck_info__type_assign_types_to_pieces_6_f_0(check_hlds__typecheck_info__Vars_18, check_hlds__typecheck_info__VarSet_2, check_hlds__typecheck_info__VarTypes_3, check_hlds__typecheck_info__TypeBindings_4, check_hlds__typecheck_info__TypeVarSet_5, (MR_Integer) 1);
                }
#line 5963 "check_hlds.typecheck_info.c"
                check_hlds__typecheck_info__TypeCtorInfo_44_44 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 915 "typecheck_info.m"
                {
#line 915 "typecheck_info.m"
                  check_hlds__typecheck_info__V_42_42 = mercury__list__f_43_43_2_f_0(check_hlds__typecheck_info__TypeCtorInfo_44_44, check_hlds__typecheck_info__AssignPieces_29, check_hlds__typecheck_info__TailPieces_30);
                }
#line 915 "typecheck_info.m"
                {
#line 915 "typecheck_info.m"
                  check_hlds__typecheck_info__Pieces_7 = mercury__list__f_43_43_2_f_0(check_hlds__typecheck_info__TypeCtorInfo_44_44, check_hlds__typecheck_info__PrefixPieces_26, check_hlds__typecheck_info__V_42_42);
                }
#line 909 "typecheck_info.m"
              }
#line 916 "typecheck_info.m"
            else
#line 917 "typecheck_info.m"
              {
#line 917 "typecheck_info.m"
                /* direct tailcall eliminated */
#line 917 "typecheck_info.m"
                {
#line 917 "typecheck_info.m"
                  MR_Word check_hlds__typecheck_info__HeadVar__1__tmp_copy_1 = check_hlds__typecheck_info__Vars_18;

#line 917 "typecheck_info.m"
                  check_hlds__typecheck_info__HeadVar__1_1 = check_hlds__typecheck_info__HeadVar__1__tmp_copy_1;
#line 917 "typecheck_info.m"
                }
#line 917 "typecheck_info.m"
                continue;
#line 917 "typecheck_info.m"
              }
#line 901 "typecheck_info.m"
          }
#line 892 "typecheck_info.m"
        return check_hlds__typecheck_info__Pieces_7;
#line 892 "typecheck_info.m"
      }
#line 892 "typecheck_info.m"
      break;
#line 892 "typecheck_info.m"
    }
#line 889 "typecheck_info.m"
}

#line 860 "typecheck_info.m"
static void MR_CALL 
check_hlds__typecheck_info__write_type_assign_types_8_p_0(
#line 860 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__HeadVar__1_1,
#line 860 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__VarSet_2,
#line 860 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__VarTypes_3,
#line 860 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__TypeBindings_4,
#line 860 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__TypeVarSet_5,
#line 860 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__FoundOne_6)
#line 860 "typecheck_info.m"
{
#line 863 "typecheck_info.m"
  while (MR_TRUE)
#line 863 "typecheck_info.m"
    {
#line 863 "typecheck_info.m"
      /* tailcall optimized into a loop */
#line 863 "typecheck_info.m"
      {
#line 863 "typecheck_info.m"
        MR_bool check_hlds__typecheck_info__succeeded;

#line 863 "typecheck_info.m"
        if ((check_hlds__typecheck_info__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 867 "typecheck_info.m"
          if ((check_hlds__typecheck_info__FoundOne_6 == (MR_Integer) 0))
#line 865 "typecheck_info.m"
            {
#line 866 "typecheck_info.m"
              {
#line 866 "typecheck_info.m"
                mercury__io__write_string_3_p_0((MR_String) "(No variables were assigned a type)");
#line 866 "typecheck_info.m"
                return;
              }
#line 865 "typecheck_info.m"
            }
#line 867 "typecheck_info.m"
          else
#line 868 "typecheck_info.m"
            {
#line 868 "typecheck_info.m"
            }
#line 863 "typecheck_info.m"
        else
#line 871 "typecheck_info.m"
          {
#line 871 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 0)));
#line 871 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__Vars_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 1)));
#line 884 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__Type_27;

#line 872 "typecheck_info.m"
            {
#line 872 "typecheck_info.m"
              check_hlds__typecheck_info__succeeded = parse_tree__prog_data__search_var_type_3_p_0(check_hlds__typecheck_info__VarTypes_3, check_hlds__typecheck_info__Var_19, &check_hlds__typecheck_info__Type_27);
            }
#line 884 "typecheck_info.m"
            if (check_hlds__typecheck_info__succeeded)
#line 878 "typecheck_info.m"
              {
#line 878 "typecheck_info.m"
                MR_Word check_hlds__typecheck_info__Type1_47;
#line 878 "typecheck_info.m"
                MR_Word check_hlds__typecheck_info__Type_48;

#line 876 "typecheck_info.m"
                if ((check_hlds__typecheck_info__FoundOne_6 == (MR_Integer) 0))
#line 877 "typecheck_info.m"
                  {
#line 877 "typecheck_info.m"
                  }
#line 876 "typecheck_info.m"
                else
#line 874 "typecheck_info.m"
                  {
#line 875 "typecheck_info.m"
                    {
#line 875 "typecheck_info.m"
                      mercury__io__write_string_3_p_0((MR_String) "\n\t");
                    }
#line 874 "typecheck_info.m"
                  }
#line 879 "typecheck_info.m"
                {
#line 879 "typecheck_info.m"
                  parse_tree__mercury_to_mercury__mercury_output_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__typecheck_info__VarSet_2, (MR_Integer) 1, check_hlds__typecheck_info__Var_19);
                }
#line 880 "typecheck_info.m"
                {
#line 880 "typecheck_info.m"
                  mercury__io__write_string_3_p_0((MR_String) ": ");
                }
#line 993 "typecheck_info.m"
                {
#line 993 "typecheck_info.m"
                  parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(check_hlds__typecheck_info__TypeBindings_4, check_hlds__typecheck_info__Type_27, &check_hlds__typecheck_info__Type1_47);
                }
#line 994 "typecheck_info.m"
                {
#line 994 "typecheck_info.m"
                  parse_tree__prog_type__strip_builtin_qualifiers_from_type_2_p_0(check_hlds__typecheck_info__Type1_47, &check_hlds__typecheck_info__Type_48);
                }
#line 995 "typecheck_info.m"
                {
#line 995 "typecheck_info.m"
                  parse_tree__mercury_to_mercury__mercury_output_type_5_p_0(check_hlds__typecheck_info__TypeVarSet_5, (MR_Integer) 1, check_hlds__typecheck_info__Type_48);
                }
#line 882 "typecheck_info.m"
                /* direct tailcall eliminated */
#line 882 "typecheck_info.m"
                {
#line 882 "typecheck_info.m"
                  MR_Word check_hlds__typecheck_info__HeadVar__1__tmp_copy_1 = check_hlds__typecheck_info__Vars_20;

#line 882 "typecheck_info.m"
                  check_hlds__typecheck_info__FoundOne_6 = (MR_Integer) 1;
#line 882 "typecheck_info.m"
                  check_hlds__typecheck_info__HeadVar__1_1 = check_hlds__typecheck_info__HeadVar__1__tmp_copy_1;
#line 882 "typecheck_info.m"
                }
#line 882 "typecheck_info.m"
                continue;
#line 878 "typecheck_info.m"
              }
#line 884 "typecheck_info.m"
            else
#line 885 "typecheck_info.m"
              {
#line 885 "typecheck_info.m"
                /* direct tailcall eliminated */
#line 885 "typecheck_info.m"
                {
#line 885 "typecheck_info.m"
                  MR_Word check_hlds__typecheck_info__HeadVar__1__tmp_copy_1 = check_hlds__typecheck_info__Vars_20;

#line 885 "typecheck_info.m"
                  check_hlds__typecheck_info__HeadVar__1_1 = check_hlds__typecheck_info__HeadVar__1__tmp_copy_1;
#line 885 "typecheck_info.m"
                }
#line 885 "typecheck_info.m"
                continue;
#line 885 "typecheck_info.m"
              }
#line 871 "typecheck_info.m"
          }
#line 863 "typecheck_info.m"
      }
#line 863 "typecheck_info.m"
      break;
#line 863 "typecheck_info.m"
    }
#line 860 "typecheck_info.m"
}

#line 824 "typecheck_info.m"
static MR_Word MR_CALL 
check_hlds__typecheck_info__type_assign_to_pieces_3_f_0(
#line 824 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__TypeAssign_5,
#line 824 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__MaybeSeq_6,
#line 824 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__VarSet_7)
#line 824 "typecheck_info.m"
{
#line 827 "typecheck_info.m"
  {
#line 827 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 827 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__Pieces_8;
#line 827 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__TypeCtorInfo_53_53;
#line 827 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__SeqPieces_11;
#line 827 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__HeadTypeParams_12;
#line 827 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__VarTypes_13;
#line 827 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__Constraints_14;
#line 827 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__TypeBindings_15;
#line 827 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__TypeVarSet_16;
#line 827 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__Vars_17;
#line 827 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__HeadPieces_18;
#line 827 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__TypePieces_22;
#line 827 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__ConstraintPieces_23;
#line 827 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_46_46;
#line 827 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_47_47;
#line 827 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_48_48;
#line 682 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_59_59;
#line 682 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_60_60;

#line 836 "typecheck_info.m"
    if ((check_hlds__typecheck_info__MaybeSeq_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 838 "typecheck_info.m"
      check_hlds__typecheck_info__SeqPieces_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 836 "typecheck_info.m"
    else
#line 829 "typecheck_info.m"
      {
#line 829 "typecheck_info.m"
        MR_Integer check_hlds__typecheck_info__N_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__MaybeSeq_6, (MR_Integer) 0)));
#line 829 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__SeqPieces0_10;
#line 829 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_26_26;
#line 829 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_27_27;

#line 830 "typecheck_info.m"
        {
#line 830 "typecheck_info.m"
          check_hlds__typecheck_info__V_27_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 830 "typecheck_info.m"
          MR_hl_field(MR_mktag(3), check_hlds__typecheck_info__V_27_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 830 "typecheck_info.m"
          MR_hl_field(MR_mktag(3), check_hlds__typecheck_info__V_27_27, 1) = ((MR_Box) (check_hlds__typecheck_info__N_9));
#line 830 "typecheck_info.m"
        }
#line 830 "typecheck_info.m"
        {
#line 830 "typecheck_info.m"
          check_hlds__typecheck_info__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 830 "typecheck_info.m"
          MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__V_26_26, 0) = ((MR_Box) (check_hlds__typecheck_info__V_27_27));
#line 830 "typecheck_info.m"
          MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__V_26_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_info_scalar_common_1[16])));
#line 830 "typecheck_info.m"
        }
#line 830 "typecheck_info.m"
        {
#line 830 "typecheck_info.m"
          check_hlds__typecheck_info__SeqPieces0_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 830 "typecheck_info.m"
          MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__SeqPieces0_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_info_scalar_common_1[18])));
#line 830 "typecheck_info.m"
          MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__SeqPieces0_10, 1) = ((MR_Box) (check_hlds__typecheck_info__V_26_26));
#line 830 "typecheck_info.m"
        }
#line 831 "typecheck_info.m"
        check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__N_9 > (MR_Integer) 1);
#line 833 "typecheck_info.m"
        if (check_hlds__typecheck_info__succeeded)
#line 832 "typecheck_info.m"
          {
#line 832 "typecheck_info.m"
            {
#line 832 "typecheck_info.m"
              check_hlds__typecheck_info__SeqPieces_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 832 "typecheck_info.m"
              MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__SeqPieces_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 832 "typecheck_info.m"
              MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__SeqPieces_11, 1) = ((MR_Box) (check_hlds__typecheck_info__SeqPieces0_10));
#line 832 "typecheck_info.m"
            }
#line 832 "typecheck_info.m"
          }
#line 833 "typecheck_info.m"
        else
#line 834 "typecheck_info.m"
          check_hlds__typecheck_info__SeqPieces_11 = check_hlds__typecheck_info__SeqPieces0_10;
#line 829 "typecheck_info.m"
      }
#line 682 "typecheck_info.m"
    check_hlds__typecheck_info__VarTypes_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TypeAssign_5, (MR_Integer) 0)));
#line 682 "typecheck_info.m"
    check_hlds__typecheck_info__TypeVarSet_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TypeAssign_5, (MR_Integer) 1)));
#line 682 "typecheck_info.m"
    check_hlds__typecheck_info__HeadTypeParams_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TypeAssign_5, (MR_Integer) 2)));
#line 682 "typecheck_info.m"
    check_hlds__typecheck_info__TypeBindings_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TypeAssign_5, (MR_Integer) 3)));
#line 682 "typecheck_info.m"
    check_hlds__typecheck_info__Constraints_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TypeAssign_5, (MR_Integer) 4)));
#line 682 "typecheck_info.m"
    check_hlds__typecheck_info__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TypeAssign_5, (MR_Integer) 5)));
#line 682 "typecheck_info.m"
    check_hlds__typecheck_info__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TypeAssign_5, (MR_Integer) 6)));
#line 845 "typecheck_info.m"
    {
#line 845 "typecheck_info.m"
      parse_tree__prog_data__vartypes_vars_2_p_0(check_hlds__typecheck_info__VarTypes_13, &check_hlds__typecheck_info__Vars_17);
    }
#line 849 "typecheck_info.m"
    if ((check_hlds__typecheck_info__HeadTypeParams_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 848 "typecheck_info.m"
      check_hlds__typecheck_info__HeadPieces_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 849 "typecheck_info.m"
    else
#line 850 "typecheck_info.m"
      {
#line 850 "typecheck_info.m"
        MR_String check_hlds__typecheck_info__VarsStr_21;
#line 850 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_37_37;
#line 850 "typecheck_info.m"
        MR_String check_hlds__typecheck_info__V_38_38;
#line 850 "typecheck_info.m"
        MR_String check_hlds__typecheck_info__V_40_40;

#line 851 "typecheck_info.m"
        {
#line 851 "typecheck_info.m"
          check_hlds__typecheck_info__VarsStr_21 = parse_tree__mercury_to_mercury__mercury_vars_to_string_3_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, check_hlds__typecheck_info__TypeVarSet_16, (MR_Integer) 1, check_hlds__typecheck_info__HeadTypeParams_12);
        }
#line 852 "typecheck_info.m"
        {
#line 852 "typecheck_info.m"
          check_hlds__typecheck_info__V_40_40 = mercury__string__f_43_43_2_f_0(check_hlds__typecheck_info__VarsStr_21, (MR_String) "]");
        }
#line 852 "typecheck_info.m"
        {
#line 852 "typecheck_info.m"
          check_hlds__typecheck_info__V_38_38 = mercury__string__f_43_43_2_f_0((MR_String) "some [", check_hlds__typecheck_info__V_40_40);
        }
#line 852 "typecheck_info.m"
        {
#line 852 "typecheck_info.m"
          check_hlds__typecheck_info__V_37_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 852 "typecheck_info.m"
          MR_hl_field(MR_mktag(3), check_hlds__typecheck_info__V_37_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 852 "typecheck_info.m"
          MR_hl_field(MR_mktag(3), check_hlds__typecheck_info__V_37_37, 1) = ((MR_Box) (check_hlds__typecheck_info__V_38_38));
#line 852 "typecheck_info.m"
        }
#line 852 "typecheck_info.m"
        {
#line 852 "typecheck_info.m"
          check_hlds__typecheck_info__HeadPieces_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 852 "typecheck_info.m"
          MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__HeadPieces_18, 0) = ((MR_Box) (check_hlds__typecheck_info__V_37_37));
#line 852 "typecheck_info.m"
          MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__HeadPieces_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_info_scalar_common_1[14])));
#line 852 "typecheck_info.m"
        }
#line 850 "typecheck_info.m"
      }
#line 854 "typecheck_info.m"
    {
#line 854 "typecheck_info.m"
      check_hlds__typecheck_info__TypePieces_22 = check_hlds__typecheck_info__type_assign_types_to_pieces_6_f_0(check_hlds__typecheck_info__Vars_17, check_hlds__typecheck_info__VarSet_7, check_hlds__typecheck_info__VarTypes_13, check_hlds__typecheck_info__TypeBindings_15, check_hlds__typecheck_info__TypeVarSet_16, (MR_Integer) 0);
    }
#line 856 "typecheck_info.m"
    {
#line 856 "typecheck_info.m"
      check_hlds__typecheck_info__ConstraintPieces_23 = check_hlds__typecheck_info__type_assign_hlds_constraints_to_pieces_3_f_0(check_hlds__typecheck_info__Constraints_14, check_hlds__typecheck_info__TypeBindings_15, check_hlds__typecheck_info__TypeVarSet_16);
    }
#line 6376 "check_hlds.typecheck_info.c"
    check_hlds__typecheck_info__TypeCtorInfo_53_53 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 858 "typecheck_info.m"
    {
#line 858 "typecheck_info.m"
      check_hlds__typecheck_info__V_48_48 = mercury__list__f_43_43_2_f_0(check_hlds__typecheck_info__TypeCtorInfo_53_53, check_hlds__typecheck_info__ConstraintPieces_23, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__typecheck_info_scalar_common_1[14]));
    }
#line 858 "typecheck_info.m"
    {
#line 858 "typecheck_info.m"
      check_hlds__typecheck_info__V_47_47 = mercury__list__f_43_43_2_f_0(check_hlds__typecheck_info__TypeCtorInfo_53_53, check_hlds__typecheck_info__TypePieces_22, check_hlds__typecheck_info__V_48_48);
    }
#line 858 "typecheck_info.m"
    {
#line 858 "typecheck_info.m"
      check_hlds__typecheck_info__V_46_46 = mercury__list__f_43_43_2_f_0(check_hlds__typecheck_info__TypeCtorInfo_53_53, check_hlds__typecheck_info__HeadPieces_18, check_hlds__typecheck_info__V_47_47);
    }
#line 858 "typecheck_info.m"
    {
#line 858 "typecheck_info.m"
      check_hlds__typecheck_info__Pieces_8 = mercury__list__f_43_43_2_f_0(check_hlds__typecheck_info__TypeCtorInfo_53_53, check_hlds__typecheck_info__SeqPieces_11, check_hlds__typecheck_info__V_46_46);
    }
#line 827 "typecheck_info.m"
    return check_hlds__typecheck_info__Pieces_8;
#line 827 "typecheck_info.m"
  }
#line 824 "typecheck_info.m"
}

#line 800 "typecheck_info.m"
static void MR_CALL 
check_hlds__typecheck_info__write_type_assign_4_p_0(
#line 800 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__TypeAssign_5,
#line 800 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__VarSet_6)
#line 800 "typecheck_info.m"
{
#line 803 "typecheck_info.m"
  {
#line 803 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 803 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__HeadTypeParams_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TypeAssign_5, (MR_Integer) 2)));
#line 803 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__VarTypes_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TypeAssign_5, (MR_Integer) 0)));
#line 803 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__Constraints_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TypeAssign_5, (MR_Integer) 4)));
#line 803 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__TypeBindings_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TypeAssign_5, (MR_Integer) 3)));
#line 803 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__TypeVarSet_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TypeAssign_5, (MR_Integer) 1)));
#line 803 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__Vars_13;
#line 803 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__ConstraintsToProve_71;
#line 803 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__AssumedConstraints_72;
#line 682 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TypeAssign_5, (MR_Integer) 5)));
#line 682 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TypeAssign_5, (MR_Integer) 6)));
#line 926 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_73_73;
#line 926 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_74_74;

#line 809 "typecheck_info.m"
    {
#line 809 "typecheck_info.m"
      parse_tree__prog_data__vartypes_vars_2_p_0(check_hlds__typecheck_info__VarTypes_9, &check_hlds__typecheck_info__Vars_13);
    }
#line 812 "typecheck_info.m"
    if ((check_hlds__typecheck_info__HeadTypeParams_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 811 "typecheck_info.m"
      {
#line 811 "typecheck_info.m"
      }
#line 812 "typecheck_info.m"
    else
#line 813 "typecheck_info.m"
      {
#line 814 "typecheck_info.m"
        {
#line 814 "typecheck_info.m"
          mercury__io__write_string_3_p_0((MR_String) "some [");
        }
#line 815 "typecheck_info.m"
        {
#line 815 "typecheck_info.m"
          parse_tree__mercury_to_mercury__mercury_output_vars_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, check_hlds__typecheck_info__TypeVarSet_12, (MR_Integer) 1, check_hlds__typecheck_info__HeadTypeParams_8);
        }
#line 816 "typecheck_info.m"
        {
#line 816 "typecheck_info.m"
          mercury__io__write_string_3_p_0((MR_String) "]\n\t");
        }
#line 813 "typecheck_info.m"
      }
#line 818 "typecheck_info.m"
    {
#line 818 "typecheck_info.m"
      check_hlds__typecheck_info__write_type_assign_types_8_p_0(check_hlds__typecheck_info__Vars_13, check_hlds__typecheck_info__VarSet_6, check_hlds__typecheck_info__VarTypes_9, check_hlds__typecheck_info__TypeBindings_11, check_hlds__typecheck_info__TypeVarSet_12, (MR_Integer) 0);
    }
#line 926 "typecheck_info.m"
    check_hlds__typecheck_info__ConstraintsToProve_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Constraints_10, (MR_Integer) 0)));
#line 926 "typecheck_info.m"
    check_hlds__typecheck_info__AssumedConstraints_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Constraints_10, (MR_Integer) 1)));
#line 926 "typecheck_info.m"
    check_hlds__typecheck_info__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Constraints_10, (MR_Integer) 2)));
#line 926 "typecheck_info.m"
    check_hlds__typecheck_info__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Constraints_10, (MR_Integer) 3)));
#line 928 "typecheck_info.m"
    {
#line 928 "typecheck_info.m"
      check_hlds__typecheck_info__write_type_assign_constraints_7_p_0((MR_String) "&", check_hlds__typecheck_info__AssumedConstraints_72, check_hlds__typecheck_info__TypeBindings_11, check_hlds__typecheck_info__TypeVarSet_12, (MR_Integer) 0);
    }
#line 930 "typecheck_info.m"
    {
#line 930 "typecheck_info.m"
      check_hlds__typecheck_info__write_type_assign_constraints_7_p_0((MR_String) "<=", check_hlds__typecheck_info__ConstraintsToProve_71, check_hlds__typecheck_info__TypeBindings_11, check_hlds__typecheck_info__TypeVarSet_12, (MR_Integer) 0);
    }
#line 822 "typecheck_info.m"
    {
#line 822 "typecheck_info.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
#line 822 "typecheck_info.m"
      return;
    }
#line 803 "typecheck_info.m"
  }
#line 800 "typecheck_info.m"
}

#line 573 "typecheck_info.m"
static MR_bool MR_CALL 
check_hlds__typecheck_info__tvar_maps_to_tvar_3_p_0(
#line 573 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__TypeBindings_4,
#line 573 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__TVar0_5,
#line 573 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__TVar_6)
#line 573 "typecheck_info.m"
{
#line 579 "typecheck_info.m"
  while (MR_TRUE)
#line 579 "typecheck_info.m"
    {
#line 579 "typecheck_info.m"
      /* tailcall optimized into a loop */
#line 579 "typecheck_info.m"
      {
#line 579 "typecheck_info.m"
        MR_bool check_hlds__typecheck_info__succeeded;
#line 579 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__Type_7;
#line 576 "typecheck_info.m"
        MR_Box check_hlds__typecheck_info__conv0_Type_7;

#line 576 "typecheck_info.m"
        {
#line 576 "typecheck_info.m"
          check_hlds__typecheck_info__succeeded = mercury__map__search_3_p_0((MR_Word) &check_hlds__typecheck_info_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, check_hlds__typecheck_info__TypeBindings_4, ((MR_Box) (check_hlds__typecheck_info__TVar0_5)), &check_hlds__typecheck_info__conv0_Type_7);
        }
#line 576 "typecheck_info.m"
        if (check_hlds__typecheck_info__succeeded)
#line 576 "typecheck_info.m"
          {
#line 576 "typecheck_info.m"
            check_hlds__typecheck_info__Type_7 = ((MR_Word) check_hlds__typecheck_info__conv0_Type_7);
#line 576 "typecheck_info.m"
            check_hlds__typecheck_info__succeeded = MR_TRUE;
#line 576 "typecheck_info.m"
          }
#line 579 "typecheck_info.m"
        if (check_hlds__typecheck_info__succeeded)
#line 577 "typecheck_info.m"
          {
#line 577 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__TVar1_8;
#line 577 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__V_9_9;

#line 577 "typecheck_info.m"
            check_hlds__typecheck_info__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck_info__Type_7)) == (MR_mktag((MR_Integer) 0)));
#line 577 "typecheck_info.m"
            if (check_hlds__typecheck_info__succeeded)
#line 577 "typecheck_info.m"
              {
#line 577 "typecheck_info.m"
                check_hlds__typecheck_info__TVar1_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Type_7, (MR_Integer) 0)));
#line 577 "typecheck_info.m"
                check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Type_7, (MR_Integer) 1)));
#line 578 "typecheck_info.m"
                /* direct tailcall eliminated */
#line 578 "typecheck_info.m"
                {
#line 578 "typecheck_info.m"
                  MR_Word check_hlds__typecheck_info__TVar0__tmp_copy_5 = check_hlds__typecheck_info__TVar1_8;

#line 578 "typecheck_info.m"
                  check_hlds__typecheck_info__TVar0_5 = check_hlds__typecheck_info__TVar0__tmp_copy_5;
#line 578 "typecheck_info.m"
                }
#line 578 "typecheck_info.m"
                continue;
#line 577 "typecheck_info.m"
              }
#line 577 "typecheck_info.m"
          }
#line 579 "typecheck_info.m"
        else
#line 580 "typecheck_info.m"
          {
#line 580 "typecheck_info.m"
            *check_hlds__typecheck_info__TVar_6 = check_hlds__typecheck_info__TVar0_5;
#line 580 "typecheck_info.m"
            check_hlds__typecheck_info__succeeded = MR_TRUE;
#line 580 "typecheck_info.m"
          }
#line 579 "typecheck_info.m"
        return check_hlds__typecheck_info__succeeded;
#line 579 "typecheck_info.m"
      }
#line 579 "typecheck_info.m"
      break;
#line 579 "typecheck_info.m"
    }
#line 573 "typecheck_info.m"
}

#line 559 "typecheck_info.m"
static void MR_CALL 
check_hlds__typecheck_info__get_existq_tvar_renaming_2_5_p_0(
#line 559 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__OldHeadTypeParams_6,
#line 559 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__TypeBindings_7,
#line 559 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__TVar_8,
#line 559 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__STATE_VARIABLE_Renaming_0_11,
#line 559 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__STATE_VARIABLE_Renaming_12)
#line 559 "typecheck_info.m"
{
#line 569 "typecheck_info.m"
  {
#line 569 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 569 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__NewTVar_10;
#line 565 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__TypeInfo_16_16;
#line 566 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__TypeInfo_14_14;

#line 564 "typecheck_info.m"
    {
#line 564 "typecheck_info.m"
      check_hlds__typecheck_info__succeeded = check_hlds__typecheck_info__tvar_maps_to_tvar_3_p_0(check_hlds__typecheck_info__TypeBindings_7, check_hlds__typecheck_info__TVar_8, &check_hlds__typecheck_info__NewTVar_10);
    }
#line 564 "typecheck_info.m"
    if (check_hlds__typecheck_info__succeeded)
#line 564 "typecheck_info.m"
      {
#line 6643 "check_hlds.typecheck_info.c"
        check_hlds__typecheck_info__TypeInfo_16_16 = (MR_Word) &check_hlds__typecheck_info_scalar_common_1[0];
#line 565 "typecheck_info.m"
        {
#line 565 "typecheck_info.m"
          check_hlds__typecheck_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__typecheck_info__TypeInfo_16_16, ((MR_Box) (check_hlds__typecheck_info__NewTVar_10)), ((MR_Box) (check_hlds__typecheck_info__TVar_8)));
        }
#line 565 "typecheck_info.m"
        check_hlds__typecheck_info__succeeded = !(check_hlds__typecheck_info__succeeded);
#line 564 "typecheck_info.m"
        if (check_hlds__typecheck_info__succeeded)
#line 564 "typecheck_info.m"
          {
#line 6656 "check_hlds.typecheck_info.c"
            check_hlds__typecheck_info__TypeInfo_14_14 = (MR_Word) &check_hlds__typecheck_info_scalar_common_1[0];
#line 566 "typecheck_info.m"
            {
#line 566 "typecheck_info.m"
              check_hlds__typecheck_info__succeeded = mercury__list__member_2_p_0(check_hlds__typecheck_info__TypeInfo_14_14, ((MR_Box) (check_hlds__typecheck_info__NewTVar_10)), check_hlds__typecheck_info__OldHeadTypeParams_6);
            }
#line 566 "typecheck_info.m"
            check_hlds__typecheck_info__succeeded = !(check_hlds__typecheck_info__succeeded);
#line 564 "typecheck_info.m"
          }
#line 564 "typecheck_info.m"
      }
#line 569 "typecheck_info.m"
    if (check_hlds__typecheck_info__succeeded)
#line 568 "typecheck_info.m"
      {
#line 568 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__TypeInfo_15_15 = (MR_Word) &check_hlds__typecheck_info_scalar_common_1[0];

#line 568 "typecheck_info.m"
        {
#line 568 "typecheck_info.m"
          mercury__map__det_insert_4_p_0(check_hlds__typecheck_info__TypeInfo_15_15, check_hlds__typecheck_info__TypeInfo_15_15, ((MR_Box) (check_hlds__typecheck_info__TVar_8)), ((MR_Box) (check_hlds__typecheck_info__NewTVar_10)), check_hlds__typecheck_info__STATE_VARIABLE_Renaming_0_11, check_hlds__typecheck_info__STATE_VARIABLE_Renaming_12);
#line 568 "typecheck_info.m"
          return;
        }
#line 568 "typecheck_info.m"
      }
#line 569 "typecheck_info.m"
    else
#line 568 "typecheck_info.m"
      *check_hlds__typecheck_info__STATE_VARIABLE_Renaming_12 = check_hlds__typecheck_info__STATE_VARIABLE_Renaming_0_11;
#line 569 "typecheck_info.m"
  }
#line 559 "typecheck_info.m"
}

#line 556 "typecheck_info.m"
static void MR_CALL 
check_hlds__typecheck_info__get_existq_tvar_renaming_4_p_0_1(
#line 556 "typecheck_info.m"
  MR_Box check_hlds__typecheck_info__closure_arg,
#line 556 "typecheck_info.m"
  MR_Box check_hlds__typecheck_info__wrapper_arg_1,
#line 556 "typecheck_info.m"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2,
#line 556 "typecheck_info.m"
  MR_Box * check_hlds__typecheck_info__wrapper_arg_3)
#line 556 "typecheck_info.m"
{
#line 556 "typecheck_info.m"
  {
#line 556 "typecheck_info.m"
    MR_Box check_hlds__typecheck_info__closure = check_hlds__typecheck_info__closure_arg;
#line 556 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__conv0_STATE_VARIABLE_Renaming_12;

#line 556 "typecheck_info.m"
    {
#line 556 "typecheck_info.m"
      check_hlds__typecheck_info__get_existq_tvar_renaming_2_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__typecheck_info__wrapper_arg_1), ((MR_Word) check_hlds__typecheck_info__wrapper_arg_2), &check_hlds__typecheck_info__conv0_STATE_VARIABLE_Renaming_12);
    }
#line 556 "typecheck_info.m"
    *check_hlds__typecheck_info__wrapper_arg_3 = ((MR_Box) (check_hlds__typecheck_info__conv0_STATE_VARIABLE_Renaming_12));
#line 556 "typecheck_info.m"
  }
#line 556 "typecheck_info.m"
}

#line 551 "typecheck_info.m"
static void MR_CALL 
check_hlds__typecheck_info__get_existq_tvar_renaming_4_p_0(
#line 551 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__OldHeadTypeParams_5,
#line 551 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__ExistQVars_6,
#line 551 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__TypeBindings_7,
#line 551 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__ExistTypeRenaming_8)
#line 551 "typecheck_info.m"
{
#line 555 "typecheck_info.m"
  {
#line 555 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 555 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__TypeInfo_14_14;
#line 555 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_9_9;
#line 555 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_10_10;
#line 556 "typecheck_info.m"
    MR_Box check_hlds__typecheck_info__conv1_ExistTypeRenaming_8;

#line 556 "typecheck_info.m"
    {
#line 556 "typecheck_info.m"
      check_hlds__typecheck_info__V_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 556 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_9_9, 0) = ((MR_Box) (&check_hlds__typecheck_info_scalar_common_4[1]));
#line 556 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_9_9, 1) = ((MR_Box) (check_hlds__typecheck_info__get_existq_tvar_renaming_4_p_0_1));
#line 556 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_9_9, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 556 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_9_9, 3) = ((MR_Box) (check_hlds__typecheck_info__OldHeadTypeParams_5));
#line 556 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_9_9, 4) = ((MR_Box) (check_hlds__typecheck_info__TypeBindings_7));
#line 556 "typecheck_info.m"
    }
#line 6768 "check_hlds.typecheck_info.c"
    check_hlds__typecheck_info__TypeInfo_14_14 = (MR_Word) &check_hlds__typecheck_info_scalar_common_1[0];
#line 557 "typecheck_info.m"
    {
#line 557 "typecheck_info.m"
      check_hlds__typecheck_info__V_10_10 = mercury__map__init_0_f_0(check_hlds__typecheck_info__TypeInfo_14_14, check_hlds__typecheck_info__TypeInfo_14_14);
    }
#line 556 "typecheck_info.m"
    {
#line 556 "typecheck_info.m"
      mercury__list__foldl_4_p_0(check_hlds__typecheck_info__TypeInfo_14_14, (MR_Word) &check_hlds__typecheck_info_scalar_common_2[1], check_hlds__typecheck_info__V_9_9, check_hlds__typecheck_info__ExistQVars_6, ((MR_Box) (check_hlds__typecheck_info__V_10_10)), &check_hlds__typecheck_info__conv1_ExistTypeRenaming_8);
    }
#line 556 "typecheck_info.m"
    *check_hlds__typecheck_info__ExistTypeRenaming_8 = ((MR_Word) check_hlds__typecheck_info__conv1_ExistTypeRenaming_8);
#line 555 "typecheck_info.m"
  }
#line 551 "typecheck_info.m"
}

#line 539 "typecheck_info.m"
static void MR_CALL 
check_hlds__typecheck_info__expand_types_5_p_0(
#line 539 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__TypeSubst_6,
#line 539 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__Type0_7,
#line 539 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__Type_8,
#line 539 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__STATE_VARIABLE_TypeVarsSet_0_11,
#line 539 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__STATE_VARIABLE_TypeVarsSet_12)
#line 539 "typecheck_info.m"
{
#line 542 "typecheck_info.m"
  {
#line 542 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 542 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__TypeVars_10;

#line 543 "typecheck_info.m"
    {
#line 543 "typecheck_info.m"
      parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(check_hlds__typecheck_info__TypeSubst_6, check_hlds__typecheck_info__Type0_7, check_hlds__typecheck_info__Type_8);
    }
#line 544 "typecheck_info.m"
    {
#line 544 "typecheck_info.m"
      parse_tree__prog_type__type_vars_2_p_0(*check_hlds__typecheck_info__Type_8, &check_hlds__typecheck_info__TypeVars_10);
    }
#line 545 "typecheck_info.m"
    {
#line 545 "typecheck_info.m"
      mercury__set__insert_list_3_p_0((MR_Word) &check_hlds__typecheck_info_scalar_common_1[0], check_hlds__typecheck_info__TypeVars_10, check_hlds__typecheck_info__STATE_VARIABLE_TypeVarsSet_0_11, check_hlds__typecheck_info__STATE_VARIABLE_TypeVarsSet_12);
#line 545 "typecheck_info.m"
      return;
    }
#line 542 "typecheck_info.m"
  }
#line 539 "typecheck_info.m"
}

#line 371 "typecheck_info.m"
void MR_CALL 
check_hlds__typecheck_info__type_checkpoint_4_p_0(
#line 371 "typecheck_info.m"
  MR_String check_hlds__typecheck_info__Msg_5,
#line 371 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__Info_6)
#line 371 "typecheck_info.m"
{
#line 1006 "typecheck_info.m"
  {
#line 1006 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 1006 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__ModuleInfo_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_6, (MR_Integer) 1)));
#line 1006 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__Globals_9;
#line 1006 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__DoCheckPoint_10;
#line 1007 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_6, (MR_Integer) 0)));
#line 1007 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_6, (MR_Integer) 2)));
#line 1007 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_6, (MR_Integer) 3)));
#line 1007 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_6, (MR_Integer) 4)));
#line 1007 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_6, (MR_Integer) 5)));
#line 1007 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_6, (MR_Integer) 6)));
#line 1007 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_6, (MR_Integer) 7)));

#line 1008 "typecheck_info.m"
    {
#line 1008 "typecheck_info.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__typecheck_info__ModuleInfo_8, &check_hlds__typecheck_info__Globals_9);
    }
#line 1009 "typecheck_info.m"
    {
#line 1009 "typecheck_info.m"
      libs__globals__lookup_bool_option_3_p_0(check_hlds__typecheck_info__Globals_9, (MR_Integer) 57, &check_hlds__typecheck_info__DoCheckPoint_10);
    }
#line 1013 "typecheck_info.m"
    if ((check_hlds__typecheck_info__DoCheckPoint_10 == (MR_Integer) 0))
#line 1014 "typecheck_info.m"
      {
#line 1014 "typecheck_info.m"
      }
#line 1013 "typecheck_info.m"
    else
#line 1012 "typecheck_info.m"
      {
#line 1012 "typecheck_info.m"
        check_hlds__typecheck_info__do_type_checkpoint_4_p_0(check_hlds__typecheck_info__Msg_5, check_hlds__typecheck_info__Info_6);
#line 1012 "typecheck_info.m"
        return;
      }
#line 1006 "typecheck_info.m"
  }
#line 371 "typecheck_info.m"
}

#line 364 "typecheck_info.m"
MR_Word MR_CALL 
check_hlds__typecheck_info__args_type_assign_set_to_pieces_3_f_0(
#line 364 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__HeadVar__1_1,
#line 364 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__MaybeSeq_2,
#line 364 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__VarSet_3)
#line 364 "typecheck_info.m"
{
#line 790 "typecheck_info.m"
  {
#line 790 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 790 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__HeadVar__4_4;

#line 790 "typecheck_info.m"
    if ((check_hlds__typecheck_info__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 790 "typecheck_info.m"
      check_hlds__typecheck_info__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 790 "typecheck_info.m"
    else
#line 792 "typecheck_info.m"
      {
#line 792 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__ArgTypeAssign_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 0)));
#line 792 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__ArgTypeAssigns_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 1)));
#line 792 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__TypeAssign_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__ArgTypeAssign_7, (MR_Integer) 0)));
#line 792 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_15_15;
#line 792 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_16_16;
#line 792 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_17_17;
#line 795 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info___ArgTypes_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__ArgTypeAssign_7, (MR_Integer) 1)));
#line 795 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info___Cnstrs_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__ArgTypeAssign_7, (MR_Integer) 2)));

#line 796 "typecheck_info.m"
        {
#line 796 "typecheck_info.m"
          check_hlds__typecheck_info__V_15_15 = check_hlds__typecheck_info__type_assign_to_pieces_3_f_0(check_hlds__typecheck_info__TypeAssign_12, check_hlds__typecheck_info__MaybeSeq_2, check_hlds__typecheck_info__VarSet_3);
        }
#line 765 "typecheck_info.m"
        if ((check_hlds__typecheck_info__MaybeSeq_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 765 "typecheck_info.m"
          check_hlds__typecheck_info__V_17_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 765 "typecheck_info.m"
        else
#line 766 "typecheck_info.m"
          {
#line 766 "typecheck_info.m"
            MR_Integer check_hlds__typecheck_info__N_19 = ((MR_Integer) (MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__MaybeSeq_2, (MR_Integer) 0)));
#line 766 "typecheck_info.m"
            MR_Integer check_hlds__typecheck_info__V_20_20 = (check_hlds__typecheck_info__N_19 + (MR_Integer) 1);

#line 766 "typecheck_info.m"
            {
#line 766 "typecheck_info.m"
              check_hlds__typecheck_info__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 766 "typecheck_info.m"
              MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__V_17_17, 0) = ((MR_Box) (check_hlds__typecheck_info__V_20_20));
#line 766 "typecheck_info.m"
            }
#line 766 "typecheck_info.m"
          }
#line 797 "typecheck_info.m"
        {
#line 797 "typecheck_info.m"
          check_hlds__typecheck_info__V_16_16 = check_hlds__typecheck_info__args_type_assign_set_to_pieces_3_f_0(check_hlds__typecheck_info__ArgTypeAssigns_8, check_hlds__typecheck_info__V_17_17, check_hlds__typecheck_info__VarSet_3);
        }
#line 796 "typecheck_info.m"
        {
#line 796 "typecheck_info.m"
          check_hlds__typecheck_info__HeadVar__4_4 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, check_hlds__typecheck_info__V_15_15, check_hlds__typecheck_info__V_16_16);
        }
#line 792 "typecheck_info.m"
      }
#line 790 "typecheck_info.m"
    return check_hlds__typecheck_info__HeadVar__4_4;
#line 790 "typecheck_info.m"
  }
#line 364 "typecheck_info.m"
}

#line 361 "typecheck_info.m"
void MR_CALL 
check_hlds__typecheck_info__write_args_type_assign_set_4_p_0(
#line 361 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__HeadVar__1_1,
#line 361 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__VarSet_2)
#line 361 "typecheck_info.m"
{
#line 780 "typecheck_info.m"
  while (MR_TRUE)
#line 780 "typecheck_info.m"
    {
#line 780 "typecheck_info.m"
      /* tailcall optimized into a loop */
#line 780 "typecheck_info.m"
      {
#line 780 "typecheck_info.m"
        MR_bool check_hlds__typecheck_info__succeeded;

#line 780 "typecheck_info.m"
        if ((check_hlds__typecheck_info__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 780 "typecheck_info.m"
          {
#line 780 "typecheck_info.m"
          }
#line 780 "typecheck_info.m"
        else
#line 781 "typecheck_info.m"
          {
#line 781 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__ArgTypeAssign_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 0)));
#line 781 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__ArgTypeAssigns_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 1)));
#line 781 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__TypeAssign_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__ArgTypeAssign_9, (MR_Integer) 0)));
#line 784 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info___ArgTypes_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__ArgTypeAssign_9, (MR_Integer) 1)));
#line 784 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info___Cnstrs_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__ArgTypeAssign_9, (MR_Integer) 2)));

#line 785 "typecheck_info.m"
            {
#line 785 "typecheck_info.m"
              mercury__io__write_string_3_p_0((MR_String) "\t");
            }
#line 786 "typecheck_info.m"
            {
#line 786 "typecheck_info.m"
              check_hlds__typecheck_info__write_type_assign_4_p_0(check_hlds__typecheck_info__TypeAssign_13, check_hlds__typecheck_info__VarSet_2);
            }
#line 787 "typecheck_info.m"
            {
#line 787 "typecheck_info.m"
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
#line 788 "typecheck_info.m"
            /* direct tailcall eliminated */
#line 788 "typecheck_info.m"
            {
#line 788 "typecheck_info.m"
              MR_Word check_hlds__typecheck_info__HeadVar__1__tmp_copy_1 = check_hlds__typecheck_info__ArgTypeAssigns_10;

#line 788 "typecheck_info.m"
              check_hlds__typecheck_info__HeadVar__1_1 = check_hlds__typecheck_info__HeadVar__1__tmp_copy_1;
#line 788 "typecheck_info.m"
            }
#line 788 "typecheck_info.m"
            continue;
#line 781 "typecheck_info.m"
          }
#line 780 "typecheck_info.m"
      }
#line 780 "typecheck_info.m"
      break;
#line 780 "typecheck_info.m"
    }
#line 361 "typecheck_info.m"
}

#line 358 "typecheck_info.m"
MR_Word MR_CALL 
check_hlds__typecheck_info__type_assign_set_to_pieces_3_f_0(
#line 358 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__HeadVar__1_1,
#line 358 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__MaybeSeq_2,
#line 358 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__VarSet_3)
#line 358 "typecheck_info.m"
{
#line 775 "typecheck_info.m"
  {
#line 775 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 775 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__HeadVar__4_4;

#line 775 "typecheck_info.m"
    if ((check_hlds__typecheck_info__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 775 "typecheck_info.m"
      check_hlds__typecheck_info__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 775 "typecheck_info.m"
    else
#line 776 "typecheck_info.m"
      {
#line 776 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__TypeAssign_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 0)));
#line 776 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__TypeAssigns_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 1)));
#line 776 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_11_11;
#line 776 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_12_12;
#line 776 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_13_13;

#line 777 "typecheck_info.m"
        {
#line 777 "typecheck_info.m"
          check_hlds__typecheck_info__V_11_11 = check_hlds__typecheck_info__type_assign_to_pieces_3_f_0(check_hlds__typecheck_info__TypeAssign_7, check_hlds__typecheck_info__MaybeSeq_2, check_hlds__typecheck_info__VarSet_3);
        }
#line 765 "typecheck_info.m"
        if ((check_hlds__typecheck_info__MaybeSeq_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 765 "typecheck_info.m"
          check_hlds__typecheck_info__V_13_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 765 "typecheck_info.m"
        else
#line 766 "typecheck_info.m"
          {
#line 766 "typecheck_info.m"
            MR_Integer check_hlds__typecheck_info__N_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__MaybeSeq_2, (MR_Integer) 0)));
#line 766 "typecheck_info.m"
            MR_Integer check_hlds__typecheck_info__V_16_16 = (check_hlds__typecheck_info__N_15 + (MR_Integer) 1);

#line 766 "typecheck_info.m"
            {
#line 766 "typecheck_info.m"
              check_hlds__typecheck_info__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 766 "typecheck_info.m"
              MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__V_13_13, 0) = ((MR_Box) (check_hlds__typecheck_info__V_16_16));
#line 766 "typecheck_info.m"
            }
#line 766 "typecheck_info.m"
          }
#line 778 "typecheck_info.m"
        {
#line 778 "typecheck_info.m"
          check_hlds__typecheck_info__V_12_12 = check_hlds__typecheck_info__type_assign_set_to_pieces_3_f_0(check_hlds__typecheck_info__TypeAssigns_8, check_hlds__typecheck_info__V_13_13, check_hlds__typecheck_info__VarSet_3);
        }
#line 777 "typecheck_info.m"
        {
#line 777 "typecheck_info.m"
          check_hlds__typecheck_info__HeadVar__4_4 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, check_hlds__typecheck_info__V_11_11, check_hlds__typecheck_info__V_12_12);
        }
#line 776 "typecheck_info.m"
      }
#line 775 "typecheck_info.m"
    return check_hlds__typecheck_info__HeadVar__4_4;
#line 775 "typecheck_info.m"
  }
#line 358 "typecheck_info.m"
}

#line 355 "typecheck_info.m"
void MR_CALL 
check_hlds__typecheck_info__write_type_assign_set_4_p_0(
#line 355 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__HeadVar__1_1,
#line 355 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__VarSet_2)
#line 355 "typecheck_info.m"
{
#line 768 "typecheck_info.m"
  while (MR_TRUE)
#line 768 "typecheck_info.m"
    {
#line 768 "typecheck_info.m"
      /* tailcall optimized into a loop */
#line 768 "typecheck_info.m"
      {
#line 768 "typecheck_info.m"
        MR_bool check_hlds__typecheck_info__succeeded;

#line 768 "typecheck_info.m"
        if ((check_hlds__typecheck_info__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 768 "typecheck_info.m"
          {
#line 768 "typecheck_info.m"
          }
#line 768 "typecheck_info.m"
        else
#line 769 "typecheck_info.m"
          {
#line 769 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__TypeAssign_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 0)));
#line 769 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__TypeAssigns_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 1)));
#line 769 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__HeadTypeParams_26;
#line 769 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__VarTypes_27;
#line 769 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__Constraints_28;
#line 769 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__TypeBindings_29;
#line 769 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__TypeVarSet_30;
#line 769 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__Vars_31;
#line 769 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__ConstraintsToProve_87;
#line 769 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__AssumedConstraints_88;
#line 682 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__V_51_51;
#line 682 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__V_52_52;
#line 926 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__V_89_89;
#line 926 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__V_90_90;

#line 770 "typecheck_info.m"
            {
#line 770 "typecheck_info.m"
              mercury__io__write_string_3_p_0((MR_String) "\t");
            }
#line 682 "typecheck_info.m"
            check_hlds__typecheck_info__VarTypes_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TypeAssign_9, (MR_Integer) 0)));
#line 682 "typecheck_info.m"
            check_hlds__typecheck_info__TypeVarSet_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TypeAssign_9, (MR_Integer) 1)));
#line 682 "typecheck_info.m"
            check_hlds__typecheck_info__HeadTypeParams_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TypeAssign_9, (MR_Integer) 2)));
#line 682 "typecheck_info.m"
            check_hlds__typecheck_info__TypeBindings_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TypeAssign_9, (MR_Integer) 3)));
#line 682 "typecheck_info.m"
            check_hlds__typecheck_info__Constraints_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TypeAssign_9, (MR_Integer) 4)));
#line 682 "typecheck_info.m"
            check_hlds__typecheck_info__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TypeAssign_9, (MR_Integer) 5)));
#line 682 "typecheck_info.m"
            check_hlds__typecheck_info__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TypeAssign_9, (MR_Integer) 6)));
#line 809 "typecheck_info.m"
            {
#line 809 "typecheck_info.m"
              parse_tree__prog_data__vartypes_vars_2_p_0(check_hlds__typecheck_info__VarTypes_27, &check_hlds__typecheck_info__Vars_31);
            }
#line 812 "typecheck_info.m"
            if ((check_hlds__typecheck_info__HeadTypeParams_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 811 "typecheck_info.m"
              {
#line 811 "typecheck_info.m"
              }
#line 812 "typecheck_info.m"
            else
#line 813 "typecheck_info.m"
              {
#line 814 "typecheck_info.m"
                {
#line 814 "typecheck_info.m"
                  mercury__io__write_string_3_p_0((MR_String) "some [");
                }
#line 815 "typecheck_info.m"
                {
#line 815 "typecheck_info.m"
                  parse_tree__mercury_to_mercury__mercury_output_vars_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, check_hlds__typecheck_info__TypeVarSet_30, (MR_Integer) 1, check_hlds__typecheck_info__HeadTypeParams_26);
                }
#line 816 "typecheck_info.m"
                {
#line 816 "typecheck_info.m"
                  mercury__io__write_string_3_p_0((MR_String) "]\n\t");
                }
#line 813 "typecheck_info.m"
              }
#line 818 "typecheck_info.m"
            {
#line 818 "typecheck_info.m"
              check_hlds__typecheck_info__write_type_assign_types_8_p_0(check_hlds__typecheck_info__Vars_31, check_hlds__typecheck_info__VarSet_2, check_hlds__typecheck_info__VarTypes_27, check_hlds__typecheck_info__TypeBindings_29, check_hlds__typecheck_info__TypeVarSet_30, (MR_Integer) 0);
            }
#line 926 "typecheck_info.m"
            check_hlds__typecheck_info__ConstraintsToProve_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Constraints_28, (MR_Integer) 0)));
#line 926 "typecheck_info.m"
            check_hlds__typecheck_info__AssumedConstraints_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Constraints_28, (MR_Integer) 1)));
#line 926 "typecheck_info.m"
            check_hlds__typecheck_info__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Constraints_28, (MR_Integer) 2)));
#line 926 "typecheck_info.m"
            check_hlds__typecheck_info__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Constraints_28, (MR_Integer) 3)));
#line 928 "typecheck_info.m"
            {
#line 928 "typecheck_info.m"
              check_hlds__typecheck_info__write_type_assign_constraints_7_p_0((MR_String) "&", check_hlds__typecheck_info__AssumedConstraints_88, check_hlds__typecheck_info__TypeBindings_29, check_hlds__typecheck_info__TypeVarSet_30, (MR_Integer) 0);
            }
#line 930 "typecheck_info.m"
            {
#line 930 "typecheck_info.m"
              check_hlds__typecheck_info__write_type_assign_constraints_7_p_0((MR_String) "<=", check_hlds__typecheck_info__ConstraintsToProve_87, check_hlds__typecheck_info__TypeBindings_29, check_hlds__typecheck_info__TypeVarSet_30, (MR_Integer) 0);
            }
#line 822 "typecheck_info.m"
            {
#line 822 "typecheck_info.m"
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
#line 772 "typecheck_info.m"
            {
#line 772 "typecheck_info.m"
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
#line 773 "typecheck_info.m"
            /* direct tailcall eliminated */
#line 773 "typecheck_info.m"
            {
#line 773 "typecheck_info.m"
              MR_Word check_hlds__typecheck_info__HeadVar__1__tmp_copy_1 = check_hlds__typecheck_info__TypeAssigns_10;

#line 773 "typecheck_info.m"
              check_hlds__typecheck_info__HeadVar__1_1 = check_hlds__typecheck_info__HeadVar__1__tmp_copy_1;
#line 773 "typecheck_info.m"
            }
#line 773 "typecheck_info.m"
            continue;
#line 769 "typecheck_info.m"
          }
#line 768 "typecheck_info.m"
      }
#line 768 "typecheck_info.m"
      break;
#line 768 "typecheck_info.m"
    }
#line 355 "typecheck_info.m"
}

#line 351 "typecheck_info.m"
MR_Word MR_CALL 
check_hlds__typecheck_info__project_cons_type_info_source_1_f_0(
#line 351 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__CTI_3)
#line 351 "typecheck_info.m"
{
#line 755 "typecheck_info.m"
  {
#line 755 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 755 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__CTI_3, (MR_Integer) 5)));
#line 755 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__CTI_3, (MR_Integer) 0)));
#line 755 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__CTI_3, (MR_Integer) 1)));
#line 755 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__CTI_3, (MR_Integer) 2)));
#line 755 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__CTI_3, (MR_Integer) 3)));
#line 755 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__CTI_3, (MR_Integer) 4)));

#line 755 "typecheck_info.m"
    return check_hlds__typecheck_info__HeadVar__2_2;
#line 755 "typecheck_info.m"
  }
#line 351 "typecheck_info.m"
}

#line 316 "typecheck_info.m"
MR_Word MR_CALL 
check_hlds__typecheck_info__convert_args_type_assign_set_check_empty_args_1_f_0(
#line 316 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__HeadVar__1_1)
#line 316 "typecheck_info.m"
{
#line 721 "typecheck_info.m"
  {
#line 721 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 721 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__HeadVar__2_2;

#line 721 "typecheck_info.m"
    if ((check_hlds__typecheck_info__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 721 "typecheck_info.m"
      check_hlds__typecheck_info__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 721 "typecheck_info.m"
    else
#line 723 "typecheck_info.m"
      {
#line 723 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__ArgTypeAssign_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 0)));
#line 723 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__ArgTypeAssigns_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 1)));
#line 723 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__ArgTypeAssign_3, (MR_Integer) 0)));
#line 723 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__Args_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__ArgTypeAssign_3, (MR_Integer) 1)));
#line 723 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__ArgTypeAssign_3, (MR_Integer) 2)));

#line 730 "typecheck_info.m"
        if ((check_hlds__typecheck_info__Args_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 726 "typecheck_info.m"
          {
#line 726 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__V_14_14;
#line 726 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__V_15_15;
#line 726 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__OldConstraints_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_6_6, (MR_Integer) 4)));
#line 726 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__Bindings_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_6_6, (MR_Integer) 3)));
#line 726 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__Constraints_22;
#line 726 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__NewConstraints_23;
#line 684 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_6_6, (MR_Integer) 0)));
#line 684 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_6_6, (MR_Integer) 1)));
#line 684 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_6_6, (MR_Integer) 2)));
#line 684 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_6_6, (MR_Integer) 5)));
#line 684 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_6_6, (MR_Integer) 6)));
#line 697 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__V_43_43;
#line 697 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__V_44_44;
#line 697 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__V_45_45;
#line 697 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__V_46_46;
#line 697 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__V_48_48;
#line 697 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__V_49_49;
#line 697 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__V_47_47;

#line 743 "typecheck_info.m"
            {
#line 743 "typecheck_info.m"
              check_hlds__type_util__apply_rec_subst_to_constraints_3_p_0(check_hlds__typecheck_info__Bindings_21, check_hlds__typecheck_info__V_8_8, &check_hlds__typecheck_info__Constraints_22);
            }
#line 744 "typecheck_info.m"
            {
#line 744 "typecheck_info.m"
              hlds__hlds_data__merge_hlds_constraints_3_p_0(check_hlds__typecheck_info__Constraints_22, check_hlds__typecheck_info__OldConstraints_20, &check_hlds__typecheck_info__NewConstraints_23);
            }
#line 697 "typecheck_info.m"
            check_hlds__typecheck_info__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_6_6, (MR_Integer) 0)));
#line 697 "typecheck_info.m"
            check_hlds__typecheck_info__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_6_6, (MR_Integer) 1)));
#line 697 "typecheck_info.m"
            check_hlds__typecheck_info__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_6_6, (MR_Integer) 2)));
#line 697 "typecheck_info.m"
            check_hlds__typecheck_info__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_6_6, (MR_Integer) 3)));
#line 697 "typecheck_info.m"
            check_hlds__typecheck_info__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_6_6, (MR_Integer) 4)));
#line 697 "typecheck_info.m"
            check_hlds__typecheck_info__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_6_6, (MR_Integer) 5)));
#line 697 "typecheck_info.m"
            check_hlds__typecheck_info__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_6_6, (MR_Integer) 6)));
#line 697 "typecheck_info.m"
            {
#line 697 "typecheck_info.m"
              check_hlds__typecheck_info__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 697 "typecheck_info.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_14_14, 0) = ((MR_Box) (check_hlds__typecheck_info__V_43_43));
#line 697 "typecheck_info.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_14_14, 1) = ((MR_Box) (check_hlds__typecheck_info__V_44_44));
#line 697 "typecheck_info.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_14_14, 2) = ((MR_Box) (check_hlds__typecheck_info__V_45_45));
#line 697 "typecheck_info.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_14_14, 3) = ((MR_Box) (check_hlds__typecheck_info__V_46_46));
#line 697 "typecheck_info.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_14_14, 4) = ((MR_Box) (check_hlds__typecheck_info__NewConstraints_23));
#line 697 "typecheck_info.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_14_14, 5) = ((MR_Box) (check_hlds__typecheck_info__V_48_48));
#line 697 "typecheck_info.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_14_14, 6) = ((MR_Box) (check_hlds__typecheck_info__V_49_49));
#line 697 "typecheck_info.m"
            }
#line 729 "typecheck_info.m"
            {
#line 729 "typecheck_info.m"
              check_hlds__typecheck_info__V_15_15 = check_hlds__typecheck_info__convert_args_type_assign_set_check_empty_args_1_f_0(check_hlds__typecheck_info__ArgTypeAssigns_4);
            }
#line 728 "typecheck_info.m"
            {
#line 728 "typecheck_info.m"
              check_hlds__typecheck_info__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 728 "typecheck_info.m"
              MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__HeadVar__2_2, 0) = ((MR_Box) (check_hlds__typecheck_info__V_14_14));
#line 728 "typecheck_info.m"
              MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__HeadVar__2_2, 1) = ((MR_Box) (check_hlds__typecheck_info__V_15_15));
#line 728 "typecheck_info.m"
            }
#line 726 "typecheck_info.m"
          }
#line 730 "typecheck_info.m"
        else
#line 731 "typecheck_info.m"
          {
#line 734 "typecheck_info.m"
            {
#line 734 "typecheck_info.m"
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.typecheck_info", (MR_String) "function \140check_hlds.typecheck_info.convert_args_type_assign_set_check_empty_args\'/1", (MR_String) "Args != []");
            }
#line 731 "typecheck_info.m"
          }
#line 723 "typecheck_info.m"
      }
#line 721 "typecheck_info.m"
    return check_hlds__typecheck_info__HeadVar__2_2;
#line 721 "typecheck_info.m"
  }
#line 316 "typecheck_info.m"
}

#line 311 "typecheck_info.m"
MR_Word MR_CALL 
check_hlds__typecheck_info__convert_args_type_assign_set_1_f_0(
#line 311 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__HeadVar__1_1)
#line 311 "typecheck_info.m"
{
#line 716 "typecheck_info.m"
  {
#line 716 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 716 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__HeadVar__2_2;

#line 716 "typecheck_info.m"
    if ((check_hlds__typecheck_info__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 716 "typecheck_info.m"
      check_hlds__typecheck_info__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 716 "typecheck_info.m"
    else
#line 717 "typecheck_info.m"
      {
#line 717 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__ArgsTypeAssign_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 0)));
#line 717 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__ArgsTypeAssigns_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 1)));
#line 717 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_5_5;
#line 717 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_6_6;
#line 717 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__TypeAssign0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__ArgsTypeAssign_3, (MR_Integer) 0)));
#line 717 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__Constraints0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__ArgsTypeAssign_3, (MR_Integer) 2)));
#line 717 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__OldConstraints_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TypeAssign0_8, (MR_Integer) 4)));
#line 717 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__Bindings_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TypeAssign0_8, (MR_Integer) 3)));
#line 717 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__Constraints_13;
#line 717 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__NewConstraints_14;
#line 739 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__ArgsTypeAssign_3, (MR_Integer) 1)));
#line 684 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TypeAssign0_8, (MR_Integer) 0)));
#line 684 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TypeAssign0_8, (MR_Integer) 1)));
#line 684 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TypeAssign0_8, (MR_Integer) 2)));
#line 684 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TypeAssign0_8, (MR_Integer) 5)));
#line 684 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TypeAssign0_8, (MR_Integer) 6)));
#line 697 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_34_34;
#line 697 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_35_35;
#line 697 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_36_36;
#line 697 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_37_37;
#line 697 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_39_39;
#line 697 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_40_40;
#line 697 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_38_38;

#line 743 "typecheck_info.m"
        {
#line 743 "typecheck_info.m"
          check_hlds__type_util__apply_rec_subst_to_constraints_3_p_0(check_hlds__typecheck_info__Bindings_12, check_hlds__typecheck_info__Constraints0_10, &check_hlds__typecheck_info__Constraints_13);
        }
#line 744 "typecheck_info.m"
        {
#line 744 "typecheck_info.m"
          hlds__hlds_data__merge_hlds_constraints_3_p_0(check_hlds__typecheck_info__Constraints_13, check_hlds__typecheck_info__OldConstraints_11, &check_hlds__typecheck_info__NewConstraints_14);
        }
#line 697 "typecheck_info.m"
        check_hlds__typecheck_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TypeAssign0_8, (MR_Integer) 0)));
#line 697 "typecheck_info.m"
        check_hlds__typecheck_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TypeAssign0_8, (MR_Integer) 1)));
#line 697 "typecheck_info.m"
        check_hlds__typecheck_info__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TypeAssign0_8, (MR_Integer) 2)));
#line 697 "typecheck_info.m"
        check_hlds__typecheck_info__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TypeAssign0_8, (MR_Integer) 3)));
#line 697 "typecheck_info.m"
        check_hlds__typecheck_info__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TypeAssign0_8, (MR_Integer) 4)));
#line 697 "typecheck_info.m"
        check_hlds__typecheck_info__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TypeAssign0_8, (MR_Integer) 5)));
#line 697 "typecheck_info.m"
        check_hlds__typecheck_info__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TypeAssign0_8, (MR_Integer) 6)));
#line 697 "typecheck_info.m"
        {
#line 697 "typecheck_info.m"
          check_hlds__typecheck_info__V_5_5 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 697 "typecheck_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_5_5, 0) = ((MR_Box) (check_hlds__typecheck_info__V_34_34));
#line 697 "typecheck_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_5_5, 1) = ((MR_Box) (check_hlds__typecheck_info__V_35_35));
#line 697 "typecheck_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_5_5, 2) = ((MR_Box) (check_hlds__typecheck_info__V_36_36));
#line 697 "typecheck_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_5_5, 3) = ((MR_Box) (check_hlds__typecheck_info__V_37_37));
#line 697 "typecheck_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_5_5, 4) = ((MR_Box) (check_hlds__typecheck_info__NewConstraints_14));
#line 697 "typecheck_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_5_5, 5) = ((MR_Box) (check_hlds__typecheck_info__V_39_39));
#line 697 "typecheck_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_5_5, 6) = ((MR_Box) (check_hlds__typecheck_info__V_40_40));
#line 697 "typecheck_info.m"
        }
#line 719 "typecheck_info.m"
        {
#line 719 "typecheck_info.m"
          check_hlds__typecheck_info__V_6_6 = check_hlds__typecheck_info__convert_args_type_assign_set_1_f_0(check_hlds__typecheck_info__ArgsTypeAssigns_4);
        }
#line 718 "typecheck_info.m"
        {
#line 718 "typecheck_info.m"
          check_hlds__typecheck_info__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 718 "typecheck_info.m"
          MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__HeadVar__2_2, 0) = ((MR_Box) (check_hlds__typecheck_info__V_5_5));
#line 718 "typecheck_info.m"
          MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__HeadVar__2_2, 1) = ((MR_Box) (check_hlds__typecheck_info__V_6_6));
#line 718 "typecheck_info.m"
        }
#line 717 "typecheck_info.m"
      }
#line 716 "typecheck_info.m"
    return check_hlds__typecheck_info__HeadVar__2_2;
#line 716 "typecheck_info.m"
  }
#line 311 "typecheck_info.m"
}

#line 307 "typecheck_info.m"
MR_Word MR_CALL 
check_hlds__typecheck_info__get_callee_constraints_1_f_0(
#line 307 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__ArgsTypeAssign_3)
#line 307 "typecheck_info.m"
{
#line 752 "typecheck_info.m"
  {
#line 752 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 752 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__ArgsTypeAssign_3, (MR_Integer) 2)));
#line 752 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__ArgsTypeAssign_3, (MR_Integer) 0)));
#line 752 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__ArgsTypeAssign_3, (MR_Integer) 1)));

#line 752 "typecheck_info.m"
    return check_hlds__typecheck_info__HeadVar__2_2;
#line 752 "typecheck_info.m"
  }
#line 307 "typecheck_info.m"
}

#line 306 "typecheck_info.m"
MR_Word MR_CALL 
check_hlds__typecheck_info__get_callee_arg_types_1_f_0(
#line 306 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__ArgsTypeAssign_3)
#line 306 "typecheck_info.m"
{
#line 750 "typecheck_info.m"
  {
#line 750 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 750 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__ArgsTypeAssign_3, (MR_Integer) 1)));
#line 750 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__ArgsTypeAssign_3, (MR_Integer) 0)));
#line 750 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__ArgsTypeAssign_3, (MR_Integer) 2)));

#line 750 "typecheck_info.m"
    return check_hlds__typecheck_info__HeadVar__2_2;
#line 750 "typecheck_info.m"
  }
#line 306 "typecheck_info.m"
}

#line 305 "typecheck_info.m"
MR_Word MR_CALL 
check_hlds__typecheck_info__get_caller_arg_assign_1_f_0(
#line 305 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__ArgsTypeAssign_3)
#line 305 "typecheck_info.m"
{
#line 748 "typecheck_info.m"
  {
#line 748 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 748 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__ArgsTypeAssign_3, (MR_Integer) 0)));
#line 748 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__ArgsTypeAssign_3, (MR_Integer) 1)));
#line 748 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__ArgsTypeAssign_3, (MR_Integer) 2)));

#line 748 "typecheck_info.m"
    return check_hlds__typecheck_info__HeadVar__2_2;
#line 748 "typecheck_info.m"
  }
#line 305 "typecheck_info.m"
}

#line 285 "typecheck_info.m"
void MR_CALL 
check_hlds__typecheck_info__type_assign_set_reduce_results_7_p_0(
#line 285 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__Bindings_8,
#line 285 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__TVarSet_9,
#line 285 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__Constraints_10,
#line 285 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__Proofs_11,
#line 285 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__ConstraintMap_12,
#line 285 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__STATE_VARIABLE_TA_0_14,
#line 285 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__STATE_VARIABLE_TA_15)
#line 285 "typecheck_info.m"
{
#line 704 "typecheck_info.m"
  {
#line 704 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 704 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_TA_0_14, (MR_Integer) 0)));
#line 704 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_TA_0_14, (MR_Integer) 2)));
#line 704 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_28_28 = check_hlds__typecheck_info__V_21_21;
#line 704 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_30_30 = check_hlds__typecheck_info__V_23_23;
#line 704 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_31_31 = check_hlds__typecheck_info__Bindings_8;
#line 704 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_35_35 = check_hlds__typecheck_info__V_28_28;
#line 704 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_36_36 = check_hlds__typecheck_info__TVarSet_9;
#line 704 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_37_37 = check_hlds__typecheck_info__V_30_30;
#line 704 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_38_38 = check_hlds__typecheck_info__V_31_31;
#line 704 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_42_42 = check_hlds__typecheck_info__V_35_35;
#line 704 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_43_43 = check_hlds__typecheck_info__V_36_36;
#line 704 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_44_44 = check_hlds__typecheck_info__V_37_37;
#line 704 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_45_45 = check_hlds__typecheck_info__V_38_38;
#line 704 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_46_46 = check_hlds__typecheck_info__Constraints_10;
#line 708 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_TA_0_14, (MR_Integer) 1)));
#line 708 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_TA_0_14, (MR_Integer) 3)));
#line 708 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_TA_0_14, (MR_Integer) 4)));
#line 708 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_TA_0_14, (MR_Integer) 5)));
#line 708 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_TA_0_14, (MR_Integer) 6)));

#line 712 "typecheck_info.m"
    {
#line 712 "typecheck_info.m"
      MR_Word base;
#line 712 "typecheck_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 712 "typecheck_info.m"
      *check_hlds__typecheck_info__STATE_VARIABLE_TA_15 = base;
#line 712 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__typecheck_info__V_42_42));
#line 712 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__typecheck_info__V_43_43));
#line 712 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__typecheck_info__V_44_44));
#line 712 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__typecheck_info__V_45_45));
#line 712 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__typecheck_info__V_46_46));
#line 712 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__typecheck_info__Proofs_11));
#line 712 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__typecheck_info__ConstraintMap_12));
#line 712 "typecheck_info.m"
    }
#line 704 "typecheck_info.m"
  }
#line 285 "typecheck_info.m"
}

#line 282 "typecheck_info.m"
void MR_CALL 
check_hlds__typecheck_info__type_assign_set_constraint_map_3_p_0(
#line 282 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__ConstraintMap_4,
#line 282 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__STATE_VARIABLE_TA_0_6,
#line 282 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__STATE_VARIABLE_TA_7)
#line 282 "typecheck_info.m"
{
#line 701 "typecheck_info.m"
  {
#line 701 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 701 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_TA_0_6, (MR_Integer) 0)));
#line 701 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_TA_0_6, (MR_Integer) 1)));
#line 701 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_TA_0_6, (MR_Integer) 2)));
#line 701 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_TA_0_6, (MR_Integer) 3)));
#line 701 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_TA_0_6, (MR_Integer) 4)));
#line 701 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_TA_0_6, (MR_Integer) 5)));
#line 701 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_TA_0_6, (MR_Integer) 6)));

#line 701 "typecheck_info.m"
    {
#line 701 "typecheck_info.m"
      MR_Word base;
#line 701 "typecheck_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 701 "typecheck_info.m"
      *check_hlds__typecheck_info__STATE_VARIABLE_TA_7 = base;
#line 701 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__typecheck_info__V_9_9));
#line 701 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__typecheck_info__V_10_10));
#line 701 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__typecheck_info__V_11_11));
#line 701 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__typecheck_info__V_12_12));
#line 701 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__typecheck_info__V_13_13));
#line 701 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__typecheck_info__V_14_14));
#line 701 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__typecheck_info__ConstraintMap_4));
#line 701 "typecheck_info.m"
    }
#line 701 "typecheck_info.m"
  }
#line 282 "typecheck_info.m"
}

#line 280 "typecheck_info.m"
void MR_CALL 
check_hlds__typecheck_info__type_assign_set_constraint_proofs_3_p_0(
#line 280 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__Proofs_4,
#line 280 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__STATE_VARIABLE_TA_0_6,
#line 280 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__STATE_VARIABLE_TA_7)
#line 280 "typecheck_info.m"
{
#line 699 "typecheck_info.m"
  {
#line 699 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 699 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_TA_0_6, (MR_Integer) 0)));
#line 699 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_TA_0_6, (MR_Integer) 1)));
#line 699 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_TA_0_6, (MR_Integer) 2)));
#line 699 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_TA_0_6, (MR_Integer) 3)));
#line 699 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_TA_0_6, (MR_Integer) 4)));
#line 699 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_TA_0_6, (MR_Integer) 6)));
#line 699 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_TA_0_6, (MR_Integer) 5)));

#line 699 "typecheck_info.m"
    {
#line 699 "typecheck_info.m"
      MR_Word base;
#line 699 "typecheck_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 699 "typecheck_info.m"
      *check_hlds__typecheck_info__STATE_VARIABLE_TA_7 = base;
#line 699 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__typecheck_info__V_9_9));
#line 699 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__typecheck_info__V_10_10));
#line 699 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__typecheck_info__V_11_11));
#line 699 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__typecheck_info__V_12_12));
#line 699 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__typecheck_info__V_13_13));
#line 699 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__typecheck_info__Proofs_4));
#line 699 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__typecheck_info__V_15_15));
#line 699 "typecheck_info.m"
    }
#line 699 "typecheck_info.m"
  }
#line 280 "typecheck_info.m"
}

#line 278 "typecheck_info.m"
void MR_CALL 
check_hlds__typecheck_info__type_assign_set_typeclass_constraints_3_p_0(
#line 278 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__Constraints_4,
#line 278 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__STATE_VARIABLE_TA_0_6,
#line 278 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__STATE_VARIABLE_TA_7)
#line 278 "typecheck_info.m"
{
#line 697 "typecheck_info.m"
  {
#line 697 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 697 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_TA_0_6, (MR_Integer) 0)));
#line 697 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_TA_0_6, (MR_Integer) 1)));
#line 697 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_TA_0_6, (MR_Integer) 2)));
#line 697 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_TA_0_6, (MR_Integer) 3)));
#line 697 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_TA_0_6, (MR_Integer) 5)));
#line 697 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_TA_0_6, (MR_Integer) 6)));
#line 697 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_TA_0_6, (MR_Integer) 4)));

#line 697 "typecheck_info.m"
    {
#line 697 "typecheck_info.m"
      MR_Word base;
#line 697 "typecheck_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 697 "typecheck_info.m"
      *check_hlds__typecheck_info__STATE_VARIABLE_TA_7 = base;
#line 697 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__typecheck_info__V_9_9));
#line 697 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__typecheck_info__V_10_10));
#line 697 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__typecheck_info__V_11_11));
#line 697 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__typecheck_info__V_12_12));
#line 697 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__typecheck_info__Constraints_4));
#line 697 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__typecheck_info__V_14_14));
#line 697 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__typecheck_info__V_15_15));
#line 697 "typecheck_info.m"
    }
#line 697 "typecheck_info.m"
  }
#line 278 "typecheck_info.m"
}

#line 276 "typecheck_info.m"
void MR_CALL 
check_hlds__typecheck_info__type_assign_set_type_bindings_3_p_0(
#line 276 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__TypeBindings_4,
#line 276 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__STATE_VARIABLE_TA_0_6,
#line 276 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__STATE_VARIABLE_TA_7)
#line 276 "typecheck_info.m"
{
#line 695 "typecheck_info.m"
  {
#line 695 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 695 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_TA_0_6, (MR_Integer) 0)));
#line 695 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_TA_0_6, (MR_Integer) 1)));
#line 695 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_TA_0_6, (MR_Integer) 2)));
#line 695 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_TA_0_6, (MR_Integer) 4)));
#line 695 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_TA_0_6, (MR_Integer) 5)));
#line 695 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_TA_0_6, (MR_Integer) 6)));
#line 695 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_TA_0_6, (MR_Integer) 3)));

#line 695 "typecheck_info.m"
    {
#line 695 "typecheck_info.m"
      MR_Word base;
#line 695 "typecheck_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 695 "typecheck_info.m"
      *check_hlds__typecheck_info__STATE_VARIABLE_TA_7 = base;
#line 695 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__typecheck_info__V_9_9));
#line 695 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__typecheck_info__V_10_10));
#line 695 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__typecheck_info__V_11_11));
#line 695 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__typecheck_info__TypeBindings_4));
#line 695 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__typecheck_info__V_13_13));
#line 695 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__typecheck_info__V_14_14));
#line 695 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__typecheck_info__V_15_15));
#line 695 "typecheck_info.m"
    }
#line 695 "typecheck_info.m"
  }
#line 276 "typecheck_info.m"
}

#line 274 "typecheck_info.m"
void MR_CALL 
check_hlds__typecheck_info__type_assign_set_head_type_params_3_p_0(
#line 274 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__HeadTypeParams_4,
#line 274 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__STATE_VARIABLE_TA_0_6,
#line 274 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__STATE_VARIABLE_TA_7)
#line 274 "typecheck_info.m"
{
#line 693 "typecheck_info.m"
  {
#line 693 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 693 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_TA_0_6, (MR_Integer) 0)));
#line 693 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_TA_0_6, (MR_Integer) 1)));
#line 693 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_TA_0_6, (MR_Integer) 3)));
#line 693 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_TA_0_6, (MR_Integer) 4)));
#line 693 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_TA_0_6, (MR_Integer) 5)));
#line 693 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_TA_0_6, (MR_Integer) 6)));
#line 693 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_TA_0_6, (MR_Integer) 2)));

#line 693 "typecheck_info.m"
    {
#line 693 "typecheck_info.m"
      MR_Word base;
#line 693 "typecheck_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 693 "typecheck_info.m"
      *check_hlds__typecheck_info__STATE_VARIABLE_TA_7 = base;
#line 693 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__typecheck_info__V_9_9));
#line 693 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__typecheck_info__V_10_10));
#line 693 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__typecheck_info__HeadTypeParams_4));
#line 693 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__typecheck_info__V_12_12));
#line 693 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__typecheck_info__V_13_13));
#line 693 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__typecheck_info__V_14_14));
#line 693 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__typecheck_info__V_15_15));
#line 693 "typecheck_info.m"
    }
#line 693 "typecheck_info.m"
  }
#line 274 "typecheck_info.m"
}

#line 272 "typecheck_info.m"
void MR_CALL 
check_hlds__typecheck_info__type_assign_set_typevarset_3_p_0(
#line 272 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__TVarSet_4,
#line 272 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__STATE_VARIABLE_TA_0_6,
#line 272 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__STATE_VARIABLE_TA_7)
#line 272 "typecheck_info.m"
{
#line 691 "typecheck_info.m"
  {
#line 691 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 691 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_TA_0_6, (MR_Integer) 0)));
#line 691 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_TA_0_6, (MR_Integer) 2)));
#line 691 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_TA_0_6, (MR_Integer) 3)));
#line 691 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_TA_0_6, (MR_Integer) 4)));
#line 691 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_TA_0_6, (MR_Integer) 5)));
#line 691 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_TA_0_6, (MR_Integer) 6)));
#line 691 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_TA_0_6, (MR_Integer) 1)));

#line 691 "typecheck_info.m"
    {
#line 691 "typecheck_info.m"
      MR_Word base;
#line 691 "typecheck_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 691 "typecheck_info.m"
      *check_hlds__typecheck_info__STATE_VARIABLE_TA_7 = base;
#line 691 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__typecheck_info__V_9_9));
#line 691 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__typecheck_info__TVarSet_4));
#line 691 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__typecheck_info__V_11_11));
#line 691 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__typecheck_info__V_12_12));
#line 691 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__typecheck_info__V_13_13));
#line 691 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__typecheck_info__V_14_14));
#line 691 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__typecheck_info__V_15_15));
#line 691 "typecheck_info.m"
    }
#line 691 "typecheck_info.m"
  }
#line 272 "typecheck_info.m"
}

#line 270 "typecheck_info.m"
void MR_CALL 
check_hlds__typecheck_info__type_assign_set_var_types_3_p_0(
#line 270 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__VarTypes_4,
#line 270 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__STATE_VARIABLE_TA_0_6,
#line 270 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__STATE_VARIABLE_TA_7)
#line 270 "typecheck_info.m"
{
#line 689 "typecheck_info.m"
  {
#line 689 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 689 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_TA_0_6, (MR_Integer) 1)));
#line 689 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_TA_0_6, (MR_Integer) 2)));
#line 689 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_TA_0_6, (MR_Integer) 3)));
#line 689 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_TA_0_6, (MR_Integer) 4)));
#line 689 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_TA_0_6, (MR_Integer) 5)));
#line 689 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_TA_0_6, (MR_Integer) 6)));
#line 689 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_TA_0_6, (MR_Integer) 0)));

#line 689 "typecheck_info.m"
    {
#line 689 "typecheck_info.m"
      MR_Word base;
#line 689 "typecheck_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 689 "typecheck_info.m"
      *check_hlds__typecheck_info__STATE_VARIABLE_TA_7 = base;
#line 689 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__typecheck_info__VarTypes_4));
#line 689 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__typecheck_info__V_10_10));
#line 689 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__typecheck_info__V_11_11));
#line 689 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__typecheck_info__V_12_12));
#line 689 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__typecheck_info__V_13_13));
#line 689 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__typecheck_info__V_14_14));
#line 689 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__typecheck_info__V_15_15));
#line 689 "typecheck_info.m"
    }
#line 689 "typecheck_info.m"
  }
#line 270 "typecheck_info.m"
}

#line 267 "typecheck_info.m"
void MR_CALL 
check_hlds__typecheck_info__type_assign_get_constraint_map_2_p_0(
#line 267 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__TA_3,
#line 267 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__HeadVar__2_2)
#line 267 "typecheck_info.m"
{
#line 686 "typecheck_info.m"
  {
#line 686 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 686 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TA_3, (MR_Integer) 0)));
#line 686 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TA_3, (MR_Integer) 1)));
#line 686 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TA_3, (MR_Integer) 2)));
#line 686 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TA_3, (MR_Integer) 3)));
#line 686 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TA_3, (MR_Integer) 4)));
#line 686 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TA_3, (MR_Integer) 5)));

#line 686 "typecheck_info.m"
    *check_hlds__typecheck_info__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TA_3, (MR_Integer) 6)));
#line 686 "typecheck_info.m"
  }
#line 267 "typecheck_info.m"
}

#line 265 "typecheck_info.m"
void MR_CALL 
check_hlds__typecheck_info__type_assign_get_constraint_proofs_2_p_0(
#line 265 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__TA_3,
#line 265 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__HeadVar__2_2)
#line 265 "typecheck_info.m"
{
#line 685 "typecheck_info.m"
  {
#line 685 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 685 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TA_3, (MR_Integer) 0)));
#line 685 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TA_3, (MR_Integer) 1)));
#line 685 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TA_3, (MR_Integer) 2)));
#line 685 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TA_3, (MR_Integer) 3)));
#line 685 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TA_3, (MR_Integer) 4)));
#line 685 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_9_9;

#line 685 "typecheck_info.m"
    *check_hlds__typecheck_info__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TA_3, (MR_Integer) 5)));
#line 685 "typecheck_info.m"
    check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TA_3, (MR_Integer) 6)));
#line 685 "typecheck_info.m"
  }
#line 265 "typecheck_info.m"
}

#line 263 "typecheck_info.m"
void MR_CALL 
check_hlds__typecheck_info__type_assign_get_typeclass_constraints_2_p_0(
#line 263 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__TA_3,
#line 263 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__HeadVar__2_2)
#line 263 "typecheck_info.m"
{
#line 684 "typecheck_info.m"
  {
#line 684 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 684 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TA_3, (MR_Integer) 0)));
#line 684 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TA_3, (MR_Integer) 1)));
#line 684 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TA_3, (MR_Integer) 2)));
#line 684 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TA_3, (MR_Integer) 3)));
#line 684 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_8_8;
#line 684 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_9_9;

#line 684 "typecheck_info.m"
    *check_hlds__typecheck_info__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TA_3, (MR_Integer) 4)));
#line 684 "typecheck_info.m"
    check_hlds__typecheck_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TA_3, (MR_Integer) 5)));
#line 684 "typecheck_info.m"
    check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TA_3, (MR_Integer) 6)));
#line 684 "typecheck_info.m"
  }
#line 263 "typecheck_info.m"
}

#line 261 "typecheck_info.m"
void MR_CALL 
check_hlds__typecheck_info__type_assign_get_type_bindings_2_p_0(
#line 261 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__TA_3,
#line 261 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__HeadVar__2_2)
#line 261 "typecheck_info.m"
{
#line 683 "typecheck_info.m"
  {
#line 683 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 683 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TA_3, (MR_Integer) 0)));
#line 683 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TA_3, (MR_Integer) 1)));
#line 683 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TA_3, (MR_Integer) 2)));
#line 683 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_7_7;
#line 683 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_8_8;
#line 683 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_9_9;

#line 683 "typecheck_info.m"
    *check_hlds__typecheck_info__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TA_3, (MR_Integer) 3)));
#line 683 "typecheck_info.m"
    check_hlds__typecheck_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TA_3, (MR_Integer) 4)));
#line 683 "typecheck_info.m"
    check_hlds__typecheck_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TA_3, (MR_Integer) 5)));
#line 683 "typecheck_info.m"
    check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TA_3, (MR_Integer) 6)));
#line 683 "typecheck_info.m"
  }
#line 261 "typecheck_info.m"
}

#line 259 "typecheck_info.m"
void MR_CALL 
check_hlds__typecheck_info__type_assign_get_head_type_params_2_p_0(
#line 259 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__TA_3,
#line 259 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__HeadVar__2_2)
#line 259 "typecheck_info.m"
{
#line 682 "typecheck_info.m"
  {
#line 682 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 682 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TA_3, (MR_Integer) 0)));
#line 682 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TA_3, (MR_Integer) 1)));
#line 682 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_6_6;
#line 682 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_7_7;
#line 682 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_8_8;
#line 682 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_9_9;

#line 682 "typecheck_info.m"
    *check_hlds__typecheck_info__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TA_3, (MR_Integer) 2)));
#line 682 "typecheck_info.m"
    check_hlds__typecheck_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TA_3, (MR_Integer) 3)));
#line 682 "typecheck_info.m"
    check_hlds__typecheck_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TA_3, (MR_Integer) 4)));
#line 682 "typecheck_info.m"
    check_hlds__typecheck_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TA_3, (MR_Integer) 5)));
#line 682 "typecheck_info.m"
    check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TA_3, (MR_Integer) 6)));
#line 682 "typecheck_info.m"
  }
#line 259 "typecheck_info.m"
}

#line 257 "typecheck_info.m"
void MR_CALL 
check_hlds__typecheck_info__type_assign_get_typevarset_2_p_0(
#line 257 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__TA_3,
#line 257 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__HeadVar__2_2)
#line 257 "typecheck_info.m"
{
#line 681 "typecheck_info.m"
  {
#line 681 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 681 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TA_3, (MR_Integer) 0)));
#line 681 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_5_5;
#line 681 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_6_6;
#line 681 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_7_7;
#line 681 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_8_8;
#line 681 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_9_9;

#line 681 "typecheck_info.m"
    *check_hlds__typecheck_info__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TA_3, (MR_Integer) 1)));
#line 681 "typecheck_info.m"
    check_hlds__typecheck_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TA_3, (MR_Integer) 2)));
#line 681 "typecheck_info.m"
    check_hlds__typecheck_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TA_3, (MR_Integer) 3)));
#line 681 "typecheck_info.m"
    check_hlds__typecheck_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TA_3, (MR_Integer) 4)));
#line 681 "typecheck_info.m"
    check_hlds__typecheck_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TA_3, (MR_Integer) 5)));
#line 681 "typecheck_info.m"
    check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TA_3, (MR_Integer) 6)));
#line 681 "typecheck_info.m"
  }
#line 257 "typecheck_info.m"
}

#line 255 "typecheck_info.m"
void MR_CALL 
check_hlds__typecheck_info__type_assign_get_var_types_2_p_0(
#line 255 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__TA_3,
#line 255 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__HeadVar__2_2)
#line 255 "typecheck_info.m"
{
#line 680 "typecheck_info.m"
  {
#line 680 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 680 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_4_4;
#line 680 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_5_5;
#line 680 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_6_6;
#line 680 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_7_7;
#line 680 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_8_8;
#line 680 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_9_9;

#line 680 "typecheck_info.m"
    *check_hlds__typecheck_info__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TA_3, (MR_Integer) 0)));
#line 680 "typecheck_info.m"
    check_hlds__typecheck_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TA_3, (MR_Integer) 1)));
#line 680 "typecheck_info.m"
    check_hlds__typecheck_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TA_3, (MR_Integer) 2)));
#line 680 "typecheck_info.m"
    check_hlds__typecheck_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TA_3, (MR_Integer) 3)));
#line 680 "typecheck_info.m"
    check_hlds__typecheck_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TA_3, (MR_Integer) 4)));
#line 680 "typecheck_info.m"
    check_hlds__typecheck_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TA_3, (MR_Integer) 5)));
#line 680 "typecheck_info.m"
    check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TA_3, (MR_Integer) 6)));
#line 680 "typecheck_info.m"
  }
#line 255 "typecheck_info.m"
}

#line 219 "typecheck_info.m"
void MR_CALL 
check_hlds__typecheck_info__typecheck_info_add_pred_marker_3_p_0(
#line 219 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__Marker_4,
#line 219 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__STATE_VARIABLE_Info_0_8,
#line 219 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__STATE_VARIABLE_Info_9)
#line 219 "typecheck_info.m"
{
#line 673 "typecheck_info.m"
  {
#line 673 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 673 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__Markers0_6;
#line 673 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__Markers_7;
#line 673 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 0)));
#line 673 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_12_12;
#line 673 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_13_13;
#line 673 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_29_29;
#line 673 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_30_30;
#line 673 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_31_31;
#line 673 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_32_32;
#line 673 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_33_33;
#line 673 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_34_34;
#line 673 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_35_35;
#line 674 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 1)));
#line 674 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 2)));
#line 674 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 3)));
#line 674 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 4)));
#line 674 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 5)));
#line 674 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 6)));
#line 674 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 7)));
#line 674 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_10_10, (MR_Integer) 0)));
#line 674 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_10_10, (MR_Integer) 1)));
#line 674 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_23_23;
#line 674 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_24_24;
#line 674 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_25_25;
#line 674 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_26_26;
#line 674 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_27_27;
#line 674 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_28_28;
#line 676 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_36_36;
#line 676 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_37_37;
#line 676 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_39_39;
#line 676 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_40_40;
#line 676 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_41_41;
#line 676 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_42_42;
#line 676 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_43_43;
#line 676 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_44_44;
#line 676 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_38_38;

#line 674 "typecheck_info.m"
    check_hlds__typecheck_info__Markers0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_10_10, (MR_Integer) 2)));
#line 674 "typecheck_info.m"
    check_hlds__typecheck_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_10_10, (MR_Integer) 3)));
#line 674 "typecheck_info.m"
    check_hlds__typecheck_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_10_10, (MR_Integer) 4)));
#line 674 "typecheck_info.m"
    check_hlds__typecheck_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_10_10, (MR_Integer) 5)));
#line 674 "typecheck_info.m"
    check_hlds__typecheck_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_10_10, (MR_Integer) 6)));
#line 674 "typecheck_info.m"
    check_hlds__typecheck_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_10_10, (MR_Integer) 7)));
#line 674 "typecheck_info.m"
    check_hlds__typecheck_info__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_10_10, (MR_Integer) 8)));
#line 675 "typecheck_info.m"
    {
#line 675 "typecheck_info.m"
      hlds__hlds_pred__add_marker_3_p_0(check_hlds__typecheck_info__Marker_4, check_hlds__typecheck_info__Markers0_6, &check_hlds__typecheck_info__Markers_7);
    }
#line 676 "typecheck_info.m"
    check_hlds__typecheck_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 0)));
#line 676 "typecheck_info.m"
    check_hlds__typecheck_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 1)));
#line 676 "typecheck_info.m"
    check_hlds__typecheck_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 2)));
#line 676 "typecheck_info.m"
    check_hlds__typecheck_info__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 3)));
#line 676 "typecheck_info.m"
    check_hlds__typecheck_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 4)));
#line 676 "typecheck_info.m"
    check_hlds__typecheck_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 5)));
#line 676 "typecheck_info.m"
    check_hlds__typecheck_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 6)));
#line 676 "typecheck_info.m"
    check_hlds__typecheck_info__V_35_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 7)));
#line 676 "typecheck_info.m"
    check_hlds__typecheck_info__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_12_12, (MR_Integer) 0)));
#line 676 "typecheck_info.m"
    check_hlds__typecheck_info__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_12_12, (MR_Integer) 1)));
#line 676 "typecheck_info.m"
    check_hlds__typecheck_info__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_12_12, (MR_Integer) 2)));
#line 676 "typecheck_info.m"
    check_hlds__typecheck_info__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_12_12, (MR_Integer) 3)));
#line 676 "typecheck_info.m"
    check_hlds__typecheck_info__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_12_12, (MR_Integer) 4)));
#line 676 "typecheck_info.m"
    check_hlds__typecheck_info__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_12_12, (MR_Integer) 5)));
#line 676 "typecheck_info.m"
    check_hlds__typecheck_info__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_12_12, (MR_Integer) 6)));
#line 676 "typecheck_info.m"
    check_hlds__typecheck_info__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_12_12, (MR_Integer) 7)));
#line 676 "typecheck_info.m"
    check_hlds__typecheck_info__V_44_44 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_12_12, (MR_Integer) 8)));
#line 676 "typecheck_info.m"
    {
#line 676 "typecheck_info.m"
      check_hlds__typecheck_info__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 676 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_13_13, 0) = ((MR_Box) (check_hlds__typecheck_info__V_36_36));
#line 676 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_13_13, 1) = ((MR_Box) (check_hlds__typecheck_info__V_37_37));
#line 676 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_13_13, 2) = ((MR_Box) (check_hlds__typecheck_info__Markers_7));
#line 676 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_13_13, 3) = ((MR_Box) (check_hlds__typecheck_info__V_39_39));
#line 676 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_13_13, 4) = ((MR_Box) (check_hlds__typecheck_info__V_40_40));
#line 676 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_13_13, 5) = ((MR_Box) (check_hlds__typecheck_info__V_41_41));
#line 676 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_13_13, 6) = ((MR_Box) (check_hlds__typecheck_info__V_42_42));
#line 676 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_13_13, 7) = ((MR_Box) (check_hlds__typecheck_info__V_43_43));
#line 676 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_13_13, 8) = ((MR_Box) (check_hlds__typecheck_info__V_44_44));
#line 676 "typecheck_info.m"
    }
#line 676 "typecheck_info.m"
    {
#line 676 "typecheck_info.m"
      MR_Word base;
#line 676 "typecheck_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 676 "typecheck_info.m"
      *check_hlds__typecheck_info__STATE_VARIABLE_Info_9 = base;
#line 676 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__typecheck_info__V_13_13));
#line 676 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__typecheck_info__V_29_29));
#line 676 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__typecheck_info__V_30_30));
#line 676 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__typecheck_info__V_31_31));
#line 676 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__typecheck_info__V_32_32));
#line 676 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__typecheck_info__V_33_33));
#line 676 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__typecheck_info__V_34_34));
#line 676 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__typecheck_info__V_35_35));
#line 676 "typecheck_info.m"
    }
#line 673 "typecheck_info.m"
  }
#line 219 "typecheck_info.m"
}

#line 216 "typecheck_info.m"
void MR_CALL 
check_hlds__typecheck_info__typecheck_info_get_all_errors_2_p_0(
#line 216 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__Info_3,
#line 216 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__Errors_4)
#line 216 "typecheck_info.m"
{
#line 662 "typecheck_info.m"
  {
#line 662 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 662 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__Errors0_5;
#line 662 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__MaybeOverloadError_6;
#line 662 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 0)));
#line 615 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 1)));
#line 615 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 2)));
#line 615 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 3)));
#line 615 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 4)));
#line 615 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 5)));
#line 615 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 6)));
#line 615 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 7)));
#line 615 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_9_9, (MR_Integer) 0)));
#line 615 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_9_9, (MR_Integer) 1)));
#line 615 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_9_9, (MR_Integer) 2)));
#line 615 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_9_9, (MR_Integer) 3)));
#line 615 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_9_9, (MR_Integer) 4)));
#line 615 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_23_23;
#line 615 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_24_24;

#line 615 "typecheck_info.m"
    check_hlds__typecheck_info__Errors0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_9_9, (MR_Integer) 5)));
#line 615 "typecheck_info.m"
    check_hlds__typecheck_info__MaybeOverloadError_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_9_9, (MR_Integer) 6)));
#line 615 "typecheck_info.m"
    check_hlds__typecheck_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_9_9, (MR_Integer) 7)));
#line 615 "typecheck_info.m"
    check_hlds__typecheck_info__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_9_9, (MR_Integer) 8)));
#line 668 "typecheck_info.m"
    if ((check_hlds__typecheck_info__MaybeOverloadError_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 667 "typecheck_info.m"
      *check_hlds__typecheck_info__Errors_4 = check_hlds__typecheck_info__Errors0_5;
#line 668 "typecheck_info.m"
    else
#line 669 "typecheck_info.m"
      {
#line 669 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__OverloadError_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__MaybeOverloadError_6, (MR_Integer) 0)));

#line 670 "typecheck_info.m"
        {
#line 670 "typecheck_info.m"
          MR_Word base;
#line 670 "typecheck_info.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 670 "typecheck_info.m"
          *check_hlds__typecheck_info__Errors_4 = base;
#line 670 "typecheck_info.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__typecheck_info__OverloadError_7));
#line 670 "typecheck_info.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__typecheck_info__Errors0_5));
#line 670 "typecheck_info.m"
        }
#line 669 "typecheck_info.m"
      }
#line 662 "typecheck_info.m"
  }
#line 216 "typecheck_info.m"
}

#line 213 "typecheck_info.m"
void MR_CALL 
check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(
#line 213 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__Error_4,
#line 213 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__STATE_VARIABLE_Info_0_8,
#line 213 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__STATE_VARIABLE_Info_9)
#line 213 "typecheck_info.m"
{
#line 657 "typecheck_info.m"
  {
#line 657 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 657 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__Errors0_6;
#line 657 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__Errors_7;
#line 657 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 0)));
#line 657 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 1)));
#line 657 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 2)));
#line 657 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 3)));
#line 657 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 4)));
#line 657 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 5)));
#line 657 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 6)));
#line 657 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 7)));
#line 657 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_12_12, (MR_Integer) 0)));
#line 657 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_12_12, (MR_Integer) 1)));
#line 657 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_12_12, (MR_Integer) 2)));
#line 657 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_12_12, (MR_Integer) 3)));
#line 657 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_12_12, (MR_Integer) 4)));
#line 657 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_25_25;
#line 657 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_26_26;
#line 657 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_27_27;
#line 657 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_31_31;

#line 615 "typecheck_info.m"
    check_hlds__typecheck_info__Errors0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_12_12, (MR_Integer) 5)));
#line 615 "typecheck_info.m"
    check_hlds__typecheck_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_12_12, (MR_Integer) 6)));
#line 615 "typecheck_info.m"
    check_hlds__typecheck_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_12_12, (MR_Integer) 7)));
#line 615 "typecheck_info.m"
    check_hlds__typecheck_info__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_12_12, (MR_Integer) 8)));
#line 659 "typecheck_info.m"
    {
#line 659 "typecheck_info.m"
      check_hlds__typecheck_info__Errors_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 659 "typecheck_info.m"
      MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__Errors_7, 0) = ((MR_Box) (check_hlds__typecheck_info__Error_4));
#line 659 "typecheck_info.m"
      MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__Errors_7, 1) = ((MR_Box) (check_hlds__typecheck_info__Errors0_6));
#line 659 "typecheck_info.m"
    }
#line 628 "typecheck_info.m"
    {
#line 628 "typecheck_info.m"
      check_hlds__typecheck_info__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 628 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_31_31, 0) = ((MR_Box) (check_hlds__typecheck_info__V_20_20));
#line 628 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_31_31, 1) = ((MR_Box) (check_hlds__typecheck_info__V_21_21));
#line 628 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_31_31, 2) = ((MR_Box) (check_hlds__typecheck_info__V_22_22));
#line 628 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_31_31, 3) = ((MR_Box) (check_hlds__typecheck_info__V_23_23));
#line 628 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_31_31, 4) = ((MR_Box) (check_hlds__typecheck_info__V_24_24));
#line 628 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_31_31, 5) = ((MR_Box) (check_hlds__typecheck_info__Errors_7));
#line 628 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_31_31, 6) = ((MR_Box) (check_hlds__typecheck_info__V_25_25));
#line 628 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_31_31, 7) = ((MR_Box) (check_hlds__typecheck_info__V_26_26));
#line 628 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_31_31, 8) = ((MR_Box) (check_hlds__typecheck_info__V_27_27));
#line 628 "typecheck_info.m"
    }
#line 628 "typecheck_info.m"
    {
#line 628 "typecheck_info.m"
      MR_Word base;
#line 628 "typecheck_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 628 "typecheck_info.m"
      *check_hlds__typecheck_info__STATE_VARIABLE_Info_9 = base;
#line 628 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__typecheck_info__V_31_31));
#line 628 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__typecheck_info__V_13_13));
#line 628 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__typecheck_info__V_14_14));
#line 628 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__typecheck_info__V_15_15));
#line 628 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__typecheck_info__V_16_16));
#line 628 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__typecheck_info__V_17_17));
#line 628 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__typecheck_info__V_18_18));
#line 628 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__typecheck_info__V_19_19));
#line 628 "typecheck_info.m"
    }
#line 657 "typecheck_info.m"
  }
#line 213 "typecheck_info.m"
}

#line 210 "typecheck_info.m"
void MR_CALL 
check_hlds__typecheck_info__typecheck_info_add_overloaded_symbol_4_p_0(
#line 210 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__Symbol_5,
#line 210 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__Context_6,
#line 210 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__STATE_VARIABLE_Info_0_12,
#line 210 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__STATE_VARIABLE_Info_13)
#line 210 "typecheck_info.m"
{
#line 646 "typecheck_info.m"
  {
#line 646 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 646 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__SymbolMap0_8;
#line 646 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__SymbolMap_11;
#line 646 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_12, (MR_Integer) 0)));
#line 646 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_42_42;
#line 646 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_43_43;
#line 646 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_44_44;
#line 646 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_45_45;
#line 646 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_46_46;
#line 646 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_47_47;
#line 646 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_48_48;
#line 646 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_49_49;
#line 646 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_50_50;
#line 619 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_12, (MR_Integer) 1)));
#line 619 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_12, (MR_Integer) 2)));
#line 619 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_12, (MR_Integer) 3)));
#line 619 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_12, (MR_Integer) 4)));
#line 619 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_12, (MR_Integer) 5)));
#line 619 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_12, (MR_Integer) 6)));
#line 619 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_12, (MR_Integer) 7)));
#line 619 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_24_24, (MR_Integer) 0)));
#line 619 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_24_24, (MR_Integer) 1)));
#line 619 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_24_24, (MR_Integer) 2)));
#line 619 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_24_24, (MR_Integer) 3)));
#line 619 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_24_24, (MR_Integer) 4)));
#line 619 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_24_24, (MR_Integer) 5)));
#line 619 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_24_24, (MR_Integer) 6)));
#line 619 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_39_39;
#line 651 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__OldContexts_9;
#line 648 "typecheck_info.m"
    MR_Box check_hlds__typecheck_info__conv0_OldContexts_9;
#line 632 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_51_51;
#line 632 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_52_52;
#line 632 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_53_53;
#line 632 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_54_54;
#line 632 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_55_55;
#line 632 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_56_56;
#line 632 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_57_57;
#line 632 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_59_59;
#line 632 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_58_58;

#line 619 "typecheck_info.m"
    check_hlds__typecheck_info__SymbolMap0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_24_24, (MR_Integer) 7)));
#line 619 "typecheck_info.m"
    check_hlds__typecheck_info__V_39_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_24_24, (MR_Integer) 8)));
#line 648 "typecheck_info.m"
    {
#line 648 "typecheck_info.m"
      check_hlds__typecheck_info__succeeded = mercury__map__search_3_p_0((MR_Word) &check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_overloaded_symbol_0, (MR_Word) &check_hlds__typecheck_info_scalar_common_1[1], check_hlds__typecheck_info__SymbolMap0_8, ((MR_Box) (check_hlds__typecheck_info__Symbol_5)), &check_hlds__typecheck_info__conv0_OldContexts_9);
    }
#line 648 "typecheck_info.m"
    if (check_hlds__typecheck_info__succeeded)
#line 648 "typecheck_info.m"
      {
#line 648 "typecheck_info.m"
        check_hlds__typecheck_info__OldContexts_9 = ((MR_Word) check_hlds__typecheck_info__conv0_OldContexts_9);
#line 648 "typecheck_info.m"
        check_hlds__typecheck_info__succeeded = MR_TRUE;
#line 648 "typecheck_info.m"
      }
#line 651 "typecheck_info.m"
    if (check_hlds__typecheck_info__succeeded)
#line 649 "typecheck_info.m"
      {
#line 649 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__Contexts_10;

#line 649 "typecheck_info.m"
        {
#line 649 "typecheck_info.m"
          check_hlds__typecheck_info__Contexts_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 649 "typecheck_info.m"
          MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__Contexts_10, 0) = ((MR_Box) (check_hlds__typecheck_info__Context_6));
#line 649 "typecheck_info.m"
          MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__Contexts_10, 1) = ((MR_Box) (check_hlds__typecheck_info__OldContexts_9));
#line 649 "typecheck_info.m"
        }
#line 650 "typecheck_info.m"
        {
#line 650 "typecheck_info.m"
          mercury__map__det_update_4_p_0((MR_Word) &check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_overloaded_symbol_0, (MR_Word) &check_hlds__typecheck_info_scalar_common_1[1], ((MR_Box) (check_hlds__typecheck_info__Symbol_5)), ((MR_Box) (check_hlds__typecheck_info__Contexts_10)), check_hlds__typecheck_info__SymbolMap0_8, &check_hlds__typecheck_info__SymbolMap_11);
        }
#line 649 "typecheck_info.m"
      }
#line 651 "typecheck_info.m"
    else
#line 652 "typecheck_info.m"
      {
#line 652 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__Contexts_16;

#line 652 "typecheck_info.m"
        {
#line 652 "typecheck_info.m"
          check_hlds__typecheck_info__Contexts_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 652 "typecheck_info.m"
          MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__Contexts_16, 0) = ((MR_Box) (check_hlds__typecheck_info__Context_6));
#line 652 "typecheck_info.m"
          MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__Contexts_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 652 "typecheck_info.m"
        }
#line 653 "typecheck_info.m"
        {
#line 653 "typecheck_info.m"
          mercury__map__det_insert_4_p_0((MR_Word) &check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_overloaded_symbol_0, (MR_Word) &check_hlds__typecheck_info_scalar_common_1[1], ((MR_Box) (check_hlds__typecheck_info__Symbol_5)), ((MR_Box) (check_hlds__typecheck_info__Contexts_16)), check_hlds__typecheck_info__SymbolMap0_8, &check_hlds__typecheck_info__SymbolMap_11);
        }
#line 652 "typecheck_info.m"
      }
#line 632 "typecheck_info.m"
    check_hlds__typecheck_info__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_12, (MR_Integer) 0)));
#line 632 "typecheck_info.m"
    check_hlds__typecheck_info__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_12, (MR_Integer) 1)));
#line 632 "typecheck_info.m"
    check_hlds__typecheck_info__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_12, (MR_Integer) 2)));
#line 632 "typecheck_info.m"
    check_hlds__typecheck_info__V_46_46 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_12, (MR_Integer) 3)));
#line 632 "typecheck_info.m"
    check_hlds__typecheck_info__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_12, (MR_Integer) 4)));
#line 632 "typecheck_info.m"
    check_hlds__typecheck_info__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_12, (MR_Integer) 5)));
#line 632 "typecheck_info.m"
    check_hlds__typecheck_info__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_12, (MR_Integer) 6)));
#line 632 "typecheck_info.m"
    check_hlds__typecheck_info__V_50_50 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_12, (MR_Integer) 7)));
#line 632 "typecheck_info.m"
    check_hlds__typecheck_info__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_42_42, (MR_Integer) 0)));
#line 632 "typecheck_info.m"
    check_hlds__typecheck_info__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_42_42, (MR_Integer) 1)));
#line 632 "typecheck_info.m"
    check_hlds__typecheck_info__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_42_42, (MR_Integer) 2)));
#line 632 "typecheck_info.m"
    check_hlds__typecheck_info__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_42_42, (MR_Integer) 3)));
#line 632 "typecheck_info.m"
    check_hlds__typecheck_info__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_42_42, (MR_Integer) 4)));
#line 632 "typecheck_info.m"
    check_hlds__typecheck_info__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_42_42, (MR_Integer) 5)));
#line 632 "typecheck_info.m"
    check_hlds__typecheck_info__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_42_42, (MR_Integer) 6)));
#line 632 "typecheck_info.m"
    check_hlds__typecheck_info__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_42_42, (MR_Integer) 7)));
#line 632 "typecheck_info.m"
    check_hlds__typecheck_info__V_59_59 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_42_42, (MR_Integer) 8)));
#line 632 "typecheck_info.m"
    {
#line 632 "typecheck_info.m"
      check_hlds__typecheck_info__V_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 632 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_43_43, 0) = ((MR_Box) (check_hlds__typecheck_info__V_51_51));
#line 632 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_43_43, 1) = ((MR_Box) (check_hlds__typecheck_info__V_52_52));
#line 632 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_43_43, 2) = ((MR_Box) (check_hlds__typecheck_info__V_53_53));
#line 632 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_43_43, 3) = ((MR_Box) (check_hlds__typecheck_info__V_54_54));
#line 632 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_43_43, 4) = ((MR_Box) (check_hlds__typecheck_info__V_55_55));
#line 632 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_43_43, 5) = ((MR_Box) (check_hlds__typecheck_info__V_56_56));
#line 632 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_43_43, 6) = ((MR_Box) (check_hlds__typecheck_info__V_57_57));
#line 632 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_43_43, 7) = ((MR_Box) (check_hlds__typecheck_info__SymbolMap_11));
#line 632 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_43_43, 8) = ((MR_Box) (check_hlds__typecheck_info__V_59_59));
#line 632 "typecheck_info.m"
    }
#line 632 "typecheck_info.m"
    {
#line 632 "typecheck_info.m"
      MR_Word base;
#line 632 "typecheck_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 632 "typecheck_info.m"
      *check_hlds__typecheck_info__STATE_VARIABLE_Info_13 = base;
#line 632 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__typecheck_info__V_43_43));
#line 632 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__typecheck_info__V_44_44));
#line 632 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__typecheck_info__V_45_45));
#line 632 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__typecheck_info__V_46_46));
#line 632 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__typecheck_info__V_47_47));
#line 632 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__typecheck_info__V_48_48));
#line 632 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__typecheck_info__V_49_49));
#line 632 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__typecheck_info__V_50_50));
#line 632 "typecheck_info.m"
    }
#line 646 "typecheck_info.m"
  }
#line 210 "typecheck_info.m"
}

#line 208 "typecheck_info.m"
void MR_CALL 
check_hlds__typecheck_info__typecheck_info_get_ctors_2_p_0(
#line 208 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__Info_3,
#line 208 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__Ctors_4)
#line 208 "typecheck_info.m"
{
#line 643 "typecheck_info.m"
  {
#line 643 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 643 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 1)));
#line 644 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 0)));
#line 644 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 2)));
#line 644 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 3)));
#line 644 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 4)));
#line 644 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 5)));
#line 644 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 6)));
#line 644 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 7)));

#line 644 "typecheck_info.m"
    {
#line 644 "typecheck_info.m"
      hlds__hlds_module__module_info_get_cons_table_2_p_0(check_hlds__typecheck_info__V_5_5, check_hlds__typecheck_info__Ctors_4);
#line 644 "typecheck_info.m"
      return;
    }
#line 643 "typecheck_info.m"
  }
#line 208 "typecheck_info.m"
}

#line 207 "typecheck_info.m"
void MR_CALL 
check_hlds__typecheck_info__typecheck_info_get_types_2_p_0(
#line 207 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__Info_3,
#line 207 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__Types_4)
#line 207 "typecheck_info.m"
{
#line 641 "typecheck_info.m"
  {
#line 641 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 641 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 1)));
#line 642 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 0)));
#line 642 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 2)));
#line 642 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 3)));
#line 642 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 4)));
#line 642 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 5)));
#line 642 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 6)));
#line 642 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 7)));

#line 642 "typecheck_info.m"
    {
#line 642 "typecheck_info.m"
      hlds__hlds_module__module_info_get_type_table_2_p_0(check_hlds__typecheck_info__V_5_5, check_hlds__typecheck_info__Types_4);
#line 642 "typecheck_info.m"
      return;
    }
#line 641 "typecheck_info.m"
  }
#line 207 "typecheck_info.m"
}

#line 205 "typecheck_info.m"
void MR_CALL 
check_hlds__typecheck_info__typecheck_info_get_preds_2_p_0(
#line 205 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__Info_3,
#line 205 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__Preds_4)
#line 205 "typecheck_info.m"
{
#line 639 "typecheck_info.m"
  {
#line 639 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 639 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 1)));
#line 640 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 0)));
#line 640 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 2)));
#line 640 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 3)));
#line 640 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 4)));
#line 640 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 5)));
#line 640 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 6)));
#line 640 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 7)));

#line 640 "typecheck_info.m"
    {
#line 640 "typecheck_info.m"
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(check_hlds__typecheck_info__V_5_5, check_hlds__typecheck_info__Preds_4);
#line 640 "typecheck_info.m"
      return;
    }
#line 639 "typecheck_info.m"
  }
#line 205 "typecheck_info.m"
}

#line 203 "typecheck_info.m"
void MR_CALL 
check_hlds__typecheck_info__typecheck_info_get_module_name_2_p_0(
#line 203 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__Info_3,
#line 203 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__Name_4)
#line 203 "typecheck_info.m"
{
#line 637 "typecheck_info.m"
  {
#line 637 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 637 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 1)));
#line 638 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 0)));
#line 638 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 2)));
#line 638 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 3)));
#line 638 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 4)));
#line 638 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 5)));
#line 638 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 6)));
#line 638 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 7)));

#line 638 "typecheck_info.m"
    {
#line 638 "typecheck_info.m"
      hlds__hlds_module__module_info_get_name_2_p_0(check_hlds__typecheck_info__V_5_5, check_hlds__typecheck_info__Name_4);
#line 638 "typecheck_info.m"
      return;
    }
#line 637 "typecheck_info.m"
  }
#line 203 "typecheck_info.m"
}

#line 195 "typecheck_info.m"
void MR_CALL 
check_hlds__typecheck_info__typecheck_info_set_overloaded_symbols_3_p_0(
#line 195 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__Symbols_4,
#line 195 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__Info_5,
#line 195 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__HeadVar__3_3)
#line 195 "typecheck_info.m"
{
#line 632 "typecheck_info.m"
  {
#line 632 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 632 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_5, (MR_Integer) 0)));
#line 632 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_7_7;
#line 632 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_5, (MR_Integer) 1)));
#line 632 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_5, (MR_Integer) 2)));
#line 632 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_5, (MR_Integer) 3)));
#line 632 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_5, (MR_Integer) 4)));
#line 632 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_5, (MR_Integer) 5)));
#line 632 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_5, (MR_Integer) 6)));
#line 632 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_5, (MR_Integer) 7)));
#line 632 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_6_6, (MR_Integer) 0)));
#line 632 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_6_6, (MR_Integer) 1)));
#line 632 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_6_6, (MR_Integer) 2)));
#line 632 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_6_6, (MR_Integer) 3)));
#line 632 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_6_6, (MR_Integer) 4)));
#line 632 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_6_6, (MR_Integer) 5)));
#line 632 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_6_6, (MR_Integer) 6)));
#line 632 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_6_6, (MR_Integer) 8)));
#line 632 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_6_6, (MR_Integer) 7)));

#line 632 "typecheck_info.m"
    {
#line 632 "typecheck_info.m"
      check_hlds__typecheck_info__V_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 632 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_7_7, 0) = ((MR_Box) (check_hlds__typecheck_info__V_15_15));
#line 632 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_7_7, 1) = ((MR_Box) (check_hlds__typecheck_info__V_16_16));
#line 632 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_7_7, 2) = ((MR_Box) (check_hlds__typecheck_info__V_17_17));
#line 632 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_7_7, 3) = ((MR_Box) (check_hlds__typecheck_info__V_18_18));
#line 632 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_7_7, 4) = ((MR_Box) (check_hlds__typecheck_info__V_19_19));
#line 632 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_7_7, 5) = ((MR_Box) (check_hlds__typecheck_info__V_20_20));
#line 632 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_7_7, 6) = ((MR_Box) (check_hlds__typecheck_info__V_21_21));
#line 632 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_7_7, 7) = ((MR_Box) (check_hlds__typecheck_info__Symbols_4));
#line 632 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_7_7, 8) = ((MR_Box) (check_hlds__typecheck_info__V_23_23));
#line 632 "typecheck_info.m"
    }
#line 632 "typecheck_info.m"
    {
#line 632 "typecheck_info.m"
      MR_Word base;
#line 632 "typecheck_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 632 "typecheck_info.m"
      *check_hlds__typecheck_info__HeadVar__3_3 = base;
#line 632 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__typecheck_info__V_7_7));
#line 632 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__typecheck_info__V_8_8));
#line 632 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__typecheck_info__V_9_9));
#line 632 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__typecheck_info__V_10_10));
#line 632 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__typecheck_info__V_11_11));
#line 632 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__typecheck_info__V_12_12));
#line 632 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__typecheck_info__V_13_13));
#line 632 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__typecheck_info__V_14_14));
#line 632 "typecheck_info.m"
    }
#line 632 "typecheck_info.m"
  }
#line 195 "typecheck_info.m"
}

#line 193 "typecheck_info.m"
void MR_CALL 
check_hlds__typecheck_info__typecheck_info_set_overload_error_3_p_0(
#line 193 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__OverloadSpec_4,
#line 193 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__Info_5,
#line 193 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__HeadVar__3_3)
#line 193 "typecheck_info.m"
{
#line 630 "typecheck_info.m"
  {
#line 630 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 630 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_5, (MR_Integer) 0)));
#line 630 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_7_7;
#line 630 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_5, (MR_Integer) 1)));
#line 630 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_5, (MR_Integer) 2)));
#line 630 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_5, (MR_Integer) 3)));
#line 630 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_5, (MR_Integer) 4)));
#line 630 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_5, (MR_Integer) 5)));
#line 630 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_5, (MR_Integer) 6)));
#line 630 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_5, (MR_Integer) 7)));
#line 630 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_6_6, (MR_Integer) 0)));
#line 630 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_6_6, (MR_Integer) 1)));
#line 630 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_6_6, (MR_Integer) 2)));
#line 630 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_6_6, (MR_Integer) 3)));
#line 630 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_6_6, (MR_Integer) 4)));
#line 630 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_6_6, (MR_Integer) 5)));
#line 630 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_6_6, (MR_Integer) 7)));
#line 630 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_6_6, (MR_Integer) 8)));
#line 630 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_6_6, (MR_Integer) 6)));

#line 630 "typecheck_info.m"
    {
#line 630 "typecheck_info.m"
      check_hlds__typecheck_info__V_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 630 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_7_7, 0) = ((MR_Box) (check_hlds__typecheck_info__V_15_15));
#line 630 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_7_7, 1) = ((MR_Box) (check_hlds__typecheck_info__V_16_16));
#line 630 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_7_7, 2) = ((MR_Box) (check_hlds__typecheck_info__V_17_17));
#line 630 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_7_7, 3) = ((MR_Box) (check_hlds__typecheck_info__V_18_18));
#line 630 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_7_7, 4) = ((MR_Box) (check_hlds__typecheck_info__V_19_19));
#line 630 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_7_7, 5) = ((MR_Box) (check_hlds__typecheck_info__V_20_20));
#line 630 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_7_7, 6) = ((MR_Box) (check_hlds__typecheck_info__OverloadSpec_4));
#line 630 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_7_7, 7) = ((MR_Box) (check_hlds__typecheck_info__V_22_22));
#line 630 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_7_7, 8) = ((MR_Box) (check_hlds__typecheck_info__V_23_23));
#line 630 "typecheck_info.m"
    }
#line 630 "typecheck_info.m"
    {
#line 630 "typecheck_info.m"
      MR_Word base;
#line 630 "typecheck_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 630 "typecheck_info.m"
      *check_hlds__typecheck_info__HeadVar__3_3 = base;
#line 630 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__typecheck_info__V_7_7));
#line 630 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__typecheck_info__V_8_8));
#line 630 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__typecheck_info__V_9_9));
#line 630 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__typecheck_info__V_10_10));
#line 630 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__typecheck_info__V_11_11));
#line 630 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__typecheck_info__V_12_12));
#line 630 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__typecheck_info__V_13_13));
#line 630 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__typecheck_info__V_14_14));
#line 630 "typecheck_info.m"
    }
#line 630 "typecheck_info.m"
  }
#line 193 "typecheck_info.m"
}

#line 191 "typecheck_info.m"
void MR_CALL 
check_hlds__typecheck_info__typecheck_info_set_called_predid_3_p_0(
#line 191 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__PredCallId_4,
#line 191 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__Info_5,
#line 191 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__HeadVar__3_3)
#line 191 "typecheck_info.m"
{
#line 626 "typecheck_info.m"
  {
#line 626 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 626 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_5, (MR_Integer) 0)));
#line 626 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_5, (MR_Integer) 1)));
#line 626 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_5, (MR_Integer) 3)));
#line 626 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_5, (MR_Integer) 4)));
#line 626 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_5, (MR_Integer) 5)));
#line 626 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_5, (MR_Integer) 6)));
#line 626 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_5, (MR_Integer) 7)));
#line 626 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_5, (MR_Integer) 2)));

#line 626 "typecheck_info.m"
    {
#line 626 "typecheck_info.m"
      MR_Word base;
#line 626 "typecheck_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 626 "typecheck_info.m"
      *check_hlds__typecheck_info__HeadVar__3_3 = base;
#line 626 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__typecheck_info__V_6_6));
#line 626 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__typecheck_info__V_7_7));
#line 626 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__typecheck_info__PredCallId_4));
#line 626 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__typecheck_info__V_9_9));
#line 626 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__typecheck_info__V_10_10));
#line 626 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__typecheck_info__V_11_11));
#line 626 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__typecheck_info__V_12_12));
#line 626 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__typecheck_info__V_13_13));
#line 626 "typecheck_info.m"
    }
#line 626 "typecheck_info.m"
  }
#line 191 "typecheck_info.m"
}

#line 188 "typecheck_info.m"
void MR_CALL 
check_hlds__typecheck_info__typecheck_info_get_ambiguity_error_limit_2_p_0(
#line 188 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__Info_3,
#line 188 "typecheck_info.m"
  MR_Integer * check_hlds__typecheck_info__HeadVar__2_2)
#line 188 "typecheck_info.m"
{
#line 621 "typecheck_info.m"
  {
#line 621 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 621 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 0)));
#line 621 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 1)));
#line 621 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 2)));
#line 621 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 3)));
#line 621 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 4)));
#line 621 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 5)));
#line 621 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 6)));
#line 621 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 7)));
#line 621 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 0)));
#line 621 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 1)));
#line 621 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 2)));
#line 621 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 3)));
#line 621 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 4)));
#line 621 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 5)));
#line 621 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 6)));
#line 621 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 7)));

#line 621 "typecheck_info.m"
    *check_hlds__typecheck_info__HeadVar__2_2 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 8)));
#line 621 "typecheck_info.m"
  }
#line 188 "typecheck_info.m"
}

#line 186 "typecheck_info.m"
void MR_CALL 
check_hlds__typecheck_info__typecheck_info_get_ambiguity_warn_limit_2_p_0(
#line 186 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__Info_3,
#line 186 "typecheck_info.m"
  MR_Integer * check_hlds__typecheck_info__HeadVar__2_2)
#line 186 "typecheck_info.m"
{
#line 623 "typecheck_info.m"
  {
#line 623 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 623 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 0)));
#line 623 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 1)));
#line 623 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 2)));
#line 623 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 3)));
#line 623 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 4)));
#line 623 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 5)));
#line 623 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 6)));

#line 623 "typecheck_info.m"
    *check_hlds__typecheck_info__HeadVar__2_2 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 7)));
#line 623 "typecheck_info.m"
  }
#line 186 "typecheck_info.m"
}

#line 184 "typecheck_info.m"
void MR_CALL 
check_hlds__typecheck_info__typecheck_info_get_overloaded_symbols_2_p_0(
#line 184 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__Info_3,
#line 184 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__HeadVar__2_2)
#line 184 "typecheck_info.m"
{
#line 619 "typecheck_info.m"
  {
#line 619 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 619 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 0)));
#line 619 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 1)));
#line 619 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 2)));
#line 619 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 3)));
#line 619 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 4)));
#line 619 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 5)));
#line 619 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 6)));
#line 619 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 7)));
#line 619 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 0)));
#line 619 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 1)));
#line 619 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 2)));
#line 619 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 3)));
#line 619 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 4)));
#line 619 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 5)));
#line 619 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 6)));
#line 619 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_19_19;

#line 619 "typecheck_info.m"
    *check_hlds__typecheck_info__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 7)));
#line 619 "typecheck_info.m"
    check_hlds__typecheck_info__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 8)));
#line 619 "typecheck_info.m"
  }
#line 184 "typecheck_info.m"
}

#line 182 "typecheck_info.m"
void MR_CALL 
check_hlds__typecheck_info__typecheck_info_get_overload_error_2_p_0(
#line 182 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__Info_3,
#line 182 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__HeadVar__2_2)
#line 182 "typecheck_info.m"
{
#line 617 "typecheck_info.m"
  {
#line 617 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 617 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 0)));
#line 617 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 1)));
#line 617 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 2)));
#line 617 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 3)));
#line 617 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 4)));
#line 617 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 5)));
#line 617 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 6)));
#line 617 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 7)));
#line 617 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 0)));
#line 617 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 1)));
#line 617 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 2)));
#line 617 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 3)));
#line 617 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 4)));
#line 617 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 5)));
#line 617 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_18_18;
#line 617 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_19_19;

#line 617 "typecheck_info.m"
    *check_hlds__typecheck_info__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 6)));
#line 617 "typecheck_info.m"
    check_hlds__typecheck_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 7)));
#line 617 "typecheck_info.m"
    check_hlds__typecheck_info__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 8)));
#line 617 "typecheck_info.m"
  }
#line 182 "typecheck_info.m"
}

#line 181 "typecheck_info.m"
void MR_CALL 
check_hlds__typecheck_info__typecheck_info_get_varset_2_p_0(
#line 181 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__Info_3,
#line 181 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__HeadVar__2_2)
#line 181 "typecheck_info.m"
{
#line 614 "typecheck_info.m"
  {
#line 614 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 614 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 0)));
#line 614 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 1)));
#line 614 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 2)));
#line 614 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 3)));
#line 614 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 4)));
#line 614 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 5)));
#line 614 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 6)));
#line 614 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 7)));
#line 614 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 0)));
#line 614 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 1)));
#line 614 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 2)));
#line 614 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 3)));
#line 614 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_16_16;
#line 614 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_17_17;
#line 614 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_18_18;
#line 614 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_19_19;

#line 614 "typecheck_info.m"
    *check_hlds__typecheck_info__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 4)));
#line 614 "typecheck_info.m"
    check_hlds__typecheck_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 5)));
#line 614 "typecheck_info.m"
    check_hlds__typecheck_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 6)));
#line 614 "typecheck_info.m"
    check_hlds__typecheck_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 7)));
#line 614 "typecheck_info.m"
    check_hlds__typecheck_info__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 8)));
#line 614 "typecheck_info.m"
  }
#line 181 "typecheck_info.m"
}

#line 178 "typecheck_info.m"
void MR_CALL 
check_hlds__typecheck_info__typecheck_info_get_called_predid_2_p_0(
#line 178 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__Info_3,
#line 178 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__HeadVar__2_2)
#line 178 "typecheck_info.m"
{
#line 613 "typecheck_info.m"
  {
#line 613 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 613 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 0)));
#line 613 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 1)));
#line 613 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_6_6;
#line 613 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_7_7;
#line 613 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_8_8;
#line 613 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_9_9;
#line 613 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_10_10;

#line 613 "typecheck_info.m"
    *check_hlds__typecheck_info__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 2)));
#line 613 "typecheck_info.m"
    check_hlds__typecheck_info__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 3)));
#line 613 "typecheck_info.m"
    check_hlds__typecheck_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 4)));
#line 613 "typecheck_info.m"
    check_hlds__typecheck_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 5)));
#line 613 "typecheck_info.m"
    check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 6)));
#line 613 "typecheck_info.m"
    check_hlds__typecheck_info__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 7)));
#line 613 "typecheck_info.m"
  }
#line 178 "typecheck_info.m"
}

#line 176 "typecheck_info.m"
void MR_CALL 
check_hlds__typecheck_info__typecheck_info_get_is_field_access_function_2_p_0(
#line 176 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__Info_3,
#line 176 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__HeadVar__2_2)
#line 176 "typecheck_info.m"
{
#line 611 "typecheck_info.m"
  {
#line 611 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 611 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 0)));
#line 611 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 1)));
#line 611 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 2)));
#line 611 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 3)));
#line 611 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 4)));
#line 611 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 5)));
#line 611 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 6)));
#line 611 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 7)));
#line 611 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 0)));
#line 611 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 1)));
#line 611 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 2)));
#line 611 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_15_15;
#line 611 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_16_16;
#line 611 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_17_17;
#line 611 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_18_18;
#line 611 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_19_19;

#line 611 "typecheck_info.m"
    *check_hlds__typecheck_info__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 3)));
#line 611 "typecheck_info.m"
    check_hlds__typecheck_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 4)));
#line 611 "typecheck_info.m"
    check_hlds__typecheck_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 5)));
#line 611 "typecheck_info.m"
    check_hlds__typecheck_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 6)));
#line 611 "typecheck_info.m"
    check_hlds__typecheck_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 7)));
#line 611 "typecheck_info.m"
    check_hlds__typecheck_info__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 8)));
#line 611 "typecheck_info.m"
  }
#line 176 "typecheck_info.m"
}

#line 174 "typecheck_info.m"
void MR_CALL 
check_hlds__typecheck_info__typecheck_info_get_pred_markers_2_p_0(
#line 174 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__Info_3,
#line 174 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__HeadVar__2_2)
#line 174 "typecheck_info.m"
{
#line 607 "typecheck_info.m"
  {
#line 607 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 607 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 0)));
#line 607 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 1)));
#line 607 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 2)));
#line 607 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 3)));
#line 607 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 4)));
#line 607 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 5)));
#line 607 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 6)));
#line 607 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 7)));
#line 607 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 0)));
#line 607 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 1)));
#line 607 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_14_14;
#line 607 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_15_15;
#line 607 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_16_16;
#line 607 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_17_17;
#line 607 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_18_18;
#line 607 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_19_19;

#line 607 "typecheck_info.m"
    *check_hlds__typecheck_info__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 2)));
#line 607 "typecheck_info.m"
    check_hlds__typecheck_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 3)));
#line 607 "typecheck_info.m"
    check_hlds__typecheck_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 4)));
#line 607 "typecheck_info.m"
    check_hlds__typecheck_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 5)));
#line 607 "typecheck_info.m"
    check_hlds__typecheck_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 6)));
#line 607 "typecheck_info.m"
    check_hlds__typecheck_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 7)));
#line 607 "typecheck_info.m"
    check_hlds__typecheck_info__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 8)));
#line 607 "typecheck_info.m"
  }
#line 174 "typecheck_info.m"
}

#line 172 "typecheck_info.m"
void MR_CALL 
check_hlds__typecheck_info__typecheck_info_get_pred_import_status_2_p_0(
#line 172 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__Info_3,
#line 172 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__HeadVar__2_2)
#line 172 "typecheck_info.m"
{
#line 609 "typecheck_info.m"
  {
#line 609 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 609 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 0)));
#line 609 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 1)));
#line 609 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 2)));
#line 609 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 3)));
#line 609 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 4)));
#line 609 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 5)));
#line 609 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 6)));
#line 609 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 7)));
#line 609 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 0)));
#line 609 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_13_13;
#line 609 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_14_14;
#line 609 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_15_15;
#line 609 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_16_16;
#line 609 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_17_17;
#line 609 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_18_18;
#line 609 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_19_19;

#line 609 "typecheck_info.m"
    *check_hlds__typecheck_info__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 1)));
#line 609 "typecheck_info.m"
    check_hlds__typecheck_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 2)));
#line 609 "typecheck_info.m"
    check_hlds__typecheck_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 3)));
#line 609 "typecheck_info.m"
    check_hlds__typecheck_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 4)));
#line 609 "typecheck_info.m"
    check_hlds__typecheck_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 5)));
#line 609 "typecheck_info.m"
    check_hlds__typecheck_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 6)));
#line 609 "typecheck_info.m"
    check_hlds__typecheck_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 7)));
#line 609 "typecheck_info.m"
    check_hlds__typecheck_info__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 8)));
#line 609 "typecheck_info.m"
  }
#line 172 "typecheck_info.m"
}

#line 171 "typecheck_info.m"
void MR_CALL 
check_hlds__typecheck_info__typecheck_info_get_predid_2_p_0(
#line 171 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__Info_3,
#line 171 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__HeadVar__2_2)
#line 171 "typecheck_info.m"
{
#line 605 "typecheck_info.m"
  {
#line 605 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 605 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 0)));
#line 605 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 1)));
#line 605 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 2)));
#line 605 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 3)));
#line 605 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 4)));
#line 605 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 5)));
#line 605 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 6)));
#line 605 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 7)));
#line 605 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_12_12;
#line 605 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_13_13;
#line 605 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_14_14;
#line 605 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_15_15;
#line 605 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_16_16;
#line 605 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_17_17;
#line 605 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_18_18;
#line 605 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_19_19;

#line 605 "typecheck_info.m"
    *check_hlds__typecheck_info__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 0)));
#line 605 "typecheck_info.m"
    check_hlds__typecheck_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 1)));
#line 605 "typecheck_info.m"
    check_hlds__typecheck_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 2)));
#line 605 "typecheck_info.m"
    check_hlds__typecheck_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 3)));
#line 605 "typecheck_info.m"
    check_hlds__typecheck_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 4)));
#line 605 "typecheck_info.m"
    check_hlds__typecheck_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 5)));
#line 605 "typecheck_info.m"
    check_hlds__typecheck_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 6)));
#line 605 "typecheck_info.m"
    check_hlds__typecheck_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 7)));
#line 605 "typecheck_info.m"
    check_hlds__typecheck_info__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 8)));
#line 605 "typecheck_info.m"
  }
#line 171 "typecheck_info.m"
}

#line 520 "typecheck_info.m"
static void MR_CALL 
check_hlds__typecheck_info__typecheck_info_get_final_info_12_p_0_4(
#line 520 "typecheck_info.m"
  MR_Box check_hlds__typecheck_info__closure_arg,
#line 520 "typecheck_info.m"
  MR_Box check_hlds__typecheck_info__wrapper_arg_1,
#line 520 "typecheck_info.m"
  MR_Box * check_hlds__typecheck_info__wrapper_arg_2)
#line 520 "typecheck_info.m"
{
#line 520 "typecheck_info.m"
  {
#line 520 "typecheck_info.m"
    MR_Box check_hlds__typecheck_info__closure = check_hlds__typecheck_info__closure_arg;
#line 520 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__conv7_HeadVar__3_3;

#line 520 "typecheck_info.m"
    {
#line 520 "typecheck_info.m"
      parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__typecheck_info__wrapper_arg_1), &check_hlds__typecheck_info__conv7_HeadVar__3_3);
    }
#line 520 "typecheck_info.m"
    *check_hlds__typecheck_info__wrapper_arg_2 = ((MR_Box) (check_hlds__typecheck_info__conv7_HeadVar__3_3));
#line 520 "typecheck_info.m"
  }
#line 520 "typecheck_info.m"
}

#line 468 "typecheck_info.m"
static void MR_CALL 
check_hlds__typecheck_info__typecheck_info_get_final_info_12_p_0_3(
#line 468 "typecheck_info.m"
  MR_Box check_hlds__typecheck_info__closure_arg,
#line 468 "typecheck_info.m"
  MR_Box check_hlds__typecheck_info__wrapper_arg_1,
#line 468 "typecheck_info.m"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2,
#line 468 "typecheck_info.m"
  MR_Box * check_hlds__typecheck_info__wrapper_arg_3)
#line 468 "typecheck_info.m"
{
#line 468 "typecheck_info.m"
  {
#line 468 "typecheck_info.m"
    MR_Box check_hlds__typecheck_info__closure = check_hlds__typecheck_info__closure_arg;
#line 468 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__conv5_HeadVar__3_3;

#line 468 "typecheck_info.m"
    {
#line 468 "typecheck_info.m"
      hlds__hlds_data__update_constraint_map_3_p_0(((MR_Word) check_hlds__typecheck_info__wrapper_arg_1), ((MR_Word) check_hlds__typecheck_info__wrapper_arg_2), &check_hlds__typecheck_info__conv5_HeadVar__3_3);
    }
#line 468 "typecheck_info.m"
    *check_hlds__typecheck_info__wrapper_arg_3 = ((MR_Box) (check_hlds__typecheck_info__conv5_HeadVar__3_3));
#line 468 "typecheck_info.m"
  }
#line 468 "typecheck_info.m"
}

#line 466 "typecheck_info.m"
static void MR_CALL 
check_hlds__typecheck_info__typecheck_info_get_final_info_12_p_0_2(
#line 466 "typecheck_info.m"
  MR_Box check_hlds__typecheck_info__closure_arg,
#line 466 "typecheck_info.m"
  MR_Box check_hlds__typecheck_info__wrapper_arg_1,
#line 466 "typecheck_info.m"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2,
#line 466 "typecheck_info.m"
  MR_Box * check_hlds__typecheck_info__wrapper_arg_3)
#line 466 "typecheck_info.m"
{
#line 466 "typecheck_info.m"
  {
#line 466 "typecheck_info.m"
    MR_Box check_hlds__typecheck_info__closure = check_hlds__typecheck_info__closure_arg;
#line 466 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__conv3_HeadVar__3_3;

#line 466 "typecheck_info.m"
    {
#line 466 "typecheck_info.m"
      hlds__hlds_data__update_constraint_map_3_p_0(((MR_Word) check_hlds__typecheck_info__wrapper_arg_1), ((MR_Word) check_hlds__typecheck_info__wrapper_arg_2), &check_hlds__typecheck_info__conv3_HeadVar__3_3);
    }
#line 466 "typecheck_info.m"
    *check_hlds__typecheck_info__wrapper_arg_3 = ((MR_Box) (check_hlds__typecheck_info__conv3_HeadVar__3_3));
#line 466 "typecheck_info.m"
  }
#line 466 "typecheck_info.m"
}

#line 446 "typecheck_info.m"
static void MR_CALL 
check_hlds__typecheck_info__typecheck_info_get_final_info_12_p_0_1(
#line 446 "typecheck_info.m"
  MR_Box check_hlds__typecheck_info__closure_arg,
#line 446 "typecheck_info.m"
  MR_Box check_hlds__typecheck_info__wrapper_arg_1,
#line 446 "typecheck_info.m"
  MR_Box * check_hlds__typecheck_info__wrapper_arg_2,
#line 446 "typecheck_info.m"
  MR_Box check_hlds__typecheck_info__wrapper_arg_3,
#line 446 "typecheck_info.m"
  MR_Box * check_hlds__typecheck_info__wrapper_arg_4)
#line 446 "typecheck_info.m"
{
#line 446 "typecheck_info.m"
  {
#line 446 "typecheck_info.m"
    MR_Box check_hlds__typecheck_info__closure = check_hlds__typecheck_info__closure_arg;
#line 446 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__conv1_Type_8;
#line 446 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__conv0_STATE_VARIABLE_TypeVarsSet_12;

#line 446 "typecheck_info.m"
    {
#line 446 "typecheck_info.m"
      check_hlds__typecheck_info__expand_types_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__typecheck_info__wrapper_arg_1), &check_hlds__typecheck_info__conv1_Type_8, ((MR_Word) check_hlds__typecheck_info__wrapper_arg_3), &check_hlds__typecheck_info__conv0_STATE_VARIABLE_TypeVarsSet_12);
    }
#line 446 "typecheck_info.m"
    *check_hlds__typecheck_info__wrapper_arg_2 = ((MR_Box) (check_hlds__typecheck_info__conv1_Type_8));
#line 446 "typecheck_info.m"
    *check_hlds__typecheck_info__wrapper_arg_4 = ((MR_Box) (check_hlds__typecheck_info__conv0_STATE_VARIABLE_TypeVarsSet_12));
#line 446 "typecheck_info.m"
  }
#line 446 "typecheck_info.m"
}

#line 147 "typecheck_info.m"
void MR_CALL 
check_hlds__typecheck_info__typecheck_info_get_final_info_12_p_0(
#line 147 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__Info_13,
#line 147 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__OldHeadTypeParams_14,
#line 147 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__OldExistQVars_15,
#line 147 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__OldExplicitVarTypes_16,
#line 147 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__NewTypeVarSet_17,
#line 147 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__NewHeadTypeParams_18,
#line 147 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__NewVarTypes_19,
#line 147 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__NewTypeConstraints_20,
#line 147 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__NewConstraintProofs_21,
#line 147 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__NewConstraintMap_22,
#line 147 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__TSubst_23,
#line 147 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__ExistTypeRenaming_24)
#line 147 "typecheck_info.m"
{
#line 427 "typecheck_info.m"
  {
#line 427 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 427 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__TypeAssignSet_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_13, (MR_Integer) 6)));
#line 428 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_13, (MR_Integer) 0)));
#line 428 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_13, (MR_Integer) 1)));
#line 428 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_13, (MR_Integer) 2)));
#line 428 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_70_70 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_13, (MR_Integer) 3)));
#line 428 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_13, (MR_Integer) 4)));
#line 428 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_13, (MR_Integer) 5)));
#line 428 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_73_73 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_13, (MR_Integer) 7)));

#line 530 "typecheck_info.m"
    if ((check_hlds__typecheck_info__TypeAssignSet_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 531 "typecheck_info.m"
      {
#line 532 "typecheck_info.m"
        {
#line 532 "typecheck_info.m"
          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.typecheck_info", (MR_String) "predicate \140check_hlds.typecheck_info.typecheck_info_get_final_info\'/12", (MR_String) "TypeAssignSet = []");
#line 532 "typecheck_info.m"
          return;
        }
#line 531 "typecheck_info.m"
      }
#line 530 "typecheck_info.m"
    else
#line 430 "typecheck_info.m"
      {
#line 430 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__TypeCtorInfo_85_85;
#line 430 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__TypeInfo_86_86;
#line 430 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__TypeInfo_90_90;
#line 430 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__TypeAssign_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__TypeAssignSet_25, (MR_Integer) 0)));
#line 430 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__HeadTypeParams_28;
#line 430 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__OldTypeVarSet_29;
#line 430 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__VarTypes0_30;
#line 430 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__TypeBindings_31;
#line 430 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__HLDSTypeConstraints_32;
#line 430 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__ConstraintProofs0_33;
#line 430 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__ConstraintMap0_34;
#line 430 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__VarTypes1_35;
#line 430 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__ConstraintProofs_36;
#line 430 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__ConstraintMap1_37;
#line 430 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__TypeVars1_39;
#line 430 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__HLDSUnivConstraints_41;
#line 430 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__HLDSExistConstraints_42;
#line 430 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__ConstraintMap2_45;
#line 430 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__ConstraintMap_46;
#line 430 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__ExplicitTypes_47;
#line 430 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__ExplicitTypeVars0_48;
#line 430 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__ExistQVarsToBeRenamed_49;
#line 430 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__ExistQVarsToRemain_50;
#line 430 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__TypeVars2_51;
#line 430 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__TypeVars_52;
#line 430 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__TypeConstraints_53;
#line 430 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_61_61;
#line 430 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_62_62;
#line 430 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_63_63;
#line 430 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_64_64;
#line 430 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__TypeAssignSet_25, (MR_Integer) 1)));
#line 464 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_43_43;
#line 464 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_44_44;
#line 466 "typecheck_info.m"
        MR_Box check_hlds__typecheck_info__conv4_ConstraintMap2_45;
#line 468 "typecheck_info.m"
        MR_Box check_hlds__typecheck_info__conv6_ConstraintMap_46;

#line 431 "typecheck_info.m"
        {
#line 431 "typecheck_info.m"
          check_hlds__typecheck_info__type_assign_get_head_type_params_2_p_0(check_hlds__typecheck_info__TypeAssign_26, &check_hlds__typecheck_info__HeadTypeParams_28);
        }
#line 432 "typecheck_info.m"
        {
#line 432 "typecheck_info.m"
          check_hlds__typecheck_info__type_assign_get_typevarset_2_p_0(check_hlds__typecheck_info__TypeAssign_26, &check_hlds__typecheck_info__OldTypeVarSet_29);
        }
#line 433 "typecheck_info.m"
        {
#line 433 "typecheck_info.m"
          check_hlds__typecheck_info__type_assign_get_var_types_2_p_0(check_hlds__typecheck_info__TypeAssign_26, &check_hlds__typecheck_info__VarTypes0_30);
        }
#line 434 "typecheck_info.m"
        {
#line 434 "typecheck_info.m"
          check_hlds__typecheck_info__type_assign_get_type_bindings_2_p_0(check_hlds__typecheck_info__TypeAssign_26, &check_hlds__typecheck_info__TypeBindings_31);
        }
#line 435 "typecheck_info.m"
        {
#line 435 "typecheck_info.m"
          check_hlds__typecheck_info__type_assign_get_typeclass_constraints_2_p_0(check_hlds__typecheck_info__TypeAssign_26, &check_hlds__typecheck_info__HLDSTypeConstraints_32);
        }
#line 436 "typecheck_info.m"
        {
#line 436 "typecheck_info.m"
          check_hlds__typecheck_info__type_assign_get_constraint_proofs_2_p_0(check_hlds__typecheck_info__TypeAssign_26, &check_hlds__typecheck_info__ConstraintProofs0_33);
        }
#line 437 "typecheck_info.m"
        {
#line 437 "typecheck_info.m"
          check_hlds__typecheck_info__type_assign_get_constraint_map_2_p_0(check_hlds__typecheck_info__TypeAssign_26, &check_hlds__typecheck_info__ConstraintMap0_34);
        }
#line 439 "typecheck_info.m"
        {
#line 439 "typecheck_info.m"
          check_hlds__typecheck_info__succeeded = mercury__map__is_empty_1_p_0((MR_Word) &check_hlds__typecheck_info_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, check_hlds__typecheck_info__TypeBindings_31);
        }
#line 445 "typecheck_info.m"
        if (check_hlds__typecheck_info__succeeded)
#line 440 "typecheck_info.m"
          {
#line 440 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__Types1_38;

#line 440 "typecheck_info.m"
            check_hlds__typecheck_info__VarTypes1_35 = check_hlds__typecheck_info__VarTypes0_30;
#line 441 "typecheck_info.m"
            check_hlds__typecheck_info__ConstraintProofs_36 = check_hlds__typecheck_info__ConstraintProofs0_33;
#line 442 "typecheck_info.m"
            check_hlds__typecheck_info__ConstraintMap1_37 = check_hlds__typecheck_info__ConstraintMap0_34;
#line 443 "typecheck_info.m"
            {
#line 443 "typecheck_info.m"
              parse_tree__prog_data__vartypes_types_2_p_0(check_hlds__typecheck_info__VarTypes1_35, &check_hlds__typecheck_info__Types1_38);
            }
#line 444 "typecheck_info.m"
            {
#line 444 "typecheck_info.m"
              parse_tree__prog_type__type_vars_list_2_p_0(check_hlds__typecheck_info__Types1_38, &check_hlds__typecheck_info__TypeVars1_39);
            }
#line 440 "typecheck_info.m"
          }
#line 445 "typecheck_info.m"
        else
#line 447 "typecheck_info.m"
          {
#line 447 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__TypeInfo_80_80;
#line 447 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__TypeVarsSet1_40;
#line 447 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__V_57_57;
#line 447 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__V_58_58;
#line 446 "typecheck_info.m"
            MR_Box check_hlds__typecheck_info__conv2_TypeVarsSet1_40;

#line 446 "typecheck_info.m"
            {
#line 446 "typecheck_info.m"
              check_hlds__typecheck_info__V_57_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 446 "typecheck_info.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_57_57, 0) = ((MR_Box) (&check_hlds__typecheck_info_scalar_common_4[0]));
#line 446 "typecheck_info.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_57_57, 1) = ((MR_Box) (check_hlds__typecheck_info__typecheck_info_get_final_info_12_p_0_1));
#line 446 "typecheck_info.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_57_57, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 446 "typecheck_info.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_57_57, 3) = ((MR_Box) (check_hlds__typecheck_info__TypeBindings_31));
#line 446 "typecheck_info.m"
            }
#line 10531 "check_hlds.typecheck_info.c"
            check_hlds__typecheck_info__TypeInfo_80_80 = (MR_Word) &check_hlds__typecheck_info_scalar_common_1[0];
#line 447 "typecheck_info.m"
            {
#line 447 "typecheck_info.m"
              check_hlds__typecheck_info__V_58_58 = mercury__set__init_0_f_0(check_hlds__typecheck_info__TypeInfo_80_80);
            }
#line 446 "typecheck_info.m"
            {
#line 446 "typecheck_info.m"
              parse_tree__prog_data__transform_foldl_var_types_5_p_0((MR_Word) &check_hlds__typecheck_info_scalar_common_1[2], check_hlds__typecheck_info__V_57_57, check_hlds__typecheck_info__VarTypes0_30, &check_hlds__typecheck_info__VarTypes1_35, ((MR_Box) (check_hlds__typecheck_info__V_58_58)), &check_hlds__typecheck_info__conv2_TypeVarsSet1_40);
            }
#line 446 "typecheck_info.m"
            check_hlds__typecheck_info__TypeVarsSet1_40 = ((MR_Word) check_hlds__typecheck_info__conv2_TypeVarsSet1_40);
#line 448 "typecheck_info.m"
            {
#line 448 "typecheck_info.m"
              mercury__set__to_sorted_list_2_p_0(check_hlds__typecheck_info__TypeInfo_80_80, check_hlds__typecheck_info__TypeVarsSet1_40, &check_hlds__typecheck_info__TypeVars1_39);
            }
#line 449 "typecheck_info.m"
            {
#line 449 "typecheck_info.m"
              check_hlds__type_util__apply_rec_subst_to_constraint_proofs_3_p_0(check_hlds__typecheck_info__TypeBindings_31, check_hlds__typecheck_info__ConstraintProofs0_33, &check_hlds__typecheck_info__ConstraintProofs_36);
            }
#line 451 "typecheck_info.m"
            {
#line 451 "typecheck_info.m"
              check_hlds__type_util__apply_rec_subst_to_constraint_map_3_p_0(check_hlds__typecheck_info__TypeBindings_31, check_hlds__typecheck_info__ConstraintMap0_34, &check_hlds__typecheck_info__ConstraintMap1_37);
            }
#line 447 "typecheck_info.m"
          }
#line 464 "typecheck_info.m"
        check_hlds__typecheck_info__HLDSUnivConstraints_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HLDSTypeConstraints_32, (MR_Integer) 0)));
#line 464 "typecheck_info.m"
        check_hlds__typecheck_info__HLDSExistConstraints_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HLDSTypeConstraints_32, (MR_Integer) 1)));
#line 464 "typecheck_info.m"
        check_hlds__typecheck_info__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HLDSTypeConstraints_32, (MR_Integer) 2)));
#line 464 "typecheck_info.m"
        check_hlds__typecheck_info__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HLDSTypeConstraints_32, (MR_Integer) 3)));
#line 10570 "check_hlds.typecheck_info.c"
        check_hlds__typecheck_info__TypeCtorInfo_85_85 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_constraint_0;
#line 10572 "check_hlds.typecheck_info.c"
        check_hlds__typecheck_info__TypeInfo_86_86 = (MR_Word) &check_hlds__typecheck_info_scalar_common_2[0];
#line 466 "typecheck_info.m"
        {
#line 466 "typecheck_info.m"
          mercury__list__foldl_4_p_0(check_hlds__typecheck_info__TypeCtorInfo_85_85, check_hlds__typecheck_info__TypeInfo_86_86, (MR_Word) &check_hlds__typecheck_info_scalar_common_2[6], check_hlds__typecheck_info__HLDSUnivConstraints_41, ((MR_Box) (check_hlds__typecheck_info__ConstraintMap1_37)), &check_hlds__typecheck_info__conv4_ConstraintMap2_45);
        }
#line 466 "typecheck_info.m"
        check_hlds__typecheck_info__ConstraintMap2_45 = ((MR_Word) check_hlds__typecheck_info__conv4_ConstraintMap2_45);
#line 468 "typecheck_info.m"
        {
#line 468 "typecheck_info.m"
          mercury__list__foldl_4_p_0(check_hlds__typecheck_info__TypeCtorInfo_85_85, check_hlds__typecheck_info__TypeInfo_86_86, (MR_Word) &check_hlds__typecheck_info_scalar_common_2[7], check_hlds__typecheck_info__HLDSExistConstraints_42, ((MR_Box) (check_hlds__typecheck_info__ConstraintMap2_45)), &check_hlds__typecheck_info__conv6_ConstraintMap_46);
        }
#line 468 "typecheck_info.m"
        check_hlds__typecheck_info__ConstraintMap_46 = ((MR_Word) check_hlds__typecheck_info__conv6_ConstraintMap_46);
#line 474 "typecheck_info.m"
        {
#line 474 "typecheck_info.m"
          check_hlds__typecheck_info__get_existq_tvar_renaming_4_p_0(check_hlds__typecheck_info__OldHeadTypeParams_14, check_hlds__typecheck_info__OldExistQVars_15, check_hlds__typecheck_info__TypeBindings_31, check_hlds__typecheck_info__ExistTypeRenaming_24);
        }
#line 498 "typecheck_info.m"
        {
#line 498 "typecheck_info.m"
          parse_tree__prog_data__vartypes_types_2_p_0(check_hlds__typecheck_info__OldExplicitVarTypes_16, &check_hlds__typecheck_info__ExplicitTypes_47);
        }
#line 499 "typecheck_info.m"
        {
#line 499 "typecheck_info.m"
          parse_tree__prog_type__type_vars_list_2_p_0(check_hlds__typecheck_info__ExplicitTypes_47, &check_hlds__typecheck_info__ExplicitTypeVars0_48);
        }
#line 10603 "check_hlds.typecheck_info.c"
        check_hlds__typecheck_info__TypeInfo_90_90 = (MR_Word) &check_hlds__typecheck_info_scalar_common_1[0];
#line 500 "typecheck_info.m"
        {
#line 500 "typecheck_info.m"
          mercury__map__keys_2_p_0(check_hlds__typecheck_info__TypeInfo_90_90, check_hlds__typecheck_info__TypeInfo_90_90, *check_hlds__typecheck_info__ExistTypeRenaming_24, &check_hlds__typecheck_info__ExistQVarsToBeRenamed_49);
        }
#line 501 "typecheck_info.m"
        {
#line 501 "typecheck_info.m"
          mercury__list__delete_elems_3_p_0(check_hlds__typecheck_info__TypeInfo_90_90, check_hlds__typecheck_info__OldExistQVars_15, check_hlds__typecheck_info__ExistQVarsToBeRenamed_49, &check_hlds__typecheck_info__ExistQVarsToRemain_50);
        }
#line 504 "typecheck_info.m"
        {
#line 504 "typecheck_info.m"
          check_hlds__typecheck_info__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 504 "typecheck_info.m"
          MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__V_64_64, 0) = ((MR_Box) (check_hlds__typecheck_info__ExplicitTypeVars0_48));
#line 504 "typecheck_info.m"
          MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__V_64_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 504 "typecheck_info.m"
        }
#line 504 "typecheck_info.m"
        {
#line 504 "typecheck_info.m"
          check_hlds__typecheck_info__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 504 "typecheck_info.m"
          MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__V_63_63, 0) = ((MR_Box) (check_hlds__typecheck_info__TypeVars1_39));
#line 504 "typecheck_info.m"
          MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__V_63_63, 1) = ((MR_Box) (check_hlds__typecheck_info__V_64_64));
#line 504 "typecheck_info.m"
        }
#line 503 "typecheck_info.m"
        {
#line 503 "typecheck_info.m"
          check_hlds__typecheck_info__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 503 "typecheck_info.m"
          MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__V_62_62, 0) = ((MR_Box) (check_hlds__typecheck_info__HeadTypeParams_28));
#line 503 "typecheck_info.m"
          MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__V_62_62, 1) = ((MR_Box) (check_hlds__typecheck_info__V_63_63));
#line 503 "typecheck_info.m"
        }
#line 503 "typecheck_info.m"
        {
#line 503 "typecheck_info.m"
          check_hlds__typecheck_info__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 503 "typecheck_info.m"
          MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__V_61_61, 0) = ((MR_Box) (check_hlds__typecheck_info__ExistQVarsToRemain_50));
#line 503 "typecheck_info.m"
          MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__V_61_61, 1) = ((MR_Box) (check_hlds__typecheck_info__V_62_62));
#line 503 "typecheck_info.m"
        }
#line 503 "typecheck_info.m"
        {
#line 503 "typecheck_info.m"
          mercury__list__condense_2_p_0(check_hlds__typecheck_info__TypeInfo_90_90, check_hlds__typecheck_info__V_61_61, &check_hlds__typecheck_info__TypeVars2_51);
        }
#line 505 "typecheck_info.m"
        {
#line 505 "typecheck_info.m"
          mercury__list__sort_and_remove_dups_2_p_0(check_hlds__typecheck_info__TypeInfo_90_90, check_hlds__typecheck_info__TypeVars2_51, &check_hlds__typecheck_info__TypeVars_52);
        }
#line 508 "typecheck_info.m"
        {
#line 508 "typecheck_info.m"
          mercury__varset__squash_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, check_hlds__typecheck_info__OldTypeVarSet_29, check_hlds__typecheck_info__TypeVars_52, check_hlds__typecheck_info__NewTypeVarSet_17, check_hlds__typecheck_info__TSubst_23);
        }
#line 512 "typecheck_info.m"
        {
#line 512 "typecheck_info.m"
          hlds__hlds_data__retrieve_prog_constraints_2_p_0(check_hlds__typecheck_info__HLDSTypeConstraints_32, &check_hlds__typecheck_info__TypeConstraints_53);
        }
#line 513 "typecheck_info.m"
        {
#line 513 "typecheck_info.m"
          check_hlds__typecheck_info__succeeded = mercury__map__is_empty_1_p_0(check_hlds__typecheck_info__TypeInfo_90_90, check_hlds__typecheck_info__TypeInfo_90_90, *check_hlds__typecheck_info__TSubst_23);
        }
#line 519 "typecheck_info.m"
        if (check_hlds__typecheck_info__succeeded)
#line 514 "typecheck_info.m"
          {
#line 514 "typecheck_info.m"
            *check_hlds__typecheck_info__NewVarTypes_19 = check_hlds__typecheck_info__VarTypes1_35;
#line 515 "typecheck_info.m"
            *check_hlds__typecheck_info__NewHeadTypeParams_18 = check_hlds__typecheck_info__HeadTypeParams_28;
#line 516 "typecheck_info.m"
            *check_hlds__typecheck_info__NewTypeConstraints_20 = check_hlds__typecheck_info__TypeConstraints_53;
#line 517 "typecheck_info.m"
            *check_hlds__typecheck_info__NewConstraintProofs_21 = check_hlds__typecheck_info__ConstraintProofs_36;
#line 518 "typecheck_info.m"
            *check_hlds__typecheck_info__NewConstraintMap_22 = check_hlds__typecheck_info__ConstraintMap_46;
#line 514 "typecheck_info.m"
          }
#line 519 "typecheck_info.m"
        else
#line 521 "typecheck_info.m"
          {
#line 521 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__V_66_66;

#line 520 "typecheck_info.m"
            {
#line 520 "typecheck_info.m"
              check_hlds__typecheck_info__V_66_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 520 "typecheck_info.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_66_66, 0) = ((MR_Box) (&check_hlds__typecheck_info_scalar_common_5[1]));
#line 520 "typecheck_info.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_66_66, 1) = ((MR_Box) (check_hlds__typecheck_info__typecheck_info_get_final_info_12_p_0_4));
#line 520 "typecheck_info.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_66_66, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 520 "typecheck_info.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_66_66, 3) = ((MR_Box) (*check_hlds__typecheck_info__TSubst_23));
#line 520 "typecheck_info.m"
            }
#line 520 "typecheck_info.m"
            {
#line 520 "typecheck_info.m"
              parse_tree__prog_data__transform_var_types_3_p_0(check_hlds__typecheck_info__V_66_66, check_hlds__typecheck_info__VarTypes1_35, check_hlds__typecheck_info__NewVarTypes_19);
            }
#line 522 "typecheck_info.m"
            {
#line 522 "typecheck_info.m"
              mercury__map__apply_to_list_3_p_0(check_hlds__typecheck_info__TypeInfo_90_90, check_hlds__typecheck_info__TypeInfo_90_90, check_hlds__typecheck_info__HeadTypeParams_28, *check_hlds__typecheck_info__TSubst_23, check_hlds__typecheck_info__NewHeadTypeParams_18);
            }
#line 523 "typecheck_info.m"
            {
#line 523 "typecheck_info.m"
              parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraints_3_p_0(*check_hlds__typecheck_info__TSubst_23, check_hlds__typecheck_info__TypeConstraints_53, check_hlds__typecheck_info__NewTypeConstraints_20);
            }
#line 525 "typecheck_info.m"
            {
#line 525 "typecheck_info.m"
              check_hlds__type_util__apply_variable_renaming_to_constraint_proofs_3_p_0(*check_hlds__typecheck_info__TSubst_23, check_hlds__typecheck_info__ConstraintProofs_36, check_hlds__typecheck_info__NewConstraintProofs_21);
            }
#line 527 "typecheck_info.m"
            {
#line 527 "typecheck_info.m"
              check_hlds__type_util__apply_variable_renaming_to_constraint_map_3_p_0(*check_hlds__typecheck_info__TSubst_23, check_hlds__typecheck_info__ConstraintMap_46, check_hlds__typecheck_info__NewConstraintMap_22);
#line 527 "typecheck_info.m"
              return;
            }
#line 521 "typecheck_info.m"
          }
#line 430 "typecheck_info.m"
      }
#line 427 "typecheck_info.m"
  }
#line 147 "typecheck_info.m"
}

#line 123 "typecheck_info.m"
void MR_CALL 
check_hlds__typecheck_info__typecheck_info_init_12_p_0(
#line 123 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__ModuleInfo_13,
#line 123 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__PredId_14,
#line 123 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__IsFieldAccessFunction_15,
#line 123 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__TypeVarSet_16,
#line 123 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__VarSet_17,
#line 123 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__VarTypes_18,
#line 123 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__HeadTypeParams_19,
#line 123 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__Constraints_20,
#line 123 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__Status_21,
#line 123 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__PredMarkers_22,
#line 123 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__NonOverloadErrors_23,
#line 123 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__Info_24)
#line 123 "typecheck_info.m"
{
#line 398 "typecheck_info.m"
  {
#line 398 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 398 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__TypeCtorInfo_52_52;
#line 398 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__Context_27;
#line 398 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__TypeBindings_28;
#line 398 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__Proofs_29;
#line 398 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__ConstraintMap_30;
#line 398 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__OverloadedSymbols_32;
#line 398 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__Globals_33;
#line 398 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__WarnLimit_34;
#line 398 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__ErrorLimit_35;
#line 398 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__TypeAssignSet_37;
#line 398 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__SubInfo_38;
#line 398 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_48_48;

#line 402 "typecheck_info.m"
    {
#line 402 "typecheck_info.m"
      mercury__term__context_init_1_p_0(&check_hlds__typecheck_info__Context_27);
    }
#line 403 "typecheck_info.m"
    {
#line 403 "typecheck_info.m"
      mercury__map__init_1_p_0((MR_Word) &check_hlds__typecheck_info_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, &check_hlds__typecheck_info__TypeBindings_28);
    }
#line 10821 "check_hlds.typecheck_info.c"
    check_hlds__typecheck_info__TypeCtorInfo_52_52 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
#line 404 "typecheck_info.m"
    {
#line 404 "typecheck_info.m"
      mercury__map__init_1_p_0(check_hlds__typecheck_info__TypeCtorInfo_52_52, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_proof_0, &check_hlds__typecheck_info__Proofs_29);
    }
#line 405 "typecheck_info.m"
    {
#line 405 "typecheck_info.m"
      mercury__map__init_1_p_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_id_0, check_hlds__typecheck_info__TypeCtorInfo_52_52, &check_hlds__typecheck_info__ConstraintMap_30);
    }
#line 407 "typecheck_info.m"
    {
#line 407 "typecheck_info.m"
      mercury__map__init_1_p_0((MR_Word) &check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_overloaded_symbol_0, (MR_Word) &check_hlds__typecheck_info_scalar_common_1[1], &check_hlds__typecheck_info__OverloadedSymbols_32);
    }
#line 408 "typecheck_info.m"
    {
#line 408 "typecheck_info.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__typecheck_info__ModuleInfo_13, &check_hlds__typecheck_info__Globals_33);
    }
#line 409 "typecheck_info.m"
    {
#line 409 "typecheck_info.m"
      libs__globals__lookup_int_option_3_p_0(check_hlds__typecheck_info__Globals_33, (MR_Integer) 655, &check_hlds__typecheck_info__WarnLimit_34);
    }
#line 411 "typecheck_info.m"
    {
#line 411 "typecheck_info.m"
      libs__globals__lookup_int_option_3_p_0(check_hlds__typecheck_info__Globals_33, (MR_Integer) 656, &check_hlds__typecheck_info__ErrorLimit_35);
    }
#line 414 "typecheck_info.m"
    {
#line 414 "typecheck_info.m"
      check_hlds__typecheck_info__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 414 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_48_48, 0) = ((MR_Box) (check_hlds__typecheck_info__VarTypes_18));
#line 414 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_48_48, 1) = ((MR_Box) (check_hlds__typecheck_info__TypeVarSet_16));
#line 414 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_48_48, 2) = ((MR_Box) (check_hlds__typecheck_info__HeadTypeParams_19));
#line 414 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_48_48, 3) = ((MR_Box) (check_hlds__typecheck_info__TypeBindings_28));
#line 414 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_48_48, 4) = ((MR_Box) (check_hlds__typecheck_info__Constraints_20));
#line 414 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_48_48, 5) = ((MR_Box) (check_hlds__typecheck_info__Proofs_29));
#line 414 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_48_48, 6) = ((MR_Box) (check_hlds__typecheck_info__ConstraintMap_30));
#line 414 "typecheck_info.m"
    }
#line 415 "typecheck_info.m"
    {
#line 415 "typecheck_info.m"
      check_hlds__typecheck_info__TypeAssignSet_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 415 "typecheck_info.m"
      MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__TypeAssignSet_37, 0) = ((MR_Box) (check_hlds__typecheck_info__V_48_48));
#line 415 "typecheck_info.m"
      MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__TypeAssignSet_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 415 "typecheck_info.m"
    }
#line 417 "typecheck_info.m"
    {
#line 417 "typecheck_info.m"
      check_hlds__typecheck_info__SubInfo_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 417 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__SubInfo_38, 0) = ((MR_Box) (check_hlds__typecheck_info__PredId_14));
#line 417 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__SubInfo_38, 1) = ((MR_Box) (check_hlds__typecheck_info__Status_21));
#line 417 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__SubInfo_38, 2) = ((MR_Box) (check_hlds__typecheck_info__PredMarkers_22));
#line 417 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__SubInfo_38, 3) = ((MR_Box) (check_hlds__typecheck_info__IsFieldAccessFunction_15));
#line 417 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__SubInfo_38, 4) = ((MR_Box) (check_hlds__typecheck_info__VarSet_17));
#line 417 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__SubInfo_38, 5) = ((MR_Box) (check_hlds__typecheck_info__NonOverloadErrors_23));
#line 417 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__SubInfo_38, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 417 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__SubInfo_38, 7) = ((MR_Box) (check_hlds__typecheck_info__OverloadedSymbols_32));
#line 417 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__SubInfo_38, 8) = ((MR_Box) (check_hlds__typecheck_info__ErrorLimit_35));
#line 417 "typecheck_info.m"
    }
#line 421 "typecheck_info.m"
    {
#line 421 "typecheck_info.m"
      MR_Word base;
#line 421 "typecheck_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 421 "typecheck_info.m"
      *check_hlds__typecheck_info__Info_24 = base;
#line 421 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__typecheck_info__SubInfo_38));
#line 421 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__typecheck_info__ModuleInfo_13));
#line 421 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (&check_hlds__typecheck_info_scalar_common_3[1]));
#line 421 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) ((MR_Integer) 0));
#line 421 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__typecheck_info__Context_27));
#line 421 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (&check_hlds__typecheck_info_scalar_common_1[17]));
#line 421 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__typecheck_info__TypeAssignSet_37));
#line 421 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__typecheck_info__WarnLimit_34));
#line 421 "typecheck_info.m"
    }
#line 398 "typecheck_info.m"
  }
#line 123 "typecheck_info.m"
}

void mercury__check_hlds__typecheck_info__init(void)
{
}

void mercury__check_hlds__typecheck_info__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_args_type_assign_0);
	MR_register_type_ctor_info(&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_args_type_assign_set_0);
	MR_register_type_ctor_info(&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_cons_type_info_0);
	MR_register_type_ctor_info(&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_cons_type_info_source_0);
	MR_register_type_ctor_info(&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_overloaded_symbol_0);
	MR_register_type_ctor_info(&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_overloaded_symbol_map_0);
	MR_register_type_ctor_info(&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_type_assign_0);
	MR_register_type_ctor_info(&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_type_assign_set_0);
	MR_register_type_ctor_info(&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_typecheck_info_0);
	MR_register_type_ctor_info(&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_typecheck_sub_info_0);
}

void mercury__check_hlds__typecheck_info__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module check_hlds.typecheck_info. */
